#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_65b(u8* __restrict R,Cpu& c);
u32 body_660(u8* __restrict R,Cpu& c);
u32 body_663(u8* __restrict R,Cpu& c);
u32 body_664(u8* __restrict R,Cpu& c);
u32 body_669(u8* __restrict R,Cpu& c);
u32 body_670(u8* __restrict R,Cpu& c);
u32 body_671(u8* __restrict R,Cpu& c);
u32 body_688(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x668,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x668,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_668(u8* __restrict R,Cpu& c);
u32 page_668(Cpu& c){return body_668(c.regs.data(),c);}
__attribute__((noinline)) u32 body_668(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x668002:goto L668002;
case 0x668005:c.instructions+=2;goto B668005;
case 0x66800c:c.instructions+=1;goto B66800c;
case 0x668011:goto L668011;
case 0x668013:c.instructions+=1;goto B668013;
case 0x668019:goto L668019;
case 0x66801c:c.instructions+=9;goto B66801c;
case 0x66801d:c.instructions+=8;goto B66801d;
case 0x668020:c.instructions+=7;goto B668020;
case 0x668021:c.instructions+=6;goto B668021;
case 0x668024:c.instructions+=5;goto B668024;
case 0x668025:c.instructions+=4;goto B668025;
case 0x668028:c.instructions+=3;goto B668028;
case 0x668029:c.instructions+=2;goto B668029;
case 0x66802c:c.instructions+=1;goto B66802c;
case 0x668031:goto L668031;
case 0x668033:c.instructions+=2;goto B668033;
case 0x668036:c.instructions+=1;goto B668036;
case 0x66803c:goto L66803c;
case 0x66803f:c.instructions+=1;goto B66803f;
case 0x668041:goto L668041;
case 0x668046:c.instructions+=5;goto B668046;
case 0x66804a:c.instructions+=4;goto B66804a;
case 0x66804b:c.instructions+=3;goto B66804b;
case 0x66804e:c.instructions+=2;goto B66804e;
case 0x668053:c.instructions+=1;goto B668053;
case 0x668055:goto L668055;
case 0x66805a:c.instructions+=1;goto B66805a;
case 0x66805c:goto L66805c;
case 0x66805e:c.instructions+=4;goto B66805e;
case 0x668061:c.instructions+=3;goto B668061;
case 0x668062:c.instructions+=2;goto B668062;
case 0x668063:c.instructions+=1;goto B668063;
case 0x668066:goto L668066;
case 0x668069:c.instructions+=2;goto B668069;
case 0x66806c:c.instructions+=1;goto B66806c;
case 0x66806e:goto L66806e;
case 0x668074:c.instructions+=1;goto B668074;
case 0x668076:goto L668076;
case 0x66807b:c.instructions+=2;goto B66807b;
case 0x668080:c.instructions+=1;goto B668080;
case 0x668082:goto L668082;
case 0x668084:c.instructions+=1;goto B668084;
case 0x668086:goto L668086;
case 0x668088:goto L668088;
case 0x66808e:c.instructions+=2;goto B66808e;
case 0x668090:c.instructions+=1;goto B668090;
case 0x668092:goto L668092;
case 0x668094:c.instructions+=1;goto B668094;
case 0x668096:goto L668096;
case 0x668098:goto L668098;
case 0x668099:c.instructions+=4;goto B668099;
case 0x66809a:c.instructions+=3;goto B66809a;
case 0x66809b:c.instructions+=2;goto B66809b;
case 0x66809e:c.instructions+=1;goto B66809e;
case 0x6680a0:goto L6680a0;
case 0x6680a2:goto L6680a2;
case 0x6680a5:c.instructions+=8;goto B6680a5;
case 0x6680a8:c.instructions+=7;goto B6680a8;
case 0x6680aa:c.instructions+=6;goto B6680aa;
case 0x6680ac:c.instructions+=5;goto B6680ac;
case 0x6680ae:c.instructions+=4;goto B6680ae;
case 0x6680b1:c.instructions+=3;goto B6680b1;
case 0x6680b2:c.instructions+=2;goto B6680b2;
case 0x6680b5:c.instructions+=1;goto B6680b5;
case 0x6680b6:goto L6680b6;
case 0x6680bb:c.instructions+=6;goto B6680bb;
case 0x6680be:c.instructions+=5;goto B6680be;
case 0x6680bf:c.instructions+=4;goto B6680bf;
case 0x6680c0:c.instructions+=3;goto B6680c0;
case 0x6680c1:c.instructions+=2;goto B6680c1;
case 0x6680c4:c.instructions+=1;goto B6680c4;
case 0x6680c6:goto L6680c6;
case 0x6680c9:c.instructions+=1;goto B6680c9;
case 0x6680cc:goto L6680cc;
case 0x6680ce:c.instructions+=24;goto B6680ce;
case 0x6680d1:c.instructions+=23;goto B6680d1;
case 0x6680d3:c.instructions+=22;goto B6680d3;
case 0x6680d4:c.instructions+=21;goto B6680d4;
case 0x6680d6:c.instructions+=20;goto B6680d6;
case 0x6680da:c.instructions+=19;goto B6680da;
case 0x6680de:c.instructions+=18;goto B6680de;
case 0x6680e2:c.instructions+=17;goto B6680e2;
case 0x6680e6:c.instructions+=16;goto B6680e6;
case 0x6680ea:c.instructions+=15;goto B6680ea;
case 0x6680ee:c.instructions+=14;goto B6680ee;
case 0x6680f2:c.instructions+=13;goto B6680f2;
case 0x6680f6:c.instructions+=12;goto B6680f6;
case 0x6680fa:c.instructions+=11;goto B6680fa;
case 0x6680fe:c.instructions+=10;goto B6680fe;
case 0x668102:c.instructions+=9;goto B668102;
case 0x668105:c.instructions+=8;goto B668105;
case 0x668109:c.instructions+=7;goto B668109;
case 0x66810d:c.instructions+=6;goto B66810d;
case 0x66810f:c.instructions+=5;goto B66810f;
case 0x668112:c.instructions+=4;goto B668112;
case 0x668116:c.instructions+=3;goto B668116;
case 0x668119:c.instructions+=2;goto B668119;
case 0x66811c:c.instructions+=1;goto B66811c;
case 0x668122:goto L668122;
case 0x668125:c.instructions+=7;goto B668125;
case 0x668128:c.instructions+=6;goto B668128;
case 0x66812b:c.instructions+=5;goto B66812b;
case 0x66812e:c.instructions+=4;goto B66812e;
case 0x668131:c.instructions+=3;goto B668131;
case 0x668135:c.instructions+=2;goto B668135;
case 0x668137:c.instructions+=1;goto B668137;
case 0x66813d:goto L66813d;
case 0x66813f:c.instructions+=4;goto B66813f;
case 0x668142:c.instructions+=3;goto B668142;
case 0x668145:c.instructions+=2;goto B668145;
case 0x668146:c.instructions+=1;goto B668146;
case 0x66814b:goto L66814b;
case 0x66814d:c.instructions+=2;goto B66814d;
case 0x66814e:c.instructions+=1;goto B66814e;
case 0x668150:goto L668150;
case 0x668155:c.instructions+=6;goto B668155;
case 0x668156:c.instructions+=5;goto B668156;
case 0x668159:c.instructions+=4;goto B668159;
case 0x66815b:c.instructions+=3;goto B66815b;
case 0x66815c:c.instructions+=2;goto B66815c;
case 0x66815e:c.instructions+=1;goto B66815e;
case 0x668163:goto L668163;
case 0x668166:c.instructions+=1;goto B668166;
case 0x668168:goto L668168;
case 0x66816c:goto L66816c;
case 0x668170:c.instructions+=1;goto B668170;
case 0x668176:goto L668176;
case 0x668179:c.instructions+=14;goto B668179;
case 0x66817d:c.instructions+=13;goto B66817d;
case 0x668180:c.instructions+=12;goto B668180;
case 0x668184:c.instructions+=11;goto B668184;
case 0x668187:c.instructions+=10;goto B668187;
case 0x66818a:c.instructions+=9;goto B66818a;
case 0x668190:c.instructions+=8;goto B668190;
case 0x668196:c.instructions+=7;goto B668196;
case 0x668199:c.instructions+=6;goto B668199;
case 0x66819f:c.instructions+=5;goto B66819f;
case 0x6681a2:c.instructions+=4;goto B6681a2;
case 0x6681a4:c.instructions+=3;goto B6681a4;
case 0x6681a7:c.instructions+=2;goto B6681a7;
case 0x6681aa:c.instructions+=1;goto B6681aa;
case 0x6681ab:goto L6681ab;
case 0x6681ad:goto L6681ad;
case 0x6681b0:c.instructions+=45;goto B6681b0;
case 0x6681b2:c.instructions+=44;goto B6681b2;
case 0x6681b4:c.instructions+=43;goto B6681b4;
case 0x6681b7:c.instructions+=42;goto B6681b7;
case 0x6681ba:c.instructions+=41;goto B6681ba;
case 0x6681bd:c.instructions+=40;goto B6681bd;
case 0x6681c0:c.instructions+=39;goto B6681c0;
case 0x6681c3:c.instructions+=38;goto B6681c3;
case 0x6681c6:c.instructions+=37;goto B6681c6;
case 0x6681c9:c.instructions+=36;goto B6681c9;
case 0x6681cc:c.instructions+=35;goto B6681cc;
case 0x6681cf:c.instructions+=34;goto B6681cf;
case 0x6681d2:c.instructions+=33;goto B6681d2;
case 0x6681d5:c.instructions+=32;goto B6681d5;
case 0x6681d8:c.instructions+=31;goto B6681d8;
case 0x6681da:c.instructions+=30;goto B6681da;
case 0x6681dd:c.instructions+=29;goto B6681dd;
case 0x6681df:c.instructions+=28;goto B6681df;
case 0x6681e2:c.instructions+=27;goto B6681e2;
case 0x6681e5:c.instructions+=26;goto B6681e5;
case 0x6681e8:c.instructions+=25;goto B6681e8;
case 0x6681eb:c.instructions+=24;goto B6681eb;
case 0x6681ee:c.instructions+=23;goto B6681ee;
case 0x6681f1:c.instructions+=22;goto B6681f1;
case 0x6681f4:c.instructions+=21;goto B6681f4;
case 0x6681f7:c.instructions+=20;goto B6681f7;
case 0x6681fb:c.instructions+=19;goto B6681fb;
case 0x6681ff:c.instructions+=18;goto B6681ff;
case 0x668202:c.instructions+=17;goto B668202;
case 0x668206:c.instructions+=16;goto B668206;
case 0x66820a:c.instructions+=15;goto B66820a;
case 0x66820d:c.instructions+=14;goto B66820d;
case 0x668210:c.instructions+=13;goto B668210;
case 0x668213:c.instructions+=12;goto B668213;
case 0x668216:c.instructions+=11;goto B668216;
case 0x668218:c.instructions+=10;goto B668218;
case 0x66821b:c.instructions+=9;goto B66821b;
case 0x66821e:c.instructions+=8;goto B66821e;
case 0x668222:c.instructions+=7;goto B668222;
case 0x668225:c.instructions+=6;goto B668225;
case 0x668229:c.instructions+=5;goto B668229;
case 0x66822c:c.instructions+=4;goto B66822c;
case 0x66822f:c.instructions+=3;goto B66822f;
case 0x668232:c.instructions+=2;goto B668232;
case 0x668234:c.instructions+=1;goto B668234;
case 0x668236:goto L668236;
case 0x668238:c.instructions+=1;goto B668238;
case 0x66823d:goto L66823d;
case 0x668241:c.instructions+=1;goto B668241;
case 0x668244:goto L668244;
case 0x668247:c.instructions+=5;goto B668247;
case 0x66824a:c.instructions+=4;goto B66824a;
case 0x66824c:c.instructions+=3;goto B66824c;
case 0x668250:c.instructions+=2;goto B668250;
case 0x668252:c.instructions+=1;goto B668252;
case 0x668256:goto L668256;
case 0x668258:c.instructions+=6;goto B668258;
case 0x66825c:c.instructions+=5;goto B66825c;
case 0x66825e:c.instructions+=4;goto B66825e;
case 0x668262:c.instructions+=3;goto B668262;
case 0x668265:c.instructions+=2;goto B668265;
case 0x668268:c.instructions+=1;goto B668268;
case 0x66826a:goto L66826a;
case 0x66826d:goto L66826d;
case 0x668270:c.instructions+=12;goto B668270;
case 0x668273:c.instructions+=11;goto B668273;
case 0x668275:c.instructions+=10;goto B668275;
case 0x668278:c.instructions+=9;goto B668278;
case 0x66827b:c.instructions+=8;goto B66827b;
case 0x66827e:c.instructions+=7;goto B66827e;
case 0x668280:c.instructions+=6;goto B668280;
case 0x668284:c.instructions+=5;goto B668284;
case 0x668288:c.instructions+=4;goto B668288;
case 0x66828b:c.instructions+=3;goto B66828b;
case 0x66828e:c.instructions+=2;goto B66828e;
case 0x668291:c.instructions+=1;goto B668291;
case 0x668293:goto L668293;
case 0x668296:goto L668296;
case 0x668299:c.instructions+=12;goto B668299;
case 0x66829c:c.instructions+=11;goto B66829c;
case 0x66829e:c.instructions+=10;goto B66829e;
case 0x6682a1:c.instructions+=9;goto B6682a1;
case 0x6682a4:c.instructions+=8;goto B6682a4;
case 0x6682a7:c.instructions+=7;goto B6682a7;
case 0x6682a9:c.instructions+=6;goto B6682a9;
case 0x6682ad:c.instructions+=5;goto B6682ad;
case 0x6682b1:c.instructions+=4;goto B6682b1;
case 0x6682b4:c.instructions+=3;goto B6682b4;
case 0x6682b7:c.instructions+=2;goto B6682b7;
case 0x6682ba:c.instructions+=1;goto B6682ba;
case 0x6682bc:goto L6682bc;
case 0x6682bf:goto L6682bf;
case 0x6682c2:c.instructions+=14;goto B6682c2;
case 0x6682c5:c.instructions+=13;goto B6682c5;
case 0x6682c7:c.instructions+=12;goto B6682c7;
case 0x6682c9:c.instructions+=11;goto B6682c9;
case 0x6682cc:c.instructions+=10;goto B6682cc;
case 0x6682cf:c.instructions+=9;goto B6682cf;
case 0x6682d2:c.instructions+=8;goto B6682d2;
case 0x6682d6:c.instructions+=7;goto B6682d6;
case 0x6682d9:c.instructions+=6;goto B6682d9;
case 0x6682dc:c.instructions+=5;goto B6682dc;
case 0x6682df:c.instructions+=4;goto B6682df;
case 0x6682e2:c.instructions+=3;goto B6682e2;
case 0x6682e6:c.instructions+=2;goto B6682e6;
case 0x6682e9:c.instructions+=1;goto B6682e9;
case 0x6682ef:goto L6682ef;
case 0x6682f1:c.instructions+=21;goto B6682f1;
case 0x6682f5:c.instructions+=20;goto B6682f5;
case 0x6682f8:c.instructions+=19;goto B6682f8;
case 0x6682fb:c.instructions+=18;goto B6682fb;
case 0x6682fe:c.instructions+=17;goto B6682fe;
case 0x6682ff:c.instructions+=16;goto B6682ff;
case 0x668303:c.instructions+=15;goto B668303;
case 0x668306:c.instructions+=14;goto B668306;
case 0x668308:c.instructions+=13;goto B668308;
case 0x668309:c.instructions+=12;goto B668309;
case 0x66830c:c.instructions+=11;goto B66830c;
case 0x66830e:c.instructions+=10;goto B66830e;
case 0x668310:c.instructions+=9;goto B668310;
case 0x668313:c.instructions+=8;goto B668313;
case 0x668317:c.instructions+=7;goto B668317;
case 0x66831a:c.instructions+=6;goto B66831a;
case 0x66831d:c.instructions+=5;goto B66831d;
case 0x668320:c.instructions+=4;goto B668320;
case 0x668321:c.instructions+=3;goto B668321;
case 0x668324:c.instructions+=2;goto B668324;
case 0x668325:c.instructions+=1;goto B668325;
case 0x66832a:goto L66832a;
case 0x66832c:c.instructions+=2;goto B66832c;
case 0x66832f:c.instructions+=1;goto B66832f;
case 0x668335:goto L668335;
case 0x668337:c.instructions+=3;goto B668337;
case 0x668339:c.instructions+=2;goto B668339;
case 0x66833a:c.instructions+=1;goto B66833a;
case 0x66833d:goto L66833d;
case 0x668340:c.instructions+=79;goto B668340;
case 0x668342:c.instructions+=78;goto B668342;
case 0x668345:c.instructions+=77;goto B668345;
case 0x668347:c.instructions+=76;goto B668347;
case 0x66834a:c.instructions+=75;goto B66834a;
case 0x66834d:c.instructions+=74;goto B66834d;
case 0x668350:c.instructions+=73;goto B668350;
case 0x668353:c.instructions+=72;goto B668353;
case 0x668356:c.instructions+=71;goto B668356;
case 0x668359:c.instructions+=70;goto B668359;
case 0x66835b:c.instructions+=69;goto B66835b;
case 0x66835d:c.instructions+=68;goto B66835d;
case 0x668360:c.instructions+=67;goto B668360;
case 0x668363:c.instructions+=66;goto B668363;
case 0x668366:c.instructions+=65;goto B668366;
case 0x668369:c.instructions+=64;goto B668369;
case 0x66836b:c.instructions+=63;goto B66836b;
case 0x66836e:c.instructions+=62;goto B66836e;
case 0x668370:c.instructions+=61;goto B668370;
case 0x668373:c.instructions+=60;goto B668373;
case 0x668375:c.instructions+=59;goto B668375;
case 0x668377:c.instructions+=58;goto B668377;
case 0x668379:c.instructions+=57;goto B668379;
case 0x66837b:c.instructions+=56;goto B66837b;
case 0x66837e:c.instructions+=55;goto B66837e;
case 0x668380:c.instructions+=54;goto B668380;
case 0x668382:c.instructions+=53;goto B668382;
case 0x668385:c.instructions+=52;goto B668385;
case 0x668387:c.instructions+=51;goto B668387;
case 0x668389:c.instructions+=50;goto B668389;
case 0x66838c:c.instructions+=49;goto B66838c;
case 0x66838e:c.instructions+=48;goto B66838e;
case 0x668391:c.instructions+=47;goto B668391;
case 0x668393:c.instructions+=46;goto B668393;
case 0x668396:c.instructions+=45;goto B668396;
case 0x668398:c.instructions+=44;goto B668398;
case 0x66839a:c.instructions+=43;goto B66839a;
case 0x66839c:c.instructions+=42;goto B66839c;
case 0x66839e:c.instructions+=41;goto B66839e;
case 0x6683a0:c.instructions+=40;goto B6683a0;
case 0x6683a3:c.instructions+=39;goto B6683a3;
case 0x6683a5:c.instructions+=38;goto B6683a5;
case 0x6683a7:c.instructions+=37;goto B6683a7;
case 0x6683aa:c.instructions+=36;goto B6683aa;
case 0x6683ac:c.instructions+=35;goto B6683ac;
case 0x6683ae:c.instructions+=34;goto B6683ae;
case 0x6683b1:c.instructions+=33;goto B6683b1;
case 0x6683b3:c.instructions+=32;goto B6683b3;
case 0x6683b6:c.instructions+=31;goto B6683b6;
case 0x6683b8:c.instructions+=30;goto B6683b8;
case 0x6683bb:c.instructions+=29;goto B6683bb;
case 0x6683bd:c.instructions+=28;goto B6683bd;
case 0x6683bf:c.instructions+=27;goto B6683bf;
case 0x6683c1:c.instructions+=26;goto B6683c1;
case 0x6683c3:c.instructions+=25;goto B6683c3;
case 0x6683c5:c.instructions+=24;goto B6683c5;
case 0x6683c9:c.instructions+=23;goto B6683c9;
case 0x6683cc:c.instructions+=22;goto B6683cc;
case 0x6683ce:c.instructions+=21;goto B6683ce;
case 0x6683d0:c.instructions+=20;goto B6683d0;
case 0x6683d3:c.instructions+=19;goto B6683d3;
case 0x6683d5:c.instructions+=18;goto B6683d5;
case 0x6683d7:c.instructions+=17;goto B6683d7;
case 0x6683da:c.instructions+=16;goto B6683da;
case 0x6683dc:c.instructions+=15;goto B6683dc;
case 0x6683de:c.instructions+=14;goto B6683de;
case 0x6683e1:c.instructions+=13;goto B6683e1;
case 0x6683e3:c.instructions+=12;goto B6683e3;
case 0x6683e6:c.instructions+=11;goto B6683e6;
case 0x6683e9:c.instructions+=10;goto B6683e9;
case 0x6683ec:c.instructions+=9;goto B6683ec;
case 0x6683ef:c.instructions+=8;goto B6683ef;
case 0x6683f1:c.instructions+=7;goto B6683f1;
case 0x6683f4:c.instructions+=6;goto B6683f4;
case 0x6683f6:c.instructions+=5;goto B6683f6;
case 0x6683f8:c.instructions+=4;goto B6683f8;
case 0x6683fb:c.instructions+=3;goto B6683fb;
case 0x6683fe:c.instructions+=2;goto B6683fe;
case 0x668401:c.instructions+=1;goto B668401;
case 0x668403:goto L668403;
case 0x668404:c.instructions+=1;goto B668404;
case 0x668407:goto L668407;
case 0x66840a:c.instructions+=6;goto B66840a;
case 0x66840c:c.instructions+=5;goto B66840c;
case 0x66840f:c.instructions+=4;goto B66840f;
case 0x668411:c.instructions+=3;goto B668411;
case 0x668414:c.instructions+=2;goto B668414;
case 0x668417:c.instructions+=1;goto B668417;
case 0x668419:goto L668419;
case 0x66841a:c.instructions+=1;goto B66841a;
case 0x66841d:goto L66841d;
case 0x668420:c.instructions+=6;goto B668420;
case 0x668422:c.instructions+=5;goto B668422;
case 0x668425:c.instructions+=4;goto B668425;
case 0x668427:c.instructions+=3;goto B668427;
case 0x66842a:c.instructions+=2;goto B66842a;
case 0x66842d:c.instructions+=1;goto B66842d;
case 0x66842f:goto L66842f;
case 0x668430:c.instructions+=1;goto B668430;
case 0x668433:goto L668433;
case 0x668436:c.instructions+=86;goto B668436;
case 0x668438:c.instructions+=85;goto B668438;
case 0x66843a:c.instructions+=84;goto B66843a;
case 0x66843c:c.instructions+=83;goto B66843c;
case 0x66843e:c.instructions+=82;goto B66843e;
case 0x668441:c.instructions+=81;goto B668441;
case 0x668443:c.instructions+=80;goto B668443;
case 0x668445:c.instructions+=79;goto B668445;
case 0x668448:c.instructions+=78;goto B668448;
case 0x66844a:c.instructions+=77;goto B66844a;
case 0x66844c:c.instructions+=76;goto B66844c;
case 0x66844f:c.instructions+=75;goto B66844f;
case 0x668451:c.instructions+=74;goto B668451;
case 0x668453:c.instructions+=73;goto B668453;
case 0x668456:c.instructions+=72;goto B668456;
case 0x668458:c.instructions+=71;goto B668458;
case 0x66845b:c.instructions+=70;goto B66845b;
case 0x66845e:c.instructions+=69;goto B66845e;
case 0x668460:c.instructions+=68;goto B668460;
case 0x668462:c.instructions+=67;goto B668462;
case 0x668464:c.instructions+=66;goto B668464;
case 0x668466:c.instructions+=65;goto B668466;
case 0x668469:c.instructions+=64;goto B668469;
case 0x66846b:c.instructions+=63;goto B66846b;
case 0x66846d:c.instructions+=62;goto B66846d;
case 0x668470:c.instructions+=61;goto B668470;
case 0x668472:c.instructions+=60;goto B668472;
case 0x668474:c.instructions+=59;goto B668474;
case 0x668477:c.instructions+=58;goto B668477;
case 0x668479:c.instructions+=57;goto B668479;
case 0x66847b:c.instructions+=56;goto B66847b;
case 0x66847e:c.instructions+=55;goto B66847e;
case 0x668480:c.instructions+=54;goto B668480;
case 0x668483:c.instructions+=53;goto B668483;
case 0x668486:c.instructions+=52;goto B668486;
case 0x668488:c.instructions+=51;goto B668488;
case 0x66848a:c.instructions+=50;goto B66848a;
case 0x66848c:c.instructions+=49;goto B66848c;
case 0x66848e:c.instructions+=48;goto B66848e;
case 0x668491:c.instructions+=47;goto B668491;
case 0x668493:c.instructions+=46;goto B668493;
case 0x668495:c.instructions+=45;goto B668495;
case 0x668498:c.instructions+=44;goto B668498;
case 0x66849a:c.instructions+=43;goto B66849a;
case 0x66849c:c.instructions+=42;goto B66849c;
case 0x66849f:c.instructions+=41;goto B66849f;
case 0x6684a1:c.instructions+=40;goto B6684a1;
case 0x6684a3:c.instructions+=39;goto B6684a3;
case 0x6684a6:c.instructions+=38;goto B6684a6;
case 0x6684a8:c.instructions+=37;goto B6684a8;
case 0x6684ab:c.instructions+=36;goto B6684ab;
case 0x6684ae:c.instructions+=35;goto B6684ae;
case 0x6684b0:c.instructions+=34;goto B6684b0;
case 0x6684b3:c.instructions+=33;goto B6684b3;
case 0x6684b6:c.instructions+=32;goto B6684b6;
case 0x6684b9:c.instructions+=31;goto B6684b9;
case 0x6684bc:c.instructions+=30;goto B6684bc;
case 0x6684bf:c.instructions+=29;goto B6684bf;
case 0x6684c2:c.instructions+=28;goto B6684c2;
case 0x6684c5:c.instructions+=27;goto B6684c5;
case 0x6684c7:c.instructions+=26;goto B6684c7;
case 0x6684ca:c.instructions+=25;goto B6684ca;
case 0x6684cd:c.instructions+=24;goto B6684cd;
case 0x6684d0:c.instructions+=23;goto B6684d0;
case 0x6684d3:c.instructions+=22;goto B6684d3;
case 0x6684d6:c.instructions+=21;goto B6684d6;
case 0x6684d9:c.instructions+=20;goto B6684d9;
case 0x6684dc:c.instructions+=19;goto B6684dc;
case 0x6684de:c.instructions+=18;goto B6684de;
case 0x6684e1:c.instructions+=17;goto B6684e1;
case 0x6684e4:c.instructions+=16;goto B6684e4;
case 0x6684e7:c.instructions+=15;goto B6684e7;
case 0x6684ea:c.instructions+=14;goto B6684ea;
case 0x6684ed:c.instructions+=13;goto B6684ed;
case 0x6684f0:c.instructions+=12;goto B6684f0;
case 0x6684f3:c.instructions+=11;goto B6684f3;
case 0x6684f6:c.instructions+=10;goto B6684f6;
case 0x6684f9:c.instructions+=9;goto B6684f9;
case 0x6684fb:c.instructions+=8;goto B6684fb;
case 0x6684fe:c.instructions+=7;goto B6684fe;
case 0x668501:c.instructions+=6;goto B668501;
case 0x668504:c.instructions+=5;goto B668504;
case 0x668507:c.instructions+=4;goto B668507;
case 0x66850a:c.instructions+=3;goto B66850a;
case 0x66850e:c.instructions+=2;goto B66850e;
case 0x668512:c.instructions+=1;goto B668512;
case 0x668515:goto L668515;
case 0x668518:c.instructions+=9;goto B668518;
case 0x66851b:c.instructions+=8;goto B66851b;
case 0x66851e:c.instructions+=7;goto B66851e;
case 0x668521:c.instructions+=6;goto B668521;
case 0x668524:c.instructions+=5;goto B668524;
case 0x668526:c.instructions+=4;goto B668526;
case 0x668527:c.instructions+=3;goto B668527;
case 0x66852a:c.instructions+=2;goto B66852a;
case 0x66852d:c.instructions+=1;goto B66852d;
case 0x66852f:goto L66852f;
case 0x668532:c.instructions+=18;goto B668532;
case 0x668535:c.instructions+=17;goto B668535;
case 0x668538:c.instructions+=16;goto B668538;
case 0x66853d:c.instructions+=15;goto B66853d;
case 0x668540:c.instructions+=14;goto B668540;
case 0x668543:c.instructions+=13;goto B668543;
case 0x668547:c.instructions+=12;goto B668547;
case 0x66854b:c.instructions+=11;goto B66854b;
case 0x66854e:c.instructions+=10;goto B66854e;
case 0x668551:c.instructions+=9;goto B668551;
case 0x668555:c.instructions+=8;goto B668555;
case 0x668559:c.instructions+=7;goto B668559;
case 0x66855c:c.instructions+=6;goto B66855c;
case 0x66855f:c.instructions+=5;goto B66855f;
case 0x668562:c.instructions+=4;goto B668562;
case 0x668565:c.instructions+=3;goto B668565;
case 0x668567:c.instructions+=2;goto B668567;
case 0x66856a:c.instructions+=1;goto B66856a;
case 0x66856c:goto L66856c;
case 0x66856e:goto L66856e;
case 0x668570:c.instructions+=1;goto B668570;
case 0x668573:goto L668573;
case 0x668575:goto L668575;
case 0x668578:c.instructions+=6;goto B668578;
case 0x66857b:c.instructions+=5;goto B66857b;
case 0x66857c:c.instructions+=4;goto B66857c;
case 0x66857f:c.instructions+=3;goto B66857f;
case 0x668580:c.instructions+=2;goto B668580;
case 0x668581:c.instructions+=1;goto B668581;
case 0x668586:goto L668586;
case 0x668588:c.instructions+=2;goto B668588;
case 0x66858b:c.instructions+=1;goto B66858b;
case 0x668591:goto L668591;
case 0x668595:c.instructions+=6;goto B668595;
case 0x668598:c.instructions+=5;goto B668598;
case 0x66859b:c.instructions+=4;goto B66859b;
case 0x66859c:c.instructions+=3;goto B66859c;
case 0x66859d:c.instructions+=2;goto B66859d;
case 0x6685a0:c.instructions+=1;goto B6685a0;
case 0x6685a5:goto L6685a5;
case 0x6685a7:c.instructions+=2;goto B6685a7;
case 0x6685aa:c.instructions+=1;goto B6685aa;
case 0x6685b0:goto L6685b0;
case 0x6685b3:c.instructions+=9;goto B6685b3;
case 0x6685b9:c.instructions+=8;goto B6685b9;
case 0x6685c0:c.instructions+=7;goto B6685c0;
case 0x6685c4:c.instructions+=6;goto B6685c4;
case 0x6685c7:c.instructions+=5;goto B6685c7;
case 0x6685ca:c.instructions+=4;goto B6685ca;
case 0x6685cd:c.instructions+=3;goto B6685cd;
case 0x6685d0:c.instructions+=2;goto B6685d0;
case 0x6685d3:c.instructions+=1;goto B6685d3;
case 0x6685d5:goto L6685d5;
case 0x6685da:c.instructions+=2;goto B6685da;
case 0x6685dd:c.instructions+=1;goto B6685dd;
case 0x6685df:goto L6685df;
case 0x6685e2:c.instructions+=7;goto B6685e2;
case 0x6685e4:c.instructions+=6;goto B6685e4;
case 0x6685e7:c.instructions+=5;goto B6685e7;
case 0x6685e9:c.instructions+=4;goto B6685e9;
case 0x6685eb:c.instructions+=3;goto B6685eb;
case 0x6685ee:c.instructions+=2;goto B6685ee;
case 0x6685f0:c.instructions+=1;goto B6685f0;
case 0x6685f2:goto L6685f2;
case 0x6685f5:goto L6685f5;
case 0x6685f7:c.instructions+=3;goto B6685f7;
case 0x6685fa:c.instructions+=2;goto B6685fa;
case 0x6685fb:c.instructions+=1;goto B6685fb;
case 0x6685fd:goto L6685fd;
case 0x668600:c.instructions+=4;goto B668600;
case 0x668603:c.instructions+=3;goto B668603;
case 0x668606:c.instructions+=2;goto B668606;
case 0x668608:c.instructions+=1;goto B668608;
case 0x66860a:goto L66860a;
case 0x66860c:goto L66860c;
case 0x668611:c.instructions+=5;goto B668611;
case 0x668614:c.instructions+=4;goto B668614;
case 0x668617:c.instructions+=3;goto B668617;
case 0x668619:c.instructions+=2;goto B668619;
case 0x66861b:c.instructions+=1;goto B66861b;
case 0x66861d:goto L66861d;
case 0x66861f:c.instructions+=1;goto B66861f;
case 0x668621:goto L668621;
case 0x668624:c.instructions+=1;goto B668624;
case 0x668626:goto L668626;
case 0x66862a:goto L66862a;
case 0x66862e:c.instructions+=5;goto B66862e;
case 0x668632:c.instructions+=4;goto B668632;
case 0x668633:c.instructions+=3;goto B668633;
case 0x668634:c.instructions+=2;goto B668634;
case 0x668637:c.instructions+=1;goto B668637;
case 0x668639:goto L668639;
case 0x66863b:goto L66863b;
case 0x66863f:goto L66863f;
case 0x668643:c.instructions+=1;goto B668643;
case 0x668645:goto L668645;
case 0x668647:c.instructions+=3;goto B668647;
case 0x66864b:c.instructions+=2;goto B66864b;
case 0x66864f:c.instructions+=1;goto B66864f;
case 0x668651:goto L668651;
case 0x668654:goto L668654;
case 0x668658:c.instructions+=4;goto B668658;
case 0x66865a:c.instructions+=3;goto B66865a;
case 0x66865e:c.instructions+=2;goto B66865e;
case 0x668662:c.instructions+=1;goto B668662;
case 0x668664:goto L668664;
case 0x668667:goto L668667;
case 0x66866b:c.instructions+=4;goto B66866b;
case 0x66866d:c.instructions+=3;goto B66866d;
case 0x668671:c.instructions+=2;goto B668671;
case 0x668675:c.instructions+=1;goto B668675;
case 0x668677:goto L668677;
case 0x66867a:goto L66867a;
case 0x66867e:goto L66867e;
case 0x668680:c.instructions+=1;goto B668680;
case 0x668685:goto L668685;
case 0x668687:c.instructions+=2;goto B668687;
case 0x66868a:c.instructions+=1;goto B66868a;
case 0x668690:goto L668690;
case 0x668695:c.instructions+=5;goto B668695;
case 0x668698:c.instructions+=4;goto B668698;
case 0x66869b:c.instructions+=3;goto B66869b;
case 0x66869e:c.instructions+=2;goto B66869e;
case 0x66869f:c.instructions+=1;goto B66869f;
case 0x6686a4:goto L6686a4;
case 0x6686a6:c.instructions+=3;goto B6686a6;
case 0x6686a7:c.instructions+=2;goto B6686a7;
case 0x6686aa:c.instructions+=1;goto B6686aa;
case 0x6686b0:goto L6686b0;
case 0x6686b3:c.instructions+=4;goto B6686b3;
case 0x6686b5:c.instructions+=3;goto B6686b5;
case 0x6686b7:c.instructions+=2;goto B6686b7;
case 0x6686ba:c.instructions+=1;goto B6686ba;
case 0x6686bc:goto L6686bc;
case 0x6686bf:c.instructions+=4;goto B6686bf;
case 0x6686c0:c.instructions+=3;goto B6686c0;
case 0x6686c3:c.instructions+=2;goto B6686c3;
case 0x6686c6:c.instructions+=1;goto B6686c6;
case 0x6686c8:goto L6686c8;
case 0x6686cd:c.instructions+=4;goto B6686cd;
case 0x6686cf:c.instructions+=3;goto B6686cf;
case 0x6686d2:c.instructions+=2;goto B6686d2;
case 0x6686d3:c.instructions+=1;goto B6686d3;
case 0x6686d8:goto L6686d8;
case 0x6686db:c.instructions+=8;goto B6686db;
case 0x6686de:c.instructions+=7;goto B6686de;
case 0x6686e0:c.instructions+=6;goto B6686e0;
case 0x6686e3:c.instructions+=5;goto B6686e3;
case 0x6686e5:c.instructions+=4;goto B6686e5;
case 0x6686e7:c.instructions+=3;goto B6686e7;
case 0x6686e9:c.instructions+=2;goto B6686e9;
case 0x6686ec:c.instructions+=1;goto B6686ec;
case 0x6686ee:goto L6686ee;
case 0x6686f1:c.instructions+=1;goto B6686f1;
case 0x6686f4:goto L6686f4;
case 0x6686f7:c.instructions+=2;goto B6686f7;
case 0x6686fa:c.instructions+=1;goto B6686fa;
case 0x6686fc:goto L6686fc;
case 0x6686fd:c.instructions+=1;goto B6686fd;
case 0x6686ff:goto L6686ff;
case 0x668700:c.instructions+=1;goto B668700;
case 0x668702:goto L668702;
case 0x668703:c.instructions+=1;goto B668703;
case 0x668705:goto L668705;
case 0x668708:c.instructions+=1;goto B668708;
case 0x66870a:goto L66870a;
case 0x66870b:goto L66870b;
case 0x66870e:c.instructions+=2;goto B66870e;
case 0x668711:c.instructions+=1;goto B668711;
case 0x668713:goto L668713;
case 0x668716:c.instructions+=20;goto B668716;
case 0x66871a:c.instructions+=19;goto B66871a;
case 0x66871c:c.instructions+=18;goto B66871c;
case 0x668720:c.instructions+=17;goto B668720;
case 0x668722:c.instructions+=16;goto B668722;
case 0x668724:c.instructions+=15;goto B668724;
case 0x668726:c.instructions+=14;goto B668726;
case 0x668729:c.instructions+=13;goto B668729;
case 0x66872d:c.instructions+=12;goto B66872d;
case 0x668730:c.instructions+=11;goto B668730;
case 0x668734:c.instructions+=10;goto B668734;
case 0x668738:c.instructions+=9;goto B668738;
case 0x66873c:c.instructions+=8;goto B66873c;
case 0x668740:c.instructions+=7;goto B668740;
case 0x668744:c.instructions+=6;goto B668744;
case 0x668748:c.instructions+=5;goto B668748;
case 0x66874c:c.instructions+=4;goto B66874c;
case 0x66874f:c.instructions+=3;goto B66874f;
case 0x668752:c.instructions+=2;goto B668752;
case 0x668755:c.instructions+=1;goto B668755;
case 0x66875b:goto L66875b;
case 0x66875e:c.instructions+=7;goto B66875e;
case 0x668761:c.instructions+=6;goto B668761;
case 0x668764:c.instructions+=5;goto B668764;
case 0x668768:c.instructions+=4;goto B668768;
case 0x66876c:c.instructions+=3;goto B66876c;
case 0x66876f:c.instructions+=2;goto B66876f;
case 0x668772:c.instructions+=1;goto B668772;
case 0x668774:goto L668774;
case 0x668775:c.instructions+=1;goto B668775;
case 0x668777:goto L668777;
case 0x668778:c.instructions+=1;goto B668778;
case 0x66877a:goto L66877a;
case 0x66877b:c.instructions+=1;goto B66877b;
case 0x66877d:goto L66877d;
case 0x668781:c.instructions+=2;goto B668781;
case 0x668784:c.instructions+=1;goto B668784;
case 0x668786:goto L668786;
case 0x66878a:c.instructions+=2;goto B66878a;
case 0x66878d:c.instructions+=1;goto B66878d;
case 0x66878f:goto L66878f;
case 0x668793:c.instructions+=2;goto B668793;
case 0x668796:c.instructions+=1;goto B668796;
case 0x668798:goto L668798;
case 0x66879c:c.instructions+=1;goto B66879c;
case 0x66879f:goto L66879f;
case 0x6687a2:goto L6687a2;
case 0x6687a5:c.instructions+=14;goto B6687a5;
case 0x6687a9:c.instructions+=13;goto B6687a9;
case 0x6687ac:c.instructions+=12;goto B6687ac;
case 0x6687af:c.instructions+=11;goto B6687af;
case 0x6687b2:c.instructions+=10;goto B6687b2;
case 0x6687b6:c.instructions+=9;goto B6687b6;
case 0x6687ba:c.instructions+=8;goto B6687ba;
case 0x6687be:c.instructions+=7;goto B6687be;
case 0x6687c2:c.instructions+=6;goto B6687c2;
case 0x6687c4:c.instructions+=5;goto B6687c4;
case 0x6687c7:c.instructions+=4;goto B6687c7;
case 0x6687c9:c.instructions+=3;goto B6687c9;
case 0x6687ca:c.instructions+=2;goto B6687ca;
case 0x6687cd:c.instructions+=1;goto B6687cd;
case 0x6687d2:goto L6687d2;
case 0x6687d4:c.instructions+=2;goto B6687d4;
case 0x6687d7:c.instructions+=1;goto B6687d7;
case 0x6687dd:goto L6687dd;
case 0x6687e2:c.instructions+=1;goto B6687e2;
case 0x6687e4:goto L6687e4;
case 0x6687e6:c.instructions+=1;goto B6687e6;
case 0x6687eb:goto L6687eb;
case 0x6687ed:c.instructions+=2;goto B6687ed;
case 0x6687ee:c.instructions+=1;goto B6687ee;
case 0x6687f0:goto L6687f0;
case 0x6687f2:c.instructions+=9;goto B6687f2;
case 0x6687f7:c.instructions+=8;goto B6687f7;
case 0x6687f8:c.instructions+=7;goto B6687f8;
case 0x6687f9:c.instructions+=6;goto B6687f9;
case 0x6687fb:c.instructions+=5;goto B6687fb;
case 0x6687fe:c.instructions+=4;goto B6687fe;
case 0x668800:c.instructions+=3;goto B668800;
case 0x668801:c.instructions+=2;goto B668801;
case 0x668804:c.instructions+=1;goto B668804;
case 0x668809:goto L668809;
case 0x66880c:c.instructions+=1;goto B66880c;
case 0x66880e:goto L66880e;
case 0x668810:goto L668810;
case 0x668812:c.instructions+=2;goto B668812;
case 0x668815:c.instructions+=1;goto B668815;
case 0x66881b:goto L66881b;
case 0x668821:goto L668821;
case 0x668824:c.instructions+=6;goto B668824;
case 0x668825:c.instructions+=5;goto B668825;
case 0x668828:c.instructions+=4;goto B668828;
case 0x66882a:c.instructions+=3;goto B66882a;
case 0x66882d:c.instructions+=2;goto B66882d;
case 0x668830:c.instructions+=1;goto B668830;
case 0x668835:goto L668835;
case 0x668837:c.instructions+=2;goto B668837;
case 0x66883a:c.instructions+=1;goto B66883a;
case 0x668840:goto L668840;
case 0x668843:c.instructions+=6;goto B668843;
case 0x668846:c.instructions+=5;goto B668846;
case 0x668848:c.instructions+=4;goto B668848;
case 0x66884b:c.instructions+=3;goto B66884b;
case 0x66884c:c.instructions+=2;goto B66884c;
case 0x66884e:c.instructions+=1;goto B66884e;
case 0x668854:goto L668854;
case 0x668856:goto L668856;
case 0x668858:c.instructions+=5;goto B668858;
case 0x66885c:c.instructions+=4;goto B66885c;
case 0x66885f:c.instructions+=3;goto B66885f;
case 0x668862:c.instructions+=2;goto B668862;
case 0x668868:c.instructions+=1;goto B668868;
case 0x66886a:goto L66886a;
case 0x66886d:c.instructions+=3;goto B66886d;
case 0x668870:c.instructions+=2;goto B668870;
case 0x668873:c.instructions+=1;goto B668873;
case 0x668875:goto L668875;
case 0x668878:c.instructions+=5;goto B668878;
case 0x66887b:c.instructions+=4;goto B66887b;
case 0x66887e:c.instructions+=3;goto B66887e;
case 0x668882:c.instructions+=2;goto B668882;
case 0x668884:c.instructions+=1;goto B668884;
case 0x66888a:goto L66888a;
case 0x66888b:c.instructions+=1;goto B66888b;
case 0x668891:goto L668891;
case 0x668892:c.instructions+=1;goto B668892;
case 0x668898:goto L668898;
case 0x668899:c.instructions+=1;goto B668899;
case 0x66889f:goto L66889f;
case 0x6688a5:c.instructions+=9;goto B6688a5;
case 0x6688ac:c.instructions+=8;goto B6688ac;
case 0x6688b0:c.instructions+=7;goto B6688b0;
case 0x6688b3:c.instructions+=6;goto B6688b3;
case 0x6688b7:c.instructions+=5;goto B6688b7;
case 0x6688b9:c.instructions+=4;goto B6688b9;
case 0x6688bc:c.instructions+=3;goto B6688bc;
case 0x6688bf:c.instructions+=2;goto B6688bf;
case 0x6688c1:c.instructions+=1;goto B6688c1;
case 0x6688c3:goto L6688c3;
case 0x6688c7:c.instructions+=12;goto B6688c7;
case 0x6688c9:c.instructions+=11;goto B6688c9;
case 0x6688cc:c.instructions+=10;goto B6688cc;
case 0x6688ce:c.instructions+=9;goto B6688ce;
case 0x6688d2:c.instructions+=8;goto B6688d2;
case 0x6688d4:c.instructions+=7;goto B6688d4;
case 0x6688d7:c.instructions+=6;goto B6688d7;
case 0x6688dd:c.instructions+=5;goto B6688dd;
case 0x6688e1:c.instructions+=4;goto B6688e1;
case 0x6688e3:c.instructions+=3;goto B6688e3;
case 0x6688e7:c.instructions+=2;goto B6688e7;
case 0x6688ea:c.instructions+=1;goto B6688ea;
case 0x6688ec:goto L6688ec;
case 0x6688ee:goto L6688ee;
case 0x6688f2:c.instructions+=1;goto B6688f2;
case 0x6688f4:goto L6688f4;
case 0x6688f6:c.instructions+=5;goto B6688f6;
case 0x6688f9:c.instructions+=4;goto B6688f9;
case 0x6688fd:c.instructions+=3;goto B6688fd;
case 0x6688ff:c.instructions+=2;goto B6688ff;
case 0x668902:c.instructions+=1;goto B668902;
case 0x668907:goto L668907;
case 0x66890b:c.instructions+=7;goto B66890b;
case 0x66890e:c.instructions+=6;goto B66890e;
case 0x668912:c.instructions+=5;goto B668912;
case 0x668915:c.instructions+=4;goto B668915;
case 0x668917:c.instructions+=3;goto B668917;
case 0x66891b:c.instructions+=2;goto B66891b;
case 0x66891f:c.instructions+=1;goto B66891f;
case 0x668924:goto L668924;
case 0x668926:c.instructions+=1;goto B668926;
case 0x66892c:goto L66892c;
case 0x66892f:c.instructions+=6;goto B66892f;
case 0x668931:c.instructions+=5;goto B668931;
case 0x668934:c.instructions+=4;goto B668934;
case 0x668936:c.instructions+=3;goto B668936;
case 0x668937:c.instructions+=2;goto B668937;
case 0x66893a:c.instructions+=1;goto B66893a;
case 0x66893c:goto L66893c;
case 0x66893f:c.instructions+=1;goto B66893f;
case 0x668941:goto L668941;
case 0x668944:c.instructions+=2;goto B668944;
case 0x668947:c.instructions+=1;goto B668947;
case 0x66894a:goto L66894a;
case 0x66894d:c.instructions+=7;goto B66894d;
case 0x668950:c.instructions+=6;goto B668950;
case 0x668953:c.instructions+=5;goto B668953;
case 0x668956:c.instructions+=4;goto B668956;
case 0x668959:c.instructions+=3;goto B668959;
case 0x66895c:c.instructions+=2;goto B66895c;
case 0x66895e:c.instructions+=1;goto B66895e;
case 0x668964:goto L668964;
case 0x668967:c.instructions+=1;goto B668967;
case 0x66896d:goto L66896d;
case 0x668970:c.instructions+=1;goto B668970;
case 0x668972:goto L668972;
case 0x668975:c.instructions+=1;goto B668975;
case 0x66897b:goto L66897b;
case 0x66897e:c.instructions+=4;goto B66897e;
case 0x668981:c.instructions+=3;goto B668981;
case 0x668982:c.instructions+=2;goto B668982;
case 0x668985:c.instructions+=1;goto B668985;
case 0x66898a:goto L66898a;
case 0x66898c:c.instructions+=1;goto B66898c;
case 0x668992:goto L668992;
case 0x668994:c.instructions+=4;goto B668994;
case 0x668997:c.instructions+=3;goto B668997;
case 0x668998:c.instructions+=2;goto B668998;
case 0x66899b:c.instructions+=1;goto B66899b;
case 0x6689a0:goto L6689a0;
case 0x6689a3:c.instructions+=8;goto B6689a3;
case 0x6689a7:c.instructions+=7;goto B6689a7;
case 0x6689aa:c.instructions+=6;goto B6689aa;
case 0x6689ac:c.instructions+=5;goto B6689ac;
case 0x6689af:c.instructions+=4;goto B6689af;
case 0x6689b2:c.instructions+=3;goto B6689b2;
case 0x6689b6:c.instructions+=2;goto B6689b6;
case 0x6689b8:c.instructions+=1;goto B6689b8;
case 0x6689ba:goto L6689ba;
case 0x6689bc:goto L6689bc;
case 0x6689bf:c.instructions+=4;goto B6689bf;
case 0x6689c2:c.instructions+=3;goto B6689c2;
case 0x6689c5:c.instructions+=2;goto B6689c5;
case 0x6689c8:c.instructions+=1;goto B6689c8;
case 0x6689ca:goto L6689ca;
case 0x6689ce:c.instructions+=1;goto B6689ce;
case 0x6689d0:goto L6689d0;
case 0x6689d4:c.instructions+=1;goto B6689d4;
case 0x6689d6:goto L6689d6;
case 0x6689d9:c.instructions+=2;goto B6689d9;
case 0x6689dc:c.instructions+=1;goto B6689dc;
case 0x6689de:goto L6689de;
case 0x6689e2:c.instructions+=5;goto B6689e2;
case 0x6689e4:c.instructions+=4;goto B6689e4;
case 0x6689e7:c.instructions+=3;goto B6689e7;
case 0x6689eb:c.instructions+=2;goto B6689eb;
case 0x6689ee:c.instructions+=1;goto B6689ee;
case 0x6689f0:goto L6689f0;
case 0x6689f3:c.instructions+=1;goto B6689f3;
case 0x6689f5:goto L6689f5;
case 0x6689f9:c.instructions+=1;goto B6689f9;
case 0x6689fb:goto L6689fb;
case 0x6689ff:c.instructions+=7;goto B6689ff;
case 0x668a01:c.instructions+=6;goto B668a01;
case 0x668a04:c.instructions+=5;goto B668a04;
case 0x668a06:c.instructions+=4;goto B668a06;
case 0x668a0a:c.instructions+=3;goto B668a0a;
case 0x668a0d:c.instructions+=2;goto B668a0d;
case 0x668a0f:c.instructions+=1;goto B668a0f;
case 0x668a11:goto L668a11;
case 0x668a13:c.instructions+=1;goto B668a13;
case 0x668a15:goto L668a15;
case 0x668a19:c.instructions+=1;goto B668a19;
case 0x668a1b:goto L668a1b;
case 0x668a1f:c.instructions+=5;goto B668a1f;
case 0x668a21:c.instructions+=4;goto B668a21;
case 0x668a24:c.instructions+=3;goto B668a24;
case 0x668a28:c.instructions+=2;goto B668a28;
case 0x668a2b:c.instructions+=1;goto B668a2b;
case 0x668a2d:goto L668a2d;
case 0x668a30:goto L668a30;
case 0x668a33:c.instructions+=1;goto B668a33;
case 0x668a36:goto L668a36;
case 0x668a3c:c.instructions+=11;goto B668a3c;
case 0x668a43:c.instructions+=10;goto B668a43;
case 0x668a47:c.instructions+=9;goto B668a47;
case 0x668a4a:c.instructions+=8;goto B668a4a;
case 0x668a4d:c.instructions+=7;goto B668a4d;
case 0x668a51:c.instructions+=6;goto B668a51;
case 0x668a54:c.instructions+=5;goto B668a54;
case 0x668a56:c.instructions+=4;goto B668a56;
case 0x668a59:c.instructions+=3;goto B668a59;
case 0x668a5b:c.instructions+=2;goto B668a5b;
case 0x668a5e:c.instructions+=1;goto B668a5e;
case 0x668a60:goto L668a60;
case 0x668a63:c.instructions+=4;goto B668a63;
case 0x668a66:c.instructions+=3;goto B668a66;
case 0x668a68:c.instructions+=2;goto B668a68;
case 0x668a6a:c.instructions+=1;goto B668a6a;
case 0x668a6d:goto L668a6d;
case 0x668a6f:goto L668a6f;
case 0x668a71:c.instructions+=1;goto B668a71;
case 0x668a74:goto L668a74;
case 0x668a76:goto L668a76;
case 0x668a78:goto L668a78;
case 0x668a7a:c.instructions+=3;goto B668a7a;
case 0x668a7c:c.instructions+=2;goto B668a7c;
case 0x668a7f:c.instructions+=1;goto B668a7f;
case 0x668a81:goto L668a81;
case 0x668a83:goto L668a83;
case 0x668a85:c.instructions+=1;goto B668a85;
case 0x668a88:goto L668a88;
case 0x668a8a:goto L668a8a;
case 0x668a8e:c.instructions+=1;goto B668a8e;
case 0x668a94:goto L668a94;
case 0x668a97:c.instructions+=2;goto B668a97;
case 0x668a99:c.instructions+=1;goto B668a99;
case 0x668a9b:goto L668a9b;
case 0x668a9f:goto L668a9f;
case 0x668aa2:c.instructions+=1;goto B668aa2;
case 0x668aa7:goto L668aa7;
case 0x668aad:c.instructions+=8;goto B668aad;
case 0x668ab4:c.instructions+=7;goto B668ab4;
case 0x668ab8:c.instructions+=6;goto B668ab8;
case 0x668abb:c.instructions+=5;goto B668abb;
case 0x668abe:c.instructions+=4;goto B668abe;
case 0x668ac1:c.instructions+=3;goto B668ac1;
case 0x668ac4:c.instructions+=2;goto B668ac4;
case 0x668ac8:c.instructions+=1;goto B668ac8;
case 0x668aca:goto L668aca;
case 0x668acd:goto L668acd;
case 0x668acf:c.instructions+=20;goto B668acf;
case 0x668ad2:c.instructions+=19;goto B668ad2;
case 0x668ad5:c.instructions+=18;goto B668ad5;
case 0x668ad8:c.instructions+=17;goto B668ad8;
case 0x668ada:c.instructions+=16;goto B668ada;
case 0x668add:c.instructions+=15;goto B668add;
case 0x668ae0:c.instructions+=14;goto B668ae0;
case 0x668ae4:c.instructions+=13;goto B668ae4;
case 0x668ae6:c.instructions+=12;goto B668ae6;
case 0x668ae9:c.instructions+=11;goto B668ae9;
case 0x668aec:c.instructions+=10;goto B668aec;
case 0x668af4:c.instructions+=9;goto B668af4;
case 0x668af6:c.instructions+=8;goto B668af6;
case 0x668af9:c.instructions+=7;goto B668af9;
case 0x668afc:c.instructions+=6;goto B668afc;
case 0x668aff:c.instructions+=5;goto B668aff;
case 0x668b03:c.instructions+=4;goto B668b03;
case 0x668b07:c.instructions+=3;goto B668b07;
case 0x668b0b:c.instructions+=2;goto B668b0b;
case 0x668b0e:c.instructions+=1;goto B668b0e;
case 0x668b10:goto L668b10;
case 0x668b13:c.instructions+=2;goto B668b13;
case 0x668b15:c.instructions+=1;goto B668b15;
case 0x668b17:goto L668b17;
case 0x668b1b:c.instructions+=7;goto B668b1b;
case 0x668b1e:c.instructions+=6;goto B668b1e;
case 0x668b20:c.instructions+=5;goto B668b20;
case 0x668b23:c.instructions+=4;goto B668b23;
case 0x668b26:c.instructions+=3;goto B668b26;
case 0x668b28:c.instructions+=2;goto B668b28;
case 0x668b2a:c.instructions+=1;goto B668b2a;
case 0x668b2d:goto L668b2d;
case 0x668b2f:goto L668b2f;
case 0x668b31:c.instructions+=1;goto B668b31;
case 0x668b34:goto L668b34;
case 0x668b36:goto L668b36;
case 0x668b38:goto L668b38;
case 0x668b3c:c.instructions+=1;goto B668b3c;
case 0x668b42:goto L668b42;
case 0x668b45:c.instructions+=2;goto B668b45;
case 0x668b47:c.instructions+=1;goto B668b47;
case 0x668b49:goto L668b49;
case 0x668b4d:goto L668b4d;
case 0x668b50:c.instructions+=1;goto B668b50;
case 0x668b52:goto L668b52;
case 0x668b55:c.instructions+=10;goto B668b55;
case 0x668b5b:c.instructions+=9;goto B668b5b;
case 0x668b62:c.instructions+=8;goto B668b62;
case 0x668b66:c.instructions+=7;goto B668b66;
case 0x668b69:c.instructions+=6;goto B668b69;
case 0x668b6c:c.instructions+=5;goto B668b6c;
case 0x668b6f:c.instructions+=4;goto B668b6f;
case 0x668b71:c.instructions+=3;goto B668b71;
case 0x668b75:c.instructions+=2;goto B668b75;
case 0x668b78:c.instructions+=1;goto B668b78;
case 0x668b7a:goto L668b7a;
case 0x668b7d:c.instructions+=6;goto B668b7d;
case 0x668b7f:c.instructions+=5;goto B668b7f;
case 0x668b81:c.instructions+=4;goto B668b81;
case 0x668b84:c.instructions+=3;goto B668b84;
case 0x668b86:c.instructions+=2;goto B668b86;
case 0x668b88:c.instructions+=1;goto B668b88;
case 0x668b8b:goto L668b8b;
case 0x668b8d:goto L668b8d;
case 0x668b8f:c.instructions+=1;goto B668b8f;
case 0x668b92:goto L668b92;
case 0x668b94:goto L668b94;
case 0x668b96:goto L668b96;
case 0x668b98:c.instructions+=5;goto B668b98;
case 0x668b9b:c.instructions+=4;goto B668b9b;
case 0x668b9e:c.instructions+=3;goto B668b9e;
case 0x668ba0:c.instructions+=2;goto B668ba0;
case 0x668ba3:c.instructions+=1;goto B668ba3;
case 0x668ba5:goto L668ba5;
case 0x668ba7:goto L668ba7;
case 0x668ba9:c.instructions+=1;goto B668ba9;
case 0x668bac:goto L668bac;
case 0x668bae:goto L668bae;
case 0x668bb2:c.instructions+=1;goto B668bb2;
case 0x668bb4:goto L668bb4;
case 0x668bb7:c.instructions+=2;goto B668bb7;
case 0x668bb9:c.instructions+=1;goto B668bb9;
case 0x668bbb:goto L668bbb;
case 0x668bbf:goto L668bbf;
case 0x668bc2:goto L668bc2;
case 0x668bc5:c.instructions+=4;goto B668bc5;
case 0x668bc8:c.instructions+=3;goto B668bc8;
case 0x668bcb:c.instructions+=2;goto B668bcb;
case 0x668bce:c.instructions+=1;goto B668bce;
case 0x668bd4:goto L668bd4;
case 0x668bd7:c.instructions+=2;goto B668bd7;
case 0x668bda:c.instructions+=1;goto B668bda;
case 0x668bdd:goto L668bdd;
case 0x668be1:c.instructions+=5;goto B668be1;
case 0x668be5:c.instructions+=4;goto B668be5;
case 0x668be9:c.instructions+=3;goto B668be9;
case 0x668bed:c.instructions+=2;goto B668bed;
case 0x668bf1:c.instructions+=1;goto B668bf1;
case 0x668bf6:goto L668bf6;
case 0x668bfd:c.instructions+=1;goto B668bfd;
case 0x668c02:goto L668c02;
case 0x668c06:c.instructions+=1;goto B668c06;
case 0x668c0c:goto L668c0c;
case 0x668c12:c.instructions+=1;goto B668c12;
case 0x668c18:goto L668c18;
case 0x668c1f:c.instructions+=1;goto B668c1f;
case 0x668c25:goto L668c25;
case 0x668c2b:c.instructions+=5;goto B668c2b;
case 0x668c32:c.instructions+=4;goto B668c32;
case 0x668c34:c.instructions+=3;goto B668c34;
case 0x668c37:c.instructions+=2;goto B668c37;
case 0x668c3a:c.instructions+=1;goto B668c3a;
case 0x668c3c:goto L668c3c;
case 0x668c3f:c.instructions+=5;goto B668c3f;
case 0x668c45:c.instructions+=4;goto B668c45;
case 0x668c48:c.instructions+=3;goto B668c48;
case 0x668c4b:c.instructions+=2;goto B668c4b;
case 0x668c4d:c.instructions+=1;goto B668c4d;
case 0x668c4f:goto L668c4f;
case 0x668c52:c.instructions+=8;goto B668c52;
case 0x668c58:c.instructions+=7;goto B668c58;
case 0x668c5b:c.instructions+=6;goto B668c5b;
case 0x668c5e:c.instructions+=5;goto B668c5e;
case 0x668c61:c.instructions+=4;goto B668c61;
case 0x668c63:c.instructions+=3;goto B668c63;
case 0x668c65:c.instructions+=2;goto B668c65;
case 0x668c67:c.instructions+=1;goto B668c67;
case 0x668c69:goto L668c69;
case 0x668c6d:c.instructions+=2;goto B668c6d;
case 0x668c70:c.instructions+=1;goto B668c70;
case 0x668c72:goto L668c72;
case 0x668c74:c.instructions+=1;goto B668c74;
case 0x668c76:goto L668c76;
case 0x668c79:c.instructions+=2;goto B668c79;
case 0x668c7b:c.instructions+=1;goto B668c7b;
case 0x668c7d:goto L668c7d;
case 0x668c80:c.instructions+=2;goto B668c80;
case 0x668c82:c.instructions+=1;goto B668c82;
case 0x668c84:goto L668c84;
case 0x668c87:goto L668c87;
case 0x668c89:c.instructions+=2;goto B668c89;
case 0x668c8c:c.instructions+=1;goto B668c8c;
case 0x668c8e:goto L668c8e;
case 0x668c92:c.instructions+=4;goto B668c92;
case 0x668c95:c.instructions+=3;goto B668c95;
case 0x668c97:c.instructions+=2;goto B668c97;
case 0x668c99:c.instructions+=1;goto B668c99;
case 0x668c9b:goto L668c9b;
case 0x668c9e:goto L668c9e;
case 0x668ca1:c.instructions+=2;goto B668ca1;
case 0x668ca4:c.instructions+=1;goto B668ca4;
case 0x668ca6:goto L668ca6;
case 0x668caa:goto L668caa;
case 0x668cad:goto L668cad;
case 0x668cb0:c.instructions+=1;goto B668cb0;
case 0x668cb5:goto L668cb5;
case 0x668cb8:c.instructions+=1;goto B668cb8;
case 0x668cb9:goto L668cb9;
case 0x668cba:c.instructions+=4;goto B668cba;
case 0x668cbb:c.instructions+=3;goto B668cbb;
case 0x668cbc:c.instructions+=2;goto B668cbc;
case 0x668cbd:c.instructions+=1;goto B668cbd;
case 0x668cc0:goto L668cc0;
case 0x668cc2:c.instructions+=9;goto B668cc2;
case 0x668cc3:c.instructions+=8;goto B668cc3;
case 0x668cc5:c.instructions+=7;goto B668cc5;
case 0x668cc8:c.instructions+=6;goto B668cc8;
case 0x668ccb:c.instructions+=5;goto B668ccb;
case 0x668ccc:c.instructions+=4;goto B668ccc;
case 0x668ccd:c.instructions+=3;goto B668ccd;
case 0x668cce:c.instructions+=2;goto B668cce;
case 0x668cd0:c.instructions+=1;goto B668cd0;
case 0x668cd5:goto L668cd5;
case 0x668cd8:c.instructions+=15;goto B668cd8;
case 0x668cdb:c.instructions+=14;goto B668cdb;
case 0x668cdd:c.instructions+=13;goto B668cdd;
case 0x668ce1:c.instructions+=12;goto B668ce1;
case 0x668ce4:c.instructions+=11;goto B668ce4;
case 0x668ce8:c.instructions+=10;goto B668ce8;
case 0x668ceb:c.instructions+=9;goto B668ceb;
case 0x668ced:c.instructions+=8;goto B668ced;
case 0x668cf0:c.instructions+=7;goto B668cf0;
case 0x668cf3:c.instructions+=6;goto B668cf3;
case 0x668cf7:c.instructions+=5;goto B668cf7;
case 0x668cfb:c.instructions+=4;goto B668cfb;
case 0x668cfe:c.instructions+=3;goto B668cfe;
case 0x668d00:c.instructions+=2;goto B668d00;
case 0x668d03:c.instructions+=1;goto B668d03;
case 0x668d08:goto L668d08;
case 0x668d0c:c.instructions+=3;goto B668d0c;
case 0x668d11:c.instructions+=2;goto B668d11;
case 0x668d14:c.instructions+=1;goto B668d14;
case 0x668d1a:goto L668d1a;
case 0x668d1e:c.instructions+=2;goto B668d1e;
case 0x668d21:c.instructions+=1;goto B668d21;
case 0x668d23:goto L668d23;
case 0x668d26:c.instructions+=1;goto B668d26;
case 0x668d28:goto L668d28;
case 0x668d2b:c.instructions+=10;goto B668d2b;
case 0x668d2d:c.instructions+=9;goto B668d2d;
case 0x668d30:c.instructions+=8;goto B668d30;
case 0x668d32:c.instructions+=7;goto B668d32;
case 0x668d33:c.instructions+=6;goto B668d33;
case 0x668d34:c.instructions+=5;goto B668d34;
case 0x668d36:c.instructions+=4;goto B668d36;
case 0x668d38:c.instructions+=3;goto B668d38;
case 0x668d3b:c.instructions+=2;goto B668d3b;
case 0x668d3c:c.instructions+=1;goto B668d3c;
case 0x668d41:goto L668d41;
case 0x668d43:c.instructions+=1;goto B668d43;
case 0x668d49:goto L668d49;
case 0x668d4c:c.instructions+=1;goto B668d4c;
case 0x668d4e:goto L668d4e;
case 0x668d51:c.instructions+=10;goto B668d51;
case 0x668d53:c.instructions+=9;goto B668d53;
case 0x668d56:c.instructions+=8;goto B668d56;
case 0x668d58:c.instructions+=7;goto B668d58;
case 0x668d5b:c.instructions+=6;goto B668d5b;
case 0x668d5d:c.instructions+=5;goto B668d5d;
case 0x668d62:c.instructions+=4;goto B668d62;
case 0x668d63:c.instructions+=3;goto B668d63;
case 0x668d66:c.instructions+=2;goto B668d66;
case 0x668d67:c.instructions+=1;goto B668d67;
case 0x668d6d:goto L668d6d;
case 0x668d6f:goto L668d6f;
case 0x668d72:c.instructions+=1;goto B668d72;
case 0x668d74:goto L668d74;
case 0x668d77:c.instructions+=5;goto B668d77;
case 0x668d7d:c.instructions+=4;goto B668d7d;
case 0x668d80:c.instructions+=3;goto B668d80;
case 0x668d83:c.instructions+=2;goto B668d83;
case 0x668d85:c.instructions+=1;goto B668d85;
case 0x668d87:goto L668d87;
case 0x668d8a:c.instructions+=2;goto B668d8a;
case 0x668d8c:c.instructions+=1;goto B668d8c;
case 0x668d8e:goto L668d8e;
case 0x668d91:c.instructions+=3;goto B668d91;
case 0x668d93:c.instructions+=2;goto B668d93;
case 0x668d96:c.instructions+=1;goto B668d96;
case 0x668d99:goto L668d99;
case 0x668d9c:c.instructions+=7;goto B668d9c;
case 0x668d9f:c.instructions+=6;goto B668d9f;
case 0x668da1:c.instructions+=5;goto B668da1;
case 0x668da4:c.instructions+=4;goto B668da4;
case 0x668da8:c.instructions+=3;goto B668da8;
case 0x668dab:c.instructions+=2;goto B668dab;
case 0x668dae:c.instructions+=1;goto B668dae;
case 0x668db4:goto L668db4;
case 0x668db7:c.instructions+=1;goto B668db7;
case 0x668dba:goto L668dba;
case 0x668dbd:c.instructions+=2;goto B668dbd;
case 0x668dbf:c.instructions+=1;goto B668dbf;
case 0x668dc1:goto L668dc1;
case 0x668dc5:c.instructions+=4;goto B668dc5;
case 0x668dc8:c.instructions+=3;goto B668dc8;
case 0x668dcb:c.instructions+=2;goto B668dcb;
case 0x668dce:c.instructions+=1;goto B668dce;
case 0x668dd4:goto L668dd4;
case 0x668dd7:goto L668dd7;
case 0x668dda:c.instructions+=1;goto B668dda;
case 0x668ddd:goto L668ddd;
case 0x668ddf:c.instructions+=1;goto B668ddf;
case 0x668de5:goto L668de5;
case 0x668de8:c.instructions+=1;goto B668de8;
case 0x668deb:goto L668deb;
case 0x668dee:c.instructions+=1;goto B668dee;
case 0x668df4:goto L668df4;
case 0x668df6:goto L668df6;
case 0x668df7:c.instructions+=4;goto B668df7;
case 0x668df8:c.instructions+=3;goto B668df8;
case 0x668df9:c.instructions+=2;goto B668df9;
case 0x668dfa:c.instructions+=1;goto B668dfa;
case 0x668dfd:goto L668dfd;
case 0x668dff:c.instructions+=16;goto B668dff;
case 0x668e00:c.instructions+=15;goto B668e00;
case 0x668e02:c.instructions+=14;goto B668e02;
case 0x668e05:c.instructions+=13;goto B668e05;
case 0x668e06:c.instructions+=12;goto B668e06;
case 0x668e09:c.instructions+=11;goto B668e09;
case 0x668e0c:c.instructions+=10;goto B668e0c;
case 0x668e0d:c.instructions+=9;goto B668e0d;
case 0x668e10:c.instructions+=8;goto B668e10;
case 0x668e13:c.instructions+=7;goto B668e13;
case 0x668e14:c.instructions+=6;goto B668e14;
case 0x668e17:c.instructions+=5;goto B668e17;
case 0x668e1a:c.instructions+=4;goto B668e1a;
case 0x668e1c:c.instructions+=3;goto B668e1c;
case 0x668e1f:c.instructions+=2;goto B668e1f;
case 0x668e22:c.instructions+=1;goto B668e22;
case 0x668e28:goto L668e28;
case 0x668e2e:c.instructions+=5;goto B668e2e;
case 0x668e30:c.instructions+=4;goto B668e30;
case 0x668e33:c.instructions+=3;goto B668e33;
case 0x668e36:c.instructions+=2;goto B668e36;
case 0x668e39:c.instructions+=1;goto B668e39;
case 0x668e3b:goto L668e3b;
case 0x668e3d:c.instructions+=1;goto B668e3d;
case 0x668e3f:goto L668e3f;
case 0x668e42:c.instructions+=2;goto B668e42;
case 0x668e44:c.instructions+=1;goto B668e44;
case 0x668e46:goto L668e46;
case 0x668e49:c.instructions+=3;goto B668e49;
case 0x668e4b:c.instructions+=2;goto B668e4b;
case 0x668e4e:c.instructions+=1;goto B668e4e;
case 0x668e51:goto L668e51;
case 0x668e54:c.instructions+=6;goto B668e54;
case 0x668e57:c.instructions+=5;goto B668e57;
case 0x668e59:c.instructions+=4;goto B668e59;
case 0x668e5c:c.instructions+=3;goto B668e5c;
case 0x668e60:c.instructions+=2;goto B668e60;
case 0x668e63:c.instructions+=1;goto B668e63;
case 0x668e69:goto L668e69;
case 0x668e6b:goto L668e6b;
case 0x668e6d:c.instructions+=1;goto B668e6d;
case 0x668e6f:goto L668e6f;
case 0x668e72:c.instructions+=2;goto B668e72;
case 0x668e74:c.instructions+=1;goto B668e74;
case 0x668e76:goto L668e76;
case 0x668e79:c.instructions+=3;goto B668e79;
case 0x668e7b:c.instructions+=2;goto B668e7b;
case 0x668e7e:c.instructions+=1;goto B668e7e;
case 0x668e81:goto L668e81;
case 0x668e84:c.instructions+=6;goto B668e84;
case 0x668e87:c.instructions+=5;goto B668e87;
case 0x668e89:c.instructions+=4;goto B668e89;
case 0x668e8c:c.instructions+=3;goto B668e8c;
case 0x668e90:c.instructions+=2;goto B668e90;
case 0x668e93:c.instructions+=1;goto B668e93;
case 0x668e99:goto L668e99;
case 0x668e9b:c.instructions+=1;goto B668e9b;
case 0x668ea1:goto L668ea1;
case 0x668ea4:c.instructions+=3;goto B668ea4;
case 0x668ea8:c.instructions+=2;goto B668ea8;
case 0x668eab:c.instructions+=1;goto B668eab;
case 0x668eb1:goto L668eb1;
case 0x668eb3:c.instructions+=10;goto B668eb3;
case 0x668eb5:c.instructions+=9;goto B668eb5;
case 0x668eb8:c.instructions+=8;goto B668eb8;
case 0x668eba:c.instructions+=7;goto B668eba;
case 0x668ebb:c.instructions+=6;goto B668ebb;
case 0x668ebc:c.instructions+=5;goto B668ebc;
case 0x668ebe:c.instructions+=4;goto B668ebe;
case 0x668ec0:c.instructions+=3;goto B668ec0;
case 0x668ec3:c.instructions+=2;goto B668ec3;
case 0x668ec4:c.instructions+=1;goto B668ec4;
case 0x668ec9:goto L668ec9;
case 0x668ecb:c.instructions+=1;goto B668ecb;
case 0x668ed1:goto L668ed1;
case 0x668ed5:c.instructions+=1;goto B668ed5;
case 0x668edb:goto L668edb;
case 0x668edf:c.instructions+=2;goto B668edf;
case 0x668ee2:c.instructions+=1;goto B668ee2;
case 0x668ee4:goto L668ee4;
case 0x668ee8:c.instructions+=2;goto B668ee8;
case 0x668eec:c.instructions+=1;goto B668eec;
case 0x668eee:goto L668eee;
case 0x668ef1:c.instructions+=10;goto B668ef1;
case 0x668ef3:c.instructions+=9;goto B668ef3;
case 0x668ef7:c.instructions+=8;goto B668ef7;
case 0x668efa:c.instructions+=7;goto B668efa;
case 0x668efc:c.instructions+=6;goto B668efc;
case 0x668eff:c.instructions+=5;goto B668eff;
case 0x668f00:c.instructions+=4;goto B668f00;
case 0x668f01:c.instructions+=3;goto B668f01;
case 0x668f03:c.instructions+=2;goto B668f03;
case 0x668f06:c.instructions+=1;goto B668f06;
case 0x668f08:goto L668f08;
case 0x668f0e:goto L668f0e;
case 0x668f10:goto L668f10;
case 0x668f16:goto L668f16;
case 0x668f1a:c.instructions+=2;goto B668f1a;
case 0x668f1d:c.instructions+=1;goto B668f1d;
case 0x668f1f:goto L668f1f;
case 0x668f23:c.instructions+=2;goto B668f23;
case 0x668f27:c.instructions+=1;goto B668f27;
case 0x668f29:goto L668f29;
case 0x668f2c:c.instructions+=10;goto B668f2c;
case 0x668f2e:c.instructions+=9;goto B668f2e;
case 0x668f32:c.instructions+=8;goto B668f32;
case 0x668f35:c.instructions+=7;goto B668f35;
case 0x668f37:c.instructions+=6;goto B668f37;
case 0x668f3a:c.instructions+=5;goto B668f3a;
case 0x668f3b:c.instructions+=4;goto B668f3b;
case 0x668f3c:c.instructions+=3;goto B668f3c;
case 0x668f3e:c.instructions+=2;goto B668f3e;
case 0x668f41:c.instructions+=1;goto B668f41;
case 0x668f43:goto L668f43;
case 0x668f49:goto L668f49;
case 0x668f4b:goto L668f4b;
case 0x668f51:goto L668f51;
case 0x668f55:c.instructions+=2;goto B668f55;
case 0x668f58:c.instructions+=1;goto B668f58;
case 0x668f5a:goto L668f5a;
case 0x668f5e:c.instructions+=2;goto B668f5e;
case 0x668f62:c.instructions+=1;goto B668f62;
case 0x668f64:goto L668f64;
case 0x668f67:c.instructions+=10;goto B668f67;
case 0x668f69:c.instructions+=9;goto B668f69;
case 0x668f6d:c.instructions+=8;goto B668f6d;
case 0x668f70:c.instructions+=7;goto B668f70;
case 0x668f72:c.instructions+=6;goto B668f72;
case 0x668f75:c.instructions+=5;goto B668f75;
case 0x668f76:c.instructions+=4;goto B668f76;
case 0x668f77:c.instructions+=3;goto B668f77;
case 0x668f79:c.instructions+=2;goto B668f79;
case 0x668f7c:c.instructions+=1;goto B668f7c;
case 0x668f7e:goto L668f7e;
case 0x668f84:goto L668f84;
case 0x668f86:goto L668f86;
case 0x668f8c:goto L668f8c;
case 0x668f8f:c.instructions+=1;goto B668f8f;
case 0x668f92:goto L668f92;
case 0x668f96:c.instructions+=5;goto B668f96;
case 0x668f99:c.instructions+=4;goto B668f99;
case 0x668f9c:c.instructions+=3;goto B668f9c;
case 0x668f9e:c.instructions+=2;goto B668f9e;
case 0x668fa1:c.instructions+=1;goto B668fa1;
case 0x668fa7:goto L668fa7;
case 0x668faa:c.instructions+=1;goto B668faa;
case 0x668fac:goto L668fac;
case 0x668faf:c.instructions+=5;goto B668faf;
case 0x668fb1:c.instructions+=4;goto B668fb1;
case 0x668fb4:c.instructions+=3;goto B668fb4;
case 0x668fb6:c.instructions+=2;goto B668fb6;
case 0x668fba:c.instructions+=1;goto B668fba;
case 0x668fbc:goto L668fbc;
case 0x668fbf:c.instructions+=4;goto B668fbf;
case 0x668fc2:c.instructions+=3;goto B668fc2;
case 0x668fc4:c.instructions+=2;goto B668fc4;
case 0x668fc6:c.instructions+=1;goto B668fc6;
case 0x668fc9:goto L668fc9;
case 0x668fcb:goto L668fcb;
case 0x668fcd:c.instructions+=1;goto B668fcd;
case 0x668fd0:goto L668fd0;
case 0x668fd2:goto L668fd2;
case 0x668fd5:c.instructions+=2;goto B668fd5;
case 0x668fd8:c.instructions+=1;goto B668fd8;
case 0x668fda:goto L668fda;
case 0x668fdd:c.instructions+=13;goto B668fdd;
case 0x668fe3:c.instructions+=12;goto B668fe3;
case 0x668fe6:c.instructions+=11;goto B668fe6;
case 0x668fe9:c.instructions+=10;goto B668fe9;
case 0x668fec:c.instructions+=9;goto B668fec;
case 0x668fed:c.instructions+=8;goto B668fed;
case 0x668ff0:c.instructions+=7;goto B668ff0;
case 0x668ff3:c.instructions+=6;goto B668ff3;
case 0x668ff7:c.instructions+=5;goto B668ff7;
case 0x668ffa:c.instructions+=4;goto B668ffa;
case 0x668ffb:c.instructions+=3;goto B668ffb;
case 0x668ffc:c.instructions+=2;goto B668ffc;
case 0x668fff:c.instructions+=1;goto B668fff;
default:missing_instruction(c.pc);}
B668002:L668002:{c.instructions+=3;NFSU2_TR(0x668002);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B668005:{NFSU2_TR(0x668005);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66800c:{NFSU2_TR(0x66800c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x668011ull));
TAIL_STATIC(0x671db5u,671);
}
B668011:L668011:{c.instructions+=2;NFSU2_TR(0x668011);
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
B668013:{NFSU2_TR(0x668013);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L668cb9;}}
}
B668019:L668019:{c.instructions+=10;NFSU2_TR(0x668019);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B66801c:{NFSU2_TR(0x66801c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66801d:{NFSU2_TR(0x66801d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B668020:{NFSU2_TR(0x668020);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668021:{NFSU2_TR(0x668021);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B668024:{NFSU2_TR(0x668024);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668025:{NFSU2_TR(0x668025);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B668028:{NFSU2_TR(0x668028);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668029:{NFSU2_TR(0x668029);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66802c:{NFSU2_TR(0x66802c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x668031ull));
TAIL_STATIC(0x65b3f7u,65b);
}
B668031:L668031:{c.instructions+=3;NFSU2_TR(0x668031);
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
B668033:{NFSU2_TR(0x668033);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668036:{NFSU2_TR(0x668036);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L668cb9;}}
}
B66803c:L66803c:{c.instructions+=2;NFSU2_TR(0x66803c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66803f:{NFSU2_TR(0x66803f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B668041:L668041:{c.instructions+=6;NFSU2_TR(0x668041);
u8 U[14];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+8),(U+12),2);
}
B668046:{NFSU2_TR(0x668046);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w2(R+8,u16(u32(r2(R+8))+u32(r2(U+8))));
}
B66804a:{NFSU2_TR(0x66804a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66804b:{NFSU2_TR(0x66804b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B66804e:{NFSU2_TR(0x66804e);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffdaull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B668053:{NFSU2_TR(0x668053);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x668041u);}goto L668041;}}
}
B668055:L668055:{c.instructions+=2;NFSU2_TR(0x668055);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66805a:{NFSU2_TR(0x66805a);
{goto L668066;}
}
B66805c:L66805c:{c.instructions+=5;NFSU2_TR(0x66805c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66805e:{NFSU2_TR(0x66805e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+28),(U+0),4);
}
B668061:{NFSU2_TR(0x668061);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B668062:{NFSU2_TR(0x668062);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B668063:{NFSU2_TR(0x668063);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B668066:L668066:{c.instructions+=3;NFSU2_TR(0x668066);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B668069:{NFSU2_TR(0x668069);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66806c:{NFSU2_TR(0x66806c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66806e:L66806e:{c.instructions+=2;NFSU2_TR(0x66806e);
u8 U[18];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((U+14),(U+12),2);
w2(U+16,u16(u32(r2(U+14))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+16))==(u16(0x0ull))));
}
B668074:{NFSU2_TR(0x668074);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L668086;}}
}
B668076:L668076:{c.instructions+=3;NFSU2_TR(0x668076);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffb4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+4),(U+12),2);
}
B66807b:{NFSU2_TR(0x66807b);
u8 U[18];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((U+14),(U+12),2);
w2(U+16,u16(u32(r2(R+4))-u32(r2(U+14))));
w1(R+518,u8((r2(U+16))==(u16(0x0ull))));
}
B668080:{NFSU2_TR(0x668080);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L668086;}}
}
B668082:L668082:{c.instructions+=2;NFSU2_TR(0x668082);
w1(R+4,u8(0x1ull));
}
B668084:{NFSU2_TR(0x668084);
{goto L668088;}
}
B668086:L668086:{c.instructions+=1;NFSU2_TR(0x668086);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B668088:L668088:{c.instructions+=3;NFSU2_TR(0x668088);
u8 U[18];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((U+14),(U+12),2);
w1(R+512,u8((r2(U+14))<(u16(0x0ull))));
w2(U+16,u16(u32(r2(U+14))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+16))==(u16(0x0ull))));
}
B66808e:{NFSU2_TR(0x66808e);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B668090:{NFSU2_TR(0x668090);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L668098;}}
}
B668092:L668092:{c.instructions+=2;NFSU2_TR(0x668092);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B668094:{NFSU2_TR(0x668094);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L668098;}}
}
B668096:L668096:{c.instructions+=1;NFSU2_TR(0x668096);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B668098:L668098:{c.instructions+=5;NFSU2_TR(0x668098);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B668099:{NFSU2_TR(0x668099);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66809a:{NFSU2_TR(0x66809a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66809b:{NFSU2_TR(0x66809b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B66809e:{NFSU2_TR(0x66809e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66806eu);}goto L66806e;}}
}
B6680a0:L6680a0:{c.instructions+=1;NFSU2_TR(0x6680a0);
{goto L6680cc;}
}
B6680a2:L6680a2:{c.instructions+=9;NFSU2_TR(0x6680a2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B6680a5:{NFSU2_TR(0x6680a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6680a8:{NFSU2_TR(0x6680a8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6680aa:{NFSU2_TR(0x6680aa);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6680ac:{NFSU2_TR(0x6680ac);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6680ae:{NFSU2_TR(0x6680ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+28),(U+0),4);
}
B6680b1:{NFSU2_TR(0x6680b1);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6680b2:{NFSU2_TR(0x6680b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6680b5:{NFSU2_TR(0x6680b5);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6680b6:L6680b6:{c.instructions+=7;NFSU2_TR(0x6680b6);
u8 U[13];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B6680bb:{NFSU2_TR(0x6680bb);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+4)),r2(U+0));
}
B6680be:{NFSU2_TR(0x6680be);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6680bf:{NFSU2_TR(0x6680bf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6680c0:{NFSU2_TR(0x6680c0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6680c1:{NFSU2_TR(0x6680c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6680c4:{NFSU2_TR(0x6680c4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6680b6u);}goto L6680b6;}}
}
B6680c6:L6680c6:{c.instructions+=2;NFSU2_TR(0x6680c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6680c9:{NFSU2_TR(0x6680c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6680cc:L6680cc:{c.instructions+=25;NFSU2_TR(0x6680cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6680ce:{NFSU2_TR(0x6680ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6680d1:{NFSU2_TR(0x6680d1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6680d3:{NFSU2_TR(0x6680d3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6680d4:{NFSU2_TR(0x6680d4);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B6680d6:{NFSU2_TR(0x6680d6);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4eull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6680da:{NFSU2_TR(0x6680da);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6680de:{NFSU2_TR(0x6680de);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5aull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6680e2:{NFSU2_TR(0x6680e2);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6680e6:{NFSU2_TR(0x6680e6);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6680ea:{NFSU2_TR(0x6680ea);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x52ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6680ee:{NFSU2_TR(0x6680ee);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6680f2:{NFSU2_TR(0x6680f2);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5eull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6680f6:{NFSU2_TR(0x6680f6);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6680fa:{NFSU2_TR(0x6680fa);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6680fe:{NFSU2_TR(0x6680fe);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B668102:{NFSU2_TR(0x668102);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffaull))));
}
B668105:{NFSU2_TR(0x668105);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B668109:{NFSU2_TR(0x668109);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B66810d:{NFSU2_TR(0x66810d);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B66810f:{NFSU2_TR(0x66810f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668112:{NFSU2_TR(0x668112);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B668116:{NFSU2_TR(0x668116);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B668119:{NFSU2_TR(0x668119);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66811c:{NFSU2_TR(0x66811c);
if(r1(R+518)){{goto L668cad;}}
}
B668122:L668122:{c.instructions+=8;NFSU2_TR(0x668122);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668125:{NFSU2_TR(0x668125);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x8ull))));
}
B668128:{NFSU2_TR(0x668128);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66812b:{NFSU2_TR(0x66812b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66812e:{NFSU2_TR(0x66812e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B668131:{NFSU2_TR(0x668131);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B668135:{NFSU2_TR(0x668135);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B668137:{NFSU2_TR(0x668137);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L668256;}}
}
B66813d:L66813d:{c.instructions+=5;NFSU2_TR(0x66813d);
__builtin_memmove((R+0),(R+24),4);
}
B66813f:{NFSU2_TR(0x66813f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B668142:{NFSU2_TR(0x668142);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B668145:{NFSU2_TR(0x668145);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668146:{NFSU2_TR(0x668146);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66814bull));
TAIL_STATIC(0x575620u,575);
}
B66814b:L66814b:{c.instructions+=3;NFSU2_TR(0x66814b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66814d:{NFSU2_TR(0x66814d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66814e:{NFSU2_TR(0x66814e);
if(r1(R+518)){{goto L668168;}}
}
B668150:L668150:{c.instructions+=7;NFSU2_TR(0x668150);
u8 U[4];
w4(U+0,u32(0x663ec5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668155:{NFSU2_TR(0x668155);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668156:{NFSU2_TR(0x668156);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B668159:{NFSU2_TR(0x668159);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66815b:{NFSU2_TR(0x66815b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66815c:{NFSU2_TR(0x66815c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B66815e:{NFSU2_TR(0x66815e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x668163ull));
TAIL_STATIC(0x401650u,401);
}
B668163:L668163:{c.instructions+=2;NFSU2_TR(0x668163);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668166:{NFSU2_TR(0x668166);
{goto L66816c;}
}
B668168:L668168:{c.instructions+=1;NFSU2_TR(0x668168);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66816c:L66816c:{c.instructions+=2;NFSU2_TR(0x66816c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B668170:{NFSU2_TR(0x668170);
if(r1(R+518)){{goto L668bf6;}}
}
B668176:L668176:{c.instructions+=15;NFSU2_TR(0x668176);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668179:{NFSU2_TR(0x668179);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B66817d:{NFSU2_TR(0x66817d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668180:{NFSU2_TR(0x668180);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x52ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B668184:{NFSU2_TR(0x668184);
w4(R+4,u32(r2(R+4)));
}
B668187:{NFSU2_TR(0x668187);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B66818a:{NFSU2_TR(0x66818a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7b583cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668190:{NFSU2_TR(0x668190);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xffffull))));
s2(u32(r4(U+0)),r2(U+4));
}
B668196:{NFSU2_TR(0x668196);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668199:{NFSU2_TR(0x668199);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B66819f:{NFSU2_TR(0x66819f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6681a2:{NFSU2_TR(0x6681a2);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6681a4:{NFSU2_TR(0x6681a4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B6681a7:{NFSU2_TR(0x6681a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6681aa:{NFSU2_TR(0x6681aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6681ab:L6681ab:{c.instructions+=1;NFSU2_TR(0x6681ab);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6681ad;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6681abu);}goto L6681ab;}
}
B6681ad:L6681ad:{c.instructions+=46;NFSU2_TR(0x6681ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6681b0:{NFSU2_TR(0x6681b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6681b2:{NFSU2_TR(0x6681b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6681b4:{NFSU2_TR(0x6681b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6681b7:{NFSU2_TR(0x6681b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6681ba:{NFSU2_TR(0x6681ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6681bd:{NFSU2_TR(0x6681bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6681c0:{NFSU2_TR(0x6681c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B6681c3:{NFSU2_TR(0x6681c3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ull))));
}
B6681c6:{NFSU2_TR(0x6681c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B6681c9:{NFSU2_TR(0x6681c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6681cc:{NFSU2_TR(0x6681cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6681cf:{NFSU2_TR(0x6681cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6681d2:{NFSU2_TR(0x6681d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6681d5:{NFSU2_TR(0x6681d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B6681d8:{NFSU2_TR(0x6681d8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B6681da:{NFSU2_TR(0x6681da);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x2ull))));
}
B6681dd:{NFSU2_TR(0x6681dd);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B6681df:{NFSU2_TR(0x6681df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6681e2:{NFSU2_TR(0x6681e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6681e5:{NFSU2_TR(0x6681e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6681e8:{NFSU2_TR(0x6681e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6681eb:{NFSU2_TR(0x6681eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6681ee:{NFSU2_TR(0x6681ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6681f1:{NFSU2_TR(0x6681f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6681f4:{NFSU2_TR(0x6681f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6681f7:{NFSU2_TR(0x6681f7);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6681fb:{NFSU2_TR(0x6681fb);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4eull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6681ff:{NFSU2_TR(0x6681ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668202:{NFSU2_TR(0x668202);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B668206:{NFSU2_TR(0x668206);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66820a:{NFSU2_TR(0x66820a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66820d:{NFSU2_TR(0x66820d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668210:{NFSU2_TR(0x668210);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668213:{NFSU2_TR(0x668213);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668216:{NFSU2_TR(0x668216);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B668218:{NFSU2_TR(0x668218);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66821b:{NFSU2_TR(0x66821b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66821e:{NFSU2_TR(0x66821e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4eull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B668222:{NFSU2_TR(0x668222);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668225:{NFSU2_TR(0x668225);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B668229:{NFSU2_TR(0x668229);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66822c:{NFSU2_TR(0x66822c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66822f:{NFSU2_TR(0x66822f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668232:{NFSU2_TR(0x668232);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B668234:{NFSU2_TR(0x668234);
if(r1(R+518)){{goto L668244;}}
}
B668236:L668236:{c.instructions+=2;NFSU2_TR(0x668236);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668238:{NFSU2_TR(0x668238);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66823dull));
TAIL_STATIC(0x664f63u,664);
}
B66823d:L66823d:{c.instructions+=2;NFSU2_TR(0x66823d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B668241:{NFSU2_TR(0x668241);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668244:L668244:{c.instructions+=6;NFSU2_TR(0x668244);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668247:{NFSU2_TR(0x668247);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66824a:{NFSU2_TR(0x66824a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66824c:{NFSU2_TR(0x66824c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B668250:{NFSU2_TR(0x668250);
w2(R+0,u16(u32(r2(R+0))+u32(u16(0x1ull))));
}
B668252:{NFSU2_TR(0x668252);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B668256:L668256:{c.instructions+=7;NFSU2_TR(0x668256);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B668258:{NFSU2_TR(0x668258);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66825c:{NFSU2_TR(0x66825c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B66825e:{NFSU2_TR(0x66825e);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+6))));
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B668262:{NFSU2_TR(0x668262);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668265:{NFSU2_TR(0x668265);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668268:{NFSU2_TR(0x668268);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66826d;}}
}
B66826a:L66826a:{c.instructions+=1;NFSU2_TR(0x66826a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66826d:L66826d:{c.instructions+=13;NFSU2_TR(0x66826d);
w4(R+0,u32(r2(R+0)));
}
B668270:{NFSU2_TR(0x668270);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B668273:{NFSU2_TR(0x668273);
__builtin_memmove((R+4),(R+0),4);
}
B668275:{NFSU2_TR(0x668275);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B668278:{NFSU2_TR(0x668278);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B66827b:{NFSU2_TR(0x66827b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66827e:{NFSU2_TR(0x66827e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B668280:{NFSU2_TR(0x668280);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B668284:{NFSU2_TR(0x668284);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+4))<(r2(U+6))));
w2(U+8,u16(u32(r2(R+4))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B668288:{NFSU2_TR(0x668288);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66828b:{NFSU2_TR(0x66828b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66828e:{NFSU2_TR(0x66828e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668291:{NFSU2_TR(0x668291);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L668296;}}
}
B668293:L668293:{c.instructions+=1;NFSU2_TR(0x668293);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668296:L668296:{c.instructions+=13;NFSU2_TR(0x668296);
w4(R+4,u32(r2(R+4)));
}
B668299:{NFSU2_TR(0x668299);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66829c:{NFSU2_TR(0x66829c);
__builtin_memmove((R+4),(R+0),4);
}
B66829e:{NFSU2_TR(0x66829e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6682a1:{NFSU2_TR(0x6682a1);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B6682a4:{NFSU2_TR(0x6682a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6682a7:{NFSU2_TR(0x6682a7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6682a9:{NFSU2_TR(0x6682a9);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6682ad:{NFSU2_TR(0x6682ad);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+4))<(r2(U+6))));
w2(U+8,u16(u32(r2(R+4))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6682b1:{NFSU2_TR(0x6682b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6682b4:{NFSU2_TR(0x6682b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6682b7:{NFSU2_TR(0x6682b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6682ba:{NFSU2_TR(0x6682ba);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6682bf;}}
}
B6682bc:L6682bc:{c.instructions+=1;NFSU2_TR(0x6682bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6682bf:L6682bf:{c.instructions+=15;NFSU2_TR(0x6682bf);
w4(R+4,u32(r2(R+4)));
}
B6682c2:{NFSU2_TR(0x6682c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6682c5:{NFSU2_TR(0x6682c5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6682c7:{NFSU2_TR(0x6682c7);
__builtin_memmove((R+4),(R+0),4);
}
B6682c9:{NFSU2_TR(0x6682c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6682cc:{NFSU2_TR(0x6682cc);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B6682cf:{NFSU2_TR(0x6682cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6682d2:{NFSU2_TR(0x6682d2);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6682d6:{NFSU2_TR(0x6682d6);
w4(R+24,u32(r2(R+0)));
}
B6682d9:{NFSU2_TR(0x6682d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6682dc:{NFSU2_TR(0x6682dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6682df:{NFSU2_TR(0x6682df);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6682e2:{NFSU2_TR(0x6682e2);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6682e6:{NFSU2_TR(0x6682e6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6682e9:{NFSU2_TR(0x6682e9);
if(r1(R+518)){{goto L66867e;}}
}
B6682ef:L6682ef:{c.instructions+=22;NFSU2_TR(0x6682ef);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6682f1:{NFSU2_TR(0x6682f1);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6682f5:{NFSU2_TR(0x6682f5);
w4(R+0,u32(r2(R+4)));
}
B6682f8:{NFSU2_TR(0x6682f8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6682fb:{NFSU2_TR(0x6682fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6682fe:{NFSU2_TR(0x6682fe);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6682ff:{NFSU2_TR(0x6682ff);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B668303:{NFSU2_TR(0x668303);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B668306:{NFSU2_TR(0x668306);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B668308:{NFSU2_TR(0x668308);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B668309:{NFSU2_TR(0x668309);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffff5ull))));
}
B66830c:{NFSU2_TR(0x66830c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B66830e:{NFSU2_TR(0x66830e);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B668310:{NFSU2_TR(0x668310);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668313:{NFSU2_TR(0x668313);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B668317:{NFSU2_TR(0x668317);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66831a:{NFSU2_TR(0x66831a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66831d:{NFSU2_TR(0x66831d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668320:{NFSU2_TR(0x668320);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668321:{NFSU2_TR(0x668321);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
}
B668324:{NFSU2_TR(0x668324);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668325:{NFSU2_TR(0x668325);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66832aull));
TAIL_STATIC(0x670f08u,670);
}
B66832a:L66832a:{c.instructions+=3;NFSU2_TR(0x66832a);
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
B66832c:{NFSU2_TR(0x66832c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66832f:{NFSU2_TR(0x66832f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L668cad;}}
}
B668335:L668335:{c.instructions+=4;NFSU2_TR(0x668335);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B668337:{NFSU2_TR(0x668337);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B668339:{NFSU2_TR(0x668339);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66833a:{NFSU2_TR(0x66833a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66833dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66833d:L66833d:{c.instructions+=80;NFSU2_TR(0x66833d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B668340:{NFSU2_TR(0x668340);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B668342:{NFSU2_TR(0x668342);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B668345:{NFSU2_TR(0x668345);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+0))));
}
B668347:{NFSU2_TR(0x668347);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66834a:{NFSU2_TR(0x66834a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66834d:{NFSU2_TR(0x66834d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668350:{NFSU2_TR(0x668350);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B668353:{NFSU2_TR(0x668353);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668356:{NFSU2_TR(0x668356);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668359:{NFSU2_TR(0x668359);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66835b:{NFSU2_TR(0x66835b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+0))));
}
B66835d:{NFSU2_TR(0x66835d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B668360:{NFSU2_TR(0x668360);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668363:{NFSU2_TR(0x668363);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B668366:{NFSU2_TR(0x668366);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668369:{NFSU2_TR(0x668369);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B66836b:{NFSU2_TR(0x66836b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66836e:{NFSU2_TR(0x66836e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+0))));
}
B668370:{NFSU2_TR(0x668370);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B668373:{NFSU2_TR(0x668373);
__builtin_memmove((R+28),(R+4),4);
}
B668375:{NFSU2_TR(0x668375);
w4(R+28,shr<u32>(r4(R+28),u64(u32(0x1ull))));
}
B668377:{NFSU2_TR(0x668377);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B668379:{NFSU2_TR(0x668379);
__builtin_memmove((R+28),(R+4),4);
}
B66837b:{NFSU2_TR(0x66837b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B66837e:{NFSU2_TR(0x66837e);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B668380:{NFSU2_TR(0x668380);
__builtin_memmove((R+28),(R+4),4);
}
B668382:{NFSU2_TR(0x668382);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B668385:{NFSU2_TR(0x668385);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B668387:{NFSU2_TR(0x668387);
__builtin_memmove((R+28),(R+4),4);
}
B668389:{NFSU2_TR(0x668389);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B66838c:{NFSU2_TR(0x66838c);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B66838e:{NFSU2_TR(0x66838e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B668391:{NFSU2_TR(0x668391);
__builtin_memmove((R+28),(R+4),4);
}
B668393:{NFSU2_TR(0x668393);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B668396:{NFSU2_TR(0x668396);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B668398:{NFSU2_TR(0x668398);
__builtin_memmove((R+28),(R+8),4);
}
B66839a:{NFSU2_TR(0x66839a);
w4(R+28,shr<u32>(r4(R+28),u64(u32(0x1ull))));
}
B66839c:{NFSU2_TR(0x66839c);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B66839e:{NFSU2_TR(0x66839e);
__builtin_memmove((R+28),(R+8),4);
}
B6683a0:{NFSU2_TR(0x6683a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B6683a3:{NFSU2_TR(0x6683a3);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B6683a5:{NFSU2_TR(0x6683a5);
__builtin_memmove((R+28),(R+8),4);
}
B6683a7:{NFSU2_TR(0x6683a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B6683aa:{NFSU2_TR(0x6683aa);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B6683ac:{NFSU2_TR(0x6683ac);
__builtin_memmove((R+28),(R+8),4);
}
B6683ae:{NFSU2_TR(0x6683ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B6683b1:{NFSU2_TR(0x6683b1);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B6683b3:{NFSU2_TR(0x6683b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6683b6:{NFSU2_TR(0x6683b6);
__builtin_memmove((R+28),(R+8),4);
}
B6683b8:{NFSU2_TR(0x6683b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B6683bb:{NFSU2_TR(0x6683bb);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B6683bd:{NFSU2_TR(0x6683bd);
__builtin_memmove((R+28),(R+24),4);
}
B6683bf:{NFSU2_TR(0x6683bf);
w4(R+28,shr<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6683c1:{NFSU2_TR(0x6683c1);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B6683c3:{NFSU2_TR(0x6683c3);
__builtin_memmove((R+28),(R+24),4);
}
B6683c5:{NFSU2_TR(0x6683c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6683c9:{NFSU2_TR(0x6683c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B6683cc:{NFSU2_TR(0x6683cc);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B6683ce:{NFSU2_TR(0x6683ce);
__builtin_memmove((R+28),(R+24),4);
}
B6683d0:{NFSU2_TR(0x6683d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B6683d3:{NFSU2_TR(0x6683d3);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B6683d5:{NFSU2_TR(0x6683d5);
__builtin_memmove((R+28),(R+24),4);
}
B6683d7:{NFSU2_TR(0x6683d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B6683da:{NFSU2_TR(0x6683da);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B6683dc:{NFSU2_TR(0x6683dc);
__builtin_memmove((R+28),(R+24),4);
}
B6683de:{NFSU2_TR(0x6683de);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B6683e1:{NFSU2_TR(0x6683e1);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B6683e3:{NFSU2_TR(0x6683e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6683e6:{NFSU2_TR(0x6683e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6683e9:{NFSU2_TR(0x6683e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6683ec:{NFSU2_TR(0x6683ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6683ef:{NFSU2_TR(0x6683ef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6683f1:{NFSU2_TR(0x6683f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6683f4:{NFSU2_TR(0x6683f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6683f6:{NFSU2_TR(0x6683f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+0))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6683f8:{NFSU2_TR(0x6683f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6683fb:{NFSU2_TR(0x6683fb);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B6683fe:{NFSU2_TR(0x6683fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668401:{NFSU2_TR(0x668401);
if(r1(R+518)){{goto L668407;}}
}
B668403:L668403:{c.instructions+=2;NFSU2_TR(0x668403);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B668404:{NFSU2_TR(0x668404);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668407:L668407:{c.instructions+=7;NFSU2_TR(0x668407);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66840a:{NFSU2_TR(0x66840a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B66840c:{NFSU2_TR(0x66840c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66840f:{NFSU2_TR(0x66840f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+0))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B668411:{NFSU2_TR(0x668411);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B668414:{NFSU2_TR(0x668414);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668417:{NFSU2_TR(0x668417);
if(r1(R+518)){{goto L66841d;}}
}
B668419:L668419:{c.instructions+=2;NFSU2_TR(0x668419);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B66841a:{NFSU2_TR(0x66841a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66841d:L66841d:{c.instructions+=7;NFSU2_TR(0x66841d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B668420:{NFSU2_TR(0x668420);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B668422:{NFSU2_TR(0x668422);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B668425:{NFSU2_TR(0x668425);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+0))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B668427:{NFSU2_TR(0x668427);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B66842a:{NFSU2_TR(0x66842a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66842d:{NFSU2_TR(0x66842d);
if(r1(R+518)){{goto L668433;}}
}
B66842f:L66842f:{c.instructions+=2;NFSU2_TR(0x66842f);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B668430:{NFSU2_TR(0x668430);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668433:L668433:{c.instructions+=87;NFSU2_TR(0x668433);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B668436:{NFSU2_TR(0x668436);
__builtin_memmove((R+24),(R+28),4);
}
B668438:{NFSU2_TR(0x668438);
w4(R+24,shr<u32>(r4(R+24),u64(u32(0x1ull))));
}
B66843a:{NFSU2_TR(0x66843a);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B66843c:{NFSU2_TR(0x66843c);
__builtin_memmove((R+28),(R+24),4);
}
B66843e:{NFSU2_TR(0x66843e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B668441:{NFSU2_TR(0x668441);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B668443:{NFSU2_TR(0x668443);
__builtin_memmove((R+24),(R+28),4);
}
B668445:{NFSU2_TR(0x668445);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B668448:{NFSU2_TR(0x668448);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B66844a:{NFSU2_TR(0x66844a);
__builtin_memmove((R+28),(R+24),4);
}
B66844c:{NFSU2_TR(0x66844c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B66844f:{NFSU2_TR(0x66844f);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B668451:{NFSU2_TR(0x668451);
__builtin_memmove((R+24),(R+28),4);
}
B668453:{NFSU2_TR(0x668453);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B668456:{NFSU2_TR(0x668456);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B668458:{NFSU2_TR(0x668458);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66845b:{NFSU2_TR(0x66845b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66845e:{NFSU2_TR(0x66845e);
__builtin_memmove((R+24),(R+28),4);
}
B668460:{NFSU2_TR(0x668460);
w4(R+24,shr<u32>(r4(R+24),u64(u32(0x1ull))));
}
B668462:{NFSU2_TR(0x668462);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B668464:{NFSU2_TR(0x668464);
__builtin_memmove((R+28),(R+24),4);
}
B668466:{NFSU2_TR(0x668466);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B668469:{NFSU2_TR(0x668469);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B66846b:{NFSU2_TR(0x66846b);
__builtin_memmove((R+24),(R+28),4);
}
B66846d:{NFSU2_TR(0x66846d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B668470:{NFSU2_TR(0x668470);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B668472:{NFSU2_TR(0x668472);
__builtin_memmove((R+28),(R+24),4);
}
B668474:{NFSU2_TR(0x668474);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B668477:{NFSU2_TR(0x668477);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B668479:{NFSU2_TR(0x668479);
__builtin_memmove((R+24),(R+28),4);
}
B66847b:{NFSU2_TR(0x66847b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B66847e:{NFSU2_TR(0x66847e);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B668480:{NFSU2_TR(0x668480);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B668483:{NFSU2_TR(0x668483);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668486:{NFSU2_TR(0x668486);
__builtin_memmove((R+24),(R+28),4);
}
B668488:{NFSU2_TR(0x668488);
w4(R+24,shr<u32>(r4(R+24),u64(u32(0x1ull))));
}
B66848a:{NFSU2_TR(0x66848a);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B66848c:{NFSU2_TR(0x66848c);
__builtin_memmove((R+28),(R+24),4);
}
B66848e:{NFSU2_TR(0x66848e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B668491:{NFSU2_TR(0x668491);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B668493:{NFSU2_TR(0x668493);
__builtin_memmove((R+24),(R+28),4);
}
B668495:{NFSU2_TR(0x668495);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B668498:{NFSU2_TR(0x668498);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B66849a:{NFSU2_TR(0x66849a);
__builtin_memmove((R+28),(R+24),4);
}
B66849c:{NFSU2_TR(0x66849c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B66849f:{NFSU2_TR(0x66849f);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B6684a1:{NFSU2_TR(0x6684a1);
__builtin_memmove((R+24),(R+28),4);
}
B6684a3:{NFSU2_TR(0x6684a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B6684a6:{NFSU2_TR(0x6684a6);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B6684a8:{NFSU2_TR(0x6684a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6684ab:{NFSU2_TR(0x6684ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6684ae:{NFSU2_TR(0x6684ae);
__builtin_memmove((R+28),(R+24),4);
}
B6684b0:{NFSU2_TR(0x6684b0);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7ull))));
}
B6684b3:{NFSU2_TR(0x6684b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B6684b6:{NFSU2_TR(0x6684b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6684b9:{NFSU2_TR(0x6684b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6684bc:{NFSU2_TR(0x6684bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6684bf:{NFSU2_TR(0x6684bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6684c2:{NFSU2_TR(0x6684c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6684c5:{NFSU2_TR(0x6684c5);
__builtin_memmove((R+24),(R+4),4);
}
B6684c7:{NFSU2_TR(0x6684c7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B6684ca:{NFSU2_TR(0x6684ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B6684cd:{NFSU2_TR(0x6684cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6684d0:{NFSU2_TR(0x6684d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6684d3:{NFSU2_TR(0x6684d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6684d6:{NFSU2_TR(0x6684d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6684d9:{NFSU2_TR(0x6684d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6684dc:{NFSU2_TR(0x6684dc);
__builtin_memmove((R+4),(R+8),4);
}
B6684de:{NFSU2_TR(0x6684de);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6684e1:{NFSU2_TR(0x6684e1);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B6684e4:{NFSU2_TR(0x6684e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6684e7:{NFSU2_TR(0x6684e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6684ea:{NFSU2_TR(0x6684ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6684ed:{NFSU2_TR(0x6684ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6684f0:{NFSU2_TR(0x6684f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6684f3:{NFSU2_TR(0x6684f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B6684f6:{NFSU2_TR(0x6684f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6684f9:{NFSU2_TR(0x6684f9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6684fb:{NFSU2_TR(0x6684fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6684fe:{NFSU2_TR(0x6684fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668501:{NFSU2_TR(0x668501);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668504:{NFSU2_TR(0x668504);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668507:{NFSU2_TR(0x668507);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66850a:{NFSU2_TR(0x66850a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66850e:{NFSU2_TR(0x66850e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B668512:{NFSU2_TR(0x668512);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B668515:L668515:{c.instructions+=10;NFSU2_TR(0x668515);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668518:{NFSU2_TR(0x668518);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66851b:{NFSU2_TR(0x66851b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66851e:{NFSU2_TR(0x66851e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668521:{NFSU2_TR(0x668521);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B668524:{NFSU2_TR(0x668524);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B668526:{NFSU2_TR(0x668526);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B668527:{NFSU2_TR(0x668527);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66852a:{NFSU2_TR(0x66852a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B66852d:{NFSU2_TR(0x66852d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x668515u);}goto L668515;}}
}
B66852f:L66852f:{c.instructions+=19;NFSU2_TR(0x66852f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668532:{NFSU2_TR(0x668532);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B668535:{NFSU2_TR(0x668535);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668538:{NFSU2_TR(0x668538);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
}
B66853d:{NFSU2_TR(0x66853d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668540:{NFSU2_TR(0x668540);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B668543:{NFSU2_TR(0x668543);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B668547:{NFSU2_TR(0x668547);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B66854b:{NFSU2_TR(0x66854b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66854e:{NFSU2_TR(0x66854e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B668551:{NFSU2_TR(0x668551);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B668555:{NFSU2_TR(0x668555);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B668559:{NFSU2_TR(0x668559);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66855c:{NFSU2_TR(0x66855c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66855f:{NFSU2_TR(0x66855f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((R+0),(U+0),4);
}
B668562:{NFSU2_TR(0x668562);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668565:{NFSU2_TR(0x668565);
__builtin_memmove((R+8),(R+4),4);
}
B668567:{NFSU2_TR(0x668567);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B66856a:{NFSU2_TR(0x66856a);
__builtin_memmove((R+28),(R+0),4);
}
B66856c:L66856c:{c.instructions+=1;NFSU2_TR(0x66856c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L66856e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66856cu);}goto L66856c;}
}
B66856e:L66856e:{c.instructions+=2;NFSU2_TR(0x66856e);
__builtin_memmove((R+4),(R+8),4);
}
B668570:{NFSU2_TR(0x668570);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B668573:L668573:{c.instructions+=1;NFSU2_TR(0x668573);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L668575;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x668573u);}goto L668573;}
}
B668575:L668575:{c.instructions+=7;NFSU2_TR(0x668575);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668578:{NFSU2_TR(0x668578);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((R+8),(U+0),4);
}
B66857b:{NFSU2_TR(0x66857b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66857c:{NFSU2_TR(0x66857c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B66857f:{NFSU2_TR(0x66857f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668580:{NFSU2_TR(0x668580);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668581:{NFSU2_TR(0x668581);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x668586ull));
TAIL_STATIC(0x688dc9u,688);
}
B668586:L668586:{c.instructions+=3;NFSU2_TR(0x668586);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B668588:{NFSU2_TR(0x668588);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66858b:{NFSU2_TR(0x66858b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L668cad;}}
}
B668591:L668591:{c.instructions+=7;NFSU2_TR(0x668591);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B668595:{NFSU2_TR(0x668595);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B668598:{NFSU2_TR(0x668598);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66859b:{NFSU2_TR(0x66859b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B66859c:{NFSU2_TR(0x66859c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66859d:{NFSU2_TR(0x66859d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6685a0:{NFSU2_TR(0x6685a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6685a5ull));
TAIL_STATIC(0x660f9cu,660);
}
B6685a5:L6685a5:{c.instructions+=3;NFSU2_TR(0x6685a5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6685a7:{NFSU2_TR(0x6685a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6685aa:{NFSU2_TR(0x6685aa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L668cad;}}
}
B6685b0:L6685b0:{c.instructions+=10;NFSU2_TR(0x6685b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6685b3:{NFSU2_TR(0x6685b3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x52ull))));
w2(U+4,u16(0xb5ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6685b9:{NFSU2_TR(0x6685b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
w4(U+4,u32(0x11000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6685c0:{NFSU2_TR(0x6685c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6685c4:{NFSU2_TR(0x6685c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6685c7:{NFSU2_TR(0x6685c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6685ca:{NFSU2_TR(0x6685ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6685cd:{NFSU2_TR(0x6685cd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
}
B6685d0:{NFSU2_TR(0x6685d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6685d3:{NFSU2_TR(0x6685d3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6685d5:L6685d5:{c.instructions+=3;NFSU2_TR(0x6685d5);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+28),(U+12),2);
}
B6685da:{NFSU2_TR(0x6685da);
u8 U[2];
w2(U+0,u16(u32(r2(R+28))&u32(r2(R+28))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6685dd:{NFSU2_TR(0x6685dd);
if(r1(R+518)){{goto L66862a;}}
}
B6685df:L6685df:{c.instructions+=8;NFSU2_TR(0x6685df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6685e2:{NFSU2_TR(0x6685e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6685e4:{NFSU2_TR(0x6685e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6685e7:{NFSU2_TR(0x6685e7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6685e9:{NFSU2_TR(0x6685e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6685eb:{NFSU2_TR(0x6685eb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6685ee:{NFSU2_TR(0x6685ee);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6685f0:{NFSU2_TR(0x6685f0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6685fd;}}
}
B6685f2:L6685f2:{c.instructions+=1;NFSU2_TR(0x6685f2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6685f5:L6685f5:{c.instructions+=4;NFSU2_TR(0x6685f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+0))));
}
B6685f7:{NFSU2_TR(0x6685f7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6685fa:{NFSU2_TR(0x6685fa);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6685fb:{NFSU2_TR(0x6685fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6685f5u);}goto L6685f5;}}
}
B6685fd:L6685fd:{c.instructions+=5;NFSU2_TR(0x6685fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668600:{NFSU2_TR(0x668600);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(r2(U+0)));
}
B668603:{NFSU2_TR(0x668603);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w1(R+512,u8((r2(R+0))<(r2(U+0))));
w2(U+2,u16(u32(r2(R+0))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B668606:{NFSU2_TR(0x668606);
__builtin_memmove((R+4),(R+0),4);
}
B668608:{NFSU2_TR(0x668608);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66860c;}}
}
B66860a:L66860a:{c.instructions+=1;NFSU2_TR(0x66860a);
__builtin_memmove((R+4),(R+28),4);
}
B66860c:L66860c:{c.instructions+=6;NFSU2_TR(0x66860c);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+0),(U+12),2);
}
B668611:{NFSU2_TR(0x668611);
w4(R+28,u32(r2(R+0)));
}
B668614:{NFSU2_TR(0x668614);
w4(R+4,u32(r2(R+4)));
}
B668617:{NFSU2_TR(0x668617);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B668619:{NFSU2_TR(0x668619);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66861b:{NFSU2_TR(0x66861b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66863b;}}
}
B66861d:L66861d:{c.instructions+=2;NFSU2_TR(0x66861d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66861f:{NFSU2_TR(0x66861f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66862a;}}
}
B668621:L668621:{c.instructions+=2;NFSU2_TR(0x668621);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B668624:{NFSU2_TR(0x668624);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66862a;}}
}
B668626:L668626:{c.instructions+=1;NFSU2_TR(0x668626);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66862a:L66862a:{c.instructions+=6;NFSU2_TR(0x66862a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66862e:{NFSU2_TR(0x66862e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B668632:{NFSU2_TR(0x668632);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B668633:{NFSU2_TR(0x668633);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B668634:{NFSU2_TR(0x668634);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B668637:{NFSU2_TR(0x668637);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6685d5u);}goto L6685d5;}}
}
B668639:L668639:{c.instructions+=1;NFSU2_TR(0x668639);
{goto L66863f;}
}
B66863b:L66863b:{c.instructions+=1;NFSU2_TR(0x66863b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66863f:L66863f:{c.instructions+=2;NFSU2_TR(0x66863f);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B668643:{NFSU2_TR(0x668643);
if(r1(R+518)){{goto L66867e;}}
}
B668645:L668645:{c.instructions+=4;NFSU2_TR(0x668645);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B668647:{NFSU2_TR(0x668647);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66864b:{NFSU2_TR(0x66864b);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+6))));
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B66864f:{NFSU2_TR(0x66864f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L668654;}}
}
B668651:L668651:{c.instructions+=1;NFSU2_TR(0x668651);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668654:L668654:{c.instructions+=5;NFSU2_TR(0x668654);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B668658:{NFSU2_TR(0x668658);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66865a:{NFSU2_TR(0x66865a);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66865e:{NFSU2_TR(0x66865e);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+6))));
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B668662:{NFSU2_TR(0x668662);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L668667;}}
}
B668664:L668664:{c.instructions+=1;NFSU2_TR(0x668664);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668667:L668667:{c.instructions+=5;NFSU2_TR(0x668667);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66866b:{NFSU2_TR(0x66866b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66866d:{NFSU2_TR(0x66866d);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B668671:{NFSU2_TR(0x668671);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+6))));
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B668675:{NFSU2_TR(0x668675);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66867a;}}
}
B668677:L668677:{c.instructions+=1;NFSU2_TR(0x668677);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66867a:L66867a:{c.instructions+=1;NFSU2_TR(0x66867a);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66867e:L66867e:{c.instructions+=2;NFSU2_TR(0x66867e);
__builtin_memmove((R+4),(R+12),4);
}
B668680:{NFSU2_TR(0x668680);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x668685ull));
TAIL_STATIC(0x65b733u,65b);
}
B668685:L668685:{c.instructions+=3;NFSU2_TR(0x668685);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B668687:{NFSU2_TR(0x668687);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66868a:{NFSU2_TR(0x66868a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L668cad;}}
}
B668690:L668690:{c.instructions+=6;NFSU2_TR(0x668690);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B668695:{NFSU2_TR(0x668695);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B668698:{NFSU2_TR(0x668698);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66869b:{NFSU2_TR(0x66869b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66869e:{NFSU2_TR(0x66869e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66869f:{NFSU2_TR(0x66869f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6686a4ull));
TAIL_STATIC(0x575620u,575);
}
B6686a4:L6686a4:{c.instructions+=4;NFSU2_TR(0x6686a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6686a6:{NFSU2_TR(0x6686a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6686a7:{NFSU2_TR(0x6686a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6686aa:{NFSU2_TR(0x6686aa);
if(r1(R+518)){{goto L668bf6;}}
}
B6686b0:L6686b0:{c.instructions+=5;NFSU2_TR(0x6686b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6686b3:{NFSU2_TR(0x6686b3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6686b5:{NFSU2_TR(0x6686b5);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6686b7:{NFSU2_TR(0x6686b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6686ba:{NFSU2_TR(0x6686ba);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6686c8;}}
}
B6686bc:L6686bc:{c.instructions+=5;NFSU2_TR(0x6686bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6686bf:{NFSU2_TR(0x6686bf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6686c0:{NFSU2_TR(0x6686c0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B6686c3:{NFSU2_TR(0x6686c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6686c6:{NFSU2_TR(0x6686c6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6686bcu);}goto L6686bc;}}
}
B6686c8:L6686c8:{c.instructions+=5;NFSU2_TR(0x6686c8);
u8 U[4];
w4(U+0,u32(0x65b64bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6686cd:{NFSU2_TR(0x6686cd);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6686cf:{NFSU2_TR(0x6686cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6686d2:{NFSU2_TR(0x6686d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6686d3:{NFSU2_TR(0x6686d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6686d8ull));
TAIL_STATIC(0x75cc70u,75c);
}
B6686d8:L6686d8:{c.instructions+=9;NFSU2_TR(0x6686d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6686db:{NFSU2_TR(0x6686db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6686de:{NFSU2_TR(0x6686de);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6686e0:{NFSU2_TR(0x6686e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6686e3:{NFSU2_TR(0x6686e3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6686e5:{NFSU2_TR(0x6686e5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B6686e7:{NFSU2_TR(0x6686e7);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6686e9:{NFSU2_TR(0x6686e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6686ec:{NFSU2_TR(0x6686ec);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L668713;}}
}
B6686ee:L6686ee:{c.instructions+=2;NFSU2_TR(0x6686ee);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6686f1:{NFSU2_TR(0x6686f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6686f4:L6686f4:{c.instructions+=3;NFSU2_TR(0x6686f4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B6686f7:{NFSU2_TR(0x6686f7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6686fa:{NFSU2_TR(0x6686fa);
if(r1(R+518)){{goto L66870a;}}
}
B6686fc:L6686fc:{c.instructions+=2;NFSU2_TR(0x6686fc);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6686fd:{NFSU2_TR(0x6686fd);
if(r1(R+518)){{goto L668705;}}
}
B6686ff:L6686ff:{c.instructions+=2;NFSU2_TR(0x6686ff);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B668700:{NFSU2_TR(0x668700);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66870b;}}
}
B668702:L668702:{c.instructions+=2;NFSU2_TR(0x668702);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B668703:{NFSU2_TR(0x668703);
{goto L66870b;}
}
B668705:L668705:{c.instructions+=2;NFSU2_TR(0x668705);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B668708:{NFSU2_TR(0x668708);
{goto L66870b;}
}
B66870a:L66870a:{c.instructions+=1;NFSU2_TR(0x66870a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66870b:L66870b:{c.instructions+=3;NFSU2_TR(0x66870b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B66870e:{NFSU2_TR(0x66870e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B668711:{NFSU2_TR(0x668711);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6686f4u);}goto L6686f4;}}
}
B668713:L668713:{c.instructions+=21;NFSU2_TR(0x668713);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668716:{NFSU2_TR(0x668716);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66871a:{NFSU2_TR(0x66871a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66871c:{NFSU2_TR(0x66871c);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B668720:{NFSU2_TR(0x668720);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B668722:{NFSU2_TR(0x668722);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B668724:{NFSU2_TR(0x668724);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B668726:{NFSU2_TR(0x668726);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668729:{NFSU2_TR(0x668729);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B66872d:{NFSU2_TR(0x66872d);
w2(R+28,u16(u32(r2(R+28))+u32(r2(R+0))));
}
B668730:{NFSU2_TR(0x668730);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B668734:{NFSU2_TR(0x668734);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B668738:{NFSU2_TR(0x668738);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66873c:{NFSU2_TR(0x66873c);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x52ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B668740:{NFSU2_TR(0x668740);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B668744:{NFSU2_TR(0x668744);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5eull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B668748:{NFSU2_TR(0x668748);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66874c:{NFSU2_TR(0x66874c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66874f:{NFSU2_TR(0x66874f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668752:{NFSU2_TR(0x668752);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668755:{NFSU2_TR(0x668755);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L668bdd;}}
}
B66875b:L66875b:{c.instructions+=8;NFSU2_TR(0x66875b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66875e:{NFSU2_TR(0x66875e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668761:{NFSU2_TR(0x668761);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B668764:{NFSU2_TR(0x668764);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B668768:{NFSU2_TR(0x668768);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66876c:{NFSU2_TR(0x66876c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B66876f:{NFSU2_TR(0x66876f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668772:{NFSU2_TR(0x668772);
if(r1(R+518)){{goto L668798;}}
}
B668774:L668774:{c.instructions+=2;NFSU2_TR(0x668774);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B668775:{NFSU2_TR(0x668775);
if(r1(R+518)){{goto L66878f;}}
}
B668777:L668777:{c.instructions+=2;NFSU2_TR(0x668777);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B668778:{NFSU2_TR(0x668778);
if(r1(R+518)){{goto L668786;}}
}
B66877a:L66877a:{c.instructions+=2;NFSU2_TR(0x66877a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B66877b:{NFSU2_TR(0x66877b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6687a2;}}
}
B66877d:L66877d:{c.instructions+=3;NFSU2_TR(0x66877d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B668781:{NFSU2_TR(0x668781);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B668784:{NFSU2_TR(0x668784);
{goto L66879f;}
}
B668786:L668786:{c.instructions+=3;NFSU2_TR(0x668786);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66878a:{NFSU2_TR(0x66878a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66878d:{NFSU2_TR(0x66878d);
{goto L66879f;}
}
B66878f:L66878f:{c.instructions+=3;NFSU2_TR(0x66878f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B668793:{NFSU2_TR(0x668793);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B668796:{NFSU2_TR(0x668796);
{goto L66879f;}
}
B668798:L668798:{c.instructions+=2;NFSU2_TR(0x668798);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66879c:{NFSU2_TR(0x66879c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66879f:L66879f:{c.instructions+=1;NFSU2_TR(0x66879f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6687a2:L6687a2:{c.instructions+=15;NFSU2_TR(0x6687a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6687a5:{NFSU2_TR(0x6687a5);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6687a9:{NFSU2_TR(0x6687a9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B6687ac:{NFSU2_TR(0x6687ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B6687af:{NFSU2_TR(0x6687af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6687b2:{NFSU2_TR(0x6687b2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6687b6:{NFSU2_TR(0x6687b6);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6687ba:{NFSU2_TR(0x6687ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x9ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6687be:{NFSU2_TR(0x6687be);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6687c2:{NFSU2_TR(0x6687c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6687c4:{NFSU2_TR(0x6687c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6687c7:{NFSU2_TR(0x6687c7);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6687c9:{NFSU2_TR(0x6687c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6687ca:{NFSU2_TR(0x6687ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6687cd:{NFSU2_TR(0x6687cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6687d2ull));
TAIL_STATIC(0x65be0du,65b);
}
B6687d2:L6687d2:{c.instructions+=3;NFSU2_TR(0x6687d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6687d4:{NFSU2_TR(0x6687d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6687d7:{NFSU2_TR(0x6687d7);
if(r1(R+518)){{goto L66886a;}}
}
B6687dd:L6687dd:{c.instructions+=2;NFSU2_TR(0x6687dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x1ull))));
}
B6687e2:{NFSU2_TR(0x6687e2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L668821;}}
}
B6687e4:L6687e4:{c.instructions+=2;NFSU2_TR(0x6687e4);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6687e6:{NFSU2_TR(0x6687e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6687ebull));
TAIL_STATIC(0x575620u,575);
}
B6687eb:L6687eb:{c.instructions+=3;NFSU2_TR(0x6687eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6687ed:{NFSU2_TR(0x6687ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6687ee:{NFSU2_TR(0x6687ee);
if(r1(R+518)){{goto L66880e;}}
}
B6687f0:L6687f0:{c.instructions+=10;NFSU2_TR(0x6687f0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6687f2:{NFSU2_TR(0x6687f2);
u8 U[4];
w4(U+0,u32(0x65b680ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6687f7:{NFSU2_TR(0x6687f7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6687f8:{NFSU2_TR(0x6687f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6687f9:{NFSU2_TR(0x6687f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6687fb:{NFSU2_TR(0x6687fb);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6687fe:{NFSU2_TR(0x6687fe);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668800:{NFSU2_TR(0x668800);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668801:{NFSU2_TR(0x668801);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668804:{NFSU2_TR(0x668804);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x668809ull));
TAIL_STATIC(0x401650u,401);
}
B668809:L668809:{c.instructions+=2;NFSU2_TR(0x668809);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66880c:{NFSU2_TR(0x66880c);
{goto L668810;}
}
B66880e:L66880e:{c.instructions+=1;NFSU2_TR(0x66880e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B668810:L668810:{c.instructions+=3;NFSU2_TR(0x668810);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B668812:{NFSU2_TR(0x668812);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668815:{NFSU2_TR(0x668815);
if(r1(R+518)){{goto L668bf6;}}
}
B66881b:L66881b:{c.instructions+=1;NFSU2_TR(0x66881b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B668821:L668821:{c.instructions+=7;NFSU2_TR(0x668821);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668824:{NFSU2_TR(0x668824);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668825:{NFSU2_TR(0x668825);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B668828:{NFSU2_TR(0x668828);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66882a:{NFSU2_TR(0x66882a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66882d:{NFSU2_TR(0x66882d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B668830:{NFSU2_TR(0x668830);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x668835ull));
TAIL_STATIC(0x65bd1eu,65b);
}
B668835:L668835:{c.instructions+=3;NFSU2_TR(0x668835);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B668837:{NFSU2_TR(0x668837);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66883a:{NFSU2_TR(0x66883a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L668cad;}}
}
B668840:L668840:{c.instructions+=7;NFSU2_TR(0x668840);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B668843:{NFSU2_TR(0x668843);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668846:{NFSU2_TR(0x668846);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668848:{NFSU2_TR(0x668848);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66884b:{NFSU2_TR(0x66884b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66884c:{NFSU2_TR(0x66884c);
__builtin_memmove((R+24),(R+0),4);
}
B66884e:{NFSU2_TR(0x66884e);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4eull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B668854:L668854:{c.instructions+=1;NFSU2_TR(0x668854);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L668856;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x668854u);}goto L668854;}
}
B668856:L668856:{c.instructions+=6;NFSU2_TR(0x668856);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B668858:{NFSU2_TR(0x668858);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffdull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66885c:{NFSU2_TR(0x66885c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66885f:{NFSU2_TR(0x66885f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668862:{NFSU2_TR(0x668862);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+8)),r4(U+0));
}
B668868:{NFSU2_TR(0x668868);
{goto L668875;}
}
B66886a:L66886a:{c.instructions+=4;NFSU2_TR(0x66886a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B66886d:{NFSU2_TR(0x66886d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668870:{NFSU2_TR(0x668870);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B668873:{NFSU2_TR(0x668873);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B668875:L668875:{c.instructions+=6;NFSU2_TR(0x668875);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B668878:{NFSU2_TR(0x668878);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66887b:{NFSU2_TR(0x66887b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66887e:{NFSU2_TR(0x66887e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B668882:{NFSU2_TR(0x668882);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B668884:{NFSU2_TR(0x668884);
if(r1(R+518)){{goto L668b52;}}
}
B66888a:L66888a:{c.instructions+=2;NFSU2_TR(0x66888a);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B66888b:{NFSU2_TR(0x66888b);
if(r1(R+518)){{goto L668aa7;}}
}
B668891:L668891:{c.instructions+=2;NFSU2_TR(0x668891);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B668892:{NFSU2_TR(0x668892);
if(r1(R+518)){{goto L668924;}}
}
B668898:L668898:{c.instructions+=2;NFSU2_TR(0x668898);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B668899:{NFSU2_TR(0x668899);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L668bc2;}}
}
B66889f:L66889f:{c.instructions+=10;NFSU2_TR(0x66889f);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x52ull))));
w2(U+4,u16(0xb2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6688a5:{NFSU2_TR(0x6688a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
w4(U+4,u32(0xf000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6688ac:{NFSU2_TR(0x6688ac);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6688b0:{NFSU2_TR(0x6688b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6688b3:{NFSU2_TR(0x6688b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffdull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6688b7:{NFSU2_TR(0x6688b7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6688b9:{NFSU2_TR(0x6688b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6688bc:{NFSU2_TR(0x6688bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6688bf:{NFSU2_TR(0x6688bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6688c1:{NFSU2_TR(0x6688c1);
if(r1(R+518)){{goto L6688f4;}}
}
B6688c3:L6688c3:{c.instructions+=13;NFSU2_TR(0x6688c3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6688c7:{NFSU2_TR(0x6688c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6688c9:{NFSU2_TR(0x6688c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6688cc:{NFSU2_TR(0x6688cc);
w2(R+4,u16(u32(r2(R+4))+u32(u16(0x1ull))));
}
B6688ce:{NFSU2_TR(0x6688ce);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B6688d2:{NFSU2_TR(0x6688d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6688d4:{NFSU2_TR(0x6688d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6688d7:{NFSU2_TR(0x6688d7);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w2(U+12,u16(u32(r2(U+12))&u32(u16(0x0ull))));
s2(u32(r4(U+8)),r2(U+12));
}
B6688dd:{NFSU2_TR(0x6688dd);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6688e1:{NFSU2_TR(0x6688e1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6688e3:{NFSU2_TR(0x6688e3);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6688e7:{NFSU2_TR(0x6688e7);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
w1(R+512,u8((r2(R+4))<(r2(U+0))));
}
B6688ea:{NFSU2_TR(0x6688ea);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6688ee;}}
}
B6688ec:L6688ec:{c.instructions+=1;NFSU2_TR(0x6688ec);
__builtin_memmove((R+0),(R+4),4);
}
B6688ee:L6688ee:{c.instructions+=2;NFSU2_TR(0x6688ee);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6688f2:{NFSU2_TR(0x6688f2);
{goto L668907;}
}
B6688f4:L6688f4:{c.instructions+=6;NFSU2_TR(0x6688f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6688f6:{NFSU2_TR(0x6688f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6688f9:{NFSU2_TR(0x6688f9);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B6688fd:{NFSU2_TR(0x6688fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6688ff:{NFSU2_TR(0x6688ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B668902:{NFSU2_TR(0x668902);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),2);
s2(u32(r4(U+8)),r2(U+12));
}
B668907:L668907:{c.instructions+=8;NFSU2_TR(0x668907);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66890b:{NFSU2_TR(0x66890b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66890e:{NFSU2_TR(0x66890e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B668912:{NFSU2_TR(0x668912);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B668915:{NFSU2_TR(0x668915);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B668917:{NFSU2_TR(0x668917);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),2);
s2(u32(r4(U+4)),r2(U+8));
}
B66891b:{NFSU2_TR(0x66891b);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66891f:{NFSU2_TR(0x66891f);
{goto L668bc2;}
}
B668924:L668924:{c.instructions+=2;NFSU2_TR(0x668924);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B668926:{NFSU2_TR(0x668926);
if(r1(R+518)){{goto L668a36;}}
}
B66892c:L66892c:{c.instructions+=7;NFSU2_TR(0x66892c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66892f:{NFSU2_TR(0x66892f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B668931:{NFSU2_TR(0x668931);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668934:{NFSU2_TR(0x668934);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B668936:{NFSU2_TR(0x668936);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B668937:{NFSU2_TR(0x668937);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B66893a:{NFSU2_TR(0x66893a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L668941;}}
}
B66893c:L66893c:{c.instructions+=2;NFSU2_TR(0x66893c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66893f:{NFSU2_TR(0x66893f);
{goto L66894a;}
}
B668941:L668941:{c.instructions+=3;NFSU2_TR(0x668941);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668944:{NFSU2_TR(0x668944);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668947:{NFSU2_TR(0x668947);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66894a:L66894a:{c.instructions+=8;NFSU2_TR(0x66894a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66894d:{NFSU2_TR(0x66894d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B668950:{NFSU2_TR(0x668950);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668953:{NFSU2_TR(0x668953);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668956:{NFSU2_TR(0x668956);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B668959:{NFSU2_TR(0x668959);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B66895c:{NFSU2_TR(0x66895c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66895e:{NFSU2_TR(0x66895e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L668a36;}}
}
B668964:L668964:{c.instructions+=2;NFSU2_TR(0x668964);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B668967:{NFSU2_TR(0x668967);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L668a15;}}
}
B66896d:L66896d:{c.instructions+=2;NFSU2_TR(0x66896d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B668970:{NFSU2_TR(0x668970);
if(r1(R+518)){{goto L6689ca;}}
}
B668972:L668972:{c.instructions+=2;NFSU2_TR(0x668972);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B668975:{NFSU2_TR(0x668975);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L668a36;}}
}
B66897b:L66897b:{c.instructions+=5;NFSU2_TR(0x66897b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66897e:{NFSU2_TR(0x66897e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B668981:{NFSU2_TR(0x668981);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668982:{NFSU2_TR(0x668982);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668985:{NFSU2_TR(0x668985);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66898aull));
TAIL_STATIC(0x65b098u,65b);
}
B66898a:L66898a:{c.instructions+=2;NFSU2_TR(0x66898a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66898c:{NFSU2_TR(0x66898c);
if(r1(R+518)){{goto L668a36;}}
}
B668992:L668992:{c.instructions+=5;NFSU2_TR(0x668992);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668994:{NFSU2_TR(0x668994);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B668997:{NFSU2_TR(0x668997);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668998:{NFSU2_TR(0x668998);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66899b:{NFSU2_TR(0x66899b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6689a0ull));
TAIL_STATIC(0x65b019u,65b);
}
B6689a0:L6689a0:{c.instructions+=9;NFSU2_TR(0x6689a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6689a3:{NFSU2_TR(0x6689a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6689a7:{NFSU2_TR(0x6689a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6689aa:{NFSU2_TR(0x6689aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6689ac:{NFSU2_TR(0x6689ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6689af:{NFSU2_TR(0x6689af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6689b2:{NFSU2_TR(0x6689b2);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6689b6:{NFSU2_TR(0x6689b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6689b8:{NFSU2_TR(0x6689b8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6689bc;}}
}
B6689ba:L6689ba:{c.instructions+=1;NFSU2_TR(0x6689ba);
__builtin_memmove((R+8),(R+0),4);
}
B6689bc:L6689bc:{c.instructions+=5;NFSU2_TR(0x6689bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6689bf:{NFSU2_TR(0x6689bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6689c2:{NFSU2_TR(0x6689c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6689c5:{NFSU2_TR(0x6689c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6689c8:{NFSU2_TR(0x6689c8);
{goto L668a36;}
}
B6689ca:L6689ca:{c.instructions+=2;NFSU2_TR(0x6689ca);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6689ce:{NFSU2_TR(0x6689ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L668a36;}}
}
B6689d0:L6689d0:{c.instructions+=2;NFSU2_TR(0x6689d0);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x3ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B6689d4:{NFSU2_TR(0x6689d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L668a36;}}
}
B6689d6:L6689d6:{c.instructions+=3;NFSU2_TR(0x6689d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6689d9:{NFSU2_TR(0x6689d9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6689dc:{NFSU2_TR(0x6689dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6689f5;}}
}
B6689de:L6689de:{c.instructions+=6;NFSU2_TR(0x6689de);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6689e2:{NFSU2_TR(0x6689e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6689e4:{NFSU2_TR(0x6689e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6689e7:{NFSU2_TR(0x6689e7);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6689eb:{NFSU2_TR(0x6689eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6689ee:{NFSU2_TR(0x6689ee);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L668a30;}}
}
B6689f0:L6689f0:{c.instructions+=2;NFSU2_TR(0x6689f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6689f3:{NFSU2_TR(0x6689f3);
{goto L668a30;}
}
B6689f5:L6689f5:{c.instructions+=2;NFSU2_TR(0x6689f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6689f9:{NFSU2_TR(0x6689f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L668a36;}}
}
B6689fb:L6689fb:{c.instructions+=8;NFSU2_TR(0x6689fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6689ff:{NFSU2_TR(0x6689ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B668a01:{NFSU2_TR(0x668a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668a04:{NFSU2_TR(0x668a04);
__builtin_memmove((R+0),(R+4),4);
}
B668a06:{NFSU2_TR(0x668a06);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B668a0a:{NFSU2_TR(0x668a0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B668a0d:{NFSU2_TR(0x668a0d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B668a0f:{NFSU2_TR(0x668a0f);
if(r1(R+512)){{goto L668a30;}}
}
B668a11:L668a11:{c.instructions+=2;NFSU2_TR(0x668a11);
__builtin_memmove((R+0),(R+4),4);
}
B668a13:{NFSU2_TR(0x668a13);
{goto L668a30;}
}
B668a15:L668a15:{c.instructions+=2;NFSU2_TR(0x668a15);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B668a19:{NFSU2_TR(0x668a19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L668a36;}}
}
B668a1b:L668a1b:{c.instructions+=6;NFSU2_TR(0x668a1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B668a1f:{NFSU2_TR(0x668a1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B668a21:{NFSU2_TR(0x668a21);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668a24:{NFSU2_TR(0x668a24);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B668a28:{NFSU2_TR(0x668a28);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B668a2b:{NFSU2_TR(0x668a2b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L668a30;}}
}
B668a2d:L668a2d:{c.instructions+=1;NFSU2_TR(0x668a2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668a30:L668a30:{c.instructions+=2;NFSU2_TR(0x668a30);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B668a33:{NFSU2_TR(0x668a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668a36:L668a36:{c.instructions+=12;NFSU2_TR(0x668a36);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x52ull))));
w2(U+4,u16(0x9cull));
s2(u32(r4(U+0)),r2(U+4));
}
B668a3c:{NFSU2_TR(0x668a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
w4(U+4,u32(0xd000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B668a43:{NFSU2_TR(0x668a43);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B668a47:{NFSU2_TR(0x668a47);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B668a4a:{NFSU2_TR(0x668a4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668a4d:{NFSU2_TR(0x668a4d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B668a51:{NFSU2_TR(0x668a51);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668a54:{NFSU2_TR(0x668a54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B668a56:{NFSU2_TR(0x668a56);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B668a59:{NFSU2_TR(0x668a59);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B668a5b:{NFSU2_TR(0x668a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668a5e:{NFSU2_TR(0x668a5e);
if(r1(R+518)){{goto L668a78;}}
}
B668a60:L668a60:{c.instructions+=5;NFSU2_TR(0x668a60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B668a63:{NFSU2_TR(0x668a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B668a66:{NFSU2_TR(0x668a66);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B668a68:{NFSU2_TR(0x668a68);
__builtin_memmove((R+0),(R+4),4);
}
B668a6a:{NFSU2_TR(0x668a6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B668a6d:L668a6d:{c.instructions+=1;NFSU2_TR(0x668a6d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L668a6f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x668a6du);}goto L668a6d;}
}
B668a6f:L668a6f:{c.instructions+=2;NFSU2_TR(0x668a6f);
__builtin_memmove((R+4),(R+0),4);
}
B668a71:{NFSU2_TR(0x668a71);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B668a74:L668a74:{c.instructions+=1;NFSU2_TR(0x668a74);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L668a76;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x668a74u);}goto L668a74;}
}
B668a76:L668a76:{c.instructions+=1;NFSU2_TR(0x668a76);
{goto L668a8a;}
}
B668a78:L668a78:{c.instructions+=4;NFSU2_TR(0x668a78);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B668a7a:{NFSU2_TR(0x668a7a);
__builtin_memmove((R+24),(R+4),4);
}
B668a7c:{NFSU2_TR(0x668a7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B668a7f:{NFSU2_TR(0x668a7f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B668a81:L668a81:{c.instructions+=1;NFSU2_TR(0x668a81);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L668a83;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x668a81u);}goto L668a81;}
}
B668a83:L668a83:{c.instructions+=2;NFSU2_TR(0x668a83);
__builtin_memmove((R+4),(R+24),4);
}
B668a85:{NFSU2_TR(0x668a85);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B668a88:L668a88:{c.instructions+=1;NFSU2_TR(0x668a88);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L668a8a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x668a88u);}goto L668a88;}
}
B668a8a:L668a8a:{c.instructions+=2;NFSU2_TR(0x668a8a);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B668a8e:{NFSU2_TR(0x668a8e);
if(r1(R+518)){{goto L668bc2;}}
}
B668a94:L668a94:{c.instructions+=3;NFSU2_TR(0x668a94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668a97:{NFSU2_TR(0x668a97);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B668a99:{NFSU2_TR(0x668a99);
if(r1(R+518)){{goto L668a9f;}}
}
B668a9b:L668a9b:{c.instructions+=1;NFSU2_TR(0x668a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
s4(u32(r4(U+0)),r4(U+4));
}
B668a9f:L668a9f:{c.instructions+=2;NFSU2_TR(0x668a9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668aa2:{NFSU2_TR(0x668aa2);
{goto L668bc2;}
}
B668aa7:L668aa7:{c.instructions+=9;NFSU2_TR(0x668aa7);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x52ull))));
w2(U+4,u16(0x9eull));
s2(u32(r4(U+0)),r2(U+4));
}
B668aad:{NFSU2_TR(0x668aad);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
w4(U+4,u32(0xd020000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B668ab4:{NFSU2_TR(0x668ab4);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B668ab8:{NFSU2_TR(0x668ab8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B668abb:{NFSU2_TR(0x668abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B668abe:{NFSU2_TR(0x668abe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668ac1:{NFSU2_TR(0x668ac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668ac4:{NFSU2_TR(0x668ac4);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+4))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B668ac8:{NFSU2_TR(0x668ac8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L668b10;}}
}
B668aca:L668aca:{c.instructions+=1;NFSU2_TR(0x668aca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668acd:L668acd:{c.instructions+=21;NFSU2_TR(0x668acd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B668acf:{NFSU2_TR(0x668acf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B668ad2:{NFSU2_TR(0x668ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B668ad5:{NFSU2_TR(0x668ad5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B668ad8:{NFSU2_TR(0x668ad8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B668ada:{NFSU2_TR(0x668ada);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B668add:{NFSU2_TR(0x668add);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B668ae0:{NFSU2_TR(0x668ae0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B668ae4:{NFSU2_TR(0x668ae4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B668ae6:{NFSU2_TR(0x668ae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B668ae9:{NFSU2_TR(0x668ae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B668aec:{NFSU2_TR(0x668aec);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x1ull));
s4(u32(r4(U+8)),r4(U+12));
}
B668af4:{NFSU2_TR(0x668af4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B668af6:{NFSU2_TR(0x668af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B668af9:{NFSU2_TR(0x668af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B668afc:{NFSU2_TR(0x668afc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B668aff:{NFSU2_TR(0x668aff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B668b03:{NFSU2_TR(0x668b03);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B668b07:{NFSU2_TR(0x668b07);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B668b0b:{NFSU2_TR(0x668b0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B668b0e:{NFSU2_TR(0x668b0e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x668acdu);}goto L668acd;}}
}
B668b10:L668b10:{c.instructions+=3;NFSU2_TR(0x668b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668b13:{NFSU2_TR(0x668b13);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B668b15:{NFSU2_TR(0x668b15);
if(r1(R+518)){{goto L668b38;}}
}
B668b17:L668b17:{c.instructions+=8;NFSU2_TR(0x668b17);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B668b1b:{NFSU2_TR(0x668b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B668b1e:{NFSU2_TR(0x668b1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B668b20:{NFSU2_TR(0x668b20);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B668b23:{NFSU2_TR(0x668b23);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B668b26:{NFSU2_TR(0x668b26);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B668b28:{NFSU2_TR(0x668b28);
__builtin_memmove((R+0),(R+4),4);
}
B668b2a:{NFSU2_TR(0x668b2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B668b2d:L668b2d:{c.instructions+=1;NFSU2_TR(0x668b2d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L668b2f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x668b2du);}goto L668b2d;}
}
B668b2f:L668b2f:{c.instructions+=2;NFSU2_TR(0x668b2f);
__builtin_memmove((R+4),(R+0),4);
}
B668b31:{NFSU2_TR(0x668b31);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B668b34:L668b34:{c.instructions+=1;NFSU2_TR(0x668b34);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L668b36;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x668b34u);}goto L668b34;}
}
B668b36:L668b36:{c.instructions+=1;NFSU2_TR(0x668b36);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B668b38:L668b38:{c.instructions+=2;NFSU2_TR(0x668b38);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x32ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B668b3c:{NFSU2_TR(0x668b3c);
if(r1(R+518)){{goto L668bc2;}}
}
B668b42:L668b42:{c.instructions+=3;NFSU2_TR(0x668b42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668b45:{NFSU2_TR(0x668b45);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B668b47:{NFSU2_TR(0x668b47);
if(r1(R+518)){{goto L668b4d;}}
}
B668b49:L668b49:{c.instructions+=1;NFSU2_TR(0x668b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
s4(u32(r4(U+0)),r4(U+4));
}
B668b4d:L668b4d:{c.instructions+=2;NFSU2_TR(0x668b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668b50:{NFSU2_TR(0x668b50);
{goto L668bc2;}
}
B668b52:L668b52:{c.instructions+=11;NFSU2_TR(0x668b52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B668b55:{NFSU2_TR(0x668b55);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x52ull))));
w2(U+4,u16(0x9dull));
s2(u32(r4(U+0)),r2(U+4));
}
B668b5b:{NFSU2_TR(0x668b5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
w4(U+4,u32(0xd010000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B668b62:{NFSU2_TR(0x668b62);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B668b66:{NFSU2_TR(0x668b66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B668b69:{NFSU2_TR(0x668b69);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668b6c:{NFSU2_TR(0x668b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B668b6f:{NFSU2_TR(0x668b6f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B668b71:{NFSU2_TR(0x668b71);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B668b75:{NFSU2_TR(0x668b75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668b78:{NFSU2_TR(0x668b78);
if(r1(R+518)){{goto L668b96;}}
}
B668b7a:L668b7a:{c.instructions+=7;NFSU2_TR(0x668b7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B668b7d:{NFSU2_TR(0x668b7d);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B668b7f:{NFSU2_TR(0x668b7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B668b81:{NFSU2_TR(0x668b81);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B668b84:{NFSU2_TR(0x668b84);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B668b86:{NFSU2_TR(0x668b86);
__builtin_memmove((R+0),(R+4),4);
}
B668b88:{NFSU2_TR(0x668b88);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B668b8b:L668b8b:{c.instructions+=1;NFSU2_TR(0x668b8b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L668b8d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x668b8bu);}goto L668b8b;}
}
B668b8d:L668b8d:{c.instructions+=2;NFSU2_TR(0x668b8d);
__builtin_memmove((R+4),(R+0),4);
}
B668b8f:{NFSU2_TR(0x668b8f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B668b92:L668b92:{c.instructions+=1;NFSU2_TR(0x668b92);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L668b94;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x668b92u);}goto L668b92;}
}
B668b94:L668b94:{c.instructions+=1;NFSU2_TR(0x668b94);
{goto L668bae;}
}
B668b96:L668b96:{c.instructions+=6;NFSU2_TR(0x668b96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B668b98:{NFSU2_TR(0x668b98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B668b9b:{NFSU2_TR(0x668b9b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B668b9e:{NFSU2_TR(0x668b9e);
__builtin_memmove((R+24),(R+4),4);
}
B668ba0:{NFSU2_TR(0x668ba0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B668ba3:{NFSU2_TR(0x668ba3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B668ba5:L668ba5:{c.instructions+=1;NFSU2_TR(0x668ba5);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L668ba7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x668ba5u);}goto L668ba5;}
}
B668ba7:L668ba7:{c.instructions+=2;NFSU2_TR(0x668ba7);
__builtin_memmove((R+4),(R+24),4);
}
B668ba9:{NFSU2_TR(0x668ba9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B668bac:L668bac:{c.instructions+=1;NFSU2_TR(0x668bac);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L668bae;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x668bacu);}goto L668bac;}
}
B668bae:L668bae:{c.instructions+=2;NFSU2_TR(0x668bae);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x31ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B668bb2:{NFSU2_TR(0x668bb2);
if(r1(R+518)){{goto L668bc2;}}
}
B668bb4:L668bb4:{c.instructions+=3;NFSU2_TR(0x668bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668bb7:{NFSU2_TR(0x668bb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B668bb9:{NFSU2_TR(0x668bb9);
if(r1(R+518)){{goto L668bbf;}}
}
B668bbb:L668bbb:{c.instructions+=1;NFSU2_TR(0x668bbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
s4(u32(r4(U+0)),r4(U+4));
}
B668bbf:L668bbf:{c.instructions+=1;NFSU2_TR(0x668bbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668bc2:L668bc2:{c.instructions+=5;NFSU2_TR(0x668bc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B668bc5:{NFSU2_TR(0x668bc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668bc8:{NFSU2_TR(0x668bc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668bcb:{NFSU2_TR(0x668bcb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B668bce:{NFSU2_TR(0x668bce);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66875bu);}goto L66875b;}}
}
B668bd4:L668bd4:{c.instructions+=3;NFSU2_TR(0x668bd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668bd7:{NFSU2_TR(0x668bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B668bda:{NFSU2_TR(0x668bda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668bdd:L668bdd:{c.instructions+=6;NFSU2_TR(0x668bdd);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B668be1:{NFSU2_TR(0x668be1);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B668be5:{NFSU2_TR(0x668be5);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B668be9:{NFSU2_TR(0x668be9);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5aull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B668bed:{NFSU2_TR(0x668bed);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B668bf1:{NFSU2_TR(0x668bf1);
{goto L668cad;}
}
B668bf6:L668bf6:{c.instructions+=2;NFSU2_TR(0x668bf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B668bfd:{NFSU2_TR(0x668bfd);
{goto L668cad;}
}
B668c02:L668c02:{c.instructions+=2;NFSU2_TR(0x668c02);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B668c06:{NFSU2_TR(0x668c06);
if(r1(R+518)){{goto L668caa;}}
}
B668c0c:L668c0c:{c.instructions+=2;NFSU2_TR(0x668c0c);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B668c12:{NFSU2_TR(0x668c12);
if(r1(R+518)){{goto L668caa;}}
}
B668c18:L668c18:{c.instructions+=2;NFSU2_TR(0x668c18);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x119ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B668c1f:{NFSU2_TR(0x668c1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L668caa;}}
}
B668c25:L668c25:{c.instructions+=6;NFSU2_TR(0x668c25);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B668c2b:{NFSU2_TR(0x668c2b);
u8 U[32];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa0ull))));
w8(U+8,u64(s64(s32(r4(R+24)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+24,u32(r8(U+24)));
}
B668c32:{NFSU2_TR(0x668c32);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B668c34:{NFSU2_TR(0x668c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668c37:{NFSU2_TR(0x668c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668c3a:{NFSU2_TR(0x668c3a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L668ca6;}}
}
B668c3c:L668c3c:{c.instructions+=6;NFSU2_TR(0x668c3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668c3f:{NFSU2_TR(0x668c3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668c45:{NFSU2_TR(0x668c45);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B668c48:{NFSU2_TR(0x668c48);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B668c4b:{NFSU2_TR(0x668c4b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B668c4d:{NFSU2_TR(0x668c4d);
if(r1(R+518)){{goto L668c9e;}}
}
B668c4f:L668c4f:{c.instructions+=9;NFSU2_TR(0x668c4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668c52:{NFSU2_TR(0x668c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668c58:{NFSU2_TR(0x668c58);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B668c5b:{NFSU2_TR(0x668c5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668c5e:{NFSU2_TR(0x668c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668c61:{NFSU2_TR(0x668c61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B668c63:{NFSU2_TR(0x668c63);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B668c65:{NFSU2_TR(0x668c65);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B668c67:{NFSU2_TR(0x668c67);
if(r1(R+518)){{goto L668c9e;}}
}
B668c69:L668c69:{c.instructions+=3;NFSU2_TR(0x668c69);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B668c6d:{NFSU2_TR(0x668c6d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B668c70:{NFSU2_TR(0x668c70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L668c8e;}}
}
B668c72:L668c72:{c.instructions+=2;NFSU2_TR(0x668c72);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B668c74:{NFSU2_TR(0x668c74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L668c87;}}
}
B668c76:L668c76:{c.instructions+=3;NFSU2_TR(0x668c76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668c79:{NFSU2_TR(0x668c79);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B668c7b:{NFSU2_TR(0x668c7b);
if(r1(R+518)){{goto L668c87;}}
}
B668c7d:L668c7d:{c.instructions+=3;NFSU2_TR(0x668c7d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B668c80:{NFSU2_TR(0x668c80);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B668c82:{NFSU2_TR(0x668c82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x668c7du);}goto L668c7d;}}
}
B668c84:L668c84:{c.instructions+=1;NFSU2_TR(0x668c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668c87:L668c87:{c.instructions+=3;NFSU2_TR(0x668c87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B668c89:{NFSU2_TR(0x668c89);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B668c8c:{NFSU2_TR(0x668c8c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B668c8e:L668c8e:{c.instructions+=5;NFSU2_TR(0x668c8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B668c92:{NFSU2_TR(0x668c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668c95:{NFSU2_TR(0x668c95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B668c97:{NFSU2_TR(0x668c97);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B668c99:{NFSU2_TR(0x668c99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x668c69u);}goto L668c69;}}
}
B668c9b:L668c9b:{c.instructions+=1;NFSU2_TR(0x668c9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B668c9e:L668c9e:{c.instructions+=3;NFSU2_TR(0x668c9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B668ca1:{NFSU2_TR(0x668ca1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B668ca4:{NFSU2_TR(0x668ca4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x668c3cu);}goto L668c3c;}}
}
B668ca6:L668ca6:{c.instructions+=1;NFSU2_TR(0x668ca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffff7ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B668caa:L668caa:{c.instructions+=1;NFSU2_TR(0x668caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668cad:L668cad:{c.instructions+=2;NFSU2_TR(0x668cad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B668cb0:{NFSU2_TR(0x668cb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x668cb5ull));
TAIL_STATIC(0x575630u,575);
}
B668cb5:L668cb5:{c.instructions+=2;NFSU2_TR(0x668cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668cb8:{NFSU2_TR(0x668cb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B668cb9:L668cb9:{c.instructions+=5;NFSU2_TR(0x668cb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B668cba:{NFSU2_TR(0x668cba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B668cbb:{NFSU2_TR(0x668cbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B668cbc:{NFSU2_TR(0x668cbc);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B668cbd:{NFSU2_TR(0x668cbd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B668cc0:L668cc0:{c.instructions+=10;NFSU2_TR(0x668cc0);
__builtin_memmove((R+28),(R+28),4);
}
B668cc2:{NFSU2_TR(0x668cc2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668cc3:{NFSU2_TR(0x668cc3);
__builtin_memmove((R+20),(R+16),4);
}
B668cc5:{NFSU2_TR(0x668cc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B668cc8:{NFSU2_TR(0x668cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B668ccb:{NFSU2_TR(0x668ccb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668ccc:{NFSU2_TR(0x668ccc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668ccd:{NFSU2_TR(0x668ccd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668cce:{NFSU2_TR(0x668cce);
__builtin_memmove((R+12),(R+4),4);
}
B668cd0:{NFSU2_TR(0x668cd0);
{goto L668deb;}
}
B668cd5:L668cd5:{c.instructions+=16;NFSU2_TR(0x668cd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668cd8:{NFSU2_TR(0x668cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668cdb:{NFSU2_TR(0x668cdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+0))));
}
B668cdd:{NFSU2_TR(0x668cdd);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B668ce1:{NFSU2_TR(0x668ce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668ce4:{NFSU2_TR(0x668ce4);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B668ce8:{NFSU2_TR(0x668ce8);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+4,u32(r2(U+0)));
}
B668ceb:{NFSU2_TR(0x668ceb);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B668ced:{NFSU2_TR(0x668ced);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668cf0:{NFSU2_TR(0x668cf0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B668cf3:{NFSU2_TR(0x668cf3);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B668cf7:{NFSU2_TR(0x668cf7);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B668cfb:{NFSU2_TR(0x668cfb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B668cfe:{NFSU2_TR(0x668cfe);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B668d00:{NFSU2_TR(0x668d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668d03:{NFSU2_TR(0x668d03);
{goto L668ddd;}
}
B668d08:L668d08:{c.instructions+=4;NFSU2_TR(0x668d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B668d0c:{NFSU2_TR(0x668d0c);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B668d11:{NFSU2_TR(0x668d11);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B668d14:{NFSU2_TR(0x668d14);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L668dd7;}}
}
B668d1a:L668d1a:{c.instructions+=3;NFSU2_TR(0x668d1a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B668d1e:{NFSU2_TR(0x668d1e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B668d21:{NFSU2_TR(0x668d21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L668d6f;}}
}
B668d23:L668d23:{c.instructions+=2;NFSU2_TR(0x668d23);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B668d26:{NFSU2_TR(0x668d26);
if(r1(R+518)){{goto L668d4e;}}
}
B668d28:L668d28:{c.instructions+=11;NFSU2_TR(0x668d28);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B668d2b:{NFSU2_TR(0x668d2b);
__builtin_memmove((R+0),(R+28),4);
}
B668d2d:{NFSU2_TR(0x668d2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B668d30:{NFSU2_TR(0x668d30);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668d32:{NFSU2_TR(0x668d32);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B668d33:{NFSU2_TR(0x668d33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B668d34:{NFSU2_TR(0x668d34);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x668d34);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x668d34);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B668d36:{NFSU2_TR(0x668d36);
__builtin_memmove((R+4),(R+12),4);
}
B668d38:{NFSU2_TR(0x668d38);
w4(R+0,u32(r2(R+0)));
}
B668d3b:{NFSU2_TR(0x668d3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668d3c:{NFSU2_TR(0x668d3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x668d41ull));
TAIL_STATIC(0x664a1fu,664);
}
B668d41:L668d41:{c.instructions+=2;NFSU2_TR(0x668d41);
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
B668d43:{NFSU2_TR(0x668d43);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L668df6;}}
}
B668d49:L668d49:{c.instructions+=2;NFSU2_TR(0x668d49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668d4c:{NFSU2_TR(0x668d4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B668d4e:L668d4e:{c.instructions+=11;NFSU2_TR(0x668d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668d51:{NFSU2_TR(0x668d51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B668d53:{NFSU2_TR(0x668d53);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668d56:{NFSU2_TR(0x668d56);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B668d58:{NFSU2_TR(0x668d58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668d5b:{NFSU2_TR(0x668d5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B668d5d:{NFSU2_TR(0x668d5d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B668d62:{NFSU2_TR(0x668d62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668d63:{NFSU2_TR(0x668d63);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B668d66:{NFSU2_TR(0x668d66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668d67:{NFSU2_TR(0x668d67);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x668d6dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B668d6d:L668d6d:{c.instructions+=1;NFSU2_TR(0x668d6d);
{goto L668db4;}
}
B668d6f:L668d6f:{c.instructions+=2;NFSU2_TR(0x668d6f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B668d72:{NFSU2_TR(0x668d72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L668dba;}}
}
B668d74:L668d74:{c.instructions+=6;NFSU2_TR(0x668d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668d77:{NFSU2_TR(0x668d77);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668d7d:{NFSU2_TR(0x668d7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B668d80:{NFSU2_TR(0x668d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668d83:{NFSU2_TR(0x668d83);
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
B668d85:{NFSU2_TR(0x668d85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L668d8e;}}
}
B668d87:L668d87:{c.instructions+=3;NFSU2_TR(0x668d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668d8a:{NFSU2_TR(0x668d8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B668d8c:{NFSU2_TR(0x668d8c);
{goto L668d99;}
}
B668d8e:L668d8e:{c.instructions+=4;NFSU2_TR(0x668d8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668d91:{NFSU2_TR(0x668d91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B668d93:{NFSU2_TR(0x668d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668d96:{NFSU2_TR(0x668d96);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B668d99:L668d99:{c.instructions+=8;NFSU2_TR(0x668d99);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B668d9c:{NFSU2_TR(0x668d9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668d9f:{NFSU2_TR(0x668d9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B668da1:{NFSU2_TR(0x668da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B668da4:{NFSU2_TR(0x668da4);
u8 U[20];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B668da8:{NFSU2_TR(0x668da8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B668dab:{NFSU2_TR(0x668dab);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B668dae:{NFSU2_TR(0x668dae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x668db4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B668db4:L668db4:{c.instructions+=2;NFSU2_TR(0x668db4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668db7:{NFSU2_TR(0x668db7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668dba:L668dba:{c.instructions+=3;NFSU2_TR(0x668dba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668dbd:{NFSU2_TR(0x668dbd);
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
B668dbf:{NFSU2_TR(0x668dbf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L668df6;}}
}
B668dc1:L668dc1:{c.instructions+=5;NFSU2_TR(0x668dc1);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B668dc5:{NFSU2_TR(0x668dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B668dc8:{NFSU2_TR(0x668dc8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x64ull))));
}
B668dcb:{NFSU2_TR(0x668dcb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B668dce:{NFSU2_TR(0x668dce);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x668d1au);}goto L668d1a;}}
}
B668dd4:L668dd4:{c.instructions+=1;NFSU2_TR(0x668dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B668dd7:L668dd7:{c.instructions+=2;NFSU2_TR(0x668dd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B668dda:{NFSU2_TR(0x668dda);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x64ull))));
}
B668ddd:L668ddd:{c.instructions+=2;NFSU2_TR(0x668ddd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B668ddf:{NFSU2_TR(0x668ddf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x668d08u);}goto L668d08;}}
}
B668de5:L668de5:{c.instructions+=2;NFSU2_TR(0x668de5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x64ull))));
}
B668de8:{NFSU2_TR(0x668de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668deb:L668deb:{c.instructions+=2;NFSU2_TR(0x668deb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B668dee:{NFSU2_TR(0x668dee);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x668cd5u);}goto L668cd5;}}
}
B668df4:L668df4:{c.instructions+=1;NFSU2_TR(0x668df4);
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
B668df6:L668df6:{c.instructions+=5;NFSU2_TR(0x668df6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B668df7:{NFSU2_TR(0x668df7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B668df8:{NFSU2_TR(0x668df8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B668df9:{NFSU2_TR(0x668df9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B668dfa:{NFSU2_TR(0x668dfa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B668dfd:L668dfd:{c.instructions+=17;NFSU2_TR(0x668dfd);
__builtin_memmove((R+28),(R+28),4);
}
B668dff:{NFSU2_TR(0x668dff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668e00:{NFSU2_TR(0x668e00);
__builtin_memmove((R+20),(R+16),4);
}
B668e02:{NFSU2_TR(0x668e02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B668e05:{NFSU2_TR(0x668e05);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668e06:{NFSU2_TR(0x668e06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B668e09:{NFSU2_TR(0x668e09);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668e0c:{NFSU2_TR(0x668e0c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668e0d:{NFSU2_TR(0x668e0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B668e10:{NFSU2_TR(0x668e10);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B668e13:{NFSU2_TR(0x668e13);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668e14:{NFSU2_TR(0x668e14);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B668e17:{NFSU2_TR(0x668e17);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B668e1a:{NFSU2_TR(0x668e1a);
__builtin_memmove((R+28),(R+4),4);
}
B668e1c:{NFSU2_TR(0x668e1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668e1f:{NFSU2_TR(0x668e1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668e22:{NFSU2_TR(0x668e22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x669180u,669);}
}
B668e28:L668e28:{c.instructions+=6;NFSU2_TR(0x668e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668e2e:{NFSU2_TR(0x668e2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B668e30:{NFSU2_TR(0x668e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668e33:{NFSU2_TR(0x668e33);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B668e36:{NFSU2_TR(0x668e36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668e39:{NFSU2_TR(0x668e39);
if(r1(R+518)){{goto L668e6b;}}
}
B668e3b:L668e3b:{c.instructions+=2;NFSU2_TR(0x668e3b);
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
B668e3d:{NFSU2_TR(0x668e3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L668e46;}}
}
B668e3f:L668e3f:{c.instructions+=3;NFSU2_TR(0x668e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668e42:{NFSU2_TR(0x668e42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B668e44:{NFSU2_TR(0x668e44);
{goto L668e51;}
}
B668e46:L668e46:{c.instructions+=4;NFSU2_TR(0x668e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668e49:{NFSU2_TR(0x668e49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B668e4b:{NFSU2_TR(0x668e4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668e4e:{NFSU2_TR(0x668e4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B668e51:L668e51:{c.instructions+=7;NFSU2_TR(0x668e51);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B668e54:{NFSU2_TR(0x668e54);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668e57:{NFSU2_TR(0x668e57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B668e59:{NFSU2_TR(0x668e59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B668e5c:{NFSU2_TR(0x668e5c);
u8 U[20];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B668e60:{NFSU2_TR(0x668e60);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B668e63:{NFSU2_TR(0x668e63);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x668e69ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B668e69:L668e69:{c.instructions+=1;NFSU2_TR(0x668e69);
{goto L668e99;}
}
B668e6b:L668e6b:{c.instructions+=2;NFSU2_TR(0x668e6b);
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
B668e6d:{NFSU2_TR(0x668e6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L668e76;}}
}
B668e6f:L668e6f:{c.instructions+=3;NFSU2_TR(0x668e6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668e72:{NFSU2_TR(0x668e72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B668e74:{NFSU2_TR(0x668e74);
{goto L668e81;}
}
B668e76:L668e76:{c.instructions+=4;NFSU2_TR(0x668e76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668e79:{NFSU2_TR(0x668e79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B668e7b:{NFSU2_TR(0x668e7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668e7e:{NFSU2_TR(0x668e7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B668e81:L668e81:{c.instructions+=7;NFSU2_TR(0x668e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B668e84:{NFSU2_TR(0x668e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668e87:{NFSU2_TR(0x668e87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B668e89:{NFSU2_TR(0x668e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B668e8c:{NFSU2_TR(0x668e8c);
u8 U[20];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B668e90:{NFSU2_TR(0x668e90);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B668e93:{NFSU2_TR(0x668e93);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x668e99ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B668e99:L668e99:{c.instructions+=2;NFSU2_TR(0x668e99);
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
B668e9b:{NFSU2_TR(0x668e9b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x66919au,669);}
}
B668ea1:L668ea1:{c.instructions+=4;NFSU2_TR(0x668ea1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x64ull))));
}
B668ea4:{NFSU2_TR(0x668ea4);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B668ea8:{NFSU2_TR(0x668ea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668eab:{NFSU2_TR(0x668eab);
if(r1(R+518)){{goto L668f92;}}
}
B668eb1:L668eb1:{c.instructions+=11;NFSU2_TR(0x668eb1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668eb3:{NFSU2_TR(0x668eb3);
__builtin_memmove((R+0),(R+12),4);
}
B668eb5:{NFSU2_TR(0x668eb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B668eb8:{NFSU2_TR(0x668eb8);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668eba:{NFSU2_TR(0x668eba);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B668ebb:{NFSU2_TR(0x668ebb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B668ebc:{NFSU2_TR(0x668ebc);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x668ebc);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x668ebc);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B668ebe:{NFSU2_TR(0x668ebe);
__builtin_memmove((R+4),(R+28),4);
}
B668ec0:{NFSU2_TR(0x668ec0);
w4(R+0,u32(r2(R+0)));
}
B668ec3:{NFSU2_TR(0x668ec3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668ec4:{NFSU2_TR(0x668ec4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x668ec9ull));
TAIL_STATIC(0x663bb1u,663);
}
B668ec9:L668ec9:{c.instructions+=2;NFSU2_TR(0x668ec9);
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
B668ecb:{NFSU2_TR(0x668ecb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x66919au,669);}
}
B668ed1:L668ed1:{c.instructions+=2;NFSU2_TR(0x668ed1);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B668ed5:{NFSU2_TR(0x668ed5);
if(r1(R+518)){{goto L668f8c;}}
}
B668edb:L668edb:{c.instructions+=3;NFSU2_TR(0x668edb);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B668edf:{NFSU2_TR(0x668edf);
u8 U[2];
w1(R+512,u8(0x0ull));
w2(U+0,u16(u32(r2(R+8))&u32(r2(R+8))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B668ee2:{NFSU2_TR(0x668ee2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L668f16;}}
}
B668ee4:L668ee4:{c.instructions+=3;NFSU2_TR(0x668ee4);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B668ee8:{NFSU2_TR(0x668ee8);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B668eec:{NFSU2_TR(0x668eec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L668f16;}}
}
B668eee:L668eee:{c.instructions+=11;NFSU2_TR(0x668eee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668ef1:{NFSU2_TR(0x668ef1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B668ef3:{NFSU2_TR(0x668ef3);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B668ef7:{NFSU2_TR(0x668ef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668efa:{NFSU2_TR(0x668efa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B668efc:{NFSU2_TR(0x668efc);
w4(R+8,u32(r2(R+8)));
}
B668eff:{NFSU2_TR(0x668eff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668f00:{NFSU2_TR(0x668f00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668f01:{NFSU2_TR(0x668f01);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668f03:{NFSU2_TR(0x668f03);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B668f06:{NFSU2_TR(0x668f06);
if(r1(R+518)){{goto L668f10;}}
}
B668f08:L668f08:{c.instructions+=1;NFSU2_TR(0x668f08);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x668f0eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B668f0e:L668f0e:{c.instructions+=1;NFSU2_TR(0x668f0e);
{goto L668f16;}
}
B668f10:L668f10:{c.instructions+=1;NFSU2_TR(0x668f10);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x668f16ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B668f16:L668f16:{c.instructions+=3;NFSU2_TR(0x668f16);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B668f1a:{NFSU2_TR(0x668f1a);
u8 U[2];
w1(R+512,u8(0x0ull));
w2(U+0,u16(u32(r2(R+8))&u32(r2(R+8))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B668f1d:{NFSU2_TR(0x668f1d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L668f51;}}
}
B668f1f:L668f1f:{c.instructions+=3;NFSU2_TR(0x668f1f);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B668f23:{NFSU2_TR(0x668f23);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B668f27:{NFSU2_TR(0x668f27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L668f51;}}
}
B668f29:L668f29:{c.instructions+=11;NFSU2_TR(0x668f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668f2c:{NFSU2_TR(0x668f2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B668f2e:{NFSU2_TR(0x668f2e);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B668f32:{NFSU2_TR(0x668f32);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668f35:{NFSU2_TR(0x668f35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B668f37:{NFSU2_TR(0x668f37);
w4(R+8,u32(r2(R+8)));
}
B668f3a:{NFSU2_TR(0x668f3a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668f3b:{NFSU2_TR(0x668f3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668f3c:{NFSU2_TR(0x668f3c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668f3e:{NFSU2_TR(0x668f3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B668f41:{NFSU2_TR(0x668f41);
if(r1(R+518)){{goto L668f4b;}}
}
B668f43:L668f43:{c.instructions+=1;NFSU2_TR(0x668f43);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x668f49ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B668f49:L668f49:{c.instructions+=1;NFSU2_TR(0x668f49);
{goto L668f51;}
}
B668f4b:L668f4b:{c.instructions+=1;NFSU2_TR(0x668f4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x668f51ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B668f51:L668f51:{c.instructions+=3;NFSU2_TR(0x668f51);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B668f55:{NFSU2_TR(0x668f55);
u8 U[2];
w1(R+512,u8(0x0ull));
w2(U+0,u16(u32(r2(R+8))&u32(r2(R+8))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B668f58:{NFSU2_TR(0x668f58);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L668f8c;}}
}
B668f5a:L668f5a:{c.instructions+=3;NFSU2_TR(0x668f5a);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B668f5e:{NFSU2_TR(0x668f5e);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B668f62:{NFSU2_TR(0x668f62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L668f8c;}}
}
B668f64:L668f64:{c.instructions+=11;NFSU2_TR(0x668f64);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668f67:{NFSU2_TR(0x668f67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B668f69:{NFSU2_TR(0x668f69);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B668f6d:{NFSU2_TR(0x668f6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668f70:{NFSU2_TR(0x668f70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B668f72:{NFSU2_TR(0x668f72);
w4(R+8,u32(r2(R+8)));
}
B668f75:{NFSU2_TR(0x668f75);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668f76:{NFSU2_TR(0x668f76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668f77:{NFSU2_TR(0x668f77);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668f79:{NFSU2_TR(0x668f79);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B668f7c:{NFSU2_TR(0x668f7c);
if(r1(R+518)){{goto L668f86;}}
}
B668f7e:L668f7e:{c.instructions+=1;NFSU2_TR(0x668f7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x668f84ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B668f84:L668f84:{c.instructions+=1;NFSU2_TR(0x668f84);
{goto L668f8c;}
}
B668f86:L668f86:{c.instructions+=1;NFSU2_TR(0x668f86);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x668f8cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B668f8c:L668f8c:{c.instructions+=2;NFSU2_TR(0x668f8c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x64ull))));
}
B668f8f:{NFSU2_TR(0x668f8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668f92:L668f92:{c.instructions+=6;NFSU2_TR(0x668f92);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B668f96:{NFSU2_TR(0x668f96);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B668f99:{NFSU2_TR(0x668f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B668f9c:{NFSU2_TR(0x668f9c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B668f9e:{NFSU2_TR(0x668f9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B668fa1:{NFSU2_TR(0x668fa1);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x669045u,669);}
}
B668fa7:L668fa7:{c.instructions+=2;NFSU2_TR(0x668fa7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B668faa:{NFSU2_TR(0x668faa);
if(r1(R+518)){TAIL_STATIC(0x66900au,669);}
}
B668fac:L668fac:{c.instructions+=6;NFSU2_TR(0x668fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668faf:{NFSU2_TR(0x668faf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B668fb1:{NFSU2_TR(0x668fb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B668fb4:{NFSU2_TR(0x668fb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B668fb6:{NFSU2_TR(0x668fb6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B668fba:{NFSU2_TR(0x668fba);
if(r1(R+518)){{goto L668fda;}}
}
B668fbc:L668fbc:{c.instructions+=5;NFSU2_TR(0x668fbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668fbf:{NFSU2_TR(0x668fbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B668fc2:{NFSU2_TR(0x668fc2);
__builtin_memmove((R+28),(R+0),4);
}
B668fc4:{NFSU2_TR(0x668fc4);
__builtin_memmove((R+0),(R+4),4);
}
B668fc6:{NFSU2_TR(0x668fc6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B668fc9:L668fc9:{c.instructions+=1;NFSU2_TR(0x668fc9);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L668fcb;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x668fc9u);}goto L668fc9;}
}
B668fcb:L668fcb:{c.instructions+=2;NFSU2_TR(0x668fcb);
__builtin_memmove((R+4),(R+0),4);
}
B668fcd:{NFSU2_TR(0x668fcd);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B668fd0:L668fd0:{c.instructions+=1;NFSU2_TR(0x668fd0);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L668fd2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x668fd0u);}goto L668fd0;}
}
B668fd2:L668fd2:{c.instructions+=3;NFSU2_TR(0x668fd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B668fd5:{NFSU2_TR(0x668fd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B668fd8:{NFSU2_TR(0x668fd8);
TAIL_STATIC(0x66900au,669);
}
B668fda:L668fda:{c.instructions+=14;NFSU2_TR(0x668fda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668fdd:{NFSU2_TR(0x668fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B668fe3:{NFSU2_TR(0x668fe3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B668fe6:{NFSU2_TR(0x668fe6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B668fe9:{NFSU2_TR(0x668fe9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B668fec:{NFSU2_TR(0x668fec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668fed:{NFSU2_TR(0x668fed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B668ff0:{NFSU2_TR(0x668ff0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B668ff3:{NFSU2_TR(0x668ff3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B668ff7:{NFSU2_TR(0x668ff7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B668ffa:{NFSU2_TR(0x668ffa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668ffb:{NFSU2_TR(0x668ffb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B668ffc:{NFSU2_TR(0x668ffc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B668fff:{NFSU2_TR(0x668fff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x669000u,669);
}
XIT:NFSU2_TR_EXIT(0x668,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
