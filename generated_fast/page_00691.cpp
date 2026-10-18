#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_692(u8* __restrict R,Cpu& c);
u32 body_693(u8* __restrict R,Cpu& c);
u32 body_6d4(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x691,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x691,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_691(u8* __restrict R,Cpu& c);
u32 page_691(Cpu& c){return body_691(c.regs.data(),c);}
__attribute__((noinline)) u32 body_691(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x691001:goto L691001;
case 0x691008:c.instructions+=23;goto B691008;
case 0x69100b:c.instructions+=22;goto B69100b;
case 0x69100f:c.instructions+=21;goto B69100f;
case 0x691012:c.instructions+=20;goto B691012;
case 0x691016:c.instructions+=19;goto B691016;
case 0x691019:c.instructions+=18;goto B691019;
case 0x69101c:c.instructions+=17;goto B69101c;
case 0x69101f:c.instructions+=16;goto B69101f;
case 0x691023:c.instructions+=15;goto B691023;
case 0x691027:c.instructions+=14;goto B691027;
case 0x69102b:c.instructions+=13;goto B69102b;
case 0x69102f:c.instructions+=12;goto B69102f;
case 0x691033:c.instructions+=11;goto B691033;
case 0x691037:c.instructions+=10;goto B691037;
case 0x69103b:c.instructions+=9;goto B69103b;
case 0x69103e:c.instructions+=8;goto B69103e;
case 0x691042:c.instructions+=7;goto B691042;
case 0x691045:c.instructions+=6;goto B691045;
case 0x691048:c.instructions+=5;goto B691048;
case 0x69104b:c.instructions+=4;goto B69104b;
case 0x69104f:c.instructions+=3;goto B69104f;
case 0x691053:c.instructions+=2;goto B691053;
case 0x691057:c.instructions+=1;goto B691057;
case 0x691059:goto L691059;
case 0x691060:c.instructions+=16;goto B691060;
case 0x691063:c.instructions+=15;goto B691063;
case 0x691067:c.instructions+=14;goto B691067;
case 0x69106a:c.instructions+=13;goto B69106a;
case 0x69106d:c.instructions+=12;goto B69106d;
case 0x691070:c.instructions+=11;goto B691070;
case 0x691073:c.instructions+=10;goto B691073;
case 0x691076:c.instructions+=9;goto B691076;
case 0x691079:c.instructions+=8;goto B691079;
case 0x69107d:c.instructions+=7;goto B69107d;
case 0x691081:c.instructions+=6;goto B691081;
case 0x691085:c.instructions+=5;goto B691085;
case 0x691089:c.instructions+=4;goto B691089;
case 0x69108d:c.instructions+=3;goto B69108d;
case 0x691091:c.instructions+=2;goto B691091;
case 0x691095:c.instructions+=1;goto B691095;
case 0x691097:goto L691097;
case 0x69109e:c.instructions+=12;goto B69109e;
case 0x6910a1:c.instructions+=11;goto B6910a1;
case 0x6910a4:c.instructions+=10;goto B6910a4;
case 0x6910a7:c.instructions+=9;goto B6910a7;
case 0x6910aa:c.instructions+=8;goto B6910aa;
case 0x6910ad:c.instructions+=7;goto B6910ad;
case 0x6910b1:c.instructions+=6;goto B6910b1;
case 0x6910b5:c.instructions+=5;goto B6910b5;
case 0x6910b9:c.instructions+=4;goto B6910b9;
case 0x6910bd:c.instructions+=3;goto B6910bd;
case 0x6910c1:c.instructions+=2;goto B6910c1;
case 0x6910c5:c.instructions+=1;goto B6910c5;
case 0x6910c9:goto L6910c9;
case 0x6910cc:c.instructions+=3;goto B6910cc;
case 0x6910cf:c.instructions+=2;goto B6910cf;
case 0x6910d1:c.instructions+=1;goto B6910d1;
case 0x6910d7:goto L6910d7;
case 0x6910da:c.instructions+=55;goto B6910da;
case 0x6910de:c.instructions+=54;goto B6910de;
case 0x6910e1:c.instructions+=53;goto B6910e1;
case 0x6910e4:c.instructions+=52;goto B6910e4;
case 0x6910e8:c.instructions+=51;goto B6910e8;
case 0x6910eb:c.instructions+=50;goto B6910eb;
case 0x6910ee:c.instructions+=49;goto B6910ee;
case 0x6910f2:c.instructions+=48;goto B6910f2;
case 0x6910f5:c.instructions+=47;goto B6910f5;
case 0x6910f8:c.instructions+=46;goto B6910f8;
case 0x6910fb:c.instructions+=45;goto B6910fb;
case 0x6910ff:c.instructions+=44;goto B6910ff;
case 0x691102:c.instructions+=43;goto B691102;
case 0x691105:c.instructions+=42;goto B691105;
case 0x691109:c.instructions+=41;goto B691109;
case 0x69110c:c.instructions+=40;goto B69110c;
case 0x691110:c.instructions+=39;goto B691110;
case 0x691114:c.instructions+=38;goto B691114;
case 0x691117:c.instructions+=37;goto B691117;
case 0x69111b:c.instructions+=36;goto B69111b;
case 0x69111e:c.instructions+=35;goto B69111e;
case 0x691121:c.instructions+=34;goto B691121;
case 0x691124:c.instructions+=33;goto B691124;
case 0x691127:c.instructions+=32;goto B691127;
case 0x69112c:c.instructions+=31;goto B69112c;
case 0x691130:c.instructions+=30;goto B691130;
case 0x691134:c.instructions+=29;goto B691134;
case 0x691137:c.instructions+=28;goto B691137;
case 0x69113a:c.instructions+=27;goto B69113a;
case 0x691142:c.instructions+=26;goto B691142;
case 0x69114a:c.instructions+=25;goto B69114a;
case 0x69114d:c.instructions+=24;goto B69114d;
case 0x691151:c.instructions+=23;goto B691151;
case 0x691156:c.instructions+=22;goto B691156;
case 0x69115a:c.instructions+=21;goto B69115a;
case 0x69115d:c.instructions+=20;goto B69115d;
case 0x691161:c.instructions+=19;goto B691161;
case 0x691165:c.instructions+=18;goto B691165;
case 0x691168:c.instructions+=17;goto B691168;
case 0x69116b:c.instructions+=16;goto B69116b;
case 0x69116e:c.instructions+=15;goto B69116e;
case 0x691171:c.instructions+=14;goto B691171;
case 0x691174:c.instructions+=13;goto B691174;
case 0x691179:c.instructions+=12;goto B691179;
case 0x69117c:c.instructions+=11;goto B69117c;
case 0x691183:c.instructions+=10;goto B691183;
case 0x691188:c.instructions+=9;goto B691188;
case 0x69118b:c.instructions+=8;goto B69118b;
case 0x691190:c.instructions+=7;goto B691190;
case 0x691193:c.instructions+=6;goto B691193;
case 0x691196:c.instructions+=5;goto B691196;
case 0x69119b:c.instructions+=4;goto B69119b;
case 0x6911a0:c.instructions+=3;goto B6911a0;
case 0x6911a5:c.instructions+=2;goto B6911a5;
case 0x6911a7:c.instructions+=1;goto B6911a7;
case 0x6911ad:goto L6911ad;
case 0x6911b1:c.instructions+=128;goto B6911b1;
case 0x6911b5:c.instructions+=127;goto B6911b5;
case 0x6911b8:c.instructions+=126;goto B6911b8;
case 0x6911bc:c.instructions+=125;goto B6911bc;
case 0x6911c0:c.instructions+=124;goto B6911c0;
case 0x6911c4:c.instructions+=123;goto B6911c4;
case 0x6911c8:c.instructions+=122;goto B6911c8;
case 0x6911cc:c.instructions+=121;goto B6911cc;
case 0x6911cf:c.instructions+=120;goto B6911cf;
case 0x6911d3:c.instructions+=119;goto B6911d3;
case 0x6911d8:c.instructions+=118;goto B6911d8;
case 0x6911db:c.instructions+=117;goto B6911db;
case 0x6911e0:c.instructions+=116;goto B6911e0;
case 0x6911e3:c.instructions+=115;goto B6911e3;
case 0x6911e8:c.instructions+=114;goto B6911e8;
case 0x6911eb:c.instructions+=113;goto B6911eb;
case 0x6911ee:c.instructions+=112;goto B6911ee;
case 0x6911f2:c.instructions+=111;goto B6911f2;
case 0x6911f5:c.instructions+=110;goto B6911f5;
case 0x6911fb:c.instructions+=109;goto B6911fb;
case 0x691200:c.instructions+=108;goto B691200;
case 0x691204:c.instructions+=107;goto B691204;
case 0x691207:c.instructions+=106;goto B691207;
case 0x69120d:c.instructions+=105;goto B69120d;
case 0x691211:c.instructions+=104;goto B691211;
case 0x691215:c.instructions+=103;goto B691215;
case 0x691219:c.instructions+=102;goto B691219;
case 0x69121f:c.instructions+=101;goto B69121f;
case 0x691223:c.instructions+=100;goto B691223;
case 0x691227:c.instructions+=99;goto B691227;
case 0x69122b:c.instructions+=98;goto B69122b;
case 0x691231:c.instructions+=97;goto B691231;
case 0x691235:c.instructions+=96;goto B691235;
case 0x691239:c.instructions+=95;goto B691239;
case 0x69123d:c.instructions+=94;goto B69123d;
case 0x691241:c.instructions+=93;goto B691241;
case 0x691244:c.instructions+=92;goto B691244;
case 0x691249:c.instructions+=91;goto B691249;
case 0x69124d:c.instructions+=90;goto B69124d;
case 0x691250:c.instructions+=89;goto B691250;
case 0x691255:c.instructions+=88;goto B691255;
case 0x691258:c.instructions+=87;goto B691258;
case 0x69125d:c.instructions+=86;goto B69125d;
case 0x691260:c.instructions+=85;goto B691260;
case 0x691263:c.instructions+=84;goto B691263;
case 0x691267:c.instructions+=83;goto B691267;
case 0x69126a:c.instructions+=82;goto B69126a;
case 0x691270:c.instructions+=81;goto B691270;
case 0x691275:c.instructions+=80;goto B691275;
case 0x691279:c.instructions+=79;goto B691279;
case 0x69127c:c.instructions+=78;goto B69127c;
case 0x691282:c.instructions+=77;goto B691282;
case 0x691286:c.instructions+=76;goto B691286;
case 0x69128a:c.instructions+=75;goto B69128a;
case 0x69128e:c.instructions+=74;goto B69128e;
case 0x691294:c.instructions+=73;goto B691294;
case 0x691298:c.instructions+=72;goto B691298;
case 0x69129c:c.instructions+=71;goto B69129c;
case 0x6912a0:c.instructions+=70;goto B6912a0;
case 0x6912a6:c.instructions+=69;goto B6912a6;
case 0x6912aa:c.instructions+=68;goto B6912aa;
case 0x6912ae:c.instructions+=67;goto B6912ae;
case 0x6912b2:c.instructions+=66;goto B6912b2;
case 0x6912b6:c.instructions+=65;goto B6912b6;
case 0x6912ba:c.instructions+=64;goto B6912ba;
case 0x6912bf:c.instructions+=63;goto B6912bf;
case 0x6912c3:c.instructions+=62;goto B6912c3;
case 0x6912c6:c.instructions+=61;goto B6912c6;
case 0x6912cb:c.instructions+=60;goto B6912cb;
case 0x6912ce:c.instructions+=59;goto B6912ce;
case 0x6912d3:c.instructions+=58;goto B6912d3;
case 0x6912d6:c.instructions+=57;goto B6912d6;
case 0x6912d9:c.instructions+=56;goto B6912d9;
case 0x6912dd:c.instructions+=55;goto B6912dd;
case 0x6912e0:c.instructions+=54;goto B6912e0;
case 0x6912e6:c.instructions+=53;goto B6912e6;
case 0x6912eb:c.instructions+=52;goto B6912eb;
case 0x6912ef:c.instructions+=51;goto B6912ef;
case 0x6912f2:c.instructions+=50;goto B6912f2;
case 0x6912f8:c.instructions+=49;goto B6912f8;
case 0x6912fc:c.instructions+=48;goto B6912fc;
case 0x691300:c.instructions+=47;goto B691300;
case 0x691304:c.instructions+=46;goto B691304;
case 0x69130a:c.instructions+=45;goto B69130a;
case 0x69130e:c.instructions+=44;goto B69130e;
case 0x691312:c.instructions+=43;goto B691312;
case 0x691316:c.instructions+=42;goto B691316;
case 0x69131c:c.instructions+=41;goto B69131c;
case 0x691320:c.instructions+=40;goto B691320;
case 0x691324:c.instructions+=39;goto B691324;
case 0x691328:c.instructions+=38;goto B691328;
case 0x69132c:c.instructions+=37;goto B69132c;
case 0x691330:c.instructions+=36;goto B691330;
case 0x691335:c.instructions+=35;goto B691335;
case 0x691339:c.instructions+=34;goto B691339;
case 0x69133c:c.instructions+=33;goto B69133c;
case 0x691341:c.instructions+=32;goto B691341;
case 0x691344:c.instructions+=31;goto B691344;
case 0x691349:c.instructions+=30;goto B691349;
case 0x69134c:c.instructions+=29;goto B69134c;
case 0x69134f:c.instructions+=28;goto B69134f;
case 0x691353:c.instructions+=27;goto B691353;
case 0x691356:c.instructions+=26;goto B691356;
case 0x69135c:c.instructions+=25;goto B69135c;
case 0x691361:c.instructions+=24;goto B691361;
case 0x691365:c.instructions+=23;goto B691365;
case 0x691368:c.instructions+=22;goto B691368;
case 0x69136e:c.instructions+=21;goto B69136e;
case 0x691372:c.instructions+=20;goto B691372;
case 0x691376:c.instructions+=19;goto B691376;
case 0x69137a:c.instructions+=18;goto B69137a;
case 0x691380:c.instructions+=17;goto B691380;
case 0x691384:c.instructions+=16;goto B691384;
case 0x691388:c.instructions+=15;goto B691388;
case 0x69138c:c.instructions+=14;goto B69138c;
case 0x691392:c.instructions+=13;goto B691392;
case 0x691396:c.instructions+=12;goto B691396;
case 0x69139a:c.instructions+=11;goto B69139a;
case 0x69139e:c.instructions+=10;goto B69139e;
case 0x6913a2:c.instructions+=9;goto B6913a2;
case 0x6913a6:c.instructions+=8;goto B6913a6;
case 0x6913aa:c.instructions+=7;goto B6913aa;
case 0x6913ad:c.instructions+=6;goto B6913ad;
case 0x6913b1:c.instructions+=5;goto B6913b1;
case 0x6913b5:c.instructions+=4;goto B6913b5;
case 0x6913b9:c.instructions+=3;goto B6913b9;
case 0x6913bd:c.instructions+=2;goto B6913bd;
case 0x6913c1:c.instructions+=1;goto B6913c1;
case 0x6913c6:goto L6913c6;
case 0x6913c9:c.instructions+=111;goto B6913c9;
case 0x6913cd:c.instructions+=110;goto B6913cd;
case 0x6913d2:c.instructions+=109;goto B6913d2;
case 0x6913d5:c.instructions+=108;goto B6913d5;
case 0x6913da:c.instructions+=107;goto B6913da;
case 0x6913dd:c.instructions+=106;goto B6913dd;
case 0x6913e2:c.instructions+=105;goto B6913e2;
case 0x6913e5:c.instructions+=104;goto B6913e5;
case 0x6913e8:c.instructions+=103;goto B6913e8;
case 0x6913ec:c.instructions+=102;goto B6913ec;
case 0x6913ef:c.instructions+=101;goto B6913ef;
case 0x6913f5:c.instructions+=100;goto B6913f5;
case 0x6913fa:c.instructions+=99;goto B6913fa;
case 0x6913fe:c.instructions+=98;goto B6913fe;
case 0x691401:c.instructions+=97;goto B691401;
case 0x691407:c.instructions+=96;goto B691407;
case 0x69140b:c.instructions+=95;goto B69140b;
case 0x69140f:c.instructions+=94;goto B69140f;
case 0x691413:c.instructions+=93;goto B691413;
case 0x691419:c.instructions+=92;goto B691419;
case 0x69141d:c.instructions+=91;goto B69141d;
case 0x691421:c.instructions+=90;goto B691421;
case 0x691425:c.instructions+=89;goto B691425;
case 0x69142b:c.instructions+=88;goto B69142b;
case 0x69142f:c.instructions+=87;goto B69142f;
case 0x691433:c.instructions+=86;goto B691433;
case 0x691437:c.instructions+=85;goto B691437;
case 0x69143b:c.instructions+=84;goto B69143b;
case 0x69143e:c.instructions+=83;goto B69143e;
case 0x691443:c.instructions+=82;goto B691443;
case 0x691447:c.instructions+=81;goto B691447;
case 0x69144a:c.instructions+=80;goto B69144a;
case 0x69144f:c.instructions+=79;goto B69144f;
case 0x691452:c.instructions+=78;goto B691452;
case 0x691457:c.instructions+=77;goto B691457;
case 0x69145a:c.instructions+=76;goto B69145a;
case 0x69145d:c.instructions+=75;goto B69145d;
case 0x691461:c.instructions+=74;goto B691461;
case 0x691464:c.instructions+=73;goto B691464;
case 0x69146a:c.instructions+=72;goto B69146a;
case 0x69146f:c.instructions+=71;goto B69146f;
case 0x691473:c.instructions+=70;goto B691473;
case 0x691476:c.instructions+=69;goto B691476;
case 0x69147c:c.instructions+=68;goto B69147c;
case 0x691480:c.instructions+=67;goto B691480;
case 0x691484:c.instructions+=66;goto B691484;
case 0x691488:c.instructions+=65;goto B691488;
case 0x69148e:c.instructions+=64;goto B69148e;
case 0x691492:c.instructions+=63;goto B691492;
case 0x691496:c.instructions+=62;goto B691496;
case 0x69149a:c.instructions+=61;goto B69149a;
case 0x6914a0:c.instructions+=60;goto B6914a0;
case 0x6914a4:c.instructions+=59;goto B6914a4;
case 0x6914a8:c.instructions+=58;goto B6914a8;
case 0x6914ac:c.instructions+=57;goto B6914ac;
case 0x6914b0:c.instructions+=56;goto B6914b0;
case 0x6914b4:c.instructions+=55;goto B6914b4;
case 0x6914b9:c.instructions+=54;goto B6914b9;
case 0x6914bd:c.instructions+=53;goto B6914bd;
case 0x6914c0:c.instructions+=52;goto B6914c0;
case 0x6914c5:c.instructions+=51;goto B6914c5;
case 0x6914c8:c.instructions+=50;goto B6914c8;
case 0x6914cd:c.instructions+=49;goto B6914cd;
case 0x6914d0:c.instructions+=48;goto B6914d0;
case 0x6914d3:c.instructions+=47;goto B6914d3;
case 0x6914d7:c.instructions+=46;goto B6914d7;
case 0x6914da:c.instructions+=45;goto B6914da;
case 0x6914e0:c.instructions+=44;goto B6914e0;
case 0x6914e5:c.instructions+=43;goto B6914e5;
case 0x6914e9:c.instructions+=42;goto B6914e9;
case 0x6914ec:c.instructions+=41;goto B6914ec;
case 0x6914f2:c.instructions+=40;goto B6914f2;
case 0x6914f6:c.instructions+=39;goto B6914f6;
case 0x6914fa:c.instructions+=38;goto B6914fa;
case 0x6914fe:c.instructions+=37;goto B6914fe;
case 0x691504:c.instructions+=36;goto B691504;
case 0x691508:c.instructions+=35;goto B691508;
case 0x69150c:c.instructions+=34;goto B69150c;
case 0x691510:c.instructions+=33;goto B691510;
case 0x691516:c.instructions+=32;goto B691516;
case 0x69151a:c.instructions+=31;goto B69151a;
case 0x69151e:c.instructions+=30;goto B69151e;
case 0x691522:c.instructions+=29;goto B691522;
case 0x691526:c.instructions+=28;goto B691526;
case 0x69152a:c.instructions+=27;goto B69152a;
case 0x69152f:c.instructions+=26;goto B69152f;
case 0x691533:c.instructions+=25;goto B691533;
case 0x691536:c.instructions+=24;goto B691536;
case 0x69153b:c.instructions+=23;goto B69153b;
case 0x69153e:c.instructions+=22;goto B69153e;
case 0x691543:c.instructions+=21;goto B691543;
case 0x691546:c.instructions+=20;goto B691546;
case 0x691549:c.instructions+=19;goto B691549;
case 0x69154d:c.instructions+=18;goto B69154d;
case 0x691550:c.instructions+=17;goto B691550;
case 0x691556:c.instructions+=16;goto B691556;
case 0x69155b:c.instructions+=15;goto B69155b;
case 0x69155f:c.instructions+=14;goto B69155f;
case 0x691562:c.instructions+=13;goto B691562;
case 0x691568:c.instructions+=12;goto B691568;
case 0x69156c:c.instructions+=11;goto B69156c;
case 0x691570:c.instructions+=10;goto B691570;
case 0x691574:c.instructions+=9;goto B691574;
case 0x69157a:c.instructions+=8;goto B69157a;
case 0x69157e:c.instructions+=7;goto B69157e;
case 0x691582:c.instructions+=6;goto B691582;
case 0x691586:c.instructions+=5;goto B691586;
case 0x69158c:c.instructions+=4;goto B69158c;
case 0x691590:c.instructions+=3;goto B691590;
case 0x691594:c.instructions+=2;goto B691594;
case 0x691598:c.instructions+=1;goto B691598;
case 0x69159c:goto L69159c;
case 0x69159f:c.instructions+=2;goto B69159f;
case 0x6915a1:c.instructions+=1;goto B6915a1;
case 0x6915a3:goto L6915a3;
case 0x6915a7:c.instructions+=7;goto B6915a7;
case 0x6915ab:c.instructions+=6;goto B6915ab;
case 0x6915ae:c.instructions+=5;goto B6915ae;
case 0x6915b2:c.instructions+=4;goto B6915b2;
case 0x6915b6:c.instructions+=3;goto B6915b6;
case 0x6915ba:c.instructions+=2;goto B6915ba;
case 0x6915be:c.instructions+=1;goto B6915be;
case 0x6915c2:goto L6915c2;
case 0x6915c4:c.instructions+=3;goto B6915c4;
case 0x6915c5:c.instructions+=2;goto B6915c5;
case 0x6915c7:c.instructions+=1;goto B6915c7;
case 0x6915ca:goto L6915ca;
case 0x6915cd:c.instructions+=11;goto B6915cd;
case 0x6915d1:c.instructions+=10;goto B6915d1;
case 0x6915d5:c.instructions+=9;goto B6915d5;
case 0x6915dc:c.instructions+=8;goto B6915dc;
case 0x6915df:c.instructions+=7;goto B6915df;
case 0x6915e3:c.instructions+=6;goto B6915e3;
case 0x6915e6:c.instructions+=5;goto B6915e6;
case 0x6915e9:c.instructions+=4;goto B6915e9;
case 0x6915ee:c.instructions+=3;goto B6915ee;
case 0x6915f3:c.instructions+=2;goto B6915f3;
case 0x6915f8:c.instructions+=1;goto B6915f8;
case 0x6915fd:goto L6915fd;
case 0x691602:c.instructions+=3;goto B691602;
case 0x691607:c.instructions+=2;goto B691607;
case 0x69160a:c.instructions+=1;goto B69160a;
case 0x69160f:goto L69160f;
case 0x691614:c.instructions+=2;goto B691614;
case 0x691619:c.instructions+=1;goto B691619;
case 0x69161e:goto L69161e;
case 0x691623:c.instructions+=92;goto B691623;
case 0x691628:c.instructions+=91;goto B691628;
case 0x69162f:c.instructions+=90;goto B69162f;
case 0x691632:c.instructions+=89;goto B691632;
case 0x691635:c.instructions+=88;goto B691635;
case 0x691638:c.instructions+=87;goto B691638;
case 0x69163b:c.instructions+=86;goto B69163b;
case 0x69163e:c.instructions+=85;goto B69163e;
case 0x691641:c.instructions+=84;goto B691641;
case 0x691644:c.instructions+=83;goto B691644;
case 0x691647:c.instructions+=82;goto B691647;
case 0x69164b:c.instructions+=81;goto B69164b;
case 0x69164e:c.instructions+=80;goto B69164e;
case 0x691651:c.instructions+=79;goto B691651;
case 0x691654:c.instructions+=78;goto B691654;
case 0x691657:c.instructions+=77;goto B691657;
case 0x69165b:c.instructions+=76;goto B69165b;
case 0x69165f:c.instructions+=75;goto B69165f;
case 0x691663:c.instructions+=74;goto B691663;
case 0x691667:c.instructions+=73;goto B691667;
case 0x69166a:c.instructions+=72;goto B69166a;
case 0x69166d:c.instructions+=71;goto B69166d;
case 0x691670:c.instructions+=70;goto B691670;
case 0x691674:c.instructions+=69;goto B691674;
case 0x691678:c.instructions+=68;goto B691678;
case 0x69167c:c.instructions+=67;goto B69167c;
case 0x691680:c.instructions+=66;goto B691680;
case 0x691684:c.instructions+=65;goto B691684;
case 0x691688:c.instructions+=64;goto B691688;
case 0x69168c:c.instructions+=63;goto B69168c;
case 0x691690:c.instructions+=62;goto B691690;
case 0x691693:c.instructions+=61;goto B691693;
case 0x691697:c.instructions+=60;goto B691697;
case 0x69169a:c.instructions+=59;goto B69169a;
case 0x69169d:c.instructions+=58;goto B69169d;
case 0x6916a1:c.instructions+=57;goto B6916a1;
case 0x6916a6:c.instructions+=56;goto B6916a6;
case 0x6916a9:c.instructions+=55;goto B6916a9;
case 0x6916ac:c.instructions+=54;goto B6916ac;
case 0x6916b0:c.instructions+=53;goto B6916b0;
case 0x6916b3:c.instructions+=52;goto B6916b3;
case 0x6916b6:c.instructions+=51;goto B6916b6;
case 0x6916ba:c.instructions+=50;goto B6916ba;
case 0x6916bd:c.instructions+=49;goto B6916bd;
case 0x6916c0:c.instructions+=48;goto B6916c0;
case 0x6916c3:c.instructions+=47;goto B6916c3;
case 0x6916c7:c.instructions+=46;goto B6916c7;
case 0x6916ca:c.instructions+=45;goto B6916ca;
case 0x6916cd:c.instructions+=44;goto B6916cd;
case 0x6916d1:c.instructions+=43;goto B6916d1;
case 0x6916d4:c.instructions+=42;goto B6916d4;
case 0x6916d8:c.instructions+=41;goto B6916d8;
case 0x6916dc:c.instructions+=40;goto B6916dc;
case 0x6916df:c.instructions+=39;goto B6916df;
case 0x6916e3:c.instructions+=38;goto B6916e3;
case 0x6916e6:c.instructions+=37;goto B6916e6;
case 0x6916e9:c.instructions+=36;goto B6916e9;
case 0x6916ec:c.instructions+=35;goto B6916ec;
case 0x6916ef:c.instructions+=34;goto B6916ef;
case 0x6916f3:c.instructions+=33;goto B6916f3;
case 0x6916f7:c.instructions+=32;goto B6916f7;
case 0x6916fb:c.instructions+=31;goto B6916fb;
case 0x6916fe:c.instructions+=30;goto B6916fe;
case 0x691701:c.instructions+=29;goto B691701;
case 0x691709:c.instructions+=28;goto B691709;
case 0x691711:c.instructions+=27;goto B691711;
case 0x691714:c.instructions+=26;goto B691714;
case 0x691718:c.instructions+=25;goto B691718;
case 0x69171c:c.instructions+=24;goto B69171c;
case 0x691720:c.instructions+=23;goto B691720;
case 0x691723:c.instructions+=22;goto B691723;
case 0x691727:c.instructions+=21;goto B691727;
case 0x69172b:c.instructions+=20;goto B69172b;
case 0x69172e:c.instructions+=19;goto B69172e;
case 0x691731:c.instructions+=18;goto B691731;
case 0x691734:c.instructions+=17;goto B691734;
case 0x691737:c.instructions+=16;goto B691737;
case 0x69173a:c.instructions+=15;goto B69173a;
case 0x69173e:c.instructions+=14;goto B69173e;
case 0x691741:c.instructions+=13;goto B691741;
case 0x691748:c.instructions+=12;goto B691748;
case 0x69174c:c.instructions+=11;goto B69174c;
case 0x69174f:c.instructions+=10;goto B69174f;
case 0x691753:c.instructions+=9;goto B691753;
case 0x691756:c.instructions+=8;goto B691756;
case 0x691759:c.instructions+=7;goto B691759;
case 0x69175c:c.instructions+=6;goto B69175c;
case 0x691760:c.instructions+=5;goto B691760;
case 0x691764:c.instructions+=4;goto B691764;
case 0x691767:c.instructions+=3;goto B691767;
case 0x69176a:c.instructions+=2;goto B69176a;
case 0x69176c:c.instructions+=1;goto B69176c;
case 0x69176f:goto L69176f;
case 0x691773:c.instructions+=17;goto B691773;
case 0x691778:c.instructions+=16;goto B691778;
case 0x69177b:c.instructions+=15;goto B69177b;
case 0x69177f:c.instructions+=14;goto B69177f;
case 0x691786:c.instructions+=13;goto B691786;
case 0x69178a:c.instructions+=12;goto B69178a;
case 0x69178d:c.instructions+=11;goto B69178d;
case 0x691791:c.instructions+=10;goto B691791;
case 0x691795:c.instructions+=9;goto B691795;
case 0x691798:c.instructions+=8;goto B691798;
case 0x69179c:c.instructions+=7;goto B69179c;
case 0x6917a0:c.instructions+=6;goto B6917a0;
case 0x6917a2:c.instructions+=5;goto B6917a2;
case 0x6917a6:c.instructions+=4;goto B6917a6;
case 0x6917aa:c.instructions+=3;goto B6917aa;
case 0x6917ae:c.instructions+=2;goto B6917ae;
case 0x6917b2:c.instructions+=1;goto B6917b2;
case 0x6917b8:goto L6917b8;
case 0x6917bb:c.instructions+=55;goto B6917bb;
case 0x6917bf:c.instructions+=54;goto B6917bf;
case 0x6917c2:c.instructions+=53;goto B6917c2;
case 0x6917c5:c.instructions+=52;goto B6917c5;
case 0x6917c9:c.instructions+=51;goto B6917c9;
case 0x6917cc:c.instructions+=50;goto B6917cc;
case 0x6917cf:c.instructions+=49;goto B6917cf;
case 0x6917d3:c.instructions+=48;goto B6917d3;
case 0x6917d6:c.instructions+=47;goto B6917d6;
case 0x6917d9:c.instructions+=46;goto B6917d9;
case 0x6917dc:c.instructions+=45;goto B6917dc;
case 0x6917e0:c.instructions+=44;goto B6917e0;
case 0x6917e3:c.instructions+=43;goto B6917e3;
case 0x6917e6:c.instructions+=42;goto B6917e6;
case 0x6917ea:c.instructions+=41;goto B6917ea;
case 0x6917ed:c.instructions+=40;goto B6917ed;
case 0x6917f1:c.instructions+=39;goto B6917f1;
case 0x6917f5:c.instructions+=38;goto B6917f5;
case 0x6917f8:c.instructions+=37;goto B6917f8;
case 0x6917fc:c.instructions+=36;goto B6917fc;
case 0x6917ff:c.instructions+=35;goto B6917ff;
case 0x691802:c.instructions+=34;goto B691802;
case 0x691805:c.instructions+=33;goto B691805;
case 0x691808:c.instructions+=32;goto B691808;
case 0x69180d:c.instructions+=31;goto B69180d;
case 0x691811:c.instructions+=30;goto B691811;
case 0x691815:c.instructions+=29;goto B691815;
case 0x691818:c.instructions+=28;goto B691818;
case 0x69181b:c.instructions+=27;goto B69181b;
case 0x691823:c.instructions+=26;goto B691823;
case 0x69182b:c.instructions+=25;goto B69182b;
case 0x69182e:c.instructions+=24;goto B69182e;
case 0x691832:c.instructions+=23;goto B691832;
case 0x691837:c.instructions+=22;goto B691837;
case 0x69183b:c.instructions+=21;goto B69183b;
case 0x69183e:c.instructions+=20;goto B69183e;
case 0x691842:c.instructions+=19;goto B691842;
case 0x691846:c.instructions+=18;goto B691846;
case 0x691849:c.instructions+=17;goto B691849;
case 0x69184c:c.instructions+=16;goto B69184c;
case 0x69184f:c.instructions+=15;goto B69184f;
case 0x691852:c.instructions+=14;goto B691852;
case 0x691855:c.instructions+=13;goto B691855;
case 0x69185a:c.instructions+=12;goto B69185a;
case 0x69185d:c.instructions+=11;goto B69185d;
case 0x691864:c.instructions+=10;goto B691864;
case 0x691869:c.instructions+=9;goto B691869;
case 0x69186c:c.instructions+=8;goto B69186c;
case 0x691871:c.instructions+=7;goto B691871;
case 0x691874:c.instructions+=6;goto B691874;
case 0x691877:c.instructions+=5;goto B691877;
case 0x69187b:c.instructions+=4;goto B69187b;
case 0x691880:c.instructions+=3;goto B691880;
case 0x691885:c.instructions+=2;goto B691885;
case 0x691887:c.instructions+=1;goto B691887;
case 0x69188d:goto L69188d;
case 0x691891:c.instructions+=128;goto B691891;
case 0x691895:c.instructions+=127;goto B691895;
case 0x691898:c.instructions+=126;goto B691898;
case 0x69189c:c.instructions+=125;goto B69189c;
case 0x6918a0:c.instructions+=124;goto B6918a0;
case 0x6918a4:c.instructions+=123;goto B6918a4;
case 0x6918a8:c.instructions+=122;goto B6918a8;
case 0x6918ac:c.instructions+=121;goto B6918ac;
case 0x6918af:c.instructions+=120;goto B6918af;
case 0x6918b3:c.instructions+=119;goto B6918b3;
case 0x6918b7:c.instructions+=118;goto B6918b7;
case 0x6918ba:c.instructions+=117;goto B6918ba;
case 0x6918bf:c.instructions+=116;goto B6918bf;
case 0x6918c2:c.instructions+=115;goto B6918c2;
case 0x6918c7:c.instructions+=114;goto B6918c7;
case 0x6918ca:c.instructions+=113;goto B6918ca;
case 0x6918cd:c.instructions+=112;goto B6918cd;
case 0x6918d1:c.instructions+=111;goto B6918d1;
case 0x6918d4:c.instructions+=110;goto B6918d4;
case 0x6918da:c.instructions+=109;goto B6918da;
case 0x6918df:c.instructions+=108;goto B6918df;
case 0x6918e3:c.instructions+=107;goto B6918e3;
case 0x6918e6:c.instructions+=106;goto B6918e6;
case 0x6918ec:c.instructions+=105;goto B6918ec;
case 0x6918f0:c.instructions+=104;goto B6918f0;
case 0x6918f4:c.instructions+=103;goto B6918f4;
case 0x6918f8:c.instructions+=102;goto B6918f8;
case 0x6918fe:c.instructions+=101;goto B6918fe;
case 0x691902:c.instructions+=100;goto B691902;
case 0x691906:c.instructions+=99;goto B691906;
case 0x69190a:c.instructions+=98;goto B69190a;
case 0x691910:c.instructions+=97;goto B691910;
case 0x691914:c.instructions+=96;goto B691914;
case 0x691918:c.instructions+=95;goto B691918;
case 0x69191c:c.instructions+=94;goto B69191c;
case 0x691920:c.instructions+=93;goto B691920;
case 0x691923:c.instructions+=92;goto B691923;
case 0x691927:c.instructions+=91;goto B691927;
case 0x69192b:c.instructions+=90;goto B69192b;
case 0x69192e:c.instructions+=89;goto B69192e;
case 0x691933:c.instructions+=88;goto B691933;
case 0x691936:c.instructions+=87;goto B691936;
case 0x69193b:c.instructions+=86;goto B69193b;
case 0x69193e:c.instructions+=85;goto B69193e;
case 0x691941:c.instructions+=84;goto B691941;
case 0x691945:c.instructions+=83;goto B691945;
case 0x691948:c.instructions+=82;goto B691948;
case 0x69194e:c.instructions+=81;goto B69194e;
case 0x691953:c.instructions+=80;goto B691953;
case 0x691957:c.instructions+=79;goto B691957;
case 0x69195a:c.instructions+=78;goto B69195a;
case 0x691960:c.instructions+=77;goto B691960;
case 0x691964:c.instructions+=76;goto B691964;
case 0x691968:c.instructions+=75;goto B691968;
case 0x69196c:c.instructions+=74;goto B69196c;
case 0x691972:c.instructions+=73;goto B691972;
case 0x691976:c.instructions+=72;goto B691976;
case 0x69197a:c.instructions+=71;goto B69197a;
case 0x69197e:c.instructions+=70;goto B69197e;
case 0x691984:c.instructions+=69;goto B691984;
case 0x691988:c.instructions+=68;goto B691988;
case 0x69198c:c.instructions+=67;goto B69198c;
case 0x691990:c.instructions+=66;goto B691990;
case 0x691994:c.instructions+=65;goto B691994;
case 0x691998:c.instructions+=64;goto B691998;
case 0x69199c:c.instructions+=63;goto B69199c;
case 0x6919a0:c.instructions+=62;goto B6919a0;
case 0x6919a3:c.instructions+=61;goto B6919a3;
case 0x6919a8:c.instructions+=60;goto B6919a8;
case 0x6919ab:c.instructions+=59;goto B6919ab;
case 0x6919b0:c.instructions+=58;goto B6919b0;
case 0x6919b3:c.instructions+=57;goto B6919b3;
case 0x6919b6:c.instructions+=56;goto B6919b6;
case 0x6919ba:c.instructions+=55;goto B6919ba;
case 0x6919bd:c.instructions+=54;goto B6919bd;
case 0x6919c3:c.instructions+=53;goto B6919c3;
case 0x6919c8:c.instructions+=52;goto B6919c8;
case 0x6919cc:c.instructions+=51;goto B6919cc;
case 0x6919cf:c.instructions+=50;goto B6919cf;
case 0x6919d5:c.instructions+=49;goto B6919d5;
case 0x6919d9:c.instructions+=48;goto B6919d9;
case 0x6919dd:c.instructions+=47;goto B6919dd;
case 0x6919e1:c.instructions+=46;goto B6919e1;
case 0x6919e7:c.instructions+=45;goto B6919e7;
case 0x6919eb:c.instructions+=44;goto B6919eb;
case 0x6919ef:c.instructions+=43;goto B6919ef;
case 0x6919f3:c.instructions+=42;goto B6919f3;
case 0x6919f9:c.instructions+=41;goto B6919f9;
case 0x6919fd:c.instructions+=40;goto B6919fd;
case 0x691a01:c.instructions+=39;goto B691a01;
case 0x691a05:c.instructions+=38;goto B691a05;
case 0x691a09:c.instructions+=37;goto B691a09;
case 0x691a0d:c.instructions+=36;goto B691a0d;
case 0x691a11:c.instructions+=35;goto B691a11;
case 0x691a15:c.instructions+=34;goto B691a15;
case 0x691a18:c.instructions+=33;goto B691a18;
case 0x691a1d:c.instructions+=32;goto B691a1d;
case 0x691a20:c.instructions+=31;goto B691a20;
case 0x691a25:c.instructions+=30;goto B691a25;
case 0x691a28:c.instructions+=29;goto B691a28;
case 0x691a2b:c.instructions+=28;goto B691a2b;
case 0x691a2f:c.instructions+=27;goto B691a2f;
case 0x691a32:c.instructions+=26;goto B691a32;
case 0x691a38:c.instructions+=25;goto B691a38;
case 0x691a3d:c.instructions+=24;goto B691a3d;
case 0x691a41:c.instructions+=23;goto B691a41;
case 0x691a44:c.instructions+=22;goto B691a44;
case 0x691a4a:c.instructions+=21;goto B691a4a;
case 0x691a4e:c.instructions+=20;goto B691a4e;
case 0x691a52:c.instructions+=19;goto B691a52;
case 0x691a56:c.instructions+=18;goto B691a56;
case 0x691a5c:c.instructions+=17;goto B691a5c;
case 0x691a60:c.instructions+=16;goto B691a60;
case 0x691a64:c.instructions+=15;goto B691a64;
case 0x691a68:c.instructions+=14;goto B691a68;
case 0x691a6e:c.instructions+=13;goto B691a6e;
case 0x691a72:c.instructions+=12;goto B691a72;
case 0x691a76:c.instructions+=11;goto B691a76;
case 0x691a7a:c.instructions+=10;goto B691a7a;
case 0x691a7e:c.instructions+=9;goto B691a7e;
case 0x691a82:c.instructions+=8;goto B691a82;
case 0x691a86:c.instructions+=7;goto B691a86;
case 0x691a89:c.instructions+=6;goto B691a89;
case 0x691a8d:c.instructions+=5;goto B691a8d;
case 0x691a91:c.instructions+=4;goto B691a91;
case 0x691a95:c.instructions+=3;goto B691a95;
case 0x691a99:c.instructions+=2;goto B691a99;
case 0x691a9d:c.instructions+=1;goto B691a9d;
case 0x691aa2:goto L691aa2;
case 0x691aa5:c.instructions+=111;goto B691aa5;
case 0x691aa9:c.instructions+=110;goto B691aa9;
case 0x691aad:c.instructions+=109;goto B691aad;
case 0x691ab0:c.instructions+=108;goto B691ab0;
case 0x691ab5:c.instructions+=107;goto B691ab5;
case 0x691ab8:c.instructions+=106;goto B691ab8;
case 0x691abd:c.instructions+=105;goto B691abd;
case 0x691ac0:c.instructions+=104;goto B691ac0;
case 0x691ac3:c.instructions+=103;goto B691ac3;
case 0x691ac7:c.instructions+=102;goto B691ac7;
case 0x691aca:c.instructions+=101;goto B691aca;
case 0x691ad0:c.instructions+=100;goto B691ad0;
case 0x691ad5:c.instructions+=99;goto B691ad5;
case 0x691ad9:c.instructions+=98;goto B691ad9;
case 0x691adc:c.instructions+=97;goto B691adc;
case 0x691ae2:c.instructions+=96;goto B691ae2;
case 0x691ae6:c.instructions+=95;goto B691ae6;
case 0x691aea:c.instructions+=94;goto B691aea;
case 0x691aee:c.instructions+=93;goto B691aee;
case 0x691af4:c.instructions+=92;goto B691af4;
case 0x691af8:c.instructions+=91;goto B691af8;
case 0x691afc:c.instructions+=90;goto B691afc;
case 0x691b00:c.instructions+=89;goto B691b00;
case 0x691b06:c.instructions+=88;goto B691b06;
case 0x691b0a:c.instructions+=87;goto B691b0a;
case 0x691b0e:c.instructions+=86;goto B691b0e;
case 0x691b12:c.instructions+=85;goto B691b12;
case 0x691b16:c.instructions+=84;goto B691b16;
case 0x691b19:c.instructions+=83;goto B691b19;
case 0x691b1d:c.instructions+=82;goto B691b1d;
case 0x691b21:c.instructions+=81;goto B691b21;
case 0x691b24:c.instructions+=80;goto B691b24;
case 0x691b29:c.instructions+=79;goto B691b29;
case 0x691b2c:c.instructions+=78;goto B691b2c;
case 0x691b31:c.instructions+=77;goto B691b31;
case 0x691b34:c.instructions+=76;goto B691b34;
case 0x691b37:c.instructions+=75;goto B691b37;
case 0x691b3b:c.instructions+=74;goto B691b3b;
case 0x691b3e:c.instructions+=73;goto B691b3e;
case 0x691b44:c.instructions+=72;goto B691b44;
case 0x691b49:c.instructions+=71;goto B691b49;
case 0x691b4d:c.instructions+=70;goto B691b4d;
case 0x691b50:c.instructions+=69;goto B691b50;
case 0x691b56:c.instructions+=68;goto B691b56;
case 0x691b5a:c.instructions+=67;goto B691b5a;
case 0x691b5e:c.instructions+=66;goto B691b5e;
case 0x691b62:c.instructions+=65;goto B691b62;
case 0x691b68:c.instructions+=64;goto B691b68;
case 0x691b6c:c.instructions+=63;goto B691b6c;
case 0x691b70:c.instructions+=62;goto B691b70;
case 0x691b74:c.instructions+=61;goto B691b74;
case 0x691b7a:c.instructions+=60;goto B691b7a;
case 0x691b7e:c.instructions+=59;goto B691b7e;
case 0x691b82:c.instructions+=58;goto B691b82;
case 0x691b86:c.instructions+=57;goto B691b86;
case 0x691b8a:c.instructions+=56;goto B691b8a;
case 0x691b8e:c.instructions+=55;goto B691b8e;
case 0x691b92:c.instructions+=54;goto B691b92;
case 0x691b96:c.instructions+=53;goto B691b96;
case 0x691b99:c.instructions+=52;goto B691b99;
case 0x691b9e:c.instructions+=51;goto B691b9e;
case 0x691ba1:c.instructions+=50;goto B691ba1;
case 0x691ba6:c.instructions+=49;goto B691ba6;
case 0x691ba9:c.instructions+=48;goto B691ba9;
case 0x691bac:c.instructions+=47;goto B691bac;
case 0x691bb0:c.instructions+=46;goto B691bb0;
case 0x691bb3:c.instructions+=45;goto B691bb3;
case 0x691bb9:c.instructions+=44;goto B691bb9;
case 0x691bbe:c.instructions+=43;goto B691bbe;
case 0x691bc2:c.instructions+=42;goto B691bc2;
case 0x691bc5:c.instructions+=41;goto B691bc5;
case 0x691bcb:c.instructions+=40;goto B691bcb;
case 0x691bcf:c.instructions+=39;goto B691bcf;
case 0x691bd3:c.instructions+=38;goto B691bd3;
case 0x691bd7:c.instructions+=37;goto B691bd7;
case 0x691bdd:c.instructions+=36;goto B691bdd;
case 0x691be1:c.instructions+=35;goto B691be1;
case 0x691be5:c.instructions+=34;goto B691be5;
case 0x691be9:c.instructions+=33;goto B691be9;
case 0x691bef:c.instructions+=32;goto B691bef;
case 0x691bf3:c.instructions+=31;goto B691bf3;
case 0x691bf7:c.instructions+=30;goto B691bf7;
case 0x691bfb:c.instructions+=29;goto B691bfb;
case 0x691bff:c.instructions+=28;goto B691bff;
case 0x691c03:c.instructions+=27;goto B691c03;
case 0x691c07:c.instructions+=26;goto B691c07;
case 0x691c0b:c.instructions+=25;goto B691c0b;
case 0x691c0e:c.instructions+=24;goto B691c0e;
case 0x691c13:c.instructions+=23;goto B691c13;
case 0x691c16:c.instructions+=22;goto B691c16;
case 0x691c1b:c.instructions+=21;goto B691c1b;
case 0x691c1e:c.instructions+=20;goto B691c1e;
case 0x691c21:c.instructions+=19;goto B691c21;
case 0x691c25:c.instructions+=18;goto B691c25;
case 0x691c28:c.instructions+=17;goto B691c28;
case 0x691c2e:c.instructions+=16;goto B691c2e;
case 0x691c33:c.instructions+=15;goto B691c33;
case 0x691c37:c.instructions+=14;goto B691c37;
case 0x691c3a:c.instructions+=13;goto B691c3a;
case 0x691c40:c.instructions+=12;goto B691c40;
case 0x691c44:c.instructions+=11;goto B691c44;
case 0x691c48:c.instructions+=10;goto B691c48;
case 0x691c4c:c.instructions+=9;goto B691c4c;
case 0x691c52:c.instructions+=8;goto B691c52;
case 0x691c56:c.instructions+=7;goto B691c56;
case 0x691c5a:c.instructions+=6;goto B691c5a;
case 0x691c5e:c.instructions+=5;goto B691c5e;
case 0x691c64:c.instructions+=4;goto B691c64;
case 0x691c68:c.instructions+=3;goto B691c68;
case 0x691c6c:c.instructions+=2;goto B691c6c;
case 0x691c70:c.instructions+=1;goto B691c70;
case 0x691c74:goto L691c74;
case 0x691c78:c.instructions+=2;goto B691c78;
case 0x691c7a:c.instructions+=1;goto B691c7a;
case 0x691c7c:goto L691c7c;
case 0x691c7f:c.instructions+=7;goto B691c7f;
case 0x691c83:c.instructions+=6;goto B691c83;
case 0x691c87:c.instructions+=5;goto B691c87;
case 0x691c8b:c.instructions+=4;goto B691c8b;
case 0x691c8f:c.instructions+=3;goto B691c8f;
case 0x691c93:c.instructions+=2;goto B691c93;
case 0x691c97:c.instructions+=1;goto B691c97;
case 0x691c9b:goto L691c9b;
case 0x691c9e:c.instructions+=2;goto B691c9e;
case 0x691ca0:c.instructions+=1;goto B691ca0;
case 0x691ca3:goto L691ca3;
case 0x691ca5:c.instructions+=15;goto B691ca5;
case 0x691ca6:c.instructions+=14;goto B691ca6;
case 0x691ca8:c.instructions+=13;goto B691ca8;
case 0x691cab:c.instructions+=12;goto B691cab;
case 0x691cae:c.instructions+=11;goto B691cae;
case 0x691cb1:c.instructions+=10;goto B691cb1;
case 0x691cb4:c.instructions+=9;goto B691cb4;
case 0x691cb7:c.instructions+=8;goto B691cb7;
case 0x691cbb:c.instructions+=7;goto B691cbb;
case 0x691cbf:c.instructions+=6;goto B691cbf;
case 0x691cc3:c.instructions+=5;goto B691cc3;
case 0x691cc7:c.instructions+=4;goto B691cc7;
case 0x691ccc:c.instructions+=3;goto B691ccc;
case 0x691ccd:c.instructions+=2;goto B691ccd;
case 0x691cce:c.instructions+=1;goto B691cce;
case 0x691cd3:goto L691cd3;
case 0x691cd7:c.instructions+=1;goto B691cd7;
case 0x691cdc:goto L691cdc;
case 0x691cdf:c.instructions+=62;goto B691cdf;
case 0x691ce2:c.instructions+=61;goto B691ce2;
case 0x691cea:c.instructions+=60;goto B691cea;
case 0x691ced:c.instructions+=59;goto B691ced;
case 0x691cf1:c.instructions+=58;goto B691cf1;
case 0x691cf6:c.instructions+=57;goto B691cf6;
case 0x691cf9:c.instructions+=56;goto B691cf9;
case 0x691cfc:c.instructions+=55;goto B691cfc;
case 0x691d01:c.instructions+=54;goto B691d01;
case 0x691d04:c.instructions+=53;goto B691d04;
case 0x691d07:c.instructions+=52;goto B691d07;
case 0x691d0a:c.instructions+=51;goto B691d0a;
case 0x691d0e:c.instructions+=50;goto B691d0e;
case 0x691d11:c.instructions+=49;goto B691d11;
case 0x691d15:c.instructions+=48;goto B691d15;
case 0x691d18:c.instructions+=47;goto B691d18;
case 0x691d1c:c.instructions+=46;goto B691d1c;
case 0x691d1f:c.instructions+=45;goto B691d1f;
case 0x691d23:c.instructions+=44;goto B691d23;
case 0x691d26:c.instructions+=43;goto B691d26;
case 0x691d2a:c.instructions+=42;goto B691d2a;
case 0x691d2e:c.instructions+=41;goto B691d2e;
case 0x691d32:c.instructions+=40;goto B691d32;
case 0x691d36:c.instructions+=39;goto B691d36;
case 0x691d3a:c.instructions+=38;goto B691d3a;
case 0x691d3e:c.instructions+=37;goto B691d3e;
case 0x691d42:c.instructions+=36;goto B691d42;
case 0x691d46:c.instructions+=35;goto B691d46;
case 0x691d4b:c.instructions+=34;goto B691d4b;
case 0x691d4e:c.instructions+=33;goto B691d4e;
case 0x691d51:c.instructions+=32;goto B691d51;
case 0x691d55:c.instructions+=31;goto B691d55;
case 0x691d58:c.instructions+=30;goto B691d58;
case 0x691d5c:c.instructions+=29;goto B691d5c;
case 0x691d60:c.instructions+=28;goto B691d60;
case 0x691d63:c.instructions+=27;goto B691d63;
case 0x691d66:c.instructions+=26;goto B691d66;
case 0x691d69:c.instructions+=25;goto B691d69;
case 0x691d6d:c.instructions+=24;goto B691d6d;
case 0x691d71:c.instructions+=23;goto B691d71;
case 0x691d75:c.instructions+=22;goto B691d75;
case 0x691d78:c.instructions+=21;goto B691d78;
case 0x691d7c:c.instructions+=20;goto B691d7c;
case 0x691d7f:c.instructions+=19;goto B691d7f;
case 0x691d82:c.instructions+=18;goto B691d82;
case 0x691d85:c.instructions+=17;goto B691d85;
case 0x691d88:c.instructions+=16;goto B691d88;
case 0x691d8b:c.instructions+=15;goto B691d8b;
case 0x691d8e:c.instructions+=14;goto B691d8e;
case 0x691d92:c.instructions+=13;goto B691d92;
case 0x691d99:c.instructions+=12;goto B691d99;
case 0x691d9d:c.instructions+=11;goto B691d9d;
case 0x691da1:c.instructions+=10;goto B691da1;
case 0x691da4:c.instructions+=9;goto B691da4;
case 0x691da8:c.instructions+=8;goto B691da8;
case 0x691dab:c.instructions+=7;goto B691dab;
case 0x691dae:c.instructions+=6;goto B691dae;
case 0x691db2:c.instructions+=5;goto B691db2;
case 0x691db6:c.instructions+=4;goto B691db6;
case 0x691db8:c.instructions+=3;goto B691db8;
case 0x691db9:c.instructions+=2;goto B691db9;
case 0x691dbb:c.instructions+=1;goto B691dbb;
case 0x691dbe:goto L691dbe;
case 0x691dc0:c.instructions+=9;goto B691dc0;
case 0x691dc1:c.instructions+=8;goto B691dc1;
case 0x691dc3:c.instructions+=7;goto B691dc3;
case 0x691dc9:c.instructions+=6;goto B691dc9;
case 0x691dcc:c.instructions+=5;goto B691dcc;
case 0x691dcf:c.instructions+=4;goto B691dcf;
case 0x691dd2:c.instructions+=3;goto B691dd2;
case 0x691dd4:c.instructions+=2;goto B691dd4;
case 0x691dd7:c.instructions+=1;goto B691dd7;
case 0x691ddd:goto L691ddd;
case 0x691ddf:c.instructions+=1;goto B691ddf;
case 0x691de5:goto L691de5;
case 0x691dec:c.instructions+=63;goto B691dec;
case 0x691def:c.instructions+=62;goto B691def;
case 0x691df3:c.instructions+=61;goto B691df3;
case 0x691df6:c.instructions+=60;goto B691df6;
case 0x691df9:c.instructions+=59;goto B691df9;
case 0x691dfc:c.instructions+=58;goto B691dfc;
case 0x691dff:c.instructions+=57;goto B691dff;
case 0x691e02:c.instructions+=56;goto B691e02;
case 0x691e06:c.instructions+=55;goto B691e06;
case 0x691e0b:c.instructions+=54;goto B691e0b;
case 0x691e10:c.instructions+=53;goto B691e10;
case 0x691e15:c.instructions+=52;goto B691e15;
case 0x691e1a:c.instructions+=51;goto B691e1a;
case 0x691e1f:c.instructions+=50;goto B691e1f;
case 0x691e24:c.instructions+=49;goto B691e24;
case 0x691e29:c.instructions+=48;goto B691e29;
case 0x691e2d:c.instructions+=47;goto B691e2d;
case 0x691e30:c.instructions+=46;goto B691e30;
case 0x691e34:c.instructions+=45;goto B691e34;
case 0x691e38:c.instructions+=44;goto B691e38;
case 0x691e3b:c.instructions+=43;goto B691e3b;
case 0x691e3e:c.instructions+=42;goto B691e3e;
case 0x691e42:c.instructions+=41;goto B691e42;
case 0x691e45:c.instructions+=40;goto B691e45;
case 0x691e48:c.instructions+=39;goto B691e48;
case 0x691e4c:c.instructions+=38;goto B691e4c;
case 0x691e4f:c.instructions+=37;goto B691e4f;
case 0x691e53:c.instructions+=36;goto B691e53;
case 0x691e56:c.instructions+=35;goto B691e56;
case 0x691e5a:c.instructions+=34;goto B691e5a;
case 0x691e5e:c.instructions+=33;goto B691e5e;
case 0x691e62:c.instructions+=32;goto B691e62;
case 0x691e66:c.instructions+=31;goto B691e66;
case 0x691e69:c.instructions+=30;goto B691e69;
case 0x691e71:c.instructions+=29;goto B691e71;
case 0x691e74:c.instructions+=28;goto B691e74;
case 0x691e77:c.instructions+=27;goto B691e77;
case 0x691e7b:c.instructions+=26;goto B691e7b;
case 0x691e7f:c.instructions+=25;goto B691e7f;
case 0x691e83:c.instructions+=24;goto B691e83;
case 0x691e87:c.instructions+=23;goto B691e87;
case 0x691e8b:c.instructions+=22;goto B691e8b;
case 0x691e8f:c.instructions+=21;goto B691e8f;
case 0x691e97:c.instructions+=20;goto B691e97;
case 0x691e9a:c.instructions+=19;goto B691e9a;
case 0x691e9d:c.instructions+=18;goto B691e9d;
case 0x691ea1:c.instructions+=17;goto B691ea1;
case 0x691ea4:c.instructions+=16;goto B691ea4;
case 0x691ea7:c.instructions+=15;goto B691ea7;
case 0x691eaa:c.instructions+=14;goto B691eaa;
case 0x691ead:c.instructions+=13;goto B691ead;
case 0x691eb1:c.instructions+=12;goto B691eb1;
case 0x691eb4:c.instructions+=11;goto B691eb4;
case 0x691eb8:c.instructions+=10;goto B691eb8;
case 0x691ebb:c.instructions+=9;goto B691ebb;
case 0x691ebf:c.instructions+=8;goto B691ebf;
case 0x691ec6:c.instructions+=7;goto B691ec6;
case 0x691ec9:c.instructions+=6;goto B691ec9;
case 0x691ecd:c.instructions+=5;goto B691ecd;
case 0x691ed1:c.instructions+=4;goto B691ed1;
case 0x691ed5:c.instructions+=3;goto B691ed5;
case 0x691ed8:c.instructions+=2;goto B691ed8;
case 0x691eda:c.instructions+=1;goto B691eda;
case 0x691ee0:goto L691ee0;
case 0x691ee5:c.instructions+=60;goto B691ee5;
case 0x691eea:c.instructions+=59;goto B691eea;
case 0x691eef:c.instructions+=58;goto B691eef;
case 0x691ef4:c.instructions+=57;goto B691ef4;
case 0x691ef7:c.instructions+=56;goto B691ef7;
case 0x691efa:c.instructions+=55;goto B691efa;
case 0x691efd:c.instructions+=54;goto B691efd;
case 0x691f00:c.instructions+=53;goto B691f00;
case 0x691f08:c.instructions+=52;goto B691f08;
case 0x691f10:c.instructions+=51;goto B691f10;
case 0x691f15:c.instructions+=50;goto B691f15;
case 0x691f18:c.instructions+=49;goto B691f18;
case 0x691f1d:c.instructions+=48;goto B691f1d;
case 0x691f22:c.instructions+=47;goto B691f22;
case 0x691f25:c.instructions+=46;goto B691f25;
case 0x691f28:c.instructions+=45;goto B691f28;
case 0x691f30:c.instructions+=44;goto B691f30;
case 0x691f38:c.instructions+=43;goto B691f38;
case 0x691f3b:c.instructions+=42;goto B691f3b;
case 0x691f40:c.instructions+=41;goto B691f40;
case 0x691f43:c.instructions+=40;goto B691f43;
case 0x691f46:c.instructions+=39;goto B691f46;
case 0x691f4e:c.instructions+=38;goto B691f4e;
case 0x691f51:c.instructions+=37;goto B691f51;
case 0x691f54:c.instructions+=36;goto B691f54;
case 0x691f5c:c.instructions+=35;goto B691f5c;
case 0x691f64:c.instructions+=34;goto B691f64;
case 0x691f6c:c.instructions+=33;goto B691f6c;
case 0x691f6f:c.instructions+=32;goto B691f6f;
case 0x691f72:c.instructions+=31;goto B691f72;
case 0x691f76:c.instructions+=30;goto B691f76;
case 0x691f7d:c.instructions+=29;goto B691f7d;
case 0x691f80:c.instructions+=28;goto B691f80;
case 0x691f84:c.instructions+=27;goto B691f84;
case 0x691f87:c.instructions+=26;goto B691f87;
case 0x691f8b:c.instructions+=25;goto B691f8b;
case 0x691f8f:c.instructions+=24;goto B691f8f;
case 0x691f93:c.instructions+=23;goto B691f93;
case 0x691f97:c.instructions+=22;goto B691f97;
case 0x691f9b:c.instructions+=21;goto B691f9b;
case 0x691f9f:c.instructions+=20;goto B691f9f;
case 0x691fa3:c.instructions+=19;goto B691fa3;
case 0x691fa7:c.instructions+=18;goto B691fa7;
case 0x691fab:c.instructions+=17;goto B691fab;
case 0x691fae:c.instructions+=16;goto B691fae;
case 0x691fb2:c.instructions+=15;goto B691fb2;
case 0x691fba:c.instructions+=14;goto B691fba;
case 0x691fbd:c.instructions+=13;goto B691fbd;
case 0x691fc5:c.instructions+=12;goto B691fc5;
case 0x691fc8:c.instructions+=11;goto B691fc8;
case 0x691fd0:c.instructions+=10;goto B691fd0;
case 0x691fd3:c.instructions+=9;goto B691fd3;
case 0x691fd6:c.instructions+=8;goto B691fd6;
case 0x691fda:c.instructions+=7;goto B691fda;
case 0x691fdd:c.instructions+=6;goto B691fdd;
case 0x691fe6:c.instructions+=5;goto B691fe6;
case 0x691fee:c.instructions+=4;goto B691fee;
case 0x691ff2:c.instructions+=3;goto B691ff2;
case 0x691ff5:c.instructions+=2;goto B691ff5;
case 0x691ffe:c.instructions+=1;goto B691ffe;
default:missing_instruction(c.pc);}
B691001:L691001:{c.instructions+=24;NFSU2_TR(0x691001);
__builtin_memmove((R+4368),gp(0x7b7158),8);
}
B691008:{NFSU2_TR(0x691008);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B69100b:{NFSU2_TR(0x69100b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4432,u64(r4(U+4)));
}
B69100f:{NFSU2_TR(0x69100f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B691012:{NFSU2_TR(0x691012);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B691016:{NFSU2_TR(0x691016);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B691019:{NFSU2_TR(0x691019);
__builtin_memmove((R+4448),(R+4368),8);
}
B69101c:{NFSU2_TR(0x69101c);
__builtin_memmove((R+4436),(R+4368),4);
}
B69101f:{NFSU2_TR(0x69101f);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B691023:{NFSU2_TR(0x691023);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691027:{NFSU2_TR(0x691027);
{wv<8>((R+4448),uo::pfsub<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B69102b:{NFSU2_TR(0x69102b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69102f:{NFSU2_TR(0x69102f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691033:{NFSU2_TR(0x691033);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691037:{NFSU2_TR(0x691037);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B69103b:{NFSU2_TR(0x69103b);
__builtin_memmove((R+4416),(R+4384),8);
}
B69103e:{NFSU2_TR(0x69103e);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691042:{NFSU2_TR(0x691042);
__builtin_memmove((R+4388),(R+4352),4);
}
B691045:{NFSU2_TR(0x691045);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4420),4);
}
B691048:{NFSU2_TR(0x691048);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B69104b:{NFSU2_TR(0x69104b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69104f:{NFSU2_TR(0x69104f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691053:{NFSU2_TR(0x691053);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691057:{NFSU2_TR(0x691057);
{goto L6910c9;}
}
B691059:L691059:{c.instructions+=17;NFSU2_TR(0x691059);
__builtin_memmove((R+4368),gp(0x7b7138),8);
}
B691060:{NFSU2_TR(0x691060);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B691063:{NFSU2_TR(0x691063);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B691067:{NFSU2_TR(0x691067);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4432))));
}
B69106a:{NFSU2_TR(0x69106a);
__builtin_memmove((R+4400),(R+4384),8);
}
B69106d:{NFSU2_TR(0x69106d);
__builtin_memmove((R+4388),(R+4432),4);
}
B691070:{NFSU2_TR(0x691070);
__builtin_memmove((R+4352),(R+4432),8);
}
B691073:{NFSU2_TR(0x691073);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4404),4);
}
B691076:{NFSU2_TR(0x691076);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B691079:{NFSU2_TR(0x691079);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69107d:{NFSU2_TR(0x69107d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691081:{NFSU2_TR(0x691081);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691085:{NFSU2_TR(0x691085);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691089:{NFSU2_TR(0x691089);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69108d:{NFSU2_TR(0x69108d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691091:{NFSU2_TR(0x691091);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691095:{NFSU2_TR(0x691095);
{goto L6910c9;}
}
B691097:L691097:{c.instructions+=13;NFSU2_TR(0x691097);
w8(R+4368,u64(m4(0x7b7148)));
}
B69109e:{NFSU2_TR(0x69109e);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B6910a1:{NFSU2_TR(0x6910a1);
__builtin_memmove((R+4384),(R+4368),8);
}
B6910a4:{NFSU2_TR(0x6910a4);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6910a7:{NFSU2_TR(0x6910a7);
__builtin_memmove((R+4388),(R+4368),4);
}
B6910aa:{NFSU2_TR(0x6910aa);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6910ad:{NFSU2_TR(0x6910ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6910b1:{NFSU2_TR(0x6910b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6910b5:{NFSU2_TR(0x6910b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6910b9:{NFSU2_TR(0x6910b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6910bd:{NFSU2_TR(0x6910bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6910c1:{NFSU2_TR(0x6910c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6910c5:{NFSU2_TR(0x6910c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6910c9:L6910c9:{c.instructions+=4;NFSU2_TR(0x6910c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6910cc:{NFSU2_TR(0x6910cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6910cf:{NFSU2_TR(0x6910cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6910d1:{NFSU2_TR(0x6910d1);
if(r1(R+518)){{goto L69159c;}}
}
B6910d7:L6910d7:{c.instructions+=56;NFSU2_TR(0x6910d7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6910da:{NFSU2_TR(0x6910da);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6910de:{NFSU2_TR(0x6910de);
__builtin_memmove((R+4384),(R+4352),8);
}
B6910e1:{NFSU2_TR(0x6910e1);
__builtin_memmove((R+4400),(R+4352),8);
}
B6910e4:{NFSU2_TR(0x6910e4);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B6910e8:{NFSU2_TR(0x6910e8);
__builtin_memmove((R+4416),(R+4368),8);
}
B6910eb:{NFSU2_TR(0x6910eb);
__builtin_memmove((R+4464),(R+4368),8);
}
B6910ee:{NFSU2_TR(0x6910ee);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B6910f2:{NFSU2_TR(0x6910f2);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6910f5:{NFSU2_TR(0x6910f5);
__builtin_memmove((R+4432),(R+4352),8);
}
B6910f8:{NFSU2_TR(0x6910f8);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B6910fb:{NFSU2_TR(0x6910fb);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B6910ff:{NFSU2_TR(0x6910ff);
__builtin_memmove((R+4372),(R+4352),4);
}
B691102:{NFSU2_TR(0x691102);
__builtin_memmove((R+4468),(R+4464),4);
}
B691105:{NFSU2_TR(0x691105);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B691109:{NFSU2_TR(0x691109);
__builtin_memmove((R+4448),(R+4368),8);
}
B69110c:{NFSU2_TR(0x69110c);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B691110:{NFSU2_TR(0x691110);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B691114:{NFSU2_TR(0x691114);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B691117:{NFSU2_TR(0x691117);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B69111b:{NFSU2_TR(0x69111b);
__builtin_memmove((R+4384),(R+4368),8);
}
B69111e:{NFSU2_TR(0x69111e);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4468),4);
}
B691121:{NFSU2_TR(0x691121);
__builtin_memmove((R+4468),(R+4464),4);
}
B691124:{NFSU2_TR(0x691124);
__builtin_memmove((R+4452),(R+4448),4);
}
B691127:{NFSU2_TR(0x691127);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69112c:{NFSU2_TR(0x69112c);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691130:{NFSU2_TR(0x691130);
{wv<8>((R+4400),uo::pfacc<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B691134:{NFSU2_TR(0x691134);
__builtin_memmove((R+4416),(R+4368),8);
}
B691137:{NFSU2_TR(0x691137);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4436),4);
}
B69113a:{NFSU2_TR(0x69113a);
{wv<8>((R+4400),uo::pfsubr<8>(rv<8>((R+4400)),rv<8>(gp(0x7b7158))));}
}
B691142:{NFSU2_TR(0x691142);
{wv<8>((R+4464),uo::pfsubr<8>(rv<8>((R+4464)),rv<8>(gp(0x7b7158))));}
}
B69114a:{NFSU2_TR(0x69114a);
__builtin_memmove((R+4404),(R+4352),4);
}
B69114d:{NFSU2_TR(0x69114d);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B691151:{NFSU2_TR(0x691151);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691156:{NFSU2_TR(0x691156);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B69115a:{NFSU2_TR(0x69115a);
__builtin_memmove((R+4400),(R+4384),8);
}
B69115d:{NFSU2_TR(0x69115d);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B691161:{NFSU2_TR(0x691161);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B691165:{NFSU2_TR(0x691165);
__builtin_memmove((R+4432),(R+4416),8);
}
B691168:{NFSU2_TR(0x691168);
__builtin_memmove((R+4388),(R+4352),4);
}
B69116b:{NFSU2_TR(0x69116b);
__builtin_memmove((R+4448),(R+4368),8);
}
B69116e:{NFSU2_TR(0x69116e);
__builtin_memmove((R+4420),(R+4464),4);
}
B691171:{NFSU2_TR(0x691171);
__builtin_memmove((R+4372),(R+4368),4);
}
B691174:{NFSU2_TR(0x691174);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691179:{NFSU2_TR(0x691179);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4356),4);
}
B69117c:{NFSU2_TR(0x69117c);
__builtin_memmove((R+4356),gp(0x7b7158),4);
}
B691183:{NFSU2_TR(0x691183);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691188:{NFSU2_TR(0x691188);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B69118b:{NFSU2_TR(0x69118b);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691190:{NFSU2_TR(0x691190);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4372),4);
}
B691193:{NFSU2_TR(0x691193);
__builtin_memmove((R+4452),(R+4400),4);
}
B691196:{NFSU2_TR(0x691196);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69119b:{NFSU2_TR(0x69119b);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6911a0:{NFSU2_TR(0x6911a0);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6911a5:{NFSU2_TR(0x6911a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6911a7:{NFSU2_TR(0x6911a7);
if(r1(R+518)){{goto L6913c6;}}
}
B6911ad:L6911ad:{c.instructions+=129;NFSU2_TR(0x6911ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6911b1:{NFSU2_TR(0x6911b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B6911b5:{NFSU2_TR(0x6911b5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B6911b8:{NFSU2_TR(0x6911b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B6911bc:{NFSU2_TR(0x6911bc);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B6911c0:{NFSU2_TR(0x6911c0);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B6911c4:{NFSU2_TR(0x6911c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6911c8:{NFSU2_TR(0x6911c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B6911cc:{NFSU2_TR(0x6911cc);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6911cf:{NFSU2_TR(0x6911cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6911d3:{NFSU2_TR(0x6911d3);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6911d8:{NFSU2_TR(0x6911d8);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6911db:{NFSU2_TR(0x6911db);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6911e0:{NFSU2_TR(0x6911e0);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6911e3:{NFSU2_TR(0x6911e3);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6911e8:{NFSU2_TR(0x6911e8);
__builtin_memmove((R+4356),(R+4352),4);
}
B6911eb:{NFSU2_TR(0x6911eb);
__builtin_memmove((R+4372),(R+4368),4);
}
B6911ee:{NFSU2_TR(0x6911ee);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6911f2:{NFSU2_TR(0x6911f2);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6911f5:{NFSU2_TR(0x6911f5);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6911fb:{NFSU2_TR(0x6911fb);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B691200:{NFSU2_TR(0x691200);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691204:{NFSU2_TR(0x691204);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B691207:{NFSU2_TR(0x691207);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69120d:{NFSU2_TR(0x69120d);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B691211:{NFSU2_TR(0x691211);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691215:{NFSU2_TR(0x691215);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B691219:{NFSU2_TR(0x691219);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B69121f:{NFSU2_TR(0x69121f);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691223:{NFSU2_TR(0x691223);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691227:{NFSU2_TR(0x691227);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69122b:{NFSU2_TR(0x69122b);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B691231:{NFSU2_TR(0x691231);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691235:{NFSU2_TR(0x691235);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691239:{NFSU2_TR(0x691239);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B69123d:{NFSU2_TR(0x69123d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691241:{NFSU2_TR(0x691241);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B691244:{NFSU2_TR(0x691244);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B691249:{NFSU2_TR(0x691249);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69124d:{NFSU2_TR(0x69124d);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B691250:{NFSU2_TR(0x691250);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B691255:{NFSU2_TR(0x691255);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B691258:{NFSU2_TR(0x691258);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69125d:{NFSU2_TR(0x69125d);
__builtin_memmove((R+4356),(R+4352),4);
}
B691260:{NFSU2_TR(0x691260);
__builtin_memmove((R+4372),(R+4368),4);
}
B691263:{NFSU2_TR(0x691263);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B691267:{NFSU2_TR(0x691267);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69126a:{NFSU2_TR(0x69126a);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B691270:{NFSU2_TR(0x691270);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B691275:{NFSU2_TR(0x691275);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691279:{NFSU2_TR(0x691279);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69127c:{NFSU2_TR(0x69127c);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B691282:{NFSU2_TR(0x691282);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B691286:{NFSU2_TR(0x691286);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B69128a:{NFSU2_TR(0x69128a);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B69128e:{NFSU2_TR(0x69128e);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B691294:{NFSU2_TR(0x691294);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691298:{NFSU2_TR(0x691298);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B69129c:{NFSU2_TR(0x69129c);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6912a0:{NFSU2_TR(0x6912a0);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6912a6:{NFSU2_TR(0x6912a6);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6912aa:{NFSU2_TR(0x6912aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6912ae:{NFSU2_TR(0x6912ae);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6912b2:{NFSU2_TR(0x6912b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6912b6:{NFSU2_TR(0x6912b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6912ba:{NFSU2_TR(0x6912ba);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6912bf:{NFSU2_TR(0x6912bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6912c3:{NFSU2_TR(0x6912c3);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6912c6:{NFSU2_TR(0x6912c6);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6912cb:{NFSU2_TR(0x6912cb);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6912ce:{NFSU2_TR(0x6912ce);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6912d3:{NFSU2_TR(0x6912d3);
__builtin_memmove((R+4356),(R+4352),4);
}
B6912d6:{NFSU2_TR(0x6912d6);
__builtin_memmove((R+4372),(R+4368),4);
}
B6912d9:{NFSU2_TR(0x6912d9);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6912dd:{NFSU2_TR(0x6912dd);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6912e0:{NFSU2_TR(0x6912e0);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6912e6:{NFSU2_TR(0x6912e6);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6912eb:{NFSU2_TR(0x6912eb);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6912ef:{NFSU2_TR(0x6912ef);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6912f2:{NFSU2_TR(0x6912f2);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6912f8:{NFSU2_TR(0x6912f8);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6912fc:{NFSU2_TR(0x6912fc);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691300:{NFSU2_TR(0x691300);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B691304:{NFSU2_TR(0x691304);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B69130a:{NFSU2_TR(0x69130a);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B69130e:{NFSU2_TR(0x69130e);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691312:{NFSU2_TR(0x691312);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B691316:{NFSU2_TR(0x691316);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B69131c:{NFSU2_TR(0x69131c);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691320:{NFSU2_TR(0x691320);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691324:{NFSU2_TR(0x691324);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B691328:{NFSU2_TR(0x691328);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B69132c:{NFSU2_TR(0x69132c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691330:{NFSU2_TR(0x691330);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B691335:{NFSU2_TR(0x691335);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691339:{NFSU2_TR(0x691339);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B69133c:{NFSU2_TR(0x69133c);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B691341:{NFSU2_TR(0x691341);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B691344:{NFSU2_TR(0x691344);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B691349:{NFSU2_TR(0x691349);
__builtin_memmove((R+4356),(R+4352),4);
}
B69134c:{NFSU2_TR(0x69134c);
__builtin_memmove((R+4372),(R+4368),4);
}
B69134f:{NFSU2_TR(0x69134f);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B691353:{NFSU2_TR(0x691353);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B691356:{NFSU2_TR(0x691356);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B69135c:{NFSU2_TR(0x69135c);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B691361:{NFSU2_TR(0x691361);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691365:{NFSU2_TR(0x691365);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B691368:{NFSU2_TR(0x691368);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69136e:{NFSU2_TR(0x69136e);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B691372:{NFSU2_TR(0x691372);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691376:{NFSU2_TR(0x691376);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B69137a:{NFSU2_TR(0x69137a);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B691380:{NFSU2_TR(0x691380);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691384:{NFSU2_TR(0x691384);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691388:{NFSU2_TR(0x691388);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69138c:{NFSU2_TR(0x69138c);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B691392:{NFSU2_TR(0x691392);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691396:{NFSU2_TR(0x691396);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B69139a:{NFSU2_TR(0x69139a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69139e:{NFSU2_TR(0x69139e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6913a2:{NFSU2_TR(0x6913a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6913a6:{NFSU2_TR(0x6913a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B6913aa:{NFSU2_TR(0x6913aa);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B6913ad:{NFSU2_TR(0x6913ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B6913b1:{NFSU2_TR(0x6913b1);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B6913b5:{NFSU2_TR(0x6913b5);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B6913b9:{NFSU2_TR(0x6913b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6913bd:{NFSU2_TR(0x6913bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B6913c1:{NFSU2_TR(0x6913c1);
{goto L69159c;}
}
B6913c6:L6913c6:{c.instructions+=112;NFSU2_TR(0x6913c6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6913c9:{NFSU2_TR(0x6913c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6913cd:{NFSU2_TR(0x6913cd);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6913d2:{NFSU2_TR(0x6913d2);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6913d5:{NFSU2_TR(0x6913d5);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6913da:{NFSU2_TR(0x6913da);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6913dd:{NFSU2_TR(0x6913dd);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6913e2:{NFSU2_TR(0x6913e2);
__builtin_memmove((R+4356),(R+4352),4);
}
B6913e5:{NFSU2_TR(0x6913e5);
__builtin_memmove((R+4372),(R+4368),4);
}
B6913e8:{NFSU2_TR(0x6913e8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6913ec:{NFSU2_TR(0x6913ec);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6913ef:{NFSU2_TR(0x6913ef);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6913f5:{NFSU2_TR(0x6913f5);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6913fa:{NFSU2_TR(0x6913fa);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6913fe:{NFSU2_TR(0x6913fe);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B691401:{NFSU2_TR(0x691401);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B691407:{NFSU2_TR(0x691407);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B69140b:{NFSU2_TR(0x69140b);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B69140f:{NFSU2_TR(0x69140f);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B691413:{NFSU2_TR(0x691413);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B691419:{NFSU2_TR(0x691419);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B69141d:{NFSU2_TR(0x69141d);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691421:{NFSU2_TR(0x691421);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B691425:{NFSU2_TR(0x691425);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B69142b:{NFSU2_TR(0x69142b);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B69142f:{NFSU2_TR(0x69142f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691433:{NFSU2_TR(0x691433);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B691437:{NFSU2_TR(0x691437);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B69143b:{NFSU2_TR(0x69143b);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B69143e:{NFSU2_TR(0x69143e);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B691443:{NFSU2_TR(0x691443);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691447:{NFSU2_TR(0x691447);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B69144a:{NFSU2_TR(0x69144a);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B69144f:{NFSU2_TR(0x69144f);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B691452:{NFSU2_TR(0x691452);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B691457:{NFSU2_TR(0x691457);
__builtin_memmove((R+4356),(R+4352),4);
}
B69145a:{NFSU2_TR(0x69145a);
__builtin_memmove((R+4372),(R+4368),4);
}
B69145d:{NFSU2_TR(0x69145d);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B691461:{NFSU2_TR(0x691461);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B691464:{NFSU2_TR(0x691464);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B69146a:{NFSU2_TR(0x69146a);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B69146f:{NFSU2_TR(0x69146f);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691473:{NFSU2_TR(0x691473);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B691476:{NFSU2_TR(0x691476);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69147c:{NFSU2_TR(0x69147c);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B691480:{NFSU2_TR(0x691480);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691484:{NFSU2_TR(0x691484);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B691488:{NFSU2_TR(0x691488);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B69148e:{NFSU2_TR(0x69148e);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691492:{NFSU2_TR(0x691492);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691496:{NFSU2_TR(0x691496);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69149a:{NFSU2_TR(0x69149a);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6914a0:{NFSU2_TR(0x6914a0);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6914a4:{NFSU2_TR(0x6914a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6914a8:{NFSU2_TR(0x6914a8);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6914ac:{NFSU2_TR(0x6914ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6914b0:{NFSU2_TR(0x6914b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6914b4:{NFSU2_TR(0x6914b4);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6914b9:{NFSU2_TR(0x6914b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6914bd:{NFSU2_TR(0x6914bd);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6914c0:{NFSU2_TR(0x6914c0);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6914c5:{NFSU2_TR(0x6914c5);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6914c8:{NFSU2_TR(0x6914c8);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6914cd:{NFSU2_TR(0x6914cd);
__builtin_memmove((R+4356),(R+4352),4);
}
B6914d0:{NFSU2_TR(0x6914d0);
__builtin_memmove((R+4372),(R+4368),4);
}
B6914d3:{NFSU2_TR(0x6914d3);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6914d7:{NFSU2_TR(0x6914d7);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6914da:{NFSU2_TR(0x6914da);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6914e0:{NFSU2_TR(0x6914e0);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6914e5:{NFSU2_TR(0x6914e5);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6914e9:{NFSU2_TR(0x6914e9);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6914ec:{NFSU2_TR(0x6914ec);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6914f2:{NFSU2_TR(0x6914f2);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6914f6:{NFSU2_TR(0x6914f6);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6914fa:{NFSU2_TR(0x6914fa);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6914fe:{NFSU2_TR(0x6914fe);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B691504:{NFSU2_TR(0x691504);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691508:{NFSU2_TR(0x691508);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B69150c:{NFSU2_TR(0x69150c);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B691510:{NFSU2_TR(0x691510);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B691516:{NFSU2_TR(0x691516);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B69151a:{NFSU2_TR(0x69151a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69151e:{NFSU2_TR(0x69151e);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B691522:{NFSU2_TR(0x691522);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691526:{NFSU2_TR(0x691526);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69152a:{NFSU2_TR(0x69152a);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B69152f:{NFSU2_TR(0x69152f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691533:{NFSU2_TR(0x691533);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B691536:{NFSU2_TR(0x691536);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B69153b:{NFSU2_TR(0x69153b);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B69153e:{NFSU2_TR(0x69153e);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B691543:{NFSU2_TR(0x691543);
__builtin_memmove((R+4356),(R+4352),4);
}
B691546:{NFSU2_TR(0x691546);
__builtin_memmove((R+4372),(R+4368),4);
}
B691549:{NFSU2_TR(0x691549);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B69154d:{NFSU2_TR(0x69154d);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B691550:{NFSU2_TR(0x691550);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B691556:{NFSU2_TR(0x691556);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B69155b:{NFSU2_TR(0x69155b);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B69155f:{NFSU2_TR(0x69155f);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B691562:{NFSU2_TR(0x691562);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B691568:{NFSU2_TR(0x691568);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B69156c:{NFSU2_TR(0x69156c);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691570:{NFSU2_TR(0x691570);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B691574:{NFSU2_TR(0x691574);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B69157a:{NFSU2_TR(0x69157a);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B69157e:{NFSU2_TR(0x69157e);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691582:{NFSU2_TR(0x691582);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B691586:{NFSU2_TR(0x691586);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B69158c:{NFSU2_TR(0x69158c);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691590:{NFSU2_TR(0x691590);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B691594:{NFSU2_TR(0x691594);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691598:{NFSU2_TR(0x691598);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69159c:L69159c:{c.instructions+=3;NFSU2_TR(0x69159c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69159f:{NFSU2_TR(0x69159f);
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
B6915a1:{NFSU2_TR(0x6915a1);
if(r1(R+518)){{goto L6915c2;}}
}
B6915a3:L6915a3:{c.instructions+=8;NFSU2_TR(0x6915a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6915a7:{NFSU2_TR(0x6915a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B6915ab:{NFSU2_TR(0x6915ab);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B6915ae:{NFSU2_TR(0x6915ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B6915b2:{NFSU2_TR(0x6915b2);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B6915b6:{NFSU2_TR(0x6915b6);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B6915ba:{NFSU2_TR(0x6915ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6915be:{NFSU2_TR(0x6915be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B6915c2:L6915c2:{c.instructions+=4;NFSU2_TR(0x6915c2);
__builtin_memmove((R+16),(R+20),4);
}
B6915c4:{NFSU2_TR(0x6915c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6915c5:{NFSU2_TR(0x6915c5);
w2(R+4260,0xffffu);
}
B6915c7:{NFSU2_TR(0x6915c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6915ca:L6915ca:{c.instructions+=12;NFSU2_TR(0x6915ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6915cd:{NFSU2_TR(0x6915cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6915d1:{NFSU2_TR(0x6915d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B6915d5:{NFSU2_TR(0x6915d5);
__builtin_memmove((R+4352),gp(0x7b71e8),8);
}
B6915dc:{NFSU2_TR(0x6915dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B6915df:{NFSU2_TR(0x6915df);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6915e3:{NFSU2_TR(0x6915e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6915e6:{NFSU2_TR(0x6915e6);
__builtin_memmove((R+4368),(R+4352),8);
}
B6915e9:{NFSU2_TR(0x6915e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6915ee:{NFSU2_TR(0x6915ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6915f3:{NFSU2_TR(0x6915f3);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6915f8:{NFSU2_TR(0x6915f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6915fdull));
TAIL_STATIC(0x6d4460u,6d4);
}
B6915fd:L6915fd:{c.instructions+=4;NFSU2_TR(0x6915fd);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691602:{NFSU2_TR(0x691602);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691607:{NFSU2_TR(0x691607);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4356),4);
}
B69160a:{NFSU2_TR(0x69160a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69160full));
TAIL_STATIC(0x6d4460u,6d4);
}
B69160f:L69160f:{c.instructions+=3;NFSU2_TR(0x69160f);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691614:{NFSU2_TR(0x691614);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691619:{NFSU2_TR(0x691619);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69161eull));
TAIL_STATIC(0x6d4460u,6d4);
}
B69161e:L69161e:{c.instructions+=93;NFSU2_TR(0x69161e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691623:{NFSU2_TR(0x691623);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B691628:{NFSU2_TR(0x691628);
__builtin_memmove((R+4464),gp(0x7b7178),8);
}
B69162f:{NFSU2_TR(0x69162f);
__builtin_memmove((R+4400),(R+4352),8);
}
B691632:{NFSU2_TR(0x691632);
__builtin_memmove((R+4416),(R+4352),8);
}
B691635:{NFSU2_TR(0x691635);
__builtin_memmove((R+4432),(R+4352),8);
}
B691638:{NFSU2_TR(0x691638);
__builtin_memmove((R+4356),(R+4352),4);
}
B69163b:{NFSU2_TR(0x69163b);
__builtin_memmove((R+4404),(R+4400),4);
}
B69163e:{NFSU2_TR(0x69163e);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B691641:{NFSU2_TR(0x691641);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B691644:{NFSU2_TR(0x691644);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4464))));
}
B691647:{NFSU2_TR(0x691647);
w8(R+4464,shr<u64>(r8(R+4464),u64(u32(0x20ull))));
}
B69164b:{NFSU2_TR(0x69164b);
__builtin_memmove((R+4448),(R+4384),8);
}
B69164e:{NFSU2_TR(0x69164e);
__builtin_memmove((R+4388),(R+4384),4);
}
B691651:{NFSU2_TR(0x691651);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B691654:{NFSU2_TR(0x691654);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4464))));
}
B691657:{NFSU2_TR(0x691657);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4448))));}
}
B69165b:{NFSU2_TR(0x69165b);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B69165f:{NFSU2_TR(0x69165f);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B691663:{NFSU2_TR(0x691663);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B691667:{NFSU2_TR(0x691667);
__builtin_memmove((R+4464),(R+4368),8);
}
B69166a:{NFSU2_TR(0x69166a);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4468),4);
}
B69166d:{NFSU2_TR(0x69166d);
__builtin_memmove((R+4468),(R+4368),4);
}
B691670:{NFSU2_TR(0x691670);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B691674:{NFSU2_TR(0x691674);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B691678:{NFSU2_TR(0x691678);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B69167c:{NFSU2_TR(0x69167c);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B691680:{NFSU2_TR(0x691680);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B691684:{NFSU2_TR(0x691684);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B691688:{NFSU2_TR(0x691688);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69168c:{NFSU2_TR(0x69168c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691690:{NFSU2_TR(0x691690);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+24),(U+0),4);
}
B691693:{NFSU2_TR(0x691693);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B691697:{NFSU2_TR(0x691697);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B69169a:{NFSU2_TR(0x69169a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69169d:{NFSU2_TR(0x69169d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6916a1:{NFSU2_TR(0x6916a1);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6916a6:{NFSU2_TR(0x6916a6);
__builtin_memmove((R+4384),(R+4352),8);
}
B6916a9:{NFSU2_TR(0x6916a9);
__builtin_memmove((R+4400),(R+4352),8);
}
B6916ac:{NFSU2_TR(0x6916ac);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B6916b0:{NFSU2_TR(0x6916b0);
__builtin_memmove((R+4416),(R+4368),8);
}
B6916b3:{NFSU2_TR(0x6916b3);
__builtin_memmove((R+4464),(R+4368),8);
}
B6916b6:{NFSU2_TR(0x6916b6);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B6916ba:{NFSU2_TR(0x6916ba);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6916bd:{NFSU2_TR(0x6916bd);
__builtin_memmove((R+4432),(R+4352),8);
}
B6916c0:{NFSU2_TR(0x6916c0);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B6916c3:{NFSU2_TR(0x6916c3);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B6916c7:{NFSU2_TR(0x6916c7);
__builtin_memmove((R+4372),(R+4352),4);
}
B6916ca:{NFSU2_TR(0x6916ca);
__builtin_memmove((R+4468),(R+4464),4);
}
B6916cd:{NFSU2_TR(0x6916cd);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6916d1:{NFSU2_TR(0x6916d1);
__builtin_memmove((R+4448),(R+4368),8);
}
B6916d4:{NFSU2_TR(0x6916d4);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B6916d8:{NFSU2_TR(0x6916d8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B6916dc:{NFSU2_TR(0x6916dc);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B6916df:{NFSU2_TR(0x6916df);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B6916e3:{NFSU2_TR(0x6916e3);
__builtin_memmove((R+4384),(R+4368),8);
}
B6916e6:{NFSU2_TR(0x6916e6);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4468),4);
}
B6916e9:{NFSU2_TR(0x6916e9);
__builtin_memmove((R+4468),(R+4464),4);
}
B6916ec:{NFSU2_TR(0x6916ec);
__builtin_memmove((R+4452),(R+4448),4);
}
B6916ef:{NFSU2_TR(0x6916ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6916f3:{NFSU2_TR(0x6916f3);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6916f7:{NFSU2_TR(0x6916f7);
{wv<8>((R+4400),uo::pfacc<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B6916fb:{NFSU2_TR(0x6916fb);
__builtin_memmove((R+4416),(R+4368),8);
}
B6916fe:{NFSU2_TR(0x6916fe);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4436),4);
}
B691701:{NFSU2_TR(0x691701);
{wv<8>((R+4400),uo::pfsubr<8>(rv<8>((R+4400)),rv<8>(gp(0x7b7158))));}
}
B691709:{NFSU2_TR(0x691709);
{wv<8>((R+4464),uo::pfsubr<8>(rv<8>((R+4464)),rv<8>(gp(0x7b7158))));}
}
B691711:{NFSU2_TR(0x691711);
__builtin_memmove((R+4404),(R+4352),4);
}
B691714:{NFSU2_TR(0x691714);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B691718:{NFSU2_TR(0x691718);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69171c:{NFSU2_TR(0x69171c);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B691720:{NFSU2_TR(0x691720);
__builtin_memmove((R+4400),(R+4384),8);
}
B691723:{NFSU2_TR(0x691723);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B691727:{NFSU2_TR(0x691727);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B69172b:{NFSU2_TR(0x69172b);
__builtin_memmove((R+4432),(R+4416),8);
}
B69172e:{NFSU2_TR(0x69172e);
__builtin_memmove((R+4388),(R+4352),4);
}
B691731:{NFSU2_TR(0x691731);
__builtin_memmove((R+4448),(R+4368),8);
}
B691734:{NFSU2_TR(0x691734);
__builtin_memmove((R+4420),(R+4464),4);
}
B691737:{NFSU2_TR(0x691737);
__builtin_memmove((R+4372),(R+4368),4);
}
B69173a:{NFSU2_TR(0x69173a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69173e:{NFSU2_TR(0x69173e);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4356),4);
}
B691741:{NFSU2_TR(0x691741);
__builtin_memmove((R+4356),gp(0x7b7158),4);
}
B691748:{NFSU2_TR(0x691748);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69174c:{NFSU2_TR(0x69174c);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B69174f:{NFSU2_TR(0x69174f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691753:{NFSU2_TR(0x691753);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4372),4);
}
B691756:{NFSU2_TR(0x691756);
__builtin_memmove((R+4452),(R+4400),4);
}
B691759:{NFSU2_TR(0x691759);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B69175c:{NFSU2_TR(0x69175c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691760:{NFSU2_TR(0x691760);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691764:{NFSU2_TR(0x691764);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+16),(U+0),4);
}
B691767:{NFSU2_TR(0x691767);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B69176a:{NFSU2_TR(0x69176a);
w2(R+4260,0xffffu);
}
B69176c:{NFSU2_TR(0x69176c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69176f:L69176f:{c.instructions+=18;NFSU2_TR(0x69176f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B691773:{NFSU2_TR(0x691773);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4448,u64(r4(U+4)));
}
B691778:{NFSU2_TR(0x691778);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B69177b:{NFSU2_TR(0x69177b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69177f:{NFSU2_TR(0x69177f);
__builtin_memmove((R+4432),gp(0x7b7138),8);
}
B691786:{NFSU2_TR(0x691786);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69178a:{NFSU2_TR(0x69178a);
u8 U[8];
__builtin_memmove((U+0),(R+4448),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B69178d:{NFSU2_TR(0x69178d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691791:{NFSU2_TR(0x691791);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(r8(R+4464)));
s4(u32(r4(U+0)),r4(U+4));
}
B691795:{NFSU2_TR(0x691795);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B691798:{NFSU2_TR(0x691798);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(r8(R+4448)));
s4(u32(r4(U+0)),r4(U+4));
}
B69179c:{NFSU2_TR(0x69179c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6917a0:{NFSU2_TR(0x6917a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6917a2:{NFSU2_TR(0x6917a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6917a6:{NFSU2_TR(0x6917a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6917aa:{NFSU2_TR(0x6917aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6917ae:{NFSU2_TR(0x6917ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6917b2:{NFSU2_TR(0x6917b2);
if(r1(R+518)){{goto L691c74;}}
}
B6917b8:L6917b8:{c.instructions+=56;NFSU2_TR(0x6917b8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6917bb:{NFSU2_TR(0x6917bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6917bf:{NFSU2_TR(0x6917bf);
__builtin_memmove((R+4384),(R+4352),8);
}
B6917c2:{NFSU2_TR(0x6917c2);
__builtin_memmove((R+4400),(R+4352),8);
}
B6917c5:{NFSU2_TR(0x6917c5);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B6917c9:{NFSU2_TR(0x6917c9);
__builtin_memmove((R+4416),(R+4368),8);
}
B6917cc:{NFSU2_TR(0x6917cc);
__builtin_memmove((R+4464),(R+4368),8);
}
B6917cf:{NFSU2_TR(0x6917cf);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B6917d3:{NFSU2_TR(0x6917d3);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6917d6:{NFSU2_TR(0x6917d6);
__builtin_memmove((R+4432),(R+4352),8);
}
B6917d9:{NFSU2_TR(0x6917d9);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B6917dc:{NFSU2_TR(0x6917dc);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B6917e0:{NFSU2_TR(0x6917e0);
__builtin_memmove((R+4372),(R+4352),4);
}
B6917e3:{NFSU2_TR(0x6917e3);
__builtin_memmove((R+4468),(R+4464),4);
}
B6917e6:{NFSU2_TR(0x6917e6);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6917ea:{NFSU2_TR(0x6917ea);
__builtin_memmove((R+4448),(R+4368),8);
}
B6917ed:{NFSU2_TR(0x6917ed);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B6917f1:{NFSU2_TR(0x6917f1);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B6917f5:{NFSU2_TR(0x6917f5);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B6917f8:{NFSU2_TR(0x6917f8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B6917fc:{NFSU2_TR(0x6917fc);
__builtin_memmove((R+4384),(R+4368),8);
}
B6917ff:{NFSU2_TR(0x6917ff);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4468),4);
}
B691802:{NFSU2_TR(0x691802);
__builtin_memmove((R+4468),(R+4464),4);
}
B691805:{NFSU2_TR(0x691805);
__builtin_memmove((R+4452),(R+4448),4);
}
B691808:{NFSU2_TR(0x691808);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69180d:{NFSU2_TR(0x69180d);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691811:{NFSU2_TR(0x691811);
{wv<8>((R+4400),uo::pfacc<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B691815:{NFSU2_TR(0x691815);
__builtin_memmove((R+4416),(R+4368),8);
}
B691818:{NFSU2_TR(0x691818);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4436),4);
}
B69181b:{NFSU2_TR(0x69181b);
{wv<8>((R+4400),uo::pfsubr<8>(rv<8>((R+4400)),rv<8>(gp(0x7b7158))));}
}
B691823:{NFSU2_TR(0x691823);
{wv<8>((R+4464),uo::pfsubr<8>(rv<8>((R+4464)),rv<8>(gp(0x7b7158))));}
}
B69182b:{NFSU2_TR(0x69182b);
__builtin_memmove((R+4404),(R+4352),4);
}
B69182e:{NFSU2_TR(0x69182e);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B691832:{NFSU2_TR(0x691832);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691837:{NFSU2_TR(0x691837);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B69183b:{NFSU2_TR(0x69183b);
__builtin_memmove((R+4400),(R+4384),8);
}
B69183e:{NFSU2_TR(0x69183e);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B691842:{NFSU2_TR(0x691842);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B691846:{NFSU2_TR(0x691846);
__builtin_memmove((R+4432),(R+4416),8);
}
B691849:{NFSU2_TR(0x691849);
__builtin_memmove((R+4388),(R+4352),4);
}
B69184c:{NFSU2_TR(0x69184c);
__builtin_memmove((R+4448),(R+4368),8);
}
B69184f:{NFSU2_TR(0x69184f);
__builtin_memmove((R+4420),(R+4464),4);
}
B691852:{NFSU2_TR(0x691852);
__builtin_memmove((R+4372),(R+4368),4);
}
B691855:{NFSU2_TR(0x691855);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69185a:{NFSU2_TR(0x69185a);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4356),4);
}
B69185d:{NFSU2_TR(0x69185d);
__builtin_memmove((R+4356),gp(0x7b7158),4);
}
B691864:{NFSU2_TR(0x691864);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691869:{NFSU2_TR(0x691869);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B69186c:{NFSU2_TR(0x69186c);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691871:{NFSU2_TR(0x691871);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4372),4);
}
B691874:{NFSU2_TR(0x691874);
__builtin_memmove((R+4452),(R+4400),4);
}
B691877:{NFSU2_TR(0x691877);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(R+16)),r8(U+0));
}
B69187b:{NFSU2_TR(0x69187b);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691880:{NFSU2_TR(0x691880);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691885:{NFSU2_TR(0x691885);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B691887:{NFSU2_TR(0x691887);
if(r1(R+518)){{goto L691aa2;}}
}
B69188d:L69188d:{c.instructions+=129;NFSU2_TR(0x69188d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691891:{NFSU2_TR(0x691891);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B691895:{NFSU2_TR(0x691895);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B691898:{NFSU2_TR(0x691898);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B69189c:{NFSU2_TR(0x69189c);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B6918a0:{NFSU2_TR(0x6918a0);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B6918a4:{NFSU2_TR(0x6918a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6918a8:{NFSU2_TR(0x6918a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B6918ac:{NFSU2_TR(0x6918ac);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6918af:{NFSU2_TR(0x6918af);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6918b3:{NFSU2_TR(0x6918b3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B6918b7:{NFSU2_TR(0x6918b7);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6918ba:{NFSU2_TR(0x6918ba);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6918bf:{NFSU2_TR(0x6918bf);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6918c2:{NFSU2_TR(0x6918c2);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6918c7:{NFSU2_TR(0x6918c7);
__builtin_memmove((R+4356),(R+4352),4);
}
B6918ca:{NFSU2_TR(0x6918ca);
__builtin_memmove((R+4372),(R+4368),4);
}
B6918cd:{NFSU2_TR(0x6918cd);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6918d1:{NFSU2_TR(0x6918d1);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6918d4:{NFSU2_TR(0x6918d4);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6918da:{NFSU2_TR(0x6918da);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6918df:{NFSU2_TR(0x6918df);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6918e3:{NFSU2_TR(0x6918e3);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6918e6:{NFSU2_TR(0x6918e6);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6918ec:{NFSU2_TR(0x6918ec);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6918f0:{NFSU2_TR(0x6918f0);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6918f4:{NFSU2_TR(0x6918f4);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6918f8:{NFSU2_TR(0x6918f8);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6918fe:{NFSU2_TR(0x6918fe);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691902:{NFSU2_TR(0x691902);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691906:{NFSU2_TR(0x691906);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69190a:{NFSU2_TR(0x69190a);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B691910:{NFSU2_TR(0x691910);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691914:{NFSU2_TR(0x691914);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691918:{NFSU2_TR(0x691918);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B69191c:{NFSU2_TR(0x69191c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691920:{NFSU2_TR(0x691920);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B691923:{NFSU2_TR(0x691923);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B691927:{NFSU2_TR(0x691927);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69192b:{NFSU2_TR(0x69192b);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B69192e:{NFSU2_TR(0x69192e);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B691933:{NFSU2_TR(0x691933);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B691936:{NFSU2_TR(0x691936);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69193b:{NFSU2_TR(0x69193b);
__builtin_memmove((R+4356),(R+4352),4);
}
B69193e:{NFSU2_TR(0x69193e);
__builtin_memmove((R+4372),(R+4368),4);
}
B691941:{NFSU2_TR(0x691941);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B691945:{NFSU2_TR(0x691945);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B691948:{NFSU2_TR(0x691948);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B69194e:{NFSU2_TR(0x69194e);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B691953:{NFSU2_TR(0x691953);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691957:{NFSU2_TR(0x691957);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69195a:{NFSU2_TR(0x69195a);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B691960:{NFSU2_TR(0x691960);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B691964:{NFSU2_TR(0x691964);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691968:{NFSU2_TR(0x691968);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B69196c:{NFSU2_TR(0x69196c);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B691972:{NFSU2_TR(0x691972);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691976:{NFSU2_TR(0x691976);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B69197a:{NFSU2_TR(0x69197a);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69197e:{NFSU2_TR(0x69197e);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B691984:{NFSU2_TR(0x691984);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691988:{NFSU2_TR(0x691988);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69198c:{NFSU2_TR(0x69198c);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B691990:{NFSU2_TR(0x691990);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691994:{NFSU2_TR(0x691994);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691998:{NFSU2_TR(0x691998);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B69199c:{NFSU2_TR(0x69199c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6919a0:{NFSU2_TR(0x6919a0);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6919a3:{NFSU2_TR(0x6919a3);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6919a8:{NFSU2_TR(0x6919a8);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6919ab:{NFSU2_TR(0x6919ab);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6919b0:{NFSU2_TR(0x6919b0);
__builtin_memmove((R+4356),(R+4352),4);
}
B6919b3:{NFSU2_TR(0x6919b3);
__builtin_memmove((R+4372),(R+4368),4);
}
B6919b6:{NFSU2_TR(0x6919b6);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6919ba:{NFSU2_TR(0x6919ba);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6919bd:{NFSU2_TR(0x6919bd);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6919c3:{NFSU2_TR(0x6919c3);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6919c8:{NFSU2_TR(0x6919c8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6919cc:{NFSU2_TR(0x6919cc);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6919cf:{NFSU2_TR(0x6919cf);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6919d5:{NFSU2_TR(0x6919d5);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6919d9:{NFSU2_TR(0x6919d9);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6919dd:{NFSU2_TR(0x6919dd);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6919e1:{NFSU2_TR(0x6919e1);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6919e7:{NFSU2_TR(0x6919e7);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6919eb:{NFSU2_TR(0x6919eb);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6919ef:{NFSU2_TR(0x6919ef);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6919f3:{NFSU2_TR(0x6919f3);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6919f9:{NFSU2_TR(0x6919f9);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6919fd:{NFSU2_TR(0x6919fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691a01:{NFSU2_TR(0x691a01);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B691a05:{NFSU2_TR(0x691a05);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691a09:{NFSU2_TR(0x691a09);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691a0d:{NFSU2_TR(0x691a0d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B691a11:{NFSU2_TR(0x691a11);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691a15:{NFSU2_TR(0x691a15);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B691a18:{NFSU2_TR(0x691a18);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B691a1d:{NFSU2_TR(0x691a1d);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B691a20:{NFSU2_TR(0x691a20);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B691a25:{NFSU2_TR(0x691a25);
__builtin_memmove((R+4356),(R+4352),4);
}
B691a28:{NFSU2_TR(0x691a28);
__builtin_memmove((R+4372),(R+4368),4);
}
B691a2b:{NFSU2_TR(0x691a2b);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B691a2f:{NFSU2_TR(0x691a2f);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B691a32:{NFSU2_TR(0x691a32);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B691a38:{NFSU2_TR(0x691a38);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B691a3d:{NFSU2_TR(0x691a3d);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691a41:{NFSU2_TR(0x691a41);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B691a44:{NFSU2_TR(0x691a44);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B691a4a:{NFSU2_TR(0x691a4a);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B691a4e:{NFSU2_TR(0x691a4e);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691a52:{NFSU2_TR(0x691a52);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B691a56:{NFSU2_TR(0x691a56);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B691a5c:{NFSU2_TR(0x691a5c);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691a60:{NFSU2_TR(0x691a60);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691a64:{NFSU2_TR(0x691a64);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B691a68:{NFSU2_TR(0x691a68);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B691a6e:{NFSU2_TR(0x691a6e);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691a72:{NFSU2_TR(0x691a72);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B691a76:{NFSU2_TR(0x691a76);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691a7a:{NFSU2_TR(0x691a7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691a7e:{NFSU2_TR(0x691a7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691a82:{NFSU2_TR(0x691a82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B691a86:{NFSU2_TR(0x691a86);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B691a89:{NFSU2_TR(0x691a89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B691a8d:{NFSU2_TR(0x691a8d);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B691a91:{NFSU2_TR(0x691a91);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B691a95:{NFSU2_TR(0x691a95);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691a99:{NFSU2_TR(0x691a99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B691a9d:{NFSU2_TR(0x691a9d);
{goto L691c74;}
}
B691aa2:L691aa2:{c.instructions+=112;NFSU2_TR(0x691aa2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B691aa5:{NFSU2_TR(0x691aa5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691aa9:{NFSU2_TR(0x691aa9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B691aad:{NFSU2_TR(0x691aad);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B691ab0:{NFSU2_TR(0x691ab0);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B691ab5:{NFSU2_TR(0x691ab5);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B691ab8:{NFSU2_TR(0x691ab8);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B691abd:{NFSU2_TR(0x691abd);
__builtin_memmove((R+4356),(R+4352),4);
}
B691ac0:{NFSU2_TR(0x691ac0);
__builtin_memmove((R+4372),(R+4368),4);
}
B691ac3:{NFSU2_TR(0x691ac3);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B691ac7:{NFSU2_TR(0x691ac7);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B691aca:{NFSU2_TR(0x691aca);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B691ad0:{NFSU2_TR(0x691ad0);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B691ad5:{NFSU2_TR(0x691ad5);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691ad9:{NFSU2_TR(0x691ad9);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B691adc:{NFSU2_TR(0x691adc);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B691ae2:{NFSU2_TR(0x691ae2);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B691ae6:{NFSU2_TR(0x691ae6);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691aea:{NFSU2_TR(0x691aea);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B691aee:{NFSU2_TR(0x691aee);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B691af4:{NFSU2_TR(0x691af4);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691af8:{NFSU2_TR(0x691af8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691afc:{NFSU2_TR(0x691afc);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B691b00:{NFSU2_TR(0x691b00);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B691b06:{NFSU2_TR(0x691b06);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691b0a:{NFSU2_TR(0x691b0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691b0e:{NFSU2_TR(0x691b0e);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B691b12:{NFSU2_TR(0x691b12);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691b16:{NFSU2_TR(0x691b16);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B691b19:{NFSU2_TR(0x691b19);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B691b1d:{NFSU2_TR(0x691b1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691b21:{NFSU2_TR(0x691b21);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B691b24:{NFSU2_TR(0x691b24);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B691b29:{NFSU2_TR(0x691b29);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B691b2c:{NFSU2_TR(0x691b2c);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B691b31:{NFSU2_TR(0x691b31);
__builtin_memmove((R+4356),(R+4352),4);
}
B691b34:{NFSU2_TR(0x691b34);
__builtin_memmove((R+4372),(R+4368),4);
}
B691b37:{NFSU2_TR(0x691b37);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B691b3b:{NFSU2_TR(0x691b3b);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B691b3e:{NFSU2_TR(0x691b3e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B691b44:{NFSU2_TR(0x691b44);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B691b49:{NFSU2_TR(0x691b49);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691b4d:{NFSU2_TR(0x691b4d);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B691b50:{NFSU2_TR(0x691b50);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B691b56:{NFSU2_TR(0x691b56);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B691b5a:{NFSU2_TR(0x691b5a);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691b5e:{NFSU2_TR(0x691b5e);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B691b62:{NFSU2_TR(0x691b62);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B691b68:{NFSU2_TR(0x691b68);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691b6c:{NFSU2_TR(0x691b6c);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691b70:{NFSU2_TR(0x691b70);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B691b74:{NFSU2_TR(0x691b74);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B691b7a:{NFSU2_TR(0x691b7a);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691b7e:{NFSU2_TR(0x691b7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691b82:{NFSU2_TR(0x691b82);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B691b86:{NFSU2_TR(0x691b86);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691b8a:{NFSU2_TR(0x691b8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691b8e:{NFSU2_TR(0x691b8e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B691b92:{NFSU2_TR(0x691b92);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691b96:{NFSU2_TR(0x691b96);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B691b99:{NFSU2_TR(0x691b99);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B691b9e:{NFSU2_TR(0x691b9e);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B691ba1:{NFSU2_TR(0x691ba1);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B691ba6:{NFSU2_TR(0x691ba6);
__builtin_memmove((R+4356),(R+4352),4);
}
B691ba9:{NFSU2_TR(0x691ba9);
__builtin_memmove((R+4372),(R+4368),4);
}
B691bac:{NFSU2_TR(0x691bac);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B691bb0:{NFSU2_TR(0x691bb0);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B691bb3:{NFSU2_TR(0x691bb3);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B691bb9:{NFSU2_TR(0x691bb9);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B691bbe:{NFSU2_TR(0x691bbe);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691bc2:{NFSU2_TR(0x691bc2);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B691bc5:{NFSU2_TR(0x691bc5);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B691bcb:{NFSU2_TR(0x691bcb);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B691bcf:{NFSU2_TR(0x691bcf);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691bd3:{NFSU2_TR(0x691bd3);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B691bd7:{NFSU2_TR(0x691bd7);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B691bdd:{NFSU2_TR(0x691bdd);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691be1:{NFSU2_TR(0x691be1);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691be5:{NFSU2_TR(0x691be5);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B691be9:{NFSU2_TR(0x691be9);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B691bef:{NFSU2_TR(0x691bef);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691bf3:{NFSU2_TR(0x691bf3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691bf7:{NFSU2_TR(0x691bf7);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B691bfb:{NFSU2_TR(0x691bfb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691bff:{NFSU2_TR(0x691bff);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691c03:{NFSU2_TR(0x691c03);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B691c07:{NFSU2_TR(0x691c07);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691c0b:{NFSU2_TR(0x691c0b);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B691c0e:{NFSU2_TR(0x691c0e);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B691c13:{NFSU2_TR(0x691c13);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B691c16:{NFSU2_TR(0x691c16);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B691c1b:{NFSU2_TR(0x691c1b);
__builtin_memmove((R+4356),(R+4352),4);
}
B691c1e:{NFSU2_TR(0x691c1e);
__builtin_memmove((R+4372),(R+4368),4);
}
B691c21:{NFSU2_TR(0x691c21);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B691c25:{NFSU2_TR(0x691c25);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B691c28:{NFSU2_TR(0x691c28);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B691c2e:{NFSU2_TR(0x691c2e);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B691c33:{NFSU2_TR(0x691c33);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691c37:{NFSU2_TR(0x691c37);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B691c3a:{NFSU2_TR(0x691c3a);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B691c40:{NFSU2_TR(0x691c40);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B691c44:{NFSU2_TR(0x691c44);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691c48:{NFSU2_TR(0x691c48);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B691c4c:{NFSU2_TR(0x691c4c);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B691c52:{NFSU2_TR(0x691c52);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691c56:{NFSU2_TR(0x691c56);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691c5a:{NFSU2_TR(0x691c5a);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B691c5e:{NFSU2_TR(0x691c5e);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B691c64:{NFSU2_TR(0x691c64);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691c68:{NFSU2_TR(0x691c68);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B691c6c:{NFSU2_TR(0x691c6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691c70:{NFSU2_TR(0x691c70);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691c74:L691c74:{c.instructions+=3;NFSU2_TR(0x691c74);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B691c78:{NFSU2_TR(0x691c78);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B691c7a:{NFSU2_TR(0x691c7a);
if(r1(R+518)){{goto L691c9b;}}
}
B691c7c:L691c7c:{c.instructions+=8;NFSU2_TR(0x691c7c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B691c7f:{NFSU2_TR(0x691c7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B691c83:{NFSU2_TR(0x691c83);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B691c87:{NFSU2_TR(0x691c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B691c8b:{NFSU2_TR(0x691c8b);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B691c8f:{NFSU2_TR(0x691c8f);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B691c93:{NFSU2_TR(0x691c93);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691c97:{NFSU2_TR(0x691c97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B691c9b:L691c9b:{c.instructions+=3;NFSU2_TR(0x691c9b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B691c9e:{NFSU2_TR(0x691c9e);
w2(R+4260,0xffffu);
}
B691ca0:{NFSU2_TR(0x691ca0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B691ca3:L691ca3:{c.instructions+=16;NFSU2_TR(0x691ca3);
__builtin_memmove((R+28),(R+28),4);
}
B691ca5:{NFSU2_TR(0x691ca5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B691ca6:{NFSU2_TR(0x691ca6);
__builtin_memmove((R+20),(R+16),4);
}
B691ca8:{NFSU2_TR(0x691ca8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B691cab:{NFSU2_TR(0x691cab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B691cae:{NFSU2_TR(0x691cae);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B691cb1:{NFSU2_TR(0x691cb1);
__builtin_memmove((R+0),(R+16),4);
}
B691cb4:{NFSU2_TR(0x691cb4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B691cb7:{NFSU2_TR(0x691cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B691cbb:{NFSU2_TR(0x691cbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B691cbf:{NFSU2_TR(0x691cbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B691cc3:{NFSU2_TR(0x691cc3);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+16)),r8(U+0));
}
B691cc7:{NFSU2_TR(0x691cc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B691ccc:{NFSU2_TR(0x691ccc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B691ccd:{NFSU2_TR(0x691ccd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B691cce:{NFSU2_TR(0x691cce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x691cd3ull));
TAIL_STATIC(0x693a80u,693);
}
B691cd3:L691cd3:{c.instructions+=2;NFSU2_TR(0x691cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B691cd7:{NFSU2_TR(0x691cd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x691cdcull));
TAIL_STATIC(0x6d4460u,6d4);
}
B691cdc:L691cdc:{c.instructions+=63;NFSU2_TR(0x691cdc);
__builtin_memmove((R+4464),(R+4352),8);
}
B691cdf:{NFSU2_TR(0x691cdf);
__builtin_memmove((R+4368),(R+4352),8);
}
B691ce2:{NFSU2_TR(0x691ce2);
{wv<8>((R+4352),uo::pfsubr<8>(rv<8>((R+4352)),rv<8>(gp(0x7b7158))));}
}
B691cea:{NFSU2_TR(0x691cea);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4468),4);
}
B691ced:{NFSU2_TR(0x691ced);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B691cf1:{NFSU2_TR(0x691cf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B691cf6:{NFSU2_TR(0x691cf6);
__builtin_memmove((R+4416),(R+4384),8);
}
B691cf9:{NFSU2_TR(0x691cf9);
__builtin_memmove((R+4432),(R+4400),8);
}
B691cfc:{NFSU2_TR(0x691cfc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(r8(R+4464)));
s4(u32(r4(U+0)),r4(U+4));
}
B691d01:{NFSU2_TR(0x691d01);
__builtin_memmove((R+4464),(R+4400),8);
}
B691d04:{NFSU2_TR(0x691d04);
__builtin_memmove((R+4404),(R+4400),4);
}
B691d07:{NFSU2_TR(0x691d07);
__builtin_memmove((R+4448),(R+4384),8);
}
B691d0a:{NFSU2_TR(0x691d0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B691d0e:{NFSU2_TR(0x691d0e);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4404),4);
}
B691d11:{NFSU2_TR(0x691d11);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B691d15:{NFSU2_TR(0x691d15);
__builtin_memmove((R+4356),(R+4352),4);
}
B691d18:{NFSU2_TR(0x691d18);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B691d1c:{NFSU2_TR(0x691d1c);
__builtin_memmove((R+4372),(R+4368),4);
}
B691d1f:{NFSU2_TR(0x691d1f);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B691d23:{NFSU2_TR(0x691d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B691d26:{NFSU2_TR(0x691d26);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B691d2a:{NFSU2_TR(0x691d2a);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B691d2e:{NFSU2_TR(0x691d2e);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4432))));}
}
B691d32:{NFSU2_TR(0x691d32);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B691d36:{NFSU2_TR(0x691d36);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B691d3a:{NFSU2_TR(0x691d3a);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B691d3e:{NFSU2_TR(0x691d3e);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B691d42:{NFSU2_TR(0x691d42);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B691d46:{NFSU2_TR(0x691d46);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B691d4b:{NFSU2_TR(0x691d4b);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B691d4e:{NFSU2_TR(0x691d4e);
__builtin_memmove((R+4372),(R+4368),4);
}
B691d51:{NFSU2_TR(0x691d51);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691d55:{NFSU2_TR(0x691d55);
__builtin_memmove((R+4436),(R+4352),4);
}
B691d58:{NFSU2_TR(0x691d58);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B691d5c:{NFSU2_TR(0x691d5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691d60:{NFSU2_TR(0x691d60);
__builtin_memmove((R+4468),(R+4448),4);
}
B691d63:{NFSU2_TR(0x691d63);
__builtin_memmove((R+4368),(R+4384),8);
}
B691d66:{NFSU2_TR(0x691d66);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B691d69:{NFSU2_TR(0x691d69);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691d6d:{NFSU2_TR(0x691d6d);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4464))));}
}
B691d71:{NFSU2_TR(0x691d71);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B691d75:{NFSU2_TR(0x691d75);
__builtin_memmove((R+4464),(R+4400),8);
}
B691d78:{NFSU2_TR(0x691d78);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B691d7c:{NFSU2_TR(0x691d7c);
__builtin_memmove((R+4432),(R+4416),8);
}
B691d7f:{NFSU2_TR(0x691d7f);
__builtin_memmove((R+4420),(R+4368),4);
}
B691d82:{NFSU2_TR(0x691d82);
__builtin_memmove((R+4404),(R+4352),4);
}
B691d85:{NFSU2_TR(0x691d85);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4356),4);
}
B691d88:{NFSU2_TR(0x691d88);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B691d8b:{NFSU2_TR(0x691d8b);
__builtin_memmove((R+4468),(R+4464),4);
}
B691d8e:{NFSU2_TR(0x691d8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691d92:{NFSU2_TR(0x691d92);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),gp(0x7b715c),4);
}
B691d99:{NFSU2_TR(0x691d99);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691d9d:{NFSU2_TR(0x691d9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691da1:{NFSU2_TR(0x691da1);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B691da4:{NFSU2_TR(0x691da4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691da8:{NFSU2_TR(0x691da8);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4388),4);
}
B691dab:{NFSU2_TR(0x691dab);
__builtin_memmove((R+4388),(R+4432),4);
}
B691dae:{NFSU2_TR(0x691dae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691db2:{NFSU2_TR(0x691db2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691db6:{NFSU2_TR(0x691db6);
__builtin_memmove((R+16),(R+20),4);
}
B691db8:{NFSU2_TR(0x691db8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B691db9:{NFSU2_TR(0x691db9);
w2(R+4260,0xffffu);
}
B691dbb:{NFSU2_TR(0x691dbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B691dbe:L691dbe:{c.instructions+=10;NFSU2_TR(0x691dbe);
__builtin_memmove((R+28),(R+28),4);
}
B691dc0:{NFSU2_TR(0x691dc0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B691dc1:{NFSU2_TR(0x691dc1);
__builtin_memmove((R+20),(R+16),4);
}
B691dc3:{NFSU2_TR(0x691dc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc0ull))));
}
B691dc9:{NFSU2_TR(0x691dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B691dcc:{NFSU2_TR(0x691dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B691dcf:{NFSU2_TR(0x691dcf);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B691dd2:{NFSU2_TR(0x691dd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B691dd4:{NFSU2_TR(0x691dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B691dd7:{NFSU2_TR(0x691dd7);
if(r1(R+518)){TAIL_STATIC(0x692a65u,692);}
}
B691ddd:L691ddd:{c.instructions+=2;NFSU2_TR(0x691ddd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B691ddf:{NFSU2_TR(0x691ddf);
if(r1(R+518)){TAIL_STATIC(0x6929c8u,692);}
}
B691de5:L691de5:{c.instructions+=64;NFSU2_TR(0x691de5);
__builtin_memmove((R+4368),gp(0x7b7138),8);
}
B691dec:{NFSU2_TR(0x691dec);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B691def:{NFSU2_TR(0x691def);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B691df3:{NFSU2_TR(0x691df3);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4432))));
}
B691df6:{NFSU2_TR(0x691df6);
__builtin_memmove((R+4400),(R+4384),8);
}
B691df9:{NFSU2_TR(0x691df9);
__builtin_memmove((R+4388),(R+4432),4);
}
B691dfc:{NFSU2_TR(0x691dfc);
__builtin_memmove((R+4352),(R+4432),8);
}
B691dff:{NFSU2_TR(0x691dff);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4404),4);
}
B691e02:{NFSU2_TR(0x691e02);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(R+16)),r8(U+0));
}
B691e06:{NFSU2_TR(0x691e06);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691e0b:{NFSU2_TR(0x691e0b);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691e10:{NFSU2_TR(0x691e10);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691e15:{NFSU2_TR(0x691e15);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691e1a:{NFSU2_TR(0x691e1a);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691e1f:{NFSU2_TR(0x691e1f);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691e24:{NFSU2_TR(0x691e24);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691e29:{NFSU2_TR(0x691e29);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B691e2d:{NFSU2_TR(0x691e2d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B691e30:{NFSU2_TR(0x691e30);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691e34:{NFSU2_TR(0x691e34);
{wv<8>((R+4400),uo::pswapd<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B691e38:{NFSU2_TR(0x691e38);
__builtin_memmove((R+4448),(R+4352),8);
}
B691e3b:{NFSU2_TR(0x691e3b);
__builtin_memmove((R+4384),(R+4352),8);
}
B691e3e:{NFSU2_TR(0x691e3e);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B691e42:{NFSU2_TR(0x691e42);
__builtin_memmove((R+4416),(R+4368),8);
}
B691e45:{NFSU2_TR(0x691e45);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4372),4);
}
B691e48:{NFSU2_TR(0x691e48);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B691e4c:{NFSU2_TR(0x691e4c);
__builtin_memmove((R+4432),(R+4352),8);
}
B691e4f:{NFSU2_TR(0x691e4f);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B691e53:{NFSU2_TR(0x691e53);
__builtin_memmove((R+4436),(R+4368),4);
}
B691e56:{NFSU2_TR(0x691e56);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B691e5a:{NFSU2_TR(0x691e5a);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4368))));}
}
B691e5e:{NFSU2_TR(0x691e5e);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B691e62:{NFSU2_TR(0x691e62);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691e66:{NFSU2_TR(0x691e66);
__builtin_memmove((R+4416),(R+4352),8);
}
B691e69:{NFSU2_TR(0x691e69);
{wv<8>((R+4352),uo::pfsubr<8>(rv<8>((R+4352)),rv<8>(gp(0x7b7158))));}
}
B691e71:{NFSU2_TR(0x691e71);
__builtin_memmove((R+4432),(R+4368),8);
}
B691e74:{NFSU2_TR(0x691e74);
__builtin_memmove((R+4372),(R+4368),4);
}
B691e77:{NFSU2_TR(0x691e77);
{wv<8>((R+4400),uo::pfpnacc<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B691e7b:{NFSU2_TR(0x691e7b);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B691e7f:{NFSU2_TR(0x691e7f);
{wv<8>((R+4448),uo::pfpnacc<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B691e83:{NFSU2_TR(0x691e83);
{wv<8>((R+4384),uo::pfpnacc<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B691e87:{NFSU2_TR(0x691e87);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B691e8b:{NFSU2_TR(0x691e8b);
{wv<8>((R+4432),uo::pswapd<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691e8f:{NFSU2_TR(0x691e8f);
{wv<8>((R+4416),uo::pfsubr<8>(rv<8>((R+4416)),rv<8>(gp(0x7b7158))));}
}
B691e97:{NFSU2_TR(0x691e97);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B691e9a:{NFSU2_TR(0x691e9a);
__builtin_memmove((R+4368),(R+4352),8);
}
B691e9d:{NFSU2_TR(0x691e9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691ea1:{NFSU2_TR(0x691ea1);
__builtin_memmove((R+4436),(R+4400),4);
}
B691ea4:{NFSU2_TR(0x691ea4);
__builtin_memmove((R+4388),(R+4464),4);
}
B691ea7:{NFSU2_TR(0x691ea7);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4468),4);
}
B691eaa:{NFSU2_TR(0x691eaa);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4452),4);
}
B691ead:{NFSU2_TR(0x691ead);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691eb1:{NFSU2_TR(0x691eb1);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4468),4);
}
B691eb4:{NFSU2_TR(0x691eb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691eb8:{NFSU2_TR(0x691eb8);
__builtin_memmove((R+4452),(R+4368),4);
}
B691ebb:{NFSU2_TR(0x691ebb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691ebf:{NFSU2_TR(0x691ebf);
__builtin_memmove((R+4468),gp(0x7b7158),4);
}
B691ec6:{NFSU2_TR(0x691ec6);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B691ec9:{NFSU2_TR(0x691ec9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691ecd:{NFSU2_TR(0x691ecd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691ed1:{NFSU2_TR(0x691ed1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691ed5:{NFSU2_TR(0x691ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B691ed8:{NFSU2_TR(0x691ed8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B691eda:{NFSU2_TR(0x691eda);
if(r1(R+518)){TAIL_STATIC(0x6925adu,692);}
}
B691ee0:L691ee0:{c.instructions+=61;NFSU2_TR(0x691ee0);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691ee5:{NFSU2_TR(0x691ee5);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691eea:{NFSU2_TR(0x691eea);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B691eef:{NFSU2_TR(0x691eef);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B691ef4:{NFSU2_TR(0x691ef4);
__builtin_memmove((R+4384),(R+4352),8);
}
B691ef7:{NFSU2_TR(0x691ef7);
__builtin_memmove((R+4356),(R+4368),4);
}
B691efa:{NFSU2_TR(0x691efa);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4372),4);
}
B691efd:{NFSU2_TR(0x691efd);
__builtin_memmove((R+4432),(R+4400),8);
}
B691f00:{NFSU2_TR(0x691f00);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f08:{NFSU2_TR(0x691f08);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f10:{NFSU2_TR(0x691f10);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B691f15:{NFSU2_TR(0x691f15);
__builtin_memmove((R+4404),(R+4416),4);
}
B691f18:{NFSU2_TR(0x691f18);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B691f1d:{NFSU2_TR(0x691f1d);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691f22:{NFSU2_TR(0x691f22);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4420),4);
}
B691f25:{NFSU2_TR(0x691f25);
__builtin_memmove((R+4368),(R+4448),8);
}
B691f28:{NFSU2_TR(0x691f28);
u8 U[12];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f30:{NFSU2_TR(0x691f30);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f38:{NFSU2_TR(0x691f38);
__builtin_memmove((R+4452),(R+4464),4);
}
B691f3b:{NFSU2_TR(0x691f3b);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B691f40:{NFSU2_TR(0x691f40);
__builtin_memmove((R+4384),(R+4352),8);
}
B691f43:{NFSU2_TR(0x691f43);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4468),4);
}
B691f46:{NFSU2_TR(0x691f46);
u8 U[12];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f4e:{NFSU2_TR(0x691f4e);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4420),4);
}
B691f51:{NFSU2_TR(0x691f51);
__builtin_memmove((R+4388),(R+4416),4);
}
B691f54:{NFSU2_TR(0x691f54);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f5c:{NFSU2_TR(0x691f5c);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f64:{NFSU2_TR(0x691f64);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f6c:{NFSU2_TR(0x691f6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B691f6f:{NFSU2_TR(0x691f6f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B691f72:{NFSU2_TR(0x691f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B691f76:{NFSU2_TR(0x691f76);
w8(R+4368,u64(m4(0x7b7148)));
}
B691f7d:{NFSU2_TR(0x691f7d);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B691f80:{NFSU2_TR(0x691f80);
{wv<8>((R+4384),uo::pswapd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B691f84:{NFSU2_TR(0x691f84);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B691f87:{NFSU2_TR(0x691f87);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f8b:{NFSU2_TR(0x691f8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f8f:{NFSU2_TR(0x691f8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f93:{NFSU2_TR(0x691f93);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f97:{NFSU2_TR(0x691f97);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f9b:{NFSU2_TR(0x691f9b);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B691f9f:{NFSU2_TR(0x691f9f);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B691fa3:{NFSU2_TR(0x691fa3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691fa7:{NFSU2_TR(0x691fa7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691fab:{NFSU2_TR(0x691fab);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B691fae:{NFSU2_TR(0x691fae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691fb2:{NFSU2_TR(0x691fb2);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B691fba:{NFSU2_TR(0x691fba);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B691fbd:{NFSU2_TR(0x691fbd);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B691fc5:{NFSU2_TR(0x691fc5);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B691fc8:{NFSU2_TR(0x691fc8);
u8 U[12];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B691fd0:{NFSU2_TR(0x691fd0);
__builtin_memmove((R+4356),(R+4352),4);
}
B691fd3:{NFSU2_TR(0x691fd3);
__builtin_memmove((R+4372),(R+4368),4);
}
B691fd6:{NFSU2_TR(0x691fd6);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B691fda:{NFSU2_TR(0x691fda);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B691fdd:{NFSU2_TR(0x691fdd);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B691fe6:{NFSU2_TR(0x691fe6);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B691fee:{NFSU2_TR(0x691fee);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691ff2:{NFSU2_TR(0x691ff2);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B691ff5:{NFSU2_TR(0x691ff5);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B691ffe:{NFSU2_TR(0x691ffe);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
TAIL_STATIC(0x692002u,692);
}
XIT:NFSU2_TR_EXIT(0x691,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
