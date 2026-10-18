#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x50a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x50a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_50a(u8* __restrict R,Cpu& c);
u32 page_50a(Cpu& c){return body_50a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_50a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x50a002:goto L50a002;
case 0x50a004:c.instructions+=13;goto B50a004;
case 0x50a008:c.instructions+=12;goto B50a008;
case 0x50a00b:c.instructions+=11;goto B50a00b;
case 0x50a010:c.instructions+=10;goto B50a010;
case 0x50a012:c.instructions+=9;goto B50a012;
case 0x50a016:c.instructions+=8;goto B50a016;
case 0x50a019:c.instructions+=7;goto B50a019;
case 0x50a020:c.instructions+=6;goto B50a020;
case 0x50a023:c.instructions+=5;goto B50a023;
case 0x50a028:c.instructions+=4;goto B50a028;
case 0x50a02b:c.instructions+=3;goto B50a02b;
case 0x50a02d:c.instructions+=2;goto B50a02d;
case 0x50a035:c.instructions+=1;goto B50a035;
case 0x50a03c:goto L50a03c;
case 0x50a03f:c.instructions+=5;goto B50a03f;
case 0x50a042:c.instructions+=4;goto B50a042;
case 0x50a044:c.instructions+=3;goto B50a044;
case 0x50a048:c.instructions+=2;goto B50a048;
case 0x50a04b:c.instructions+=1;goto B50a04b;
case 0x50a051:goto L50a051;
case 0x50a053:c.instructions+=1;goto B50a053;
case 0x50a059:goto L50a059;
case 0x50a05c:c.instructions+=104;goto B50a05c;
case 0x50a060:c.instructions+=103;goto B50a060;
case 0x50a063:c.instructions+=102;goto B50a063;
case 0x50a066:c.instructions+=101;goto B50a066;
case 0x50a06a:c.instructions+=100;goto B50a06a;
case 0x50a06d:c.instructions+=99;goto B50a06d;
case 0x50a070:c.instructions+=98;goto B50a070;
case 0x50a074:c.instructions+=97;goto B50a074;
case 0x50a07b:c.instructions+=96;goto B50a07b;
case 0x50a082:c.instructions+=95;goto B50a082;
case 0x50a084:c.instructions+=94;goto B50a084;
case 0x50a086:c.instructions+=93;goto B50a086;
case 0x50a089:c.instructions+=92;goto B50a089;
case 0x50a08c:c.instructions+=91;goto B50a08c;
case 0x50a08f:c.instructions+=90;goto B50a08f;
case 0x50a092:c.instructions+=89;goto B50a092;
case 0x50a096:c.instructions+=88;goto B50a096;
case 0x50a099:c.instructions+=87;goto B50a099;
case 0x50a09b:c.instructions+=86;goto B50a09b;
case 0x50a09d:c.instructions+=85;goto B50a09d;
case 0x50a09f:c.instructions+=84;goto B50a09f;
case 0x50a0a1:c.instructions+=83;goto B50a0a1;
case 0x50a0a4:c.instructions+=82;goto B50a0a4;
case 0x50a0a7:c.instructions+=81;goto B50a0a7;
case 0x50a0a9:c.instructions+=80;goto B50a0a9;
case 0x50a0ac:c.instructions+=79;goto B50a0ac;
case 0x50a0af:c.instructions+=78;goto B50a0af;
case 0x50a0b3:c.instructions+=77;goto B50a0b3;
case 0x50a0b7:c.instructions+=76;goto B50a0b7;
case 0x50a0b9:c.instructions+=75;goto B50a0b9;
case 0x50a0bc:c.instructions+=74;goto B50a0bc;
case 0x50a0c0:c.instructions+=73;goto B50a0c0;
case 0x50a0c3:c.instructions+=72;goto B50a0c3;
case 0x50a0c5:c.instructions+=71;goto B50a0c5;
case 0x50a0c7:c.instructions+=70;goto B50a0c7;
case 0x50a0ca:c.instructions+=69;goto B50a0ca;
case 0x50a0cd:c.instructions+=68;goto B50a0cd;
case 0x50a0d0:c.instructions+=67;goto B50a0d0;
case 0x50a0d3:c.instructions+=66;goto B50a0d3;
case 0x50a0d6:c.instructions+=65;goto B50a0d6;
case 0x50a0da:c.instructions+=64;goto B50a0da;
case 0x50a0dd:c.instructions+=63;goto B50a0dd;
case 0x50a0e1:c.instructions+=62;goto B50a0e1;
case 0x50a0e4:c.instructions+=61;goto B50a0e4;
case 0x50a0e7:c.instructions+=60;goto B50a0e7;
case 0x50a0eb:c.instructions+=59;goto B50a0eb;
case 0x50a0ed:c.instructions+=58;goto B50a0ed;
case 0x50a0ef:c.instructions+=57;goto B50a0ef;
case 0x50a0f3:c.instructions+=56;goto B50a0f3;
case 0x50a0f5:c.instructions+=55;goto B50a0f5;
case 0x50a0f9:c.instructions+=54;goto B50a0f9;
case 0x50a0fd:c.instructions+=53;goto B50a0fd;
case 0x50a100:c.instructions+=52;goto B50a100;
case 0x50a104:c.instructions+=51;goto B50a104;
case 0x50a107:c.instructions+=50;goto B50a107;
case 0x50a10b:c.instructions+=49;goto B50a10b;
case 0x50a10f:c.instructions+=48;goto B50a10f;
case 0x50a111:c.instructions+=47;goto B50a111;
case 0x50a114:c.instructions+=46;goto B50a114;
case 0x50a118:c.instructions+=45;goto B50a118;
case 0x50a11c:c.instructions+=44;goto B50a11c;
case 0x50a11f:c.instructions+=43;goto B50a11f;
case 0x50a122:c.instructions+=42;goto B50a122;
case 0x50a125:c.instructions+=41;goto B50a125;
case 0x50a128:c.instructions+=40;goto B50a128;
case 0x50a12b:c.instructions+=39;goto B50a12b;
case 0x50a12f:c.instructions+=38;goto B50a12f;
case 0x50a132:c.instructions+=37;goto B50a132;
case 0x50a136:c.instructions+=36;goto B50a136;
case 0x50a13a:c.instructions+=35;goto B50a13a;
case 0x50a13d:c.instructions+=34;goto B50a13d;
case 0x50a141:c.instructions+=33;goto B50a141;
case 0x50a146:c.instructions+=32;goto B50a146;
case 0x50a14a:c.instructions+=31;goto B50a14a;
case 0x50a14c:c.instructions+=30;goto B50a14c;
case 0x50a14e:c.instructions+=29;goto B50a14e;
case 0x50a152:c.instructions+=28;goto B50a152;
case 0x50a154:c.instructions+=27;goto B50a154;
case 0x50a158:c.instructions+=26;goto B50a158;
case 0x50a15c:c.instructions+=25;goto B50a15c;
case 0x50a15e:c.instructions+=24;goto B50a15e;
case 0x50a162:c.instructions+=23;goto B50a162;
case 0x50a166:c.instructions+=22;goto B50a166;
case 0x50a16a:c.instructions+=21;goto B50a16a;
case 0x50a16d:c.instructions+=20;goto B50a16d;
case 0x50a171:c.instructions+=19;goto B50a171;
case 0x50a175:c.instructions+=18;goto B50a175;
case 0x50a179:c.instructions+=17;goto B50a179;
case 0x50a17d:c.instructions+=16;goto B50a17d;
case 0x50a181:c.instructions+=15;goto B50a181;
case 0x50a185:c.instructions+=14;goto B50a185;
case 0x50a189:c.instructions+=13;goto B50a189;
case 0x50a18d:c.instructions+=12;goto B50a18d;
case 0x50a18f:c.instructions+=11;goto B50a18f;
case 0x50a192:c.instructions+=10;goto B50a192;
case 0x50a193:c.instructions+=9;goto B50a193;
case 0x50a197:c.instructions+=8;goto B50a197;
case 0x50a19b:c.instructions+=7;goto B50a19b;
case 0x50a19d:c.instructions+=6;goto B50a19d;
case 0x50a19f:c.instructions+=5;goto B50a19f;
case 0x50a1a2:c.instructions+=4;goto B50a1a2;
case 0x50a1a5:c.instructions+=3;goto B50a1a5;
case 0x50a1a8:c.instructions+=2;goto B50a1a8;
case 0x50a1aa:c.instructions+=1;goto B50a1aa;
case 0x50a1ac:goto L50a1ac;
case 0x50a1b0:goto L50a1b0;
case 0x50a1b3:c.instructions+=27;goto B50a1b3;
case 0x50a1b7:c.instructions+=26;goto B50a1b7;
case 0x50a1ba:c.instructions+=25;goto B50a1ba;
case 0x50a1bb:c.instructions+=24;goto B50a1bb;
case 0x50a1be:c.instructions+=23;goto B50a1be;
case 0x50a1c1:c.instructions+=22;goto B50a1c1;
case 0x50a1c4:c.instructions+=21;goto B50a1c4;
case 0x50a1c6:c.instructions+=20;goto B50a1c6;
case 0x50a1ca:c.instructions+=19;goto B50a1ca;
case 0x50a1cd:c.instructions+=18;goto B50a1cd;
case 0x50a1d0:c.instructions+=17;goto B50a1d0;
case 0x50a1d3:c.instructions+=16;goto B50a1d3;
case 0x50a1d6:c.instructions+=15;goto B50a1d6;
case 0x50a1d9:c.instructions+=14;goto B50a1d9;
case 0x50a1dc:c.instructions+=13;goto B50a1dc;
case 0x50a1e0:c.instructions+=12;goto B50a1e0;
case 0x50a1e4:c.instructions+=11;goto B50a1e4;
case 0x50a1e7:c.instructions+=10;goto B50a1e7;
case 0x50a1ea:c.instructions+=9;goto B50a1ea;
case 0x50a1ee:c.instructions+=8;goto B50a1ee;
case 0x50a1f1:c.instructions+=7;goto B50a1f1;
case 0x50a1f4:c.instructions+=6;goto B50a1f4;
case 0x50a1f7:c.instructions+=5;goto B50a1f7;
case 0x50a1fa:c.instructions+=4;goto B50a1fa;
case 0x50a1fc:c.instructions+=3;goto B50a1fc;
case 0x50a1ff:c.instructions+=2;goto B50a1ff;
case 0x50a202:c.instructions+=1;goto B50a202;
case 0x50a207:goto L50a207;
case 0x50a209:c.instructions+=1;goto B50a209;
case 0x50a20f:goto L50a20f;
case 0x50a212:c.instructions+=105;goto B50a212;
case 0x50a216:c.instructions+=104;goto B50a216;
case 0x50a219:c.instructions+=103;goto B50a219;
case 0x50a21c:c.instructions+=102;goto B50a21c;
case 0x50a220:c.instructions+=101;goto B50a220;
case 0x50a223:c.instructions+=100;goto B50a223;
case 0x50a226:c.instructions+=99;goto B50a226;
case 0x50a22a:c.instructions+=98;goto B50a22a;
case 0x50a231:c.instructions+=97;goto B50a231;
case 0x50a238:c.instructions+=96;goto B50a238;
case 0x50a23a:c.instructions+=95;goto B50a23a;
case 0x50a23c:c.instructions+=94;goto B50a23c;
case 0x50a23f:c.instructions+=93;goto B50a23f;
case 0x50a242:c.instructions+=92;goto B50a242;
case 0x50a245:c.instructions+=91;goto B50a245;
case 0x50a248:c.instructions+=90;goto B50a248;
case 0x50a24c:c.instructions+=89;goto B50a24c;
case 0x50a24f:c.instructions+=88;goto B50a24f;
case 0x50a251:c.instructions+=87;goto B50a251;
case 0x50a253:c.instructions+=86;goto B50a253;
case 0x50a255:c.instructions+=85;goto B50a255;
case 0x50a257:c.instructions+=84;goto B50a257;
case 0x50a25a:c.instructions+=83;goto B50a25a;
case 0x50a25d:c.instructions+=82;goto B50a25d;
case 0x50a25f:c.instructions+=81;goto B50a25f;
case 0x50a262:c.instructions+=80;goto B50a262;
case 0x50a265:c.instructions+=79;goto B50a265;
case 0x50a269:c.instructions+=78;goto B50a269;
case 0x50a26d:c.instructions+=77;goto B50a26d;
case 0x50a270:c.instructions+=76;goto B50a270;
case 0x50a274:c.instructions+=75;goto B50a274;
case 0x50a276:c.instructions+=74;goto B50a276;
case 0x50a279:c.instructions+=73;goto B50a279;
case 0x50a27b:c.instructions+=72;goto B50a27b;
case 0x50a27d:c.instructions+=71;goto B50a27d;
case 0x50a280:c.instructions+=70;goto B50a280;
case 0x50a283:c.instructions+=69;goto B50a283;
case 0x50a286:c.instructions+=68;goto B50a286;
case 0x50a289:c.instructions+=67;goto B50a289;
case 0x50a28c:c.instructions+=66;goto B50a28c;
case 0x50a290:c.instructions+=65;goto B50a290;
case 0x50a293:c.instructions+=64;goto B50a293;
case 0x50a297:c.instructions+=63;goto B50a297;
case 0x50a29a:c.instructions+=62;goto B50a29a;
case 0x50a29d:c.instructions+=61;goto B50a29d;
case 0x50a2a1:c.instructions+=60;goto B50a2a1;
case 0x50a2a3:c.instructions+=59;goto B50a2a3;
case 0x50a2a5:c.instructions+=58;goto B50a2a5;
case 0x50a2a9:c.instructions+=57;goto B50a2a9;
case 0x50a2ab:c.instructions+=56;goto B50a2ab;
case 0x50a2af:c.instructions+=55;goto B50a2af;
case 0x50a2b3:c.instructions+=54;goto B50a2b3;
case 0x50a2b6:c.instructions+=53;goto B50a2b6;
case 0x50a2ba:c.instructions+=52;goto B50a2ba;
case 0x50a2bd:c.instructions+=51;goto B50a2bd;
case 0x50a2c1:c.instructions+=50;goto B50a2c1;
case 0x50a2c5:c.instructions+=49;goto B50a2c5;
case 0x50a2c7:c.instructions+=48;goto B50a2c7;
case 0x50a2ca:c.instructions+=47;goto B50a2ca;
case 0x50a2ce:c.instructions+=46;goto B50a2ce;
case 0x50a2d2:c.instructions+=45;goto B50a2d2;
case 0x50a2d5:c.instructions+=44;goto B50a2d5;
case 0x50a2d8:c.instructions+=43;goto B50a2d8;
case 0x50a2db:c.instructions+=42;goto B50a2db;
case 0x50a2de:c.instructions+=41;goto B50a2de;
case 0x50a2e1:c.instructions+=40;goto B50a2e1;
case 0x50a2e5:c.instructions+=39;goto B50a2e5;
case 0x50a2e8:c.instructions+=38;goto B50a2e8;
case 0x50a2ec:c.instructions+=37;goto B50a2ec;
case 0x50a2f3:c.instructions+=36;goto B50a2f3;
case 0x50a2f6:c.instructions+=35;goto B50a2f6;
case 0x50a2fa:c.instructions+=34;goto B50a2fa;
case 0x50a2ff:c.instructions+=33;goto B50a2ff;
case 0x50a306:c.instructions+=32;goto B50a306;
case 0x50a308:c.instructions+=31;goto B50a308;
case 0x50a30a:c.instructions+=30;goto B50a30a;
case 0x50a30e:c.instructions+=29;goto B50a30e;
case 0x50a310:c.instructions+=28;goto B50a310;
case 0x50a314:c.instructions+=27;goto B50a314;
case 0x50a31b:c.instructions+=26;goto B50a31b;
case 0x50a31d:c.instructions+=25;goto B50a31d;
case 0x50a321:c.instructions+=24;goto B50a321;
case 0x50a328:c.instructions+=23;goto B50a328;
case 0x50a32c:c.instructions+=22;goto B50a32c;
case 0x50a32f:c.instructions+=21;goto B50a32f;
case 0x50a333:c.instructions+=20;goto B50a333;
case 0x50a337:c.instructions+=19;goto B50a337;
case 0x50a33b:c.instructions+=18;goto B50a33b;
case 0x50a33f:c.instructions+=17;goto B50a33f;
case 0x50a346:c.instructions+=16;goto B50a346;
case 0x50a34a:c.instructions+=15;goto B50a34a;
case 0x50a351:c.instructions+=14;goto B50a351;
case 0x50a355:c.instructions+=13;goto B50a355;
case 0x50a357:c.instructions+=12;goto B50a357;
case 0x50a35a:c.instructions+=11;goto B50a35a;
case 0x50a35b:c.instructions+=10;goto B50a35b;
case 0x50a362:c.instructions+=9;goto B50a362;
case 0x50a369:c.instructions+=8;goto B50a369;
case 0x50a36b:c.instructions+=7;goto B50a36b;
case 0x50a36d:c.instructions+=6;goto B50a36d;
case 0x50a370:c.instructions+=5;goto B50a370;
case 0x50a374:c.instructions+=4;goto B50a374;
case 0x50a377:c.instructions+=3;goto B50a377;
case 0x50a37a:c.instructions+=2;goto B50a37a;
case 0x50a37c:c.instructions+=1;goto B50a37c;
case 0x50a37e:goto L50a37e;
case 0x50a382:goto L50a382;
case 0x50a385:c.instructions+=5;goto B50a385;
case 0x50a388:c.instructions+=4;goto B50a388;
case 0x50a38a:c.instructions+=3;goto B50a38a;
case 0x50a38e:c.instructions+=2;goto B50a38e;
case 0x50a391:c.instructions+=1;goto B50a391;
case 0x50a397:goto L50a397;
case 0x50a399:c.instructions+=1;goto B50a399;
case 0x50a39f:goto L50a39f;
case 0x50a3a2:c.instructions+=91;goto B50a3a2;
case 0x50a3a5:c.instructions+=90;goto B50a3a5;
case 0x50a3a8:c.instructions+=89;goto B50a3a8;
case 0x50a3ab:c.instructions+=88;goto B50a3ab;
case 0x50a3ad:c.instructions+=87;goto B50a3ad;
case 0x50a3b0:c.instructions+=86;goto B50a3b0;
case 0x50a3b7:c.instructions+=85;goto B50a3b7;
case 0x50a3be:c.instructions+=84;goto B50a3be;
case 0x50a3c0:c.instructions+=83;goto B50a3c0;
case 0x50a3c2:c.instructions+=82;goto B50a3c2;
case 0x50a3c5:c.instructions+=81;goto B50a3c5;
case 0x50a3c9:c.instructions+=80;goto B50a3c9;
case 0x50a3cc:c.instructions+=79;goto B50a3cc;
case 0x50a3cf:c.instructions+=78;goto B50a3cf;
case 0x50a3d2:c.instructions+=77;goto B50a3d2;
case 0x50a3d5:c.instructions+=76;goto B50a3d5;
case 0x50a3d7:c.instructions+=75;goto B50a3d7;
case 0x50a3d9:c.instructions+=74;goto B50a3d9;
case 0x50a3db:c.instructions+=73;goto B50a3db;
case 0x50a3dd:c.instructions+=72;goto B50a3dd;
case 0x50a3e0:c.instructions+=71;goto B50a3e0;
case 0x50a3e3:c.instructions+=70;goto B50a3e3;
case 0x50a3e5:c.instructions+=69;goto B50a3e5;
case 0x50a3e8:c.instructions+=68;goto B50a3e8;
case 0x50a3eb:c.instructions+=67;goto B50a3eb;
case 0x50a3ee:c.instructions+=66;goto B50a3ee;
case 0x50a3f1:c.instructions+=65;goto B50a3f1;
case 0x50a3f3:c.instructions+=64;goto B50a3f3;
case 0x50a3f6:c.instructions+=63;goto B50a3f6;
case 0x50a3f8:c.instructions+=62;goto B50a3f8;
case 0x50a3fa:c.instructions+=61;goto B50a3fa;
case 0x50a3fd:c.instructions+=60;goto B50a3fd;
case 0x50a400:c.instructions+=59;goto B50a400;
case 0x50a403:c.instructions+=58;goto B50a403;
case 0x50a406:c.instructions+=57;goto B50a406;
case 0x50a409:c.instructions+=56;goto B50a409;
case 0x50a40c:c.instructions+=55;goto B50a40c;
case 0x50a40e:c.instructions+=54;goto B50a40e;
case 0x50a411:c.instructions+=53;goto B50a411;
case 0x50a413:c.instructions+=52;goto B50a413;
case 0x50a415:c.instructions+=51;goto B50a415;
case 0x50a419:c.instructions+=50;goto B50a419;
case 0x50a41b:c.instructions+=49;goto B50a41b;
case 0x50a41f:c.instructions+=48;goto B50a41f;
case 0x50a423:c.instructions+=47;goto B50a423;
case 0x50a426:c.instructions+=46;goto B50a426;
case 0x50a42a:c.instructions+=45;goto B50a42a;
case 0x50a42d:c.instructions+=44;goto B50a42d;
case 0x50a430:c.instructions+=43;goto B50a430;
case 0x50a432:c.instructions+=42;goto B50a432;
case 0x50a435:c.instructions+=41;goto B50a435;
case 0x50a439:c.instructions+=40;goto B50a439;
case 0x50a43d:c.instructions+=39;goto B50a43d;
case 0x50a440:c.instructions+=38;goto B50a440;
case 0x50a443:c.instructions+=37;goto B50a443;
case 0x50a446:c.instructions+=36;goto B50a446;
case 0x50a449:c.instructions+=35;goto B50a449;
case 0x50a44c:c.instructions+=34;goto B50a44c;
case 0x50a44f:c.instructions+=33;goto B50a44f;
case 0x50a453:c.instructions+=32;goto B50a453;
case 0x50a455:c.instructions+=31;goto B50a455;
case 0x50a458:c.instructions+=30;goto B50a458;
case 0x50a45c:c.instructions+=29;goto B50a45c;
case 0x50a45e:c.instructions+=28;goto B50a45e;
case 0x50a460:c.instructions+=27;goto B50a460;
case 0x50a461:c.instructions+=26;goto B50a461;
case 0x50a464:c.instructions+=25;goto B50a464;
case 0x50a467:c.instructions+=24;goto B50a467;
case 0x50a46b:c.instructions+=23;goto B50a46b;
case 0x50a470:c.instructions+=22;goto B50a470;
case 0x50a472:c.instructions+=21;goto B50a472;
case 0x50a476:c.instructions+=20;goto B50a476;
case 0x50a47a:c.instructions+=19;goto B50a47a;
case 0x50a47c:c.instructions+=18;goto B50a47c;
case 0x50a480:c.instructions+=17;goto B50a480;
case 0x50a484:c.instructions+=16;goto B50a484;
case 0x50a488:c.instructions+=15;goto B50a488;
case 0x50a48b:c.instructions+=14;goto B50a48b;
case 0x50a48f:c.instructions+=13;goto B50a48f;
case 0x50a492:c.instructions+=12;goto B50a492;
case 0x50a496:c.instructions+=11;goto B50a496;
case 0x50a499:c.instructions+=10;goto B50a499;
case 0x50a49d:c.instructions+=9;goto B50a49d;
case 0x50a4a1:c.instructions+=8;goto B50a4a1;
case 0x50a4a3:c.instructions+=7;goto B50a4a3;
case 0x50a4a6:c.instructions+=6;goto B50a4a6;
case 0x50a4a9:c.instructions+=5;goto B50a4a9;
case 0x50a4ad:c.instructions+=4;goto B50a4ad;
case 0x50a4b1:c.instructions+=3;goto B50a4b1;
case 0x50a4b4:c.instructions+=2;goto B50a4b4;
case 0x50a4b7:c.instructions+=1;goto B50a4b7;
case 0x50a4ba:goto L50a4ba;
case 0x50a4bd:c.instructions+=23;goto B50a4bd;
case 0x50a4c1:c.instructions+=22;goto B50a4c1;
case 0x50a4c3:c.instructions+=21;goto B50a4c3;
case 0x50a4c6:c.instructions+=20;goto B50a4c6;
case 0x50a4c8:c.instructions+=19;goto B50a4c8;
case 0x50a4ca:c.instructions+=18;goto B50a4ca;
case 0x50a4cd:c.instructions+=17;goto B50a4cd;
case 0x50a4d0:c.instructions+=16;goto B50a4d0;
case 0x50a4d2:c.instructions+=15;goto B50a4d2;
case 0x50a4d5:c.instructions+=14;goto B50a4d5;
case 0x50a4d8:c.instructions+=13;goto B50a4d8;
case 0x50a4db:c.instructions+=12;goto B50a4db;
case 0x50a4df:c.instructions+=11;goto B50a4df;
case 0x50a4e3:c.instructions+=10;goto B50a4e3;
case 0x50a4e6:c.instructions+=9;goto B50a4e6;
case 0x50a4e9:c.instructions+=8;goto B50a4e9;
case 0x50a4eb:c.instructions+=7;goto B50a4eb;
case 0x50a4ee:c.instructions+=6;goto B50a4ee;
case 0x50a4f2:c.instructions+=5;goto B50a4f2;
case 0x50a4f4:c.instructions+=4;goto B50a4f4;
case 0x50a4f6:c.instructions+=3;goto B50a4f6;
case 0x50a4f9:c.instructions+=2;goto B50a4f9;
case 0x50a4fc:c.instructions+=1;goto B50a4fc;
case 0x50a501:goto L50a501;
case 0x50a503:c.instructions+=1;goto B50a503;
case 0x50a509:goto L50a509;
case 0x50a50c:c.instructions+=87;goto B50a50c;
case 0x50a50f:c.instructions+=86;goto B50a50f;
case 0x50a512:c.instructions+=85;goto B50a512;
case 0x50a515:c.instructions+=84;goto B50a515;
case 0x50a517:c.instructions+=83;goto B50a517;
case 0x50a51a:c.instructions+=82;goto B50a51a;
case 0x50a521:c.instructions+=81;goto B50a521;
case 0x50a528:c.instructions+=80;goto B50a528;
case 0x50a52a:c.instructions+=79;goto B50a52a;
case 0x50a52c:c.instructions+=78;goto B50a52c;
case 0x50a52f:c.instructions+=77;goto B50a52f;
case 0x50a533:c.instructions+=76;goto B50a533;
case 0x50a536:c.instructions+=75;goto B50a536;
case 0x50a539:c.instructions+=74;goto B50a539;
case 0x50a53c:c.instructions+=73;goto B50a53c;
case 0x50a53f:c.instructions+=72;goto B50a53f;
case 0x50a541:c.instructions+=71;goto B50a541;
case 0x50a543:c.instructions+=70;goto B50a543;
case 0x50a545:c.instructions+=69;goto B50a545;
case 0x50a547:c.instructions+=68;goto B50a547;
case 0x50a54a:c.instructions+=67;goto B50a54a;
case 0x50a54d:c.instructions+=66;goto B50a54d;
case 0x50a54f:c.instructions+=65;goto B50a54f;
case 0x50a552:c.instructions+=64;goto B50a552;
case 0x50a555:c.instructions+=63;goto B50a555;
case 0x50a558:c.instructions+=62;goto B50a558;
case 0x50a55b:c.instructions+=61;goto B50a55b;
case 0x50a55d:c.instructions+=60;goto B50a55d;
case 0x50a560:c.instructions+=59;goto B50a560;
case 0x50a562:c.instructions+=58;goto B50a562;
case 0x50a564:c.instructions+=57;goto B50a564;
case 0x50a567:c.instructions+=56;goto B50a567;
case 0x50a56a:c.instructions+=55;goto B50a56a;
case 0x50a56d:c.instructions+=54;goto B50a56d;
case 0x50a570:c.instructions+=53;goto B50a570;
case 0x50a573:c.instructions+=52;goto B50a573;
case 0x50a576:c.instructions+=51;goto B50a576;
case 0x50a578:c.instructions+=50;goto B50a578;
case 0x50a57b:c.instructions+=49;goto B50a57b;
case 0x50a57d:c.instructions+=48;goto B50a57d;
case 0x50a57f:c.instructions+=47;goto B50a57f;
case 0x50a583:c.instructions+=46;goto B50a583;
case 0x50a585:c.instructions+=45;goto B50a585;
case 0x50a589:c.instructions+=44;goto B50a589;
case 0x50a58d:c.instructions+=43;goto B50a58d;
case 0x50a590:c.instructions+=42;goto B50a590;
case 0x50a594:c.instructions+=41;goto B50a594;
case 0x50a597:c.instructions+=40;goto B50a597;
case 0x50a59a:c.instructions+=39;goto B50a59a;
case 0x50a59c:c.instructions+=38;goto B50a59c;
case 0x50a59f:c.instructions+=37;goto B50a59f;
case 0x50a5a3:c.instructions+=36;goto B50a5a3;
case 0x50a5a7:c.instructions+=35;goto B50a5a7;
case 0x50a5aa:c.instructions+=34;goto B50a5aa;
case 0x50a5ad:c.instructions+=33;goto B50a5ad;
case 0x50a5b0:c.instructions+=32;goto B50a5b0;
case 0x50a5b3:c.instructions+=31;goto B50a5b3;
case 0x50a5b6:c.instructions+=30;goto B50a5b6;
case 0x50a5b9:c.instructions+=29;goto B50a5b9;
case 0x50a5c0:c.instructions+=28;goto B50a5c0;
case 0x50a5c2:c.instructions+=27;goto B50a5c2;
case 0x50a5c5:c.instructions+=26;goto B50a5c5;
case 0x50a5cc:c.instructions+=25;goto B50a5cc;
case 0x50a5ce:c.instructions+=24;goto B50a5ce;
case 0x50a5d0:c.instructions+=23;goto B50a5d0;
case 0x50a5d5:c.instructions+=22;goto B50a5d5;
case 0x50a5d9:c.instructions+=21;goto B50a5d9;
case 0x50a5db:c.instructions+=20;goto B50a5db;
case 0x50a5df:c.instructions+=19;goto B50a5df;
case 0x50a5e6:c.instructions+=18;goto B50a5e6;
case 0x50a5e8:c.instructions+=17;goto B50a5e8;
case 0x50a5ec:c.instructions+=16;goto B50a5ec;
case 0x50a5f3:c.instructions+=15;goto B50a5f3;
case 0x50a5f7:c.instructions+=14;goto B50a5f7;
case 0x50a5fa:c.instructions+=13;goto B50a5fa;
case 0x50a5fe:c.instructions+=12;goto B50a5fe;
case 0x50a601:c.instructions+=11;goto B50a601;
case 0x50a605:c.instructions+=10;goto B50a605;
case 0x50a608:c.instructions+=9;goto B50a608;
case 0x50a60f:c.instructions+=8;goto B50a60f;
case 0x50a616:c.instructions+=7;goto B50a616;
case 0x50a618:c.instructions+=6;goto B50a618;
case 0x50a61b:c.instructions+=5;goto B50a61b;
case 0x50a61e:c.instructions+=4;goto B50a61e;
case 0x50a625:c.instructions+=3;goto B50a625;
case 0x50a62c:c.instructions+=2;goto B50a62c;
case 0x50a62e:c.instructions+=1;goto B50a62e;
case 0x50a631:goto L50a631;
case 0x50a632:c.instructions+=4;goto B50a632;
case 0x50a635:c.instructions+=3;goto B50a635;
case 0x50a638:c.instructions+=2;goto B50a638;
case 0x50a63c:c.instructions+=1;goto B50a63c;
case 0x50a63f:goto L50a63f;
case 0x50a642:c.instructions+=5;goto B50a642;
case 0x50a645:c.instructions+=4;goto B50a645;
case 0x50a647:c.instructions+=3;goto B50a647;
case 0x50a64b:c.instructions+=2;goto B50a64b;
case 0x50a64e:c.instructions+=1;goto B50a64e;
case 0x50a654:goto L50a654;
case 0x50a656:c.instructions+=1;goto B50a656;
case 0x50a65c:goto L50a65c;
case 0x50a65f:c.instructions+=91;goto B50a65f;
case 0x50a662:c.instructions+=90;goto B50a662;
case 0x50a665:c.instructions+=89;goto B50a665;
case 0x50a668:c.instructions+=88;goto B50a668;
case 0x50a66b:c.instructions+=87;goto B50a66b;
case 0x50a66d:c.instructions+=86;goto B50a66d;
case 0x50a674:c.instructions+=85;goto B50a674;
case 0x50a67b:c.instructions+=84;goto B50a67b;
case 0x50a67d:c.instructions+=83;goto B50a67d;
case 0x50a67f:c.instructions+=82;goto B50a67f;
case 0x50a682:c.instructions+=81;goto B50a682;
case 0x50a686:c.instructions+=80;goto B50a686;
case 0x50a689:c.instructions+=79;goto B50a689;
case 0x50a68c:c.instructions+=78;goto B50a68c;
case 0x50a68f:c.instructions+=77;goto B50a68f;
case 0x50a692:c.instructions+=76;goto B50a692;
case 0x50a694:c.instructions+=75;goto B50a694;
case 0x50a696:c.instructions+=74;goto B50a696;
case 0x50a698:c.instructions+=73;goto B50a698;
case 0x50a69a:c.instructions+=72;goto B50a69a;
case 0x50a69d:c.instructions+=71;goto B50a69d;
case 0x50a6a0:c.instructions+=70;goto B50a6a0;
case 0x50a6a2:c.instructions+=69;goto B50a6a2;
case 0x50a6a5:c.instructions+=68;goto B50a6a5;
case 0x50a6a8:c.instructions+=67;goto B50a6a8;
case 0x50a6ab:c.instructions+=66;goto B50a6ab;
case 0x50a6ad:c.instructions+=65;goto B50a6ad;
case 0x50a6af:c.instructions+=64;goto B50a6af;
case 0x50a6b2:c.instructions+=63;goto B50a6b2;
case 0x50a6b4:c.instructions+=62;goto B50a6b4;
case 0x50a6b6:c.instructions+=61;goto B50a6b6;
case 0x50a6b9:c.instructions+=60;goto B50a6b9;
case 0x50a6bc:c.instructions+=59;goto B50a6bc;
case 0x50a6bf:c.instructions+=58;goto B50a6bf;
case 0x50a6c2:c.instructions+=57;goto B50a6c2;
case 0x50a6c5:c.instructions+=56;goto B50a6c5;
case 0x50a6c8:c.instructions+=55;goto B50a6c8;
case 0x50a6cb:c.instructions+=54;goto B50a6cb;
case 0x50a6cd:c.instructions+=53;goto B50a6cd;
case 0x50a6cf:c.instructions+=52;goto B50a6cf;
case 0x50a6d1:c.instructions+=51;goto B50a6d1;
case 0x50a6d5:c.instructions+=50;goto B50a6d5;
case 0x50a6d7:c.instructions+=49;goto B50a6d7;
case 0x50a6db:c.instructions+=48;goto B50a6db;
case 0x50a6df:c.instructions+=47;goto B50a6df;
case 0x50a6e2:c.instructions+=46;goto B50a6e2;
case 0x50a6e6:c.instructions+=45;goto B50a6e6;
case 0x50a6e8:c.instructions+=44;goto B50a6e8;
case 0x50a6eb:c.instructions+=43;goto B50a6eb;
case 0x50a6ed:c.instructions+=42;goto B50a6ed;
case 0x50a6f0:c.instructions+=41;goto B50a6f0;
case 0x50a6f4:c.instructions+=40;goto B50a6f4;
case 0x50a6f8:c.instructions+=39;goto B50a6f8;
case 0x50a6fb:c.instructions+=38;goto B50a6fb;
case 0x50a6fe:c.instructions+=37;goto B50a6fe;
case 0x50a701:c.instructions+=36;goto B50a701;
case 0x50a704:c.instructions+=35;goto B50a704;
case 0x50a707:c.instructions+=34;goto B50a707;
case 0x50a70a:c.instructions+=33;goto B50a70a;
case 0x50a70e:c.instructions+=32;goto B50a70e;
case 0x50a711:c.instructions+=31;goto B50a711;
case 0x50a713:c.instructions+=30;goto B50a713;
case 0x50a717:c.instructions+=29;goto B50a717;
case 0x50a719:c.instructions+=28;goto B50a719;
case 0x50a71a:c.instructions+=27;goto B50a71a;
case 0x50a71c:c.instructions+=26;goto B50a71c;
case 0x50a71f:c.instructions+=25;goto B50a71f;
case 0x50a722:c.instructions+=24;goto B50a722;
case 0x50a727:c.instructions+=23;goto B50a727;
case 0x50a72b:c.instructions+=22;goto B50a72b;
case 0x50a72d:c.instructions+=21;goto B50a72d;
case 0x50a731:c.instructions+=20;goto B50a731;
case 0x50a735:c.instructions+=19;goto B50a735;
case 0x50a737:c.instructions+=18;goto B50a737;
case 0x50a73b:c.instructions+=17;goto B50a73b;
case 0x50a73f:c.instructions+=16;goto B50a73f;
case 0x50a743:c.instructions+=15;goto B50a743;
case 0x50a746:c.instructions+=14;goto B50a746;
case 0x50a74a:c.instructions+=13;goto B50a74a;
case 0x50a74d:c.instructions+=12;goto B50a74d;
case 0x50a751:c.instructions+=11;goto B50a751;
case 0x50a754:c.instructions+=10;goto B50a754;
case 0x50a758:c.instructions+=9;goto B50a758;
case 0x50a75c:c.instructions+=8;goto B50a75c;
case 0x50a75e:c.instructions+=7;goto B50a75e;
case 0x50a760:c.instructions+=6;goto B50a760;
case 0x50a763:c.instructions+=5;goto B50a763;
case 0x50a767:c.instructions+=4;goto B50a767;
case 0x50a76b:c.instructions+=3;goto B50a76b;
case 0x50a76e:c.instructions+=2;goto B50a76e;
case 0x50a771:c.instructions+=1;goto B50a771;
case 0x50a774:goto L50a774;
case 0x50a777:c.instructions+=22;goto B50a777;
case 0x50a77b:c.instructions+=21;goto B50a77b;
case 0x50a77e:c.instructions+=20;goto B50a77e;
case 0x50a781:c.instructions+=19;goto B50a781;
case 0x50a783:c.instructions+=18;goto B50a783;
case 0x50a785:c.instructions+=17;goto B50a785;
case 0x50a788:c.instructions+=16;goto B50a788;
case 0x50a78b:c.instructions+=15;goto B50a78b;
case 0x50a78e:c.instructions+=14;goto B50a78e;
case 0x50a791:c.instructions+=13;goto B50a791;
case 0x50a794:c.instructions+=12;goto B50a794;
case 0x50a797:c.instructions+=11;goto B50a797;
case 0x50a79b:c.instructions+=10;goto B50a79b;
case 0x50a79e:c.instructions+=9;goto B50a79e;
case 0x50a7a1:c.instructions+=8;goto B50a7a1;
case 0x50a7a5:c.instructions+=7;goto B50a7a5;
case 0x50a7a8:c.instructions+=6;goto B50a7a8;
case 0x50a7ab:c.instructions+=5;goto B50a7ab;
case 0x50a7ad:c.instructions+=4;goto B50a7ad;
case 0x50a7af:c.instructions+=3;goto B50a7af;
case 0x50a7b2:c.instructions+=2;goto B50a7b2;
case 0x50a7b5:c.instructions+=1;goto B50a7b5;
case 0x50a7ba:goto L50a7ba;
case 0x50a7bc:c.instructions+=1;goto B50a7bc;
case 0x50a7c2:goto L50a7c2;
case 0x50a7c5:c.instructions+=87;goto B50a7c5;
case 0x50a7c8:c.instructions+=86;goto B50a7c8;
case 0x50a7cb:c.instructions+=85;goto B50a7cb;
case 0x50a7ce:c.instructions+=84;goto B50a7ce;
case 0x50a7d1:c.instructions+=83;goto B50a7d1;
case 0x50a7d3:c.instructions+=82;goto B50a7d3;
case 0x50a7da:c.instructions+=81;goto B50a7da;
case 0x50a7e1:c.instructions+=80;goto B50a7e1;
case 0x50a7e3:c.instructions+=79;goto B50a7e3;
case 0x50a7e5:c.instructions+=78;goto B50a7e5;
case 0x50a7e8:c.instructions+=77;goto B50a7e8;
case 0x50a7ec:c.instructions+=76;goto B50a7ec;
case 0x50a7ef:c.instructions+=75;goto B50a7ef;
case 0x50a7f2:c.instructions+=74;goto B50a7f2;
case 0x50a7f5:c.instructions+=73;goto B50a7f5;
case 0x50a7f8:c.instructions+=72;goto B50a7f8;
case 0x50a7fa:c.instructions+=71;goto B50a7fa;
case 0x50a7fc:c.instructions+=70;goto B50a7fc;
case 0x50a7fe:c.instructions+=69;goto B50a7fe;
case 0x50a800:c.instructions+=68;goto B50a800;
case 0x50a803:c.instructions+=67;goto B50a803;
case 0x50a806:c.instructions+=66;goto B50a806;
case 0x50a808:c.instructions+=65;goto B50a808;
case 0x50a80b:c.instructions+=64;goto B50a80b;
case 0x50a80e:c.instructions+=63;goto B50a80e;
case 0x50a811:c.instructions+=62;goto B50a811;
case 0x50a813:c.instructions+=61;goto B50a813;
case 0x50a815:c.instructions+=60;goto B50a815;
case 0x50a818:c.instructions+=59;goto B50a818;
case 0x50a81a:c.instructions+=58;goto B50a81a;
case 0x50a81c:c.instructions+=57;goto B50a81c;
case 0x50a81f:c.instructions+=56;goto B50a81f;
case 0x50a822:c.instructions+=55;goto B50a822;
case 0x50a825:c.instructions+=54;goto B50a825;
case 0x50a828:c.instructions+=53;goto B50a828;
case 0x50a82b:c.instructions+=52;goto B50a82b;
case 0x50a82e:c.instructions+=51;goto B50a82e;
case 0x50a831:c.instructions+=50;goto B50a831;
case 0x50a833:c.instructions+=49;goto B50a833;
case 0x50a835:c.instructions+=48;goto B50a835;
case 0x50a837:c.instructions+=47;goto B50a837;
case 0x50a83b:c.instructions+=46;goto B50a83b;
case 0x50a83d:c.instructions+=45;goto B50a83d;
case 0x50a841:c.instructions+=44;goto B50a841;
case 0x50a845:c.instructions+=43;goto B50a845;
case 0x50a848:c.instructions+=42;goto B50a848;
case 0x50a84c:c.instructions+=41;goto B50a84c;
case 0x50a84e:c.instructions+=40;goto B50a84e;
case 0x50a851:c.instructions+=39;goto B50a851;
case 0x50a853:c.instructions+=38;goto B50a853;
case 0x50a856:c.instructions+=37;goto B50a856;
case 0x50a85a:c.instructions+=36;goto B50a85a;
case 0x50a85e:c.instructions+=35;goto B50a85e;
case 0x50a861:c.instructions+=34;goto B50a861;
case 0x50a864:c.instructions+=33;goto B50a864;
case 0x50a867:c.instructions+=32;goto B50a867;
case 0x50a86a:c.instructions+=31;goto B50a86a;
case 0x50a86d:c.instructions+=30;goto B50a86d;
case 0x50a870:c.instructions+=29;goto B50a870;
case 0x50a877:c.instructions+=28;goto B50a877;
case 0x50a87a:c.instructions+=27;goto B50a87a;
case 0x50a87c:c.instructions+=26;goto B50a87c;
case 0x50a883:c.instructions+=25;goto B50a883;
case 0x50a885:c.instructions+=24;goto B50a885;
case 0x50a88a:c.instructions+=23;goto B50a88a;
case 0x50a88c:c.instructions+=22;goto B50a88c;
case 0x50a890:c.instructions+=21;goto B50a890;
case 0x50a892:c.instructions+=20;goto B50a892;
case 0x50a896:c.instructions+=19;goto B50a896;
case 0x50a89d:c.instructions+=18;goto B50a89d;
case 0x50a89f:c.instructions+=17;goto B50a89f;
case 0x50a8a3:c.instructions+=16;goto B50a8a3;
case 0x50a8aa:c.instructions+=15;goto B50a8aa;
case 0x50a8ae:c.instructions+=14;goto B50a8ae;
case 0x50a8b1:c.instructions+=13;goto B50a8b1;
case 0x50a8b5:c.instructions+=12;goto B50a8b5;
case 0x50a8b8:c.instructions+=11;goto B50a8b8;
case 0x50a8bc:c.instructions+=10;goto B50a8bc;
case 0x50a8bf:c.instructions+=9;goto B50a8bf;
case 0x50a8c6:c.instructions+=8;goto B50a8c6;
case 0x50a8cd:c.instructions+=7;goto B50a8cd;
case 0x50a8cf:c.instructions+=6;goto B50a8cf;
case 0x50a8d1:c.instructions+=5;goto B50a8d1;
case 0x50a8d4:c.instructions+=4;goto B50a8d4;
case 0x50a8db:c.instructions+=3;goto B50a8db;
case 0x50a8e2:c.instructions+=2;goto B50a8e2;
case 0x50a8e4:c.instructions+=1;goto B50a8e4;
case 0x50a8e7:goto L50a8e7;
case 0x50a8e8:c.instructions+=4;goto B50a8e8;
case 0x50a8eb:c.instructions+=3;goto B50a8eb;
case 0x50a8ee:c.instructions+=2;goto B50a8ee;
case 0x50a8f2:c.instructions+=1;goto B50a8f2;
case 0x50a8f5:goto L50a8f5;
case 0x50a8f8:c.instructions+=5;goto B50a8f8;
case 0x50a8fb:c.instructions+=4;goto B50a8fb;
case 0x50a8fd:c.instructions+=3;goto B50a8fd;
case 0x50a901:c.instructions+=2;goto B50a901;
case 0x50a904:c.instructions+=1;goto B50a904;
case 0x50a90a:goto L50a90a;
case 0x50a90c:c.instructions+=1;goto B50a90c;
case 0x50a912:goto L50a912;
case 0x50a915:c.instructions+=90;goto B50a915;
case 0x50a918:c.instructions+=89;goto B50a918;
case 0x50a91b:c.instructions+=88;goto B50a91b;
case 0x50a91e:c.instructions+=87;goto B50a91e;
case 0x50a921:c.instructions+=86;goto B50a921;
case 0x50a924:c.instructions+=85;goto B50a924;
case 0x50a92b:c.instructions+=84;goto B50a92b;
case 0x50a932:c.instructions+=83;goto B50a932;
case 0x50a934:c.instructions+=82;goto B50a934;
case 0x50a936:c.instructions+=81;goto B50a936;
case 0x50a939:c.instructions+=80;goto B50a939;
case 0x50a93d:c.instructions+=79;goto B50a93d;
case 0x50a940:c.instructions+=78;goto B50a940;
case 0x50a943:c.instructions+=77;goto B50a943;
case 0x50a946:c.instructions+=76;goto B50a946;
case 0x50a949:c.instructions+=75;goto B50a949;
case 0x50a94b:c.instructions+=74;goto B50a94b;
case 0x50a94d:c.instructions+=73;goto B50a94d;
case 0x50a94f:c.instructions+=72;goto B50a94f;
case 0x50a951:c.instructions+=71;goto B50a951;
case 0x50a954:c.instructions+=70;goto B50a954;
case 0x50a957:c.instructions+=69;goto B50a957;
case 0x50a959:c.instructions+=68;goto B50a959;
case 0x50a95c:c.instructions+=67;goto B50a95c;
case 0x50a95f:c.instructions+=66;goto B50a95f;
case 0x50a962:c.instructions+=65;goto B50a962;
case 0x50a965:c.instructions+=64;goto B50a965;
case 0x50a967:c.instructions+=63;goto B50a967;
case 0x50a96a:c.instructions+=62;goto B50a96a;
case 0x50a96c:c.instructions+=61;goto B50a96c;
case 0x50a96e:c.instructions+=60;goto B50a96e;
case 0x50a971:c.instructions+=59;goto B50a971;
case 0x50a974:c.instructions+=58;goto B50a974;
case 0x50a977:c.instructions+=57;goto B50a977;
case 0x50a97a:c.instructions+=56;goto B50a97a;
case 0x50a97d:c.instructions+=55;goto B50a97d;
case 0x50a980:c.instructions+=54;goto B50a980;
case 0x50a983:c.instructions+=53;goto B50a983;
case 0x50a986:c.instructions+=52;goto B50a986;
case 0x50a988:c.instructions+=51;goto B50a988;
case 0x50a98a:c.instructions+=50;goto B50a98a;
case 0x50a98e:c.instructions+=49;goto B50a98e;
case 0x50a990:c.instructions+=48;goto B50a990;
case 0x50a994:c.instructions+=47;goto B50a994;
case 0x50a998:c.instructions+=46;goto B50a998;
case 0x50a99b:c.instructions+=45;goto B50a99b;
case 0x50a99f:c.instructions+=44;goto B50a99f;
case 0x50a9a2:c.instructions+=43;goto B50a9a2;
case 0x50a9a5:c.instructions+=42;goto B50a9a5;
case 0x50a9a7:c.instructions+=41;goto B50a9a7;
case 0x50a9aa:c.instructions+=40;goto B50a9aa;
case 0x50a9ae:c.instructions+=39;goto B50a9ae;
case 0x50a9b1:c.instructions+=38;goto B50a9b1;
case 0x50a9b4:c.instructions+=37;goto B50a9b4;
case 0x50a9b7:c.instructions+=36;goto B50a9b7;
case 0x50a9ba:c.instructions+=35;goto B50a9ba;
case 0x50a9bd:c.instructions+=34;goto B50a9bd;
case 0x50a9c0:c.instructions+=33;goto B50a9c0;
case 0x50a9c4:c.instructions+=32;goto B50a9c4;
case 0x50a9c7:c.instructions+=31;goto B50a9c7;
case 0x50a9ca:c.instructions+=30;goto B50a9ca;
case 0x50a9ce:c.instructions+=29;goto B50a9ce;
case 0x50a9cf:c.instructions+=28;goto B50a9cf;
case 0x50a9d1:c.instructions+=27;goto B50a9d1;
case 0x50a9d4:c.instructions+=26;goto B50a9d4;
case 0x50a9d6:c.instructions+=25;goto B50a9d6;
case 0x50a9d9:c.instructions+=24;goto B50a9d9;
case 0x50a9de:c.instructions+=23;goto B50a9de;
case 0x50a9e2:c.instructions+=22;goto B50a9e2;
case 0x50a9e4:c.instructions+=21;goto B50a9e4;
case 0x50a9e8:c.instructions+=20;goto B50a9e8;
case 0x50a9ec:c.instructions+=19;goto B50a9ec;
case 0x50a9ee:c.instructions+=18;goto B50a9ee;
case 0x50a9f2:c.instructions+=17;goto B50a9f2;
case 0x50a9f6:c.instructions+=16;goto B50a9f6;
case 0x50a9fa:c.instructions+=15;goto B50a9fa;
case 0x50a9fd:c.instructions+=14;goto B50a9fd;
case 0x50aa01:c.instructions+=13;goto B50aa01;
case 0x50aa04:c.instructions+=12;goto B50aa04;
case 0x50aa08:c.instructions+=11;goto B50aa08;
case 0x50aa0b:c.instructions+=10;goto B50aa0b;
case 0x50aa0f:c.instructions+=9;goto B50aa0f;
case 0x50aa13:c.instructions+=8;goto B50aa13;
case 0x50aa15:c.instructions+=7;goto B50aa15;
case 0x50aa18:c.instructions+=6;goto B50aa18;
case 0x50aa1b:c.instructions+=5;goto B50aa1b;
case 0x50aa1f:c.instructions+=4;goto B50aa1f;
case 0x50aa23:c.instructions+=3;goto B50aa23;
case 0x50aa26:c.instructions+=2;goto B50aa26;
case 0x50aa29:c.instructions+=1;goto B50aa29;
case 0x50aa2c:goto L50aa2c;
case 0x50aa2f:c.instructions+=22;goto B50aa2f;
case 0x50aa33:c.instructions+=21;goto B50aa33;
case 0x50aa36:c.instructions+=20;goto B50aa36;
case 0x50aa39:c.instructions+=19;goto B50aa39;
case 0x50aa3b:c.instructions+=18;goto B50aa3b;
case 0x50aa3d:c.instructions+=17;goto B50aa3d;
case 0x50aa40:c.instructions+=16;goto B50aa40;
case 0x50aa43:c.instructions+=15;goto B50aa43;
case 0x50aa46:c.instructions+=14;goto B50aa46;
case 0x50aa49:c.instructions+=13;goto B50aa49;
case 0x50aa4c:c.instructions+=12;goto B50aa4c;
case 0x50aa4f:c.instructions+=11;goto B50aa4f;
case 0x50aa53:c.instructions+=10;goto B50aa53;
case 0x50aa56:c.instructions+=9;goto B50aa56;
case 0x50aa59:c.instructions+=8;goto B50aa59;
case 0x50aa5d:c.instructions+=7;goto B50aa5d;
case 0x50aa60:c.instructions+=6;goto B50aa60;
case 0x50aa63:c.instructions+=5;goto B50aa63;
case 0x50aa65:c.instructions+=4;goto B50aa65;
case 0x50aa67:c.instructions+=3;goto B50aa67;
case 0x50aa6a:c.instructions+=2;goto B50aa6a;
case 0x50aa6d:c.instructions+=1;goto B50aa6d;
case 0x50aa72:goto L50aa72;
case 0x50aa74:c.instructions+=1;goto B50aa74;
case 0x50aa7a:goto L50aa7a;
case 0x50aa7d:c.instructions+=86;goto B50aa7d;
case 0x50aa80:c.instructions+=85;goto B50aa80;
case 0x50aa83:c.instructions+=84;goto B50aa83;
case 0x50aa86:c.instructions+=83;goto B50aa86;
case 0x50aa89:c.instructions+=82;goto B50aa89;
case 0x50aa8c:c.instructions+=81;goto B50aa8c;
case 0x50aa93:c.instructions+=80;goto B50aa93;
case 0x50aa9a:c.instructions+=79;goto B50aa9a;
case 0x50aa9c:c.instructions+=78;goto B50aa9c;
case 0x50aa9e:c.instructions+=77;goto B50aa9e;
case 0x50aaa1:c.instructions+=76;goto B50aaa1;
case 0x50aaa5:c.instructions+=75;goto B50aaa5;
case 0x50aaa8:c.instructions+=74;goto B50aaa8;
case 0x50aaab:c.instructions+=73;goto B50aaab;
case 0x50aaae:c.instructions+=72;goto B50aaae;
case 0x50aab1:c.instructions+=71;goto B50aab1;
case 0x50aab3:c.instructions+=70;goto B50aab3;
case 0x50aab5:c.instructions+=69;goto B50aab5;
case 0x50aab7:c.instructions+=68;goto B50aab7;
case 0x50aab9:c.instructions+=67;goto B50aab9;
case 0x50aabc:c.instructions+=66;goto B50aabc;
case 0x50aabf:c.instructions+=65;goto B50aabf;
case 0x50aac1:c.instructions+=64;goto B50aac1;
case 0x50aac4:c.instructions+=63;goto B50aac4;
case 0x50aac7:c.instructions+=62;goto B50aac7;
case 0x50aaca:c.instructions+=61;goto B50aaca;
case 0x50aacd:c.instructions+=60;goto B50aacd;
case 0x50aacf:c.instructions+=59;goto B50aacf;
case 0x50aad2:c.instructions+=58;goto B50aad2;
case 0x50aad4:c.instructions+=57;goto B50aad4;
case 0x50aad6:c.instructions+=56;goto B50aad6;
case 0x50aad9:c.instructions+=55;goto B50aad9;
case 0x50aadc:c.instructions+=54;goto B50aadc;
case 0x50aadf:c.instructions+=53;goto B50aadf;
case 0x50aae2:c.instructions+=52;goto B50aae2;
case 0x50aae5:c.instructions+=51;goto B50aae5;
case 0x50aae8:c.instructions+=50;goto B50aae8;
case 0x50aaeb:c.instructions+=49;goto B50aaeb;
case 0x50aaee:c.instructions+=48;goto B50aaee;
case 0x50aaf0:c.instructions+=47;goto B50aaf0;
case 0x50aaf2:c.instructions+=46;goto B50aaf2;
case 0x50aaf6:c.instructions+=45;goto B50aaf6;
case 0x50aaf8:c.instructions+=44;goto B50aaf8;
case 0x50aafc:c.instructions+=43;goto B50aafc;
case 0x50ab00:c.instructions+=42;goto B50ab00;
case 0x50ab03:c.instructions+=41;goto B50ab03;
case 0x50ab07:c.instructions+=40;goto B50ab07;
case 0x50ab0a:c.instructions+=39;goto B50ab0a;
case 0x50ab0d:c.instructions+=38;goto B50ab0d;
case 0x50ab0f:c.instructions+=37;goto B50ab0f;
case 0x50ab12:c.instructions+=36;goto B50ab12;
case 0x50ab16:c.instructions+=35;goto B50ab16;
case 0x50ab19:c.instructions+=34;goto B50ab19;
case 0x50ab1c:c.instructions+=33;goto B50ab1c;
case 0x50ab1f:c.instructions+=32;goto B50ab1f;
case 0x50ab22:c.instructions+=31;goto B50ab22;
case 0x50ab25:c.instructions+=30;goto B50ab25;
case 0x50ab28:c.instructions+=29;goto B50ab28;
case 0x50ab2f:c.instructions+=28;goto B50ab2f;
case 0x50ab32:c.instructions+=27;goto B50ab32;
case 0x50ab35:c.instructions+=26;goto B50ab35;
case 0x50ab3c:c.instructions+=25;goto B50ab3c;
case 0x50ab41:c.instructions+=24;goto B50ab41;
case 0x50ab43:c.instructions+=23;goto B50ab43;
case 0x50ab45:c.instructions+=22;goto B50ab45;
case 0x50ab49:c.instructions+=21;goto B50ab49;
case 0x50ab4b:c.instructions+=20;goto B50ab4b;
case 0x50ab4f:c.instructions+=19;goto B50ab4f;
case 0x50ab56:c.instructions+=18;goto B50ab56;
case 0x50ab58:c.instructions+=17;goto B50ab58;
case 0x50ab5c:c.instructions+=16;goto B50ab5c;
case 0x50ab63:c.instructions+=15;goto B50ab63;
case 0x50ab67:c.instructions+=14;goto B50ab67;
case 0x50ab6a:c.instructions+=13;goto B50ab6a;
case 0x50ab6e:c.instructions+=12;goto B50ab6e;
case 0x50ab71:c.instructions+=11;goto B50ab71;
case 0x50ab75:c.instructions+=10;goto B50ab75;
case 0x50ab78:c.instructions+=9;goto B50ab78;
case 0x50ab7f:c.instructions+=8;goto B50ab7f;
case 0x50ab86:c.instructions+=7;goto B50ab86;
case 0x50ab88:c.instructions+=6;goto B50ab88;
case 0x50ab8b:c.instructions+=5;goto B50ab8b;
case 0x50ab8e:c.instructions+=4;goto B50ab8e;
case 0x50ab95:c.instructions+=3;goto B50ab95;
case 0x50ab9c:c.instructions+=2;goto B50ab9c;
case 0x50ab9e:c.instructions+=1;goto B50ab9e;
case 0x50aba1:goto L50aba1;
case 0x50aba2:c.instructions+=4;goto B50aba2;
case 0x50aba5:c.instructions+=3;goto B50aba5;
case 0x50aba8:c.instructions+=2;goto B50aba8;
case 0x50abac:c.instructions+=1;goto B50abac;
case 0x50abaf:goto L50abaf;
case 0x50abb3:c.instructions+=21;goto B50abb3;
case 0x50abba:c.instructions+=20;goto B50abba;
case 0x50abc1:c.instructions+=19;goto B50abc1;
case 0x50abc5:c.instructions+=18;goto B50abc5;
case 0x50abc7:c.instructions+=17;goto B50abc7;
case 0x50abcb:c.instructions+=16;goto B50abcb;
case 0x50abd2:c.instructions+=15;goto B50abd2;
case 0x50abd4:c.instructions+=14;goto B50abd4;
case 0x50abd8:c.instructions+=13;goto B50abd8;
case 0x50abdc:c.instructions+=12;goto B50abdc;
case 0x50abdf:c.instructions+=11;goto B50abdf;
case 0x50abe2:c.instructions+=10;goto B50abe2;
case 0x50abe6:c.instructions+=9;goto B50abe6;
case 0x50abea:c.instructions+=8;goto B50abea;
case 0x50abee:c.instructions+=7;goto B50abee;
case 0x50abf1:c.instructions+=6;goto B50abf1;
case 0x50abf4:c.instructions+=5;goto B50abf4;
case 0x50abf7:c.instructions+=4;goto B50abf7;
case 0x50abfa:c.instructions+=3;goto B50abfa;
case 0x50abfc:c.instructions+=2;goto B50abfc;
case 0x50ac00:c.instructions+=1;goto B50ac00;
case 0x50ac06:goto L50ac06;
case 0x50ac0d:c.instructions+=6;goto B50ac0d;
case 0x50ac10:c.instructions+=5;goto B50ac10;
case 0x50ac13:c.instructions+=4;goto B50ac13;
case 0x50ac16:c.instructions+=3;goto B50ac16;
case 0x50ac1a:c.instructions+=2;goto B50ac1a;
case 0x50ac1d:c.instructions+=1;goto B50ac1d;
case 0x50ac23:goto L50ac23;
case 0x50ac2a:c.instructions+=24;goto B50ac2a;
case 0x50ac2e:c.instructions+=23;goto B50ac2e;
case 0x50ac32:c.instructions+=22;goto B50ac32;
case 0x50ac35:c.instructions+=21;goto B50ac35;
case 0x50ac37:c.instructions+=20;goto B50ac37;
case 0x50ac3b:c.instructions+=19;goto B50ac3b;
case 0x50ac3e:c.instructions+=18;goto B50ac3e;
case 0x50ac40:c.instructions+=17;goto B50ac40;
case 0x50ac44:c.instructions+=16;goto B50ac44;
case 0x50ac47:c.instructions+=15;goto B50ac47;
case 0x50ac49:c.instructions+=14;goto B50ac49;
case 0x50ac4d:c.instructions+=13;goto B50ac4d;
case 0x50ac51:c.instructions+=12;goto B50ac51;
case 0x50ac54:c.instructions+=11;goto B50ac54;
case 0x50ac58:c.instructions+=10;goto B50ac58;
case 0x50ac5c:c.instructions+=9;goto B50ac5c;
case 0x50ac5e:c.instructions+=8;goto B50ac5e;
case 0x50ac60:c.instructions+=7;goto B50ac60;
case 0x50ac64:c.instructions+=6;goto B50ac64;
case 0x50ac69:c.instructions+=5;goto B50ac69;
case 0x50ac6c:c.instructions+=4;goto B50ac6c;
case 0x50ac6e:c.instructions+=3;goto B50ac6e;
case 0x50ac72:c.instructions+=2;goto B50ac72;
case 0x50ac79:c.instructions+=1;goto B50ac79;
case 0x50ac80:goto L50ac80;
case 0x50ac84:c.instructions+=6;goto B50ac84;
case 0x50ac86:c.instructions+=5;goto B50ac86;
case 0x50ac89:c.instructions+=4;goto B50ac89;
case 0x50ac8b:c.instructions+=3;goto B50ac8b;
case 0x50ac8f:c.instructions+=2;goto B50ac8f;
case 0x50ac92:c.instructions+=1;goto B50ac92;
case 0x50ac98:goto L50ac98;
case 0x50ac9a:c.instructions+=1;goto B50ac9a;
case 0x50aca0:goto L50aca0;
case 0x50aca3:c.instructions+=104;goto B50aca3;
case 0x50aca7:c.instructions+=103;goto B50aca7;
case 0x50acaa:c.instructions+=102;goto B50acaa;
case 0x50acad:c.instructions+=101;goto B50acad;
case 0x50acb1:c.instructions+=100;goto B50acb1;
case 0x50acb3:c.instructions+=99;goto B50acb3;
case 0x50acb6:c.instructions+=98;goto B50acb6;
case 0x50acba:c.instructions+=97;goto B50acba;
case 0x50acc1:c.instructions+=96;goto B50acc1;
case 0x50acc8:c.instructions+=95;goto B50acc8;
case 0x50acca:c.instructions+=94;goto B50acca;
case 0x50accc:c.instructions+=93;goto B50accc;
case 0x50accf:c.instructions+=92;goto B50accf;
case 0x50acd3:c.instructions+=91;goto B50acd3;
case 0x50acd6:c.instructions+=90;goto B50acd6;
case 0x50acd9:c.instructions+=89;goto B50acd9;
case 0x50acdd:c.instructions+=88;goto B50acdd;
case 0x50ace0:c.instructions+=87;goto B50ace0;
case 0x50ace2:c.instructions+=86;goto B50ace2;
case 0x50ace4:c.instructions+=85;goto B50ace4;
case 0x50ace6:c.instructions+=84;goto B50ace6;
case 0x50ace8:c.instructions+=83;goto B50ace8;
case 0x50aceb:c.instructions+=82;goto B50aceb;
case 0x50acee:c.instructions+=81;goto B50acee;
case 0x50acf0:c.instructions+=80;goto B50acf0;
case 0x50acf3:c.instructions+=79;goto B50acf3;
case 0x50acf6:c.instructions+=78;goto B50acf6;
case 0x50acfa:c.instructions+=77;goto B50acfa;
case 0x50acfe:c.instructions+=76;goto B50acfe;
case 0x50ad00:c.instructions+=75;goto B50ad00;
case 0x50ad03:c.instructions+=74;goto B50ad03;
case 0x50ad07:c.instructions+=73;goto B50ad07;
case 0x50ad09:c.instructions+=72;goto B50ad09;
case 0x50ad0b:c.instructions+=71;goto B50ad0b;
case 0x50ad0e:c.instructions+=70;goto B50ad0e;
case 0x50ad11:c.instructions+=69;goto B50ad11;
case 0x50ad14:c.instructions+=68;goto B50ad14;
case 0x50ad17:c.instructions+=67;goto B50ad17;
case 0x50ad1a:c.instructions+=66;goto B50ad1a;
case 0x50ad1d:c.instructions+=65;goto B50ad1d;
case 0x50ad21:c.instructions+=64;goto B50ad21;
case 0x50ad24:c.instructions+=63;goto B50ad24;
case 0x50ad28:c.instructions+=62;goto B50ad28;
case 0x50ad2a:c.instructions+=61;goto B50ad2a;
case 0x50ad2c:c.instructions+=60;goto B50ad2c;
case 0x50ad30:c.instructions+=59;goto B50ad30;
case 0x50ad32:c.instructions+=58;goto B50ad32;
case 0x50ad36:c.instructions+=57;goto B50ad36;
case 0x50ad3a:c.instructions+=56;goto B50ad3a;
case 0x50ad3d:c.instructions+=55;goto B50ad3d;
case 0x50ad41:c.instructions+=54;goto B50ad41;
case 0x50ad45:c.instructions+=53;goto B50ad45;
case 0x50ad49:c.instructions+=52;goto B50ad49;
case 0x50ad4b:c.instructions+=51;goto B50ad4b;
case 0x50ad4e:c.instructions+=50;goto B50ad4e;
case 0x50ad52:c.instructions+=49;goto B50ad52;
case 0x50ad56:c.instructions+=48;goto B50ad56;
case 0x50ad59:c.instructions+=47;goto B50ad59;
case 0x50ad5d:c.instructions+=46;goto B50ad5d;
case 0x50ad61:c.instructions+=45;goto B50ad61;
case 0x50ad64:c.instructions+=44;goto B50ad64;
case 0x50ad67:c.instructions+=43;goto B50ad67;
case 0x50ad6b:c.instructions+=42;goto B50ad6b;
case 0x50ad6f:c.instructions+=41;goto B50ad6f;
case 0x50ad72:c.instructions+=40;goto B50ad72;
case 0x50ad75:c.instructions+=39;goto B50ad75;
case 0x50ad79:c.instructions+=38;goto B50ad79;
case 0x50ad7d:c.instructions+=37;goto B50ad7d;
case 0x50ad81:c.instructions+=36;goto B50ad81;
case 0x50ad83:c.instructions+=35;goto B50ad83;
case 0x50ad87:c.instructions+=34;goto B50ad87;
case 0x50ad8c:c.instructions+=33;goto B50ad8c;
case 0x50ad90:c.instructions+=32;goto B50ad90;
case 0x50ad92:c.instructions+=31;goto B50ad92;
case 0x50ad94:c.instructions+=30;goto B50ad94;
case 0x50ad98:c.instructions+=29;goto B50ad98;
case 0x50ad9a:c.instructions+=28;goto B50ad9a;
case 0x50ad9e:c.instructions+=27;goto B50ad9e;
case 0x50ada2:c.instructions+=26;goto B50ada2;
case 0x50ada4:c.instructions+=25;goto B50ada4;
case 0x50ada8:c.instructions+=24;goto B50ada8;
case 0x50adac:c.instructions+=23;goto B50adac;
case 0x50adb0:c.instructions+=22;goto B50adb0;
case 0x50adb3:c.instructions+=21;goto B50adb3;
case 0x50adb7:c.instructions+=20;goto B50adb7;
case 0x50adbb:c.instructions+=19;goto B50adbb;
case 0x50adbf:c.instructions+=18;goto B50adbf;
case 0x50adc3:c.instructions+=17;goto B50adc3;
case 0x50adc7:c.instructions+=16;goto B50adc7;
case 0x50adcb:c.instructions+=15;goto B50adcb;
case 0x50adcf:c.instructions+=14;goto B50adcf;
case 0x50add1:c.instructions+=13;goto B50add1;
case 0x50add4:c.instructions+=12;goto B50add4;
case 0x50add8:c.instructions+=11;goto B50add8;
case 0x50addc:c.instructions+=10;goto B50addc;
case 0x50adde:c.instructions+=9;goto B50adde;
case 0x50ade0:c.instructions+=8;goto B50ade0;
case 0x50ade3:c.instructions+=7;goto B50ade3;
case 0x50ade7:c.instructions+=6;goto B50ade7;
case 0x50adea:c.instructions+=5;goto B50adea;
case 0x50adeb:c.instructions+=4;goto B50adeb;
case 0x50adef:c.instructions+=3;goto B50adef;
case 0x50adf1:c.instructions+=2;goto B50adf1;
case 0x50adf4:c.instructions+=1;goto B50adf4;
case 0x50adf6:goto L50adf6;
case 0x50adfa:goto L50adfa;
case 0x50adfc:c.instructions+=27;goto B50adfc;
case 0x50adff:c.instructions+=26;goto B50adff;
case 0x50ae02:c.instructions+=25;goto B50ae02;
case 0x50ae05:c.instructions+=24;goto B50ae05;
case 0x50ae09:c.instructions+=23;goto B50ae09;
case 0x50ae0b:c.instructions+=22;goto B50ae0b;
case 0x50ae0d:c.instructions+=21;goto B50ae0d;
case 0x50ae10:c.instructions+=20;goto B50ae10;
case 0x50ae13:c.instructions+=19;goto B50ae13;
case 0x50ae17:c.instructions+=18;goto B50ae17;
case 0x50ae1a:c.instructions+=17;goto B50ae1a;
case 0x50ae1e:c.instructions+=16;goto B50ae1e;
case 0x50ae21:c.instructions+=15;goto B50ae21;
case 0x50ae25:c.instructions+=14;goto B50ae25;
case 0x50ae29:c.instructions+=13;goto B50ae29;
case 0x50ae2d:c.instructions+=12;goto B50ae2d;
case 0x50ae30:c.instructions+=11;goto B50ae30;
case 0x50ae34:c.instructions+=10;goto B50ae34;
case 0x50ae37:c.instructions+=9;goto B50ae37;
case 0x50ae39:c.instructions+=8;goto B50ae39;
case 0x50ae3c:c.instructions+=7;goto B50ae3c;
case 0x50ae40:c.instructions+=6;goto B50ae40;
case 0x50ae42:c.instructions+=5;goto B50ae42;
case 0x50ae44:c.instructions+=4;goto B50ae44;
case 0x50ae46:c.instructions+=3;goto B50ae46;
case 0x50ae49:c.instructions+=2;goto B50ae49;
case 0x50ae4c:c.instructions+=1;goto B50ae4c;
case 0x50ae51:goto L50ae51;
case 0x50ae53:c.instructions+=1;goto B50ae53;
case 0x50ae59:goto L50ae59;
case 0x50ae5c:c.instructions+=97;goto B50ae5c;
case 0x50ae60:c.instructions+=96;goto B50ae60;
case 0x50ae63:c.instructions+=95;goto B50ae63;
case 0x50ae66:c.instructions+=94;goto B50ae66;
case 0x50ae6a:c.instructions+=93;goto B50ae6a;
case 0x50ae6c:c.instructions+=92;goto B50ae6c;
case 0x50ae6f:c.instructions+=91;goto B50ae6f;
case 0x50ae73:c.instructions+=90;goto B50ae73;
case 0x50ae7a:c.instructions+=89;goto B50ae7a;
case 0x50ae81:c.instructions+=88;goto B50ae81;
case 0x50ae83:c.instructions+=87;goto B50ae83;
case 0x50ae85:c.instructions+=86;goto B50ae85;
case 0x50ae88:c.instructions+=85;goto B50ae88;
case 0x50ae8c:c.instructions+=84;goto B50ae8c;
case 0x50ae8f:c.instructions+=83;goto B50ae8f;
case 0x50ae92:c.instructions+=82;goto B50ae92;
case 0x50ae96:c.instructions+=81;goto B50ae96;
case 0x50ae99:c.instructions+=80;goto B50ae99;
case 0x50ae9b:c.instructions+=79;goto B50ae9b;
case 0x50ae9d:c.instructions+=78;goto B50ae9d;
case 0x50ae9f:c.instructions+=77;goto B50ae9f;
case 0x50aea1:c.instructions+=76;goto B50aea1;
case 0x50aea4:c.instructions+=75;goto B50aea4;
case 0x50aea7:c.instructions+=74;goto B50aea7;
case 0x50aea9:c.instructions+=73;goto B50aea9;
case 0x50aeac:c.instructions+=72;goto B50aeac;
case 0x50aeaf:c.instructions+=71;goto B50aeaf;
case 0x50aeb3:c.instructions+=70;goto B50aeb3;
case 0x50aeb7:c.instructions+=69;goto B50aeb7;
case 0x50aeba:c.instructions+=68;goto B50aeba;
case 0x50aebe:c.instructions+=67;goto B50aebe;
case 0x50aec0:c.instructions+=66;goto B50aec0;
case 0x50aec2:c.instructions+=65;goto B50aec2;
case 0x50aec4:c.instructions+=64;goto B50aec4;
case 0x50aec7:c.instructions+=63;goto B50aec7;
case 0x50aeca:c.instructions+=62;goto B50aeca;
case 0x50aecd:c.instructions+=61;goto B50aecd;
case 0x50aed0:c.instructions+=60;goto B50aed0;
case 0x50aed3:c.instructions+=59;goto B50aed3;
case 0x50aed6:c.instructions+=58;goto B50aed6;
case 0x50aeda:c.instructions+=57;goto B50aeda;
case 0x50aedd:c.instructions+=56;goto B50aedd;
case 0x50aee1:c.instructions+=55;goto B50aee1;
case 0x50aee3:c.instructions+=54;goto B50aee3;
case 0x50aee5:c.instructions+=53;goto B50aee5;
case 0x50aee9:c.instructions+=52;goto B50aee9;
case 0x50aeeb:c.instructions+=51;goto B50aeeb;
case 0x50aeef:c.instructions+=50;goto B50aeef;
case 0x50aef3:c.instructions+=49;goto B50aef3;
case 0x50aef6:c.instructions+=48;goto B50aef6;
case 0x50aefa:c.instructions+=47;goto B50aefa;
case 0x50aefe:c.instructions+=46;goto B50aefe;
case 0x50af02:c.instructions+=45;goto B50af02;
case 0x50af04:c.instructions+=44;goto B50af04;
case 0x50af07:c.instructions+=43;goto B50af07;
case 0x50af0b:c.instructions+=42;goto B50af0b;
case 0x50af0f:c.instructions+=41;goto B50af0f;
case 0x50af12:c.instructions+=40;goto B50af12;
case 0x50af16:c.instructions+=39;goto B50af16;
case 0x50af1a:c.instructions+=38;goto B50af1a;
case 0x50af1d:c.instructions+=37;goto B50af1d;
case 0x50af20:c.instructions+=36;goto B50af20;
case 0x50af24:c.instructions+=35;goto B50af24;
case 0x50af28:c.instructions+=34;goto B50af28;
case 0x50af2b:c.instructions+=33;goto B50af2b;
case 0x50af2f:c.instructions+=32;goto B50af2f;
case 0x50af33:c.instructions+=31;goto B50af33;
case 0x50af3a:c.instructions+=30;goto B50af3a;
case 0x50af3e:c.instructions+=29;goto B50af3e;
case 0x50af40:c.instructions+=28;goto B50af40;
case 0x50af45:c.instructions+=27;goto B50af45;
case 0x50af4c:c.instructions+=26;goto B50af4c;
case 0x50af4e:c.instructions+=25;goto B50af4e;
case 0x50af50:c.instructions+=24;goto B50af50;
case 0x50af54:c.instructions+=23;goto B50af54;
case 0x50af56:c.instructions+=22;goto B50af56;
case 0x50af5a:c.instructions+=21;goto B50af5a;
case 0x50af61:c.instructions+=20;goto B50af61;
case 0x50af63:c.instructions+=19;goto B50af63;
case 0x50af67:c.instructions+=18;goto B50af67;
case 0x50af6e:c.instructions+=17;goto B50af6e;
case 0x50af72:c.instructions+=16;goto B50af72;
case 0x50af75:c.instructions+=15;goto B50af75;
case 0x50af79:c.instructions+=14;goto B50af79;
case 0x50af7d:c.instructions+=13;goto B50af7d;
case 0x50af81:c.instructions+=12;goto B50af81;
case 0x50af85:c.instructions+=11;goto B50af85;
case 0x50af8c:c.instructions+=10;goto B50af8c;
case 0x50af90:c.instructions+=9;goto B50af90;
case 0x50af97:c.instructions+=8;goto B50af97;
case 0x50af99:c.instructions+=7;goto B50af99;
case 0x50af9c:c.instructions+=6;goto B50af9c;
case 0x50afa3:c.instructions+=5;goto B50afa3;
case 0x50afaa:c.instructions+=4;goto B50afaa;
case 0x50afac:c.instructions+=3;goto B50afac;
case 0x50afae:c.instructions+=2;goto B50afae;
case 0x50afb1:c.instructions+=1;goto B50afb1;
case 0x50afb3:goto L50afb3;
case 0x50afb6:c.instructions+=6;goto B50afb6;
case 0x50afba:c.instructions+=5;goto B50afba;
case 0x50afbd:c.instructions+=4;goto B50afbd;
case 0x50afbe:c.instructions+=3;goto B50afbe;
case 0x50afc1:c.instructions+=2;goto B50afc1;
case 0x50afc5:c.instructions+=1;goto B50afc5;
case 0x50afc9:goto L50afc9;
case 0x50afcd:c.instructions+=11;goto B50afcd;
case 0x50afd4:c.instructions+=10;goto B50afd4;
case 0x50afdb:c.instructions+=9;goto B50afdb;
case 0x50afdf:c.instructions+=8;goto B50afdf;
case 0x50afe3:c.instructions+=7;goto B50afe3;
case 0x50afe5:c.instructions+=6;goto B50afe5;
case 0x50afe9:c.instructions+=5;goto B50afe9;
case 0x50afee:c.instructions+=4;goto B50afee;
case 0x50aff3:c.instructions+=3;goto B50aff3;
case 0x50aff7:c.instructions+=2;goto B50aff7;
case 0x50affa:c.instructions+=1;goto B50affa;
default:missing_instruction(c.pc);}
B50a002:L50a002:{c.instructions+=14;NFSU2_TR(0x50a002);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B50a004:{NFSU2_TR(0x50a004);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a008:{NFSU2_TR(0x50a008);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B50a00b:{NFSU2_TR(0x50a00b);
w4(R+12,u32(0x18ull));
}
B50a010:{NFSU2_TR(0x50a010);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B50a012:{NFSU2_TR(0x50a012);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a016:{NFSU2_TR(0x50a016);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50a019:{NFSU2_TR(0x50a019);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a020:{NFSU2_TR(0x50a020);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a023:{NFSU2_TR(0x50a023);
w4(R+0,u32(0xcull));
}
B50a028:{NFSU2_TR(0x50a028);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B50a02b:{NFSU2_TR(0x50a02b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B50a02d:{NFSU2_TR(0x50a02d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50a035:{NFSU2_TR(0x50a035);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a03c:L50a03c:{c.instructions+=6;NFSU2_TR(0x50a03c);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a03f:{NFSU2_TR(0x50a03f);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50a042:{NFSU2_TR(0x50a042);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50a044:{NFSU2_TR(0x50a044);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50a048:{NFSU2_TR(0x50a048);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50a04b:{NFSU2_TR(0x50a04b);
if(r1(R+514)){{goto L50a207;}}
}
B50a051:L50a051:{c.instructions+=2;NFSU2_TR(0x50a051);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50a053:{NFSU2_TR(0x50a053);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50a1ac;}}
}
B50a059:L50a059:{c.instructions+=105;NFSU2_TR(0x50a059);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a05c:{NFSU2_TR(0x50a05c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a060:{NFSU2_TR(0x50a060);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a063:{NFSU2_TR(0x50a063);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a066:{NFSU2_TR(0x50a066);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a06a:{NFSU2_TR(0x50a06a);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B50a06d:{NFSU2_TR(0x50a06d);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a070:{NFSU2_TR(0x50a070);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a074:{NFSU2_TR(0x50a074);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a07b:{NFSU2_TR(0x50a07b);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a082:{NFSU2_TR(0x50a082);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a084:{NFSU2_TR(0x50a084);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a086:{NFSU2_TR(0x50a086);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a089:{NFSU2_TR(0x50a089);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a08c:{NFSU2_TR(0x50a08c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a08f:{NFSU2_TR(0x50a08f);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a092:{NFSU2_TR(0x50a092);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a096:{NFSU2_TR(0x50a096);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50a099:{NFSU2_TR(0x50a099);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a09b:{NFSU2_TR(0x50a09b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a09d:{NFSU2_TR(0x50a09d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a09f:{NFSU2_TR(0x50a09f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a0a1:{NFSU2_TR(0x50a0a1);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a0a4:{NFSU2_TR(0x50a0a4);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a0a7:{NFSU2_TR(0x50a0a7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a0a9:{NFSU2_TR(0x50a0a9);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a0ac:{NFSU2_TR(0x50a0ac);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a0af:{NFSU2_TR(0x50a0af);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a0b3:{NFSU2_TR(0x50a0b3);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a0b7:{NFSU2_TR(0x50a0b7);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a0b9:{NFSU2_TR(0x50a0b9);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a0bc:{NFSU2_TR(0x50a0bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a0c0:{NFSU2_TR(0x50a0c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a0c3:{NFSU2_TR(0x50a0c3);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a0c5:{NFSU2_TR(0x50a0c5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a0c7:{NFSU2_TR(0x50a0c7);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a0ca:{NFSU2_TR(0x50a0ca);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a0cd:{NFSU2_TR(0x50a0cd);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a0d0:{NFSU2_TR(0x50a0d0);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a0d3:{NFSU2_TR(0x50a0d3);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a0d6:{NFSU2_TR(0x50a0d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a0da:{NFSU2_TR(0x50a0da);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a0dd:{NFSU2_TR(0x50a0dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a0e1:{NFSU2_TR(0x50a0e1);
{u32 ea_=u32(r4(R+12)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a0e4:{NFSU2_TR(0x50a0e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a0e7:{NFSU2_TR(0x50a0e7);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a0eb:{NFSU2_TR(0x50a0eb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a0ed:{NFSU2_TR(0x50a0ed);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a0ef:{NFSU2_TR(0x50a0ef);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a0f3:{NFSU2_TR(0x50a0f3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a0f5:{NFSU2_TR(0x50a0f5);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a0f9:{NFSU2_TR(0x50a0f9);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a0fd:{NFSU2_TR(0x50a0fd);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a100:{NFSU2_TR(0x50a100);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a104:{NFSU2_TR(0x50a104);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a107:{NFSU2_TR(0x50a107);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a10b:{NFSU2_TR(0x50a10b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a10f:{NFSU2_TR(0x50a10f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a111:{NFSU2_TR(0x50a111);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a114:{NFSU2_TR(0x50a114);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a118:{NFSU2_TR(0x50a118);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a11c:{NFSU2_TR(0x50a11c);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a11f:{NFSU2_TR(0x50a11f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a122:{NFSU2_TR(0x50a122);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a125:{NFSU2_TR(0x50a125);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a128:{NFSU2_TR(0x50a128);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B50a12b:{NFSU2_TR(0x50a12b);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a12f:{NFSU2_TR(0x50a12f);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a132:{NFSU2_TR(0x50a132);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a136:{NFSU2_TR(0x50a136);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a13a:{NFSU2_TR(0x50a13a);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a13d:{NFSU2_TR(0x50a13d);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a141:{NFSU2_TR(0x50a141);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50a146:{NFSU2_TR(0x50a146);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a14a:{NFSU2_TR(0x50a14a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a14c:{NFSU2_TR(0x50a14c);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a14e:{NFSU2_TR(0x50a14e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a152:{NFSU2_TR(0x50a152);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a154:{NFSU2_TR(0x50a154);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a158:{NFSU2_TR(0x50a158);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a15c:{NFSU2_TR(0x50a15c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a15e:{NFSU2_TR(0x50a15e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a162:{NFSU2_TR(0x50a162);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a166:{NFSU2_TR(0x50a166);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a16a:{NFSU2_TR(0x50a16a);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a16d:{NFSU2_TR(0x50a16d);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a171:{NFSU2_TR(0x50a171);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a175:{NFSU2_TR(0x50a175);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a179:{NFSU2_TR(0x50a179);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a17d:{NFSU2_TR(0x50a17d);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a181:{NFSU2_TR(0x50a181);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a185:{NFSU2_TR(0x50a185);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a189:{NFSU2_TR(0x50a189);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a18d:{NFSU2_TR(0x50a18d);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B50a18f:{NFSU2_TR(0x50a18f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a192:{NFSU2_TR(0x50a192);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50a193:{NFSU2_TR(0x50a193);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a197:{NFSU2_TR(0x50a197);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a19b:{NFSU2_TR(0x50a19b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a19d:{NFSU2_TR(0x50a19d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a19f:{NFSU2_TR(0x50a19f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a1a2:{NFSU2_TR(0x50a1a2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50a1a5:{NFSU2_TR(0x50a1a5);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a1a8:{NFSU2_TR(0x50a1a8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50a1aa:{NFSU2_TR(0x50a1aa);
{goto L50a1b0;}
}
B50a1ac:L50a1ac:{c.instructions+=1;NFSU2_TR(0x50a1ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a1b0:L50a1b0:{c.instructions+=28;NFSU2_TR(0x50a1b0);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a1b3:{NFSU2_TR(0x50a1b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a1b7:{NFSU2_TR(0x50a1b7);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a1ba:{NFSU2_TR(0x50a1ba);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50a1bb:{NFSU2_TR(0x50a1bb);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a1be:{NFSU2_TR(0x50a1be);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B50a1c1:{NFSU2_TR(0x50a1c1);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a1c4:{NFSU2_TR(0x50a1c4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a1c6:{NFSU2_TR(0x50a1c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a1ca:{NFSU2_TR(0x50a1ca);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a1cd:{NFSU2_TR(0x50a1cd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50a1d0:{NFSU2_TR(0x50a1d0);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a1d3:{NFSU2_TR(0x50a1d3);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a1d6:{NFSU2_TR(0x50a1d6);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a1d9:{NFSU2_TR(0x50a1d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a1dc:{NFSU2_TR(0x50a1dc);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a1e0:{NFSU2_TR(0x50a1e0);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a1e4:{NFSU2_TR(0x50a1e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a1e7:{NFSU2_TR(0x50a1e7);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a1ea:{NFSU2_TR(0x50a1ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a1ee:{NFSU2_TR(0x50a1ee);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a1f1:{NFSU2_TR(0x50a1f1);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a1f4:{NFSU2_TR(0x50a1f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a1f7:{NFSU2_TR(0x50a1f7);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a1fa:{NFSU2_TR(0x50a1fa);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a1fc:{NFSU2_TR(0x50a1fc);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a1ff:{NFSU2_TR(0x50a1ff);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a202:{NFSU2_TR(0x50a202);
{goto L50a382;}
}
B50a207:L50a207:{c.instructions+=2;NFSU2_TR(0x50a207);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50a209:{NFSU2_TR(0x50a209);
if(r1(R+518)){{goto L50a37e;}}
}
B50a20f:L50a20f:{c.instructions+=106;NFSU2_TR(0x50a20f);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a212:{NFSU2_TR(0x50a212);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a216:{NFSU2_TR(0x50a216);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a219:{NFSU2_TR(0x50a219);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a21c:{NFSU2_TR(0x50a21c);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a220:{NFSU2_TR(0x50a220);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B50a223:{NFSU2_TR(0x50a223);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a226:{NFSU2_TR(0x50a226);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a22a:{NFSU2_TR(0x50a22a);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a231:{NFSU2_TR(0x50a231);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a238:{NFSU2_TR(0x50a238);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a23a:{NFSU2_TR(0x50a23a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a23c:{NFSU2_TR(0x50a23c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a23f:{NFSU2_TR(0x50a23f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a242:{NFSU2_TR(0x50a242);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a245:{NFSU2_TR(0x50a245);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a248:{NFSU2_TR(0x50a248);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a24c:{NFSU2_TR(0x50a24c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50a24f:{NFSU2_TR(0x50a24f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a251:{NFSU2_TR(0x50a251);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a253:{NFSU2_TR(0x50a253);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a255:{NFSU2_TR(0x50a255);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a257:{NFSU2_TR(0x50a257);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a25a:{NFSU2_TR(0x50a25a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a25d:{NFSU2_TR(0x50a25d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a25f:{NFSU2_TR(0x50a25f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a262:{NFSU2_TR(0x50a262);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a265:{NFSU2_TR(0x50a265);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a269:{NFSU2_TR(0x50a269);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a26d:{NFSU2_TR(0x50a26d);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a270:{NFSU2_TR(0x50a270);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a274:{NFSU2_TR(0x50a274);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a276:{NFSU2_TR(0x50a276);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a279:{NFSU2_TR(0x50a279);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a27b:{NFSU2_TR(0x50a27b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a27d:{NFSU2_TR(0x50a27d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a280:{NFSU2_TR(0x50a280);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a283:{NFSU2_TR(0x50a283);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a286:{NFSU2_TR(0x50a286);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a289:{NFSU2_TR(0x50a289);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a28c:{NFSU2_TR(0x50a28c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a290:{NFSU2_TR(0x50a290);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a293:{NFSU2_TR(0x50a293);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a297:{NFSU2_TR(0x50a297);
{u32 ea_=u32(r4(R+12)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a29a:{NFSU2_TR(0x50a29a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a29d:{NFSU2_TR(0x50a29d);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a2a1:{NFSU2_TR(0x50a2a1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a2a3:{NFSU2_TR(0x50a2a3);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a2a5:{NFSU2_TR(0x50a2a5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a2a9:{NFSU2_TR(0x50a2a9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a2ab:{NFSU2_TR(0x50a2ab);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a2af:{NFSU2_TR(0x50a2af);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a2b3:{NFSU2_TR(0x50a2b3);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a2b6:{NFSU2_TR(0x50a2b6);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a2ba:{NFSU2_TR(0x50a2ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a2bd:{NFSU2_TR(0x50a2bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a2c1:{NFSU2_TR(0x50a2c1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a2c5:{NFSU2_TR(0x50a2c5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a2c7:{NFSU2_TR(0x50a2c7);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a2ca:{NFSU2_TR(0x50a2ca);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a2ce:{NFSU2_TR(0x50a2ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a2d2:{NFSU2_TR(0x50a2d2);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a2d5:{NFSU2_TR(0x50a2d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a2d8:{NFSU2_TR(0x50a2d8);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a2db:{NFSU2_TR(0x50a2db);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a2de:{NFSU2_TR(0x50a2de);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B50a2e1:{NFSU2_TR(0x50a2e1);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a2e5:{NFSU2_TR(0x50a2e5);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a2e8:{NFSU2_TR(0x50a2e8);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a2ec:{NFSU2_TR(0x50a2ec);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a2f3:{NFSU2_TR(0x50a2f3);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a2f6:{NFSU2_TR(0x50a2f6);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a2fa:{NFSU2_TR(0x50a2fa);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50a2ff:{NFSU2_TR(0x50a2ff);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a306:{NFSU2_TR(0x50a306);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a308:{NFSU2_TR(0x50a308);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a30a:{NFSU2_TR(0x50a30a);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a30e:{NFSU2_TR(0x50a30e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a310:{NFSU2_TR(0x50a310);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a314:{NFSU2_TR(0x50a314);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a31b:{NFSU2_TR(0x50a31b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a31d:{NFSU2_TR(0x50a31d);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a321:{NFSU2_TR(0x50a321);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a328:{NFSU2_TR(0x50a328);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a32c:{NFSU2_TR(0x50a32c);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a32f:{NFSU2_TR(0x50a32f);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a333:{NFSU2_TR(0x50a333);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a337:{NFSU2_TR(0x50a337);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a33b:{NFSU2_TR(0x50a33b);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a33f:{NFSU2_TR(0x50a33f);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a346:{NFSU2_TR(0x50a346);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a34a:{NFSU2_TR(0x50a34a);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a351:{NFSU2_TR(0x50a351);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a355:{NFSU2_TR(0x50a355);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B50a357:{NFSU2_TR(0x50a357);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a35a:{NFSU2_TR(0x50a35a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50a35b:{NFSU2_TR(0x50a35b);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a362:{NFSU2_TR(0x50a362);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a369:{NFSU2_TR(0x50a369);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a36b:{NFSU2_TR(0x50a36b);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a36d:{NFSU2_TR(0x50a36d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a370:{NFSU2_TR(0x50a370);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a374:{NFSU2_TR(0x50a374);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a377:{NFSU2_TR(0x50a377);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50a37a:{NFSU2_TR(0x50a37a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50a37c:{NFSU2_TR(0x50a37c);
{goto L50a382;}
}
B50a37e:L50a37e:{c.instructions+=1;NFSU2_TR(0x50a37e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a382:L50a382:{c.instructions+=6;NFSU2_TR(0x50a382);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a385:{NFSU2_TR(0x50a385);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50a388:{NFSU2_TR(0x50a388);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50a38a:{NFSU2_TR(0x50a38a);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50a38e:{NFSU2_TR(0x50a38e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50a391:{NFSU2_TR(0x50a391);
if(r1(R+514)){{goto L50a501;}}
}
B50a397:L50a397:{c.instructions+=2;NFSU2_TR(0x50a397);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50a399:{NFSU2_TR(0x50a399);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50a4ba;}}
}
B50a39f:L50a39f:{c.instructions+=92;NFSU2_TR(0x50a39f);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a3a2:{NFSU2_TR(0x50a3a2);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a3a5:{NFSU2_TR(0x50a3a5);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a3a8:{NFSU2_TR(0x50a3a8);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a3ab:{NFSU2_TR(0x50a3ab);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a3ad:{NFSU2_TR(0x50a3ad);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a3b0:{NFSU2_TR(0x50a3b0);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a3b7:{NFSU2_TR(0x50a3b7);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a3be:{NFSU2_TR(0x50a3be);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a3c0:{NFSU2_TR(0x50a3c0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a3c2:{NFSU2_TR(0x50a3c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a3c5:{NFSU2_TR(0x50a3c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a3c9:{NFSU2_TR(0x50a3c9);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a3cc:{NFSU2_TR(0x50a3cc);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a3cf:{NFSU2_TR(0x50a3cf);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a3d2:{NFSU2_TR(0x50a3d2);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50a3d5:{NFSU2_TR(0x50a3d5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a3d7:{NFSU2_TR(0x50a3d7);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a3d9:{NFSU2_TR(0x50a3d9);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a3db:{NFSU2_TR(0x50a3db);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a3dd:{NFSU2_TR(0x50a3dd);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a3e0:{NFSU2_TR(0x50a3e0);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a3e3:{NFSU2_TR(0x50a3e3);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a3e5:{NFSU2_TR(0x50a3e5);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a3e8:{NFSU2_TR(0x50a3e8);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a3eb:{NFSU2_TR(0x50a3eb);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a3ee:{NFSU2_TR(0x50a3ee);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a3f1:{NFSU2_TR(0x50a3f1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a3f3:{NFSU2_TR(0x50a3f3);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a3f6:{NFSU2_TR(0x50a3f6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a3f8:{NFSU2_TR(0x50a3f8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a3fa:{NFSU2_TR(0x50a3fa);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a3fd:{NFSU2_TR(0x50a3fd);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a400:{NFSU2_TR(0x50a400);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a403:{NFSU2_TR(0x50a403);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a406:{NFSU2_TR(0x50a406);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a409:{NFSU2_TR(0x50a409);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a40c:{NFSU2_TR(0x50a40c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a40e:{NFSU2_TR(0x50a40e);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a411:{NFSU2_TR(0x50a411);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a413:{NFSU2_TR(0x50a413);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a415:{NFSU2_TR(0x50a415);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a419:{NFSU2_TR(0x50a419);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a41b:{NFSU2_TR(0x50a41b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a41f:{NFSU2_TR(0x50a41f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a423:{NFSU2_TR(0x50a423);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a426:{NFSU2_TR(0x50a426);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a42a:{NFSU2_TR(0x50a42a);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a42d:{NFSU2_TR(0x50a42d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a430:{NFSU2_TR(0x50a430);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a432:{NFSU2_TR(0x50a432);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a435:{NFSU2_TR(0x50a435);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a439:{NFSU2_TR(0x50a439);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a43d:{NFSU2_TR(0x50a43d);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a440:{NFSU2_TR(0x50a440);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a443:{NFSU2_TR(0x50a443);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a446:{NFSU2_TR(0x50a446);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a449:{NFSU2_TR(0x50a449);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a44c:{NFSU2_TR(0x50a44c);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a44f:{NFSU2_TR(0x50a44f);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a453:{NFSU2_TR(0x50a453);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a455:{NFSU2_TR(0x50a455);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a458:{NFSU2_TR(0x50a458);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a45c:{NFSU2_TR(0x50a45c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a45e:{NFSU2_TR(0x50a45e);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a460:{NFSU2_TR(0x50a460);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50a461:{NFSU2_TR(0x50a461);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B50a464:{NFSU2_TR(0x50a464);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50a467:{NFSU2_TR(0x50a467);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a46b:{NFSU2_TR(0x50a46b);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50a470:{NFSU2_TR(0x50a470);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a472:{NFSU2_TR(0x50a472);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a476:{NFSU2_TR(0x50a476);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a47a:{NFSU2_TR(0x50a47a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a47c:{NFSU2_TR(0x50a47c);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a480:{NFSU2_TR(0x50a480);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a484:{NFSU2_TR(0x50a484);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a488:{NFSU2_TR(0x50a488);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a48b:{NFSU2_TR(0x50a48b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a48f:{NFSU2_TR(0x50a48f);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a492:{NFSU2_TR(0x50a492);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a496:{NFSU2_TR(0x50a496);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a499:{NFSU2_TR(0x50a499);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a49d:{NFSU2_TR(0x50a49d);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a4a1:{NFSU2_TR(0x50a4a1);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B50a4a3:{NFSU2_TR(0x50a4a3);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a4a6:{NFSU2_TR(0x50a4a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a4a9:{NFSU2_TR(0x50a4a9);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a4ad:{NFSU2_TR(0x50a4ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a4b1:{NFSU2_TR(0x50a4b1);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a4b4:{NFSU2_TR(0x50a4b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a4b7:{NFSU2_TR(0x50a4b7);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a4ba:L50a4ba:{c.instructions+=24;NFSU2_TR(0x50a4ba);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a4bd:{NFSU2_TR(0x50a4bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a4c1:{NFSU2_TR(0x50a4c1);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a4c3:{NFSU2_TR(0x50a4c3);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a4c6:{NFSU2_TR(0x50a4c6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a4c8:{NFSU2_TR(0x50a4c8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a4ca:{NFSU2_TR(0x50a4ca);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a4cd:{NFSU2_TR(0x50a4cd);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a4d0:{NFSU2_TR(0x50a4d0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a4d2:{NFSU2_TR(0x50a4d2);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a4d5:{NFSU2_TR(0x50a4d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a4d8:{NFSU2_TR(0x50a4d8);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a4db:{NFSU2_TR(0x50a4db);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a4df:{NFSU2_TR(0x50a4df);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a4e3:{NFSU2_TR(0x50a4e3);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a4e6:{NFSU2_TR(0x50a4e6);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a4e9:{NFSU2_TR(0x50a4e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B50a4eb:{NFSU2_TR(0x50a4eb);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a4ee:{NFSU2_TR(0x50a4ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a4f2:{NFSU2_TR(0x50a4f2);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a4f4:{NFSU2_TR(0x50a4f4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a4f6:{NFSU2_TR(0x50a4f6);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a4f9:{NFSU2_TR(0x50a4f9);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a4fc:{NFSU2_TR(0x50a4fc);
{goto L50a631;}
}
B50a501:L50a501:{c.instructions+=2;NFSU2_TR(0x50a501);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50a503:{NFSU2_TR(0x50a503);
if(r1(R+518)){{goto L50a63f;}}
}
B50a509:L50a509:{c.instructions+=88;NFSU2_TR(0x50a509);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a50c:{NFSU2_TR(0x50a50c);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a50f:{NFSU2_TR(0x50a50f);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a512:{NFSU2_TR(0x50a512);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a515:{NFSU2_TR(0x50a515);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a517:{NFSU2_TR(0x50a517);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a51a:{NFSU2_TR(0x50a51a);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a521:{NFSU2_TR(0x50a521);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a528:{NFSU2_TR(0x50a528);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a52a:{NFSU2_TR(0x50a52a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a52c:{NFSU2_TR(0x50a52c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a52f:{NFSU2_TR(0x50a52f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a533:{NFSU2_TR(0x50a533);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a536:{NFSU2_TR(0x50a536);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a539:{NFSU2_TR(0x50a539);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a53c:{NFSU2_TR(0x50a53c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50a53f:{NFSU2_TR(0x50a53f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a541:{NFSU2_TR(0x50a541);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a543:{NFSU2_TR(0x50a543);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a545:{NFSU2_TR(0x50a545);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a547:{NFSU2_TR(0x50a547);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a54a:{NFSU2_TR(0x50a54a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a54d:{NFSU2_TR(0x50a54d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a54f:{NFSU2_TR(0x50a54f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a552:{NFSU2_TR(0x50a552);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a555:{NFSU2_TR(0x50a555);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a558:{NFSU2_TR(0x50a558);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a55b:{NFSU2_TR(0x50a55b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a55d:{NFSU2_TR(0x50a55d);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a560:{NFSU2_TR(0x50a560);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a562:{NFSU2_TR(0x50a562);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a564:{NFSU2_TR(0x50a564);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a567:{NFSU2_TR(0x50a567);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a56a:{NFSU2_TR(0x50a56a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a56d:{NFSU2_TR(0x50a56d);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a570:{NFSU2_TR(0x50a570);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a573:{NFSU2_TR(0x50a573);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a576:{NFSU2_TR(0x50a576);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a578:{NFSU2_TR(0x50a578);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a57b:{NFSU2_TR(0x50a57b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a57d:{NFSU2_TR(0x50a57d);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a57f:{NFSU2_TR(0x50a57f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a583:{NFSU2_TR(0x50a583);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a585:{NFSU2_TR(0x50a585);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a589:{NFSU2_TR(0x50a589);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a58d:{NFSU2_TR(0x50a58d);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a590:{NFSU2_TR(0x50a590);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a594:{NFSU2_TR(0x50a594);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a597:{NFSU2_TR(0x50a597);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a59a:{NFSU2_TR(0x50a59a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a59c:{NFSU2_TR(0x50a59c);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a59f:{NFSU2_TR(0x50a59f);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a5a3:{NFSU2_TR(0x50a5a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a5a7:{NFSU2_TR(0x50a5a7);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a5aa:{NFSU2_TR(0x50a5aa);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a5ad:{NFSU2_TR(0x50a5ad);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a5b0:{NFSU2_TR(0x50a5b0);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a5b3:{NFSU2_TR(0x50a5b3);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a5b6:{NFSU2_TR(0x50a5b6);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a5b9:{NFSU2_TR(0x50a5b9);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a5c0:{NFSU2_TR(0x50a5c0);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a5c2:{NFSU2_TR(0x50a5c2);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a5c5:{NFSU2_TR(0x50a5c5);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a5cc:{NFSU2_TR(0x50a5cc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a5ce:{NFSU2_TR(0x50a5ce);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a5d0:{NFSU2_TR(0x50a5d0);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50a5d5:{NFSU2_TR(0x50a5d5);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a5d9:{NFSU2_TR(0x50a5d9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a5db:{NFSU2_TR(0x50a5db);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a5df:{NFSU2_TR(0x50a5df);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a5e6:{NFSU2_TR(0x50a5e6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a5e8:{NFSU2_TR(0x50a5e8);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a5ec:{NFSU2_TR(0x50a5ec);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a5f3:{NFSU2_TR(0x50a5f3);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a5f7:{NFSU2_TR(0x50a5f7);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a5fa:{NFSU2_TR(0x50a5fa);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a5fe:{NFSU2_TR(0x50a5fe);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a601:{NFSU2_TR(0x50a601);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a605:{NFSU2_TR(0x50a605);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a608:{NFSU2_TR(0x50a608);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a60f:{NFSU2_TR(0x50a60f);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a616:{NFSU2_TR(0x50a616);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B50a618:{NFSU2_TR(0x50a618);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a61b:{NFSU2_TR(0x50a61b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a61e:{NFSU2_TR(0x50a61e);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a625:{NFSU2_TR(0x50a625);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a62c:{NFSU2_TR(0x50a62c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a62e:{NFSU2_TR(0x50a62e);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a631:L50a631:{c.instructions+=5;NFSU2_TR(0x50a631);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50a632:{NFSU2_TR(0x50a632);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a635:{NFSU2_TR(0x50a635);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B50a638:{NFSU2_TR(0x50a638);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a63c:{NFSU2_TR(0x50a63c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50a63f:L50a63f:{c.instructions+=6;NFSU2_TR(0x50a63f);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a642:{NFSU2_TR(0x50a642);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50a645:{NFSU2_TR(0x50a645);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50a647:{NFSU2_TR(0x50a647);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50a64b:{NFSU2_TR(0x50a64b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50a64e:{NFSU2_TR(0x50a64e);
if(r1(R+514)){{goto L50a7ba;}}
}
B50a654:L50a654:{c.instructions+=2;NFSU2_TR(0x50a654);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50a656:{NFSU2_TR(0x50a656);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50a774;}}
}
B50a65c:L50a65c:{c.instructions+=92;NFSU2_TR(0x50a65c);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a65f:{NFSU2_TR(0x50a65f);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a662:{NFSU2_TR(0x50a662);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a665:{NFSU2_TR(0x50a665);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a668:{NFSU2_TR(0x50a668);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a66b:{NFSU2_TR(0x50a66b);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a66d:{NFSU2_TR(0x50a66d);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a674:{NFSU2_TR(0x50a674);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a67b:{NFSU2_TR(0x50a67b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a67d:{NFSU2_TR(0x50a67d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a67f:{NFSU2_TR(0x50a67f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a682:{NFSU2_TR(0x50a682);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a686:{NFSU2_TR(0x50a686);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a689:{NFSU2_TR(0x50a689);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a68c:{NFSU2_TR(0x50a68c);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a68f:{NFSU2_TR(0x50a68f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50a692:{NFSU2_TR(0x50a692);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a694:{NFSU2_TR(0x50a694);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a696:{NFSU2_TR(0x50a696);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a698:{NFSU2_TR(0x50a698);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a69a:{NFSU2_TR(0x50a69a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a69d:{NFSU2_TR(0x50a69d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a6a0:{NFSU2_TR(0x50a6a0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a6a2:{NFSU2_TR(0x50a6a2);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a6a5:{NFSU2_TR(0x50a6a5);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a6a8:{NFSU2_TR(0x50a6a8);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a6ab:{NFSU2_TR(0x50a6ab);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a6ad:{NFSU2_TR(0x50a6ad);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a6af:{NFSU2_TR(0x50a6af);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a6b2:{NFSU2_TR(0x50a6b2);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a6b4:{NFSU2_TR(0x50a6b4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a6b6:{NFSU2_TR(0x50a6b6);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a6b9:{NFSU2_TR(0x50a6b9);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a6bc:{NFSU2_TR(0x50a6bc);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a6bf:{NFSU2_TR(0x50a6bf);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a6c2:{NFSU2_TR(0x50a6c2);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a6c5:{NFSU2_TR(0x50a6c5);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a6c8:{NFSU2_TR(0x50a6c8);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a6cb:{NFSU2_TR(0x50a6cb);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a6cd:{NFSU2_TR(0x50a6cd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a6cf:{NFSU2_TR(0x50a6cf);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a6d1:{NFSU2_TR(0x50a6d1);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a6d5:{NFSU2_TR(0x50a6d5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a6d7:{NFSU2_TR(0x50a6d7);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a6db:{NFSU2_TR(0x50a6db);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a6df:{NFSU2_TR(0x50a6df);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a6e2:{NFSU2_TR(0x50a6e2);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a6e6:{NFSU2_TR(0x50a6e6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a6e8:{NFSU2_TR(0x50a6e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a6eb:{NFSU2_TR(0x50a6eb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a6ed:{NFSU2_TR(0x50a6ed);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a6f0:{NFSU2_TR(0x50a6f0);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a6f4:{NFSU2_TR(0x50a6f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a6f8:{NFSU2_TR(0x50a6f8);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a6fb:{NFSU2_TR(0x50a6fb);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a6fe:{NFSU2_TR(0x50a6fe);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a701:{NFSU2_TR(0x50a701);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a704:{NFSU2_TR(0x50a704);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a707:{NFSU2_TR(0x50a707);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a70a:{NFSU2_TR(0x50a70a);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a70e:{NFSU2_TR(0x50a70e);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a711:{NFSU2_TR(0x50a711);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a713:{NFSU2_TR(0x50a713);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a717:{NFSU2_TR(0x50a717);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a719:{NFSU2_TR(0x50a719);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50a71a:{NFSU2_TR(0x50a71a);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a71c:{NFSU2_TR(0x50a71c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B50a71f:{NFSU2_TR(0x50a71f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50a722:{NFSU2_TR(0x50a722);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50a727:{NFSU2_TR(0x50a727);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a72b:{NFSU2_TR(0x50a72b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a72d:{NFSU2_TR(0x50a72d);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a731:{NFSU2_TR(0x50a731);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a735:{NFSU2_TR(0x50a735);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a737:{NFSU2_TR(0x50a737);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a73b:{NFSU2_TR(0x50a73b);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a73f:{NFSU2_TR(0x50a73f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a743:{NFSU2_TR(0x50a743);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a746:{NFSU2_TR(0x50a746);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a74a:{NFSU2_TR(0x50a74a);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a74d:{NFSU2_TR(0x50a74d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a751:{NFSU2_TR(0x50a751);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a754:{NFSU2_TR(0x50a754);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a758:{NFSU2_TR(0x50a758);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a75c:{NFSU2_TR(0x50a75c);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B50a75e:{NFSU2_TR(0x50a75e);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a760:{NFSU2_TR(0x50a760);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a763:{NFSU2_TR(0x50a763);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a767:{NFSU2_TR(0x50a767);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a76b:{NFSU2_TR(0x50a76b);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a76e:{NFSU2_TR(0x50a76e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a771:{NFSU2_TR(0x50a771);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a774:L50a774:{c.instructions+=23;NFSU2_TR(0x50a774);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a777:{NFSU2_TR(0x50a777);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a77b:{NFSU2_TR(0x50a77b);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a77e:{NFSU2_TR(0x50a77e);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a781:{NFSU2_TR(0x50a781);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a783:{NFSU2_TR(0x50a783);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a785:{NFSU2_TR(0x50a785);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a788:{NFSU2_TR(0x50a788);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a78b:{NFSU2_TR(0x50a78b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a78e:{NFSU2_TR(0x50a78e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a791:{NFSU2_TR(0x50a791);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a794:{NFSU2_TR(0x50a794);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a797:{NFSU2_TR(0x50a797);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a79b:{NFSU2_TR(0x50a79b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a79e:{NFSU2_TR(0x50a79e);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a7a1:{NFSU2_TR(0x50a7a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a7a5:{NFSU2_TR(0x50a7a5);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a7a8:{NFSU2_TR(0x50a7a8);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a7ab:{NFSU2_TR(0x50a7ab);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a7ad:{NFSU2_TR(0x50a7ad);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a7af:{NFSU2_TR(0x50a7af);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a7b2:{NFSU2_TR(0x50a7b2);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a7b5:{NFSU2_TR(0x50a7b5);
{goto L50a8e7;}
}
B50a7ba:L50a7ba:{c.instructions+=2;NFSU2_TR(0x50a7ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50a7bc:{NFSU2_TR(0x50a7bc);
if(r1(R+518)){{goto L50a8f5;}}
}
B50a7c2:L50a7c2:{c.instructions+=88;NFSU2_TR(0x50a7c2);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a7c5:{NFSU2_TR(0x50a7c5);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a7c8:{NFSU2_TR(0x50a7c8);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a7cb:{NFSU2_TR(0x50a7cb);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a7ce:{NFSU2_TR(0x50a7ce);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a7d1:{NFSU2_TR(0x50a7d1);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a7d3:{NFSU2_TR(0x50a7d3);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a7da:{NFSU2_TR(0x50a7da);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a7e1:{NFSU2_TR(0x50a7e1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a7e3:{NFSU2_TR(0x50a7e3);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a7e5:{NFSU2_TR(0x50a7e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a7e8:{NFSU2_TR(0x50a7e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a7ec:{NFSU2_TR(0x50a7ec);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a7ef:{NFSU2_TR(0x50a7ef);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a7f2:{NFSU2_TR(0x50a7f2);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a7f5:{NFSU2_TR(0x50a7f5);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50a7f8:{NFSU2_TR(0x50a7f8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a7fa:{NFSU2_TR(0x50a7fa);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a7fc:{NFSU2_TR(0x50a7fc);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a7fe:{NFSU2_TR(0x50a7fe);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a800:{NFSU2_TR(0x50a800);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a803:{NFSU2_TR(0x50a803);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a806:{NFSU2_TR(0x50a806);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a808:{NFSU2_TR(0x50a808);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a80b:{NFSU2_TR(0x50a80b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a80e:{NFSU2_TR(0x50a80e);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a811:{NFSU2_TR(0x50a811);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a813:{NFSU2_TR(0x50a813);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a815:{NFSU2_TR(0x50a815);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a818:{NFSU2_TR(0x50a818);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a81a:{NFSU2_TR(0x50a81a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a81c:{NFSU2_TR(0x50a81c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a81f:{NFSU2_TR(0x50a81f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a822:{NFSU2_TR(0x50a822);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a825:{NFSU2_TR(0x50a825);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a828:{NFSU2_TR(0x50a828);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a82b:{NFSU2_TR(0x50a82b);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a82e:{NFSU2_TR(0x50a82e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a831:{NFSU2_TR(0x50a831);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a833:{NFSU2_TR(0x50a833);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a835:{NFSU2_TR(0x50a835);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a837:{NFSU2_TR(0x50a837);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a83b:{NFSU2_TR(0x50a83b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a83d:{NFSU2_TR(0x50a83d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a841:{NFSU2_TR(0x50a841);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a845:{NFSU2_TR(0x50a845);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a848:{NFSU2_TR(0x50a848);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a84c:{NFSU2_TR(0x50a84c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a84e:{NFSU2_TR(0x50a84e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a851:{NFSU2_TR(0x50a851);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a853:{NFSU2_TR(0x50a853);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a856:{NFSU2_TR(0x50a856);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a85a:{NFSU2_TR(0x50a85a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a85e:{NFSU2_TR(0x50a85e);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a861:{NFSU2_TR(0x50a861);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a864:{NFSU2_TR(0x50a864);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a867:{NFSU2_TR(0x50a867);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a86a:{NFSU2_TR(0x50a86a);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a86d:{NFSU2_TR(0x50a86d);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a870:{NFSU2_TR(0x50a870);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a877:{NFSU2_TR(0x50a877);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a87a:{NFSU2_TR(0x50a87a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a87c:{NFSU2_TR(0x50a87c);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a883:{NFSU2_TR(0x50a883);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a885:{NFSU2_TR(0x50a885);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50a88a:{NFSU2_TR(0x50a88a);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a88c:{NFSU2_TR(0x50a88c);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a890:{NFSU2_TR(0x50a890);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a892:{NFSU2_TR(0x50a892);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a896:{NFSU2_TR(0x50a896);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a89d:{NFSU2_TR(0x50a89d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a89f:{NFSU2_TR(0x50a89f);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a8a3:{NFSU2_TR(0x50a8a3);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a8aa:{NFSU2_TR(0x50a8aa);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a8ae:{NFSU2_TR(0x50a8ae);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a8b1:{NFSU2_TR(0x50a8b1);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a8b5:{NFSU2_TR(0x50a8b5);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a8b8:{NFSU2_TR(0x50a8b8);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a8bc:{NFSU2_TR(0x50a8bc);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a8bf:{NFSU2_TR(0x50a8bf);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a8c6:{NFSU2_TR(0x50a8c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a8cd:{NFSU2_TR(0x50a8cd);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B50a8cf:{NFSU2_TR(0x50a8cf);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a8d1:{NFSU2_TR(0x50a8d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a8d4:{NFSU2_TR(0x50a8d4);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a8db:{NFSU2_TR(0x50a8db);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a8e2:{NFSU2_TR(0x50a8e2);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a8e4:{NFSU2_TR(0x50a8e4);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a8e7:L50a8e7:{c.instructions+=5;NFSU2_TR(0x50a8e7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50a8e8:{NFSU2_TR(0x50a8e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a8eb:{NFSU2_TR(0x50a8eb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B50a8ee:{NFSU2_TR(0x50a8ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a8f2:{NFSU2_TR(0x50a8f2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50a8f5:L50a8f5:{c.instructions+=6;NFSU2_TR(0x50a8f5);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a8f8:{NFSU2_TR(0x50a8f8);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50a8fb:{NFSU2_TR(0x50a8fb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50a8fd:{NFSU2_TR(0x50a8fd);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50a901:{NFSU2_TR(0x50a901);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50a904:{NFSU2_TR(0x50a904);
if(r1(R+514)){{goto L50aa72;}}
}
B50a90a:L50a90a:{c.instructions+=2;NFSU2_TR(0x50a90a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50a90c:{NFSU2_TR(0x50a90c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50aa2c;}}
}
B50a912:L50a912:{c.instructions+=91;NFSU2_TR(0x50a912);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a915:{NFSU2_TR(0x50a915);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a918:{NFSU2_TR(0x50a918);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a91b:{NFSU2_TR(0x50a91b);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a91e:{NFSU2_TR(0x50a91e);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a921:{NFSU2_TR(0x50a921);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a924:{NFSU2_TR(0x50a924);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a92b:{NFSU2_TR(0x50a92b);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a932:{NFSU2_TR(0x50a932);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a934:{NFSU2_TR(0x50a934);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a936:{NFSU2_TR(0x50a936);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a939:{NFSU2_TR(0x50a939);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a93d:{NFSU2_TR(0x50a93d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a940:{NFSU2_TR(0x50a940);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a943:{NFSU2_TR(0x50a943);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a946:{NFSU2_TR(0x50a946);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50a949:{NFSU2_TR(0x50a949);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a94b:{NFSU2_TR(0x50a94b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a94d:{NFSU2_TR(0x50a94d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a94f:{NFSU2_TR(0x50a94f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a951:{NFSU2_TR(0x50a951);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a954:{NFSU2_TR(0x50a954);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a957:{NFSU2_TR(0x50a957);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a959:{NFSU2_TR(0x50a959);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a95c:{NFSU2_TR(0x50a95c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a95f:{NFSU2_TR(0x50a95f);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a962:{NFSU2_TR(0x50a962);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a965:{NFSU2_TR(0x50a965);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a967:{NFSU2_TR(0x50a967);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a96a:{NFSU2_TR(0x50a96a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a96c:{NFSU2_TR(0x50a96c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a96e:{NFSU2_TR(0x50a96e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a971:{NFSU2_TR(0x50a971);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a974:{NFSU2_TR(0x50a974);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a977:{NFSU2_TR(0x50a977);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a97a:{NFSU2_TR(0x50a97a);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a97d:{NFSU2_TR(0x50a97d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a980:{NFSU2_TR(0x50a980);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a983:{NFSU2_TR(0x50a983);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a986:{NFSU2_TR(0x50a986);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a988:{NFSU2_TR(0x50a988);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a98a:{NFSU2_TR(0x50a98a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a98e:{NFSU2_TR(0x50a98e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a990:{NFSU2_TR(0x50a990);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a994:{NFSU2_TR(0x50a994);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a998:{NFSU2_TR(0x50a998);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a99b:{NFSU2_TR(0x50a99b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a99f:{NFSU2_TR(0x50a99f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a9a2:{NFSU2_TR(0x50a9a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50a9a5:{NFSU2_TR(0x50a9a5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a9a7:{NFSU2_TR(0x50a9a7);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a9aa:{NFSU2_TR(0x50a9aa);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a9ae:{NFSU2_TR(0x50a9ae);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a9b1:{NFSU2_TR(0x50a9b1);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a9b4:{NFSU2_TR(0x50a9b4);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a9b7:{NFSU2_TR(0x50a9b7);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a9ba:{NFSU2_TR(0x50a9ba);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a9bd:{NFSU2_TR(0x50a9bd);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a9c0:{NFSU2_TR(0x50a9c0);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a9c4:{NFSU2_TR(0x50a9c4);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a9c7:{NFSU2_TR(0x50a9c7);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a9ca:{NFSU2_TR(0x50a9ca);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a9ce:{NFSU2_TR(0x50a9ce);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50a9cf:{NFSU2_TR(0x50a9cf);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a9d1:{NFSU2_TR(0x50a9d1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B50a9d4:{NFSU2_TR(0x50a9d4);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a9d6:{NFSU2_TR(0x50a9d6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50a9d9:{NFSU2_TR(0x50a9d9);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50a9de:{NFSU2_TR(0x50a9de);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a9e2:{NFSU2_TR(0x50a9e2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a9e4:{NFSU2_TR(0x50a9e4);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a9e8:{NFSU2_TR(0x50a9e8);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a9ec:{NFSU2_TR(0x50a9ec);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a9ee:{NFSU2_TR(0x50a9ee);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a9f2:{NFSU2_TR(0x50a9f2);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a9f6:{NFSU2_TR(0x50a9f6);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a9fa:{NFSU2_TR(0x50a9fa);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a9fd:{NFSU2_TR(0x50a9fd);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa01:{NFSU2_TR(0x50aa01);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50aa04:{NFSU2_TR(0x50aa04);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa08:{NFSU2_TR(0x50aa08);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50aa0b:{NFSU2_TR(0x50aa0b);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa0f:{NFSU2_TR(0x50aa0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50aa13:{NFSU2_TR(0x50aa13);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B50aa15:{NFSU2_TR(0x50aa15);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50aa18:{NFSU2_TR(0x50aa18);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50aa1b:{NFSU2_TR(0x50aa1b);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa1f:{NFSU2_TR(0x50aa1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50aa23:{NFSU2_TR(0x50aa23);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa26:{NFSU2_TR(0x50aa26);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50aa29:{NFSU2_TR(0x50aa29);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa2c:L50aa2c:{c.instructions+=23;NFSU2_TR(0x50aa2c);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa2f:{NFSU2_TR(0x50aa2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50aa33:{NFSU2_TR(0x50aa33);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa36:{NFSU2_TR(0x50aa36);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa39:{NFSU2_TR(0x50aa39);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa3b:{NFSU2_TR(0x50aa3b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50aa3d:{NFSU2_TR(0x50aa3d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa40:{NFSU2_TR(0x50aa40);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa43:{NFSU2_TR(0x50aa43);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa46:{NFSU2_TR(0x50aa46);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa49:{NFSU2_TR(0x50aa49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50aa4c:{NFSU2_TR(0x50aa4c);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa4f:{NFSU2_TR(0x50aa4f);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa53:{NFSU2_TR(0x50aa53);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50aa56:{NFSU2_TR(0x50aa56);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa59:{NFSU2_TR(0x50aa59);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50aa5d:{NFSU2_TR(0x50aa5d);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa60:{NFSU2_TR(0x50aa60);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa63:{NFSU2_TR(0x50aa63);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa65:{NFSU2_TR(0x50aa65);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50aa67:{NFSU2_TR(0x50aa67);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa6a:{NFSU2_TR(0x50aa6a);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa6d:{NFSU2_TR(0x50aa6d);
{goto L50aba1;}
}
B50aa72:L50aa72:{c.instructions+=2;NFSU2_TR(0x50aa72);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50aa74:{NFSU2_TR(0x50aa74);
if(r1(R+518)){{goto L50abaf;}}
}
B50aa7a:L50aa7a:{c.instructions+=87;NFSU2_TR(0x50aa7a);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa7d:{NFSU2_TR(0x50aa7d);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50aa80:{NFSU2_TR(0x50aa80);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa83:{NFSU2_TR(0x50aa83);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50aa86:{NFSU2_TR(0x50aa86);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa89:{NFSU2_TR(0x50aa89);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50aa8c:{NFSU2_TR(0x50aa8c);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa93:{NFSU2_TR(0x50aa93);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50aa9a:{NFSU2_TR(0x50aa9a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50aa9c:{NFSU2_TR(0x50aa9c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa9e:{NFSU2_TR(0x50aa9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50aaa1:{NFSU2_TR(0x50aaa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50aaa5:{NFSU2_TR(0x50aaa5);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aaa8:{NFSU2_TR(0x50aaa8);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aaab:{NFSU2_TR(0x50aaab);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50aaae:{NFSU2_TR(0x50aaae);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50aab1:{NFSU2_TR(0x50aab1);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50aab3:{NFSU2_TR(0x50aab3);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50aab5:{NFSU2_TR(0x50aab5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aab7:{NFSU2_TR(0x50aab7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50aab9:{NFSU2_TR(0x50aab9);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50aabc:{NFSU2_TR(0x50aabc);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aabf:{NFSU2_TR(0x50aabf);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50aac1:{NFSU2_TR(0x50aac1);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50aac4:{NFSU2_TR(0x50aac4);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aac7:{NFSU2_TR(0x50aac7);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aaca:{NFSU2_TR(0x50aaca);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aacd:{NFSU2_TR(0x50aacd);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aacf:{NFSU2_TR(0x50aacf);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50aad2:{NFSU2_TR(0x50aad2);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aad4:{NFSU2_TR(0x50aad4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50aad6:{NFSU2_TR(0x50aad6);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50aad9:{NFSU2_TR(0x50aad9);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aadc:{NFSU2_TR(0x50aadc);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50aadf:{NFSU2_TR(0x50aadf);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aae2:{NFSU2_TR(0x50aae2);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aae5:{NFSU2_TR(0x50aae5);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50aae8:{NFSU2_TR(0x50aae8);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aaeb:{NFSU2_TR(0x50aaeb);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50aaee:{NFSU2_TR(0x50aaee);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50aaf0:{NFSU2_TR(0x50aaf0);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50aaf2:{NFSU2_TR(0x50aaf2);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aaf6:{NFSU2_TR(0x50aaf6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50aaf8:{NFSU2_TR(0x50aaf8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aafc:{NFSU2_TR(0x50aafc);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ab00:{NFSU2_TR(0x50ab00);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50ab03:{NFSU2_TR(0x50ab03);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ab07:{NFSU2_TR(0x50ab07);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50ab0a:{NFSU2_TR(0x50ab0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ab0d:{NFSU2_TR(0x50ab0d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50ab0f:{NFSU2_TR(0x50ab0f);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ab12:{NFSU2_TR(0x50ab12);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ab16:{NFSU2_TR(0x50ab16);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ab19:{NFSU2_TR(0x50ab19);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ab1c:{NFSU2_TR(0x50ab1c);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ab1f:{NFSU2_TR(0x50ab1f);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ab22:{NFSU2_TR(0x50ab22);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ab25:{NFSU2_TR(0x50ab25);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ab28:{NFSU2_TR(0x50ab28);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ab2f:{NFSU2_TR(0x50ab2f);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ab32:{NFSU2_TR(0x50ab32);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ab35:{NFSU2_TR(0x50ab35);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ab3c:{NFSU2_TR(0x50ab3c);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50ab41:{NFSU2_TR(0x50ab41);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50ab43:{NFSU2_TR(0x50ab43);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50ab45:{NFSU2_TR(0x50ab45);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ab49:{NFSU2_TR(0x50ab49);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50ab4b:{NFSU2_TR(0x50ab4b);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ab4f:{NFSU2_TR(0x50ab4f);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ab56:{NFSU2_TR(0x50ab56);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50ab58:{NFSU2_TR(0x50ab58);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ab5c:{NFSU2_TR(0x50ab5c);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50ab63:{NFSU2_TR(0x50ab63);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ab67:{NFSU2_TR(0x50ab67);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50ab6a:{NFSU2_TR(0x50ab6a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ab6e:{NFSU2_TR(0x50ab6e);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50ab71:{NFSU2_TR(0x50ab71);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ab75:{NFSU2_TR(0x50ab75);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50ab78:{NFSU2_TR(0x50ab78);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ab7f:{NFSU2_TR(0x50ab7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ab86:{NFSU2_TR(0x50ab86);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B50ab88:{NFSU2_TR(0x50ab88);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50ab8b:{NFSU2_TR(0x50ab8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ab8e:{NFSU2_TR(0x50ab8e);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ab95:{NFSU2_TR(0x50ab95);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ab9c:{NFSU2_TR(0x50ab9c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ab9e:{NFSU2_TR(0x50ab9e);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aba1:L50aba1:{c.instructions+=5;NFSU2_TR(0x50aba1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50aba2:{NFSU2_TR(0x50aba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50aba5:{NFSU2_TR(0x50aba5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B50aba8:{NFSU2_TR(0x50aba8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50abac:{NFSU2_TR(0x50abac);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50abaf:L50abaf:{c.instructions+=22;NFSU2_TR(0x50abaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50abb3:{NFSU2_TR(0x50abb3);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50abba:{NFSU2_TR(0x50abba);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50abc1:{NFSU2_TR(0x50abc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50abc5:{NFSU2_TR(0x50abc5);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B50abc7:{NFSU2_TR(0x50abc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50abcb:{NFSU2_TR(0x50abcb);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50abd2:{NFSU2_TR(0x50abd2);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B50abd4:{NFSU2_TR(0x50abd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50abd8:{NFSU2_TR(0x50abd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50abdc:{NFSU2_TR(0x50abdc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B50abdf:{NFSU2_TR(0x50abdf);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B50abe2:{NFSU2_TR(0x50abe2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50abe6:{NFSU2_TR(0x50abe6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50abea:{NFSU2_TR(0x50abea);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50abee:{NFSU2_TR(0x50abee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50abf1:{NFSU2_TR(0x50abf1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B50abf4:{NFSU2_TR(0x50abf4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x40ull))));
}
B50abf7:{NFSU2_TR(0x50abf7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B50abfa:{NFSU2_TR(0x50abfa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B50abfc:{NFSU2_TR(0x50abfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ac00:{NFSU2_TR(0x50ac00);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50a03cu);}goto L50a03c;}}
}
B50ac06:L50ac06:{c.instructions+=7;NFSU2_TR(0x50ac06);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50ac0d:{NFSU2_TR(0x50ac0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ac10:{NFSU2_TR(0x50ac10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50ac13:{NFSU2_TR(0x50ac13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50ac16:{NFSU2_TR(0x50ac16);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50ac1a:{NFSU2_TR(0x50ac1a);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B50ac1d:{NFSU2_TR(0x50ac1d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x50b000u,50b);}
}
B50ac23:L50ac23:{c.instructions+=25;NFSU2_TR(0x50ac23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B50ac2a:{NFSU2_TR(0x50ac2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ac2e:{NFSU2_TR(0x50ac2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50ac32:{NFSU2_TR(0x50ac32);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B50ac35:{NFSU2_TR(0x50ac35);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B50ac37:{NFSU2_TR(0x50ac37);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ac3b:{NFSU2_TR(0x50ac3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ac3e:{NFSU2_TR(0x50ac3e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B50ac40:{NFSU2_TR(0x50ac40);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ac44:{NFSU2_TR(0x50ac44);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B50ac47:{NFSU2_TR(0x50ac47);
__builtin_memmove((R+8),(R+28),4);
}
B50ac49:{NFSU2_TR(0x50ac49);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B50ac4d:{NFSU2_TR(0x50ac4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ac51:{NFSU2_TR(0x50ac51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50ac54:{NFSU2_TR(0x50ac54);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B50ac58:{NFSU2_TR(0x50ac58);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ac5c:{NFSU2_TR(0x50ac5c);
__builtin_memmove((R+0),(R+12),4);
}
B50ac5e:{NFSU2_TR(0x50ac5e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B50ac60:{NFSU2_TR(0x50ac60);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ac64:{NFSU2_TR(0x50ac64);
w4(R+0,u32(0xfffffffcull));
}
B50ac69:{NFSU2_TR(0x50ac69);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B50ac6c:{NFSU2_TR(0x50ac6c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B50ac6e:{NFSU2_TR(0x50ac6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50ac72:{NFSU2_TR(0x50ac72);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ac79:{NFSU2_TR(0x50ac79);
__builtin_memmove((R+16),(R+16),4);
}
B50ac80:L50ac80:{c.instructions+=7;NFSU2_TR(0x50ac80);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ac84:{NFSU2_TR(0x50ac84);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ac86:{NFSU2_TR(0x50ac86);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50ac89:{NFSU2_TR(0x50ac89);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50ac8b:{NFSU2_TR(0x50ac8b);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50ac8f:{NFSU2_TR(0x50ac8f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50ac92:{NFSU2_TR(0x50ac92);
if(r1(R+514)){{goto L50ae51;}}
}
B50ac98:L50ac98:{c.instructions+=2;NFSU2_TR(0x50ac98);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50ac9a:{NFSU2_TR(0x50ac9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50adf6;}}
}
B50aca0:L50aca0:{c.instructions+=105;NFSU2_TR(0x50aca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50aca3:{NFSU2_TR(0x50aca3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50aca7:{NFSU2_TR(0x50aca7);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50acaa:{NFSU2_TR(0x50acaa);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50acad:{NFSU2_TR(0x50acad);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50acb1:{NFSU2_TR(0x50acb1);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B50acb3:{NFSU2_TR(0x50acb3);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50acb6:{NFSU2_TR(0x50acb6);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50acba:{NFSU2_TR(0x50acba);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50acc1:{NFSU2_TR(0x50acc1);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50acc8:{NFSU2_TR(0x50acc8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50acca:{NFSU2_TR(0x50acca);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50accc:{NFSU2_TR(0x50accc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50accf:{NFSU2_TR(0x50accf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50acd3:{NFSU2_TR(0x50acd3);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50acd6:{NFSU2_TR(0x50acd6);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50acd9:{NFSU2_TR(0x50acd9);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50acdd:{NFSU2_TR(0x50acdd);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50ace0:{NFSU2_TR(0x50ace0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50ace2:{NFSU2_TR(0x50ace2);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50ace4:{NFSU2_TR(0x50ace4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ace6:{NFSU2_TR(0x50ace6);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50ace8:{NFSU2_TR(0x50ace8);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50aceb:{NFSU2_TR(0x50aceb);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50acee:{NFSU2_TR(0x50acee);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50acf0:{NFSU2_TR(0x50acf0);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50acf3:{NFSU2_TR(0x50acf3);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50acf6:{NFSU2_TR(0x50acf6);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50acfa:{NFSU2_TR(0x50acfa);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50acfe:{NFSU2_TR(0x50acfe);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ad00:{NFSU2_TR(0x50ad00);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50ad03:{NFSU2_TR(0x50ad03);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ad07:{NFSU2_TR(0x50ad07);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ad09:{NFSU2_TR(0x50ad09);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50ad0b:{NFSU2_TR(0x50ad0b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50ad0e:{NFSU2_TR(0x50ad0e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ad11:{NFSU2_TR(0x50ad11);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50ad14:{NFSU2_TR(0x50ad14);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ad17:{NFSU2_TR(0x50ad17);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ad1a:{NFSU2_TR(0x50ad1a);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ad1d:{NFSU2_TR(0x50ad1d);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ad21:{NFSU2_TR(0x50ad21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50ad24:{NFSU2_TR(0x50ad24);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ad28:{NFSU2_TR(0x50ad28);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50ad2a:{NFSU2_TR(0x50ad2a);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50ad2c:{NFSU2_TR(0x50ad2c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ad30:{NFSU2_TR(0x50ad30);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50ad32:{NFSU2_TR(0x50ad32);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ad36:{NFSU2_TR(0x50ad36);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ad3a:{NFSU2_TR(0x50ad3a);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50ad3d:{NFSU2_TR(0x50ad3d);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ad41:{NFSU2_TR(0x50ad41);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ad45:{NFSU2_TR(0x50ad45);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50ad49:{NFSU2_TR(0x50ad49);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50ad4b:{NFSU2_TR(0x50ad4b);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ad4e:{NFSU2_TR(0x50ad4e);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ad52:{NFSU2_TR(0x50ad52);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ad56:{NFSU2_TR(0x50ad56);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ad59:{NFSU2_TR(0x50ad59);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ad5d:{NFSU2_TR(0x50ad5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50ad61:{NFSU2_TR(0x50ad61);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ad64:{NFSU2_TR(0x50ad64);
{u32 ea_=u32(r4(R+28)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ad67:{NFSU2_TR(0x50ad67);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ad6b:{NFSU2_TR(0x50ad6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50ad6f:{NFSU2_TR(0x50ad6f);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ad72:{NFSU2_TR(0x50ad72);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B50ad75:{NFSU2_TR(0x50ad75);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ad79:{NFSU2_TR(0x50ad79);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ad7d:{NFSU2_TR(0x50ad7d);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ad81:{NFSU2_TR(0x50ad81);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B50ad83:{NFSU2_TR(0x50ad83);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50ad87:{NFSU2_TR(0x50ad87);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50ad8c:{NFSU2_TR(0x50ad8c);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ad90:{NFSU2_TR(0x50ad90);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50ad92:{NFSU2_TR(0x50ad92);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50ad94:{NFSU2_TR(0x50ad94);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ad98:{NFSU2_TR(0x50ad98);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50ad9a:{NFSU2_TR(0x50ad9a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ad9e:{NFSU2_TR(0x50ad9e);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ada2:{NFSU2_TR(0x50ada2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50ada4:{NFSU2_TR(0x50ada4);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ada8:{NFSU2_TR(0x50ada8);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50adac:{NFSU2_TR(0x50adac);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50adb0:{NFSU2_TR(0x50adb0);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50adb3:{NFSU2_TR(0x50adb3);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50adb7:{NFSU2_TR(0x50adb7);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50adbb:{NFSU2_TR(0x50adbb);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50adbf:{NFSU2_TR(0x50adbf);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50adc3:{NFSU2_TR(0x50adc3);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50adc7:{NFSU2_TR(0x50adc7);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50adcb:{NFSU2_TR(0x50adcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50adcf:{NFSU2_TR(0x50adcf);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B50add1:{NFSU2_TR(0x50add1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50add4:{NFSU2_TR(0x50add4);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50add8:{NFSU2_TR(0x50add8);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50addc:{NFSU2_TR(0x50addc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50adde:{NFSU2_TR(0x50adde);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ade0:{NFSU2_TR(0x50ade0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ade3:{NFSU2_TR(0x50ade3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50ade7:{NFSU2_TR(0x50ade7);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50adea:{NFSU2_TR(0x50adea);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B50adeb:{NFSU2_TR(0x50adeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50adef:{NFSU2_TR(0x50adef);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50adf1:{NFSU2_TR(0x50adf1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50adf4:{NFSU2_TR(0x50adf4);
{goto L50adfa;}
}
B50adf6:L50adf6:{c.instructions+=1;NFSU2_TR(0x50adf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50adfa:L50adfa:{c.instructions+=28;NFSU2_TR(0x50adfa);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50adfc:{NFSU2_TR(0x50adfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50adff:{NFSU2_TR(0x50adff);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ae02:{NFSU2_TR(0x50ae02);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ae05:{NFSU2_TR(0x50ae05);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ae09:{NFSU2_TR(0x50ae09);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae0b:{NFSU2_TR(0x50ae0b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50ae0d:{NFSU2_TR(0x50ae0d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae10:{NFSU2_TR(0x50ae10);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae13:{NFSU2_TR(0x50ae13);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ae17:{NFSU2_TR(0x50ae17);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ae1a:{NFSU2_TR(0x50ae1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ae1e:{NFSU2_TR(0x50ae1e);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae21:{NFSU2_TR(0x50ae21);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae25:{NFSU2_TR(0x50ae25);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ae29:{NFSU2_TR(0x50ae29);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50ae2d:{NFSU2_TR(0x50ae2d);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ae30:{NFSU2_TR(0x50ae30);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ae34:{NFSU2_TR(0x50ae34);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ae37:{NFSU2_TR(0x50ae37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B50ae39:{NFSU2_TR(0x50ae39);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ae3c:{NFSU2_TR(0x50ae3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ae40:{NFSU2_TR(0x50ae40);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae42:{NFSU2_TR(0x50ae42);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50ae44:{NFSU2_TR(0x50ae44);
__builtin_memmove((R+0),(R+8),4);
}
B50ae46:{NFSU2_TR(0x50ae46);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae49:{NFSU2_TR(0x50ae49);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae4c:{NFSU2_TR(0x50ae4c);
{goto L50afb3;}
}
B50ae51:L50ae51:{c.instructions+=2;NFSU2_TR(0x50ae51);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50ae53:{NFSU2_TR(0x50ae53);
if(r1(R+518)){{goto L50afc9;}}
}
B50ae59:L50ae59:{c.instructions+=98;NFSU2_TR(0x50ae59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ae5c:{NFSU2_TR(0x50ae5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50ae60:{NFSU2_TR(0x50ae60);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ae63:{NFSU2_TR(0x50ae63);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ae66:{NFSU2_TR(0x50ae66);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ae6a:{NFSU2_TR(0x50ae6a);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B50ae6c:{NFSU2_TR(0x50ae6c);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ae6f:{NFSU2_TR(0x50ae6f);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ae73:{NFSU2_TR(0x50ae73);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae7a:{NFSU2_TR(0x50ae7a);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50ae81:{NFSU2_TR(0x50ae81);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50ae83:{NFSU2_TR(0x50ae83);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae85:{NFSU2_TR(0x50ae85);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ae88:{NFSU2_TR(0x50ae88);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50ae8c:{NFSU2_TR(0x50ae8c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae8f:{NFSU2_TR(0x50ae8f);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ae92:{NFSU2_TR(0x50ae92);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ae96:{NFSU2_TR(0x50ae96);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50ae99:{NFSU2_TR(0x50ae99);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50ae9b:{NFSU2_TR(0x50ae9b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50ae9d:{NFSU2_TR(0x50ae9d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae9f:{NFSU2_TR(0x50ae9f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50aea1:{NFSU2_TR(0x50aea1);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50aea4:{NFSU2_TR(0x50aea4);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aea7:{NFSU2_TR(0x50aea7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50aea9:{NFSU2_TR(0x50aea9);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50aeac:{NFSU2_TR(0x50aeac);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aeaf:{NFSU2_TR(0x50aeaf);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aeb3:{NFSU2_TR(0x50aeb3);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aeb7:{NFSU2_TR(0x50aeb7);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aeba:{NFSU2_TR(0x50aeba);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50aebe:{NFSU2_TR(0x50aebe);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50aec0:{NFSU2_TR(0x50aec0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aec2:{NFSU2_TR(0x50aec2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50aec4:{NFSU2_TR(0x50aec4);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50aec7:{NFSU2_TR(0x50aec7);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aeca:{NFSU2_TR(0x50aeca);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50aecd:{NFSU2_TR(0x50aecd);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aed0:{NFSU2_TR(0x50aed0);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aed3:{NFSU2_TR(0x50aed3);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50aed6:{NFSU2_TR(0x50aed6);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aeda:{NFSU2_TR(0x50aeda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50aedd:{NFSU2_TR(0x50aedd);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50aee1:{NFSU2_TR(0x50aee1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50aee3:{NFSU2_TR(0x50aee3);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50aee5:{NFSU2_TR(0x50aee5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aee9:{NFSU2_TR(0x50aee9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50aeeb:{NFSU2_TR(0x50aeeb);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aeef:{NFSU2_TR(0x50aeef);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aef3:{NFSU2_TR(0x50aef3);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50aef6:{NFSU2_TR(0x50aef6);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aefa:{NFSU2_TR(0x50aefa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50aefe:{NFSU2_TR(0x50aefe);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50af02:{NFSU2_TR(0x50af02);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50af04:{NFSU2_TR(0x50af04);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50af07:{NFSU2_TR(0x50af07);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50af0b:{NFSU2_TR(0x50af0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50af0f:{NFSU2_TR(0x50af0f);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50af12:{NFSU2_TR(0x50af12);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50af16:{NFSU2_TR(0x50af16);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50af1a:{NFSU2_TR(0x50af1a);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50af1d:{NFSU2_TR(0x50af1d);
{u32 ea_=u32(r4(R+0)+r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50af20:{NFSU2_TR(0x50af20);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50af24:{NFSU2_TR(0x50af24);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50af28:{NFSU2_TR(0x50af28);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50af2b:{NFSU2_TR(0x50af2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50af2f:{NFSU2_TR(0x50af2f);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50af33:{NFSU2_TR(0x50af33);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50af3a:{NFSU2_TR(0x50af3a);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50af3e:{NFSU2_TR(0x50af3e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B50af40:{NFSU2_TR(0x50af40);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50af45:{NFSU2_TR(0x50af45);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50af4c:{NFSU2_TR(0x50af4c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50af4e:{NFSU2_TR(0x50af4e);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50af50:{NFSU2_TR(0x50af50);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50af54:{NFSU2_TR(0x50af54);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50af56:{NFSU2_TR(0x50af56);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50af5a:{NFSU2_TR(0x50af5a);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50af61:{NFSU2_TR(0x50af61);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50af63:{NFSU2_TR(0x50af63);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50af67:{NFSU2_TR(0x50af67);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50af6e:{NFSU2_TR(0x50af6e);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50af72:{NFSU2_TR(0x50af72);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50af75:{NFSU2_TR(0x50af75);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50af79:{NFSU2_TR(0x50af79);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50af7d:{NFSU2_TR(0x50af7d);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50af81:{NFSU2_TR(0x50af81);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50af85:{NFSU2_TR(0x50af85);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50af8c:{NFSU2_TR(0x50af8c);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50af90:{NFSU2_TR(0x50af90);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50af97:{NFSU2_TR(0x50af97);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B50af99:{NFSU2_TR(0x50af99);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50af9c:{NFSU2_TR(0x50af9c);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50afa3:{NFSU2_TR(0x50afa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50afaa:{NFSU2_TR(0x50afaa);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50afac:{NFSU2_TR(0x50afac);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50afae:{NFSU2_TR(0x50afae);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50afb1:{NFSU2_TR(0x50afb1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50afb3:L50afb3:{c.instructions+=7;NFSU2_TR(0x50afb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50afb6:{NFSU2_TR(0x50afb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50afba:{NFSU2_TR(0x50afba);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B50afbd:{NFSU2_TR(0x50afbd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50afbe:{NFSU2_TR(0x50afbe);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50afc1:{NFSU2_TR(0x50afc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50afc5:{NFSU2_TR(0x50afc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50afc9:L50afc9:{c.instructions+=12;NFSU2_TR(0x50afc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50afcd:{NFSU2_TR(0x50afcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B50afd4:{NFSU2_TR(0x50afd4);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50afdb:{NFSU2_TR(0x50afdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50afdf:{NFSU2_TR(0x50afdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50afe3:{NFSU2_TR(0x50afe3);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B50afe5:{NFSU2_TR(0x50afe5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B50afe9:{NFSU2_TR(0x50afe9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B50afee:{NFSU2_TR(0x50afee);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B50aff3:{NFSU2_TR(0x50aff3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50aff7:{NFSU2_TR(0x50aff7);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B50affa:{NFSU2_TR(0x50affa);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50ac80u);}goto L50ac80;}}
TAIL_STATIC(0x50b000u,50b);
}
XIT:NFSU2_TR_EXIT(0x50a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
