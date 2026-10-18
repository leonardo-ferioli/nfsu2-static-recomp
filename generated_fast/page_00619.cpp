#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_5c5(u8* __restrict R,Cpu& c);
u32 body_60d(u8* __restrict R,Cpu& c);
u32 body_61a(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x619,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x619,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_619(u8* __restrict R,Cpu& c);
u32 page_619(Cpu& c){return body_619(c.regs.data(),c);}
__attribute__((noinline)) u32 body_619(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x619002:goto L619002;
case 0x619005:c.instructions+=86;goto B619005;
case 0x619007:c.instructions+=85;goto B619007;
case 0x61900b:c.instructions+=84;goto B61900b;
case 0x61900e:c.instructions+=83;goto B61900e;
case 0x619010:c.instructions+=82;goto B619010;
case 0x619014:c.instructions+=81;goto B619014;
case 0x619017:c.instructions+=80;goto B619017;
case 0x619019:c.instructions+=79;goto B619019;
case 0x619020:c.instructions+=78;goto B619020;
case 0x619024:c.instructions+=77;goto B619024;
case 0x619027:c.instructions+=76;goto B619027;
case 0x61902b:c.instructions+=75;goto B61902b;
case 0x61902e:c.instructions+=74;goto B61902e;
case 0x619030:c.instructions+=73;goto B619030;
case 0x619034:c.instructions+=72;goto B619034;
case 0x619037:c.instructions+=71;goto B619037;
case 0x619039:c.instructions+=70;goto B619039;
case 0x61903d:c.instructions+=69;goto B61903d;
case 0x619040:c.instructions+=68;goto B619040;
case 0x619042:c.instructions+=67;goto B619042;
case 0x619049:c.instructions+=66;goto B619049;
case 0x61904d:c.instructions+=65;goto B61904d;
case 0x619050:c.instructions+=64;goto B619050;
case 0x619054:c.instructions+=63;goto B619054;
case 0x619057:c.instructions+=62;goto B619057;
case 0x619059:c.instructions+=61;goto B619059;
case 0x61905d:c.instructions+=60;goto B61905d;
case 0x619060:c.instructions+=59;goto B619060;
case 0x619062:c.instructions+=58;goto B619062;
case 0x619066:c.instructions+=57;goto B619066;
case 0x619069:c.instructions+=56;goto B619069;
case 0x61906b:c.instructions+=55;goto B61906b;
case 0x619072:c.instructions+=54;goto B619072;
case 0x619076:c.instructions+=53;goto B619076;
case 0x619079:c.instructions+=52;goto B619079;
case 0x61907d:c.instructions+=51;goto B61907d;
case 0x61907f:c.instructions+=50;goto B61907f;
case 0x619081:c.instructions+=49;goto B619081;
case 0x619085:c.instructions+=48;goto B619085;
case 0x619088:c.instructions+=47;goto B619088;
case 0x61908a:c.instructions+=46;goto B61908a;
case 0x61908e:c.instructions+=45;goto B61908e;
case 0x619091:c.instructions+=44;goto B619091;
case 0x619093:c.instructions+=43;goto B619093;
case 0x61909a:c.instructions+=42;goto B61909a;
case 0x61909e:c.instructions+=41;goto B61909e;
case 0x6190a2:c.instructions+=40;goto B6190a2;
case 0x6190a9:c.instructions+=39;goto B6190a9;
case 0x6190ac:c.instructions+=38;goto B6190ac;
case 0x6190af:c.instructions+=37;goto B6190af;
case 0x6190b3:c.instructions+=36;goto B6190b3;
case 0x6190b4:c.instructions+=35;goto B6190b4;
case 0x6190b7:c.instructions+=34;goto B6190b7;
case 0x6190b8:c.instructions+=33;goto B6190b8;
case 0x6190ba:c.instructions+=32;goto B6190ba;
case 0x6190be:c.instructions+=31;goto B6190be;
case 0x6190c1:c.instructions+=30;goto B6190c1;
case 0x6190c3:c.instructions+=29;goto B6190c3;
case 0x6190c7:c.instructions+=28;goto B6190c7;
case 0x6190ca:c.instructions+=27;goto B6190ca;
case 0x6190cc:c.instructions+=26;goto B6190cc;
case 0x6190d3:c.instructions+=25;goto B6190d3;
case 0x6190d7:c.instructions+=24;goto B6190d7;
case 0x6190da:c.instructions+=23;goto B6190da;
case 0x6190de:c.instructions+=22;goto B6190de;
case 0x6190e1:c.instructions+=21;goto B6190e1;
case 0x6190e3:c.instructions+=20;goto B6190e3;
case 0x6190e7:c.instructions+=19;goto B6190e7;
case 0x6190ea:c.instructions+=18;goto B6190ea;
case 0x6190ec:c.instructions+=17;goto B6190ec;
case 0x6190f0:c.instructions+=16;goto B6190f0;
case 0x6190f3:c.instructions+=15;goto B6190f3;
case 0x6190f5:c.instructions+=14;goto B6190f5;
case 0x6190fc:c.instructions+=13;goto B6190fc;
case 0x619100:c.instructions+=12;goto B619100;
case 0x619103:c.instructions+=11;goto B619103;
case 0x619107:c.instructions+=10;goto B619107;
case 0x61910a:c.instructions+=9;goto B61910a;
case 0x61910c:c.instructions+=8;goto B61910c;
case 0x619110:c.instructions+=7;goto B619110;
case 0x619113:c.instructions+=6;goto B619113;
case 0x619115:c.instructions+=5;goto B619115;
case 0x619119:c.instructions+=4;goto B619119;
case 0x61911c:c.instructions+=3;goto B61911c;
case 0x61911e:c.instructions+=2;goto B61911e;
case 0x619125:c.instructions+=1;goto B619125;
case 0x61912a:goto L61912a;
case 0x61912d:c.instructions+=13;goto B61912d;
case 0x619131:c.instructions+=12;goto B619131;
case 0x619138:c.instructions+=11;goto B619138;
case 0x619139:c.instructions+=10;goto B619139;
case 0x61913a:c.instructions+=9;goto B61913a;
case 0x61913e:c.instructions+=8;goto B61913e;
case 0x619145:c.instructions+=7;goto B619145;
case 0x619146:c.instructions+=6;goto B619146;
case 0x61914b:c.instructions+=5;goto B61914b;
case 0x61914e:c.instructions+=4;goto B61914e;
case 0x619154:c.instructions+=3;goto B619154;
case 0x619155:c.instructions+=2;goto B619155;
case 0x619156:c.instructions+=1;goto B619156;
case 0x61915b:goto L61915b;
case 0x61915e:c.instructions+=2;goto B61915e;
case 0x619160:c.instructions+=1;goto B619160;
case 0x619162:goto L619162;
case 0x619165:c.instructions+=14;goto B619165;
case 0x61916c:c.instructions+=13;goto B61916c;
case 0x61916e:c.instructions+=12;goto B61916e;
case 0x619171:c.instructions+=11;goto B619171;
case 0x619176:c.instructions+=10;goto B619176;
case 0x619178:c.instructions+=9;goto B619178;
case 0x619179:c.instructions+=8;goto B619179;
case 0x61917d:c.instructions+=7;goto B61917d;
case 0x619182:c.instructions+=6;goto B619182;
case 0x619183:c.instructions+=5;goto B619183;
case 0x619187:c.instructions+=4;goto B619187;
case 0x61918a:c.instructions+=3;goto B61918a;
case 0x61918b:c.instructions+=2;goto B61918b;
case 0x61918c:c.instructions+=1;goto B61918c;
case 0x619191:goto L619191;
case 0x619195:c.instructions+=2;goto B619195;
case 0x619197:c.instructions+=1;goto B619197;
case 0x61919d:goto L61919d;
case 0x6191a4:c.instructions+=196;goto B6191a4;
case 0x6191aa:c.instructions+=195;goto B6191aa;
case 0x6191b1:c.instructions+=194;goto B6191b1;
case 0x6191b7:c.instructions+=193;goto B6191b7;
case 0x6191b9:c.instructions+=192;goto B6191b9;
case 0x6191c0:c.instructions+=191;goto B6191c0;
case 0x6191c6:c.instructions+=190;goto B6191c6;
case 0x6191c8:c.instructions+=189;goto B6191c8;
case 0x6191cf:c.instructions+=188;goto B6191cf;
case 0x6191d5:c.instructions+=187;goto B6191d5;
case 0x6191d7:c.instructions+=186;goto B6191d7;
case 0x6191db:c.instructions+=185;goto B6191db;
case 0x6191e2:c.instructions+=184;goto B6191e2;
case 0x6191e8:c.instructions+=183;goto B6191e8;
case 0x6191ef:c.instructions+=182;goto B6191ef;
case 0x6191f5:c.instructions+=181;goto B6191f5;
case 0x6191f7:c.instructions+=180;goto B6191f7;
case 0x6191fe:c.instructions+=179;goto B6191fe;
case 0x619204:c.instructions+=178;goto B619204;
case 0x619206:c.instructions+=177;goto B619206;
case 0x61920d:c.instructions+=176;goto B61920d;
case 0x619213:c.instructions+=175;goto B619213;
case 0x619215:c.instructions+=174;goto B619215;
case 0x619219:c.instructions+=173;goto B619219;
case 0x619220:c.instructions+=172;goto B619220;
case 0x619226:c.instructions+=171;goto B619226;
case 0x61922d:c.instructions+=170;goto B61922d;
case 0x619233:c.instructions+=169;goto B619233;
case 0x619235:c.instructions+=168;goto B619235;
case 0x61923c:c.instructions+=167;goto B61923c;
case 0x619242:c.instructions+=166;goto B619242;
case 0x619244:c.instructions+=165;goto B619244;
case 0x61924b:c.instructions+=164;goto B61924b;
case 0x619251:c.instructions+=163;goto B619251;
case 0x619253:c.instructions+=162;goto B619253;
case 0x619257:c.instructions+=161;goto B619257;
case 0x61925e:c.instructions+=160;goto B61925e;
case 0x619264:c.instructions+=159;goto B619264;
case 0x61926b:c.instructions+=158;goto B61926b;
case 0x619271:c.instructions+=157;goto B619271;
case 0x619273:c.instructions+=156;goto B619273;
case 0x61927a:c.instructions+=155;goto B61927a;
case 0x619280:c.instructions+=154;goto B619280;
case 0x619282:c.instructions+=153;goto B619282;
case 0x619289:c.instructions+=152;goto B619289;
case 0x61928f:c.instructions+=151;goto B61928f;
case 0x619291:c.instructions+=150;goto B619291;
case 0x619295:c.instructions+=149;goto B619295;
case 0x61929c:c.instructions+=148;goto B61929c;
case 0x6192a2:c.instructions+=147;goto B6192a2;
case 0x6192a9:c.instructions+=146;goto B6192a9;
case 0x6192af:c.instructions+=145;goto B6192af;
case 0x6192b1:c.instructions+=144;goto B6192b1;
case 0x6192b8:c.instructions+=143;goto B6192b8;
case 0x6192be:c.instructions+=142;goto B6192be;
case 0x6192c0:c.instructions+=141;goto B6192c0;
case 0x6192c7:c.instructions+=140;goto B6192c7;
case 0x6192cd:c.instructions+=139;goto B6192cd;
case 0x6192cf:c.instructions+=138;goto B6192cf;
case 0x6192d6:c.instructions+=137;goto B6192d6;
case 0x6192dd:c.instructions+=136;goto B6192dd;
case 0x6192e3:c.instructions+=135;goto B6192e3;
case 0x6192ea:c.instructions+=134;goto B6192ea;
case 0x6192f0:c.instructions+=133;goto B6192f0;
case 0x6192f2:c.instructions+=132;goto B6192f2;
case 0x6192f9:c.instructions+=131;goto B6192f9;
case 0x6192ff:c.instructions+=130;goto B6192ff;
case 0x619301:c.instructions+=129;goto B619301;
case 0x619308:c.instructions+=128;goto B619308;
case 0x61930e:c.instructions+=127;goto B61930e;
case 0x619310:c.instructions+=126;goto B619310;
case 0x619317:c.instructions+=125;goto B619317;
case 0x61931e:c.instructions+=124;goto B61931e;
case 0x619324:c.instructions+=123;goto B619324;
case 0x61932b:c.instructions+=122;goto B61932b;
case 0x619331:c.instructions+=121;goto B619331;
case 0x619333:c.instructions+=120;goto B619333;
case 0x61933a:c.instructions+=119;goto B61933a;
case 0x619340:c.instructions+=118;goto B619340;
case 0x619342:c.instructions+=117;goto B619342;
case 0x619349:c.instructions+=116;goto B619349;
case 0x61934f:c.instructions+=115;goto B61934f;
case 0x619351:c.instructions+=114;goto B619351;
case 0x619358:c.instructions+=113;goto B619358;
case 0x61935f:c.instructions+=112;goto B61935f;
case 0x619365:c.instructions+=111;goto B619365;
case 0x61936c:c.instructions+=110;goto B61936c;
case 0x619372:c.instructions+=109;goto B619372;
case 0x619374:c.instructions+=108;goto B619374;
case 0x61937b:c.instructions+=107;goto B61937b;
case 0x619381:c.instructions+=106;goto B619381;
case 0x619383:c.instructions+=105;goto B619383;
case 0x61938a:c.instructions+=104;goto B61938a;
case 0x619390:c.instructions+=103;goto B619390;
case 0x619392:c.instructions+=102;goto B619392;
case 0x619399:c.instructions+=101;goto B619399;
case 0x6193a0:c.instructions+=100;goto B6193a0;
case 0x6193a6:c.instructions+=99;goto B6193a6;
case 0x6193ad:c.instructions+=98;goto B6193ad;
case 0x6193b3:c.instructions+=97;goto B6193b3;
case 0x6193b5:c.instructions+=96;goto B6193b5;
case 0x6193bc:c.instructions+=95;goto B6193bc;
case 0x6193c2:c.instructions+=94;goto B6193c2;
case 0x6193c4:c.instructions+=93;goto B6193c4;
case 0x6193cb:c.instructions+=92;goto B6193cb;
case 0x6193d1:c.instructions+=91;goto B6193d1;
case 0x6193d3:c.instructions+=90;goto B6193d3;
case 0x6193da:c.instructions+=89;goto B6193da;
case 0x6193e1:c.instructions+=88;goto B6193e1;
case 0x6193e7:c.instructions+=87;goto B6193e7;
case 0x6193ee:c.instructions+=86;goto B6193ee;
case 0x6193f4:c.instructions+=85;goto B6193f4;
case 0x6193f6:c.instructions+=84;goto B6193f6;
case 0x6193fd:c.instructions+=83;goto B6193fd;
case 0x619403:c.instructions+=82;goto B619403;
case 0x619405:c.instructions+=81;goto B619405;
case 0x61940c:c.instructions+=80;goto B61940c;
case 0x619412:c.instructions+=79;goto B619412;
case 0x619414:c.instructions+=78;goto B619414;
case 0x61941b:c.instructions+=77;goto B61941b;
case 0x619422:c.instructions+=76;goto B619422;
case 0x619428:c.instructions+=75;goto B619428;
case 0x61942f:c.instructions+=74;goto B61942f;
case 0x619435:c.instructions+=73;goto B619435;
case 0x619437:c.instructions+=72;goto B619437;
case 0x61943e:c.instructions+=71;goto B61943e;
case 0x619444:c.instructions+=70;goto B619444;
case 0x619446:c.instructions+=69;goto B619446;
case 0x61944d:c.instructions+=68;goto B61944d;
case 0x619453:c.instructions+=67;goto B619453;
case 0x619455:c.instructions+=66;goto B619455;
case 0x61945c:c.instructions+=65;goto B61945c;
case 0x619463:c.instructions+=64;goto B619463;
case 0x619469:c.instructions+=63;goto B619469;
case 0x619470:c.instructions+=62;goto B619470;
case 0x619476:c.instructions+=61;goto B619476;
case 0x619478:c.instructions+=60;goto B619478;
case 0x61947f:c.instructions+=59;goto B61947f;
case 0x619485:c.instructions+=58;goto B619485;
case 0x619487:c.instructions+=57;goto B619487;
case 0x61948e:c.instructions+=56;goto B61948e;
case 0x619494:c.instructions+=55;goto B619494;
case 0x619496:c.instructions+=54;goto B619496;
case 0x61949d:c.instructions+=53;goto B61949d;
case 0x6194a4:c.instructions+=52;goto B6194a4;
case 0x6194aa:c.instructions+=51;goto B6194aa;
case 0x6194b1:c.instructions+=50;goto B6194b1;
case 0x6194b7:c.instructions+=49;goto B6194b7;
case 0x6194b9:c.instructions+=48;goto B6194b9;
case 0x6194c0:c.instructions+=47;goto B6194c0;
case 0x6194c6:c.instructions+=46;goto B6194c6;
case 0x6194c8:c.instructions+=45;goto B6194c8;
case 0x6194cf:c.instructions+=44;goto B6194cf;
case 0x6194d5:c.instructions+=43;goto B6194d5;
case 0x6194d7:c.instructions+=42;goto B6194d7;
case 0x6194de:c.instructions+=41;goto B6194de;
case 0x6194e5:c.instructions+=40;goto B6194e5;
case 0x6194eb:c.instructions+=39;goto B6194eb;
case 0x6194f2:c.instructions+=38;goto B6194f2;
case 0x6194f8:c.instructions+=37;goto B6194f8;
case 0x6194fa:c.instructions+=36;goto B6194fa;
case 0x619501:c.instructions+=35;goto B619501;
case 0x619507:c.instructions+=34;goto B619507;
case 0x619509:c.instructions+=33;goto B619509;
case 0x619510:c.instructions+=32;goto B619510;
case 0x619516:c.instructions+=31;goto B619516;
case 0x619518:c.instructions+=30;goto B619518;
case 0x61951f:c.instructions+=29;goto B61951f;
case 0x619526:c.instructions+=28;goto B619526;
case 0x61952c:c.instructions+=27;goto B61952c;
case 0x619533:c.instructions+=26;goto B619533;
case 0x619539:c.instructions+=25;goto B619539;
case 0x61953b:c.instructions+=24;goto B61953b;
case 0x619542:c.instructions+=23;goto B619542;
case 0x619548:c.instructions+=22;goto B619548;
case 0x61954a:c.instructions+=21;goto B61954a;
case 0x619551:c.instructions+=20;goto B619551;
case 0x619557:c.instructions+=19;goto B619557;
case 0x619559:c.instructions+=18;goto B619559;
case 0x619560:c.instructions+=17;goto B619560;
case 0x619567:c.instructions+=16;goto B619567;
case 0x61956d:c.instructions+=15;goto B61956d;
case 0x619574:c.instructions+=14;goto B619574;
case 0x619578:c.instructions+=13;goto B619578;
case 0x61957e:c.instructions+=12;goto B61957e;
case 0x61957f:c.instructions+=11;goto B61957f;
case 0x619583:c.instructions+=10;goto B619583;
case 0x619584:c.instructions+=9;goto B619584;
case 0x619586:c.instructions+=8;goto B619586;
case 0x61958d:c.instructions+=7;goto B61958d;
case 0x619593:c.instructions+=6;goto B619593;
case 0x619595:c.instructions+=5;goto B619595;
case 0x61959c:c.instructions+=4;goto B61959c;
case 0x6195a2:c.instructions+=3;goto B6195a2;
case 0x6195a4:c.instructions+=2;goto B6195a4;
case 0x6195ab:c.instructions+=1;goto B6195ab;
case 0x6195b0:goto L6195b0;
case 0x6195b7:c.instructions+=196;goto B6195b7;
case 0x6195bb:c.instructions+=195;goto B6195bb;
case 0x6195c2:c.instructions+=194;goto B6195c2;
case 0x6195c6:c.instructions+=193;goto B6195c6;
case 0x6195c8:c.instructions+=192;goto B6195c8;
case 0x6195cc:c.instructions+=191;goto B6195cc;
case 0x6195d3:c.instructions+=190;goto B6195d3;
case 0x6195d5:c.instructions+=189;goto B6195d5;
case 0x6195d9:c.instructions+=188;goto B6195d9;
case 0x6195e0:c.instructions+=187;goto B6195e0;
case 0x6195e2:c.instructions+=186;goto B6195e2;
case 0x6195e6:c.instructions+=185;goto B6195e6;
case 0x6195ed:c.instructions+=184;goto B6195ed;
case 0x6195f1:c.instructions+=183;goto B6195f1;
case 0x6195f8:c.instructions+=182;goto B6195f8;
case 0x6195fc:c.instructions+=181;goto B6195fc;
case 0x6195fe:c.instructions+=180;goto B6195fe;
case 0x619605:c.instructions+=179;goto B619605;
case 0x619609:c.instructions+=178;goto B619609;
case 0x61960b:c.instructions+=177;goto B61960b;
case 0x61960f:c.instructions+=176;goto B61960f;
case 0x619616:c.instructions+=175;goto B619616;
case 0x619618:c.instructions+=174;goto B619618;
case 0x61961c:c.instructions+=173;goto B61961c;
case 0x619623:c.instructions+=172;goto B619623;
case 0x619627:c.instructions+=171;goto B619627;
case 0x61962e:c.instructions+=170;goto B61962e;
case 0x619632:c.instructions+=169;goto B619632;
case 0x619634:c.instructions+=168;goto B619634;
case 0x61963b:c.instructions+=167;goto B61963b;
case 0x61963f:c.instructions+=166;goto B61963f;
case 0x619641:c.instructions+=165;goto B619641;
case 0x619645:c.instructions+=164;goto B619645;
case 0x61964c:c.instructions+=163;goto B61964c;
case 0x61964e:c.instructions+=162;goto B61964e;
case 0x619655:c.instructions+=161;goto B619655;
case 0x61965c:c.instructions+=160;goto B61965c;
case 0x619660:c.instructions+=159;goto B619660;
case 0x619667:c.instructions+=158;goto B619667;
case 0x61966b:c.instructions+=157;goto B61966b;
case 0x61966d:c.instructions+=156;goto B61966d;
case 0x619674:c.instructions+=155;goto B619674;
case 0x619678:c.instructions+=154;goto B619678;
case 0x61967a:c.instructions+=153;goto B61967a;
case 0x61967e:c.instructions+=152;goto B61967e;
case 0x619685:c.instructions+=151;goto B619685;
case 0x619687:c.instructions+=150;goto B619687;
case 0x61968e:c.instructions+=149;goto B61968e;
case 0x619695:c.instructions+=148;goto B619695;
case 0x619699:c.instructions+=147;goto B619699;
case 0x6196a0:c.instructions+=146;goto B6196a0;
case 0x6196a4:c.instructions+=145;goto B6196a4;
case 0x6196a6:c.instructions+=144;goto B6196a6;
case 0x6196ad:c.instructions+=143;goto B6196ad;
case 0x6196b1:c.instructions+=142;goto B6196b1;
case 0x6196b3:c.instructions+=141;goto B6196b3;
case 0x6196b7:c.instructions+=140;goto B6196b7;
case 0x6196be:c.instructions+=139;goto B6196be;
case 0x6196c0:c.instructions+=138;goto B6196c0;
case 0x6196c7:c.instructions+=137;goto B6196c7;
case 0x6196ce:c.instructions+=136;goto B6196ce;
case 0x6196d2:c.instructions+=135;goto B6196d2;
case 0x6196d9:c.instructions+=134;goto B6196d9;
case 0x6196dd:c.instructions+=133;goto B6196dd;
case 0x6196df:c.instructions+=132;goto B6196df;
case 0x6196e6:c.instructions+=131;goto B6196e6;
case 0x6196ea:c.instructions+=130;goto B6196ea;
case 0x6196ec:c.instructions+=129;goto B6196ec;
case 0x6196f3:c.instructions+=128;goto B6196f3;
case 0x6196f7:c.instructions+=127;goto B6196f7;
case 0x6196f9:c.instructions+=126;goto B6196f9;
case 0x619700:c.instructions+=125;goto B619700;
case 0x619707:c.instructions+=124;goto B619707;
case 0x61970b:c.instructions+=123;goto B61970b;
case 0x619712:c.instructions+=122;goto B619712;
case 0x619716:c.instructions+=121;goto B619716;
case 0x619718:c.instructions+=120;goto B619718;
case 0x61971f:c.instructions+=119;goto B61971f;
case 0x619723:c.instructions+=118;goto B619723;
case 0x619725:c.instructions+=117;goto B619725;
case 0x61972c:c.instructions+=116;goto B61972c;
case 0x619730:c.instructions+=115;goto B619730;
case 0x619732:c.instructions+=114;goto B619732;
case 0x619739:c.instructions+=113;goto B619739;
case 0x619740:c.instructions+=112;goto B619740;
case 0x619744:c.instructions+=111;goto B619744;
case 0x61974b:c.instructions+=110;goto B61974b;
case 0x61974f:c.instructions+=109;goto B61974f;
case 0x619751:c.instructions+=108;goto B619751;
case 0x619758:c.instructions+=107;goto B619758;
case 0x61975c:c.instructions+=106;goto B61975c;
case 0x61975e:c.instructions+=105;goto B61975e;
case 0x619765:c.instructions+=104;goto B619765;
case 0x619769:c.instructions+=103;goto B619769;
case 0x61976b:c.instructions+=102;goto B61976b;
case 0x619772:c.instructions+=101;goto B619772;
case 0x619779:c.instructions+=100;goto B619779;
case 0x61977d:c.instructions+=99;goto B61977d;
case 0x619784:c.instructions+=98;goto B619784;
case 0x619788:c.instructions+=97;goto B619788;
case 0x61978a:c.instructions+=96;goto B61978a;
case 0x619791:c.instructions+=95;goto B619791;
case 0x619795:c.instructions+=94;goto B619795;
case 0x619797:c.instructions+=93;goto B619797;
case 0x61979b:c.instructions+=92;goto B61979b;
case 0x6197a2:c.instructions+=91;goto B6197a2;
case 0x6197a4:c.instructions+=90;goto B6197a4;
case 0x6197ab:c.instructions+=89;goto B6197ab;
case 0x6197b2:c.instructions+=88;goto B6197b2;
case 0x6197b6:c.instructions+=87;goto B6197b6;
case 0x6197bd:c.instructions+=86;goto B6197bd;
case 0x6197c1:c.instructions+=85;goto B6197c1;
case 0x6197c3:c.instructions+=84;goto B6197c3;
case 0x6197ca:c.instructions+=83;goto B6197ca;
case 0x6197ce:c.instructions+=82;goto B6197ce;
case 0x6197d0:c.instructions+=81;goto B6197d0;
case 0x6197d7:c.instructions+=80;goto B6197d7;
case 0x6197db:c.instructions+=79;goto B6197db;
case 0x6197dd:c.instructions+=78;goto B6197dd;
case 0x6197e4:c.instructions+=77;goto B6197e4;
case 0x6197eb:c.instructions+=76;goto B6197eb;
case 0x6197ef:c.instructions+=75;goto B6197ef;
case 0x6197f6:c.instructions+=74;goto B6197f6;
case 0x6197fa:c.instructions+=73;goto B6197fa;
case 0x6197fc:c.instructions+=72;goto B6197fc;
case 0x619803:c.instructions+=71;goto B619803;
case 0x619807:c.instructions+=70;goto B619807;
case 0x619809:c.instructions+=69;goto B619809;
case 0x619810:c.instructions+=68;goto B619810;
case 0x619814:c.instructions+=67;goto B619814;
case 0x619816:c.instructions+=66;goto B619816;
case 0x61981d:c.instructions+=65;goto B61981d;
case 0x619824:c.instructions+=64;goto B619824;
case 0x619828:c.instructions+=63;goto B619828;
case 0x61982f:c.instructions+=62;goto B61982f;
case 0x619833:c.instructions+=61;goto B619833;
case 0x619835:c.instructions+=60;goto B619835;
case 0x61983c:c.instructions+=59;goto B61983c;
case 0x619840:c.instructions+=58;goto B619840;
case 0x619842:c.instructions+=57;goto B619842;
case 0x619849:c.instructions+=56;goto B619849;
case 0x61984d:c.instructions+=55;goto B61984d;
case 0x61984f:c.instructions+=54;goto B61984f;
case 0x619856:c.instructions+=53;goto B619856;
case 0x61985d:c.instructions+=52;goto B61985d;
case 0x619861:c.instructions+=51;goto B619861;
case 0x619868:c.instructions+=50;goto B619868;
case 0x61986c:c.instructions+=49;goto B61986c;
case 0x61986e:c.instructions+=48;goto B61986e;
case 0x619875:c.instructions+=47;goto B619875;
case 0x619879:c.instructions+=46;goto B619879;
case 0x61987b:c.instructions+=45;goto B61987b;
case 0x61987f:c.instructions+=44;goto B61987f;
case 0x619886:c.instructions+=43;goto B619886;
case 0x619888:c.instructions+=42;goto B619888;
case 0x61988f:c.instructions+=41;goto B61988f;
case 0x619896:c.instructions+=40;goto B619896;
case 0x61989a:c.instructions+=39;goto B61989a;
case 0x6198a1:c.instructions+=38;goto B6198a1;
case 0x6198a5:c.instructions+=37;goto B6198a5;
case 0x6198a7:c.instructions+=36;goto B6198a7;
case 0x6198ae:c.instructions+=35;goto B6198ae;
case 0x6198b2:c.instructions+=34;goto B6198b2;
case 0x6198b4:c.instructions+=33;goto B6198b4;
case 0x6198bb:c.instructions+=32;goto B6198bb;
case 0x6198bf:c.instructions+=31;goto B6198bf;
case 0x6198c1:c.instructions+=30;goto B6198c1;
case 0x6198c8:c.instructions+=29;goto B6198c8;
case 0x6198cf:c.instructions+=28;goto B6198cf;
case 0x6198d3:c.instructions+=27;goto B6198d3;
case 0x6198d7:c.instructions+=26;goto B6198d7;
case 0x6198de:c.instructions+=25;goto B6198de;
case 0x6198df:c.instructions+=24;goto B6198df;
case 0x6198e3:c.instructions+=23;goto B6198e3;
case 0x6198e7:c.instructions+=22;goto B6198e7;
case 0x6198e8:c.instructions+=21;goto B6198e8;
case 0x6198ea:c.instructions+=20;goto B6198ea;
case 0x6198f1:c.instructions+=19;goto B6198f1;
case 0x6198f5:c.instructions+=18;goto B6198f5;
case 0x6198f7:c.instructions+=17;goto B6198f7;
case 0x6198fe:c.instructions+=16;goto B6198fe;
case 0x619902:c.instructions+=15;goto B619902;
case 0x619904:c.instructions+=14;goto B619904;
case 0x61990b:c.instructions+=13;goto B61990b;
case 0x619912:c.instructions+=12;goto B619912;
case 0x619916:c.instructions+=11;goto B619916;
case 0x61991d:c.instructions+=10;goto B61991d;
case 0x619921:c.instructions+=9;goto B619921;
case 0x619923:c.instructions+=8;goto B619923;
case 0x61992a:c.instructions+=7;goto B61992a;
case 0x61992e:c.instructions+=6;goto B61992e;
case 0x619930:c.instructions+=5;goto B619930;
case 0x619937:c.instructions+=4;goto B619937;
case 0x61993b:c.instructions+=3;goto B61993b;
case 0x61993d:c.instructions+=2;goto B61993d;
case 0x619944:c.instructions+=1;goto B619944;
case 0x619949:goto L619949;
case 0x61994d:c.instructions+=197;goto B61994d;
case 0x619950:c.instructions+=196;goto B619950;
case 0x619954:c.instructions+=195;goto B619954;
case 0x619956:c.instructions+=194;goto B619956;
case 0x619958:c.instructions+=193;goto B619958;
case 0x61995c:c.instructions+=192;goto B61995c;
case 0x61995f:c.instructions+=191;goto B61995f;
case 0x619961:c.instructions+=190;goto B619961;
case 0x619965:c.instructions+=189;goto B619965;
case 0x619968:c.instructions+=188;goto B619968;
case 0x61996a:c.instructions+=187;goto B61996a;
case 0x619971:c.instructions+=186;goto B619971;
case 0x619975:c.instructions+=185;goto B619975;
case 0x619978:c.instructions+=184;goto B619978;
case 0x61997c:c.instructions+=183;goto B61997c;
case 0x61997f:c.instructions+=182;goto B61997f;
case 0x619981:c.instructions+=181;goto B619981;
case 0x619985:c.instructions+=180;goto B619985;
case 0x619988:c.instructions+=179;goto B619988;
case 0x61998a:c.instructions+=178;goto B61998a;
case 0x61998e:c.instructions+=177;goto B61998e;
case 0x619991:c.instructions+=176;goto B619991;
case 0x619993:c.instructions+=175;goto B619993;
case 0x61999a:c.instructions+=174;goto B61999a;
case 0x61999e:c.instructions+=173;goto B61999e;
case 0x6199a1:c.instructions+=172;goto B6199a1;
case 0x6199a5:c.instructions+=171;goto B6199a5;
case 0x6199a8:c.instructions+=170;goto B6199a8;
case 0x6199aa:c.instructions+=169;goto B6199aa;
case 0x6199ae:c.instructions+=168;goto B6199ae;
case 0x6199b1:c.instructions+=167;goto B6199b1;
case 0x6199b3:c.instructions+=166;goto B6199b3;
case 0x6199b7:c.instructions+=165;goto B6199b7;
case 0x6199ba:c.instructions+=164;goto B6199ba;
case 0x6199bc:c.instructions+=163;goto B6199bc;
case 0x6199c3:c.instructions+=162;goto B6199c3;
case 0x6199c7:c.instructions+=161;goto B6199c7;
case 0x6199ca:c.instructions+=160;goto B6199ca;
case 0x6199ce:c.instructions+=159;goto B6199ce;
case 0x6199d1:c.instructions+=158;goto B6199d1;
case 0x6199d3:c.instructions+=157;goto B6199d3;
case 0x6199d7:c.instructions+=156;goto B6199d7;
case 0x6199da:c.instructions+=155;goto B6199da;
case 0x6199dc:c.instructions+=154;goto B6199dc;
case 0x6199e0:c.instructions+=153;goto B6199e0;
case 0x6199e3:c.instructions+=152;goto B6199e3;
case 0x6199e5:c.instructions+=151;goto B6199e5;
case 0x6199ec:c.instructions+=150;goto B6199ec;
case 0x6199f0:c.instructions+=149;goto B6199f0;
case 0x6199f3:c.instructions+=148;goto B6199f3;
case 0x6199f7:c.instructions+=147;goto B6199f7;
case 0x6199f9:c.instructions+=146;goto B6199f9;
case 0x6199fb:c.instructions+=145;goto B6199fb;
case 0x6199ff:c.instructions+=144;goto B6199ff;
case 0x619a02:c.instructions+=143;goto B619a02;
case 0x619a04:c.instructions+=142;goto B619a04;
case 0x619a08:c.instructions+=141;goto B619a08;
case 0x619a0b:c.instructions+=140;goto B619a0b;
case 0x619a0d:c.instructions+=139;goto B619a0d;
case 0x619a14:c.instructions+=138;goto B619a14;
case 0x619a18:c.instructions+=137;goto B619a18;
case 0x619a1b:c.instructions+=136;goto B619a1b;
case 0x619a1f:c.instructions+=135;goto B619a1f;
case 0x619a22:c.instructions+=134;goto B619a22;
case 0x619a24:c.instructions+=133;goto B619a24;
case 0x619a28:c.instructions+=132;goto B619a28;
case 0x619a2b:c.instructions+=131;goto B619a2b;
case 0x619a2d:c.instructions+=130;goto B619a2d;
case 0x619a31:c.instructions+=129;goto B619a31;
case 0x619a34:c.instructions+=128;goto B619a34;
case 0x619a36:c.instructions+=127;goto B619a36;
case 0x619a3d:c.instructions+=126;goto B619a3d;
case 0x619a41:c.instructions+=125;goto B619a41;
case 0x619a44:c.instructions+=124;goto B619a44;
case 0x619a48:c.instructions+=123;goto B619a48;
case 0x619a4b:c.instructions+=122;goto B619a4b;
case 0x619a4d:c.instructions+=121;goto B619a4d;
case 0x619a51:c.instructions+=120;goto B619a51;
case 0x619a54:c.instructions+=119;goto B619a54;
case 0x619a56:c.instructions+=118;goto B619a56;
case 0x619a5a:c.instructions+=117;goto B619a5a;
case 0x619a5d:c.instructions+=116;goto B619a5d;
case 0x619a5f:c.instructions+=115;goto B619a5f;
case 0x619a66:c.instructions+=114;goto B619a66;
case 0x619a6a:c.instructions+=113;goto B619a6a;
case 0x619a6d:c.instructions+=112;goto B619a6d;
case 0x619a71:c.instructions+=111;goto B619a71;
case 0x619a74:c.instructions+=110;goto B619a74;
case 0x619a76:c.instructions+=109;goto B619a76;
case 0x619a7a:c.instructions+=108;goto B619a7a;
case 0x619a7d:c.instructions+=107;goto B619a7d;
case 0x619a7f:c.instructions+=106;goto B619a7f;
case 0x619a83:c.instructions+=105;goto B619a83;
case 0x619a86:c.instructions+=104;goto B619a86;
case 0x619a88:c.instructions+=103;goto B619a88;
case 0x619a8f:c.instructions+=102;goto B619a8f;
case 0x619a93:c.instructions+=101;goto B619a93;
case 0x619a96:c.instructions+=100;goto B619a96;
case 0x619a9a:c.instructions+=99;goto B619a9a;
case 0x619a9c:c.instructions+=98;goto B619a9c;
case 0x619a9e:c.instructions+=97;goto B619a9e;
case 0x619aa2:c.instructions+=96;goto B619aa2;
case 0x619aa5:c.instructions+=95;goto B619aa5;
case 0x619aa7:c.instructions+=94;goto B619aa7;
case 0x619aab:c.instructions+=93;goto B619aab;
case 0x619aae:c.instructions+=92;goto B619aae;
case 0x619ab0:c.instructions+=91;goto B619ab0;
case 0x619ab7:c.instructions+=90;goto B619ab7;
case 0x619abb:c.instructions+=89;goto B619abb;
case 0x619abe:c.instructions+=88;goto B619abe;
case 0x619ac2:c.instructions+=87;goto B619ac2;
case 0x619ac5:c.instructions+=86;goto B619ac5;
case 0x619ac7:c.instructions+=85;goto B619ac7;
case 0x619acb:c.instructions+=84;goto B619acb;
case 0x619ace:c.instructions+=83;goto B619ace;
case 0x619ad0:c.instructions+=82;goto B619ad0;
case 0x619ad4:c.instructions+=81;goto B619ad4;
case 0x619ad7:c.instructions+=80;goto B619ad7;
case 0x619ad9:c.instructions+=79;goto B619ad9;
case 0x619ae0:c.instructions+=78;goto B619ae0;
case 0x619ae4:c.instructions+=77;goto B619ae4;
case 0x619ae7:c.instructions+=76;goto B619ae7;
case 0x619aeb:c.instructions+=75;goto B619aeb;
case 0x619aee:c.instructions+=74;goto B619aee;
case 0x619af0:c.instructions+=73;goto B619af0;
case 0x619af4:c.instructions+=72;goto B619af4;
case 0x619af7:c.instructions+=71;goto B619af7;
case 0x619af9:c.instructions+=70;goto B619af9;
case 0x619afd:c.instructions+=69;goto B619afd;
case 0x619b00:c.instructions+=68;goto B619b00;
case 0x619b02:c.instructions+=67;goto B619b02;
case 0x619b09:c.instructions+=66;goto B619b09;
case 0x619b0d:c.instructions+=65;goto B619b0d;
case 0x619b10:c.instructions+=64;goto B619b10;
case 0x619b14:c.instructions+=63;goto B619b14;
case 0x619b17:c.instructions+=62;goto B619b17;
case 0x619b19:c.instructions+=61;goto B619b19;
case 0x619b1d:c.instructions+=60;goto B619b1d;
case 0x619b20:c.instructions+=59;goto B619b20;
case 0x619b22:c.instructions+=58;goto B619b22;
case 0x619b26:c.instructions+=57;goto B619b26;
case 0x619b29:c.instructions+=56;goto B619b29;
case 0x619b2b:c.instructions+=55;goto B619b2b;
case 0x619b32:c.instructions+=54;goto B619b32;
case 0x619b36:c.instructions+=53;goto B619b36;
case 0x619b39:c.instructions+=52;goto B619b39;
case 0x619b3d:c.instructions+=51;goto B619b3d;
case 0x619b3f:c.instructions+=50;goto B619b3f;
case 0x619b41:c.instructions+=49;goto B619b41;
case 0x619b45:c.instructions+=48;goto B619b45;
case 0x619b48:c.instructions+=47;goto B619b48;
case 0x619b4a:c.instructions+=46;goto B619b4a;
case 0x619b4e:c.instructions+=45;goto B619b4e;
case 0x619b51:c.instructions+=44;goto B619b51;
case 0x619b53:c.instructions+=43;goto B619b53;
case 0x619b5a:c.instructions+=42;goto B619b5a;
case 0x619b5e:c.instructions+=41;goto B619b5e;
case 0x619b62:c.instructions+=40;goto B619b62;
case 0x619b69:c.instructions+=39;goto B619b69;
case 0x619b6c:c.instructions+=38;goto B619b6c;
case 0x619b6d:c.instructions+=37;goto B619b6d;
case 0x619b71:c.instructions+=36;goto B619b71;
case 0x619b77:c.instructions+=35;goto B619b77;
case 0x619b7a:c.instructions+=34;goto B619b7a;
case 0x619b7b:c.instructions+=33;goto B619b7b;
case 0x619b7d:c.instructions+=32;goto B619b7d;
case 0x619b81:c.instructions+=31;goto B619b81;
case 0x619b84:c.instructions+=30;goto B619b84;
case 0x619b86:c.instructions+=29;goto B619b86;
case 0x619b8a:c.instructions+=28;goto B619b8a;
case 0x619b8d:c.instructions+=27;goto B619b8d;
case 0x619b8f:c.instructions+=26;goto B619b8f;
case 0x619b96:c.instructions+=25;goto B619b96;
case 0x619b9a:c.instructions+=24;goto B619b9a;
case 0x619b9d:c.instructions+=23;goto B619b9d;
case 0x619ba1:c.instructions+=22;goto B619ba1;
case 0x619ba4:c.instructions+=21;goto B619ba4;
case 0x619ba6:c.instructions+=20;goto B619ba6;
case 0x619baa:c.instructions+=19;goto B619baa;
case 0x619bad:c.instructions+=18;goto B619bad;
case 0x619baf:c.instructions+=17;goto B619baf;
case 0x619bb3:c.instructions+=16;goto B619bb3;
case 0x619bb6:c.instructions+=15;goto B619bb6;
case 0x619bb8:c.instructions+=14;goto B619bb8;
case 0x619bbf:c.instructions+=13;goto B619bbf;
case 0x619bc3:c.instructions+=12;goto B619bc3;
case 0x619bc6:c.instructions+=11;goto B619bc6;
case 0x619bca:c.instructions+=10;goto B619bca;
case 0x619bcd:c.instructions+=9;goto B619bcd;
case 0x619bcf:c.instructions+=8;goto B619bcf;
case 0x619bd3:c.instructions+=7;goto B619bd3;
case 0x619bd6:c.instructions+=6;goto B619bd6;
case 0x619bd8:c.instructions+=5;goto B619bd8;
case 0x619bdc:c.instructions+=4;goto B619bdc;
case 0x619bdf:c.instructions+=3;goto B619bdf;
case 0x619be1:c.instructions+=2;goto B619be1;
case 0x619be8:c.instructions+=1;goto B619be8;
case 0x619bed:goto L619bed;
case 0x619bf0:c.instructions+=11;goto B619bf0;
case 0x619bf4:c.instructions+=10;goto B619bf4;
case 0x619bfb:c.instructions+=9;goto B619bfb;
case 0x619bfc:c.instructions+=8;goto B619bfc;
case 0x619bfd:c.instructions+=7;goto B619bfd;
case 0x619c04:c.instructions+=6;goto B619c04;
case 0x619c05:c.instructions+=5;goto B619c05;
case 0x619c0a:c.instructions+=4;goto B619c0a;
case 0x619c0f:c.instructions+=3;goto B619c0f;
case 0x619c10:c.instructions+=2;goto B619c10;
case 0x619c11:c.instructions+=1;goto B619c11;
case 0x619c16:goto L619c16;
case 0x619c1d:c.instructions+=3;goto B619c1d;
case 0x619c20:c.instructions+=2;goto B619c20;
case 0x619c22:c.instructions+=1;goto B619c22;
case 0x619c24:goto L619c24;
case 0x619c27:c.instructions+=3;goto B619c27;
case 0x619c28:c.instructions+=2;goto B619c28;
case 0x619c29:c.instructions+=1;goto B619c29;
case 0x619c2e:goto L619c2e;
case 0x619c34:c.instructions+=4;goto B619c34;
case 0x619c37:c.instructions+=3;goto B619c37;
case 0x619c39:c.instructions+=2;goto B619c39;
case 0x619c3c:c.instructions+=1;goto B619c3c;
case 0x619c3e:goto L619c3e;
case 0x619c42:c.instructions+=2;goto B619c42;
case 0x619c48:c.instructions+=1;goto B619c48;
case 0x619c4a:goto L619c4a;
case 0x619c51:goto L619c51;
case 0x619c53:c.instructions+=1;goto B619c53;
case 0x619c55:goto L619c55;
case 0x619c58:c.instructions+=12;goto B619c58;
case 0x619c5f:c.instructions+=11;goto B619c5f;
case 0x619c61:c.instructions+=10;goto B619c61;
case 0x619c65:c.instructions+=9;goto B619c65;
case 0x619c67:c.instructions+=8;goto B619c67;
case 0x619c6d:c.instructions+=7;goto B619c6d;
case 0x619c6e:c.instructions+=6;goto B619c6e;
case 0x619c73:c.instructions+=5;goto B619c73;
case 0x619c74:c.instructions+=4;goto B619c74;
case 0x619c75:c.instructions+=3;goto B619c75;
case 0x619c76:c.instructions+=2;goto B619c76;
case 0x619c79:c.instructions+=1;goto B619c79;
case 0x619c7e:goto L619c7e;
case 0x619c82:c.instructions+=7;goto B619c82;
case 0x619c89:c.instructions+=6;goto B619c89;
case 0x619c90:c.instructions+=5;goto B619c90;
case 0x619c94:c.instructions+=4;goto B619c94;
case 0x619c96:c.instructions+=3;goto B619c96;
case 0x619c9d:c.instructions+=2;goto B619c9d;
case 0x619ca4:c.instructions+=1;goto B619ca4;
case 0x619caa:goto L619caa;
case 0x619cb1:c.instructions+=150;goto B619cb1;
case 0x619cb8:c.instructions+=149;goto B619cb8;
case 0x619cbf:c.instructions+=148;goto B619cbf;
case 0x619cc6:c.instructions+=147;goto B619cc6;
case 0x619cc8:c.instructions+=146;goto B619cc8;
case 0x619ccf:c.instructions+=145;goto B619ccf;
case 0x619cd6:c.instructions+=144;goto B619cd6;
case 0x619cd8:c.instructions+=143;goto B619cd8;
case 0x619cdf:c.instructions+=142;goto B619cdf;
case 0x619ce6:c.instructions+=141;goto B619ce6;
case 0x619ce8:c.instructions+=140;goto B619ce8;
case 0x619cec:c.instructions+=139;goto B619cec;
case 0x619cf3:c.instructions+=138;goto B619cf3;
case 0x619cfa:c.instructions+=137;goto B619cfa;
case 0x619d01:c.instructions+=136;goto B619d01;
case 0x619d08:c.instructions+=135;goto B619d08;
case 0x619d0a:c.instructions+=134;goto B619d0a;
case 0x619d11:c.instructions+=133;goto B619d11;
case 0x619d18:c.instructions+=132;goto B619d18;
case 0x619d1a:c.instructions+=131;goto B619d1a;
case 0x619d21:c.instructions+=130;goto B619d21;
case 0x619d28:c.instructions+=129;goto B619d28;
case 0x619d2a:c.instructions+=128;goto B619d2a;
case 0x619d2e:c.instructions+=127;goto B619d2e;
case 0x619d35:c.instructions+=126;goto B619d35;
case 0x619d3c:c.instructions+=125;goto B619d3c;
case 0x619d43:c.instructions+=124;goto B619d43;
case 0x619d4a:c.instructions+=123;goto B619d4a;
case 0x619d4c:c.instructions+=122;goto B619d4c;
case 0x619d53:c.instructions+=121;goto B619d53;
case 0x619d5a:c.instructions+=120;goto B619d5a;
case 0x619d5c:c.instructions+=119;goto B619d5c;
case 0x619d63:c.instructions+=118;goto B619d63;
case 0x619d6a:c.instructions+=117;goto B619d6a;
case 0x619d6c:c.instructions+=116;goto B619d6c;
case 0x619d70:c.instructions+=115;goto B619d70;
case 0x619d77:c.instructions+=114;goto B619d77;
case 0x619d7e:c.instructions+=113;goto B619d7e;
case 0x619d85:c.instructions+=112;goto B619d85;
case 0x619d8c:c.instructions+=111;goto B619d8c;
case 0x619d8e:c.instructions+=110;goto B619d8e;
case 0x619d95:c.instructions+=109;goto B619d95;
case 0x619d9c:c.instructions+=108;goto B619d9c;
case 0x619d9e:c.instructions+=107;goto B619d9e;
case 0x619da5:c.instructions+=106;goto B619da5;
case 0x619dac:c.instructions+=105;goto B619dac;
case 0x619dae:c.instructions+=104;goto B619dae;
case 0x619db2:c.instructions+=103;goto B619db2;
case 0x619db9:c.instructions+=102;goto B619db9;
case 0x619dc0:c.instructions+=101;goto B619dc0;
case 0x619dc7:c.instructions+=100;goto B619dc7;
case 0x619dce:c.instructions+=99;goto B619dce;
case 0x619dd0:c.instructions+=98;goto B619dd0;
case 0x619dd7:c.instructions+=97;goto B619dd7;
case 0x619dde:c.instructions+=96;goto B619dde;
case 0x619de0:c.instructions+=95;goto B619de0;
case 0x619de7:c.instructions+=94;goto B619de7;
case 0x619dee:c.instructions+=93;goto B619dee;
case 0x619df0:c.instructions+=92;goto B619df0;
case 0x619df7:c.instructions+=91;goto B619df7;
case 0x619dfe:c.instructions+=90;goto B619dfe;
case 0x619e05:c.instructions+=89;goto B619e05;
case 0x619e0c:c.instructions+=88;goto B619e0c;
case 0x619e13:c.instructions+=87;goto B619e13;
case 0x619e15:c.instructions+=86;goto B619e15;
case 0x619e1c:c.instructions+=85;goto B619e1c;
case 0x619e23:c.instructions+=84;goto B619e23;
case 0x619e25:c.instructions+=83;goto B619e25;
case 0x619e2c:c.instructions+=82;goto B619e2c;
case 0x619e33:c.instructions+=81;goto B619e33;
case 0x619e35:c.instructions+=80;goto B619e35;
case 0x619e3c:c.instructions+=79;goto B619e3c;
case 0x619e43:c.instructions+=78;goto B619e43;
case 0x619e4a:c.instructions+=77;goto B619e4a;
case 0x619e51:c.instructions+=76;goto B619e51;
case 0x619e58:c.instructions+=75;goto B619e58;
case 0x619e5a:c.instructions+=74;goto B619e5a;
case 0x619e61:c.instructions+=73;goto B619e61;
case 0x619e68:c.instructions+=72;goto B619e68;
case 0x619e6a:c.instructions+=71;goto B619e6a;
case 0x619e71:c.instructions+=70;goto B619e71;
case 0x619e78:c.instructions+=69;goto B619e78;
case 0x619e7a:c.instructions+=68;goto B619e7a;
case 0x619e81:c.instructions+=67;goto B619e81;
case 0x619e88:c.instructions+=66;goto B619e88;
case 0x619e8f:c.instructions+=65;goto B619e8f;
case 0x619e96:c.instructions+=64;goto B619e96;
case 0x619e9d:c.instructions+=63;goto B619e9d;
case 0x619e9f:c.instructions+=62;goto B619e9f;
case 0x619ea6:c.instructions+=61;goto B619ea6;
case 0x619ead:c.instructions+=60;goto B619ead;
case 0x619eaf:c.instructions+=59;goto B619eaf;
case 0x619eb6:c.instructions+=58;goto B619eb6;
case 0x619ebd:c.instructions+=57;goto B619ebd;
case 0x619ebf:c.instructions+=56;goto B619ebf;
case 0x619ec6:c.instructions+=55;goto B619ec6;
case 0x619ecd:c.instructions+=54;goto B619ecd;
case 0x619ed4:c.instructions+=53;goto B619ed4;
case 0x619edb:c.instructions+=52;goto B619edb;
case 0x619ee2:c.instructions+=51;goto B619ee2;
case 0x619ee4:c.instructions+=50;goto B619ee4;
case 0x619eeb:c.instructions+=49;goto B619eeb;
case 0x619ef2:c.instructions+=48;goto B619ef2;
case 0x619ef4:c.instructions+=47;goto B619ef4;
case 0x619efb:c.instructions+=46;goto B619efb;
case 0x619f02:c.instructions+=45;goto B619f02;
case 0x619f04:c.instructions+=44;goto B619f04;
case 0x619f0b:c.instructions+=43;goto B619f0b;
case 0x619f12:c.instructions+=42;goto B619f12;
case 0x619f19:c.instructions+=41;goto B619f19;
case 0x619f20:c.instructions+=40;goto B619f20;
case 0x619f27:c.instructions+=39;goto B619f27;
case 0x619f29:c.instructions+=38;goto B619f29;
case 0x619f30:c.instructions+=37;goto B619f30;
case 0x619f37:c.instructions+=36;goto B619f37;
case 0x619f39:c.instructions+=35;goto B619f39;
case 0x619f40:c.instructions+=34;goto B619f40;
case 0x619f47:c.instructions+=33;goto B619f47;
case 0x619f49:c.instructions+=32;goto B619f49;
case 0x619f50:c.instructions+=31;goto B619f50;
case 0x619f57:c.instructions+=30;goto B619f57;
case 0x619f5e:c.instructions+=29;goto B619f5e;
case 0x619f65:c.instructions+=28;goto B619f65;
case 0x619f6c:c.instructions+=27;goto B619f6c;
case 0x619f6e:c.instructions+=26;goto B619f6e;
case 0x619f75:c.instructions+=25;goto B619f75;
case 0x619f7c:c.instructions+=24;goto B619f7c;
case 0x619f7e:c.instructions+=23;goto B619f7e;
case 0x619f85:c.instructions+=22;goto B619f85;
case 0x619f8c:c.instructions+=21;goto B619f8c;
case 0x619f8e:c.instructions+=20;goto B619f8e;
case 0x619f95:c.instructions+=19;goto B619f95;
case 0x619f9c:c.instructions+=18;goto B619f9c;
case 0x619fa3:c.instructions+=17;goto B619fa3;
case 0x619faa:c.instructions+=16;goto B619faa;
case 0x619fb1:c.instructions+=15;goto B619fb1;
case 0x619fb3:c.instructions+=14;goto B619fb3;
case 0x619fba:c.instructions+=13;goto B619fba;
case 0x619fc1:c.instructions+=12;goto B619fc1;
case 0x619fc3:c.instructions+=11;goto B619fc3;
case 0x619fca:c.instructions+=10;goto B619fca;
case 0x619fd1:c.instructions+=9;goto B619fd1;
case 0x619fd3:c.instructions+=8;goto B619fd3;
case 0x619fda:c.instructions+=7;goto B619fda;
case 0x619fe1:c.instructions+=6;goto B619fe1;
case 0x619fe8:c.instructions+=5;goto B619fe8;
case 0x619fef:c.instructions+=4;goto B619fef;
case 0x619ff6:c.instructions+=3;goto B619ff6;
case 0x619ff8:c.instructions+=2;goto B619ff8;
case 0x619fff:c.instructions+=1;goto B619fff;
default:missing_instruction(c.pc);}
B619002:L619002:{c.instructions+=87;NFSU2_TR(0x619002);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619005:{NFSU2_TR(0x619005);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619007:{NFSU2_TR(0x619007);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61900b:{NFSU2_TR(0x61900b);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61900e:{NFSU2_TR(0x61900e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619010:{NFSU2_TR(0x619010);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619014:{NFSU2_TR(0x619014);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619017:{NFSU2_TR(0x619017);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619019:{NFSU2_TR(0x619019);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619020:{NFSU2_TR(0x619020);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619024:{NFSU2_TR(0x619024);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619027:{NFSU2_TR(0x619027);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61902b:{NFSU2_TR(0x61902b);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61902e:{NFSU2_TR(0x61902e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619030:{NFSU2_TR(0x619030);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619034:{NFSU2_TR(0x619034);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619037:{NFSU2_TR(0x619037);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619039:{NFSU2_TR(0x619039);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61903d:{NFSU2_TR(0x61903d);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619040:{NFSU2_TR(0x619040);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619042:{NFSU2_TR(0x619042);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619049:{NFSU2_TR(0x619049);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61904d:{NFSU2_TR(0x61904d);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619050:{NFSU2_TR(0x619050);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619054:{NFSU2_TR(0x619054);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619057:{NFSU2_TR(0x619057);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619059:{NFSU2_TR(0x619059);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61905d:{NFSU2_TR(0x61905d);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619060:{NFSU2_TR(0x619060);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619062:{NFSU2_TR(0x619062);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619066:{NFSU2_TR(0x619066);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619069:{NFSU2_TR(0x619069);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61906b:{NFSU2_TR(0x61906b);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619072:{NFSU2_TR(0x619072);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619076:{NFSU2_TR(0x619076);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619079:{NFSU2_TR(0x619079);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61907d:{NFSU2_TR(0x61907d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61907f:{NFSU2_TR(0x61907f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619081:{NFSU2_TR(0x619081);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619085:{NFSU2_TR(0x619085);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619088:{NFSU2_TR(0x619088);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61908a:{NFSU2_TR(0x61908a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61908e:{NFSU2_TR(0x61908e);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619091:{NFSU2_TR(0x619091);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619093:{NFSU2_TR(0x619093);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61909a:{NFSU2_TR(0x61909a);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61909e:{NFSU2_TR(0x61909e);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6190a2:{NFSU2_TR(0x6190a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6190a9:{NFSU2_TR(0x6190a9);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6190ac:{NFSU2_TR(0x6190ac);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x40ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6190af:{NFSU2_TR(0x6190af);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6190b3:{NFSU2_TR(0x6190b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6190b4:{NFSU2_TR(0x6190b4);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6190b7:{NFSU2_TR(0x6190b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6190b8:{NFSU2_TR(0x6190b8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6190ba:{NFSU2_TR(0x6190ba);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6190be:{NFSU2_TR(0x6190be);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6190c1:{NFSU2_TR(0x6190c1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6190c3:{NFSU2_TR(0x6190c3);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6190c7:{NFSU2_TR(0x6190c7);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6190ca:{NFSU2_TR(0x6190ca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6190cc:{NFSU2_TR(0x6190cc);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6190d3:{NFSU2_TR(0x6190d3);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6190d7:{NFSU2_TR(0x6190d7);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6190da:{NFSU2_TR(0x6190da);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6190de:{NFSU2_TR(0x6190de);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6190e1:{NFSU2_TR(0x6190e1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6190e3:{NFSU2_TR(0x6190e3);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6190e7:{NFSU2_TR(0x6190e7);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6190ea:{NFSU2_TR(0x6190ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6190ec:{NFSU2_TR(0x6190ec);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6190f0:{NFSU2_TR(0x6190f0);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6190f3:{NFSU2_TR(0x6190f3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6190f5:{NFSU2_TR(0x6190f5);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6190fc:{NFSU2_TR(0x6190fc);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619100:{NFSU2_TR(0x619100);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619103:{NFSU2_TR(0x619103);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619107:{NFSU2_TR(0x619107);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61910a:{NFSU2_TR(0x61910a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61910c:{NFSU2_TR(0x61910c);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619110:{NFSU2_TR(0x619110);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619113:{NFSU2_TR(0x619113);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619115:{NFSU2_TR(0x619115);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619119:{NFSU2_TR(0x619119);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61911c:{NFSU2_TR(0x61911c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61911e:{NFSU2_TR(0x61911e);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619125:{NFSU2_TR(0x619125);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61912aull));
TAIL_STATIC(0x4012b0u,401);
}
B61912a:L61912a:{c.instructions+=14;NFSU2_TR(0x61912a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61912d:{NFSU2_TR(0x61912d);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B619131:{NFSU2_TR(0x619131);
u8 U[4];
w4(U+0,u32(u32(u32(0x428ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B619138:{NFSU2_TR(0x619138);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B619139:{NFSU2_TR(0x619139);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61913a:{NFSU2_TR(0x61913a);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61913e:{NFSU2_TR(0x61913e);
u8 U[4];
w4(U+0,u32(u32(u32(0x360ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B619145:{NFSU2_TR(0x619145);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B619146:{NFSU2_TR(0x619146);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61914b:{NFSU2_TR(0x61914b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B61914e:{NFSU2_TR(0x61914e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1c0ull))));
}
B619154:{NFSU2_TR(0x619154);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B619155:{NFSU2_TR(0x619155);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B619156:{NFSU2_TR(0x619156);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61915bull));
TAIL_STATIC(0x48f660u,48f);
}
B61915b:L61915b:{c.instructions+=3;NFSU2_TR(0x61915b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B61915e:{NFSU2_TR(0x61915e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B619160:{NFSU2_TR(0x619160);
if(r1(R+518)){{goto L619191;}}
}
B619162:L619162:{c.instructions+=15;NFSU2_TR(0x619162);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B619165:{NFSU2_TR(0x619165);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61916c:{NFSU2_TR(0x61916c);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B61916e:{NFSU2_TR(0x61916e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B619171:{NFSU2_TR(0x619171);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x8000ull))));
}
B619176:{NFSU2_TR(0x619176);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B619178:{NFSU2_TR(0x619178);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B619179:{NFSU2_TR(0x619179);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61917d:{NFSU2_TR(0x61917d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1c0ull))));
}
B619182:{NFSU2_TR(0x619182);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B619183:{NFSU2_TR(0x619183);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B619187:{NFSU2_TR(0x619187);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B61918a:{NFSU2_TR(0x61918a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61918b:{NFSU2_TR(0x61918b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61918c:{NFSU2_TR(0x61918c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x619191ull));
TAIL_STATIC(0x5c5930u,5c5);
}
B619191:L619191:{c.instructions+=3;NFSU2_TR(0x619191);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B619195:{NFSU2_TR(0x619195);
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
B619197:{NFSU2_TR(0x619197);
if(r1(R+518)){{goto L619c7e;}}
}
B61919d:L61919d:{c.instructions+=197;NFSU2_TR(0x61919d);
{u32 ea_=u32(r4(R+16)+u32(428u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6191a4:{NFSU2_TR(0x6191a4);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6191aa:{NFSU2_TR(0x6191aa);
{u32 ea_=u32(r4(R+16)+u32(420u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6191b1:{NFSU2_TR(0x6191b1);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6191b7:{NFSU2_TR(0x6191b7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6191b9:{NFSU2_TR(0x6191b9);
{u32 ea_=u32(r4(R+16)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6191c0:{NFSU2_TR(0x6191c0);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6191c6:{NFSU2_TR(0x6191c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6191c8:{NFSU2_TR(0x6191c8);
{u32 ea_=u32(r4(R+16)+u32(416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6191cf:{NFSU2_TR(0x6191cf);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6191d5:{NFSU2_TR(0x6191d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6191d7:{NFSU2_TR(0x6191d7);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6191db:{NFSU2_TR(0x6191db);
{u32 ea_=u32(r4(R+16)+u32(420u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6191e2:{NFSU2_TR(0x6191e2);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6191e8:{NFSU2_TR(0x6191e8);
{u32 ea_=u32(r4(R+16)+u32(428u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6191ef:{NFSU2_TR(0x6191ef);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6191f5:{NFSU2_TR(0x6191f5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6191f7:{NFSU2_TR(0x6191f7);
{u32 ea_=u32(r4(R+16)+u32(416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6191fe:{NFSU2_TR(0x6191fe);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619204:{NFSU2_TR(0x619204);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619206:{NFSU2_TR(0x619206);
{u32 ea_=u32(r4(R+16)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61920d:{NFSU2_TR(0x61920d);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619213:{NFSU2_TR(0x619213);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619215:{NFSU2_TR(0x619215);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619219:{NFSU2_TR(0x619219);
{u32 ea_=u32(r4(R+16)+u32(428u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619220:{NFSU2_TR(0x619220);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619226:{NFSU2_TR(0x619226);
{u32 ea_=u32(r4(R+16)+u32(416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61922d:{NFSU2_TR(0x61922d);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619233:{NFSU2_TR(0x619233);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619235:{NFSU2_TR(0x619235);
{u32 ea_=u32(r4(R+16)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61923c:{NFSU2_TR(0x61923c);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619242:{NFSU2_TR(0x619242);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619244:{NFSU2_TR(0x619244);
{u32 ea_=u32(r4(R+16)+u32(420u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61924b:{NFSU2_TR(0x61924b);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619251:{NFSU2_TR(0x619251);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619253:{NFSU2_TR(0x619253);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619257:{NFSU2_TR(0x619257);
{u32 ea_=u32(r4(R+16)+u32(416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61925e:{NFSU2_TR(0x61925e);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619264:{NFSU2_TR(0x619264);
{u32 ea_=u32(r4(R+16)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61926b:{NFSU2_TR(0x61926b);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619271:{NFSU2_TR(0x619271);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619273:{NFSU2_TR(0x619273);
{u32 ea_=u32(r4(R+16)+u32(428u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61927a:{NFSU2_TR(0x61927a);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619280:{NFSU2_TR(0x619280);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619282:{NFSU2_TR(0x619282);
{u32 ea_=u32(r4(R+16)+u32(420u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619289:{NFSU2_TR(0x619289);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61928f:{NFSU2_TR(0x61928f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619291:{NFSU2_TR(0x619291);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619295:{NFSU2_TR(0x619295);
{u32 ea_=u32(r4(R+16)+u32(436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61929c:{NFSU2_TR(0x61929c);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6192a2:{NFSU2_TR(0x6192a2);
{u32 ea_=u32(r4(R+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6192a9:{NFSU2_TR(0x6192a9);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6192af:{NFSU2_TR(0x6192af);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6192b1:{NFSU2_TR(0x6192b1);
{u32 ea_=u32(r4(R+16)+u32(444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6192b8:{NFSU2_TR(0x6192b8);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6192be:{NFSU2_TR(0x6192be);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6192c0:{NFSU2_TR(0x6192c0);
{u32 ea_=u32(r4(R+16)+u32(432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6192c7:{NFSU2_TR(0x6192c7);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6192cd:{NFSU2_TR(0x6192cd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6192cf:{NFSU2_TR(0x6192cf);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6192d6:{NFSU2_TR(0x6192d6);
{u32 ea_=u32(r4(R+16)+u32(444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6192dd:{NFSU2_TR(0x6192dd);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6192e3:{NFSU2_TR(0x6192e3);
{u32 ea_=u32(r4(R+16)+u32(436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6192ea:{NFSU2_TR(0x6192ea);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6192f0:{NFSU2_TR(0x6192f0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6192f2:{NFSU2_TR(0x6192f2);
{u32 ea_=u32(r4(R+16)+u32(432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6192f9:{NFSU2_TR(0x6192f9);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6192ff:{NFSU2_TR(0x6192ff);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619301:{NFSU2_TR(0x619301);
{u32 ea_=u32(r4(R+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619308:{NFSU2_TR(0x619308);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61930e:{NFSU2_TR(0x61930e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619310:{NFSU2_TR(0x619310);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619317:{NFSU2_TR(0x619317);
{u32 ea_=u32(r4(R+16)+u32(432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61931e:{NFSU2_TR(0x61931e);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619324:{NFSU2_TR(0x619324);
{u32 ea_=u32(r4(R+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61932b:{NFSU2_TR(0x61932b);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619331:{NFSU2_TR(0x619331);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619333:{NFSU2_TR(0x619333);
{u32 ea_=u32(r4(R+16)+u32(444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61933a:{NFSU2_TR(0x61933a);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619340:{NFSU2_TR(0x619340);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619342:{NFSU2_TR(0x619342);
{u32 ea_=u32(r4(R+16)+u32(436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619349:{NFSU2_TR(0x619349);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61934f:{NFSU2_TR(0x61934f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619351:{NFSU2_TR(0x619351);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619358:{NFSU2_TR(0x619358);
{u32 ea_=u32(r4(R+16)+u32(432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61935f:{NFSU2_TR(0x61935f);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619365:{NFSU2_TR(0x619365);
{u32 ea_=u32(r4(R+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61936c:{NFSU2_TR(0x61936c);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619372:{NFSU2_TR(0x619372);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619374:{NFSU2_TR(0x619374);
{u32 ea_=u32(r4(R+16)+u32(444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61937b:{NFSU2_TR(0x61937b);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619381:{NFSU2_TR(0x619381);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619383:{NFSU2_TR(0x619383);
{u32 ea_=u32(r4(R+16)+u32(436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61938a:{NFSU2_TR(0x61938a);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619390:{NFSU2_TR(0x619390);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619392:{NFSU2_TR(0x619392);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619399:{NFSU2_TR(0x619399);
{u32 ea_=u32(r4(R+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6193a0:{NFSU2_TR(0x6193a0);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6193a6:{NFSU2_TR(0x6193a6);
{u32 ea_=u32(r4(R+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6193ad:{NFSU2_TR(0x6193ad);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6193b3:{NFSU2_TR(0x6193b3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6193b5:{NFSU2_TR(0x6193b5);
{u32 ea_=u32(r4(R+16)+u32(460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6193bc:{NFSU2_TR(0x6193bc);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6193c2:{NFSU2_TR(0x6193c2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6193c4:{NFSU2_TR(0x6193c4);
{u32 ea_=u32(r4(R+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6193cb:{NFSU2_TR(0x6193cb);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6193d1:{NFSU2_TR(0x6193d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6193d3:{NFSU2_TR(0x6193d3);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6193da:{NFSU2_TR(0x6193da);
{u32 ea_=u32(r4(R+16)+u32(460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6193e1:{NFSU2_TR(0x6193e1);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6193e7:{NFSU2_TR(0x6193e7);
{u32 ea_=u32(r4(R+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6193ee:{NFSU2_TR(0x6193ee);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6193f4:{NFSU2_TR(0x6193f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6193f6:{NFSU2_TR(0x6193f6);
{u32 ea_=u32(r4(R+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6193fd:{NFSU2_TR(0x6193fd);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619403:{NFSU2_TR(0x619403);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619405:{NFSU2_TR(0x619405);
{u32 ea_=u32(r4(R+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61940c:{NFSU2_TR(0x61940c);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619412:{NFSU2_TR(0x619412);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619414:{NFSU2_TR(0x619414);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61941b:{NFSU2_TR(0x61941b);
{u32 ea_=u32(r4(R+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619422:{NFSU2_TR(0x619422);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619428:{NFSU2_TR(0x619428);
{u32 ea_=u32(r4(R+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61942f:{NFSU2_TR(0x61942f);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619435:{NFSU2_TR(0x619435);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619437:{NFSU2_TR(0x619437);
{u32 ea_=u32(r4(R+16)+u32(460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61943e:{NFSU2_TR(0x61943e);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619444:{NFSU2_TR(0x619444);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619446:{NFSU2_TR(0x619446);
{u32 ea_=u32(r4(R+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61944d:{NFSU2_TR(0x61944d);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619453:{NFSU2_TR(0x619453);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619455:{NFSU2_TR(0x619455);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61945c:{NFSU2_TR(0x61945c);
{u32 ea_=u32(r4(R+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619463:{NFSU2_TR(0x619463);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619469:{NFSU2_TR(0x619469);
{u32 ea_=u32(r4(R+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619470:{NFSU2_TR(0x619470);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619476:{NFSU2_TR(0x619476);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619478:{NFSU2_TR(0x619478);
{u32 ea_=u32(r4(R+16)+u32(460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61947f:{NFSU2_TR(0x61947f);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619485:{NFSU2_TR(0x619485);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619487:{NFSU2_TR(0x619487);
{u32 ea_=u32(r4(R+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61948e:{NFSU2_TR(0x61948e);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619494:{NFSU2_TR(0x619494);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619496:{NFSU2_TR(0x619496);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61949d:{NFSU2_TR(0x61949d);
{u32 ea_=u32(r4(R+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6194a4:{NFSU2_TR(0x6194a4);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6194aa:{NFSU2_TR(0x6194aa);
{u32 ea_=u32(r4(R+16)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6194b1:{NFSU2_TR(0x6194b1);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6194b7:{NFSU2_TR(0x6194b7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6194b9:{NFSU2_TR(0x6194b9);
{u32 ea_=u32(r4(R+16)+u32(476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6194c0:{NFSU2_TR(0x6194c0);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6194c6:{NFSU2_TR(0x6194c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6194c8:{NFSU2_TR(0x6194c8);
{u32 ea_=u32(r4(R+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6194cf:{NFSU2_TR(0x6194cf);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6194d5:{NFSU2_TR(0x6194d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6194d7:{NFSU2_TR(0x6194d7);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6194de:{NFSU2_TR(0x6194de);
{u32 ea_=u32(r4(R+16)+u32(476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6194e5:{NFSU2_TR(0x6194e5);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6194eb:{NFSU2_TR(0x6194eb);
{u32 ea_=u32(r4(R+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6194f2:{NFSU2_TR(0x6194f2);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6194f8:{NFSU2_TR(0x6194f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6194fa:{NFSU2_TR(0x6194fa);
{u32 ea_=u32(r4(R+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619501:{NFSU2_TR(0x619501);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619507:{NFSU2_TR(0x619507);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619509:{NFSU2_TR(0x619509);
{u32 ea_=u32(r4(R+16)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619510:{NFSU2_TR(0x619510);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619516:{NFSU2_TR(0x619516);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619518:{NFSU2_TR(0x619518);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61951f:{NFSU2_TR(0x61951f);
{u32 ea_=u32(r4(R+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619526:{NFSU2_TR(0x619526);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61952c:{NFSU2_TR(0x61952c);
{u32 ea_=u32(r4(R+16)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619533:{NFSU2_TR(0x619533);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619539:{NFSU2_TR(0x619539);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61953b:{NFSU2_TR(0x61953b);
{u32 ea_=u32(r4(R+16)+u32(476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619542:{NFSU2_TR(0x619542);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619548:{NFSU2_TR(0x619548);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61954a:{NFSU2_TR(0x61954a);
{u32 ea_=u32(r4(R+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619551:{NFSU2_TR(0x619551);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619557:{NFSU2_TR(0x619557);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619559:{NFSU2_TR(0x619559);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619560:{NFSU2_TR(0x619560);
{u32 ea_=u32(r4(R+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619567:{NFSU2_TR(0x619567);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61956d:{NFSU2_TR(0x61956d);
{u32 ea_=u32(r4(R+16)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619574:{NFSU2_TR(0x619574);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B619578:{NFSU2_TR(0x619578);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61957e:{NFSU2_TR(0x61957e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61957f:{NFSU2_TR(0x61957f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B619583:{NFSU2_TR(0x619583);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B619584:{NFSU2_TR(0x619584);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619586:{NFSU2_TR(0x619586);
{u32 ea_=u32(r4(R+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61958d:{NFSU2_TR(0x61958d);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619593:{NFSU2_TR(0x619593);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619595:{NFSU2_TR(0x619595);
{u32 ea_=u32(r4(R+16)+u32(476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61959c:{NFSU2_TR(0x61959c);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6195a2:{NFSU2_TR(0x6195a2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6195a4:{NFSU2_TR(0x6195a4);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6195ab:{NFSU2_TR(0x6195ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6195b0ull));
TAIL_STATIC(0x4012b0u,401);
}
B6195b0:L6195b0:{c.instructions+=197;NFSU2_TR(0x6195b0);
{u32 ea_=u32(r4(R+16)+u32(712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6195b7:{NFSU2_TR(0x6195b7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6195bb:{NFSU2_TR(0x6195bb);
{u32 ea_=u32(r4(R+16)+u32(696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6195c2:{NFSU2_TR(0x6195c2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6195c6:{NFSU2_TR(0x6195c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6195c8:{NFSU2_TR(0x6195c8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6195cc:{NFSU2_TR(0x6195cc);
{u32 ea_=u32(r4(R+16)+u32(680u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6195d3:{NFSU2_TR(0x6195d3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6195d5:{NFSU2_TR(0x6195d5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6195d9:{NFSU2_TR(0x6195d9);
{u32 ea_=u32(r4(R+16)+u32(728u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6195e0:{NFSU2_TR(0x6195e0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6195e2:{NFSU2_TR(0x6195e2);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6195e6:{NFSU2_TR(0x6195e6);
{u32 ea_=u32(r4(R+16)+u32(732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6195ed:{NFSU2_TR(0x6195ed);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6195f1:{NFSU2_TR(0x6195f1);
{u32 ea_=u32(r4(R+16)+u32(716u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6195f8:{NFSU2_TR(0x6195f8);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6195fc:{NFSU2_TR(0x6195fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6195fe:{NFSU2_TR(0x6195fe);
{u32 ea_=u32(r4(R+16)+u32(700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619605:{NFSU2_TR(0x619605);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619609:{NFSU2_TR(0x619609);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61960b:{NFSU2_TR(0x61960b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61960f:{NFSU2_TR(0x61960f);
{u32 ea_=u32(r4(R+16)+u32(684u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619616:{NFSU2_TR(0x619616);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619618:{NFSU2_TR(0x619618);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61961c:{NFSU2_TR(0x61961c);
{u32 ea_=u32(r4(R+16)+u32(736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619623:{NFSU2_TR(0x619623);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619627:{NFSU2_TR(0x619627);
{u32 ea_=u32(r4(R+16)+u32(720u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61962e:{NFSU2_TR(0x61962e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619632:{NFSU2_TR(0x619632);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619634:{NFSU2_TR(0x619634);
{u32 ea_=u32(r4(R+16)+u32(704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61963b:{NFSU2_TR(0x61963b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61963f:{NFSU2_TR(0x61963f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619641:{NFSU2_TR(0x619641);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619645:{NFSU2_TR(0x619645);
{u32 ea_=u32(r4(R+16)+u32(688u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61964c:{NFSU2_TR(0x61964c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61964e:{NFSU2_TR(0x61964e);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619655:{NFSU2_TR(0x619655);
{u32 ea_=u32(r4(R+16)+u32(740u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61965c:{NFSU2_TR(0x61965c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619660:{NFSU2_TR(0x619660);
{u32 ea_=u32(r4(R+16)+u32(724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619667:{NFSU2_TR(0x619667);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61966b:{NFSU2_TR(0x61966b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61966d:{NFSU2_TR(0x61966d);
{u32 ea_=u32(r4(R+16)+u32(708u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619674:{NFSU2_TR(0x619674);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619678:{NFSU2_TR(0x619678);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61967a:{NFSU2_TR(0x61967a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61967e:{NFSU2_TR(0x61967e);
{u32 ea_=u32(r4(R+16)+u32(692u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619685:{NFSU2_TR(0x619685);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619687:{NFSU2_TR(0x619687);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61968e:{NFSU2_TR(0x61968e);
{u32 ea_=u32(r4(R+16)+u32(712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619695:{NFSU2_TR(0x619695);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619699:{NFSU2_TR(0x619699);
{u32 ea_=u32(r4(R+16)+u32(696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6196a0:{NFSU2_TR(0x6196a0);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6196a4:{NFSU2_TR(0x6196a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6196a6:{NFSU2_TR(0x6196a6);
{u32 ea_=u32(r4(R+16)+u32(680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6196ad:{NFSU2_TR(0x6196ad);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6196b1:{NFSU2_TR(0x6196b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6196b3:{NFSU2_TR(0x6196b3);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6196b7:{NFSU2_TR(0x6196b7);
{u32 ea_=u32(r4(R+16)+u32(728u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6196be:{NFSU2_TR(0x6196be);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6196c0:{NFSU2_TR(0x6196c0);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6196c7:{NFSU2_TR(0x6196c7);
{u32 ea_=u32(r4(R+16)+u32(732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6196ce:{NFSU2_TR(0x6196ce);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6196d2:{NFSU2_TR(0x6196d2);
{u32 ea_=u32(r4(R+16)+u32(716u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6196d9:{NFSU2_TR(0x6196d9);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6196dd:{NFSU2_TR(0x6196dd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6196df:{NFSU2_TR(0x6196df);
{u32 ea_=u32(r4(R+16)+u32(700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6196e6:{NFSU2_TR(0x6196e6);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6196ea:{NFSU2_TR(0x6196ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6196ec:{NFSU2_TR(0x6196ec);
{u32 ea_=u32(r4(R+16)+u32(684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6196f3:{NFSU2_TR(0x6196f3);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6196f7:{NFSU2_TR(0x6196f7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6196f9:{NFSU2_TR(0x6196f9);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619700:{NFSU2_TR(0x619700);
{u32 ea_=u32(r4(R+16)+u32(736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619707:{NFSU2_TR(0x619707);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61970b:{NFSU2_TR(0x61970b);
{u32 ea_=u32(r4(R+16)+u32(720u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619712:{NFSU2_TR(0x619712);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619716:{NFSU2_TR(0x619716);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619718:{NFSU2_TR(0x619718);
{u32 ea_=u32(r4(R+16)+u32(704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61971f:{NFSU2_TR(0x61971f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619723:{NFSU2_TR(0x619723);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619725:{NFSU2_TR(0x619725);
{u32 ea_=u32(r4(R+16)+u32(688u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61972c:{NFSU2_TR(0x61972c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619730:{NFSU2_TR(0x619730);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619732:{NFSU2_TR(0x619732);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619739:{NFSU2_TR(0x619739);
{u32 ea_=u32(r4(R+16)+u32(740u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619740:{NFSU2_TR(0x619740);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619744:{NFSU2_TR(0x619744);
{u32 ea_=u32(r4(R+16)+u32(724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61974b:{NFSU2_TR(0x61974b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61974f:{NFSU2_TR(0x61974f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619751:{NFSU2_TR(0x619751);
{u32 ea_=u32(r4(R+16)+u32(708u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619758:{NFSU2_TR(0x619758);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61975c:{NFSU2_TR(0x61975c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61975e:{NFSU2_TR(0x61975e);
{u32 ea_=u32(r4(R+16)+u32(692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619765:{NFSU2_TR(0x619765);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619769:{NFSU2_TR(0x619769);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61976b:{NFSU2_TR(0x61976b);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619772:{NFSU2_TR(0x619772);
{u32 ea_=u32(r4(R+16)+u32(712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619779:{NFSU2_TR(0x619779);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61977d:{NFSU2_TR(0x61977d);
{u32 ea_=u32(r4(R+16)+u32(696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619784:{NFSU2_TR(0x619784);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619788:{NFSU2_TR(0x619788);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61978a:{NFSU2_TR(0x61978a);
{u32 ea_=u32(r4(R+16)+u32(680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619791:{NFSU2_TR(0x619791);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619795:{NFSU2_TR(0x619795);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619797:{NFSU2_TR(0x619797);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61979b:{NFSU2_TR(0x61979b);
{u32 ea_=u32(r4(R+16)+u32(728u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6197a2:{NFSU2_TR(0x6197a2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6197a4:{NFSU2_TR(0x6197a4);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6197ab:{NFSU2_TR(0x6197ab);
{u32 ea_=u32(r4(R+16)+u32(732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6197b2:{NFSU2_TR(0x6197b2);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6197b6:{NFSU2_TR(0x6197b6);
{u32 ea_=u32(r4(R+16)+u32(716u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6197bd:{NFSU2_TR(0x6197bd);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6197c1:{NFSU2_TR(0x6197c1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6197c3:{NFSU2_TR(0x6197c3);
{u32 ea_=u32(r4(R+16)+u32(700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6197ca:{NFSU2_TR(0x6197ca);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6197ce:{NFSU2_TR(0x6197ce);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6197d0:{NFSU2_TR(0x6197d0);
{u32 ea_=u32(r4(R+16)+u32(684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6197d7:{NFSU2_TR(0x6197d7);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6197db:{NFSU2_TR(0x6197db);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6197dd:{NFSU2_TR(0x6197dd);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6197e4:{NFSU2_TR(0x6197e4);
{u32 ea_=u32(r4(R+16)+u32(736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6197eb:{NFSU2_TR(0x6197eb);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6197ef:{NFSU2_TR(0x6197ef);
{u32 ea_=u32(r4(R+16)+u32(720u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6197f6:{NFSU2_TR(0x6197f6);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6197fa:{NFSU2_TR(0x6197fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6197fc:{NFSU2_TR(0x6197fc);
{u32 ea_=u32(r4(R+16)+u32(704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619803:{NFSU2_TR(0x619803);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619807:{NFSU2_TR(0x619807);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619809:{NFSU2_TR(0x619809);
{u32 ea_=u32(r4(R+16)+u32(688u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619810:{NFSU2_TR(0x619810);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619814:{NFSU2_TR(0x619814);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619816:{NFSU2_TR(0x619816);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61981d:{NFSU2_TR(0x61981d);
{u32 ea_=u32(r4(R+16)+u32(740u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619824:{NFSU2_TR(0x619824);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619828:{NFSU2_TR(0x619828);
{u32 ea_=u32(r4(R+16)+u32(724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61982f:{NFSU2_TR(0x61982f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619833:{NFSU2_TR(0x619833);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619835:{NFSU2_TR(0x619835);
{u32 ea_=u32(r4(R+16)+u32(708u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61983c:{NFSU2_TR(0x61983c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619840:{NFSU2_TR(0x619840);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619842:{NFSU2_TR(0x619842);
{u32 ea_=u32(r4(R+16)+u32(692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619849:{NFSU2_TR(0x619849);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61984d:{NFSU2_TR(0x61984d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61984f:{NFSU2_TR(0x61984f);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619856:{NFSU2_TR(0x619856);
{u32 ea_=u32(r4(R+16)+u32(712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61985d:{NFSU2_TR(0x61985d);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619861:{NFSU2_TR(0x619861);
{u32 ea_=u32(r4(R+16)+u32(696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619868:{NFSU2_TR(0x619868);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61986c:{NFSU2_TR(0x61986c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61986e:{NFSU2_TR(0x61986e);
{u32 ea_=u32(r4(R+16)+u32(680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619875:{NFSU2_TR(0x619875);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619879:{NFSU2_TR(0x619879);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61987b:{NFSU2_TR(0x61987b);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61987f:{NFSU2_TR(0x61987f);
{u32 ea_=u32(r4(R+16)+u32(728u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619886:{NFSU2_TR(0x619886);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619888:{NFSU2_TR(0x619888);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61988f:{NFSU2_TR(0x61988f);
{u32 ea_=u32(r4(R+16)+u32(732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619896:{NFSU2_TR(0x619896);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61989a:{NFSU2_TR(0x61989a);
{u32 ea_=u32(r4(R+16)+u32(716u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6198a1:{NFSU2_TR(0x6198a1);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6198a5:{NFSU2_TR(0x6198a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6198a7:{NFSU2_TR(0x6198a7);
{u32 ea_=u32(r4(R+16)+u32(700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6198ae:{NFSU2_TR(0x6198ae);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6198b2:{NFSU2_TR(0x6198b2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6198b4:{NFSU2_TR(0x6198b4);
{u32 ea_=u32(r4(R+16)+u32(684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6198bb:{NFSU2_TR(0x6198bb);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6198bf:{NFSU2_TR(0x6198bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6198c1:{NFSU2_TR(0x6198c1);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6198c8:{NFSU2_TR(0x6198c8);
{u32 ea_=u32(r4(R+16)+u32(736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6198cf:{NFSU2_TR(0x6198cf);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6198d3:{NFSU2_TR(0x6198d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6198d7:{NFSU2_TR(0x6198d7);
{u32 ea_=u32(r4(R+16)+u32(720u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6198de:{NFSU2_TR(0x6198de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6198df:{NFSU2_TR(0x6198df);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6198e3:{NFSU2_TR(0x6198e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6198e7:{NFSU2_TR(0x6198e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6198e8:{NFSU2_TR(0x6198e8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6198ea:{NFSU2_TR(0x6198ea);
{u32 ea_=u32(r4(R+16)+u32(712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6198f1:{NFSU2_TR(0x6198f1);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6198f5:{NFSU2_TR(0x6198f5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6198f7:{NFSU2_TR(0x6198f7);
{u32 ea_=u32(r4(R+16)+u32(696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6198fe:{NFSU2_TR(0x6198fe);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619902:{NFSU2_TR(0x619902);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619904:{NFSU2_TR(0x619904);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61990b:{NFSU2_TR(0x61990b);
{u32 ea_=u32(r4(R+16)+u32(748u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619912:{NFSU2_TR(0x619912);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619916:{NFSU2_TR(0x619916);
{u32 ea_=u32(r4(R+16)+u32(732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61991d:{NFSU2_TR(0x61991d);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619921:{NFSU2_TR(0x619921);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619923:{NFSU2_TR(0x619923);
{u32 ea_=u32(r4(R+16)+u32(716u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61992a:{NFSU2_TR(0x61992a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61992e:{NFSU2_TR(0x61992e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619930:{NFSU2_TR(0x619930);
{u32 ea_=u32(r4(R+16)+u32(700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619937:{NFSU2_TR(0x619937);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61993b:{NFSU2_TR(0x61993b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61993d:{NFSU2_TR(0x61993d);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619944:{NFSU2_TR(0x619944);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x619949ull));
TAIL_STATIC(0x4012b0u,401);
}
B619949:L619949:{c.instructions+=198;NFSU2_TR(0x619949);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61994d:{NFSU2_TR(0x61994d);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619950:{NFSU2_TR(0x619950);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619954:{NFSU2_TR(0x619954);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619956:{NFSU2_TR(0x619956);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619958:{NFSU2_TR(0x619958);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61995c:{NFSU2_TR(0x61995c);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61995f:{NFSU2_TR(0x61995f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619961:{NFSU2_TR(0x619961);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619965:{NFSU2_TR(0x619965);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619968:{NFSU2_TR(0x619968);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61996a:{NFSU2_TR(0x61996a);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619971:{NFSU2_TR(0x619971);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619975:{NFSU2_TR(0x619975);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619978:{NFSU2_TR(0x619978);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61997c:{NFSU2_TR(0x61997c);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61997f:{NFSU2_TR(0x61997f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619981:{NFSU2_TR(0x619981);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619985:{NFSU2_TR(0x619985);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619988:{NFSU2_TR(0x619988);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61998a:{NFSU2_TR(0x61998a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61998e:{NFSU2_TR(0x61998e);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619991:{NFSU2_TR(0x619991);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619993:{NFSU2_TR(0x619993);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61999a:{NFSU2_TR(0x61999a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61999e:{NFSU2_TR(0x61999e);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6199a1:{NFSU2_TR(0x6199a1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6199a5:{NFSU2_TR(0x6199a5);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6199a8:{NFSU2_TR(0x6199a8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6199aa:{NFSU2_TR(0x6199aa);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6199ae:{NFSU2_TR(0x6199ae);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6199b1:{NFSU2_TR(0x6199b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6199b3:{NFSU2_TR(0x6199b3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6199b7:{NFSU2_TR(0x6199b7);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6199ba:{NFSU2_TR(0x6199ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6199bc:{NFSU2_TR(0x6199bc);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6199c3:{NFSU2_TR(0x6199c3);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6199c7:{NFSU2_TR(0x6199c7);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6199ca:{NFSU2_TR(0x6199ca);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6199ce:{NFSU2_TR(0x6199ce);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6199d1:{NFSU2_TR(0x6199d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6199d3:{NFSU2_TR(0x6199d3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6199d7:{NFSU2_TR(0x6199d7);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6199da:{NFSU2_TR(0x6199da);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6199dc:{NFSU2_TR(0x6199dc);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6199e0:{NFSU2_TR(0x6199e0);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6199e3:{NFSU2_TR(0x6199e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6199e5:{NFSU2_TR(0x6199e5);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6199ec:{NFSU2_TR(0x6199ec);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6199f0:{NFSU2_TR(0x6199f0);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6199f3:{NFSU2_TR(0x6199f3);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6199f7:{NFSU2_TR(0x6199f7);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6199f9:{NFSU2_TR(0x6199f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6199fb:{NFSU2_TR(0x6199fb);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6199ff:{NFSU2_TR(0x6199ff);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a02:{NFSU2_TR(0x619a02);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a04:{NFSU2_TR(0x619a04);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a08:{NFSU2_TR(0x619a08);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a0b:{NFSU2_TR(0x619a0b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a0d:{NFSU2_TR(0x619a0d);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619a14:{NFSU2_TR(0x619a14);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a18:{NFSU2_TR(0x619a18);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a1b:{NFSU2_TR(0x619a1b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a1f:{NFSU2_TR(0x619a1f);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a22:{NFSU2_TR(0x619a22);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a24:{NFSU2_TR(0x619a24);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a28:{NFSU2_TR(0x619a28);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a2b:{NFSU2_TR(0x619a2b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a2d:{NFSU2_TR(0x619a2d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a31:{NFSU2_TR(0x619a31);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a34:{NFSU2_TR(0x619a34);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a36:{NFSU2_TR(0x619a36);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619a3d:{NFSU2_TR(0x619a3d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a41:{NFSU2_TR(0x619a41);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a44:{NFSU2_TR(0x619a44);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a48:{NFSU2_TR(0x619a48);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a4b:{NFSU2_TR(0x619a4b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a4d:{NFSU2_TR(0x619a4d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a51:{NFSU2_TR(0x619a51);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a54:{NFSU2_TR(0x619a54);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a56:{NFSU2_TR(0x619a56);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a5a:{NFSU2_TR(0x619a5a);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a5d:{NFSU2_TR(0x619a5d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a5f:{NFSU2_TR(0x619a5f);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619a66:{NFSU2_TR(0x619a66);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a6a:{NFSU2_TR(0x619a6a);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a6d:{NFSU2_TR(0x619a6d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a71:{NFSU2_TR(0x619a71);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a74:{NFSU2_TR(0x619a74);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a76:{NFSU2_TR(0x619a76);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a7a:{NFSU2_TR(0x619a7a);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a7d:{NFSU2_TR(0x619a7d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a7f:{NFSU2_TR(0x619a7f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a83:{NFSU2_TR(0x619a83);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a86:{NFSU2_TR(0x619a86);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a88:{NFSU2_TR(0x619a88);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619a8f:{NFSU2_TR(0x619a8f);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a93:{NFSU2_TR(0x619a93);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a96:{NFSU2_TR(0x619a96);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a9a:{NFSU2_TR(0x619a9a);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a9c:{NFSU2_TR(0x619a9c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a9e:{NFSU2_TR(0x619a9e);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619aa2:{NFSU2_TR(0x619aa2);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619aa5:{NFSU2_TR(0x619aa5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619aa7:{NFSU2_TR(0x619aa7);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619aab:{NFSU2_TR(0x619aab);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619aae:{NFSU2_TR(0x619aae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619ab0:{NFSU2_TR(0x619ab0);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619ab7:{NFSU2_TR(0x619ab7);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619abb:{NFSU2_TR(0x619abb);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619abe:{NFSU2_TR(0x619abe);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619ac2:{NFSU2_TR(0x619ac2);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ac5:{NFSU2_TR(0x619ac5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619ac7:{NFSU2_TR(0x619ac7);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619acb:{NFSU2_TR(0x619acb);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ace:{NFSU2_TR(0x619ace);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619ad0:{NFSU2_TR(0x619ad0);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619ad4:{NFSU2_TR(0x619ad4);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ad7:{NFSU2_TR(0x619ad7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619ad9:{NFSU2_TR(0x619ad9);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619ae0:{NFSU2_TR(0x619ae0);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619ae4:{NFSU2_TR(0x619ae4);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ae7:{NFSU2_TR(0x619ae7);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619aeb:{NFSU2_TR(0x619aeb);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619aee:{NFSU2_TR(0x619aee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619af0:{NFSU2_TR(0x619af0);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619af4:{NFSU2_TR(0x619af4);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619af7:{NFSU2_TR(0x619af7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619af9:{NFSU2_TR(0x619af9);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619afd:{NFSU2_TR(0x619afd);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b00:{NFSU2_TR(0x619b00);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619b02:{NFSU2_TR(0x619b02);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619b09:{NFSU2_TR(0x619b09);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b0d:{NFSU2_TR(0x619b0d);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b10:{NFSU2_TR(0x619b10);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b14:{NFSU2_TR(0x619b14);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b17:{NFSU2_TR(0x619b17);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619b19:{NFSU2_TR(0x619b19);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b1d:{NFSU2_TR(0x619b1d);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b20:{NFSU2_TR(0x619b20);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619b22:{NFSU2_TR(0x619b22);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b26:{NFSU2_TR(0x619b26);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b29:{NFSU2_TR(0x619b29);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619b2b:{NFSU2_TR(0x619b2b);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619b32:{NFSU2_TR(0x619b32);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b36:{NFSU2_TR(0x619b36);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b39:{NFSU2_TR(0x619b39);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b3d:{NFSU2_TR(0x619b3d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b3f:{NFSU2_TR(0x619b3f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619b41:{NFSU2_TR(0x619b41);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b45:{NFSU2_TR(0x619b45);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b48:{NFSU2_TR(0x619b48);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619b4a:{NFSU2_TR(0x619b4a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b4e:{NFSU2_TR(0x619b4e);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b51:{NFSU2_TR(0x619b51);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619b53:{NFSU2_TR(0x619b53);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619b5a:{NFSU2_TR(0x619b5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B619b5e:{NFSU2_TR(0x619b5e);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b62:{NFSU2_TR(0x619b62);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B619b69:{NFSU2_TR(0x619b69);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b6c:{NFSU2_TR(0x619b6c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B619b6d:{NFSU2_TR(0x619b6d);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b71:{NFSU2_TR(0x619b71);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x80ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B619b77:{NFSU2_TR(0x619b77);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b7a:{NFSU2_TR(0x619b7a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B619b7b:{NFSU2_TR(0x619b7b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619b7d:{NFSU2_TR(0x619b7d);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b81:{NFSU2_TR(0x619b81);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b84:{NFSU2_TR(0x619b84);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619b86:{NFSU2_TR(0x619b86);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b8a:{NFSU2_TR(0x619b8a);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b8d:{NFSU2_TR(0x619b8d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619b8f:{NFSU2_TR(0x619b8f);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619b96:{NFSU2_TR(0x619b96);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b9a:{NFSU2_TR(0x619b9a);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b9d:{NFSU2_TR(0x619b9d);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619ba1:{NFSU2_TR(0x619ba1);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ba4:{NFSU2_TR(0x619ba4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619ba6:{NFSU2_TR(0x619ba6);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619baa:{NFSU2_TR(0x619baa);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619bad:{NFSU2_TR(0x619bad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619baf:{NFSU2_TR(0x619baf);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619bb3:{NFSU2_TR(0x619bb3);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619bb6:{NFSU2_TR(0x619bb6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619bb8:{NFSU2_TR(0x619bb8);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619bbf:{NFSU2_TR(0x619bbf);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619bc3:{NFSU2_TR(0x619bc3);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619bc6:{NFSU2_TR(0x619bc6);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619bca:{NFSU2_TR(0x619bca);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619bcd:{NFSU2_TR(0x619bcd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619bcf:{NFSU2_TR(0x619bcf);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619bd3:{NFSU2_TR(0x619bd3);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619bd6:{NFSU2_TR(0x619bd6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619bd8:{NFSU2_TR(0x619bd8);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619bdc:{NFSU2_TR(0x619bdc);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619bdf:{NFSU2_TR(0x619bdf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619be1:{NFSU2_TR(0x619be1);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619be8:{NFSU2_TR(0x619be8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x619bedull));
TAIL_STATIC(0x4012b0u,401);
}
B619bed:L619bed:{c.instructions+=12;NFSU2_TR(0x619bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B619bf0:{NFSU2_TR(0x619bf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B619bf4:{NFSU2_TR(0x619bf4);
u8 U[4];
w4(U+0,u32(u32(u32(0x428ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B619bfb:{NFSU2_TR(0x619bfb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B619bfc:{NFSU2_TR(0x619bfc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B619bfd:{NFSU2_TR(0x619bfd);
u8 U[4];
w4(U+0,u32(u32(u32(0x360ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B619c04:{NFSU2_TR(0x619c04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B619c05:{NFSU2_TR(0x619c05);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B619c0a:{NFSU2_TR(0x619c0a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x380ull))));
}
B619c0f:{NFSU2_TR(0x619c0f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B619c10:{NFSU2_TR(0x619c10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B619c11:{NFSU2_TR(0x619c11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x619c16ull));
TAIL_STATIC(0x48f660u,48f);
}
B619c16:L619c16:{c.instructions+=4;NFSU2_TR(0x619c16);
u8 U[8];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B619c1d:{NFSU2_TR(0x619c1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B619c20:{NFSU2_TR(0x619c20);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B619c22:{NFSU2_TR(0x619c22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L619c4a;}}
}
B619c24:L619c24:{c.instructions+=4;NFSU2_TR(0x619c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B619c27:{NFSU2_TR(0x619c27);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B619c28:{NFSU2_TR(0x619c28);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B619c29:{NFSU2_TR(0x619c29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x619c2eull));
TAIL_STATIC(0x60d700u,60d);
}
B619c2e:L619c2e:{c.instructions+=5;NFSU2_TR(0x619c2e);
{u32 ea_=u32(u32(9051228u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B619c34:{NFSU2_TR(0x619c34);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B619c37:{NFSU2_TR(0x619c37);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B619c39:{NFSU2_TR(0x619c39);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B619c3c:{NFSU2_TR(0x619c3c);
if(r1(R+514)){{goto L619c4a;}}
}
B619c3e:L619c3e:{c.instructions+=3;NFSU2_TR(0x619c3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B619c42:{NFSU2_TR(0x619c42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B619c48:{NFSU2_TR(0x619c48);
{goto L619c51;}
}
B619c4a:L619c4a:{c.instructions+=1;NFSU2_TR(0x619c4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B619c51:L619c51:{c.instructions+=2;NFSU2_TR(0x619c51);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B619c53:{NFSU2_TR(0x619c53);
if(r1(R+518)){{goto L619c7e;}}
}
B619c55:L619c55:{c.instructions+=13;NFSU2_TR(0x619c55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B619c58:{NFSU2_TR(0x619c58);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B619c5f:{NFSU2_TR(0x619c5f);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B619c61:{NFSU2_TR(0x619c61);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B619c65:{NFSU2_TR(0x619c65);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B619c67:{NFSU2_TR(0x619c67);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x8000ull))));
}
B619c6d:{NFSU2_TR(0x619c6d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B619c6e:{NFSU2_TR(0x619c6e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x380ull))));
}
B619c73:{NFSU2_TR(0x619c73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B619c74:{NFSU2_TR(0x619c74);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B619c75:{NFSU2_TR(0x619c75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B619c76:{NFSU2_TR(0x619c76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B619c79:{NFSU2_TR(0x619c79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x619c7eull));
TAIL_STATIC(0x5c5930u,5c5);
}
B619c7e:L619c7e:{c.instructions+=8;NFSU2_TR(0x619c7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B619c82:{NFSU2_TR(0x619c82);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B619c89:{NFSU2_TR(0x619c89);
u8 U[16];
w4(U+0,u32(u32(u32(0x1b68ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B619c90:{NFSU2_TR(0x619c90);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B619c94:{NFSU2_TR(0x619c94);
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
B619c96:{NFSU2_TR(0x619c96);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B619c9d:{NFSU2_TR(0x619c9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B619ca4:{NFSU2_TR(0x619ca4);
if(r1(R+518)){TAIL_STATIC(0x61ab25u,61a);}
}
B619caa:L619caa:{c.instructions+=151;NFSU2_TR(0x619caa);
{u32 ea_=u32(r4(R+16)+u32(480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619cb1:{NFSU2_TR(0x619cb1);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619cb8:{NFSU2_TR(0x619cb8);
{u32 ea_=u32(r4(R+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619cbf:{NFSU2_TR(0x619cbf);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619cc6:{NFSU2_TR(0x619cc6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619cc8:{NFSU2_TR(0x619cc8);
{u32 ea_=u32(r4(R+16)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619ccf:{NFSU2_TR(0x619ccf);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619cd6:{NFSU2_TR(0x619cd6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619cd8:{NFSU2_TR(0x619cd8);
{u32 ea_=u32(r4(R+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619cdf:{NFSU2_TR(0x619cdf);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ce6:{NFSU2_TR(0x619ce6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619ce8:{NFSU2_TR(0x619ce8);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619cec:{NFSU2_TR(0x619cec);
{u32 ea_=u32(r4(R+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619cf3:{NFSU2_TR(0x619cf3);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619cfa:{NFSU2_TR(0x619cfa);
{u32 ea_=u32(r4(R+16)+u32(480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619d01:{NFSU2_TR(0x619d01);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619d08:{NFSU2_TR(0x619d08);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619d0a:{NFSU2_TR(0x619d0a);
{u32 ea_=u32(r4(R+16)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619d11:{NFSU2_TR(0x619d11);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619d18:{NFSU2_TR(0x619d18);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619d1a:{NFSU2_TR(0x619d1a);
{u32 ea_=u32(r4(R+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619d21:{NFSU2_TR(0x619d21);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619d28:{NFSU2_TR(0x619d28);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619d2a:{NFSU2_TR(0x619d2a);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619d2e:{NFSU2_TR(0x619d2e);
{u32 ea_=u32(r4(R+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619d35:{NFSU2_TR(0x619d35);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619d3c:{NFSU2_TR(0x619d3c);
{u32 ea_=u32(r4(R+16)+u32(480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619d43:{NFSU2_TR(0x619d43);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619d4a:{NFSU2_TR(0x619d4a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619d4c:{NFSU2_TR(0x619d4c);
{u32 ea_=u32(r4(R+16)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619d53:{NFSU2_TR(0x619d53);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619d5a:{NFSU2_TR(0x619d5a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619d5c:{NFSU2_TR(0x619d5c);
{u32 ea_=u32(r4(R+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619d63:{NFSU2_TR(0x619d63);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619d6a:{NFSU2_TR(0x619d6a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619d6c:{NFSU2_TR(0x619d6c);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619d70:{NFSU2_TR(0x619d70);
{u32 ea_=u32(r4(R+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619d77:{NFSU2_TR(0x619d77);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619d7e:{NFSU2_TR(0x619d7e);
{u32 ea_=u32(r4(R+16)+u32(480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619d85:{NFSU2_TR(0x619d85);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619d8c:{NFSU2_TR(0x619d8c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619d8e:{NFSU2_TR(0x619d8e);
{u32 ea_=u32(r4(R+16)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619d95:{NFSU2_TR(0x619d95);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619d9c:{NFSU2_TR(0x619d9c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619d9e:{NFSU2_TR(0x619d9e);
{u32 ea_=u32(r4(R+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619da5:{NFSU2_TR(0x619da5);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619dac:{NFSU2_TR(0x619dac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619dae:{NFSU2_TR(0x619dae);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619db2:{NFSU2_TR(0x619db2);
{u32 ea_=u32(r4(R+16)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619db9:{NFSU2_TR(0x619db9);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619dc0:{NFSU2_TR(0x619dc0);
{u32 ea_=u32(r4(R+16)+u32(508u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619dc7:{NFSU2_TR(0x619dc7);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619dce:{NFSU2_TR(0x619dce);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619dd0:{NFSU2_TR(0x619dd0);
{u32 ea_=u32(r4(R+16)+u32(504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619dd7:{NFSU2_TR(0x619dd7);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619dde:{NFSU2_TR(0x619dde);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619de0:{NFSU2_TR(0x619de0);
{u32 ea_=u32(r4(R+16)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619de7:{NFSU2_TR(0x619de7);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619dee:{NFSU2_TR(0x619dee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619df0:{NFSU2_TR(0x619df0);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619df7:{NFSU2_TR(0x619df7);
{u32 ea_=u32(r4(R+16)+u32(508u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619dfe:{NFSU2_TR(0x619dfe);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619e05:{NFSU2_TR(0x619e05);
{u32 ea_=u32(r4(R+16)+u32(504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619e0c:{NFSU2_TR(0x619e0c);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619e13:{NFSU2_TR(0x619e13);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619e15:{NFSU2_TR(0x619e15);
{u32 ea_=u32(r4(R+16)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619e1c:{NFSU2_TR(0x619e1c);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619e23:{NFSU2_TR(0x619e23);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619e25:{NFSU2_TR(0x619e25);
{u32 ea_=u32(r4(R+16)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619e2c:{NFSU2_TR(0x619e2c);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619e33:{NFSU2_TR(0x619e33);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619e35:{NFSU2_TR(0x619e35);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619e3c:{NFSU2_TR(0x619e3c);
{u32 ea_=u32(r4(R+16)+u32(508u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619e43:{NFSU2_TR(0x619e43);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619e4a:{NFSU2_TR(0x619e4a);
{u32 ea_=u32(r4(R+16)+u32(504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619e51:{NFSU2_TR(0x619e51);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619e58:{NFSU2_TR(0x619e58);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619e5a:{NFSU2_TR(0x619e5a);
{u32 ea_=u32(r4(R+16)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619e61:{NFSU2_TR(0x619e61);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619e68:{NFSU2_TR(0x619e68);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619e6a:{NFSU2_TR(0x619e6a);
{u32 ea_=u32(r4(R+16)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619e71:{NFSU2_TR(0x619e71);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619e78:{NFSU2_TR(0x619e78);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619e7a:{NFSU2_TR(0x619e7a);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619e81:{NFSU2_TR(0x619e81);
{u32 ea_=u32(r4(R+16)+u32(508u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619e88:{NFSU2_TR(0x619e88);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619e8f:{NFSU2_TR(0x619e8f);
{u32 ea_=u32(r4(R+16)+u32(504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619e96:{NFSU2_TR(0x619e96);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619e9d:{NFSU2_TR(0x619e9d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619e9f:{NFSU2_TR(0x619e9f);
{u32 ea_=u32(r4(R+16)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619ea6:{NFSU2_TR(0x619ea6);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ead:{NFSU2_TR(0x619ead);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619eaf:{NFSU2_TR(0x619eaf);
{u32 ea_=u32(r4(R+16)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619eb6:{NFSU2_TR(0x619eb6);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ebd:{NFSU2_TR(0x619ebd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619ebf:{NFSU2_TR(0x619ebf);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619ec6:{NFSU2_TR(0x619ec6);
{u32 ea_=u32(r4(R+16)+u32(512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619ecd:{NFSU2_TR(0x619ecd);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ed4:{NFSU2_TR(0x619ed4);
{u32 ea_=u32(r4(R+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619edb:{NFSU2_TR(0x619edb);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ee2:{NFSU2_TR(0x619ee2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619ee4:{NFSU2_TR(0x619ee4);
{u32 ea_=u32(r4(R+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619eeb:{NFSU2_TR(0x619eeb);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ef2:{NFSU2_TR(0x619ef2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619ef4:{NFSU2_TR(0x619ef4);
{u32 ea_=u32(r4(R+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619efb:{NFSU2_TR(0x619efb);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619f02:{NFSU2_TR(0x619f02);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619f04:{NFSU2_TR(0x619f04);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619f0b:{NFSU2_TR(0x619f0b);
{u32 ea_=u32(r4(R+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619f12:{NFSU2_TR(0x619f12);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619f19:{NFSU2_TR(0x619f19);
{u32 ea_=u32(r4(R+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619f20:{NFSU2_TR(0x619f20);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619f27:{NFSU2_TR(0x619f27);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619f29:{NFSU2_TR(0x619f29);
{u32 ea_=u32(r4(R+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619f30:{NFSU2_TR(0x619f30);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619f37:{NFSU2_TR(0x619f37);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619f39:{NFSU2_TR(0x619f39);
{u32 ea_=u32(r4(R+16)+u32(512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619f40:{NFSU2_TR(0x619f40);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619f47:{NFSU2_TR(0x619f47);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619f49:{NFSU2_TR(0x619f49);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619f50:{NFSU2_TR(0x619f50);
{u32 ea_=u32(r4(R+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619f57:{NFSU2_TR(0x619f57);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619f5e:{NFSU2_TR(0x619f5e);
{u32 ea_=u32(r4(R+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619f65:{NFSU2_TR(0x619f65);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619f6c:{NFSU2_TR(0x619f6c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619f6e:{NFSU2_TR(0x619f6e);
{u32 ea_=u32(r4(R+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619f75:{NFSU2_TR(0x619f75);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619f7c:{NFSU2_TR(0x619f7c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619f7e:{NFSU2_TR(0x619f7e);
{u32 ea_=u32(r4(R+16)+u32(512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619f85:{NFSU2_TR(0x619f85);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619f8c:{NFSU2_TR(0x619f8c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619f8e:{NFSU2_TR(0x619f8e);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619f95:{NFSU2_TR(0x619f95);
{u32 ea_=u32(r4(R+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619f9c:{NFSU2_TR(0x619f9c);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619fa3:{NFSU2_TR(0x619fa3);
{u32 ea_=u32(r4(R+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619faa:{NFSU2_TR(0x619faa);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619fb1:{NFSU2_TR(0x619fb1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619fb3:{NFSU2_TR(0x619fb3);
{u32 ea_=u32(r4(R+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619fba:{NFSU2_TR(0x619fba);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619fc1:{NFSU2_TR(0x619fc1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619fc3:{NFSU2_TR(0x619fc3);
{u32 ea_=u32(r4(R+16)+u32(512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619fca:{NFSU2_TR(0x619fca);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619fd1:{NFSU2_TR(0x619fd1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619fd3:{NFSU2_TR(0x619fd3);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619fda:{NFSU2_TR(0x619fda);
{u32 ea_=u32(r4(R+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619fe1:{NFSU2_TR(0x619fe1);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619fe8:{NFSU2_TR(0x619fe8);
{u32 ea_=u32(r4(R+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619fef:{NFSU2_TR(0x619fef);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ff6:{NFSU2_TR(0x619ff6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619ff8:{NFSU2_TR(0x619ff8);
{u32 ea_=u32(r4(R+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619fff:{NFSU2_TR(0x619fff);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
TAIL_STATIC(0x61a006u,61a);
}
XIT:NFSU2_TR_EXIT(0x619,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
