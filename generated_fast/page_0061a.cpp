#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5c3(u8* __restrict R,Cpu& c);
u32 body_5c5(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_60d(u8* __restrict R,Cpu& c);
u32 body_615(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x61a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x61a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_61a(u8* __restrict R,Cpu& c);
u32 page_61a(Cpu& c){return body_61a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_61a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x61a006:goto L61a006;
case 0x61a008:c.instructions+=45;goto B61a008;
case 0x61a00f:c.instructions+=44;goto B61a00f;
case 0x61a016:c.instructions+=43;goto B61a016;
case 0x61a018:c.instructions+=42;goto B61a018;
case 0x61a01f:c.instructions+=41;goto B61a01f;
case 0x61a026:c.instructions+=40;goto B61a026;
case 0x61a02d:c.instructions+=39;goto B61a02d;
case 0x61a034:c.instructions+=38;goto B61a034;
case 0x61a03b:c.instructions+=37;goto B61a03b;
case 0x61a03d:c.instructions+=36;goto B61a03d;
case 0x61a044:c.instructions+=35;goto B61a044;
case 0x61a04b:c.instructions+=34;goto B61a04b;
case 0x61a04d:c.instructions+=33;goto B61a04d;
case 0x61a054:c.instructions+=32;goto B61a054;
case 0x61a05b:c.instructions+=31;goto B61a05b;
case 0x61a05d:c.instructions+=30;goto B61a05d;
case 0x61a064:c.instructions+=29;goto B61a064;
case 0x61a06b:c.instructions+=28;goto B61a06b;
case 0x61a072:c.instructions+=27;goto B61a072;
case 0x61a079:c.instructions+=26;goto B61a079;
case 0x61a080:c.instructions+=25;goto B61a080;
case 0x61a082:c.instructions+=24;goto B61a082;
case 0x61a089:c.instructions+=23;goto B61a089;
case 0x61a090:c.instructions+=22;goto B61a090;
case 0x61a092:c.instructions+=21;goto B61a092;
case 0x61a099:c.instructions+=20;goto B61a099;
case 0x61a0a0:c.instructions+=19;goto B61a0a0;
case 0x61a0a2:c.instructions+=18;goto B61a0a2;
case 0x61a0a9:c.instructions+=17;goto B61a0a9;
case 0x61a0b0:c.instructions+=16;goto B61a0b0;
case 0x61a0b7:c.instructions+=15;goto B61a0b7;
case 0x61a0be:c.instructions+=14;goto B61a0be;
case 0x61a0c2:c.instructions+=13;goto B61a0c2;
case 0x61a0c9:c.instructions+=12;goto B61a0c9;
case 0x61a0ca:c.instructions+=11;goto B61a0ca;
case 0x61a0ce:c.instructions+=10;goto B61a0ce;
case 0x61a0cf:c.instructions+=9;goto B61a0cf;
case 0x61a0d1:c.instructions+=8;goto B61a0d1;
case 0x61a0d8:c.instructions+=7;goto B61a0d8;
case 0x61a0df:c.instructions+=6;goto B61a0df;
case 0x61a0e1:c.instructions+=5;goto B61a0e1;
case 0x61a0e8:c.instructions+=4;goto B61a0e8;
case 0x61a0ef:c.instructions+=3;goto B61a0ef;
case 0x61a0f1:c.instructions+=2;goto B61a0f1;
case 0x61a0f8:c.instructions+=1;goto B61a0f8;
case 0x61a0fd:goto L61a0fd;
case 0x61a101:c.instructions+=196;goto B61a101;
case 0x61a107:c.instructions+=195;goto B61a107;
case 0x61a10b:c.instructions+=194;goto B61a10b;
case 0x61a111:c.instructions+=193;goto B61a111;
case 0x61a113:c.instructions+=192;goto B61a113;
case 0x61a117:c.instructions+=191;goto B61a117;
case 0x61a11d:c.instructions+=190;goto B61a11d;
case 0x61a11f:c.instructions+=189;goto B61a11f;
case 0x61a123:c.instructions+=188;goto B61a123;
case 0x61a129:c.instructions+=187;goto B61a129;
case 0x61a12b:c.instructions+=186;goto B61a12b;
case 0x61a12f:c.instructions+=185;goto B61a12f;
case 0x61a133:c.instructions+=184;goto B61a133;
case 0x61a139:c.instructions+=183;goto B61a139;
case 0x61a13d:c.instructions+=182;goto B61a13d;
case 0x61a143:c.instructions+=181;goto B61a143;
case 0x61a145:c.instructions+=180;goto B61a145;
case 0x61a149:c.instructions+=179;goto B61a149;
case 0x61a14f:c.instructions+=178;goto B61a14f;
case 0x61a151:c.instructions+=177;goto B61a151;
case 0x61a155:c.instructions+=176;goto B61a155;
case 0x61a15b:c.instructions+=175;goto B61a15b;
case 0x61a15d:c.instructions+=174;goto B61a15d;
case 0x61a161:c.instructions+=173;goto B61a161;
case 0x61a165:c.instructions+=172;goto B61a165;
case 0x61a16b:c.instructions+=171;goto B61a16b;
case 0x61a16f:c.instructions+=170;goto B61a16f;
case 0x61a175:c.instructions+=169;goto B61a175;
case 0x61a177:c.instructions+=168;goto B61a177;
case 0x61a17b:c.instructions+=167;goto B61a17b;
case 0x61a181:c.instructions+=166;goto B61a181;
case 0x61a183:c.instructions+=165;goto B61a183;
case 0x61a187:c.instructions+=164;goto B61a187;
case 0x61a18d:c.instructions+=163;goto B61a18d;
case 0x61a18f:c.instructions+=162;goto B61a18f;
case 0x61a196:c.instructions+=161;goto B61a196;
case 0x61a19a:c.instructions+=160;goto B61a19a;
case 0x61a1a0:c.instructions+=159;goto B61a1a0;
case 0x61a1a4:c.instructions+=158;goto B61a1a4;
case 0x61a1aa:c.instructions+=157;goto B61a1aa;
case 0x61a1ac:c.instructions+=156;goto B61a1ac;
case 0x61a1b0:c.instructions+=155;goto B61a1b0;
case 0x61a1b6:c.instructions+=154;goto B61a1b6;
case 0x61a1b8:c.instructions+=153;goto B61a1b8;
case 0x61a1bc:c.instructions+=152;goto B61a1bc;
case 0x61a1c2:c.instructions+=151;goto B61a1c2;
case 0x61a1c4:c.instructions+=150;goto B61a1c4;
case 0x61a1cb:c.instructions+=149;goto B61a1cb;
case 0x61a1cf:c.instructions+=148;goto B61a1cf;
case 0x61a1d5:c.instructions+=147;goto B61a1d5;
case 0x61a1d9:c.instructions+=146;goto B61a1d9;
case 0x61a1df:c.instructions+=145;goto B61a1df;
case 0x61a1e1:c.instructions+=144;goto B61a1e1;
case 0x61a1e5:c.instructions+=143;goto B61a1e5;
case 0x61a1eb:c.instructions+=142;goto B61a1eb;
case 0x61a1ed:c.instructions+=141;goto B61a1ed;
case 0x61a1f1:c.instructions+=140;goto B61a1f1;
case 0x61a1f7:c.instructions+=139;goto B61a1f7;
case 0x61a1f9:c.instructions+=138;goto B61a1f9;
case 0x61a200:c.instructions+=137;goto B61a200;
case 0x61a204:c.instructions+=136;goto B61a204;
case 0x61a20a:c.instructions+=135;goto B61a20a;
case 0x61a20e:c.instructions+=134;goto B61a20e;
case 0x61a214:c.instructions+=133;goto B61a214;
case 0x61a216:c.instructions+=132;goto B61a216;
case 0x61a21a:c.instructions+=131;goto B61a21a;
case 0x61a220:c.instructions+=130;goto B61a220;
case 0x61a222:c.instructions+=129;goto B61a222;
case 0x61a226:c.instructions+=128;goto B61a226;
case 0x61a22c:c.instructions+=127;goto B61a22c;
case 0x61a22e:c.instructions+=126;goto B61a22e;
case 0x61a235:c.instructions+=125;goto B61a235;
case 0x61a239:c.instructions+=124;goto B61a239;
case 0x61a23f:c.instructions+=123;goto B61a23f;
case 0x61a243:c.instructions+=122;goto B61a243;
case 0x61a249:c.instructions+=121;goto B61a249;
case 0x61a24b:c.instructions+=120;goto B61a24b;
case 0x61a24f:c.instructions+=119;goto B61a24f;
case 0x61a255:c.instructions+=118;goto B61a255;
case 0x61a257:c.instructions+=117;goto B61a257;
case 0x61a25b:c.instructions+=116;goto B61a25b;
case 0x61a261:c.instructions+=115;goto B61a261;
case 0x61a263:c.instructions+=114;goto B61a263;
case 0x61a26a:c.instructions+=113;goto B61a26a;
case 0x61a26e:c.instructions+=112;goto B61a26e;
case 0x61a274:c.instructions+=111;goto B61a274;
case 0x61a278:c.instructions+=110;goto B61a278;
case 0x61a27e:c.instructions+=109;goto B61a27e;
case 0x61a280:c.instructions+=108;goto B61a280;
case 0x61a284:c.instructions+=107;goto B61a284;
case 0x61a28a:c.instructions+=106;goto B61a28a;
case 0x61a28c:c.instructions+=105;goto B61a28c;
case 0x61a290:c.instructions+=104;goto B61a290;
case 0x61a296:c.instructions+=103;goto B61a296;
case 0x61a298:c.instructions+=102;goto B61a298;
case 0x61a29f:c.instructions+=101;goto B61a29f;
case 0x61a2a3:c.instructions+=100;goto B61a2a3;
case 0x61a2a9:c.instructions+=99;goto B61a2a9;
case 0x61a2ad:c.instructions+=98;goto B61a2ad;
case 0x61a2b3:c.instructions+=97;goto B61a2b3;
case 0x61a2b5:c.instructions+=96;goto B61a2b5;
case 0x61a2b9:c.instructions+=95;goto B61a2b9;
case 0x61a2bf:c.instructions+=94;goto B61a2bf;
case 0x61a2c1:c.instructions+=93;goto B61a2c1;
case 0x61a2c5:c.instructions+=92;goto B61a2c5;
case 0x61a2cb:c.instructions+=91;goto B61a2cb;
case 0x61a2cd:c.instructions+=90;goto B61a2cd;
case 0x61a2d4:c.instructions+=89;goto B61a2d4;
case 0x61a2d8:c.instructions+=88;goto B61a2d8;
case 0x61a2de:c.instructions+=87;goto B61a2de;
case 0x61a2e2:c.instructions+=86;goto B61a2e2;
case 0x61a2e8:c.instructions+=85;goto B61a2e8;
case 0x61a2ea:c.instructions+=84;goto B61a2ea;
case 0x61a2ee:c.instructions+=83;goto B61a2ee;
case 0x61a2f4:c.instructions+=82;goto B61a2f4;
case 0x61a2f6:c.instructions+=81;goto B61a2f6;
case 0x61a2fa:c.instructions+=80;goto B61a2fa;
case 0x61a300:c.instructions+=79;goto B61a300;
case 0x61a302:c.instructions+=78;goto B61a302;
case 0x61a309:c.instructions+=77;goto B61a309;
case 0x61a30d:c.instructions+=76;goto B61a30d;
case 0x61a313:c.instructions+=75;goto B61a313;
case 0x61a317:c.instructions+=74;goto B61a317;
case 0x61a31d:c.instructions+=73;goto B61a31d;
case 0x61a31f:c.instructions+=72;goto B61a31f;
case 0x61a323:c.instructions+=71;goto B61a323;
case 0x61a329:c.instructions+=70;goto B61a329;
case 0x61a32b:c.instructions+=69;goto B61a32b;
case 0x61a32f:c.instructions+=68;goto B61a32f;
case 0x61a335:c.instructions+=67;goto B61a335;
case 0x61a337:c.instructions+=66;goto B61a337;
case 0x61a33e:c.instructions+=65;goto B61a33e;
case 0x61a342:c.instructions+=64;goto B61a342;
case 0x61a348:c.instructions+=63;goto B61a348;
case 0x61a34c:c.instructions+=62;goto B61a34c;
case 0x61a352:c.instructions+=61;goto B61a352;
case 0x61a354:c.instructions+=60;goto B61a354;
case 0x61a358:c.instructions+=59;goto B61a358;
case 0x61a35e:c.instructions+=58;goto B61a35e;
case 0x61a360:c.instructions+=57;goto B61a360;
case 0x61a364:c.instructions+=56;goto B61a364;
case 0x61a36a:c.instructions+=55;goto B61a36a;
case 0x61a36c:c.instructions+=54;goto B61a36c;
case 0x61a373:c.instructions+=53;goto B61a373;
case 0x61a377:c.instructions+=52;goto B61a377;
case 0x61a37d:c.instructions+=51;goto B61a37d;
case 0x61a381:c.instructions+=50;goto B61a381;
case 0x61a387:c.instructions+=49;goto B61a387;
case 0x61a389:c.instructions+=48;goto B61a389;
case 0x61a38d:c.instructions+=47;goto B61a38d;
case 0x61a393:c.instructions+=46;goto B61a393;
case 0x61a395:c.instructions+=45;goto B61a395;
case 0x61a399:c.instructions+=44;goto B61a399;
case 0x61a39f:c.instructions+=43;goto B61a39f;
case 0x61a3a1:c.instructions+=42;goto B61a3a1;
case 0x61a3a8:c.instructions+=41;goto B61a3a8;
case 0x61a3ac:c.instructions+=40;goto B61a3ac;
case 0x61a3b2:c.instructions+=39;goto B61a3b2;
case 0x61a3b6:c.instructions+=38;goto B61a3b6;
case 0x61a3bc:c.instructions+=37;goto B61a3bc;
case 0x61a3be:c.instructions+=36;goto B61a3be;
case 0x61a3c2:c.instructions+=35;goto B61a3c2;
case 0x61a3c8:c.instructions+=34;goto B61a3c8;
case 0x61a3ca:c.instructions+=33;goto B61a3ca;
case 0x61a3ce:c.instructions+=32;goto B61a3ce;
case 0x61a3d4:c.instructions+=31;goto B61a3d4;
case 0x61a3d6:c.instructions+=30;goto B61a3d6;
case 0x61a3dd:c.instructions+=29;goto B61a3dd;
case 0x61a3e1:c.instructions+=28;goto B61a3e1;
case 0x61a3e7:c.instructions+=27;goto B61a3e7;
case 0x61a3eb:c.instructions+=26;goto B61a3eb;
case 0x61a3ef:c.instructions+=25;goto B61a3ef;
case 0x61a3f0:c.instructions+=24;goto B61a3f0;
case 0x61a3f6:c.instructions+=23;goto B61a3f6;
case 0x61a3fa:c.instructions+=22;goto B61a3fa;
case 0x61a3fb:c.instructions+=21;goto B61a3fb;
case 0x61a3fd:c.instructions+=20;goto B61a3fd;
case 0x61a401:c.instructions+=19;goto B61a401;
case 0x61a407:c.instructions+=18;goto B61a407;
case 0x61a409:c.instructions+=17;goto B61a409;
case 0x61a40d:c.instructions+=16;goto B61a40d;
case 0x61a413:c.instructions+=15;goto B61a413;
case 0x61a415:c.instructions+=14;goto B61a415;
case 0x61a41c:c.instructions+=13;goto B61a41c;
case 0x61a420:c.instructions+=12;goto B61a420;
case 0x61a426:c.instructions+=11;goto B61a426;
case 0x61a42a:c.instructions+=10;goto B61a42a;
case 0x61a430:c.instructions+=9;goto B61a430;
case 0x61a432:c.instructions+=8;goto B61a432;
case 0x61a436:c.instructions+=7;goto B61a436;
case 0x61a43c:c.instructions+=6;goto B61a43c;
case 0x61a43e:c.instructions+=5;goto B61a43e;
case 0x61a442:c.instructions+=4;goto B61a442;
case 0x61a448:c.instructions+=3;goto B61a448;
case 0x61a44a:c.instructions+=2;goto B61a44a;
case 0x61a451:c.instructions+=1;goto B61a451;
case 0x61a456:goto L61a456;
case 0x61a45d:c.instructions+=196;goto B61a45d;
case 0x61a461:c.instructions+=195;goto B61a461;
case 0x61a468:c.instructions+=194;goto B61a468;
case 0x61a46c:c.instructions+=193;goto B61a46c;
case 0x61a46e:c.instructions+=192;goto B61a46e;
case 0x61a475:c.instructions+=191;goto B61a475;
case 0x61a479:c.instructions+=190;goto B61a479;
case 0x61a47b:c.instructions+=189;goto B61a47b;
case 0x61a482:c.instructions+=188;goto B61a482;
case 0x61a486:c.instructions+=187;goto B61a486;
case 0x61a488:c.instructions+=186;goto B61a488;
case 0x61a48f:c.instructions+=185;goto B61a48f;
case 0x61a496:c.instructions+=184;goto B61a496;
case 0x61a49a:c.instructions+=183;goto B61a49a;
case 0x61a4a1:c.instructions+=182;goto B61a4a1;
case 0x61a4a5:c.instructions+=181;goto B61a4a5;
case 0x61a4a7:c.instructions+=180;goto B61a4a7;
case 0x61a4ae:c.instructions+=179;goto B61a4ae;
case 0x61a4b2:c.instructions+=178;goto B61a4b2;
case 0x61a4b4:c.instructions+=177;goto B61a4b4;
case 0x61a4bb:c.instructions+=176;goto B61a4bb;
case 0x61a4bf:c.instructions+=175;goto B61a4bf;
case 0x61a4c1:c.instructions+=174;goto B61a4c1;
case 0x61a4c8:c.instructions+=173;goto B61a4c8;
case 0x61a4cf:c.instructions+=172;goto B61a4cf;
case 0x61a4d3:c.instructions+=171;goto B61a4d3;
case 0x61a4da:c.instructions+=170;goto B61a4da;
case 0x61a4de:c.instructions+=169;goto B61a4de;
case 0x61a4e0:c.instructions+=168;goto B61a4e0;
case 0x61a4e7:c.instructions+=167;goto B61a4e7;
case 0x61a4eb:c.instructions+=166;goto B61a4eb;
case 0x61a4ed:c.instructions+=165;goto B61a4ed;
case 0x61a4f4:c.instructions+=164;goto B61a4f4;
case 0x61a4f8:c.instructions+=163;goto B61a4f8;
case 0x61a4fa:c.instructions+=162;goto B61a4fa;
case 0x61a501:c.instructions+=161;goto B61a501;
case 0x61a508:c.instructions+=160;goto B61a508;
case 0x61a50c:c.instructions+=159;goto B61a50c;
case 0x61a513:c.instructions+=158;goto B61a513;
case 0x61a517:c.instructions+=157;goto B61a517;
case 0x61a519:c.instructions+=156;goto B61a519;
case 0x61a520:c.instructions+=155;goto B61a520;
case 0x61a524:c.instructions+=154;goto B61a524;
case 0x61a526:c.instructions+=153;goto B61a526;
case 0x61a52d:c.instructions+=152;goto B61a52d;
case 0x61a531:c.instructions+=151;goto B61a531;
case 0x61a533:c.instructions+=150;goto B61a533;
case 0x61a53a:c.instructions+=149;goto B61a53a;
case 0x61a541:c.instructions+=148;goto B61a541;
case 0x61a545:c.instructions+=147;goto B61a545;
case 0x61a54c:c.instructions+=146;goto B61a54c;
case 0x61a550:c.instructions+=145;goto B61a550;
case 0x61a552:c.instructions+=144;goto B61a552;
case 0x61a559:c.instructions+=143;goto B61a559;
case 0x61a55d:c.instructions+=142;goto B61a55d;
case 0x61a55f:c.instructions+=141;goto B61a55f;
case 0x61a566:c.instructions+=140;goto B61a566;
case 0x61a56a:c.instructions+=139;goto B61a56a;
case 0x61a56c:c.instructions+=138;goto B61a56c;
case 0x61a573:c.instructions+=137;goto B61a573;
case 0x61a57a:c.instructions+=136;goto B61a57a;
case 0x61a57e:c.instructions+=135;goto B61a57e;
case 0x61a585:c.instructions+=134;goto B61a585;
case 0x61a589:c.instructions+=133;goto B61a589;
case 0x61a58b:c.instructions+=132;goto B61a58b;
case 0x61a592:c.instructions+=131;goto B61a592;
case 0x61a596:c.instructions+=130;goto B61a596;
case 0x61a598:c.instructions+=129;goto B61a598;
case 0x61a59f:c.instructions+=128;goto B61a59f;
case 0x61a5a3:c.instructions+=127;goto B61a5a3;
case 0x61a5a5:c.instructions+=126;goto B61a5a5;
case 0x61a5ac:c.instructions+=125;goto B61a5ac;
case 0x61a5b3:c.instructions+=124;goto B61a5b3;
case 0x61a5b7:c.instructions+=123;goto B61a5b7;
case 0x61a5be:c.instructions+=122;goto B61a5be;
case 0x61a5c2:c.instructions+=121;goto B61a5c2;
case 0x61a5c4:c.instructions+=120;goto B61a5c4;
case 0x61a5cb:c.instructions+=119;goto B61a5cb;
case 0x61a5cf:c.instructions+=118;goto B61a5cf;
case 0x61a5d1:c.instructions+=117;goto B61a5d1;
case 0x61a5d8:c.instructions+=116;goto B61a5d8;
case 0x61a5dc:c.instructions+=115;goto B61a5dc;
case 0x61a5de:c.instructions+=114;goto B61a5de;
case 0x61a5e5:c.instructions+=113;goto B61a5e5;
case 0x61a5ec:c.instructions+=112;goto B61a5ec;
case 0x61a5f0:c.instructions+=111;goto B61a5f0;
case 0x61a5f7:c.instructions+=110;goto B61a5f7;
case 0x61a5fb:c.instructions+=109;goto B61a5fb;
case 0x61a5fd:c.instructions+=108;goto B61a5fd;
case 0x61a604:c.instructions+=107;goto B61a604;
case 0x61a608:c.instructions+=106;goto B61a608;
case 0x61a60a:c.instructions+=105;goto B61a60a;
case 0x61a611:c.instructions+=104;goto B61a611;
case 0x61a615:c.instructions+=103;goto B61a615;
case 0x61a617:c.instructions+=102;goto B61a617;
case 0x61a61e:c.instructions+=101;goto B61a61e;
case 0x61a625:c.instructions+=100;goto B61a625;
case 0x61a629:c.instructions+=99;goto B61a629;
case 0x61a630:c.instructions+=98;goto B61a630;
case 0x61a634:c.instructions+=97;goto B61a634;
case 0x61a636:c.instructions+=96;goto B61a636;
case 0x61a63d:c.instructions+=95;goto B61a63d;
case 0x61a641:c.instructions+=94;goto B61a641;
case 0x61a643:c.instructions+=93;goto B61a643;
case 0x61a64a:c.instructions+=92;goto B61a64a;
case 0x61a64e:c.instructions+=91;goto B61a64e;
case 0x61a650:c.instructions+=90;goto B61a650;
case 0x61a657:c.instructions+=89;goto B61a657;
case 0x61a65e:c.instructions+=88;goto B61a65e;
case 0x61a662:c.instructions+=87;goto B61a662;
case 0x61a669:c.instructions+=86;goto B61a669;
case 0x61a66d:c.instructions+=85;goto B61a66d;
case 0x61a66f:c.instructions+=84;goto B61a66f;
case 0x61a676:c.instructions+=83;goto B61a676;
case 0x61a67a:c.instructions+=82;goto B61a67a;
case 0x61a67c:c.instructions+=81;goto B61a67c;
case 0x61a683:c.instructions+=80;goto B61a683;
case 0x61a687:c.instructions+=79;goto B61a687;
case 0x61a689:c.instructions+=78;goto B61a689;
case 0x61a690:c.instructions+=77;goto B61a690;
case 0x61a697:c.instructions+=76;goto B61a697;
case 0x61a69b:c.instructions+=75;goto B61a69b;
case 0x61a6a2:c.instructions+=74;goto B61a6a2;
case 0x61a6a6:c.instructions+=73;goto B61a6a6;
case 0x61a6a8:c.instructions+=72;goto B61a6a8;
case 0x61a6af:c.instructions+=71;goto B61a6af;
case 0x61a6b3:c.instructions+=70;goto B61a6b3;
case 0x61a6b5:c.instructions+=69;goto B61a6b5;
case 0x61a6bc:c.instructions+=68;goto B61a6bc;
case 0x61a6c0:c.instructions+=67;goto B61a6c0;
case 0x61a6c2:c.instructions+=66;goto B61a6c2;
case 0x61a6c9:c.instructions+=65;goto B61a6c9;
case 0x61a6d0:c.instructions+=64;goto B61a6d0;
case 0x61a6d4:c.instructions+=63;goto B61a6d4;
case 0x61a6db:c.instructions+=62;goto B61a6db;
case 0x61a6df:c.instructions+=61;goto B61a6df;
case 0x61a6e1:c.instructions+=60;goto B61a6e1;
case 0x61a6e8:c.instructions+=59;goto B61a6e8;
case 0x61a6ec:c.instructions+=58;goto B61a6ec;
case 0x61a6ee:c.instructions+=57;goto B61a6ee;
case 0x61a6f5:c.instructions+=56;goto B61a6f5;
case 0x61a6f9:c.instructions+=55;goto B61a6f9;
case 0x61a6fb:c.instructions+=54;goto B61a6fb;
case 0x61a702:c.instructions+=53;goto B61a702;
case 0x61a709:c.instructions+=52;goto B61a709;
case 0x61a70d:c.instructions+=51;goto B61a70d;
case 0x61a714:c.instructions+=50;goto B61a714;
case 0x61a718:c.instructions+=49;goto B61a718;
case 0x61a71a:c.instructions+=48;goto B61a71a;
case 0x61a721:c.instructions+=47;goto B61a721;
case 0x61a725:c.instructions+=46;goto B61a725;
case 0x61a727:c.instructions+=45;goto B61a727;
case 0x61a72e:c.instructions+=44;goto B61a72e;
case 0x61a732:c.instructions+=43;goto B61a732;
case 0x61a734:c.instructions+=42;goto B61a734;
case 0x61a73b:c.instructions+=41;goto B61a73b;
case 0x61a742:c.instructions+=40;goto B61a742;
case 0x61a749:c.instructions+=39;goto B61a749;
case 0x61a74a:c.instructions+=38;goto B61a74a;
case 0x61a74e:c.instructions+=37;goto B61a74e;
case 0x61a752:c.instructions+=36;goto B61a752;
case 0x61a759:c.instructions+=35;goto B61a759;
case 0x61a75a:c.instructions+=34;goto B61a75a;
case 0x61a75e:c.instructions+=33;goto B61a75e;
case 0x61a760:c.instructions+=32;goto B61a760;
case 0x61a767:c.instructions+=31;goto B61a767;
case 0x61a76b:c.instructions+=30;goto B61a76b;
case 0x61a76d:c.instructions+=29;goto B61a76d;
case 0x61a774:c.instructions+=28;goto B61a774;
case 0x61a778:c.instructions+=27;goto B61a778;
case 0x61a77a:c.instructions+=26;goto B61a77a;
case 0x61a781:c.instructions+=25;goto B61a781;
case 0x61a788:c.instructions+=24;goto B61a788;
case 0x61a78c:c.instructions+=23;goto B61a78c;
case 0x61a793:c.instructions+=22;goto B61a793;
case 0x61a797:c.instructions+=21;goto B61a797;
case 0x61a799:c.instructions+=20;goto B61a799;
case 0x61a7a0:c.instructions+=19;goto B61a7a0;
case 0x61a7a4:c.instructions+=18;goto B61a7a4;
case 0x61a7a6:c.instructions+=17;goto B61a7a6;
case 0x61a7ad:c.instructions+=16;goto B61a7ad;
case 0x61a7b1:c.instructions+=15;goto B61a7b1;
case 0x61a7b3:c.instructions+=14;goto B61a7b3;
case 0x61a7ba:c.instructions+=13;goto B61a7ba;
case 0x61a7c1:c.instructions+=12;goto B61a7c1;
case 0x61a7c5:c.instructions+=11;goto B61a7c5;
case 0x61a7cc:c.instructions+=10;goto B61a7cc;
case 0x61a7d0:c.instructions+=9;goto B61a7d0;
case 0x61a7d2:c.instructions+=8;goto B61a7d2;
case 0x61a7d9:c.instructions+=7;goto B61a7d9;
case 0x61a7dd:c.instructions+=6;goto B61a7dd;
case 0x61a7df:c.instructions+=5;goto B61a7df;
case 0x61a7e6:c.instructions+=4;goto B61a7e6;
case 0x61a7ea:c.instructions+=3;goto B61a7ea;
case 0x61a7ec:c.instructions+=2;goto B61a7ec;
case 0x61a7f3:c.instructions+=1;goto B61a7f3;
case 0x61a7f8:goto L61a7f8;
case 0x61a7fc:c.instructions+=197;goto B61a7fc;
case 0x61a7fe:c.instructions+=196;goto B61a7fe;
case 0x61a802:c.instructions+=195;goto B61a802;
case 0x61a805:c.instructions+=194;goto B61a805;
case 0x61a807:c.instructions+=193;goto B61a807;
case 0x61a80b:c.instructions+=192;goto B61a80b;
case 0x61a80e:c.instructions+=191;goto B61a80e;
case 0x61a810:c.instructions+=190;goto B61a810;
case 0x61a814:c.instructions+=189;goto B61a814;
case 0x61a817:c.instructions+=188;goto B61a817;
case 0x61a819:c.instructions+=187;goto B61a819;
case 0x61a820:c.instructions+=186;goto B61a820;
case 0x61a824:c.instructions+=185;goto B61a824;
case 0x61a827:c.instructions+=184;goto B61a827;
case 0x61a82b:c.instructions+=183;goto B61a82b;
case 0x61a82e:c.instructions+=182;goto B61a82e;
case 0x61a830:c.instructions+=181;goto B61a830;
case 0x61a834:c.instructions+=180;goto B61a834;
case 0x61a837:c.instructions+=179;goto B61a837;
case 0x61a839:c.instructions+=178;goto B61a839;
case 0x61a83d:c.instructions+=177;goto B61a83d;
case 0x61a840:c.instructions+=176;goto B61a840;
case 0x61a842:c.instructions+=175;goto B61a842;
case 0x61a849:c.instructions+=174;goto B61a849;
case 0x61a84d:c.instructions+=173;goto B61a84d;
case 0x61a850:c.instructions+=172;goto B61a850;
case 0x61a854:c.instructions+=171;goto B61a854;
case 0x61a857:c.instructions+=170;goto B61a857;
case 0x61a859:c.instructions+=169;goto B61a859;
case 0x61a85d:c.instructions+=168;goto B61a85d;
case 0x61a860:c.instructions+=167;goto B61a860;
case 0x61a862:c.instructions+=166;goto B61a862;
case 0x61a866:c.instructions+=165;goto B61a866;
case 0x61a869:c.instructions+=164;goto B61a869;
case 0x61a86b:c.instructions+=163;goto B61a86b;
case 0x61a872:c.instructions+=162;goto B61a872;
case 0x61a876:c.instructions+=161;goto B61a876;
case 0x61a879:c.instructions+=160;goto B61a879;
case 0x61a87d:c.instructions+=159;goto B61a87d;
case 0x61a880:c.instructions+=158;goto B61a880;
case 0x61a882:c.instructions+=157;goto B61a882;
case 0x61a886:c.instructions+=156;goto B61a886;
case 0x61a889:c.instructions+=155;goto B61a889;
case 0x61a88b:c.instructions+=154;goto B61a88b;
case 0x61a88f:c.instructions+=153;goto B61a88f;
case 0x61a892:c.instructions+=152;goto B61a892;
case 0x61a894:c.instructions+=151;goto B61a894;
case 0x61a89b:c.instructions+=150;goto B61a89b;
case 0x61a89f:c.instructions+=149;goto B61a89f;
case 0x61a8a2:c.instructions+=148;goto B61a8a2;
case 0x61a8a6:c.instructions+=147;goto B61a8a6;
case 0x61a8a8:c.instructions+=146;goto B61a8a8;
case 0x61a8aa:c.instructions+=145;goto B61a8aa;
case 0x61a8ae:c.instructions+=144;goto B61a8ae;
case 0x61a8b1:c.instructions+=143;goto B61a8b1;
case 0x61a8b3:c.instructions+=142;goto B61a8b3;
case 0x61a8b7:c.instructions+=141;goto B61a8b7;
case 0x61a8ba:c.instructions+=140;goto B61a8ba;
case 0x61a8bc:c.instructions+=139;goto B61a8bc;
case 0x61a8c3:c.instructions+=138;goto B61a8c3;
case 0x61a8c7:c.instructions+=137;goto B61a8c7;
case 0x61a8ca:c.instructions+=136;goto B61a8ca;
case 0x61a8ce:c.instructions+=135;goto B61a8ce;
case 0x61a8d1:c.instructions+=134;goto B61a8d1;
case 0x61a8d3:c.instructions+=133;goto B61a8d3;
case 0x61a8d7:c.instructions+=132;goto B61a8d7;
case 0x61a8da:c.instructions+=131;goto B61a8da;
case 0x61a8dc:c.instructions+=130;goto B61a8dc;
case 0x61a8e0:c.instructions+=129;goto B61a8e0;
case 0x61a8e3:c.instructions+=128;goto B61a8e3;
case 0x61a8e5:c.instructions+=127;goto B61a8e5;
case 0x61a8ec:c.instructions+=126;goto B61a8ec;
case 0x61a8f0:c.instructions+=125;goto B61a8f0;
case 0x61a8f3:c.instructions+=124;goto B61a8f3;
case 0x61a8f7:c.instructions+=123;goto B61a8f7;
case 0x61a8fa:c.instructions+=122;goto B61a8fa;
case 0x61a8fc:c.instructions+=121;goto B61a8fc;
case 0x61a900:c.instructions+=120;goto B61a900;
case 0x61a903:c.instructions+=119;goto B61a903;
case 0x61a905:c.instructions+=118;goto B61a905;
case 0x61a909:c.instructions+=117;goto B61a909;
case 0x61a90c:c.instructions+=116;goto B61a90c;
case 0x61a90e:c.instructions+=115;goto B61a90e;
case 0x61a915:c.instructions+=114;goto B61a915;
case 0x61a919:c.instructions+=113;goto B61a919;
case 0x61a91c:c.instructions+=112;goto B61a91c;
case 0x61a920:c.instructions+=111;goto B61a920;
case 0x61a923:c.instructions+=110;goto B61a923;
case 0x61a925:c.instructions+=109;goto B61a925;
case 0x61a929:c.instructions+=108;goto B61a929;
case 0x61a92c:c.instructions+=107;goto B61a92c;
case 0x61a92e:c.instructions+=106;goto B61a92e;
case 0x61a932:c.instructions+=105;goto B61a932;
case 0x61a935:c.instructions+=104;goto B61a935;
case 0x61a937:c.instructions+=103;goto B61a937;
case 0x61a93e:c.instructions+=102;goto B61a93e;
case 0x61a942:c.instructions+=101;goto B61a942;
case 0x61a945:c.instructions+=100;goto B61a945;
case 0x61a949:c.instructions+=99;goto B61a949;
case 0x61a94b:c.instructions+=98;goto B61a94b;
case 0x61a94d:c.instructions+=97;goto B61a94d;
case 0x61a951:c.instructions+=96;goto B61a951;
case 0x61a954:c.instructions+=95;goto B61a954;
case 0x61a956:c.instructions+=94;goto B61a956;
case 0x61a95a:c.instructions+=93;goto B61a95a;
case 0x61a95d:c.instructions+=92;goto B61a95d;
case 0x61a95f:c.instructions+=91;goto B61a95f;
case 0x61a966:c.instructions+=90;goto B61a966;
case 0x61a96a:c.instructions+=89;goto B61a96a;
case 0x61a96d:c.instructions+=88;goto B61a96d;
case 0x61a971:c.instructions+=87;goto B61a971;
case 0x61a974:c.instructions+=86;goto B61a974;
case 0x61a976:c.instructions+=85;goto B61a976;
case 0x61a97a:c.instructions+=84;goto B61a97a;
case 0x61a97d:c.instructions+=83;goto B61a97d;
case 0x61a97f:c.instructions+=82;goto B61a97f;
case 0x61a983:c.instructions+=81;goto B61a983;
case 0x61a986:c.instructions+=80;goto B61a986;
case 0x61a988:c.instructions+=79;goto B61a988;
case 0x61a98f:c.instructions+=78;goto B61a98f;
case 0x61a993:c.instructions+=77;goto B61a993;
case 0x61a996:c.instructions+=76;goto B61a996;
case 0x61a99a:c.instructions+=75;goto B61a99a;
case 0x61a99d:c.instructions+=74;goto B61a99d;
case 0x61a99f:c.instructions+=73;goto B61a99f;
case 0x61a9a3:c.instructions+=72;goto B61a9a3;
case 0x61a9a6:c.instructions+=71;goto B61a9a6;
case 0x61a9a8:c.instructions+=70;goto B61a9a8;
case 0x61a9ac:c.instructions+=69;goto B61a9ac;
case 0x61a9af:c.instructions+=68;goto B61a9af;
case 0x61a9b1:c.instructions+=67;goto B61a9b1;
case 0x61a9b8:c.instructions+=66;goto B61a9b8;
case 0x61a9bc:c.instructions+=65;goto B61a9bc;
case 0x61a9bf:c.instructions+=64;goto B61a9bf;
case 0x61a9c3:c.instructions+=63;goto B61a9c3;
case 0x61a9c6:c.instructions+=62;goto B61a9c6;
case 0x61a9c8:c.instructions+=61;goto B61a9c8;
case 0x61a9cc:c.instructions+=60;goto B61a9cc;
case 0x61a9cf:c.instructions+=59;goto B61a9cf;
case 0x61a9d1:c.instructions+=58;goto B61a9d1;
case 0x61a9d5:c.instructions+=57;goto B61a9d5;
case 0x61a9d8:c.instructions+=56;goto B61a9d8;
case 0x61a9da:c.instructions+=55;goto B61a9da;
case 0x61a9de:c.instructions+=54;goto B61a9de;
case 0x61a9e5:c.instructions+=53;goto B61a9e5;
case 0x61a9ec:c.instructions+=52;goto B61a9ec;
case 0x61a9ed:c.instructions+=51;goto B61a9ed;
case 0x61a9f1:c.instructions+=50;goto B61a9f1;
case 0x61a9f7:c.instructions+=49;goto B61a9f7;
case 0x61a9fa:c.instructions+=48;goto B61a9fa;
case 0x61a9fb:c.instructions+=47;goto B61a9fb;
case 0x61a9ff:c.instructions+=46;goto B61a9ff;
case 0x61aa01:c.instructions+=45;goto B61aa01;
case 0x61aa03:c.instructions+=44;goto B61aa03;
case 0x61aa07:c.instructions+=43;goto B61aa07;
case 0x61aa0a:c.instructions+=42;goto B61aa0a;
case 0x61aa0c:c.instructions+=41;goto B61aa0c;
case 0x61aa10:c.instructions+=40;goto B61aa10;
case 0x61aa13:c.instructions+=39;goto B61aa13;
case 0x61aa15:c.instructions+=38;goto B61aa15;
case 0x61aa1c:c.instructions+=37;goto B61aa1c;
case 0x61aa20:c.instructions+=36;goto B61aa20;
case 0x61aa23:c.instructions+=35;goto B61aa23;
case 0x61aa27:c.instructions+=34;goto B61aa27;
case 0x61aa2a:c.instructions+=33;goto B61aa2a;
case 0x61aa2c:c.instructions+=32;goto B61aa2c;
case 0x61aa30:c.instructions+=31;goto B61aa30;
case 0x61aa33:c.instructions+=30;goto B61aa33;
case 0x61aa35:c.instructions+=29;goto B61aa35;
case 0x61aa39:c.instructions+=28;goto B61aa39;
case 0x61aa3c:c.instructions+=27;goto B61aa3c;
case 0x61aa3e:c.instructions+=26;goto B61aa3e;
case 0x61aa45:c.instructions+=25;goto B61aa45;
case 0x61aa49:c.instructions+=24;goto B61aa49;
case 0x61aa4c:c.instructions+=23;goto B61aa4c;
case 0x61aa50:c.instructions+=22;goto B61aa50;
case 0x61aa53:c.instructions+=21;goto B61aa53;
case 0x61aa55:c.instructions+=20;goto B61aa55;
case 0x61aa59:c.instructions+=19;goto B61aa59;
case 0x61aa5c:c.instructions+=18;goto B61aa5c;
case 0x61aa5e:c.instructions+=17;goto B61aa5e;
case 0x61aa62:c.instructions+=16;goto B61aa62;
case 0x61aa65:c.instructions+=15;goto B61aa65;
case 0x61aa67:c.instructions+=14;goto B61aa67;
case 0x61aa6e:c.instructions+=13;goto B61aa6e;
case 0x61aa72:c.instructions+=12;goto B61aa72;
case 0x61aa75:c.instructions+=11;goto B61aa75;
case 0x61aa79:c.instructions+=10;goto B61aa79;
case 0x61aa7c:c.instructions+=9;goto B61aa7c;
case 0x61aa7e:c.instructions+=8;goto B61aa7e;
case 0x61aa82:c.instructions+=7;goto B61aa82;
case 0x61aa85:c.instructions+=6;goto B61aa85;
case 0x61aa87:c.instructions+=5;goto B61aa87;
case 0x61aa8b:c.instructions+=4;goto B61aa8b;
case 0x61aa8e:c.instructions+=3;goto B61aa8e;
case 0x61aa90:c.instructions+=2;goto B61aa90;
case 0x61aa97:c.instructions+=1;goto B61aa97;
case 0x61aa9c:goto L61aa9c;
case 0x61aa9f:c.instructions+=11;goto B61aa9f;
case 0x61aaa3:c.instructions+=10;goto B61aaa3;
case 0x61aaaa:c.instructions+=9;goto B61aaaa;
case 0x61aaab:c.instructions+=8;goto B61aaab;
case 0x61aaac:c.instructions+=7;goto B61aaac;
case 0x61aab3:c.instructions+=6;goto B61aab3;
case 0x61aab9:c.instructions+=5;goto B61aab9;
case 0x61aaba:c.instructions+=4;goto B61aaba;
case 0x61aabf:c.instructions+=3;goto B61aabf;
case 0x61aac0:c.instructions+=2;goto B61aac0;
case 0x61aac1:c.instructions+=1;goto B61aac1;
case 0x61aac6:goto L61aac6;
case 0x61aacd:c.instructions+=3;goto B61aacd;
case 0x61aad0:c.instructions+=2;goto B61aad0;
case 0x61aad2:c.instructions+=1;goto B61aad2;
case 0x61aad4:goto L61aad4;
case 0x61aad7:c.instructions+=3;goto B61aad7;
case 0x61aad8:c.instructions+=2;goto B61aad8;
case 0x61aad9:c.instructions+=1;goto B61aad9;
case 0x61aade:goto L61aade;
case 0x61aae4:c.instructions+=4;goto B61aae4;
case 0x61aae7:c.instructions+=3;goto B61aae7;
case 0x61aae9:c.instructions+=2;goto B61aae9;
case 0x61aaec:c.instructions+=1;goto B61aaec;
case 0x61aaee:goto L61aaee;
case 0x61aaf2:c.instructions+=2;goto B61aaf2;
case 0x61aaf8:c.instructions+=1;goto B61aaf8;
case 0x61aaff:goto L61aaff;
case 0x61ab06:c.instructions+=2;goto B61ab06;
case 0x61ab08:c.instructions+=1;goto B61ab08;
case 0x61ab0a:goto L61ab0a;
case 0x61ab0d:c.instructions+=10;goto B61ab0d;
case 0x61ab0f:c.instructions+=9;goto B61ab0f;
case 0x61ab11:c.instructions+=8;goto B61ab11;
case 0x61ab17:c.instructions+=7;goto B61ab17;
case 0x61ab18:c.instructions+=6;goto B61ab18;
case 0x61ab19:c.instructions+=5;goto B61ab19;
case 0x61ab1b:c.instructions+=4;goto B61ab1b;
case 0x61ab1c:c.instructions+=3;goto B61ab1c;
case 0x61ab1d:c.instructions+=2;goto B61ab1d;
case 0x61ab20:c.instructions+=1;goto B61ab20;
case 0x61ab25:goto L61ab25;
case 0x61ab26:c.instructions+=5;goto B61ab26;
case 0x61ab27:c.instructions+=4;goto B61ab27;
case 0x61ab28:c.instructions+=3;goto B61ab28;
case 0x61ab2a:c.instructions+=2;goto B61ab2a;
case 0x61ab2b:c.instructions+=1;goto B61ab2b;
case 0x61ab50:goto L61ab50;
case 0x61ab51:c.instructions+=7;goto B61ab51;
case 0x61ab53:c.instructions+=6;goto B61ab53;
case 0x61ab56:c.instructions+=5;goto B61ab56;
case 0x61ab59:c.instructions+=4;goto B61ab59;
case 0x61ab5e:c.instructions+=3;goto B61ab5e;
case 0x61ab60:c.instructions+=2;goto B61ab60;
case 0x61ab61:c.instructions+=1;goto B61ab61;
case 0x61ab63:goto L61ab63;
case 0x61ab65:c.instructions+=1;goto B61ab65;
case 0x61ab6a:goto L61ab6a;
case 0x61ab6d:c.instructions+=2;goto B61ab6d;
case 0x61ab6f:c.instructions+=1;goto B61ab6f;
case 0x61ab71:goto L61ab71;
case 0x61ab74:c.instructions+=3;goto B61ab74;
case 0x61ab76:c.instructions+=2;goto B61ab76;
case 0x61ab78:c.instructions+=1;goto B61ab78;
case 0x61ab7a:goto L61ab7a;
case 0x61ab7c:c.instructions+=1;goto B61ab7c;
case 0x61ab7e:goto L61ab7e;
case 0x61ab81:c.instructions+=2;goto B61ab81;
case 0x61ab83:c.instructions+=1;goto B61ab83;
case 0x61ab85:goto L61ab85;
case 0x61ab87:c.instructions+=2;goto B61ab87;
case 0x61ab89:c.instructions+=1;goto B61ab89;
case 0x61ab8b:goto L61ab8b;
case 0x61ab8d:c.instructions+=1;goto B61ab8d;
case 0x61ab8f:goto L61ab8f;
case 0x61ab92:c.instructions+=1;goto B61ab92;
case 0x61ab94:goto L61ab94;
case 0x61ab96:goto L61ab96;
case 0x61ab98:c.instructions+=1;goto B61ab98;
case 0x61ab9b:goto L61ab9b;
case 0x61aba1:c.instructions+=1;goto B61aba1;
case 0x61aba3:goto L61aba3;
case 0x61aba8:goto L61aba8;
case 0x61abaa:c.instructions+=1;goto B61abaa;
case 0x61abac:goto L61abac;
case 0x61abae:c.instructions+=2;goto B61abae;
case 0x61abb3:c.instructions+=1;goto B61abb3;
case 0x61abb8:goto L61abb8;
case 0x61abbe:c.instructions+=2;goto B61abbe;
case 0x61abbf:c.instructions+=1;goto B61abbf;
case 0x61abc4:goto L61abc4;
case 0x61abc6:c.instructions+=1;goto B61abc6;
case 0x61abc8:goto L61abc8;
case 0x61abce:c.instructions+=1;goto B61abce;
case 0x61abd0:goto L61abd0;
case 0x61abd3:c.instructions+=2;goto B61abd3;
case 0x61abd5:c.instructions+=1;goto B61abd5;
case 0x61abd7:goto L61abd7;
case 0x61abdd:c.instructions+=2;goto B61abdd;
case 0x61abe3:c.instructions+=1;goto B61abe3;
case 0x61abe9:goto L61abe9;
case 0x61abee:c.instructions+=1;goto B61abee;
case 0x61abf3:goto L61abf3;
case 0x61abf5:c.instructions+=1;goto B61abf5;
case 0x61abfb:goto L61abfb;
case 0x61ac00:goto L61ac00;
case 0x61ac06:c.instructions+=2;goto B61ac06;
case 0x61ac08:c.instructions+=1;goto B61ac08;
case 0x61ac0a:goto L61ac0a;
case 0x61ac0c:c.instructions+=2;goto B61ac0c;
case 0x61ac0e:c.instructions+=1;goto B61ac0e;
case 0x61ac10:goto L61ac10;
case 0x61ac11:c.instructions+=3;goto B61ac11;
case 0x61ac13:c.instructions+=2;goto B61ac13;
case 0x61ac14:c.instructions+=1;goto B61ac14;
case 0x61ac15:goto L61ac15;
case 0x61ac1b:c.instructions+=2;goto B61ac1b;
case 0x61ac1d:c.instructions+=1;goto B61ac1d;
case 0x61ac1f:goto L61ac1f;
case 0x61ac21:c.instructions+=1;goto B61ac21;
case 0x61ac26:goto L61ac26;
case 0x61ac29:c.instructions+=19;goto B61ac29;
case 0x61ac2c:c.instructions+=18;goto B61ac2c;
case 0x61ac2f:c.instructions+=17;goto B61ac2f;
case 0x61ac32:c.instructions+=16;goto B61ac32;
case 0x61ac35:c.instructions+=15;goto B61ac35;
case 0x61ac37:c.instructions+=14;goto B61ac37;
case 0x61ac3a:c.instructions+=13;goto B61ac3a;
case 0x61ac3e:c.instructions+=12;goto B61ac3e;
case 0x61ac42:c.instructions+=11;goto B61ac42;
case 0x61ac46:c.instructions+=10;goto B61ac46;
case 0x61ac4c:c.instructions+=9;goto B61ac4c;
case 0x61ac4e:c.instructions+=8;goto B61ac4e;
case 0x61ac52:c.instructions+=7;goto B61ac52;
case 0x61ac55:c.instructions+=6;goto B61ac55;
case 0x61ac5b:c.instructions+=5;goto B61ac5b;
case 0x61ac5f:c.instructions+=4;goto B61ac5f;
case 0x61ac62:c.instructions+=3;goto B61ac62;
case 0x61ac68:c.instructions+=2;goto B61ac68;
case 0x61ac6c:c.instructions+=1;goto B61ac6c;
case 0x61ac71:goto L61ac71;
case 0x61ac75:c.instructions+=5;goto B61ac75;
case 0x61ac76:c.instructions+=4;goto B61ac76;
case 0x61ac7a:c.instructions+=3;goto B61ac7a;
case 0x61ac7b:c.instructions+=2;goto B61ac7b;
case 0x61ac7d:c.instructions+=1;goto B61ac7d;
case 0x61ac82:goto L61ac82;
case 0x61ac83:c.instructions+=3;goto B61ac83;
case 0x61ac85:c.instructions+=2;goto B61ac85;
case 0x61ac86:c.instructions+=1;goto B61ac86;
case 0x61ac90:goto L61ac90;
case 0x61ac91:c.instructions+=4;goto B61ac91;
case 0x61ac92:c.instructions+=3;goto B61ac92;
case 0x61ac98:c.instructions+=2;goto B61ac98;
case 0x61ac9d:c.instructions+=1;goto B61ac9d;
case 0x61aca2:goto L61aca2;
case 0x61aca4:c.instructions+=2;goto B61aca4;
case 0x61aca6:c.instructions+=1;goto B61aca6;
case 0x61aca8:goto L61aca8;
case 0x61aca9:c.instructions+=2;goto B61aca9;
case 0x61acad:c.instructions+=1;goto B61acad;
case 0x61acb0:goto L61acb0;
case 0x61acb3:c.instructions+=2;goto B61acb3;
case 0x61acb5:c.instructions+=1;goto B61acb5;
case 0x61acb7:goto L61acb7;
case 0x61acbd:c.instructions+=2;goto B61acbd;
case 0x61acbf:c.instructions+=1;goto B61acbf;
case 0x61acc1:goto L61acc1;
case 0x61acc7:c.instructions+=5;goto B61acc7;
case 0x61acc8:c.instructions+=4;goto B61acc8;
case 0x61acce:c.instructions+=3;goto B61acce;
case 0x61accf:c.instructions+=2;goto B61accf;
case 0x61acd0:c.instructions+=1;goto B61acd0;
case 0x61acd5:goto L61acd5;
case 0x61acd7:c.instructions+=2;goto B61acd7;
case 0x61acd9:c.instructions+=1;goto B61acd9;
case 0x61acdb:goto L61acdb;
case 0x61acdc:goto L61acdc;
case 0x61acdd:c.instructions+=2;goto B61acdd;
case 0x61acde:c.instructions+=1;goto B61acde;
case 0x61ace0:goto L61ace0;
case 0x61ace5:c.instructions+=2;goto B61ace5;
case 0x61ace7:c.instructions+=1;goto B61ace7;
case 0x61aced:goto L61aced;
case 0x61acee:c.instructions+=5;goto B61acee;
case 0x61acef:c.instructions+=4;goto B61acef;
case 0x61acf0:c.instructions+=3;goto B61acf0;
case 0x61acf4:c.instructions+=2;goto B61acf4;
case 0x61acf6:c.instructions+=1;goto B61acf6;
case 0x61acfc:goto L61acfc;
case 0x61ad01:c.instructions+=2;goto B61ad01;
case 0x61ad03:c.instructions+=1;goto B61ad03;
case 0x61ad05:goto L61ad05;
case 0x61ad0a:c.instructions+=2;goto B61ad0a;
case 0x61ad0c:c.instructions+=1;goto B61ad0c;
case 0x61ad0e:goto L61ad0e;
case 0x61ad13:c.instructions+=2;goto B61ad13;
case 0x61ad15:c.instructions+=1;goto B61ad15;
case 0x61ad17:goto L61ad17;
case 0x61ad1d:c.instructions+=2;goto B61ad1d;
case 0x61ad22:c.instructions+=1;goto B61ad22;
case 0x61ad27:goto L61ad27;
case 0x61ad29:c.instructions+=2;goto B61ad29;
case 0x61ad2b:c.instructions+=1;goto B61ad2b;
case 0x61ad2d:goto L61ad2d;
case 0x61ad2e:c.instructions+=1;goto B61ad2e;
case 0x61ad32:goto L61ad32;
case 0x61ad38:c.instructions+=2;goto B61ad38;
case 0x61ad3a:c.instructions+=1;goto B61ad3a;
case 0x61ad3c:goto L61ad3c;
case 0x61ad42:c.instructions+=2;goto B61ad42;
case 0x61ad44:c.instructions+=1;goto B61ad44;
case 0x61ad46:goto L61ad46;
case 0x61ad4c:c.instructions+=2;goto B61ad4c;
case 0x61ad4f:c.instructions+=1;goto B61ad4f;
case 0x61ad51:goto L61ad51;
case 0x61ad54:c.instructions+=2;goto B61ad54;
case 0x61ad56:c.instructions+=1;goto B61ad56;
case 0x61ad58:goto L61ad58;
case 0x61ad5a:c.instructions+=8;goto B61ad5a;
case 0x61ad5b:c.instructions+=7;goto B61ad5b;
case 0x61ad5d:c.instructions+=6;goto B61ad5d;
case 0x61ad63:c.instructions+=5;goto B61ad63;
case 0x61ad64:c.instructions+=4;goto B61ad64;
case 0x61ad6a:c.instructions+=3;goto B61ad6a;
case 0x61ad6b:c.instructions+=2;goto B61ad6b;
case 0x61ad6c:c.instructions+=1;goto B61ad6c;
case 0x61ad71:goto L61ad71;
case 0x61ad73:c.instructions+=2;goto B61ad73;
case 0x61ad75:c.instructions+=1;goto B61ad75;
case 0x61ad77:goto L61ad77;
case 0x61ad78:goto L61ad78;
case 0x61ad79:c.instructions+=2;goto B61ad79;
case 0x61ad7a:c.instructions+=1;goto B61ad7a;
case 0x61ad7b:goto L61ad7b;
case 0x61ad80:goto L61ad80;
case 0x61ad85:c.instructions+=2;goto B61ad85;
case 0x61ad8b:c.instructions+=1;goto B61ad8b;
case 0x61ad91:goto L61ad91;
case 0x61ad92:c.instructions+=6;goto B61ad92;
case 0x61ad97:c.instructions+=5;goto B61ad97;
case 0x61ad9c:c.instructions+=4;goto B61ad9c;
case 0x61ad9e:c.instructions+=3;goto B61ad9e;
case 0x61ada0:c.instructions+=2;goto B61ada0;
case 0x61ada1:c.instructions+=1;goto B61ada1;
case 0x61ada7:goto L61ada7;
case 0x61adad:c.instructions+=1;goto B61adad;
case 0x61adb3:goto L61adb3;
case 0x61adb9:c.instructions+=1;goto B61adb9;
case 0x61adbf:goto L61adbf;
case 0x61adc4:c.instructions+=2;goto B61adc4;
case 0x61adc6:c.instructions+=1;goto B61adc6;
case 0x61adcc:goto L61adcc;
case 0x61adce:c.instructions+=2;goto B61adce;
case 0x61add0:c.instructions+=1;goto B61add0;
case 0x61add6:goto L61add6;
case 0x61add7:c.instructions+=3;goto B61add7;
case 0x61addb:c.instructions+=2;goto B61addb;
case 0x61addc:c.instructions+=1;goto B61addc;
case 0x61ade0:goto L61ade0;
case 0x61ade3:c.instructions+=2;goto B61ade3;
case 0x61ade7:c.instructions+=1;goto B61ade7;
case 0x61aded:goto L61aded;
case 0x61adf0:c.instructions+=4;goto B61adf0;
case 0x61adf1:c.instructions+=3;goto B61adf1;
case 0x61adf2:c.instructions+=2;goto B61adf2;
case 0x61adf3:c.instructions+=1;goto B61adf3;
case 0x61adf8:goto L61adf8;
case 0x61adfb:c.instructions+=2;goto B61adfb;
case 0x61adfd:c.instructions+=1;goto B61adfd;
case 0x61adff:goto L61adff;
case 0x61ae05:c.instructions+=2;goto B61ae05;
case 0x61ae0b:c.instructions+=1;goto B61ae0b;
case 0x61ae0d:goto L61ae0d;
case 0x61ae13:goto L61ae13;
case 0x61ae19:c.instructions+=5;goto B61ae19;
case 0x61ae1a:c.instructions+=4;goto B61ae1a;
case 0x61ae1c:c.instructions+=3;goto B61ae1c;
case 0x61ae1f:c.instructions+=2;goto B61ae1f;
case 0x61ae25:c.instructions+=1;goto B61ae25;
case 0x61ae27:goto L61ae27;
case 0x61ae2d:goto L61ae2d;
case 0x61ae30:c.instructions+=3;goto B61ae30;
case 0x61ae31:c.instructions+=2;goto B61ae31;
case 0x61ae33:c.instructions+=1;goto B61ae33;
case 0x61ae38:goto L61ae38;
case 0x61ae3e:c.instructions+=4;goto B61ae3e;
case 0x61ae41:c.instructions+=3;goto B61ae41;
case 0x61ae42:c.instructions+=2;goto B61ae42;
case 0x61ae49:c.instructions+=1;goto B61ae49;
case 0x61ae4e:goto L61ae4e;
case 0x61ae51:c.instructions+=3;goto B61ae51;
case 0x61ae52:c.instructions+=2;goto B61ae52;
case 0x61ae54:c.instructions+=1;goto B61ae54;
case 0x61ae59:goto L61ae59;
case 0x61ae5c:c.instructions+=10;goto B61ae5c;
case 0x61ae62:c.instructions+=9;goto B61ae62;
case 0x61ae65:c.instructions+=8;goto B61ae65;
case 0x61ae67:c.instructions+=7;goto B61ae67;
case 0x61ae69:c.instructions+=6;goto B61ae69;
case 0x61ae6f:c.instructions+=5;goto B61ae6f;
case 0x61ae72:c.instructions+=4;goto B61ae72;
case 0x61ae74:c.instructions+=3;goto B61ae74;
case 0x61ae77:c.instructions+=2;goto B61ae77;
case 0x61ae79:c.instructions+=1;goto B61ae79;
case 0x61ae7c:goto L61ae7c;
case 0x61ae7e:c.instructions+=2;goto B61ae7e;
case 0x61ae84:c.instructions+=1;goto B61ae84;
case 0x61ae8a:goto L61ae8a;
case 0x61ae8b:c.instructions+=1;goto B61ae8b;
case 0x61ae8c:goto L61ae8c;
case 0x61ae8d:c.instructions+=1;goto B61ae8d;
case 0x61ae8e:goto L61ae8e;
case 0x61ae90:goto L61ae90;
case 0x61ae91:c.instructions+=9;goto B61ae91;
case 0x61ae93:c.instructions+=8;goto B61ae93;
case 0x61ae96:c.instructions+=7;goto B61ae96;
case 0x61ae99:c.instructions+=6;goto B61ae99;
case 0x61ae9e:c.instructions+=5;goto B61ae9e;
case 0x61aea0:c.instructions+=4;goto B61aea0;
case 0x61aea1:c.instructions+=3;goto B61aea1;
case 0x61aea2:c.instructions+=2;goto B61aea2;
case 0x61aea3:c.instructions+=1;goto B61aea3;
case 0x61aea9:goto L61aea9;
case 0x61aeae:c.instructions+=2;goto B61aeae;
case 0x61aeb0:c.instructions+=1;goto B61aeb0;
case 0x61aeb6:goto L61aeb6;
case 0x61aebb:c.instructions+=2;goto B61aebb;
case 0x61aebd:c.instructions+=1;goto B61aebd;
case 0x61aec3:goto L61aec3;
case 0x61aec6:c.instructions+=4;goto B61aec6;
case 0x61aec9:c.instructions+=3;goto B61aec9;
case 0x61aecd:c.instructions+=2;goto B61aecd;
case 0x61aed4:c.instructions+=1;goto B61aed4;
case 0x61aed6:goto L61aed6;
case 0x61aedc:c.instructions+=2;goto B61aedc;
case 0x61aee2:c.instructions+=1;goto B61aee2;
case 0x61aee4:goto L61aee4;
case 0x61aeee:goto L61aeee;
case 0x61aef2:c.instructions+=1;goto B61aef2;
case 0x61aef4:goto L61aef4;
case 0x61aefa:c.instructions+=9;goto B61aefa;
case 0x61af00:c.instructions+=8;goto B61af00;
case 0x61af06:c.instructions+=7;goto B61af06;
case 0x61af0c:c.instructions+=6;goto B61af0c;
case 0x61af12:c.instructions+=5;goto B61af12;
case 0x61af18:c.instructions+=4;goto B61af18;
case 0x61af1e:c.instructions+=3;goto B61af1e;
case 0x61af24:c.instructions+=2;goto B61af24;
case 0x61af2a:c.instructions+=1;goto B61af2a;
case 0x61af2c:goto L61af2c;
case 0x61af32:c.instructions+=3;goto B61af32;
case 0x61af37:c.instructions+=2;goto B61af37;
case 0x61af3d:c.instructions+=1;goto B61af3d;
case 0x61af42:goto L61af42;
case 0x61af45:c.instructions+=2;goto B61af45;
case 0x61af48:c.instructions+=1;goto B61af48;
case 0x61af4a:goto L61af4a;
case 0x61af4d:c.instructions+=1;goto B61af4d;
case 0x61af4f:goto L61af4f;
case 0x61af55:c.instructions+=2;goto B61af55;
case 0x61af5b:c.instructions+=1;goto B61af5b;
case 0x61af5d:goto L61af5d;
case 0x61af67:goto L61af67;
case 0x61af6c:c.instructions+=2;goto B61af6c;
case 0x61af6e:c.instructions+=1;goto B61af6e;
case 0x61af74:goto L61af74;
case 0x61af76:c.instructions+=4;goto B61af76;
case 0x61af78:c.instructions+=3;goto B61af78;
case 0x61af80:c.instructions+=2;goto B61af80;
case 0x61af84:c.instructions+=1;goto B61af84;
case 0x61af8a:goto L61af8a;
case 0x61af8c:goto L61af8c;
case 0x61af90:goto L61af90;
case 0x61af94:c.instructions+=4;goto B61af94;
case 0x61af95:c.instructions+=3;goto B61af95;
case 0x61af96:c.instructions+=2;goto B61af96;
case 0x61af97:c.instructions+=1;goto B61af97;
case 0x61af9c:goto L61af9c;
case 0x61af9f:c.instructions+=2;goto B61af9f;
case 0x61afa1:c.instructions+=1;goto B61afa1;
case 0x61afa7:goto L61afa7;
case 0x61afab:c.instructions+=2;goto B61afab;
case 0x61afad:c.instructions+=1;goto B61afad;
case 0x61afb3:goto L61afb3;
case 0x61afb6:c.instructions+=10;goto B61afb6;
case 0x61afbc:c.instructions+=9;goto B61afbc;
case 0x61afbd:c.instructions+=8;goto B61afbd;
case 0x61afbf:c.instructions+=7;goto B61afbf;
case 0x61afc3:c.instructions+=6;goto B61afc3;
case 0x61afc6:c.instructions+=5;goto B61afc6;
case 0x61afc7:c.instructions+=4;goto B61afc7;
case 0x61afc9:c.instructions+=3;goto B61afc9;
case 0x61afca:c.instructions+=2;goto B61afca;
case 0x61afcc:c.instructions+=1;goto B61afcc;
case 0x61afd1:goto L61afd1;
case 0x61afd2:c.instructions+=3;goto B61afd2;
case 0x61afd3:c.instructions+=2;goto B61afd3;
case 0x61afd5:c.instructions+=1;goto B61afd5;
case 0x61afda:goto L61afda;
case 0x61afdd:c.instructions+=4;goto B61afdd;
case 0x61afde:c.instructions+=3;goto B61afde;
case 0x61afdf:c.instructions+=2;goto B61afdf;
case 0x61afe1:c.instructions+=1;goto B61afe1;
case 0x61afe6:goto L61afe6;
case 0x61afec:c.instructions+=4;goto B61afec;
case 0x61afef:c.instructions+=3;goto B61afef;
case 0x61aff1:c.instructions+=2;goto B61aff1;
case 0x61aff5:c.instructions+=1;goto B61aff5;
case 0x61affa:goto L61affa;
case 0x61affc:c.instructions+=1;goto B61affc;
default:missing_instruction(c.pc);}
B61a006:L61a006:{c.instructions+=46;NFSU2_TR(0x61a006);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a008:{NFSU2_TR(0x61a008);
{u32 ea_=u32(r4(R+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a00f:{NFSU2_TR(0x61a00f);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a016:{NFSU2_TR(0x61a016);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a018:{NFSU2_TR(0x61a018);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a01f:{NFSU2_TR(0x61a01f);
{u32 ea_=u32(r4(R+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a026:{NFSU2_TR(0x61a026);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a02d:{NFSU2_TR(0x61a02d);
{u32 ea_=u32(r4(R+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a034:{NFSU2_TR(0x61a034);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a03b:{NFSU2_TR(0x61a03b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a03d:{NFSU2_TR(0x61a03d);
{u32 ea_=u32(r4(R+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a044:{NFSU2_TR(0x61a044);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a04b:{NFSU2_TR(0x61a04b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a04d:{NFSU2_TR(0x61a04d);
{u32 ea_=u32(r4(R+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a054:{NFSU2_TR(0x61a054);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a05b:{NFSU2_TR(0x61a05b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a05d:{NFSU2_TR(0x61a05d);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a064:{NFSU2_TR(0x61a064);
{u32 ea_=u32(r4(R+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a06b:{NFSU2_TR(0x61a06b);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a072:{NFSU2_TR(0x61a072);
{u32 ea_=u32(r4(R+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a079:{NFSU2_TR(0x61a079);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a080:{NFSU2_TR(0x61a080);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a082:{NFSU2_TR(0x61a082);
{u32 ea_=u32(r4(R+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a089:{NFSU2_TR(0x61a089);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a090:{NFSU2_TR(0x61a090);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a092:{NFSU2_TR(0x61a092);
{u32 ea_=u32(r4(R+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a099:{NFSU2_TR(0x61a099);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a0a0:{NFSU2_TR(0x61a0a0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a0a2:{NFSU2_TR(0x61a0a2);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a0a9:{NFSU2_TR(0x61a0a9);
{u32 ea_=u32(r4(R+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a0b0:{NFSU2_TR(0x61a0b0);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a0b7:{NFSU2_TR(0x61a0b7);
{u32 ea_=u32(r4(R+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a0be:{NFSU2_TR(0x61a0be);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61a0c2:{NFSU2_TR(0x61a0c2);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a0c9:{NFSU2_TR(0x61a0c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61a0ca:{NFSU2_TR(0x61a0ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61a0ce:{NFSU2_TR(0x61a0ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61a0cf:{NFSU2_TR(0x61a0cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a0d1:{NFSU2_TR(0x61a0d1);
{u32 ea_=u32(r4(R+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a0d8:{NFSU2_TR(0x61a0d8);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a0df:{NFSU2_TR(0x61a0df);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a0e1:{NFSU2_TR(0x61a0e1);
{u32 ea_=u32(r4(R+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a0e8:{NFSU2_TR(0x61a0e8);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a0ef:{NFSU2_TR(0x61a0ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a0f1:{NFSU2_TR(0x61a0f1);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a0f8:{NFSU2_TR(0x61a0f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61a0fdull));
TAIL_STATIC(0x4012b0u,401);
}
B61a0fd:L61a0fd:{c.instructions+=197;NFSU2_TR(0x61a0fd);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a101:{NFSU2_TR(0x61a101);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a107:{NFSU2_TR(0x61a107);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a10b:{NFSU2_TR(0x61a10b);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a111:{NFSU2_TR(0x61a111);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a113:{NFSU2_TR(0x61a113);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a117:{NFSU2_TR(0x61a117);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a11d:{NFSU2_TR(0x61a11d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a11f:{NFSU2_TR(0x61a11f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a123:{NFSU2_TR(0x61a123);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a129:{NFSU2_TR(0x61a129);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a12b:{NFSU2_TR(0x61a12b);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a12f:{NFSU2_TR(0x61a12f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a133:{NFSU2_TR(0x61a133);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a139:{NFSU2_TR(0x61a139);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a13d:{NFSU2_TR(0x61a13d);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a143:{NFSU2_TR(0x61a143);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a145:{NFSU2_TR(0x61a145);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a149:{NFSU2_TR(0x61a149);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a14f:{NFSU2_TR(0x61a14f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a151:{NFSU2_TR(0x61a151);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a155:{NFSU2_TR(0x61a155);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a15b:{NFSU2_TR(0x61a15b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a15d:{NFSU2_TR(0x61a15d);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a161:{NFSU2_TR(0x61a161);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a165:{NFSU2_TR(0x61a165);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a16b:{NFSU2_TR(0x61a16b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a16f:{NFSU2_TR(0x61a16f);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a175:{NFSU2_TR(0x61a175);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a177:{NFSU2_TR(0x61a177);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a17b:{NFSU2_TR(0x61a17b);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a181:{NFSU2_TR(0x61a181);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a183:{NFSU2_TR(0x61a183);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a187:{NFSU2_TR(0x61a187);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a18d:{NFSU2_TR(0x61a18d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a18f:{NFSU2_TR(0x61a18f);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a196:{NFSU2_TR(0x61a196);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a19a:{NFSU2_TR(0x61a19a);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a1a0:{NFSU2_TR(0x61a1a0);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a1a4:{NFSU2_TR(0x61a1a4);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a1aa:{NFSU2_TR(0x61a1aa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a1ac:{NFSU2_TR(0x61a1ac);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a1b0:{NFSU2_TR(0x61a1b0);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a1b6:{NFSU2_TR(0x61a1b6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a1b8:{NFSU2_TR(0x61a1b8);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a1bc:{NFSU2_TR(0x61a1bc);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a1c2:{NFSU2_TR(0x61a1c2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a1c4:{NFSU2_TR(0x61a1c4);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a1cb:{NFSU2_TR(0x61a1cb);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a1cf:{NFSU2_TR(0x61a1cf);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a1d5:{NFSU2_TR(0x61a1d5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a1d9:{NFSU2_TR(0x61a1d9);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a1df:{NFSU2_TR(0x61a1df);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a1e1:{NFSU2_TR(0x61a1e1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a1e5:{NFSU2_TR(0x61a1e5);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a1eb:{NFSU2_TR(0x61a1eb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a1ed:{NFSU2_TR(0x61a1ed);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a1f1:{NFSU2_TR(0x61a1f1);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a1f7:{NFSU2_TR(0x61a1f7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a1f9:{NFSU2_TR(0x61a1f9);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a200:{NFSU2_TR(0x61a200);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a204:{NFSU2_TR(0x61a204);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a20a:{NFSU2_TR(0x61a20a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a20e:{NFSU2_TR(0x61a20e);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a214:{NFSU2_TR(0x61a214);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a216:{NFSU2_TR(0x61a216);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a21a:{NFSU2_TR(0x61a21a);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a220:{NFSU2_TR(0x61a220);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a222:{NFSU2_TR(0x61a222);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a226:{NFSU2_TR(0x61a226);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a22c:{NFSU2_TR(0x61a22c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a22e:{NFSU2_TR(0x61a22e);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a235:{NFSU2_TR(0x61a235);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a239:{NFSU2_TR(0x61a239);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a23f:{NFSU2_TR(0x61a23f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a243:{NFSU2_TR(0x61a243);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a249:{NFSU2_TR(0x61a249);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a24b:{NFSU2_TR(0x61a24b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a24f:{NFSU2_TR(0x61a24f);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a255:{NFSU2_TR(0x61a255);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a257:{NFSU2_TR(0x61a257);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a25b:{NFSU2_TR(0x61a25b);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a261:{NFSU2_TR(0x61a261);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a263:{NFSU2_TR(0x61a263);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a26a:{NFSU2_TR(0x61a26a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a26e:{NFSU2_TR(0x61a26e);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a274:{NFSU2_TR(0x61a274);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a278:{NFSU2_TR(0x61a278);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a27e:{NFSU2_TR(0x61a27e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a280:{NFSU2_TR(0x61a280);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a284:{NFSU2_TR(0x61a284);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a28a:{NFSU2_TR(0x61a28a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a28c:{NFSU2_TR(0x61a28c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a290:{NFSU2_TR(0x61a290);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a296:{NFSU2_TR(0x61a296);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a298:{NFSU2_TR(0x61a298);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a29f:{NFSU2_TR(0x61a29f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a2a3:{NFSU2_TR(0x61a2a3);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a2a9:{NFSU2_TR(0x61a2a9);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a2ad:{NFSU2_TR(0x61a2ad);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a2b3:{NFSU2_TR(0x61a2b3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a2b5:{NFSU2_TR(0x61a2b5);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a2b9:{NFSU2_TR(0x61a2b9);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a2bf:{NFSU2_TR(0x61a2bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a2c1:{NFSU2_TR(0x61a2c1);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a2c5:{NFSU2_TR(0x61a2c5);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a2cb:{NFSU2_TR(0x61a2cb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a2cd:{NFSU2_TR(0x61a2cd);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a2d4:{NFSU2_TR(0x61a2d4);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a2d8:{NFSU2_TR(0x61a2d8);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a2de:{NFSU2_TR(0x61a2de);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a2e2:{NFSU2_TR(0x61a2e2);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a2e8:{NFSU2_TR(0x61a2e8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a2ea:{NFSU2_TR(0x61a2ea);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a2ee:{NFSU2_TR(0x61a2ee);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a2f4:{NFSU2_TR(0x61a2f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a2f6:{NFSU2_TR(0x61a2f6);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a2fa:{NFSU2_TR(0x61a2fa);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a300:{NFSU2_TR(0x61a300);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a302:{NFSU2_TR(0x61a302);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a309:{NFSU2_TR(0x61a309);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a30d:{NFSU2_TR(0x61a30d);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a313:{NFSU2_TR(0x61a313);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a317:{NFSU2_TR(0x61a317);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a31d:{NFSU2_TR(0x61a31d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a31f:{NFSU2_TR(0x61a31f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a323:{NFSU2_TR(0x61a323);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a329:{NFSU2_TR(0x61a329);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a32b:{NFSU2_TR(0x61a32b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a32f:{NFSU2_TR(0x61a32f);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a335:{NFSU2_TR(0x61a335);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a337:{NFSU2_TR(0x61a337);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a33e:{NFSU2_TR(0x61a33e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a342:{NFSU2_TR(0x61a342);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a348:{NFSU2_TR(0x61a348);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a34c:{NFSU2_TR(0x61a34c);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a352:{NFSU2_TR(0x61a352);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a354:{NFSU2_TR(0x61a354);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a358:{NFSU2_TR(0x61a358);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a35e:{NFSU2_TR(0x61a35e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a360:{NFSU2_TR(0x61a360);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a364:{NFSU2_TR(0x61a364);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a36a:{NFSU2_TR(0x61a36a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a36c:{NFSU2_TR(0x61a36c);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a373:{NFSU2_TR(0x61a373);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a377:{NFSU2_TR(0x61a377);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a37d:{NFSU2_TR(0x61a37d);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a381:{NFSU2_TR(0x61a381);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a387:{NFSU2_TR(0x61a387);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a389:{NFSU2_TR(0x61a389);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a38d:{NFSU2_TR(0x61a38d);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a393:{NFSU2_TR(0x61a393);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a395:{NFSU2_TR(0x61a395);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a399:{NFSU2_TR(0x61a399);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a39f:{NFSU2_TR(0x61a39f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a3a1:{NFSU2_TR(0x61a3a1);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a3a8:{NFSU2_TR(0x61a3a8);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a3ac:{NFSU2_TR(0x61a3ac);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a3b2:{NFSU2_TR(0x61a3b2);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a3b6:{NFSU2_TR(0x61a3b6);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a3bc:{NFSU2_TR(0x61a3bc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a3be:{NFSU2_TR(0x61a3be);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a3c2:{NFSU2_TR(0x61a3c2);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a3c8:{NFSU2_TR(0x61a3c8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a3ca:{NFSU2_TR(0x61a3ca);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a3ce:{NFSU2_TR(0x61a3ce);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a3d4:{NFSU2_TR(0x61a3d4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a3d6:{NFSU2_TR(0x61a3d6);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a3dd:{NFSU2_TR(0x61a3dd);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a3e1:{NFSU2_TR(0x61a3e1);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a3e7:{NFSU2_TR(0x61a3e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61a3eb:{NFSU2_TR(0x61a3eb);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a3ef:{NFSU2_TR(0x61a3ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61a3f0:{NFSU2_TR(0x61a3f0);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a3f6:{NFSU2_TR(0x61a3f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61a3fa:{NFSU2_TR(0x61a3fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61a3fb:{NFSU2_TR(0x61a3fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a3fd:{NFSU2_TR(0x61a3fd);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a401:{NFSU2_TR(0x61a401);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a407:{NFSU2_TR(0x61a407);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a409:{NFSU2_TR(0x61a409);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a40d:{NFSU2_TR(0x61a40d);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a413:{NFSU2_TR(0x61a413);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a415:{NFSU2_TR(0x61a415);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a41c:{NFSU2_TR(0x61a41c);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a420:{NFSU2_TR(0x61a420);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a426:{NFSU2_TR(0x61a426);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a42a:{NFSU2_TR(0x61a42a);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a430:{NFSU2_TR(0x61a430);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a432:{NFSU2_TR(0x61a432);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a436:{NFSU2_TR(0x61a436);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a43c:{NFSU2_TR(0x61a43c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a43e:{NFSU2_TR(0x61a43e);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a442:{NFSU2_TR(0x61a442);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a448:{NFSU2_TR(0x61a448);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a44a:{NFSU2_TR(0x61a44a);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a451:{NFSU2_TR(0x61a451);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61a456ull));
TAIL_STATIC(0x4012b0u,401);
}
B61a456:L61a456:{c.instructions+=197;NFSU2_TR(0x61a456);
{u32 ea_=u32(r4(R+16)+u32(800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a45d:{NFSU2_TR(0x61a45d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a461:{NFSU2_TR(0x61a461);
{u32 ea_=u32(r4(R+16)+u32(784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a468:{NFSU2_TR(0x61a468);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a46c:{NFSU2_TR(0x61a46c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a46e:{NFSU2_TR(0x61a46e);
{u32 ea_=u32(r4(R+16)+u32(752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a475:{NFSU2_TR(0x61a475);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a479:{NFSU2_TR(0x61a479);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a47b:{NFSU2_TR(0x61a47b);
{u32 ea_=u32(r4(R+16)+u32(768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a482:{NFSU2_TR(0x61a482);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a486:{NFSU2_TR(0x61a486);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a488:{NFSU2_TR(0x61a488);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a48f:{NFSU2_TR(0x61a48f);
{u32 ea_=u32(r4(R+16)+u32(756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a496:{NFSU2_TR(0x61a496);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a49a:{NFSU2_TR(0x61a49a);
{u32 ea_=u32(r4(R+16)+u32(804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a4a1:{NFSU2_TR(0x61a4a1);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a4a5:{NFSU2_TR(0x61a4a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a4a7:{NFSU2_TR(0x61a4a7);
{u32 ea_=u32(r4(R+16)+u32(788u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a4ae:{NFSU2_TR(0x61a4ae);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a4b2:{NFSU2_TR(0x61a4b2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a4b4:{NFSU2_TR(0x61a4b4);
{u32 ea_=u32(r4(R+16)+u32(772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a4bb:{NFSU2_TR(0x61a4bb);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a4bf:{NFSU2_TR(0x61a4bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a4c1:{NFSU2_TR(0x61a4c1);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a4c8:{NFSU2_TR(0x61a4c8);
{u32 ea_=u32(r4(R+16)+u32(760u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a4cf:{NFSU2_TR(0x61a4cf);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a4d3:{NFSU2_TR(0x61a4d3);
{u32 ea_=u32(r4(R+16)+u32(808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a4da:{NFSU2_TR(0x61a4da);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a4de:{NFSU2_TR(0x61a4de);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a4e0:{NFSU2_TR(0x61a4e0);
{u32 ea_=u32(r4(R+16)+u32(792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a4e7:{NFSU2_TR(0x61a4e7);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a4eb:{NFSU2_TR(0x61a4eb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a4ed:{NFSU2_TR(0x61a4ed);
{u32 ea_=u32(r4(R+16)+u32(776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a4f4:{NFSU2_TR(0x61a4f4);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a4f8:{NFSU2_TR(0x61a4f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a4fa:{NFSU2_TR(0x61a4fa);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a501:{NFSU2_TR(0x61a501);
{u32 ea_=u32(r4(R+16)+u32(764u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a508:{NFSU2_TR(0x61a508);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a50c:{NFSU2_TR(0x61a50c);
{u32 ea_=u32(r4(R+16)+u32(812u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a513:{NFSU2_TR(0x61a513);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a517:{NFSU2_TR(0x61a517);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a519:{NFSU2_TR(0x61a519);
{u32 ea_=u32(r4(R+16)+u32(796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a520:{NFSU2_TR(0x61a520);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a524:{NFSU2_TR(0x61a524);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a526:{NFSU2_TR(0x61a526);
{u32 ea_=u32(r4(R+16)+u32(780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a52d:{NFSU2_TR(0x61a52d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a531:{NFSU2_TR(0x61a531);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a533:{NFSU2_TR(0x61a533);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a53a:{NFSU2_TR(0x61a53a);
{u32 ea_=u32(r4(R+16)+u32(800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a541:{NFSU2_TR(0x61a541);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a545:{NFSU2_TR(0x61a545);
{u32 ea_=u32(r4(R+16)+u32(784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a54c:{NFSU2_TR(0x61a54c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a550:{NFSU2_TR(0x61a550);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a552:{NFSU2_TR(0x61a552);
{u32 ea_=u32(r4(R+16)+u32(768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a559:{NFSU2_TR(0x61a559);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a55d:{NFSU2_TR(0x61a55d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a55f:{NFSU2_TR(0x61a55f);
{u32 ea_=u32(r4(R+16)+u32(752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a566:{NFSU2_TR(0x61a566);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a56a:{NFSU2_TR(0x61a56a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a56c:{NFSU2_TR(0x61a56c);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a573:{NFSU2_TR(0x61a573);
{u32 ea_=u32(r4(R+16)+u32(804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a57a:{NFSU2_TR(0x61a57a);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a57e:{NFSU2_TR(0x61a57e);
{u32 ea_=u32(r4(R+16)+u32(788u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a585:{NFSU2_TR(0x61a585);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a589:{NFSU2_TR(0x61a589);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a58b:{NFSU2_TR(0x61a58b);
{u32 ea_=u32(r4(R+16)+u32(772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a592:{NFSU2_TR(0x61a592);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a596:{NFSU2_TR(0x61a596);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a598:{NFSU2_TR(0x61a598);
{u32 ea_=u32(r4(R+16)+u32(756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a59f:{NFSU2_TR(0x61a59f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a5a3:{NFSU2_TR(0x61a5a3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a5a5:{NFSU2_TR(0x61a5a5);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a5ac:{NFSU2_TR(0x61a5ac);
{u32 ea_=u32(r4(R+16)+u32(808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a5b3:{NFSU2_TR(0x61a5b3);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a5b7:{NFSU2_TR(0x61a5b7);
{u32 ea_=u32(r4(R+16)+u32(792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a5be:{NFSU2_TR(0x61a5be);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a5c2:{NFSU2_TR(0x61a5c2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a5c4:{NFSU2_TR(0x61a5c4);
{u32 ea_=u32(r4(R+16)+u32(776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a5cb:{NFSU2_TR(0x61a5cb);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a5cf:{NFSU2_TR(0x61a5cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a5d1:{NFSU2_TR(0x61a5d1);
{u32 ea_=u32(r4(R+16)+u32(760u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a5d8:{NFSU2_TR(0x61a5d8);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a5dc:{NFSU2_TR(0x61a5dc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a5de:{NFSU2_TR(0x61a5de);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a5e5:{NFSU2_TR(0x61a5e5);
{u32 ea_=u32(r4(R+16)+u32(812u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a5ec:{NFSU2_TR(0x61a5ec);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a5f0:{NFSU2_TR(0x61a5f0);
{u32 ea_=u32(r4(R+16)+u32(796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a5f7:{NFSU2_TR(0x61a5f7);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a5fb:{NFSU2_TR(0x61a5fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a5fd:{NFSU2_TR(0x61a5fd);
{u32 ea_=u32(r4(R+16)+u32(780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a604:{NFSU2_TR(0x61a604);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a608:{NFSU2_TR(0x61a608);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a60a:{NFSU2_TR(0x61a60a);
{u32 ea_=u32(r4(R+16)+u32(764u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a611:{NFSU2_TR(0x61a611);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a615:{NFSU2_TR(0x61a615);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a617:{NFSU2_TR(0x61a617);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a61e:{NFSU2_TR(0x61a61e);
{u32 ea_=u32(r4(R+16)+u32(800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a625:{NFSU2_TR(0x61a625);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a629:{NFSU2_TR(0x61a629);
{u32 ea_=u32(r4(R+16)+u32(784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a630:{NFSU2_TR(0x61a630);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a634:{NFSU2_TR(0x61a634);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a636:{NFSU2_TR(0x61a636);
{u32 ea_=u32(r4(R+16)+u32(768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a63d:{NFSU2_TR(0x61a63d);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a641:{NFSU2_TR(0x61a641);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a643:{NFSU2_TR(0x61a643);
{u32 ea_=u32(r4(R+16)+u32(752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a64a:{NFSU2_TR(0x61a64a);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a64e:{NFSU2_TR(0x61a64e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a650:{NFSU2_TR(0x61a650);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a657:{NFSU2_TR(0x61a657);
{u32 ea_=u32(r4(R+16)+u32(804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a65e:{NFSU2_TR(0x61a65e);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a662:{NFSU2_TR(0x61a662);
{u32 ea_=u32(r4(R+16)+u32(788u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a669:{NFSU2_TR(0x61a669);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a66d:{NFSU2_TR(0x61a66d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a66f:{NFSU2_TR(0x61a66f);
{u32 ea_=u32(r4(R+16)+u32(772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a676:{NFSU2_TR(0x61a676);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a67a:{NFSU2_TR(0x61a67a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a67c:{NFSU2_TR(0x61a67c);
{u32 ea_=u32(r4(R+16)+u32(756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a683:{NFSU2_TR(0x61a683);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a687:{NFSU2_TR(0x61a687);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a689:{NFSU2_TR(0x61a689);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a690:{NFSU2_TR(0x61a690);
{u32 ea_=u32(r4(R+16)+u32(808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a697:{NFSU2_TR(0x61a697);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a69b:{NFSU2_TR(0x61a69b);
{u32 ea_=u32(r4(R+16)+u32(792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a6a2:{NFSU2_TR(0x61a6a2);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a6a6:{NFSU2_TR(0x61a6a6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a6a8:{NFSU2_TR(0x61a6a8);
{u32 ea_=u32(r4(R+16)+u32(776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a6af:{NFSU2_TR(0x61a6af);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a6b3:{NFSU2_TR(0x61a6b3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a6b5:{NFSU2_TR(0x61a6b5);
{u32 ea_=u32(r4(R+16)+u32(760u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a6bc:{NFSU2_TR(0x61a6bc);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a6c0:{NFSU2_TR(0x61a6c0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a6c2:{NFSU2_TR(0x61a6c2);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a6c9:{NFSU2_TR(0x61a6c9);
{u32 ea_=u32(r4(R+16)+u32(812u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a6d0:{NFSU2_TR(0x61a6d0);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a6d4:{NFSU2_TR(0x61a6d4);
{u32 ea_=u32(r4(R+16)+u32(796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a6db:{NFSU2_TR(0x61a6db);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a6df:{NFSU2_TR(0x61a6df);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a6e1:{NFSU2_TR(0x61a6e1);
{u32 ea_=u32(r4(R+16)+u32(780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a6e8:{NFSU2_TR(0x61a6e8);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a6ec:{NFSU2_TR(0x61a6ec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a6ee:{NFSU2_TR(0x61a6ee);
{u32 ea_=u32(r4(R+16)+u32(764u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a6f5:{NFSU2_TR(0x61a6f5);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a6f9:{NFSU2_TR(0x61a6f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a6fb:{NFSU2_TR(0x61a6fb);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a702:{NFSU2_TR(0x61a702);
{u32 ea_=u32(r4(R+16)+u32(800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a709:{NFSU2_TR(0x61a709);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a70d:{NFSU2_TR(0x61a70d);
{u32 ea_=u32(r4(R+16)+u32(784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a714:{NFSU2_TR(0x61a714);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a718:{NFSU2_TR(0x61a718);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a71a:{NFSU2_TR(0x61a71a);
{u32 ea_=u32(r4(R+16)+u32(768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a721:{NFSU2_TR(0x61a721);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a725:{NFSU2_TR(0x61a725);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a727:{NFSU2_TR(0x61a727);
{u32 ea_=u32(r4(R+16)+u32(752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a72e:{NFSU2_TR(0x61a72e);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a732:{NFSU2_TR(0x61a732);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a734:{NFSU2_TR(0x61a734);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a73b:{NFSU2_TR(0x61a73b);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61a742:{NFSU2_TR(0x61a742);
{u32 ea_=u32(r4(R+16)+u32(804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a749:{NFSU2_TR(0x61a749);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61a74a:{NFSU2_TR(0x61a74a);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a74e:{NFSU2_TR(0x61a74e);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61a752:{NFSU2_TR(0x61a752);
{u32 ea_=u32(r4(R+16)+u32(792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a759:{NFSU2_TR(0x61a759);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61a75a:{NFSU2_TR(0x61a75a);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a75e:{NFSU2_TR(0x61a75e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a760:{NFSU2_TR(0x61a760);
{u32 ea_=u32(r4(R+16)+u32(780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a767:{NFSU2_TR(0x61a767);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a76b:{NFSU2_TR(0x61a76b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a76d:{NFSU2_TR(0x61a76d);
{u32 ea_=u32(r4(R+16)+u32(764u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a774:{NFSU2_TR(0x61a774);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a778:{NFSU2_TR(0x61a778);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a77a:{NFSU2_TR(0x61a77a);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a781:{NFSU2_TR(0x61a781);
{u32 ea_=u32(r4(R+16)+u32(816u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a788:{NFSU2_TR(0x61a788);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a78c:{NFSU2_TR(0x61a78c);
{u32 ea_=u32(r4(R+16)+u32(800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a793:{NFSU2_TR(0x61a793);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a797:{NFSU2_TR(0x61a797);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a799:{NFSU2_TR(0x61a799);
{u32 ea_=u32(r4(R+16)+u32(784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a7a0:{NFSU2_TR(0x61a7a0);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a7a4:{NFSU2_TR(0x61a7a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a7a6:{NFSU2_TR(0x61a7a6);
{u32 ea_=u32(r4(R+16)+u32(768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a7ad:{NFSU2_TR(0x61a7ad);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a7b1:{NFSU2_TR(0x61a7b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a7b3:{NFSU2_TR(0x61a7b3);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a7ba:{NFSU2_TR(0x61a7ba);
{u32 ea_=u32(r4(R+16)+u32(820u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a7c1:{NFSU2_TR(0x61a7c1);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a7c5:{NFSU2_TR(0x61a7c5);
{u32 ea_=u32(r4(R+16)+u32(804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a7cc:{NFSU2_TR(0x61a7cc);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a7d0:{NFSU2_TR(0x61a7d0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a7d2:{NFSU2_TR(0x61a7d2);
{u32 ea_=u32(r4(R+16)+u32(788u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a7d9:{NFSU2_TR(0x61a7d9);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a7dd:{NFSU2_TR(0x61a7dd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a7df:{NFSU2_TR(0x61a7df);
{u32 ea_=u32(r4(R+16)+u32(772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a7e6:{NFSU2_TR(0x61a7e6);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a7ea:{NFSU2_TR(0x61a7ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a7ec:{NFSU2_TR(0x61a7ec);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a7f3:{NFSU2_TR(0x61a7f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61a7f8ull));
TAIL_STATIC(0x4012b0u,401);
}
B61a7f8:L61a7f8:{c.instructions+=198;NFSU2_TR(0x61a7f8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a7fc:{NFSU2_TR(0x61a7fc);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a7fe:{NFSU2_TR(0x61a7fe);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a802:{NFSU2_TR(0x61a802);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a805:{NFSU2_TR(0x61a805);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a807:{NFSU2_TR(0x61a807);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a80b:{NFSU2_TR(0x61a80b);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a80e:{NFSU2_TR(0x61a80e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a810:{NFSU2_TR(0x61a810);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a814:{NFSU2_TR(0x61a814);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a817:{NFSU2_TR(0x61a817);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a819:{NFSU2_TR(0x61a819);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a820:{NFSU2_TR(0x61a820);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a824:{NFSU2_TR(0x61a824);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a827:{NFSU2_TR(0x61a827);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a82b:{NFSU2_TR(0x61a82b);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a82e:{NFSU2_TR(0x61a82e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a830:{NFSU2_TR(0x61a830);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a834:{NFSU2_TR(0x61a834);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a837:{NFSU2_TR(0x61a837);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a839:{NFSU2_TR(0x61a839);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a83d:{NFSU2_TR(0x61a83d);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a840:{NFSU2_TR(0x61a840);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a842:{NFSU2_TR(0x61a842);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a849:{NFSU2_TR(0x61a849);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a84d:{NFSU2_TR(0x61a84d);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a850:{NFSU2_TR(0x61a850);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a854:{NFSU2_TR(0x61a854);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a857:{NFSU2_TR(0x61a857);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a859:{NFSU2_TR(0x61a859);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a85d:{NFSU2_TR(0x61a85d);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a860:{NFSU2_TR(0x61a860);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a862:{NFSU2_TR(0x61a862);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a866:{NFSU2_TR(0x61a866);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a869:{NFSU2_TR(0x61a869);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a86b:{NFSU2_TR(0x61a86b);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a872:{NFSU2_TR(0x61a872);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a876:{NFSU2_TR(0x61a876);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a879:{NFSU2_TR(0x61a879);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a87d:{NFSU2_TR(0x61a87d);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a880:{NFSU2_TR(0x61a880);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a882:{NFSU2_TR(0x61a882);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a886:{NFSU2_TR(0x61a886);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a889:{NFSU2_TR(0x61a889);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a88b:{NFSU2_TR(0x61a88b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a88f:{NFSU2_TR(0x61a88f);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a892:{NFSU2_TR(0x61a892);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a894:{NFSU2_TR(0x61a894);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a89b:{NFSU2_TR(0x61a89b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a89f:{NFSU2_TR(0x61a89f);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a8a2:{NFSU2_TR(0x61a8a2);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a8a6:{NFSU2_TR(0x61a8a6);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a8a8:{NFSU2_TR(0x61a8a8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a8aa:{NFSU2_TR(0x61a8aa);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a8ae:{NFSU2_TR(0x61a8ae);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a8b1:{NFSU2_TR(0x61a8b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a8b3:{NFSU2_TR(0x61a8b3);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a8b7:{NFSU2_TR(0x61a8b7);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a8ba:{NFSU2_TR(0x61a8ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a8bc:{NFSU2_TR(0x61a8bc);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a8c3:{NFSU2_TR(0x61a8c3);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a8c7:{NFSU2_TR(0x61a8c7);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a8ca:{NFSU2_TR(0x61a8ca);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a8ce:{NFSU2_TR(0x61a8ce);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a8d1:{NFSU2_TR(0x61a8d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a8d3:{NFSU2_TR(0x61a8d3);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a8d7:{NFSU2_TR(0x61a8d7);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a8da:{NFSU2_TR(0x61a8da);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a8dc:{NFSU2_TR(0x61a8dc);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a8e0:{NFSU2_TR(0x61a8e0);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a8e3:{NFSU2_TR(0x61a8e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a8e5:{NFSU2_TR(0x61a8e5);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a8ec:{NFSU2_TR(0x61a8ec);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a8f0:{NFSU2_TR(0x61a8f0);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a8f3:{NFSU2_TR(0x61a8f3);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a8f7:{NFSU2_TR(0x61a8f7);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a8fa:{NFSU2_TR(0x61a8fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a8fc:{NFSU2_TR(0x61a8fc);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a900:{NFSU2_TR(0x61a900);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a903:{NFSU2_TR(0x61a903);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a905:{NFSU2_TR(0x61a905);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a909:{NFSU2_TR(0x61a909);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a90c:{NFSU2_TR(0x61a90c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a90e:{NFSU2_TR(0x61a90e);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a915:{NFSU2_TR(0x61a915);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a919:{NFSU2_TR(0x61a919);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a91c:{NFSU2_TR(0x61a91c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a920:{NFSU2_TR(0x61a920);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a923:{NFSU2_TR(0x61a923);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a925:{NFSU2_TR(0x61a925);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a929:{NFSU2_TR(0x61a929);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a92c:{NFSU2_TR(0x61a92c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a92e:{NFSU2_TR(0x61a92e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a932:{NFSU2_TR(0x61a932);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a935:{NFSU2_TR(0x61a935);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a937:{NFSU2_TR(0x61a937);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a93e:{NFSU2_TR(0x61a93e);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a942:{NFSU2_TR(0x61a942);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a945:{NFSU2_TR(0x61a945);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a949:{NFSU2_TR(0x61a949);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a94b:{NFSU2_TR(0x61a94b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a94d:{NFSU2_TR(0x61a94d);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a951:{NFSU2_TR(0x61a951);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a954:{NFSU2_TR(0x61a954);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a956:{NFSU2_TR(0x61a956);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a95a:{NFSU2_TR(0x61a95a);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a95d:{NFSU2_TR(0x61a95d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a95f:{NFSU2_TR(0x61a95f);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a966:{NFSU2_TR(0x61a966);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a96a:{NFSU2_TR(0x61a96a);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a96d:{NFSU2_TR(0x61a96d);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a971:{NFSU2_TR(0x61a971);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a974:{NFSU2_TR(0x61a974);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a976:{NFSU2_TR(0x61a976);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a97a:{NFSU2_TR(0x61a97a);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a97d:{NFSU2_TR(0x61a97d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a97f:{NFSU2_TR(0x61a97f);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a983:{NFSU2_TR(0x61a983);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a986:{NFSU2_TR(0x61a986);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a988:{NFSU2_TR(0x61a988);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a98f:{NFSU2_TR(0x61a98f);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a993:{NFSU2_TR(0x61a993);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a996:{NFSU2_TR(0x61a996);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a99a:{NFSU2_TR(0x61a99a);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a99d:{NFSU2_TR(0x61a99d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a99f:{NFSU2_TR(0x61a99f);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a9a3:{NFSU2_TR(0x61a9a3);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a9a6:{NFSU2_TR(0x61a9a6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a9a8:{NFSU2_TR(0x61a9a8);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a9ac:{NFSU2_TR(0x61a9ac);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a9af:{NFSU2_TR(0x61a9af);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a9b1:{NFSU2_TR(0x61a9b1);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a9b8:{NFSU2_TR(0x61a9b8);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a9bc:{NFSU2_TR(0x61a9bc);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a9bf:{NFSU2_TR(0x61a9bf);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a9c3:{NFSU2_TR(0x61a9c3);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a9c6:{NFSU2_TR(0x61a9c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a9c8:{NFSU2_TR(0x61a9c8);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a9cc:{NFSU2_TR(0x61a9cc);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a9cf:{NFSU2_TR(0x61a9cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a9d1:{NFSU2_TR(0x61a9d1);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a9d5:{NFSU2_TR(0x61a9d5);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a9d8:{NFSU2_TR(0x61a9d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a9da:{NFSU2_TR(0x61a9da);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61a9de:{NFSU2_TR(0x61a9de);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61a9e5:{NFSU2_TR(0x61a9e5);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a9ec:{NFSU2_TR(0x61a9ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61a9ed:{NFSU2_TR(0x61a9ed);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a9f1:{NFSU2_TR(0x61a9f1);
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
B61a9f7:{NFSU2_TR(0x61a9f7);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a9fa:{NFSU2_TR(0x61a9fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61a9fb:{NFSU2_TR(0x61a9fb);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a9ff:{NFSU2_TR(0x61a9ff);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa01:{NFSU2_TR(0x61aa01);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa03:{NFSU2_TR(0x61aa03);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa07:{NFSU2_TR(0x61aa07);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa0a:{NFSU2_TR(0x61aa0a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa0c:{NFSU2_TR(0x61aa0c);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa10:{NFSU2_TR(0x61aa10);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa13:{NFSU2_TR(0x61aa13);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa15:{NFSU2_TR(0x61aa15);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61aa1c:{NFSU2_TR(0x61aa1c);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa20:{NFSU2_TR(0x61aa20);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa23:{NFSU2_TR(0x61aa23);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa27:{NFSU2_TR(0x61aa27);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa2a:{NFSU2_TR(0x61aa2a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa2c:{NFSU2_TR(0x61aa2c);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa30:{NFSU2_TR(0x61aa30);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa33:{NFSU2_TR(0x61aa33);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa35:{NFSU2_TR(0x61aa35);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa39:{NFSU2_TR(0x61aa39);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa3c:{NFSU2_TR(0x61aa3c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa3e:{NFSU2_TR(0x61aa3e);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61aa45:{NFSU2_TR(0x61aa45);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa49:{NFSU2_TR(0x61aa49);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa4c:{NFSU2_TR(0x61aa4c);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa50:{NFSU2_TR(0x61aa50);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa53:{NFSU2_TR(0x61aa53);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa55:{NFSU2_TR(0x61aa55);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa59:{NFSU2_TR(0x61aa59);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa5c:{NFSU2_TR(0x61aa5c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa5e:{NFSU2_TR(0x61aa5e);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa62:{NFSU2_TR(0x61aa62);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa65:{NFSU2_TR(0x61aa65);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa67:{NFSU2_TR(0x61aa67);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61aa6e:{NFSU2_TR(0x61aa6e);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa72:{NFSU2_TR(0x61aa72);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa75:{NFSU2_TR(0x61aa75);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa79:{NFSU2_TR(0x61aa79);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa7c:{NFSU2_TR(0x61aa7c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa7e:{NFSU2_TR(0x61aa7e);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa82:{NFSU2_TR(0x61aa82);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa85:{NFSU2_TR(0x61aa85);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa87:{NFSU2_TR(0x61aa87);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa8b:{NFSU2_TR(0x61aa8b);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa8e:{NFSU2_TR(0x61aa8e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa90:{NFSU2_TR(0x61aa90);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61aa97:{NFSU2_TR(0x61aa97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61aa9cull));
TAIL_STATIC(0x4012b0u,401);
}
B61aa9c:L61aa9c:{c.instructions+=12;NFSU2_TR(0x61aa9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61aa9f:{NFSU2_TR(0x61aa9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61aaa3:{NFSU2_TR(0x61aaa3);
u8 U[4];
w4(U+0,u32(u32(u32(0x430ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61aaaa:{NFSU2_TR(0x61aaaa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61aaab:{NFSU2_TR(0x61aaab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61aaac:{NFSU2_TR(0x61aaac);
u8 U[4];
w4(U+0,u32(u32(u32(0x368ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61aab3:{NFSU2_TR(0x61aab3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x540ull))));
}
B61aab9:{NFSU2_TR(0x61aab9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61aaba:{NFSU2_TR(0x61aaba);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61aabf:{NFSU2_TR(0x61aabf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61aac0:{NFSU2_TR(0x61aac0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61aac1:{NFSU2_TR(0x61aac1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61aac6ull));
TAIL_STATIC(0x48f660u,48f);
}
B61aac6:L61aac6:{c.instructions+=4;NFSU2_TR(0x61aac6);
u8 U[8];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61aacd:{NFSU2_TR(0x61aacd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
}
B61aad0:{NFSU2_TR(0x61aad0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61aad2:{NFSU2_TR(0x61aad2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61aaff;}}
}
B61aad4:L61aad4:{c.instructions+=4;NFSU2_TR(0x61aad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61aad7:{NFSU2_TR(0x61aad7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61aad8:{NFSU2_TR(0x61aad8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61aad9:{NFSU2_TR(0x61aad9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61aadeull));
TAIL_STATIC(0x60d700u,60d);
}
B61aade:L61aade:{c.instructions+=5;NFSU2_TR(0x61aade);
{u32 ea_=u32(u32(9051228u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61aae4:{NFSU2_TR(0x61aae4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61aae7:{NFSU2_TR(0x61aae7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61aae9:{NFSU2_TR(0x61aae9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B61aaec:{NFSU2_TR(0x61aaec);
if(r1(R+514)){{goto L61aaff;}}
}
B61aaee:L61aaee:{c.instructions+=3;NFSU2_TR(0x61aaee);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61aaf2:{NFSU2_TR(0x61aaf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1b6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61aaf8:{NFSU2_TR(0x61aaf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61aaff:L61aaff:{c.instructions+=3;NFSU2_TR(0x61aaff);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ab06:{NFSU2_TR(0x61ab06);
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
B61ab08:{NFSU2_TR(0x61ab08);
if(r1(R+518)){{goto L61ab25;}}
}
B61ab0a:L61ab0a:{c.instructions+=11;NFSU2_TR(0x61ab0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61ab0d:{NFSU2_TR(0x61ab0d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ab0f:{NFSU2_TR(0x61ab0f);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+8))));
}
B61ab11:{NFSU2_TR(0x61ab11);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x8000ull))));
}
B61ab17:{NFSU2_TR(0x61ab17);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ab18:{NFSU2_TR(0x61ab18);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ab19:{NFSU2_TR(0x61ab19);
__builtin_memmove((R+4),(R+0),4);
}
B61ab1b:{NFSU2_TR(0x61ab1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ab1c:{NFSU2_TR(0x61ab1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ab1d:{NFSU2_TR(0x61ab1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61ab20:{NFSU2_TR(0x61ab20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ab25ull));
TAIL_STATIC(0x5c5930u,5c5);
}
B61ab25:L61ab25:{c.instructions+=6;NFSU2_TR(0x61ab25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61ab26:{NFSU2_TR(0x61ab26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61ab27:{NFSU2_TR(0x61ab27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61ab28:{NFSU2_TR(0x61ab28);
__builtin_memmove((R+16),(R+20),4);
}
B61ab2a:{NFSU2_TR(0x61ab2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61ab2b:{NFSU2_TR(0x61ab2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61ab50:L61ab50:{c.instructions+=8;NFSU2_TR(0x61ab50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ab51:{NFSU2_TR(0x61ab51);
__builtin_memmove((R+20),(R+16),4);
}
B61ab53:{NFSU2_TR(0x61ab53);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B61ab56:{NFSU2_TR(0x61ab56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B61ab59:{NFSU2_TR(0x61ab59);
__builtin_memmove((R+0),gp(0x890080),4);
}
B61ab5e:{NFSU2_TR(0x61ab5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61ab60:{NFSU2_TR(0x61ab60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ab61:{NFSU2_TR(0x61ab61);
if(r1(R+518)){{goto L61abd7;}}
}
B61ab63:L61ab63:{c.instructions+=2;NFSU2_TR(0x61ab63);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ab65:{NFSU2_TR(0x61ab65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ab6aull));
TAIL_STATIC(0x48b1e0u,48b);
}
B61ab6a:L61ab6a:{c.instructions+=3;NFSU2_TR(0x61ab6a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61ab6d:{NFSU2_TR(0x61ab6d);
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
B61ab6f:{NFSU2_TR(0x61ab6f);
if(r1(R+518)){{goto L61abac;}}
}
B61ab71:L61ab71:{c.instructions+=4;NFSU2_TR(0x61ab71);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61ab74:{NFSU2_TR(0x61ab74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61ab76:{NFSU2_TR(0x61ab76);
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
B61ab78:{NFSU2_TR(0x61ab78);
if(r1(R+518)){{goto L61abac;}}
}
B61ab7a:L61ab7a:{c.instructions+=2;NFSU2_TR(0x61ab7a);
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
B61ab7c:{NFSU2_TR(0x61ab7c);
if(r1(R+518)){{goto L61abac;}}
}
B61ab7e:L61ab7e:{c.instructions+=3;NFSU2_TR(0x61ab7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B61ab81:{NFSU2_TR(0x61ab81);
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
B61ab83:{NFSU2_TR(0x61ab83);
if(r1(R+518)){{goto L61abac;}}
}
B61ab85:L61ab85:{c.instructions+=3;NFSU2_TR(0x61ab85);
__builtin_memmove((R+8),(R+0),4);
}
B61ab87:{NFSU2_TR(0x61ab87);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61ab89:{NFSU2_TR(0x61ab89);
if(r1(R+518)){{goto L61ab94;}}
}
B61ab8b:L61ab8b:{c.instructions+=2;NFSU2_TR(0x61ab8b);
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
B61ab8d:{NFSU2_TR(0x61ab8d);
if(r1(R+518)){{goto L61ab94;}}
}
B61ab8f:L61ab8f:{c.instructions+=2;NFSU2_TR(0x61ab8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B61ab92:{NFSU2_TR(0x61ab92);
{goto L61ab96;}
}
B61ab94:L61ab94:{c.instructions+=1;NFSU2_TR(0x61ab94);
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
B61ab96:L61ab96:{c.instructions+=2;NFSU2_TR(0x61ab96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61ab98:{NFSU2_TR(0x61ab98);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ab9bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B61ab9b:L61ab9b:{c.instructions+=2;NFSU2_TR(0x61ab9b);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a44e8),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61aba1:{NFSU2_TR(0x61aba1);
if(r1(R+518)){{goto L61aba8;}}
}
B61aba3:L61aba3:{c.instructions+=1;NFSU2_TR(0x61aba3);
__builtin_memmove(gp(0x8a44e8),(R+0),4);
}
B61aba8:L61aba8:{c.instructions+=2;NFSU2_TR(0x61aba8);
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
B61abaa:{NFSU2_TR(0x61abaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61abd0;}}
}
B61abac:L61abac:{c.instructions+=3;NFSU2_TR(0x61abac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61abae:{NFSU2_TR(0x61abae);
w4(R+4,u32(0x89e7a0ull));
}
B61abb3:{NFSU2_TR(0x61abb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61abb8ull));
TAIL_STATIC(0x5ed980u,5ed);
}
B61abb8:L61abb8:{c.instructions+=3;NFSU2_TR(0x61abb8);
__builtin_memmove((R+4),gp(0x890080),4);
}
B61abbe:{NFSU2_TR(0x61abbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61abbf:{NFSU2_TR(0x61abbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61abc4ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B61abc4:L61abc4:{c.instructions+=2;NFSU2_TR(0x61abc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61abc6:{NFSU2_TR(0x61abc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61abd0;}}
}
B61abc8:L61abc8:{c.instructions+=2;NFSU2_TR(0x61abc8);
__builtin_memmove((R+4),gp(0x890080),4);
}
B61abce:{NFSU2_TR(0x61abce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61abd0:L61abd0:{c.instructions+=3;NFSU2_TR(0x61abd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61abd3:{NFSU2_TR(0x61abd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61abd5:{NFSU2_TR(0x61abd5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61ac1f;}}
}
B61abd7:L61abd7:{c.instructions+=3;NFSU2_TR(0x61abd7);
__builtin_memmove((R+24),gp(0x8a30f0),4);
}
B61abdd:{NFSU2_TR(0x61abdd);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x8a30f0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8a30f0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8a30f0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61abe3:{NFSU2_TR(0x61abe3);
if(r1(R+518)){{goto L61ac82;}}
}
B61abe9:L61abe9:{c.instructions+=2;NFSU2_TR(0x61abe9);
w4(R+4,u32(0x8a30f0ull));
}
B61abee:{NFSU2_TR(0x61abee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61abf3ull));
TAIL_STATIC(0x502fd0u,502);
}
B61abf3:L61abf3:{c.instructions+=2;NFSU2_TR(0x61abf3);
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
B61abf5:{NFSU2_TR(0x61abf5);
if(r1(R+518)){{goto L61ac82;}}
}
B61abfb:L61abfb:{c.instructions+=1;NFSU2_TR(0x61abfb);
{goto L61ac00;}
}
B61ac00:L61ac00:{c.instructions+=3;NFSU2_TR(0x61ac00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61ac06:{NFSU2_TR(0x61ac06);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61ac08:{NFSU2_TR(0x61ac08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61ac15;}}
}
B61ac0a:L61ac0a:{c.instructions+=3;NFSU2_TR(0x61ac0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61ac0c:{NFSU2_TR(0x61ac0c);
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
B61ac0e:{NFSU2_TR(0x61ac0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61ac00u);}goto L61ac00;}}
}
B61ac10:L61ac10:{c.instructions+=4;NFSU2_TR(0x61ac10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61ac11:{NFSU2_TR(0x61ac11);
__builtin_memmove((R+16),(R+20),4);
}
B61ac13:{NFSU2_TR(0x61ac13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61ac14:{NFSU2_TR(0x61ac14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61ac15:L61ac15:{c.instructions+=3;NFSU2_TR(0x61ac15);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x910ull))));
}
B61ac1b:{NFSU2_TR(0x61ac1b);
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
B61ac1d:{NFSU2_TR(0x61ac1d);
if(r1(R+518)){{goto L61ac82;}}
}
B61ac1f:L61ac1f:{c.instructions+=2;NFSU2_TR(0x61ac1f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ac21:{NFSU2_TR(0x61ac21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ac26ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B61ac26:L61ac26:{c.instructions+=20;NFSU2_TR(0x61ac26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ac29:{NFSU2_TR(0x61ac29);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ac2c:{NFSU2_TR(0x61ac2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61ac2f:{NFSU2_TR(0x61ac2f);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ac32:{NFSU2_TR(0x61ac32);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B61ac35:{NFSU2_TR(0x61ac35);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61ac37:{NFSU2_TR(0x61ac37);
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
B61ac3a:{NFSU2_TR(0x61ac3a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ac3e:{NFSU2_TR(0x61ac3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ac42:{NFSU2_TR(0x61ac42);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ac46:{NFSU2_TR(0x61ac46);
{u32 ea_=u32(u32(8404560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ac4c:{NFSU2_TR(0x61ac4c);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61ac4e:{NFSU2_TR(0x61ac4e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ac52:{NFSU2_TR(0x61ac52);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ac55:{NFSU2_TR(0x61ac55);
{u32 ea_=u32(u32(8404564u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61ac5b:{NFSU2_TR(0x61ac5b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ac5f:{NFSU2_TR(0x61ac5f);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ac62:{NFSU2_TR(0x61ac62);
{u32 ea_=u32(u32(8404568u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61ac68:{NFSU2_TR(0x61ac68);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ac6c:{NFSU2_TR(0x61ac6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ac71ull));
TAIL_STATIC(0x5ba600u,5ba);
}
B61ac71:L61ac71:{c.instructions+=6;NFSU2_TR(0x61ac71);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61ac75:{NFSU2_TR(0x61ac75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ac76:{NFSU2_TR(0x61ac76);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61ac7a:{NFSU2_TR(0x61ac7a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ac7b:{NFSU2_TR(0x61ac7b);
__builtin_memmove((R+4),(R+0),4);
}
B61ac7d:{NFSU2_TR(0x61ac7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ac82ull));
TAIL_STATIC(0x5c3450u,5c3);
}
B61ac82:L61ac82:{c.instructions+=4;NFSU2_TR(0x61ac82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61ac83:{NFSU2_TR(0x61ac83);
__builtin_memmove((R+16),(R+20),4);
}
B61ac85:{NFSU2_TR(0x61ac85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61ac86:{NFSU2_TR(0x61ac86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61ac90:L61ac90:{c.instructions+=5;NFSU2_TR(0x61ac90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ac91:{NFSU2_TR(0x61ac91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ac92:{NFSU2_TR(0x61ac92);
__builtin_memmove((R+24),gp(0x8a30f0),4);
}
B61ac98:{NFSU2_TR(0x61ac98);
w4(R+4,u32(0x8a30f0ull));
}
B61ac9d:{NFSU2_TR(0x61ac9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61aca2ull));
TAIL_STATIC(0x502fd0u,502);
}
B61aca2:L61aca2:{c.instructions+=3;NFSU2_TR(0x61aca2);
__builtin_memmove((R+12),(R+0),4);
}
B61aca4:{NFSU2_TR(0x61aca4);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B61aca6:{NFSU2_TR(0x61aca6);
if(r1(R+518)){{goto L61acdc;}}
}
B61aca8:L61aca8:{c.instructions+=3;NFSU2_TR(0x61aca8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61aca9:{NFSU2_TR(0x61aca9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61acad:{NFSU2_TR(0x61acad);
__builtin_memmove((R+4),(R+4),4);
}
B61acb0:L61acb0:{c.instructions+=3;NFSU2_TR(0x61acb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61acb3:{NFSU2_TR(0x61acb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61acb5:{NFSU2_TR(0x61acb5);
if(r1(R+518)){{goto L61acd5;}}
}
B61acb7:L61acb7:{c.instructions+=3;NFSU2_TR(0x61acb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61acbd:{NFSU2_TR(0x61acbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61acbf:{NFSU2_TR(0x61acbf);
if(r1(R+518)){{goto L61acd5;}}
}
B61acc1:L61acc1:{c.instructions+=6;NFSU2_TR(0x61acc1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x920ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61acc7:{NFSU2_TR(0x61acc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61acc8:{NFSU2_TR(0x61acc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x910ull))));
__builtin_memmove((R+8),(U+0),4);
}
B61acce:{NFSU2_TR(0x61acce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61accf:{NFSU2_TR(0x61accf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61acd0:{NFSU2_TR(0x61acd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61acd5ull));
TAIL_STATIC(0x615a10u,615);
}
B61acd5:L61acd5:{c.instructions+=3;NFSU2_TR(0x61acd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61acd7:{NFSU2_TR(0x61acd7);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B61acd9:{NFSU2_TR(0x61acd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61acb0u);}goto L61acb0;}}
}
B61acdb:L61acdb:{c.instructions+=1;NFSU2_TR(0x61acdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61acdc:L61acdc:{c.instructions+=3;NFSU2_TR(0x61acdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61acdd:{NFSU2_TR(0x61acdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61acde:{NFSU2_TR(0x61acde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61ace0:L61ace0:{c.instructions+=3;NFSU2_TR(0x61ace0);
__builtin_memmove((R+0),gp(0x8a1c68),4);
}
B61ace5:{NFSU2_TR(0x61ace5);
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
B61ace7:{NFSU2_TR(0x61ace7);
if(r1(R+518)){{goto L61ad7b;}}
}
B61aced:L61aced:{c.instructions+=6;NFSU2_TR(0x61aced);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61acee:{NFSU2_TR(0x61acee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61acef:{NFSU2_TR(0x61acef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61acf0:{NFSU2_TR(0x61acf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61acf4:{NFSU2_TR(0x61acf4);
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
B61acf6:{NFSU2_TR(0x61acf6);
if(r1(R+518)){{goto L61ad78;}}
}
B61acfc:L61acfc:{c.instructions+=3;NFSU2_TR(0x61acfc);
__builtin_memmove((R+0),gp(0x8026c8),4);
}
B61ad01:{NFSU2_TR(0x61ad01);
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
B61ad03:{NFSU2_TR(0x61ad03);
if(r1(R+518)){{goto L61ad78;}}
}
B61ad05:L61ad05:{c.instructions+=3;NFSU2_TR(0x61ad05);
__builtin_memmove((R+0),gp(0x7f3d40),4);
}
B61ad0a:{NFSU2_TR(0x61ad0a);
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
B61ad0c:{NFSU2_TR(0x61ad0c);
if(r1(R+518)){{goto L61ad78;}}
}
B61ad0e:L61ad0e:{c.instructions+=3;NFSU2_TR(0x61ad0e);
__builtin_memmove((R+0),gp(0x870ce4),4);
}
B61ad13:{NFSU2_TR(0x61ad13);
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
B61ad15:{NFSU2_TR(0x61ad15);
if(r1(R+518)){{goto L61ad78;}}
}
B61ad17:L61ad17:{c.instructions+=3;NFSU2_TR(0x61ad17);
__builtin_memmove((R+24),gp(0x8a30f0),4);
}
B61ad1d:{NFSU2_TR(0x61ad1d);
w4(R+4,u32(0x8a30f0ull));
}
B61ad22:{NFSU2_TR(0x61ad22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ad27ull));
TAIL_STATIC(0x502fd0u,502);
}
B61ad27:L61ad27:{c.instructions+=3;NFSU2_TR(0x61ad27);
__builtin_memmove((R+20),(R+0),4);
}
B61ad29:{NFSU2_TR(0x61ad29);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B61ad2b:{NFSU2_TR(0x61ad2b);
if(r1(R+518)){{goto L61ad78;}}
}
B61ad2d:L61ad2d:{c.instructions+=2;NFSU2_TR(0x61ad2d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ad2e:{NFSU2_TR(0x61ad2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61ad32:L61ad32:{c.instructions+=3;NFSU2_TR(0x61ad32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ad38:{NFSU2_TR(0x61ad38);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61ad3a:{NFSU2_TR(0x61ad3a);
if(r1(R+518)){{goto L61ad71;}}
}
B61ad3c:L61ad3c:{c.instructions+=3;NFSU2_TR(0x61ad3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ad42:{NFSU2_TR(0x61ad42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61ad44:{NFSU2_TR(0x61ad44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61ad71;}}
}
B61ad46:L61ad46:{c.instructions+=3;NFSU2_TR(0x61ad46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ad4c:{NFSU2_TR(0x61ad4c);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61ad4f:{NFSU2_TR(0x61ad4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61ad71;}}
}
B61ad51:L61ad51:{c.instructions+=3;NFSU2_TR(0x61ad51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61ad54:{NFSU2_TR(0x61ad54);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61ad56:{NFSU2_TR(0x61ad56);
if(r1(R+518)){{goto L61ad71;}}
}
B61ad58:L61ad58:{c.instructions+=9;NFSU2_TR(0x61ad58);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ad5a:{NFSU2_TR(0x61ad5a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ad5b:{NFSU2_TR(0x61ad5b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ad5d:{NFSU2_TR(0x61ad5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x920ull))));
__builtin_memmove((R+8),(U+0),4);
}
B61ad63:{NFSU2_TR(0x61ad63);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ad64:{NFSU2_TR(0x61ad64);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x910ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61ad6a:{NFSU2_TR(0x61ad6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ad6b:{NFSU2_TR(0x61ad6b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ad6c:{NFSU2_TR(0x61ad6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ad71ull));
TAIL_STATIC(0x615630u,615);
}
B61ad71:L61ad71:{c.instructions+=3;NFSU2_TR(0x61ad71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61ad73:{NFSU2_TR(0x61ad73);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B61ad75:{NFSU2_TR(0x61ad75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61ad32u);}goto L61ad32;}}
}
B61ad77:L61ad77:{c.instructions+=1;NFSU2_TR(0x61ad77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61ad78:L61ad78:{c.instructions+=3;NFSU2_TR(0x61ad78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61ad79:{NFSU2_TR(0x61ad79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61ad7a:{NFSU2_TR(0x61ad7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61ad7b:L61ad7b:{c.instructions+=1;NFSU2_TR(0x61ad7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61ad80:L61ad80:{c.instructions+=3;NFSU2_TR(0x61ad80);
if(mod_hook_table[13]&&!mod_bypass_take(13)){SPILL();c.pc=0x61ad80u;mod_hook_table[13](c);SPILL();{u32 sp_=r4(R+16);u32 ra_=m4(sp_);w4(R+16,sp_+4u);TAIL_DYNAMIC(ra_);}}
__builtin_memmove((R+0),gp(0x870818),4);
}
B61ad85:{NFSU2_TR(0x61ad85);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a44ec),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61ad8b:{NFSU2_TR(0x61ad8b);
if(r1(R+518)){{goto L61ae8e;}}
}
B61ad91:L61ad91:{c.instructions+=7;NFSU2_TR(0x61ad91);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ad92:{NFSU2_TR(0x61ad92);
__builtin_memmove(gp(0x8a44ec),(R+0),4);
}
B61ad97:{NFSU2_TR(0x61ad97);
__builtin_memmove((R+0),gp(0x8026c8),4);
}
B61ad9c:{NFSU2_TR(0x61ad9c);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B61ad9e:{NFSU2_TR(0x61ad9e);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B61ada0:{NFSU2_TR(0x61ada0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ada1:{NFSU2_TR(0x61ada1);
if(r1(R+518)){{goto L61ae8c;}}
}
B61ada7:L61ada7:{c.instructions+=2;NFSU2_TR(0x61ada7);
u8 U[14];
__builtin_memmove((U+6),gp(0x7f3d40),4);
w1(R+512,u8((r4(U+6))<(r4(R+20))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+20)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61adad:{NFSU2_TR(0x61adad);
if(r1(R+518)){{goto L61ae8c;}}
}
B61adb3:L61adb3:{c.instructions+=2;NFSU2_TR(0x61adb3);
u8 U[14];
__builtin_memmove((U+6),gp(0x870ce4),4);
w1(R+512,u8((r4(U+6))<(r4(R+20))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+20)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61adb9:{NFSU2_TR(0x61adb9);
if(r1(R+518)){{goto L61ae8c;}}
}
B61adbf:L61adbf:{c.instructions+=3;NFSU2_TR(0x61adbf);
__builtin_memmove((R+0),gp(0x890080),4);
}
B61adc4:{NFSU2_TR(0x61adc4);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B61adc6:{NFSU2_TR(0x61adc6);
if(r1(R+518)){{goto L61ae8c;}}
}
B61adcc:L61adcc:{c.instructions+=3;NFSU2_TR(0x61adcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B61adce:{NFSU2_TR(0x61adce);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B61add0:{NFSU2_TR(0x61add0);
if(r1(R+518)){{goto L61ae8c;}}
}
B61add6:L61add6:{c.instructions+=4;NFSU2_TR(0x61add6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61add7:{NFSU2_TR(0x61add7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61addb:{NFSU2_TR(0x61addb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61addc:{NFSU2_TR(0x61addc);
__builtin_memmove((R+16),(R+16),4);
}
B61ade0:L61ade0:{c.instructions+=3;NFSU2_TR(0x61ade0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ade3:{NFSU2_TR(0x61ade3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61ade7:{NFSU2_TR(0x61ade7);
if(r1(R+518)){{goto L61ae7c;}}
}
B61aded:L61aded:{c.instructions+=5;NFSU2_TR(0x61aded);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61adf0:{NFSU2_TR(0x61adf0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61adf1:{NFSU2_TR(0x61adf1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61adf2:{NFSU2_TR(0x61adf2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61adf3:{NFSU2_TR(0x61adf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61adf8ull));
TAIL_STATIC(0x60d570u,60d);
}
B61adf8:L61adf8:{c.instructions+=3;NFSU2_TR(0x61adf8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B61adfb:{NFSU2_TR(0x61adfb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61adfd:{NFSU2_TR(0x61adfd);
if(r1(R+518)){{goto L61ae7c;}}
}
B61adff:L61adff:{c.instructions+=3;NFSU2_TR(0x61adff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61ae05:{NFSU2_TR(0x61ae05);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+20)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B61ae0b:{NFSU2_TR(0x61ae0b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L61ae13;}}
}
B61ae0d:L61ae0d:{c.instructions+=1;NFSU2_TR(0x61ae0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2180ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ae13:L61ae13:{c.instructions+=6;NFSU2_TR(0x61ae13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61ae19:{NFSU2_TR(0x61ae19);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B61ae1a:{NFSU2_TR(0x61ae1a);
__builtin_memmove((R+0),(R+4),4);
}
B61ae1c:{NFSU2_TR(0x61ae1c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61ae1f:{NFSU2_TR(0x61ae1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2180ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ae25:{NFSU2_TR(0x61ae25);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L61ae2d;}}
}
B61ae27:L61ae27:{c.instructions+=1;NFSU2_TR(0x61ae27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2180ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ae2d:L61ae2d:{c.instructions+=4;NFSU2_TR(0x61ae2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61ae30:{NFSU2_TR(0x61ae30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ae31:{NFSU2_TR(0x61ae31);
__builtin_memmove((R+4),(R+28),4);
}
B61ae33:{NFSU2_TR(0x61ae33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ae38ull));
TAIL_STATIC(0x60bcc0u,60b);
}
B61ae38:L61ae38:{c.instructions+=5;NFSU2_TR(0x61ae38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61ae3e:{NFSU2_TR(0x61ae3e);
u8 U[45];
w4(U+37,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B61ae41:{NFSU2_TR(0x61ae41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ae42:{NFSU2_TR(0x61ae42);
u8 U[12];
w4(U+0,u32(u32(u32(0x2090ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B61ae49:{NFSU2_TR(0x61ae49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ae4eull));
TAIL_STATIC(0x4013d0u,401);
}
B61ae4e:L61ae4e:{c.instructions+=4;NFSU2_TR(0x61ae4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ae51:{NFSU2_TR(0x61ae51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ae52:{NFSU2_TR(0x61ae52);
__builtin_memmove((R+4),(R+28),4);
}
B61ae54:{NFSU2_TR(0x61ae54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ae59ull));
TAIL_STATIC(0x60bc90u,60b);
}
B61ae59:L61ae59:{c.instructions+=11;NFSU2_TR(0x61ae59);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ae5c:{NFSU2_TR(0x61ae5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61ae62:{NFSU2_TR(0x61ae62);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ae65:{NFSU2_TR(0x61ae65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B61ae67:{NFSU2_TR(0x61ae67);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61ae69:{NFSU2_TR(0x61ae69);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x215ull))));
}
B61ae6f:{NFSU2_TR(0x61ae6f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B61ae72:{NFSU2_TR(0x61ae72);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B61ae74:{NFSU2_TR(0x61ae74);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ae77:{NFSU2_TR(0x61ae77);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B61ae79:{NFSU2_TR(0x61ae79);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ae7c:L61ae7c:{c.instructions+=3;NFSU2_TR(0x61ae7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B61ae7e:{NFSU2_TR(0x61ae7e);
u8 U[14];
__builtin_memmove((U+6),gp(0x890080),4);
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
B61ae84:{NFSU2_TR(0x61ae84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61ade0u);}goto L61ade0;}}
}
B61ae8a:L61ae8a:{c.instructions+=2;NFSU2_TR(0x61ae8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61ae8b:{NFSU2_TR(0x61ae8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61ae8c:L61ae8c:{c.instructions+=2;NFSU2_TR(0x61ae8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61ae8d:{NFSU2_TR(0x61ae8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61ae8e:L61ae8e:{c.instructions+=1;NFSU2_TR(0x61ae8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61ae90:L61ae90:{c.instructions+=10;NFSU2_TR(0x61ae90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ae91:{NFSU2_TR(0x61ae91);
__builtin_memmove((R+20),(R+16),4);
}
B61ae93:{NFSU2_TR(0x61ae93);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B61ae96:{NFSU2_TR(0x61ae96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B61ae99:{NFSU2_TR(0x61ae99);
__builtin_memmove((R+0),gp(0x8026c8),4);
}
B61ae9e:{NFSU2_TR(0x61ae9e);
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
B61aea0:{NFSU2_TR(0x61aea0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61aea1:{NFSU2_TR(0x61aea1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61aea2:{NFSU2_TR(0x61aea2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61aea3:{NFSU2_TR(0x61aea3);
if(r1(R+518)){TAIL_STATIC(0x61b1e1u,61b);}
}
B61aea9:L61aea9:{c.instructions+=3;NFSU2_TR(0x61aea9);
__builtin_memmove((R+0),gp(0x7f3d40),4);
}
B61aeae:{NFSU2_TR(0x61aeae);
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
B61aeb0:{NFSU2_TR(0x61aeb0);
if(r1(R+518)){TAIL_STATIC(0x61b1e1u,61b);}
}
B61aeb6:L61aeb6:{c.instructions+=3;NFSU2_TR(0x61aeb6);
__builtin_memmove((R+0),gp(0x870ce4),4);
}
B61aebb:{NFSU2_TR(0x61aebb);
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
B61aebd:{NFSU2_TR(0x61aebd);
if(r1(R+518)){TAIL_STATIC(0x61b1e1u,61b);}
}
B61aec3:L61aec3:{c.instructions+=5;NFSU2_TR(0x61aec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61aec6:{NFSU2_TR(0x61aec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61aec9:{NFSU2_TR(0x61aec9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61aecd:{NFSU2_TR(0x61aecd);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61aed4:{NFSU2_TR(0x61aed4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61aee4;}}
}
B61aed6:L61aed6:{c.instructions+=3;NFSU2_TR(0x61aed6);
__builtin_memmove((R+4),gp(0x7f39f0),4);
}
B61aedc:{NFSU2_TR(0x61aedc);
__builtin_memmove(gp(0x7f3a48),(R+4),4);
}
B61aee2:{NFSU2_TR(0x61aee2);
{goto L61aeee;}
}
B61aee4:L61aee4:{c.instructions+=1;NFSU2_TR(0x61aee4);
s4(0x7f3a48,u32(0x40333333ull));
}
B61aeee:L61aeee:{c.instructions+=2;NFSU2_TR(0x61aeee);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61aef2:{NFSU2_TR(0x61aef2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61af2c;}}
}
B61aef4:L61aef4:{c.instructions+=10;NFSU2_TR(0x61aef4);
{u32 ea_=u32(u32(8021856u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aefa:{NFSU2_TR(0x61aefa);
{u32 ea_=u32(u32(8337992u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61af00:{NFSU2_TR(0x61af00);
{u32 ea_=u32(u32(8337992u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61af06:{NFSU2_TR(0x61af06);
{u32 ea_=u32(u32(8021860u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61af0c:{NFSU2_TR(0x61af0c);
{u32 ea_=u32(u32(8337880u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61af12:{NFSU2_TR(0x61af12);
{u32 ea_=u32(u32(8337968u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61af18:{NFSU2_TR(0x61af18);
{u32 ea_=u32(u32(8337884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61af1e:{NFSU2_TR(0x61af1e);
{u32 ea_=u32(u32(8021860u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61af24:{NFSU2_TR(0x61af24);
{u32 ea_=u32(u32(8337972u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61af2a:{NFSU2_TR(0x61af2a);
{goto L61af42;}
}
B61af2c:L61af2c:{c.instructions+=4;NFSU2_TR(0x61af2c);
__builtin_memmove((R+8),gp(0x7f39d8),4);
}
B61af32:{NFSU2_TR(0x61af32);
__builtin_memmove((R+0),gp(0x7f39dc),4);
}
B61af37:{NFSU2_TR(0x61af37);
__builtin_memmove(gp(0x7f3a30),(R+8),4);
}
B61af3d:{NFSU2_TR(0x61af3d);
__builtin_memmove(gp(0x7f3a34),(R+0),4);
}
B61af42:L61af42:{c.instructions+=3;NFSU2_TR(0x61af42);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61af45:{NFSU2_TR(0x61af45);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61af48:{NFSU2_TR(0x61af48);
if(r1(R+518)){{goto L61af5d;}}
}
B61af4a:L61af4a:{c.instructions+=2;NFSU2_TR(0x61af4a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61af4d:{NFSU2_TR(0x61af4d);
if(r1(R+518)){{goto L61af5d;}}
}
B61af4f:L61af4f:{c.instructions+=3;NFSU2_TR(0x61af4f);
__builtin_memmove((R+4),gp(0x7f3a20),4);
}
B61af55:{NFSU2_TR(0x61af55);
__builtin_memmove(gp(0x7f3aa4),(R+4),4);
}
B61af5b:{NFSU2_TR(0x61af5b);
{goto L61af67;}
}
B61af5d:L61af5d:{c.instructions+=1;NFSU2_TR(0x61af5d);
s4(0x7f3aa4,u32(0x3eae147bull));
}
B61af67:L61af67:{c.instructions+=3;NFSU2_TR(0x61af67);
__builtin_memmove((R+0),gp(0x890080),4);
}
B61af6c:{NFSU2_TR(0x61af6c);
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
B61af6e:{NFSU2_TR(0x61af6e);
if(r1(R+518)){TAIL_STATIC(0x61b1e1u,61b);}
}
B61af74:L61af74:{c.instructions+=5;NFSU2_TR(0x61af74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61af76:{NFSU2_TR(0x61af76);
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
B61af78:{NFSU2_TR(0x61af78);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x63ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61af80:{NFSU2_TR(0x61af80);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61af84:{NFSU2_TR(0x61af84);
if(r1(R+518)){TAIL_STATIC(0x61b1e1u,61b);}
}
B61af8a:L61af8a:{c.instructions+=1;NFSU2_TR(0x61af8a);
{goto L61af90;}
}
B61af8c:L61af8c:{c.instructions+=1;NFSU2_TR(0x61af8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61af90:L61af90:{c.instructions+=5;NFSU2_TR(0x61af90);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61af94:{NFSU2_TR(0x61af94);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61af95:{NFSU2_TR(0x61af95);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61af96:{NFSU2_TR(0x61af96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61af97:{NFSU2_TR(0x61af97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61af9cull));
TAIL_STATIC(0x60d570u,60d);
}
B61af9c:L61af9c:{c.instructions+=3;NFSU2_TR(0x61af9c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B61af9f:{NFSU2_TR(0x61af9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61afa1:{NFSU2_TR(0x61afa1);
if(r1(R+518)){TAIL_STATIC(0x61b1cfu,61b);}
}
B61afa7:L61afa7:{c.instructions+=3;NFSU2_TR(0x61afa7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61afab:{NFSU2_TR(0x61afab);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61afad:{NFSU2_TR(0x61afad);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x61b1cfu,61b);}
}
B61afb3:L61afb3:{c.instructions+=11;NFSU2_TR(0x61afb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61afb6:{NFSU2_TR(0x61afb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61afbc:{NFSU2_TR(0x61afbc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B61afbd:{NFSU2_TR(0x61afbd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61afbf:{NFSU2_TR(0x61afbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61afc3:{NFSU2_TR(0x61afc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61afc6:{NFSU2_TR(0x61afc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61afc7:{NFSU2_TR(0x61afc7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61afc9:{NFSU2_TR(0x61afc9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61afca:{NFSU2_TR(0x61afca);
__builtin_memmove((R+4),(R+24),4);
}
B61afcc:{NFSU2_TR(0x61afcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61afd1ull));
TAIL_STATIC(0x60bcc0u,60b);
}
B61afd1:L61afd1:{c.instructions+=4;NFSU2_TR(0x61afd1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61afd2:{NFSU2_TR(0x61afd2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61afd3:{NFSU2_TR(0x61afd3);
__builtin_memmove((R+4),(R+24),4);
}
B61afd5:{NFSU2_TR(0x61afd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61afdaull));
TAIL_STATIC(0x60bc90u,60b);
}
B61afda:L61afda:{c.instructions+=5;NFSU2_TR(0x61afda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61afdd:{NFSU2_TR(0x61afdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61afde:{NFSU2_TR(0x61afde);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61afdf:{NFSU2_TR(0x61afdf);
__builtin_memmove((R+4),(R+28),4);
}
B61afe1:{NFSU2_TR(0x61afe1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61afe6ull));
TAIL_STATIC(0x615630u,615);
}
B61afe6:L61afe6:{c.instructions+=5;NFSU2_TR(0x61afe6);
__builtin_memmove((R+8),gp(0x7a675c),4);
}
B61afec:{NFSU2_TR(0x61afec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61afef:{NFSU2_TR(0x61afef);
__builtin_memmove((R+4),(R+12),4);
}
B61aff1:{NFSU2_TR(0x61aff1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61aff5:{NFSU2_TR(0x61aff5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61affaull));
TAIL_STATIC(0x59fa30u,59f);
}
B61affa:L61affa:{c.instructions+=2;NFSU2_TR(0x61affa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61affc:{NFSU2_TR(0x61affc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x61b000u,61b);
}
XIT:NFSU2_TR_EXIT(0x61a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
