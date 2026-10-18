#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5bc(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x48a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x48a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_48a(u8* __restrict R,Cpu& c);
u32 page_48a(Cpu& c){return body_48a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_48a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x48a000:goto L48a000;
case 0x48a002:c.instructions+=22;goto B48a002;
case 0x48a004:c.instructions+=21;goto B48a004;
case 0x48a006:c.instructions+=20;goto B48a006;
case 0x48a008:c.instructions+=19;goto B48a008;
case 0x48a00a:c.instructions+=18;goto B48a00a;
case 0x48a00c:c.instructions+=17;goto B48a00c;
case 0x48a00e:c.instructions+=16;goto B48a00e;
case 0x48a010:c.instructions+=15;goto B48a010;
case 0x48a012:c.instructions+=14;goto B48a012;
case 0x48a014:c.instructions+=13;goto B48a014;
case 0x48a016:c.instructions+=12;goto B48a016;
case 0x48a018:c.instructions+=11;goto B48a018;
case 0x48a01c:c.instructions+=10;goto B48a01c;
case 0x48a01e:c.instructions+=9;goto B48a01e;
case 0x48a020:c.instructions+=8;goto B48a020;
case 0x48a022:c.instructions+=7;goto B48a022;
case 0x48a024:c.instructions+=6;goto B48a024;
case 0x48a026:c.instructions+=5;goto B48a026;
case 0x48a02a:c.instructions+=4;goto B48a02a;
case 0x48a02c:c.instructions+=3;goto B48a02c;
case 0x48a02e:c.instructions+=2;goto B48a02e;
case 0x48a031:c.instructions+=1;goto B48a031;
case 0x48a033:goto L48a033;
case 0x48a035:c.instructions+=1;goto B48a035;
case 0x48a039:goto L48a039;
case 0x48a03c:c.instructions+=54;goto B48a03c;
case 0x48a042:c.instructions+=53;goto B48a042;
case 0x48a048:c.instructions+=52;goto B48a048;
case 0x48a04c:c.instructions+=51;goto B48a04c;
case 0x48a04f:c.instructions+=50;goto B48a04f;
case 0x48a052:c.instructions+=49;goto B48a052;
case 0x48a055:c.instructions+=48;goto B48a055;
case 0x48a059:c.instructions+=47;goto B48a059;
case 0x48a05c:c.instructions+=46;goto B48a05c;
case 0x48a05f:c.instructions+=45;goto B48a05f;
case 0x48a063:c.instructions+=44;goto B48a063;
case 0x48a066:c.instructions+=43;goto B48a066;
case 0x48a06a:c.instructions+=42;goto B48a06a;
case 0x48a06d:c.instructions+=41;goto B48a06d;
case 0x48a071:c.instructions+=40;goto B48a071;
case 0x48a075:c.instructions+=39;goto B48a075;
case 0x48a079:c.instructions+=38;goto B48a079;
case 0x48a07d:c.instructions+=37;goto B48a07d;
case 0x48a081:c.instructions+=36;goto B48a081;
case 0x48a083:c.instructions+=35;goto B48a083;
case 0x48a087:c.instructions+=34;goto B48a087;
case 0x48a08b:c.instructions+=33;goto B48a08b;
case 0x48a08d:c.instructions+=32;goto B48a08d;
case 0x48a091:c.instructions+=31;goto B48a091;
case 0x48a095:c.instructions+=30;goto B48a095;
case 0x48a097:c.instructions+=29;goto B48a097;
case 0x48a09b:c.instructions+=28;goto B48a09b;
case 0x48a09f:c.instructions+=27;goto B48a09f;
case 0x48a0a1:c.instructions+=26;goto B48a0a1;
case 0x48a0a3:c.instructions+=25;goto B48a0a3;
case 0x48a0a5:c.instructions+=24;goto B48a0a5;
case 0x48a0a7:c.instructions+=23;goto B48a0a7;
case 0x48a0a9:c.instructions+=22;goto B48a0a9;
case 0x48a0ab:c.instructions+=21;goto B48a0ab;
case 0x48a0ad:c.instructions+=20;goto B48a0ad;
case 0x48a0af:c.instructions+=19;goto B48a0af;
case 0x48a0b1:c.instructions+=18;goto B48a0b1;
case 0x48a0b3:c.instructions+=17;goto B48a0b3;
case 0x48a0b5:c.instructions+=16;goto B48a0b5;
case 0x48a0b7:c.instructions+=15;goto B48a0b7;
case 0x48a0b9:c.instructions+=14;goto B48a0b9;
case 0x48a0bb:c.instructions+=13;goto B48a0bb;
case 0x48a0bd:c.instructions+=12;goto B48a0bd;
case 0x48a0bf:c.instructions+=11;goto B48a0bf;
case 0x48a0c3:c.instructions+=10;goto B48a0c3;
case 0x48a0c5:c.instructions+=9;goto B48a0c5;
case 0x48a0c7:c.instructions+=8;goto B48a0c7;
case 0x48a0c9:c.instructions+=7;goto B48a0c9;
case 0x48a0cb:c.instructions+=6;goto B48a0cb;
case 0x48a0cd:c.instructions+=5;goto B48a0cd;
case 0x48a0d1:c.instructions+=4;goto B48a0d1;
case 0x48a0d3:c.instructions+=3;goto B48a0d3;
case 0x48a0d5:c.instructions+=2;goto B48a0d5;
case 0x48a0d8:c.instructions+=1;goto B48a0d8;
case 0x48a0da:goto L48a0da;
case 0x48a0dc:c.instructions+=1;goto B48a0dc;
case 0x48a0e0:goto L48a0e0;
case 0x48a0e2:c.instructions+=4;goto B48a0e2;
case 0x48a0e8:c.instructions+=3;goto B48a0e8;
case 0x48a0ea:c.instructions+=2;goto B48a0ea;
case 0x48a0ed:c.instructions+=1;goto B48a0ed;
case 0x48a0ef:goto L48a0ef;
case 0x48a0f3:c.instructions+=3;goto B48a0f3;
case 0x48a0f5:c.instructions+=2;goto B48a0f5;
case 0x48a0fa:c.instructions+=1;goto B48a0fa;
case 0x48a100:goto L48a100;
case 0x48a102:c.instructions+=32;goto B48a102;
case 0x48a105:c.instructions+=31;goto B48a105;
case 0x48a106:c.instructions+=30;goto B48a106;
case 0x48a109:c.instructions+=29;goto B48a109;
case 0x48a10c:c.instructions+=28;goto B48a10c;
case 0x48a10e:c.instructions+=27;goto B48a10e;
case 0x48a111:c.instructions+=26;goto B48a111;
case 0x48a114:c.instructions+=25;goto B48a114;
case 0x48a116:c.instructions+=24;goto B48a116;
case 0x48a119:c.instructions+=23;goto B48a119;
case 0x48a11c:c.instructions+=22;goto B48a11c;
case 0x48a11e:c.instructions+=21;goto B48a11e;
case 0x48a121:c.instructions+=20;goto B48a121;
case 0x48a124:c.instructions+=19;goto B48a124;
case 0x48a126:c.instructions+=18;goto B48a126;
case 0x48a129:c.instructions+=17;goto B48a129;
case 0x48a12c:c.instructions+=16;goto B48a12c;
case 0x48a12e:c.instructions+=15;goto B48a12e;
case 0x48a131:c.instructions+=14;goto B48a131;
case 0x48a134:c.instructions+=13;goto B48a134;
case 0x48a136:c.instructions+=12;goto B48a136;
case 0x48a139:c.instructions+=11;goto B48a139;
case 0x48a13c:c.instructions+=10;goto B48a13c;
case 0x48a13e:c.instructions+=9;goto B48a13e;
case 0x48a141:c.instructions+=8;goto B48a141;
case 0x48a144:c.instructions+=7;goto B48a144;
case 0x48a146:c.instructions+=6;goto B48a146;
case 0x48a149:c.instructions+=5;goto B48a149;
case 0x48a14c:c.instructions+=4;goto B48a14c;
case 0x48a14e:c.instructions+=3;goto B48a14e;
case 0x48a151:c.instructions+=2;goto B48a151;
case 0x48a154:c.instructions+=1;goto B48a154;
case 0x48a156:goto L48a156;
case 0x48a158:c.instructions+=3;goto B48a158;
case 0x48a15c:c.instructions+=2;goto B48a15c;
case 0x48a15e:c.instructions+=1;goto B48a15e;
case 0x48a164:goto L48a164;
case 0x48a167:c.instructions+=55;goto B48a167;
case 0x48a16d:c.instructions+=54;goto B48a16d;
case 0x48a173:c.instructions+=53;goto B48a173;
case 0x48a176:c.instructions+=52;goto B48a176;
case 0x48a179:c.instructions+=51;goto B48a179;
case 0x48a17d:c.instructions+=50;goto B48a17d;
case 0x48a180:c.instructions+=49;goto B48a180;
case 0x48a183:c.instructions+=48;goto B48a183;
case 0x48a186:c.instructions+=47;goto B48a186;
case 0x48a18a:c.instructions+=46;goto B48a18a;
case 0x48a18d:c.instructions+=45;goto B48a18d;
case 0x48a191:c.instructions+=44;goto B48a191;
case 0x48a194:c.instructions+=43;goto B48a194;
case 0x48a198:c.instructions+=42;goto B48a198;
case 0x48a19c:c.instructions+=41;goto B48a19c;
case 0x48a1a0:c.instructions+=40;goto B48a1a0;
case 0x48a1a4:c.instructions+=39;goto B48a1a4;
case 0x48a1a8:c.instructions+=38;goto B48a1a8;
case 0x48a1aa:c.instructions+=37;goto B48a1aa;
case 0x48a1ae:c.instructions+=36;goto B48a1ae;
case 0x48a1b2:c.instructions+=35;goto B48a1b2;
case 0x48a1b4:c.instructions+=34;goto B48a1b4;
case 0x48a1b8:c.instructions+=33;goto B48a1b8;
case 0x48a1bc:c.instructions+=32;goto B48a1bc;
case 0x48a1be:c.instructions+=31;goto B48a1be;
case 0x48a1c0:c.instructions+=30;goto B48a1c0;
case 0x48a1c2:c.instructions+=29;goto B48a1c2;
case 0x48a1c4:c.instructions+=28;goto B48a1c4;
case 0x48a1c6:c.instructions+=27;goto B48a1c6;
case 0x48a1c8:c.instructions+=26;goto B48a1c8;
case 0x48a1ca:c.instructions+=25;goto B48a1ca;
case 0x48a1cc:c.instructions+=24;goto B48a1cc;
case 0x48a1ce:c.instructions+=23;goto B48a1ce;
case 0x48a1d0:c.instructions+=22;goto B48a1d0;
case 0x48a1d2:c.instructions+=21;goto B48a1d2;
case 0x48a1d4:c.instructions+=20;goto B48a1d4;
case 0x48a1d6:c.instructions+=19;goto B48a1d6;
case 0x48a1d8:c.instructions+=18;goto B48a1d8;
case 0x48a1da:c.instructions+=17;goto B48a1da;
case 0x48a1dc:c.instructions+=16;goto B48a1dc;
case 0x48a1de:c.instructions+=15;goto B48a1de;
case 0x48a1e0:c.instructions+=14;goto B48a1e0;
case 0x48a1e2:c.instructions+=13;goto B48a1e2;
case 0x48a1e4:c.instructions+=12;goto B48a1e4;
case 0x48a1e8:c.instructions+=11;goto B48a1e8;
case 0x48a1ea:c.instructions+=10;goto B48a1ea;
case 0x48a1ec:c.instructions+=9;goto B48a1ec;
case 0x48a1ee:c.instructions+=8;goto B48a1ee;
case 0x48a1f0:c.instructions+=7;goto B48a1f0;
case 0x48a1f2:c.instructions+=6;goto B48a1f2;
case 0x48a1f4:c.instructions+=5;goto B48a1f4;
case 0x48a1f8:c.instructions+=4;goto B48a1f8;
case 0x48a1fe:c.instructions+=3;goto B48a1fe;
case 0x48a200:c.instructions+=2;goto B48a200;
case 0x48a203:c.instructions+=1;goto B48a203;
case 0x48a205:goto L48a205;
case 0x48a209:c.instructions+=31;goto B48a209;
case 0x48a20b:c.instructions+=30;goto B48a20b;
case 0x48a20e:c.instructions+=29;goto B48a20e;
case 0x48a211:c.instructions+=28;goto B48a211;
case 0x48a213:c.instructions+=27;goto B48a213;
case 0x48a216:c.instructions+=26;goto B48a216;
case 0x48a219:c.instructions+=25;goto B48a219;
case 0x48a21b:c.instructions+=24;goto B48a21b;
case 0x48a21e:c.instructions+=23;goto B48a21e;
case 0x48a221:c.instructions+=22;goto B48a221;
case 0x48a223:c.instructions+=21;goto B48a223;
case 0x48a226:c.instructions+=20;goto B48a226;
case 0x48a229:c.instructions+=19;goto B48a229;
case 0x48a22b:c.instructions+=18;goto B48a22b;
case 0x48a22e:c.instructions+=17;goto B48a22e;
case 0x48a231:c.instructions+=16;goto B48a231;
case 0x48a233:c.instructions+=15;goto B48a233;
case 0x48a236:c.instructions+=14;goto B48a236;
case 0x48a239:c.instructions+=13;goto B48a239;
case 0x48a23b:c.instructions+=12;goto B48a23b;
case 0x48a23e:c.instructions+=11;goto B48a23e;
case 0x48a241:c.instructions+=10;goto B48a241;
case 0x48a243:c.instructions+=9;goto B48a243;
case 0x48a246:c.instructions+=8;goto B48a246;
case 0x48a249:c.instructions+=7;goto B48a249;
case 0x48a24b:c.instructions+=6;goto B48a24b;
case 0x48a251:c.instructions+=5;goto B48a251;
case 0x48a257:c.instructions+=4;goto B48a257;
case 0x48a25d:c.instructions+=3;goto B48a25d;
case 0x48a263:c.instructions+=2;goto B48a263;
case 0x48a266:c.instructions+=1;goto B48a266;
case 0x48a269:goto L48a269;
case 0x48a26b:goto L48a26b;
case 0x48a26e:c.instructions+=1;goto B48a26e;
case 0x48a280:goto L48a280;
case 0x48a284:c.instructions+=2;goto B48a284;
case 0x48a28a:c.instructions+=1;goto B48a28a;
case 0x48a28c:goto L48a28c;
case 0x48a28f:c.instructions+=7;goto B48a28f;
case 0x48a294:c.instructions+=6;goto B48a294;
case 0x48a299:c.instructions+=5;goto B48a299;
case 0x48a29c:c.instructions+=4;goto B48a29c;
case 0x48a29f:c.instructions+=3;goto B48a29f;
case 0x48a2a5:c.instructions+=2;goto B48a2a5;
case 0x48a2aa:c.instructions+=1;goto B48a2aa;
case 0x48a2ab:goto L48a2ab;
case 0x48a2ad:c.instructions+=1;goto B48a2ad;
case 0x48a2b0:goto L48a2b0;
case 0x48a2b4:c.instructions+=4;goto B48a2b4;
case 0x48a2b6:c.instructions+=3;goto B48a2b6;
case 0x48a2b8:c.instructions+=2;goto B48a2b8;
case 0x48a2be:c.instructions+=1;goto B48a2be;
case 0x48a2c0:goto L48a2c0;
case 0x48a2c5:c.instructions+=2;goto B48a2c5;
case 0x48a2ca:c.instructions+=1;goto B48a2ca;
case 0x48a2cf:goto L48a2cf;
case 0x48a2d0:goto L48a2d0;
case 0x48a2d1:c.instructions+=4;goto B48a2d1;
case 0x48a2d2:c.instructions+=3;goto B48a2d2;
case 0x48a2d8:c.instructions+=2;goto B48a2d8;
case 0x48a2da:c.instructions+=1;goto B48a2da;
case 0x48a2dc:goto L48a2dc;
case 0x48a2e2:c.instructions+=2;goto B48a2e2;
case 0x48a2e4:c.instructions+=1;goto B48a2e4;
case 0x48a2e6:goto L48a2e6;
case 0x48a2e8:c.instructions+=2;goto B48a2e8;
case 0x48a2ea:c.instructions+=1;goto B48a2ea;
case 0x48a2ec:goto L48a2ec;
case 0x48a2f0:c.instructions+=1;goto B48a2f0;
case 0x48a2f2:goto L48a2f2;
case 0x48a2f4:c.instructions+=1;goto B48a2f4;
case 0x48a2f6:goto L48a2f6;
case 0x48a2f7:c.instructions+=3;goto B48a2f7;
case 0x48a2fa:c.instructions+=2;goto B48a2fa;
case 0x48a2fc:c.instructions+=1;goto B48a2fc;
case 0x48a2fe:goto L48a2fe;
case 0x48a2ff:c.instructions+=3;goto B48a2ff;
case 0x48a300:c.instructions+=2;goto B48a300;
case 0x48a305:c.instructions+=1;goto B48a305;
case 0x48a306:goto L48a306;
case 0x48a309:c.instructions+=4;goto B48a309;
case 0x48a30b:c.instructions+=3;goto B48a30b;
case 0x48a30c:c.instructions+=2;goto B48a30c;
case 0x48a30d:c.instructions+=1;goto B48a30d;
case 0x48a310:goto L48a310;
case 0x48a314:c.instructions+=3;goto B48a314;
case 0x48a317:c.instructions+=2;goto B48a317;
case 0x48a31d:c.instructions+=1;goto B48a31d;
case 0x48a322:goto L48a322;
case 0x48a324:c.instructions+=13;goto B48a324;
case 0x48a329:c.instructions+=12;goto B48a329;
case 0x48a32b:c.instructions+=11;goto B48a32b;
case 0x48a32d:c.instructions+=10;goto B48a32d;
case 0x48a330:c.instructions+=9;goto B48a330;
case 0x48a332:c.instructions+=8;goto B48a332;
case 0x48a335:c.instructions+=7;goto B48a335;
case 0x48a337:c.instructions+=6;goto B48a337;
case 0x48a338:c.instructions+=5;goto B48a338;
case 0x48a33c:c.instructions+=4;goto B48a33c;
case 0x48a33d:c.instructions+=3;goto B48a33d;
case 0x48a341:c.instructions+=2;goto B48a341;
case 0x48a342:c.instructions+=1;goto B48a342;
case 0x48a347:goto L48a347;
case 0x48a34b:c.instructions+=2;goto B48a34b;
case 0x48a351:c.instructions+=1;goto B48a351;
case 0x48a356:goto L48a356;
case 0x48a358:c.instructions+=13;goto B48a358;
case 0x48a35d:c.instructions+=12;goto B48a35d;
case 0x48a35f:c.instructions+=11;goto B48a35f;
case 0x48a361:c.instructions+=10;goto B48a361;
case 0x48a364:c.instructions+=9;goto B48a364;
case 0x48a366:c.instructions+=8;goto B48a366;
case 0x48a369:c.instructions+=7;goto B48a369;
case 0x48a36b:c.instructions+=6;goto B48a36b;
case 0x48a36c:c.instructions+=5;goto B48a36c;
case 0x48a370:c.instructions+=4;goto B48a370;
case 0x48a371:c.instructions+=3;goto B48a371;
case 0x48a375:c.instructions+=2;goto B48a375;
case 0x48a376:c.instructions+=1;goto B48a376;
case 0x48a37b:goto L48a37b;
case 0x48a37f:c.instructions+=13;goto B48a37f;
case 0x48a383:c.instructions+=12;goto B48a383;
case 0x48a387:c.instructions+=11;goto B48a387;
case 0x48a38b:c.instructions+=10;goto B48a38b;
case 0x48a38d:c.instructions+=9;goto B48a38d;
case 0x48a391:c.instructions+=8;goto B48a391;
case 0x48a395:c.instructions+=7;goto B48a395;
case 0x48a399:c.instructions+=6;goto B48a399;
case 0x48a39c:c.instructions+=5;goto B48a39c;
case 0x48a3a0:c.instructions+=4;goto B48a3a0;
case 0x48a3a4:c.instructions+=3;goto B48a3a4;
case 0x48a3a7:c.instructions+=2;goto B48a3a7;
case 0x48a3aa:c.instructions+=1;goto B48a3aa;
case 0x48a3b0:goto L48a3b0;
case 0x48a3b1:c.instructions+=6;goto B48a3b1;
case 0x48a3b2:c.instructions+=5;goto B48a3b2;
case 0x48a3b6:c.instructions+=4;goto B48a3b6;
case 0x48a3b8:c.instructions+=3;goto B48a3b8;
case 0x48a3b9:c.instructions+=2;goto B48a3b9;
case 0x48a3ba:c.instructions+=1;goto B48a3ba;
case 0x48a3bf:goto L48a3bf;
case 0x48a3c2:c.instructions+=4;goto B48a3c2;
case 0x48a3c3:c.instructions+=3;goto B48a3c3;
case 0x48a3c6:c.instructions+=2;goto B48a3c6;
case 0x48a3c7:c.instructions+=1;goto B48a3c7;
case 0x48a3cc:goto L48a3cc;
case 0x48a3d2:c.instructions+=4;goto B48a3d2;
case 0x48a3d3:c.instructions+=3;goto B48a3d3;
case 0x48a3d9:c.instructions+=2;goto B48a3d9;
case 0x48a3da:c.instructions+=1;goto B48a3da;
case 0x48a3df:goto L48a3df;
case 0x48a3e5:c.instructions+=23;goto B48a3e5;
case 0x48a3eb:c.instructions+=22;goto B48a3eb;
case 0x48a3f1:c.instructions+=21;goto B48a3f1;
case 0x48a3f7:c.instructions+=20;goto B48a3f7;
case 0x48a3f9:c.instructions+=19;goto B48a3f9;
case 0x48a3ff:c.instructions+=18;goto B48a3ff;
case 0x48a405:c.instructions+=17;goto B48a405;
case 0x48a407:c.instructions+=16;goto B48a407;
case 0x48a40d:c.instructions+=15;goto B48a40d;
case 0x48a413:c.instructions+=14;goto B48a413;
case 0x48a417:c.instructions+=13;goto B48a417;
case 0x48a41d:c.instructions+=12;goto B48a41d;
case 0x48a423:c.instructions+=11;goto B48a423;
case 0x48a429:c.instructions+=10;goto B48a429;
case 0x48a42f:c.instructions+=9;goto B48a42f;
case 0x48a435:c.instructions+=8;goto B48a435;
case 0x48a43b:c.instructions+=7;goto B48a43b;
case 0x48a441:c.instructions+=6;goto B48a441;
case 0x48a447:c.instructions+=5;goto B48a447;
case 0x48a448:c.instructions+=4;goto B48a448;
case 0x48a44e:c.instructions+=3;goto B48a44e;
case 0x48a44f:c.instructions+=2;goto B48a44f;
case 0x48a455:c.instructions+=1;goto B48a455;
case 0x48a45a:goto L48a45a;
case 0x48a460:c.instructions+=114;goto B48a460;
case 0x48a466:c.instructions+=113;goto B48a466;
case 0x48a46c:c.instructions+=112;goto B48a46c;
case 0x48a472:c.instructions+=111;goto B48a472;
case 0x48a474:c.instructions+=110;goto B48a474;
case 0x48a47a:c.instructions+=109;goto B48a47a;
case 0x48a480:c.instructions+=108;goto B48a480;
case 0x48a482:c.instructions+=107;goto B48a482;
case 0x48a488:c.instructions+=106;goto B48a488;
case 0x48a48e:c.instructions+=105;goto B48a48e;
case 0x48a494:c.instructions+=104;goto B48a494;
case 0x48a49a:c.instructions+=103;goto B48a49a;
case 0x48a4a0:c.instructions+=102;goto B48a4a0;
case 0x48a4a4:c.instructions+=101;goto B48a4a4;
case 0x48a4aa:c.instructions+=100;goto B48a4aa;
case 0x48a4ac:c.instructions+=99;goto B48a4ac;
case 0x48a4b2:c.instructions+=98;goto B48a4b2;
case 0x48a4b8:c.instructions+=97;goto B48a4b8;
case 0x48a4ba:c.instructions+=96;goto B48a4ba;
case 0x48a4c0:c.instructions+=95;goto B48a4c0;
case 0x48a4c6:c.instructions+=94;goto B48a4c6;
case 0x48a4cc:c.instructions+=93;goto B48a4cc;
case 0x48a4d2:c.instructions+=92;goto B48a4d2;
case 0x48a4d8:c.instructions+=91;goto B48a4d8;
case 0x48a4dc:c.instructions+=90;goto B48a4dc;
case 0x48a4e2:c.instructions+=89;goto B48a4e2;
case 0x48a4e4:c.instructions+=88;goto B48a4e4;
case 0x48a4ea:c.instructions+=87;goto B48a4ea;
case 0x48a4f0:c.instructions+=86;goto B48a4f0;
case 0x48a4f2:c.instructions+=85;goto B48a4f2;
case 0x48a4f8:c.instructions+=84;goto B48a4f8;
case 0x48a4fe:c.instructions+=83;goto B48a4fe;
case 0x48a504:c.instructions+=82;goto B48a504;
case 0x48a50a:c.instructions+=81;goto B48a50a;
case 0x48a510:c.instructions+=80;goto B48a510;
case 0x48a514:c.instructions+=79;goto B48a514;
case 0x48a51a:c.instructions+=78;goto B48a51a;
case 0x48a51d:c.instructions+=77;goto B48a51d;
case 0x48a521:c.instructions+=76;goto B48a521;
case 0x48a527:c.instructions+=75;goto B48a527;
case 0x48a529:c.instructions+=74;goto B48a529;
case 0x48a52b:c.instructions+=73;goto B48a52b;
case 0x48a531:c.instructions+=72;goto B48a531;
case 0x48a537:c.instructions+=71;goto B48a537;
case 0x48a53d:c.instructions+=70;goto B48a53d;
case 0x48a543:c.instructions+=69;goto B48a543;
case 0x48a549:c.instructions+=68;goto B48a549;
case 0x48a54f:c.instructions+=67;goto B48a54f;
case 0x48a555:c.instructions+=66;goto B48a555;
case 0x48a55b:c.instructions+=65;goto B48a55b;
case 0x48a55d:c.instructions+=64;goto B48a55d;
case 0x48a55f:c.instructions+=63;goto B48a55f;
case 0x48a565:c.instructions+=62;goto B48a565;
case 0x48a56b:c.instructions+=61;goto B48a56b;
case 0x48a56f:c.instructions+=60;goto B48a56f;
case 0x48a575:c.instructions+=59;goto B48a575;
case 0x48a57b:c.instructions+=58;goto B48a57b;
case 0x48a581:c.instructions+=57;goto B48a581;
case 0x48a587:c.instructions+=56;goto B48a587;
case 0x48a58d:c.instructions+=55;goto B48a58d;
case 0x48a593:c.instructions+=54;goto B48a593;
case 0x48a595:c.instructions+=53;goto B48a595;
case 0x48a597:c.instructions+=52;goto B48a597;
case 0x48a59d:c.instructions+=51;goto B48a59d;
case 0x48a5a3:c.instructions+=50;goto B48a5a3;
case 0x48a5a7:c.instructions+=49;goto B48a5a7;
case 0x48a5ad:c.instructions+=48;goto B48a5ad;
case 0x48a5b3:c.instructions+=47;goto B48a5b3;
case 0x48a5b9:c.instructions+=46;goto B48a5b9;
case 0x48a5bf:c.instructions+=45;goto B48a5bf;
case 0x48a5c5:c.instructions+=44;goto B48a5c5;
case 0x48a5cb:c.instructions+=43;goto B48a5cb;
case 0x48a5cd:c.instructions+=42;goto B48a5cd;
case 0x48a5cf:c.instructions+=41;goto B48a5cf;
case 0x48a5d5:c.instructions+=40;goto B48a5d5;
case 0x48a5db:c.instructions+=39;goto B48a5db;
case 0x48a5df:c.instructions+=38;goto B48a5df;
case 0x48a5e5:c.instructions+=37;goto B48a5e5;
case 0x48a5eb:c.instructions+=36;goto B48a5eb;
case 0x48a5f1:c.instructions+=35;goto B48a5f1;
case 0x48a5f7:c.instructions+=34;goto B48a5f7;
case 0x48a5fd:c.instructions+=33;goto B48a5fd;
case 0x48a603:c.instructions+=32;goto B48a603;
case 0x48a605:c.instructions+=31;goto B48a605;
case 0x48a607:c.instructions+=30;goto B48a607;
case 0x48a60d:c.instructions+=29;goto B48a60d;
case 0x48a613:c.instructions+=28;goto B48a613;
case 0x48a617:c.instructions+=27;goto B48a617;
case 0x48a61d:c.instructions+=26;goto B48a61d;
case 0x48a623:c.instructions+=25;goto B48a623;
case 0x48a629:c.instructions+=24;goto B48a629;
case 0x48a62f:c.instructions+=23;goto B48a62f;
case 0x48a635:c.instructions+=22;goto B48a635;
case 0x48a63b:c.instructions+=21;goto B48a63b;
case 0x48a63d:c.instructions+=20;goto B48a63d;
case 0x48a63f:c.instructions+=19;goto B48a63f;
case 0x48a645:c.instructions+=18;goto B48a645;
case 0x48a64b:c.instructions+=17;goto B48a64b;
case 0x48a64f:c.instructions+=16;goto B48a64f;
case 0x48a655:c.instructions+=15;goto B48a655;
case 0x48a65b:c.instructions+=14;goto B48a65b;
case 0x48a661:c.instructions+=13;goto B48a661;
case 0x48a667:c.instructions+=12;goto B48a667;
case 0x48a66d:c.instructions+=11;goto B48a66d;
case 0x48a66f:c.instructions+=10;goto B48a66f;
case 0x48a671:c.instructions+=9;goto B48a671;
case 0x48a677:c.instructions+=8;goto B48a677;
case 0x48a67d:c.instructions+=7;goto B48a67d;
case 0x48a67e:c.instructions+=6;goto B48a67e;
case 0x48a684:c.instructions+=5;goto B48a684;
case 0x48a68a:c.instructions+=4;goto B48a68a;
case 0x48a68c:c.instructions+=3;goto B48a68c;
case 0x48a690:c.instructions+=2;goto B48a690;
case 0x48a691:c.instructions+=1;goto B48a691;
case 0x48a6a0:goto L48a6a0;
case 0x48a6a1:c.instructions+=11;goto B48a6a1;
case 0x48a6a3:c.instructions+=10;goto B48a6a3;
case 0x48a6a6:c.instructions+=9;goto B48a6a6;
case 0x48a6ac:c.instructions+=8;goto B48a6ac;
case 0x48a6ad:c.instructions+=7;goto B48a6ad;
case 0x48a6ae:c.instructions+=6;goto B48a6ae;
case 0x48a6b1:c.instructions+=5;goto B48a6b1;
case 0x48a6b2:c.instructions+=4;goto B48a6b2;
case 0x48a6b6:c.instructions+=3;goto B48a6b6;
case 0x48a6b7:c.instructions+=2;goto B48a6b7;
case 0x48a6b8:c.instructions+=1;goto B48a6b8;
case 0x48a6bd:goto L48a6bd;
case 0x48a6c0:c.instructions+=4;goto B48a6c0;
case 0x48a6c3:c.instructions+=3;goto B48a6c3;
case 0x48a6c6:c.instructions+=2;goto B48a6c6;
case 0x48a6c8:c.instructions+=1;goto B48a6c8;
case 0x48a6ce:goto L48a6ce;
case 0x48a6d0:c.instructions+=59;goto B48a6d0;
case 0x48a6d3:c.instructions+=58;goto B48a6d3;
case 0x48a6d6:c.instructions+=57;goto B48a6d6;
case 0x48a6d9:c.instructions+=56;goto B48a6d9;
case 0x48a6dd:c.instructions+=55;goto B48a6dd;
case 0x48a6e0:c.instructions+=54;goto B48a6e0;
case 0x48a6e3:c.instructions+=53;goto B48a6e3;
case 0x48a6e7:c.instructions+=52;goto B48a6e7;
case 0x48a6ee:c.instructions+=51;goto B48a6ee;
case 0x48a6f2:c.instructions+=50;goto B48a6f2;
case 0x48a6f9:c.instructions+=49;goto B48a6f9;
case 0x48a6fd:c.instructions+=48;goto B48a6fd;
case 0x48a6ff:c.instructions+=47;goto B48a6ff;
case 0x48a703:c.instructions+=46;goto B48a703;
case 0x48a705:c.instructions+=45;goto B48a705;
case 0x48a707:c.instructions+=44;goto B48a707;
case 0x48a70e:c.instructions+=43;goto B48a70e;
case 0x48a715:c.instructions+=42;goto B48a715;
case 0x48a719:c.instructions+=41;goto B48a719;
case 0x48a720:c.instructions+=40;goto B48a720;
case 0x48a724:c.instructions+=39;goto B48a724;
case 0x48a726:c.instructions+=38;goto B48a726;
case 0x48a72a:c.instructions+=37;goto B48a72a;
case 0x48a72c:c.instructions+=36;goto B48a72c;
case 0x48a72e:c.instructions+=35;goto B48a72e;
case 0x48a735:c.instructions+=34;goto B48a735;
case 0x48a73c:c.instructions+=33;goto B48a73c;
case 0x48a740:c.instructions+=32;goto B48a740;
case 0x48a747:c.instructions+=31;goto B48a747;
case 0x48a74b:c.instructions+=30;goto B48a74b;
case 0x48a74d:c.instructions+=29;goto B48a74d;
case 0x48a751:c.instructions+=28;goto B48a751;
case 0x48a753:c.instructions+=27;goto B48a753;
case 0x48a755:c.instructions+=26;goto B48a755;
case 0x48a75c:c.instructions+=25;goto B48a75c;
case 0x48a763:c.instructions+=24;goto B48a763;
case 0x48a76a:c.instructions+=23;goto B48a76a;
case 0x48a771:c.instructions+=22;goto B48a771;
case 0x48a775:c.instructions+=21;goto B48a775;
case 0x48a779:c.instructions+=20;goto B48a779;
case 0x48a780:c.instructions+=19;goto B48a780;
case 0x48a784:c.instructions+=18;goto B48a784;
case 0x48a786:c.instructions+=17;goto B48a786;
case 0x48a78a:c.instructions+=16;goto B48a78a;
case 0x48a78c:c.instructions+=15;goto B48a78c;
case 0x48a78e:c.instructions+=14;goto B48a78e;
case 0x48a795:c.instructions+=13;goto B48a795;
case 0x48a79c:c.instructions+=12;goto B48a79c;
case 0x48a7a3:c.instructions+=11;goto B48a7a3;
case 0x48a7a7:c.instructions+=10;goto B48a7a7;
case 0x48a7a9:c.instructions+=9;goto B48a7a9;
case 0x48a7af:c.instructions+=8;goto B48a7af;
case 0x48a7b3:c.instructions+=7;goto B48a7b3;
case 0x48a7b6:c.instructions+=6;goto B48a7b6;
case 0x48a7b9:c.instructions+=5;goto B48a7b9;
case 0x48a7bd:c.instructions+=4;goto B48a7bd;
case 0x48a7c0:c.instructions+=3;goto B48a7c0;
case 0x48a7c2:c.instructions+=2;goto B48a7c2;
case 0x48a7c4:c.instructions+=1;goto B48a7c4;
case 0x48a7c6:goto L48a7c6;
case 0x48a7cc:c.instructions+=3;goto B48a7cc;
case 0x48a7d2:c.instructions+=2;goto B48a7d2;
case 0x48a7d6:c.instructions+=1;goto B48a7d6;
case 0x48a7d8:goto L48a7d8;
case 0x48a7de:c.instructions+=2;goto B48a7de;
case 0x48a7e4:c.instructions+=1;goto B48a7e4;
case 0x48a7e8:goto L48a7e8;
case 0x48a7ec:c.instructions+=16;goto B48a7ec;
case 0x48a7f0:c.instructions+=15;goto B48a7f0;
case 0x48a7f4:c.instructions+=14;goto B48a7f4;
case 0x48a7f8:c.instructions+=13;goto B48a7f8;
case 0x48a7fa:c.instructions+=12;goto B48a7fa;
case 0x48a7fe:c.instructions+=11;goto B48a7fe;
case 0x48a802:c.instructions+=10;goto B48a802;
case 0x48a804:c.instructions+=9;goto B48a804;
case 0x48a808:c.instructions+=8;goto B48a808;
case 0x48a80c:c.instructions+=7;goto B48a80c;
case 0x48a80e:c.instructions+=6;goto B48a80e;
case 0x48a810:c.instructions+=5;goto B48a810;
case 0x48a814:c.instructions+=4;goto B48a814;
case 0x48a816:c.instructions+=3;goto B48a816;
case 0x48a818:c.instructions+=2;goto B48a818;
case 0x48a81b:c.instructions+=1;goto B48a81b;
case 0x48a81d:goto L48a81d;
case 0x48a821:c.instructions+=1;goto B48a821;
case 0x48a823:goto L48a823;
case 0x48a825:c.instructions+=5;goto B48a825;
case 0x48a829:c.instructions+=4;goto B48a829;
case 0x48a82d:c.instructions+=3;goto B48a82d;
case 0x48a82f:c.instructions+=2;goto B48a82f;
case 0x48a832:c.instructions+=1;goto B48a832;
case 0x48a834:goto L48a834;
case 0x48a838:c.instructions+=1;goto B48a838;
case 0x48a83c:goto L48a83c;
case 0x48a840:c.instructions+=5;goto B48a840;
case 0x48a841:c.instructions+=4;goto B48a841;
case 0x48a845:c.instructions+=3;goto B48a845;
case 0x48a846:c.instructions+=2;goto B48a846;
case 0x48a84e:c.instructions+=1;goto B48a84e;
case 0x48a853:goto L48a853;
case 0x48a857:c.instructions+=13;goto B48a857;
case 0x48a85b:c.instructions+=12;goto B48a85b;
case 0x48a85e:c.instructions+=11;goto B48a85e;
case 0x48a862:c.instructions+=10;goto B48a862;
case 0x48a86c:c.instructions+=9;goto B48a86c;
case 0x48a870:c.instructions+=8;goto B48a870;
case 0x48a874:c.instructions+=7;goto B48a874;
case 0x48a878:c.instructions+=6;goto B48a878;
case 0x48a87c:c.instructions+=5;goto B48a87c;
case 0x48a880:c.instructions+=4;goto B48a880;
case 0x48a882:c.instructions+=3;goto B48a882;
case 0x48a888:c.instructions+=2;goto B48a888;
case 0x48a88e:c.instructions+=1;goto B48a88e;
case 0x48a894:goto L48a894;
case 0x48a897:c.instructions+=2;goto B48a897;
case 0x48a899:c.instructions+=1;goto B48a899;
case 0x48a89f:goto L48a89f;
case 0x48a8a1:c.instructions+=1;goto B48a8a1;
case 0x48a8a7:goto L48a8a7;
case 0x48a8a9:c.instructions+=196;goto B48a8a9;
case 0x48a8af:c.instructions+=195;goto B48a8af;
case 0x48a8b1:c.instructions+=194;goto B48a8b1;
case 0x48a8b4:c.instructions+=193;goto B48a8b4;
case 0x48a8b7:c.instructions+=192;goto B48a8b7;
case 0x48a8b9:c.instructions+=191;goto B48a8b9;
case 0x48a8bc:c.instructions+=190;goto B48a8bc;
case 0x48a8bf:c.instructions+=189;goto B48a8bf;
case 0x48a8c1:c.instructions+=188;goto B48a8c1;
case 0x48a8c4:c.instructions+=187;goto B48a8c4;
case 0x48a8c7:c.instructions+=186;goto B48a8c7;
case 0x48a8c9:c.instructions+=185;goto B48a8c9;
case 0x48a8cd:c.instructions+=184;goto B48a8cd;
case 0x48a8cf:c.instructions+=183;goto B48a8cf;
case 0x48a8d2:c.instructions+=182;goto B48a8d2;
case 0x48a8d5:c.instructions+=181;goto B48a8d5;
case 0x48a8d8:c.instructions+=180;goto B48a8d8;
case 0x48a8da:c.instructions+=179;goto B48a8da;
case 0x48a8dd:c.instructions+=178;goto B48a8dd;
case 0x48a8e0:c.instructions+=177;goto B48a8e0;
case 0x48a8e2:c.instructions+=176;goto B48a8e2;
case 0x48a8e5:c.instructions+=175;goto B48a8e5;
case 0x48a8e8:c.instructions+=174;goto B48a8e8;
case 0x48a8ea:c.instructions+=173;goto B48a8ea;
case 0x48a8ee:c.instructions+=172;goto B48a8ee;
case 0x48a8f1:c.instructions+=171;goto B48a8f1;
case 0x48a8f4:c.instructions+=170;goto B48a8f4;
case 0x48a8f7:c.instructions+=169;goto B48a8f7;
case 0x48a8fa:c.instructions+=168;goto B48a8fa;
case 0x48a8fc:c.instructions+=167;goto B48a8fc;
case 0x48a8fe:c.instructions+=166;goto B48a8fe;
case 0x48a901:c.instructions+=165;goto B48a901;
case 0x48a903:c.instructions+=164;goto B48a903;
case 0x48a906:c.instructions+=163;goto B48a906;
case 0x48a909:c.instructions+=162;goto B48a909;
case 0x48a90b:c.instructions+=161;goto B48a90b;
case 0x48a90f:c.instructions+=160;goto B48a90f;
case 0x48a912:c.instructions+=159;goto B48a912;
case 0x48a915:c.instructions+=158;goto B48a915;
case 0x48a918:c.instructions+=157;goto B48a918;
case 0x48a91b:c.instructions+=156;goto B48a91b;
case 0x48a91d:c.instructions+=155;goto B48a91d;
case 0x48a920:c.instructions+=154;goto B48a920;
case 0x48a922:c.instructions+=153;goto B48a922;
case 0x48a924:c.instructions+=152;goto B48a924;
case 0x48a927:c.instructions+=151;goto B48a927;
case 0x48a92a:c.instructions+=150;goto B48a92a;
case 0x48a92c:c.instructions+=149;goto B48a92c;
case 0x48a930:c.instructions+=148;goto B48a930;
case 0x48a933:c.instructions+=147;goto B48a933;
case 0x48a936:c.instructions+=146;goto B48a936;
case 0x48a939:c.instructions+=145;goto B48a939;
case 0x48a93c:c.instructions+=144;goto B48a93c;
case 0x48a93e:c.instructions+=143;goto B48a93e;
case 0x48a941:c.instructions+=142;goto B48a941;
case 0x48a944:c.instructions+=141;goto B48a944;
case 0x48a946:c.instructions+=140;goto B48a946;
case 0x48a949:c.instructions+=139;goto B48a949;
case 0x48a94b:c.instructions+=138;goto B48a94b;
case 0x48a94d:c.instructions+=137;goto B48a94d;
case 0x48a951:c.instructions+=136;goto B48a951;
case 0x48a954:c.instructions+=135;goto B48a954;
case 0x48a957:c.instructions+=134;goto B48a957;
case 0x48a95a:c.instructions+=133;goto B48a95a;
case 0x48a95d:c.instructions+=132;goto B48a95d;
case 0x48a95f:c.instructions+=131;goto B48a95f;
case 0x48a962:c.instructions+=130;goto B48a962;
case 0x48a965:c.instructions+=129;goto B48a965;
case 0x48a967:c.instructions+=128;goto B48a967;
case 0x48a96a:c.instructions+=127;goto B48a96a;
case 0x48a96d:c.instructions+=126;goto B48a96d;
case 0x48a96f:c.instructions+=125;goto B48a96f;
case 0x48a973:c.instructions+=124;goto B48a973;
case 0x48a976:c.instructions+=123;goto B48a976;
case 0x48a979:c.instructions+=122;goto B48a979;
case 0x48a97c:c.instructions+=121;goto B48a97c;
case 0x48a97f:c.instructions+=120;goto B48a97f;
case 0x48a981:c.instructions+=119;goto B48a981;
case 0x48a984:c.instructions+=118;goto B48a984;
case 0x48a987:c.instructions+=117;goto B48a987;
case 0x48a989:c.instructions+=116;goto B48a989;
case 0x48a98c:c.instructions+=115;goto B48a98c;
case 0x48a98f:c.instructions+=114;goto B48a98f;
case 0x48a991:c.instructions+=113;goto B48a991;
case 0x48a995:c.instructions+=112;goto B48a995;
case 0x48a998:c.instructions+=111;goto B48a998;
case 0x48a99b:c.instructions+=110;goto B48a99b;
case 0x48a99e:c.instructions+=109;goto B48a99e;
case 0x48a9a1:c.instructions+=108;goto B48a9a1;
case 0x48a9a3:c.instructions+=107;goto B48a9a3;
case 0x48a9a6:c.instructions+=106;goto B48a9a6;
case 0x48a9a9:c.instructions+=105;goto B48a9a9;
case 0x48a9ab:c.instructions+=104;goto B48a9ab;
case 0x48a9ae:c.instructions+=103;goto B48a9ae;
case 0x48a9b1:c.instructions+=102;goto B48a9b1;
case 0x48a9b3:c.instructions+=101;goto B48a9b3;
case 0x48a9b7:c.instructions+=100;goto B48a9b7;
case 0x48a9ba:c.instructions+=99;goto B48a9ba;
case 0x48a9bd:c.instructions+=98;goto B48a9bd;
case 0x48a9c0:c.instructions+=97;goto B48a9c0;
case 0x48a9c3:c.instructions+=96;goto B48a9c3;
case 0x48a9c5:c.instructions+=95;goto B48a9c5;
case 0x48a9c8:c.instructions+=94;goto B48a9c8;
case 0x48a9cb:c.instructions+=93;goto B48a9cb;
case 0x48a9cd:c.instructions+=92;goto B48a9cd;
case 0x48a9d0:c.instructions+=91;goto B48a9d0;
case 0x48a9d2:c.instructions+=90;goto B48a9d2;
case 0x48a9d4:c.instructions+=89;goto B48a9d4;
case 0x48a9d8:c.instructions+=88;goto B48a9d8;
case 0x48a9db:c.instructions+=87;goto B48a9db;
case 0x48a9de:c.instructions+=86;goto B48a9de;
case 0x48a9e1:c.instructions+=85;goto B48a9e1;
case 0x48a9e4:c.instructions+=84;goto B48a9e4;
case 0x48a9e6:c.instructions+=83;goto B48a9e6;
case 0x48a9e9:c.instructions+=82;goto B48a9e9;
case 0x48a9ec:c.instructions+=81;goto B48a9ec;
case 0x48a9ee:c.instructions+=80;goto B48a9ee;
case 0x48a9f1:c.instructions+=79;goto B48a9f1;
case 0x48a9f4:c.instructions+=78;goto B48a9f4;
case 0x48a9f6:c.instructions+=77;goto B48a9f6;
case 0x48a9fa:c.instructions+=76;goto B48a9fa;
case 0x48a9fd:c.instructions+=75;goto B48a9fd;
case 0x48aa00:c.instructions+=74;goto B48aa00;
case 0x48aa03:c.instructions+=73;goto B48aa03;
case 0x48aa06:c.instructions+=72;goto B48aa06;
case 0x48aa08:c.instructions+=71;goto B48aa08;
case 0x48aa0b:c.instructions+=70;goto B48aa0b;
case 0x48aa0e:c.instructions+=69;goto B48aa0e;
case 0x48aa10:c.instructions+=68;goto B48aa10;
case 0x48aa13:c.instructions+=67;goto B48aa13;
case 0x48aa16:c.instructions+=66;goto B48aa16;
case 0x48aa18:c.instructions+=65;goto B48aa18;
case 0x48aa1c:c.instructions+=64;goto B48aa1c;
case 0x48aa1f:c.instructions+=63;goto B48aa1f;
case 0x48aa22:c.instructions+=62;goto B48aa22;
case 0x48aa25:c.instructions+=61;goto B48aa25;
case 0x48aa28:c.instructions+=60;goto B48aa28;
case 0x48aa2a:c.instructions+=59;goto B48aa2a;
case 0x48aa2d:c.instructions+=58;goto B48aa2d;
case 0x48aa30:c.instructions+=57;goto B48aa30;
case 0x48aa32:c.instructions+=56;goto B48aa32;
case 0x48aa35:c.instructions+=55;goto B48aa35;
case 0x48aa38:c.instructions+=54;goto B48aa38;
case 0x48aa3a:c.instructions+=53;goto B48aa3a;
case 0x48aa3e:c.instructions+=52;goto B48aa3e;
case 0x48aa41:c.instructions+=51;goto B48aa41;
case 0x48aa43:c.instructions+=50;goto B48aa43;
case 0x48aa46:c.instructions+=49;goto B48aa46;
case 0x48aa49:c.instructions+=48;goto B48aa49;
case 0x48aa4b:c.instructions+=47;goto B48aa4b;
case 0x48aa4e:c.instructions+=46;goto B48aa4e;
case 0x48aa51:c.instructions+=45;goto B48aa51;
case 0x48aa53:c.instructions+=44;goto B48aa53;
case 0x48aa56:c.instructions+=43;goto B48aa56;
case 0x48aa59:c.instructions+=42;goto B48aa59;
case 0x48aa5b:c.instructions+=41;goto B48aa5b;
case 0x48aa5f:c.instructions+=40;goto B48aa5f;
case 0x48aa62:c.instructions+=39;goto B48aa62;
case 0x48aa65:c.instructions+=38;goto B48aa65;
case 0x48aa68:c.instructions+=37;goto B48aa68;
case 0x48aa6b:c.instructions+=36;goto B48aa6b;
case 0x48aa6d:c.instructions+=35;goto B48aa6d;
case 0x48aa70:c.instructions+=34;goto B48aa70;
case 0x48aa73:c.instructions+=33;goto B48aa73;
case 0x48aa75:c.instructions+=32;goto B48aa75;
case 0x48aa78:c.instructions+=31;goto B48aa78;
case 0x48aa7b:c.instructions+=30;goto B48aa7b;
case 0x48aa7d:c.instructions+=29;goto B48aa7d;
case 0x48aa81:c.instructions+=28;goto B48aa81;
case 0x48aa84:c.instructions+=27;goto B48aa84;
case 0x48aa87:c.instructions+=26;goto B48aa87;
case 0x48aa8a:c.instructions+=25;goto B48aa8a;
case 0x48aa8d:c.instructions+=24;goto B48aa8d;
case 0x48aa8f:c.instructions+=23;goto B48aa8f;
case 0x48aa92:c.instructions+=22;goto B48aa92;
case 0x48aa95:c.instructions+=21;goto B48aa95;
case 0x48aa97:c.instructions+=20;goto B48aa97;
case 0x48aa9a:c.instructions+=19;goto B48aa9a;
case 0x48aa9d:c.instructions+=18;goto B48aa9d;
case 0x48aa9f:c.instructions+=17;goto B48aa9f;
case 0x48aaa3:c.instructions+=16;goto B48aaa3;
case 0x48aaa6:c.instructions+=15;goto B48aaa6;
case 0x48aaa9:c.instructions+=14;goto B48aaa9;
case 0x48aaac:c.instructions+=13;goto B48aaac;
case 0x48aaaf:c.instructions+=12;goto B48aaaf;
case 0x48aab3:c.instructions+=11;goto B48aab3;
case 0x48aab4:c.instructions+=10;goto B48aab4;
case 0x48aab5:c.instructions+=9;goto B48aab5;
case 0x48aab7:c.instructions+=8;goto B48aab7;
case 0x48aaba:c.instructions+=7;goto B48aaba;
case 0x48aabd:c.instructions+=6;goto B48aabd;
case 0x48aabf:c.instructions+=5;goto B48aabf;
case 0x48aac2:c.instructions+=4;goto B48aac2;
case 0x48aac5:c.instructions+=3;goto B48aac5;
case 0x48aac7:c.instructions+=2;goto B48aac7;
case 0x48aacb:c.instructions+=1;goto B48aacb;
case 0x48aad0:goto L48aad0;
case 0x48aad3:c.instructions+=11;goto B48aad3;
case 0x48aad5:c.instructions+=10;goto B48aad5;
case 0x48aad8:c.instructions+=9;goto B48aad8;
case 0x48aadb:c.instructions+=8;goto B48aadb;
case 0x48aade:c.instructions+=7;goto B48aade;
case 0x48aae4:c.instructions+=6;goto B48aae4;
case 0x48aae7:c.instructions+=5;goto B48aae7;
case 0x48aaed:c.instructions+=4;goto B48aaed;
case 0x48aaf0:c.instructions+=3;goto B48aaf0;
case 0x48aaf6:c.instructions+=2;goto B48aaf6;
case 0x48aaf9:c.instructions+=1;goto B48aaf9;
case 0x48aafc:goto L48aafc;
case 0x48aafd:c.instructions+=6;goto B48aafd;
case 0x48aafe:c.instructions+=5;goto B48aafe;
case 0x48ab03:c.instructions+=4;goto B48ab03;
case 0x48ab04:c.instructions+=3;goto B48ab04;
case 0x48ab06:c.instructions+=2;goto B48ab06;
case 0x48ab07:c.instructions+=1;goto B48ab07;
case 0x48ab10:goto L48ab10;
case 0x48ab11:c.instructions+=3;goto B48ab11;
case 0x48ab15:c.instructions+=2;goto B48ab15;
case 0x48ab1a:c.instructions+=1;goto B48ab1a;
case 0x48ab1c:goto L48ab1c;
case 0x48ab1e:goto L48ab1e;
case 0x48ab1f:c.instructions+=1;goto B48ab1f;
case 0x48ab20:goto L48ab20;
case 0x48ab24:c.instructions+=5;goto B48ab24;
case 0x48ab2b:c.instructions+=4;goto B48ab2b;
case 0x48ab32:c.instructions+=3;goto B48ab32;
case 0x48ab33:c.instructions+=2;goto B48ab33;
case 0x48ab3a:c.instructions+=1;goto B48ab3a;
case 0x48ab3c:goto L48ab3c;
case 0x48ab3e:c.instructions+=2;goto B48ab3e;
case 0x48ab3f:c.instructions+=1;goto B48ab3f;
case 0x48ab40:goto L48ab40;
case 0x48ab44:c.instructions+=8;goto B48ab44;
case 0x48ab4a:c.instructions+=7;goto B48ab4a;
case 0x48ab4c:c.instructions+=6;goto B48ab4c;
case 0x48ab4d:c.instructions+=5;goto B48ab4d;
case 0x48ab53:c.instructions+=4;goto B48ab53;
case 0x48ab5a:c.instructions+=3;goto B48ab5a;
case 0x48ab5c:c.instructions+=2;goto B48ab5c;
case 0x48ab5d:c.instructions+=1;goto B48ab5d;
case 0x48ab60:goto L48ab60;
case 0x48ab65:c.instructions+=2;goto B48ab65;
case 0x48ab67:c.instructions+=1;goto B48ab67;
case 0x48ab6d:goto L48ab6d;
case 0x48ab6e:c.instructions+=7;goto B48ab6e;
case 0x48ab6f:c.instructions+=6;goto B48ab6f;
case 0x48ab70:c.instructions+=5;goto B48ab70;
case 0x48ab71:c.instructions+=4;goto B48ab71;
case 0x48ab73:c.instructions+=3;goto B48ab73;
case 0x48ab7d:c.instructions+=2;goto B48ab7d;
case 0x48ab7f:c.instructions+=1;goto B48ab7f;
case 0x48ab80:goto L48ab80;
case 0x48ab87:c.instructions+=2;goto B48ab87;
case 0x48ab89:c.instructions+=1;goto B48ab89;
case 0x48ab8b:goto L48ab8b;
case 0x48ab8d:c.instructions+=10;goto B48ab8d;
case 0x48ab90:c.instructions+=9;goto B48ab90;
case 0x48ab92:c.instructions+=8;goto B48ab92;
case 0x48ab98:c.instructions+=7;goto B48ab98;
case 0x48ab9a:c.instructions+=6;goto B48ab9a;
case 0x48ab9e:c.instructions+=5;goto B48ab9e;
case 0x48aba1:c.instructions+=4;goto B48aba1;
case 0x48aba7:c.instructions+=3;goto B48aba7;
case 0x48abad:c.instructions+=2;goto B48abad;
case 0x48abb0:c.instructions+=1;goto B48abb0;
case 0x48abb2:goto L48abb2;
case 0x48abb4:c.instructions+=8;goto B48abb4;
case 0x48abb7:c.instructions+=7;goto B48abb7;
case 0x48abb9:c.instructions+=6;goto B48abb9;
case 0x48abbb:c.instructions+=5;goto B48abbb;
case 0x48abbe:c.instructions+=4;goto B48abbe;
case 0x48abc5:c.instructions+=3;goto B48abc5;
case 0x48abcc:c.instructions+=2;goto B48abcc;
case 0x48abd3:c.instructions+=1;goto B48abd3;
case 0x48abd5:goto L48abd5;
case 0x48abdb:c.instructions+=1;goto B48abdb;
case 0x48abdd:goto L48abdd;
case 0x48abe3:goto L48abe3;
case 0x48abe6:c.instructions+=3;goto B48abe6;
case 0x48abe9:c.instructions+=2;goto B48abe9;
case 0x48abea:c.instructions+=1;goto B48abea;
case 0x48abec:goto L48abec;
case 0x48abed:c.instructions+=2;goto B48abed;
case 0x48abf0:c.instructions+=1;goto B48abf0;
case 0x48abf2:goto L48abf2;
case 0x48abf3:c.instructions+=3;goto B48abf3;
case 0x48abf4:c.instructions+=2;goto B48abf4;
case 0x48abf5:c.instructions+=1;goto B48abf5;
case 0x48abf6:goto L48abf6;
case 0x48ac00:goto L48ac00;
case 0x48ac06:c.instructions+=6;goto B48ac06;
case 0x48ac0c:c.instructions+=5;goto B48ac0c;
case 0x48ac12:c.instructions+=4;goto B48ac12;
case 0x48ac18:c.instructions+=3;goto B48ac18;
case 0x48ac1a:c.instructions+=2;goto B48ac1a;
case 0x48ac1d:c.instructions+=1;goto B48ac1d;
case 0x48ac1f:goto L48ac1f;
case 0x48ac24:c.instructions+=3;goto B48ac24;
case 0x48ac26:c.instructions+=2;goto B48ac26;
case 0x48ac30:c.instructions+=1;goto B48ac30;
case 0x48ac35:goto L48ac35;
case 0x48ac37:c.instructions+=3;goto B48ac37;
case 0x48ac3c:c.instructions+=2;goto B48ac3c;
case 0x48ac41:c.instructions+=1;goto B48ac41;
case 0x48ac50:goto L48ac50;
case 0x48ac55:c.instructions+=1;goto B48ac55;
case 0x48ac60:goto L48ac60;
case 0x48ac70:goto L48ac70;
case 0x48ac74:c.instructions+=6;goto B48ac74;
case 0x48ac7a:c.instructions+=5;goto B48ac7a;
case 0x48ac7e:c.instructions+=4;goto B48ac7e;
case 0x48ac81:c.instructions+=3;goto B48ac81;
case 0x48ac83:c.instructions+=2;goto B48ac83;
case 0x48ac86:c.instructions+=1;goto B48ac86;
case 0x48ac88:goto L48ac88;
case 0x48ac8c:c.instructions+=2;goto B48ac8c;
case 0x48ac90:c.instructions+=1;goto B48ac90;
case 0x48ac95:goto L48ac95;
case 0x48ac98:goto L48ac98;
case 0x48ac9a:c.instructions+=1;goto B48ac9a;
case 0x48ac9f:goto L48ac9f;
case 0x48acb0:goto L48acb0;
case 0x48acb3:c.instructions+=21;goto B48acb3;
case 0x48acb7:c.instructions+=20;goto B48acb7;
case 0x48acb9:c.instructions+=19;goto B48acb9;
case 0x48acbc:c.instructions+=18;goto B48acbc;
case 0x48acbf:c.instructions+=17;goto B48acbf;
case 0x48acc2:c.instructions+=16;goto B48acc2;
case 0x48acc5:c.instructions+=15;goto B48acc5;
case 0x48acc8:c.instructions+=14;goto B48acc8;
case 0x48acca:c.instructions+=13;goto B48acca;
case 0x48accd:c.instructions+=12;goto B48accd;
case 0x48accf:c.instructions+=11;goto B48accf;
case 0x48acd2:c.instructions+=10;goto B48acd2;
case 0x48acd4:c.instructions+=9;goto B48acd4;
case 0x48acd6:c.instructions+=8;goto B48acd6;
case 0x48acd9:c.instructions+=7;goto B48acd9;
case 0x48acdb:c.instructions+=6;goto B48acdb;
case 0x48acdf:c.instructions+=5;goto B48acdf;
case 0x48ace1:c.instructions+=4;goto B48ace1;
case 0x48ace3:c.instructions+=3;goto B48ace3;
case 0x48ace5:c.instructions+=2;goto B48ace5;
case 0x48ace8:c.instructions+=1;goto B48ace8;
case 0x48acea:goto L48acea;
case 0x48acec:c.instructions+=4;goto B48acec;
case 0x48acee:c.instructions+=3;goto B48acee;
case 0x48acf0:c.instructions+=2;goto B48acf0;
case 0x48acf2:c.instructions+=1;goto B48acf2;
case 0x48acf5:goto L48acf5;
case 0x48acf7:c.instructions+=19;goto B48acf7;
case 0x48acf9:c.instructions+=18;goto B48acf9;
case 0x48acfb:c.instructions+=17;goto B48acfb;
case 0x48acfd:c.instructions+=16;goto B48acfd;
case 0x48acff:c.instructions+=15;goto B48acff;
case 0x48ad01:c.instructions+=14;goto B48ad01;
case 0x48ad03:c.instructions+=13;goto B48ad03;
case 0x48ad05:c.instructions+=12;goto B48ad05;
case 0x48ad07:c.instructions+=11;goto B48ad07;
case 0x48ad09:c.instructions+=10;goto B48ad09;
case 0x48ad0b:c.instructions+=9;goto B48ad0b;
case 0x48ad0d:c.instructions+=8;goto B48ad0d;
case 0x48ad11:c.instructions+=7;goto B48ad11;
case 0x48ad15:c.instructions+=6;goto B48ad15;
case 0x48ad1b:c.instructions+=5;goto B48ad1b;
case 0x48ad1d:c.instructions+=4;goto B48ad1d;
case 0x48ad1f:c.instructions+=3;goto B48ad1f;
case 0x48ad21:c.instructions+=2;goto B48ad21;
case 0x48ad24:c.instructions+=1;goto B48ad24;
case 0x48ad26:goto L48ad26;
case 0x48ad29:c.instructions+=2;goto B48ad29;
case 0x48ad2d:c.instructions+=1;goto B48ad2d;
case 0x48ad32:goto L48ad32;
case 0x48ad35:goto L48ad35;
case 0x48ad37:c.instructions+=3;goto B48ad37;
case 0x48ad3a:c.instructions+=2;goto B48ad3a;
case 0x48ad3c:c.instructions+=1;goto B48ad3c;
case 0x48ad41:goto L48ad41;
case 0x48ad50:goto L48ad50;
case 0x48ad54:c.instructions+=50;goto B48ad54;
case 0x48ad56:c.instructions+=49;goto B48ad56;
case 0x48ad57:c.instructions+=48;goto B48ad57;
case 0x48ad5b:c.instructions+=47;goto B48ad5b;
case 0x48ad5d:c.instructions+=46;goto B48ad5d;
case 0x48ad60:c.instructions+=45;goto B48ad60;
case 0x48ad63:c.instructions+=44;goto B48ad63;
case 0x48ad66:c.instructions+=43;goto B48ad66;
case 0x48ad69:c.instructions+=42;goto B48ad69;
case 0x48ad6c:c.instructions+=41;goto B48ad6c;
case 0x48ad6e:c.instructions+=40;goto B48ad6e;
case 0x48ad70:c.instructions+=39;goto B48ad70;
case 0x48ad72:c.instructions+=38;goto B48ad72;
case 0x48ad74:c.instructions+=37;goto B48ad74;
case 0x48ad76:c.instructions+=36;goto B48ad76;
case 0x48ad78:c.instructions+=35;goto B48ad78;
case 0x48ad7a:c.instructions+=34;goto B48ad7a;
case 0x48ad7c:c.instructions+=33;goto B48ad7c;
case 0x48ad7e:c.instructions+=32;goto B48ad7e;
case 0x48ad80:c.instructions+=31;goto B48ad80;
case 0x48ad82:c.instructions+=30;goto B48ad82;
case 0x48ad84:c.instructions+=29;goto B48ad84;
case 0x48ad8a:c.instructions+=28;goto B48ad8a;
case 0x48ad8e:c.instructions+=27;goto B48ad8e;
case 0x48ad90:c.instructions+=26;goto B48ad90;
case 0x48ad92:c.instructions+=25;goto B48ad92;
case 0x48ad98:c.instructions+=24;goto B48ad98;
case 0x48ad9b:c.instructions+=23;goto B48ad9b;
case 0x48ad9e:c.instructions+=22;goto B48ad9e;
case 0x48ada1:c.instructions+=21;goto B48ada1;
case 0x48ada7:c.instructions+=20;goto B48ada7;
case 0x48adaa:c.instructions+=19;goto B48adaa;
case 0x48adad:c.instructions+=18;goto B48adad;
case 0x48adb0:c.instructions+=17;goto B48adb0;
case 0x48adb1:c.instructions+=16;goto B48adb1;
case 0x48adb7:c.instructions+=15;goto B48adb7;
case 0x48adba:c.instructions+=14;goto B48adba;
case 0x48adbc:c.instructions+=13;goto B48adbc;
case 0x48adbf:c.instructions+=12;goto B48adbf;
case 0x48adc1:c.instructions+=11;goto B48adc1;
case 0x48adc4:c.instructions+=10;goto B48adc4;
case 0x48adc6:c.instructions+=9;goto B48adc6;
case 0x48adc8:c.instructions+=8;goto B48adc8;
case 0x48adcb:c.instructions+=7;goto B48adcb;
case 0x48adcd:c.instructions+=6;goto B48adcd;
case 0x48add1:c.instructions+=5;goto B48add1;
case 0x48add3:c.instructions+=4;goto B48add3;
case 0x48add5:c.instructions+=3;goto B48add5;
case 0x48add7:c.instructions+=2;goto B48add7;
case 0x48adda:c.instructions+=1;goto B48adda;
case 0x48addc:goto L48addc;
case 0x48adde:c.instructions+=4;goto B48adde;
case 0x48ade0:c.instructions+=3;goto B48ade0;
case 0x48ade2:c.instructions+=2;goto B48ade2;
case 0x48ade4:c.instructions+=1;goto B48ade4;
case 0x48ade7:goto L48ade7;
case 0x48ade9:c.instructions+=19;goto B48ade9;
case 0x48adeb:c.instructions+=18;goto B48adeb;
case 0x48aded:c.instructions+=17;goto B48aded;
case 0x48adef:c.instructions+=16;goto B48adef;
case 0x48adf1:c.instructions+=15;goto B48adf1;
case 0x48adf3:c.instructions+=14;goto B48adf3;
case 0x48adf5:c.instructions+=13;goto B48adf5;
case 0x48adf7:c.instructions+=12;goto B48adf7;
case 0x48adf9:c.instructions+=11;goto B48adf9;
case 0x48adfb:c.instructions+=10;goto B48adfb;
case 0x48adfd:c.instructions+=9;goto B48adfd;
case 0x48adff:c.instructions+=8;goto B48adff;
case 0x48ae03:c.instructions+=7;goto B48ae03;
case 0x48ae07:c.instructions+=6;goto B48ae07;
case 0x48ae0a:c.instructions+=5;goto B48ae0a;
case 0x48ae0e:c.instructions+=4;goto B48ae0e;
case 0x48ae12:c.instructions+=3;goto B48ae12;
case 0x48ae14:c.instructions+=2;goto B48ae14;
case 0x48ae17:c.instructions+=1;goto B48ae17;
case 0x48ae19:goto L48ae19;
case 0x48ae1b:c.instructions+=3;goto B48ae1b;
case 0x48ae1e:c.instructions+=2;goto B48ae1e;
case 0x48ae22:c.instructions+=1;goto B48ae22;
case 0x48ae26:goto L48ae26;
case 0x48ae2b:goto L48ae2b;
case 0x48ae30:goto L48ae30;
case 0x48ae31:c.instructions+=8;goto B48ae31;
case 0x48ae33:c.instructions+=7;goto B48ae33;
case 0x48ae36:c.instructions+=6;goto B48ae36;
case 0x48ae3c:c.instructions+=5;goto B48ae3c;
case 0x48ae3d:c.instructions+=4;goto B48ae3d;
case 0x48ae3f:c.instructions+=3;goto B48ae3f;
case 0x48ae42:c.instructions+=2;goto B48ae42;
case 0x48ae44:c.instructions+=1;goto B48ae44;
case 0x48ae4a:goto L48ae4a;
case 0x48ae4e:c.instructions+=2;goto B48ae4e;
case 0x48ae4f:c.instructions+=1;goto B48ae4f;
case 0x48ae54:goto L48ae54;
case 0x48ae57:c.instructions+=130;goto B48ae57;
case 0x48ae5b:c.instructions+=129;goto B48ae5b;
case 0x48ae5d:c.instructions+=128;goto B48ae5d;
case 0x48ae61:c.instructions+=127;goto B48ae61;
case 0x48ae64:c.instructions+=126;goto B48ae64;
case 0x48ae67:c.instructions+=125;goto B48ae67;
case 0x48ae69:c.instructions+=124;goto B48ae69;
case 0x48ae6c:c.instructions+=123;goto B48ae6c;
case 0x48ae6f:c.instructions+=122;goto B48ae6f;
case 0x48ae73:c.instructions+=121;goto B48ae73;
case 0x48ae75:c.instructions+=120;goto B48ae75;
case 0x48ae78:c.instructions+=119;goto B48ae78;
case 0x48ae7b:c.instructions+=118;goto B48ae7b;
case 0x48ae7e:c.instructions+=117;goto B48ae7e;
case 0x48ae81:c.instructions+=116;goto B48ae81;
case 0x48ae85:c.instructions+=115;goto B48ae85;
case 0x48ae87:c.instructions+=114;goto B48ae87;
case 0x48ae8a:c.instructions+=113;goto B48ae8a;
case 0x48ae8e:c.instructions+=112;goto B48ae8e;
case 0x48ae91:c.instructions+=111;goto B48ae91;
case 0x48ae95:c.instructions+=110;goto B48ae95;
case 0x48ae99:c.instructions+=109;goto B48ae99;
case 0x48ae9c:c.instructions+=108;goto B48ae9c;
case 0x48aea0:c.instructions+=107;goto B48aea0;
case 0x48aea2:c.instructions+=106;goto B48aea2;
case 0x48aea6:c.instructions+=105;goto B48aea6;
case 0x48aea9:c.instructions+=104;goto B48aea9;
case 0x48aeab:c.instructions+=103;goto B48aeab;
case 0x48aeae:c.instructions+=102;goto B48aeae;
case 0x48aeb5:c.instructions+=101;goto B48aeb5;
case 0x48aebc:c.instructions+=100;goto B48aebc;
case 0x48aec3:c.instructions+=99;goto B48aec3;
case 0x48aec7:c.instructions+=98;goto B48aec7;
case 0x48aece:c.instructions+=97;goto B48aece;
case 0x48aed2:c.instructions+=96;goto B48aed2;
case 0x48aed6:c.instructions+=95;goto B48aed6;
case 0x48aeda:c.instructions+=94;goto B48aeda;
case 0x48aee2:c.instructions+=93;goto B48aee2;
case 0x48aee6:c.instructions+=92;goto B48aee6;
case 0x48aeea:c.instructions+=91;goto B48aeea;
case 0x48aeed:c.instructions+=90;goto B48aeed;
case 0x48aef1:c.instructions+=89;goto B48aef1;
case 0x48aef4:c.instructions+=88;goto B48aef4;
case 0x48aef6:c.instructions+=87;goto B48aef6;
case 0x48aef9:c.instructions+=86;goto B48aef9;
case 0x48aefb:c.instructions+=85;goto B48aefb;
case 0x48aefd:c.instructions+=84;goto B48aefd;
case 0x48af01:c.instructions+=83;goto B48af01;
case 0x48af04:c.instructions+=82;goto B48af04;
case 0x48af06:c.instructions+=81;goto B48af06;
case 0x48af0a:c.instructions+=80;goto B48af0a;
case 0x48af0e:c.instructions+=79;goto B48af0e;
case 0x48af10:c.instructions+=78;goto B48af10;
case 0x48af14:c.instructions+=77;goto B48af14;
case 0x48af17:c.instructions+=76;goto B48af17;
case 0x48af19:c.instructions+=75;goto B48af19;
case 0x48af1c:c.instructions+=74;goto B48af1c;
case 0x48af1f:c.instructions+=73;goto B48af1f;
case 0x48af21:c.instructions+=72;goto B48af21;
case 0x48af25:c.instructions+=71;goto B48af25;
case 0x48af28:c.instructions+=70;goto B48af28;
case 0x48af2a:c.instructions+=69;goto B48af2a;
case 0x48af2e:c.instructions+=68;goto B48af2e;
case 0x48af32:c.instructions+=67;goto B48af32;
case 0x48af34:c.instructions+=66;goto B48af34;
case 0x48af37:c.instructions+=65;goto B48af37;
case 0x48af3a:c.instructions+=64;goto B48af3a;
case 0x48af3c:c.instructions+=63;goto B48af3c;
case 0x48af40:c.instructions+=62;goto B48af40;
case 0x48af43:c.instructions+=61;goto B48af43;
case 0x48af45:c.instructions+=60;goto B48af45;
case 0x48af49:c.instructions+=59;goto B48af49;
case 0x48af4c:c.instructions+=58;goto B48af4c;
case 0x48af4e:c.instructions+=57;goto B48af4e;
case 0x48af52:c.instructions+=56;goto B48af52;
case 0x48af56:c.instructions+=55;goto B48af56;
case 0x48af58:c.instructions+=54;goto B48af58;
case 0x48af5c:c.instructions+=53;goto B48af5c;
case 0x48af5f:c.instructions+=52;goto B48af5f;
case 0x48af61:c.instructions+=51;goto B48af61;
case 0x48af65:c.instructions+=50;goto B48af65;
case 0x48af68:c.instructions+=49;goto B48af68;
case 0x48af6a:c.instructions+=48;goto B48af6a;
case 0x48af6d:c.instructions+=47;goto B48af6d;
case 0x48af71:c.instructions+=46;goto B48af71;
case 0x48af75:c.instructions+=45;goto B48af75;
case 0x48af78:c.instructions+=44;goto B48af78;
case 0x48af7c:c.instructions+=43;goto B48af7c;
case 0x48af7f:c.instructions+=42;goto B48af7f;
case 0x48af81:c.instructions+=41;goto B48af81;
case 0x48af84:c.instructions+=40;goto B48af84;
case 0x48af87:c.instructions+=39;goto B48af87;
case 0x48af89:c.instructions+=38;goto B48af89;
case 0x48af8d:c.instructions+=37;goto B48af8d;
case 0x48af90:c.instructions+=36;goto B48af90;
case 0x48af92:c.instructions+=35;goto B48af92;
case 0x48af96:c.instructions+=34;goto B48af96;
case 0x48af9a:c.instructions+=33;goto B48af9a;
case 0x48af9d:c.instructions+=32;goto B48af9d;
case 0x48afa0:c.instructions+=31;goto B48afa0;
case 0x48afa3:c.instructions+=30;goto B48afa3;
case 0x48afa5:c.instructions+=29;goto B48afa5;
case 0x48afa9:c.instructions+=28;goto B48afa9;
case 0x48afac:c.instructions+=27;goto B48afac;
case 0x48afae:c.instructions+=26;goto B48afae;
case 0x48afb2:c.instructions+=25;goto B48afb2;
case 0x48afb5:c.instructions+=24;goto B48afb5;
case 0x48afb7:c.instructions+=23;goto B48afb7;
case 0x48afbb:c.instructions+=22;goto B48afbb;
case 0x48afbf:c.instructions+=21;goto B48afbf;
case 0x48afc2:c.instructions+=20;goto B48afc2;
case 0x48afc6:c.instructions+=19;goto B48afc6;
case 0x48afc9:c.instructions+=18;goto B48afc9;
case 0x48afcb:c.instructions+=17;goto B48afcb;
case 0x48afcf:c.instructions+=16;goto B48afcf;
case 0x48afd2:c.instructions+=15;goto B48afd2;
case 0x48afd4:c.instructions+=14;goto B48afd4;
case 0x48afd7:c.instructions+=13;goto B48afd7;
case 0x48afda:c.instructions+=12;goto B48afda;
case 0x48afdc:c.instructions+=11;goto B48afdc;
case 0x48afe0:c.instructions+=10;goto B48afe0;
case 0x48afe4:c.instructions+=9;goto B48afe4;
case 0x48afe7:c.instructions+=8;goto B48afe7;
case 0x48afeb:c.instructions+=7;goto B48afeb;
case 0x48afee:c.instructions+=6;goto B48afee;
case 0x48aff0:c.instructions+=5;goto B48aff0;
case 0x48aff4:c.instructions+=4;goto B48aff4;
case 0x48aff7:c.instructions+=3;goto B48aff7;
case 0x48aff9:c.instructions+=2;goto B48aff9;
case 0x48affc:c.instructions+=1;goto B48affc;
default:missing_instruction(c.pc);}
B48a000:L48a000:{c.instructions+=23;NFSU2_TR(0x48a000);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B48a002:{NFSU2_TR(0x48a002);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B48a004:{NFSU2_TR(0x48a004);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a006:{NFSU2_TR(0x48a006);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B48a008:{NFSU2_TR(0x48a008);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B48a00a:{NFSU2_TR(0x48a00a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a00c:{NFSU2_TR(0x48a00c);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B48a00e:{NFSU2_TR(0x48a00e);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B48a010:{NFSU2_TR(0x48a010);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a012:{NFSU2_TR(0x48a012);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B48a014:{NFSU2_TR(0x48a014);
__asm__ volatile(".byte 0xd8,0xce":::"memory");
}
B48a016:{NFSU2_TR(0x48a016);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a018:{NFSU2_TR(0x48a018);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a01c:{NFSU2_TR(0x48a01c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48a01e:{NFSU2_TR(0x48a01e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48a020:{NFSU2_TR(0x48a020);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48a022:{NFSU2_TR(0x48a022);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48a024:{NFSU2_TR(0x48a024);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48a026:{NFSU2_TR(0x48a026);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a02a:{NFSU2_TR(0x48a02a);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B48a02c:{NFSU2_TR(0x48a02c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48a02e:{NFSU2_TR(0x48a02e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48a031:{NFSU2_TR(0x48a031);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48a039;}}
}
B48a033:L48a033:{c.instructions+=2;NFSU2_TR(0x48a033);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48a035:{NFSU2_TR(0x48a035);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a039:L48a039:{c.instructions+=55;NFSU2_TR(0x48a039);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48a03c:{NFSU2_TR(0x48a03c);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a042:{NFSU2_TR(0x48a042);
{u32 ea_=u32(r4(R+4)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a048:{NFSU2_TR(0x48a048);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B48a04c:{NFSU2_TR(0x48a04c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48a04f:{NFSU2_TR(0x48a04f);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a052:{NFSU2_TR(0x48a052);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a055:{NFSU2_TR(0x48a055);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a059:{NFSU2_TR(0x48a059);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48a05c:{NFSU2_TR(0x48a05c);
{u32 ea_=u32(r4(R+4)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a05f:{NFSU2_TR(0x48a05f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a063:{NFSU2_TR(0x48a063);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48a066:{NFSU2_TR(0x48a066);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a06a:{NFSU2_TR(0x48a06a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48a06d:{NFSU2_TR(0x48a06d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a071:{NFSU2_TR(0x48a071);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a075:{NFSU2_TR(0x48a075);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a079:{NFSU2_TR(0x48a079);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a07d:{NFSU2_TR(0x48a07d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a081:{NFSU2_TR(0x48a081);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a083:{NFSU2_TR(0x48a083);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a087:{NFSU2_TR(0x48a087);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a08b:{NFSU2_TR(0x48a08b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a08d:{NFSU2_TR(0x48a08d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a091:{NFSU2_TR(0x48a091);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a095:{NFSU2_TR(0x48a095);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a097:{NFSU2_TR(0x48a097);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a09b:{NFSU2_TR(0x48a09b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a09f:{NFSU2_TR(0x48a09f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a0a1:{NFSU2_TR(0x48a0a1);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B48a0a3:{NFSU2_TR(0x48a0a3);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B48a0a5:{NFSU2_TR(0x48a0a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a0a7:{NFSU2_TR(0x48a0a7);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B48a0a9:{NFSU2_TR(0x48a0a9);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B48a0ab:{NFSU2_TR(0x48a0ab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a0ad:{NFSU2_TR(0x48a0ad);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B48a0af:{NFSU2_TR(0x48a0af);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B48a0b1:{NFSU2_TR(0x48a0b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a0b3:{NFSU2_TR(0x48a0b3);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B48a0b5:{NFSU2_TR(0x48a0b5);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B48a0b7:{NFSU2_TR(0x48a0b7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a0b9:{NFSU2_TR(0x48a0b9);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B48a0bb:{NFSU2_TR(0x48a0bb);
__asm__ volatile(".byte 0xd8,0xce":::"memory");
}
B48a0bd:{NFSU2_TR(0x48a0bd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a0bf:{NFSU2_TR(0x48a0bf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a0c3:{NFSU2_TR(0x48a0c3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48a0c5:{NFSU2_TR(0x48a0c5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48a0c7:{NFSU2_TR(0x48a0c7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48a0c9:{NFSU2_TR(0x48a0c9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48a0cb:{NFSU2_TR(0x48a0cb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48a0cd:{NFSU2_TR(0x48a0cd);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a0d1:{NFSU2_TR(0x48a0d1);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B48a0d3:{NFSU2_TR(0x48a0d3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48a0d5:{NFSU2_TR(0x48a0d5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48a0d8:{NFSU2_TR(0x48a0d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48a0e0;}}
}
B48a0da:L48a0da:{c.instructions+=2;NFSU2_TR(0x48a0da);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48a0dc:{NFSU2_TR(0x48a0dc);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a0e0:L48a0e0:{c.instructions+=5;NFSU2_TR(0x48a0e0);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B48a0e2:{NFSU2_TR(0x48a0e2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B48a0e8:{NFSU2_TR(0x48a0e8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48a0ea:{NFSU2_TR(0x48a0ea);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48a0ed:{NFSU2_TR(0x48a0ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48a156;}}
}
B48a0ef:L48a0ef:{c.instructions+=4;NFSU2_TR(0x48a0ef);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B48a0f3:{NFSU2_TR(0x48a0f3);
__builtin_memmove((R+0),(R+8),4);
}
B48a0f5:{NFSU2_TR(0x48a0f5);
w4(R+8,u32(0x3ull));
}
B48a0fa:{NFSU2_TR(0x48a0fa);
__builtin_memmove((R+12),(R+12),4);
}
B48a100:L48a100:{c.instructions+=33;NFSU2_TR(0x48a100);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48a102:{NFSU2_TR(0x48a102);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B48a105:{NFSU2_TR(0x48a105);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B48a106:{NFSU2_TR(0x48a106);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a109:{NFSU2_TR(0x48a109);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a10c:{NFSU2_TR(0x48a10c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48a10e:{NFSU2_TR(0x48a10e);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a111:{NFSU2_TR(0x48a111);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a114:{NFSU2_TR(0x48a114);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48a116:{NFSU2_TR(0x48a116);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a119:{NFSU2_TR(0x48a119);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a11c:{NFSU2_TR(0x48a11c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48a11e:{NFSU2_TR(0x48a11e);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a121:{NFSU2_TR(0x48a121);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a124:{NFSU2_TR(0x48a124);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48a126:{NFSU2_TR(0x48a126);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a129:{NFSU2_TR(0x48a129);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a12c:{NFSU2_TR(0x48a12c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48a12e:{NFSU2_TR(0x48a12e);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a131:{NFSU2_TR(0x48a131);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a134:{NFSU2_TR(0x48a134);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48a136:{NFSU2_TR(0x48a136);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a139:{NFSU2_TR(0x48a139);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a13c:{NFSU2_TR(0x48a13c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48a13e:{NFSU2_TR(0x48a13e);
{u32 ea_=u32(r4(R+0)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a141:{NFSU2_TR(0x48a141);
{u32 ea_=u32(r4(R+0)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a144:{NFSU2_TR(0x48a144);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48a146:{NFSU2_TR(0x48a146);
{u32 ea_=u32(r4(R+0)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a149:{NFSU2_TR(0x48a149);
{u32 ea_=u32(r4(R+0)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a14c:{NFSU2_TR(0x48a14c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48a14e:{NFSU2_TR(0x48a14e);
{u32 ea_=u32(r4(R+0)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a151:{NFSU2_TR(0x48a151);
{u32 ea_=u32(r4(R+0)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a154:{NFSU2_TR(0x48a154);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48a100u);}goto L48a100;}}
}
B48a156:L48a156:{c.instructions+=4;NFSU2_TR(0x48a156);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48a158:{NFSU2_TR(0x48a158);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48a15c:{NFSU2_TR(0x48a15c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48a15e:{NFSU2_TR(0x48a15e);
if(r1(R+518)){{goto L48a26b;}}
}
B48a164:L48a164:{c.instructions+=56;NFSU2_TR(0x48a164);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48a167:{NFSU2_TR(0x48a167);
{u32 ea_=u32(r4(R+4)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a16d:{NFSU2_TR(0x48a16d);
{u32 ea_=u32(r4(R+4)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a173:{NFSU2_TR(0x48a173);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48a176:{NFSU2_TR(0x48a176);
{u32 ea_=u32(r4(R+4)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a179:{NFSU2_TR(0x48a179);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a17d:{NFSU2_TR(0x48a17d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48a180:{NFSU2_TR(0x48a180);
{u32 ea_=u32(r4(R+4)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a183:{NFSU2_TR(0x48a183);
{u32 ea_=u32(r4(R+4)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a186:{NFSU2_TR(0x48a186);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a18a:{NFSU2_TR(0x48a18a);
{u32 ea_=u32(r4(R+4)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a18d:{NFSU2_TR(0x48a18d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a191:{NFSU2_TR(0x48a191);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48a194:{NFSU2_TR(0x48a194);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a198:{NFSU2_TR(0x48a198);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a19c:{NFSU2_TR(0x48a19c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a1a0:{NFSU2_TR(0x48a1a0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a1a4:{NFSU2_TR(0x48a1a4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a1a8:{NFSU2_TR(0x48a1a8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a1aa:{NFSU2_TR(0x48a1aa);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a1ae:{NFSU2_TR(0x48a1ae);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a1b2:{NFSU2_TR(0x48a1b2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a1b4:{NFSU2_TR(0x48a1b4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a1b8:{NFSU2_TR(0x48a1b8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a1bc:{NFSU2_TR(0x48a1bc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a1be:{NFSU2_TR(0x48a1be);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B48a1c0:{NFSU2_TR(0x48a1c0);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B48a1c2:{NFSU2_TR(0x48a1c2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a1c4:{NFSU2_TR(0x48a1c4);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B48a1c6:{NFSU2_TR(0x48a1c6);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B48a1c8:{NFSU2_TR(0x48a1c8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a1ca:{NFSU2_TR(0x48a1ca);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B48a1cc:{NFSU2_TR(0x48a1cc);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B48a1ce:{NFSU2_TR(0x48a1ce);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a1d0:{NFSU2_TR(0x48a1d0);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B48a1d2:{NFSU2_TR(0x48a1d2);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B48a1d4:{NFSU2_TR(0x48a1d4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a1d6:{NFSU2_TR(0x48a1d6);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B48a1d8:{NFSU2_TR(0x48a1d8);
__asm__ volatile(".byte 0xd8,0xce":::"memory");
}
B48a1da:{NFSU2_TR(0x48a1da);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a1dc:{NFSU2_TR(0x48a1dc);
__asm__ volatile(".byte 0xd9,0xc6":::"memory");
}
B48a1de:{NFSU2_TR(0x48a1de);
__asm__ volatile(".byte 0xd8,0xcf":::"memory");
}
B48a1e0:{NFSU2_TR(0x48a1e0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a1e2:{NFSU2_TR(0x48a1e2);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B48a1e4:{NFSU2_TR(0x48a1e4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a1e8:{NFSU2_TR(0x48a1e8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48a1ea:{NFSU2_TR(0x48a1ea);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48a1ec:{NFSU2_TR(0x48a1ec);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48a1ee:{NFSU2_TR(0x48a1ee);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48a1f0:{NFSU2_TR(0x48a1f0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48a1f2:{NFSU2_TR(0x48a1f2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48a1f4:{NFSU2_TR(0x48a1f4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a1f8:{NFSU2_TR(0x48a1f8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B48a1fe:{NFSU2_TR(0x48a1fe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48a200:{NFSU2_TR(0x48a200);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48a203:{NFSU2_TR(0x48a203);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48a269;}}
}
B48a205:L48a205:{c.instructions+=32;NFSU2_TR(0x48a205);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B48a209:{NFSU2_TR(0x48a209);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48a20b:{NFSU2_TR(0x48a20b);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a20e:{NFSU2_TR(0x48a20e);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a211:{NFSU2_TR(0x48a211);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48a213:{NFSU2_TR(0x48a213);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a216:{NFSU2_TR(0x48a216);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a219:{NFSU2_TR(0x48a219);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48a21b:{NFSU2_TR(0x48a21b);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a21e:{NFSU2_TR(0x48a21e);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a221:{NFSU2_TR(0x48a221);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48a223:{NFSU2_TR(0x48a223);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a226:{NFSU2_TR(0x48a226);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a229:{NFSU2_TR(0x48a229);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48a22b:{NFSU2_TR(0x48a22b);
{u32 ea_=u32(r4(R+4)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a22e:{NFSU2_TR(0x48a22e);
{u32 ea_=u32(r4(R+4)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a231:{NFSU2_TR(0x48a231);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48a233:{NFSU2_TR(0x48a233);
{u32 ea_=u32(r4(R+4)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a236:{NFSU2_TR(0x48a236);
{u32 ea_=u32(r4(R+4)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a239:{NFSU2_TR(0x48a239);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48a23b:{NFSU2_TR(0x48a23b);
{u32 ea_=u32(r4(R+4)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a23e:{NFSU2_TR(0x48a23e);
{u32 ea_=u32(r4(R+4)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a241:{NFSU2_TR(0x48a241);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48a243:{NFSU2_TR(0x48a243);
{u32 ea_=u32(r4(R+4)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a246:{NFSU2_TR(0x48a246);
{u32 ea_=u32(r4(R+4)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a249:{NFSU2_TR(0x48a249);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48a24b:{NFSU2_TR(0x48a24b);
{u32 ea_=u32(r4(R+4)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a251:{NFSU2_TR(0x48a251);
{u32 ea_=u32(r4(R+4)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a257:{NFSU2_TR(0x48a257);
{u32 ea_=u32(r4(R+4)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a25d:{NFSU2_TR(0x48a25d);
{u32 ea_=u32(r4(R+4)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a263:{NFSU2_TR(0x48a263);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48a266:{NFSU2_TR(0x48a266);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48a269:L48a269:{c.instructions+=1;NFSU2_TR(0x48a269);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48a26b:L48a26b:{c.instructions+=2;NFSU2_TR(0x48a26b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48a26e:{NFSU2_TR(0x48a26e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48a280:L48a280:{c.instructions+=3;NFSU2_TR(0x48a280);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48a284:{NFSU2_TR(0x48a284);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x3b700ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B48a28a:{NFSU2_TR(0x48a28a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48a2ab;}}
}
B48a28c:L48a28c:{c.instructions+=8;NFSU2_TR(0x48a28c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48a28f:{NFSU2_TR(0x48a28f);
__builtin_memmove(gp(0x82dadc),(R+0),4);
}
B48a294:{NFSU2_TR(0x48a294);
w4(R+0,u32(0x8d3dcb09ull));
}
B48a299:{NFSU2_TR(0x48a299);
u8 U[32];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+0,u32(r8(U+24)));
}
B48a29c:{NFSU2_TR(0x48a29c);
u8 U[48];
w4(U+40,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+8),4);
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
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
B48a29f:{NFSU2_TR(0x48a29f);
__builtin_memmove(gp(0x82dae0),(R+8),4);
}
B48a2a5:{NFSU2_TR(0x48a2a5);
w4(R+0,u32(0x1ull));
}
B48a2aa:{NFSU2_TR(0x48a2aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48a2ab:L48a2ab:{c.instructions+=2;NFSU2_TR(0x48a2ab);
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
B48a2ad:{NFSU2_TR(0x48a2ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48a2b0:L48a2b0:{c.instructions+=5;NFSU2_TR(0x48a2b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48a2b4:{NFSU2_TR(0x48a2b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B48a2b6:{NFSU2_TR(0x48a2b6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48a2b8:{NFSU2_TR(0x48a2b8);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x3b700ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3b700ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3b700ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48a2be:{NFSU2_TR(0x48a2be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48a2cf;}}
}
B48a2c0:L48a2c0:{c.instructions+=3;NFSU2_TR(0x48a2c0);
__builtin_memmove(gp(0x82dadc),(R+0),4);
}
B48a2c5:{NFSU2_TR(0x48a2c5);
__builtin_memmove(gp(0x82dae0),(R+0),4);
}
B48a2ca:{NFSU2_TR(0x48a2ca);
w4(R+0,u32(0x1ull));
}
B48a2cf:L48a2cf:{c.instructions+=1;NFSU2_TR(0x48a2cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48a2d0:L48a2d0:{c.instructions+=5;NFSU2_TR(0x48a2d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a2d1:{NFSU2_TR(0x48a2d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a2d2:{NFSU2_TR(0x48a2d2);
__builtin_memmove((R+28),gp(0x82dadc),4);
}
B48a2d8:{NFSU2_TR(0x48a2d8);
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
B48a2da:{NFSU2_TR(0x48a2da);
if(r1(R+518)){{goto L48a2fe;}}
}
B48a2dc:L48a2dc:{c.instructions+=3;NFSU2_TR(0x48a2dc);
__builtin_memmove((R+8),gp(0x82dae0),4);
}
B48a2e2:{NFSU2_TR(0x48a2e2);
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
B48a2e4:{NFSU2_TR(0x48a2e4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48a2fe;}}
}
B48a2e6:L48a2e6:{c.instructions+=3;NFSU2_TR(0x48a2e6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48a2e8:{NFSU2_TR(0x48a2e8);
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
B48a2ea:{NFSU2_TR(0x48a2ea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48a2fe;}}
}
B48a2ec:L48a2ec:{c.instructions+=2;NFSU2_TR(0x48a2ec);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48a2f0:{NFSU2_TR(0x48a2f0);
__builtin_memmove((R+4),(R+28),4);
}
B48a2f2:L48a2f2:{c.instructions+=2;NFSU2_TR(0x48a2f2);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B48a2f4:{NFSU2_TR(0x48a2f4);
if(r1(R+518)){{goto L48a306;}}
}
B48a2f6:L48a2f6:{c.instructions+=4;NFSU2_TR(0x48a2f6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B48a2f7:{NFSU2_TR(0x48a2f7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x74ull))));
}
B48a2fa:{NFSU2_TR(0x48a2fa);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B48a2fc:{NFSU2_TR(0x48a2fc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48a2f2u);}goto L48a2f2;}}
}
B48a2fe:L48a2fe:{c.instructions+=4;NFSU2_TR(0x48a2fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48a2ff:{NFSU2_TR(0x48a2ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48a300:{NFSU2_TR(0x48a300);
w4(R+0,u32(0x7f3e10ull));
}
B48a305:{NFSU2_TR(0x48a305);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48a306:L48a306:{c.instructions+=5;NFSU2_TR(0x48a306);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x74ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B48a309:{NFSU2_TR(0x48a309);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48a30b:{NFSU2_TR(0x48a30b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48a30c:{NFSU2_TR(0x48a30c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48a30d:{NFSU2_TR(0x48a30d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48a310:L48a310:{c.instructions+=4;NFSU2_TR(0x48a310);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a314:{NFSU2_TR(0x48a314);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B48a317:{NFSU2_TR(0x48a317);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a31d:{NFSU2_TR(0x48a31d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48a322ull));
TAIL_STATIC(0x75bed4u,75b);
}
B48a322:L48a322:{c.instructions+=14;NFSU2_TR(0x48a322);
__builtin_memmove((R+4),(R+0),4);
}
B48a324:{NFSU2_TR(0x48a324);
w4(R+0,u32(0xb60b60b7ull));
}
B48a329:{NFSU2_TR(0x48a329);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B48a32b:{NFSU2_TR(0x48a32b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B48a32d:{NFSU2_TR(0x48a32d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B48a330:{NFSU2_TR(0x48a330);
__builtin_memmove((R+0),(R+8),4);
}
B48a332:{NFSU2_TR(0x48a332);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B48a335:{NFSU2_TR(0x48a335);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B48a337:{NFSU2_TR(0x48a337);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a338:{NFSU2_TR(0x48a338);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48a33c:{NFSU2_TR(0x48a33c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a33d:{NFSU2_TR(0x48a33d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B48a341:{NFSU2_TR(0x48a341);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a342:{NFSU2_TR(0x48a342);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48a347ull));
TAIL_STATIC(0x43c390u,43c);
}
B48a347:L48a347:{c.instructions+=3;NFSU2_TR(0x48a347);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a34b:{NFSU2_TR(0x48a34b);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a351:{NFSU2_TR(0x48a351);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48a356ull));
TAIL_STATIC(0x75bed4u,75b);
}
B48a356:L48a356:{c.instructions+=14;NFSU2_TR(0x48a356);
__builtin_memmove((R+4),(R+0),4);
}
B48a358:{NFSU2_TR(0x48a358);
w4(R+0,u32(0xb60b60b7ull));
}
B48a35d:{NFSU2_TR(0x48a35d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B48a35f:{NFSU2_TR(0x48a35f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B48a361:{NFSU2_TR(0x48a361);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B48a364:{NFSU2_TR(0x48a364);
__builtin_memmove((R+0),(R+8),4);
}
B48a366:{NFSU2_TR(0x48a366);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B48a369:{NFSU2_TR(0x48a369);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B48a36b:{NFSU2_TR(0x48a36b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a36c:{NFSU2_TR(0x48a36c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48a370:{NFSU2_TR(0x48a370);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a371:{NFSU2_TR(0x48a371);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B48a375:{NFSU2_TR(0x48a375);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a376:{NFSU2_TR(0x48a376);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48a37bull));
TAIL_STATIC(0x43c390u,43c);
}
B48a37b:L48a37b:{c.instructions+=14;NFSU2_TR(0x48a37b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48a37f:{NFSU2_TR(0x48a37f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a383:{NFSU2_TR(0x48a383);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a387:{NFSU2_TR(0x48a387);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a38b:{NFSU2_TR(0x48a38b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a38d:{NFSU2_TR(0x48a38d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a391:{NFSU2_TR(0x48a391);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a395:{NFSU2_TR(0x48a395);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a399:{NFSU2_TR(0x48a399);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a39c:{NFSU2_TR(0x48a39c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a3a0:{NFSU2_TR(0x48a3a0);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a3a4:{NFSU2_TR(0x48a3a4);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a3a7:{NFSU2_TR(0x48a3a7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48a3aa:{NFSU2_TR(0x48a3aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48a3b0:L48a3b0:{c.instructions+=7;NFSU2_TR(0x48a3b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a3b1:{NFSU2_TR(0x48a3b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a3b2:{NFSU2_TR(0x48a3b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48a3b6:{NFSU2_TR(0x48a3b6);
__builtin_memmove((R+24),(R+4),4);
}
B48a3b8:{NFSU2_TR(0x48a3b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a3b9:{NFSU2_TR(0x48a3b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a3ba:{NFSU2_TR(0x48a3ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48a3bfull));
TAIL_STATIC(0x4012b0u,401);
}
B48a3bf:L48a3bf:{c.instructions+=5;NFSU2_TR(0x48a3bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48a3c2:{NFSU2_TR(0x48a3c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a3c3:{NFSU2_TR(0x48a3c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B48a3c6:{NFSU2_TR(0x48a3c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a3c7:{NFSU2_TR(0x48a3c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48a3ccull));
TAIL_STATIC(0x4012b0u,401);
}
B48a3cc:L48a3cc:{c.instructions+=5;NFSU2_TR(0x48a3cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((R+8),(U+0),4);
}
B48a3d2:{NFSU2_TR(0x48a3d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a3d3:{NFSU2_TR(0x48a3d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48a3d9:{NFSU2_TR(0x48a3d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a3da:{NFSU2_TR(0x48a3da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48a3dfull));
TAIL_STATIC(0x4012b0u,401);
}
B48a3df:L48a3df:{c.instructions+=24;NFSU2_TR(0x48a3df);
{u32 ea_=u32(r4(R+28)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a3e5:{NFSU2_TR(0x48a3e5);
{u32 ea_=u32(r4(R+28)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a3eb:{NFSU2_TR(0x48a3eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48a3f1:{NFSU2_TR(0x48a3f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48a3f7:{NFSU2_TR(0x48a3f7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48a3f9:{NFSU2_TR(0x48a3f9);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a3ff:{NFSU2_TR(0x48a3ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a405:{NFSU2_TR(0x48a405);
__builtin_memmove((R+0),(R+4),4);
}
B48a407:{NFSU2_TR(0x48a407);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a40d:{NFSU2_TR(0x48a40d);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a413:{NFSU2_TR(0x48a413);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a417:{NFSU2_TR(0x48a417);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48a41d:{NFSU2_TR(0x48a41d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a423:{NFSU2_TR(0x48a423);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48a429:{NFSU2_TR(0x48a429);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a42f:{NFSU2_TR(0x48a42f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48a435:{NFSU2_TR(0x48a435);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a43b:{NFSU2_TR(0x48a43b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48a441:{NFSU2_TR(0x48a441);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B48a447:{NFSU2_TR(0x48a447);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a448:{NFSU2_TR(0x48a448);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48a44e:{NFSU2_TR(0x48a44e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a44f:{NFSU2_TR(0x48a44f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a455:{NFSU2_TR(0x48a455);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48a45aull));
TAIL_STATIC(0x4012b0u,401);
}
B48a45a:L48a45a:{c.instructions+=115;NFSU2_TR(0x48a45a);
{u32 ea_=u32(r4(R+28)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a460:{NFSU2_TR(0x48a460);
{u32 ea_=u32(r4(R+28)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a466:{NFSU2_TR(0x48a466);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48a46c:{NFSU2_TR(0x48a46c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48a472:{NFSU2_TR(0x48a472);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48a474:{NFSU2_TR(0x48a474);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a47a:{NFSU2_TR(0x48a47a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a480:{NFSU2_TR(0x48a480);
__builtin_memmove((R+0),(R+4),4);
}
B48a482:{NFSU2_TR(0x48a482);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a488:{NFSU2_TR(0x48a488);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a48e:{NFSU2_TR(0x48a48e);
{u32 ea_=u32(r4(R+28)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a494:{NFSU2_TR(0x48a494);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48a49a:{NFSU2_TR(0x48a49a);
{u32 ea_=u32(r4(R+28)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a4a0:{NFSU2_TR(0x48a4a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a4a4:{NFSU2_TR(0x48a4a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48a4aa:{NFSU2_TR(0x48a4aa);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48a4ac:{NFSU2_TR(0x48a4ac);
{u32 ea_=u32(r4(R+24)+u32(308u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a4b2:{NFSU2_TR(0x48a4b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a4b8:{NFSU2_TR(0x48a4b8);
__builtin_memmove((R+0),(R+4),4);
}
B48a4ba:{NFSU2_TR(0x48a4ba);
{u32 ea_=u32(r4(R+24)+u32(312u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a4c0:{NFSU2_TR(0x48a4c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a4c6:{NFSU2_TR(0x48a4c6);
{u32 ea_=u32(r4(R+28)+u32(324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a4cc:{NFSU2_TR(0x48a4cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48a4d2:{NFSU2_TR(0x48a4d2);
{u32 ea_=u32(r4(R+28)+u32(328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a4d8:{NFSU2_TR(0x48a4d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a4dc:{NFSU2_TR(0x48a4dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48a4e2:{NFSU2_TR(0x48a4e2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48a4e4:{NFSU2_TR(0x48a4e4);
{u32 ea_=u32(r4(R+24)+u32(324u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a4ea:{NFSU2_TR(0x48a4ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a4f0:{NFSU2_TR(0x48a4f0);
__builtin_memmove((R+0),(R+4),4);
}
B48a4f2:{NFSU2_TR(0x48a4f2);
{u32 ea_=u32(r4(R+24)+u32(328u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a4f8:{NFSU2_TR(0x48a4f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a4fe:{NFSU2_TR(0x48a4fe);
{u32 ea_=u32(r4(R+28)+u32(340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a504:{NFSU2_TR(0x48a504);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48a50a:{NFSU2_TR(0x48a50a);
{u32 ea_=u32(r4(R+28)+u32(344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a510:{NFSU2_TR(0x48a510);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a514:{NFSU2_TR(0x48a514);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48a51a:{NFSU2_TR(0x48a51a);
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
B48a51d:{NFSU2_TR(0x48a51d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a521:{NFSU2_TR(0x48a521);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a527:{NFSU2_TR(0x48a527);
__builtin_memmove((R+0),(R+4),4);
}
B48a529:{NFSU2_TR(0x48a529);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48a52b:{NFSU2_TR(0x48a52b);
{u32 ea_=u32(r4(R+24)+u32(340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a531:{NFSU2_TR(0x48a531);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a537:{NFSU2_TR(0x48a537);
{u32 ea_=u32(r4(R+24)+u32(344u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a53d:{NFSU2_TR(0x48a53d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48a543:{NFSU2_TR(0x48a543);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a549:{NFSU2_TR(0x48a549);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48a54f:{NFSU2_TR(0x48a54f);
{u32 ea_=u32(r4(R+28)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a555:{NFSU2_TR(0x48a555);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a55b:{NFSU2_TR(0x48a55b);
__builtin_memmove((R+0),(R+4),4);
}
B48a55d:{NFSU2_TR(0x48a55d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48a55f:{NFSU2_TR(0x48a55f);
{u32 ea_=u32(r4(R+24)+u32(356u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a565:{NFSU2_TR(0x48a565);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a56b:{NFSU2_TR(0x48a56b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a56f:{NFSU2_TR(0x48a56f);
{u32 ea_=u32(r4(R+24)+u32(360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a575:{NFSU2_TR(0x48a575);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48a57b:{NFSU2_TR(0x48a57b);
{u32 ea_=u32(r4(R+28)+u32(372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a581:{NFSU2_TR(0x48a581);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48a587:{NFSU2_TR(0x48a587);
{u32 ea_=u32(r4(R+28)+u32(376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a58d:{NFSU2_TR(0x48a58d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a593:{NFSU2_TR(0x48a593);
__builtin_memmove((R+0),(R+4),4);
}
B48a595:{NFSU2_TR(0x48a595);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48a597:{NFSU2_TR(0x48a597);
{u32 ea_=u32(r4(R+24)+u32(372u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a59d:{NFSU2_TR(0x48a59d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a5a3:{NFSU2_TR(0x48a5a3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a5a7:{NFSU2_TR(0x48a5a7);
{u32 ea_=u32(r4(R+24)+u32(376u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a5ad:{NFSU2_TR(0x48a5ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48a5b3:{NFSU2_TR(0x48a5b3);
{u32 ea_=u32(r4(R+28)+u32(388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a5b9:{NFSU2_TR(0x48a5b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48a5bf:{NFSU2_TR(0x48a5bf);
{u32 ea_=u32(r4(R+28)+u32(392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a5c5:{NFSU2_TR(0x48a5c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a5cb:{NFSU2_TR(0x48a5cb);
__builtin_memmove((R+0),(R+4),4);
}
B48a5cd:{NFSU2_TR(0x48a5cd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48a5cf:{NFSU2_TR(0x48a5cf);
{u32 ea_=u32(r4(R+24)+u32(388u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a5d5:{NFSU2_TR(0x48a5d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a5db:{NFSU2_TR(0x48a5db);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a5df:{NFSU2_TR(0x48a5df);
{u32 ea_=u32(r4(R+24)+u32(392u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a5e5:{NFSU2_TR(0x48a5e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x19cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48a5eb:{NFSU2_TR(0x48a5eb);
{u32 ea_=u32(r4(R+28)+u32(404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a5f1:{NFSU2_TR(0x48a5f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x190ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48a5f7:{NFSU2_TR(0x48a5f7);
{u32 ea_=u32(r4(R+28)+u32(408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a5fd:{NFSU2_TR(0x48a5fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a603:{NFSU2_TR(0x48a603);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48a605:{NFSU2_TR(0x48a605);
__builtin_memmove((R+0),(R+4),4);
}
B48a607:{NFSU2_TR(0x48a607);
{u32 ea_=u32(r4(R+24)+u32(404u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a60d:{NFSU2_TR(0x48a60d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a613:{NFSU2_TR(0x48a613);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a617:{NFSU2_TR(0x48a617);
{u32 ea_=u32(r4(R+24)+u32(408u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a61d:{NFSU2_TR(0x48a61d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48a623:{NFSU2_TR(0x48a623);
{u32 ea_=u32(r4(R+28)+u32(420u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a629:{NFSU2_TR(0x48a629);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48a62f:{NFSU2_TR(0x48a62f);
{u32 ea_=u32(r4(R+28)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a635:{NFSU2_TR(0x48a635);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a63b:{NFSU2_TR(0x48a63b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48a63d:{NFSU2_TR(0x48a63d);
__builtin_memmove((R+0),(R+4),4);
}
B48a63f:{NFSU2_TR(0x48a63f);
{u32 ea_=u32(r4(R+24)+u32(420u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a645:{NFSU2_TR(0x48a645);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1acull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a64b:{NFSU2_TR(0x48a64b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a64f:{NFSU2_TR(0x48a64f);
{u32 ea_=u32(r4(R+24)+u32(424u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a655:{NFSU2_TR(0x48a655);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48a65b:{NFSU2_TR(0x48a65b);
{u32 ea_=u32(r4(R+28)+u32(436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a661:{NFSU2_TR(0x48a661);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48a667:{NFSU2_TR(0x48a667);
{u32 ea_=u32(r4(R+28)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a66d:{NFSU2_TR(0x48a66d);
__builtin_memmove((R+0),(R+4),4);
}
B48a66f:{NFSU2_TR(0x48a66f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48a671:{NFSU2_TR(0x48a671);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a677:{NFSU2_TR(0x48a677);
{u32 ea_=u32(r4(R+24)+u32(436u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a67d:{NFSU2_TR(0x48a67d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48a67e:{NFSU2_TR(0x48a67e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a684:{NFSU2_TR(0x48a684);
{u32 ea_=u32(r4(R+24)+u32(440u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a68a:{NFSU2_TR(0x48a68a);
__builtin_memmove((R+0),(R+24),4);
}
B48a68c:{NFSU2_TR(0x48a68c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a690:{NFSU2_TR(0x48a690);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48a691:{NFSU2_TR(0x48a691);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48a6a0:L48a6a0:{c.instructions+=12;NFSU2_TR(0x48a6a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a6a1:{NFSU2_TR(0x48a6a1);
__builtin_memmove((R+20),(R+16),4);
}
B48a6a3:{NFSU2_TR(0x48a6a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B48a6a6:{NFSU2_TR(0x48a6a6);
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
B48a6ac:{NFSU2_TR(0x48a6ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a6ad:{NFSU2_TR(0x48a6ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a6ae:{NFSU2_TR(0x48a6ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48a6b1:{NFSU2_TR(0x48a6b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a6b2:{NFSU2_TR(0x48a6b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48a6b6:{NFSU2_TR(0x48a6b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a6b7:{NFSU2_TR(0x48a6b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a6b8:{NFSU2_TR(0x48a6b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48a6bdull));
TAIL_STATIC(0x5bb190u,5bb);
}
B48a6bd:L48a6bd:{c.instructions+=5;NFSU2_TR(0x48a6bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48a6c0:{NFSU2_TR(0x48a6c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48a6c3:{NFSU2_TR(0x48a6c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48a6c6:{NFSU2_TR(0x48a6c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48a6c8:{NFSU2_TR(0x48a6c8);
if(r1(R+518)){{goto L48a894;}}
}
B48a6ce:L48a6ce:{c.instructions+=60;NFSU2_TR(0x48a6ce);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a6d0:{NFSU2_TR(0x48a6d0);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48a6d3:{NFSU2_TR(0x48a6d3);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a6d6:{NFSU2_TR(0x48a6d6);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48a6d9:{NFSU2_TR(0x48a6d9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a6dd:{NFSU2_TR(0x48a6dd);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a6e0:{NFSU2_TR(0x48a6e0);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48a6e3:{NFSU2_TR(0x48a6e3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a6e7:{NFSU2_TR(0x48a6e7);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a6ee:{NFSU2_TR(0x48a6ee);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a6f2:{NFSU2_TR(0x48a6f2);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a6f9:{NFSU2_TR(0x48a6f9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a6fd:{NFSU2_TR(0x48a6fd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a6ff:{NFSU2_TR(0x48a6ff);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a703:{NFSU2_TR(0x48a703);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B48a705:{NFSU2_TR(0x48a705);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a707:{NFSU2_TR(0x48a707);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48a70e:{NFSU2_TR(0x48a70e);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a715:{NFSU2_TR(0x48a715);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a719:{NFSU2_TR(0x48a719);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a720:{NFSU2_TR(0x48a720);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a724:{NFSU2_TR(0x48a724);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a726:{NFSU2_TR(0x48a726);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a72a:{NFSU2_TR(0x48a72a);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B48a72c:{NFSU2_TR(0x48a72c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a72e:{NFSU2_TR(0x48a72e);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48a735:{NFSU2_TR(0x48a735);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a73c:{NFSU2_TR(0x48a73c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a740:{NFSU2_TR(0x48a740);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a747:{NFSU2_TR(0x48a747);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a74b:{NFSU2_TR(0x48a74b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a74d:{NFSU2_TR(0x48a74d);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a751:{NFSU2_TR(0x48a751);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B48a753:{NFSU2_TR(0x48a753);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a755:{NFSU2_TR(0x48a755);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48a75c:{NFSU2_TR(0x48a75c);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a763:{NFSU2_TR(0x48a763);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48a76a:{NFSU2_TR(0x48a76a);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a771:{NFSU2_TR(0x48a771);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a775:{NFSU2_TR(0x48a775);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a779:{NFSU2_TR(0x48a779);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a780:{NFSU2_TR(0x48a780);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a784:{NFSU2_TR(0x48a784);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a786:{NFSU2_TR(0x48a786);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a78a:{NFSU2_TR(0x48a78a);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B48a78c:{NFSU2_TR(0x48a78c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a78e:{NFSU2_TR(0x48a78e);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48a795:{NFSU2_TR(0x48a795);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a79c:{NFSU2_TR(0x48a79c);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48a7a3:{NFSU2_TR(0x48a7a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a7a7:{NFSU2_TR(0x48a7a7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48a7a9:{NFSU2_TR(0x48a7a9);
__builtin_memmove((R+8),gp(0x8654a4),4);
}
B48a7af:{NFSU2_TR(0x48a7af);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a7b3:{NFSU2_TR(0x48a7b3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48a7b6:{NFSU2_TR(0x48a7b6);
__builtin_memmove((R+0),(R+518),1);
}
B48a7b9:{NFSU2_TR(0x48a7b9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a7bd:{NFSU2_TR(0x48a7bd);
w4(R+0,u32(r1(R+0)));
}
B48a7c0:{NFSU2_TR(0x48a7c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48a7c2:{NFSU2_TR(0x48a7c2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48a7c4:{NFSU2_TR(0x48a7c4);
if(r1(R+518)){{goto L48a7d8;}}
}
B48a7c6:L48a7c6:{c.instructions+=4;NFSU2_TR(0x48a7c6);
__builtin_memmove((R+4),gp(0x78d794),4);
}
B48a7cc:{NFSU2_TR(0x48a7cc);
{u32 ea_=u32(u32(7919504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a7d2:{NFSU2_TR(0x48a7d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a7d6:{NFSU2_TR(0x48a7d6);
{goto L48a7e8;}
}
B48a7d8:L48a7d8:{c.instructions+=3;NFSU2_TR(0x48a7d8);
__builtin_memmove((R+8),gp(0x78d78c),4);
}
B48a7de:{NFSU2_TR(0x48a7de);
{u32 ea_=u32(u32(7919496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a7e4:{NFSU2_TR(0x48a7e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a7e8:L48a7e8:{c.instructions+=17;NFSU2_TR(0x48a7e8);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a7ec:{NFSU2_TR(0x48a7ec);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a7f0:{NFSU2_TR(0x48a7f0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a7f4:{NFSU2_TR(0x48a7f4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a7f8:{NFSU2_TR(0x48a7f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a7fa:{NFSU2_TR(0x48a7fa);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a7fe:{NFSU2_TR(0x48a7fe);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a802:{NFSU2_TR(0x48a802);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a804:{NFSU2_TR(0x48a804);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a808:{NFSU2_TR(0x48a808);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a80c:{NFSU2_TR(0x48a80c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a80e:{NFSU2_TR(0x48a80e);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B48a810:{NFSU2_TR(0x48a810);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B48a814:{NFSU2_TR(0x48a814);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B48a816:{NFSU2_TR(0x48a816);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48a818:{NFSU2_TR(0x48a818);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B48a81b:{NFSU2_TR(0x48a81b);
if(r1(R+514)){{goto L48a823;}}
}
B48a81d:L48a81d:{c.instructions+=2;NFSU2_TR(0x48a81d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a821:{NFSU2_TR(0x48a821);
{goto L48a83c;}
}
B48a823:L48a823:{c.instructions+=6;NFSU2_TR(0x48a823);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48a825:{NFSU2_TR(0x48a825);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a829:{NFSU2_TR(0x48a829);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48a82d:{NFSU2_TR(0x48a82d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48a82f:{NFSU2_TR(0x48a82f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48a832:{NFSU2_TR(0x48a832);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48a83c;}}
}
B48a834:L48a834:{c.instructions+=2;NFSU2_TR(0x48a834);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48a838:{NFSU2_TR(0x48a838);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a83c:L48a83c:{c.instructions+=6;NFSU2_TR(0x48a83c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48a840:{NFSU2_TR(0x48a840);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a841:{NFSU2_TR(0x48a841);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B48a845:{NFSU2_TR(0x48a845);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48a846:{NFSU2_TR(0x48a846);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48a84e:{NFSU2_TR(0x48a84e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48a853ull));
TAIL_STATIC(0x43d010u,43d);
}
B48a853:L48a853:{c.instructions+=14;NFSU2_TR(0x48a853);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a857:{NFSU2_TR(0x48a857);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a85b:{NFSU2_TR(0x48a85b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48a85e:{NFSU2_TR(0x48a85e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a862:{NFSU2_TR(0x48a862);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48a86c:{NFSU2_TR(0x48a86c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a870:{NFSU2_TR(0x48a870);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a874:{NFSU2_TR(0x48a874);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a878:{NFSU2_TR(0x48a878);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a87c:{NFSU2_TR(0x48a87c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48a880:{NFSU2_TR(0x48a880);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48a882:{NFSU2_TR(0x48a882);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48a888:{NFSU2_TR(0x48a888);
{u32 ea_=u32(r4(R+12)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a88e:{NFSU2_TR(0x48a88e);
{u32 ea_=u32(r4(R+12)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a894:L48a894:{c.instructions+=3;NFSU2_TR(0x48a894);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48a897:{NFSU2_TR(0x48a897);
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
B48a899:{NFSU2_TR(0x48a899);
if(r1(R+518)){{goto L48aafc;}}
}
B48a89f:L48a89f:{c.instructions+=2;NFSU2_TR(0x48a89f);
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
B48a8a1:{NFSU2_TR(0x48a8a1);
if(r1(R+518)){{goto L48aafc;}}
}
B48a8a7:L48a8a7:{c.instructions+=197;NFSU2_TR(0x48a8a7);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a8a9:{NFSU2_TR(0x48a8a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48a8af:{NFSU2_TR(0x48a8af);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a8b1:{NFSU2_TR(0x48a8b1);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a8b4:{NFSU2_TR(0x48a8b4);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a8b7:{NFSU2_TR(0x48a8b7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a8b9:{NFSU2_TR(0x48a8b9);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a8bc:{NFSU2_TR(0x48a8bc);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a8bf:{NFSU2_TR(0x48a8bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a8c1:{NFSU2_TR(0x48a8c1);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a8c4:{NFSU2_TR(0x48a8c4);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a8c7:{NFSU2_TR(0x48a8c7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a8c9:{NFSU2_TR(0x48a8c9);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a8cd:{NFSU2_TR(0x48a8cd);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a8cf:{NFSU2_TR(0x48a8cf);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a8d2:{NFSU2_TR(0x48a8d2);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a8d5:{NFSU2_TR(0x48a8d5);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a8d8:{NFSU2_TR(0x48a8d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a8da:{NFSU2_TR(0x48a8da);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a8dd:{NFSU2_TR(0x48a8dd);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a8e0:{NFSU2_TR(0x48a8e0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a8e2:{NFSU2_TR(0x48a8e2);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a8e5:{NFSU2_TR(0x48a8e5);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a8e8:{NFSU2_TR(0x48a8e8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a8ea:{NFSU2_TR(0x48a8ea);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a8ee:{NFSU2_TR(0x48a8ee);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a8f1:{NFSU2_TR(0x48a8f1);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a8f4:{NFSU2_TR(0x48a8f4);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a8f7:{NFSU2_TR(0x48a8f7);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a8fa:{NFSU2_TR(0x48a8fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a8fc:{NFSU2_TR(0x48a8fc);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a8fe:{NFSU2_TR(0x48a8fe);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a901:{NFSU2_TR(0x48a901);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a903:{NFSU2_TR(0x48a903);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a906:{NFSU2_TR(0x48a906);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a909:{NFSU2_TR(0x48a909);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a90b:{NFSU2_TR(0x48a90b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a90f:{NFSU2_TR(0x48a90f);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a912:{NFSU2_TR(0x48a912);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a915:{NFSU2_TR(0x48a915);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a918:{NFSU2_TR(0x48a918);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a91b:{NFSU2_TR(0x48a91b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a91d:{NFSU2_TR(0x48a91d);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a920:{NFSU2_TR(0x48a920);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a922:{NFSU2_TR(0x48a922);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a924:{NFSU2_TR(0x48a924);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a927:{NFSU2_TR(0x48a927);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a92a:{NFSU2_TR(0x48a92a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a92c:{NFSU2_TR(0x48a92c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a930:{NFSU2_TR(0x48a930);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a933:{NFSU2_TR(0x48a933);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a936:{NFSU2_TR(0x48a936);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a939:{NFSU2_TR(0x48a939);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a93c:{NFSU2_TR(0x48a93c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a93e:{NFSU2_TR(0x48a93e);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a941:{NFSU2_TR(0x48a941);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a944:{NFSU2_TR(0x48a944);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a946:{NFSU2_TR(0x48a946);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a949:{NFSU2_TR(0x48a949);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a94b:{NFSU2_TR(0x48a94b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a94d:{NFSU2_TR(0x48a94d);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a951:{NFSU2_TR(0x48a951);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a954:{NFSU2_TR(0x48a954);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a957:{NFSU2_TR(0x48a957);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a95a:{NFSU2_TR(0x48a95a);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a95d:{NFSU2_TR(0x48a95d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a95f:{NFSU2_TR(0x48a95f);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a962:{NFSU2_TR(0x48a962);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a965:{NFSU2_TR(0x48a965);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a967:{NFSU2_TR(0x48a967);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a96a:{NFSU2_TR(0x48a96a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a96d:{NFSU2_TR(0x48a96d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a96f:{NFSU2_TR(0x48a96f);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a973:{NFSU2_TR(0x48a973);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a976:{NFSU2_TR(0x48a976);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a979:{NFSU2_TR(0x48a979);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a97c:{NFSU2_TR(0x48a97c);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a97f:{NFSU2_TR(0x48a97f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a981:{NFSU2_TR(0x48a981);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a984:{NFSU2_TR(0x48a984);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a987:{NFSU2_TR(0x48a987);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a989:{NFSU2_TR(0x48a989);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a98c:{NFSU2_TR(0x48a98c);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a98f:{NFSU2_TR(0x48a98f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a991:{NFSU2_TR(0x48a991);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a995:{NFSU2_TR(0x48a995);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a998:{NFSU2_TR(0x48a998);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a99b:{NFSU2_TR(0x48a99b);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a99e:{NFSU2_TR(0x48a99e);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a9a1:{NFSU2_TR(0x48a9a1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a9a3:{NFSU2_TR(0x48a9a3);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a9a6:{NFSU2_TR(0x48a9a6);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a9a9:{NFSU2_TR(0x48a9a9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a9ab:{NFSU2_TR(0x48a9ab);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a9ae:{NFSU2_TR(0x48a9ae);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a9b1:{NFSU2_TR(0x48a9b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a9b3:{NFSU2_TR(0x48a9b3);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a9b7:{NFSU2_TR(0x48a9b7);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a9ba:{NFSU2_TR(0x48a9ba);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a9bd:{NFSU2_TR(0x48a9bd);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a9c0:{NFSU2_TR(0x48a9c0);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a9c3:{NFSU2_TR(0x48a9c3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a9c5:{NFSU2_TR(0x48a9c5);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a9c8:{NFSU2_TR(0x48a9c8);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a9cb:{NFSU2_TR(0x48a9cb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a9cd:{NFSU2_TR(0x48a9cd);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a9d0:{NFSU2_TR(0x48a9d0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a9d2:{NFSU2_TR(0x48a9d2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a9d4:{NFSU2_TR(0x48a9d4);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a9d8:{NFSU2_TR(0x48a9d8);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a9db:{NFSU2_TR(0x48a9db);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a9de:{NFSU2_TR(0x48a9de);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a9e1:{NFSU2_TR(0x48a9e1);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a9e4:{NFSU2_TR(0x48a9e4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a9e6:{NFSU2_TR(0x48a9e6);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a9e9:{NFSU2_TR(0x48a9e9);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a9ec:{NFSU2_TR(0x48a9ec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a9ee:{NFSU2_TR(0x48a9ee);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a9f1:{NFSU2_TR(0x48a9f1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48a9f4:{NFSU2_TR(0x48a9f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48a9f6:{NFSU2_TR(0x48a9f6);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48a9fa:{NFSU2_TR(0x48a9fa);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48a9fd:{NFSU2_TR(0x48a9fd);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aa00:{NFSU2_TR(0x48aa00);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aa03:{NFSU2_TR(0x48aa03);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aa06:{NFSU2_TR(0x48aa06);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48aa08:{NFSU2_TR(0x48aa08);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aa0b:{NFSU2_TR(0x48aa0b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aa0e:{NFSU2_TR(0x48aa0e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48aa10:{NFSU2_TR(0x48aa10);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aa13:{NFSU2_TR(0x48aa13);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aa16:{NFSU2_TR(0x48aa16);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48aa18:{NFSU2_TR(0x48aa18);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48aa1c:{NFSU2_TR(0x48aa1c);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aa1f:{NFSU2_TR(0x48aa1f);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aa22:{NFSU2_TR(0x48aa22);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aa25:{NFSU2_TR(0x48aa25);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aa28:{NFSU2_TR(0x48aa28);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48aa2a:{NFSU2_TR(0x48aa2a);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aa2d:{NFSU2_TR(0x48aa2d);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aa30:{NFSU2_TR(0x48aa30);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48aa32:{NFSU2_TR(0x48aa32);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aa35:{NFSU2_TR(0x48aa35);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aa38:{NFSU2_TR(0x48aa38);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48aa3a:{NFSU2_TR(0x48aa3a);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48aa3e:{NFSU2_TR(0x48aa3e);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aa41:{NFSU2_TR(0x48aa41);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aa43:{NFSU2_TR(0x48aa43);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aa46:{NFSU2_TR(0x48aa46);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aa49:{NFSU2_TR(0x48aa49);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48aa4b:{NFSU2_TR(0x48aa4b);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aa4e:{NFSU2_TR(0x48aa4e);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aa51:{NFSU2_TR(0x48aa51);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48aa53:{NFSU2_TR(0x48aa53);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aa56:{NFSU2_TR(0x48aa56);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aa59:{NFSU2_TR(0x48aa59);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48aa5b:{NFSU2_TR(0x48aa5b);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48aa5f:{NFSU2_TR(0x48aa5f);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aa62:{NFSU2_TR(0x48aa62);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aa65:{NFSU2_TR(0x48aa65);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aa68:{NFSU2_TR(0x48aa68);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aa6b:{NFSU2_TR(0x48aa6b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48aa6d:{NFSU2_TR(0x48aa6d);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aa70:{NFSU2_TR(0x48aa70);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aa73:{NFSU2_TR(0x48aa73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48aa75:{NFSU2_TR(0x48aa75);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aa78:{NFSU2_TR(0x48aa78);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aa7b:{NFSU2_TR(0x48aa7b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48aa7d:{NFSU2_TR(0x48aa7d);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48aa81:{NFSU2_TR(0x48aa81);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aa84:{NFSU2_TR(0x48aa84);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aa87:{NFSU2_TR(0x48aa87);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aa8a:{NFSU2_TR(0x48aa8a);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aa8d:{NFSU2_TR(0x48aa8d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48aa8f:{NFSU2_TR(0x48aa8f);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aa92:{NFSU2_TR(0x48aa92);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aa95:{NFSU2_TR(0x48aa95);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48aa97:{NFSU2_TR(0x48aa97);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aa9a:{NFSU2_TR(0x48aa9a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aa9d:{NFSU2_TR(0x48aa9d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48aa9f:{NFSU2_TR(0x48aa9f);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48aaa3:{NFSU2_TR(0x48aaa3);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aaa6:{NFSU2_TR(0x48aaa6);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aaa9:{NFSU2_TR(0x48aaa9);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aaac:{NFSU2_TR(0x48aaac);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aaaf:{NFSU2_TR(0x48aaaf);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48aab3:{NFSU2_TR(0x48aab3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48aab4:{NFSU2_TR(0x48aab4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48aab5:{NFSU2_TR(0x48aab5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48aab7:{NFSU2_TR(0x48aab7);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aaba:{NFSU2_TR(0x48aaba);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aabd:{NFSU2_TR(0x48aabd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48aabf:{NFSU2_TR(0x48aabf);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aac2:{NFSU2_TR(0x48aac2);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aac5:{NFSU2_TR(0x48aac5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48aac7:{NFSU2_TR(0x48aac7);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48aacb:{NFSU2_TR(0x48aacb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48aad0ull));
TAIL_STATIC(0x4012b0u,401);
}
B48aad0:L48aad0:{c.instructions+=12;NFSU2_TR(0x48aad0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48aad3:{NFSU2_TR(0x48aad3);
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
B48aad5:{NFSU2_TR(0x48aad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48aad8:{NFSU2_TR(0x48aad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48aadb:{NFSU2_TR(0x48aadb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48aade:{NFSU2_TR(0x48aade);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48aae4:{NFSU2_TR(0x48aae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48aae7:{NFSU2_TR(0x48aae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48aaed:{NFSU2_TR(0x48aaed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48aaf0:{NFSU2_TR(0x48aaf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48aaf6:{NFSU2_TR(0x48aaf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48aaf9:{NFSU2_TR(0x48aaf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48aafc:L48aafc:{c.instructions+=7;NFSU2_TR(0x48aafc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48aafd:{NFSU2_TR(0x48aafd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48aafe:{NFSU2_TR(0x48aafe);
w4(R+0,u32(0x1ull));
}
B48ab03:{NFSU2_TR(0x48ab03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48ab04:{NFSU2_TR(0x48ab04);
__builtin_memmove((R+16),(R+20),4);
}
B48ab06:{NFSU2_TR(0x48ab06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48ab07:{NFSU2_TR(0x48ab07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48ab10:L48ab10:{c.instructions+=4;NFSU2_TR(0x48ab10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ab11:{NFSU2_TR(0x48ab11);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48ab15:{NFSU2_TR(0x48ab15);
w4(R+4,u32(0x70ull));
}
B48ab1a:{NFSU2_TR(0x48ab1a);
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
B48ab1c:L48ab1c:{c.instructions+=1;NFSU2_TR(0x48ab1c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L48ab1e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48ab1cu);}goto L48ab1c;}
}
B48ab1e:L48ab1e:{c.instructions+=2;NFSU2_TR(0x48ab1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48ab1f:{NFSU2_TR(0x48ab1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48ab20:L48ab20:{c.instructions+=6;NFSU2_TR(0x48ab20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ab24:{NFSU2_TR(0x48ab24);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82dae8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B48ab2b:{NFSU2_TR(0x48ab2b);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f3d44ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+4))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B48ab32:{NFSU2_TR(0x48ab32);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ab33:{NFSU2_TR(0x48ab33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82dae8ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B48ab3a:{NFSU2_TR(0x48ab3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48ab40;}}
}
B48ab3c:L48ab3c:{c.instructions+=3;NFSU2_TR(0x48ab3c);
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
B48ab3e:{NFSU2_TR(0x48ab3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48ab3f:{NFSU2_TR(0x48ab3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48ab40:L48ab40:{c.instructions+=9;NFSU2_TR(0x48ab40);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B48ab44:{NFSU2_TR(0x48ab44);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xc8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B48ab4a:{NFSU2_TR(0x48ab4a);
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B48ab4c:{NFSU2_TR(0x48ab4c);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48ab4d:{NFSU2_TR(0x48ab4d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82d398ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48ab53:{NFSU2_TR(0x48ab53);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82cc30ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B48ab5a:{NFSU2_TR(0x48ab5a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B48ab5c:{NFSU2_TR(0x48ab5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48ab5d:{NFSU2_TR(0x48ab5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48ab60:L48ab60:{c.instructions+=3;NFSU2_TR(0x48ab60);
__builtin_memmove((R+0),gp(0x8358e0),4);
}
B48ab65:{NFSU2_TR(0x48ab65);
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
B48ab67:{NFSU2_TR(0x48ab67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48abf6;}}
}
B48ab6d:L48ab6d:{c.instructions+=8;NFSU2_TR(0x48ab6d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ab6e:{NFSU2_TR(0x48ab6e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ab6f:{NFSU2_TR(0x48ab6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ab70:{NFSU2_TR(0x48ab70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ab71:{NFSU2_TR(0x48ab71);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B48ab73:{NFSU2_TR(0x48ab73);
s4(0x8358e0,u32(0x1ull));
}
B48ab7d:{NFSU2_TR(0x48ab7d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B48ab7f:{NFSU2_TR(0x48ab7f);
}
B48ab80:L48ab80:{c.instructions+=3;NFSU2_TR(0x48ab80);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f3d44ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B48ab87:{NFSU2_TR(0x48ab87);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48ab89:{NFSU2_TR(0x48ab89);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48abec;}}
}
B48ab8b:L48ab8b:{c.instructions+=11;NFSU2_TR(0x48ab8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48ab8d:{NFSU2_TR(0x48ab8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B48ab90:{NFSU2_TR(0x48ab90);
__builtin_memmove((R+4),(R+28),4);
}
B48ab92:{NFSU2_TR(0x48ab92);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x320ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B48ab98:{NFSU2_TR(0x48ab98);
w1(R+8,u8(u32(r1(R+8))-u32(u8(0x1ull))));
}
B48ab9a:{NFSU2_TR(0x48ab9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B48ab9e:{NFSU2_TR(0x48ab9e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B48aba1:{NFSU2_TR(0x48aba1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x82dc08ull))));
}
B48aba7:{NFSU2_TR(0x48aba7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x82cc30ull))));
}
B48abad:{NFSU2_TR(0x48abad);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x2ull))));
}
B48abb0:{NFSU2_TR(0x48abb0);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+12))));
}
B48abb2:L48abb2:{c.instructions+=9;NFSU2_TR(0x48abb2);
__builtin_memmove((R+0),(R+24),4);
}
B48abb4:{NFSU2_TR(0x48abb4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B48abb7:{NFSU2_TR(0x48abb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48abb9:{NFSU2_TR(0x48abb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B48abbb:{NFSU2_TR(0x48abbb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48abbe:{NFSU2_TR(0x48abbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48abc5:{NFSU2_TR(0x48abc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48abcc:{NFSU2_TR(0x48abcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48abd3:{NFSU2_TR(0x48abd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48abdd;}}
}
B48abd5:L48abd5:{c.instructions+=2;NFSU2_TR(0x48abd5);
{u32 ea_=u32(u32(7919948u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48abdb:{NFSU2_TR(0x48abdb);
{goto L48abe3;}
}
B48abdd:L48abdd:{c.instructions+=1;NFSU2_TR(0x48abdd);
{u32 ea_=u32(u32(7908016u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48abe3:L48abe3:{c.instructions+=4;NFSU2_TR(0x48abe3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B48abe6:{NFSU2_TR(0x48abe6);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48abe9:{NFSU2_TR(0x48abe9);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B48abea:{NFSU2_TR(0x48abea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48abb2u);}goto L48abb2;}}
}
B48abec:L48abec:{c.instructions+=3;NFSU2_TR(0x48abec);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B48abed:{NFSU2_TR(0x48abed);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48abf0:{NFSU2_TR(0x48abf0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48ab80u);}goto L48ab80;}}
}
B48abf2:L48abf2:{c.instructions+=4;NFSU2_TR(0x48abf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48abf3:{NFSU2_TR(0x48abf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48abf4:{NFSU2_TR(0x48abf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48abf5:{NFSU2_TR(0x48abf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48abf6:L48abf6:{c.instructions+=1;NFSU2_TR(0x48abf6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48ac00:L48ac00:{c.instructions+=7;NFSU2_TR(0x48ac00);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ac06:{NFSU2_TR(0x48ac06);
{u32 ea_=u32(u32(8607972u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48ac0c:{NFSU2_TR(0x48ac0c);
{u32 ea_=u32(u32(8607972u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B48ac12:{NFSU2_TR(0x48ac12);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48ac18:{NFSU2_TR(0x48ac18);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48ac1a:{NFSU2_TR(0x48ac1a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48ac1d:{NFSU2_TR(0x48ac1d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48ac35;}}
}
B48ac1f:L48ac1f:{c.instructions+=4;NFSU2_TR(0x48ac1f);
__builtin_memmove((R+0),gp(0x82daf0),4);
}
B48ac24:{NFSU2_TR(0x48ac24);
w4(R+0,u32(~u32(r4(R+0))));
}
B48ac26:{NFSU2_TR(0x48ac26);
s4(0x8358e4,u32(0x0ull));
}
B48ac30:{NFSU2_TR(0x48ac30);
__builtin_memmove(gp(0x82daf0),(R+0),4);
}
B48ac35:L48ac35:{c.instructions+=4;NFSU2_TR(0x48ac35);
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
B48ac37:{NFSU2_TR(0x48ac37);
__builtin_memmove(gp(0x82dae8),(R+0),4);
}
B48ac3c:{NFSU2_TR(0x48ac3c);
__builtin_memmove(gp(0x82daec),(R+0),4);
}
B48ac41:{NFSU2_TR(0x48ac41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48ac50:L48ac50:{c.instructions+=2;NFSU2_TR(0x48ac50);
__builtin_memmove((R+0),gp(0x7f399c),4);
}
B48ac55:{NFSU2_TR(0x48ac55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48ac60:L48ac60:{c.instructions+=1;NFSU2_TR(0x48ac60);
TAIL_STATIC(0x5bc300u,5bc);
}
B48ac70:L48ac70:{c.instructions+=7;NFSU2_TR(0x48ac70);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ac74:{NFSU2_TR(0x48ac74);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ac7a:{NFSU2_TR(0x48ac7a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48ac7e:{NFSU2_TR(0x48ac7e);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ac81:{NFSU2_TR(0x48ac81);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48ac83:{NFSU2_TR(0x48ac83);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B48ac86:{NFSU2_TR(0x48ac86);
if(r1(R+514)){{goto L48ac98;}}
}
B48ac88:L48ac88:{c.instructions+=3;NFSU2_TR(0x48ac88);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B48ac8c:{NFSU2_TR(0x48ac8c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ac90:{NFSU2_TR(0x48ac90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48ac95ull));
TAIL_STATIC(0x75bed4u,75b);
}
B48ac95:L48ac95:{c.instructions+=1;NFSU2_TR(0x48ac95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48ac98:L48ac98:{c.instructions+=2;NFSU2_TR(0x48ac98);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B48ac9a:{NFSU2_TR(0x48ac9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48ac9full));
TAIL_STATIC(0x75bed4u,75b);
}
B48ac9f:L48ac9f:{c.instructions+=1;NFSU2_TR(0x48ac9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48acb0:L48acb0:{c.instructions+=22;NFSU2_TR(0x48acb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48acb3:{NFSU2_TR(0x48acb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48acb7:{NFSU2_TR(0x48acb7);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48acb9:{NFSU2_TR(0x48acb9);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48acbc:{NFSU2_TR(0x48acbc);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48acbf:{NFSU2_TR(0x48acbf);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48acc2:{NFSU2_TR(0x48acc2);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48acc5:{NFSU2_TR(0x48acc5);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48acc8:{NFSU2_TR(0x48acc8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48acca:{NFSU2_TR(0x48acca);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48accd:{NFSU2_TR(0x48accd);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B48accf:{NFSU2_TR(0x48accf);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48acd2:{NFSU2_TR(0x48acd2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48acd4:{NFSU2_TR(0x48acd4);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B48acd6:{NFSU2_TR(0x48acd6);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48acd9:{NFSU2_TR(0x48acd9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48acdb:{NFSU2_TR(0x48acdb);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48acdf:{NFSU2_TR(0x48acdf);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B48ace1:{NFSU2_TR(0x48ace1);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B48ace3:{NFSU2_TR(0x48ace3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48ace5:{NFSU2_TR(0x48ace5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48ace8:{NFSU2_TR(0x48ace8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48acf5;}}
}
B48acea:L48acea:{c.instructions+=5;NFSU2_TR(0x48acea);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48acec:{NFSU2_TR(0x48acec);
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
B48acee:{NFSU2_TR(0x48acee);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48acf0:{NFSU2_TR(0x48acf0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48acf2:{NFSU2_TR(0x48acf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48acf5:L48acf5:{c.instructions+=20;NFSU2_TR(0x48acf5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48acf7:{NFSU2_TR(0x48acf7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B48acf9:{NFSU2_TR(0x48acf9);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B48acfb:{NFSU2_TR(0x48acfb);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B48acfd:{NFSU2_TR(0x48acfd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48acff:{NFSU2_TR(0x48acff);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B48ad01:{NFSU2_TR(0x48ad01);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B48ad03:{NFSU2_TR(0x48ad03);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48ad05:{NFSU2_TR(0x48ad05);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B48ad07:{NFSU2_TR(0x48ad07);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B48ad09:{NFSU2_TR(0x48ad09);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48ad0b:{NFSU2_TR(0x48ad0b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48ad0d:{NFSU2_TR(0x48ad0d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48ad11:{NFSU2_TR(0x48ad11);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ad15:{NFSU2_TR(0x48ad15);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ad1b:{NFSU2_TR(0x48ad1b);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B48ad1d:{NFSU2_TR(0x48ad1d);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B48ad1f:{NFSU2_TR(0x48ad1f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48ad21:{NFSU2_TR(0x48ad21);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48ad24:{NFSU2_TR(0x48ad24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48ad35;}}
}
B48ad26:L48ad26:{c.instructions+=3;NFSU2_TR(0x48ad26);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B48ad29:{NFSU2_TR(0x48ad29);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ad2d:{NFSU2_TR(0x48ad2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48ad32ull));
TAIL_STATIC(0x75bed4u,75b);
}
B48ad32:L48ad32:{c.instructions+=1;NFSU2_TR(0x48ad32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48ad35:L48ad35:{c.instructions+=4;NFSU2_TR(0x48ad35);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48ad37:{NFSU2_TR(0x48ad37);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ad3a:{NFSU2_TR(0x48ad3a);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B48ad3c:{NFSU2_TR(0x48ad3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48ad41ull));
TAIL_STATIC(0x75bed4u,75b);
}
B48ad41:L48ad41:{c.instructions+=1;NFSU2_TR(0x48ad41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48ad50:L48ad50:{c.instructions+=51;NFSU2_TR(0x48ad50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48ad54:{NFSU2_TR(0x48ad54);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ad56:{NFSU2_TR(0x48ad56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ad57:{NFSU2_TR(0x48ad57);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48ad5b:{NFSU2_TR(0x48ad5b);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48ad5d:{NFSU2_TR(0x48ad5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ad60:{NFSU2_TR(0x48ad60);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ad63:{NFSU2_TR(0x48ad63);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48ad66:{NFSU2_TR(0x48ad66);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ad69:{NFSU2_TR(0x48ad69);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48ad6c:{NFSU2_TR(0x48ad6c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48ad6e:{NFSU2_TR(0x48ad6e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B48ad70:{NFSU2_TR(0x48ad70);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B48ad72:{NFSU2_TR(0x48ad72);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B48ad74:{NFSU2_TR(0x48ad74);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48ad76:{NFSU2_TR(0x48ad76);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B48ad78:{NFSU2_TR(0x48ad78);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B48ad7a:{NFSU2_TR(0x48ad7a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48ad7c:{NFSU2_TR(0x48ad7c);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B48ad7e:{NFSU2_TR(0x48ad7e);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B48ad80:{NFSU2_TR(0x48ad80);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48ad82:{NFSU2_TR(0x48ad82);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48ad84:{NFSU2_TR(0x48ad84);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ad8a:{NFSU2_TR(0x48ad8a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48ad8e:{NFSU2_TR(0x48ad8e);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ad90:{NFSU2_TR(0x48ad90);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48ad92:{NFSU2_TR(0x48ad92);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ad98:{NFSU2_TR(0x48ad98);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48ad9b:{NFSU2_TR(0x48ad9b);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ad9e:{NFSU2_TR(0x48ad9e);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48ada1:{NFSU2_TR(0x48ada1);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ada7:{NFSU2_TR(0x48ada7);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48adaa:{NFSU2_TR(0x48adaa);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48adad:{NFSU2_TR(0x48adad);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48adb0:{NFSU2_TR(0x48adb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48adb1:{NFSU2_TR(0x48adb1);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48adb7:{NFSU2_TR(0x48adb7);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48adba:{NFSU2_TR(0x48adba);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48adbc:{NFSU2_TR(0x48adbc);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48adbf:{NFSU2_TR(0x48adbf);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B48adc1:{NFSU2_TR(0x48adc1);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48adc4:{NFSU2_TR(0x48adc4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48adc6:{NFSU2_TR(0x48adc6);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B48adc8:{NFSU2_TR(0x48adc8);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48adcb:{NFSU2_TR(0x48adcb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48adcd:{NFSU2_TR(0x48adcd);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48add1:{NFSU2_TR(0x48add1);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B48add3:{NFSU2_TR(0x48add3);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B48add5:{NFSU2_TR(0x48add5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48add7:{NFSU2_TR(0x48add7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48adda:{NFSU2_TR(0x48adda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48ade7;}}
}
B48addc:L48addc:{c.instructions+=5;NFSU2_TR(0x48addc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48adde:{NFSU2_TR(0x48adde);
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
B48ade0:{NFSU2_TR(0x48ade0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48ade2:{NFSU2_TR(0x48ade2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48ade4:{NFSU2_TR(0x48ade4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48ade7:L48ade7:{c.instructions+=20;NFSU2_TR(0x48ade7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48ade9:{NFSU2_TR(0x48ade9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B48adeb:{NFSU2_TR(0x48adeb);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B48aded:{NFSU2_TR(0x48aded);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B48adef:{NFSU2_TR(0x48adef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48adf1:{NFSU2_TR(0x48adf1);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B48adf3:{NFSU2_TR(0x48adf3);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B48adf5:{NFSU2_TR(0x48adf5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48adf7:{NFSU2_TR(0x48adf7);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B48adf9:{NFSU2_TR(0x48adf9);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B48adfb:{NFSU2_TR(0x48adfb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48adfd:{NFSU2_TR(0x48adfd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48adff:{NFSU2_TR(0x48adff);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48ae03:{NFSU2_TR(0x48ae03);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48ae07:{NFSU2_TR(0x48ae07);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ae0a:{NFSU2_TR(0x48ae0a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ae0e:{NFSU2_TR(0x48ae0e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48ae12:{NFSU2_TR(0x48ae12);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48ae14:{NFSU2_TR(0x48ae14);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48ae17:{NFSU2_TR(0x48ae17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48ae26;}}
}
B48ae19:L48ae19:{c.instructions+=4;NFSU2_TR(0x48ae19);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48ae1b:{NFSU2_TR(0x48ae1b);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ae1e:{NFSU2_TR(0x48ae1e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B48ae22:{NFSU2_TR(0x48ae22);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ae26:L48ae26:{c.instructions+=1;NFSU2_TR(0x48ae26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48ae2bull));
TAIL_STATIC(0x75bed4u,75b);
}
B48ae2b:L48ae2b:{c.instructions+=1;NFSU2_TR(0x48ae2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48ae30:L48ae30:{c.instructions+=9;NFSU2_TR(0x48ae30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ae31:{NFSU2_TR(0x48ae31);
__builtin_memmove((R+20),(R+16),4);
}
B48ae33:{NFSU2_TR(0x48ae33);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B48ae36:{NFSU2_TR(0x48ae36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x9cull))));
}
B48ae3c:{NFSU2_TR(0x48ae3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ae3d:{NFSU2_TR(0x48ae3d);
__builtin_memmove((R+24),(R+4),4);
}
B48ae3f:{NFSU2_TR(0x48ae3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ae42:{NFSU2_TR(0x48ae42);
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
B48ae44:{NFSU2_TR(0x48ae44);
if(r1(R+518)){TAIL_STATIC(0x48b147u,48b);}
}
B48ae4a:L48ae4a:{c.instructions+=3;NFSU2_TR(0x48ae4a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48ae4e:{NFSU2_TR(0x48ae4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ae4f:{NFSU2_TR(0x48ae4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48ae54ull));
TAIL_STATIC(0x43c780u,43c);
}
B48ae54:L48ae54:{c.instructions+=131;NFSU2_TR(0x48ae54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ae57:{NFSU2_TR(0x48ae57);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ae5b:{NFSU2_TR(0x48ae5b);
__builtin_memmove((R+0),(R+4),4);
}
B48ae5d:{NFSU2_TR(0x48ae5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ae61:{NFSU2_TR(0x48ae61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ae64:{NFSU2_TR(0x48ae64);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ae67:{NFSU2_TR(0x48ae67);
__builtin_memmove((R+8),(R+4),4);
}
B48ae69:{NFSU2_TR(0x48ae69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ae6c:{NFSU2_TR(0x48ae6c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x40ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48ae6f:{NFSU2_TR(0x48ae6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ae73:{NFSU2_TR(0x48ae73);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48ae75:{NFSU2_TR(0x48ae75);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ae78:{NFSU2_TR(0x48ae78);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48ae7b:{NFSU2_TR(0x48ae7b);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ae7e:{NFSU2_TR(0x48ae7e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48ae81:{NFSU2_TR(0x48ae81);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48ae85:{NFSU2_TR(0x48ae85);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48ae87:{NFSU2_TR(0x48ae87);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ae8a:{NFSU2_TR(0x48ae8a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48ae8e:{NFSU2_TR(0x48ae8e);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ae91:{NFSU2_TR(0x48ae91);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48ae95:{NFSU2_TR(0x48ae95);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ae99:{NFSU2_TR(0x48ae99);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ae9c:{NFSU2_TR(0x48ae9c);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aea0:{NFSU2_TR(0x48aea0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48aea2:{NFSU2_TR(0x48aea2);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aea6:{NFSU2_TR(0x48aea6);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48aea9:{NFSU2_TR(0x48aea9);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B48aeab:{NFSU2_TR(0x48aeab);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48aeae:{NFSU2_TR(0x48aeae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48aeb5:{NFSU2_TR(0x48aeb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48aebc:{NFSU2_TR(0x48aebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48aec3:{NFSU2_TR(0x48aec3);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48aec7:{NFSU2_TR(0x48aec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48aece:{NFSU2_TR(0x48aece);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48aed2:{NFSU2_TR(0x48aed2);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48aed6:{NFSU2_TR(0x48aed6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48aeda:{NFSU2_TR(0x48aeda);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48aee2:{NFSU2_TR(0x48aee2);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48aee6:{NFSU2_TR(0x48aee6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aeea:{NFSU2_TR(0x48aeea);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aeed:{NFSU2_TR(0x48aeed);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aef1:{NFSU2_TR(0x48aef1);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aef4:{NFSU2_TR(0x48aef4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48aef6:{NFSU2_TR(0x48aef6);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aef9:{NFSU2_TR(0x48aef9);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aefb:{NFSU2_TR(0x48aefb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48aefd:{NFSU2_TR(0x48aefd);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48af01:{NFSU2_TR(0x48af01);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48af04:{NFSU2_TR(0x48af04);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48af06:{NFSU2_TR(0x48af06);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48af0a:{NFSU2_TR(0x48af0a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48af0e:{NFSU2_TR(0x48af0e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48af10:{NFSU2_TR(0x48af10);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48af14:{NFSU2_TR(0x48af14);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48af17:{NFSU2_TR(0x48af17);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48af19:{NFSU2_TR(0x48af19);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48af1c:{NFSU2_TR(0x48af1c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48af1f:{NFSU2_TR(0x48af1f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48af21:{NFSU2_TR(0x48af21);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48af25:{NFSU2_TR(0x48af25);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48af28:{NFSU2_TR(0x48af28);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48af2a:{NFSU2_TR(0x48af2a);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48af2e:{NFSU2_TR(0x48af2e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48af32:{NFSU2_TR(0x48af32);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48af34:{NFSU2_TR(0x48af34);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48af37:{NFSU2_TR(0x48af37);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48af3a:{NFSU2_TR(0x48af3a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48af3c:{NFSU2_TR(0x48af3c);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48af40:{NFSU2_TR(0x48af40);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48af43:{NFSU2_TR(0x48af43);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48af45:{NFSU2_TR(0x48af45);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48af49:{NFSU2_TR(0x48af49);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48af4c:{NFSU2_TR(0x48af4c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48af4e:{NFSU2_TR(0x48af4e);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48af52:{NFSU2_TR(0x48af52);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48af56:{NFSU2_TR(0x48af56);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48af58:{NFSU2_TR(0x48af58);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48af5c:{NFSU2_TR(0x48af5c);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48af5f:{NFSU2_TR(0x48af5f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48af61:{NFSU2_TR(0x48af61);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48af65:{NFSU2_TR(0x48af65);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48af68:{NFSU2_TR(0x48af68);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48af6a:{NFSU2_TR(0x48af6a);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48af6d:{NFSU2_TR(0x48af6d);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48af71:{NFSU2_TR(0x48af71);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48af75:{NFSU2_TR(0x48af75);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48af78:{NFSU2_TR(0x48af78);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48af7c:{NFSU2_TR(0x48af7c);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48af7f:{NFSU2_TR(0x48af7f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48af81:{NFSU2_TR(0x48af81);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48af84:{NFSU2_TR(0x48af84);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48af87:{NFSU2_TR(0x48af87);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48af89:{NFSU2_TR(0x48af89);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48af8d:{NFSU2_TR(0x48af8d);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48af90:{NFSU2_TR(0x48af90);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48af92:{NFSU2_TR(0x48af92);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48af96:{NFSU2_TR(0x48af96);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48af9a:{NFSU2_TR(0x48af9a);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48af9d:{NFSU2_TR(0x48af9d);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48afa0:{NFSU2_TR(0x48afa0);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48afa3:{NFSU2_TR(0x48afa3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48afa5:{NFSU2_TR(0x48afa5);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48afa9:{NFSU2_TR(0x48afa9);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48afac:{NFSU2_TR(0x48afac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48afae:{NFSU2_TR(0x48afae);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48afb2:{NFSU2_TR(0x48afb2);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48afb5:{NFSU2_TR(0x48afb5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48afb7:{NFSU2_TR(0x48afb7);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48afbb:{NFSU2_TR(0x48afbb);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48afbf:{NFSU2_TR(0x48afbf);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48afc2:{NFSU2_TR(0x48afc2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48afc6:{NFSU2_TR(0x48afc6);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48afc9:{NFSU2_TR(0x48afc9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48afcb:{NFSU2_TR(0x48afcb);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48afcf:{NFSU2_TR(0x48afcf);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48afd2:{NFSU2_TR(0x48afd2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48afd4:{NFSU2_TR(0x48afd4);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48afd7:{NFSU2_TR(0x48afd7);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48afda:{NFSU2_TR(0x48afda);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48afdc:{NFSU2_TR(0x48afdc);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48afe0:{NFSU2_TR(0x48afe0);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48afe4:{NFSU2_TR(0x48afe4);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48afe7:{NFSU2_TR(0x48afe7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48afeb:{NFSU2_TR(0x48afeb);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48afee:{NFSU2_TR(0x48afee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48aff0:{NFSU2_TR(0x48aff0);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48aff4:{NFSU2_TR(0x48aff4);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48aff7:{NFSU2_TR(0x48aff7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48aff9:{NFSU2_TR(0x48aff9);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48affc:{NFSU2_TR(0x48affc);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
TAIL_STATIC(0x48b003u,48b);
}
XIT:NFSU2_TR_EXIT(0x48a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
