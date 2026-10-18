#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_444(u8* __restrict R,Cpu& c);
u32 body_574(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5d7(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x445,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x445,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_445(u8* __restrict R,Cpu& c);
u32 page_445(Cpu& c){return body_445(c.regs.data(),c);}
__attribute__((noinline)) u32 body_445(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x445002:goto L445002;
case 0x445005:c.instructions+=170;goto B445005;
case 0x445009:c.instructions+=169;goto B445009;
case 0x44500c:c.instructions+=168;goto B44500c;
case 0x44500e:c.instructions+=167;goto B44500e;
case 0x445012:c.instructions+=166;goto B445012;
case 0x445015:c.instructions+=165;goto B445015;
case 0x445017:c.instructions+=164;goto B445017;
case 0x44501b:c.instructions+=163;goto B44501b;
case 0x44501e:c.instructions+=162;goto B44501e;
case 0x445020:c.instructions+=161;goto B445020;
case 0x445027:c.instructions+=160;goto B445027;
case 0x44502b:c.instructions+=159;goto B44502b;
case 0x44502e:c.instructions+=158;goto B44502e;
case 0x445032:c.instructions+=157;goto B445032;
case 0x445035:c.instructions+=156;goto B445035;
case 0x445037:c.instructions+=155;goto B445037;
case 0x44503b:c.instructions+=154;goto B44503b;
case 0x44503e:c.instructions+=153;goto B44503e;
case 0x445040:c.instructions+=152;goto B445040;
case 0x445044:c.instructions+=151;goto B445044;
case 0x445047:c.instructions+=150;goto B445047;
case 0x445049:c.instructions+=149;goto B445049;
case 0x445050:c.instructions+=148;goto B445050;
case 0x445054:c.instructions+=147;goto B445054;
case 0x445057:c.instructions+=146;goto B445057;
case 0x44505b:c.instructions+=145;goto B44505b;
case 0x44505e:c.instructions+=144;goto B44505e;
case 0x445060:c.instructions+=143;goto B445060;
case 0x445064:c.instructions+=142;goto B445064;
case 0x445067:c.instructions+=141;goto B445067;
case 0x445069:c.instructions+=140;goto B445069;
case 0x44506d:c.instructions+=139;goto B44506d;
case 0x44506f:c.instructions+=138;goto B44506f;
case 0x445071:c.instructions+=137;goto B445071;
case 0x445078:c.instructions+=136;goto B445078;
case 0x44507c:c.instructions+=135;goto B44507c;
case 0x44507f:c.instructions+=134;goto B44507f;
case 0x445083:c.instructions+=133;goto B445083;
case 0x445086:c.instructions+=132;goto B445086;
case 0x445088:c.instructions+=131;goto B445088;
case 0x44508c:c.instructions+=130;goto B44508c;
case 0x44508f:c.instructions+=129;goto B44508f;
case 0x445091:c.instructions+=128;goto B445091;
case 0x445095:c.instructions+=127;goto B445095;
case 0x445098:c.instructions+=126;goto B445098;
case 0x44509a:c.instructions+=125;goto B44509a;
case 0x4450a1:c.instructions+=124;goto B4450a1;
case 0x4450a5:c.instructions+=123;goto B4450a5;
case 0x4450a8:c.instructions+=122;goto B4450a8;
case 0x4450ac:c.instructions+=121;goto B4450ac;
case 0x4450af:c.instructions+=120;goto B4450af;
case 0x4450b1:c.instructions+=119;goto B4450b1;
case 0x4450b5:c.instructions+=118;goto B4450b5;
case 0x4450b8:c.instructions+=117;goto B4450b8;
case 0x4450ba:c.instructions+=116;goto B4450ba;
case 0x4450be:c.instructions+=115;goto B4450be;
case 0x4450c1:c.instructions+=114;goto B4450c1;
case 0x4450c3:c.instructions+=113;goto B4450c3;
case 0x4450ca:c.instructions+=112;goto B4450ca;
case 0x4450ce:c.instructions+=111;goto B4450ce;
case 0x4450d1:c.instructions+=110;goto B4450d1;
case 0x4450d5:c.instructions+=109;goto B4450d5;
case 0x4450d8:c.instructions+=108;goto B4450d8;
case 0x4450da:c.instructions+=107;goto B4450da;
case 0x4450de:c.instructions+=106;goto B4450de;
case 0x4450e1:c.instructions+=105;goto B4450e1;
case 0x4450e3:c.instructions+=104;goto B4450e3;
case 0x4450e7:c.instructions+=103;goto B4450e7;
case 0x4450ea:c.instructions+=102;goto B4450ea;
case 0x4450ec:c.instructions+=101;goto B4450ec;
case 0x4450f3:c.instructions+=100;goto B4450f3;
case 0x4450f7:c.instructions+=99;goto B4450f7;
case 0x4450fa:c.instructions+=98;goto B4450fa;
case 0x4450fe:c.instructions+=97;goto B4450fe;
case 0x445101:c.instructions+=96;goto B445101;
case 0x445103:c.instructions+=95;goto B445103;
case 0x445107:c.instructions+=94;goto B445107;
case 0x44510a:c.instructions+=93;goto B44510a;
case 0x44510c:c.instructions+=92;goto B44510c;
case 0x445110:c.instructions+=91;goto B445110;
case 0x445112:c.instructions+=90;goto B445112;
case 0x445114:c.instructions+=89;goto B445114;
case 0x44511b:c.instructions+=88;goto B44511b;
case 0x44511f:c.instructions+=87;goto B44511f;
case 0x445122:c.instructions+=86;goto B445122;
case 0x445126:c.instructions+=85;goto B445126;
case 0x445129:c.instructions+=84;goto B445129;
case 0x44512b:c.instructions+=83;goto B44512b;
case 0x44512f:c.instructions+=82;goto B44512f;
case 0x445132:c.instructions+=81;goto B445132;
case 0x445134:c.instructions+=80;goto B445134;
case 0x445138:c.instructions+=79;goto B445138;
case 0x44513b:c.instructions+=78;goto B44513b;
case 0x44513d:c.instructions+=77;goto B44513d;
case 0x445144:c.instructions+=76;goto B445144;
case 0x445148:c.instructions+=75;goto B445148;
case 0x44514b:c.instructions+=74;goto B44514b;
case 0x44514f:c.instructions+=73;goto B44514f;
case 0x445152:c.instructions+=72;goto B445152;
case 0x445154:c.instructions+=71;goto B445154;
case 0x445158:c.instructions+=70;goto B445158;
case 0x44515b:c.instructions+=69;goto B44515b;
case 0x44515d:c.instructions+=68;goto B44515d;
case 0x445161:c.instructions+=67;goto B445161;
case 0x445164:c.instructions+=66;goto B445164;
case 0x445166:c.instructions+=65;goto B445166;
case 0x44516d:c.instructions+=64;goto B44516d;
case 0x445171:c.instructions+=63;goto B445171;
case 0x445174:c.instructions+=62;goto B445174;
case 0x445178:c.instructions+=61;goto B445178;
case 0x44517b:c.instructions+=60;goto B44517b;
case 0x44517d:c.instructions+=59;goto B44517d;
case 0x445181:c.instructions+=58;goto B445181;
case 0x445184:c.instructions+=57;goto B445184;
case 0x445186:c.instructions+=56;goto B445186;
case 0x44518a:c.instructions+=55;goto B44518a;
case 0x44518d:c.instructions+=54;goto B44518d;
case 0x44518f:c.instructions+=53;goto B44518f;
case 0x445196:c.instructions+=52;goto B445196;
case 0x44519a:c.instructions+=51;goto B44519a;
case 0x44519d:c.instructions+=50;goto B44519d;
case 0x4451a1:c.instructions+=49;goto B4451a1;
case 0x4451a4:c.instructions+=48;goto B4451a4;
case 0x4451a6:c.instructions+=47;goto B4451a6;
case 0x4451aa:c.instructions+=46;goto B4451aa;
case 0x4451ad:c.instructions+=45;goto B4451ad;
case 0x4451af:c.instructions+=44;goto B4451af;
case 0x4451b3:c.instructions+=43;goto B4451b3;
case 0x4451b5:c.instructions+=42;goto B4451b5;
case 0x4451b7:c.instructions+=41;goto B4451b7;
case 0x4451be:c.instructions+=40;goto B4451be;
case 0x4451c2:c.instructions+=39;goto B4451c2;
case 0x4451c5:c.instructions+=38;goto B4451c5;
case 0x4451c9:c.instructions+=37;goto B4451c9;
case 0x4451cc:c.instructions+=36;goto B4451cc;
case 0x4451ce:c.instructions+=35;goto B4451ce;
case 0x4451d2:c.instructions+=34;goto B4451d2;
case 0x4451d5:c.instructions+=33;goto B4451d5;
case 0x4451d7:c.instructions+=32;goto B4451d7;
case 0x4451db:c.instructions+=31;goto B4451db;
case 0x4451de:c.instructions+=30;goto B4451de;
case 0x4451e0:c.instructions+=29;goto B4451e0;
case 0x4451e7:c.instructions+=28;goto B4451e7;
case 0x4451eb:c.instructions+=27;goto B4451eb;
case 0x4451ee:c.instructions+=26;goto B4451ee;
case 0x4451f2:c.instructions+=25;goto B4451f2;
case 0x4451f9:c.instructions+=24;goto B4451f9;
case 0x4451fc:c.instructions+=23;goto B4451fc;
case 0x4451fd:c.instructions+=22;goto B4451fd;
case 0x4451fe:c.instructions+=21;goto B4451fe;
case 0x445200:c.instructions+=20;goto B445200;
case 0x445204:c.instructions+=19;goto B445204;
case 0x445207:c.instructions+=18;goto B445207;
case 0x445209:c.instructions+=17;goto B445209;
case 0x44520d:c.instructions+=16;goto B44520d;
case 0x445210:c.instructions+=15;goto B445210;
case 0x445212:c.instructions+=14;goto B445212;
case 0x445219:c.instructions+=13;goto B445219;
case 0x44521d:c.instructions+=12;goto B44521d;
case 0x445220:c.instructions+=11;goto B445220;
case 0x445224:c.instructions+=10;goto B445224;
case 0x445227:c.instructions+=9;goto B445227;
case 0x445229:c.instructions+=8;goto B445229;
case 0x44522d:c.instructions+=7;goto B44522d;
case 0x445230:c.instructions+=6;goto B445230;
case 0x445232:c.instructions+=5;goto B445232;
case 0x445236:c.instructions+=4;goto B445236;
case 0x445239:c.instructions+=3;goto B445239;
case 0x44523b:c.instructions+=2;goto B44523b;
case 0x445242:c.instructions+=1;goto B445242;
case 0x445247:goto L445247;
case 0x44524a:c.instructions+=1;goto B44524a;
case 0x44524c:goto L44524c;
case 0x44524e:goto L44524e;
case 0x445255:c.instructions+=152;goto B445255;
case 0x445257:c.instructions+=151;goto B445257;
case 0x44525e:c.instructions+=150;goto B44525e;
case 0x445260:c.instructions+=149;goto B445260;
case 0x445267:c.instructions+=148;goto B445267;
case 0x445269:c.instructions+=147;goto B445269;
case 0x44526c:c.instructions+=146;goto B44526c;
case 0x445272:c.instructions+=145;goto B445272;
case 0x445275:c.instructions+=144;goto B445275;
case 0x44527b:c.instructions+=143;goto B44527b;
case 0x44527d:c.instructions+=142;goto B44527d;
case 0x445280:c.instructions+=141;goto B445280;
case 0x445286:c.instructions+=140;goto B445286;
case 0x44528a:c.instructions+=139;goto B44528a;
case 0x44528c:c.instructions+=138;goto B44528c;
case 0x445290:c.instructions+=137;goto B445290;
case 0x445292:c.instructions+=136;goto B445292;
case 0x445299:c.instructions+=135;goto B445299;
case 0x44529c:c.instructions+=134;goto B44529c;
case 0x4452a2:c.instructions+=133;goto B4452a2;
case 0x4452a6:c.instructions+=132;goto B4452a6;
case 0x4452a9:c.instructions+=131;goto B4452a9;
case 0x4452af:c.instructions+=130;goto B4452af;
case 0x4452b3:c.instructions+=129;goto B4452b3;
case 0x4452b6:c.instructions+=128;goto B4452b6;
case 0x4452bc:c.instructions+=127;goto B4452bc;
case 0x4452c0:c.instructions+=126;goto B4452c0;
case 0x4452c3:c.instructions+=125;goto B4452c3;
case 0x4452c7:c.instructions+=124;goto B4452c7;
case 0x4452c9:c.instructions+=123;goto B4452c9;
case 0x4452d0:c.instructions+=122;goto B4452d0;
case 0x4452d3:c.instructions+=121;goto B4452d3;
case 0x4452d9:c.instructions+=120;goto B4452d9;
case 0x4452dd:c.instructions+=119;goto B4452dd;
case 0x4452e0:c.instructions+=118;goto B4452e0;
case 0x4452e6:c.instructions+=117;goto B4452e6;
case 0x4452ea:c.instructions+=116;goto B4452ea;
case 0x4452ee:c.instructions+=115;goto B4452ee;
case 0x4452f1:c.instructions+=114;goto B4452f1;
case 0x4452f7:c.instructions+=113;goto B4452f7;
case 0x4452fb:c.instructions+=112;goto B4452fb;
case 0x4452fe:c.instructions+=111;goto B4452fe;
case 0x445302:c.instructions+=110;goto B445302;
case 0x445306:c.instructions+=109;goto B445306;
case 0x44530d:c.instructions+=108;goto B44530d;
case 0x445310:c.instructions+=107;goto B445310;
case 0x445316:c.instructions+=106;goto B445316;
case 0x44531a:c.instructions+=105;goto B44531a;
case 0x44531d:c.instructions+=104;goto B44531d;
case 0x445323:c.instructions+=103;goto B445323;
case 0x445327:c.instructions+=102;goto B445327;
case 0x44532b:c.instructions+=101;goto B44532b;
case 0x44532e:c.instructions+=100;goto B44532e;
case 0x445334:c.instructions+=99;goto B445334;
case 0x445338:c.instructions+=98;goto B445338;
case 0x44533b:c.instructions+=97;goto B44533b;
case 0x44533f:c.instructions+=96;goto B44533f;
case 0x445343:c.instructions+=95;goto B445343;
case 0x44534a:c.instructions+=94;goto B44534a;
case 0x44534c:c.instructions+=93;goto B44534c;
case 0x445352:c.instructions+=92;goto B445352;
case 0x445356:c.instructions+=91;goto B445356;
case 0x445359:c.instructions+=90;goto B445359;
case 0x44535d:c.instructions+=89;goto B44535d;
case 0x44535f:c.instructions+=88;goto B44535f;
case 0x445366:c.instructions+=87;goto B445366;
case 0x445369:c.instructions+=86;goto B445369;
case 0x44536f:c.instructions+=85;goto B44536f;
case 0x445373:c.instructions+=84;goto B445373;
case 0x445376:c.instructions+=83;goto B445376;
case 0x44537a:c.instructions+=82;goto B44537a;
case 0x44537c:c.instructions+=81;goto B44537c;
case 0x445383:c.instructions+=80;goto B445383;
case 0x445385:c.instructions+=79;goto B445385;
case 0x445387:c.instructions+=78;goto B445387;
case 0x44538a:c.instructions+=77;goto B44538a;
case 0x445390:c.instructions+=76;goto B445390;
case 0x445393:c.instructions+=75;goto B445393;
case 0x445395:c.instructions+=74;goto B445395;
case 0x445399:c.instructions+=73;goto B445399;
case 0x4453a0:c.instructions+=72;goto B4453a0;
case 0x4453a3:c.instructions+=71;goto B4453a3;
case 0x4453a9:c.instructions+=70;goto B4453a9;
case 0x4453ad:c.instructions+=69;goto B4453ad;
case 0x4453b0:c.instructions+=68;goto B4453b0;
case 0x4453b4:c.instructions+=67;goto B4453b4;
case 0x4453b8:c.instructions+=66;goto B4453b8;
case 0x4453bf:c.instructions+=65;goto B4453bf;
case 0x4453c2:c.instructions+=64;goto B4453c2;
case 0x4453c6:c.instructions+=63;goto B4453c6;
case 0x4453ca:c.instructions+=62;goto B4453ca;
case 0x4453cc:c.instructions+=61;goto B4453cc;
case 0x4453d3:c.instructions+=60;goto B4453d3;
case 0x4453d6:c.instructions+=59;goto B4453d6;
case 0x4453da:c.instructions+=58;goto B4453da;
case 0x4453de:c.instructions+=57;goto B4453de;
case 0x4453e2:c.instructions+=56;goto B4453e2;
case 0x4453e9:c.instructions+=55;goto B4453e9;
case 0x4453ec:c.instructions+=54;goto B4453ec;
case 0x4453ee:c.instructions+=53;goto B4453ee;
case 0x4453f2:c.instructions+=52;goto B4453f2;
case 0x4453f6:c.instructions+=51;goto B4453f6;
case 0x4453fd:c.instructions+=50;goto B4453fd;
case 0x4453ff:c.instructions+=49;goto B4453ff;
case 0x445401:c.instructions+=48;goto B445401;
case 0x445404:c.instructions+=47;goto B445404;
case 0x445408:c.instructions+=46;goto B445408;
case 0x44540c:c.instructions+=45;goto B44540c;
case 0x445410:c.instructions+=44;goto B445410;
case 0x445417:c.instructions+=43;goto B445417;
case 0x445419:c.instructions+=42;goto B445419;
case 0x44541c:c.instructions+=41;goto B44541c;
case 0x44541e:c.instructions+=40;goto B44541e;
case 0x445421:c.instructions+=39;goto B445421;
case 0x445423:c.instructions+=38;goto B445423;
case 0x445425:c.instructions+=37;goto B445425;
case 0x445427:c.instructions+=36;goto B445427;
case 0x445429:c.instructions+=35;goto B445429;
case 0x44542c:c.instructions+=34;goto B44542c;
case 0x445433:c.instructions+=33;goto B445433;
case 0x445435:c.instructions+=32;goto B445435;
case 0x445438:c.instructions+=31;goto B445438;
case 0x44543a:c.instructions+=30;goto B44543a;
case 0x44543d:c.instructions+=29;goto B44543d;
case 0x44543f:c.instructions+=28;goto B44543f;
case 0x445441:c.instructions+=27;goto B445441;
case 0x445444:c.instructions+=26;goto B445444;
case 0x445446:c.instructions+=25;goto B445446;
case 0x445449:c.instructions+=24;goto B445449;
case 0x445450:c.instructions+=23;goto B445450;
case 0x445452:c.instructions+=22;goto B445452;
case 0x445455:c.instructions+=21;goto B445455;
case 0x445457:c.instructions+=20;goto B445457;
case 0x44545a:c.instructions+=19;goto B44545a;
case 0x44545c:c.instructions+=18;goto B44545c;
case 0x44545e:c.instructions+=17;goto B44545e;
case 0x445461:c.instructions+=16;goto B445461;
case 0x445468:c.instructions+=15;goto B445468;
case 0x445469:c.instructions+=14;goto B445469;
case 0x44546a:c.instructions+=13;goto B44546a;
case 0x44546c:c.instructions+=12;goto B44546c;
case 0x44546f:c.instructions+=11;goto B44546f;
case 0x445476:c.instructions+=10;goto B445476;
case 0x445478:c.instructions+=9;goto B445478;
case 0x44547b:c.instructions+=8;goto B44547b;
case 0x44547d:c.instructions+=7;goto B44547d;
case 0x445480:c.instructions+=6;goto B445480;
case 0x445482:c.instructions+=5;goto B445482;
case 0x445485:c.instructions+=4;goto B445485;
case 0x445487:c.instructions+=3;goto B445487;
case 0x44548a:c.instructions+=2;goto B44548a;
case 0x445491:c.instructions+=1;goto B445491;
case 0x445496:goto L445496;
case 0x445499:c.instructions+=5;goto B445499;
case 0x44549a:c.instructions+=4;goto B44549a;
case 0x44549b:c.instructions+=3;goto B44549b;
case 0x44549d:c.instructions+=2;goto B44549d;
case 0x44549e:c.instructions+=1;goto B44549e;
case 0x4454a0:goto L4454a0;
case 0x4454a3:c.instructions+=2;goto B4454a3;
case 0x4454a5:c.instructions+=1;goto B4454a5;
case 0x4454a7:goto L4454a7;
case 0x4454ae:goto L4454ae;
case 0x4454c0:goto L4454c0;
case 0x4454c3:c.instructions+=2;goto B4454c3;
case 0x4454c5:c.instructions+=1;goto B4454c5;
case 0x4454c7:goto L4454c7;
case 0x4454cb:c.instructions+=2;goto B4454cb;
case 0x4454d2:c.instructions+=1;goto B4454d2;
case 0x4454d8:goto L4454d8;
case 0x4454e0:goto L4454e0;
case 0x4454e3:c.instructions+=2;goto B4454e3;
case 0x4454e5:c.instructions+=1;goto B4454e5;
case 0x4454e7:goto L4454e7;
case 0x4454eb:c.instructions+=2;goto B4454eb;
case 0x4454f2:c.instructions+=1;goto B4454f2;
case 0x4454f8:goto L4454f8;
case 0x445500:goto L445500;
case 0x445504:c.instructions+=40;goto B445504;
case 0x445508:c.instructions+=39;goto B445508;
case 0x44550b:c.instructions+=38;goto B44550b;
case 0x44550f:c.instructions+=37;goto B44550f;
case 0x445512:c.instructions+=36;goto B445512;
case 0x445516:c.instructions+=35;goto B445516;
case 0x445519:c.instructions+=34;goto B445519;
case 0x44551d:c.instructions+=33;goto B44551d;
case 0x445520:c.instructions+=32;goto B445520;
case 0x445524:c.instructions+=31;goto B445524;
case 0x445527:c.instructions+=30;goto B445527;
case 0x44552b:c.instructions+=29;goto B44552b;
case 0x44552e:c.instructions+=28;goto B44552e;
case 0x445532:c.instructions+=27;goto B445532;
case 0x445535:c.instructions+=26;goto B445535;
case 0x445539:c.instructions+=25;goto B445539;
case 0x44553c:c.instructions+=24;goto B44553c;
case 0x44553f:c.instructions+=23;goto B44553f;
case 0x445542:c.instructions+=22;goto B445542;
case 0x445548:c.instructions+=21;goto B445548;
case 0x44554b:c.instructions+=20;goto B44554b;
case 0x44554e:c.instructions+=19;goto B44554e;
case 0x445551:c.instructions+=18;goto B445551;
case 0x445557:c.instructions+=17;goto B445557;
case 0x445559:c.instructions+=16;goto B445559;
case 0x44555f:c.instructions+=15;goto B44555f;
case 0x445565:c.instructions+=14;goto B445565;
case 0x445568:c.instructions+=13;goto B445568;
case 0x44556b:c.instructions+=12;goto B44556b;
case 0x44556e:c.instructions+=11;goto B44556e;
case 0x445574:c.instructions+=10;goto B445574;
case 0x445576:c.instructions+=9;goto B445576;
case 0x44557c:c.instructions+=8;goto B44557c;
case 0x445582:c.instructions+=7;goto B445582;
case 0x445585:c.instructions+=6;goto B445585;
case 0x44558b:c.instructions+=5;goto B44558b;
case 0x44558e:c.instructions+=4;goto B44558e;
case 0x445594:c.instructions+=3;goto B445594;
case 0x445597:c.instructions+=2;goto B445597;
case 0x44559d:c.instructions+=1;goto B44559d;
case 0x4455a0:goto L4455a0;
case 0x4455a4:c.instructions+=5;goto B4455a4;
case 0x4455a6:c.instructions+=4;goto B4455a6;
case 0x4455ac:c.instructions+=3;goto B4455ac;
case 0x4455b2:c.instructions+=2;goto B4455b2;
case 0x4455b8:c.instructions+=1;goto B4455b8;
case 0x4455c0:goto L4455c0;
case 0x4455ca:c.instructions+=1;goto B4455ca;
case 0x4455d0:goto L4455d0;
case 0x4455d1:c.instructions+=11;goto B4455d1;
case 0x4455d3:c.instructions+=10;goto B4455d3;
case 0x4455d6:c.instructions+=9;goto B4455d6;
case 0x4455d9:c.instructions+=8;goto B4455d9;
case 0x4455da:c.instructions+=7;goto B4455da;
case 0x4455dd:c.instructions+=6;goto B4455dd;
case 0x4455de:c.instructions+=5;goto B4455de;
case 0x4455e1:c.instructions+=4;goto B4455e1;
case 0x4455e6:c.instructions+=3;goto B4455e6;
case 0x4455e7:c.instructions+=2;goto B4455e7;
case 0x4455e8:c.instructions+=1;goto B4455e8;
case 0x4455ed:goto L4455ed;
case 0x4455f0:c.instructions+=2;goto B4455f0;
case 0x4455f2:c.instructions+=1;goto B4455f2;
case 0x4455f4:goto L4455f4;
case 0x4455f7:c.instructions+=4;goto B4455f7;
case 0x4455fd:c.instructions+=3;goto B4455fd;
case 0x4455ff:c.instructions+=2;goto B4455ff;
case 0x445602:c.instructions+=1;goto B445602;
case 0x445604:goto L445604;
case 0x445606:c.instructions+=23;goto B445606;
case 0x445608:c.instructions+=22;goto B445608;
case 0x44560b:c.instructions+=21;goto B44560b;
case 0x44560e:c.instructions+=20;goto B44560e;
case 0x445611:c.instructions+=19;goto B445611;
case 0x445614:c.instructions+=18;goto B445614;
case 0x445616:c.instructions+=17;goto B445616;
case 0x445618:c.instructions+=16;goto B445618;
case 0x44561a:c.instructions+=15;goto B44561a;
case 0x44561c:c.instructions+=14;goto B44561c;
case 0x44561e:c.instructions+=13;goto B44561e;
case 0x445620:c.instructions+=12;goto B445620;
case 0x445622:c.instructions+=11;goto B445622;
case 0x445624:c.instructions+=10;goto B445624;
case 0x445626:c.instructions+=9;goto B445626;
case 0x445628:c.instructions+=8;goto B445628;
case 0x44562a:c.instructions+=7;goto B44562a;
case 0x44562c:c.instructions+=6;goto B44562c;
case 0x44562f:c.instructions+=5;goto B44562f;
case 0x445630:c.instructions+=4;goto B445630;
case 0x445631:c.instructions+=3;goto B445631;
case 0x445633:c.instructions+=2;goto B445633;
case 0x445634:c.instructions+=1;goto B445634;
case 0x445637:goto L445637;
case 0x44563d:c.instructions+=5;goto B44563d;
case 0x44563e:c.instructions+=4;goto B44563e;
case 0x44563f:c.instructions+=3;goto B44563f;
case 0x445641:c.instructions+=2;goto B445641;
case 0x445642:c.instructions+=1;goto B445642;
case 0x445650:goto L445650;
case 0x445651:c.instructions+=4;goto B445651;
case 0x445653:c.instructions+=3;goto B445653;
case 0x445656:c.instructions+=2;goto B445656;
case 0x445658:c.instructions+=1;goto B445658;
case 0x44565e:goto L44565e;
case 0x445661:c.instructions+=3;goto B445661;
case 0x445663:c.instructions+=2;goto B445663;
case 0x445664:c.instructions+=1;goto B445664;
case 0x445669:goto L445669;
case 0x44566c:c.instructions+=3;goto B44566c;
case 0x44566e:c.instructions+=2;goto B44566e;
case 0x44566f:c.instructions+=1;goto B44566f;
case 0x445674:goto L445674;
case 0x445677:c.instructions+=3;goto B445677;
case 0x445679:c.instructions+=2;goto B445679;
case 0x44567a:c.instructions+=1;goto B44567a;
case 0x44567f:goto L44567f;
case 0x445682:c.instructions+=3;goto B445682;
case 0x445684:c.instructions+=2;goto B445684;
case 0x445685:c.instructions+=1;goto B445685;
case 0x44568a:goto L44568a;
case 0x44568d:c.instructions+=3;goto B44568d;
case 0x44568f:c.instructions+=2;goto B44568f;
case 0x445690:c.instructions+=1;goto B445690;
case 0x445695:goto L445695;
case 0x445698:c.instructions+=3;goto B445698;
case 0x44569a:c.instructions+=2;goto B44569a;
case 0x44569b:c.instructions+=1;goto B44569b;
case 0x4456a0:goto L4456a0;
case 0x4456a3:c.instructions+=3;goto B4456a3;
case 0x4456a5:c.instructions+=2;goto B4456a5;
case 0x4456a6:c.instructions+=1;goto B4456a6;
case 0x4456ab:goto L4456ab;
case 0x4456ae:c.instructions+=3;goto B4456ae;
case 0x4456b0:c.instructions+=2;goto B4456b0;
case 0x4456b1:c.instructions+=1;goto B4456b1;
case 0x4456b6:goto L4456b6;
case 0x4456b9:c.instructions+=4;goto B4456b9;
case 0x4456bc:c.instructions+=3;goto B4456bc;
case 0x4456be:c.instructions+=2;goto B4456be;
case 0x4456bf:c.instructions+=1;goto B4456bf;
case 0x4456c4:goto L4456c4;
case 0x4456c7:c.instructions+=3;goto B4456c7;
case 0x4456c9:c.instructions+=2;goto B4456c9;
case 0x4456ca:c.instructions+=1;goto B4456ca;
case 0x4456cf:goto L4456cf;
case 0x4456d2:c.instructions+=3;goto B4456d2;
case 0x4456d4:c.instructions+=2;goto B4456d4;
case 0x4456d5:c.instructions+=1;goto B4456d5;
case 0x4456da:goto L4456da;
case 0x4456dd:c.instructions+=3;goto B4456dd;
case 0x4456df:c.instructions+=2;goto B4456df;
case 0x4456e0:c.instructions+=1;goto B4456e0;
case 0x4456e5:goto L4456e5;
case 0x4456e8:c.instructions+=3;goto B4456e8;
case 0x4456ea:c.instructions+=2;goto B4456ea;
case 0x4456eb:c.instructions+=1;goto B4456eb;
case 0x4456f0:goto L4456f0;
case 0x4456f3:c.instructions+=3;goto B4456f3;
case 0x4456f5:c.instructions+=2;goto B4456f5;
case 0x4456f6:c.instructions+=1;goto B4456f6;
case 0x4456fb:goto L4456fb;
case 0x4456fe:c.instructions+=3;goto B4456fe;
case 0x445700:c.instructions+=2;goto B445700;
case 0x445701:c.instructions+=1;goto B445701;
case 0x445706:goto L445706;
case 0x445709:c.instructions+=3;goto B445709;
case 0x44570b:c.instructions+=2;goto B44570b;
case 0x44570c:c.instructions+=1;goto B44570c;
case 0x445711:goto L445711;
case 0x445714:c.instructions+=4;goto B445714;
case 0x445717:c.instructions+=3;goto B445717;
case 0x445719:c.instructions+=2;goto B445719;
case 0x44571a:c.instructions+=1;goto B44571a;
case 0x44571f:goto L44571f;
case 0x445722:c.instructions+=3;goto B445722;
case 0x445724:c.instructions+=2;goto B445724;
case 0x445725:c.instructions+=1;goto B445725;
case 0x44572a:goto L44572a;
case 0x44572d:c.instructions+=3;goto B44572d;
case 0x44572f:c.instructions+=2;goto B44572f;
case 0x445730:c.instructions+=1;goto B445730;
case 0x445735:goto L445735;
case 0x445738:c.instructions+=3;goto B445738;
case 0x44573a:c.instructions+=2;goto B44573a;
case 0x44573b:c.instructions+=1;goto B44573b;
case 0x445740:goto L445740;
case 0x445743:c.instructions+=1;goto B445743;
case 0x44574a:goto L44574a;
case 0x44574b:c.instructions+=1;goto B44574b;
case 0x445750:goto L445750;
case 0x445751:c.instructions+=137;goto B445751;
case 0x445753:c.instructions+=136;goto B445753;
case 0x445756:c.instructions+=135;goto B445756;
case 0x44575c:c.instructions+=134;goto B44575c;
case 0x44575f:c.instructions+=133;goto B44575f;
case 0x445765:c.instructions+=132;goto B445765;
case 0x445768:c.instructions+=131;goto B445768;
case 0x445769:c.instructions+=130;goto B445769;
case 0x44576a:c.instructions+=129;goto B44576a;
case 0x44576d:c.instructions+=128;goto B44576d;
case 0x445771:c.instructions+=127;goto B445771;
case 0x445772:c.instructions+=126;goto B445772;
case 0x445775:c.instructions+=125;goto B445775;
case 0x445778:c.instructions+=124;goto B445778;
case 0x44577b:c.instructions+=123;goto B44577b;
case 0x44577e:c.instructions+=122;goto B44577e;
case 0x445780:c.instructions+=121;goto B445780;
case 0x445784:c.instructions+=120;goto B445784;
case 0x445787:c.instructions+=119;goto B445787;
case 0x44578a:c.instructions+=118;goto B44578a;
case 0x44578d:c.instructions+=117;goto B44578d;
case 0x44578f:c.instructions+=116;goto B44578f;
case 0x445793:c.instructions+=115;goto B445793;
case 0x445796:c.instructions+=114;goto B445796;
case 0x445799:c.instructions+=113;goto B445799;
case 0x44579c:c.instructions+=112;goto B44579c;
case 0x44579e:c.instructions+=111;goto B44579e;
case 0x4457a2:c.instructions+=110;goto B4457a2;
case 0x4457a5:c.instructions+=109;goto B4457a5;
case 0x4457a9:c.instructions+=108;goto B4457a9;
case 0x4457ab:c.instructions+=107;goto B4457ab;
case 0x4457af:c.instructions+=106;goto B4457af;
case 0x4457b1:c.instructions+=105;goto B4457b1;
case 0x4457b4:c.instructions+=104;goto B4457b4;
case 0x4457b6:c.instructions+=103;goto B4457b6;
case 0x4457b8:c.instructions+=102;goto B4457b8;
case 0x4457ba:c.instructions+=101;goto B4457ba;
case 0x4457bd:c.instructions+=100;goto B4457bd;
case 0x4457c0:c.instructions+=99;goto B4457c0;
case 0x4457c3:c.instructions+=98;goto B4457c3;
case 0x4457c6:c.instructions+=97;goto B4457c6;
case 0x4457ca:c.instructions+=96;goto B4457ca;
case 0x4457cd:c.instructions+=95;goto B4457cd;
case 0x4457d0:c.instructions+=94;goto B4457d0;
case 0x4457d4:c.instructions+=93;goto B4457d4;
case 0x4457d7:c.instructions+=92;goto B4457d7;
case 0x4457da:c.instructions+=91;goto B4457da;
case 0x4457de:c.instructions+=90;goto B4457de;
case 0x4457e1:c.instructions+=89;goto B4457e1;
case 0x4457e4:c.instructions+=88;goto B4457e4;
case 0x4457e8:c.instructions+=87;goto B4457e8;
case 0x4457eb:c.instructions+=86;goto B4457eb;
case 0x4457ee:c.instructions+=85;goto B4457ee;
case 0x4457f2:c.instructions+=84;goto B4457f2;
case 0x4457f5:c.instructions+=83;goto B4457f5;
case 0x4457f8:c.instructions+=82;goto B4457f8;
case 0x4457fc:c.instructions+=81;goto B4457fc;
case 0x4457ff:c.instructions+=80;goto B4457ff;
case 0x445802:c.instructions+=79;goto B445802;
case 0x445809:c.instructions+=78;goto B445809;
case 0x44580c:c.instructions+=77;goto B44580c;
case 0x44580f:c.instructions+=76;goto B44580f;
case 0x445816:c.instructions+=75;goto B445816;
case 0x445819:c.instructions+=74;goto B445819;
case 0x44581c:c.instructions+=73;goto B44581c;
case 0x445823:c.instructions+=72;goto B445823;
case 0x445826:c.instructions+=71;goto B445826;
case 0x445829:c.instructions+=70;goto B445829;
case 0x44582d:c.instructions+=69;goto B44582d;
case 0x445830:c.instructions+=68;goto B445830;
case 0x445833:c.instructions+=67;goto B445833;
case 0x445837:c.instructions+=66;goto B445837;
case 0x44583a:c.instructions+=65;goto B44583a;
case 0x44583d:c.instructions+=64;goto B44583d;
case 0x445841:c.instructions+=63;goto B445841;
case 0x445844:c.instructions+=62;goto B445844;
case 0x445847:c.instructions+=61;goto B445847;
case 0x44584b:c.instructions+=60;goto B44584b;
case 0x44584c:c.instructions+=59;goto B44584c;
case 0x44584f:c.instructions+=58;goto B44584f;
case 0x445856:c.instructions+=57;goto B445856;
case 0x445857:c.instructions+=56;goto B445857;
case 0x44585a:c.instructions+=55;goto B44585a;
case 0x44585d:c.instructions+=54;goto B44585d;
case 0x445860:c.instructions+=53;goto B445860;
case 0x445867:c.instructions+=52;goto B445867;
case 0x44586a:c.instructions+=51;goto B44586a;
case 0x44586d:c.instructions+=50;goto B44586d;
case 0x445874:c.instructions+=49;goto B445874;
case 0x445877:c.instructions+=48;goto B445877;
case 0x44587a:c.instructions+=47;goto B44587a;
case 0x44587e:c.instructions+=46;goto B44587e;
case 0x445881:c.instructions+=45;goto B445881;
case 0x445884:c.instructions+=44;goto B445884;
case 0x445888:c.instructions+=43;goto B445888;
case 0x44588b:c.instructions+=42;goto B44588b;
case 0x44588e:c.instructions+=41;goto B44588e;
case 0x445892:c.instructions+=40;goto B445892;
case 0x445895:c.instructions+=39;goto B445895;
case 0x445898:c.instructions+=38;goto B445898;
case 0x44589c:c.instructions+=37;goto B44589c;
case 0x44589f:c.instructions+=36;goto B44589f;
case 0x4458a2:c.instructions+=35;goto B4458a2;
case 0x4458a6:c.instructions+=34;goto B4458a6;
case 0x4458a9:c.instructions+=33;goto B4458a9;
case 0x4458ac:c.instructions+=32;goto B4458ac;
case 0x4458b0:c.instructions+=31;goto B4458b0;
case 0x4458b3:c.instructions+=30;goto B4458b3;
case 0x4458b9:c.instructions+=29;goto B4458b9;
case 0x4458bd:c.instructions+=28;goto B4458bd;
case 0x4458c3:c.instructions+=27;goto B4458c3;
case 0x4458c6:c.instructions+=26;goto B4458c6;
case 0x4458ca:c.instructions+=25;goto B4458ca;
case 0x4458d0:c.instructions+=24;goto B4458d0;
case 0x4458d3:c.instructions+=23;goto B4458d3;
case 0x4458da:c.instructions+=22;goto B4458da;
case 0x4458dd:c.instructions+=21;goto B4458dd;
case 0x4458e3:c.instructions+=20;goto B4458e3;
case 0x4458ea:c.instructions+=19;goto B4458ea;
case 0x4458f0:c.instructions+=18;goto B4458f0;
case 0x4458f3:c.instructions+=17;goto B4458f3;
case 0x4458fa:c.instructions+=16;goto B4458fa;
case 0x445900:c.instructions+=15;goto B445900;
case 0x445903:c.instructions+=14;goto B445903;
case 0x44590a:c.instructions+=13;goto B44590a;
case 0x44590d:c.instructions+=12;goto B44590d;
case 0x445913:c.instructions+=11;goto B445913;
case 0x44591a:c.instructions+=10;goto B44591a;
case 0x445920:c.instructions+=9;goto B445920;
case 0x445923:c.instructions+=8;goto B445923;
case 0x44592a:c.instructions+=7;goto B44592a;
case 0x445930:c.instructions+=6;goto B445930;
case 0x445934:c.instructions+=5;goto B445934;
case 0x445937:c.instructions+=4;goto B445937;
case 0x445938:c.instructions+=3;goto B445938;
case 0x445939:c.instructions+=2;goto B445939;
case 0x445940:c.instructions+=1;goto B445940;
case 0x445945:goto L445945;
case 0x445946:c.instructions+=7;goto B445946;
case 0x445949:c.instructions+=6;goto B445949;
case 0x44594a:c.instructions+=5;goto B44594a;
case 0x44594e:c.instructions+=4;goto B44594e;
case 0x44594f:c.instructions+=3;goto B44594f;
case 0x445952:c.instructions+=2;goto B445952;
case 0x445953:c.instructions+=1;goto B445953;
case 0x445958:goto L445958;
case 0x445959:c.instructions+=7;goto B445959;
case 0x44595c:c.instructions+=6;goto B44595c;
case 0x44595d:c.instructions+=5;goto B44595d;
case 0x445964:c.instructions+=4;goto B445964;
case 0x445965:c.instructions+=3;goto B445965;
case 0x445968:c.instructions+=2;goto B445968;
case 0x445969:c.instructions+=1;goto B445969;
case 0x44596e:goto L44596e;
case 0x44596f:c.instructions+=7;goto B44596f;
case 0x445972:c.instructions+=6;goto B445972;
case 0x445973:c.instructions+=5;goto B445973;
case 0x445977:c.instructions+=4;goto B445977;
case 0x445978:c.instructions+=3;goto B445978;
case 0x44597b:c.instructions+=2;goto B44597b;
case 0x44597c:c.instructions+=1;goto B44597c;
case 0x445981:goto L445981;
case 0x445984:c.instructions+=8;goto B445984;
case 0x445985:c.instructions+=7;goto B445985;
case 0x445988:c.instructions+=6;goto B445988;
case 0x445989:c.instructions+=5;goto B445989;
case 0x445990:c.instructions+=4;goto B445990;
case 0x445991:c.instructions+=3;goto B445991;
case 0x445994:c.instructions+=2;goto B445994;
case 0x445995:c.instructions+=1;goto B445995;
case 0x44599a:goto L44599a;
case 0x44599b:c.instructions+=7;goto B44599b;
case 0x44599e:c.instructions+=6;goto B44599e;
case 0x44599f:c.instructions+=5;goto B44599f;
case 0x4459a3:c.instructions+=4;goto B4459a3;
case 0x4459a4:c.instructions+=3;goto B4459a4;
case 0x4459a7:c.instructions+=2;goto B4459a7;
case 0x4459a8:c.instructions+=1;goto B4459a8;
case 0x4459ad:goto L4459ad;
case 0x4459ae:c.instructions+=7;goto B4459ae;
case 0x4459b1:c.instructions+=6;goto B4459b1;
case 0x4459b2:c.instructions+=5;goto B4459b2;
case 0x4459b6:c.instructions+=4;goto B4459b6;
case 0x4459b7:c.instructions+=3;goto B4459b7;
case 0x4459ba:c.instructions+=2;goto B4459ba;
case 0x4459bb:c.instructions+=1;goto B4459bb;
case 0x4459c0:goto L4459c0;
case 0x4459c1:c.instructions+=7;goto B4459c1;
case 0x4459c7:c.instructions+=6;goto B4459c7;
case 0x4459c8:c.instructions+=5;goto B4459c8;
case 0x4459cf:c.instructions+=4;goto B4459cf;
case 0x4459d0:c.instructions+=3;goto B4459d0;
case 0x4459d6:c.instructions+=2;goto B4459d6;
case 0x4459d7:c.instructions+=1;goto B4459d7;
case 0x4459dc:goto L4459dc;
case 0x4459df:c.instructions+=8;goto B4459df;
case 0x4459e0:c.instructions+=7;goto B4459e0;
case 0x4459e6:c.instructions+=6;goto B4459e6;
case 0x4459e7:c.instructions+=5;goto B4459e7;
case 0x4459ee:c.instructions+=4;goto B4459ee;
case 0x4459ef:c.instructions+=3;goto B4459ef;
case 0x4459f5:c.instructions+=2;goto B4459f5;
case 0x4459f6:c.instructions+=1;goto B4459f6;
case 0x4459fb:goto L4459fb;
case 0x4459fc:c.instructions+=7;goto B4459fc;
case 0x445a02:c.instructions+=6;goto B445a02;
case 0x445a03:c.instructions+=5;goto B445a03;
case 0x445a0a:c.instructions+=4;goto B445a0a;
case 0x445a0b:c.instructions+=3;goto B445a0b;
case 0x445a11:c.instructions+=2;goto B445a11;
case 0x445a12:c.instructions+=1;goto B445a12;
case 0x445a17:goto L445a17;
case 0x445a1a:c.instructions+=6;goto B445a1a;
case 0x445a1b:c.instructions+=5;goto B445a1b;
case 0x445a1c:c.instructions+=4;goto B445a1c;
case 0x445a1d:c.instructions+=3;goto B445a1d;
case 0x445a1f:c.instructions+=2;goto B445a1f;
case 0x445a20:c.instructions+=1;goto B445a20;
case 0x445a30:goto L445a30;
case 0x445a31:c.instructions+=6;goto B445a31;
case 0x445a35:c.instructions+=5;goto B445a35;
case 0x445a36:c.instructions+=4;goto B445a36;
case 0x445a38:c.instructions+=3;goto B445a38;
case 0x445a3b:c.instructions+=2;goto B445a3b;
case 0x445a3d:c.instructions+=1;goto B445a3d;
case 0x445a3f:goto L445a3f;
case 0x445a44:goto L445a44;
case 0x445a47:c.instructions+=3;goto B445a47;
case 0x445a48:c.instructions+=2;goto B445a48;
case 0x445a49:c.instructions+=1;goto B445a49;
case 0x445a50:goto L445a50;
case 0x445a51:c.instructions+=2;goto B445a51;
case 0x445a53:c.instructions+=1;goto B445a53;
case 0x445a58:goto L445a58;
case 0x445a5c:c.instructions+=2;goto B445a5c;
case 0x445a5d:c.instructions+=1;goto B445a5d;
case 0x445a60:goto L445a60;
case 0x445a63:c.instructions+=2;goto B445a63;
case 0x445a65:c.instructions+=1;goto B445a65;
case 0x445a67:goto L445a67;
case 0x445a6a:c.instructions+=2;goto B445a6a;
case 0x445a6c:c.instructions+=1;goto B445a6c;
case 0x445a6e:goto L445a6e;
case 0x445a73:goto L445a73;
case 0x445a75:c.instructions+=1;goto B445a75;
case 0x445a77:goto L445a77;
case 0x445a7d:c.instructions+=1;goto B445a7d;
case 0x445a7e:goto L445a7e;
case 0x445a84:c.instructions+=1;goto B445a84;
case 0x445a90:goto L445a90;
case 0x445a93:c.instructions+=3;goto B445a93;
case 0x445a96:c.instructions+=2;goto B445a96;
case 0x445a97:c.instructions+=1;goto B445a97;
case 0x445a9c:goto L445a9c;
case 0x445a9f:c.instructions+=2;goto B445a9f;
case 0x445aa3:c.instructions+=1;goto B445aa3;
case 0x445aa5:goto L445aa5;
case 0x445aa8:c.instructions+=1;goto B445aa8;
case 0x445aaa:goto L445aaa;
case 0x445aae:c.instructions+=1;goto B445aae;
case 0x445ab0:goto L445ab0;
case 0x445ab2:c.instructions+=1;goto B445ab2;
case 0x445ab3:goto L445ab3;
case 0x445ab8:c.instructions+=1;goto B445ab8;
case 0x445ac0:goto L445ac0;
case 0x445ac1:c.instructions+=3;goto B445ac1;
case 0x445ac3:c.instructions+=2;goto B445ac3;
case 0x445ac5:c.instructions+=1;goto B445ac5;
case 0x445ac8:goto L445ac8;
case 0x445aca:c.instructions+=1;goto B445aca;
case 0x445acc:goto L445acc;
case 0x445acf:c.instructions+=1;goto B445acf;
case 0x445ad4:goto L445ad4;
case 0x445ad6:c.instructions+=1;goto B445ad6;
case 0x445ad8:goto L445ad8;
case 0x445adb:c.instructions+=1;goto B445adb;
case 0x445ae0:goto L445ae0;
case 0x445ae2:c.instructions+=1;goto B445ae2;
case 0x445ae4:goto L445ae4;
case 0x445ae7:c.instructions+=3;goto B445ae7;
case 0x445aea:c.instructions+=2;goto B445aea;
case 0x445aec:c.instructions+=1;goto B445aec;
case 0x445aee:goto L445aee;
case 0x445af5:c.instructions+=1;goto B445af5;
case 0x445af7:goto L445af7;
case 0x445afc:c.instructions+=2;goto B445afc;
case 0x445afd:c.instructions+=1;goto B445afd;
case 0x445afe:goto L445afe;
case 0x445b00:c.instructions+=2;goto B445b00;
case 0x445b01:c.instructions+=1;goto B445b01;
case 0x445b10:goto L445b10;
case 0x445b14:c.instructions+=3;goto B445b14;
case 0x445b18:c.instructions+=2;goto B445b18;
case 0x445b1b:c.instructions+=1;goto B445b1b;
case 0x445b20:goto L445b20;
case 0x445b23:c.instructions+=77;goto B445b23;
case 0x445b26:c.instructions+=76;goto B445b26;
case 0x445b28:c.instructions+=75;goto B445b28;
case 0x445b2b:c.instructions+=74;goto B445b2b;
case 0x445b2e:c.instructions+=73;goto B445b2e;
case 0x445b2f:c.instructions+=72;goto B445b2f;
case 0x445b31:c.instructions+=71;goto B445b31;
case 0x445b35:c.instructions+=70;goto B445b35;
case 0x445b38:c.instructions+=69;goto B445b38;
case 0x445b3b:c.instructions+=68;goto B445b3b;
case 0x445b3e:c.instructions+=67;goto B445b3e;
case 0x445b41:c.instructions+=66;goto B445b41;
case 0x445b45:c.instructions+=65;goto B445b45;
case 0x445b48:c.instructions+=64;goto B445b48;
case 0x445b4b:c.instructions+=63;goto B445b4b;
case 0x445b4e:c.instructions+=62;goto B445b4e;
case 0x445b51:c.instructions+=61;goto B445b51;
case 0x445b58:c.instructions+=60;goto B445b58;
case 0x445b5b:c.instructions+=59;goto B445b5b;
case 0x445b5e:c.instructions+=58;goto B445b5e;
case 0x445b60:c.instructions+=57;goto B445b60;
case 0x445b63:c.instructions+=56;goto B445b63;
case 0x445b66:c.instructions+=55;goto B445b66;
case 0x445b6a:c.instructions+=54;goto B445b6a;
case 0x445b6d:c.instructions+=53;goto B445b6d;
case 0x445b70:c.instructions+=52;goto B445b70;
case 0x445b72:c.instructions+=51;goto B445b72;
case 0x445b75:c.instructions+=50;goto B445b75;
case 0x445b78:c.instructions+=49;goto B445b78;
case 0x445b7c:c.instructions+=48;goto B445b7c;
case 0x445b7f:c.instructions+=47;goto B445b7f;
case 0x445b82:c.instructions+=46;goto B445b82;
case 0x445b85:c.instructions+=45;goto B445b85;
case 0x445b88:c.instructions+=44;goto B445b88;
case 0x445b8c:c.instructions+=43;goto B445b8c;
case 0x445b8f:c.instructions+=42;goto B445b8f;
case 0x445b92:c.instructions+=41;goto B445b92;
case 0x445b95:c.instructions+=40;goto B445b95;
case 0x445b98:c.instructions+=39;goto B445b98;
case 0x445b9f:c.instructions+=38;goto B445b9f;
case 0x445ba2:c.instructions+=37;goto B445ba2;
case 0x445ba5:c.instructions+=36;goto B445ba5;
case 0x445ba7:c.instructions+=35;goto B445ba7;
case 0x445baa:c.instructions+=34;goto B445baa;
case 0x445bad:c.instructions+=33;goto B445bad;
case 0x445bb1:c.instructions+=32;goto B445bb1;
case 0x445bb4:c.instructions+=31;goto B445bb4;
case 0x445bb7:c.instructions+=30;goto B445bb7;
case 0x445bba:c.instructions+=29;goto B445bba;
case 0x445bbd:c.instructions+=28;goto B445bbd;
case 0x445bc1:c.instructions+=27;goto B445bc1;
case 0x445bc4:c.instructions+=26;goto B445bc4;
case 0x445bc7:c.instructions+=25;goto B445bc7;
case 0x445bca:c.instructions+=24;goto B445bca;
case 0x445bcd:c.instructions+=23;goto B445bcd;
case 0x445bd4:c.instructions+=22;goto B445bd4;
case 0x445bd7:c.instructions+=21;goto B445bd7;
case 0x445bda:c.instructions+=20;goto B445bda;
case 0x445bdc:c.instructions+=19;goto B445bdc;
case 0x445bdf:c.instructions+=18;goto B445bdf;
case 0x445be2:c.instructions+=17;goto B445be2;
case 0x445be6:c.instructions+=16;goto B445be6;
case 0x445be9:c.instructions+=15;goto B445be9;
case 0x445bec:c.instructions+=14;goto B445bec;
case 0x445bef:c.instructions+=13;goto B445bef;
case 0x445bf2:c.instructions+=12;goto B445bf2;
case 0x445bf6:c.instructions+=11;goto B445bf6;
case 0x445bf9:c.instructions+=10;goto B445bf9;
case 0x445bfc:c.instructions+=9;goto B445bfc;
case 0x445bff:c.instructions+=8;goto B445bff;
case 0x445c02:c.instructions+=7;goto B445c02;
case 0x445c09:c.instructions+=6;goto B445c09;
case 0x445c0c:c.instructions+=5;goto B445c0c;
case 0x445c13:c.instructions+=4;goto B445c13;
case 0x445c18:c.instructions+=3;goto B445c18;
case 0x445c1e:c.instructions+=2;goto B445c1e;
case 0x445c1f:c.instructions+=1;goto B445c1f;
case 0x445c20:goto L445c20;
case 0x445c21:c.instructions+=12;goto B445c21;
case 0x445c23:c.instructions+=11;goto B445c23;
case 0x445c26:c.instructions+=10;goto B445c26;
case 0x445c29:c.instructions+=9;goto B445c29;
case 0x445c2c:c.instructions+=8;goto B445c2c;
case 0x445c2f:c.instructions+=7;goto B445c2f;
case 0x445c30:c.instructions+=6;goto B445c30;
case 0x445c31:c.instructions+=5;goto B445c31;
case 0x445c33:c.instructions+=4;goto B445c33;
case 0x445c37:c.instructions+=3;goto B445c37;
case 0x445c38:c.instructions+=2;goto B445c38;
case 0x445c3a:c.instructions+=1;goto B445c3a;
case 0x445c3c:goto L445c3c;
case 0x445c3f:c.instructions+=1;goto B445c3f;
case 0x445c41:goto L445c41;
case 0x445c45:c.instructions+=1;goto B445c45;
case 0x445c4b:goto L445c4b;
case 0x445c4e:c.instructions+=1;goto B445c4e;
case 0x445c50:goto L445c50;
case 0x445c52:c.instructions+=1;goto B445c52;
case 0x445c57:goto L445c57;
case 0x445c59:c.instructions+=1;goto B445c59;
case 0x445c5f:goto L445c5f;
case 0x445c62:c.instructions+=19;goto B445c62;
case 0x445c65:c.instructions+=18;goto B445c65;
case 0x445c68:c.instructions+=17;goto B445c68;
case 0x445c6b:c.instructions+=16;goto B445c6b;
case 0x445c71:c.instructions+=15;goto B445c71;
case 0x445c73:c.instructions+=14;goto B445c73;
case 0x445c77:c.instructions+=13;goto B445c77;
case 0x445c7b:c.instructions+=12;goto B445c7b;
case 0x445c7f:c.instructions+=11;goto B445c7f;
case 0x445c82:c.instructions+=10;goto B445c82;
case 0x445c84:c.instructions+=9;goto B445c84;
case 0x445c87:c.instructions+=8;goto B445c87;
case 0x445c89:c.instructions+=7;goto B445c89;
case 0x445c8d:c.instructions+=6;goto B445c8d;
case 0x445c8f:c.instructions+=5;goto B445c8f;
case 0x445c91:c.instructions+=4;goto B445c91;
case 0x445c97:c.instructions+=3;goto B445c97;
case 0x445c99:c.instructions+=2;goto B445c99;
case 0x445c9c:c.instructions+=1;goto B445c9c;
case 0x445c9e:goto L445c9e;
case 0x445ca4:c.instructions+=8;goto B445ca4;
case 0x445ca5:c.instructions+=7;goto B445ca5;
case 0x445ca9:c.instructions+=6;goto B445ca9;
case 0x445cad:c.instructions+=5;goto B445cad;
case 0x445cb0:c.instructions+=4;goto B445cb0;
case 0x445cb1:c.instructions+=3;goto B445cb1;
case 0x445cb2:c.instructions+=2;goto B445cb2;
case 0x445cb3:c.instructions+=1;goto B445cb3;
case 0x445cb8:goto L445cb8;
case 0x445cbb:c.instructions+=1;goto B445cbb;
case 0x445cbd:goto L445cbd;
case 0x445cbf:goto L445cbf;
case 0x445cc2:c.instructions+=6;goto B445cc2;
case 0x445cc8:c.instructions+=5;goto B445cc8;
case 0x445cca:c.instructions+=4;goto B445cca;
case 0x445ccb:c.instructions+=3;goto B445ccb;
case 0x445cd0:c.instructions+=2;goto B445cd0;
case 0x445cd4:c.instructions+=1;goto B445cd4;
case 0x445cd9:goto L445cd9;
case 0x445cdd:c.instructions+=5;goto B445cdd;
case 0x445ce1:c.instructions+=4;goto B445ce1;
case 0x445ce2:c.instructions+=3;goto B445ce2;
case 0x445ce6:c.instructions+=2;goto B445ce6;
case 0x445ce7:c.instructions+=1;goto B445ce7;
case 0x445cec:goto L445cec;
case 0x445cf0:c.instructions+=18;goto B445cf0;
case 0x445cf4:c.instructions+=17;goto B445cf4;
case 0x445cf7:c.instructions+=16;goto B445cf7;
case 0x445cfb:c.instructions+=15;goto B445cfb;
case 0x445cff:c.instructions+=14;goto B445cff;
case 0x445d03:c.instructions+=13;goto B445d03;
case 0x445d07:c.instructions+=12;goto B445d07;
case 0x445d0b:c.instructions+=11;goto B445d0b;
case 0x445d0f:c.instructions+=10;goto B445d0f;
case 0x445d13:c.instructions+=9;goto B445d13;
case 0x445d17:c.instructions+=8;goto B445d17;
case 0x445d1b:c.instructions+=7;goto B445d1b;
case 0x445d21:c.instructions+=6;goto B445d21;
case 0x445d25:c.instructions+=5;goto B445d25;
case 0x445d28:c.instructions+=4;goto B445d28;
case 0x445d29:c.instructions+=3;goto B445d29;
case 0x445d2a:c.instructions+=2;goto B445d2a;
case 0x445d2b:c.instructions+=1;goto B445d2b;
case 0x445d30:goto L445d30;
case 0x445d33:c.instructions+=13;goto B445d33;
case 0x445d39:c.instructions+=12;goto B445d39;
case 0x445d3b:c.instructions+=11;goto B445d3b;
case 0x445d3f:c.instructions+=10;goto B445d3f;
case 0x445d43:c.instructions+=9;goto B445d43;
case 0x445d46:c.instructions+=8;goto B445d46;
case 0x445d4c:c.instructions+=7;goto B445d4c;
case 0x445d52:c.instructions+=6;goto B445d52;
case 0x445d58:c.instructions+=5;goto B445d58;
case 0x445d5c:c.instructions+=4;goto B445d5c;
case 0x445d62:c.instructions+=3;goto B445d62;
case 0x445d64:c.instructions+=2;goto B445d64;
case 0x445d67:c.instructions+=1;goto B445d67;
case 0x445d69:goto L445d69;
case 0x445d6d:c.instructions+=5;goto B445d6d;
case 0x445d73:c.instructions+=4;goto B445d73;
case 0x445d77:c.instructions+=3;goto B445d77;
case 0x445d79:c.instructions+=2;goto B445d79;
case 0x445d7c:c.instructions+=1;goto B445d7c;
case 0x445d7e:goto L445d7e;
case 0x445d80:c.instructions+=1;goto B445d80;
case 0x445d86:goto L445d86;
case 0x445d8a:c.instructions+=5;goto B445d8a;
case 0x445d8d:c.instructions+=4;goto B445d8d;
case 0x445d91:c.instructions+=3;goto B445d91;
case 0x445d92:c.instructions+=2;goto B445d92;
case 0x445d96:c.instructions+=1;goto B445d96;
case 0x445d9b:goto L445d9b;
case 0x445d9e:c.instructions+=1;goto B445d9e;
case 0x445da0:goto L445da0;
case 0x445da2:goto L445da2;
case 0x445da8:c.instructions+=1;goto B445da8;
case 0x445daa:goto L445daa;
case 0x445dad:c.instructions+=4;goto B445dad;
case 0x445db0:c.instructions+=3;goto B445db0;
case 0x445db5:c.instructions+=2;goto B445db5;
case 0x445db6:c.instructions+=1;goto B445db6;
case 0x445dbb:goto L445dbb;
case 0x445dbe:c.instructions+=15;goto B445dbe;
case 0x445dc1:c.instructions+=14;goto B445dc1;
case 0x445dc4:c.instructions+=13;goto B445dc4;
case 0x445dc8:c.instructions+=12;goto B445dc8;
case 0x445dcb:c.instructions+=11;goto B445dcb;
case 0x445dcd:c.instructions+=10;goto B445dcd;
case 0x445dd0:c.instructions+=9;goto B445dd0;
case 0x445dd3:c.instructions+=8;goto B445dd3;
case 0x445dd7:c.instructions+=7;goto B445dd7;
case 0x445dda:c.instructions+=6;goto B445dda;
case 0x445ddd:c.instructions+=5;goto B445ddd;
case 0x445de0:c.instructions+=4;goto B445de0;
case 0x445de3:c.instructions+=3;goto B445de3;
case 0x445de6:c.instructions+=2;goto B445de6;
case 0x445de9:c.instructions+=1;goto B445de9;
case 0x445df0:goto L445df0;
case 0x445df1:c.instructions+=5;goto B445df1;
case 0x445df2:c.instructions+=4;goto B445df2;
case 0x445df3:c.instructions+=3;goto B445df3;
case 0x445df5:c.instructions+=2;goto B445df5;
case 0x445df6:c.instructions+=1;goto B445df6;
case 0x445e00:goto L445e00;
case 0x445e01:c.instructions+=10;goto B445e01;
case 0x445e03:c.instructions+=9;goto B445e03;
case 0x445e06:c.instructions+=8;goto B445e06;
case 0x445e09:c.instructions+=7;goto B445e09;
case 0x445e0a:c.instructions+=6;goto B445e0a;
case 0x445e0b:c.instructions+=5;goto B445e0b;
case 0x445e0c:c.instructions+=4;goto B445e0c;
case 0x445e0e:c.instructions+=3;goto B445e0e;
case 0x445e10:c.instructions+=2;goto B445e10;
case 0x445e14:c.instructions+=1;goto B445e14;
case 0x445e17:goto L445e17;
case 0x445e19:c.instructions+=1;goto B445e19;
case 0x445e1b:goto L445e1b;
case 0x445e1e:c.instructions+=2;goto B445e1e;
case 0x445e1f:c.instructions+=1;goto B445e1f;
case 0x445e24:goto L445e24;
case 0x445e27:c.instructions+=10;goto B445e27;
case 0x445e2a:c.instructions+=9;goto B445e2a;
case 0x445e2c:c.instructions+=8;goto B445e2c;
case 0x445e2f:c.instructions+=7;goto B445e2f;
case 0x445e33:c.instructions+=6;goto B445e33;
case 0x445e37:c.instructions+=5;goto B445e37;
case 0x445e38:c.instructions+=4;goto B445e38;
case 0x445e39:c.instructions+=3;goto B445e39;
case 0x445e3d:c.instructions+=2;goto B445e3d;
case 0x445e41:c.instructions+=1;goto B445e41;
case 0x445e46:goto L445e46;
case 0x445e47:c.instructions+=5;goto B445e47;
case 0x445e4a:c.instructions+=4;goto B445e4a;
case 0x445e4d:c.instructions+=3;goto B445e4d;
case 0x445e4e:c.instructions+=2;goto B445e4e;
case 0x445e4f:c.instructions+=1;goto B445e4f;
case 0x445e54:goto L445e54;
case 0x445e55:c.instructions+=3;goto B445e55;
case 0x445e56:c.instructions+=2;goto B445e56;
case 0x445e57:c.instructions+=1;goto B445e57;
case 0x445e5c:goto L445e5c;
case 0x445e60:c.instructions+=17;goto B445e60;
case 0x445e63:c.instructions+=16;goto B445e63;
case 0x445e66:c.instructions+=15;goto B445e66;
case 0x445e69:c.instructions+=14;goto B445e69;
case 0x445e6c:c.instructions+=13;goto B445e6c;
case 0x445e6f:c.instructions+=12;goto B445e6f;
case 0x445e72:c.instructions+=11;goto B445e72;
case 0x445e74:c.instructions+=10;goto B445e74;
case 0x445e77:c.instructions+=9;goto B445e77;
case 0x445e7a:c.instructions+=8;goto B445e7a;
case 0x445e81:c.instructions+=7;goto B445e81;
case 0x445e84:c.instructions+=6;goto B445e84;
case 0x445e85:c.instructions+=5;goto B445e85;
case 0x445e86:c.instructions+=4;goto B445e86;
case 0x445e87:c.instructions+=3;goto B445e87;
case 0x445e89:c.instructions+=2;goto B445e89;
case 0x445e8a:c.instructions+=1;goto B445e8a;
case 0x445e8d:goto L445e8d;
case 0x445e90:c.instructions+=7;goto B445e90;
case 0x445e93:c.instructions+=6;goto B445e93;
case 0x445e96:c.instructions+=5;goto B445e96;
case 0x445e97:c.instructions+=4;goto B445e97;
case 0x445e9d:c.instructions+=3;goto B445e9d;
case 0x445e9e:c.instructions+=2;goto B445e9e;
case 0x445e9f:c.instructions+=1;goto B445e9f;
case 0x445ea4:goto L445ea4;
case 0x445ea7:c.instructions+=6;goto B445ea7;
case 0x445ea8:c.instructions+=5;goto B445ea8;
case 0x445ea9:c.instructions+=4;goto B445ea9;
case 0x445eaa:c.instructions+=3;goto B445eaa;
case 0x445eac:c.instructions+=2;goto B445eac;
case 0x445ead:c.instructions+=1;goto B445ead;
case 0x445eb0:goto L445eb0;
case 0x445eb1:c.instructions+=6;goto B445eb1;
case 0x445eb3:c.instructions+=5;goto B445eb3;
case 0x445eb8:c.instructions+=4;goto B445eb8;
case 0x445eba:c.instructions+=3;goto B445eba;
case 0x445ebb:c.instructions+=2;goto B445ebb;
case 0x445ebd:c.instructions+=1;goto B445ebd;
case 0x445ebf:goto L445ebf;
case 0x445ec4:c.instructions+=2;goto B445ec4;
case 0x445ec6:c.instructions+=1;goto B445ec6;
case 0x445ec8:goto L445ec8;
case 0x445ece:c.instructions+=13;goto B445ece;
case 0x445ed1:c.instructions+=12;goto B445ed1;
case 0x445ed7:c.instructions+=11;goto B445ed7;
case 0x445ede:c.instructions+=10;goto B445ede;
case 0x445ee4:c.instructions+=9;goto B445ee4;
case 0x445ee5:c.instructions+=8;goto B445ee5;
case 0x445ee7:c.instructions+=7;goto B445ee7;
case 0x445ee9:c.instructions+=6;goto B445ee9;
case 0x445eec:c.instructions+=5;goto B445eec;
case 0x445eef:c.instructions+=4;goto B445eef;
case 0x445ef2:c.instructions+=3;goto B445ef2;
case 0x445ef5:c.instructions+=2;goto B445ef5;
case 0x445ef6:c.instructions+=1;goto B445ef6;
case 0x445ef9:goto L445ef9;
case 0x445efc:c.instructions+=2;goto B445efc;
case 0x445efe:c.instructions+=1;goto B445efe;
case 0x445f00:goto L445f00;
case 0x445f03:c.instructions+=2;goto B445f03;
case 0x445f05:c.instructions+=1;goto B445f05;
case 0x445f07:goto L445f07;
case 0x445f0c:goto L445f0c;
case 0x445f0e:c.instructions+=1;goto B445f0e;
case 0x445f10:goto L445f10;
case 0x445f15:goto L445f15;
case 0x445f18:c.instructions+=20;goto B445f18;
case 0x445f1a:c.instructions+=19;goto B445f1a;
case 0x445f1c:c.instructions+=18;goto B445f1c;
case 0x445f1d:c.instructions+=17;goto B445f1d;
case 0x445f1f:c.instructions+=16;goto B445f1f;
case 0x445f22:c.instructions+=15;goto B445f22;
case 0x445f28:c.instructions+=14;goto B445f28;
case 0x445f2b:c.instructions+=13;goto B445f2b;
case 0x445f2d:c.instructions+=12;goto B445f2d;
case 0x445f30:c.instructions+=11;goto B445f30;
case 0x445f33:c.instructions+=10;goto B445f33;
case 0x445f35:c.instructions+=9;goto B445f35;
case 0x445f37:c.instructions+=8;goto B445f37;
case 0x445f3a:c.instructions+=7;goto B445f3a;
case 0x445f3b:c.instructions+=6;goto B445f3b;
case 0x445f3e:c.instructions+=5;goto B445f3e;
case 0x445f46:c.instructions+=4;goto B445f46;
case 0x445f49:c.instructions+=3;goto B445f49;
case 0x445f4c:c.instructions+=2;goto B445f4c;
case 0x445f4d:c.instructions+=1;goto B445f4d;
case 0x445f50:goto L445f50;
case 0x445f53:c.instructions+=3;goto B445f53;
case 0x445f56:c.instructions+=2;goto B445f56;
case 0x445f58:c.instructions+=1;goto B445f58;
case 0x445f5a:goto L445f5a;
case 0x445f5c:c.instructions+=1;goto B445f5c;
case 0x445f5f:goto L445f5f;
case 0x445f61:c.instructions+=1;goto B445f61;
case 0x445f63:goto L445f63;
case 0x445f69:c.instructions+=13;goto B445f69;
case 0x445f6c:c.instructions+=12;goto B445f6c;
case 0x445f72:c.instructions+=11;goto B445f72;
case 0x445f75:c.instructions+=10;goto B445f75;
case 0x445f7b:c.instructions+=9;goto B445f7b;
case 0x445f82:c.instructions+=8;goto B445f82;
case 0x445f84:c.instructions+=7;goto B445f84;
case 0x445f85:c.instructions+=6;goto B445f85;
case 0x445f87:c.instructions+=5;goto B445f87;
case 0x445f8a:c.instructions+=4;goto B445f8a;
case 0x445f8d:c.instructions+=3;goto B445f8d;
case 0x445f90:c.instructions+=2;goto B445f90;
case 0x445f91:c.instructions+=1;goto B445f91;
case 0x445f94:goto L445f94;
case 0x445f97:c.instructions+=13;goto B445f97;
case 0x445f9a:c.instructions+=12;goto B445f9a;
case 0x445f9d:c.instructions+=11;goto B445f9d;
case 0x445f9f:c.instructions+=10;goto B445f9f;
case 0x445fa2:c.instructions+=9;goto B445fa2;
case 0x445fa5:c.instructions+=8;goto B445fa5;
case 0x445fa8:c.instructions+=7;goto B445fa8;
case 0x445fab:c.instructions+=6;goto B445fab;
case 0x445faf:c.instructions+=5;goto B445faf;
case 0x445fb2:c.instructions+=4;goto B445fb2;
case 0x445fb5:c.instructions+=3;goto B445fb5;
case 0x445fb6:c.instructions+=2;goto B445fb6;
case 0x445fb7:c.instructions+=1;goto B445fb7;
case 0x445fc0:goto L445fc0;
case 0x445fc1:c.instructions+=9;goto B445fc1;
case 0x445fc3:c.instructions+=8;goto B445fc3;
case 0x445fc6:c.instructions+=7;goto B445fc6;
case 0x445fc9:c.instructions+=6;goto B445fc9;
case 0x445fca:c.instructions+=5;goto B445fca;
case 0x445fcc:c.instructions+=4;goto B445fcc;
case 0x445fcf:c.instructions+=3;goto B445fcf;
case 0x445fd2:c.instructions+=2;goto B445fd2;
case 0x445fd3:c.instructions+=1;goto B445fd3;
case 0x445fd8:goto L445fd8;
case 0x445fd9:c.instructions+=6;goto B445fd9;
case 0x445fdd:c.instructions+=5;goto B445fdd;
case 0x445fde:c.instructions+=4;goto B445fde;
case 0x445fe2:c.instructions+=3;goto B445fe2;
case 0x445fe3:c.instructions+=2;goto B445fe3;
case 0x445fe5:c.instructions+=1;goto B445fe5;
case 0x445fea:goto L445fea;
case 0x445fed:c.instructions+=7;goto B445fed;
case 0x445ff0:c.instructions+=6;goto B445ff0;
case 0x445ff1:c.instructions+=5;goto B445ff1;
case 0x445ff6:c.instructions+=4;goto B445ff6;
case 0x445ff7:c.instructions+=3;goto B445ff7;
case 0x445ffb:c.instructions+=2;goto B445ffb;
case 0x445ffc:c.instructions+=1;goto B445ffc;
default:missing_instruction(c.pc);}
B445002:L445002:{c.instructions+=171;NFSU2_TR(0x445002);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445005:{NFSU2_TR(0x445005);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445009:{NFSU2_TR(0x445009);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44500c:{NFSU2_TR(0x44500c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44500e:{NFSU2_TR(0x44500e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445012:{NFSU2_TR(0x445012);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445015:{NFSU2_TR(0x445015);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445017:{NFSU2_TR(0x445017);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44501b:{NFSU2_TR(0x44501b);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44501e:{NFSU2_TR(0x44501e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445020:{NFSU2_TR(0x445020);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445027:{NFSU2_TR(0x445027);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44502b:{NFSU2_TR(0x44502b);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44502e:{NFSU2_TR(0x44502e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445032:{NFSU2_TR(0x445032);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445035:{NFSU2_TR(0x445035);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445037:{NFSU2_TR(0x445037);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44503b:{NFSU2_TR(0x44503b);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44503e:{NFSU2_TR(0x44503e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445040:{NFSU2_TR(0x445040);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445044:{NFSU2_TR(0x445044);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445047:{NFSU2_TR(0x445047);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445049:{NFSU2_TR(0x445049);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445050:{NFSU2_TR(0x445050);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445054:{NFSU2_TR(0x445054);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445057:{NFSU2_TR(0x445057);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44505b:{NFSU2_TR(0x44505b);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44505e:{NFSU2_TR(0x44505e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445060:{NFSU2_TR(0x445060);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445064:{NFSU2_TR(0x445064);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445067:{NFSU2_TR(0x445067);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445069:{NFSU2_TR(0x445069);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44506d:{NFSU2_TR(0x44506d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44506f:{NFSU2_TR(0x44506f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445071:{NFSU2_TR(0x445071);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445078:{NFSU2_TR(0x445078);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44507c:{NFSU2_TR(0x44507c);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44507f:{NFSU2_TR(0x44507f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445083:{NFSU2_TR(0x445083);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445086:{NFSU2_TR(0x445086);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445088:{NFSU2_TR(0x445088);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44508c:{NFSU2_TR(0x44508c);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44508f:{NFSU2_TR(0x44508f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445091:{NFSU2_TR(0x445091);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445095:{NFSU2_TR(0x445095);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445098:{NFSU2_TR(0x445098);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44509a:{NFSU2_TR(0x44509a);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4450a1:{NFSU2_TR(0x4450a1);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4450a5:{NFSU2_TR(0x4450a5);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4450a8:{NFSU2_TR(0x4450a8);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4450ac:{NFSU2_TR(0x4450ac);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4450af:{NFSU2_TR(0x4450af);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4450b1:{NFSU2_TR(0x4450b1);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4450b5:{NFSU2_TR(0x4450b5);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4450b8:{NFSU2_TR(0x4450b8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4450ba:{NFSU2_TR(0x4450ba);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4450be:{NFSU2_TR(0x4450be);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4450c1:{NFSU2_TR(0x4450c1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4450c3:{NFSU2_TR(0x4450c3);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4450ca:{NFSU2_TR(0x4450ca);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4450ce:{NFSU2_TR(0x4450ce);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4450d1:{NFSU2_TR(0x4450d1);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4450d5:{NFSU2_TR(0x4450d5);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4450d8:{NFSU2_TR(0x4450d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4450da:{NFSU2_TR(0x4450da);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4450de:{NFSU2_TR(0x4450de);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4450e1:{NFSU2_TR(0x4450e1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4450e3:{NFSU2_TR(0x4450e3);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4450e7:{NFSU2_TR(0x4450e7);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4450ea:{NFSU2_TR(0x4450ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4450ec:{NFSU2_TR(0x4450ec);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4450f3:{NFSU2_TR(0x4450f3);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4450f7:{NFSU2_TR(0x4450f7);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4450fa:{NFSU2_TR(0x4450fa);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4450fe:{NFSU2_TR(0x4450fe);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445101:{NFSU2_TR(0x445101);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445103:{NFSU2_TR(0x445103);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445107:{NFSU2_TR(0x445107);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44510a:{NFSU2_TR(0x44510a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44510c:{NFSU2_TR(0x44510c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445110:{NFSU2_TR(0x445110);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445112:{NFSU2_TR(0x445112);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445114:{NFSU2_TR(0x445114);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44511b:{NFSU2_TR(0x44511b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44511f:{NFSU2_TR(0x44511f);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445122:{NFSU2_TR(0x445122);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445126:{NFSU2_TR(0x445126);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445129:{NFSU2_TR(0x445129);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44512b:{NFSU2_TR(0x44512b);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44512f:{NFSU2_TR(0x44512f);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445132:{NFSU2_TR(0x445132);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445134:{NFSU2_TR(0x445134);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445138:{NFSU2_TR(0x445138);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44513b:{NFSU2_TR(0x44513b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44513d:{NFSU2_TR(0x44513d);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445144:{NFSU2_TR(0x445144);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445148:{NFSU2_TR(0x445148);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44514b:{NFSU2_TR(0x44514b);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44514f:{NFSU2_TR(0x44514f);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445152:{NFSU2_TR(0x445152);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445154:{NFSU2_TR(0x445154);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445158:{NFSU2_TR(0x445158);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44515b:{NFSU2_TR(0x44515b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44515d:{NFSU2_TR(0x44515d);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445161:{NFSU2_TR(0x445161);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445164:{NFSU2_TR(0x445164);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445166:{NFSU2_TR(0x445166);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44516d:{NFSU2_TR(0x44516d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445171:{NFSU2_TR(0x445171);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445174:{NFSU2_TR(0x445174);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445178:{NFSU2_TR(0x445178);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44517b:{NFSU2_TR(0x44517b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44517d:{NFSU2_TR(0x44517d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445181:{NFSU2_TR(0x445181);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445184:{NFSU2_TR(0x445184);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445186:{NFSU2_TR(0x445186);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44518a:{NFSU2_TR(0x44518a);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44518d:{NFSU2_TR(0x44518d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44518f:{NFSU2_TR(0x44518f);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445196:{NFSU2_TR(0x445196);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44519a:{NFSU2_TR(0x44519a);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44519d:{NFSU2_TR(0x44519d);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4451a1:{NFSU2_TR(0x4451a1);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4451a4:{NFSU2_TR(0x4451a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4451a6:{NFSU2_TR(0x4451a6);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4451aa:{NFSU2_TR(0x4451aa);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4451ad:{NFSU2_TR(0x4451ad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4451af:{NFSU2_TR(0x4451af);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4451b3:{NFSU2_TR(0x4451b3);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4451b5:{NFSU2_TR(0x4451b5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4451b7:{NFSU2_TR(0x4451b7);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4451be:{NFSU2_TR(0x4451be);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4451c2:{NFSU2_TR(0x4451c2);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4451c5:{NFSU2_TR(0x4451c5);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4451c9:{NFSU2_TR(0x4451c9);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4451cc:{NFSU2_TR(0x4451cc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4451ce:{NFSU2_TR(0x4451ce);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4451d2:{NFSU2_TR(0x4451d2);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4451d5:{NFSU2_TR(0x4451d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4451d7:{NFSU2_TR(0x4451d7);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4451db:{NFSU2_TR(0x4451db);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4451de:{NFSU2_TR(0x4451de);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4451e0:{NFSU2_TR(0x4451e0);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4451e7:{NFSU2_TR(0x4451e7);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4451eb:{NFSU2_TR(0x4451eb);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4451ee:{NFSU2_TR(0x4451ee);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4451f2:{NFSU2_TR(0x4451f2);
u8 U[4];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4451f9:{NFSU2_TR(0x4451f9);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4451fc:{NFSU2_TR(0x4451fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4451fd:{NFSU2_TR(0x4451fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4451fe:{NFSU2_TR(0x4451fe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445200:{NFSU2_TR(0x445200);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445204:{NFSU2_TR(0x445204);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445207:{NFSU2_TR(0x445207);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445209:{NFSU2_TR(0x445209);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44520d:{NFSU2_TR(0x44520d);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445210:{NFSU2_TR(0x445210);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445212:{NFSU2_TR(0x445212);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445219:{NFSU2_TR(0x445219);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44521d:{NFSU2_TR(0x44521d);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445220:{NFSU2_TR(0x445220);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445224:{NFSU2_TR(0x445224);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445227:{NFSU2_TR(0x445227);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445229:{NFSU2_TR(0x445229);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44522d:{NFSU2_TR(0x44522d);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445230:{NFSU2_TR(0x445230);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445232:{NFSU2_TR(0x445232);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445236:{NFSU2_TR(0x445236);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445239:{NFSU2_TR(0x445239);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44523b:{NFSU2_TR(0x44523b);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445242:{NFSU2_TR(0x445242);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445247ull));
TAIL_STATIC(0x4012b0u,401);
}
B445247:L445247:{c.instructions+=2;NFSU2_TR(0x445247);
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
B44524a:{NFSU2_TR(0x44524a);
{goto L44524e;}
}
B44524c:L44524c:{c.instructions+=1;NFSU2_TR(0x44524c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44524e:L44524e:{c.instructions+=153;NFSU2_TR(0x44524e);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445255:{NFSU2_TR(0x445255);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B445257:{NFSU2_TR(0x445257);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44525e:{NFSU2_TR(0x44525e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B445260:{NFSU2_TR(0x445260);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445267:{NFSU2_TR(0x445267);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B445269:{NFSU2_TR(0x445269);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44526c:{NFSU2_TR(0x44526c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445272:{NFSU2_TR(0x445272);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445275:{NFSU2_TR(0x445275);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44527b:{NFSU2_TR(0x44527b);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B44527d:{NFSU2_TR(0x44527d);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445280:{NFSU2_TR(0x445280);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445286:{NFSU2_TR(0x445286);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44528a:{NFSU2_TR(0x44528a);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44528c:{NFSU2_TR(0x44528c);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B445290:{NFSU2_TR(0x445290);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B445292:{NFSU2_TR(0x445292);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445299:{NFSU2_TR(0x445299);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44529c:{NFSU2_TR(0x44529c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4452a2:{NFSU2_TR(0x4452a2);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4452a6:{NFSU2_TR(0x4452a6);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4452a9:{NFSU2_TR(0x4452a9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4452af:{NFSU2_TR(0x4452af);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4452b3:{NFSU2_TR(0x4452b3);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4452b6:{NFSU2_TR(0x4452b6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4452bc:{NFSU2_TR(0x4452bc);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4452c0:{NFSU2_TR(0x4452c0);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4452c3:{NFSU2_TR(0x4452c3);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4452c7:{NFSU2_TR(0x4452c7);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B4452c9:{NFSU2_TR(0x4452c9);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4452d0:{NFSU2_TR(0x4452d0);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4452d3:{NFSU2_TR(0x4452d3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4452d9:{NFSU2_TR(0x4452d9);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4452dd:{NFSU2_TR(0x4452dd);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4452e0:{NFSU2_TR(0x4452e0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4452e6:{NFSU2_TR(0x4452e6);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4452ea:{NFSU2_TR(0x4452ea);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4452ee:{NFSU2_TR(0x4452ee);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4452f1:{NFSU2_TR(0x4452f1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4452f7:{NFSU2_TR(0x4452f7);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4452fb:{NFSU2_TR(0x4452fb);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4452fe:{NFSU2_TR(0x4452fe);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B445302:{NFSU2_TR(0x445302);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B445306:{NFSU2_TR(0x445306);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44530d:{NFSU2_TR(0x44530d);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445310:{NFSU2_TR(0x445310);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445316:{NFSU2_TR(0x445316);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44531a:{NFSU2_TR(0x44531a);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44531d:{NFSU2_TR(0x44531d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445323:{NFSU2_TR(0x445323);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B445327:{NFSU2_TR(0x445327);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44532b:{NFSU2_TR(0x44532b);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44532e:{NFSU2_TR(0x44532e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445334:{NFSU2_TR(0x445334);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445338:{NFSU2_TR(0x445338);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44533b:{NFSU2_TR(0x44533b);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44533f:{NFSU2_TR(0x44533f);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B445343:{NFSU2_TR(0x445343);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44534a:{NFSU2_TR(0x44534a);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44534c:{NFSU2_TR(0x44534c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445352:{NFSU2_TR(0x445352);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445356:{NFSU2_TR(0x445356);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445359:{NFSU2_TR(0x445359);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44535d:{NFSU2_TR(0x44535d);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B44535f:{NFSU2_TR(0x44535f);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445366:{NFSU2_TR(0x445366);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445369:{NFSU2_TR(0x445369);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44536f:{NFSU2_TR(0x44536f);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445373:{NFSU2_TR(0x445373);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445376:{NFSU2_TR(0x445376);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44537a:{NFSU2_TR(0x44537a);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B44537c:{NFSU2_TR(0x44537c);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445383:{NFSU2_TR(0x445383);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B445385:{NFSU2_TR(0x445385);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B445387:{NFSU2_TR(0x445387);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44538a:{NFSU2_TR(0x44538a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445390:{NFSU2_TR(0x445390);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445393:{NFSU2_TR(0x445393);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B445395:{NFSU2_TR(0x445395);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B445399:{NFSU2_TR(0x445399);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4453a0:{NFSU2_TR(0x4453a0);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4453a3:{NFSU2_TR(0x4453a3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4453a9:{NFSU2_TR(0x4453a9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4453ad:{NFSU2_TR(0x4453ad);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4453b0:{NFSU2_TR(0x4453b0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4453b4:{NFSU2_TR(0x4453b4);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4453b8:{NFSU2_TR(0x4453b8);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4453bf:{NFSU2_TR(0x4453bf);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4453c2:{NFSU2_TR(0x4453c2);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4453c6:{NFSU2_TR(0x4453c6);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4453ca:{NFSU2_TR(0x4453ca);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B4453cc:{NFSU2_TR(0x4453cc);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4453d3:{NFSU2_TR(0x4453d3);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4453d6:{NFSU2_TR(0x4453d6);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4453da:{NFSU2_TR(0x4453da);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4453de:{NFSU2_TR(0x4453de);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4453e2:{NFSU2_TR(0x4453e2);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4453e9:{NFSU2_TR(0x4453e9);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4453ec:{NFSU2_TR(0x4453ec);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B4453ee:{NFSU2_TR(0x4453ee);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4453f2:{NFSU2_TR(0x4453f2);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4453f6:{NFSU2_TR(0x4453f6);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4453fd:{NFSU2_TR(0x4453fd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4453ff:{NFSU2_TR(0x4453ff);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B445401:{NFSU2_TR(0x445401);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445404:{NFSU2_TR(0x445404);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B445408:{NFSU2_TR(0x445408);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44540c:{NFSU2_TR(0x44540c);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B445410:{NFSU2_TR(0x445410);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445417:{NFSU2_TR(0x445417);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B445419:{NFSU2_TR(0x445419);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44541c:{NFSU2_TR(0x44541c);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B44541e:{NFSU2_TR(0x44541e);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445421:{NFSU2_TR(0x445421);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445423:{NFSU2_TR(0x445423);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B445425:{NFSU2_TR(0x445425);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445427:{NFSU2_TR(0x445427);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445429:{NFSU2_TR(0x445429);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44542c:{NFSU2_TR(0x44542c);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445433:{NFSU2_TR(0x445433);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B445435:{NFSU2_TR(0x445435);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445438:{NFSU2_TR(0x445438);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B44543a:{NFSU2_TR(0x44543a);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44543d:{NFSU2_TR(0x44543d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44543f:{NFSU2_TR(0x44543f);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B445441:{NFSU2_TR(0x445441);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445444:{NFSU2_TR(0x445444);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445446:{NFSU2_TR(0x445446);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B445449:{NFSU2_TR(0x445449);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445450:{NFSU2_TR(0x445450);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B445452:{NFSU2_TR(0x445452);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445455:{NFSU2_TR(0x445455);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B445457:{NFSU2_TR(0x445457);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44545a:{NFSU2_TR(0x44545a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44545c:{NFSU2_TR(0x44545c);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B44545e:{NFSU2_TR(0x44545e);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445461:{NFSU2_TR(0x445461);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B445468:{NFSU2_TR(0x445468);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445469:{NFSU2_TR(0x445469);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44546a:{NFSU2_TR(0x44546a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44546c:{NFSU2_TR(0x44546c);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44546f:{NFSU2_TR(0x44546f);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445476:{NFSU2_TR(0x445476);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B445478:{NFSU2_TR(0x445478);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44547b:{NFSU2_TR(0x44547b);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B44547d:{NFSU2_TR(0x44547d);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445480:{NFSU2_TR(0x445480);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B445482:{NFSU2_TR(0x445482);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445485:{NFSU2_TR(0x445485);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445487:{NFSU2_TR(0x445487);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44548a:{NFSU2_TR(0x44548a);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445491:{NFSU2_TR(0x445491);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445496ull));
TAIL_STATIC(0x4012b0u,401);
}
B445496:L445496:{c.instructions+=6;NFSU2_TR(0x445496);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B445499:{NFSU2_TR(0x445499);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44549a:{NFSU2_TR(0x44549a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44549b:{NFSU2_TR(0x44549b);
__builtin_memmove((R+16),(R+20),4);
}
B44549d:{NFSU2_TR(0x44549d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44549e:{NFSU2_TR(0x44549e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4454a0:L4454a0:{c.instructions+=3;NFSU2_TR(0x4454a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4454a3:{NFSU2_TR(0x4454a3);
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
B4454a5:{NFSU2_TR(0x4454a5);
if(r1(R+518)){{goto L4454ae;}}
}
B4454a7:L4454a7:{c.instructions+=1;NFSU2_TR(0x4454a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4454ae:L4454ae:{c.instructions+=1;NFSU2_TR(0x4454ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4454c0:L4454c0:{c.instructions+=3;NFSU2_TR(0x4454c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4454c3:{NFSU2_TR(0x4454c3);
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
B4454c5:{NFSU2_TR(0x4454c5);
if(r1(R+518)){{goto L4454d8;}}
}
B4454c7:L4454c7:{c.instructions+=3;NFSU2_TR(0x4454c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4454cb:{NFSU2_TR(0x4454cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4454d2:{NFSU2_TR(0x4454d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4454d8:L4454d8:{c.instructions+=1;NFSU2_TR(0x4454d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4454e0:L4454e0:{c.instructions+=3;NFSU2_TR(0x4454e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4454e3:{NFSU2_TR(0x4454e3);
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
B4454e5:{NFSU2_TR(0x4454e5);
if(r1(R+518)){{goto L4454f8;}}
}
B4454e7:L4454e7:{c.instructions+=3;NFSU2_TR(0x4454e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4454eb:{NFSU2_TR(0x4454eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4454f2:{NFSU2_TR(0x4454f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4454f8:L4454f8:{c.instructions+=1;NFSU2_TR(0x4454f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B445500:L445500:{c.instructions+=41;NFSU2_TR(0x445500);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445504:{NFSU2_TR(0x445504);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B445508:{NFSU2_TR(0x445508);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44550b:{NFSU2_TR(0x44550b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44550f:{NFSU2_TR(0x44550f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445512:{NFSU2_TR(0x445512);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B445516:{NFSU2_TR(0x445516);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445519:{NFSU2_TR(0x445519);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44551d:{NFSU2_TR(0x44551d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445520:{NFSU2_TR(0x445520);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B445524:{NFSU2_TR(0x445524);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445527:{NFSU2_TR(0x445527);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44552b:{NFSU2_TR(0x44552b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44552e:{NFSU2_TR(0x44552e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B445532:{NFSU2_TR(0x445532);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445535:{NFSU2_TR(0x445535);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445539:{NFSU2_TR(0x445539);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44553c:{NFSU2_TR(0x44553c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44553f:{NFSU2_TR(0x44553f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B445542:{NFSU2_TR(0x445542);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445548:{NFSU2_TR(0x445548);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44554b:{NFSU2_TR(0x44554b);
{u32 ea_=u32(r4(R+4)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44554e:{NFSU2_TR(0x44554e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445551:{NFSU2_TR(0x445551);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445557:{NFSU2_TR(0x445557);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B445559:{NFSU2_TR(0x445559);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44555f:{NFSU2_TR(0x44555f);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445565:{NFSU2_TR(0x445565);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B445568:{NFSU2_TR(0x445568);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44556b:{NFSU2_TR(0x44556b);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44556e:{NFSU2_TR(0x44556e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445574:{NFSU2_TR(0x445574);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B445576:{NFSU2_TR(0x445576);
{u32 ea_=u32(r4(R+4)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44557c:{NFSU2_TR(0x44557c);
{u32 ea_=u32(r4(R+4)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445582:{NFSU2_TR(0x445582);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445585:{NFSU2_TR(0x445585);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44558b:{NFSU2_TR(0x44558b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44558e:{NFSU2_TR(0x44558e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445594:{NFSU2_TR(0x445594);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445597:{NFSU2_TR(0x445597);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44559d:{NFSU2_TR(0x44559d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4455a0:L4455a0:{c.instructions+=6;NFSU2_TR(0x4455a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4455a4:{NFSU2_TR(0x4455a4);
__builtin_memmove((R+8),(R+0),4);
}
B4455a6:{NFSU2_TR(0x4455a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4455ac:{NFSU2_TR(0x4455ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4455b2:{NFSU2_TR(0x4455b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4455b8:{NFSU2_TR(0x4455b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4455c0:L4455c0:{c.instructions+=2;NFSU2_TR(0x4455c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4455ca:{NFSU2_TR(0x4455ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4455d0:L4455d0:{c.instructions+=12;NFSU2_TR(0x4455d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4455d1:{NFSU2_TR(0x4455d1);
__builtin_memmove((R+20),(R+16),4);
}
B4455d3:{NFSU2_TR(0x4455d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4455d6:{NFSU2_TR(0x4455d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4455d9:{NFSU2_TR(0x4455d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4455da:{NFSU2_TR(0x4455da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4455dd:{NFSU2_TR(0x4455dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4455de:{NFSU2_TR(0x4455de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4455e1:{NFSU2_TR(0x4455e1);
u8 U[4];
w4(U+0,u32(0x3a83126full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4455e6:{NFSU2_TR(0x4455e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4455e7:{NFSU2_TR(0x4455e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4455e8:{NFSU2_TR(0x4455e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4455edull));
TAIL_STATIC(0x43d190u,43d);
}
B4455ed:L4455ed:{c.instructions+=3;NFSU2_TR(0x4455ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4455f0:{NFSU2_TR(0x4455f0);
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
B4455f2:{NFSU2_TR(0x4455f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L445637;}}
}
B4455f4:L4455f4:{c.instructions+=5;NFSU2_TR(0x4455f4);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4455f7:{NFSU2_TR(0x4455f7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4455fd:{NFSU2_TR(0x4455fd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4455ff:{NFSU2_TR(0x4455ff);
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
B445602:{NFSU2_TR(0x445602);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L445637;}}
}
B445604:L445604:{c.instructions+=24;NFSU2_TR(0x445604);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445606:{NFSU2_TR(0x445606);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B445608:{NFSU2_TR(0x445608);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44560b:{NFSU2_TR(0x44560b);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44560e:{NFSU2_TR(0x44560e);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445611:{NFSU2_TR(0x445611);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B445614:{NFSU2_TR(0x445614);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B445616:{NFSU2_TR(0x445616);
__asm__ volatile(".byte 0xde,0xcb":::"memory");
}
B445618:{NFSU2_TR(0x445618);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B44561a:{NFSU2_TR(0x44561a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B44561c:{NFSU2_TR(0x44561c);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B44561e:{NFSU2_TR(0x44561e);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B445620:{NFSU2_TR(0x445620);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B445622:{NFSU2_TR(0x445622);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B445624:{NFSU2_TR(0x445624);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B445626:{NFSU2_TR(0x445626);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B445628:{NFSU2_TR(0x445628);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B44562a:{NFSU2_TR(0x44562a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44562c:{NFSU2_TR(0x44562c);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B44562f:{NFSU2_TR(0x44562f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B445630:{NFSU2_TR(0x445630);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B445631:{NFSU2_TR(0x445631);
__builtin_memmove((R+16),(R+20),4);
}
B445633:{NFSU2_TR(0x445633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B445634:{NFSU2_TR(0x445634);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B445637:L445637:{c.instructions+=6;NFSU2_TR(0x445637);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44563d:{NFSU2_TR(0x44563d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44563e:{NFSU2_TR(0x44563e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44563f:{NFSU2_TR(0x44563f);
__builtin_memmove((R+16),(R+20),4);
}
B445641:{NFSU2_TR(0x445641);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B445642:{NFSU2_TR(0x445642);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B445650:L445650:{c.instructions+=5;NFSU2_TR(0x445650);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445651:{NFSU2_TR(0x445651);
__builtin_memmove((R+24),(R+4),4);
}
B445653:{NFSU2_TR(0x445653);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445656:{NFSU2_TR(0x445656);
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
B445658:{NFSU2_TR(0x445658);
if(r1(R+518)){{goto L44574a;}}
}
B44565e:L44565e:{c.instructions+=4;NFSU2_TR(0x44565e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445661:{NFSU2_TR(0x445661);
u8 U[4];
w4(U+0,u32(0x56ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445663:{NFSU2_TR(0x445663);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445664:{NFSU2_TR(0x445664);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445669ull));
TAIL_STATIC(0x57c330u,57c);
}
B445669:L445669:{c.instructions+=4;NFSU2_TR(0x445669);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44566c:{NFSU2_TR(0x44566c);
u8 U[4];
w4(U+0,u32(0x57ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44566e:{NFSU2_TR(0x44566e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44566f:{NFSU2_TR(0x44566f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445674ull));
TAIL_STATIC(0x57c330u,57c);
}
B445674:L445674:{c.instructions+=4;NFSU2_TR(0x445674);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B445677:{NFSU2_TR(0x445677);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445679:{NFSU2_TR(0x445679);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44567a:{NFSU2_TR(0x44567a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44567full));
TAIL_STATIC(0x57c330u,57c);
}
B44567f:L44567f:{c.instructions+=4;NFSU2_TR(0x44567f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445682:{NFSU2_TR(0x445682);
u8 U[4];
w4(U+0,u32(0x59ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445684:{NFSU2_TR(0x445684);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445685:{NFSU2_TR(0x445685);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44568aull));
TAIL_STATIC(0x57c330u,57c);
}
B44568a:L44568a:{c.instructions+=4;NFSU2_TR(0x44568a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44568d:{NFSU2_TR(0x44568d);
u8 U[4];
w4(U+0,u32(0x5aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44568f:{NFSU2_TR(0x44568f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445690:{NFSU2_TR(0x445690);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445695ull));
TAIL_STATIC(0x57c330u,57c);
}
B445695:L445695:{c.instructions+=4;NFSU2_TR(0x445695);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B445698:{NFSU2_TR(0x445698);
u8 U[4];
w4(U+0,u32(0x5bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44569a:{NFSU2_TR(0x44569a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44569b:{NFSU2_TR(0x44569b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4456a0ull));
TAIL_STATIC(0x57c330u,57c);
}
B4456a0:L4456a0:{c.instructions+=4;NFSU2_TR(0x4456a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4456a3:{NFSU2_TR(0x4456a3);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4456a5:{NFSU2_TR(0x4456a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4456a6:{NFSU2_TR(0x4456a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4456abull));
TAIL_STATIC(0x57c330u,57c);
}
B4456ab:L4456ab:{c.instructions+=4;NFSU2_TR(0x4456ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4456ae:{NFSU2_TR(0x4456ae);
u8 U[4];
w4(U+0,u32(0x5dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4456b0:{NFSU2_TR(0x4456b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4456b1:{NFSU2_TR(0x4456b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4456b6ull));
TAIL_STATIC(0x57c330u,57c);
}
B4456b6:L4456b6:{c.instructions+=5;NFSU2_TR(0x4456b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4456b9:{NFSU2_TR(0x4456b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4456bc:{NFSU2_TR(0x4456bc);
u8 U[4];
w4(U+0,u32(0x5eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4456be:{NFSU2_TR(0x4456be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4456bf:{NFSU2_TR(0x4456bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4456c4ull));
TAIL_STATIC(0x57c330u,57c);
}
B4456c4:L4456c4:{c.instructions+=4;NFSU2_TR(0x4456c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4456c7:{NFSU2_TR(0x4456c7);
u8 U[4];
w4(U+0,u32(0x5full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4456c9:{NFSU2_TR(0x4456c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4456ca:{NFSU2_TR(0x4456ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4456cfull));
TAIL_STATIC(0x57c330u,57c);
}
B4456cf:L4456cf:{c.instructions+=4;NFSU2_TR(0x4456cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4456d2:{NFSU2_TR(0x4456d2);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4456d4:{NFSU2_TR(0x4456d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4456d5:{NFSU2_TR(0x4456d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4456daull));
TAIL_STATIC(0x57c330u,57c);
}
B4456da:L4456da:{c.instructions+=4;NFSU2_TR(0x4456da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4456dd:{NFSU2_TR(0x4456dd);
u8 U[4];
w4(U+0,u32(0x61ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4456df:{NFSU2_TR(0x4456df);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4456e0:{NFSU2_TR(0x4456e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4456e5ull));
TAIL_STATIC(0x57c330u,57c);
}
B4456e5:L4456e5:{c.instructions+=4;NFSU2_TR(0x4456e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4456e8:{NFSU2_TR(0x4456e8);
u8 U[4];
w4(U+0,u32(0x62ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4456ea:{NFSU2_TR(0x4456ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4456eb:{NFSU2_TR(0x4456eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4456f0ull));
TAIL_STATIC(0x57c330u,57c);
}
B4456f0:L4456f0:{c.instructions+=4;NFSU2_TR(0x4456f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4456f3:{NFSU2_TR(0x4456f3);
u8 U[4];
w4(U+0,u32(0x63ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4456f5:{NFSU2_TR(0x4456f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4456f6:{NFSU2_TR(0x4456f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4456fbull));
TAIL_STATIC(0x57c330u,57c);
}
B4456fb:L4456fb:{c.instructions+=4;NFSU2_TR(0x4456fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4456fe:{NFSU2_TR(0x4456fe);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445700:{NFSU2_TR(0x445700);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445701:{NFSU2_TR(0x445701);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445706ull));
TAIL_STATIC(0x57c330u,57c);
}
B445706:L445706:{c.instructions+=4;NFSU2_TR(0x445706);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445709:{NFSU2_TR(0x445709);
u8 U[4];
w4(U+0,u32(0x65ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44570b:{NFSU2_TR(0x44570b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44570c:{NFSU2_TR(0x44570c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445711ull));
TAIL_STATIC(0x57c330u,57c);
}
B445711:L445711:{c.instructions+=5;NFSU2_TR(0x445711);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B445714:{NFSU2_TR(0x445714);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B445717:{NFSU2_TR(0x445717);
u8 U[4];
w4(U+0,u32(0x66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445719:{NFSU2_TR(0x445719);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44571a:{NFSU2_TR(0x44571a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44571full));
TAIL_STATIC(0x57c330u,57c);
}
B44571f:L44571f:{c.instructions+=4;NFSU2_TR(0x44571f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B445722:{NFSU2_TR(0x445722);
u8 U[4];
w4(U+0,u32(0x67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445724:{NFSU2_TR(0x445724);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445725:{NFSU2_TR(0x445725);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44572aull));
TAIL_STATIC(0x57c330u,57c);
}
B44572a:L44572a:{c.instructions+=4;NFSU2_TR(0x44572a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44572d:{NFSU2_TR(0x44572d);
u8 U[4];
w4(U+0,u32(0x68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44572f:{NFSU2_TR(0x44572f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445730:{NFSU2_TR(0x445730);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445735ull));
TAIL_STATIC(0x57c330u,57c);
}
B445735:L445735:{c.instructions+=4;NFSU2_TR(0x445735);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B445738:{NFSU2_TR(0x445738);
u8 U[4];
w4(U+0,u32(0x69ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44573a:{NFSU2_TR(0x44573a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44573b:{NFSU2_TR(0x44573b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445740ull));
TAIL_STATIC(0x57c330u,57c);
}
B445740:L445740:{c.instructions+=2;NFSU2_TR(0x445740);
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
B445743:{NFSU2_TR(0x445743);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44574a:L44574a:{c.instructions+=2;NFSU2_TR(0x44574a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44574b:{NFSU2_TR(0x44574b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B445750:L445750:{c.instructions+=138;NFSU2_TR(0x445750);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445751:{NFSU2_TR(0x445751);
__builtin_memmove((R+20),(R+16),4);
}
B445753:{NFSU2_TR(0x445753);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B445756:{NFSU2_TR(0x445756);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xb4ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xb4ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xb4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44575c:{NFSU2_TR(0x44575c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44575f:{NFSU2_TR(0x44575f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445765:{NFSU2_TR(0x445765);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B445768:{NFSU2_TR(0x445768);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445769:{NFSU2_TR(0x445769);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44576a:{NFSU2_TR(0x44576a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B44576d:{NFSU2_TR(0x44576d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B445771:{NFSU2_TR(0x445771);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445772:{NFSU2_TR(0x445772);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445775:{NFSU2_TR(0x445775);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B445778:{NFSU2_TR(0x445778);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44577b:{NFSU2_TR(0x44577b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44577e:{NFSU2_TR(0x44577e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445780:{NFSU2_TR(0x445780);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445784:{NFSU2_TR(0x445784);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445787:{NFSU2_TR(0x445787);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44578a:{NFSU2_TR(0x44578a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44578d:{NFSU2_TR(0x44578d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44578f:{NFSU2_TR(0x44578f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445793:{NFSU2_TR(0x445793);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445796:{NFSU2_TR(0x445796);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445799:{NFSU2_TR(0x445799);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44579c:{NFSU2_TR(0x44579c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44579e:{NFSU2_TR(0x44579e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4457a2:{NFSU2_TR(0x4457a2);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4457a5:{NFSU2_TR(0x4457a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4457a9:{NFSU2_TR(0x4457a9);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4457ab:{NFSU2_TR(0x4457ab);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4457af:{NFSU2_TR(0x4457af);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4457b1:{NFSU2_TR(0x4457b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4457b4:{NFSU2_TR(0x4457b4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4457b6:{NFSU2_TR(0x4457b6);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4457b8:{NFSU2_TR(0x4457b8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4457ba:{NFSU2_TR(0x4457ba);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4457bd:{NFSU2_TR(0x4457bd);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4457c0:{NFSU2_TR(0x4457c0);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4457c3:{NFSU2_TR(0x4457c3);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4457c6:{NFSU2_TR(0x4457c6);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4457ca:{NFSU2_TR(0x4457ca);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4457cd:{NFSU2_TR(0x4457cd);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4457d0:{NFSU2_TR(0x4457d0);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4457d4:{NFSU2_TR(0x4457d4);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4457d7:{NFSU2_TR(0x4457d7);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4457da:{NFSU2_TR(0x4457da);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4457de:{NFSU2_TR(0x4457de);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4457e1:{NFSU2_TR(0x4457e1);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4457e4:{NFSU2_TR(0x4457e4);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4457e8:{NFSU2_TR(0x4457e8);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4457eb:{NFSU2_TR(0x4457eb);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4457ee:{NFSU2_TR(0x4457ee);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4457f2:{NFSU2_TR(0x4457f2);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4457f5:{NFSU2_TR(0x4457f5);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4457f8:{NFSU2_TR(0x4457f8);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4457fc:{NFSU2_TR(0x4457fc);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4457ff:{NFSU2_TR(0x4457ff);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445802:{NFSU2_TR(0x445802);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445809:{NFSU2_TR(0x445809);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44580c:{NFSU2_TR(0x44580c);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44580f:{NFSU2_TR(0x44580f);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445816:{NFSU2_TR(0x445816);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445819:{NFSU2_TR(0x445819);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44581c:{NFSU2_TR(0x44581c);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445823:{NFSU2_TR(0x445823);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445826:{NFSU2_TR(0x445826);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445829:{NFSU2_TR(0x445829);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44582d:{NFSU2_TR(0x44582d);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445830:{NFSU2_TR(0x445830);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445833:{NFSU2_TR(0x445833);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445837:{NFSU2_TR(0x445837);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44583a:{NFSU2_TR(0x44583a);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44583d:{NFSU2_TR(0x44583d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445841:{NFSU2_TR(0x445841);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445844:{NFSU2_TR(0x445844);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445847:{NFSU2_TR(0x445847);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B44584b:{NFSU2_TR(0x44584b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44584c:{NFSU2_TR(0x44584c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B44584f:{NFSU2_TR(0x44584f);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445856:{NFSU2_TR(0x445856);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445857:{NFSU2_TR(0x445857);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44585a:{NFSU2_TR(0x44585a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44585d:{NFSU2_TR(0x44585d);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445860:{NFSU2_TR(0x445860);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445867:{NFSU2_TR(0x445867);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44586a:{NFSU2_TR(0x44586a);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44586d:{NFSU2_TR(0x44586d);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445874:{NFSU2_TR(0x445874);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445877:{NFSU2_TR(0x445877);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44587a:{NFSU2_TR(0x44587a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44587e:{NFSU2_TR(0x44587e);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445881:{NFSU2_TR(0x445881);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445884:{NFSU2_TR(0x445884);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445888:{NFSU2_TR(0x445888);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44588b:{NFSU2_TR(0x44588b);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44588e:{NFSU2_TR(0x44588e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445892:{NFSU2_TR(0x445892);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445895:{NFSU2_TR(0x445895);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445898:{NFSU2_TR(0x445898);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44589c:{NFSU2_TR(0x44589c);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44589f:{NFSU2_TR(0x44589f);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4458a2:{NFSU2_TR(0x4458a2);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4458a6:{NFSU2_TR(0x4458a6);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4458a9:{NFSU2_TR(0x4458a9);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4458ac:{NFSU2_TR(0x4458ac);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4458b0:{NFSU2_TR(0x4458b0);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4458b3:{NFSU2_TR(0x4458b3);
{u32 ea_=u32(r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4458b9:{NFSU2_TR(0x4458b9);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4458bd:{NFSU2_TR(0x4458bd);
{u32 ea_=u32(r4(R+0)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4458c3:{NFSU2_TR(0x4458c3);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4458c6:{NFSU2_TR(0x4458c6);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4458ca:{NFSU2_TR(0x4458ca);
{u32 ea_=u32(r4(R+0)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4458d0:{NFSU2_TR(0x4458d0);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4458d3:{NFSU2_TR(0x4458d3);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4458da:{NFSU2_TR(0x4458da);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4458dd:{NFSU2_TR(0x4458dd);
{u32 ea_=u32(r4(R+0)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4458e3:{NFSU2_TR(0x4458e3);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4458ea:{NFSU2_TR(0x4458ea);
{u32 ea_=u32(r4(R+0)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4458f0:{NFSU2_TR(0x4458f0);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4458f3:{NFSU2_TR(0x4458f3);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4458fa:{NFSU2_TR(0x4458fa);
{u32 ea_=u32(r4(R+0)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445900:{NFSU2_TR(0x445900);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445903:{NFSU2_TR(0x445903);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44590a:{NFSU2_TR(0x44590a);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44590d:{NFSU2_TR(0x44590d);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445913:{NFSU2_TR(0x445913);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44591a:{NFSU2_TR(0x44591a);
{u32 ea_=u32(r4(R+0)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445920:{NFSU2_TR(0x445920);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445923:{NFSU2_TR(0x445923);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44592a:{NFSU2_TR(0x44592a);
{u32 ea_=u32(r4(R+0)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445930:{NFSU2_TR(0x445930);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B445934:{NFSU2_TR(0x445934);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445937:{NFSU2_TR(0x445937);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445938:{NFSU2_TR(0x445938);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445939:{NFSU2_TR(0x445939);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445940:{NFSU2_TR(0x445940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445945ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B445945:L445945:{c.instructions+=8;NFSU2_TR(0x445945);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445946:{NFSU2_TR(0x445946);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B445949:{NFSU2_TR(0x445949);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44594a:{NFSU2_TR(0x44594a);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44594e:{NFSU2_TR(0x44594e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44594f:{NFSU2_TR(0x44594f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B445952:{NFSU2_TR(0x445952);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445953:{NFSU2_TR(0x445953);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445958ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B445958:L445958:{c.instructions+=8;NFSU2_TR(0x445958);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445959:{NFSU2_TR(0x445959);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+8),(U+0),4);
}
B44595c:{NFSU2_TR(0x44595c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44595d:{NFSU2_TR(0x44595d);
u8 U[4];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B445964:{NFSU2_TR(0x445964);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445965:{NFSU2_TR(0x445965);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B445968:{NFSU2_TR(0x445968);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445969:{NFSU2_TR(0x445969);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44596eull));
TAIL_STATIC(0x43d0c0u,43d);
}
B44596e:L44596e:{c.instructions+=8;NFSU2_TR(0x44596e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44596f:{NFSU2_TR(0x44596f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B445972:{NFSU2_TR(0x445972);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445973:{NFSU2_TR(0x445973);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B445977:{NFSU2_TR(0x445977);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445978:{NFSU2_TR(0x445978);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44597b:{NFSU2_TR(0x44597b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44597c:{NFSU2_TR(0x44597c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445981ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B445981:L445981:{c.instructions+=9;NFSU2_TR(0x445981);
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
B445984:{NFSU2_TR(0x445984);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445985:{NFSU2_TR(0x445985);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+8),(U+0),4);
}
B445988:{NFSU2_TR(0x445988);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445989:{NFSU2_TR(0x445989);
u8 U[4];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B445990:{NFSU2_TR(0x445990);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445991:{NFSU2_TR(0x445991);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B445994:{NFSU2_TR(0x445994);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445995:{NFSU2_TR(0x445995);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44599aull));
TAIL_STATIC(0x43d0c0u,43d);
}
B44599a:L44599a:{c.instructions+=8;NFSU2_TR(0x44599a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44599b:{NFSU2_TR(0x44599b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B44599e:{NFSU2_TR(0x44599e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44599f:{NFSU2_TR(0x44599f);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4459a3:{NFSU2_TR(0x4459a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4459a4:{NFSU2_TR(0x4459a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4459a7:{NFSU2_TR(0x4459a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4459a8:{NFSU2_TR(0x4459a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4459adull));
TAIL_STATIC(0x43d0c0u,43d);
}
B4459ad:L4459ad:{c.instructions+=8;NFSU2_TR(0x4459ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4459ae:{NFSU2_TR(0x4459ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4459b1:{NFSU2_TR(0x4459b1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4459b2:{NFSU2_TR(0x4459b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4459b6:{NFSU2_TR(0x4459b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4459b7:{NFSU2_TR(0x4459b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4459ba:{NFSU2_TR(0x4459ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4459bb:{NFSU2_TR(0x4459bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4459c0ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B4459c0:L4459c0:{c.instructions+=8;NFSU2_TR(0x4459c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4459c1:{NFSU2_TR(0x4459c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4459c7:{NFSU2_TR(0x4459c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4459c8:{NFSU2_TR(0x4459c8);
u8 U[4];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4459cf:{NFSU2_TR(0x4459cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4459d0:{NFSU2_TR(0x4459d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4459d6:{NFSU2_TR(0x4459d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4459d7:{NFSU2_TR(0x4459d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4459dcull));
TAIL_STATIC(0x43d0c0u,43d);
}
B4459dc:L4459dc:{c.instructions+=9;NFSU2_TR(0x4459dc);
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
B4459df:{NFSU2_TR(0x4459df);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4459e0:{NFSU2_TR(0x4459e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4459e6:{NFSU2_TR(0x4459e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4459e7:{NFSU2_TR(0x4459e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4459ee:{NFSU2_TR(0x4459ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4459ef:{NFSU2_TR(0x4459ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4459f5:{NFSU2_TR(0x4459f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4459f6:{NFSU2_TR(0x4459f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4459fbull));
TAIL_STATIC(0x43d0c0u,43d);
}
B4459fb:L4459fb:{c.instructions+=8;NFSU2_TR(0x4459fb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4459fc:{NFSU2_TR(0x4459fc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
}
B445a02:{NFSU2_TR(0x445a02);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445a03:{NFSU2_TR(0x445a03);
u8 U[4];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B445a0a:{NFSU2_TR(0x445a0a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445a0b:{NFSU2_TR(0x445a0b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0xa0ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0xa0ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xa0ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B445a11:{NFSU2_TR(0x445a11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445a12:{NFSU2_TR(0x445a12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445a17ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B445a17:L445a17:{c.instructions+=7;NFSU2_TR(0x445a17);
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
B445a1a:{NFSU2_TR(0x445a1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B445a1b:{NFSU2_TR(0x445a1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B445a1c:{NFSU2_TR(0x445a1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B445a1d:{NFSU2_TR(0x445a1d);
__builtin_memmove((R+16),(R+20),4);
}
B445a1f:{NFSU2_TR(0x445a1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B445a20:{NFSU2_TR(0x445a20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B445a30:L445a30:{c.instructions+=7;NFSU2_TR(0x445a30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445a31:{NFSU2_TR(0x445a31);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B445a35:{NFSU2_TR(0x445a35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445a36:{NFSU2_TR(0x445a36);
__builtin_memmove((R+24),(R+4),4);
}
B445a38:{NFSU2_TR(0x445a38);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B445a3b:{NFSU2_TR(0x445a3b);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+12))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B445a3d:{NFSU2_TR(0x445a3d);
if(r1(R+518)){{goto L445a44;}}
}
B445a3f:L445a3f:{c.instructions+=1;NFSU2_TR(0x445a3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445a44ull));
TAIL_STATIC(0x5d7ae0u,5d7);
}
B445a44:L445a44:{c.instructions+=4;NFSU2_TR(0x445a44);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B445a47:{NFSU2_TR(0x445a47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B445a48:{NFSU2_TR(0x445a48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B445a49:{NFSU2_TR(0x445a49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B445a50:L445a50:{c.instructions+=3;NFSU2_TR(0x445a50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445a51:{NFSU2_TR(0x445a51);
__builtin_memmove((R+24),(R+4),4);
}
B445a53:{NFSU2_TR(0x445a53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445a58ull));
TAIL_STATIC(0x444040u,444);
}
B445a58:L445a58:{c.instructions+=3;NFSU2_TR(0x445a58);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B445a5c:{NFSU2_TR(0x445a5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B445a5d:{NFSU2_TR(0x445a5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B445a60:L445a60:{c.instructions+=3;NFSU2_TR(0x445a60);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x51ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B445a63:{NFSU2_TR(0x445a63);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B445a65:{NFSU2_TR(0x445a65);
if(r1(R+518)){{goto L445a7e;}}
}
B445a67:L445a67:{c.instructions+=3;NFSU2_TR(0x445a67);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B445a6a:{NFSU2_TR(0x445a6a);
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
B445a6c:{NFSU2_TR(0x445a6c);
if(r1(R+518)){{goto L445a7e;}}
}
B445a6e:L445a6e:{c.instructions+=1;NFSU2_TR(0x445a6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445a73ull));
TAIL_STATIC(0x5eb520u,5eb);
}
B445a73:L445a73:{c.instructions+=2;NFSU2_TR(0x445a73);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B445a75:{NFSU2_TR(0x445a75);
if(r1(R+518)){{goto L445a7e;}}
}
B445a77:L445a77:{c.instructions+=2;NFSU2_TR(0x445a77);
{u32 ea_=u32(u32(7893140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445a7d:{NFSU2_TR(0x445a7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B445a7e:L445a7e:{c.instructions+=2;NFSU2_TR(0x445a7e);
{u32 ea_=u32(u32(7893136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445a84:{NFSU2_TR(0x445a84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B445a90:L445a90:{c.instructions+=4;NFSU2_TR(0x445a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445a93:{NFSU2_TR(0x445a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B445a96:{NFSU2_TR(0x445a96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445a97:{NFSU2_TR(0x445a97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445a9cull));
TAIL_STATIC(0x5ecca0u,5ec);
}
B445a9c:L445a9c:{c.instructions+=3;NFSU2_TR(0x445a9c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+0),(U+0),2);
}
B445a9f:{NFSU2_TR(0x445a9f);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0x1ull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0x1ull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0x1ull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B445aa3:{NFSU2_TR(0x445aa3);
if(r1(R+518)){{goto L445ab3;}}
}
B445aa5:L445aa5:{c.instructions+=2;NFSU2_TR(0x445aa5);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B445aa8:{NFSU2_TR(0x445aa8);
if(r1(R+518)){{goto L445ab3;}}
}
B445aaa:L445aaa:{c.instructions+=2;NFSU2_TR(0x445aaa);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0x5ull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0x5ull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0x5ull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B445aae:{NFSU2_TR(0x445aae);
if(r1(R+518)){{goto L445ab3;}}
}
B445ab0:L445ab0:{c.instructions+=2;NFSU2_TR(0x445ab0);
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
B445ab2:{NFSU2_TR(0x445ab2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B445ab3:L445ab3:{c.instructions+=2;NFSU2_TR(0x445ab3);
w4(R+0,u32(0x1ull));
}
B445ab8:{NFSU2_TR(0x445ab8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B445ac0:L445ac0:{c.instructions+=4;NFSU2_TR(0x445ac0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445ac1:{NFSU2_TR(0x445ac1);
__builtin_memmove((R+24),(R+4),4);
}
B445ac3:{NFSU2_TR(0x445ac3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B445ac5:{NFSU2_TR(0x445ac5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445ac8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B445ac8:L445ac8:{c.instructions+=2;NFSU2_TR(0x445ac8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B445aca:{NFSU2_TR(0x445aca);
if(r1(R+518)){{goto L445afe;}}
}
B445acc:L445acc:{c.instructions+=2;NFSU2_TR(0x445acc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B445acf:{NFSU2_TR(0x445acf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445ad4ull));
TAIL_STATIC(0x5ed290u,5ed);
}
B445ad4:L445ad4:{c.instructions+=2;NFSU2_TR(0x445ad4);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B445ad6:{NFSU2_TR(0x445ad6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L445af7;}}
}
B445ad8:L445ad8:{c.instructions+=2;NFSU2_TR(0x445ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B445adb:{NFSU2_TR(0x445adb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445ae0ull));
TAIL_STATIC(0x5ed300u,5ed);
}
B445ae0:L445ae0:{c.instructions+=2;NFSU2_TR(0x445ae0);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B445ae2:{NFSU2_TR(0x445ae2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L445af7;}}
}
B445ae4:L445ae4:{c.instructions+=4;NFSU2_TR(0x445ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445ae7:{NFSU2_TR(0x445ae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445aea:{NFSU2_TR(0x445aea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B445aec:{NFSU2_TR(0x445aec);
if(r1(R+518)){{goto L445afe;}}
}
B445aee:L445aee:{c.instructions+=2;NFSU2_TR(0x445aee);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B445af5:{NFSU2_TR(0x445af5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L445afe;}}
}
B445af7:L445af7:{c.instructions+=3;NFSU2_TR(0x445af7);
w4(R+0,u32(0x1ull));
}
B445afc:{NFSU2_TR(0x445afc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B445afd:{NFSU2_TR(0x445afd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B445afe:L445afe:{c.instructions+=3;NFSU2_TR(0x445afe);
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
B445b00:{NFSU2_TR(0x445b00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B445b01:{NFSU2_TR(0x445b01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B445b10:L445b10:{c.instructions+=4;NFSU2_TR(0x445b10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445b14:{NFSU2_TR(0x445b14);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x52ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B445b18:{NFSU2_TR(0x445b18);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445b1b:{NFSU2_TR(0x445b1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B445b20:L445b20:{c.instructions+=78;NFSU2_TR(0x445b20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445b23:{NFSU2_TR(0x445b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B445b26:{NFSU2_TR(0x445b26);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B445b28:{NFSU2_TR(0x445b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B445b2b:{NFSU2_TR(0x445b2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445b2e:{NFSU2_TR(0x445b2e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445b2f:{NFSU2_TR(0x445b2f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B445b31:{NFSU2_TR(0x445b31);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B445b35:{NFSU2_TR(0x445b35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445b38:{NFSU2_TR(0x445b38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445b3b:{NFSU2_TR(0x445b3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445b3e:{NFSU2_TR(0x445b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445b41:{NFSU2_TR(0x445b41);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B445b45:{NFSU2_TR(0x445b45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445b48:{NFSU2_TR(0x445b48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445b4b:{NFSU2_TR(0x445b4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445b4e:{NFSU2_TR(0x445b4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445b51:{NFSU2_TR(0x445b51);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B445b58:{NFSU2_TR(0x445b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445b5b:{NFSU2_TR(0x445b5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445b5e:{NFSU2_TR(0x445b5e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B445b60:{NFSU2_TR(0x445b60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445b63:{NFSU2_TR(0x445b63);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445b66:{NFSU2_TR(0x445b66);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B445b6a:{NFSU2_TR(0x445b6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445b6d:{NFSU2_TR(0x445b6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445b70:{NFSU2_TR(0x445b70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B445b72:{NFSU2_TR(0x445b72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445b75:{NFSU2_TR(0x445b75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445b78:{NFSU2_TR(0x445b78);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B445b7c:{NFSU2_TR(0x445b7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445b7f:{NFSU2_TR(0x445b7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445b82:{NFSU2_TR(0x445b82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445b85:{NFSU2_TR(0x445b85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445b88:{NFSU2_TR(0x445b88);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B445b8c:{NFSU2_TR(0x445b8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445b8f:{NFSU2_TR(0x445b8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445b92:{NFSU2_TR(0x445b92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445b95:{NFSU2_TR(0x445b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445b98:{NFSU2_TR(0x445b98);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B445b9f:{NFSU2_TR(0x445b9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445ba2:{NFSU2_TR(0x445ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445ba5:{NFSU2_TR(0x445ba5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B445ba7:{NFSU2_TR(0x445ba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445baa:{NFSU2_TR(0x445baa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445bad:{NFSU2_TR(0x445bad);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B445bb1:{NFSU2_TR(0x445bb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445bb4:{NFSU2_TR(0x445bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445bb7:{NFSU2_TR(0x445bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445bba:{NFSU2_TR(0x445bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445bbd:{NFSU2_TR(0x445bbd);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B445bc1:{NFSU2_TR(0x445bc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445bc4:{NFSU2_TR(0x445bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445bc7:{NFSU2_TR(0x445bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445bca:{NFSU2_TR(0x445bca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445bcd:{NFSU2_TR(0x445bcd);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B445bd4:{NFSU2_TR(0x445bd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445bd7:{NFSU2_TR(0x445bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445bda:{NFSU2_TR(0x445bda);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B445bdc:{NFSU2_TR(0x445bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445bdf:{NFSU2_TR(0x445bdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445be2:{NFSU2_TR(0x445be2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B445be6:{NFSU2_TR(0x445be6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445be9:{NFSU2_TR(0x445be9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445bec:{NFSU2_TR(0x445bec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445bef:{NFSU2_TR(0x445bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445bf2:{NFSU2_TR(0x445bf2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B445bf6:{NFSU2_TR(0x445bf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445bf9:{NFSU2_TR(0x445bf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445bfc:{NFSU2_TR(0x445bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445bff:{NFSU2_TR(0x445bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445c02:{NFSU2_TR(0x445c02);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B445c09:{NFSU2_TR(0x445c09);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B445c0c:{NFSU2_TR(0x445c0c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x270ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B445c13:{NFSU2_TR(0x445c13);
__builtin_memmove((R+0),gp(0x7fb708),4);
}
B445c18:{NFSU2_TR(0x445c18);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x27cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445c1e:{NFSU2_TR(0x445c1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B445c1f:{NFSU2_TR(0x445c1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B445c20:L445c20:{c.instructions+=13;NFSU2_TR(0x445c20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445c21:{NFSU2_TR(0x445c21);
__builtin_memmove((R+20),(R+16),4);
}
B445c23:{NFSU2_TR(0x445c23);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B445c26:{NFSU2_TR(0x445c26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B445c29:{NFSU2_TR(0x445c29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445c2c:{NFSU2_TR(0x445c2c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+0),(U+0),2);
}
B445c2f:{NFSU2_TR(0x445c2f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445c30:{NFSU2_TR(0x445c30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445c31:{NFSU2_TR(0x445c31);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B445c33:{NFSU2_TR(0x445c33);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x1ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B445c37:{NFSU2_TR(0x445c37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445c38:{NFSU2_TR(0x445c38);
__builtin_memmove((R+24),(R+4),4);
}
B445c3a:{NFSU2_TR(0x445c3a);
if(r1(R+518)){{goto L445c4b;}}
}
B445c3c:L445c3c:{c.instructions+=2;NFSU2_TR(0x445c3c);
u8 U[4];
__builtin_memmove((U+0),(R+12),2);
w2(U+2,u16(u32(r2(R+0))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B445c3f:{NFSU2_TR(0x445c3f);
if(r1(R+518)){{goto L445c4b;}}
}
B445c41:L445c41:{c.instructions+=2;NFSU2_TR(0x445c41);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x5ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B445c45:{NFSU2_TR(0x445c45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L445daa;}}
}
B445c4b:L445c4b:{c.instructions+=2;NFSU2_TR(0x445c4b);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B445c4e:{NFSU2_TR(0x445c4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L445c5f;}}
}
B445c50:L445c50:{c.instructions+=2;NFSU2_TR(0x445c50);
__builtin_memmove((R+4),(R+24),4);
}
B445c52:{NFSU2_TR(0x445c52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445c57ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x445ac0u);}goto L445ac0;}
}
B445c57:L445c57:{c.instructions+=2;NFSU2_TR(0x445c57);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B445c59:{NFSU2_TR(0x445c59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L445df0;}}
}
B445c5f:L445c5f:{c.instructions+=20;NFSU2_TR(0x445c5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445c62:{NFSU2_TR(0x445c62);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445c65:{NFSU2_TR(0x445c65);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B445c68:{NFSU2_TR(0x445c68);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445c6b:{NFSU2_TR(0x445c6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((R+28),(U+0),4);
}
B445c71:{NFSU2_TR(0x445c71);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B445c73:{NFSU2_TR(0x445c73);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445c77:{NFSU2_TR(0x445c77);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445c7b:{NFSU2_TR(0x445c7b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B445c7f:{NFSU2_TR(0x445c7f);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445c82:{NFSU2_TR(0x445c82);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B445c84:{NFSU2_TR(0x445c84);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445c87:{NFSU2_TR(0x445c87);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445c89:{NFSU2_TR(0x445c89);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445c8d:{NFSU2_TR(0x445c8d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445c8f:{NFSU2_TR(0x445c8f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B445c91:{NFSU2_TR(0x445c91);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B445c97:{NFSU2_TR(0x445c97);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B445c99:{NFSU2_TR(0x445c99);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B445c9c:{NFSU2_TR(0x445c9c);
if(r1(R+514)){{goto L445cbd;}}
}
B445c9e:L445c9e:{c.instructions+=9;NFSU2_TR(0x445c9e);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445ca4:{NFSU2_TR(0x445ca4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445ca5:{NFSU2_TR(0x445ca5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B445ca9:{NFSU2_TR(0x445ca9);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B445cad:{NFSU2_TR(0x445cad);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445cb0:{NFSU2_TR(0x445cb0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445cb1:{NFSU2_TR(0x445cb1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445cb2:{NFSU2_TR(0x445cb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445cb3:{NFSU2_TR(0x445cb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445cb8ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B445cb8:L445cb8:{c.instructions+=2;NFSU2_TR(0x445cb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B445cbb:{NFSU2_TR(0x445cbb);
{goto L445cbf;}
}
B445cbd:L445cbd:{c.instructions+=1;NFSU2_TR(0x445cbd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B445cbf:L445cbf:{c.instructions+=7;NFSU2_TR(0x445cbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B445cc2:{NFSU2_TR(0x445cc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B445cc8:{NFSU2_TR(0x445cc8);
__builtin_memmove((R+0),(R+8),4);
}
B445cca:{NFSU2_TR(0x445cca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445ccb:{NFSU2_TR(0x445ccb);
w4(R+4,u32(0x82a4e0ull));
}
B445cd0:{NFSU2_TR(0x445cd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445cd4:{NFSU2_TR(0x445cd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445cd9ull));
TAIL_STATIC(0x576790u,576);
}
B445cd9:L445cd9:{c.instructions+=6;NFSU2_TR(0x445cd9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445cdd:{NFSU2_TR(0x445cdd);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B445ce1:{NFSU2_TR(0x445ce1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445ce2:{NFSU2_TR(0x445ce2);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B445ce6:{NFSU2_TR(0x445ce6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445ce7:{NFSU2_TR(0x445ce7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445cecull));
TAIL_STATIC(0x43cf10u,43c);
}
B445cec:L445cec:{c.instructions+=19;NFSU2_TR(0x445cec);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445cf0:{NFSU2_TR(0x445cf0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445cf4:{NFSU2_TR(0x445cf4);
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
B445cf7:{NFSU2_TR(0x445cf7);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B445cfb:{NFSU2_TR(0x445cfb);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B445cff:{NFSU2_TR(0x445cff);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445d03:{NFSU2_TR(0x445d03);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445d07:{NFSU2_TR(0x445d07);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445d0b:{NFSU2_TR(0x445d0b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445d0f:{NFSU2_TR(0x445d0f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445d13:{NFSU2_TR(0x445d13);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445d17:{NFSU2_TR(0x445d17);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445d1b:{NFSU2_TR(0x445d1b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445d21:{NFSU2_TR(0x445d21);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B445d25:{NFSU2_TR(0x445d25);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445d28:{NFSU2_TR(0x445d28);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445d29:{NFSU2_TR(0x445d29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445d2a:{NFSU2_TR(0x445d2a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445d2b:{NFSU2_TR(0x445d2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445d30ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B445d30:L445d30:{c.instructions+=14;NFSU2_TR(0x445d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445d33:{NFSU2_TR(0x445d33);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B445d39:{NFSU2_TR(0x445d39);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B445d3b:{NFSU2_TR(0x445d3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445d3f:{NFSU2_TR(0x445d3f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B445d43:{NFSU2_TR(0x445d43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B445d46:{NFSU2_TR(0x445d46);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445d4c:{NFSU2_TR(0x445d4c);
{u32 ea_=u32(u32(7893336u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B445d52:{NFSU2_TR(0x445d52);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B445d58:{NFSU2_TR(0x445d58);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B445d5c:{NFSU2_TR(0x445d5c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B445d62:{NFSU2_TR(0x445d62);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B445d64:{NFSU2_TR(0x445d64);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B445d67:{NFSU2_TR(0x445d67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L445da2;}}
}
B445d69:L445d69:{c.instructions+=6;NFSU2_TR(0x445d69);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445d6d:{NFSU2_TR(0x445d6d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445d73:{NFSU2_TR(0x445d73);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B445d77:{NFSU2_TR(0x445d77);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B445d79:{NFSU2_TR(0x445d79);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B445d7c:{NFSU2_TR(0x445d7c);
if(r1(R+514)){{goto L445d86;}}
}
B445d7e:L445d7e:{c.instructions+=2;NFSU2_TR(0x445d7e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B445d80:{NFSU2_TR(0x445d80);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445d86:L445d86:{c.instructions+=6;NFSU2_TR(0x445d86);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B445d8a:{NFSU2_TR(0x445d8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B445d8d:{NFSU2_TR(0x445d8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B445d91:{NFSU2_TR(0x445d91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445d92:{NFSU2_TR(0x445d92);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445d96:{NFSU2_TR(0x445d96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445d9bull));
TAIL_STATIC(0x574cd0u,574);
}
B445d9b:L445d9b:{c.instructions+=2;NFSU2_TR(0x445d9b);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B445d9e:{NFSU2_TR(0x445d9e);
if(r1(R+518)){{goto L445df0;}}
}
B445da0:L445da0:{c.instructions+=1;NFSU2_TR(0x445da0);
{goto L445dbb;}
}
B445da2:L445da2:{c.instructions+=2;NFSU2_TR(0x445da2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445da8:{NFSU2_TR(0x445da8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x445d86u);}goto L445d86;}
}
B445daa:L445daa:{c.instructions+=5;NFSU2_TR(0x445daa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445dad:{NFSU2_TR(0x445dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B445db0:{NFSU2_TR(0x445db0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
}
B445db5:{NFSU2_TR(0x445db5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445db6:{NFSU2_TR(0x445db6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445dbbull));
TAIL_STATIC(0x574cd0u,574);
}
B445dbb:L445dbb:{c.instructions+=16;NFSU2_TR(0x445dbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445dbe:{NFSU2_TR(0x445dbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B445dc1:{NFSU2_TR(0x445dc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B445dc4:{NFSU2_TR(0x445dc4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B445dc8:{NFSU2_TR(0x445dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445dcb:{NFSU2_TR(0x445dcb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B445dcd:{NFSU2_TR(0x445dcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B445dd0:{NFSU2_TR(0x445dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B445dd3:{NFSU2_TR(0x445dd3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B445dd7:{NFSU2_TR(0x445dd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445dda:{NFSU2_TR(0x445dda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445ddd:{NFSU2_TR(0x445ddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B445de0:{NFSU2_TR(0x445de0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B445de3:{NFSU2_TR(0x445de3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445de6:{NFSU2_TR(0x445de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445de9:{NFSU2_TR(0x445de9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B445df0:L445df0:{c.instructions+=6;NFSU2_TR(0x445df0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B445df1:{NFSU2_TR(0x445df1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B445df2:{NFSU2_TR(0x445df2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B445df3:{NFSU2_TR(0x445df3);
__builtin_memmove((R+16),(R+20),4);
}
B445df5:{NFSU2_TR(0x445df5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B445df6:{NFSU2_TR(0x445df6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B445e00:L445e00:{c.instructions+=11;NFSU2_TR(0x445e00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445e01:{NFSU2_TR(0x445e01);
__builtin_memmove((R+20),(R+16),4);
}
B445e03:{NFSU2_TR(0x445e03);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B445e06:{NFSU2_TR(0x445e06);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B445e09:{NFSU2_TR(0x445e09);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445e0a:{NFSU2_TR(0x445e0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445e0b:{NFSU2_TR(0x445e0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445e0c:{NFSU2_TR(0x445e0c);
__builtin_memmove((R+28),(R+4),4);
}
B445e0e:{NFSU2_TR(0x445e0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B445e10:{NFSU2_TR(0x445e10);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445e14:{NFSU2_TR(0x445e14);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445e17ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B445e17:L445e17:{c.instructions+=2;NFSU2_TR(0x445e17);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B445e19:{NFSU2_TR(0x445e19);
if(r1(R+518)){{goto L445e8d;}}
}
B445e1b:L445e1b:{c.instructions+=3;NFSU2_TR(0x445e1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B445e1e:{NFSU2_TR(0x445e1e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445e1f:{NFSU2_TR(0x445e1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445e24ull));
TAIL_STATIC(0x43c780u,43c);
}
B445e24:L445e24:{c.instructions+=11;NFSU2_TR(0x445e24);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445e27:{NFSU2_TR(0x445e27);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445e2a:{NFSU2_TR(0x445e2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B445e2c:{NFSU2_TR(0x445e2c);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445e2f:{NFSU2_TR(0x445e2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B445e33:{NFSU2_TR(0x445e33);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445e37:{NFSU2_TR(0x445e37);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445e38:{NFSU2_TR(0x445e38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445e39:{NFSU2_TR(0x445e39);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445e3d:{NFSU2_TR(0x445e3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445e41:{NFSU2_TR(0x445e41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445e46ull));
TAIL_STATIC(0x43cf10u,43c);
}
B445e46:L445e46:{c.instructions+=6;NFSU2_TR(0x445e46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445e47:{NFSU2_TR(0x445e47);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B445e4a:{NFSU2_TR(0x445e4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B445e4d:{NFSU2_TR(0x445e4d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445e4e:{NFSU2_TR(0x445e4e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445e4f:{NFSU2_TR(0x445e4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445e54ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B445e54:L445e54:{c.instructions+=4;NFSU2_TR(0x445e54);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445e55:{NFSU2_TR(0x445e55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445e56:{NFSU2_TR(0x445e56);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445e57:{NFSU2_TR(0x445e57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445e5cull));
TAIL_STATIC(0x43d1e0u,43d);
}
B445e5c:L445e5c:{c.instructions+=18;NFSU2_TR(0x445e5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445e60:{NFSU2_TR(0x445e60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445e63:{NFSU2_TR(0x445e63);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445e66:{NFSU2_TR(0x445e66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B445e69:{NFSU2_TR(0x445e69);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445e6c:{NFSU2_TR(0x445e6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B445e6f:{NFSU2_TR(0x445e6f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x50ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B445e72:{NFSU2_TR(0x445e72);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B445e74:{NFSU2_TR(0x445e74);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445e77:{NFSU2_TR(0x445e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445e7a:{NFSU2_TR(0x445e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B445e81:{NFSU2_TR(0x445e81);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445e84:{NFSU2_TR(0x445e84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B445e85:{NFSU2_TR(0x445e85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B445e86:{NFSU2_TR(0x445e86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B445e87:{NFSU2_TR(0x445e87);
__builtin_memmove((R+16),(R+20),4);
}
B445e89:{NFSU2_TR(0x445e89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B445e8a:{NFSU2_TR(0x445e8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B445e8d:L445e8d:{c.instructions+=8;NFSU2_TR(0x445e8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B445e90:{NFSU2_TR(0x445e90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445e93:{NFSU2_TR(0x445e93);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+8),(U+0),4);
}
B445e96:{NFSU2_TR(0x445e96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445e97:{NFSU2_TR(0x445e97);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x90ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B445e9d:{NFSU2_TR(0x445e9d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445e9e:{NFSU2_TR(0x445e9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445e9f:{NFSU2_TR(0x445e9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445ea4ull));
TAIL_STATIC(0x401340u,401);
}
B445ea4:L445ea4:{c.instructions+=7;NFSU2_TR(0x445ea4);
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
B445ea7:{NFSU2_TR(0x445ea7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B445ea8:{NFSU2_TR(0x445ea8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B445ea9:{NFSU2_TR(0x445ea9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B445eaa:{NFSU2_TR(0x445eaa);
__builtin_memmove((R+16),(R+20),4);
}
B445eac:{NFSU2_TR(0x445eac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B445ead:{NFSU2_TR(0x445ead);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B445eb0:L445eb0:{c.instructions+=7;NFSU2_TR(0x445eb0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445eb1:{NFSU2_TR(0x445eb1);
__builtin_memmove((R+20),(R+16),4);
}
B445eb3:{NFSU2_TR(0x445eb3);
__builtin_memmove((R+0),gp(0x89e7e2),1);
}
B445eb8:{NFSU2_TR(0x445eb8);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B445eba:{NFSU2_TR(0x445eba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445ebb:{NFSU2_TR(0x445ebb);
__builtin_memmove((R+24),(R+4),4);
}
B445ebd:{NFSU2_TR(0x445ebd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L445ec8;}}
}
B445ebf:L445ebf:{c.instructions+=3;NFSU2_TR(0x445ebf);
__builtin_memmove((R+0),gp(0x890100),4);
}
B445ec4:{NFSU2_TR(0x445ec4);
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
B445ec6:{NFSU2_TR(0x445ec6);
if(r1(R+518)){{goto L445ef9;}}
}
B445ec8:L445ec8:{c.instructions+=14;NFSU2_TR(0x445ec8);
{u32 ea_=u32(u32(8308212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445ece:{NFSU2_TR(0x445ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445ed1:{NFSU2_TR(0x445ed1);
{u32 ea_=u32(u32(8308216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445ed7:{NFSU2_TR(0x445ed7);
__builtin_memmove((R+4),gp(0x82a4d0),2);
}
B445ede:{NFSU2_TR(0x445ede);
{u32 ea_=u32(u32(8308208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445ee4:{NFSU2_TR(0x445ee4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B445ee5:{NFSU2_TR(0x445ee5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445ee7:{NFSU2_TR(0x445ee7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B445ee9:{NFSU2_TR(0x445ee9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445eec:{NFSU2_TR(0x445eec);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445eef:{NFSU2_TR(0x445eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445ef2:{NFSU2_TR(0x445ef2);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+0)),r2(U+0));
}
B445ef5:{NFSU2_TR(0x445ef5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B445ef6:{NFSU2_TR(0x445ef6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B445ef9:L445ef9:{c.instructions+=3;NFSU2_TR(0x445ef9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B445efc:{NFSU2_TR(0x445efc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B445efe:{NFSU2_TR(0x445efe);
if(r1(R+518)){{goto L445f50;}}
}
B445f00:L445f00:{c.instructions+=3;NFSU2_TR(0x445f00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B445f03:{NFSU2_TR(0x445f03);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B445f05:{NFSU2_TR(0x445f05);
if(r1(R+518)){{goto L445f50;}}
}
B445f07:L445f07:{c.instructions+=1;NFSU2_TR(0x445f07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445f0cull));
TAIL_STATIC(0x5eb520u,5eb);
}
B445f0c:L445f0c:{c.instructions+=2;NFSU2_TR(0x445f0c);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B445f0e:{NFSU2_TR(0x445f0e);
if(r1(R+518)){{goto L445f50;}}
}
B445f10:L445f10:{c.instructions+=1;NFSU2_TR(0x445f10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445f15ull));
TAIL_STATIC(0x5b98a0u,5b9);
}
B445f15:L445f15:{c.instructions+=21;NFSU2_TR(0x445f15);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
}
B445f18:{NFSU2_TR(0x445f18);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B445f1a:{NFSU2_TR(0x445f1a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B445f1c:{NFSU2_TR(0x445f1c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B445f1d:{NFSU2_TR(0x445f1d);
__builtin_memmove((R+4),(R+0),4);
}
B445f1f:{NFSU2_TR(0x445f1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B445f22:{NFSU2_TR(0x445f22);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x7ec400ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x7ec400ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7ec400ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B445f28:{NFSU2_TR(0x445f28);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445f2b:{NFSU2_TR(0x445f2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B445f2d:{NFSU2_TR(0x445f2d);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445f30:{NFSU2_TR(0x445f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B445f33:{NFSU2_TR(0x445f33);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B445f35:{NFSU2_TR(0x445f35);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B445f37:{NFSU2_TR(0x445f37);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445f3a:{NFSU2_TR(0x445f3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B445f3b:{NFSU2_TR(0x445f3b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445f3e:{NFSU2_TR(0x445f3e);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x787080ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+0),(U+8),2);
}
B445f46:{NFSU2_TR(0x445f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B445f49:{NFSU2_TR(0x445f49);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+4)),r2(U+0));
}
B445f4c:{NFSU2_TR(0x445f4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B445f4d:{NFSU2_TR(0x445f4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B445f50:L445f50:{c.instructions+=4;NFSU2_TR(0x445f50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B445f53:{NFSU2_TR(0x445f53);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B445f56:{NFSU2_TR(0x445f56);
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
B445f58:{NFSU2_TR(0x445f58);
if(r1(R+518)){{goto L445f94;}}
}
B445f5a:L445f5a:{c.instructions+=2;NFSU2_TR(0x445f5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B445f5c:{NFSU2_TR(0x445f5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445f5full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B445f5f:L445f5f:{c.instructions+=2;NFSU2_TR(0x445f5f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B445f61:{NFSU2_TR(0x445f61);
if(r1(R+518)){{goto L445f94;}}
}
B445f63:L445f63:{c.instructions+=14;NFSU2_TR(0x445f63);
{u32 ea_=u32(u32(8308228u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445f69:{NFSU2_TR(0x445f69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445f6c:{NFSU2_TR(0x445f6c);
{u32 ea_=u32(u32(8308232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445f72:{NFSU2_TR(0x445f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B445f75:{NFSU2_TR(0x445f75);
{u32 ea_=u32(u32(8308224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B445f7b:{NFSU2_TR(0x445f7b);
__builtin_memmove((R+8),gp(0x82a4dc),2);
}
B445f82:{NFSU2_TR(0x445f82);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445f84:{NFSU2_TR(0x445f84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B445f85:{NFSU2_TR(0x445f85);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B445f87:{NFSU2_TR(0x445f87);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445f8a:{NFSU2_TR(0x445f8a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B445f8d:{NFSU2_TR(0x445f8d);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+4)),r2(U+0));
}
B445f90:{NFSU2_TR(0x445f90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B445f91:{NFSU2_TR(0x445f91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B445f94:L445f94:{c.instructions+=14;NFSU2_TR(0x445f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445f97:{NFSU2_TR(0x445f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B445f9a:{NFSU2_TR(0x445f9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B445f9d:{NFSU2_TR(0x445f9d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B445f9f:{NFSU2_TR(0x445f9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B445fa2:{NFSU2_TR(0x445fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445fa5:{NFSU2_TR(0x445fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B445fa8:{NFSU2_TR(0x445fa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B445fab:{NFSU2_TR(0x445fab);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B445faf:{NFSU2_TR(0x445faf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B445fb2:{NFSU2_TR(0x445fb2);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+4)),r2(U+0));
}
B445fb5:{NFSU2_TR(0x445fb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B445fb6:{NFSU2_TR(0x445fb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B445fb7:{NFSU2_TR(0x445fb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B445fc0:L445fc0:{c.instructions+=10;NFSU2_TR(0x445fc0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445fc1:{NFSU2_TR(0x445fc1);
__builtin_memmove((R+20),(R+16),4);
}
B445fc3:{NFSU2_TR(0x445fc3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B445fc6:{NFSU2_TR(0x445fc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x5cull))));
}
B445fc9:{NFSU2_TR(0x445fc9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445fca:{NFSU2_TR(0x445fca);
__builtin_memmove((R+24),(R+4),4);
}
B445fcc:{NFSU2_TR(0x445fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445fcf:{NFSU2_TR(0x445fcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B445fd2:{NFSU2_TR(0x445fd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445fd3:{NFSU2_TR(0x445fd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445fd8ull));
TAIL_STATIC(0x5ecca0u,5ec);
}
B445fd8:L445fd8:{c.instructions+=7;NFSU2_TR(0x445fd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445fd9:{NFSU2_TR(0x445fd9);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B445fdd:{NFSU2_TR(0x445fdd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445fde:{NFSU2_TR(0x445fde);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B445fe2:{NFSU2_TR(0x445fe2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445fe3:{NFSU2_TR(0x445fe3);
__builtin_memmove((R+4),(R+24),4);
}
B445fe5:{NFSU2_TR(0x445fe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x445feaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x445eb0u);}goto L445eb0;}
}
B445fea:L445fea:{c.instructions+=8;NFSU2_TR(0x445fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B445fed:{NFSU2_TR(0x445fed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B445ff0:{NFSU2_TR(0x445ff0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445ff1:{NFSU2_TR(0x445ff1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x90ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B445ff6:{NFSU2_TR(0x445ff6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445ff7:{NFSU2_TR(0x445ff7);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B445ffb:{NFSU2_TR(0x445ffb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B445ffc:{NFSU2_TR(0x445ffc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446001ull));
TAIL_STATIC(0x401340u,401);
}
XIT:NFSU2_TR_EXIT(0x445,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
