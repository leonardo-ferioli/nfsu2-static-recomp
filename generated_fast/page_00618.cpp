#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_5c5(u8* __restrict R,Cpu& c);
u32 body_619(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x618,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x618,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_618(u8* __restrict R,Cpu& c);
u32 page_618(Cpu& c){return body_618(c.regs.data(),c);}
__attribute__((noinline)) u32 body_618(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x618001:goto L618001;
case 0x618003:c.instructions+=72;goto B618003;
case 0x618007:c.instructions+=71;goto B618007;
case 0x61800a:c.instructions+=70;goto B61800a;
case 0x61800c:c.instructions+=69;goto B61800c;
case 0x618010:c.instructions+=68;goto B618010;
case 0x618013:c.instructions+=67;goto B618013;
case 0x618015:c.instructions+=66;goto B618015;
case 0x61801c:c.instructions+=65;goto B61801c;
case 0x618020:c.instructions+=64;goto B618020;
case 0x618023:c.instructions+=63;goto B618023;
case 0x618027:c.instructions+=62;goto B618027;
case 0x61802a:c.instructions+=61;goto B61802a;
case 0x61802c:c.instructions+=60;goto B61802c;
case 0x618030:c.instructions+=59;goto B618030;
case 0x618033:c.instructions+=58;goto B618033;
case 0x618035:c.instructions+=57;goto B618035;
case 0x618039:c.instructions+=56;goto B618039;
case 0x61803c:c.instructions+=55;goto B61803c;
case 0x61803e:c.instructions+=54;goto B61803e;
case 0x618045:c.instructions+=53;goto B618045;
case 0x618049:c.instructions+=52;goto B618049;
case 0x61804c:c.instructions+=51;goto B61804c;
case 0x618050:c.instructions+=50;goto B618050;
case 0x618053:c.instructions+=49;goto B618053;
case 0x618055:c.instructions+=48;goto B618055;
case 0x618059:c.instructions+=47;goto B618059;
case 0x61805b:c.instructions+=46;goto B61805b;
case 0x61805d:c.instructions+=45;goto B61805d;
case 0x618061:c.instructions+=44;goto B618061;
case 0x618064:c.instructions+=43;goto B618064;
case 0x618066:c.instructions+=42;goto B618066;
case 0x61806d:c.instructions+=41;goto B61806d;
case 0x618071:c.instructions+=40;goto B618071;
case 0x618074:c.instructions+=39;goto B618074;
case 0x618078:c.instructions+=38;goto B618078;
case 0x61807b:c.instructions+=37;goto B61807b;
case 0x61807d:c.instructions+=36;goto B61807d;
case 0x618081:c.instructions+=35;goto B618081;
case 0x618084:c.instructions+=34;goto B618084;
case 0x618086:c.instructions+=33;goto B618086;
case 0x61808a:c.instructions+=32;goto B61808a;
case 0x61808d:c.instructions+=31;goto B61808d;
case 0x61808f:c.instructions+=30;goto B61808f;
case 0x618096:c.instructions+=29;goto B618096;
case 0x61809a:c.instructions+=28;goto B61809a;
case 0x61809d:c.instructions+=27;goto B61809d;
case 0x6180a1:c.instructions+=26;goto B6180a1;
case 0x6180a5:c.instructions+=25;goto B6180a5;
case 0x6180a6:c.instructions+=24;goto B6180a6;
case 0x6180a9:c.instructions+=23;goto B6180a9;
case 0x6180ad:c.instructions+=22;goto B6180ad;
case 0x6180ae:c.instructions+=21;goto B6180ae;
case 0x6180b0:c.instructions+=20;goto B6180b0;
case 0x6180b4:c.instructions+=19;goto B6180b4;
case 0x6180b7:c.instructions+=18;goto B6180b7;
case 0x6180b9:c.instructions+=17;goto B6180b9;
case 0x6180bd:c.instructions+=16;goto B6180bd;
case 0x6180c0:c.instructions+=15;goto B6180c0;
case 0x6180c2:c.instructions+=14;goto B6180c2;
case 0x6180c9:c.instructions+=13;goto B6180c9;
case 0x6180cd:c.instructions+=12;goto B6180cd;
case 0x6180d0:c.instructions+=11;goto B6180d0;
case 0x6180d4:c.instructions+=10;goto B6180d4;
case 0x6180d7:c.instructions+=9;goto B6180d7;
case 0x6180d9:c.instructions+=8;goto B6180d9;
case 0x6180dd:c.instructions+=7;goto B6180dd;
case 0x6180e0:c.instructions+=6;goto B6180e0;
case 0x6180e2:c.instructions+=5;goto B6180e2;
case 0x6180e6:c.instructions+=4;goto B6180e6;
case 0x6180e9:c.instructions+=3;goto B6180e9;
case 0x6180eb:c.instructions+=2;goto B6180eb;
case 0x6180f2:c.instructions+=1;goto B6180f2;
case 0x6180f7:goto L6180f7;
case 0x6180fe:c.instructions+=196;goto B6180fe;
case 0x618102:c.instructions+=195;goto B618102;
case 0x618109:c.instructions+=194;goto B618109;
case 0x61810d:c.instructions+=193;goto B61810d;
case 0x61810f:c.instructions+=192;goto B61810f;
case 0x618116:c.instructions+=191;goto B618116;
case 0x61811a:c.instructions+=190;goto B61811a;
case 0x61811c:c.instructions+=189;goto B61811c;
case 0x618123:c.instructions+=188;goto B618123;
case 0x618127:c.instructions+=187;goto B618127;
case 0x618129:c.instructions+=186;goto B618129;
case 0x618130:c.instructions+=185;goto B618130;
case 0x618134:c.instructions+=184;goto B618134;
case 0x61813b:c.instructions+=183;goto B61813b;
case 0x618142:c.instructions+=182;goto B618142;
case 0x618146:c.instructions+=181;goto B618146;
case 0x618148:c.instructions+=180;goto B618148;
case 0x61814f:c.instructions+=179;goto B61814f;
case 0x618153:c.instructions+=178;goto B618153;
case 0x618155:c.instructions+=177;goto B618155;
case 0x61815c:c.instructions+=176;goto B61815c;
case 0x618160:c.instructions+=175;goto B618160;
case 0x618162:c.instructions+=174;goto B618162;
case 0x618169:c.instructions+=173;goto B618169;
case 0x61816d:c.instructions+=172;goto B61816d;
case 0x618174:c.instructions+=171;goto B618174;
case 0x61817b:c.instructions+=170;goto B61817b;
case 0x61817f:c.instructions+=169;goto B61817f;
case 0x618181:c.instructions+=168;goto B618181;
case 0x618188:c.instructions+=167;goto B618188;
case 0x61818c:c.instructions+=166;goto B61818c;
case 0x61818e:c.instructions+=165;goto B61818e;
case 0x618195:c.instructions+=164;goto B618195;
case 0x618199:c.instructions+=163;goto B618199;
case 0x61819b:c.instructions+=162;goto B61819b;
case 0x6181a2:c.instructions+=161;goto B6181a2;
case 0x6181a6:c.instructions+=160;goto B6181a6;
case 0x6181ad:c.instructions+=159;goto B6181ad;
case 0x6181b4:c.instructions+=158;goto B6181b4;
case 0x6181b8:c.instructions+=157;goto B6181b8;
case 0x6181ba:c.instructions+=156;goto B6181ba;
case 0x6181c1:c.instructions+=155;goto B6181c1;
case 0x6181c5:c.instructions+=154;goto B6181c5;
case 0x6181c7:c.instructions+=153;goto B6181c7;
case 0x6181ce:c.instructions+=152;goto B6181ce;
case 0x6181d2:c.instructions+=151;goto B6181d2;
case 0x6181d4:c.instructions+=150;goto B6181d4;
case 0x6181db:c.instructions+=149;goto B6181db;
case 0x6181e2:c.instructions+=148;goto B6181e2;
case 0x6181e6:c.instructions+=147;goto B6181e6;
case 0x6181ed:c.instructions+=146;goto B6181ed;
case 0x6181f1:c.instructions+=145;goto B6181f1;
case 0x6181f3:c.instructions+=144;goto B6181f3;
case 0x6181fa:c.instructions+=143;goto B6181fa;
case 0x6181fe:c.instructions+=142;goto B6181fe;
case 0x618200:c.instructions+=141;goto B618200;
case 0x618207:c.instructions+=140;goto B618207;
case 0x61820b:c.instructions+=139;goto B61820b;
case 0x61820d:c.instructions+=138;goto B61820d;
case 0x618214:c.instructions+=137;goto B618214;
case 0x61821b:c.instructions+=136;goto B61821b;
case 0x61821f:c.instructions+=135;goto B61821f;
case 0x618226:c.instructions+=134;goto B618226;
case 0x61822a:c.instructions+=133;goto B61822a;
case 0x61822c:c.instructions+=132;goto B61822c;
case 0x618233:c.instructions+=131;goto B618233;
case 0x618237:c.instructions+=130;goto B618237;
case 0x618239:c.instructions+=129;goto B618239;
case 0x618240:c.instructions+=128;goto B618240;
case 0x618244:c.instructions+=127;goto B618244;
case 0x618246:c.instructions+=126;goto B618246;
case 0x61824d:c.instructions+=125;goto B61824d;
case 0x618254:c.instructions+=124;goto B618254;
case 0x618258:c.instructions+=123;goto B618258;
case 0x61825f:c.instructions+=122;goto B61825f;
case 0x618263:c.instructions+=121;goto B618263;
case 0x618265:c.instructions+=120;goto B618265;
case 0x61826c:c.instructions+=119;goto B61826c;
case 0x618270:c.instructions+=118;goto B618270;
case 0x618272:c.instructions+=117;goto B618272;
case 0x618279:c.instructions+=116;goto B618279;
case 0x61827d:c.instructions+=115;goto B61827d;
case 0x61827f:c.instructions+=114;goto B61827f;
case 0x618286:c.instructions+=113;goto B618286;
case 0x61828d:c.instructions+=112;goto B61828d;
case 0x618291:c.instructions+=111;goto B618291;
case 0x618298:c.instructions+=110;goto B618298;
case 0x61829c:c.instructions+=109;goto B61829c;
case 0x61829e:c.instructions+=108;goto B61829e;
case 0x6182a5:c.instructions+=107;goto B6182a5;
case 0x6182a9:c.instructions+=106;goto B6182a9;
case 0x6182ab:c.instructions+=105;goto B6182ab;
case 0x6182b2:c.instructions+=104;goto B6182b2;
case 0x6182b6:c.instructions+=103;goto B6182b6;
case 0x6182b8:c.instructions+=102;goto B6182b8;
case 0x6182bf:c.instructions+=101;goto B6182bf;
case 0x6182c6:c.instructions+=100;goto B6182c6;
case 0x6182ca:c.instructions+=99;goto B6182ca;
case 0x6182d1:c.instructions+=98;goto B6182d1;
case 0x6182d5:c.instructions+=97;goto B6182d5;
case 0x6182d7:c.instructions+=96;goto B6182d7;
case 0x6182de:c.instructions+=95;goto B6182de;
case 0x6182e2:c.instructions+=94;goto B6182e2;
case 0x6182e4:c.instructions+=93;goto B6182e4;
case 0x6182eb:c.instructions+=92;goto B6182eb;
case 0x6182ef:c.instructions+=91;goto B6182ef;
case 0x6182f1:c.instructions+=90;goto B6182f1;
case 0x6182f8:c.instructions+=89;goto B6182f8;
case 0x6182ff:c.instructions+=88;goto B6182ff;
case 0x618303:c.instructions+=87;goto B618303;
case 0x61830a:c.instructions+=86;goto B61830a;
case 0x61830e:c.instructions+=85;goto B61830e;
case 0x618310:c.instructions+=84;goto B618310;
case 0x618317:c.instructions+=83;goto B618317;
case 0x61831b:c.instructions+=82;goto B61831b;
case 0x61831d:c.instructions+=81;goto B61831d;
case 0x618324:c.instructions+=80;goto B618324;
case 0x618328:c.instructions+=79;goto B618328;
case 0x61832a:c.instructions+=78;goto B61832a;
case 0x618331:c.instructions+=77;goto B618331;
case 0x618338:c.instructions+=76;goto B618338;
case 0x61833c:c.instructions+=75;goto B61833c;
case 0x618343:c.instructions+=74;goto B618343;
case 0x618347:c.instructions+=73;goto B618347;
case 0x618349:c.instructions+=72;goto B618349;
case 0x618350:c.instructions+=71;goto B618350;
case 0x618354:c.instructions+=70;goto B618354;
case 0x618356:c.instructions+=69;goto B618356;
case 0x61835d:c.instructions+=68;goto B61835d;
case 0x618361:c.instructions+=67;goto B618361;
case 0x618363:c.instructions+=66;goto B618363;
case 0x61836a:c.instructions+=65;goto B61836a;
case 0x618371:c.instructions+=64;goto B618371;
case 0x618375:c.instructions+=63;goto B618375;
case 0x61837c:c.instructions+=62;goto B61837c;
case 0x618380:c.instructions+=61;goto B618380;
case 0x618382:c.instructions+=60;goto B618382;
case 0x618389:c.instructions+=59;goto B618389;
case 0x61838d:c.instructions+=58;goto B61838d;
case 0x61838f:c.instructions+=57;goto B61838f;
case 0x618396:c.instructions+=56;goto B618396;
case 0x61839a:c.instructions+=55;goto B61839a;
case 0x61839c:c.instructions+=54;goto B61839c;
case 0x6183a3:c.instructions+=53;goto B6183a3;
case 0x6183aa:c.instructions+=52;goto B6183aa;
case 0x6183ae:c.instructions+=51;goto B6183ae;
case 0x6183b5:c.instructions+=50;goto B6183b5;
case 0x6183b9:c.instructions+=49;goto B6183b9;
case 0x6183bb:c.instructions+=48;goto B6183bb;
case 0x6183c2:c.instructions+=47;goto B6183c2;
case 0x6183c6:c.instructions+=46;goto B6183c6;
case 0x6183c8:c.instructions+=45;goto B6183c8;
case 0x6183cf:c.instructions+=44;goto B6183cf;
case 0x6183d3:c.instructions+=43;goto B6183d3;
case 0x6183d5:c.instructions+=42;goto B6183d5;
case 0x6183dc:c.instructions+=41;goto B6183dc;
case 0x6183e3:c.instructions+=40;goto B6183e3;
case 0x6183ea:c.instructions+=39;goto B6183ea;
case 0x6183eb:c.instructions+=38;goto B6183eb;
case 0x6183ef:c.instructions+=37;goto B6183ef;
case 0x6183f3:c.instructions+=36;goto B6183f3;
case 0x6183fa:c.instructions+=35;goto B6183fa;
case 0x6183fb:c.instructions+=34;goto B6183fb;
case 0x6183ff:c.instructions+=33;goto B6183ff;
case 0x618401:c.instructions+=32;goto B618401;
case 0x618408:c.instructions+=31;goto B618408;
case 0x61840c:c.instructions+=30;goto B61840c;
case 0x61840e:c.instructions+=29;goto B61840e;
case 0x618415:c.instructions+=28;goto B618415;
case 0x618419:c.instructions+=27;goto B618419;
case 0x61841b:c.instructions+=26;goto B61841b;
case 0x618422:c.instructions+=25;goto B618422;
case 0x618429:c.instructions+=24;goto B618429;
case 0x61842d:c.instructions+=23;goto B61842d;
case 0x618434:c.instructions+=22;goto B618434;
case 0x618438:c.instructions+=21;goto B618438;
case 0x61843a:c.instructions+=20;goto B61843a;
case 0x618441:c.instructions+=19;goto B618441;
case 0x618445:c.instructions+=18;goto B618445;
case 0x618447:c.instructions+=17;goto B618447;
case 0x61844e:c.instructions+=16;goto B61844e;
case 0x618452:c.instructions+=15;goto B618452;
case 0x618454:c.instructions+=14;goto B618454;
case 0x61845b:c.instructions+=13;goto B61845b;
case 0x618462:c.instructions+=12;goto B618462;
case 0x618466:c.instructions+=11;goto B618466;
case 0x61846d:c.instructions+=10;goto B61846d;
case 0x618471:c.instructions+=9;goto B618471;
case 0x618473:c.instructions+=8;goto B618473;
case 0x61847a:c.instructions+=7;goto B61847a;
case 0x61847e:c.instructions+=6;goto B61847e;
case 0x618480:c.instructions+=5;goto B618480;
case 0x618487:c.instructions+=4;goto B618487;
case 0x61848b:c.instructions+=3;goto B61848b;
case 0x61848d:c.instructions+=2;goto B61848d;
case 0x618494:c.instructions+=1;goto B618494;
case 0x618499:goto L618499;
case 0x61849d:c.instructions+=196;goto B61849d;
case 0x6184a0:c.instructions+=195;goto B6184a0;
case 0x6184a4:c.instructions+=194;goto B6184a4;
case 0x6184a6:c.instructions+=193;goto B6184a6;
case 0x6184a8:c.instructions+=192;goto B6184a8;
case 0x6184ac:c.instructions+=191;goto B6184ac;
case 0x6184af:c.instructions+=190;goto B6184af;
case 0x6184b1:c.instructions+=189;goto B6184b1;
case 0x6184b5:c.instructions+=188;goto B6184b5;
case 0x6184b8:c.instructions+=187;goto B6184b8;
case 0x6184ba:c.instructions+=186;goto B6184ba;
case 0x6184c1:c.instructions+=185;goto B6184c1;
case 0x6184c5:c.instructions+=184;goto B6184c5;
case 0x6184c8:c.instructions+=183;goto B6184c8;
case 0x6184cc:c.instructions+=182;goto B6184cc;
case 0x6184cf:c.instructions+=181;goto B6184cf;
case 0x6184d1:c.instructions+=180;goto B6184d1;
case 0x6184d5:c.instructions+=179;goto B6184d5;
case 0x6184d8:c.instructions+=178;goto B6184d8;
case 0x6184da:c.instructions+=177;goto B6184da;
case 0x6184de:c.instructions+=176;goto B6184de;
case 0x6184e1:c.instructions+=175;goto B6184e1;
case 0x6184e3:c.instructions+=174;goto B6184e3;
case 0x6184ea:c.instructions+=173;goto B6184ea;
case 0x6184ee:c.instructions+=172;goto B6184ee;
case 0x6184f1:c.instructions+=171;goto B6184f1;
case 0x6184f5:c.instructions+=170;goto B6184f5;
case 0x6184f8:c.instructions+=169;goto B6184f8;
case 0x6184fa:c.instructions+=168;goto B6184fa;
case 0x6184fe:c.instructions+=167;goto B6184fe;
case 0x618501:c.instructions+=166;goto B618501;
case 0x618503:c.instructions+=165;goto B618503;
case 0x618507:c.instructions+=164;goto B618507;
case 0x61850a:c.instructions+=163;goto B61850a;
case 0x61850c:c.instructions+=162;goto B61850c;
case 0x618513:c.instructions+=161;goto B618513;
case 0x618517:c.instructions+=160;goto B618517;
case 0x61851a:c.instructions+=159;goto B61851a;
case 0x61851e:c.instructions+=158;goto B61851e;
case 0x618521:c.instructions+=157;goto B618521;
case 0x618523:c.instructions+=156;goto B618523;
case 0x618527:c.instructions+=155;goto B618527;
case 0x61852a:c.instructions+=154;goto B61852a;
case 0x61852c:c.instructions+=153;goto B61852c;
case 0x618530:c.instructions+=152;goto B618530;
case 0x618533:c.instructions+=151;goto B618533;
case 0x618535:c.instructions+=150;goto B618535;
case 0x61853c:c.instructions+=149;goto B61853c;
case 0x618540:c.instructions+=148;goto B618540;
case 0x618543:c.instructions+=147;goto B618543;
case 0x618547:c.instructions+=146;goto B618547;
case 0x61854a:c.instructions+=145;goto B61854a;
case 0x61854c:c.instructions+=144;goto B61854c;
case 0x618550:c.instructions+=143;goto B618550;
case 0x618552:c.instructions+=142;goto B618552;
case 0x618554:c.instructions+=141;goto B618554;
case 0x618558:c.instructions+=140;goto B618558;
case 0x61855b:c.instructions+=139;goto B61855b;
case 0x61855d:c.instructions+=138;goto B61855d;
case 0x618564:c.instructions+=137;goto B618564;
case 0x618568:c.instructions+=136;goto B618568;
case 0x61856b:c.instructions+=135;goto B61856b;
case 0x61856f:c.instructions+=134;goto B61856f;
case 0x618572:c.instructions+=133;goto B618572;
case 0x618574:c.instructions+=132;goto B618574;
case 0x618578:c.instructions+=131;goto B618578;
case 0x61857b:c.instructions+=130;goto B61857b;
case 0x61857d:c.instructions+=129;goto B61857d;
case 0x618581:c.instructions+=128;goto B618581;
case 0x618584:c.instructions+=127;goto B618584;
case 0x618586:c.instructions+=126;goto B618586;
case 0x61858d:c.instructions+=125;goto B61858d;
case 0x618591:c.instructions+=124;goto B618591;
case 0x618594:c.instructions+=123;goto B618594;
case 0x618598:c.instructions+=122;goto B618598;
case 0x61859b:c.instructions+=121;goto B61859b;
case 0x61859d:c.instructions+=120;goto B61859d;
case 0x6185a1:c.instructions+=119;goto B6185a1;
case 0x6185a4:c.instructions+=118;goto B6185a4;
case 0x6185a6:c.instructions+=117;goto B6185a6;
case 0x6185aa:c.instructions+=116;goto B6185aa;
case 0x6185ad:c.instructions+=115;goto B6185ad;
case 0x6185af:c.instructions+=114;goto B6185af;
case 0x6185b6:c.instructions+=113;goto B6185b6;
case 0x6185ba:c.instructions+=112;goto B6185ba;
case 0x6185bd:c.instructions+=111;goto B6185bd;
case 0x6185c1:c.instructions+=110;goto B6185c1;
case 0x6185c4:c.instructions+=109;goto B6185c4;
case 0x6185c6:c.instructions+=108;goto B6185c6;
case 0x6185ca:c.instructions+=107;goto B6185ca;
case 0x6185cd:c.instructions+=106;goto B6185cd;
case 0x6185cf:c.instructions+=105;goto B6185cf;
case 0x6185d3:c.instructions+=104;goto B6185d3;
case 0x6185d6:c.instructions+=103;goto B6185d6;
case 0x6185d8:c.instructions+=102;goto B6185d8;
case 0x6185df:c.instructions+=101;goto B6185df;
case 0x6185e3:c.instructions+=100;goto B6185e3;
case 0x6185e6:c.instructions+=99;goto B6185e6;
case 0x6185ea:c.instructions+=98;goto B6185ea;
case 0x6185ed:c.instructions+=97;goto B6185ed;
case 0x6185ef:c.instructions+=96;goto B6185ef;
case 0x6185f3:c.instructions+=95;goto B6185f3;
case 0x6185f5:c.instructions+=94;goto B6185f5;
case 0x6185f7:c.instructions+=93;goto B6185f7;
case 0x6185fb:c.instructions+=92;goto B6185fb;
case 0x6185fe:c.instructions+=91;goto B6185fe;
case 0x618600:c.instructions+=90;goto B618600;
case 0x618607:c.instructions+=89;goto B618607;
case 0x61860b:c.instructions+=88;goto B61860b;
case 0x61860e:c.instructions+=87;goto B61860e;
case 0x618612:c.instructions+=86;goto B618612;
case 0x618615:c.instructions+=85;goto B618615;
case 0x618617:c.instructions+=84;goto B618617;
case 0x61861b:c.instructions+=83;goto B61861b;
case 0x61861e:c.instructions+=82;goto B61861e;
case 0x618620:c.instructions+=81;goto B618620;
case 0x618624:c.instructions+=80;goto B618624;
case 0x618627:c.instructions+=79;goto B618627;
case 0x618629:c.instructions+=78;goto B618629;
case 0x618630:c.instructions+=77;goto B618630;
case 0x618634:c.instructions+=76;goto B618634;
case 0x618637:c.instructions+=75;goto B618637;
case 0x61863b:c.instructions+=74;goto B61863b;
case 0x61863e:c.instructions+=73;goto B61863e;
case 0x618640:c.instructions+=72;goto B618640;
case 0x618644:c.instructions+=71;goto B618644;
case 0x618647:c.instructions+=70;goto B618647;
case 0x618649:c.instructions+=69;goto B618649;
case 0x61864d:c.instructions+=68;goto B61864d;
case 0x618650:c.instructions+=67;goto B618650;
case 0x618652:c.instructions+=66;goto B618652;
case 0x618659:c.instructions+=65;goto B618659;
case 0x61865d:c.instructions+=64;goto B61865d;
case 0x618660:c.instructions+=63;goto B618660;
case 0x618664:c.instructions+=62;goto B618664;
case 0x618667:c.instructions+=61;goto B618667;
case 0x618669:c.instructions+=60;goto B618669;
case 0x61866d:c.instructions+=59;goto B61866d;
case 0x618670:c.instructions+=58;goto B618670;
case 0x618672:c.instructions+=57;goto B618672;
case 0x618676:c.instructions+=56;goto B618676;
case 0x618679:c.instructions+=55;goto B618679;
case 0x61867b:c.instructions+=54;goto B61867b;
case 0x61867f:c.instructions+=53;goto B61867f;
case 0x618686:c.instructions+=52;goto B618686;
case 0x61868d:c.instructions+=51;goto B61868d;
case 0x61868e:c.instructions+=50;goto B61868e;
case 0x618692:c.instructions+=49;goto B618692;
case 0x618693:c.instructions+=48;goto B618693;
case 0x618696:c.instructions+=47;goto B618696;
case 0x61869a:c.instructions+=46;goto B61869a;
case 0x61869d:c.instructions+=45;goto B61869d;
case 0x61869f:c.instructions+=44;goto B61869f;
case 0x6186a3:c.instructions+=43;goto B6186a3;
case 0x6186a5:c.instructions+=42;goto B6186a5;
case 0x6186a7:c.instructions+=41;goto B6186a7;
case 0x6186ab:c.instructions+=40;goto B6186ab;
case 0x6186ae:c.instructions+=39;goto B6186ae;
case 0x6186b0:c.instructions+=38;goto B6186b0;
case 0x6186b7:c.instructions+=37;goto B6186b7;
case 0x6186bb:c.instructions+=36;goto B6186bb;
case 0x6186be:c.instructions+=35;goto B6186be;
case 0x6186c2:c.instructions+=34;goto B6186c2;
case 0x6186c5:c.instructions+=33;goto B6186c5;
case 0x6186c7:c.instructions+=32;goto B6186c7;
case 0x6186cb:c.instructions+=31;goto B6186cb;
case 0x6186ce:c.instructions+=30;goto B6186ce;
case 0x6186d0:c.instructions+=29;goto B6186d0;
case 0x6186d4:c.instructions+=28;goto B6186d4;
case 0x6186d7:c.instructions+=27;goto B6186d7;
case 0x6186d9:c.instructions+=26;goto B6186d9;
case 0x6186e0:c.instructions+=25;goto B6186e0;
case 0x6186e4:c.instructions+=24;goto B6186e4;
case 0x6186e7:c.instructions+=23;goto B6186e7;
case 0x6186eb:c.instructions+=22;goto B6186eb;
case 0x6186ee:c.instructions+=21;goto B6186ee;
case 0x6186f0:c.instructions+=20;goto B6186f0;
case 0x6186f4:c.instructions+=19;goto B6186f4;
case 0x6186f7:c.instructions+=18;goto B6186f7;
case 0x6186f9:c.instructions+=17;goto B6186f9;
case 0x6186fd:c.instructions+=16;goto B6186fd;
case 0x618700:c.instructions+=15;goto B618700;
case 0x618702:c.instructions+=14;goto B618702;
case 0x618709:c.instructions+=13;goto B618709;
case 0x61870d:c.instructions+=12;goto B61870d;
case 0x618710:c.instructions+=11;goto B618710;
case 0x618714:c.instructions+=10;goto B618714;
case 0x618717:c.instructions+=9;goto B618717;
case 0x618719:c.instructions+=8;goto B618719;
case 0x61871d:c.instructions+=7;goto B61871d;
case 0x618720:c.instructions+=6;goto B618720;
case 0x618722:c.instructions+=5;goto B618722;
case 0x618726:c.instructions+=4;goto B618726;
case 0x618729:c.instructions+=3;goto B618729;
case 0x61872b:c.instructions+=2;goto B61872b;
case 0x618732:c.instructions+=1;goto B618732;
case 0x618737:goto L618737;
case 0x61873a:c.instructions+=11;goto B61873a;
case 0x618741:c.instructions+=10;goto B618741;
case 0x618742:c.instructions+=9;goto B618742;
case 0x618746:c.instructions+=8;goto B618746;
case 0x618747:c.instructions+=7;goto B618747;
case 0x61874e:c.instructions+=6;goto B61874e;
case 0x61874f:c.instructions+=5;goto B61874f;
case 0x618754:c.instructions+=4;goto B618754;
case 0x618755:c.instructions+=3;goto B618755;
case 0x61875c:c.instructions+=2;goto B61875c;
case 0x61875d:c.instructions+=1;goto B61875d;
case 0x618762:goto L618762;
case 0x618765:c.instructions+=2;goto B618765;
case 0x618767:c.instructions+=1;goto B618767;
case 0x618769:goto L618769;
case 0x61876c:c.instructions+=12;goto B61876c;
case 0x618773:c.instructions+=11;goto B618773;
case 0x618777:c.instructions+=10;goto B618777;
case 0x618779:c.instructions+=9;goto B618779;
case 0x61877b:c.instructions+=8;goto B61877b;
case 0x61877f:c.instructions+=7;goto B61877f;
case 0x618785:c.instructions+=6;goto B618785;
case 0x618786:c.instructions+=5;goto B618786;
case 0x618787:c.instructions+=4;goto B618787;
case 0x618788:c.instructions+=3;goto B618788;
case 0x61878b:c.instructions+=2;goto B61878b;
case 0x61878c:c.instructions+=1;goto B61878c;
case 0x618791:goto L618791;
case 0x618795:c.instructions+=2;goto B618795;
case 0x618797:c.instructions+=1;goto B618797;
case 0x61879d:goto L61879d;
case 0x6187a4:c.instructions+=196;goto B6187a4;
case 0x6187a7:c.instructions+=195;goto B6187a7;
case 0x6187ae:c.instructions+=194;goto B6187ae;
case 0x6187b1:c.instructions+=193;goto B6187b1;
case 0x6187b3:c.instructions+=192;goto B6187b3;
case 0x6187ba:c.instructions+=191;goto B6187ba;
case 0x6187bd:c.instructions+=190;goto B6187bd;
case 0x6187bf:c.instructions+=189;goto B6187bf;
case 0x6187c6:c.instructions+=188;goto B6187c6;
case 0x6187c9:c.instructions+=187;goto B6187c9;
case 0x6187cb:c.instructions+=186;goto B6187cb;
case 0x6187cf:c.instructions+=185;goto B6187cf;
case 0x6187d6:c.instructions+=184;goto B6187d6;
case 0x6187d9:c.instructions+=183;goto B6187d9;
case 0x6187e0:c.instructions+=182;goto B6187e0;
case 0x6187e3:c.instructions+=181;goto B6187e3;
case 0x6187e5:c.instructions+=180;goto B6187e5;
case 0x6187ec:c.instructions+=179;goto B6187ec;
case 0x6187ef:c.instructions+=178;goto B6187ef;
case 0x6187f1:c.instructions+=177;goto B6187f1;
case 0x6187f8:c.instructions+=176;goto B6187f8;
case 0x6187fb:c.instructions+=175;goto B6187fb;
case 0x6187fd:c.instructions+=174;goto B6187fd;
case 0x618801:c.instructions+=173;goto B618801;
case 0x618808:c.instructions+=172;goto B618808;
case 0x61880b:c.instructions+=171;goto B61880b;
case 0x618812:c.instructions+=170;goto B618812;
case 0x618815:c.instructions+=169;goto B618815;
case 0x618817:c.instructions+=168;goto B618817;
case 0x61881e:c.instructions+=167;goto B61881e;
case 0x618821:c.instructions+=166;goto B618821;
case 0x618823:c.instructions+=165;goto B618823;
case 0x61882a:c.instructions+=164;goto B61882a;
case 0x61882d:c.instructions+=163;goto B61882d;
case 0x61882f:c.instructions+=162;goto B61882f;
case 0x618833:c.instructions+=161;goto B618833;
case 0x61883a:c.instructions+=160;goto B61883a;
case 0x61883d:c.instructions+=159;goto B61883d;
case 0x618844:c.instructions+=158;goto B618844;
case 0x618847:c.instructions+=157;goto B618847;
case 0x618849:c.instructions+=156;goto B618849;
case 0x618850:c.instructions+=155;goto B618850;
case 0x618853:c.instructions+=154;goto B618853;
case 0x618855:c.instructions+=153;goto B618855;
case 0x61885c:c.instructions+=152;goto B61885c;
case 0x61885f:c.instructions+=151;goto B61885f;
case 0x618861:c.instructions+=150;goto B618861;
case 0x618865:c.instructions+=149;goto B618865;
case 0x61886c:c.instructions+=148;goto B61886c;
case 0x61886f:c.instructions+=147;goto B61886f;
case 0x618876:c.instructions+=146;goto B618876;
case 0x618879:c.instructions+=145;goto B618879;
case 0x61887b:c.instructions+=144;goto B61887b;
case 0x618882:c.instructions+=143;goto B618882;
case 0x618885:c.instructions+=142;goto B618885;
case 0x618887:c.instructions+=141;goto B618887;
case 0x61888e:c.instructions+=140;goto B61888e;
case 0x618891:c.instructions+=139;goto B618891;
case 0x618893:c.instructions+=138;goto B618893;
case 0x61889a:c.instructions+=137;goto B61889a;
case 0x6188a1:c.instructions+=136;goto B6188a1;
case 0x6188a4:c.instructions+=135;goto B6188a4;
case 0x6188ab:c.instructions+=134;goto B6188ab;
case 0x6188ae:c.instructions+=133;goto B6188ae;
case 0x6188b0:c.instructions+=132;goto B6188b0;
case 0x6188b7:c.instructions+=131;goto B6188b7;
case 0x6188ba:c.instructions+=130;goto B6188ba;
case 0x6188bc:c.instructions+=129;goto B6188bc;
case 0x6188c3:c.instructions+=128;goto B6188c3;
case 0x6188c6:c.instructions+=127;goto B6188c6;
case 0x6188c8:c.instructions+=126;goto B6188c8;
case 0x6188cf:c.instructions+=125;goto B6188cf;
case 0x6188d6:c.instructions+=124;goto B6188d6;
case 0x6188d9:c.instructions+=123;goto B6188d9;
case 0x6188e0:c.instructions+=122;goto B6188e0;
case 0x6188e3:c.instructions+=121;goto B6188e3;
case 0x6188e5:c.instructions+=120;goto B6188e5;
case 0x6188ec:c.instructions+=119;goto B6188ec;
case 0x6188ef:c.instructions+=118;goto B6188ef;
case 0x6188f1:c.instructions+=117;goto B6188f1;
case 0x6188f8:c.instructions+=116;goto B6188f8;
case 0x6188fb:c.instructions+=115;goto B6188fb;
case 0x6188fd:c.instructions+=114;goto B6188fd;
case 0x618904:c.instructions+=113;goto B618904;
case 0x61890b:c.instructions+=112;goto B61890b;
case 0x61890e:c.instructions+=111;goto B61890e;
case 0x618915:c.instructions+=110;goto B618915;
case 0x618918:c.instructions+=109;goto B618918;
case 0x61891a:c.instructions+=108;goto B61891a;
case 0x618921:c.instructions+=107;goto B618921;
case 0x618924:c.instructions+=106;goto B618924;
case 0x618926:c.instructions+=105;goto B618926;
case 0x61892d:c.instructions+=104;goto B61892d;
case 0x618930:c.instructions+=103;goto B618930;
case 0x618932:c.instructions+=102;goto B618932;
case 0x618939:c.instructions+=101;goto B618939;
case 0x618940:c.instructions+=100;goto B618940;
case 0x618943:c.instructions+=99;goto B618943;
case 0x61894a:c.instructions+=98;goto B61894a;
case 0x61894d:c.instructions+=97;goto B61894d;
case 0x61894f:c.instructions+=96;goto B61894f;
case 0x618956:c.instructions+=95;goto B618956;
case 0x618959:c.instructions+=94;goto B618959;
case 0x61895b:c.instructions+=93;goto B61895b;
case 0x618962:c.instructions+=92;goto B618962;
case 0x618965:c.instructions+=91;goto B618965;
case 0x618967:c.instructions+=90;goto B618967;
case 0x61896e:c.instructions+=89;goto B61896e;
case 0x618975:c.instructions+=88;goto B618975;
case 0x618978:c.instructions+=87;goto B618978;
case 0x61897f:c.instructions+=86;goto B61897f;
case 0x618982:c.instructions+=85;goto B618982;
case 0x618984:c.instructions+=84;goto B618984;
case 0x61898b:c.instructions+=83;goto B61898b;
case 0x61898e:c.instructions+=82;goto B61898e;
case 0x618990:c.instructions+=81;goto B618990;
case 0x618997:c.instructions+=80;goto B618997;
case 0x61899a:c.instructions+=79;goto B61899a;
case 0x61899c:c.instructions+=78;goto B61899c;
case 0x6189a3:c.instructions+=77;goto B6189a3;
case 0x6189aa:c.instructions+=76;goto B6189aa;
case 0x6189ad:c.instructions+=75;goto B6189ad;
case 0x6189b4:c.instructions+=74;goto B6189b4;
case 0x6189b7:c.instructions+=73;goto B6189b7;
case 0x6189b9:c.instructions+=72;goto B6189b9;
case 0x6189c0:c.instructions+=71;goto B6189c0;
case 0x6189c3:c.instructions+=70;goto B6189c3;
case 0x6189c5:c.instructions+=69;goto B6189c5;
case 0x6189cc:c.instructions+=68;goto B6189cc;
case 0x6189cf:c.instructions+=67;goto B6189cf;
case 0x6189d1:c.instructions+=66;goto B6189d1;
case 0x6189d8:c.instructions+=65;goto B6189d8;
case 0x6189df:c.instructions+=64;goto B6189df;
case 0x6189e2:c.instructions+=63;goto B6189e2;
case 0x6189e9:c.instructions+=62;goto B6189e9;
case 0x6189ec:c.instructions+=61;goto B6189ec;
case 0x6189ee:c.instructions+=60;goto B6189ee;
case 0x6189f5:c.instructions+=59;goto B6189f5;
case 0x6189f8:c.instructions+=58;goto B6189f8;
case 0x6189fa:c.instructions+=57;goto B6189fa;
case 0x618a01:c.instructions+=56;goto B618a01;
case 0x618a04:c.instructions+=55;goto B618a04;
case 0x618a06:c.instructions+=54;goto B618a06;
case 0x618a0d:c.instructions+=53;goto B618a0d;
case 0x618a14:c.instructions+=52;goto B618a14;
case 0x618a17:c.instructions+=51;goto B618a17;
case 0x618a1e:c.instructions+=50;goto B618a1e;
case 0x618a21:c.instructions+=49;goto B618a21;
case 0x618a23:c.instructions+=48;goto B618a23;
case 0x618a2a:c.instructions+=47;goto B618a2a;
case 0x618a2d:c.instructions+=46;goto B618a2d;
case 0x618a2f:c.instructions+=45;goto B618a2f;
case 0x618a36:c.instructions+=44;goto B618a36;
case 0x618a39:c.instructions+=43;goto B618a39;
case 0x618a3b:c.instructions+=42;goto B618a3b;
case 0x618a42:c.instructions+=41;goto B618a42;
case 0x618a49:c.instructions+=40;goto B618a49;
case 0x618a4c:c.instructions+=39;goto B618a4c;
case 0x618a53:c.instructions+=38;goto B618a53;
case 0x618a56:c.instructions+=37;goto B618a56;
case 0x618a58:c.instructions+=36;goto B618a58;
case 0x618a5f:c.instructions+=35;goto B618a5f;
case 0x618a62:c.instructions+=34;goto B618a62;
case 0x618a64:c.instructions+=33;goto B618a64;
case 0x618a6b:c.instructions+=32;goto B618a6b;
case 0x618a6e:c.instructions+=31;goto B618a6e;
case 0x618a70:c.instructions+=30;goto B618a70;
case 0x618a77:c.instructions+=29;goto B618a77;
case 0x618a7e:c.instructions+=28;goto B618a7e;
case 0x618a81:c.instructions+=27;goto B618a81;
case 0x618a88:c.instructions+=26;goto B618a88;
case 0x618a8b:c.instructions+=25;goto B618a8b;
case 0x618a8d:c.instructions+=24;goto B618a8d;
case 0x618a94:c.instructions+=23;goto B618a94;
case 0x618a97:c.instructions+=22;goto B618a97;
case 0x618a99:c.instructions+=21;goto B618a99;
case 0x618aa0:c.instructions+=20;goto B618aa0;
case 0x618aa3:c.instructions+=19;goto B618aa3;
case 0x618aa5:c.instructions+=18;goto B618aa5;
case 0x618aac:c.instructions+=17;goto B618aac;
case 0x618ab3:c.instructions+=16;goto B618ab3;
case 0x618ab6:c.instructions+=15;goto B618ab6;
case 0x618abd:c.instructions+=14;goto B618abd;
case 0x618ac1:c.instructions+=13;goto B618ac1;
case 0x618ac4:c.instructions+=12;goto B618ac4;
case 0x618ac5:c.instructions+=11;goto B618ac5;
case 0x618ac9:c.instructions+=10;goto B618ac9;
case 0x618aca:c.instructions+=9;goto B618aca;
case 0x618acc:c.instructions+=8;goto B618acc;
case 0x618ad3:c.instructions+=7;goto B618ad3;
case 0x618ad6:c.instructions+=6;goto B618ad6;
case 0x618ad8:c.instructions+=5;goto B618ad8;
case 0x618adf:c.instructions+=4;goto B618adf;
case 0x618ae2:c.instructions+=3;goto B618ae2;
case 0x618ae4:c.instructions+=2;goto B618ae4;
case 0x618aeb:c.instructions+=1;goto B618aeb;
case 0x618af0:goto L618af0;
case 0x618af7:c.instructions+=196;goto B618af7;
case 0x618afb:c.instructions+=195;goto B618afb;
case 0x618b02:c.instructions+=194;goto B618b02;
case 0x618b06:c.instructions+=193;goto B618b06;
case 0x618b08:c.instructions+=192;goto B618b08;
case 0x618b0f:c.instructions+=191;goto B618b0f;
case 0x618b13:c.instructions+=190;goto B618b13;
case 0x618b15:c.instructions+=189;goto B618b15;
case 0x618b1c:c.instructions+=188;goto B618b1c;
case 0x618b20:c.instructions+=187;goto B618b20;
case 0x618b22:c.instructions+=186;goto B618b22;
case 0x618b26:c.instructions+=185;goto B618b26;
case 0x618b2d:c.instructions+=184;goto B618b2d;
case 0x618b31:c.instructions+=183;goto B618b31;
case 0x618b38:c.instructions+=182;goto B618b38;
case 0x618b3c:c.instructions+=181;goto B618b3c;
case 0x618b3e:c.instructions+=180;goto B618b3e;
case 0x618b45:c.instructions+=179;goto B618b45;
case 0x618b49:c.instructions+=178;goto B618b49;
case 0x618b4b:c.instructions+=177;goto B618b4b;
case 0x618b52:c.instructions+=176;goto B618b52;
case 0x618b56:c.instructions+=175;goto B618b56;
case 0x618b58:c.instructions+=174;goto B618b58;
case 0x618b5c:c.instructions+=173;goto B618b5c;
case 0x618b63:c.instructions+=172;goto B618b63;
case 0x618b67:c.instructions+=171;goto B618b67;
case 0x618b6e:c.instructions+=170;goto B618b6e;
case 0x618b72:c.instructions+=169;goto B618b72;
case 0x618b74:c.instructions+=168;goto B618b74;
case 0x618b7b:c.instructions+=167;goto B618b7b;
case 0x618b7f:c.instructions+=166;goto B618b7f;
case 0x618b81:c.instructions+=165;goto B618b81;
case 0x618b88:c.instructions+=164;goto B618b88;
case 0x618b8c:c.instructions+=163;goto B618b8c;
case 0x618b8e:c.instructions+=162;goto B618b8e;
case 0x618b95:c.instructions+=161;goto B618b95;
case 0x618b9c:c.instructions+=160;goto B618b9c;
case 0x618ba0:c.instructions+=159;goto B618ba0;
case 0x618ba7:c.instructions+=158;goto B618ba7;
case 0x618bab:c.instructions+=157;goto B618bab;
case 0x618bad:c.instructions+=156;goto B618bad;
case 0x618bb4:c.instructions+=155;goto B618bb4;
case 0x618bb8:c.instructions+=154;goto B618bb8;
case 0x618bba:c.instructions+=153;goto B618bba;
case 0x618bc1:c.instructions+=152;goto B618bc1;
case 0x618bc5:c.instructions+=151;goto B618bc5;
case 0x618bc7:c.instructions+=150;goto B618bc7;
case 0x618bce:c.instructions+=149;goto B618bce;
case 0x618bd5:c.instructions+=148;goto B618bd5;
case 0x618bd9:c.instructions+=147;goto B618bd9;
case 0x618be0:c.instructions+=146;goto B618be0;
case 0x618be4:c.instructions+=145;goto B618be4;
case 0x618be6:c.instructions+=144;goto B618be6;
case 0x618bed:c.instructions+=143;goto B618bed;
case 0x618bf1:c.instructions+=142;goto B618bf1;
case 0x618bf3:c.instructions+=141;goto B618bf3;
case 0x618bfa:c.instructions+=140;goto B618bfa;
case 0x618bfe:c.instructions+=139;goto B618bfe;
case 0x618c00:c.instructions+=138;goto B618c00;
case 0x618c07:c.instructions+=137;goto B618c07;
case 0x618c0e:c.instructions+=136;goto B618c0e;
case 0x618c12:c.instructions+=135;goto B618c12;
case 0x618c19:c.instructions+=134;goto B618c19;
case 0x618c1d:c.instructions+=133;goto B618c1d;
case 0x618c1f:c.instructions+=132;goto B618c1f;
case 0x618c26:c.instructions+=131;goto B618c26;
case 0x618c2a:c.instructions+=130;goto B618c2a;
case 0x618c2c:c.instructions+=129;goto B618c2c;
case 0x618c33:c.instructions+=128;goto B618c33;
case 0x618c37:c.instructions+=127;goto B618c37;
case 0x618c39:c.instructions+=126;goto B618c39;
case 0x618c40:c.instructions+=125;goto B618c40;
case 0x618c47:c.instructions+=124;goto B618c47;
case 0x618c4b:c.instructions+=123;goto B618c4b;
case 0x618c52:c.instructions+=122;goto B618c52;
case 0x618c56:c.instructions+=121;goto B618c56;
case 0x618c58:c.instructions+=120;goto B618c58;
case 0x618c5f:c.instructions+=119;goto B618c5f;
case 0x618c63:c.instructions+=118;goto B618c63;
case 0x618c65:c.instructions+=117;goto B618c65;
case 0x618c6c:c.instructions+=116;goto B618c6c;
case 0x618c70:c.instructions+=115;goto B618c70;
case 0x618c72:c.instructions+=114;goto B618c72;
case 0x618c79:c.instructions+=113;goto B618c79;
case 0x618c80:c.instructions+=112;goto B618c80;
case 0x618c84:c.instructions+=111;goto B618c84;
case 0x618c8b:c.instructions+=110;goto B618c8b;
case 0x618c8f:c.instructions+=109;goto B618c8f;
case 0x618c91:c.instructions+=108;goto B618c91;
case 0x618c98:c.instructions+=107;goto B618c98;
case 0x618c9c:c.instructions+=106;goto B618c9c;
case 0x618c9e:c.instructions+=105;goto B618c9e;
case 0x618ca5:c.instructions+=104;goto B618ca5;
case 0x618ca9:c.instructions+=103;goto B618ca9;
case 0x618cab:c.instructions+=102;goto B618cab;
case 0x618cb2:c.instructions+=101;goto B618cb2;
case 0x618cb9:c.instructions+=100;goto B618cb9;
case 0x618cbd:c.instructions+=99;goto B618cbd;
case 0x618cc4:c.instructions+=98;goto B618cc4;
case 0x618cc8:c.instructions+=97;goto B618cc8;
case 0x618cca:c.instructions+=96;goto B618cca;
case 0x618cd1:c.instructions+=95;goto B618cd1;
case 0x618cd5:c.instructions+=94;goto B618cd5;
case 0x618cd7:c.instructions+=93;goto B618cd7;
case 0x618cde:c.instructions+=92;goto B618cde;
case 0x618ce2:c.instructions+=91;goto B618ce2;
case 0x618ce4:c.instructions+=90;goto B618ce4;
case 0x618ceb:c.instructions+=89;goto B618ceb;
case 0x618cf2:c.instructions+=88;goto B618cf2;
case 0x618cf6:c.instructions+=87;goto B618cf6;
case 0x618cfd:c.instructions+=86;goto B618cfd;
case 0x618d01:c.instructions+=85;goto B618d01;
case 0x618d03:c.instructions+=84;goto B618d03;
case 0x618d0a:c.instructions+=83;goto B618d0a;
case 0x618d0e:c.instructions+=82;goto B618d0e;
case 0x618d10:c.instructions+=81;goto B618d10;
case 0x618d17:c.instructions+=80;goto B618d17;
case 0x618d1b:c.instructions+=79;goto B618d1b;
case 0x618d1d:c.instructions+=78;goto B618d1d;
case 0x618d24:c.instructions+=77;goto B618d24;
case 0x618d2b:c.instructions+=76;goto B618d2b;
case 0x618d2f:c.instructions+=75;goto B618d2f;
case 0x618d36:c.instructions+=74;goto B618d36;
case 0x618d3a:c.instructions+=73;goto B618d3a;
case 0x618d3c:c.instructions+=72;goto B618d3c;
case 0x618d43:c.instructions+=71;goto B618d43;
case 0x618d47:c.instructions+=70;goto B618d47;
case 0x618d49:c.instructions+=69;goto B618d49;
case 0x618d50:c.instructions+=68;goto B618d50;
case 0x618d54:c.instructions+=67;goto B618d54;
case 0x618d56:c.instructions+=66;goto B618d56;
case 0x618d5d:c.instructions+=65;goto B618d5d;
case 0x618d64:c.instructions+=64;goto B618d64;
case 0x618d68:c.instructions+=63;goto B618d68;
case 0x618d6f:c.instructions+=62;goto B618d6f;
case 0x618d73:c.instructions+=61;goto B618d73;
case 0x618d75:c.instructions+=60;goto B618d75;
case 0x618d7c:c.instructions+=59;goto B618d7c;
case 0x618d80:c.instructions+=58;goto B618d80;
case 0x618d82:c.instructions+=57;goto B618d82;
case 0x618d89:c.instructions+=56;goto B618d89;
case 0x618d8d:c.instructions+=55;goto B618d8d;
case 0x618d8f:c.instructions+=54;goto B618d8f;
case 0x618d96:c.instructions+=53;goto B618d96;
case 0x618d9d:c.instructions+=52;goto B618d9d;
case 0x618da1:c.instructions+=51;goto B618da1;
case 0x618da8:c.instructions+=50;goto B618da8;
case 0x618dac:c.instructions+=49;goto B618dac;
case 0x618dae:c.instructions+=48;goto B618dae;
case 0x618db5:c.instructions+=47;goto B618db5;
case 0x618db9:c.instructions+=46;goto B618db9;
case 0x618dbb:c.instructions+=45;goto B618dbb;
case 0x618dc2:c.instructions+=44;goto B618dc2;
case 0x618dc6:c.instructions+=43;goto B618dc6;
case 0x618dc8:c.instructions+=42;goto B618dc8;
case 0x618dcf:c.instructions+=41;goto B618dcf;
case 0x618dd6:c.instructions+=40;goto B618dd6;
case 0x618dda:c.instructions+=39;goto B618dda;
case 0x618de1:c.instructions+=38;goto B618de1;
case 0x618de5:c.instructions+=37;goto B618de5;
case 0x618de7:c.instructions+=36;goto B618de7;
case 0x618dee:c.instructions+=35;goto B618dee;
case 0x618df2:c.instructions+=34;goto B618df2;
case 0x618df4:c.instructions+=33;goto B618df4;
case 0x618dfb:c.instructions+=32;goto B618dfb;
case 0x618dff:c.instructions+=31;goto B618dff;
case 0x618e01:c.instructions+=30;goto B618e01;
case 0x618e08:c.instructions+=29;goto B618e08;
case 0x618e0f:c.instructions+=28;goto B618e0f;
case 0x618e13:c.instructions+=27;goto B618e13;
case 0x618e17:c.instructions+=26;goto B618e17;
case 0x618e1e:c.instructions+=25;goto B618e1e;
case 0x618e1f:c.instructions+=24;goto B618e1f;
case 0x618e23:c.instructions+=23;goto B618e23;
case 0x618e27:c.instructions+=22;goto B618e27;
case 0x618e28:c.instructions+=21;goto B618e28;
case 0x618e2a:c.instructions+=20;goto B618e2a;
case 0x618e31:c.instructions+=19;goto B618e31;
case 0x618e35:c.instructions+=18;goto B618e35;
case 0x618e37:c.instructions+=17;goto B618e37;
case 0x618e3e:c.instructions+=16;goto B618e3e;
case 0x618e42:c.instructions+=15;goto B618e42;
case 0x618e44:c.instructions+=14;goto B618e44;
case 0x618e4b:c.instructions+=13;goto B618e4b;
case 0x618e52:c.instructions+=12;goto B618e52;
case 0x618e56:c.instructions+=11;goto B618e56;
case 0x618e5d:c.instructions+=10;goto B618e5d;
case 0x618e61:c.instructions+=9;goto B618e61;
case 0x618e63:c.instructions+=8;goto B618e63;
case 0x618e6a:c.instructions+=7;goto B618e6a;
case 0x618e6e:c.instructions+=6;goto B618e6e;
case 0x618e70:c.instructions+=5;goto B618e70;
case 0x618e77:c.instructions+=4;goto B618e77;
case 0x618e7b:c.instructions+=3;goto B618e7b;
case 0x618e7d:c.instructions+=2;goto B618e7d;
case 0x618e84:c.instructions+=1;goto B618e84;
case 0x618e89:goto L618e89;
case 0x618e8d:c.instructions+=110;goto B618e8d;
case 0x618e8f:c.instructions+=109;goto B618e8f;
case 0x618e93:c.instructions+=108;goto B618e93;
case 0x618e96:c.instructions+=107;goto B618e96;
case 0x618e98:c.instructions+=106;goto B618e98;
case 0x618e9c:c.instructions+=105;goto B618e9c;
case 0x618e9f:c.instructions+=104;goto B618e9f;
case 0x618ea1:c.instructions+=103;goto B618ea1;
case 0x618ea5:c.instructions+=102;goto B618ea5;
case 0x618ea8:c.instructions+=101;goto B618ea8;
case 0x618eaa:c.instructions+=100;goto B618eaa;
case 0x618eb1:c.instructions+=99;goto B618eb1;
case 0x618eb5:c.instructions+=98;goto B618eb5;
case 0x618eb8:c.instructions+=97;goto B618eb8;
case 0x618ebc:c.instructions+=96;goto B618ebc;
case 0x618ebf:c.instructions+=95;goto B618ebf;
case 0x618ec1:c.instructions+=94;goto B618ec1;
case 0x618ec5:c.instructions+=93;goto B618ec5;
case 0x618ec8:c.instructions+=92;goto B618ec8;
case 0x618eca:c.instructions+=91;goto B618eca;
case 0x618ece:c.instructions+=90;goto B618ece;
case 0x618ed1:c.instructions+=89;goto B618ed1;
case 0x618ed3:c.instructions+=88;goto B618ed3;
case 0x618eda:c.instructions+=87;goto B618eda;
case 0x618ede:c.instructions+=86;goto B618ede;
case 0x618ee1:c.instructions+=85;goto B618ee1;
case 0x618ee5:c.instructions+=84;goto B618ee5;
case 0x618ee8:c.instructions+=83;goto B618ee8;
case 0x618eea:c.instructions+=82;goto B618eea;
case 0x618eee:c.instructions+=81;goto B618eee;
case 0x618ef1:c.instructions+=80;goto B618ef1;
case 0x618ef3:c.instructions+=79;goto B618ef3;
case 0x618ef7:c.instructions+=78;goto B618ef7;
case 0x618efa:c.instructions+=77;goto B618efa;
case 0x618efc:c.instructions+=76;goto B618efc;
case 0x618f03:c.instructions+=75;goto B618f03;
case 0x618f07:c.instructions+=74;goto B618f07;
case 0x618f0a:c.instructions+=73;goto B618f0a;
case 0x618f0e:c.instructions+=72;goto B618f0e;
case 0x618f11:c.instructions+=71;goto B618f11;
case 0x618f13:c.instructions+=70;goto B618f13;
case 0x618f17:c.instructions+=69;goto B618f17;
case 0x618f1a:c.instructions+=68;goto B618f1a;
case 0x618f1c:c.instructions+=67;goto B618f1c;
case 0x618f20:c.instructions+=66;goto B618f20;
case 0x618f23:c.instructions+=65;goto B618f23;
case 0x618f25:c.instructions+=64;goto B618f25;
case 0x618f2c:c.instructions+=63;goto B618f2c;
case 0x618f30:c.instructions+=62;goto B618f30;
case 0x618f33:c.instructions+=61;goto B618f33;
case 0x618f37:c.instructions+=60;goto B618f37;
case 0x618f39:c.instructions+=59;goto B618f39;
case 0x618f3b:c.instructions+=58;goto B618f3b;
case 0x618f3f:c.instructions+=57;goto B618f3f;
case 0x618f42:c.instructions+=56;goto B618f42;
case 0x618f44:c.instructions+=55;goto B618f44;
case 0x618f48:c.instructions+=54;goto B618f48;
case 0x618f4b:c.instructions+=53;goto B618f4b;
case 0x618f4d:c.instructions+=52;goto B618f4d;
case 0x618f54:c.instructions+=51;goto B618f54;
case 0x618f58:c.instructions+=50;goto B618f58;
case 0x618f5b:c.instructions+=49;goto B618f5b;
case 0x618f5f:c.instructions+=48;goto B618f5f;
case 0x618f62:c.instructions+=47;goto B618f62;
case 0x618f64:c.instructions+=46;goto B618f64;
case 0x618f68:c.instructions+=45;goto B618f68;
case 0x618f6b:c.instructions+=44;goto B618f6b;
case 0x618f6d:c.instructions+=43;goto B618f6d;
case 0x618f71:c.instructions+=42;goto B618f71;
case 0x618f74:c.instructions+=41;goto B618f74;
case 0x618f76:c.instructions+=40;goto B618f76;
case 0x618f7d:c.instructions+=39;goto B618f7d;
case 0x618f81:c.instructions+=38;goto B618f81;
case 0x618f84:c.instructions+=37;goto B618f84;
case 0x618f88:c.instructions+=36;goto B618f88;
case 0x618f8b:c.instructions+=35;goto B618f8b;
case 0x618f8d:c.instructions+=34;goto B618f8d;
case 0x618f91:c.instructions+=33;goto B618f91;
case 0x618f94:c.instructions+=32;goto B618f94;
case 0x618f96:c.instructions+=31;goto B618f96;
case 0x618f9a:c.instructions+=30;goto B618f9a;
case 0x618f9d:c.instructions+=29;goto B618f9d;
case 0x618f9f:c.instructions+=28;goto B618f9f;
case 0x618fa6:c.instructions+=27;goto B618fa6;
case 0x618faa:c.instructions+=26;goto B618faa;
case 0x618fad:c.instructions+=25;goto B618fad;
case 0x618fb1:c.instructions+=24;goto B618fb1;
case 0x618fb4:c.instructions+=23;goto B618fb4;
case 0x618fb6:c.instructions+=22;goto B618fb6;
case 0x618fba:c.instructions+=21;goto B618fba;
case 0x618fbd:c.instructions+=20;goto B618fbd;
case 0x618fbf:c.instructions+=19;goto B618fbf;
case 0x618fc3:c.instructions+=18;goto B618fc3;
case 0x618fc6:c.instructions+=17;goto B618fc6;
case 0x618fc8:c.instructions+=16;goto B618fc8;
case 0x618fcf:c.instructions+=15;goto B618fcf;
case 0x618fd3:c.instructions+=14;goto B618fd3;
case 0x618fd6:c.instructions+=13;goto B618fd6;
case 0x618fda:c.instructions+=12;goto B618fda;
case 0x618fdc:c.instructions+=11;goto B618fdc;
case 0x618fde:c.instructions+=10;goto B618fde;
case 0x618fe2:c.instructions+=9;goto B618fe2;
case 0x618fe5:c.instructions+=8;goto B618fe5;
case 0x618fe7:c.instructions+=7;goto B618fe7;
case 0x618feb:c.instructions+=6;goto B618feb;
case 0x618fee:c.instructions+=5;goto B618fee;
case 0x618ff0:c.instructions+=4;goto B618ff0;
case 0x618ff7:c.instructions+=3;goto B618ff7;
case 0x618ffb:c.instructions+=2;goto B618ffb;
case 0x618ffe:c.instructions+=1;goto B618ffe;
default:missing_instruction(c.pc);}
B618001:L618001:{c.instructions+=73;NFSU2_TR(0x618001);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618003:{NFSU2_TR(0x618003);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618007:{NFSU2_TR(0x618007);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61800a:{NFSU2_TR(0x61800a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61800c:{NFSU2_TR(0x61800c);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618010:{NFSU2_TR(0x618010);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618013:{NFSU2_TR(0x618013);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618015:{NFSU2_TR(0x618015);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61801c:{NFSU2_TR(0x61801c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618020:{NFSU2_TR(0x618020);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618023:{NFSU2_TR(0x618023);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618027:{NFSU2_TR(0x618027);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61802a:{NFSU2_TR(0x61802a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61802c:{NFSU2_TR(0x61802c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618030:{NFSU2_TR(0x618030);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618033:{NFSU2_TR(0x618033);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618035:{NFSU2_TR(0x618035);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618039:{NFSU2_TR(0x618039);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61803c:{NFSU2_TR(0x61803c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61803e:{NFSU2_TR(0x61803e);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618045:{NFSU2_TR(0x618045);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618049:{NFSU2_TR(0x618049);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61804c:{NFSU2_TR(0x61804c);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618050:{NFSU2_TR(0x618050);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618053:{NFSU2_TR(0x618053);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618055:{NFSU2_TR(0x618055);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618059:{NFSU2_TR(0x618059);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61805b:{NFSU2_TR(0x61805b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61805d:{NFSU2_TR(0x61805d);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618061:{NFSU2_TR(0x618061);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618064:{NFSU2_TR(0x618064);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618066:{NFSU2_TR(0x618066);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61806d:{NFSU2_TR(0x61806d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618071:{NFSU2_TR(0x618071);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618074:{NFSU2_TR(0x618074);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618078:{NFSU2_TR(0x618078);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61807b:{NFSU2_TR(0x61807b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61807d:{NFSU2_TR(0x61807d);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618081:{NFSU2_TR(0x618081);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618084:{NFSU2_TR(0x618084);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618086:{NFSU2_TR(0x618086);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61808a:{NFSU2_TR(0x61808a);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61808d:{NFSU2_TR(0x61808d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61808f:{NFSU2_TR(0x61808f);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618096:{NFSU2_TR(0x618096);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61809a:{NFSU2_TR(0x61809a);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61809d:{NFSU2_TR(0x61809d);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6180a1:{NFSU2_TR(0x6180a1);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6180a5:{NFSU2_TR(0x6180a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6180a6:{NFSU2_TR(0x6180a6);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6180a9:{NFSU2_TR(0x6180a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6180ad:{NFSU2_TR(0x6180ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6180ae:{NFSU2_TR(0x6180ae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6180b0:{NFSU2_TR(0x6180b0);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6180b4:{NFSU2_TR(0x6180b4);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6180b7:{NFSU2_TR(0x6180b7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6180b9:{NFSU2_TR(0x6180b9);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6180bd:{NFSU2_TR(0x6180bd);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6180c0:{NFSU2_TR(0x6180c0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6180c2:{NFSU2_TR(0x6180c2);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6180c9:{NFSU2_TR(0x6180c9);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6180cd:{NFSU2_TR(0x6180cd);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6180d0:{NFSU2_TR(0x6180d0);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6180d4:{NFSU2_TR(0x6180d4);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6180d7:{NFSU2_TR(0x6180d7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6180d9:{NFSU2_TR(0x6180d9);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6180dd:{NFSU2_TR(0x6180dd);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6180e0:{NFSU2_TR(0x6180e0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6180e2:{NFSU2_TR(0x6180e2);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6180e6:{NFSU2_TR(0x6180e6);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6180e9:{NFSU2_TR(0x6180e9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6180eb:{NFSU2_TR(0x6180eb);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6180f2:{NFSU2_TR(0x6180f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6180f7ull));
TAIL_STATIC(0x4012b0u,401);
}
B6180f7:L6180f7:{c.instructions+=197;NFSU2_TR(0x6180f7);
{u32 ea_=u32(r4(R+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6180fe:{NFSU2_TR(0x6180fe);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618102:{NFSU2_TR(0x618102);
{u32 ea_=u32(r4(R+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618109:{NFSU2_TR(0x618109);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61810d:{NFSU2_TR(0x61810d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61810f:{NFSU2_TR(0x61810f);
{u32 ea_=u32(r4(R+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618116:{NFSU2_TR(0x618116);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61811a:{NFSU2_TR(0x61811a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61811c:{NFSU2_TR(0x61811c);
{u32 ea_=u32(r4(R+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618123:{NFSU2_TR(0x618123);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618127:{NFSU2_TR(0x618127);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618129:{NFSU2_TR(0x618129);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618130:{NFSU2_TR(0x618130);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618134:{NFSU2_TR(0x618134);
{u32 ea_=u32(r4(R+16)+u32(564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61813b:{NFSU2_TR(0x61813b);
{u32 ea_=u32(r4(R+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618142:{NFSU2_TR(0x618142);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618146:{NFSU2_TR(0x618146);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618148:{NFSU2_TR(0x618148);
{u32 ea_=u32(r4(R+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61814f:{NFSU2_TR(0x61814f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618153:{NFSU2_TR(0x618153);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618155:{NFSU2_TR(0x618155);
{u32 ea_=u32(r4(R+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61815c:{NFSU2_TR(0x61815c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618160:{NFSU2_TR(0x618160);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618162:{NFSU2_TR(0x618162);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618169:{NFSU2_TR(0x618169);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61816d:{NFSU2_TR(0x61816d);
{u32 ea_=u32(r4(R+16)+u32(568u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618174:{NFSU2_TR(0x618174);
{u32 ea_=u32(r4(R+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61817b:{NFSU2_TR(0x61817b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61817f:{NFSU2_TR(0x61817f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618181:{NFSU2_TR(0x618181);
{u32 ea_=u32(r4(R+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618188:{NFSU2_TR(0x618188);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61818c:{NFSU2_TR(0x61818c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61818e:{NFSU2_TR(0x61818e);
{u32 ea_=u32(r4(R+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618195:{NFSU2_TR(0x618195);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618199:{NFSU2_TR(0x618199);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61819b:{NFSU2_TR(0x61819b);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6181a2:{NFSU2_TR(0x6181a2);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6181a6:{NFSU2_TR(0x6181a6);
{u32 ea_=u32(r4(R+16)+u32(572u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6181ad:{NFSU2_TR(0x6181ad);
{u32 ea_=u32(r4(R+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6181b4:{NFSU2_TR(0x6181b4);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6181b8:{NFSU2_TR(0x6181b8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6181ba:{NFSU2_TR(0x6181ba);
{u32 ea_=u32(r4(R+16)+u32(604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6181c1:{NFSU2_TR(0x6181c1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6181c5:{NFSU2_TR(0x6181c5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6181c7:{NFSU2_TR(0x6181c7);
{u32 ea_=u32(r4(R+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6181ce:{NFSU2_TR(0x6181ce);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6181d2:{NFSU2_TR(0x6181d2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6181d4:{NFSU2_TR(0x6181d4);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6181db:{NFSU2_TR(0x6181db);
{u32 ea_=u32(r4(R+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6181e2:{NFSU2_TR(0x6181e2);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6181e6:{NFSU2_TR(0x6181e6);
{u32 ea_=u32(r4(R+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6181ed:{NFSU2_TR(0x6181ed);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6181f1:{NFSU2_TR(0x6181f1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6181f3:{NFSU2_TR(0x6181f3);
{u32 ea_=u32(r4(R+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6181fa:{NFSU2_TR(0x6181fa);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6181fe:{NFSU2_TR(0x6181fe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618200:{NFSU2_TR(0x618200);
{u32 ea_=u32(r4(R+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618207:{NFSU2_TR(0x618207);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61820b:{NFSU2_TR(0x61820b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61820d:{NFSU2_TR(0x61820d);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618214:{NFSU2_TR(0x618214);
{u32 ea_=u32(r4(R+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61821b:{NFSU2_TR(0x61821b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61821f:{NFSU2_TR(0x61821f);
{u32 ea_=u32(r4(R+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618226:{NFSU2_TR(0x618226);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61822a:{NFSU2_TR(0x61822a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61822c:{NFSU2_TR(0x61822c);
{u32 ea_=u32(r4(R+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618233:{NFSU2_TR(0x618233);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618237:{NFSU2_TR(0x618237);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618239:{NFSU2_TR(0x618239);
{u32 ea_=u32(r4(R+16)+u32(564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618240:{NFSU2_TR(0x618240);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618244:{NFSU2_TR(0x618244);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618246:{NFSU2_TR(0x618246);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61824d:{NFSU2_TR(0x61824d);
{u32 ea_=u32(r4(R+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618254:{NFSU2_TR(0x618254);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618258:{NFSU2_TR(0x618258);
{u32 ea_=u32(r4(R+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61825f:{NFSU2_TR(0x61825f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618263:{NFSU2_TR(0x618263);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618265:{NFSU2_TR(0x618265);
{u32 ea_=u32(r4(R+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61826c:{NFSU2_TR(0x61826c);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618270:{NFSU2_TR(0x618270);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618272:{NFSU2_TR(0x618272);
{u32 ea_=u32(r4(R+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618279:{NFSU2_TR(0x618279);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61827d:{NFSU2_TR(0x61827d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61827f:{NFSU2_TR(0x61827f);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618286:{NFSU2_TR(0x618286);
{u32 ea_=u32(r4(R+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61828d:{NFSU2_TR(0x61828d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618291:{NFSU2_TR(0x618291);
{u32 ea_=u32(r4(R+16)+u32(604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618298:{NFSU2_TR(0x618298);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61829c:{NFSU2_TR(0x61829c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61829e:{NFSU2_TR(0x61829e);
{u32 ea_=u32(r4(R+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6182a5:{NFSU2_TR(0x6182a5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6182a9:{NFSU2_TR(0x6182a9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6182ab:{NFSU2_TR(0x6182ab);
{u32 ea_=u32(r4(R+16)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6182b2:{NFSU2_TR(0x6182b2);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6182b6:{NFSU2_TR(0x6182b6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6182b8:{NFSU2_TR(0x6182b8);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6182bf:{NFSU2_TR(0x6182bf);
{u32 ea_=u32(r4(R+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6182c6:{NFSU2_TR(0x6182c6);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6182ca:{NFSU2_TR(0x6182ca);
{u32 ea_=u32(r4(R+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6182d1:{NFSU2_TR(0x6182d1);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6182d5:{NFSU2_TR(0x6182d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6182d7:{NFSU2_TR(0x6182d7);
{u32 ea_=u32(r4(R+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6182de:{NFSU2_TR(0x6182de);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6182e2:{NFSU2_TR(0x6182e2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6182e4:{NFSU2_TR(0x6182e4);
{u32 ea_=u32(r4(R+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6182eb:{NFSU2_TR(0x6182eb);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6182ef:{NFSU2_TR(0x6182ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6182f1:{NFSU2_TR(0x6182f1);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6182f8:{NFSU2_TR(0x6182f8);
{u32 ea_=u32(r4(R+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6182ff:{NFSU2_TR(0x6182ff);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618303:{NFSU2_TR(0x618303);
{u32 ea_=u32(r4(R+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61830a:{NFSU2_TR(0x61830a);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61830e:{NFSU2_TR(0x61830e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618310:{NFSU2_TR(0x618310);
{u32 ea_=u32(r4(R+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618317:{NFSU2_TR(0x618317);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61831b:{NFSU2_TR(0x61831b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61831d:{NFSU2_TR(0x61831d);
{u32 ea_=u32(r4(R+16)+u32(564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618324:{NFSU2_TR(0x618324);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618328:{NFSU2_TR(0x618328);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61832a:{NFSU2_TR(0x61832a);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618331:{NFSU2_TR(0x618331);
{u32 ea_=u32(r4(R+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618338:{NFSU2_TR(0x618338);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61833c:{NFSU2_TR(0x61833c);
{u32 ea_=u32(r4(R+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618343:{NFSU2_TR(0x618343);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618347:{NFSU2_TR(0x618347);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618349:{NFSU2_TR(0x618349);
{u32 ea_=u32(r4(R+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618350:{NFSU2_TR(0x618350);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618354:{NFSU2_TR(0x618354);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618356:{NFSU2_TR(0x618356);
{u32 ea_=u32(r4(R+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61835d:{NFSU2_TR(0x61835d);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618361:{NFSU2_TR(0x618361);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618363:{NFSU2_TR(0x618363);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61836a:{NFSU2_TR(0x61836a);
{u32 ea_=u32(r4(R+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618371:{NFSU2_TR(0x618371);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618375:{NFSU2_TR(0x618375);
{u32 ea_=u32(r4(R+16)+u32(604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61837c:{NFSU2_TR(0x61837c);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618380:{NFSU2_TR(0x618380);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618382:{NFSU2_TR(0x618382);
{u32 ea_=u32(r4(R+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618389:{NFSU2_TR(0x618389);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61838d:{NFSU2_TR(0x61838d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61838f:{NFSU2_TR(0x61838f);
{u32 ea_=u32(r4(R+16)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618396:{NFSU2_TR(0x618396);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61839a:{NFSU2_TR(0x61839a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61839c:{NFSU2_TR(0x61839c);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6183a3:{NFSU2_TR(0x6183a3);
{u32 ea_=u32(r4(R+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6183aa:{NFSU2_TR(0x6183aa);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6183ae:{NFSU2_TR(0x6183ae);
{u32 ea_=u32(r4(R+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6183b5:{NFSU2_TR(0x6183b5);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6183b9:{NFSU2_TR(0x6183b9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6183bb:{NFSU2_TR(0x6183bb);
{u32 ea_=u32(r4(R+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6183c2:{NFSU2_TR(0x6183c2);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6183c6:{NFSU2_TR(0x6183c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6183c8:{NFSU2_TR(0x6183c8);
{u32 ea_=u32(r4(R+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6183cf:{NFSU2_TR(0x6183cf);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6183d3:{NFSU2_TR(0x6183d3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6183d5:{NFSU2_TR(0x6183d5);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6183dc:{NFSU2_TR(0x6183dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6183e3:{NFSU2_TR(0x6183e3);
{u32 ea_=u32(r4(R+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6183ea:{NFSU2_TR(0x6183ea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6183eb:{NFSU2_TR(0x6183eb);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6183ef:{NFSU2_TR(0x6183ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6183f3:{NFSU2_TR(0x6183f3);
{u32 ea_=u32(r4(R+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6183fa:{NFSU2_TR(0x6183fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6183fb:{NFSU2_TR(0x6183fb);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6183ff:{NFSU2_TR(0x6183ff);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618401:{NFSU2_TR(0x618401);
{u32 ea_=u32(r4(R+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618408:{NFSU2_TR(0x618408);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61840c:{NFSU2_TR(0x61840c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61840e:{NFSU2_TR(0x61840e);
{u32 ea_=u32(r4(R+16)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618415:{NFSU2_TR(0x618415);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618419:{NFSU2_TR(0x618419);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61841b:{NFSU2_TR(0x61841b);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618422:{NFSU2_TR(0x618422);
{u32 ea_=u32(r4(R+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618429:{NFSU2_TR(0x618429);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61842d:{NFSU2_TR(0x61842d);
{u32 ea_=u32(r4(R+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618434:{NFSU2_TR(0x618434);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618438:{NFSU2_TR(0x618438);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61843a:{NFSU2_TR(0x61843a);
{u32 ea_=u32(r4(R+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618441:{NFSU2_TR(0x618441);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618445:{NFSU2_TR(0x618445);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618447:{NFSU2_TR(0x618447);
{u32 ea_=u32(r4(R+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61844e:{NFSU2_TR(0x61844e);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618452:{NFSU2_TR(0x618452);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618454:{NFSU2_TR(0x618454);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61845b:{NFSU2_TR(0x61845b);
{u32 ea_=u32(r4(R+16)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618462:{NFSU2_TR(0x618462);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618466:{NFSU2_TR(0x618466);
{u32 ea_=u32(r4(R+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61846d:{NFSU2_TR(0x61846d);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618471:{NFSU2_TR(0x618471);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618473:{NFSU2_TR(0x618473);
{u32 ea_=u32(r4(R+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61847a:{NFSU2_TR(0x61847a);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61847e:{NFSU2_TR(0x61847e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618480:{NFSU2_TR(0x618480);
{u32 ea_=u32(r4(R+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618487:{NFSU2_TR(0x618487);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61848b:{NFSU2_TR(0x61848b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61848d:{NFSU2_TR(0x61848d);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618494:{NFSU2_TR(0x618494);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x618499ull));
TAIL_STATIC(0x4012b0u,401);
}
B618499:L618499:{c.instructions+=197;NFSU2_TR(0x618499);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61849d:{NFSU2_TR(0x61849d);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6184a0:{NFSU2_TR(0x6184a0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6184a4:{NFSU2_TR(0x6184a4);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6184a6:{NFSU2_TR(0x6184a6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6184a8:{NFSU2_TR(0x6184a8);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6184ac:{NFSU2_TR(0x6184ac);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6184af:{NFSU2_TR(0x6184af);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6184b1:{NFSU2_TR(0x6184b1);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6184b5:{NFSU2_TR(0x6184b5);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6184b8:{NFSU2_TR(0x6184b8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6184ba:{NFSU2_TR(0x6184ba);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6184c1:{NFSU2_TR(0x6184c1);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6184c5:{NFSU2_TR(0x6184c5);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6184c8:{NFSU2_TR(0x6184c8);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6184cc:{NFSU2_TR(0x6184cc);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6184cf:{NFSU2_TR(0x6184cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6184d1:{NFSU2_TR(0x6184d1);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6184d5:{NFSU2_TR(0x6184d5);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6184d8:{NFSU2_TR(0x6184d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6184da:{NFSU2_TR(0x6184da);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6184de:{NFSU2_TR(0x6184de);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6184e1:{NFSU2_TR(0x6184e1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6184e3:{NFSU2_TR(0x6184e3);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6184ea:{NFSU2_TR(0x6184ea);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6184ee:{NFSU2_TR(0x6184ee);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6184f1:{NFSU2_TR(0x6184f1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6184f5:{NFSU2_TR(0x6184f5);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6184f8:{NFSU2_TR(0x6184f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6184fa:{NFSU2_TR(0x6184fa);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6184fe:{NFSU2_TR(0x6184fe);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618501:{NFSU2_TR(0x618501);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618503:{NFSU2_TR(0x618503);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618507:{NFSU2_TR(0x618507);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61850a:{NFSU2_TR(0x61850a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61850c:{NFSU2_TR(0x61850c);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618513:{NFSU2_TR(0x618513);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618517:{NFSU2_TR(0x618517);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61851a:{NFSU2_TR(0x61851a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61851e:{NFSU2_TR(0x61851e);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618521:{NFSU2_TR(0x618521);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618523:{NFSU2_TR(0x618523);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618527:{NFSU2_TR(0x618527);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61852a:{NFSU2_TR(0x61852a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61852c:{NFSU2_TR(0x61852c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618530:{NFSU2_TR(0x618530);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618533:{NFSU2_TR(0x618533);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618535:{NFSU2_TR(0x618535);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61853c:{NFSU2_TR(0x61853c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618540:{NFSU2_TR(0x618540);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618543:{NFSU2_TR(0x618543);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618547:{NFSU2_TR(0x618547);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61854a:{NFSU2_TR(0x61854a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61854c:{NFSU2_TR(0x61854c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618550:{NFSU2_TR(0x618550);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618552:{NFSU2_TR(0x618552);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618554:{NFSU2_TR(0x618554);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618558:{NFSU2_TR(0x618558);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61855b:{NFSU2_TR(0x61855b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61855d:{NFSU2_TR(0x61855d);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618564:{NFSU2_TR(0x618564);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618568:{NFSU2_TR(0x618568);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61856b:{NFSU2_TR(0x61856b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61856f:{NFSU2_TR(0x61856f);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618572:{NFSU2_TR(0x618572);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618574:{NFSU2_TR(0x618574);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618578:{NFSU2_TR(0x618578);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61857b:{NFSU2_TR(0x61857b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61857d:{NFSU2_TR(0x61857d);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618581:{NFSU2_TR(0x618581);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618584:{NFSU2_TR(0x618584);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618586:{NFSU2_TR(0x618586);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61858d:{NFSU2_TR(0x61858d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618591:{NFSU2_TR(0x618591);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618594:{NFSU2_TR(0x618594);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618598:{NFSU2_TR(0x618598);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61859b:{NFSU2_TR(0x61859b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61859d:{NFSU2_TR(0x61859d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6185a1:{NFSU2_TR(0x6185a1);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6185a4:{NFSU2_TR(0x6185a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6185a6:{NFSU2_TR(0x6185a6);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6185aa:{NFSU2_TR(0x6185aa);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6185ad:{NFSU2_TR(0x6185ad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6185af:{NFSU2_TR(0x6185af);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6185b6:{NFSU2_TR(0x6185b6);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6185ba:{NFSU2_TR(0x6185ba);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6185bd:{NFSU2_TR(0x6185bd);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6185c1:{NFSU2_TR(0x6185c1);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6185c4:{NFSU2_TR(0x6185c4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6185c6:{NFSU2_TR(0x6185c6);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6185ca:{NFSU2_TR(0x6185ca);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6185cd:{NFSU2_TR(0x6185cd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6185cf:{NFSU2_TR(0x6185cf);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6185d3:{NFSU2_TR(0x6185d3);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6185d6:{NFSU2_TR(0x6185d6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6185d8:{NFSU2_TR(0x6185d8);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6185df:{NFSU2_TR(0x6185df);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6185e3:{NFSU2_TR(0x6185e3);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6185e6:{NFSU2_TR(0x6185e6);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6185ea:{NFSU2_TR(0x6185ea);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6185ed:{NFSU2_TR(0x6185ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6185ef:{NFSU2_TR(0x6185ef);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6185f3:{NFSU2_TR(0x6185f3);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6185f5:{NFSU2_TR(0x6185f5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6185f7:{NFSU2_TR(0x6185f7);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6185fb:{NFSU2_TR(0x6185fb);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6185fe:{NFSU2_TR(0x6185fe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618600:{NFSU2_TR(0x618600);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618607:{NFSU2_TR(0x618607);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61860b:{NFSU2_TR(0x61860b);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61860e:{NFSU2_TR(0x61860e);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618612:{NFSU2_TR(0x618612);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618615:{NFSU2_TR(0x618615);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618617:{NFSU2_TR(0x618617);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61861b:{NFSU2_TR(0x61861b);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61861e:{NFSU2_TR(0x61861e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618620:{NFSU2_TR(0x618620);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618624:{NFSU2_TR(0x618624);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618627:{NFSU2_TR(0x618627);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618629:{NFSU2_TR(0x618629);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618630:{NFSU2_TR(0x618630);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618634:{NFSU2_TR(0x618634);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618637:{NFSU2_TR(0x618637);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61863b:{NFSU2_TR(0x61863b);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61863e:{NFSU2_TR(0x61863e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618640:{NFSU2_TR(0x618640);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618644:{NFSU2_TR(0x618644);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618647:{NFSU2_TR(0x618647);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618649:{NFSU2_TR(0x618649);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61864d:{NFSU2_TR(0x61864d);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618650:{NFSU2_TR(0x618650);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618652:{NFSU2_TR(0x618652);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618659:{NFSU2_TR(0x618659);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61865d:{NFSU2_TR(0x61865d);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618660:{NFSU2_TR(0x618660);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618664:{NFSU2_TR(0x618664);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618667:{NFSU2_TR(0x618667);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618669:{NFSU2_TR(0x618669);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61866d:{NFSU2_TR(0x61866d);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618670:{NFSU2_TR(0x618670);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618672:{NFSU2_TR(0x618672);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618676:{NFSU2_TR(0x618676);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618679:{NFSU2_TR(0x618679);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61867b:{NFSU2_TR(0x61867b);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61867f:{NFSU2_TR(0x61867f);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B618686:{NFSU2_TR(0x618686);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61868d:{NFSU2_TR(0x61868d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61868e:{NFSU2_TR(0x61868e);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618692:{NFSU2_TR(0x618692);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B618693:{NFSU2_TR(0x618693);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618696:{NFSU2_TR(0x618696);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61869a:{NFSU2_TR(0x61869a);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61869d:{NFSU2_TR(0x61869d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61869f:{NFSU2_TR(0x61869f);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6186a3:{NFSU2_TR(0x6186a3);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6186a5:{NFSU2_TR(0x6186a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6186a7:{NFSU2_TR(0x6186a7);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6186ab:{NFSU2_TR(0x6186ab);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6186ae:{NFSU2_TR(0x6186ae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6186b0:{NFSU2_TR(0x6186b0);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6186b7:{NFSU2_TR(0x6186b7);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6186bb:{NFSU2_TR(0x6186bb);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6186be:{NFSU2_TR(0x6186be);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6186c2:{NFSU2_TR(0x6186c2);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6186c5:{NFSU2_TR(0x6186c5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6186c7:{NFSU2_TR(0x6186c7);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6186cb:{NFSU2_TR(0x6186cb);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6186ce:{NFSU2_TR(0x6186ce);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6186d0:{NFSU2_TR(0x6186d0);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6186d4:{NFSU2_TR(0x6186d4);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6186d7:{NFSU2_TR(0x6186d7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6186d9:{NFSU2_TR(0x6186d9);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6186e0:{NFSU2_TR(0x6186e0);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6186e4:{NFSU2_TR(0x6186e4);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6186e7:{NFSU2_TR(0x6186e7);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6186eb:{NFSU2_TR(0x6186eb);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6186ee:{NFSU2_TR(0x6186ee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6186f0:{NFSU2_TR(0x6186f0);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6186f4:{NFSU2_TR(0x6186f4);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6186f7:{NFSU2_TR(0x6186f7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6186f9:{NFSU2_TR(0x6186f9);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6186fd:{NFSU2_TR(0x6186fd);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618700:{NFSU2_TR(0x618700);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618702:{NFSU2_TR(0x618702);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618709:{NFSU2_TR(0x618709);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61870d:{NFSU2_TR(0x61870d);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618710:{NFSU2_TR(0x618710);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618714:{NFSU2_TR(0x618714);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618717:{NFSU2_TR(0x618717);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618719:{NFSU2_TR(0x618719);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61871d:{NFSU2_TR(0x61871d);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618720:{NFSU2_TR(0x618720);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618722:{NFSU2_TR(0x618722);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618726:{NFSU2_TR(0x618726);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618729:{NFSU2_TR(0x618729);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61872b:{NFSU2_TR(0x61872b);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618732:{NFSU2_TR(0x618732);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x618737ull));
TAIL_STATIC(0x4012b0u,401);
}
B618737:L618737:{c.instructions+=12;NFSU2_TR(0x618737);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61873a:{NFSU2_TR(0x61873a);
u8 U[4];
w4(U+0,u32(u32(u32(0x430ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B618741:{NFSU2_TR(0x618741);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B618742:{NFSU2_TR(0x618742);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B618746:{NFSU2_TR(0x618746);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B618747:{NFSU2_TR(0x618747);
u8 U[4];
w4(U+0,u32(u32(u32(0x368ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61874e:{NFSU2_TR(0x61874e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61874f:{NFSU2_TR(0x61874f);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B618754:{NFSU2_TR(0x618754);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B618755:{NFSU2_TR(0x618755);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61875c:{NFSU2_TR(0x61875c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61875d:{NFSU2_TR(0x61875d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x618762ull));
TAIL_STATIC(0x48f660u,48f);
}
B618762:L618762:{c.instructions+=3;NFSU2_TR(0x618762);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
}
B618765:{NFSU2_TR(0x618765);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B618767:{NFSU2_TR(0x618767);
if(r1(R+518)){{goto L618791;}}
}
B618769:L618769:{c.instructions+=13;NFSU2_TR(0x618769);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61876c:{NFSU2_TR(0x61876c);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B618773:{NFSU2_TR(0x618773);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B618777:{NFSU2_TR(0x618777);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B618779:{NFSU2_TR(0x618779);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B61877b:{NFSU2_TR(0x61877b);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61877f:{NFSU2_TR(0x61877f);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x8000ull))));
}
B618785:{NFSU2_TR(0x618785);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B618786:{NFSU2_TR(0x618786);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B618787:{NFSU2_TR(0x618787);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B618788:{NFSU2_TR(0x618788);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61878b:{NFSU2_TR(0x61878b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61878c:{NFSU2_TR(0x61878c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x618791ull));
TAIL_STATIC(0x5c5930u,5c5);
}
B618791:L618791:{c.instructions+=3;NFSU2_TR(0x618791);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B618795:{NFSU2_TR(0x618795);
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
B618797:{NFSU2_TR(0x618797);
if(r1(R+518)){TAIL_STATIC(0x619191u,619);}
}
B61879d:L61879d:{c.instructions+=197;NFSU2_TR(0x61879d);
{u32 ea_=u32(r4(R+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6187a4:{NFSU2_TR(0x6187a4);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6187a7:{NFSU2_TR(0x6187a7);
{u32 ea_=u32(r4(R+16)+u32(352u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6187ae:{NFSU2_TR(0x6187ae);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6187b1:{NFSU2_TR(0x6187b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6187b3:{NFSU2_TR(0x6187b3);
{u32 ea_=u32(r4(R+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6187ba:{NFSU2_TR(0x6187ba);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6187bd:{NFSU2_TR(0x6187bd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6187bf:{NFSU2_TR(0x6187bf);
{u32 ea_=u32(r4(R+16)+u32(364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6187c6:{NFSU2_TR(0x6187c6);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6187c9:{NFSU2_TR(0x6187c9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6187cb:{NFSU2_TR(0x6187cb);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6187cf:{NFSU2_TR(0x6187cf);
{u32 ea_=u32(r4(R+16)+u32(352u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6187d6:{NFSU2_TR(0x6187d6);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6187d9:{NFSU2_TR(0x6187d9);
{u32 ea_=u32(r4(R+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6187e0:{NFSU2_TR(0x6187e0);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6187e3:{NFSU2_TR(0x6187e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6187e5:{NFSU2_TR(0x6187e5);
{u32 ea_=u32(r4(R+16)+u32(364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6187ec:{NFSU2_TR(0x6187ec);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6187ef:{NFSU2_TR(0x6187ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6187f1:{NFSU2_TR(0x6187f1);
{u32 ea_=u32(r4(R+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6187f8:{NFSU2_TR(0x6187f8);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6187fb:{NFSU2_TR(0x6187fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6187fd:{NFSU2_TR(0x6187fd);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618801:{NFSU2_TR(0x618801);
{u32 ea_=u32(r4(R+16)+u32(352u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618808:{NFSU2_TR(0x618808);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61880b:{NFSU2_TR(0x61880b);
{u32 ea_=u32(r4(R+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618812:{NFSU2_TR(0x618812);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618815:{NFSU2_TR(0x618815);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618817:{NFSU2_TR(0x618817);
{u32 ea_=u32(r4(R+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61881e:{NFSU2_TR(0x61881e);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618821:{NFSU2_TR(0x618821);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618823:{NFSU2_TR(0x618823);
{u32 ea_=u32(r4(R+16)+u32(364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61882a:{NFSU2_TR(0x61882a);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61882d:{NFSU2_TR(0x61882d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61882f:{NFSU2_TR(0x61882f);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618833:{NFSU2_TR(0x618833);
{u32 ea_=u32(r4(R+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61883a:{NFSU2_TR(0x61883a);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61883d:{NFSU2_TR(0x61883d);
{u32 ea_=u32(r4(R+16)+u32(364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618844:{NFSU2_TR(0x618844);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618847:{NFSU2_TR(0x618847);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618849:{NFSU2_TR(0x618849);
{u32 ea_=u32(r4(R+16)+u32(352u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618850:{NFSU2_TR(0x618850);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618853:{NFSU2_TR(0x618853);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618855:{NFSU2_TR(0x618855);
{u32 ea_=u32(r4(R+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61885c:{NFSU2_TR(0x61885c);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61885f:{NFSU2_TR(0x61885f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618861:{NFSU2_TR(0x618861);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618865:{NFSU2_TR(0x618865);
{u32 ea_=u32(r4(R+16)+u32(376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61886c:{NFSU2_TR(0x61886c);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61886f:{NFSU2_TR(0x61886f);
{u32 ea_=u32(r4(R+16)+u32(368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618876:{NFSU2_TR(0x618876);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618879:{NFSU2_TR(0x618879);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61887b:{NFSU2_TR(0x61887b);
{u32 ea_=u32(r4(R+16)+u32(372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618882:{NFSU2_TR(0x618882);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618885:{NFSU2_TR(0x618885);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618887:{NFSU2_TR(0x618887);
{u32 ea_=u32(r4(R+16)+u32(380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61888e:{NFSU2_TR(0x61888e);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618891:{NFSU2_TR(0x618891);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618893:{NFSU2_TR(0x618893);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61889a:{NFSU2_TR(0x61889a);
{u32 ea_=u32(r4(R+16)+u32(368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6188a1:{NFSU2_TR(0x6188a1);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6188a4:{NFSU2_TR(0x6188a4);
{u32 ea_=u32(r4(R+16)+u32(376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6188ab:{NFSU2_TR(0x6188ab);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6188ae:{NFSU2_TR(0x6188ae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6188b0:{NFSU2_TR(0x6188b0);
{u32 ea_=u32(r4(R+16)+u32(380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6188b7:{NFSU2_TR(0x6188b7);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6188ba:{NFSU2_TR(0x6188ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6188bc:{NFSU2_TR(0x6188bc);
{u32 ea_=u32(r4(R+16)+u32(372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6188c3:{NFSU2_TR(0x6188c3);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6188c6:{NFSU2_TR(0x6188c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6188c8:{NFSU2_TR(0x6188c8);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6188cf:{NFSU2_TR(0x6188cf);
{u32 ea_=u32(r4(R+16)+u32(368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6188d6:{NFSU2_TR(0x6188d6);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6188d9:{NFSU2_TR(0x6188d9);
{u32 ea_=u32(r4(R+16)+u32(372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6188e0:{NFSU2_TR(0x6188e0);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6188e3:{NFSU2_TR(0x6188e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6188e5:{NFSU2_TR(0x6188e5);
{u32 ea_=u32(r4(R+16)+u32(376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6188ec:{NFSU2_TR(0x6188ec);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6188ef:{NFSU2_TR(0x6188ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6188f1:{NFSU2_TR(0x6188f1);
{u32 ea_=u32(r4(R+16)+u32(380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6188f8:{NFSU2_TR(0x6188f8);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6188fb:{NFSU2_TR(0x6188fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6188fd:{NFSU2_TR(0x6188fd);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618904:{NFSU2_TR(0x618904);
{u32 ea_=u32(r4(R+16)+u32(372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61890b:{NFSU2_TR(0x61890b);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61890e:{NFSU2_TR(0x61890e);
{u32 ea_=u32(r4(R+16)+u32(380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618915:{NFSU2_TR(0x618915);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618918:{NFSU2_TR(0x618918);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61891a:{NFSU2_TR(0x61891a);
{u32 ea_=u32(r4(R+16)+u32(368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618921:{NFSU2_TR(0x618921);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618924:{NFSU2_TR(0x618924);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618926:{NFSU2_TR(0x618926);
{u32 ea_=u32(r4(R+16)+u32(376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61892d:{NFSU2_TR(0x61892d);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618930:{NFSU2_TR(0x618930);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618932:{NFSU2_TR(0x618932);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618939:{NFSU2_TR(0x618939);
{u32 ea_=u32(r4(R+16)+u32(392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618940:{NFSU2_TR(0x618940);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618943:{NFSU2_TR(0x618943);
{u32 ea_=u32(r4(R+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61894a:{NFSU2_TR(0x61894a);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61894d:{NFSU2_TR(0x61894d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61894f:{NFSU2_TR(0x61894f);
{u32 ea_=u32(r4(R+16)+u32(388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618956:{NFSU2_TR(0x618956);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618959:{NFSU2_TR(0x618959);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61895b:{NFSU2_TR(0x61895b);
{u32 ea_=u32(r4(R+16)+u32(396u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618962:{NFSU2_TR(0x618962);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618965:{NFSU2_TR(0x618965);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618967:{NFSU2_TR(0x618967);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61896e:{NFSU2_TR(0x61896e);
{u32 ea_=u32(r4(R+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618975:{NFSU2_TR(0x618975);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618978:{NFSU2_TR(0x618978);
{u32 ea_=u32(r4(R+16)+u32(392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61897f:{NFSU2_TR(0x61897f);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618982:{NFSU2_TR(0x618982);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618984:{NFSU2_TR(0x618984);
{u32 ea_=u32(r4(R+16)+u32(396u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61898b:{NFSU2_TR(0x61898b);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61898e:{NFSU2_TR(0x61898e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618990:{NFSU2_TR(0x618990);
{u32 ea_=u32(r4(R+16)+u32(388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618997:{NFSU2_TR(0x618997);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61899a:{NFSU2_TR(0x61899a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61899c:{NFSU2_TR(0x61899c);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6189a3:{NFSU2_TR(0x6189a3);
{u32 ea_=u32(r4(R+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6189aa:{NFSU2_TR(0x6189aa);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6189ad:{NFSU2_TR(0x6189ad);
{u32 ea_=u32(r4(R+16)+u32(388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6189b4:{NFSU2_TR(0x6189b4);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6189b7:{NFSU2_TR(0x6189b7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6189b9:{NFSU2_TR(0x6189b9);
{u32 ea_=u32(r4(R+16)+u32(392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6189c0:{NFSU2_TR(0x6189c0);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6189c3:{NFSU2_TR(0x6189c3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6189c5:{NFSU2_TR(0x6189c5);
{u32 ea_=u32(r4(R+16)+u32(396u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6189cc:{NFSU2_TR(0x6189cc);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6189cf:{NFSU2_TR(0x6189cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6189d1:{NFSU2_TR(0x6189d1);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6189d8:{NFSU2_TR(0x6189d8);
{u32 ea_=u32(r4(R+16)+u32(388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6189df:{NFSU2_TR(0x6189df);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6189e2:{NFSU2_TR(0x6189e2);
{u32 ea_=u32(r4(R+16)+u32(396u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6189e9:{NFSU2_TR(0x6189e9);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6189ec:{NFSU2_TR(0x6189ec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6189ee:{NFSU2_TR(0x6189ee);
{u32 ea_=u32(r4(R+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6189f5:{NFSU2_TR(0x6189f5);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6189f8:{NFSU2_TR(0x6189f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6189fa:{NFSU2_TR(0x6189fa);
{u32 ea_=u32(r4(R+16)+u32(392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a01:{NFSU2_TR(0x618a01);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a04:{NFSU2_TR(0x618a04);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618a06:{NFSU2_TR(0x618a06);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618a0d:{NFSU2_TR(0x618a0d);
{u32 ea_=u32(r4(R+16)+u32(408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a14:{NFSU2_TR(0x618a14);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a17:{NFSU2_TR(0x618a17);
{u32 ea_=u32(r4(R+16)+u32(400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a1e:{NFSU2_TR(0x618a1e);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a21:{NFSU2_TR(0x618a21);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618a23:{NFSU2_TR(0x618a23);
{u32 ea_=u32(r4(R+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a2a:{NFSU2_TR(0x618a2a);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a2d:{NFSU2_TR(0x618a2d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618a2f:{NFSU2_TR(0x618a2f);
{u32 ea_=u32(r4(R+16)+u32(412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a36:{NFSU2_TR(0x618a36);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a39:{NFSU2_TR(0x618a39);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618a3b:{NFSU2_TR(0x618a3b);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618a42:{NFSU2_TR(0x618a42);
{u32 ea_=u32(r4(R+16)+u32(400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a49:{NFSU2_TR(0x618a49);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a4c:{NFSU2_TR(0x618a4c);
{u32 ea_=u32(r4(R+16)+u32(408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a53:{NFSU2_TR(0x618a53);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a56:{NFSU2_TR(0x618a56);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618a58:{NFSU2_TR(0x618a58);
{u32 ea_=u32(r4(R+16)+u32(412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a5f:{NFSU2_TR(0x618a5f);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a62:{NFSU2_TR(0x618a62);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618a64:{NFSU2_TR(0x618a64);
{u32 ea_=u32(r4(R+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a6b:{NFSU2_TR(0x618a6b);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a6e:{NFSU2_TR(0x618a6e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618a70:{NFSU2_TR(0x618a70);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618a77:{NFSU2_TR(0x618a77);
{u32 ea_=u32(r4(R+16)+u32(400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a7e:{NFSU2_TR(0x618a7e);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a81:{NFSU2_TR(0x618a81);
{u32 ea_=u32(r4(R+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a88:{NFSU2_TR(0x618a88);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a8b:{NFSU2_TR(0x618a8b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618a8d:{NFSU2_TR(0x618a8d);
{u32 ea_=u32(r4(R+16)+u32(408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a94:{NFSU2_TR(0x618a94);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a97:{NFSU2_TR(0x618a97);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618a99:{NFSU2_TR(0x618a99);
{u32 ea_=u32(r4(R+16)+u32(412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618aa0:{NFSU2_TR(0x618aa0);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618aa3:{NFSU2_TR(0x618aa3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618aa5:{NFSU2_TR(0x618aa5);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618aac:{NFSU2_TR(0x618aac);
{u32 ea_=u32(r4(R+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ab3:{NFSU2_TR(0x618ab3);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ab6:{NFSU2_TR(0x618ab6);
{u32 ea_=u32(r4(R+16)+u32(412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618abd:{NFSU2_TR(0x618abd);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B618ac1:{NFSU2_TR(0x618ac1);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ac4:{NFSU2_TR(0x618ac4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B618ac5:{NFSU2_TR(0x618ac5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B618ac9:{NFSU2_TR(0x618ac9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B618aca:{NFSU2_TR(0x618aca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618acc:{NFSU2_TR(0x618acc);
{u32 ea_=u32(r4(R+16)+u32(408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ad3:{NFSU2_TR(0x618ad3);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ad6:{NFSU2_TR(0x618ad6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618ad8:{NFSU2_TR(0x618ad8);
{u32 ea_=u32(r4(R+16)+u32(416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618adf:{NFSU2_TR(0x618adf);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ae2:{NFSU2_TR(0x618ae2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618ae4:{NFSU2_TR(0x618ae4);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618aeb:{NFSU2_TR(0x618aeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x618af0ull));
TAIL_STATIC(0x4012b0u,401);
}
B618af0:L618af0:{c.instructions+=197;NFSU2_TR(0x618af0);
{u32 ea_=u32(r4(R+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618af7:{NFSU2_TR(0x618af7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618afb:{NFSU2_TR(0x618afb);
{u32 ea_=u32(r4(R+16)+u32(664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b02:{NFSU2_TR(0x618b02);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618b06:{NFSU2_TR(0x618b06);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618b08:{NFSU2_TR(0x618b08);
{u32 ea_=u32(r4(R+16)+u32(648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b0f:{NFSU2_TR(0x618b0f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618b13:{NFSU2_TR(0x618b13);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618b15:{NFSU2_TR(0x618b15);
{u32 ea_=u32(r4(R+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b1c:{NFSU2_TR(0x618b1c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618b20:{NFSU2_TR(0x618b20);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618b22:{NFSU2_TR(0x618b22);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618b26:{NFSU2_TR(0x618b26);
{u32 ea_=u32(r4(R+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b2d:{NFSU2_TR(0x618b2d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618b31:{NFSU2_TR(0x618b31);
{u32 ea_=u32(r4(R+16)+u32(668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b38:{NFSU2_TR(0x618b38);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618b3c:{NFSU2_TR(0x618b3c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618b3e:{NFSU2_TR(0x618b3e);
{u32 ea_=u32(r4(R+16)+u32(652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b45:{NFSU2_TR(0x618b45);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618b49:{NFSU2_TR(0x618b49);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618b4b:{NFSU2_TR(0x618b4b);
{u32 ea_=u32(r4(R+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b52:{NFSU2_TR(0x618b52);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618b56:{NFSU2_TR(0x618b56);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618b58:{NFSU2_TR(0x618b58);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618b5c:{NFSU2_TR(0x618b5c);
{u32 ea_=u32(r4(R+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b63:{NFSU2_TR(0x618b63);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618b67:{NFSU2_TR(0x618b67);
{u32 ea_=u32(r4(R+16)+u32(672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b6e:{NFSU2_TR(0x618b6e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618b72:{NFSU2_TR(0x618b72);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618b74:{NFSU2_TR(0x618b74);
{u32 ea_=u32(r4(R+16)+u32(656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b7b:{NFSU2_TR(0x618b7b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618b7f:{NFSU2_TR(0x618b7f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618b81:{NFSU2_TR(0x618b81);
{u32 ea_=u32(r4(R+16)+u32(640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b88:{NFSU2_TR(0x618b88);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618b8c:{NFSU2_TR(0x618b8c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618b8e:{NFSU2_TR(0x618b8e);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618b95:{NFSU2_TR(0x618b95);
{u32 ea_=u32(r4(R+16)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b9c:{NFSU2_TR(0x618b9c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ba0:{NFSU2_TR(0x618ba0);
{u32 ea_=u32(r4(R+16)+u32(676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ba7:{NFSU2_TR(0x618ba7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618bab:{NFSU2_TR(0x618bab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618bad:{NFSU2_TR(0x618bad);
{u32 ea_=u32(r4(R+16)+u32(660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618bb4:{NFSU2_TR(0x618bb4);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618bb8:{NFSU2_TR(0x618bb8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618bba:{NFSU2_TR(0x618bba);
{u32 ea_=u32(r4(R+16)+u32(644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618bc1:{NFSU2_TR(0x618bc1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618bc5:{NFSU2_TR(0x618bc5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618bc7:{NFSU2_TR(0x618bc7);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618bce:{NFSU2_TR(0x618bce);
{u32 ea_=u32(r4(R+16)+u32(664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618bd5:{NFSU2_TR(0x618bd5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618bd9:{NFSU2_TR(0x618bd9);
{u32 ea_=u32(r4(R+16)+u32(648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618be0:{NFSU2_TR(0x618be0);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618be4:{NFSU2_TR(0x618be4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618be6:{NFSU2_TR(0x618be6);
{u32 ea_=u32(r4(R+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618bed:{NFSU2_TR(0x618bed);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618bf1:{NFSU2_TR(0x618bf1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618bf3:{NFSU2_TR(0x618bf3);
{u32 ea_=u32(r4(R+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618bfa:{NFSU2_TR(0x618bfa);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618bfe:{NFSU2_TR(0x618bfe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618c00:{NFSU2_TR(0x618c00);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618c07:{NFSU2_TR(0x618c07);
{u32 ea_=u32(r4(R+16)+u32(668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618c0e:{NFSU2_TR(0x618c0e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618c12:{NFSU2_TR(0x618c12);
{u32 ea_=u32(r4(R+16)+u32(652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618c19:{NFSU2_TR(0x618c19);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618c1d:{NFSU2_TR(0x618c1d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618c1f:{NFSU2_TR(0x618c1f);
{u32 ea_=u32(r4(R+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618c26:{NFSU2_TR(0x618c26);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618c2a:{NFSU2_TR(0x618c2a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618c2c:{NFSU2_TR(0x618c2c);
{u32 ea_=u32(r4(R+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618c33:{NFSU2_TR(0x618c33);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618c37:{NFSU2_TR(0x618c37);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618c39:{NFSU2_TR(0x618c39);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618c40:{NFSU2_TR(0x618c40);
{u32 ea_=u32(r4(R+16)+u32(672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618c47:{NFSU2_TR(0x618c47);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618c4b:{NFSU2_TR(0x618c4b);
{u32 ea_=u32(r4(R+16)+u32(656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618c52:{NFSU2_TR(0x618c52);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618c56:{NFSU2_TR(0x618c56);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618c58:{NFSU2_TR(0x618c58);
{u32 ea_=u32(r4(R+16)+u32(640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618c5f:{NFSU2_TR(0x618c5f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618c63:{NFSU2_TR(0x618c63);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618c65:{NFSU2_TR(0x618c65);
{u32 ea_=u32(r4(R+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618c6c:{NFSU2_TR(0x618c6c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618c70:{NFSU2_TR(0x618c70);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618c72:{NFSU2_TR(0x618c72);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618c79:{NFSU2_TR(0x618c79);
{u32 ea_=u32(r4(R+16)+u32(676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618c80:{NFSU2_TR(0x618c80);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618c84:{NFSU2_TR(0x618c84);
{u32 ea_=u32(r4(R+16)+u32(660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618c8b:{NFSU2_TR(0x618c8b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618c8f:{NFSU2_TR(0x618c8f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618c91:{NFSU2_TR(0x618c91);
{u32 ea_=u32(r4(R+16)+u32(644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618c98:{NFSU2_TR(0x618c98);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618c9c:{NFSU2_TR(0x618c9c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618c9e:{NFSU2_TR(0x618c9e);
{u32 ea_=u32(r4(R+16)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ca5:{NFSU2_TR(0x618ca5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ca9:{NFSU2_TR(0x618ca9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618cab:{NFSU2_TR(0x618cab);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618cb2:{NFSU2_TR(0x618cb2);
{u32 ea_=u32(r4(R+16)+u32(664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618cb9:{NFSU2_TR(0x618cb9);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618cbd:{NFSU2_TR(0x618cbd);
{u32 ea_=u32(r4(R+16)+u32(648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618cc4:{NFSU2_TR(0x618cc4);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618cc8:{NFSU2_TR(0x618cc8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618cca:{NFSU2_TR(0x618cca);
{u32 ea_=u32(r4(R+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618cd1:{NFSU2_TR(0x618cd1);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618cd5:{NFSU2_TR(0x618cd5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618cd7:{NFSU2_TR(0x618cd7);
{u32 ea_=u32(r4(R+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618cde:{NFSU2_TR(0x618cde);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ce2:{NFSU2_TR(0x618ce2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618ce4:{NFSU2_TR(0x618ce4);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618ceb:{NFSU2_TR(0x618ceb);
{u32 ea_=u32(r4(R+16)+u32(668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618cf2:{NFSU2_TR(0x618cf2);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618cf6:{NFSU2_TR(0x618cf6);
{u32 ea_=u32(r4(R+16)+u32(652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618cfd:{NFSU2_TR(0x618cfd);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618d01:{NFSU2_TR(0x618d01);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618d03:{NFSU2_TR(0x618d03);
{u32 ea_=u32(r4(R+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618d0a:{NFSU2_TR(0x618d0a);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618d0e:{NFSU2_TR(0x618d0e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618d10:{NFSU2_TR(0x618d10);
{u32 ea_=u32(r4(R+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618d17:{NFSU2_TR(0x618d17);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618d1b:{NFSU2_TR(0x618d1b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618d1d:{NFSU2_TR(0x618d1d);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618d24:{NFSU2_TR(0x618d24);
{u32 ea_=u32(r4(R+16)+u32(672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618d2b:{NFSU2_TR(0x618d2b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618d2f:{NFSU2_TR(0x618d2f);
{u32 ea_=u32(r4(R+16)+u32(656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618d36:{NFSU2_TR(0x618d36);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618d3a:{NFSU2_TR(0x618d3a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618d3c:{NFSU2_TR(0x618d3c);
{u32 ea_=u32(r4(R+16)+u32(640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618d43:{NFSU2_TR(0x618d43);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618d47:{NFSU2_TR(0x618d47);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618d49:{NFSU2_TR(0x618d49);
{u32 ea_=u32(r4(R+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618d50:{NFSU2_TR(0x618d50);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618d54:{NFSU2_TR(0x618d54);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618d56:{NFSU2_TR(0x618d56);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618d5d:{NFSU2_TR(0x618d5d);
{u32 ea_=u32(r4(R+16)+u32(676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618d64:{NFSU2_TR(0x618d64);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618d68:{NFSU2_TR(0x618d68);
{u32 ea_=u32(r4(R+16)+u32(660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618d6f:{NFSU2_TR(0x618d6f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618d73:{NFSU2_TR(0x618d73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618d75:{NFSU2_TR(0x618d75);
{u32 ea_=u32(r4(R+16)+u32(644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618d7c:{NFSU2_TR(0x618d7c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618d80:{NFSU2_TR(0x618d80);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618d82:{NFSU2_TR(0x618d82);
{u32 ea_=u32(r4(R+16)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618d89:{NFSU2_TR(0x618d89);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618d8d:{NFSU2_TR(0x618d8d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618d8f:{NFSU2_TR(0x618d8f);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618d96:{NFSU2_TR(0x618d96);
{u32 ea_=u32(r4(R+16)+u32(664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618d9d:{NFSU2_TR(0x618d9d);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618da1:{NFSU2_TR(0x618da1);
{u32 ea_=u32(r4(R+16)+u32(648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618da8:{NFSU2_TR(0x618da8);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618dac:{NFSU2_TR(0x618dac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618dae:{NFSU2_TR(0x618dae);
{u32 ea_=u32(r4(R+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618db5:{NFSU2_TR(0x618db5);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618db9:{NFSU2_TR(0x618db9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618dbb:{NFSU2_TR(0x618dbb);
{u32 ea_=u32(r4(R+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618dc2:{NFSU2_TR(0x618dc2);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618dc6:{NFSU2_TR(0x618dc6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618dc8:{NFSU2_TR(0x618dc8);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618dcf:{NFSU2_TR(0x618dcf);
{u32 ea_=u32(r4(R+16)+u32(668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618dd6:{NFSU2_TR(0x618dd6);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618dda:{NFSU2_TR(0x618dda);
{u32 ea_=u32(r4(R+16)+u32(652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618de1:{NFSU2_TR(0x618de1);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618de5:{NFSU2_TR(0x618de5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618de7:{NFSU2_TR(0x618de7);
{u32 ea_=u32(r4(R+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618dee:{NFSU2_TR(0x618dee);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618df2:{NFSU2_TR(0x618df2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618df4:{NFSU2_TR(0x618df4);
{u32 ea_=u32(r4(R+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618dfb:{NFSU2_TR(0x618dfb);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618dff:{NFSU2_TR(0x618dff);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618e01:{NFSU2_TR(0x618e01);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618e08:{NFSU2_TR(0x618e08);
{u32 ea_=u32(r4(R+16)+u32(672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618e0f:{NFSU2_TR(0x618e0f);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618e13:{NFSU2_TR(0x618e13);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B618e17:{NFSU2_TR(0x618e17);
{u32 ea_=u32(r4(R+16)+u32(656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618e1e:{NFSU2_TR(0x618e1e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B618e1f:{NFSU2_TR(0x618e1f);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618e23:{NFSU2_TR(0x618e23);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B618e27:{NFSU2_TR(0x618e27);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B618e28:{NFSU2_TR(0x618e28);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618e2a:{NFSU2_TR(0x618e2a);
{u32 ea_=u32(r4(R+16)+u32(648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618e31:{NFSU2_TR(0x618e31);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618e35:{NFSU2_TR(0x618e35);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618e37:{NFSU2_TR(0x618e37);
{u32 ea_=u32(r4(R+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618e3e:{NFSU2_TR(0x618e3e);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618e42:{NFSU2_TR(0x618e42);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618e44:{NFSU2_TR(0x618e44);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618e4b:{NFSU2_TR(0x618e4b);
{u32 ea_=u32(r4(R+16)+u32(684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618e52:{NFSU2_TR(0x618e52);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618e56:{NFSU2_TR(0x618e56);
{u32 ea_=u32(r4(R+16)+u32(668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618e5d:{NFSU2_TR(0x618e5d);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618e61:{NFSU2_TR(0x618e61);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618e63:{NFSU2_TR(0x618e63);
{u32 ea_=u32(r4(R+16)+u32(652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618e6a:{NFSU2_TR(0x618e6a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618e6e:{NFSU2_TR(0x618e6e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618e70:{NFSU2_TR(0x618e70);
{u32 ea_=u32(r4(R+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618e77:{NFSU2_TR(0x618e77);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618e7b:{NFSU2_TR(0x618e7b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618e7d:{NFSU2_TR(0x618e7d);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618e84:{NFSU2_TR(0x618e84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x618e89ull));
TAIL_STATIC(0x4012b0u,401);
}
B618e89:L618e89:{c.instructions+=111;NFSU2_TR(0x618e89);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618e8d:{NFSU2_TR(0x618e8d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618e8f:{NFSU2_TR(0x618e8f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618e93:{NFSU2_TR(0x618e93);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618e96:{NFSU2_TR(0x618e96);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618e98:{NFSU2_TR(0x618e98);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618e9c:{NFSU2_TR(0x618e9c);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618e9f:{NFSU2_TR(0x618e9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618ea1:{NFSU2_TR(0x618ea1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ea5:{NFSU2_TR(0x618ea5);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ea8:{NFSU2_TR(0x618ea8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618eaa:{NFSU2_TR(0x618eaa);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618eb1:{NFSU2_TR(0x618eb1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618eb5:{NFSU2_TR(0x618eb5);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618eb8:{NFSU2_TR(0x618eb8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ebc:{NFSU2_TR(0x618ebc);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ebf:{NFSU2_TR(0x618ebf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618ec1:{NFSU2_TR(0x618ec1);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ec5:{NFSU2_TR(0x618ec5);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ec8:{NFSU2_TR(0x618ec8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618eca:{NFSU2_TR(0x618eca);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ece:{NFSU2_TR(0x618ece);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ed1:{NFSU2_TR(0x618ed1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618ed3:{NFSU2_TR(0x618ed3);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618eda:{NFSU2_TR(0x618eda);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ede:{NFSU2_TR(0x618ede);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ee1:{NFSU2_TR(0x618ee1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ee5:{NFSU2_TR(0x618ee5);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ee8:{NFSU2_TR(0x618ee8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618eea:{NFSU2_TR(0x618eea);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618eee:{NFSU2_TR(0x618eee);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ef1:{NFSU2_TR(0x618ef1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618ef3:{NFSU2_TR(0x618ef3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ef7:{NFSU2_TR(0x618ef7);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618efa:{NFSU2_TR(0x618efa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618efc:{NFSU2_TR(0x618efc);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618f03:{NFSU2_TR(0x618f03);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f07:{NFSU2_TR(0x618f07);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f0a:{NFSU2_TR(0x618f0a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f0e:{NFSU2_TR(0x618f0e);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f11:{NFSU2_TR(0x618f11);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f13:{NFSU2_TR(0x618f13);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f17:{NFSU2_TR(0x618f17);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f1a:{NFSU2_TR(0x618f1a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f1c:{NFSU2_TR(0x618f1c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f20:{NFSU2_TR(0x618f20);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f23:{NFSU2_TR(0x618f23);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f25:{NFSU2_TR(0x618f25);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618f2c:{NFSU2_TR(0x618f2c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f30:{NFSU2_TR(0x618f30);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f33:{NFSU2_TR(0x618f33);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f37:{NFSU2_TR(0x618f37);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f39:{NFSU2_TR(0x618f39);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f3b:{NFSU2_TR(0x618f3b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f3f:{NFSU2_TR(0x618f3f);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f42:{NFSU2_TR(0x618f42);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f44:{NFSU2_TR(0x618f44);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f48:{NFSU2_TR(0x618f48);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f4b:{NFSU2_TR(0x618f4b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f4d:{NFSU2_TR(0x618f4d);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618f54:{NFSU2_TR(0x618f54);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f58:{NFSU2_TR(0x618f58);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f5b:{NFSU2_TR(0x618f5b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f5f:{NFSU2_TR(0x618f5f);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f62:{NFSU2_TR(0x618f62);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f64:{NFSU2_TR(0x618f64);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f68:{NFSU2_TR(0x618f68);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f6b:{NFSU2_TR(0x618f6b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f6d:{NFSU2_TR(0x618f6d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f71:{NFSU2_TR(0x618f71);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f74:{NFSU2_TR(0x618f74);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f76:{NFSU2_TR(0x618f76);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618f7d:{NFSU2_TR(0x618f7d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f81:{NFSU2_TR(0x618f81);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f84:{NFSU2_TR(0x618f84);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f88:{NFSU2_TR(0x618f88);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f8b:{NFSU2_TR(0x618f8b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f8d:{NFSU2_TR(0x618f8d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f91:{NFSU2_TR(0x618f91);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f94:{NFSU2_TR(0x618f94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f96:{NFSU2_TR(0x618f96);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f9a:{NFSU2_TR(0x618f9a);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f9d:{NFSU2_TR(0x618f9d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f9f:{NFSU2_TR(0x618f9f);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618fa6:{NFSU2_TR(0x618fa6);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618faa:{NFSU2_TR(0x618faa);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618fad:{NFSU2_TR(0x618fad);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618fb1:{NFSU2_TR(0x618fb1);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618fb4:{NFSU2_TR(0x618fb4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618fb6:{NFSU2_TR(0x618fb6);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618fba:{NFSU2_TR(0x618fba);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618fbd:{NFSU2_TR(0x618fbd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618fbf:{NFSU2_TR(0x618fbf);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618fc3:{NFSU2_TR(0x618fc3);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618fc6:{NFSU2_TR(0x618fc6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618fc8:{NFSU2_TR(0x618fc8);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618fcf:{NFSU2_TR(0x618fcf);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618fd3:{NFSU2_TR(0x618fd3);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618fd6:{NFSU2_TR(0x618fd6);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618fda:{NFSU2_TR(0x618fda);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618fdc:{NFSU2_TR(0x618fdc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618fde:{NFSU2_TR(0x618fde);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618fe2:{NFSU2_TR(0x618fe2);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618fe5:{NFSU2_TR(0x618fe5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618fe7:{NFSU2_TR(0x618fe7);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618feb:{NFSU2_TR(0x618feb);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618fee:{NFSU2_TR(0x618fee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618ff0:{NFSU2_TR(0x618ff0);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618ff7:{NFSU2_TR(0x618ff7);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ffb:{NFSU2_TR(0x618ffb);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ffe:{NFSU2_TR(0x618ffe);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x619002u,619);
}
XIT:NFSU2_TR_EXIT(0x618,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
