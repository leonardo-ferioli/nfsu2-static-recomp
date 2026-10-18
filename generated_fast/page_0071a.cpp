#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_719(u8* __restrict R,Cpu& c);
u32 body_71b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x71a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x71a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_71a(u8* __restrict R,Cpu& c);
u32 page_71a(Cpu& c){return body_71a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_71a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x71a001:goto L71a001;
case 0x71a005:c.instructions+=6;goto B71a005;
case 0x71a008:c.instructions+=5;goto B71a008;
case 0x71a00b:c.instructions+=4;goto B71a00b;
case 0x71a00e:c.instructions+=3;goto B71a00e;
case 0x71a011:c.instructions+=2;goto B71a011;
case 0x71a014:c.instructions+=1;goto B71a014;
case 0x71a01a:goto L71a01a;
case 0x71a01b:c.instructions+=3;goto B71a01b;
case 0x71a01c:c.instructions+=2;goto B71a01c;
case 0x71a01d:c.instructions+=1;goto B71a01d;
case 0x71a01e:goto L71a01e;
case 0x71a01f:c.instructions+=9;goto B71a01f;
case 0x71a021:c.instructions+=8;goto B71a021;
case 0x71a022:c.instructions+=7;goto B71a022;
case 0x71a023:c.instructions+=6;goto B71a023;
case 0x71a026:c.instructions+=5;goto B71a026;
case 0x71a029:c.instructions+=4;goto B71a029;
case 0x71a02c:c.instructions+=3;goto B71a02c;
case 0x71a02e:c.instructions+=2;goto B71a02e;
case 0x71a031:c.instructions+=1;goto B71a031;
case 0x71a034:goto L71a034;
case 0x71a037:c.instructions+=80;goto B71a037;
case 0x71a03b:c.instructions+=79;goto B71a03b;
case 0x71a03e:c.instructions+=78;goto B71a03e;
case 0x71a041:c.instructions+=77;goto B71a041;
case 0x71a048:c.instructions+=76;goto B71a048;
case 0x71a04b:c.instructions+=75;goto B71a04b;
case 0x71a04e:c.instructions+=74;goto B71a04e;
case 0x71a051:c.instructions+=73;goto B71a051;
case 0x71a054:c.instructions+=72;goto B71a054;
case 0x71a057:c.instructions+=71;goto B71a057;
case 0x71a05e:c.instructions+=70;goto B71a05e;
case 0x71a061:c.instructions+=69;goto B71a061;
case 0x71a064:c.instructions+=68;goto B71a064;
case 0x71a067:c.instructions+=67;goto B71a067;
case 0x71a06a:c.instructions+=66;goto B71a06a;
case 0x71a06d:c.instructions+=65;goto B71a06d;
case 0x71a070:c.instructions+=64;goto B71a070;
case 0x71a073:c.instructions+=63;goto B71a073;
case 0x71a07a:c.instructions+=62;goto B71a07a;
case 0x71a081:c.instructions+=61;goto B71a081;
case 0x71a085:c.instructions+=60;goto B71a085;
case 0x71a089:c.instructions+=59;goto B71a089;
case 0x71a08c:c.instructions+=58;goto B71a08c;
case 0x71a090:c.instructions+=57;goto B71a090;
case 0x71a094:c.instructions+=56;goto B71a094;
case 0x71a097:c.instructions+=55;goto B71a097;
case 0x71a09e:c.instructions+=54;goto B71a09e;
case 0x71a0a1:c.instructions+=53;goto B71a0a1;
case 0x71a0a8:c.instructions+=52;goto B71a0a8;
case 0x71a0ab:c.instructions+=51;goto B71a0ab;
case 0x71a0b2:c.instructions+=50;goto B71a0b2;
case 0x71a0b5:c.instructions+=49;goto B71a0b5;
case 0x71a0bc:c.instructions+=48;goto B71a0bc;
case 0x71a0bf:c.instructions+=47;goto B71a0bf;
case 0x71a0c2:c.instructions+=46;goto B71a0c2;
case 0x71a0c9:c.instructions+=45;goto B71a0c9;
case 0x71a0cc:c.instructions+=44;goto B71a0cc;
case 0x71a0d3:c.instructions+=43;goto B71a0d3;
case 0x71a0d6:c.instructions+=42;goto B71a0d6;
case 0x71a0d9:c.instructions+=41;goto B71a0d9;
case 0x71a0dc:c.instructions+=40;goto B71a0dc;
case 0x71a0e3:c.instructions+=39;goto B71a0e3;
case 0x71a0e6:c.instructions+=38;goto B71a0e6;
case 0x71a0ed:c.instructions+=37;goto B71a0ed;
case 0x71a0f0:c.instructions+=36;goto B71a0f0;
case 0x71a0f3:c.instructions+=35;goto B71a0f3;
case 0x71a0fa:c.instructions+=34;goto B71a0fa;
case 0x71a101:c.instructions+=33;goto B71a101;
case 0x71a105:c.instructions+=32;goto B71a105;
case 0x71a109:c.instructions+=31;goto B71a109;
case 0x71a10c:c.instructions+=30;goto B71a10c;
case 0x71a110:c.instructions+=29;goto B71a110;
case 0x71a117:c.instructions+=28;goto B71a117;
case 0x71a11e:c.instructions+=27;goto B71a11e;
case 0x71a122:c.instructions+=26;goto B71a122;
case 0x71a126:c.instructions+=25;goto B71a126;
case 0x71a129:c.instructions+=24;goto B71a129;
case 0x71a12c:c.instructions+=23;goto B71a12c;
case 0x71a12f:c.instructions+=22;goto B71a12f;
case 0x71a133:c.instructions+=21;goto B71a133;
case 0x71a13a:c.instructions+=20;goto B71a13a;
case 0x71a13d:c.instructions+=19;goto B71a13d;
case 0x71a144:c.instructions+=18;goto B71a144;
case 0x71a147:c.instructions+=17;goto B71a147;
case 0x71a14a:c.instructions+=16;goto B71a14a;
case 0x71a14d:c.instructions+=15;goto B71a14d;
case 0x71a150:c.instructions+=14;goto B71a150;
case 0x71a153:c.instructions+=13;goto B71a153;
case 0x71a156:c.instructions+=12;goto B71a156;
case 0x71a159:c.instructions+=11;goto B71a159;
case 0x71a15c:c.instructions+=10;goto B71a15c;
case 0x71a163:c.instructions+=9;goto B71a163;
case 0x71a16a:c.instructions+=8;goto B71a16a;
case 0x71a16e:c.instructions+=7;goto B71a16e;
case 0x71a172:c.instructions+=6;goto B71a172;
case 0x71a175:c.instructions+=5;goto B71a175;
case 0x71a179:c.instructions+=4;goto B71a179;
case 0x71a17c:c.instructions+=3;goto B71a17c;
case 0x71a17f:c.instructions+=2;goto B71a17f;
case 0x71a182:c.instructions+=1;goto B71a182;
case 0x71a188:goto L71a188;
case 0x71a189:c.instructions+=3;goto B71a189;
case 0x71a18a:c.instructions+=2;goto B71a18a;
case 0x71a18b:c.instructions+=1;goto B71a18b;
case 0x71a18c:goto L71a18c;
case 0x71a18d:c.instructions+=9;goto B71a18d;
case 0x71a18f:c.instructions+=8;goto B71a18f;
case 0x71a190:c.instructions+=7;goto B71a190;
case 0x71a191:c.instructions+=6;goto B71a191;
case 0x71a194:c.instructions+=5;goto B71a194;
case 0x71a197:c.instructions+=4;goto B71a197;
case 0x71a19a:c.instructions+=3;goto B71a19a;
case 0x71a19c:c.instructions+=2;goto B71a19c;
case 0x71a19f:c.instructions+=1;goto B71a19f;
case 0x71a1a2:goto L71a1a2;
case 0x71a1a5:c.instructions+=62;goto B71a1a5;
case 0x71a1a9:c.instructions+=61;goto B71a1a9;
case 0x71a1ac:c.instructions+=60;goto B71a1ac;
case 0x71a1af:c.instructions+=59;goto B71a1af;
case 0x71a1b6:c.instructions+=58;goto B71a1b6;
case 0x71a1b9:c.instructions+=57;goto B71a1b9;
case 0x71a1bc:c.instructions+=56;goto B71a1bc;
case 0x71a1bf:c.instructions+=55;goto B71a1bf;
case 0x71a1c2:c.instructions+=54;goto B71a1c2;
case 0x71a1c5:c.instructions+=53;goto B71a1c5;
case 0x71a1cc:c.instructions+=52;goto B71a1cc;
case 0x71a1cf:c.instructions+=51;goto B71a1cf;
case 0x71a1d2:c.instructions+=50;goto B71a1d2;
case 0x71a1d5:c.instructions+=49;goto B71a1d5;
case 0x71a1d8:c.instructions+=48;goto B71a1d8;
case 0x71a1db:c.instructions+=47;goto B71a1db;
case 0x71a1de:c.instructions+=46;goto B71a1de;
case 0x71a1e1:c.instructions+=45;goto B71a1e1;
case 0x71a1e8:c.instructions+=44;goto B71a1e8;
case 0x71a1ef:c.instructions+=43;goto B71a1ef;
case 0x71a1f3:c.instructions+=42;goto B71a1f3;
case 0x71a1f7:c.instructions+=41;goto B71a1f7;
case 0x71a1fa:c.instructions+=40;goto B71a1fa;
case 0x71a1fe:c.instructions+=39;goto B71a1fe;
case 0x71a202:c.instructions+=38;goto B71a202;
case 0x71a205:c.instructions+=37;goto B71a205;
case 0x71a20c:c.instructions+=36;goto B71a20c;
case 0x71a210:c.instructions+=35;goto B71a210;
case 0x71a213:c.instructions+=34;goto B71a213;
case 0x71a21a:c.instructions+=33;goto B71a21a;
case 0x71a21d:c.instructions+=32;goto B71a21d;
case 0x71a224:c.instructions+=31;goto B71a224;
case 0x71a227:c.instructions+=30;goto B71a227;
case 0x71a22e:c.instructions+=29;goto B71a22e;
case 0x71a231:c.instructions+=28;goto B71a231;
case 0x71a234:c.instructions+=27;goto B71a234;
case 0x71a23b:c.instructions+=26;goto B71a23b;
case 0x71a23e:c.instructions+=25;goto B71a23e;
case 0x71a245:c.instructions+=24;goto B71a245;
case 0x71a248:c.instructions+=23;goto B71a248;
case 0x71a24b:c.instructions+=22;goto B71a24b;
case 0x71a24e:c.instructions+=21;goto B71a24e;
case 0x71a255:c.instructions+=20;goto B71a255;
case 0x71a258:c.instructions+=19;goto B71a258;
case 0x71a25f:c.instructions+=18;goto B71a25f;
case 0x71a262:c.instructions+=17;goto B71a262;
case 0x71a265:c.instructions+=16;goto B71a265;
case 0x71a26c:c.instructions+=15;goto B71a26c;
case 0x71a273:c.instructions+=14;goto B71a273;
case 0x71a277:c.instructions+=13;goto B71a277;
case 0x71a27b:c.instructions+=12;goto B71a27b;
case 0x71a27e:c.instructions+=11;goto B71a27e;
case 0x71a282:c.instructions+=10;goto B71a282;
case 0x71a289:c.instructions+=9;goto B71a289;
case 0x71a290:c.instructions+=8;goto B71a290;
case 0x71a294:c.instructions+=7;goto B71a294;
case 0x71a298:c.instructions+=6;goto B71a298;
case 0x71a29b:c.instructions+=5;goto B71a29b;
case 0x71a29e:c.instructions+=4;goto B71a29e;
case 0x71a2a1:c.instructions+=3;goto B71a2a1;
case 0x71a2a4:c.instructions+=2;goto B71a2a4;
case 0x71a2a7:c.instructions+=1;goto B71a2a7;
case 0x71a2ad:goto L71a2ad;
case 0x71a2ae:c.instructions+=3;goto B71a2ae;
case 0x71a2af:c.instructions+=2;goto B71a2af;
case 0x71a2b0:c.instructions+=1;goto B71a2b0;
case 0x71a2b1:goto L71a2b1;
case 0x71a2b2:c.instructions+=6;goto B71a2b2;
case 0x71a2b4:c.instructions+=5;goto B71a2b4;
case 0x71a2b5:c.instructions+=4;goto B71a2b5;
case 0x71a2b8:c.instructions+=3;goto B71a2b8;
case 0x71a2bb:c.instructions+=2;goto B71a2bb;
case 0x71a2be:c.instructions+=1;goto B71a2be;
case 0x71a2c1:goto L71a2c1;
case 0x71a2c4:c.instructions+=19;goto B71a2c4;
case 0x71a2c8:c.instructions+=18;goto B71a2c8;
case 0x71a2cb:c.instructions+=17;goto B71a2cb;
case 0x71a2ce:c.instructions+=16;goto B71a2ce;
case 0x71a2d1:c.instructions+=15;goto B71a2d1;
case 0x71a2d8:c.instructions+=14;goto B71a2d8;
case 0x71a2db:c.instructions+=13;goto B71a2db;
case 0x71a2de:c.instructions+=12;goto B71a2de;
case 0x71a2e1:c.instructions+=11;goto B71a2e1;
case 0x71a2e4:c.instructions+=10;goto B71a2e4;
case 0x71a2e7:c.instructions+=9;goto B71a2e7;
case 0x71a2ea:c.instructions+=8;goto B71a2ea;
case 0x71a2ee:c.instructions+=7;goto B71a2ee;
case 0x71a2f1:c.instructions+=6;goto B71a2f1;
case 0x71a2f5:c.instructions+=5;goto B71a2f5;
case 0x71a2f8:c.instructions+=4;goto B71a2f8;
case 0x71a2fc:c.instructions+=3;goto B71a2fc;
case 0x71a2ff:c.instructions+=2;goto B71a2ff;
case 0x71a302:c.instructions+=1;goto B71a302;
case 0x71a304:goto L71a304;
case 0x71a305:c.instructions+=2;goto B71a305;
case 0x71a306:c.instructions+=1;goto B71a306;
case 0x71a307:goto L71a307;
case 0x71a308:c.instructions+=5;goto B71a308;
case 0x71a30a:c.instructions+=4;goto B71a30a;
case 0x71a30b:c.instructions+=3;goto B71a30b;
case 0x71a30e:c.instructions+=2;goto B71a30e;
case 0x71a311:c.instructions+=1;goto B71a311;
case 0x71a314:goto L71a314;
case 0x71a317:c.instructions+=4;goto B71a317;
case 0x71a31b:c.instructions+=3;goto B71a31b;
case 0x71a31e:c.instructions+=2;goto B71a31e;
case 0x71a321:c.instructions+=1;goto B71a321;
case 0x71a323:goto L71a323;
case 0x71a324:c.instructions+=2;goto B71a324;
case 0x71a325:c.instructions+=1;goto B71a325;
case 0x71a326:goto L71a326;
case 0x71a327:c.instructions+=8;goto B71a327;
case 0x71a329:c.instructions+=7;goto B71a329;
case 0x71a32a:c.instructions+=6;goto B71a32a;
case 0x71a32b:c.instructions+=5;goto B71a32b;
case 0x71a32e:c.instructions+=4;goto B71a32e;
case 0x71a331:c.instructions+=3;goto B71a331;
case 0x71a334:c.instructions+=2;goto B71a334;
case 0x71a33b:c.instructions+=1;goto B71a33b;
case 0x71a33e:goto L71a33e;
case 0x71a341:c.instructions+=25;goto B71a341;
case 0x71a345:c.instructions+=24;goto B71a345;
case 0x71a348:c.instructions+=23;goto B71a348;
case 0x71a34b:c.instructions+=22;goto B71a34b;
case 0x71a34e:c.instructions+=21;goto B71a34e;
case 0x71a351:c.instructions+=20;goto B71a351;
case 0x71a354:c.instructions+=19;goto B71a354;
case 0x71a357:c.instructions+=18;goto B71a357;
case 0x71a35a:c.instructions+=17;goto B71a35a;
case 0x71a35d:c.instructions+=16;goto B71a35d;
case 0x71a360:c.instructions+=15;goto B71a360;
case 0x71a363:c.instructions+=14;goto B71a363;
case 0x71a366:c.instructions+=13;goto B71a366;
case 0x71a36a:c.instructions+=12;goto B71a36a;
case 0x71a36e:c.instructions+=11;goto B71a36e;
case 0x71a371:c.instructions+=10;goto B71a371;
case 0x71a374:c.instructions+=9;goto B71a374;
case 0x71a377:c.instructions+=8;goto B71a377;
case 0x71a37a:c.instructions+=7;goto B71a37a;
case 0x71a37d:c.instructions+=6;goto B71a37d;
case 0x71a381:c.instructions+=5;goto B71a381;
case 0x71a384:c.instructions+=4;goto B71a384;
case 0x71a387:c.instructions+=3;goto B71a387;
case 0x71a38a:c.instructions+=2;goto B71a38a;
case 0x71a38d:c.instructions+=1;goto B71a38d;
case 0x71a38f:goto L71a38f;
case 0x71a392:c.instructions+=29;goto B71a392;
case 0x71a395:c.instructions+=28;goto B71a395;
case 0x71a398:c.instructions+=27;goto B71a398;
case 0x71a39b:c.instructions+=26;goto B71a39b;
case 0x71a39f:c.instructions+=25;goto B71a39f;
case 0x71a3a3:c.instructions+=24;goto B71a3a3;
case 0x71a3a7:c.instructions+=23;goto B71a3a7;
case 0x71a3aa:c.instructions+=22;goto B71a3aa;
case 0x71a3ad:c.instructions+=21;goto B71a3ad;
case 0x71a3b0:c.instructions+=20;goto B71a3b0;
case 0x71a3b3:c.instructions+=19;goto B71a3b3;
case 0x71a3b6:c.instructions+=18;goto B71a3b6;
case 0x71a3b9:c.instructions+=17;goto B71a3b9;
case 0x71a3bc:c.instructions+=16;goto B71a3bc;
case 0x71a3bf:c.instructions+=15;goto B71a3bf;
case 0x71a3c2:c.instructions+=14;goto B71a3c2;
case 0x71a3c5:c.instructions+=13;goto B71a3c5;
case 0x71a3c8:c.instructions+=12;goto B71a3c8;
case 0x71a3cc:c.instructions+=11;goto B71a3cc;
case 0x71a3d0:c.instructions+=10;goto B71a3d0;
case 0x71a3d3:c.instructions+=9;goto B71a3d3;
case 0x71a3d6:c.instructions+=8;goto B71a3d6;
case 0x71a3d9:c.instructions+=7;goto B71a3d9;
case 0x71a3dc:c.instructions+=6;goto B71a3dc;
case 0x71a3df:c.instructions+=5;goto B71a3df;
case 0x71a3e3:c.instructions+=4;goto B71a3e3;
case 0x71a3e4:c.instructions+=3;goto B71a3e4;
case 0x71a3e5:c.instructions+=2;goto B71a3e5;
case 0x71a3e6:c.instructions+=1;goto B71a3e6;
case 0x71a3e7:goto L71a3e7;
case 0x71a3e8:c.instructions+=202;goto B71a3e8;
case 0x71a3ea:c.instructions+=201;goto B71a3ea;
case 0x71a3eb:c.instructions+=200;goto B71a3eb;
case 0x71a3ec:c.instructions+=199;goto B71a3ec;
case 0x71a3ef:c.instructions+=198;goto B71a3ef;
case 0x71a3f2:c.instructions+=197;goto B71a3f2;
case 0x71a3f3:c.instructions+=196;goto B71a3f3;
case 0x71a3f6:c.instructions+=195;goto B71a3f6;
case 0x71a3fa:c.instructions+=194;goto B71a3fa;
case 0x71a3fc:c.instructions+=193;goto B71a3fc;
case 0x71a3ff:c.instructions+=192;goto B71a3ff;
case 0x71a402:c.instructions+=191;goto B71a402;
case 0x71a405:c.instructions+=190;goto B71a405;
case 0x71a40b:c.instructions+=189;goto B71a40b;
case 0x71a40e:c.instructions+=188;goto B71a40e;
case 0x71a40f:c.instructions+=187;goto B71a40f;
case 0x71a410:c.instructions+=186;goto B71a410;
case 0x71a413:c.instructions+=185;goto B71a413;
case 0x71a416:c.instructions+=184;goto B71a416;
case 0x71a418:c.instructions+=183;goto B71a418;
case 0x71a41b:c.instructions+=182;goto B71a41b;
case 0x71a41e:c.instructions+=181;goto B71a41e;
case 0x71a420:c.instructions+=180;goto B71a420;
case 0x71a423:c.instructions+=179;goto B71a423;
case 0x71a428:c.instructions+=178;goto B71a428;
case 0x71a42c:c.instructions+=177;goto B71a42c;
case 0x71a431:c.instructions+=176;goto B71a431;
case 0x71a434:c.instructions+=175;goto B71a434;
case 0x71a438:c.instructions+=174;goto B71a438;
case 0x71a43b:c.instructions+=173;goto B71a43b;
case 0x71a440:c.instructions+=172;goto B71a440;
case 0x71a445:c.instructions+=171;goto B71a445;
case 0x71a44a:c.instructions+=170;goto B71a44a;
case 0x71a44d:c.instructions+=169;goto B71a44d;
case 0x71a452:c.instructions+=168;goto B71a452;
case 0x71a455:c.instructions+=167;goto B71a455;
case 0x71a458:c.instructions+=166;goto B71a458;
case 0x71a45b:c.instructions+=165;goto B71a45b;
case 0x71a45e:c.instructions+=164;goto B71a45e;
case 0x71a461:c.instructions+=163;goto B71a461;
case 0x71a466:c.instructions+=162;goto B71a466;
case 0x71a46a:c.instructions+=161;goto B71a46a;
case 0x71a46f:c.instructions+=160;goto B71a46f;
case 0x71a472:c.instructions+=159;goto B71a472;
case 0x71a476:c.instructions+=158;goto B71a476;
case 0x71a47b:c.instructions+=157;goto B71a47b;
case 0x71a47e:c.instructions+=156;goto B71a47e;
case 0x71a483:c.instructions+=155;goto B71a483;
case 0x71a488:c.instructions+=154;goto B71a488;
case 0x71a48b:c.instructions+=153;goto B71a48b;
case 0x71a490:c.instructions+=152;goto B71a490;
case 0x71a493:c.instructions+=151;goto B71a493;
case 0x71a496:c.instructions+=150;goto B71a496;
case 0x71a499:c.instructions+=149;goto B71a499;
case 0x71a49c:c.instructions+=148;goto B71a49c;
case 0x71a49f:c.instructions+=147;goto B71a49f;
case 0x71a4a2:c.instructions+=146;goto B71a4a2;
case 0x71a4a5:c.instructions+=145;goto B71a4a5;
case 0x71a4a8:c.instructions+=144;goto B71a4a8;
case 0x71a4ab:c.instructions+=143;goto B71a4ab;
case 0x71a4af:c.instructions+=142;goto B71a4af;
case 0x71a4b2:c.instructions+=141;goto B71a4b2;
case 0x71a4b5:c.instructions+=140;goto B71a4b5;
case 0x71a4b9:c.instructions+=139;goto B71a4b9;
case 0x71a4bc:c.instructions+=138;goto B71a4bc;
case 0x71a4bf:c.instructions+=137;goto B71a4bf;
case 0x71a4c3:c.instructions+=136;goto B71a4c3;
case 0x71a4ca:c.instructions+=135;goto B71a4ca;
case 0x71a4cd:c.instructions+=134;goto B71a4cd;
case 0x71a4d4:c.instructions+=133;goto B71a4d4;
case 0x71a4d7:c.instructions+=132;goto B71a4d7;
case 0x71a4da:c.instructions+=131;goto B71a4da;
case 0x71a4e1:c.instructions+=130;goto B71a4e1;
case 0x71a4e4:c.instructions+=129;goto B71a4e4;
case 0x71a4e7:c.instructions+=128;goto B71a4e7;
case 0x71a4eb:c.instructions+=127;goto B71a4eb;
case 0x71a4ee:c.instructions+=126;goto B71a4ee;
case 0x71a4f1:c.instructions+=125;goto B71a4f1;
case 0x71a4f4:c.instructions+=124;goto B71a4f4;
case 0x71a4f7:c.instructions+=123;goto B71a4f7;
case 0x71a4fe:c.instructions+=122;goto B71a4fe;
case 0x71a501:c.instructions+=121;goto B71a501;
case 0x71a504:c.instructions+=120;goto B71a504;
case 0x71a507:c.instructions+=119;goto B71a507;
case 0x71a50a:c.instructions+=118;goto B71a50a;
case 0x71a50d:c.instructions+=117;goto B71a50d;
case 0x71a510:c.instructions+=116;goto B71a510;
case 0x71a513:c.instructions+=115;goto B71a513;
case 0x71a516:c.instructions+=114;goto B71a516;
case 0x71a519:c.instructions+=113;goto B71a519;
case 0x71a51c:c.instructions+=112;goto B71a51c;
case 0x71a51f:c.instructions+=111;goto B71a51f;
case 0x71a522:c.instructions+=110;goto B71a522;
case 0x71a525:c.instructions+=109;goto B71a525;
case 0x71a528:c.instructions+=108;goto B71a528;
case 0x71a52b:c.instructions+=107;goto B71a52b;
case 0x71a52e:c.instructions+=106;goto B71a52e;
case 0x71a531:c.instructions+=105;goto B71a531;
case 0x71a534:c.instructions+=104;goto B71a534;
case 0x71a537:c.instructions+=103;goto B71a537;
case 0x71a53a:c.instructions+=102;goto B71a53a;
case 0x71a53d:c.instructions+=101;goto B71a53d;
case 0x71a540:c.instructions+=100;goto B71a540;
case 0x71a543:c.instructions+=99;goto B71a543;
case 0x71a546:c.instructions+=98;goto B71a546;
case 0x71a549:c.instructions+=97;goto B71a549;
case 0x71a54d:c.instructions+=96;goto B71a54d;
case 0x71a550:c.instructions+=95;goto B71a550;
case 0x71a553:c.instructions+=94;goto B71a553;
case 0x71a557:c.instructions+=93;goto B71a557;
case 0x71a55a:c.instructions+=92;goto B71a55a;
case 0x71a55d:c.instructions+=91;goto B71a55d;
case 0x71a560:c.instructions+=90;goto B71a560;
case 0x71a563:c.instructions+=89;goto B71a563;
case 0x71a56a:c.instructions+=88;goto B71a56a;
case 0x71a56d:c.instructions+=87;goto B71a56d;
case 0x71a574:c.instructions+=86;goto B71a574;
case 0x71a578:c.instructions+=85;goto B71a578;
case 0x71a57c:c.instructions+=84;goto B71a57c;
case 0x71a57f:c.instructions+=83;goto B71a57f;
case 0x71a582:c.instructions+=82;goto B71a582;
case 0x71a585:c.instructions+=81;goto B71a585;
case 0x71a588:c.instructions+=80;goto B71a588;
case 0x71a58c:c.instructions+=79;goto B71a58c;
case 0x71a58f:c.instructions+=78;goto B71a58f;
case 0x71a593:c.instructions+=77;goto B71a593;
case 0x71a596:c.instructions+=76;goto B71a596;
case 0x71a599:c.instructions+=75;goto B71a599;
case 0x71a59c:c.instructions+=74;goto B71a59c;
case 0x71a59f:c.instructions+=73;goto B71a59f;
case 0x71a5a6:c.instructions+=72;goto B71a5a6;
case 0x71a5ad:c.instructions+=71;goto B71a5ad;
case 0x71a5b0:c.instructions+=70;goto B71a5b0;
case 0x71a5b3:c.instructions+=69;goto B71a5b3;
case 0x71a5b6:c.instructions+=68;goto B71a5b6;
case 0x71a5b9:c.instructions+=67;goto B71a5b9;
case 0x71a5bc:c.instructions+=66;goto B71a5bc;
case 0x71a5bf:c.instructions+=65;goto B71a5bf;
case 0x71a5c2:c.instructions+=64;goto B71a5c2;
case 0x71a5c5:c.instructions+=63;goto B71a5c5;
case 0x71a5c8:c.instructions+=62;goto B71a5c8;
case 0x71a5cb:c.instructions+=61;goto B71a5cb;
case 0x71a5ce:c.instructions+=60;goto B71a5ce;
case 0x71a5d1:c.instructions+=59;goto B71a5d1;
case 0x71a5d4:c.instructions+=58;goto B71a5d4;
case 0x71a5d7:c.instructions+=57;goto B71a5d7;
case 0x71a5da:c.instructions+=56;goto B71a5da;
case 0x71a5de:c.instructions+=55;goto B71a5de;
case 0x71a5e1:c.instructions+=54;goto B71a5e1;
case 0x71a5e8:c.instructions+=53;goto B71a5e8;
case 0x71a5eb:c.instructions+=52;goto B71a5eb;
case 0x71a5ef:c.instructions+=51;goto B71a5ef;
case 0x71a5f2:c.instructions+=50;goto B71a5f2;
case 0x71a5f5:c.instructions+=49;goto B71a5f5;
case 0x71a5f8:c.instructions+=48;goto B71a5f8;
case 0x71a5fb:c.instructions+=47;goto B71a5fb;
case 0x71a5fe:c.instructions+=46;goto B71a5fe;
case 0x71a601:c.instructions+=45;goto B71a601;
case 0x71a604:c.instructions+=44;goto B71a604;
case 0x71a608:c.instructions+=43;goto B71a608;
case 0x71a60c:c.instructions+=42;goto B71a60c;
case 0x71a610:c.instructions+=41;goto B71a610;
case 0x71a613:c.instructions+=40;goto B71a613;
case 0x71a616:c.instructions+=39;goto B71a616;
case 0x71a619:c.instructions+=38;goto B71a619;
case 0x71a61c:c.instructions+=37;goto B71a61c;
case 0x71a61f:c.instructions+=36;goto B71a61f;
case 0x71a622:c.instructions+=35;goto B71a622;
case 0x71a625:c.instructions+=34;goto B71a625;
case 0x71a628:c.instructions+=33;goto B71a628;
case 0x71a62b:c.instructions+=32;goto B71a62b;
case 0x71a62e:c.instructions+=31;goto B71a62e;
case 0x71a631:c.instructions+=30;goto B71a631;
case 0x71a634:c.instructions+=29;goto B71a634;
case 0x71a637:c.instructions+=28;goto B71a637;
case 0x71a63a:c.instructions+=27;goto B71a63a;
case 0x71a63d:c.instructions+=26;goto B71a63d;
case 0x71a640:c.instructions+=25;goto B71a640;
case 0x71a643:c.instructions+=24;goto B71a643;
case 0x71a647:c.instructions+=23;goto B71a647;
case 0x71a64a:c.instructions+=22;goto B71a64a;
case 0x71a64e:c.instructions+=21;goto B71a64e;
case 0x71a651:c.instructions+=20;goto B71a651;
case 0x71a654:c.instructions+=19;goto B71a654;
case 0x71a657:c.instructions+=18;goto B71a657;
case 0x71a65b:c.instructions+=17;goto B71a65b;
case 0x71a65f:c.instructions+=16;goto B71a65f;
case 0x71a662:c.instructions+=15;goto B71a662;
case 0x71a666:c.instructions+=14;goto B71a666;
case 0x71a669:c.instructions+=13;goto B71a669;
case 0x71a66d:c.instructions+=12;goto B71a66d;
case 0x71a671:c.instructions+=11;goto B71a671;
case 0x71a674:c.instructions+=10;goto B71a674;
case 0x71a678:c.instructions+=9;goto B71a678;
case 0x71a67c:c.instructions+=8;goto B71a67c;
case 0x71a680:c.instructions+=7;goto B71a680;
case 0x71a681:c.instructions+=6;goto B71a681;
case 0x71a682:c.instructions+=5;goto B71a682;
case 0x71a684:c.instructions+=4;goto B71a684;
case 0x71a685:c.instructions+=3;goto B71a685;
case 0x71a687:c.instructions+=2;goto B71a687;
case 0x71a688:c.instructions+=1;goto B71a688;
case 0x71a689:goto L71a689;
case 0x71a68a:c.instructions+=126;goto B71a68a;
case 0x71a68c:c.instructions+=125;goto B71a68c;
case 0x71a68f:c.instructions+=124;goto B71a68f;
case 0x71a692:c.instructions+=123;goto B71a692;
case 0x71a698:c.instructions+=122;goto B71a698;
case 0x71a69b:c.instructions+=121;goto B71a69b;
case 0x71a69c:c.instructions+=120;goto B71a69c;
case 0x71a69f:c.instructions+=119;goto B71a69f;
case 0x71a6a2:c.instructions+=118;goto B71a6a2;
case 0x71a6a4:c.instructions+=117;goto B71a6a4;
case 0x71a6a7:c.instructions+=116;goto B71a6a7;
case 0x71a6aa:c.instructions+=115;goto B71a6aa;
case 0x71a6ac:c.instructions+=114;goto B71a6ac;
case 0x71a6af:c.instructions+=113;goto B71a6af;
case 0x71a6b6:c.instructions+=112;goto B71a6b6;
case 0x71a6ba:c.instructions+=111;goto B71a6ba;
case 0x71a6bd:c.instructions+=110;goto B71a6bd;
case 0x71a6c1:c.instructions+=109;goto B71a6c1;
case 0x71a6c4:c.instructions+=108;goto B71a6c4;
case 0x71a6cb:c.instructions+=107;goto B71a6cb;
case 0x71a6ce:c.instructions+=106;goto B71a6ce;
case 0x71a6d1:c.instructions+=105;goto B71a6d1;
case 0x71a6d4:c.instructions+=104;goto B71a6d4;
case 0x71a6db:c.instructions+=103;goto B71a6db;
case 0x71a6de:c.instructions+=102;goto B71a6de;
case 0x71a6e1:c.instructions+=101;goto B71a6e1;
case 0x71a6e5:c.instructions+=100;goto B71a6e5;
case 0x71a6e8:c.instructions+=99;goto B71a6e8;
case 0x71a6eb:c.instructions+=98;goto B71a6eb;
case 0x71a6ee:c.instructions+=97;goto B71a6ee;
case 0x71a6f1:c.instructions+=96;goto B71a6f1;
case 0x71a6f8:c.instructions+=95;goto B71a6f8;
case 0x71a6fb:c.instructions+=94;goto B71a6fb;
case 0x71a6fe:c.instructions+=93;goto B71a6fe;
case 0x71a701:c.instructions+=92;goto B71a701;
case 0x71a704:c.instructions+=91;goto B71a704;
case 0x71a707:c.instructions+=90;goto B71a707;
case 0x71a70a:c.instructions+=89;goto B71a70a;
case 0x71a70d:c.instructions+=88;goto B71a70d;
case 0x71a710:c.instructions+=87;goto B71a710;
case 0x71a713:c.instructions+=86;goto B71a713;
case 0x71a716:c.instructions+=85;goto B71a716;
case 0x71a719:c.instructions+=84;goto B71a719;
case 0x71a71c:c.instructions+=83;goto B71a71c;
case 0x71a71f:c.instructions+=82;goto B71a71f;
case 0x71a722:c.instructions+=81;goto B71a722;
case 0x71a725:c.instructions+=80;goto B71a725;
case 0x71a728:c.instructions+=79;goto B71a728;
case 0x71a72b:c.instructions+=78;goto B71a72b;
case 0x71a72e:c.instructions+=77;goto B71a72e;
case 0x71a731:c.instructions+=76;goto B71a731;
case 0x71a734:c.instructions+=75;goto B71a734;
case 0x71a737:c.instructions+=74;goto B71a737;
case 0x71a73a:c.instructions+=73;goto B71a73a;
case 0x71a73d:c.instructions+=72;goto B71a73d;
case 0x71a740:c.instructions+=71;goto B71a740;
case 0x71a743:c.instructions+=70;goto B71a743;
case 0x71a747:c.instructions+=69;goto B71a747;
case 0x71a74a:c.instructions+=68;goto B71a74a;
case 0x71a74d:c.instructions+=67;goto B71a74d;
case 0x71a751:c.instructions+=66;goto B71a751;
case 0x71a754:c.instructions+=65;goto B71a754;
case 0x71a757:c.instructions+=64;goto B71a757;
case 0x71a75a:c.instructions+=63;goto B71a75a;
case 0x71a75d:c.instructions+=62;goto B71a75d;
case 0x71a764:c.instructions+=61;goto B71a764;
case 0x71a76b:c.instructions+=60;goto B71a76b;
case 0x71a76e:c.instructions+=59;goto B71a76e;
case 0x71a772:c.instructions+=58;goto B71a772;
case 0x71a776:c.instructions+=57;goto B71a776;
case 0x71a779:c.instructions+=56;goto B71a779;
case 0x71a77c:c.instructions+=55;goto B71a77c;
case 0x71a77f:c.instructions+=54;goto B71a77f;
case 0x71a782:c.instructions+=53;goto B71a782;
case 0x71a786:c.instructions+=52;goto B71a786;
case 0x71a789:c.instructions+=51;goto B71a789;
case 0x71a78d:c.instructions+=50;goto B71a78d;
case 0x71a790:c.instructions+=49;goto B71a790;
case 0x71a793:c.instructions+=48;goto B71a793;
case 0x71a796:c.instructions+=47;goto B71a796;
case 0x71a799:c.instructions+=46;goto B71a799;
case 0x71a7a0:c.instructions+=45;goto B71a7a0;
case 0x71a7a7:c.instructions+=44;goto B71a7a7;
case 0x71a7aa:c.instructions+=43;goto B71a7aa;
case 0x71a7ad:c.instructions+=42;goto B71a7ad;
case 0x71a7b0:c.instructions+=41;goto B71a7b0;
case 0x71a7b3:c.instructions+=40;goto B71a7b3;
case 0x71a7b6:c.instructions+=39;goto B71a7b6;
case 0x71a7b9:c.instructions+=38;goto B71a7b9;
case 0x71a7bc:c.instructions+=37;goto B71a7bc;
case 0x71a7bf:c.instructions+=36;goto B71a7bf;
case 0x71a7c2:c.instructions+=35;goto B71a7c2;
case 0x71a7c5:c.instructions+=34;goto B71a7c5;
case 0x71a7c8:c.instructions+=33;goto B71a7c8;
case 0x71a7cb:c.instructions+=32;goto B71a7cb;
case 0x71a7ce:c.instructions+=31;goto B71a7ce;
case 0x71a7d1:c.instructions+=30;goto B71a7d1;
case 0x71a7d5:c.instructions+=29;goto B71a7d5;
case 0x71a7d8:c.instructions+=28;goto B71a7d8;
case 0x71a7df:c.instructions+=27;goto B71a7df;
case 0x71a7e2:c.instructions+=26;goto B71a7e2;
case 0x71a7e5:c.instructions+=25;goto B71a7e5;
case 0x71a7e8:c.instructions+=24;goto B71a7e8;
case 0x71a7eb:c.instructions+=23;goto B71a7eb;
case 0x71a7ee:c.instructions+=22;goto B71a7ee;
case 0x71a7f1:c.instructions+=21;goto B71a7f1;
case 0x71a7f4:c.instructions+=20;goto B71a7f4;
case 0x71a7f7:c.instructions+=19;goto B71a7f7;
case 0x71a7fb:c.instructions+=18;goto B71a7fb;
case 0x71a7ff:c.instructions+=17;goto B71a7ff;
case 0x71a803:c.instructions+=16;goto B71a803;
case 0x71a806:c.instructions+=15;goto B71a806;
case 0x71a80a:c.instructions+=14;goto B71a80a;
case 0x71a80d:c.instructions+=13;goto B71a80d;
case 0x71a811:c.instructions+=12;goto B71a811;
case 0x71a814:c.instructions+=11;goto B71a814;
case 0x71a817:c.instructions+=10;goto B71a817;
case 0x71a81a:c.instructions+=9;goto B71a81a;
case 0x71a81d:c.instructions+=8;goto B71a81d;
case 0x71a820:c.instructions+=7;goto B71a820;
case 0x71a824:c.instructions+=6;goto B71a824;
case 0x71a827:c.instructions+=5;goto B71a827;
case 0x71a82a:c.instructions+=4;goto B71a82a;
case 0x71a82e:c.instructions+=3;goto B71a82e;
case 0x71a82f:c.instructions+=2;goto B71a82f;
case 0x71a830:c.instructions+=1;goto B71a830;
case 0x71a831:goto L71a831;
case 0x71a832:c.instructions+=63;goto B71a832;
case 0x71a834:c.instructions+=62;goto B71a834;
case 0x71a835:c.instructions+=61;goto B71a835;
case 0x71a836:c.instructions+=60;goto B71a836;
case 0x71a839:c.instructions+=59;goto B71a839;
case 0x71a83c:c.instructions+=58;goto B71a83c;
case 0x71a83d:c.instructions+=57;goto B71a83d;
case 0x71a840:c.instructions+=56;goto B71a840;
case 0x71a844:c.instructions+=55;goto B71a844;
case 0x71a846:c.instructions+=54;goto B71a846;
case 0x71a84c:c.instructions+=53;goto B71a84c;
case 0x71a84d:c.instructions+=52;goto B71a84d;
case 0x71a84e:c.instructions+=51;goto B71a84e;
case 0x71a84f:c.instructions+=50;goto B71a84f;
case 0x71a852:c.instructions+=49;goto B71a852;
case 0x71a855:c.instructions+=48;goto B71a855;
case 0x71a858:c.instructions+=47;goto B71a858;
case 0x71a85b:c.instructions+=46;goto B71a85b;
case 0x71a85e:c.instructions+=45;goto B71a85e;
case 0x71a861:c.instructions+=44;goto B71a861;
case 0x71a864:c.instructions+=43;goto B71a864;
case 0x71a86a:c.instructions+=42;goto B71a86a;
case 0x71a86d:c.instructions+=41;goto B71a86d;
case 0x71a873:c.instructions+=40;goto B71a873;
case 0x71a876:c.instructions+=39;goto B71a876;
case 0x71a879:c.instructions+=38;goto B71a879;
case 0x71a87c:c.instructions+=37;goto B71a87c;
case 0x71a87f:c.instructions+=36;goto B71a87f;
case 0x71a885:c.instructions+=35;goto B71a885;
case 0x71a888:c.instructions+=34;goto B71a888;
case 0x71a88b:c.instructions+=33;goto B71a88b;
case 0x71a88c:c.instructions+=32;goto B71a88c;
case 0x71a88d:c.instructions+=31;goto B71a88d;
case 0x71a890:c.instructions+=30;goto B71a890;
case 0x71a893:c.instructions+=29;goto B71a893;
case 0x71a894:c.instructions+=28;goto B71a894;
case 0x71a895:c.instructions+=27;goto B71a895;
case 0x71a898:c.instructions+=26;goto B71a898;
case 0x71a89a:c.instructions+=25;goto B71a89a;
case 0x71a89b:c.instructions+=24;goto B71a89b;
case 0x71a89c:c.instructions+=23;goto B71a89c;
case 0x71a89f:c.instructions+=22;goto B71a89f;
case 0x71a8a2:c.instructions+=21;goto B71a8a2;
case 0x71a8a5:c.instructions+=20;goto B71a8a5;
case 0x71a8a8:c.instructions+=19;goto B71a8a8;
case 0x71a8a9:c.instructions+=18;goto B71a8a9;
case 0x71a8ac:c.instructions+=17;goto B71a8ac;
case 0x71a8ae:c.instructions+=16;goto B71a8ae;
case 0x71a8b1:c.instructions+=15;goto B71a8b1;
case 0x71a8b4:c.instructions+=14;goto B71a8b4;
case 0x71a8b7:c.instructions+=13;goto B71a8b7;
case 0x71a8ba:c.instructions+=12;goto B71a8ba;
case 0x71a8bd:c.instructions+=11;goto B71a8bd;
case 0x71a8c0:c.instructions+=10;goto B71a8c0;
case 0x71a8c3:c.instructions+=9;goto B71a8c3;
case 0x71a8c6:c.instructions+=8;goto B71a8c6;
case 0x71a8c9:c.instructions+=7;goto B71a8c9;
case 0x71a8cc:c.instructions+=6;goto B71a8cc;
case 0x71a8cf:c.instructions+=5;goto B71a8cf;
case 0x71a8d6:c.instructions+=4;goto B71a8d6;
case 0x71a8dd:c.instructions+=3;goto B71a8dd;
case 0x71a8e4:c.instructions+=2;goto B71a8e4;
case 0x71a8eb:c.instructions+=1;goto B71a8eb;
case 0x71a8ee:goto L71a8ee;
case 0x71a8f1:c.instructions+=73;goto B71a8f1;
case 0x71a8f5:c.instructions+=72;goto B71a8f5;
case 0x71a8f9:c.instructions+=71;goto B71a8f9;
case 0x71a8fc:c.instructions+=70;goto B71a8fc;
case 0x71a8ff:c.instructions+=69;goto B71a8ff;
case 0x71a902:c.instructions+=68;goto B71a902;
case 0x71a905:c.instructions+=67;goto B71a905;
case 0x71a908:c.instructions+=66;goto B71a908;
case 0x71a90b:c.instructions+=65;goto B71a90b;
case 0x71a90e:c.instructions+=64;goto B71a90e;
case 0x71a915:c.instructions+=63;goto B71a915;
case 0x71a91c:c.instructions+=62;goto B71a91c;
case 0x71a91f:c.instructions+=61;goto B71a91f;
case 0x71a922:c.instructions+=60;goto B71a922;
case 0x71a925:c.instructions+=59;goto B71a925;
case 0x71a928:c.instructions+=58;goto B71a928;
case 0x71a92b:c.instructions+=57;goto B71a92b;
case 0x71a92e:c.instructions+=56;goto B71a92e;
case 0x71a931:c.instructions+=55;goto B71a931;
case 0x71a934:c.instructions+=54;goto B71a934;
case 0x71a938:c.instructions+=53;goto B71a938;
case 0x71a93c:c.instructions+=52;goto B71a93c;
case 0x71a940:c.instructions+=51;goto B71a940;
case 0x71a943:c.instructions+=50;goto B71a943;
case 0x71a948:c.instructions+=49;goto B71a948;
case 0x71a94b:c.instructions+=48;goto B71a94b;
case 0x71a94f:c.instructions+=47;goto B71a94f;
case 0x71a952:c.instructions+=46;goto B71a952;
case 0x71a955:c.instructions+=45;goto B71a955;
case 0x71a958:c.instructions+=44;goto B71a958;
case 0x71a95b:c.instructions+=43;goto B71a95b;
case 0x71a95e:c.instructions+=42;goto B71a95e;
case 0x71a965:c.instructions+=41;goto B71a965;
case 0x71a96c:c.instructions+=40;goto B71a96c;
case 0x71a96f:c.instructions+=39;goto B71a96f;
case 0x71a972:c.instructions+=38;goto B71a972;
case 0x71a975:c.instructions+=37;goto B71a975;
case 0x71a978:c.instructions+=36;goto B71a978;
case 0x71a97b:c.instructions+=35;goto B71a97b;
case 0x71a97e:c.instructions+=34;goto B71a97e;
case 0x71a981:c.instructions+=33;goto B71a981;
case 0x71a984:c.instructions+=32;goto B71a984;
case 0x71a988:c.instructions+=31;goto B71a988;
case 0x71a98c:c.instructions+=30;goto B71a98c;
case 0x71a990:c.instructions+=29;goto B71a990;
case 0x71a993:c.instructions+=28;goto B71a993;
case 0x71a997:c.instructions+=27;goto B71a997;
case 0x71a99a:c.instructions+=26;goto B71a99a;
case 0x71a99f:c.instructions+=25;goto B71a99f;
case 0x71a9a2:c.instructions+=24;goto B71a9a2;
case 0x71a9a6:c.instructions+=23;goto B71a9a6;
case 0x71a9a9:c.instructions+=22;goto B71a9a9;
case 0x71a9ac:c.instructions+=21;goto B71a9ac;
case 0x71a9b0:c.instructions+=20;goto B71a9b0;
case 0x71a9b3:c.instructions+=19;goto B71a9b3;
case 0x71a9b6:c.instructions+=18;goto B71a9b6;
case 0x71a9bd:c.instructions+=17;goto B71a9bd;
case 0x71a9c4:c.instructions+=16;goto B71a9c4;
case 0x71a9c7:c.instructions+=15;goto B71a9c7;
case 0x71a9ca:c.instructions+=14;goto B71a9ca;
case 0x71a9cd:c.instructions+=13;goto B71a9cd;
case 0x71a9d0:c.instructions+=12;goto B71a9d0;
case 0x71a9d3:c.instructions+=11;goto B71a9d3;
case 0x71a9d6:c.instructions+=10;goto B71a9d6;
case 0x71a9d9:c.instructions+=9;goto B71a9d9;
case 0x71a9db:c.instructions+=8;goto B71a9db;
case 0x71a9df:c.instructions+=7;goto B71a9df;
case 0x71a9e2:c.instructions+=6;goto B71a9e2;
case 0x71a9e6:c.instructions+=5;goto B71a9e6;
case 0x71a9e9:c.instructions+=4;goto B71a9e9;
case 0x71a9ee:c.instructions+=3;goto B71a9ee;
case 0x71a9f0:c.instructions+=2;goto B71a9f0;
case 0x71a9f5:c.instructions+=1;goto B71a9f5;
case 0x71a9fb:goto L71a9fb;
case 0x71a9fe:c.instructions+=27;goto B71a9fe;
case 0x71aa02:c.instructions+=26;goto B71aa02;
case 0x71aa06:c.instructions+=25;goto B71aa06;
case 0x71aa09:c.instructions+=24;goto B71aa09;
case 0x71aa0c:c.instructions+=23;goto B71aa0c;
case 0x71aa0f:c.instructions+=22;goto B71aa0f;
case 0x71aa12:c.instructions+=21;goto B71aa12;
case 0x71aa15:c.instructions+=20;goto B71aa15;
case 0x71aa18:c.instructions+=19;goto B71aa18;
case 0x71aa1b:c.instructions+=18;goto B71aa1b;
case 0x71aa22:c.instructions+=17;goto B71aa22;
case 0x71aa29:c.instructions+=16;goto B71aa29;
case 0x71aa2c:c.instructions+=15;goto B71aa2c;
case 0x71aa2f:c.instructions+=14;goto B71aa2f;
case 0x71aa32:c.instructions+=13;goto B71aa32;
case 0x71aa35:c.instructions+=12;goto B71aa35;
case 0x71aa38:c.instructions+=11;goto B71aa38;
case 0x71aa3b:c.instructions+=10;goto B71aa3b;
case 0x71aa3e:c.instructions+=9;goto B71aa3e;
case 0x71aa42:c.instructions+=8;goto B71aa42;
case 0x71aa46:c.instructions+=7;goto B71aa46;
case 0x71aa4b:c.instructions+=6;goto B71aa4b;
case 0x71aa4f:c.instructions+=5;goto B71aa4f;
case 0x71aa52:c.instructions+=4;goto B71aa52;
case 0x71aa55:c.instructions+=3;goto B71aa55;
case 0x71aa58:c.instructions+=2;goto B71aa58;
case 0x71aa5b:c.instructions+=1;goto B71aa5b;
case 0x71aa60:goto L71aa60;
case 0x71aa65:c.instructions+=43;goto B71aa65;
case 0x71aa69:c.instructions+=42;goto B71aa69;
case 0x71aa6d:c.instructions+=41;goto B71aa6d;
case 0x71aa71:c.instructions+=40;goto B71aa71;
case 0x71aa76:c.instructions+=39;goto B71aa76;
case 0x71aa7a:c.instructions+=38;goto B71aa7a;
case 0x71aa7f:c.instructions+=37;goto B71aa7f;
case 0x71aa83:c.instructions+=36;goto B71aa83;
case 0x71aa88:c.instructions+=35;goto B71aa88;
case 0x71aa8c:c.instructions+=34;goto B71aa8c;
case 0x71aa90:c.instructions+=33;goto B71aa90;
case 0x71aa94:c.instructions+=32;goto B71aa94;
case 0x71aa99:c.instructions+=31;goto B71aa99;
case 0x71aa9d:c.instructions+=30;goto B71aa9d;
case 0x71aaa1:c.instructions+=29;goto B71aaa1;
case 0x71aaa5:c.instructions+=28;goto B71aaa5;
case 0x71aaad:c.instructions+=27;goto B71aaad;
case 0x71aab1:c.instructions+=26;goto B71aab1;
case 0x71aab5:c.instructions+=25;goto B71aab5;
case 0x71aab9:c.instructions+=24;goto B71aab9;
case 0x71aabd:c.instructions+=23;goto B71aabd;
case 0x71aac1:c.instructions+=22;goto B71aac1;
case 0x71aac5:c.instructions+=21;goto B71aac5;
case 0x71aac9:c.instructions+=20;goto B71aac9;
case 0x71aad1:c.instructions+=19;goto B71aad1;
case 0x71aad5:c.instructions+=18;goto B71aad5;
case 0x71aad9:c.instructions+=17;goto B71aad9;
case 0x71aadd:c.instructions+=16;goto B71aadd;
case 0x71aadf:c.instructions+=15;goto B71aadf;
case 0x71aae7:c.instructions+=14;goto B71aae7;
case 0x71aaeb:c.instructions+=13;goto B71aaeb;
case 0x71aaee:c.instructions+=12;goto B71aaee;
case 0x71aaf3:c.instructions+=11;goto B71aaf3;
case 0x71aaf7:c.instructions+=10;goto B71aaf7;
case 0x71aaf9:c.instructions+=9;goto B71aaf9;
case 0x71aafd:c.instructions+=8;goto B71aafd;
case 0x71ab00:c.instructions+=7;goto B71ab00;
case 0x71ab04:c.instructions+=6;goto B71ab04;
case 0x71ab08:c.instructions+=5;goto B71ab08;
case 0x71ab09:c.instructions+=4;goto B71ab09;
case 0x71ab0e:c.instructions+=3;goto B71ab0e;
case 0x71ab12:c.instructions+=2;goto B71ab12;
case 0x71ab17:c.instructions+=1;goto B71ab17;
case 0x71ab1d:goto L71ab1d;
case 0x71ab1e:c.instructions+=14;goto B71ab1e;
case 0x71ab1f:c.instructions+=13;goto B71ab1f;
case 0x71ab20:c.instructions+=12;goto B71ab20;
case 0x71ab21:c.instructions+=11;goto B71ab21;
case 0x71ab22:c.instructions+=10;goto B71ab22;
case 0x71ab23:c.instructions+=9;goto B71ab23;
case 0x71ab24:c.instructions+=8;goto B71ab24;
case 0x71ab25:c.instructions+=7;goto B71ab25;
case 0x71ab26:c.instructions+=6;goto B71ab26;
case 0x71ab27:c.instructions+=5;goto B71ab27;
case 0x71ab29:c.instructions+=4;goto B71ab29;
case 0x71ab2a:c.instructions+=3;goto B71ab2a;
case 0x71ab2c:c.instructions+=2;goto B71ab2c;
case 0x71ab2d:c.instructions+=1;goto B71ab2d;
case 0x71ab2e:goto L71ab2e;
case 0x71ab2f:c.instructions+=63;goto B71ab2f;
case 0x71ab31:c.instructions+=62;goto B71ab31;
case 0x71ab32:c.instructions+=61;goto B71ab32;
case 0x71ab33:c.instructions+=60;goto B71ab33;
case 0x71ab36:c.instructions+=59;goto B71ab36;
case 0x71ab39:c.instructions+=58;goto B71ab39;
case 0x71ab3a:c.instructions+=57;goto B71ab3a;
case 0x71ab3d:c.instructions+=56;goto B71ab3d;
case 0x71ab41:c.instructions+=55;goto B71ab41;
case 0x71ab43:c.instructions+=54;goto B71ab43;
case 0x71ab49:c.instructions+=53;goto B71ab49;
case 0x71ab4a:c.instructions+=52;goto B71ab4a;
case 0x71ab4b:c.instructions+=51;goto B71ab4b;
case 0x71ab4c:c.instructions+=50;goto B71ab4c;
case 0x71ab4f:c.instructions+=49;goto B71ab4f;
case 0x71ab52:c.instructions+=48;goto B71ab52;
case 0x71ab55:c.instructions+=47;goto B71ab55;
case 0x71ab58:c.instructions+=46;goto B71ab58;
case 0x71ab5b:c.instructions+=45;goto B71ab5b;
case 0x71ab5e:c.instructions+=44;goto B71ab5e;
case 0x71ab61:c.instructions+=43;goto B71ab61;
case 0x71ab67:c.instructions+=42;goto B71ab67;
case 0x71ab6a:c.instructions+=41;goto B71ab6a;
case 0x71ab70:c.instructions+=40;goto B71ab70;
case 0x71ab73:c.instructions+=39;goto B71ab73;
case 0x71ab76:c.instructions+=38;goto B71ab76;
case 0x71ab79:c.instructions+=37;goto B71ab79;
case 0x71ab7c:c.instructions+=36;goto B71ab7c;
case 0x71ab82:c.instructions+=35;goto B71ab82;
case 0x71ab85:c.instructions+=34;goto B71ab85;
case 0x71ab88:c.instructions+=33;goto B71ab88;
case 0x71ab89:c.instructions+=32;goto B71ab89;
case 0x71ab8a:c.instructions+=31;goto B71ab8a;
case 0x71ab8d:c.instructions+=30;goto B71ab8d;
case 0x71ab90:c.instructions+=29;goto B71ab90;
case 0x71ab91:c.instructions+=28;goto B71ab91;
case 0x71ab92:c.instructions+=27;goto B71ab92;
case 0x71ab95:c.instructions+=26;goto B71ab95;
case 0x71ab97:c.instructions+=25;goto B71ab97;
case 0x71ab98:c.instructions+=24;goto B71ab98;
case 0x71ab99:c.instructions+=23;goto B71ab99;
case 0x71ab9c:c.instructions+=22;goto B71ab9c;
case 0x71ab9f:c.instructions+=21;goto B71ab9f;
case 0x71aba2:c.instructions+=20;goto B71aba2;
case 0x71aba5:c.instructions+=19;goto B71aba5;
case 0x71aba6:c.instructions+=18;goto B71aba6;
case 0x71aba9:c.instructions+=17;goto B71aba9;
case 0x71abab:c.instructions+=16;goto B71abab;
case 0x71abae:c.instructions+=15;goto B71abae;
case 0x71abb1:c.instructions+=14;goto B71abb1;
case 0x71abb4:c.instructions+=13;goto B71abb4;
case 0x71abb7:c.instructions+=12;goto B71abb7;
case 0x71abba:c.instructions+=11;goto B71abba;
case 0x71abbd:c.instructions+=10;goto B71abbd;
case 0x71abc0:c.instructions+=9;goto B71abc0;
case 0x71abc3:c.instructions+=8;goto B71abc3;
case 0x71abc6:c.instructions+=7;goto B71abc6;
case 0x71abc9:c.instructions+=6;goto B71abc9;
case 0x71abcc:c.instructions+=5;goto B71abcc;
case 0x71abd3:c.instructions+=4;goto B71abd3;
case 0x71abda:c.instructions+=3;goto B71abda;
case 0x71abe1:c.instructions+=2;goto B71abe1;
case 0x71abe8:c.instructions+=1;goto B71abe8;
case 0x71abeb:goto L71abeb;
case 0x71abee:c.instructions+=76;goto B71abee;
case 0x71abf2:c.instructions+=75;goto B71abf2;
case 0x71abf6:c.instructions+=74;goto B71abf6;
case 0x71abf9:c.instructions+=73;goto B71abf9;
case 0x71abfc:c.instructions+=72;goto B71abfc;
case 0x71abff:c.instructions+=71;goto B71abff;
case 0x71ac02:c.instructions+=70;goto B71ac02;
case 0x71ac05:c.instructions+=69;goto B71ac05;
case 0x71ac08:c.instructions+=68;goto B71ac08;
case 0x71ac0b:c.instructions+=67;goto B71ac0b;
case 0x71ac0e:c.instructions+=66;goto B71ac0e;
case 0x71ac15:c.instructions+=65;goto B71ac15;
case 0x71ac1c:c.instructions+=64;goto B71ac1c;
case 0x71ac1f:c.instructions+=63;goto B71ac1f;
case 0x71ac22:c.instructions+=62;goto B71ac22;
case 0x71ac25:c.instructions+=61;goto B71ac25;
case 0x71ac28:c.instructions+=60;goto B71ac28;
case 0x71ac2b:c.instructions+=59;goto B71ac2b;
case 0x71ac2e:c.instructions+=58;goto B71ac2e;
case 0x71ac31:c.instructions+=57;goto B71ac31;
case 0x71ac34:c.instructions+=56;goto B71ac34;
case 0x71ac38:c.instructions+=55;goto B71ac38;
case 0x71ac3c:c.instructions+=54;goto B71ac3c;
case 0x71ac40:c.instructions+=53;goto B71ac40;
case 0x71ac43:c.instructions+=52;goto B71ac43;
case 0x71ac48:c.instructions+=51;goto B71ac48;
case 0x71ac4b:c.instructions+=50;goto B71ac4b;
case 0x71ac4f:c.instructions+=49;goto B71ac4f;
case 0x71ac52:c.instructions+=48;goto B71ac52;
case 0x71ac55:c.instructions+=47;goto B71ac55;
case 0x71ac58:c.instructions+=46;goto B71ac58;
case 0x71ac5b:c.instructions+=45;goto B71ac5b;
case 0x71ac5e:c.instructions+=44;goto B71ac5e;
case 0x71ac61:c.instructions+=43;goto B71ac61;
case 0x71ac68:c.instructions+=42;goto B71ac68;
case 0x71ac6f:c.instructions+=41;goto B71ac6f;
case 0x71ac72:c.instructions+=40;goto B71ac72;
case 0x71ac75:c.instructions+=39;goto B71ac75;
case 0x71ac78:c.instructions+=38;goto B71ac78;
case 0x71ac7b:c.instructions+=37;goto B71ac7b;
case 0x71ac7e:c.instructions+=36;goto B71ac7e;
case 0x71ac81:c.instructions+=35;goto B71ac81;
case 0x71ac84:c.instructions+=34;goto B71ac84;
case 0x71ac87:c.instructions+=33;goto B71ac87;
case 0x71ac8b:c.instructions+=32;goto B71ac8b;
case 0x71ac8f:c.instructions+=31;goto B71ac8f;
case 0x71ac93:c.instructions+=30;goto B71ac93;
case 0x71ac96:c.instructions+=29;goto B71ac96;
case 0x71ac9a:c.instructions+=28;goto B71ac9a;
case 0x71ac9d:c.instructions+=27;goto B71ac9d;
case 0x71aca2:c.instructions+=26;goto B71aca2;
case 0x71aca5:c.instructions+=25;goto B71aca5;
case 0x71aca9:c.instructions+=24;goto B71aca9;
case 0x71acac:c.instructions+=23;goto B71acac;
case 0x71acaf:c.instructions+=22;goto B71acaf;
case 0x71acb2:c.instructions+=21;goto B71acb2;
case 0x71acb6:c.instructions+=20;goto B71acb6;
case 0x71acb9:c.instructions+=19;goto B71acb9;
case 0x71acbc:c.instructions+=18;goto B71acbc;
case 0x71acc3:c.instructions+=17;goto B71acc3;
case 0x71acca:c.instructions+=16;goto B71acca;
case 0x71accd:c.instructions+=15;goto B71accd;
case 0x71acd0:c.instructions+=14;goto B71acd0;
case 0x71acd3:c.instructions+=13;goto B71acd3;
case 0x71acd6:c.instructions+=12;goto B71acd6;
case 0x71acd9:c.instructions+=11;goto B71acd9;
case 0x71acdc:c.instructions+=10;goto B71acdc;
case 0x71acdf:c.instructions+=9;goto B71acdf;
case 0x71ace1:c.instructions+=8;goto B71ace1;
case 0x71ace5:c.instructions+=7;goto B71ace5;
case 0x71ace8:c.instructions+=6;goto B71ace8;
case 0x71acec:c.instructions+=5;goto B71acec;
case 0x71acef:c.instructions+=4;goto B71acef;
case 0x71acf4:c.instructions+=3;goto B71acf4;
case 0x71acf6:c.instructions+=2;goto B71acf6;
case 0x71acfb:c.instructions+=1;goto B71acfb;
case 0x71ad01:goto L71ad01;
case 0x71ad04:c.instructions+=28;goto B71ad04;
case 0x71ad08:c.instructions+=27;goto B71ad08;
case 0x71ad0c:c.instructions+=26;goto B71ad0c;
case 0x71ad0f:c.instructions+=25;goto B71ad0f;
case 0x71ad12:c.instructions+=24;goto B71ad12;
case 0x71ad15:c.instructions+=23;goto B71ad15;
case 0x71ad18:c.instructions+=22;goto B71ad18;
case 0x71ad1b:c.instructions+=21;goto B71ad1b;
case 0x71ad1e:c.instructions+=20;goto B71ad1e;
case 0x71ad21:c.instructions+=19;goto B71ad21;
case 0x71ad24:c.instructions+=18;goto B71ad24;
case 0x71ad2b:c.instructions+=17;goto B71ad2b;
case 0x71ad32:c.instructions+=16;goto B71ad32;
case 0x71ad35:c.instructions+=15;goto B71ad35;
case 0x71ad38:c.instructions+=14;goto B71ad38;
case 0x71ad3b:c.instructions+=13;goto B71ad3b;
case 0x71ad3e:c.instructions+=12;goto B71ad3e;
case 0x71ad41:c.instructions+=11;goto B71ad41;
case 0x71ad44:c.instructions+=10;goto B71ad44;
case 0x71ad47:c.instructions+=9;goto B71ad47;
case 0x71ad4b:c.instructions+=8;goto B71ad4b;
case 0x71ad4f:c.instructions+=7;goto B71ad4f;
case 0x71ad54:c.instructions+=6;goto B71ad54;
case 0x71ad58:c.instructions+=5;goto B71ad58;
case 0x71ad5b:c.instructions+=4;goto B71ad5b;
case 0x71ad5e:c.instructions+=3;goto B71ad5e;
case 0x71ad61:c.instructions+=2;goto B71ad61;
case 0x71ad64:c.instructions+=1;goto B71ad64;
case 0x71ad69:goto L71ad69;
case 0x71ad6e:c.instructions+=43;goto B71ad6e;
case 0x71ad72:c.instructions+=42;goto B71ad72;
case 0x71ad76:c.instructions+=41;goto B71ad76;
case 0x71ad7a:c.instructions+=40;goto B71ad7a;
case 0x71ad7f:c.instructions+=39;goto B71ad7f;
case 0x71ad83:c.instructions+=38;goto B71ad83;
case 0x71ad88:c.instructions+=37;goto B71ad88;
case 0x71ad8c:c.instructions+=36;goto B71ad8c;
case 0x71ad91:c.instructions+=35;goto B71ad91;
case 0x71ad95:c.instructions+=34;goto B71ad95;
case 0x71ad99:c.instructions+=33;goto B71ad99;
case 0x71ad9d:c.instructions+=32;goto B71ad9d;
case 0x71ada2:c.instructions+=31;goto B71ada2;
case 0x71ada6:c.instructions+=30;goto B71ada6;
case 0x71adaa:c.instructions+=29;goto B71adaa;
case 0x71adae:c.instructions+=28;goto B71adae;
case 0x71adb6:c.instructions+=27;goto B71adb6;
case 0x71adba:c.instructions+=26;goto B71adba;
case 0x71adbe:c.instructions+=25;goto B71adbe;
case 0x71adc2:c.instructions+=24;goto B71adc2;
case 0x71adc6:c.instructions+=23;goto B71adc6;
case 0x71adca:c.instructions+=22;goto B71adca;
case 0x71adce:c.instructions+=21;goto B71adce;
case 0x71add2:c.instructions+=20;goto B71add2;
case 0x71adda:c.instructions+=19;goto B71adda;
case 0x71adde:c.instructions+=18;goto B71adde;
case 0x71ade2:c.instructions+=17;goto B71ade2;
case 0x71ade6:c.instructions+=16;goto B71ade6;
case 0x71ade8:c.instructions+=15;goto B71ade8;
case 0x71adf0:c.instructions+=14;goto B71adf0;
case 0x71adf4:c.instructions+=13;goto B71adf4;
case 0x71adf7:c.instructions+=12;goto B71adf7;
case 0x71adfc:c.instructions+=11;goto B71adfc;
case 0x71ae00:c.instructions+=10;goto B71ae00;
case 0x71ae02:c.instructions+=9;goto B71ae02;
case 0x71ae06:c.instructions+=8;goto B71ae06;
case 0x71ae09:c.instructions+=7;goto B71ae09;
case 0x71ae0d:c.instructions+=6;goto B71ae0d;
case 0x71ae11:c.instructions+=5;goto B71ae11;
case 0x71ae12:c.instructions+=4;goto B71ae12;
case 0x71ae17:c.instructions+=3;goto B71ae17;
case 0x71ae1b:c.instructions+=2;goto B71ae1b;
case 0x71ae20:c.instructions+=1;goto B71ae20;
case 0x71ae26:goto L71ae26;
case 0x71ae27:c.instructions+=14;goto B71ae27;
case 0x71ae28:c.instructions+=13;goto B71ae28;
case 0x71ae29:c.instructions+=12;goto B71ae29;
case 0x71ae2a:c.instructions+=11;goto B71ae2a;
case 0x71ae2b:c.instructions+=10;goto B71ae2b;
case 0x71ae2c:c.instructions+=9;goto B71ae2c;
case 0x71ae2d:c.instructions+=8;goto B71ae2d;
case 0x71ae2e:c.instructions+=7;goto B71ae2e;
case 0x71ae2f:c.instructions+=6;goto B71ae2f;
case 0x71ae30:c.instructions+=5;goto B71ae30;
case 0x71ae32:c.instructions+=4;goto B71ae32;
case 0x71ae33:c.instructions+=3;goto B71ae33;
case 0x71ae35:c.instructions+=2;goto B71ae35;
case 0x71ae36:c.instructions+=1;goto B71ae36;
case 0x71ae37:goto L71ae37;
case 0x71ae38:c.instructions+=17;goto B71ae38;
case 0x71ae3a:c.instructions+=16;goto B71ae3a;
case 0x71ae3d:c.instructions+=15;goto B71ae3d;
case 0x71ae40:c.instructions+=14;goto B71ae40;
case 0x71ae43:c.instructions+=13;goto B71ae43;
case 0x71ae48:c.instructions+=12;goto B71ae48;
case 0x71ae4b:c.instructions+=11;goto B71ae4b;
case 0x71ae51:c.instructions+=10;goto B71ae51;
case 0x71ae54:c.instructions+=9;goto B71ae54;
case 0x71ae56:c.instructions+=8;goto B71ae56;
case 0x71ae5b:c.instructions+=7;goto B71ae5b;
case 0x71ae5e:c.instructions+=6;goto B71ae5e;
case 0x71ae61:c.instructions+=5;goto B71ae61;
case 0x71ae66:c.instructions+=4;goto B71ae66;
case 0x71ae69:c.instructions+=3;goto B71ae69;
case 0x71ae6c:c.instructions+=2;goto B71ae6c;
case 0x71ae6d:c.instructions+=1;goto B71ae6d;
case 0x71ae6e:goto L71ae6e;
case 0x71ae6f:c.instructions+=118;goto B71ae6f;
case 0x71ae71:c.instructions+=117;goto B71ae71;
case 0x71ae72:c.instructions+=116;goto B71ae72;
case 0x71ae75:c.instructions+=115;goto B71ae75;
case 0x71ae78:c.instructions+=114;goto B71ae78;
case 0x71ae7b:c.instructions+=113;goto B71ae7b;
case 0x71ae7e:c.instructions+=112;goto B71ae7e;
case 0x71ae82:c.instructions+=111;goto B71ae82;
case 0x71ae86:c.instructions+=110;goto B71ae86;
case 0x71ae8a:c.instructions+=109;goto B71ae8a;
case 0x71ae8f:c.instructions+=108;goto B71ae8f;
case 0x71ae92:c.instructions+=107;goto B71ae92;
case 0x71ae97:c.instructions+=106;goto B71ae97;
case 0x71ae9b:c.instructions+=105;goto B71ae9b;
case 0x71ae9e:c.instructions+=104;goto B71ae9e;
case 0x71aea1:c.instructions+=103;goto B71aea1;
case 0x71aea6:c.instructions+=102;goto B71aea6;
case 0x71aea9:c.instructions+=101;goto B71aea9;
case 0x71aeae:c.instructions+=100;goto B71aeae;
case 0x71aeb2:c.instructions+=99;goto B71aeb2;
case 0x71aeb7:c.instructions+=98;goto B71aeb7;
case 0x71aeba:c.instructions+=97;goto B71aeba;
case 0x71aebf:c.instructions+=96;goto B71aebf;
case 0x71aec3:c.instructions+=95;goto B71aec3;
case 0x71aec6:c.instructions+=94;goto B71aec6;
case 0x71aec9:c.instructions+=93;goto B71aec9;
case 0x71aecc:c.instructions+=92;goto B71aecc;
case 0x71aecf:c.instructions+=91;goto B71aecf;
case 0x71aed2:c.instructions+=90;goto B71aed2;
case 0x71aed5:c.instructions+=89;goto B71aed5;
case 0x71aed8:c.instructions+=88;goto B71aed8;
case 0x71aedb:c.instructions+=87;goto B71aedb;
case 0x71aedf:c.instructions+=86;goto B71aedf;
case 0x71aee2:c.instructions+=85;goto B71aee2;
case 0x71aee6:c.instructions+=84;goto B71aee6;
case 0x71aeea:c.instructions+=83;goto B71aeea;
case 0x71aeee:c.instructions+=82;goto B71aeee;
case 0x71aef1:c.instructions+=81;goto B71aef1;
case 0x71aef5:c.instructions+=80;goto B71aef5;
case 0x71aef9:c.instructions+=79;goto B71aef9;
case 0x71aefe:c.instructions+=78;goto B71aefe;
case 0x71af01:c.instructions+=77;goto B71af01;
case 0x71af06:c.instructions+=76;goto B71af06;
case 0x71af0a:c.instructions+=75;goto B71af0a;
case 0x71af0d:c.instructions+=74;goto B71af0d;
case 0x71af10:c.instructions+=73;goto B71af10;
case 0x71af13:c.instructions+=72;goto B71af13;
case 0x71af17:c.instructions+=71;goto B71af17;
case 0x71af1a:c.instructions+=70;goto B71af1a;
case 0x71af1d:c.instructions+=69;goto B71af1d;
case 0x71af20:c.instructions+=68;goto B71af20;
case 0x71af23:c.instructions+=67;goto B71af23;
case 0x71af26:c.instructions+=66;goto B71af26;
case 0x71af29:c.instructions+=65;goto B71af29;
case 0x71af2c:c.instructions+=64;goto B71af2c;
case 0x71af30:c.instructions+=63;goto B71af30;
case 0x71af33:c.instructions+=62;goto B71af33;
case 0x71af38:c.instructions+=61;goto B71af38;
case 0x71af3b:c.instructions+=60;goto B71af3b;
case 0x71af40:c.instructions+=59;goto B71af40;
case 0x71af44:c.instructions+=58;goto B71af44;
case 0x71af49:c.instructions+=57;goto B71af49;
case 0x71af4c:c.instructions+=56;goto B71af4c;
case 0x71af51:c.instructions+=55;goto B71af51;
case 0x71af55:c.instructions+=54;goto B71af55;
case 0x71af58:c.instructions+=53;goto B71af58;
case 0x71af5b:c.instructions+=52;goto B71af5b;
case 0x71af5f:c.instructions+=51;goto B71af5f;
case 0x71af62:c.instructions+=50;goto B71af62;
case 0x71af65:c.instructions+=49;goto B71af65;
case 0x71af68:c.instructions+=48;goto B71af68;
case 0x71af6b:c.instructions+=47;goto B71af6b;
case 0x71af6e:c.instructions+=46;goto B71af6e;
case 0x71af72:c.instructions+=45;goto B71af72;
case 0x71af75:c.instructions+=44;goto B71af75;
case 0x71af79:c.instructions+=43;goto B71af79;
case 0x71af7d:c.instructions+=42;goto B71af7d;
case 0x71af80:c.instructions+=41;goto B71af80;
case 0x71af83:c.instructions+=40;goto B71af83;
case 0x71af87:c.instructions+=39;goto B71af87;
case 0x71af8a:c.instructions+=38;goto B71af8a;
case 0x71af8d:c.instructions+=37;goto B71af8d;
case 0x71af90:c.instructions+=36;goto B71af90;
case 0x71af94:c.instructions+=35;goto B71af94;
case 0x71af97:c.instructions+=34;goto B71af97;
case 0x71af9a:c.instructions+=33;goto B71af9a;
case 0x71af9d:c.instructions+=32;goto B71af9d;
case 0x71afa0:c.instructions+=31;goto B71afa0;
case 0x71afa4:c.instructions+=30;goto B71afa4;
case 0x71afa5:c.instructions+=29;goto B71afa5;
case 0x71afa8:c.instructions+=28;goto B71afa8;
case 0x71afab:c.instructions+=27;goto B71afab;
case 0x71afae:c.instructions+=26;goto B71afae;
case 0x71afb1:c.instructions+=25;goto B71afb1;
case 0x71afb5:c.instructions+=24;goto B71afb5;
case 0x71afb8:c.instructions+=23;goto B71afb8;
case 0x71afbb:c.instructions+=22;goto B71afbb;
case 0x71afbe:c.instructions+=21;goto B71afbe;
case 0x71afc1:c.instructions+=20;goto B71afc1;
case 0x71afc4:c.instructions+=19;goto B71afc4;
case 0x71afc7:c.instructions+=18;goto B71afc7;
case 0x71afca:c.instructions+=17;goto B71afca;
case 0x71afce:c.instructions+=16;goto B71afce;
case 0x71afd1:c.instructions+=15;goto B71afd1;
case 0x71afd4:c.instructions+=14;goto B71afd4;
case 0x71afd7:c.instructions+=13;goto B71afd7;
case 0x71afdb:c.instructions+=12;goto B71afdb;
case 0x71afdf:c.instructions+=11;goto B71afdf;
case 0x71afe3:c.instructions+=10;goto B71afe3;
case 0x71afe6:c.instructions+=9;goto B71afe6;
case 0x71afe9:c.instructions+=8;goto B71afe9;
case 0x71afec:c.instructions+=7;goto B71afec;
case 0x71afef:c.instructions+=6;goto B71afef;
case 0x71aff2:c.instructions+=5;goto B71aff2;
case 0x71aff5:c.instructions+=4;goto B71aff5;
case 0x71aff8:c.instructions+=3;goto B71aff8;
case 0x71affb:c.instructions+=2;goto B71affb;
case 0x71afff:c.instructions+=1;goto B71afff;
default:missing_instruction(c.pc);}
B71a001:L71a001:{c.instructions+=7;NFSU2_TR(0x71a001);
w2(R+4384,shr<u16>(r2(R+4384),u64(u32(0x8ull))));
w2(R+4386,shr<u16>(r2(R+4386),u64(u32(0x8ull))));
w2(R+4388,shr<u16>(r2(R+4388),u64(u32(0x8ull))));
w2(R+4390,shr<u16>(r2(R+4390),u64(u32(0x8ull))));
}
B71a005:{NFSU2_TR(0x71a005);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4384),8);
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
B71a008:{NFSU2_TR(0x71a008);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71a00b:{NFSU2_TR(0x71a00b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B71a00e:{NFSU2_TR(0x71a00e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B71a011:{NFSU2_TR(0x71a011);
u8 U[6];
w1(R+512,u8((r4(R+8))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+8),u32(0x8ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71a014:{NFSU2_TR(0x71a014);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x719f14u,719);}
}
B71a01a:L71a01a:{c.instructions+=4;NFSU2_TR(0x71a01a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71a01b:{NFSU2_TR(0x71a01b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71a01c:{NFSU2_TR(0x71a01c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71a01d:{NFSU2_TR(0x71a01d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71a01e:L71a01e:{c.instructions+=10;NFSU2_TR(0x71a01e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a01f:{NFSU2_TR(0x71a01f);
__builtin_memmove((R+20),(R+16),4);
}
B71a021:{NFSU2_TR(0x71a021);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a022:{NFSU2_TR(0x71a022);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a023:{NFSU2_TR(0x71a023);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71a026:{NFSU2_TR(0x71a026);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71a029:{NFSU2_TR(0x71a029);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B71a02c:{NFSU2_TR(0x71a02c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B71a02e:{NFSU2_TR(0x71a02e);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71a031:{NFSU2_TR(0x71a031);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71a034:L71a034:{c.instructions+=81;NFSU2_TR(0x71a034);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71a037:{NFSU2_TR(0x71a037);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B71a03b:{NFSU2_TR(0x71a03b);
__builtin_memmove((R+4384),(R+4352),8);
}
B71a03e:{NFSU2_TR(0x71a03e);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71a041:{NFSU2_TR(0x71a041);
__builtin_memmove((R+4432),gp(0x7c66d0),8);
}
B71a048:{NFSU2_TR(0x71a048);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B71a04b:{NFSU2_TR(0x71a04b);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4438))));
}
B71a04e:{NFSU2_TR(0x71a04e);
__builtin_memmove((R+4400),(R+4368),8);
}
B71a051:{NFSU2_TR(0x71a051);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B71a054:{NFSU2_TR(0x71a054);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4432))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4434))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4436))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4438))));
}
B71a057:{NFSU2_TR(0x71a057);
__builtin_memmove((R+4448),gp(0x7c66e0),8);
}
B71a05e:{NFSU2_TR(0x71a05e);
__builtin_memmove((R+4416),(R+4368),8);
}
B71a061:{NFSU2_TR(0x71a061);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4454))));
}
B71a064:{NFSU2_TR(0x71a064);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71a067:{NFSU2_TR(0x71a067);
__builtin_memmove((R+4432),(R+4400),8);
}
B71a06a:{NFSU2_TR(0x71a06a);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4454))));
}
B71a06d:{NFSU2_TR(0x71a06d);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4422))));
}
B71a070:{NFSU2_TR(0x71a070);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4432))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4434))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4436))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4438))));
}
B71a073:{NFSU2_TR(0x71a073);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(U+0))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(U+2))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(U+4))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(U+6))));
}
B71a07a:{NFSU2_TR(0x71a07a);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(U+0))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(U+2))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(U+4))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(U+6))));
}
B71a081:{NFSU2_TR(0x71a081);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x8ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x8ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x8ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x8ull))));
}
B71a085:{NFSU2_TR(0x71a085);
w2(R+4384,shr<u16>(r2(R+4384),u64(u32(0x8ull))));
w2(R+4386,shr<u16>(r2(R+4386),u64(u32(0x8ull))));
w2(R+4388,shr<u16>(r2(R+4388),u64(u32(0x8ull))));
w2(R+4390,shr<u16>(r2(R+4390),u64(u32(0x8ull))));
}
B71a089:{NFSU2_TR(0x71a089);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4384),8);
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
B71a08c:{NFSU2_TR(0x71a08c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71a090:{NFSU2_TR(0x71a090);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B71a094:{NFSU2_TR(0x71a094);
__builtin_memmove((R+4416),(R+4368),8);
}
B71a097:{NFSU2_TR(0x71a097);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66f0),8);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(U+0))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(U+2))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(U+4))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(U+6))));
}
B71a09e:{NFSU2_TR(0x71a09e);
__builtin_memmove((R+4432),(R+4400),8);
}
B71a0a1:{NFSU2_TR(0x71a0a1);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66f0),8);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(U+6))));
}
B71a0a8:{NFSU2_TR(0x71a0a8);
__builtin_memmove((R+4384),(R+4352),8);
}
B71a0ab:{NFSU2_TR(0x71a0ab);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66c0),8);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(U+6))));
}
B71a0b2:{NFSU2_TR(0x71a0b2);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71a0b5:{NFSU2_TR(0x71a0b5);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66c0),8);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(U+0))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(U+2))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(U+4))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(U+6))));
}
B71a0bc:{NFSU2_TR(0x71a0bc);
__builtin_memmove((R+4448),(R+4352),8);
}
B71a0bf:{NFSU2_TR(0x71a0bf);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B71a0c2:{NFSU2_TR(0x71a0c2);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66c0),8);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(U+0))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(U+2))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(U+4))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(U+6))));
}
B71a0c9:{NFSU2_TR(0x71a0c9);
__builtin_memmove((R+4464),(R+4384),8);
}
B71a0cc:{NFSU2_TR(0x71a0cc);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66c0),8);
w2(R+4464,u16(u32(r2(R+4464))*u32(r2(U+0))));
w2(R+4466,u16(u32(r2(R+4466))*u32(r2(U+2))));
w2(R+4468,u16(u32(r2(R+4468))*u32(r2(U+4))));
w2(R+4470,u16(u32(r2(R+4470))*u32(r2(U+6))));
}
B71a0d3:{NFSU2_TR(0x71a0d3);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4454))));
}
B71a0d6:{NFSU2_TR(0x71a0d6);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4464))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4466))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4468))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4470))));
}
B71a0d9:{NFSU2_TR(0x71a0d9);
__builtin_memmove((R+4448),(R+4352),8);
}
B71a0dc:{NFSU2_TR(0x71a0dc);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66f0),8);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(U+0))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(U+2))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(U+4))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(U+6))));
}
B71a0e3:{NFSU2_TR(0x71a0e3);
__builtin_memmove((R+4464),(R+4384),8);
}
B71a0e6:{NFSU2_TR(0x71a0e6);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66f0),8);
w2(R+4464,u16(u32(r2(R+4464))*u32(r2(U+0))));
w2(R+4466,u16(u32(r2(R+4466))*u32(r2(U+2))));
w2(R+4468,u16(u32(r2(R+4468))*u32(r2(U+4))));
w2(R+4470,u16(u32(r2(R+4470))*u32(r2(U+6))));
}
B71a0ed:{NFSU2_TR(0x71a0ed);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B71a0f0:{NFSU2_TR(0x71a0f0);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4470))));
}
B71a0f3:{NFSU2_TR(0x71a0f3);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(U+0))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(U+2))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(U+4))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(U+6))));
}
B71a0fa:{NFSU2_TR(0x71a0fa);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B71a101:{NFSU2_TR(0x71a101);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x8ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x8ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x8ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x8ull))));
}
B71a105:{NFSU2_TR(0x71a105);
w2(R+4400,shr<u16>(r2(R+4400),u64(u32(0x8ull))));
w2(R+4402,shr<u16>(r2(R+4402),u64(u32(0x8ull))));
w2(R+4404,shr<u16>(r2(R+4404),u64(u32(0x8ull))));
w2(R+4406,shr<u16>(r2(R+4406),u64(u32(0x8ull))));
}
B71a109:{NFSU2_TR(0x71a109);
u8 U[30];
__builtin_memmove((U+5),(R+4368),8);
__builtin_memmove((U+13),(R+4400),8);
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
B71a10c:{NFSU2_TR(0x71a10c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71a110:{NFSU2_TR(0x71a110);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+6))));
}
B71a117:{NFSU2_TR(0x71a117);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(U+0))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(U+2))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(U+4))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(U+6))));
}
B71a11e:{NFSU2_TR(0x71a11e);
w2(R+4416,shr<u16>(r2(R+4416),u64(u32(0x8ull))));
w2(R+4418,shr<u16>(r2(R+4418),u64(u32(0x8ull))));
w2(R+4420,shr<u16>(r2(R+4420),u64(u32(0x8ull))));
w2(R+4422,shr<u16>(r2(R+4422),u64(u32(0x8ull))));
}
B71a122:{NFSU2_TR(0x71a122);
w2(R+4432,shr<u16>(r2(R+4432),u64(u32(0x8ull))));
w2(R+4434,shr<u16>(r2(R+4434),u64(u32(0x8ull))));
w2(R+4436,shr<u16>(r2(R+4436),u64(u32(0x8ull))));
w2(R+4438,shr<u16>(r2(R+4438),u64(u32(0x8ull))));
}
B71a126:{NFSU2_TR(0x71a126);
u8 U[30];
__builtin_memmove((U+5),(R+4416),8);
__builtin_memmove((U+13),(R+4432),8);
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
B71a129:{NFSU2_TR(0x71a129);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71a12c:{NFSU2_TR(0x71a12c);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71a12f:{NFSU2_TR(0x71a12f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B71a133:{NFSU2_TR(0x71a133);
__builtin_memmove((R+4432),gp(0x7c66e0),8);
}
B71a13a:{NFSU2_TR(0x71a13a);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4438))));
}
B71a13d:{NFSU2_TR(0x71a13d);
__builtin_memmove((R+4448),gp(0x7c66d0),8);
}
B71a144:{NFSU2_TR(0x71a144);
__builtin_memmove((R+4400),(R+4368),8);
}
B71a147:{NFSU2_TR(0x71a147);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4432))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4434))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4436))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4438))));
}
B71a14a:{NFSU2_TR(0x71a14a);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B71a14d:{NFSU2_TR(0x71a14d);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4454))));
}
B71a150:{NFSU2_TR(0x71a150);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71a153:{NFSU2_TR(0x71a153);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B71a156:{NFSU2_TR(0x71a156);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B71a159:{NFSU2_TR(0x71a159);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B71a15c:{NFSU2_TR(0x71a15c);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(U+0))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(U+2))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(U+4))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(U+6))));
}
B71a163:{NFSU2_TR(0x71a163);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(U+0))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(U+2))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(U+4))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(U+6))));
}
B71a16a:{NFSU2_TR(0x71a16a);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x8ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x8ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x8ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x8ull))));
}
B71a16e:{NFSU2_TR(0x71a16e);
w2(R+4384,shr<u16>(r2(R+4384),u64(u32(0x8ull))));
w2(R+4386,shr<u16>(r2(R+4386),u64(u32(0x8ull))));
w2(R+4388,shr<u16>(r2(R+4388),u64(u32(0x8ull))));
w2(R+4390,shr<u16>(r2(R+4390),u64(u32(0x8ull))));
}
B71a172:{NFSU2_TR(0x71a172);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4384),8);
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
B71a175:{NFSU2_TR(0x71a175);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71a179:{NFSU2_TR(0x71a179);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B71a17c:{NFSU2_TR(0x71a17c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B71a17f:{NFSU2_TR(0x71a17f);
u8 U[6];
w1(R+512,u8((r4(R+8))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+8),u32(0x8ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71a182:{NFSU2_TR(0x71a182);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71a034u);}goto L71a034;}}
}
B71a188:L71a188:{c.instructions+=4;NFSU2_TR(0x71a188);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71a189:{NFSU2_TR(0x71a189);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71a18a:{NFSU2_TR(0x71a18a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71a18b:{NFSU2_TR(0x71a18b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71a18c:L71a18c:{c.instructions+=10;NFSU2_TR(0x71a18c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a18d:{NFSU2_TR(0x71a18d);
__builtin_memmove((R+20),(R+16),4);
}
B71a18f:{NFSU2_TR(0x71a18f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a190:{NFSU2_TR(0x71a190);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a191:{NFSU2_TR(0x71a191);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71a194:{NFSU2_TR(0x71a194);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71a197:{NFSU2_TR(0x71a197);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B71a19a:{NFSU2_TR(0x71a19a);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B71a19c:{NFSU2_TR(0x71a19c);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71a19f:{NFSU2_TR(0x71a19f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71a1a2:L71a1a2:{c.instructions+=63;NFSU2_TR(0x71a1a2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71a1a5:{NFSU2_TR(0x71a1a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B71a1a9:{NFSU2_TR(0x71a1a9);
__builtin_memmove((R+4384),(R+4352),8);
}
B71a1ac:{NFSU2_TR(0x71a1ac);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71a1af:{NFSU2_TR(0x71a1af);
__builtin_memmove((R+4432),gp(0x7c66d0),8);
}
B71a1b6:{NFSU2_TR(0x71a1b6);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B71a1b9:{NFSU2_TR(0x71a1b9);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4438))));
}
B71a1bc:{NFSU2_TR(0x71a1bc);
__builtin_memmove((R+4400),(R+4368),8);
}
B71a1bf:{NFSU2_TR(0x71a1bf);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B71a1c2:{NFSU2_TR(0x71a1c2);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4432))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4434))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4436))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4438))));
}
B71a1c5:{NFSU2_TR(0x71a1c5);
__builtin_memmove((R+4448),gp(0x7c66e0),8);
}
B71a1cc:{NFSU2_TR(0x71a1cc);
__builtin_memmove((R+4416),(R+4368),8);
}
B71a1cf:{NFSU2_TR(0x71a1cf);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4454))));
}
B71a1d2:{NFSU2_TR(0x71a1d2);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71a1d5:{NFSU2_TR(0x71a1d5);
__builtin_memmove((R+4432),(R+4400),8);
}
B71a1d8:{NFSU2_TR(0x71a1d8);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4454))));
}
B71a1db:{NFSU2_TR(0x71a1db);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4422))));
}
B71a1de:{NFSU2_TR(0x71a1de);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4432))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4434))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4436))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4438))));
}
B71a1e1:{NFSU2_TR(0x71a1e1);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(U+0))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(U+2))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(U+4))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(U+6))));
}
B71a1e8:{NFSU2_TR(0x71a1e8);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(U+0))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(U+2))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(U+4))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(U+6))));
}
B71a1ef:{NFSU2_TR(0x71a1ef);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x8ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x8ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x8ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x8ull))));
}
B71a1f3:{NFSU2_TR(0x71a1f3);
w2(R+4384,shr<u16>(r2(R+4384),u64(u32(0x8ull))));
w2(R+4386,shr<u16>(r2(R+4386),u64(u32(0x8ull))));
w2(R+4388,shr<u16>(r2(R+4388),u64(u32(0x8ull))));
w2(R+4390,shr<u16>(r2(R+4390),u64(u32(0x8ull))));
}
B71a1f7:{NFSU2_TR(0x71a1f7);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4384),8);
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
B71a1fa:{NFSU2_TR(0x71a1fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71a1fe:{NFSU2_TR(0x71a1fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B71a202:{NFSU2_TR(0x71a202);
__builtin_memmove((R+4416),(R+4368),8);
}
B71a205:{NFSU2_TR(0x71a205);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66f0),8);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(U+0))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(U+2))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(U+4))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(U+6))));
}
B71a20c:{NFSU2_TR(0x71a20c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71a210:{NFSU2_TR(0x71a210);
__builtin_memmove((R+4432),(R+4400),8);
}
B71a213:{NFSU2_TR(0x71a213);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66f0),8);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(U+6))));
}
B71a21a:{NFSU2_TR(0x71a21a);
__builtin_memmove((R+4384),(R+4352),8);
}
B71a21d:{NFSU2_TR(0x71a21d);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66c0),8);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(U+6))));
}
B71a224:{NFSU2_TR(0x71a224);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71a227:{NFSU2_TR(0x71a227);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66c0),8);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(U+0))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(U+2))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(U+4))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(U+6))));
}
B71a22e:{NFSU2_TR(0x71a22e);
__builtin_memmove((R+4448),(R+4352),8);
}
B71a231:{NFSU2_TR(0x71a231);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B71a234:{NFSU2_TR(0x71a234);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66c0),8);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(U+0))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(U+2))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(U+4))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(U+6))));
}
B71a23b:{NFSU2_TR(0x71a23b);
__builtin_memmove((R+4464),(R+4384),8);
}
B71a23e:{NFSU2_TR(0x71a23e);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66c0),8);
w2(R+4464,u16(u32(r2(R+4464))*u32(r2(U+0))));
w2(R+4466,u16(u32(r2(R+4466))*u32(r2(U+2))));
w2(R+4468,u16(u32(r2(R+4468))*u32(r2(U+4))));
w2(R+4470,u16(u32(r2(R+4470))*u32(r2(U+6))));
}
B71a245:{NFSU2_TR(0x71a245);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4454))));
}
B71a248:{NFSU2_TR(0x71a248);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4464))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4466))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4468))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4470))));
}
B71a24b:{NFSU2_TR(0x71a24b);
__builtin_memmove((R+4448),(R+4352),8);
}
B71a24e:{NFSU2_TR(0x71a24e);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66f0),8);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(U+0))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(U+2))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(U+4))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(U+6))));
}
B71a255:{NFSU2_TR(0x71a255);
__builtin_memmove((R+4464),(R+4384),8);
}
B71a258:{NFSU2_TR(0x71a258);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66f0),8);
w2(R+4464,u16(u32(r2(R+4464))*u32(r2(U+0))));
w2(R+4466,u16(u32(r2(R+4466))*u32(r2(U+2))));
w2(R+4468,u16(u32(r2(R+4468))*u32(r2(U+4))));
w2(R+4470,u16(u32(r2(R+4470))*u32(r2(U+6))));
}
B71a25f:{NFSU2_TR(0x71a25f);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B71a262:{NFSU2_TR(0x71a262);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4470))));
}
B71a265:{NFSU2_TR(0x71a265);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(U+0))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(U+2))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(U+4))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(U+6))));
}
B71a26c:{NFSU2_TR(0x71a26c);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B71a273:{NFSU2_TR(0x71a273);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x8ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x8ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x8ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x8ull))));
}
B71a277:{NFSU2_TR(0x71a277);
w2(R+4400,shr<u16>(r2(R+4400),u64(u32(0x8ull))));
w2(R+4402,shr<u16>(r2(R+4402),u64(u32(0x8ull))));
w2(R+4404,shr<u16>(r2(R+4404),u64(u32(0x8ull))));
w2(R+4406,shr<u16>(r2(R+4406),u64(u32(0x8ull))));
}
B71a27b:{NFSU2_TR(0x71a27b);
u8 U[30];
__builtin_memmove((U+5),(R+4368),8);
__builtin_memmove((U+13),(R+4400),8);
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
B71a27e:{NFSU2_TR(0x71a27e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71a282:{NFSU2_TR(0x71a282);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+6))));
}
B71a289:{NFSU2_TR(0x71a289);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(U+0))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(U+2))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(U+4))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(U+6))));
}
B71a290:{NFSU2_TR(0x71a290);
w2(R+4416,shr<u16>(r2(R+4416),u64(u32(0x8ull))));
w2(R+4418,shr<u16>(r2(R+4418),u64(u32(0x8ull))));
w2(R+4420,shr<u16>(r2(R+4420),u64(u32(0x8ull))));
w2(R+4422,shr<u16>(r2(R+4422),u64(u32(0x8ull))));
}
B71a294:{NFSU2_TR(0x71a294);
w2(R+4432,shr<u16>(r2(R+4432),u64(u32(0x8ull))));
w2(R+4434,shr<u16>(r2(R+4434),u64(u32(0x8ull))));
w2(R+4436,shr<u16>(r2(R+4436),u64(u32(0x8ull))));
w2(R+4438,shr<u16>(r2(R+4438),u64(u32(0x8ull))));
}
B71a298:{NFSU2_TR(0x71a298);
u8 U[30];
__builtin_memmove((U+5),(R+4416),8);
__builtin_memmove((U+13),(R+4432),8);
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
B71a29b:{NFSU2_TR(0x71a29b);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71a29e:{NFSU2_TR(0x71a29e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B71a2a1:{NFSU2_TR(0x71a2a1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B71a2a4:{NFSU2_TR(0x71a2a4);
u8 U[6];
w1(R+512,u8((r4(R+8))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+8),u32(0x8ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71a2a7:{NFSU2_TR(0x71a2a7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71a1a2u);}goto L71a1a2;}}
}
B71a2ad:L71a2ad:{c.instructions+=4;NFSU2_TR(0x71a2ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71a2ae:{NFSU2_TR(0x71a2ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71a2af:{NFSU2_TR(0x71a2af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71a2b0:{NFSU2_TR(0x71a2b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71a2b1:L71a2b1:{c.instructions+=7;NFSU2_TR(0x71a2b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a2b2:{NFSU2_TR(0x71a2b2);
__builtin_memmove((R+20),(R+16),4);
}
B71a2b4:{NFSU2_TR(0x71a2b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a2b5:{NFSU2_TR(0x71a2b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71a2b8:{NFSU2_TR(0x71a2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71a2bb:{NFSU2_TR(0x71a2bb);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71a2be:{NFSU2_TR(0x71a2be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71a2c1:L71a2c1:{c.instructions+=20;NFSU2_TR(0x71a2c1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71a2c4:{NFSU2_TR(0x71a2c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B71a2c8:{NFSU2_TR(0x71a2c8);
__builtin_memmove((R+4384),(R+4352),8);
}
B71a2cb:{NFSU2_TR(0x71a2cb);
__builtin_memmove((R+4400),(R+4368),8);
}
B71a2ce:{NFSU2_TR(0x71a2ce);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71a2d1:{NFSU2_TR(0x71a2d1);
__builtin_memmove((R+4448),gp(0x7c6710),8);
}
B71a2d8:{NFSU2_TR(0x71a2d8);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B71a2db:{NFSU2_TR(0x71a2db);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B71a2de:{NFSU2_TR(0x71a2de);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B71a2e1:{NFSU2_TR(0x71a2e1);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4454))));
}
B71a2e4:{NFSU2_TR(0x71a2e4);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71a2e7:{NFSU2_TR(0x71a2e7);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B71a2ea:{NFSU2_TR(0x71a2ea);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x1ull)));}
}
B71a2ee:{NFSU2_TR(0x71a2ee);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4454))));
}
B71a2f1:{NFSU2_TR(0x71a2f1);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x1ull)));}
}
B71a2f5:{NFSU2_TR(0x71a2f5);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4384),8);
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
B71a2f8:{NFSU2_TR(0x71a2f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71a2fc:{NFSU2_TR(0x71a2fc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B71a2ff:{NFSU2_TR(0x71a2ff);
u8 U[6];
w1(R+512,u8((r4(R+8))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+8),u32(0x8ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71a302:{NFSU2_TR(0x71a302);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71a2c1u);}goto L71a2c1;}}
}
B71a304:L71a304:{c.instructions+=3;NFSU2_TR(0x71a304);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71a305:{NFSU2_TR(0x71a305);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71a306:{NFSU2_TR(0x71a306);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71a307:L71a307:{c.instructions+=6;NFSU2_TR(0x71a307);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a308:{NFSU2_TR(0x71a308);
__builtin_memmove((R+20),(R+16),4);
}
B71a30a:{NFSU2_TR(0x71a30a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a30b:{NFSU2_TR(0x71a30b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71a30e:{NFSU2_TR(0x71a30e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71a311:{NFSU2_TR(0x71a311);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71a314:L71a314:{c.instructions+=5;NFSU2_TR(0x71a314);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71a317:{NFSU2_TR(0x71a317);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71a31b:{NFSU2_TR(0x71a31b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B71a31e:{NFSU2_TR(0x71a31e);
u8 U[6];
w1(R+512,u8((r4(R+8))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+8),u32(0x8ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71a321:{NFSU2_TR(0x71a321);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71a314u);}goto L71a314;}}
}
B71a323:L71a323:{c.instructions+=3;NFSU2_TR(0x71a323);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71a324:{NFSU2_TR(0x71a324);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71a325:{NFSU2_TR(0x71a325);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71a326:L71a326:{c.instructions+=9;NFSU2_TR(0x71a326);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a327:{NFSU2_TR(0x71a327);
__builtin_memmove((R+20),(R+16),4);
}
B71a329:{NFSU2_TR(0x71a329);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a32a:{NFSU2_TR(0x71a32a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a32b:{NFSU2_TR(0x71a32b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71a32e:{NFSU2_TR(0x71a32e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71a331:{NFSU2_TR(0x71a331);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71a334:{NFSU2_TR(0x71a334);
__builtin_memmove((R+4448),gp(0x7c6710),8);
}
B71a33b:{NFSU2_TR(0x71a33b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71a33e:L71a33e:{c.instructions+=26;NFSU2_TR(0x71a33e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71a341:{NFSU2_TR(0x71a341);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71a345:{NFSU2_TR(0x71a345);
__builtin_memmove((R+4384),(R+4352),8);
}
B71a348:{NFSU2_TR(0x71a348);
__builtin_memmove((R+4400),(R+4368),8);
}
B71a34b:{NFSU2_TR(0x71a34b);
__builtin_memmove((R+4416),(R+4352),8);
}
B71a34e:{NFSU2_TR(0x71a34e);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71a351:{NFSU2_TR(0x71a351);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B71a354:{NFSU2_TR(0x71a354);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B71a357:{NFSU2_TR(0x71a357);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4454))));
}
B71a35a:{NFSU2_TR(0x71a35a);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B71a35d:{NFSU2_TR(0x71a35d);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71a360:{NFSU2_TR(0x71a360);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B71a363:{NFSU2_TR(0x71a363);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4454))));
}
B71a366:{NFSU2_TR(0x71a366);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x1ull)));}
}
B71a36a:{NFSU2_TR(0x71a36a);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x1ull)));}
}
B71a36e:{NFSU2_TR(0x71a36e);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4384),8);
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
B71a371:{NFSU2_TR(0x71a371);
__builtin_memmove((R+4384),(R+4416),8);
}
B71a374:{NFSU2_TR(0x71a374);
__builtin_memmove((R+4391),(R+4355),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4354),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4353),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4352),1);
}
B71a377:{NFSU2_TR(0x71a377);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71a37a:{NFSU2_TR(0x71a37a);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4356),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4357),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4358),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4359),1);
}
B71a37d:{NFSU2_TR(0x71a37d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71a381:{NFSU2_TR(0x71a381);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B71a384:{NFSU2_TR(0x71a384);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B71a387:{NFSU2_TR(0x71a387);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8ull))));
}
B71a38a:{NFSU2_TR(0x71a38a);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71a38d:{NFSU2_TR(0x71a38d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71a33eu);}goto L71a33e;}}
}
B71a38f:L71a38f:{c.instructions+=30;NFSU2_TR(0x71a38f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71a392:{NFSU2_TR(0x71a392);
__builtin_memmove((R+4368),(R+4352),8);
}
B71a395:{NFSU2_TR(0x71a395);
__builtin_memmove((R+4384),(R+4352),8);
}
B71a398:{NFSU2_TR(0x71a398);
__builtin_memmove((R+4400),(R+4368),8);
}
B71a39b:{NFSU2_TR(0x71a39b);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x8ull))));
}
B71a39f:{NFSU2_TR(0x71a39f);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x38ull))));
}
B71a3a3:{NFSU2_TR(0x71a3a3);
w8(R+4400,shl<u64>(r8(R+4400),u64(u64(0x38ull))));
}
B71a3a7:{NFSU2_TR(0x71a3a7);
w8(R+4368,u64(u64(r8(R+4368))|u64(r8(R+4400))));
}
B71a3aa:{NFSU2_TR(0x71a3aa);
__builtin_memmove((R+4400),(R+4368),8);
}
B71a3ad:{NFSU2_TR(0x71a3ad);
__builtin_memmove((R+4416),(R+4352),8);
}
B71a3b0:{NFSU2_TR(0x71a3b0);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71a3b3:{NFSU2_TR(0x71a3b3);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B71a3b6:{NFSU2_TR(0x71a3b6);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B71a3b9:{NFSU2_TR(0x71a3b9);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4454))));
}
B71a3bc:{NFSU2_TR(0x71a3bc);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B71a3bf:{NFSU2_TR(0x71a3bf);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71a3c2:{NFSU2_TR(0x71a3c2);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B71a3c5:{NFSU2_TR(0x71a3c5);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4454))));
}
B71a3c8:{NFSU2_TR(0x71a3c8);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x1ull)));}
}
B71a3cc:{NFSU2_TR(0x71a3cc);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x1ull)));}
}
B71a3d0:{NFSU2_TR(0x71a3d0);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4384),8);
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
B71a3d3:{NFSU2_TR(0x71a3d3);
__builtin_memmove((R+4384),(R+4416),8);
}
B71a3d6:{NFSU2_TR(0x71a3d6);
__builtin_memmove((R+4391),(R+4355),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4354),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4353),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4352),1);
}
B71a3d9:{NFSU2_TR(0x71a3d9);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71a3dc:{NFSU2_TR(0x71a3dc);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4356),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4357),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4358),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4359),1);
}
B71a3df:{NFSU2_TR(0x71a3df);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71a3e3:{NFSU2_TR(0x71a3e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71a3e4:{NFSU2_TR(0x71a3e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71a3e5:{NFSU2_TR(0x71a3e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71a3e6:{NFSU2_TR(0x71a3e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71a3e7:L71a3e7:{c.instructions+=203;NFSU2_TR(0x71a3e7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a3e8:{NFSU2_TR(0x71a3e8);
__builtin_memmove((R+12),(R+16),4);
}
B71a3ea:{NFSU2_TR(0x71a3ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a3eb:{NFSU2_TR(0x71a3eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a3ec:{NFSU2_TR(0x71a3ec);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B71a3ef:{NFSU2_TR(0x71a3ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B71a3f2:{NFSU2_TR(0x71a3f2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a3f3:{NFSU2_TR(0x71a3f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B71a3f6:{NFSU2_TR(0x71a3f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71a3fa:{NFSU2_TR(0x71a3fa);
__builtin_memmove((R+20),(R+16),4);
}
B71a3fc:{NFSU2_TR(0x71a3fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B71a3ff:{NFSU2_TR(0x71a3ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71a402:{NFSU2_TR(0x71a402);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71a405:{NFSU2_TR(0x71a405);
__builtin_memmove((R+4),gp(0x8b9c4c),4);
}
B71a40b:{NFSU2_TR(0x71a40b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B71a40e:{NFSU2_TR(0x71a40e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a40f:{NFSU2_TR(0x71a40f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a410:{NFSU2_TR(0x71a410);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71a413:{NFSU2_TR(0x71a413);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71a416:{NFSU2_TR(0x71a416);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B71a418:{NFSU2_TR(0x71a418);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71a41b:{NFSU2_TR(0x71a41b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71a41e:{NFSU2_TR(0x71a41e);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71a420:{NFSU2_TR(0x71a420);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B71a423:{NFSU2_TR(0x71a423);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4352,u64(r4(U+12)));
}
B71a428:{NFSU2_TR(0x71a428);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B71a42c:{NFSU2_TR(0x71a42c);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4384,u64(r4(U+12)));
}
B71a431:{NFSU2_TR(0x71a431);
__builtin_memmove((R+4359),(R+4419),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4418),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4417),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4416),1);
}
B71a434:{NFSU2_TR(0x71a434);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B71a438:{NFSU2_TR(0x71a438);
__builtin_memmove((R+4391),(R+4403),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4402),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4401),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4400),1);
}
B71a43b:{NFSU2_TR(0x71a43b);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B71a440:{NFSU2_TR(0x71a440);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4432,u64(r4(U+12)));
}
B71a445:{NFSU2_TR(0x71a445);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4448,u64(r4(U+12)));
}
B71a44a:{NFSU2_TR(0x71a44a);
__builtin_memmove((R+4375),(R+4435),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4434),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4433),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4432),1);
}
B71a44d:{NFSU2_TR(0x71a44d);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4464,u64(r4(U+12)));
}
B71a452:{NFSU2_TR(0x71a452);
__builtin_memmove((R+4352),(R+4356),2);
__builtin_memmove((R+4354),(R+4372),2);
__builtin_memmove((R+4356),(R+4358),2);
__builtin_memmove((R+4358),(R+4374),2);
}
B71a455:{NFSU2_TR(0x71a455);
__builtin_memmove((R+4455),(R+4467),1);
__builtin_memmove((R+4454),(R+4451),1);
__builtin_memmove((R+4453),(R+4466),1);
__builtin_memmove((R+4452),(R+4450),1);
__builtin_memmove((R+4451),(R+4465),1);
__builtin_memmove((R+4450),(R+4449),1);
__builtin_memmove((R+4449),(R+4464),1);
}
B71a458:{NFSU2_TR(0x71a458);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71a45b:{NFSU2_TR(0x71a45b);
__builtin_memmove((R+4390),(R+4450),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4448),2);
}
B71a45e:{NFSU2_TR(0x71a45e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B71a461:{NFSU2_TR(0x71a461);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4416,u64(r4(U+12)));
}
B71a466:{NFSU2_TR(0x71a466);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B71a46a:{NFSU2_TR(0x71a46a);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4400,u64(r4(U+12)));
}
B71a46f:{NFSU2_TR(0x71a46f);
__builtin_memmove((R+4423),(R+4371),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4370),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4369),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4368),1);
}
B71a472:{NFSU2_TR(0x71a472);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4448,u64(r4(U+4)));
}
B71a476:{NFSU2_TR(0x71a476);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B71a47b:{NFSU2_TR(0x71a47b);
__builtin_memmove((R+4407),(R+4451),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4450),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4449),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4448),1);
}
B71a47e:{NFSU2_TR(0x71a47e);
u8 U[20];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),8);
__builtin_memmove((R+4432),(U+12),8);
}
B71a483:{NFSU2_TR(0x71a483);
u8 U[20];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),8);
__builtin_memmove((R+4448),(U+12),8);
}
B71a488:{NFSU2_TR(0x71a488);
__builtin_memmove((R+4375),(R+4435),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4434),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4433),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4432),1);
}
B71a48b:{NFSU2_TR(0x71a48b);
u8 U[20];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),8);
__builtin_memmove((R+4464),(U+12),8);
}
B71a490:{NFSU2_TR(0x71a490);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4372),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4374),2);
}
B71a493:{NFSU2_TR(0x71a493);
__builtin_memmove((R+4455),(R+4467),1);
__builtin_memmove((R+4454),(R+4451),1);
__builtin_memmove((R+4453),(R+4466),1);
__builtin_memmove((R+4452),(R+4450),1);
__builtin_memmove((R+4451),(R+4465),1);
__builtin_memmove((R+4450),(R+4449),1);
__builtin_memmove((R+4449),(R+4464),1);
}
B71a496:{NFSU2_TR(0x71a496);
__builtin_memmove((R+4368),(R+4352),8);
}
B71a499:{NFSU2_TR(0x71a499);
__builtin_memmove((R+4406),(R+4450),2);
__builtin_memmove((R+4404),(R+4402),2);
__builtin_memmove((R+4402),(R+4448),2);
}
B71a49c:{NFSU2_TR(0x71a49c);
__builtin_memmove((R+4464),(R+4384),8);
}
B71a49f:{NFSU2_TR(0x71a49f);
__builtin_memmove((R+4356),(R+4416),4);
}
B71a4a2:{NFSU2_TR(0x71a4a2);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71a4a5:{NFSU2_TR(0x71a4a5);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4420),4);
}
B71a4a8:{NFSU2_TR(0x71a4a8);
__builtin_memmove((R+4416),(R+4352),8);
}
B71a4ab:{NFSU2_TR(0x71a4ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71a4af:{NFSU2_TR(0x71a4af);
__builtin_memmove((R+4388),(R+4400),4);
}
B71a4b2:{NFSU2_TR(0x71a4b2);
__builtin_memmove((R+4432),(R+4368),8);
}
B71a4b5:{NFSU2_TR(0x71a4b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71a4b9:{NFSU2_TR(0x71a4b9);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4404),4);
}
B71a4bc:{NFSU2_TR(0x71a4bc);
__builtin_memmove((R+4448),(R+4384),8);
}
B71a4bf:{NFSU2_TR(0x71a4bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71a4c3:{NFSU2_TR(0x71a4c3);
__builtin_memmove((R+4368),gp(0x7c6770),8);
}
B71a4ca:{NFSU2_TR(0x71a4ca);
w1(R+4352,u8(u32(r1(R+4352))-u32(r1(R+4432))));
w1(R+4353,u8(u32(r1(R+4353))-u32(r1(R+4433))));
w1(R+4354,u8(u32(r1(R+4354))-u32(r1(R+4434))));
w1(R+4355,u8(u32(r1(R+4355))-u32(r1(R+4435))));
w1(R+4356,u8(u32(r1(R+4356))-u32(r1(R+4436))));
w1(R+4357,u8(u32(r1(R+4357))-u32(r1(R+4437))));
w1(R+4358,u8(u32(r1(R+4358))-u32(r1(R+4438))));
w1(R+4359,u8(u32(r1(R+4359))-u32(r1(R+4439))));
}
B71a4cd:{NFSU2_TR(0x71a4cd);
__builtin_memmove((R+4464),gp(0x7c67b0),8);
}
B71a4d4:{NFSU2_TR(0x71a4d4);
u8 U[8];
w1(U+0,u8(s8(r1(R+4352))<s8(r1(R+4368))));
w1(R+4368,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4353))<s8(r1(R+4369))));
w1(R+4369,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4354))<s8(r1(R+4370))));
w1(R+4370,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4355))<s8(r1(R+4371))));
w1(R+4371,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4356))<s8(r1(R+4372))));
w1(R+4372,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4357))<s8(r1(R+4373))));
w1(R+4373,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4358))<s8(r1(R+4374))));
w1(R+4374,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4359))<s8(r1(R+4375))));
w1(R+4375,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71a4d7:{NFSU2_TR(0x71a4d7);
u8 U[8];
w1(U+0,u8(s8(r1(R+4464))<s8(r1(R+4352))));
w1(R+4352,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4465))<s8(r1(R+4353))));
w1(R+4353,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4466))<s8(r1(R+4354))));
w1(R+4354,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4467))<s8(r1(R+4355))));
w1(R+4355,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4468))<s8(r1(R+4356))));
w1(R+4356,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4469))<s8(r1(R+4357))));
w1(R+4357,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4470))<s8(r1(R+4358))));
w1(R+4358,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4471))<s8(r1(R+4359))));
w1(R+4359,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71a4da:{NFSU2_TR(0x71a4da);
__builtin_memmove((R+4400),gp(0x7c6770),8);
}
B71a4e1:{NFSU2_TR(0x71a4e1);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4368))));
}
B71a4e4:{NFSU2_TR(0x71a4e4);
__builtin_memmove((R+4368),(R+4464),8);
}
B71a4e7:{NFSU2_TR(0x71a4e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71a4eb:{NFSU2_TR(0x71a4eb);
w1(R+4384,u8(u32(r1(R+4384))-u32(r1(R+4464))));
w1(R+4385,u8(u32(r1(R+4385))-u32(r1(R+4465))));
w1(R+4386,u8(u32(r1(R+4386))-u32(r1(R+4466))));
w1(R+4387,u8(u32(r1(R+4387))-u32(r1(R+4467))));
w1(R+4388,u8(u32(r1(R+4388))-u32(r1(R+4468))));
w1(R+4389,u8(u32(r1(R+4389))-u32(r1(R+4469))));
w1(R+4390,u8(u32(r1(R+4390))-u32(r1(R+4470))));
w1(R+4391,u8(u32(r1(R+4391))-u32(r1(R+4471))));
}
B71a4ee:{NFSU2_TR(0x71a4ee);
u8 U[8];
w1(U+0,u8(s8(r1(R+4384))<s8(r1(R+4400))));
w1(R+4400,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4385))<s8(r1(R+4401))));
w1(R+4401,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4386))<s8(r1(R+4402))));
w1(R+4402,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4387))<s8(r1(R+4403))));
w1(R+4403,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4388))<s8(r1(R+4404))));
w1(R+4404,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4389))<s8(r1(R+4405))));
w1(R+4405,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4390))<s8(r1(R+4406))));
w1(R+4406,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4391))<s8(r1(R+4407))));
w1(R+4407,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71a4f1:{NFSU2_TR(0x71a4f1);
u8 U[8];
w1(U+0,u8(s8(r1(R+4368))<s8(r1(R+4384))));
w1(R+4384,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4369))<s8(r1(R+4385))));
w1(R+4385,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4370))<s8(r1(R+4386))));
w1(R+4386,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4371))<s8(r1(R+4387))));
w1(R+4387,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4372))<s8(r1(R+4388))));
w1(R+4388,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4373))<s8(r1(R+4389))));
w1(R+4389,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4374))<s8(r1(R+4390))));
w1(R+4390,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4375))<s8(r1(R+4391))));
w1(R+4391,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71a4f4:{NFSU2_TR(0x71a4f4);
w8(R+4384,u64(u64(r8(R+4384))|u64(r8(R+4400))));
}
B71a4f7:{NFSU2_TR(0x71a4f7);
__builtin_memmove((R+4400),gp(0x7c67c0),8);
}
B71a4fe:{NFSU2_TR(0x71a4fe);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4384))));
}
B71a501:{NFSU2_TR(0x71a501);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4368))));
}
B71a504:{NFSU2_TR(0x71a504);
__builtin_memmove((R+4384),(R+4432),8);
}
B71a507:{NFSU2_TR(0x71a507);
__builtin_memmove((R+4400),(R+4448),8);
}
B71a50a:{NFSU2_TR(0x71a50a);
__builtin_memmove((R+4391),(R+4371),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4370),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4369),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4368),1);
}
B71a50d:{NFSU2_TR(0x71a50d);
__builtin_memmove((R+4407),(R+4371),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4370),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4369),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4368),1);
}
B71a510:{NFSU2_TR(0x71a510);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4390))));
}
B71a513:{NFSU2_TR(0x71a513);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4372),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4373),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4374),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4375),1);
}
B71a516:{NFSU2_TR(0x71a516);
__builtin_memmove((R+4384),(R+4400),8);
}
B71a519:{NFSU2_TR(0x71a519);
__builtin_memmove((R+4448),(R+4452),1);
__builtin_memmove((R+4449),(R+4372),1);
__builtin_memmove((R+4450),(R+4453),1);
__builtin_memmove((R+4451),(R+4373),1);
__builtin_memmove((R+4452),(R+4454),1);
__builtin_memmove((R+4453),(R+4374),1);
__builtin_memmove((R+4454),(R+4455),1);
__builtin_memmove((R+4455),(R+4375),1);
}
B71a51c:{NFSU2_TR(0x71a51c);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4400))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4402))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4404))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4406))));
}
B71a51f:{NFSU2_TR(0x71a51f);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4438))));
}
B71a522:{NFSU2_TR(0x71a522);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B71a525:{NFSU2_TR(0x71a525);
__builtin_memmove((R+4432),(R+4448),8);
}
B71a528:{NFSU2_TR(0x71a528);
__builtin_memmove((R+4400),(R+4416),8);
}
B71a52b:{NFSU2_TR(0x71a52b);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4454))));
}
B71a52e:{NFSU2_TR(0x71a52e);
__builtin_memmove((R+4407),(R+4371),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4370),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4369),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4368),1);
}
B71a531:{NFSU2_TR(0x71a531);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B71a534:{NFSU2_TR(0x71a534);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4372),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4373),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4374),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4375),1);
}
B71a537:{NFSU2_TR(0x71a537);
__builtin_memmove((R+4448),(R+4464),8);
}
B71a53a:{NFSU2_TR(0x71a53a);
__builtin_memmove((R+4471),(R+4371),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4370),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4369),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4368),1);
}
B71a53d:{NFSU2_TR(0x71a53d);
__builtin_memmove((R+4448),(R+4452),1);
__builtin_memmove((R+4449),(R+4372),1);
__builtin_memmove((R+4450),(R+4453),1);
__builtin_memmove((R+4451),(R+4373),1);
__builtin_memmove((R+4452),(R+4454),1);
__builtin_memmove((R+4453),(R+4374),1);
__builtin_memmove((R+4454),(R+4455),1);
__builtin_memmove((R+4455),(R+4375),1);
}
B71a540:{NFSU2_TR(0x71a540);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4464))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4466))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4468))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4470))));
}
B71a543:{NFSU2_TR(0x71a543);
__builtin_memmove((R+4375),(R+4355),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4354),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4353),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4352),1);
}
B71a546:{NFSU2_TR(0x71a546);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71a549:{NFSU2_TR(0x71a549);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0x8ull)));}
}
B71a54d:{NFSU2_TR(0x71a54d);
__builtin_memmove((R+4464),(R+4468),1);
__builtin_memmove((R+4465),(R+4356),1);
__builtin_memmove((R+4466),(R+4469),1);
__builtin_memmove((R+4467),(R+4357),1);
__builtin_memmove((R+4468),(R+4470),1);
__builtin_memmove((R+4469),(R+4358),1);
__builtin_memmove((R+4470),(R+4471),1);
__builtin_memmove((R+4471),(R+4359),1);
}
B71a550:{NFSU2_TR(0x71a550);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4454))));
}
B71a553:{NFSU2_TR(0x71a553);
{wv<8>((R+4464),uo::psraw<8>(rv<8>((R+4464)),V(0x8ull)));}
}
B71a557:{NFSU2_TR(0x71a557);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4368))));
}
B71a55a:{NFSU2_TR(0x71a55a);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B71a55d:{NFSU2_TR(0x71a55d);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B71a560:{NFSU2_TR(0x71a560);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B71a563:{NFSU2_TR(0x71a563);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6780),8);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(U+0))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(U+2))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(U+4))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(U+6))));
}
B71a56a:{NFSU2_TR(0x71a56a);
w8(R+4368,u64(r4(R+0)));
}
B71a56d:{NFSU2_TR(0x71a56d);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6780),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+6))));
}
B71a574:{NFSU2_TR(0x71a574);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x3ull)));}
}
B71a578:{NFSU2_TR(0x71a578);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B71a57c:{NFSU2_TR(0x71a57c);
__builtin_memmove((R+4400),(R+4384),8);
}
B71a57f:{NFSU2_TR(0x71a57f);
__builtin_memmove((R+4374),(R+4370),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4368),2);
}
B71a582:{NFSU2_TR(0x71a582);
__builtin_memmove((R+4432),(R+4416),8);
}
B71a585:{NFSU2_TR(0x71a585);
__builtin_memmove((R+4372),(R+4368),4);
}
B71a588:{NFSU2_TR(0x71a588);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0xfull)));}
}
B71a58c:{NFSU2_TR(0x71a58c);
__builtin_memmove((R+4448),(R+4368),8);
}
B71a58f:{NFSU2_TR(0x71a58f);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0xfull)));}
}
B71a593:{NFSU2_TR(0x71a593);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4384))));
}
B71a596:{NFSU2_TR(0x71a596);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B71a599:{NFSU2_TR(0x71a599);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4416))));
}
B71a59c:{NFSU2_TR(0x71a59c);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B71a59f:{NFSU2_TR(0x71a59f);
w8(R+4384,u64(u64(r8(R+4384))|u64(m8(0x7c6790))));
}
B71a5a6:{NFSU2_TR(0x71a5a6);
w8(R+4416,u64(u64(r8(R+4416))|u64(m8(0x7c6790))));
}
B71a5ad:{NFSU2_TR(0x71a5ad);
__builtin_memmove((R+4448),(R+4368),8);
}
B71a5b0:{NFSU2_TR(0x71a5b0);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B71a5b3:{NFSU2_TR(0x71a5b3);
{wv<8>((R+4400),uo::psubusw<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B71a5b6:{NFSU2_TR(0x71a5b6);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4368))));
}
B71a5b9:{NFSU2_TR(0x71a5b9);
__builtin_memmove((R+4368),(R+4448),8);
}
B71a5bc:{NFSU2_TR(0x71a5bc);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B71a5bf:{NFSU2_TR(0x71a5bf);
__builtin_memmove((R+4400),(R+4448),8);
}
B71a5c2:{NFSU2_TR(0x71a5c2);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4390))));
}
B71a5c5:{NFSU2_TR(0x71a5c5);
{wv<8>((R+4400),uo::psubusw<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B71a5c8:{NFSU2_TR(0x71a5c8);
{wv<8>((R+4432),uo::psubusw<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B71a5cb:{NFSU2_TR(0x71a5cb);
w8(R+4432,u64(u64(r8(R+4432))|u64(r8(R+4400))));
}
B71a5ce:{NFSU2_TR(0x71a5ce);
__builtin_memmove((R+4400),(R+4448),8);
}
B71a5d1:{NFSU2_TR(0x71a5d1);
{wv<8>((R+4400),uo::psubusw<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B71a5d4:{NFSU2_TR(0x71a5d4);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4406))));
}
B71a5d7:{NFSU2_TR(0x71a5d7);
__builtin_memmove((R+4384),(R+4416),8);
}
B71a5da:{NFSU2_TR(0x71a5da);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71a5de:{NFSU2_TR(0x71a5de);
__builtin_memmove((R+4400),(R+4368),8);
}
B71a5e1:{NFSU2_TR(0x71a5e1);
__builtin_memmove((R+4416),gp(0x7c67c0),8);
}
B71a5e8:{NFSU2_TR(0x71a5e8);
{wv<8>((R+4368),uo::packsswb<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71a5eb:{NFSU2_TR(0x71a5eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71a5ef:{NFSU2_TR(0x71a5ef);
w1(R+4432,u8(u32(r1(R+4432))-u32(r1(R+4416))));
w1(R+4433,u8(u32(r1(R+4433))-u32(r1(R+4417))));
w1(R+4434,u8(u32(r1(R+4434))-u32(r1(R+4418))));
w1(R+4435,u8(u32(r1(R+4435))-u32(r1(R+4419))));
w1(R+4436,u8(u32(r1(R+4436))-u32(r1(R+4420))));
w1(R+4437,u8(u32(r1(R+4437))-u32(r1(R+4421))));
w1(R+4438,u8(u32(r1(R+4438))-u32(r1(R+4422))));
w1(R+4439,u8(u32(r1(R+4439))-u32(r1(R+4423))));
}
B71a5f2:{NFSU2_TR(0x71a5f2);
w1(R+4448,u8(u32(r1(R+4448))-u32(r1(R+4416))));
w1(R+4449,u8(u32(r1(R+4449))-u32(r1(R+4417))));
w1(R+4450,u8(u32(r1(R+4450))-u32(r1(R+4418))));
w1(R+4451,u8(u32(r1(R+4451))-u32(r1(R+4419))));
w1(R+4452,u8(u32(r1(R+4452))-u32(r1(R+4420))));
w1(R+4453,u8(u32(r1(R+4453))-u32(r1(R+4421))));
w1(R+4454,u8(u32(r1(R+4454))-u32(r1(R+4422))));
w1(R+4455,u8(u32(r1(R+4455))-u32(r1(R+4423))));
}
B71a5f5:{NFSU2_TR(0x71a5f5);
{wv<8>((R+4432),uo::paddsb<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71a5f8:{NFSU2_TR(0x71a5f8);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71a5fb:{NFSU2_TR(0x71a5fb);
w1(R+4432,u8(u32(r1(R+4432))+u32(r1(R+4416))));
w1(R+4433,u8(u32(r1(R+4433))+u32(r1(R+4417))));
w1(R+4434,u8(u32(r1(R+4434))+u32(r1(R+4418))));
w1(R+4435,u8(u32(r1(R+4435))+u32(r1(R+4419))));
w1(R+4436,u8(u32(r1(R+4436))+u32(r1(R+4420))));
w1(R+4437,u8(u32(r1(R+4437))+u32(r1(R+4421))));
w1(R+4438,u8(u32(r1(R+4438))+u32(r1(R+4422))));
w1(R+4439,u8(u32(r1(R+4439))+u32(r1(R+4423))));
}
B71a5fe:{NFSU2_TR(0x71a5fe);
w1(R+4448,u8(u32(r1(R+4448))+u32(r1(R+4416))));
w1(R+4449,u8(u32(r1(R+4449))+u32(r1(R+4417))));
w1(R+4450,u8(u32(r1(R+4450))+u32(r1(R+4418))));
w1(R+4451,u8(u32(r1(R+4451))+u32(r1(R+4419))));
w1(R+4452,u8(u32(r1(R+4452))+u32(r1(R+4420))));
w1(R+4453,u8(u32(r1(R+4453))+u32(r1(R+4421))));
w1(R+4454,u8(u32(r1(R+4454))+u32(r1(R+4422))));
w1(R+4455,u8(u32(r1(R+4455))+u32(r1(R+4423))));
}
B71a601:{NFSU2_TR(0x71a601);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B71a604:{NFSU2_TR(0x71a604);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x1ull)));}
}
B71a608:{NFSU2_TR(0x71a608);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x1ull)));}
}
B71a60c:{NFSU2_TR(0x71a60c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71a610:{NFSU2_TR(0x71a610);
{wv<8>((R+4400),uo::packsswb<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B71a613:{NFSU2_TR(0x71a613);
w1(R+4368,u8(u32(r1(R+4368))-u32(r1(R+4416))));
w1(R+4369,u8(u32(r1(R+4369))-u32(r1(R+4417))));
w1(R+4370,u8(u32(r1(R+4370))-u32(r1(R+4418))));
w1(R+4371,u8(u32(r1(R+4371))-u32(r1(R+4419))));
w1(R+4372,u8(u32(r1(R+4372))-u32(r1(R+4420))));
w1(R+4373,u8(u32(r1(R+4373))-u32(r1(R+4421))));
w1(R+4374,u8(u32(r1(R+4374))-u32(r1(R+4422))));
w1(R+4375,u8(u32(r1(R+4375))-u32(r1(R+4423))));
}
B71a616:{NFSU2_TR(0x71a616);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4352))));
w8(R+4352,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B71a619:{NFSU2_TR(0x71a619);
w1(R+4464,u8(u32(r1(R+4464))-u32(r1(R+4416))));
w1(R+4465,u8(u32(r1(R+4465))-u32(r1(R+4417))));
w1(R+4466,u8(u32(r1(R+4466))-u32(r1(R+4418))));
w1(R+4467,u8(u32(r1(R+4467))-u32(r1(R+4419))));
w1(R+4468,u8(u32(r1(R+4468))-u32(r1(R+4420))));
w1(R+4469,u8(u32(r1(R+4469))-u32(r1(R+4421))));
w1(R+4470,u8(u32(r1(R+4470))-u32(r1(R+4422))));
w1(R+4471,u8(u32(r1(R+4471))-u32(r1(R+4423))));
}
B71a61c:{NFSU2_TR(0x71a61c);
{wv<8>((R+4464),uo::psubsb<8>(rv<8>((R+4464)),rv<8>((R+4352))));}
}
B71a61f:{NFSU2_TR(0x71a61f);
{wv<8>((R+4352),uo::paddsb<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B71a622:{NFSU2_TR(0x71a622);
w1(R+4464,u8(u32(r1(R+4464))+u32(r1(R+4416))));
w1(R+4465,u8(u32(r1(R+4465))+u32(r1(R+4417))));
w1(R+4466,u8(u32(r1(R+4466))+u32(r1(R+4418))));
w1(R+4467,u8(u32(r1(R+4467))+u32(r1(R+4419))));
w1(R+4468,u8(u32(r1(R+4468))+u32(r1(R+4420))));
w1(R+4469,u8(u32(r1(R+4469))+u32(r1(R+4421))));
w1(R+4470,u8(u32(r1(R+4470))+u32(r1(R+4422))));
w1(R+4471,u8(u32(r1(R+4471))+u32(r1(R+4423))));
}
B71a625:{NFSU2_TR(0x71a625);
w1(R+4352,u8(u32(r1(R+4352))+u32(r1(R+4416))));
w1(R+4353,u8(u32(r1(R+4353))+u32(r1(R+4417))));
w1(R+4354,u8(u32(r1(R+4354))+u32(r1(R+4418))));
w1(R+4355,u8(u32(r1(R+4355))+u32(r1(R+4419))));
w1(R+4356,u8(u32(r1(R+4356))+u32(r1(R+4420))));
w1(R+4357,u8(u32(r1(R+4357))+u32(r1(R+4421))));
w1(R+4358,u8(u32(r1(R+4358))+u32(r1(R+4422))));
w1(R+4359,u8(u32(r1(R+4359))+u32(r1(R+4423))));
}
B71a628:{NFSU2_TR(0x71a628);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B71a62b:{NFSU2_TR(0x71a62b);
__builtin_memmove((R+4416),(R+4352),8);
}
B71a62e:{NFSU2_TR(0x71a62e);
__builtin_memmove((R+4359),(R+4435),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4434),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4433),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4432),1);
}
B71a631:{NFSU2_TR(0x71a631);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4436),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4437),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4438),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4439),1);
}
B71a634:{NFSU2_TR(0x71a634);
__builtin_memmove((R+4384),(R+4448),8);
}
B71a637:{NFSU2_TR(0x71a637);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B71a63a:{NFSU2_TR(0x71a63a);
__builtin_memmove((R+4448),(R+4452),1);
__builtin_memmove((R+4449),(R+4468),1);
__builtin_memmove((R+4450),(R+4453),1);
__builtin_memmove((R+4451),(R+4469),1);
__builtin_memmove((R+4452),(R+4454),1);
__builtin_memmove((R+4453),(R+4470),1);
__builtin_memmove((R+4454),(R+4455),1);
__builtin_memmove((R+4455),(R+4471),1);
}
B71a63d:{NFSU2_TR(0x71a63d);
__builtin_memmove((R+4368),(R+4352),8);
}
B71a640:{NFSU2_TR(0x71a640);
__builtin_memmove((R+4358),(R+4386),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4384),2);
}
B71a643:{NFSU2_TR(0x71a643);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w4(U+8,u32(r8(R+4352)));
s4(u32(r4(U+4)),r4(U+8));
}
B71a647:{NFSU2_TR(0x71a647);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4388),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4390),2);
}
B71a64a:{NFSU2_TR(0x71a64a);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x20ull))));
}
B71a64e:{NFSU2_TR(0x71a64e);
u8 U[4];
w4(U+0,u32(r8(R+4352)));
s4(u32(r4(R+24)),r4(U+0));
}
B71a651:{NFSU2_TR(0x71a651);
__builtin_memmove((R+4432),(R+4416),8);
}
B71a654:{NFSU2_TR(0x71a654);
__builtin_memmove((R+4422),(R+4450),2);
__builtin_memmove((R+4420),(R+4418),2);
__builtin_memmove((R+4418),(R+4448),2);
}
B71a657:{NFSU2_TR(0x71a657);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w4(U+8,u32(r8(R+4368)));
s4(u32(r4(U+4)),r4(U+8));
}
B71a65b:{NFSU2_TR(0x71a65b);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x20ull))));
}
B71a65f:{NFSU2_TR(0x71a65f);
__builtin_memmove((R+4432),(R+4436),2);
__builtin_memmove((R+4434),(R+4452),2);
__builtin_memmove((R+4436),(R+4438),2);
__builtin_memmove((R+4438),(R+4454),2);
}
B71a662:{NFSU2_TR(0x71a662);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w4(U+8,u32(r8(R+4368)));
s4(u32(r4(U+4)),r4(U+8));
}
B71a666:{NFSU2_TR(0x71a666);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B71a669:{NFSU2_TR(0x71a669);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w4(U+8,u32(r8(R+4416)));
s4(u32(r4(U+4)),r4(U+8));
}
B71a66d:{NFSU2_TR(0x71a66d);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x20ull))));
}
B71a671:{NFSU2_TR(0x71a671);
u8 U[4];
w4(U+0,u32(r8(R+4416)));
s4(u32(r4(R+24)),r4(U+0));
}
B71a674:{NFSU2_TR(0x71a674);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w4(U+8,u32(r8(R+4432)));
s4(u32(r4(U+4)),r4(U+8));
}
B71a678:{NFSU2_TR(0x71a678);
w8(R+4432,shr<u64>(r8(R+4432),u64(u32(0x20ull))));
}
B71a67c:{NFSU2_TR(0x71a67c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w4(U+8,u32(r8(R+4432)));
s4(u32(r4(U+4)),r4(U+8));
}
B71a680:{NFSU2_TR(0x71a680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71a681:{NFSU2_TR(0x71a681);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71a682:{NFSU2_TR(0x71a682);
__builtin_memmove((R+16),(R+20),4);
}
B71a684:{NFSU2_TR(0x71a684);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71a685:{NFSU2_TR(0x71a685);
__builtin_memmove((R+16),(R+12),4);
}
B71a687:{NFSU2_TR(0x71a687);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71a688:{NFSU2_TR(0x71a688);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71a689:L71a689:{c.instructions+=127;NFSU2_TR(0x71a689);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a68a:{NFSU2_TR(0x71a68a);
__builtin_memmove((R+20),(R+16),4);
}
B71a68c:{NFSU2_TR(0x71a68c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71a68f:{NFSU2_TR(0x71a68f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71a692:{NFSU2_TR(0x71a692);
__builtin_memmove((R+4),gp(0x8b9c4c),4);
}
B71a698:{NFSU2_TR(0x71a698);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B71a69b:{NFSU2_TR(0x71a69b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a69c:{NFSU2_TR(0x71a69c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71a69f:{NFSU2_TR(0x71a69f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71a6a2:{NFSU2_TR(0x71a6a2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B71a6a4:{NFSU2_TR(0x71a6a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71a6a7:{NFSU2_TR(0x71a6a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71a6aa:{NFSU2_TR(0x71a6aa);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71a6ac:{NFSU2_TR(0x71a6ac);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B71a6af:{NFSU2_TR(0x71a6af);
__builtin_memmove((R+4464),gp(0x7c67b0),8);
}
B71a6b6:{NFSU2_TR(0x71a6b6);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B71a6ba:{NFSU2_TR(0x71a6ba);
__builtin_memmove((R+4448),(R+4384),8);
}
B71a6bd:{NFSU2_TR(0x71a6bd);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4432),(U+8),8);
}
B71a6c1:{NFSU2_TR(0x71a6c1);
__builtin_memmove((R+4416),(R+4352),8);
}
B71a6c4:{NFSU2_TR(0x71a6c4);
__builtin_memmove((R+4368),gp(0x7c6770),8);
}
B71a6cb:{NFSU2_TR(0x71a6cb);
w1(R+4352,u8(u32(r1(R+4352))-u32(r1(R+4432))));
w1(R+4353,u8(u32(r1(R+4353))-u32(r1(R+4433))));
w1(R+4354,u8(u32(r1(R+4354))-u32(r1(R+4434))));
w1(R+4355,u8(u32(r1(R+4355))-u32(r1(R+4435))));
w1(R+4356,u8(u32(r1(R+4356))-u32(r1(R+4436))));
w1(R+4357,u8(u32(r1(R+4357))-u32(r1(R+4437))));
w1(R+4358,u8(u32(r1(R+4358))-u32(r1(R+4438))));
w1(R+4359,u8(u32(r1(R+4359))-u32(r1(R+4439))));
}
B71a6ce:{NFSU2_TR(0x71a6ce);
u8 U[8];
w1(U+0,u8(s8(r1(R+4352))<s8(r1(R+4368))));
w1(R+4368,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4353))<s8(r1(R+4369))));
w1(R+4369,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4354))<s8(r1(R+4370))));
w1(R+4370,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4355))<s8(r1(R+4371))));
w1(R+4371,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4356))<s8(r1(R+4372))));
w1(R+4372,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4357))<s8(r1(R+4373))));
w1(R+4373,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4358))<s8(r1(R+4374))));
w1(R+4374,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4359))<s8(r1(R+4375))));
w1(R+4375,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71a6d1:{NFSU2_TR(0x71a6d1);
u8 U[8];
w1(U+0,u8(s8(r1(R+4464))<s8(r1(R+4352))));
w1(R+4352,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4465))<s8(r1(R+4353))));
w1(R+4353,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4466))<s8(r1(R+4354))));
w1(R+4354,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4467))<s8(r1(R+4355))));
w1(R+4355,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4468))<s8(r1(R+4356))));
w1(R+4356,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4469))<s8(r1(R+4357))));
w1(R+4357,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4470))<s8(r1(R+4358))));
w1(R+4358,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4471))<s8(r1(R+4359))));
w1(R+4359,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71a6d4:{NFSU2_TR(0x71a6d4);
__builtin_memmove((R+4400),gp(0x7c6770),8);
}
B71a6db:{NFSU2_TR(0x71a6db);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4368))));
}
B71a6de:{NFSU2_TR(0x71a6de);
__builtin_memmove((R+4368),(R+4464),8);
}
B71a6e1:{NFSU2_TR(0x71a6e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4464),(U+8),8);
}
B71a6e5:{NFSU2_TR(0x71a6e5);
w1(R+4384,u8(u32(r1(R+4384))-u32(r1(R+4464))));
w1(R+4385,u8(u32(r1(R+4385))-u32(r1(R+4465))));
w1(R+4386,u8(u32(r1(R+4386))-u32(r1(R+4466))));
w1(R+4387,u8(u32(r1(R+4387))-u32(r1(R+4467))));
w1(R+4388,u8(u32(r1(R+4388))-u32(r1(R+4468))));
w1(R+4389,u8(u32(r1(R+4389))-u32(r1(R+4469))));
w1(R+4390,u8(u32(r1(R+4390))-u32(r1(R+4470))));
w1(R+4391,u8(u32(r1(R+4391))-u32(r1(R+4471))));
}
B71a6e8:{NFSU2_TR(0x71a6e8);
u8 U[8];
w1(U+0,u8(s8(r1(R+4384))<s8(r1(R+4400))));
w1(R+4400,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4385))<s8(r1(R+4401))));
w1(R+4401,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4386))<s8(r1(R+4402))));
w1(R+4402,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4387))<s8(r1(R+4403))));
w1(R+4403,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4388))<s8(r1(R+4404))));
w1(R+4404,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4389))<s8(r1(R+4405))));
w1(R+4405,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4390))<s8(r1(R+4406))));
w1(R+4406,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4391))<s8(r1(R+4407))));
w1(R+4407,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71a6eb:{NFSU2_TR(0x71a6eb);
u8 U[8];
w1(U+0,u8(s8(r1(R+4368))<s8(r1(R+4384))));
w1(R+4384,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4369))<s8(r1(R+4385))));
w1(R+4385,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4370))<s8(r1(R+4386))));
w1(R+4386,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4371))<s8(r1(R+4387))));
w1(R+4387,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4372))<s8(r1(R+4388))));
w1(R+4388,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4373))<s8(r1(R+4389))));
w1(R+4389,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4374))<s8(r1(R+4390))));
w1(R+4390,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4375))<s8(r1(R+4391))));
w1(R+4391,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71a6ee:{NFSU2_TR(0x71a6ee);
w8(R+4384,u64(u64(r8(R+4384))|u64(r8(R+4400))));
}
B71a6f1:{NFSU2_TR(0x71a6f1);
__builtin_memmove((R+4400),gp(0x7c67c0),8);
}
B71a6f8:{NFSU2_TR(0x71a6f8);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4384))));
}
B71a6fb:{NFSU2_TR(0x71a6fb);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4368))));
}
B71a6fe:{NFSU2_TR(0x71a6fe);
__builtin_memmove((R+4384),(R+4432),8);
}
B71a701:{NFSU2_TR(0x71a701);
__builtin_memmove((R+4400),(R+4448),8);
}
B71a704:{NFSU2_TR(0x71a704);
__builtin_memmove((R+4391),(R+4371),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4370),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4369),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4368),1);
}
B71a707:{NFSU2_TR(0x71a707);
__builtin_memmove((R+4407),(R+4371),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4370),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4369),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4368),1);
}
B71a70a:{NFSU2_TR(0x71a70a);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4390))));
}
B71a70d:{NFSU2_TR(0x71a70d);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4372),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4373),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4374),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4375),1);
}
B71a710:{NFSU2_TR(0x71a710);
__builtin_memmove((R+4384),(R+4400),8);
}
B71a713:{NFSU2_TR(0x71a713);
__builtin_memmove((R+4448),(R+4452),1);
__builtin_memmove((R+4449),(R+4372),1);
__builtin_memmove((R+4450),(R+4453),1);
__builtin_memmove((R+4451),(R+4373),1);
__builtin_memmove((R+4452),(R+4454),1);
__builtin_memmove((R+4453),(R+4374),1);
__builtin_memmove((R+4454),(R+4455),1);
__builtin_memmove((R+4455),(R+4375),1);
}
B71a716:{NFSU2_TR(0x71a716);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4400))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4402))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4404))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4406))));
}
B71a719:{NFSU2_TR(0x71a719);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4438))));
}
B71a71c:{NFSU2_TR(0x71a71c);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B71a71f:{NFSU2_TR(0x71a71f);
__builtin_memmove((R+4432),(R+4448),8);
}
B71a722:{NFSU2_TR(0x71a722);
__builtin_memmove((R+4400),(R+4416),8);
}
B71a725:{NFSU2_TR(0x71a725);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4454))));
}
B71a728:{NFSU2_TR(0x71a728);
__builtin_memmove((R+4407),(R+4371),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4370),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4369),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4368),1);
}
B71a72b:{NFSU2_TR(0x71a72b);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B71a72e:{NFSU2_TR(0x71a72e);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4372),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4373),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4374),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4375),1);
}
B71a731:{NFSU2_TR(0x71a731);
__builtin_memmove((R+4448),(R+4464),8);
}
B71a734:{NFSU2_TR(0x71a734);
__builtin_memmove((R+4471),(R+4371),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4370),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4369),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4368),1);
}
B71a737:{NFSU2_TR(0x71a737);
__builtin_memmove((R+4448),(R+4452),1);
__builtin_memmove((R+4449),(R+4372),1);
__builtin_memmove((R+4450),(R+4453),1);
__builtin_memmove((R+4451),(R+4373),1);
__builtin_memmove((R+4452),(R+4454),1);
__builtin_memmove((R+4453),(R+4374),1);
__builtin_memmove((R+4454),(R+4455),1);
__builtin_memmove((R+4455),(R+4375),1);
}
B71a73a:{NFSU2_TR(0x71a73a);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4464))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4466))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4468))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4470))));
}
B71a73d:{NFSU2_TR(0x71a73d);
__builtin_memmove((R+4375),(R+4355),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4354),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4353),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4352),1);
}
B71a740:{NFSU2_TR(0x71a740);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71a743:{NFSU2_TR(0x71a743);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0x8ull)));}
}
B71a747:{NFSU2_TR(0x71a747);
__builtin_memmove((R+4464),(R+4468),1);
__builtin_memmove((R+4465),(R+4356),1);
__builtin_memmove((R+4466),(R+4469),1);
__builtin_memmove((R+4467),(R+4357),1);
__builtin_memmove((R+4468),(R+4470),1);
__builtin_memmove((R+4469),(R+4358),1);
__builtin_memmove((R+4470),(R+4471),1);
__builtin_memmove((R+4471),(R+4359),1);
}
B71a74a:{NFSU2_TR(0x71a74a);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4454))));
}
B71a74d:{NFSU2_TR(0x71a74d);
{wv<8>((R+4464),uo::psraw<8>(rv<8>((R+4464)),V(0x8ull)));}
}
B71a751:{NFSU2_TR(0x71a751);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4368))));
}
B71a754:{NFSU2_TR(0x71a754);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B71a757:{NFSU2_TR(0x71a757);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B71a75a:{NFSU2_TR(0x71a75a);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B71a75d:{NFSU2_TR(0x71a75d);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6780),8);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(U+0))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(U+2))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(U+4))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(U+6))));
}
B71a764:{NFSU2_TR(0x71a764);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6780),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+6))));
}
B71a76b:{NFSU2_TR(0x71a76b);
w8(R+4368,u64(r4(R+0)));
}
B71a76e:{NFSU2_TR(0x71a76e);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x3ull)));}
}
B71a772:{NFSU2_TR(0x71a772);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B71a776:{NFSU2_TR(0x71a776);
__builtin_memmove((R+4400),(R+4384),8);
}
B71a779:{NFSU2_TR(0x71a779);
__builtin_memmove((R+4374),(R+4370),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4368),2);
}
B71a77c:{NFSU2_TR(0x71a77c);
__builtin_memmove((R+4432),(R+4416),8);
}
B71a77f:{NFSU2_TR(0x71a77f);
__builtin_memmove((R+4372),(R+4368),4);
}
B71a782:{NFSU2_TR(0x71a782);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0xfull)));}
}
B71a786:{NFSU2_TR(0x71a786);
__builtin_memmove((R+4448),(R+4368),8);
}
B71a789:{NFSU2_TR(0x71a789);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0xfull)));}
}
B71a78d:{NFSU2_TR(0x71a78d);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4384))));
}
B71a790:{NFSU2_TR(0x71a790);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B71a793:{NFSU2_TR(0x71a793);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4416))));
}
B71a796:{NFSU2_TR(0x71a796);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B71a799:{NFSU2_TR(0x71a799);
w8(R+4384,u64(u64(r8(R+4384))|u64(m8(0x7c6790))));
}
B71a7a0:{NFSU2_TR(0x71a7a0);
w8(R+4416,u64(u64(r8(R+4416))|u64(m8(0x7c6790))));
}
B71a7a7:{NFSU2_TR(0x71a7a7);
__builtin_memmove((R+4448),(R+4368),8);
}
B71a7aa:{NFSU2_TR(0x71a7aa);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B71a7ad:{NFSU2_TR(0x71a7ad);
{wv<8>((R+4400),uo::psubusw<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B71a7b0:{NFSU2_TR(0x71a7b0);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4368))));
}
B71a7b3:{NFSU2_TR(0x71a7b3);
__builtin_memmove((R+4368),(R+4448),8);
}
B71a7b6:{NFSU2_TR(0x71a7b6);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B71a7b9:{NFSU2_TR(0x71a7b9);
__builtin_memmove((R+4400),(R+4448),8);
}
B71a7bc:{NFSU2_TR(0x71a7bc);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4374))));
}
B71a7bf:{NFSU2_TR(0x71a7bf);
{wv<8>((R+4400),uo::psubusw<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B71a7c2:{NFSU2_TR(0x71a7c2);
{wv<8>((R+4432),uo::psubusw<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B71a7c5:{NFSU2_TR(0x71a7c5);
w8(R+4432,u64(u64(r8(R+4432))|u64(r8(R+4400))));
}
B71a7c8:{NFSU2_TR(0x71a7c8);
__builtin_memmove((R+4400),(R+4448),8);
}
B71a7cb:{NFSU2_TR(0x71a7cb);
{wv<8>((R+4400),uo::psubusw<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B71a7ce:{NFSU2_TR(0x71a7ce);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4406))));
}
B71a7d1:{NFSU2_TR(0x71a7d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4432),(U+8),8);
}
B71a7d5:{NFSU2_TR(0x71a7d5);
__builtin_memmove((R+4368),(R+4384),8);
}
B71a7d8:{NFSU2_TR(0x71a7d8);
__builtin_memmove((R+4464),gp(0x7c67c0),8);
}
B71a7df:{NFSU2_TR(0x71a7df);
{wv<8>((R+4384),uo::packsswb<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B71a7e2:{NFSU2_TR(0x71a7e2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B71a7e5:{NFSU2_TR(0x71a7e5);
w1(R+4432,u8(u32(r1(R+4432))-u32(r1(R+4464))));
w1(R+4433,u8(u32(r1(R+4433))-u32(r1(R+4465))));
w1(R+4434,u8(u32(r1(R+4434))-u32(r1(R+4466))));
w1(R+4435,u8(u32(r1(R+4435))-u32(r1(R+4467))));
w1(R+4436,u8(u32(r1(R+4436))-u32(r1(R+4468))));
w1(R+4437,u8(u32(r1(R+4437))-u32(r1(R+4469))));
w1(R+4438,u8(u32(r1(R+4438))-u32(r1(R+4470))));
w1(R+4439,u8(u32(r1(R+4439))-u32(r1(R+4471))));
}
B71a7e8:{NFSU2_TR(0x71a7e8);
w1(R+4448,u8(u32(r1(R+4448))-u32(r1(R+4464))));
w1(R+4449,u8(u32(r1(R+4449))-u32(r1(R+4465))));
w1(R+4450,u8(u32(r1(R+4450))-u32(r1(R+4466))));
w1(R+4451,u8(u32(r1(R+4451))-u32(r1(R+4467))));
w1(R+4452,u8(u32(r1(R+4452))-u32(r1(R+4468))));
w1(R+4453,u8(u32(r1(R+4453))-u32(r1(R+4469))));
w1(R+4454,u8(u32(r1(R+4454))-u32(r1(R+4470))));
w1(R+4455,u8(u32(r1(R+4455))-u32(r1(R+4471))));
}
B71a7eb:{NFSU2_TR(0x71a7eb);
{wv<8>((R+4432),uo::paddsb<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B71a7ee:{NFSU2_TR(0x71a7ee);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71a7f1:{NFSU2_TR(0x71a7f1);
w1(R+4432,u8(u32(r1(R+4432))+u32(r1(R+4464))));
w1(R+4433,u8(u32(r1(R+4433))+u32(r1(R+4465))));
w1(R+4434,u8(u32(r1(R+4434))+u32(r1(R+4466))));
w1(R+4435,u8(u32(r1(R+4435))+u32(r1(R+4467))));
w1(R+4436,u8(u32(r1(R+4436))+u32(r1(R+4468))));
w1(R+4437,u8(u32(r1(R+4437))+u32(r1(R+4469))));
w1(R+4438,u8(u32(r1(R+4438))+u32(r1(R+4470))));
w1(R+4439,u8(u32(r1(R+4439))+u32(r1(R+4471))));
}
B71a7f4:{NFSU2_TR(0x71a7f4);
w1(R+4448,u8(u32(r1(R+4448))+u32(r1(R+4464))));
w1(R+4449,u8(u32(r1(R+4449))+u32(r1(R+4465))));
w1(R+4450,u8(u32(r1(R+4450))+u32(r1(R+4466))));
w1(R+4451,u8(u32(r1(R+4451))+u32(r1(R+4467))));
w1(R+4452,u8(u32(r1(R+4452))+u32(r1(R+4468))));
w1(R+4453,u8(u32(r1(R+4453))+u32(r1(R+4469))));
w1(R+4454,u8(u32(r1(R+4454))+u32(r1(R+4470))));
w1(R+4455,u8(u32(r1(R+4455))+u32(r1(R+4471))));
}
B71a7f7:{NFSU2_TR(0x71a7f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4432),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71a7fb:{NFSU2_TR(0x71a7fb);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0x1ull)));}
}
B71a7ff:{NFSU2_TR(0x71a7ff);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x1ull)));}
}
B71a803:{NFSU2_TR(0x71a803);
u8 U[8];
__builtin_memmove((U+0),(R+4448),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B71a806:{NFSU2_TR(0x71a806);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B71a80a:{NFSU2_TR(0x71a80a);
{wv<8>((R+4368),uo::packsswb<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B71a80d:{NFSU2_TR(0x71a80d);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4400),(U+8),8);
}
B71a811:{NFSU2_TR(0x71a811);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4352))));
w8(R+4352,u64(u64(r8(U+0))&u64(r8(R+4368))));
}
B71a814:{NFSU2_TR(0x71a814);
w1(R+4384,u8(u32(r1(R+4384))-u32(r1(R+4464))));
w1(R+4385,u8(u32(r1(R+4385))-u32(r1(R+4465))));
w1(R+4386,u8(u32(r1(R+4386))-u32(r1(R+4466))));
w1(R+4387,u8(u32(r1(R+4387))-u32(r1(R+4467))));
w1(R+4388,u8(u32(r1(R+4388))-u32(r1(R+4468))));
w1(R+4389,u8(u32(r1(R+4389))-u32(r1(R+4469))));
w1(R+4390,u8(u32(r1(R+4390))-u32(r1(R+4470))));
w1(R+4391,u8(u32(r1(R+4391))-u32(r1(R+4471))));
}
B71a817:{NFSU2_TR(0x71a817);
w1(R+4400,u8(u32(r1(R+4400))-u32(r1(R+4464))));
w1(R+4401,u8(u32(r1(R+4401))-u32(r1(R+4465))));
w1(R+4402,u8(u32(r1(R+4402))-u32(r1(R+4466))));
w1(R+4403,u8(u32(r1(R+4403))-u32(r1(R+4467))));
w1(R+4404,u8(u32(r1(R+4404))-u32(r1(R+4468))));
w1(R+4405,u8(u32(r1(R+4405))-u32(r1(R+4469))));
w1(R+4406,u8(u32(r1(R+4406))-u32(r1(R+4470))));
w1(R+4407,u8(u32(r1(R+4407))-u32(r1(R+4471))));
}
B71a81a:{NFSU2_TR(0x71a81a);
{wv<8>((R+4384),uo::paddsb<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B71a81d:{NFSU2_TR(0x71a81d);
w1(R+4384,u8(u32(r1(R+4384))+u32(r1(R+4464))));
w1(R+4385,u8(u32(r1(R+4385))+u32(r1(R+4465))));
w1(R+4386,u8(u32(r1(R+4386))+u32(r1(R+4466))));
w1(R+4387,u8(u32(r1(R+4387))+u32(r1(R+4467))));
w1(R+4388,u8(u32(r1(R+4388))+u32(r1(R+4468))));
w1(R+4389,u8(u32(r1(R+4389))+u32(r1(R+4469))));
w1(R+4390,u8(u32(r1(R+4390))+u32(r1(R+4470))));
w1(R+4391,u8(u32(r1(R+4391))+u32(r1(R+4471))));
}
B71a820:{NFSU2_TR(0x71a820);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4384),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71a824:{NFSU2_TR(0x71a824);
{wv<8>((R+4400),uo::psubsb<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B71a827:{NFSU2_TR(0x71a827);
w1(R+4400,u8(u32(r1(R+4400))+u32(r1(R+4464))));
w1(R+4401,u8(u32(r1(R+4401))+u32(r1(R+4465))));
w1(R+4402,u8(u32(r1(R+4402))+u32(r1(R+4466))));
w1(R+4403,u8(u32(r1(R+4403))+u32(r1(R+4467))));
w1(R+4404,u8(u32(r1(R+4404))+u32(r1(R+4468))));
w1(R+4405,u8(u32(r1(R+4405))+u32(r1(R+4469))));
w1(R+4406,u8(u32(r1(R+4406))+u32(r1(R+4470))));
w1(R+4407,u8(u32(r1(R+4407))+u32(r1(R+4471))));
}
B71a82a:{NFSU2_TR(0x71a82a);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4400),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71a82e:{NFSU2_TR(0x71a82e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71a82f:{NFSU2_TR(0x71a82f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71a830:{NFSU2_TR(0x71a830);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71a831:L71a831:{c.instructions+=64;NFSU2_TR(0x71a831);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a832:{NFSU2_TR(0x71a832);
__builtin_memmove((R+12),(R+16),4);
}
B71a834:{NFSU2_TR(0x71a834);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a835:{NFSU2_TR(0x71a835);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a836:{NFSU2_TR(0x71a836);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B71a839:{NFSU2_TR(0x71a839);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B71a83c:{NFSU2_TR(0x71a83c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a83d:{NFSU2_TR(0x71a83d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B71a840:{NFSU2_TR(0x71a840);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71a844:{NFSU2_TR(0x71a844);
__builtin_memmove((R+20),(R+16),4);
}
B71a846:{NFSU2_TR(0x71a846);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1b4ull))));
}
B71a84c:{NFSU2_TR(0x71a84c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a84d:{NFSU2_TR(0x71a84d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a84e:{NFSU2_TR(0x71a84e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a84f:{NFSU2_TR(0x71a84f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71a852:{NFSU2_TR(0x71a852);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71a855:{NFSU2_TR(0x71a855);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71a858:{NFSU2_TR(0x71a858);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71a85b:{NFSU2_TR(0x71a85b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71a85e:{NFSU2_TR(0x71a85e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71a861:{NFSU2_TR(0x71a861);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71a864:{NFSU2_TR(0x71a864);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71a86a:{NFSU2_TR(0x71a86a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71a86d:{NFSU2_TR(0x71a86d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71a873:{NFSU2_TR(0x71a873);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71a876:{NFSU2_TR(0x71a876);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71a879:{NFSU2_TR(0x71a879);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B71a87c:{NFSU2_TR(0x71a87c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B71a87f:{NFSU2_TR(0x71a87f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x817048ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71a885:{NFSU2_TR(0x71a885);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71a888:{NFSU2_TR(0x71a888);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71a88b:{NFSU2_TR(0x71a88b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a88c:{NFSU2_TR(0x71a88c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a88d:{NFSU2_TR(0x71a88d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71a890:{NFSU2_TR(0x71a890);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71a893:{NFSU2_TR(0x71a893);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a894:{NFSU2_TR(0x71a894);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a895:{NFSU2_TR(0x71a895);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71a898:{NFSU2_TR(0x71a898);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B71a89a:{NFSU2_TR(0x71a89a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a89b:{NFSU2_TR(0x71a89b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a89c:{NFSU2_TR(0x71a89c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71a89f:{NFSU2_TR(0x71a89f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71a8a2:{NFSU2_TR(0x71a8a2);
w8(R+4352,u64(r4(R+0)));
}
B71a8a5:{NFSU2_TR(0x71a8a5);
w8(R+4384,u64(r4(R+12)));
}
B71a8a8:{NFSU2_TR(0x71a8a8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71a8a9:{NFSU2_TR(0x71a8a9);
__builtin_memmove((R+4359),(R+4355),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4354),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4353),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4352),1);
}
B71a8ac:{NFSU2_TR(0x71a8ac);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B71a8ae:{NFSU2_TR(0x71a8ae);
__builtin_memmove((R+4391),(R+4387),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4386),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4385),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4384),1);
}
B71a8b1:{NFSU2_TR(0x71a8b1);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71a8b4:{NFSU2_TR(0x71a8b4);
__builtin_memmove((R+4359),(R+4355),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4354),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4353),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4352),1);
}
B71a8b7:{NFSU2_TR(0x71a8b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71a8ba:{NFSU2_TR(0x71a8ba);
__builtin_memmove((R+4391),(R+4387),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4386),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4385),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4384),1);
}
B71a8bd:{NFSU2_TR(0x71a8bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B71a8c0:{NFSU2_TR(0x71a8c0);
__builtin_memmove((R+4359),(R+4355),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4354),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4353),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4352),1);
}
B71a8c3:{NFSU2_TR(0x71a8c3);
__builtin_memmove((R+4368),(R+4352),8);
}
B71a8c6:{NFSU2_TR(0x71a8c6);
__builtin_memmove((R+4391),(R+4387),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4386),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4385),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4384),1);
}
B71a8c9:{NFSU2_TR(0x71a8c9);
w1(R+4368,u8(u32(r1(R+4368))+u32(r1(R+4352))));
w1(R+4369,u8(u32(r1(R+4369))+u32(r1(R+4353))));
w1(R+4370,u8(u32(r1(R+4370))+u32(r1(R+4354))));
w1(R+4371,u8(u32(r1(R+4371))+u32(r1(R+4355))));
w1(R+4372,u8(u32(r1(R+4372))+u32(r1(R+4356))));
w1(R+4373,u8(u32(r1(R+4373))+u32(r1(R+4357))));
w1(R+4374,u8(u32(r1(R+4374))+u32(r1(R+4358))));
w1(R+4375,u8(u32(r1(R+4375))+u32(r1(R+4359))));
}
B71a8cc:{NFSU2_TR(0x71a8cc);
w1(R+4368,u8(u32(r1(R+4368))+u32(r1(R+4352))));
w1(R+4369,u8(u32(r1(R+4369))+u32(r1(R+4353))));
w1(R+4370,u8(u32(r1(R+4370))+u32(r1(R+4354))));
w1(R+4371,u8(u32(r1(R+4371))+u32(r1(R+4355))));
w1(R+4372,u8(u32(r1(R+4372))+u32(r1(R+4356))));
w1(R+4373,u8(u32(r1(R+4373))+u32(r1(R+4357))));
w1(R+4374,u8(u32(r1(R+4374))+u32(r1(R+4358))));
w1(R+4375,u8(u32(r1(R+4375))+u32(r1(R+4359))));
}
B71a8cf:{NFSU2_TR(0x71a8cf);
{wv<8>((R+4368),uo::paddusb<8>(rv<8>((R+4368)),rv<8>(gp(0x817790))));}
}
B71a8d6:{NFSU2_TR(0x71a8d6);
u8 U[8];
__builtin_memmove((U+0),gp(0x817760),8);
w1(R+4352,u8(u32(r1(R+4352))+u32(r1(U+0))));
w1(R+4353,u8(u32(r1(R+4353))+u32(r1(U+1))));
w1(R+4354,u8(u32(r1(R+4354))+u32(r1(U+2))));
w1(R+4355,u8(u32(r1(R+4355))+u32(r1(U+3))));
w1(R+4356,u8(u32(r1(R+4356))+u32(r1(U+4))));
w1(R+4357,u8(u32(r1(R+4357))+u32(r1(U+5))));
w1(R+4358,u8(u32(r1(R+4358))+u32(r1(U+6))));
w1(R+4359,u8(u32(r1(R+4359))+u32(r1(U+7))));
}
B71a8dd:{NFSU2_TR(0x71a8dd);
{wv<8>((R+4368),uo::psubusb<8>(rv<8>((R+4368)),rv<8>(gp(0x817790))));}
}
B71a8e4:{NFSU2_TR(0x71a8e4);
__builtin_memmove((R+4400),gp(0x817770),8);
}
B71a8eb:{NFSU2_TR(0x71a8eb);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4368))));
w8(R+4368,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B71a8ee:L71a8ee:{c.instructions+=74;NFSU2_TR(0x71a8ee);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71a8f1:{NFSU2_TR(0x71a8f1);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B71a8f5:{NFSU2_TR(0x71a8f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4416),(U+8),8);
}
B71a8f9:{NFSU2_TR(0x71a8f9);
__builtin_memmove((R+4432),(R+4400),8);
}
B71a8fc:{NFSU2_TR(0x71a8fc);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71a8ff:{NFSU2_TR(0x71a8ff);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B71a902:{NFSU2_TR(0x71a902);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B71a905:{NFSU2_TR(0x71a905);
__builtin_memmove((R+4448),(R+4352),8);
}
B71a908:{NFSU2_TR(0x71a908);
__builtin_memmove((R+4416),(R+4352),8);
}
B71a90b:{NFSU2_TR(0x71a90b);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71a90e:{NFSU2_TR(0x71a90e);
__builtin_memmove((R+4432),gp(0x817780),8);
}
B71a915:{NFSU2_TR(0x71a915);
u8 U[8];
__builtin_memmove((U+0),gp(0x817750),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B71a91c:{NFSU2_TR(0x71a91c);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B71a91f:{NFSU2_TR(0x71a91f);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B71a922:{NFSU2_TR(0x71a922);
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
B71a925:{NFSU2_TR(0x71a925);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71a928:{NFSU2_TR(0x71a928);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71a92b:{NFSU2_TR(0x71a92b);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71a92e:{NFSU2_TR(0x71a92e);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71a931:{NFSU2_TR(0x71a931);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71a934:{NFSU2_TR(0x71a934);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4448))));
}
B71a938:{NFSU2_TR(0x71a938);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71a93c:{NFSU2_TR(0x71a93c);
__builtin_memmove((R+5071),(R+4615),1);
__builtin_memmove((R+5070),(R+5063),1);
__builtin_memmove((R+5069),(R+4614),1);
__builtin_memmove((R+5068),(R+5062),1);
__builtin_memmove((R+5067),(R+4613),1);
__builtin_memmove((R+5066),(R+5061),1);
__builtin_memmove((R+5065),(R+4612),1);
__builtin_memmove((R+5064),(R+5060),1);
__builtin_memmove((R+5063),(R+4611),1);
__builtin_memmove((R+5062),(R+5059),1);
__builtin_memmove((R+5061),(R+4610),1);
__builtin_memmove((R+5060),(R+5058),1);
__builtin_memmove((R+5059),(R+4609),1);
__builtin_memmove((R+5058),(R+5057),1);
__builtin_memmove((R+5057),(R+4608),1);
}
B71a940:{NFSU2_TR(0x71a940);
__builtin_memmove((R+4432),(R+4400),8);
}
B71a943:{NFSU2_TR(0x71a943);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0x8ull)));}
}
B71a948:{NFSU2_TR(0x71a948);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71a94b:{NFSU2_TR(0x71a94b);
u8 U[16];
__builtin_memmove((U+0),(R+5056),16);
__builtin_memmove(gp(u32(r4(R+28))),(U+0),16);
}
B71a94f:{NFSU2_TR(0x71a94f);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B71a952:{NFSU2_TR(0x71a952);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B71a955:{NFSU2_TR(0x71a955);
__builtin_memmove((R+4448),(R+4352),8);
}
B71a958:{NFSU2_TR(0x71a958);
__builtin_memmove((R+4416),(R+4352),8);
}
B71a95b:{NFSU2_TR(0x71a95b);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71a95e:{NFSU2_TR(0x71a95e);
__builtin_memmove((R+4432),gp(0x817780),8);
}
B71a965:{NFSU2_TR(0x71a965);
u8 U[8];
__builtin_memmove((U+0),gp(0x817750),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B71a96c:{NFSU2_TR(0x71a96c);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B71a96f:{NFSU2_TR(0x71a96f);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B71a972:{NFSU2_TR(0x71a972);
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
B71a975:{NFSU2_TR(0x71a975);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71a978:{NFSU2_TR(0x71a978);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71a97b:{NFSU2_TR(0x71a97b);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71a97e:{NFSU2_TR(0x71a97e);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71a981:{NFSU2_TR(0x71a981);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71a984:{NFSU2_TR(0x71a984);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B71a988:{NFSU2_TR(0x71a988);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71a98c:{NFSU2_TR(0x71a98c);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4448))));
}
B71a990:{NFSU2_TR(0x71a990);
__builtin_memmove((R+4432),(R+4400),8);
}
B71a993:{NFSU2_TR(0x71a993);
__builtin_memmove((R+5071),(R+4615),1);
__builtin_memmove((R+5070),(R+5063),1);
__builtin_memmove((R+5069),(R+4614),1);
__builtin_memmove((R+5068),(R+5062),1);
__builtin_memmove((R+5067),(R+4613),1);
__builtin_memmove((R+5066),(R+5061),1);
__builtin_memmove((R+5065),(R+4612),1);
__builtin_memmove((R+5064),(R+5060),1);
__builtin_memmove((R+5063),(R+4611),1);
__builtin_memmove((R+5062),(R+5059),1);
__builtin_memmove((R+5061),(R+4610),1);
__builtin_memmove((R+5060),(R+5058),1);
__builtin_memmove((R+5059),(R+4609),1);
__builtin_memmove((R+5058),(R+5057),1);
__builtin_memmove((R+5057),(R+4608),1);
}
B71a997:{NFSU2_TR(0x71a997);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71a99a:{NFSU2_TR(0x71a99a);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0x8ull)));}
}
B71a99f:{NFSU2_TR(0x71a99f);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B71a9a2:{NFSU2_TR(0x71a9a2);
u8 U[16];
__builtin_memmove((U+0),(R+5056),16);
__builtin_memmove(gp(u32(r4(R+0))),(U+0),16);
}
B71a9a6:{NFSU2_TR(0x71a9a6);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B71a9a9:{NFSU2_TR(0x71a9a9);
__builtin_memmove((R+4448),(R+4352),8);
}
B71a9ac:{NFSU2_TR(0x71a9ac);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B71a9b0:{NFSU2_TR(0x71a9b0);
__builtin_memmove((R+4416),(R+4352),8);
}
B71a9b3:{NFSU2_TR(0x71a9b3);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71a9b6:{NFSU2_TR(0x71a9b6);
__builtin_memmove((R+4432),gp(0x817780),8);
}
B71a9bd:{NFSU2_TR(0x71a9bd);
u8 U[8];
__builtin_memmove((U+0),gp(0x817750),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B71a9c4:{NFSU2_TR(0x71a9c4);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B71a9c7:{NFSU2_TR(0x71a9c7);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B71a9ca:{NFSU2_TR(0x71a9ca);
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
B71a9cd:{NFSU2_TR(0x71a9cd);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71a9d0:{NFSU2_TR(0x71a9d0);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71a9d3:{NFSU2_TR(0x71a9d3);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71a9d6:{NFSU2_TR(0x71a9d6);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71a9d9:{NFSU2_TR(0x71a9d9);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B71a9db:{NFSU2_TR(0x71a9db);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4448))));
}
B71a9df:{NFSU2_TR(0x71a9df);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B71a9e2:{NFSU2_TR(0x71a9e2);
__builtin_memmove((R+5071),(R+4615),1);
__builtin_memmove((R+5070),(R+5063),1);
__builtin_memmove((R+5069),(R+4614),1);
__builtin_memmove((R+5068),(R+5062),1);
__builtin_memmove((R+5067),(R+4613),1);
__builtin_memmove((R+5066),(R+5061),1);
__builtin_memmove((R+5065),(R+4612),1);
__builtin_memmove((R+5064),(R+5060),1);
__builtin_memmove((R+5063),(R+4611),1);
__builtin_memmove((R+5062),(R+5059),1);
__builtin_memmove((R+5061),(R+4610),1);
__builtin_memmove((R+5060),(R+5058),1);
__builtin_memmove((R+5059),(R+4609),1);
__builtin_memmove((R+5058),(R+5057),1);
__builtin_memmove((R+5057),(R+4608),1);
}
B71a9e6:{NFSU2_TR(0x71a9e6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B71a9e9:{NFSU2_TR(0x71a9e9);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0x8ull)));}
}
B71a9ee:{NFSU2_TR(0x71a9ee);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71a9f0:{NFSU2_TR(0x71a9f0);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71a9f5:{NFSU2_TR(0x71a9f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71a8eeu);}goto L71a8ee;}}
}
B71a9fb:L71a9fb:{c.instructions+=28;NFSU2_TR(0x71a9fb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71a9fe:{NFSU2_TR(0x71a9fe);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B71aa02:{NFSU2_TR(0x71aa02);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4416),(U+8),8);
}
B71aa06:{NFSU2_TR(0x71aa06);
__builtin_memmove((R+4432),(R+4400),8);
}
B71aa09:{NFSU2_TR(0x71aa09);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71aa0c:{NFSU2_TR(0x71aa0c);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B71aa0f:{NFSU2_TR(0x71aa0f);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B71aa12:{NFSU2_TR(0x71aa12);
__builtin_memmove((R+4448),(R+4352),8);
}
B71aa15:{NFSU2_TR(0x71aa15);
__builtin_memmove((R+4416),(R+4352),8);
}
B71aa18:{NFSU2_TR(0x71aa18);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71aa1b:{NFSU2_TR(0x71aa1b);
__builtin_memmove((R+4432),gp(0x817780),8);
}
B71aa22:{NFSU2_TR(0x71aa22);
u8 U[8];
__builtin_memmove((U+0),gp(0x817750),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B71aa29:{NFSU2_TR(0x71aa29);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B71aa2c:{NFSU2_TR(0x71aa2c);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B71aa2f:{NFSU2_TR(0x71aa2f);
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
B71aa32:{NFSU2_TR(0x71aa32);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71aa35:{NFSU2_TR(0x71aa35);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71aa38:{NFSU2_TR(0x71aa38);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71aa3b:{NFSU2_TR(0x71aa3b);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71aa3e:{NFSU2_TR(0x71aa3e);
wv<16>((R+4992),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4448))));
}
B71aa42:{NFSU2_TR(0x71aa42);
__builtin_memmove((R+5071),(R+4999),1);
__builtin_memmove((R+5070),(R+5063),1);
__builtin_memmove((R+5069),(R+4998),1);
__builtin_memmove((R+5068),(R+5062),1);
__builtin_memmove((R+5067),(R+4997),1);
__builtin_memmove((R+5066),(R+5061),1);
__builtin_memmove((R+5065),(R+4996),1);
__builtin_memmove((R+5064),(R+5060),1);
__builtin_memmove((R+5063),(R+4995),1);
__builtin_memmove((R+5062),(R+5059),1);
__builtin_memmove((R+5061),(R+4994),1);
__builtin_memmove((R+5060),(R+5058),1);
__builtin_memmove((R+5059),(R+4993),1);
__builtin_memmove((R+5058),(R+5057),1);
__builtin_memmove((R+5057),(R+4992),1);
}
B71aa46:{NFSU2_TR(0x71aa46);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0x8ull)));}
}
B71aa4b:{NFSU2_TR(0x71aa4b);
u8 U[16];
__builtin_memmove((U+0),(R+5056),16);
__builtin_memmove(gp(u32(r4(R+28))),(U+0),16);
}
B71aa4f:{NFSU2_TR(0x71aa4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71aa52:{NFSU2_TR(0x71aa52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71aa55:{NFSU2_TR(0x71aa55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71aa58:{NFSU2_TR(0x71aa58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71aa5b:{NFSU2_TR(0x71aa5b);
w4(R+20,u32(0x8ull));
}
B71aa60:L71aa60:{c.instructions+=44;NFSU2_TR(0x71aa60);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B71aa65:{NFSU2_TR(0x71aa65);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B71aa69:{NFSU2_TR(0x71aa69);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+0))),16);
__builtin_memmove((R+4864),(U+0),16);
}
B71aa6d:{NFSU2_TR(0x71aa6d);
__builtin_memmove((R+4623),(R+5063),1);
__builtin_memmove((R+4622),(R+4615),1);
__builtin_memmove((R+4621),(R+5062),1);
__builtin_memmove((R+4620),(R+4614),1);
__builtin_memmove((R+4619),(R+5061),1);
__builtin_memmove((R+4618),(R+4613),1);
__builtin_memmove((R+4617),(R+5060),1);
__builtin_memmove((R+4616),(R+4612),1);
__builtin_memmove((R+4615),(R+5059),1);
__builtin_memmove((R+4614),(R+4611),1);
__builtin_memmove((R+4613),(R+5058),1);
__builtin_memmove((R+4612),(R+4610),1);
__builtin_memmove((R+4611),(R+5057),1);
__builtin_memmove((R+4610),(R+4609),1);
__builtin_memmove((R+4609),(R+5056),1);
}
B71aa71:{NFSU2_TR(0x71aa71);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4736),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B71aa76:{NFSU2_TR(0x71aa76);
w2(R+4608,u16(u32(r2(R+4608))*u32(r2(R+4864))));
w2(R+4610,u16(u32(r2(R+4610))*u32(r2(R+4866))));
w2(R+4612,u16(u32(r2(R+4612))*u32(r2(R+4868))));
w2(R+4614,u16(u32(r2(R+4614))*u32(r2(R+4870))));
w2(R+4616,u16(u32(r2(R+4616))*u32(r2(R+4872))));
w2(R+4618,u16(u32(r2(R+4618))*u32(r2(R+4874))));
w2(R+4620,u16(u32(r2(R+4620))*u32(r2(R+4876))));
w2(R+4622,u16(u32(r2(R+4622))*u32(r2(R+4878))));
}
B71aa7a:{NFSU2_TR(0x71aa7a);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71aa7f:{NFSU2_TR(0x71aa7f);
__builtin_memmove((R+4751),(R+5063),1);
__builtin_memmove((R+4750),(R+4743),1);
__builtin_memmove((R+4749),(R+5062),1);
__builtin_memmove((R+4748),(R+4742),1);
__builtin_memmove((R+4747),(R+5061),1);
__builtin_memmove((R+4746),(R+4741),1);
__builtin_memmove((R+4745),(R+5060),1);
__builtin_memmove((R+4744),(R+4740),1);
__builtin_memmove((R+4743),(R+5059),1);
__builtin_memmove((R+4742),(R+4739),1);
__builtin_memmove((R+4741),(R+5058),1);
__builtin_memmove((R+4740),(R+4738),1);
__builtin_memmove((R+4739),(R+5057),1);
__builtin_memmove((R+4738),(R+4737),1);
__builtin_memmove((R+4737),(R+5056),1);
}
B71aa83:{NFSU2_TR(0x71aa83);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
wv<16>((R+4672),eval<Op::INT_ZEXT,16,8>(rv<8>((U+4))));
}
B71aa88:{NFSU2_TR(0x71aa88);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4992))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4994))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4996))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4998))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+5000))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+5002))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+5004))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+5006))));
}
B71aa8c:{NFSU2_TR(0x71aa8c);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+12))),16);
__builtin_memmove((R+4800),(U+0),16);
}
B71aa90:{NFSU2_TR(0x71aa90);
__builtin_memmove((R+4687),(R+5063),1);
__builtin_memmove((R+4686),(R+4679),1);
__builtin_memmove((R+4685),(R+5062),1);
__builtin_memmove((R+4684),(R+4678),1);
__builtin_memmove((R+4683),(R+5061),1);
__builtin_memmove((R+4682),(R+4677),1);
__builtin_memmove((R+4681),(R+5060),1);
__builtin_memmove((R+4680),(R+4676),1);
__builtin_memmove((R+4679),(R+5059),1);
__builtin_memmove((R+4678),(R+4675),1);
__builtin_memmove((R+4677),(R+5058),1);
__builtin_memmove((R+4676),(R+4674),1);
__builtin_memmove((R+4675),(R+5057),1);
__builtin_memmove((R+4674),(R+4673),1);
__builtin_memmove((R+4673),(R+5056),1);
}
B71aa94:{NFSU2_TR(0x71aa94);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
wv<16>((R+4928),eval<Op::INT_ZEXT,16,8>(rv<8>((U+4))));
}
B71aa99:{NFSU2_TR(0x71aa99);
w2(R+4672,u16(u32(r2(R+4672))*u32(r2(R+4800))));
w2(R+4674,u16(u32(r2(R+4674))*u32(r2(R+4802))));
w2(R+4676,u16(u32(r2(R+4676))*u32(r2(R+4804))));
w2(R+4678,u16(u32(r2(R+4678))*u32(r2(R+4806))));
w2(R+4680,u16(u32(r2(R+4680))*u32(r2(R+4808))));
w2(R+4682,u16(u32(r2(R+4682))*u32(r2(R+4810))));
w2(R+4684,u16(u32(r2(R+4684))*u32(r2(R+4812))));
w2(R+4686,u16(u32(r2(R+4686))*u32(r2(R+4814))));
}
B71aa9d:{NFSU2_TR(0x71aa9d);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4992))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4994))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4996))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4998))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5000))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5002))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5004))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5006))));
}
B71aaa1:{NFSU2_TR(0x71aaa1);
__builtin_memmove((R+4943),(R+5063),1);
__builtin_memmove((R+4942),(R+4935),1);
__builtin_memmove((R+4941),(R+5062),1);
__builtin_memmove((R+4940),(R+4934),1);
__builtin_memmove((R+4939),(R+5061),1);
__builtin_memmove((R+4938),(R+4933),1);
__builtin_memmove((R+4937),(R+5060),1);
__builtin_memmove((R+4936),(R+4932),1);
__builtin_memmove((R+4935),(R+5059),1);
__builtin_memmove((R+4934),(R+4931),1);
__builtin_memmove((R+4933),(R+5058),1);
__builtin_memmove((R+4932),(R+4930),1);
__builtin_memmove((R+4931),(R+5057),1);
__builtin_memmove((R+4930),(R+4929),1);
__builtin_memmove((R+4929),(R+5056),1);
}
B71aaa5:{NFSU2_TR(0x71aaa5);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71aaad:{NFSU2_TR(0x71aaad);
w2(R+4928,u16(u32(r2(R+4928))*u32(r2(R+4992))));
w2(R+4930,u16(u32(r2(R+4930))*u32(r2(R+4994))));
w2(R+4932,u16(u32(r2(R+4932))*u32(r2(R+4996))));
w2(R+4934,u16(u32(r2(R+4934))*u32(r2(R+4998))));
w2(R+4936,u16(u32(r2(R+4936))*u32(r2(R+5000))));
w2(R+4938,u16(u32(r2(R+4938))*u32(r2(R+5002))));
w2(R+4940,u16(u32(r2(R+4940))*u32(r2(R+5004))));
w2(R+4942,u16(u32(r2(R+4942))*u32(r2(R+5006))));
}
B71aab1:{NFSU2_TR(0x71aab1);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B71aab5:{NFSU2_TR(0x71aab5);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B71aab9:{NFSU2_TR(0x71aab9);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4672))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4674))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4676))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4678))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4680))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4682))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4684))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4686))));
}
B71aabd:{NFSU2_TR(0x71aabd);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4992))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4994))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4996))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4998))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5000))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5002))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5004))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5006))));
}
B71aac1:{NFSU2_TR(0x71aac1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
wv<16>((R+4736),eval<Op::INT_ZEXT,16,8>(rv<8>((U+0))));
}
B71aac5:{NFSU2_TR(0x71aac5);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4928))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4930))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4932))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4934))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4936))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4938))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4940))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4942))));
}
B71aac9:{NFSU2_TR(0x71aac9);
__builtin_memmove((R+4672),gp(0x817730),16);
}
B71aad1:{NFSU2_TR(0x71aad1);
__builtin_memmove((R+4751),(R+5063),1);
__builtin_memmove((R+4750),(R+4743),1);
__builtin_memmove((R+4749),(R+5062),1);
__builtin_memmove((R+4748),(R+4742),1);
__builtin_memmove((R+4747),(R+5061),1);
__builtin_memmove((R+4746),(R+4741),1);
__builtin_memmove((R+4745),(R+5060),1);
__builtin_memmove((R+4744),(R+4740),1);
__builtin_memmove((R+4743),(R+5059),1);
__builtin_memmove((R+4742),(R+4739),1);
__builtin_memmove((R+4741),(R+5058),1);
__builtin_memmove((R+4740),(R+4738),1);
__builtin_memmove((R+4739),(R+5057),1);
__builtin_memmove((R+4738),(R+4737),1);
__builtin_memmove((R+4737),(R+5056),1);
}
B71aad5:{NFSU2_TR(0x71aad5);
w2(R+4672,u16(u32(r2(R+4672))-u32(r2(R+4864))));
w2(R+4674,u16(u32(r2(R+4674))-u32(r2(R+4866))));
w2(R+4676,u16(u32(r2(R+4676))-u32(r2(R+4868))));
w2(R+4678,u16(u32(r2(R+4678))-u32(r2(R+4870))));
w2(R+4680,u16(u32(r2(R+4680))-u32(r2(R+4872))));
w2(R+4682,u16(u32(r2(R+4682))-u32(r2(R+4874))));
w2(R+4684,u16(u32(r2(R+4684))-u32(r2(R+4876))));
w2(R+4686,u16(u32(r2(R+4686))-u32(r2(R+4878))));
}
B71aad9:{NFSU2_TR(0x71aad9);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4672))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4674))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4676))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4678))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4680))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4682))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4684))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4686))));
}
B71aadd:{NFSU2_TR(0x71aadd);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B71aadf:{NFSU2_TR(0x71aadf);
__builtin_memmove((R+4992),gp(0x817740),16);
}
B71aae7:{NFSU2_TR(0x71aae7);
__builtin_memmove((R+5056),(R+4992),16);
}
B71aaeb:{NFSU2_TR(0x71aaeb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B71aaee:{NFSU2_TR(0x71aaee);
{wv<16>((R+5056),uo::psllw<16>(rv<16>((R+5056)),V(0x8ull)));}
}
B71aaf3:{NFSU2_TR(0x71aaf3);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B71aaf7:{NFSU2_TR(0x71aaf7);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B71aaf9:{NFSU2_TR(0x71aaf9);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4992))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4994))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4996))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4998))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+5000))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+5002))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+5004))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+5006))));
}
B71aafd:{NFSU2_TR(0x71aafd);
w1(R+512,carry<u32>(r4(R+12),u32(0x10ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B71ab00:{NFSU2_TR(0x71ab00);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+5056))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+5058))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+5060))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+5062))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+5064))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+5066))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+5068))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+5070))));
}
B71ab04:{NFSU2_TR(0x71ab04);
{wv<16>((R+4608),uo::psubusw<16>(rv<16>((R+4608)),rv<16>((R+5056))));}
}
B71ab08:{NFSU2_TR(0x71ab08);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71ab09:{NFSU2_TR(0x71ab09);
w2(R+4608,shr<u16>(r2(R+4608),u64(u32(0x7ull))));
w2(R+4610,shr<u16>(r2(R+4610),u64(u32(0x7ull))));
w2(R+4612,shr<u16>(r2(R+4612),u64(u32(0x7ull))));
w2(R+4614,shr<u16>(r2(R+4614),u64(u32(0x7ull))));
w2(R+4616,shr<u16>(r2(R+4616),u64(u32(0x7ull))));
w2(R+4618,shr<u16>(r2(R+4618),u64(u32(0x7ull))));
w2(R+4620,shr<u16>(r2(R+4620),u64(u32(0x7ull))));
w2(R+4622,shr<u16>(r2(R+4622),u64(u32(0x7ull))));
}
B71ab0e:{NFSU2_TR(0x71ab0e);
u8 U[54];
__builtin_memmove((U+5),(R+4608),16);
__builtin_memmove((U+21),(R+5056),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4608),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4609),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4610),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4611),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4612),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4613),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4614),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4615),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4616),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4617),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4618),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4619),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4620),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4621),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4622),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4623),(U+37),1);
}
B71ab12:{NFSU2_TR(0x71ab12);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4608),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71ab17:{NFSU2_TR(0x71ab17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71aa60u);}goto L71aa60;}}
}
B71ab1d:L71ab1d:{c.instructions+=15;NFSU2_TR(0x71ab1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71ab1e:{NFSU2_TR(0x71ab1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71ab1f:{NFSU2_TR(0x71ab1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71ab20:{NFSU2_TR(0x71ab20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B71ab21:{NFSU2_TR(0x71ab21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B71ab22:{NFSU2_TR(0x71ab22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71ab23:{NFSU2_TR(0x71ab23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71ab24:{NFSU2_TR(0x71ab24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71ab25:{NFSU2_TR(0x71ab25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71ab26:{NFSU2_TR(0x71ab26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71ab27:{NFSU2_TR(0x71ab27);
__builtin_memmove((R+16),(R+20),4);
}
B71ab29:{NFSU2_TR(0x71ab29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71ab2a:{NFSU2_TR(0x71ab2a);
__builtin_memmove((R+16),(R+12),4);
}
B71ab2c:{NFSU2_TR(0x71ab2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71ab2d:{NFSU2_TR(0x71ab2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71ab2e:L71ab2e:{c.instructions+=64;NFSU2_TR(0x71ab2e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ab2f:{NFSU2_TR(0x71ab2f);
__builtin_memmove((R+12),(R+16),4);
}
B71ab31:{NFSU2_TR(0x71ab31);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ab32:{NFSU2_TR(0x71ab32);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ab33:{NFSU2_TR(0x71ab33);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B71ab36:{NFSU2_TR(0x71ab36);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B71ab39:{NFSU2_TR(0x71ab39);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ab3a:{NFSU2_TR(0x71ab3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B71ab3d:{NFSU2_TR(0x71ab3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ab41:{NFSU2_TR(0x71ab41);
__builtin_memmove((R+20),(R+16),4);
}
B71ab43:{NFSU2_TR(0x71ab43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1b4ull))));
}
B71ab49:{NFSU2_TR(0x71ab49);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ab4a:{NFSU2_TR(0x71ab4a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ab4b:{NFSU2_TR(0x71ab4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ab4c:{NFSU2_TR(0x71ab4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ab4f:{NFSU2_TR(0x71ab4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71ab52:{NFSU2_TR(0x71ab52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ab55:{NFSU2_TR(0x71ab55);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ab58:{NFSU2_TR(0x71ab58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ab5b:{NFSU2_TR(0x71ab5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ab5e:{NFSU2_TR(0x71ab5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ab61:{NFSU2_TR(0x71ab61);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71ab67:{NFSU2_TR(0x71ab67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ab6a:{NFSU2_TR(0x71ab6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71ab70:{NFSU2_TR(0x71ab70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ab73:{NFSU2_TR(0x71ab73);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ab76:{NFSU2_TR(0x71ab76);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B71ab79:{NFSU2_TR(0x71ab79);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B71ab7c:{NFSU2_TR(0x71ab7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x817048ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ab82:{NFSU2_TR(0x71ab82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ab85:{NFSU2_TR(0x71ab85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ab88:{NFSU2_TR(0x71ab88);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ab89:{NFSU2_TR(0x71ab89);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ab8a:{NFSU2_TR(0x71ab8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71ab8d:{NFSU2_TR(0x71ab8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71ab90:{NFSU2_TR(0x71ab90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ab91:{NFSU2_TR(0x71ab91);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ab92:{NFSU2_TR(0x71ab92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71ab95:{NFSU2_TR(0x71ab95);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B71ab97:{NFSU2_TR(0x71ab97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ab98:{NFSU2_TR(0x71ab98);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ab99:{NFSU2_TR(0x71ab99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ab9c:{NFSU2_TR(0x71ab9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71ab9f:{NFSU2_TR(0x71ab9f);
w8(R+4352,u64(r4(R+0)));
}
B71aba2:{NFSU2_TR(0x71aba2);
w8(R+4384,u64(r4(R+12)));
}
B71aba5:{NFSU2_TR(0x71aba5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71aba6:{NFSU2_TR(0x71aba6);
__builtin_memmove((R+4359),(R+4355),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4354),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4353),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4352),1);
}
B71aba9:{NFSU2_TR(0x71aba9);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B71abab:{NFSU2_TR(0x71abab);
__builtin_memmove((R+4391),(R+4387),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4386),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4385),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4384),1);
}
B71abae:{NFSU2_TR(0x71abae);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71abb1:{NFSU2_TR(0x71abb1);
__builtin_memmove((R+4359),(R+4355),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4354),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4353),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4352),1);
}
B71abb4:{NFSU2_TR(0x71abb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71abb7:{NFSU2_TR(0x71abb7);
__builtin_memmove((R+4391),(R+4387),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4386),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4385),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4384),1);
}
B71abba:{NFSU2_TR(0x71abba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B71abbd:{NFSU2_TR(0x71abbd);
__builtin_memmove((R+4359),(R+4355),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4354),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4353),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4352),1);
}
B71abc0:{NFSU2_TR(0x71abc0);
__builtin_memmove((R+4368),(R+4352),8);
}
B71abc3:{NFSU2_TR(0x71abc3);
__builtin_memmove((R+4391),(R+4387),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4386),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4385),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4384),1);
}
B71abc6:{NFSU2_TR(0x71abc6);
w1(R+4368,u8(u32(r1(R+4368))+u32(r1(R+4352))));
w1(R+4369,u8(u32(r1(R+4369))+u32(r1(R+4353))));
w1(R+4370,u8(u32(r1(R+4370))+u32(r1(R+4354))));
w1(R+4371,u8(u32(r1(R+4371))+u32(r1(R+4355))));
w1(R+4372,u8(u32(r1(R+4372))+u32(r1(R+4356))));
w1(R+4373,u8(u32(r1(R+4373))+u32(r1(R+4357))));
w1(R+4374,u8(u32(r1(R+4374))+u32(r1(R+4358))));
w1(R+4375,u8(u32(r1(R+4375))+u32(r1(R+4359))));
}
B71abc9:{NFSU2_TR(0x71abc9);
w1(R+4368,u8(u32(r1(R+4368))+u32(r1(R+4352))));
w1(R+4369,u8(u32(r1(R+4369))+u32(r1(R+4353))));
w1(R+4370,u8(u32(r1(R+4370))+u32(r1(R+4354))));
w1(R+4371,u8(u32(r1(R+4371))+u32(r1(R+4355))));
w1(R+4372,u8(u32(r1(R+4372))+u32(r1(R+4356))));
w1(R+4373,u8(u32(r1(R+4373))+u32(r1(R+4357))));
w1(R+4374,u8(u32(r1(R+4374))+u32(r1(R+4358))));
w1(R+4375,u8(u32(r1(R+4375))+u32(r1(R+4359))));
}
B71abcc:{NFSU2_TR(0x71abcc);
{wv<8>((R+4368),uo::paddusb<8>(rv<8>((R+4368)),rv<8>(gp(0x8177a0))));}
}
B71abd3:{NFSU2_TR(0x71abd3);
u8 U[8];
__builtin_memmove((U+0),gp(0x817760),8);
w1(R+4352,u8(u32(r1(R+4352))+u32(r1(U+0))));
w1(R+4353,u8(u32(r1(R+4353))+u32(r1(U+1))));
w1(R+4354,u8(u32(r1(R+4354))+u32(r1(U+2))));
w1(R+4355,u8(u32(r1(R+4355))+u32(r1(U+3))));
w1(R+4356,u8(u32(r1(R+4356))+u32(r1(U+4))));
w1(R+4357,u8(u32(r1(R+4357))+u32(r1(U+5))));
w1(R+4358,u8(u32(r1(R+4358))+u32(r1(U+6))));
w1(R+4359,u8(u32(r1(R+4359))+u32(r1(U+7))));
}
B71abda:{NFSU2_TR(0x71abda);
{wv<8>((R+4368),uo::psubusb<8>(rv<8>((R+4368)),rv<8>(gp(0x8177a0))));}
}
B71abe1:{NFSU2_TR(0x71abe1);
__builtin_memmove((R+4400),gp(0x817770),8);
}
B71abe8:{NFSU2_TR(0x71abe8);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4368))));
w8(R+4368,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B71abeb:L71abeb:{c.instructions+=77;NFSU2_TR(0x71abeb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71abee:{NFSU2_TR(0x71abee);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B71abf2:{NFSU2_TR(0x71abf2);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4416),(U+8),8);
}
B71abf6:{NFSU2_TR(0x71abf6);
__builtin_memmove((R+4432),(R+4400),8);
}
B71abf9:{NFSU2_TR(0x71abf9);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71abfc:{NFSU2_TR(0x71abfc);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B71abff:{NFSU2_TR(0x71abff);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B71ac02:{NFSU2_TR(0x71ac02);
__builtin_memmove((R+4448),(R+4352),8);
}
B71ac05:{NFSU2_TR(0x71ac05);
{wv<8>((R+4400),uo::paddusb<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71ac08:{NFSU2_TR(0x71ac08);
__builtin_memmove((R+4416),(R+4352),8);
}
B71ac0b:{NFSU2_TR(0x71ac0b);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71ac0e:{NFSU2_TR(0x71ac0e);
__builtin_memmove((R+4432),gp(0x817780),8);
}
B71ac15:{NFSU2_TR(0x71ac15);
u8 U[8];
__builtin_memmove((U+0),gp(0x817750),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B71ac1c:{NFSU2_TR(0x71ac1c);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B71ac1f:{NFSU2_TR(0x71ac1f);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B71ac22:{NFSU2_TR(0x71ac22);
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
B71ac25:{NFSU2_TR(0x71ac25);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71ac28:{NFSU2_TR(0x71ac28);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71ac2b:{NFSU2_TR(0x71ac2b);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71ac2e:{NFSU2_TR(0x71ac2e);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71ac31:{NFSU2_TR(0x71ac31);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71ac34:{NFSU2_TR(0x71ac34);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4448))));
}
B71ac38:{NFSU2_TR(0x71ac38);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71ac3c:{NFSU2_TR(0x71ac3c);
__builtin_memmove((R+5071),(R+4615),1);
__builtin_memmove((R+5070),(R+5063),1);
__builtin_memmove((R+5069),(R+4614),1);
__builtin_memmove((R+5068),(R+5062),1);
__builtin_memmove((R+5067),(R+4613),1);
__builtin_memmove((R+5066),(R+5061),1);
__builtin_memmove((R+5065),(R+4612),1);
__builtin_memmove((R+5064),(R+5060),1);
__builtin_memmove((R+5063),(R+4611),1);
__builtin_memmove((R+5062),(R+5059),1);
__builtin_memmove((R+5061),(R+4610),1);
__builtin_memmove((R+5060),(R+5058),1);
__builtin_memmove((R+5059),(R+4609),1);
__builtin_memmove((R+5058),(R+5057),1);
__builtin_memmove((R+5057),(R+4608),1);
}
B71ac40:{NFSU2_TR(0x71ac40);
__builtin_memmove((R+4432),(R+4400),8);
}
B71ac43:{NFSU2_TR(0x71ac43);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0x8ull)));}
}
B71ac48:{NFSU2_TR(0x71ac48);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71ac4b:{NFSU2_TR(0x71ac4b);
u8 U[16];
__builtin_memmove((U+0),(R+5056),16);
__builtin_memmove(gp(u32(r4(R+28))),(U+0),16);
}
B71ac4f:{NFSU2_TR(0x71ac4f);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B71ac52:{NFSU2_TR(0x71ac52);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B71ac55:{NFSU2_TR(0x71ac55);
__builtin_memmove((R+4448),(R+4352),8);
}
B71ac58:{NFSU2_TR(0x71ac58);
{wv<8>((R+4400),uo::paddusb<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71ac5b:{NFSU2_TR(0x71ac5b);
__builtin_memmove((R+4416),(R+4352),8);
}
B71ac5e:{NFSU2_TR(0x71ac5e);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71ac61:{NFSU2_TR(0x71ac61);
__builtin_memmove((R+4432),gp(0x817780),8);
}
B71ac68:{NFSU2_TR(0x71ac68);
u8 U[8];
__builtin_memmove((U+0),gp(0x817750),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B71ac6f:{NFSU2_TR(0x71ac6f);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B71ac72:{NFSU2_TR(0x71ac72);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B71ac75:{NFSU2_TR(0x71ac75);
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
B71ac78:{NFSU2_TR(0x71ac78);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71ac7b:{NFSU2_TR(0x71ac7b);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71ac7e:{NFSU2_TR(0x71ac7e);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71ac81:{NFSU2_TR(0x71ac81);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71ac84:{NFSU2_TR(0x71ac84);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71ac87:{NFSU2_TR(0x71ac87);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B71ac8b:{NFSU2_TR(0x71ac8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71ac8f:{NFSU2_TR(0x71ac8f);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4448))));
}
B71ac93:{NFSU2_TR(0x71ac93);
__builtin_memmove((R+4432),(R+4400),8);
}
B71ac96:{NFSU2_TR(0x71ac96);
__builtin_memmove((R+5071),(R+4615),1);
__builtin_memmove((R+5070),(R+5063),1);
__builtin_memmove((R+5069),(R+4614),1);
__builtin_memmove((R+5068),(R+5062),1);
__builtin_memmove((R+5067),(R+4613),1);
__builtin_memmove((R+5066),(R+5061),1);
__builtin_memmove((R+5065),(R+4612),1);
__builtin_memmove((R+5064),(R+5060),1);
__builtin_memmove((R+5063),(R+4611),1);
__builtin_memmove((R+5062),(R+5059),1);
__builtin_memmove((R+5061),(R+4610),1);
__builtin_memmove((R+5060),(R+5058),1);
__builtin_memmove((R+5059),(R+4609),1);
__builtin_memmove((R+5058),(R+5057),1);
__builtin_memmove((R+5057),(R+4608),1);
}
B71ac9a:{NFSU2_TR(0x71ac9a);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71ac9d:{NFSU2_TR(0x71ac9d);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0x8ull)));}
}
B71aca2:{NFSU2_TR(0x71aca2);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B71aca5:{NFSU2_TR(0x71aca5);
u8 U[16];
__builtin_memmove((U+0),(R+5056),16);
__builtin_memmove(gp(u32(r4(R+0))),(U+0),16);
}
B71aca9:{NFSU2_TR(0x71aca9);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B71acac:{NFSU2_TR(0x71acac);
__builtin_memmove((R+4448),(R+4352),8);
}
B71acaf:{NFSU2_TR(0x71acaf);
{wv<8>((R+4400),uo::paddusb<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71acb2:{NFSU2_TR(0x71acb2);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B71acb6:{NFSU2_TR(0x71acb6);
__builtin_memmove((R+4416),(R+4352),8);
}
B71acb9:{NFSU2_TR(0x71acb9);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71acbc:{NFSU2_TR(0x71acbc);
__builtin_memmove((R+4432),gp(0x817780),8);
}
B71acc3:{NFSU2_TR(0x71acc3);
u8 U[8];
__builtin_memmove((U+0),gp(0x817750),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B71acca:{NFSU2_TR(0x71acca);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B71accd:{NFSU2_TR(0x71accd);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B71acd0:{NFSU2_TR(0x71acd0);
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
B71acd3:{NFSU2_TR(0x71acd3);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71acd6:{NFSU2_TR(0x71acd6);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71acd9:{NFSU2_TR(0x71acd9);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71acdc:{NFSU2_TR(0x71acdc);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71acdf:{NFSU2_TR(0x71acdf);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B71ace1:{NFSU2_TR(0x71ace1);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4448))));
}
B71ace5:{NFSU2_TR(0x71ace5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B71ace8:{NFSU2_TR(0x71ace8);
__builtin_memmove((R+5071),(R+4615),1);
__builtin_memmove((R+5070),(R+5063),1);
__builtin_memmove((R+5069),(R+4614),1);
__builtin_memmove((R+5068),(R+5062),1);
__builtin_memmove((R+5067),(R+4613),1);
__builtin_memmove((R+5066),(R+5061),1);
__builtin_memmove((R+5065),(R+4612),1);
__builtin_memmove((R+5064),(R+5060),1);
__builtin_memmove((R+5063),(R+4611),1);
__builtin_memmove((R+5062),(R+5059),1);
__builtin_memmove((R+5061),(R+4610),1);
__builtin_memmove((R+5060),(R+5058),1);
__builtin_memmove((R+5059),(R+4609),1);
__builtin_memmove((R+5058),(R+5057),1);
__builtin_memmove((R+5057),(R+4608),1);
}
B71acec:{NFSU2_TR(0x71acec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B71acef:{NFSU2_TR(0x71acef);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0x8ull)));}
}
B71acf4:{NFSU2_TR(0x71acf4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71acf6:{NFSU2_TR(0x71acf6);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71acfb:{NFSU2_TR(0x71acfb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71abebu);}goto L71abeb;}}
}
B71ad01:L71ad01:{c.instructions+=29;NFSU2_TR(0x71ad01);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71ad04:{NFSU2_TR(0x71ad04);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B71ad08:{NFSU2_TR(0x71ad08);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4416),(U+8),8);
}
B71ad0c:{NFSU2_TR(0x71ad0c);
__builtin_memmove((R+4432),(R+4400),8);
}
B71ad0f:{NFSU2_TR(0x71ad0f);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71ad12:{NFSU2_TR(0x71ad12);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B71ad15:{NFSU2_TR(0x71ad15);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B71ad18:{NFSU2_TR(0x71ad18);
__builtin_memmove((R+4448),(R+4352),8);
}
B71ad1b:{NFSU2_TR(0x71ad1b);
{wv<8>((R+4400),uo::paddusb<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71ad1e:{NFSU2_TR(0x71ad1e);
__builtin_memmove((R+4416),(R+4352),8);
}
B71ad21:{NFSU2_TR(0x71ad21);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71ad24:{NFSU2_TR(0x71ad24);
__builtin_memmove((R+4432),gp(0x817780),8);
}
B71ad2b:{NFSU2_TR(0x71ad2b);
u8 U[8];
__builtin_memmove((U+0),gp(0x817750),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B71ad32:{NFSU2_TR(0x71ad32);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B71ad35:{NFSU2_TR(0x71ad35);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B71ad38:{NFSU2_TR(0x71ad38);
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
B71ad3b:{NFSU2_TR(0x71ad3b);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71ad3e:{NFSU2_TR(0x71ad3e);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71ad41:{NFSU2_TR(0x71ad41);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71ad44:{NFSU2_TR(0x71ad44);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71ad47:{NFSU2_TR(0x71ad47);
wv<16>((R+4992),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4448))));
}
B71ad4b:{NFSU2_TR(0x71ad4b);
__builtin_memmove((R+5071),(R+4999),1);
__builtin_memmove((R+5070),(R+5063),1);
__builtin_memmove((R+5069),(R+4998),1);
__builtin_memmove((R+5068),(R+5062),1);
__builtin_memmove((R+5067),(R+4997),1);
__builtin_memmove((R+5066),(R+5061),1);
__builtin_memmove((R+5065),(R+4996),1);
__builtin_memmove((R+5064),(R+5060),1);
__builtin_memmove((R+5063),(R+4995),1);
__builtin_memmove((R+5062),(R+5059),1);
__builtin_memmove((R+5061),(R+4994),1);
__builtin_memmove((R+5060),(R+5058),1);
__builtin_memmove((R+5059),(R+4993),1);
__builtin_memmove((R+5058),(R+5057),1);
__builtin_memmove((R+5057),(R+4992),1);
}
B71ad4f:{NFSU2_TR(0x71ad4f);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0x8ull)));}
}
B71ad54:{NFSU2_TR(0x71ad54);
u8 U[16];
__builtin_memmove((U+0),(R+5056),16);
__builtin_memmove(gp(u32(r4(R+28))),(U+0),16);
}
B71ad58:{NFSU2_TR(0x71ad58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71ad5b:{NFSU2_TR(0x71ad5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71ad5e:{NFSU2_TR(0x71ad5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ad61:{NFSU2_TR(0x71ad61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71ad64:{NFSU2_TR(0x71ad64);
w4(R+20,u32(0x8ull));
}
B71ad69:L71ad69:{c.instructions+=44;NFSU2_TR(0x71ad69);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B71ad6e:{NFSU2_TR(0x71ad6e);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B71ad72:{NFSU2_TR(0x71ad72);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+0))),16);
__builtin_memmove((R+4864),(U+0),16);
}
B71ad76:{NFSU2_TR(0x71ad76);
__builtin_memmove((R+4623),(R+5063),1);
__builtin_memmove((R+4622),(R+4615),1);
__builtin_memmove((R+4621),(R+5062),1);
__builtin_memmove((R+4620),(R+4614),1);
__builtin_memmove((R+4619),(R+5061),1);
__builtin_memmove((R+4618),(R+4613),1);
__builtin_memmove((R+4617),(R+5060),1);
__builtin_memmove((R+4616),(R+4612),1);
__builtin_memmove((R+4615),(R+5059),1);
__builtin_memmove((R+4614),(R+4611),1);
__builtin_memmove((R+4613),(R+5058),1);
__builtin_memmove((R+4612),(R+4610),1);
__builtin_memmove((R+4611),(R+5057),1);
__builtin_memmove((R+4610),(R+4609),1);
__builtin_memmove((R+4609),(R+5056),1);
}
B71ad7a:{NFSU2_TR(0x71ad7a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4736),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B71ad7f:{NFSU2_TR(0x71ad7f);
w2(R+4608,u16(u32(r2(R+4608))*u32(r2(R+4864))));
w2(R+4610,u16(u32(r2(R+4610))*u32(r2(R+4866))));
w2(R+4612,u16(u32(r2(R+4612))*u32(r2(R+4868))));
w2(R+4614,u16(u32(r2(R+4614))*u32(r2(R+4870))));
w2(R+4616,u16(u32(r2(R+4616))*u32(r2(R+4872))));
w2(R+4618,u16(u32(r2(R+4618))*u32(r2(R+4874))));
w2(R+4620,u16(u32(r2(R+4620))*u32(r2(R+4876))));
w2(R+4622,u16(u32(r2(R+4622))*u32(r2(R+4878))));
}
B71ad83:{NFSU2_TR(0x71ad83);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71ad88:{NFSU2_TR(0x71ad88);
__builtin_memmove((R+4751),(R+5063),1);
__builtin_memmove((R+4750),(R+4743),1);
__builtin_memmove((R+4749),(R+5062),1);
__builtin_memmove((R+4748),(R+4742),1);
__builtin_memmove((R+4747),(R+5061),1);
__builtin_memmove((R+4746),(R+4741),1);
__builtin_memmove((R+4745),(R+5060),1);
__builtin_memmove((R+4744),(R+4740),1);
__builtin_memmove((R+4743),(R+5059),1);
__builtin_memmove((R+4742),(R+4739),1);
__builtin_memmove((R+4741),(R+5058),1);
__builtin_memmove((R+4740),(R+4738),1);
__builtin_memmove((R+4739),(R+5057),1);
__builtin_memmove((R+4738),(R+4737),1);
__builtin_memmove((R+4737),(R+5056),1);
}
B71ad8c:{NFSU2_TR(0x71ad8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
wv<16>((R+4672),eval<Op::INT_ZEXT,16,8>(rv<8>((U+4))));
}
B71ad91:{NFSU2_TR(0x71ad91);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4992))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4994))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4996))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4998))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+5000))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+5002))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+5004))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+5006))));
}
B71ad95:{NFSU2_TR(0x71ad95);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+12))),16);
__builtin_memmove((R+4800),(U+0),16);
}
B71ad99:{NFSU2_TR(0x71ad99);
__builtin_memmove((R+4687),(R+5063),1);
__builtin_memmove((R+4686),(R+4679),1);
__builtin_memmove((R+4685),(R+5062),1);
__builtin_memmove((R+4684),(R+4678),1);
__builtin_memmove((R+4683),(R+5061),1);
__builtin_memmove((R+4682),(R+4677),1);
__builtin_memmove((R+4681),(R+5060),1);
__builtin_memmove((R+4680),(R+4676),1);
__builtin_memmove((R+4679),(R+5059),1);
__builtin_memmove((R+4678),(R+4675),1);
__builtin_memmove((R+4677),(R+5058),1);
__builtin_memmove((R+4676),(R+4674),1);
__builtin_memmove((R+4675),(R+5057),1);
__builtin_memmove((R+4674),(R+4673),1);
__builtin_memmove((R+4673),(R+5056),1);
}
B71ad9d:{NFSU2_TR(0x71ad9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
wv<16>((R+4928),eval<Op::INT_ZEXT,16,8>(rv<8>((U+4))));
}
B71ada2:{NFSU2_TR(0x71ada2);
w2(R+4672,u16(u32(r2(R+4672))*u32(r2(R+4800))));
w2(R+4674,u16(u32(r2(R+4674))*u32(r2(R+4802))));
w2(R+4676,u16(u32(r2(R+4676))*u32(r2(R+4804))));
w2(R+4678,u16(u32(r2(R+4678))*u32(r2(R+4806))));
w2(R+4680,u16(u32(r2(R+4680))*u32(r2(R+4808))));
w2(R+4682,u16(u32(r2(R+4682))*u32(r2(R+4810))));
w2(R+4684,u16(u32(r2(R+4684))*u32(r2(R+4812))));
w2(R+4686,u16(u32(r2(R+4686))*u32(r2(R+4814))));
}
B71ada6:{NFSU2_TR(0x71ada6);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4992))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4994))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4996))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4998))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5000))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5002))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5004))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5006))));
}
B71adaa:{NFSU2_TR(0x71adaa);
__builtin_memmove((R+4943),(R+5063),1);
__builtin_memmove((R+4942),(R+4935),1);
__builtin_memmove((R+4941),(R+5062),1);
__builtin_memmove((R+4940),(R+4934),1);
__builtin_memmove((R+4939),(R+5061),1);
__builtin_memmove((R+4938),(R+4933),1);
__builtin_memmove((R+4937),(R+5060),1);
__builtin_memmove((R+4936),(R+4932),1);
__builtin_memmove((R+4935),(R+5059),1);
__builtin_memmove((R+4934),(R+4931),1);
__builtin_memmove((R+4933),(R+5058),1);
__builtin_memmove((R+4932),(R+4930),1);
__builtin_memmove((R+4931),(R+5057),1);
__builtin_memmove((R+4930),(R+4929),1);
__builtin_memmove((R+4929),(R+5056),1);
}
B71adae:{NFSU2_TR(0x71adae);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71adb6:{NFSU2_TR(0x71adb6);
w2(R+4928,u16(u32(r2(R+4928))*u32(r2(R+4992))));
w2(R+4930,u16(u32(r2(R+4930))*u32(r2(R+4994))));
w2(R+4932,u16(u32(r2(R+4932))*u32(r2(R+4996))));
w2(R+4934,u16(u32(r2(R+4934))*u32(r2(R+4998))));
w2(R+4936,u16(u32(r2(R+4936))*u32(r2(R+5000))));
w2(R+4938,u16(u32(r2(R+4938))*u32(r2(R+5002))));
w2(R+4940,u16(u32(r2(R+4940))*u32(r2(R+5004))));
w2(R+4942,u16(u32(r2(R+4942))*u32(r2(R+5006))));
}
B71adba:{NFSU2_TR(0x71adba);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B71adbe:{NFSU2_TR(0x71adbe);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B71adc2:{NFSU2_TR(0x71adc2);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4672))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4674))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4676))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4678))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4680))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4682))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4684))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4686))));
}
B71adc6:{NFSU2_TR(0x71adc6);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4992))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4994))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4996))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4998))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5000))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5002))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5004))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5006))));
}
B71adca:{NFSU2_TR(0x71adca);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
wv<16>((R+4736),eval<Op::INT_ZEXT,16,8>(rv<8>((U+0))));
}
B71adce:{NFSU2_TR(0x71adce);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4928))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4930))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4932))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4934))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4936))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4938))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4940))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4942))));
}
B71add2:{NFSU2_TR(0x71add2);
__builtin_memmove((R+4672),gp(0x817730),16);
}
B71adda:{NFSU2_TR(0x71adda);
__builtin_memmove((R+4751),(R+5063),1);
__builtin_memmove((R+4750),(R+4743),1);
__builtin_memmove((R+4749),(R+5062),1);
__builtin_memmove((R+4748),(R+4742),1);
__builtin_memmove((R+4747),(R+5061),1);
__builtin_memmove((R+4746),(R+4741),1);
__builtin_memmove((R+4745),(R+5060),1);
__builtin_memmove((R+4744),(R+4740),1);
__builtin_memmove((R+4743),(R+5059),1);
__builtin_memmove((R+4742),(R+4739),1);
__builtin_memmove((R+4741),(R+5058),1);
__builtin_memmove((R+4740),(R+4738),1);
__builtin_memmove((R+4739),(R+5057),1);
__builtin_memmove((R+4738),(R+4737),1);
__builtin_memmove((R+4737),(R+5056),1);
}
B71adde:{NFSU2_TR(0x71adde);
w2(R+4672,u16(u32(r2(R+4672))-u32(r2(R+4864))));
w2(R+4674,u16(u32(r2(R+4674))-u32(r2(R+4866))));
w2(R+4676,u16(u32(r2(R+4676))-u32(r2(R+4868))));
w2(R+4678,u16(u32(r2(R+4678))-u32(r2(R+4870))));
w2(R+4680,u16(u32(r2(R+4680))-u32(r2(R+4872))));
w2(R+4682,u16(u32(r2(R+4682))-u32(r2(R+4874))));
w2(R+4684,u16(u32(r2(R+4684))-u32(r2(R+4876))));
w2(R+4686,u16(u32(r2(R+4686))-u32(r2(R+4878))));
}
B71ade2:{NFSU2_TR(0x71ade2);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4672))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4674))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4676))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4678))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4680))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4682))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4684))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4686))));
}
B71ade6:{NFSU2_TR(0x71ade6);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B71ade8:{NFSU2_TR(0x71ade8);
__builtin_memmove((R+4992),gp(0x817740),16);
}
B71adf0:{NFSU2_TR(0x71adf0);
__builtin_memmove((R+5056),(R+4992),16);
}
B71adf4:{NFSU2_TR(0x71adf4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B71adf7:{NFSU2_TR(0x71adf7);
{wv<16>((R+5056),uo::psllw<16>(rv<16>((R+5056)),V(0x8ull)));}
}
B71adfc:{NFSU2_TR(0x71adfc);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B71ae00:{NFSU2_TR(0x71ae00);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B71ae02:{NFSU2_TR(0x71ae02);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4992))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4994))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4996))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4998))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+5000))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+5002))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+5004))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+5006))));
}
B71ae06:{NFSU2_TR(0x71ae06);
w1(R+512,carry<u32>(r4(R+12),u32(0x10ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B71ae09:{NFSU2_TR(0x71ae09);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+5056))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+5058))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+5060))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+5062))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+5064))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+5066))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+5068))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+5070))));
}
B71ae0d:{NFSU2_TR(0x71ae0d);
{wv<16>((R+4608),uo::psubusw<16>(rv<16>((R+4608)),rv<16>((R+5056))));}
}
B71ae11:{NFSU2_TR(0x71ae11);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71ae12:{NFSU2_TR(0x71ae12);
w2(R+4608,shr<u16>(r2(R+4608),u64(u32(0x7ull))));
w2(R+4610,shr<u16>(r2(R+4610),u64(u32(0x7ull))));
w2(R+4612,shr<u16>(r2(R+4612),u64(u32(0x7ull))));
w2(R+4614,shr<u16>(r2(R+4614),u64(u32(0x7ull))));
w2(R+4616,shr<u16>(r2(R+4616),u64(u32(0x7ull))));
w2(R+4618,shr<u16>(r2(R+4618),u64(u32(0x7ull))));
w2(R+4620,shr<u16>(r2(R+4620),u64(u32(0x7ull))));
w2(R+4622,shr<u16>(r2(R+4622),u64(u32(0x7ull))));
}
B71ae17:{NFSU2_TR(0x71ae17);
u8 U[54];
__builtin_memmove((U+5),(R+4608),16);
__builtin_memmove((U+21),(R+5056),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4608),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4609),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4610),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4611),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4612),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4613),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4614),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4615),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4616),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4617),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4618),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4619),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4620),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4621),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4622),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4623),(U+37),1);
}
B71ae1b:{NFSU2_TR(0x71ae1b);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4608),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71ae20:{NFSU2_TR(0x71ae20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71ad69u);}goto L71ad69;}}
}
B71ae26:L71ae26:{c.instructions+=15;NFSU2_TR(0x71ae26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71ae27:{NFSU2_TR(0x71ae27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71ae28:{NFSU2_TR(0x71ae28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71ae29:{NFSU2_TR(0x71ae29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B71ae2a:{NFSU2_TR(0x71ae2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B71ae2b:{NFSU2_TR(0x71ae2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71ae2c:{NFSU2_TR(0x71ae2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71ae2d:{NFSU2_TR(0x71ae2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71ae2e:{NFSU2_TR(0x71ae2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71ae2f:{NFSU2_TR(0x71ae2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71ae30:{NFSU2_TR(0x71ae30);
__builtin_memmove((R+16),(R+20),4);
}
B71ae32:{NFSU2_TR(0x71ae32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71ae33:{NFSU2_TR(0x71ae33);
__builtin_memmove((R+16),(R+12),4);
}
B71ae35:{NFSU2_TR(0x71ae35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71ae36:{NFSU2_TR(0x71ae36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71ae37:L71ae37:{c.instructions+=18;NFSU2_TR(0x71ae37);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ae38:{NFSU2_TR(0x71ae38);
__builtin_memmove((R+20),(R+16),4);
}
B71ae3a:{NFSU2_TR(0x71ae3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ae3d:{NFSU2_TR(0x71ae3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ae40:{NFSU2_TR(0x71ae40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71ae43:{NFSU2_TR(0x71ae43);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x400ull))));
}
B71ae48:{NFSU2_TR(0x71ae48);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffe0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71ae4b:{NFSU2_TR(0x71ae4b);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x10001ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B71ae51:{NFSU2_TR(0x71ae51);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ae54:{NFSU2_TR(0x71ae54);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B71ae56:{NFSU2_TR(0x71ae56);
w4(R+4,u32(0x10001ull));
}
B71ae5b:{NFSU2_TR(0x71ae5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ae5e:{NFSU2_TR(0x71ae5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ae61:{NFSU2_TR(0x71ae61);
w4(R+4,u32(0x40004ull));
}
B71ae66:{NFSU2_TR(0x71ae66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ae69:{NFSU2_TR(0x71ae69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ae6c:{NFSU2_TR(0x71ae6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71ae6d:{NFSU2_TR(0x71ae6d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71ae6e:L71ae6e:{c.instructions+=119;NFSU2_TR(0x71ae6e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ae6f:{NFSU2_TR(0x71ae6f);
__builtin_memmove((R+20),(R+16),4);
}
B71ae71:{NFSU2_TR(0x71ae71);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ae72:{NFSU2_TR(0x71ae72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ae75:{NFSU2_TR(0x71ae75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71ae78:{NFSU2_TR(0x71ae78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71ae7b:{NFSU2_TR(0x71ae7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71ae7e:{NFSU2_TR(0x71ae7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B71ae82:{NFSU2_TR(0x71ae82);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B71ae86:{NFSU2_TR(0x71ae86);
w4(R+4352,shr<u32>(r4(R+4352),u64(u32(0x10ull))));
w4(R+4356,shr<u32>(r4(R+4356),u64(u32(0x10ull))));
}
B71ae8a:{NFSU2_TR(0x71ae8a);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B71ae8f:{NFSU2_TR(0x71ae8f);
__builtin_memmove((R+4358),(R+4418),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4416),2);
}
B71ae92:{NFSU2_TR(0x71ae92);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4416,u64(r4(U+12)));
}
B71ae97:{NFSU2_TR(0x71ae97);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0x10ull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0x10ull))));
}
B71ae9b:{NFSU2_TR(0x71ae9b);
__builtin_memmove((R+4374),(R+4418),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4416),2);
}
B71ae9e:{NFSU2_TR(0x71ae9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B71aea1:{NFSU2_TR(0x71aea1);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4384,u64(r4(U+12)));
}
B71aea6:{NFSU2_TR(0x71aea6);
__builtin_memmove((R+4359),(R+4371),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4370),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4369),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4368),1);
}
B71aea9:{NFSU2_TR(0x71aea9);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4416,u64(r4(U+12)));
}
B71aeae:{NFSU2_TR(0x71aeae);
w4(R+4384,shr<u32>(r4(R+4384),u64(u32(0x10ull))));
w4(R+4388,shr<u32>(r4(R+4388),u64(u32(0x10ull))));
}
B71aeb2:{NFSU2_TR(0x71aeb2);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B71aeb7:{NFSU2_TR(0x71aeb7);
__builtin_memmove((R+4390),(R+4418),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4416),2);
}
B71aeba:{NFSU2_TR(0x71aeba);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4416,u64(r4(U+12)));
}
B71aebf:{NFSU2_TR(0x71aebf);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0x10ull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0x10ull))));
}
B71aec3:{NFSU2_TR(0x71aec3);
__builtin_memmove((R+4374),(R+4418),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4416),2);
}
B71aec6:{NFSU2_TR(0x71aec6);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B71aec9:{NFSU2_TR(0x71aec9);
__builtin_memmove((R+4391),(R+4371),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4370),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4369),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4368),1);
}
B71aecc:{NFSU2_TR(0x71aecc);
__builtin_memmove((R+4368),(R+4352),8);
}
B71aecf:{NFSU2_TR(0x71aecf);
__builtin_memmove((R+4358),(R+4386),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4384),2);
}
B71aed2:{NFSU2_TR(0x71aed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B71aed5:{NFSU2_TR(0x71aed5);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4388),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4390),2);
}
B71aed8:{NFSU2_TR(0x71aed8);
__builtin_memmove((R+4448),(R+4352),8);
}
B71aedb:{NFSU2_TR(0x71aedb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71aedf:{NFSU2_TR(0x71aedf);
__builtin_memmove((R+4384),(R+4368),8);
}
B71aee2:{NFSU2_TR(0x71aee2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71aee6:{NFSU2_TR(0x71aee6);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x20ull))));
}
B71aeea:{NFSU2_TR(0x71aeea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B71aeee:{NFSU2_TR(0x71aeee);
__builtin_memmove((R+4375),(R+4419),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4418),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4417),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4416),1);
}
B71aef1:{NFSU2_TR(0x71aef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B71aef5:{NFSU2_TR(0x71aef5);
w4(R+4464,shr<u32>(r4(R+4464),u64(u32(0x10ull))));
w4(R+4468,shr<u32>(r4(R+4468),u64(u32(0x10ull))));
}
B71aef9:{NFSU2_TR(0x71aef9);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4432,u64(r4(U+12)));
}
B71aefe:{NFSU2_TR(0x71aefe);
__builtin_memmove((R+4470),(R+4418),2);
__builtin_memmove((R+4468),(R+4466),2);
__builtin_memmove((R+4466),(R+4416),2);
}
B71af01:{NFSU2_TR(0x71af01);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4416,u64(r4(U+12)));
}
B71af06:{NFSU2_TR(0x71af06);
w4(R+4432,shr<u32>(r4(R+4432),u64(u32(0x10ull))));
w4(R+4436,shr<u32>(r4(R+4436),u64(u32(0x10ull))));
}
B71af0a:{NFSU2_TR(0x71af0a);
__builtin_memmove((R+4438),(R+4418),2);
__builtin_memmove((R+4436),(R+4434),2);
__builtin_memmove((R+4434),(R+4416),2);
}
B71af0d:{NFSU2_TR(0x71af0d);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B71af10:{NFSU2_TR(0x71af10);
__builtin_memmove((R+4359),(R+4419),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4418),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4417),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4416),1);
}
B71af13:{NFSU2_TR(0x71af13);
w8(R+4384,shr<u64>(r8(R+4384),u64(u32(0x20ull))));
}
B71af17:{NFSU2_TR(0x71af17);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4358))));
}
B71af1a:{NFSU2_TR(0x71af1a);
__builtin_memmove((R+4471),(R+4435),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4434),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4433),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4432),1);
}
B71af1d:{NFSU2_TR(0x71af1d);
__builtin_memmove((R+4400),(R+4368),8);
}
B71af20:{NFSU2_TR(0x71af20);
__builtin_memmove((R+4455),(R+4419),1);
__builtin_memmove((R+4454),(R+4451),1);
__builtin_memmove((R+4453),(R+4418),1);
__builtin_memmove((R+4452),(R+4450),1);
__builtin_memmove((R+4451),(R+4417),1);
__builtin_memmove((R+4450),(R+4449),1);
__builtin_memmove((R+4449),(R+4416),1);
}
B71af23:{NFSU2_TR(0x71af23);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B71af26:{NFSU2_TR(0x71af26);
__builtin_memmove((R+4391),(R+4419),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4418),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4417),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4416),1);
}
B71af29:{NFSU2_TR(0x71af29);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B71af2c:{NFSU2_TR(0x71af2c);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(U+12))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(U+14))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(U+16))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(U+18))));
}
B71af30:{NFSU2_TR(0x71af30);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4384))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4386))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4388))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4390))));
}
B71af33:{NFSU2_TR(0x71af33);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4384,u64(r4(U+12)));
}
B71af38:{NFSU2_TR(0x71af38);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4368))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4370))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4372))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4374))));
}
B71af3b:{NFSU2_TR(0x71af3b);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4416,u64(r4(U+12)));
}
B71af40:{NFSU2_TR(0x71af40);
w4(R+4384,shr<u32>(r4(R+4384),u64(u32(0x10ull))));
w4(R+4388,shr<u32>(r4(R+4388),u64(u32(0x10ull))));
}
B71af44:{NFSU2_TR(0x71af44);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4432,u64(r4(U+12)));
}
B71af49:{NFSU2_TR(0x71af49);
__builtin_memmove((R+4390),(R+4418),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4416),2);
}
B71af4c:{NFSU2_TR(0x71af4c);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4416,u64(r4(U+12)));
}
B71af51:{NFSU2_TR(0x71af51);
w4(R+4432,shr<u32>(r4(R+4432),u64(u32(0x10ull))));
w4(R+4436,shr<u32>(r4(R+4436),u64(u32(0x10ull))));
}
B71af55:{NFSU2_TR(0x71af55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71af58:{NFSU2_TR(0x71af58);
__builtin_memmove((R+4438),(R+4418),2);
__builtin_memmove((R+4436),(R+4434),2);
__builtin_memmove((R+4434),(R+4416),2);
}
B71af5b:{NFSU2_TR(0x71af5b);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x3ull)));}
}
B71af5f:{NFSU2_TR(0x71af5f);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B71af62:{NFSU2_TR(0x71af62);
__builtin_memmove((R+4391),(R+4435),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4434),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4433),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4432),1);
}
B71af65:{NFSU2_TR(0x71af65);
__builtin_memmove((R+4432),(R+4464),8);
}
B71af68:{NFSU2_TR(0x71af68);
__builtin_memmove((R+4368),(R+4448),8);
}
B71af6b:{NFSU2_TR(0x71af6b);
__builtin_memmove((R+4432),(R+4436),2);
__builtin_memmove((R+4434),(R+4388),2);
__builtin_memmove((R+4436),(R+4438),2);
__builtin_memmove((R+4438),(R+4390),2);
}
B71af6e:{NFSU2_TR(0x71af6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71af72:{NFSU2_TR(0x71af72);
__builtin_memmove((R+4470),(R+4386),2);
__builtin_memmove((R+4468),(R+4466),2);
__builtin_memmove((R+4466),(R+4384),2);
}
B71af75:{NFSU2_TR(0x71af75);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71af79:{NFSU2_TR(0x71af79);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0xfull)));}
}
B71af7d:{NFSU2_TR(0x71af7d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B71af80:{NFSU2_TR(0x71af80);
__builtin_memmove((R+4352),(R+4464),8);
}
B71af83:{NFSU2_TR(0x71af83);
w8(R+4464,shr<u64>(r8(R+4464),u64(u32(0x20ull))));
}
B71af87:{NFSU2_TR(0x71af87);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4448))));
}
B71af8a:{NFSU2_TR(0x71af8a);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B71af8d:{NFSU2_TR(0x71af8d);
__builtin_memmove((R+4439),(R+4419),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4418),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4417),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4416),1);
}
B71af90:{NFSU2_TR(0x71af90);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(U+4))));
}
B71af94:{NFSU2_TR(0x71af94);
__builtin_memmove((R+4400),(R+4384),8);
}
B71af97:{NFSU2_TR(0x71af97);
__builtin_memmove((R+4471),(R+4419),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4418),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4417),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4416),1);
}
B71af9a:{NFSU2_TR(0x71af9a);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B71af9d:{NFSU2_TR(0x71af9d);
__builtin_memmove((R+4416),(R+4400),8);
}
B71afa0:{NFSU2_TR(0x71afa0);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B71afa4:{NFSU2_TR(0x71afa4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71afa5:{NFSU2_TR(0x71afa5);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4470))));
}
B71afa8:{NFSU2_TR(0x71afa8);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4400))));
}
B71afab:{NFSU2_TR(0x71afab);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71afae:{NFSU2_TR(0x71afae);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4400))));
}
B71afb1:{NFSU2_TR(0x71afb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71afb5:{NFSU2_TR(0x71afb5);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B71afb8:{NFSU2_TR(0x71afb8);
__builtin_memmove((R+4359),(R+4403),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4402),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4401),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4400),1);
}
B71afbb:{NFSU2_TR(0x71afbb);
__builtin_memmove((R+4464),(R+4432),8);
}
B71afbe:{NFSU2_TR(0x71afbe);
w2(R+4464,u16(u32(r2(R+4464))+u32(r2(R+4432))));
w2(R+4466,u16(u32(r2(R+4466))+u32(r2(R+4434))));
w2(R+4468,u16(u32(r2(R+4468))+u32(r2(R+4436))));
w2(R+4470,u16(u32(r2(R+4470))+u32(r2(R+4438))));
}
B71afc1:{NFSU2_TR(0x71afc1);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B71afc4:{NFSU2_TR(0x71afc4);
__builtin_memmove((R+4375),(R+4403),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4402),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4401),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4400),1);
}
B71afc7:{NFSU2_TR(0x71afc7);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4470))));
}
B71afca:{NFSU2_TR(0x71afca);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(U+12))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(U+14))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(U+16))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(U+18))));
}
B71afce:{NFSU2_TR(0x71afce);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B71afd1:{NFSU2_TR(0x71afd1);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4438))));
}
B71afd4:{NFSU2_TR(0x71afd4);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B71afd7:{NFSU2_TR(0x71afd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B71afdb:{NFSU2_TR(0x71afdb);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x3ull)));}
}
B71afdf:{NFSU2_TR(0x71afdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B71afe3:{NFSU2_TR(0x71afe3);
__builtin_memmove((R+4471),(R+4451),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4450),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4449),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4448),1);
}
B71afe6:{NFSU2_TR(0x71afe6);
w2(R+4464,u16(u32(r2(R+4464))-u32(r2(R+4384))));
w2(R+4466,u16(u32(r2(R+4466))-u32(r2(R+4386))));
w2(R+4468,u16(u32(r2(R+4468))-u32(r2(R+4388))));
w2(R+4470,u16(u32(r2(R+4470))-u32(r2(R+4390))));
}
B71afe9:{NFSU2_TR(0x71afe9);
__builtin_memmove((R+4407),(R+4451),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4450),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4449),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4448),1);
}
B71afec:{NFSU2_TR(0x71afec);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B71afef:{NFSU2_TR(0x71afef);
u8 U[30];
__builtin_memmove((U+5),(R+4464),8);
__builtin_memmove((U+13),(R+4464),8);
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
B71aff2:{NFSU2_TR(0x71aff2);
u8 U[30];
__builtin_memmove((U+5),(R+4400),8);
__builtin_memmove((U+13),(R+4400),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4400),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4401),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4402),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4403),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4404),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4405),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4406),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4407),(U+21),1);
}
B71aff5:{NFSU2_TR(0x71aff5);
__builtin_memmove((R+4368),(R+4352),8);
}
B71aff8:{NFSU2_TR(0x71aff8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B71affb:{NFSU2_TR(0x71affb);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0xfull)));}
}
B71afff:{NFSU2_TR(0x71afff);
__builtin_memmove((R+4407),(R+4467),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4466),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4465),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4464),1);
TAIL_STATIC(0x71b002u,71b);
}
XIT:NFSU2_TR_EXIT(0x71a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
