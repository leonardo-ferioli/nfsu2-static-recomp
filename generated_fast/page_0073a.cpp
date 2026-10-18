#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_45a(u8* __restrict R,Cpu& c);
u32 body_46b(u8* __restrict R,Cpu& c);
u32 body_46c(u8* __restrict R,Cpu& c);
u32 body_47b(u8* __restrict R,Cpu& c);
u32 body_739(u8* __restrict R,Cpu& c);
u32 body_73b(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x73a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x73a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_73a(u8* __restrict R,Cpu& c);
u32 page_73a(Cpu& c){return body_73a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_73a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x73a000:goto L73a000;
case 0x73a003:c.instructions+=4;goto B73a003;
case 0x73a004:c.instructions+=3;goto B73a004;
case 0x73a005:c.instructions+=2;goto B73a005;
case 0x73a008:c.instructions+=1;goto B73a008;
case 0x73a009:goto L73a009;
case 0x73a00b:c.instructions+=1;goto B73a00b;
case 0x73a00d:goto L73a00d;
case 0x73a013:c.instructions+=2;goto B73a013;
case 0x73a017:c.instructions+=1;goto B73a017;
case 0x73a01b:goto L73a01b;
case 0x73a01e:c.instructions+=2;goto B73a01e;
case 0x73a01f:c.instructions+=1;goto B73a01f;
case 0x73a021:goto L73a021;
case 0x73a022:c.instructions+=1;goto B73a022;
case 0x73a024:goto L73a024;
case 0x73a025:c.instructions+=1;goto B73a025;
case 0x73a027:goto L73a027;
case 0x73a029:c.instructions+=4;goto B73a029;
case 0x73a02f:c.instructions+=3;goto B73a02f;
case 0x73a033:c.instructions+=2;goto B73a033;
case 0x73a039:c.instructions+=1;goto B73a039;
case 0x73a03b:goto L73a03b;
case 0x73a03d:c.instructions+=4;goto B73a03d;
case 0x73a041:c.instructions+=3;goto B73a041;
case 0x73a045:c.instructions+=2;goto B73a045;
case 0x73a04b:c.instructions+=1;goto B73a04b;
case 0x73a04d:goto L73a04d;
case 0x73a04f:c.instructions+=2;goto B73a04f;
case 0x73a055:c.instructions+=1;goto B73a055;
case 0x73a059:goto L73a059;
case 0x73a05b:c.instructions+=2;goto B73a05b;
case 0x73a05f:c.instructions+=1;goto B73a05f;
case 0x73a061:goto L73a061;
case 0x73a063:c.instructions+=1;goto B73a063;
case 0x73a067:goto L73a067;
case 0x73a069:c.instructions+=4;goto B73a069;
case 0x73a06f:c.instructions+=3;goto B73a06f;
case 0x73a071:c.instructions+=2;goto B73a071;
case 0x73a074:c.instructions+=1;goto B73a074;
case 0x73a076:goto L73a076;
case 0x73a078:c.instructions+=2;goto B73a078;
case 0x73a07a:c.instructions+=1;goto B73a07a;
case 0x73a07c:goto L73a07c;
case 0x73a07e:c.instructions+=4;goto B73a07e;
case 0x73a084:c.instructions+=3;goto B73a084;
case 0x73a086:c.instructions+=2;goto B73a086;
case 0x73a089:c.instructions+=1;goto B73a089;
case 0x73a08b:goto L73a08b;
case 0x73a08d:c.instructions+=4;goto B73a08d;
case 0x73a093:c.instructions+=3;goto B73a093;
case 0x73a095:c.instructions+=2;goto B73a095;
case 0x73a098:c.instructions+=1;goto B73a098;
case 0x73a09a:goto L73a09a;
case 0x73a09c:c.instructions+=3;goto B73a09c;
case 0x73a09e:c.instructions+=2;goto B73a09e;
case 0x73a0a0:c.instructions+=1;goto B73a0a0;
case 0x73a0a5:goto L73a0a5;
case 0x73a0a7:c.instructions+=5;goto B73a0a7;
case 0x73a0aa:c.instructions+=4;goto B73a0aa;
case 0x73a0ac:c.instructions+=3;goto B73a0ac;
case 0x73a0ad:c.instructions+=2;goto B73a0ad;
case 0x73a0ae:c.instructions+=1;goto B73a0ae;
case 0x73a0b3:goto L73a0b3;
case 0x73a0b6:c.instructions+=5;goto B73a0b6;
case 0x73a0b7:c.instructions+=4;goto B73a0b7;
case 0x73a0b8:c.instructions+=3;goto B73a0b8;
case 0x73a0b9:c.instructions+=2;goto B73a0b9;
case 0x73a0bc:c.instructions+=1;goto B73a0bc;
case 0x73a0bd:goto L73a0bd;
case 0x73a0bf:c.instructions+=7;goto B73a0bf;
case 0x73a0c0:c.instructions+=6;goto B73a0c0;
case 0x73a0c2:c.instructions+=5;goto B73a0c2;
case 0x73a0c3:c.instructions+=4;goto B73a0c3;
case 0x73a0c5:c.instructions+=3;goto B73a0c5;
case 0x73a0c6:c.instructions+=2;goto B73a0c6;
case 0x73a0c9:c.instructions+=1;goto B73a0c9;
case 0x73a0d0:goto L73a0d0;
case 0x73a0d3:c.instructions+=32;goto B73a0d3;
case 0x73a0d4:c.instructions+=31;goto B73a0d4;
case 0x73a0d5:c.instructions+=30;goto B73a0d5;
case 0x73a0d6:c.instructions+=29;goto B73a0d6;
case 0x73a0da:c.instructions+=28;goto B73a0da;
case 0x73a0dd:c.instructions+=27;goto B73a0dd;
case 0x73a0e0:c.instructions+=26;goto B73a0e0;
case 0x73a0e1:c.instructions+=25;goto B73a0e1;
case 0x73a0e4:c.instructions+=24;goto B73a0e4;
case 0x73a0e8:c.instructions+=23;goto B73a0e8;
case 0x73a0eb:c.instructions+=22;goto B73a0eb;
case 0x73a0ef:c.instructions+=21;goto B73a0ef;
case 0x73a0f3:c.instructions+=20;goto B73a0f3;
case 0x73a0f8:c.instructions+=19;goto B73a0f8;
case 0x73a0fb:c.instructions+=18;goto B73a0fb;
case 0x73a0ff:c.instructions+=17;goto B73a0ff;
case 0x73a103:c.instructions+=16;goto B73a103;
case 0x73a107:c.instructions+=15;goto B73a107;
case 0x73a10a:c.instructions+=14;goto B73a10a;
case 0x73a10d:c.instructions+=13;goto B73a10d;
case 0x73a111:c.instructions+=12;goto B73a111;
case 0x73a117:c.instructions+=11;goto B73a117;
case 0x73a11b:c.instructions+=10;goto B73a11b;
case 0x73a11e:c.instructions+=9;goto B73a11e;
case 0x73a122:c.instructions+=8;goto B73a122;
case 0x73a124:c.instructions+=7;goto B73a124;
case 0x73a12a:c.instructions+=6;goto B73a12a;
case 0x73a12c:c.instructions+=5;goto B73a12c;
case 0x73a12e:c.instructions+=4;goto B73a12e;
case 0x73a134:c.instructions+=3;goto B73a134;
case 0x73a136:c.instructions+=2;goto B73a136;
case 0x73a139:c.instructions+=1;goto B73a139;
case 0x73a13b:goto L73a13b;
case 0x73a13d:c.instructions+=1;goto B73a13d;
case 0x73a13f:goto L73a13f;
case 0x73a144:goto L73a144;
case 0x73a147:c.instructions+=10;goto B73a147;
case 0x73a14a:c.instructions+=9;goto B73a14a;
case 0x73a14c:c.instructions+=8;goto B73a14c;
case 0x73a151:c.instructions+=7;goto B73a151;
case 0x73a153:c.instructions+=6;goto B73a153;
case 0x73a158:c.instructions+=5;goto B73a158;
case 0x73a15a:c.instructions+=4;goto B73a15a;
case 0x73a15c:c.instructions+=3;goto B73a15c;
case 0x73a160:c.instructions+=2;goto B73a160;
case 0x73a164:c.instructions+=1;goto B73a164;
case 0x73a166:goto L73a166;
case 0x73a16c:goto L73a16c;
case 0x73a16e:c.instructions+=5;goto B73a16e;
case 0x73a171:c.instructions+=4;goto B73a171;
case 0x73a173:c.instructions+=3;goto B73a173;
case 0x73a177:c.instructions+=2;goto B73a177;
case 0x73a17b:c.instructions+=1;goto B73a17b;
case 0x73a17d:goto L73a17d;
case 0x73a183:goto L73a183;
case 0x73a185:c.instructions+=5;goto B73a185;
case 0x73a189:c.instructions+=4;goto B73a189;
case 0x73a18f:c.instructions+=3;goto B73a18f;
case 0x73a191:c.instructions+=2;goto B73a191;
case 0x73a194:c.instructions+=1;goto B73a194;
case 0x73a196:goto L73a196;
case 0x73a199:c.instructions+=6;goto B73a199;
case 0x73a19b:c.instructions+=5;goto B73a19b;
case 0x73a19c:c.instructions+=4;goto B73a19c;
case 0x73a19e:c.instructions+=3;goto B73a19e;
case 0x73a1a0:c.instructions+=2;goto B73a1a0;
case 0x73a1a1:c.instructions+=1;goto B73a1a1;
case 0x73a1a6:goto L73a1a6;
case 0x73a1a9:c.instructions+=10;goto B73a1a9;
case 0x73a1ac:c.instructions+=9;goto B73a1ac;
case 0x73a1ad:c.instructions+=8;goto B73a1ad;
case 0x73a1b2:c.instructions+=7;goto B73a1b2;
case 0x73a1b5:c.instructions+=6;goto B73a1b5;
case 0x73a1bc:c.instructions+=5;goto B73a1bc;
case 0x73a1bd:c.instructions+=4;goto B73a1bd;
case 0x73a1be:c.instructions+=3;goto B73a1be;
case 0x73a1bf:c.instructions+=2;goto B73a1bf;
case 0x73a1c2:c.instructions+=1;goto B73a1c2;
case 0x73a1c3:goto L73a1c3;
case 0x73a1c5:c.instructions+=1;goto B73a1c5;
case 0x73a1c7:goto L73a1c7;
case 0x73a1cd:c.instructions+=2;goto B73a1cd;
case 0x73a1d1:c.instructions+=1;goto B73a1d1;
case 0x73a1d5:goto L73a1d5;
case 0x73a1d8:c.instructions+=2;goto B73a1d8;
case 0x73a1d9:c.instructions+=1;goto B73a1d9;
case 0x73a1db:goto L73a1db;
case 0x73a1dc:c.instructions+=1;goto B73a1dc;
case 0x73a1de:goto L73a1de;
case 0x73a1df:c.instructions+=1;goto B73a1df;
case 0x73a1e1:goto L73a1e1;
case 0x73a1e3:c.instructions+=4;goto B73a1e3;
case 0x73a1e9:c.instructions+=3;goto B73a1e9;
case 0x73a1ed:c.instructions+=2;goto B73a1ed;
case 0x73a1f3:c.instructions+=1;goto B73a1f3;
case 0x73a1f5:goto L73a1f5;
case 0x73a1f7:c.instructions+=4;goto B73a1f7;
case 0x73a1fb:c.instructions+=3;goto B73a1fb;
case 0x73a1ff:c.instructions+=2;goto B73a1ff;
case 0x73a205:c.instructions+=1;goto B73a205;
case 0x73a207:goto L73a207;
case 0x73a209:c.instructions+=2;goto B73a209;
case 0x73a20f:c.instructions+=1;goto B73a20f;
case 0x73a213:goto L73a213;
case 0x73a215:c.instructions+=2;goto B73a215;
case 0x73a219:c.instructions+=1;goto B73a219;
case 0x73a21b:goto L73a21b;
case 0x73a21d:c.instructions+=1;goto B73a21d;
case 0x73a221:goto L73a221;
case 0x73a223:c.instructions+=4;goto B73a223;
case 0x73a229:c.instructions+=3;goto B73a229;
case 0x73a22b:c.instructions+=2;goto B73a22b;
case 0x73a22e:c.instructions+=1;goto B73a22e;
case 0x73a230:goto L73a230;
case 0x73a232:c.instructions+=2;goto B73a232;
case 0x73a234:c.instructions+=1;goto B73a234;
case 0x73a236:goto L73a236;
case 0x73a238:c.instructions+=4;goto B73a238;
case 0x73a23e:c.instructions+=3;goto B73a23e;
case 0x73a240:c.instructions+=2;goto B73a240;
case 0x73a243:c.instructions+=1;goto B73a243;
case 0x73a245:goto L73a245;
case 0x73a247:c.instructions+=4;goto B73a247;
case 0x73a24d:c.instructions+=3;goto B73a24d;
case 0x73a24f:c.instructions+=2;goto B73a24f;
case 0x73a252:c.instructions+=1;goto B73a252;
case 0x73a254:goto L73a254;
case 0x73a256:c.instructions+=3;goto B73a256;
case 0x73a258:c.instructions+=2;goto B73a258;
case 0x73a25a:c.instructions+=1;goto B73a25a;
case 0x73a25f:goto L73a25f;
case 0x73a261:c.instructions+=6;goto B73a261;
case 0x73a264:c.instructions+=5;goto B73a264;
case 0x73a266:c.instructions+=4;goto B73a266;
case 0x73a267:c.instructions+=3;goto B73a267;
case 0x73a269:c.instructions+=2;goto B73a269;
case 0x73a26a:c.instructions+=1;goto B73a26a;
case 0x73a26f:goto L73a26f;
case 0x73a272:c.instructions+=6;goto B73a272;
case 0x73a273:c.instructions+=5;goto B73a273;
case 0x73a274:c.instructions+=4;goto B73a274;
case 0x73a275:c.instructions+=3;goto B73a275;
case 0x73a276:c.instructions+=2;goto B73a276;
case 0x73a279:c.instructions+=1;goto B73a279;
case 0x73a27a:goto L73a27a;
case 0x73a27b:c.instructions+=8;goto B73a27b;
case 0x73a27d:c.instructions+=7;goto B73a27d;
case 0x73a27e:c.instructions+=6;goto B73a27e;
case 0x73a280:c.instructions+=5;goto B73a280;
case 0x73a281:c.instructions+=4;goto B73a281;
case 0x73a283:c.instructions+=3;goto B73a283;
case 0x73a284:c.instructions+=2;goto B73a284;
case 0x73a287:c.instructions+=1;goto B73a287;
case 0x73a290:goto L73a290;
case 0x73a293:c.instructions+=32;goto B73a293;
case 0x73a294:c.instructions+=31;goto B73a294;
case 0x73a295:c.instructions+=30;goto B73a295;
case 0x73a296:c.instructions+=29;goto B73a296;
case 0x73a29a:c.instructions+=28;goto B73a29a;
case 0x73a29d:c.instructions+=27;goto B73a29d;
case 0x73a2a0:c.instructions+=26;goto B73a2a0;
case 0x73a2a1:c.instructions+=25;goto B73a2a1;
case 0x73a2a4:c.instructions+=24;goto B73a2a4;
case 0x73a2a8:c.instructions+=23;goto B73a2a8;
case 0x73a2ab:c.instructions+=22;goto B73a2ab;
case 0x73a2af:c.instructions+=21;goto B73a2af;
case 0x73a2b3:c.instructions+=20;goto B73a2b3;
case 0x73a2b8:c.instructions+=19;goto B73a2b8;
case 0x73a2bb:c.instructions+=18;goto B73a2bb;
case 0x73a2bf:c.instructions+=17;goto B73a2bf;
case 0x73a2c3:c.instructions+=16;goto B73a2c3;
case 0x73a2c7:c.instructions+=15;goto B73a2c7;
case 0x73a2ca:c.instructions+=14;goto B73a2ca;
case 0x73a2cd:c.instructions+=13;goto B73a2cd;
case 0x73a2d1:c.instructions+=12;goto B73a2d1;
case 0x73a2d7:c.instructions+=11;goto B73a2d7;
case 0x73a2db:c.instructions+=10;goto B73a2db;
case 0x73a2de:c.instructions+=9;goto B73a2de;
case 0x73a2e2:c.instructions+=8;goto B73a2e2;
case 0x73a2e4:c.instructions+=7;goto B73a2e4;
case 0x73a2ea:c.instructions+=6;goto B73a2ea;
case 0x73a2ec:c.instructions+=5;goto B73a2ec;
case 0x73a2ee:c.instructions+=4;goto B73a2ee;
case 0x73a2f4:c.instructions+=3;goto B73a2f4;
case 0x73a2f6:c.instructions+=2;goto B73a2f6;
case 0x73a2f9:c.instructions+=1;goto B73a2f9;
case 0x73a2fb:goto L73a2fb;
case 0x73a2fd:c.instructions+=1;goto B73a2fd;
case 0x73a2ff:goto L73a2ff;
case 0x73a304:goto L73a304;
case 0x73a307:c.instructions+=10;goto B73a307;
case 0x73a30a:c.instructions+=9;goto B73a30a;
case 0x73a30c:c.instructions+=8;goto B73a30c;
case 0x73a311:c.instructions+=7;goto B73a311;
case 0x73a313:c.instructions+=6;goto B73a313;
case 0x73a318:c.instructions+=5;goto B73a318;
case 0x73a31a:c.instructions+=4;goto B73a31a;
case 0x73a31c:c.instructions+=3;goto B73a31c;
case 0x73a320:c.instructions+=2;goto B73a320;
case 0x73a324:c.instructions+=1;goto B73a324;
case 0x73a326:goto L73a326;
case 0x73a32c:goto L73a32c;
case 0x73a32e:c.instructions+=5;goto B73a32e;
case 0x73a331:c.instructions+=4;goto B73a331;
case 0x73a333:c.instructions+=3;goto B73a333;
case 0x73a337:c.instructions+=2;goto B73a337;
case 0x73a33b:c.instructions+=1;goto B73a33b;
case 0x73a33d:goto L73a33d;
case 0x73a343:goto L73a343;
case 0x73a345:c.instructions+=5;goto B73a345;
case 0x73a349:c.instructions+=4;goto B73a349;
case 0x73a34f:c.instructions+=3;goto B73a34f;
case 0x73a351:c.instructions+=2;goto B73a351;
case 0x73a354:c.instructions+=1;goto B73a354;
case 0x73a356:goto L73a356;
case 0x73a359:c.instructions+=5;goto B73a359;
case 0x73a35b:c.instructions+=4;goto B73a35b;
case 0x73a35c:c.instructions+=3;goto B73a35c;
case 0x73a35e:c.instructions+=2;goto B73a35e;
case 0x73a35f:c.instructions+=1;goto B73a35f;
case 0x73a364:goto L73a364;
case 0x73a367:c.instructions+=10;goto B73a367;
case 0x73a36a:c.instructions+=9;goto B73a36a;
case 0x73a36b:c.instructions+=8;goto B73a36b;
case 0x73a370:c.instructions+=7;goto B73a370;
case 0x73a373:c.instructions+=6;goto B73a373;
case 0x73a37a:c.instructions+=5;goto B73a37a;
case 0x73a37b:c.instructions+=4;goto B73a37b;
case 0x73a37c:c.instructions+=3;goto B73a37c;
case 0x73a37d:c.instructions+=2;goto B73a37d;
case 0x73a380:c.instructions+=1;goto B73a380;
case 0x73a381:goto L73a381;
case 0x73a383:c.instructions+=1;goto B73a383;
case 0x73a385:goto L73a385;
case 0x73a38b:c.instructions+=2;goto B73a38b;
case 0x73a38f:c.instructions+=1;goto B73a38f;
case 0x73a393:goto L73a393;
case 0x73a396:c.instructions+=2;goto B73a396;
case 0x73a397:c.instructions+=1;goto B73a397;
case 0x73a399:goto L73a399;
case 0x73a39a:c.instructions+=1;goto B73a39a;
case 0x73a39c:goto L73a39c;
case 0x73a39d:c.instructions+=1;goto B73a39d;
case 0x73a39f:goto L73a39f;
case 0x73a3a1:c.instructions+=4;goto B73a3a1;
case 0x73a3a7:c.instructions+=3;goto B73a3a7;
case 0x73a3ab:c.instructions+=2;goto B73a3ab;
case 0x73a3b1:c.instructions+=1;goto B73a3b1;
case 0x73a3b3:goto L73a3b3;
case 0x73a3b5:c.instructions+=4;goto B73a3b5;
case 0x73a3b9:c.instructions+=3;goto B73a3b9;
case 0x73a3bd:c.instructions+=2;goto B73a3bd;
case 0x73a3c3:c.instructions+=1;goto B73a3c3;
case 0x73a3c5:goto L73a3c5;
case 0x73a3c7:c.instructions+=2;goto B73a3c7;
case 0x73a3cd:c.instructions+=1;goto B73a3cd;
case 0x73a3d1:goto L73a3d1;
case 0x73a3d3:c.instructions+=2;goto B73a3d3;
case 0x73a3d7:c.instructions+=1;goto B73a3d7;
case 0x73a3d9:goto L73a3d9;
case 0x73a3db:c.instructions+=1;goto B73a3db;
case 0x73a3df:goto L73a3df;
case 0x73a3e1:c.instructions+=4;goto B73a3e1;
case 0x73a3e7:c.instructions+=3;goto B73a3e7;
case 0x73a3e9:c.instructions+=2;goto B73a3e9;
case 0x73a3ec:c.instructions+=1;goto B73a3ec;
case 0x73a3ee:goto L73a3ee;
case 0x73a3f0:c.instructions+=2;goto B73a3f0;
case 0x73a3f2:c.instructions+=1;goto B73a3f2;
case 0x73a3f4:goto L73a3f4;
case 0x73a3f6:c.instructions+=4;goto B73a3f6;
case 0x73a3fc:c.instructions+=3;goto B73a3fc;
case 0x73a3fe:c.instructions+=2;goto B73a3fe;
case 0x73a401:c.instructions+=1;goto B73a401;
case 0x73a403:goto L73a403;
case 0x73a405:c.instructions+=4;goto B73a405;
case 0x73a40b:c.instructions+=3;goto B73a40b;
case 0x73a40d:c.instructions+=2;goto B73a40d;
case 0x73a410:c.instructions+=1;goto B73a410;
case 0x73a412:goto L73a412;
case 0x73a414:c.instructions+=3;goto B73a414;
case 0x73a416:c.instructions+=2;goto B73a416;
case 0x73a418:c.instructions+=1;goto B73a418;
case 0x73a41d:goto L73a41d;
case 0x73a41f:c.instructions+=5;goto B73a41f;
case 0x73a422:c.instructions+=4;goto B73a422;
case 0x73a424:c.instructions+=3;goto B73a424;
case 0x73a425:c.instructions+=2;goto B73a425;
case 0x73a426:c.instructions+=1;goto B73a426;
case 0x73a42b:goto L73a42b;
case 0x73a42e:c.instructions+=6;goto B73a42e;
case 0x73a42f:c.instructions+=5;goto B73a42f;
case 0x73a430:c.instructions+=4;goto B73a430;
case 0x73a431:c.instructions+=3;goto B73a431;
case 0x73a432:c.instructions+=2;goto B73a432;
case 0x73a435:c.instructions+=1;goto B73a435;
case 0x73a436:goto L73a436;
case 0x73a437:c.instructions+=8;goto B73a437;
case 0x73a439:c.instructions+=7;goto B73a439;
case 0x73a43a:c.instructions+=6;goto B73a43a;
case 0x73a43c:c.instructions+=5;goto B73a43c;
case 0x73a43d:c.instructions+=4;goto B73a43d;
case 0x73a43f:c.instructions+=3;goto B73a43f;
case 0x73a440:c.instructions+=2;goto B73a440;
case 0x73a443:c.instructions+=1;goto B73a443;
case 0x73a450:goto L73a450;
case 0x73a451:c.instructions+=3;goto B73a451;
case 0x73a456:c.instructions+=2;goto B73a456;
case 0x73a458:c.instructions+=1;goto B73a458;
case 0x73a45e:goto L73a45e;
case 0x73a463:c.instructions+=2;goto B73a463;
case 0x73a465:c.instructions+=1;goto B73a465;
case 0x73a46b:goto L73a46b;
case 0x73a46d:c.instructions+=1;goto B73a46d;
case 0x73a472:goto L73a472;
case 0x73a475:c.instructions+=2;goto B73a475;
case 0x73a477:c.instructions+=1;goto B73a477;
case 0x73a47d:goto L73a47d;
case 0x73a481:c.instructions+=2;goto B73a481;
case 0x73a483:c.instructions+=1;goto B73a483;
case 0x73a485:goto L73a485;
case 0x73a487:c.instructions+=1;goto B73a487;
case 0x73a489:goto L73a489;
case 0x73a48b:c.instructions+=1;goto B73a48b;
case 0x73a48d:goto L73a48d;
case 0x73a48f:goto L73a48f;
case 0x73a493:goto L73a493;
case 0x73a494:c.instructions+=6;goto B73a494;
case 0x73a498:c.instructions+=5;goto B73a498;
case 0x73a49b:c.instructions+=4;goto B73a49b;
case 0x73a49c:c.instructions+=3;goto B73a49c;
case 0x73a49d:c.instructions+=2;goto B73a49d;
case 0x73a49e:c.instructions+=1;goto B73a49e;
case 0x73a4a0:goto L73a4a0;
case 0x73a4a5:goto L73a4a5;
case 0x73a4ad:c.instructions+=1;goto B73a4ad;
case 0x73a4b2:goto L73a4b2;
case 0x73a4b5:c.instructions+=2;goto B73a4b5;
case 0x73a4b7:c.instructions+=1;goto B73a4b7;
case 0x73a4b9:goto L73a4b9;
case 0x73a4bc:c.instructions+=3;goto B73a4bc;
case 0x73a4be:c.instructions+=2;goto B73a4be;
case 0x73a4c3:c.instructions+=1;goto B73a4c3;
case 0x73a4c5:goto L73a4c5;
case 0x73a4ca:c.instructions+=1;goto B73a4ca;
case 0x73a4cc:goto L73a4cc;
case 0x73a4d0:c.instructions+=2;goto B73a4d0;
case 0x73a4d1:c.instructions+=1;goto B73a4d1;
case 0x73a4d6:goto L73a4d6;
case 0x73a4d9:c.instructions+=2;goto B73a4d9;
case 0x73a4db:c.instructions+=1;goto B73a4db;
case 0x73a4dd:goto L73a4dd;
case 0x73a4df:c.instructions+=1;goto B73a4df;
case 0x73a4e4:goto L73a4e4;
case 0x73a4ea:c.instructions+=3;goto B73a4ea;
case 0x73a4ed:c.instructions+=2;goto B73a4ed;
case 0x73a4ef:c.instructions+=1;goto B73a4ef;
case 0x73a4f1:goto L73a4f1;
case 0x73a4f6:c.instructions+=4;goto B73a4f6;
case 0x73a4f8:c.instructions+=3;goto B73a4f8;
case 0x73a4fa:c.instructions+=2;goto B73a4fa;
case 0x73a4fc:c.instructions+=1;goto B73a4fc;
case 0x73a4fe:goto L73a4fe;
case 0x73a502:c.instructions+=3;goto B73a502;
case 0x73a503:c.instructions+=2;goto B73a503;
case 0x73a504:c.instructions+=1;goto B73a504;
case 0x73a509:goto L73a509;
case 0x73a50c:goto L73a50c;
case 0x73a50f:c.instructions+=3;goto B73a50f;
case 0x73a510:c.instructions+=2;goto B73a510;
case 0x73a516:c.instructions+=1;goto B73a516;
case 0x73a518:goto L73a518;
case 0x73a51c:c.instructions+=5;goto B73a51c;
case 0x73a51d:c.instructions+=4;goto B73a51d;
case 0x73a523:c.instructions+=3;goto B73a523;
case 0x73a529:c.instructions+=2;goto B73a529;
case 0x73a52d:c.instructions+=1;goto B73a52d;
case 0x73a52f:goto L73a52f;
case 0x73a530:c.instructions+=6;goto B73a530;
case 0x73a531:c.instructions+=5;goto B73a531;
case 0x73a533:c.instructions+=4;goto B73a533;
case 0x73a534:c.instructions+=3;goto B73a534;
case 0x73a539:c.instructions+=2;goto B73a539;
case 0x73a53e:c.instructions+=1;goto B73a53e;
case 0x73a53f:goto L73a53f;
case 0x73a540:c.instructions+=1;goto B73a540;
case 0x73a730:goto L73a730;
case 0x73a735:c.instructions+=4;goto B73a735;
case 0x73a736:c.instructions+=3;goto B73a736;
case 0x73a738:c.instructions+=2;goto B73a738;
case 0x73a73a:c.instructions+=1;goto B73a73a;
case 0x73a73c:goto L73a73c;
case 0x73a741:c.instructions+=2;goto B73a741;
case 0x73a742:c.instructions+=1;goto B73a742;
case 0x73a743:goto L73a743;
case 0x73a748:c.instructions+=2;goto B73a748;
case 0x73a749:c.instructions+=1;goto B73a749;
case 0x73a750:goto L73a750;
case 0x73a756:c.instructions+=6;goto B73a756;
case 0x73a758:c.instructions+=5;goto B73a758;
case 0x73a75e:c.instructions+=4;goto B73a75e;
case 0x73a760:c.instructions+=3;goto B73a760;
case 0x73a766:c.instructions+=2;goto B73a766;
case 0x73a76c:c.instructions+=1;goto B73a76c;
case 0x73a771:goto L73a771;
case 0x73a773:goto L73a773;
case 0x73a775:goto L73a775;
case 0x73a776:c.instructions+=6;goto B73a776;
case 0x73a77c:c.instructions+=5;goto B73a77c;
case 0x73a782:c.instructions+=4;goto B73a782;
case 0x73a789:c.instructions+=3;goto B73a789;
case 0x73a793:c.instructions+=2;goto B73a793;
case 0x73a794:c.instructions+=1;goto B73a794;
case 0x73a7c0:goto L73a7c0;
case 0x73a7c1:c.instructions+=6;goto B73a7c1;
case 0x73a7c6:c.instructions+=5;goto B73a7c6;
case 0x73a7c8:c.instructions+=4;goto B73a7c8;
case 0x73a7c9:c.instructions+=3;goto B73a7c9;
case 0x73a7ce:c.instructions+=2;goto B73a7ce;
case 0x73a7d6:c.instructions+=1;goto B73a7d6;
case 0x73a7d8:goto L73a7d8;
case 0x73a7dd:goto L73a7dd;
case 0x73a7e2:c.instructions+=2;goto B73a7e2;
case 0x73a7e4:c.instructions+=1;goto B73a7e4;
case 0x73a7e6:goto L73a7e6;
case 0x73a7eb:c.instructions+=3;goto B73a7eb;
case 0x73a7ec:c.instructions+=2;goto B73a7ec;
case 0x73a7ed:c.instructions+=1;goto B73a7ed;
case 0x73a7ee:goto L73a7ee;
case 0x73a7f3:c.instructions+=8;goto B73a7f3;
case 0x73a7f4:c.instructions+=7;goto B73a7f4;
case 0x73a7f8:c.instructions+=6;goto B73a7f8;
case 0x73a7f9:c.instructions+=5;goto B73a7f9;
case 0x73a7fb:c.instructions+=4;goto B73a7fb;
case 0x73a7fd:c.instructions+=3;goto B73a7fd;
case 0x73a7fe:c.instructions+=2;goto B73a7fe;
case 0x73a802:c.instructions+=1;goto B73a802;
case 0x73a804:goto L73a804;
case 0x73a806:c.instructions+=1;goto B73a806;
case 0x73a808:goto L73a808;
case 0x73a80c:c.instructions+=2;goto B73a80c;
case 0x73a80e:c.instructions+=1;goto B73a80e;
case 0x73a810:goto L73a810;
case 0x73a815:goto L73a815;
case 0x73a81a:c.instructions+=2;goto B73a81a;
case 0x73a81c:c.instructions+=1;goto B73a81c;
case 0x73a81e:goto L73a81e;
case 0x73a821:c.instructions+=1;goto B73a821;
case 0x73a823:goto L73a823;
case 0x73a828:c.instructions+=1;goto B73a828;
case 0x73a82a:goto L73a82a;
case 0x73a82e:c.instructions+=2;goto B73a82e;
case 0x73a830:c.instructions+=1;goto B73a830;
case 0x73a832:goto L73a832;
case 0x73a833:goto L73a833;
case 0x73a838:c.instructions+=2;goto B73a838;
case 0x73a83a:c.instructions+=1;goto B73a83a;
case 0x73a83c:goto L73a83c;
case 0x73a83f:c.instructions+=1;goto B73a83f;
case 0x73a841:goto L73a841;
case 0x73a846:c.instructions+=1;goto B73a846;
case 0x73a848:goto L73a848;
case 0x73a84c:c.instructions+=2;goto B73a84c;
case 0x73a84e:c.instructions+=1;goto B73a84e;
case 0x73a850:goto L73a850;
case 0x73a851:goto L73a851;
case 0x73a856:c.instructions+=2;goto B73a856;
case 0x73a858:c.instructions+=1;goto B73a858;
case 0x73a85a:goto L73a85a;
case 0x73a85d:c.instructions+=1;goto B73a85d;
case 0x73a85f:goto L73a85f;
case 0x73a864:c.instructions+=1;goto B73a864;
case 0x73a866:goto L73a866;
case 0x73a86a:c.instructions+=2;goto B73a86a;
case 0x73a86c:c.instructions+=1;goto B73a86c;
case 0x73a86e:goto L73a86e;
case 0x73a86f:goto L73a86f;
case 0x73a872:goto L73a872;
case 0x73a878:goto L73a878;
case 0x73a87e:c.instructions+=1;goto B73a87e;
case 0x73a884:goto L73a884;
case 0x73a888:c.instructions+=1;goto B73a888;
case 0x73a88e:goto L73a88e;
case 0x73a890:c.instructions+=4;goto B73a890;
case 0x73a896:c.instructions+=3;goto B73a896;
case 0x73a898:c.instructions+=2;goto B73a898;
case 0x73a89e:c.instructions+=1;goto B73a89e;
case 0x73a8a3:goto L73a8a3;
case 0x73a8a5:goto L73a8a5;
case 0x73a8a7:c.instructions+=10;goto B73a8a7;
case 0x73a8ac:c.instructions+=9;goto B73a8ac;
case 0x73a8ae:c.instructions+=8;goto B73a8ae;
case 0x73a8b0:c.instructions+=7;goto B73a8b0;
case 0x73a8b5:c.instructions+=6;goto B73a8b5;
case 0x73a8b7:c.instructions+=5;goto B73a8b7;
case 0x73a8bd:c.instructions+=4;goto B73a8bd;
case 0x73a8bf:c.instructions+=3;goto B73a8bf;
case 0x73a8c0:c.instructions+=2;goto B73a8c0;
case 0x73a8c6:c.instructions+=1;goto B73a8c6;
case 0x73a8cb:goto L73a8cb;
case 0x73a8d1:c.instructions+=54;goto B73a8d1;
case 0x73a8d4:c.instructions+=53;goto B73a8d4;
case 0x73a8d7:c.instructions+=52;goto B73a8d7;
case 0x73a8da:c.instructions+=51;goto B73a8da;
case 0x73a8dd:c.instructions+=50;goto B73a8dd;
case 0x73a8e1:c.instructions+=49;goto B73a8e1;
case 0x73a8e4:c.instructions+=48;goto B73a8e4;
case 0x73a8e7:c.instructions+=47;goto B73a8e7;
case 0x73a8ea:c.instructions+=46;goto B73a8ea;
case 0x73a8ee:c.instructions+=45;goto B73a8ee;
case 0x73a8f1:c.instructions+=44;goto B73a8f1;
case 0x73a8f6:c.instructions+=43;goto B73a8f6;
case 0x73a8f9:c.instructions+=42;goto B73a8f9;
case 0x73a8fc:c.instructions+=41;goto B73a8fc;
case 0x73a8ff:c.instructions+=40;goto B73a8ff;
case 0x73a902:c.instructions+=39;goto B73a902;
case 0x73a906:c.instructions+=38;goto B73a906;
case 0x73a909:c.instructions+=37;goto B73a909;
case 0x73a90c:c.instructions+=36;goto B73a90c;
case 0x73a90f:c.instructions+=35;goto B73a90f;
case 0x73a913:c.instructions+=34;goto B73a913;
case 0x73a917:c.instructions+=33;goto B73a917;
case 0x73a91a:c.instructions+=32;goto B73a91a;
case 0x73a91d:c.instructions+=31;goto B73a91d;
case 0x73a920:c.instructions+=30;goto B73a920;
case 0x73a924:c.instructions+=29;goto B73a924;
case 0x73a927:c.instructions+=28;goto B73a927;
case 0x73a92c:c.instructions+=27;goto B73a92c;
case 0x73a92f:c.instructions+=26;goto B73a92f;
case 0x73a931:c.instructions+=25;goto B73a931;
case 0x73a934:c.instructions+=24;goto B73a934;
case 0x73a937:c.instructions+=23;goto B73a937;
case 0x73a93a:c.instructions+=22;goto B73a93a;
case 0x73a93d:c.instructions+=21;goto B73a93d;
case 0x73a941:c.instructions+=20;goto B73a941;
case 0x73a944:c.instructions+=19;goto B73a944;
case 0x73a947:c.instructions+=18;goto B73a947;
case 0x73a94a:c.instructions+=17;goto B73a94a;
case 0x73a94e:c.instructions+=16;goto B73a94e;
case 0x73a951:c.instructions+=15;goto B73a951;
case 0x73a954:c.instructions+=14;goto B73a954;
case 0x73a957:c.instructions+=13;goto B73a957;
case 0x73a95a:c.instructions+=12;goto B73a95a;
case 0x73a95e:c.instructions+=11;goto B73a95e;
case 0x73a962:c.instructions+=10;goto B73a962;
case 0x73a965:c.instructions+=9;goto B73a965;
case 0x73a968:c.instructions+=8;goto B73a968;
case 0x73a96b:c.instructions+=7;goto B73a96b;
case 0x73a96f:c.instructions+=6;goto B73a96f;
case 0x73a972:c.instructions+=5;goto B73a972;
case 0x73a975:c.instructions+=4;goto B73a975;
case 0x73a978:c.instructions+=3;goto B73a978;
case 0x73a97a:c.instructions+=2;goto B73a97a;
case 0x73a980:c.instructions+=1;goto B73a980;
case 0x73a985:goto L73a985;
case 0x73a987:goto L73a987;
case 0x73a98e:c.instructions+=13;goto B73a98e;
case 0x73a995:c.instructions+=12;goto B73a995;
case 0x73a997:c.instructions+=11;goto B73a997;
case 0x73a99e:c.instructions+=10;goto B73a99e;
case 0x73a9a5:c.instructions+=9;goto B73a9a5;
case 0x73a9a7:c.instructions+=8;goto B73a9a7;
case 0x73a9ad:c.instructions+=7;goto B73a9ad;
case 0x73a9b3:c.instructions+=6;goto B73a9b3;
case 0x73a9b4:c.instructions+=5;goto B73a9b4;
case 0x73a9b5:c.instructions+=4;goto B73a9b5;
case 0x73a9b6:c.instructions+=3;goto B73a9b6;
case 0x73a9b7:c.instructions+=2;goto B73a9b7;
case 0x73a9b8:c.instructions+=1;goto B73a9b8;
case 0x73a9b9:goto L73a9b9;
case 0x73a9bd:c.instructions+=9;goto B73a9bd;
case 0x73a9be:c.instructions+=8;goto B73a9be;
case 0x73a9bf:c.instructions+=7;goto B73a9bf;
case 0x73a9c1:c.instructions+=6;goto B73a9c1;
case 0x73a9c2:c.instructions+=5;goto B73a9c2;
case 0x73a9c8:c.instructions+=4;goto B73a9c8;
case 0x73a9ce:c.instructions+=3;goto B73a9ce;
case 0x73a9cf:c.instructions+=2;goto B73a9cf;
case 0x73a9d0:c.instructions+=1;goto B73a9d0;
case 0x73a9f0:goto L73a9f0;
case 0x73a9f4:c.instructions+=4;goto B73a9f4;
case 0x73a9f8:c.instructions+=3;goto B73a9f8;
case 0x73a9fd:c.instructions+=2;goto B73a9fd;
case 0x73aa03:c.instructions+=1;goto B73aa03;
case 0x73aa10:goto L73aa10;
case 0x73aa11:c.instructions+=8;goto B73aa11;
case 0x73aa16:c.instructions+=7;goto B73aa16;
case 0x73aa18:c.instructions+=6;goto B73aa18;
case 0x73aa19:c.instructions+=5;goto B73aa19;
case 0x73aa1d:c.instructions+=4;goto B73aa1d;
case 0x73aa1e:c.instructions+=3;goto B73aa1e;
case 0x73aa26:c.instructions+=2;goto B73aa26;
case 0x73aa28:c.instructions+=1;goto B73aa28;
case 0x73aa2e:goto L73aa2e;
case 0x73aa33:c.instructions+=2;goto B73aa33;
case 0x73aa35:c.instructions+=1;goto B73aa35;
case 0x73aa3b:goto L73aa3b;
case 0x73aa3d:c.instructions+=1;goto B73aa3d;
case 0x73aa42:goto L73aa42;
case 0x73aa45:c.instructions+=2;goto B73aa45;
case 0x73aa47:c.instructions+=1;goto B73aa47;
case 0x73aa4d:goto L73aa4d;
case 0x73aa51:goto L73aa51;
case 0x73aa55:c.instructions+=4;goto B73aa55;
case 0x73aa5a:c.instructions+=3;goto B73aa5a;
case 0x73aa5c:c.instructions+=2;goto B73aa5c;
case 0x73aa5e:c.instructions+=1;goto B73aa5e;
case 0x73aa60:goto L73aa60;
case 0x73aa61:c.instructions+=3;goto B73aa61;
case 0x73aa64:c.instructions+=2;goto B73aa64;
case 0x73aa68:c.instructions+=1;goto B73aa68;
case 0x73aa6a:goto L73aa6a;
case 0x73aa6c:c.instructions+=5;goto B73aa6c;
case 0x73aa72:c.instructions+=4;goto B73aa72;
case 0x73aa76:c.instructions+=3;goto B73aa76;
case 0x73aa78:c.instructions+=2;goto B73aa78;
case 0x73aa79:c.instructions+=1;goto B73aa79;
case 0x73aa7e:goto L73aa7e;
case 0x73aa83:c.instructions+=5;goto B73aa83;
case 0x73aa87:c.instructions+=4;goto B73aa87;
case 0x73aa8b:c.instructions+=3;goto B73aa8b;
case 0x73aa8e:c.instructions+=2;goto B73aa8e;
case 0x73aa90:c.instructions+=1;goto B73aa90;
case 0x73aa92:goto L73aa92;
case 0x73aa94:c.instructions+=7;goto B73aa94;
case 0x73aa95:c.instructions+=6;goto B73aa95;
case 0x73aa9a:c.instructions+=5;goto B73aa9a;
case 0x73aaa0:c.instructions+=4;goto B73aaa0;
case 0x73aaa6:c.instructions+=3;goto B73aaa6;
case 0x73aaa7:c.instructions+=2;goto B73aaa7;
case 0x73aaa8:c.instructions+=1;goto B73aaa8;
case 0x73aaa9:goto L73aaa9;
case 0x73aaad:c.instructions+=6;goto B73aaad;
case 0x73aaae:c.instructions+=5;goto B73aaae;
case 0x73aab0:c.instructions+=4;goto B73aab0;
case 0x73aab2:c.instructions+=3;goto B73aab2;
case 0x73aab3:c.instructions+=2;goto B73aab3;
case 0x73aab8:c.instructions+=1;goto B73aab8;
case 0x73aaba:goto L73aaba;
case 0x73aabc:goto L73aabc;
case 0x73aac2:c.instructions+=8;goto B73aac2;
case 0x73aac4:c.instructions+=7;goto B73aac4;
case 0x73aac7:c.instructions+=6;goto B73aac7;
case 0x73aacd:c.instructions+=5;goto B73aacd;
case 0x73aacf:c.instructions+=4;goto B73aacf;
case 0x73aad1:c.instructions+=3;goto B73aad1;
case 0x73aad3:c.instructions+=2;goto B73aad3;
case 0x73aad8:c.instructions+=1;goto B73aad8;
case 0x73aada:goto L73aada;
case 0x73aadb:c.instructions+=2;goto B73aadb;
case 0x73aade:c.instructions+=1;goto B73aade;
case 0x73aadf:goto L73aadf;
case 0x73aae4:c.instructions+=10;goto B73aae4;
case 0x73aae6:c.instructions+=9;goto B73aae6;
case 0x73aaea:c.instructions+=8;goto B73aaea;
case 0x73aaec:c.instructions+=7;goto B73aaec;
case 0x73aaf2:c.instructions+=6;goto B73aaf2;
case 0x73aaf4:c.instructions+=5;goto B73aaf4;
case 0x73aaf6:c.instructions+=4;goto B73aaf6;
case 0x73aaf8:c.instructions+=3;goto B73aaf8;
case 0x73aafb:c.instructions+=2;goto B73aafb;
case 0x73aaff:c.instructions+=1;goto B73aaff;
case 0x73ab01:goto L73ab01;
case 0x73ab03:goto L73ab03;
case 0x73ab05:c.instructions+=2;goto B73ab05;
case 0x73ab08:c.instructions+=1;goto B73ab08;
case 0x73ab0a:goto L73ab0a;
case 0x73ab0c:goto L73ab0c;
case 0x73ab0e:goto L73ab0e;
case 0x73ab10:c.instructions+=1;goto B73ab10;
case 0x73ab12:goto L73ab12;
case 0x73ab18:c.instructions+=4;goto B73ab18;
case 0x73ab20:c.instructions+=3;goto B73ab20;
case 0x73ab23:c.instructions+=2;goto B73ab23;
case 0x73ab24:c.instructions+=1;goto B73ab24;
case 0x73ab26:goto L73ab26;
case 0x73ab2a:c.instructions+=38;goto B73ab2a;
case 0x73ab2f:c.instructions+=37;goto B73ab2f;
case 0x73ab32:c.instructions+=36;goto B73ab32;
case 0x73ab34:c.instructions+=35;goto B73ab34;
case 0x73ab37:c.instructions+=34;goto B73ab37;
case 0x73ab3c:c.instructions+=33;goto B73ab3c;
case 0x73ab3f:c.instructions+=32;goto B73ab3f;
case 0x73ab42:c.instructions+=31;goto B73ab42;
case 0x73ab45:c.instructions+=30;goto B73ab45;
case 0x73ab48:c.instructions+=29;goto B73ab48;
case 0x73ab4d:c.instructions+=28;goto B73ab4d;
case 0x73ab4f:c.instructions+=27;goto B73ab4f;
case 0x73ab54:c.instructions+=26;goto B73ab54;
case 0x73ab57:c.instructions+=25;goto B73ab57;
case 0x73ab5a:c.instructions+=24;goto B73ab5a;
case 0x73ab5e:c.instructions+=23;goto B73ab5e;
case 0x73ab61:c.instructions+=22;goto B73ab61;
case 0x73ab64:c.instructions+=21;goto B73ab64;
case 0x73ab67:c.instructions+=20;goto B73ab67;
case 0x73ab6a:c.instructions+=19;goto B73ab6a;
case 0x73ab6d:c.instructions+=18;goto B73ab6d;
case 0x73ab6f:c.instructions+=17;goto B73ab6f;
case 0x73ab71:c.instructions+=16;goto B73ab71;
case 0x73ab77:c.instructions+=15;goto B73ab77;
case 0x73ab7a:c.instructions+=14;goto B73ab7a;
case 0x73ab7d:c.instructions+=13;goto B73ab7d;
case 0x73ab7f:c.instructions+=12;goto B73ab7f;
case 0x73ab84:c.instructions+=11;goto B73ab84;
case 0x73ab86:c.instructions+=10;goto B73ab86;
case 0x73ab89:c.instructions+=9;goto B73ab89;
case 0x73ab8c:c.instructions+=8;goto B73ab8c;
case 0x73ab90:c.instructions+=7;goto B73ab90;
case 0x73ab93:c.instructions+=6;goto B73ab93;
case 0x73ab97:c.instructions+=5;goto B73ab97;
case 0x73ab9a:c.instructions+=4;goto B73ab9a;
case 0x73ab9d:c.instructions+=3;goto B73ab9d;
case 0x73aba0:c.instructions+=2;goto B73aba0;
case 0x73abaa:c.instructions+=1;goto B73abaa;
case 0x73abac:goto L73abac;
case 0x73abb0:c.instructions+=1;goto B73abb0;
case 0x73abb2:goto L73abb2;
case 0x73abb8:c.instructions+=1;goto B73abb8;
case 0x73abbb:goto L73abbb;
case 0x73abbf:c.instructions+=3;goto B73abbf;
case 0x73abc2:c.instructions+=2;goto B73abc2;
case 0x73abc4:c.instructions+=1;goto B73abc4;
case 0x73abc6:goto L73abc6;
case 0x73abc8:c.instructions+=4;goto B73abc8;
case 0x73abcb:c.instructions+=3;goto B73abcb;
case 0x73abcc:c.instructions+=2;goto B73abcc;
case 0x73abce:c.instructions+=1;goto B73abce;
case 0x73abd0:goto L73abd0;
case 0x73abd2:c.instructions+=1;goto B73abd2;
case 0x73abd5:goto L73abd5;
case 0x73abd7:c.instructions+=3;goto B73abd7;
case 0x73abd8:c.instructions+=2;goto B73abd8;
case 0x73abda:c.instructions+=1;goto B73abda;
case 0x73abdc:goto L73abdc;
case 0x73abde:c.instructions+=3;goto B73abde;
case 0x73abe1:c.instructions+=2;goto B73abe1;
case 0x73abe3:c.instructions+=1;goto B73abe3;
case 0x73abe5:goto L73abe5;
case 0x73abe7:c.instructions+=2;goto B73abe7;
case 0x73abe9:c.instructions+=1;goto B73abe9;
case 0x73abeb:goto L73abeb;
case 0x73abed:c.instructions+=1;goto B73abed;
case 0x73abef:goto L73abef;
case 0x73abf1:c.instructions+=1;goto B73abf1;
case 0x73abf3:goto L73abf3;
case 0x73abf4:c.instructions+=2;goto B73abf4;
case 0x73abf6:c.instructions+=1;goto B73abf6;
case 0x73abf8:goto L73abf8;
case 0x73abfa:c.instructions+=1;goto B73abfa;
case 0x73ac00:goto L73ac00;
case 0x73ac03:c.instructions+=5;goto B73ac03;
case 0x73ac08:c.instructions+=4;goto B73ac08;
case 0x73ac0a:c.instructions+=3;goto B73ac0a;
case 0x73ac0e:c.instructions+=2;goto B73ac0e;
case 0x73ac10:c.instructions+=1;goto B73ac10;
case 0x73ac12:goto L73ac12;
case 0x73ac13:c.instructions+=2;goto B73ac13;
case 0x73ac16:c.instructions+=1;goto B73ac16;
case 0x73ac18:goto L73ac18;
case 0x73ac19:c.instructions+=7;goto B73ac19;
case 0x73ac1a:c.instructions+=6;goto B73ac1a;
case 0x73ac1b:c.instructions+=5;goto B73ac1b;
case 0x73ac1c:c.instructions+=4;goto B73ac1c;
case 0x73ac22:c.instructions+=3;goto B73ac22;
case 0x73ac27:c.instructions+=2;goto B73ac27;
case 0x73ac28:c.instructions+=1;goto B73ac28;
case 0x73ac2d:goto L73ac2d;
case 0x73ac33:c.instructions+=5;goto B73ac33;
case 0x73ac39:c.instructions+=4;goto B73ac39;
case 0x73ac3c:c.instructions+=3;goto B73ac3c;
case 0x73ac3e:c.instructions+=2;goto B73ac3e;
case 0x73ac40:c.instructions+=1;goto B73ac40;
case 0x73ac42:goto L73ac42;
case 0x73ac44:c.instructions+=1;goto B73ac44;
case 0x73ac46:goto L73ac46;
case 0x73ac48:c.instructions+=2;goto B73ac48;
case 0x73ac4a:c.instructions+=1;goto B73ac4a;
case 0x73ac4c:goto L73ac4c;
case 0x73ac4e:c.instructions+=2;goto B73ac4e;
case 0x73ac50:c.instructions+=1;goto B73ac50;
case 0x73ac52:goto L73ac52;
case 0x73ac54:c.instructions+=1;goto B73ac54;
case 0x73ac56:goto L73ac56;
case 0x73ac58:c.instructions+=1;goto B73ac58;
case 0x73ac5a:goto L73ac5a;
case 0x73ac5c:c.instructions+=1;goto B73ac5c;
case 0x73ac5e:goto L73ac5e;
case 0x73ac64:c.instructions+=3;goto B73ac64;
case 0x73ac66:c.instructions+=2;goto B73ac66;
case 0x73ac68:c.instructions+=1;goto B73ac68;
case 0x73ac6a:goto L73ac6a;
case 0x73ac6d:goto L73ac6d;
case 0x73ac6e:c.instructions+=2;goto B73ac6e;
case 0x73ac70:c.instructions+=1;goto B73ac70;
case 0x73ac72:goto L73ac72;
case 0x73ac74:goto L73ac74;
case 0x73ac77:goto L73ac77;
case 0x73ac7d:c.instructions+=4;goto B73ac7d;
case 0x73ac81:c.instructions+=3;goto B73ac81;
case 0x73ac86:c.instructions+=2;goto B73ac86;
case 0x73ac8a:c.instructions+=1;goto B73ac8a;
case 0x73ac8f:goto L73ac8f;
case 0x73ac92:c.instructions+=2;goto B73ac92;
case 0x73ac95:c.instructions+=1;goto B73ac95;
case 0x73ac97:goto L73ac97;
case 0x73ac9c:c.instructions+=2;goto B73ac9c;
case 0x73aca1:c.instructions+=1;goto B73aca1;
case 0x73aca6:goto L73aca6;
case 0x73aca9:goto L73aca9;
case 0x73acad:c.instructions+=11;goto B73acad;
case 0x73acb1:c.instructions+=10;goto B73acb1;
case 0x73acb5:c.instructions+=9;goto B73acb5;
case 0x73acb6:c.instructions+=8;goto B73acb6;
case 0x73acba:c.instructions+=7;goto B73acba;
case 0x73acbb:c.instructions+=6;goto B73acbb;
case 0x73acbc:c.instructions+=5;goto B73acbc;
case 0x73acbd:c.instructions+=4;goto B73acbd;
case 0x73acbe:c.instructions+=3;goto B73acbe;
case 0x73acbf:c.instructions+=2;goto B73acbf;
case 0x73acc6:c.instructions+=1;goto B73acc6;
case 0x73accb:goto L73accb;
case 0x73acce:c.instructions+=3;goto B73acce;
case 0x73acd0:c.instructions+=2;goto B73acd0;
case 0x73acd3:c.instructions+=1;goto B73acd3;
case 0x73acd5:goto L73acd5;
case 0x73acdb:c.instructions+=3;goto B73acdb;
case 0x73acdf:c.instructions+=2;goto B73acdf;
case 0x73ace7:c.instructions+=1;goto B73ace7;
case 0x73ace9:goto L73ace9;
case 0x73acf0:c.instructions+=1;goto B73acf0;
case 0x73acf2:goto L73acf2;
case 0x73acf3:c.instructions+=8;goto B73acf3;
case 0x73acf4:c.instructions+=7;goto B73acf4;
case 0x73acf6:c.instructions+=6;goto B73acf6;
case 0x73acf7:c.instructions+=5;goto B73acf7;
case 0x73acfd:c.instructions+=4;goto B73acfd;
case 0x73ad03:c.instructions+=3;goto B73ad03;
case 0x73ad04:c.instructions+=2;goto B73ad04;
case 0x73ad05:c.instructions+=1;goto B73ad05;
case 0x73ad06:goto L73ad06;
case 0x73ad07:c.instructions+=4;goto B73ad07;
case 0x73ad0c:c.instructions+=3;goto B73ad0c;
case 0x73ad0d:c.instructions+=2;goto B73ad0d;
case 0x73ad0e:c.instructions+=1;goto B73ad0e;
case 0x73ae40:goto L73ae40;
case 0x73ae44:c.instructions+=2;goto B73ae44;
case 0x73ae45:c.instructions+=1;goto B73ae45;
case 0x73ae4a:goto L73ae4a;
case 0x73ae4d:c.instructions+=2;goto B73ae4d;
case 0x73ae4f:c.instructions+=1;goto B73ae4f;
case 0x73ae51:goto L73ae51;
case 0x73ae56:c.instructions+=1;goto B73ae56;
case 0x73ae57:goto L73ae57;
case 0x73ae5a:c.instructions+=1;goto B73ae5a;
case 0x73ae60:goto L73ae60;
case 0x73ae64:c.instructions+=5;goto B73ae64;
case 0x73ae65:c.instructions+=4;goto B73ae65;
case 0x73ae69:c.instructions+=3;goto B73ae69;
case 0x73ae6a:c.instructions+=2;goto B73ae6a;
case 0x73ae6b:c.instructions+=1;goto B73ae6b;
case 0x73ae70:goto L73ae70;
case 0x73ae73:c.instructions+=6;goto B73ae73;
case 0x73ae76:c.instructions+=5;goto B73ae76;
case 0x73ae78:c.instructions+=4;goto B73ae78;
case 0x73ae7a:c.instructions+=3;goto B73ae7a;
case 0x73ae7d:c.instructions+=2;goto B73ae7d;
case 0x73ae83:c.instructions+=1;goto B73ae83;
case 0x73ae85:goto L73ae85;
case 0x73ae86:c.instructions+=2;goto B73ae86;
case 0x73ae89:c.instructions+=1;goto B73ae89;
case 0x73ae8a:goto L73ae8a;
case 0x73ae8c:c.instructions+=3;goto B73ae8c;
case 0x73ae8f:c.instructions+=2;goto B73ae8f;
case 0x73ae90:c.instructions+=1;goto B73ae90;
case 0x73aea0:goto L73aea0;
case 0x73aea3:c.instructions+=6;goto B73aea3;
case 0x73aea8:c.instructions+=5;goto B73aea8;
case 0x73aeaa:c.instructions+=4;goto B73aeaa;
case 0x73aeab:c.instructions+=3;goto B73aeab;
case 0x73aeb3:c.instructions+=2;goto B73aeb3;
case 0x73aebb:c.instructions+=1;goto B73aebb;
case 0x73aec1:goto L73aec1;
case 0x73aec6:c.instructions+=2;goto B73aec6;
case 0x73aec8:c.instructions+=1;goto B73aec8;
case 0x73aece:goto L73aece;
case 0x73aed0:c.instructions+=1;goto B73aed0;
case 0x73aed5:goto L73aed5;
case 0x73aed8:c.instructions+=2;goto B73aed8;
case 0x73aeda:c.instructions+=1;goto B73aeda;
case 0x73aee0:goto L73aee0;
case 0x73aee4:c.instructions+=4;goto B73aee4;
case 0x73aee6:c.instructions+=3;goto B73aee6;
case 0x73aeeb:c.instructions+=2;goto B73aeeb;
case 0x73aeec:c.instructions+=1;goto B73aeec;
case 0x73aef1:goto L73aef1;
case 0x73aef4:c.instructions+=2;goto B73aef4;
case 0x73aef6:c.instructions+=1;goto B73aef6;
case 0x73aef8:goto L73aef8;
case 0x73aefa:c.instructions+=1;goto B73aefa;
case 0x73af00:goto L73af00;
case 0x73af05:c.instructions+=3;goto B73af05;
case 0x73af07:c.instructions+=2;goto B73af07;
case 0x73af09:c.instructions+=1;goto B73af09;
case 0x73af0b:goto L73af0b;
case 0x73af0c:c.instructions+=2;goto B73af0c;
case 0x73af0f:c.instructions+=1;goto B73af0f;
case 0x73af11:goto L73af11;
case 0x73af16:c.instructions+=4;goto B73af16;
case 0x73af19:c.instructions+=3;goto B73af19;
case 0x73af1d:c.instructions+=2;goto B73af1d;
case 0x73af1f:c.instructions+=1;goto B73af1f;
case 0x73af21:goto L73af21;
case 0x73af23:c.instructions+=3;goto B73af23;
case 0x73af24:c.instructions+=2;goto B73af24;
case 0x73af27:c.instructions+=1;goto B73af27;
case 0x73af28:goto L73af28;
case 0x73af2b:c.instructions+=8;goto B73af2b;
case 0x73af2e:c.instructions+=7;goto B73af2e;
case 0x73af30:c.instructions+=6;goto B73af30;
case 0x73af33:c.instructions+=5;goto B73af33;
case 0x73af36:c.instructions+=4;goto B73af36;
case 0x73af39:c.instructions+=3;goto B73af39;
case 0x73af3c:c.instructions+=2;goto B73af3c;
case 0x73af3e:c.instructions+=1;goto B73af3e;
case 0x73af40:goto L73af40;
case 0x73af44:goto L73af44;
case 0x73af48:c.instructions+=5;goto B73af48;
case 0x73af52:c.instructions+=4;goto B73af52;
case 0x73af5c:c.instructions+=3;goto B73af5c;
case 0x73af5e:c.instructions+=2;goto B73af5e;
case 0x73af64:c.instructions+=1;goto B73af64;
case 0x73af69:goto L73af69;
case 0x73af6b:c.instructions+=3;goto B73af6b;
case 0x73af6c:c.instructions+=2;goto B73af6c;
case 0x73af6f:c.instructions+=1;goto B73af6f;
case 0x73af70:goto L73af70;
case 0x73af72:goto L73af72;
case 0x73af75:c.instructions+=6;goto B73af75;
case 0x73af77:c.instructions+=5;goto B73af77;
case 0x73af7a:c.instructions+=4;goto B73af7a;
case 0x73af7c:c.instructions+=3;goto B73af7c;
case 0x73af80:c.instructions+=2;goto B73af80;
case 0x73af84:c.instructions+=1;goto B73af84;
case 0x73af86:goto L73af86;
case 0x73af8c:goto L73af8c;
case 0x73af8f:c.instructions+=3;goto B73af8f;
case 0x73af92:c.instructions+=2;goto B73af92;
case 0x73af94:c.instructions+=1;goto B73af94;
case 0x73af96:goto L73af96;
case 0x73af9c:goto L73af9c;
case 0x73af9e:c.instructions+=5;goto B73af9e;
case 0x73afa2:c.instructions+=4;goto B73afa2;
case 0x73afa4:c.instructions+=3;goto B73afa4;
case 0x73afa6:c.instructions+=2;goto B73afa6;
case 0x73afa9:c.instructions+=1;goto B73afa9;
case 0x73afab:goto L73afab;
case 0x73afaf:goto L73afaf;
case 0x73afb2:c.instructions+=2;goto B73afb2;
case 0x73afb4:c.instructions+=1;goto B73afb4;
case 0x73afb6:goto L73afb6;
case 0x73afb8:goto L73afb8;
case 0x73afbd:c.instructions+=3;goto B73afbd;
case 0x73afbe:c.instructions+=2;goto B73afbe;
case 0x73afc1:c.instructions+=1;goto B73afc1;
case 0x73afd0:goto L73afd0;
case 0x73afd5:c.instructions+=2;goto B73afd5;
case 0x73afd7:c.instructions+=1;goto B73afd7;
case 0x73afd9:goto L73afd9;
case 0x73afde:c.instructions+=2;goto B73afde;
case 0x73afe0:c.instructions+=1;goto B73afe0;
case 0x73afe2:goto L73afe2;
case 0x73afe4:c.instructions+=1;goto B73afe4;
case 0x73afe9:goto L73afe9;
case 0x73afec:c.instructions+=2;goto B73afec;
case 0x73afee:c.instructions+=1;goto B73afee;
case 0x73aff0:goto L73aff0;
case 0x73aff4:c.instructions+=2;goto B73aff4;
case 0x73aff5:c.instructions+=1;goto B73aff5;
case 0x73affa:goto L73affa;
case 0x73affd:c.instructions+=2;goto B73affd;
case 0x73afff:c.instructions+=1;goto B73afff;
default:missing_instruction(c.pc);}
B73a000:L73a000:{c.instructions+=5;NFSU2_TR(0x73a000);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B73a003:{NFSU2_TR(0x73a003);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73a004:{NFSU2_TR(0x73a004);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73a005:{NFSU2_TR(0x73a005);
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
B73a008:{NFSU2_TR(0x73a008);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73a009:L73a009:{c.instructions+=2;NFSU2_TR(0x73a009);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B73a00b:{NFSU2_TR(0x73a00b);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L73a01b;}}
}
B73a00d:L73a00d:{c.instructions+=3;NFSU2_TR(0x73a00d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73a013:{NFSU2_TR(0x73a013);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B73a017:{NFSU2_TR(0x73a017);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73a01b:L73a01b:{c.instructions+=3;NFSU2_TR(0x73a01b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7full))));
}
B73a01e:{NFSU2_TR(0x73a01e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B73a01f:{NFSU2_TR(0x73a01f);
if(r1(R+518)){{goto L73a04d;}}
}
B73a021:L73a021:{c.instructions+=2;NFSU2_TR(0x73a021);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B73a022:{NFSU2_TR(0x73a022);
if(r1(R+518)){{goto L73a03b;}}
}
B73a024:L73a024:{c.instructions+=2;NFSU2_TR(0x73a024);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B73a025:{NFSU2_TR(0x73a025);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a059;}}
}
B73a027:L73a027:{c.instructions+=5;NFSU2_TR(0x73a027);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a029:{NFSU2_TR(0x73a029);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73a02f:{NFSU2_TR(0x73a02f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B73a033:{NFSU2_TR(0x73a033);
{u32 ea_=u32(u32(8200080u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73a039:{NFSU2_TR(0x73a039);
{goto L73a059;}
}
B73a03b:L73a03b:{c.instructions+=5;NFSU2_TR(0x73a03b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a03d:{NFSU2_TR(0x73a03d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73a041:{NFSU2_TR(0x73a041);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73a045:{NFSU2_TR(0x73a045);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B73a04b:{NFSU2_TR(0x73a04b);
{goto L73a059;}
}
B73a04d:L73a04d:{c.instructions+=3;NFSU2_TR(0x73a04d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a04f:{NFSU2_TR(0x73a04f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73a055:{NFSU2_TR(0x73a055);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B73a059:L73a059:{c.instructions+=3;NFSU2_TR(0x73a059);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(R+8),r1(U+0)));
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B73a05b:{NFSU2_TR(0x73a05b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73a05f:{NFSU2_TR(0x73a05f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73a067;}}
}
B73a061:L73a061:{c.instructions+=2;NFSU2_TR(0x73a061);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a063:{NFSU2_TR(0x73a063);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73a067:L73a067:{c.instructions+=5;NFSU2_TR(0x73a067);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B73a069:{NFSU2_TR(0x73a069);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B73a06f:{NFSU2_TR(0x73a06f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B73a071:{NFSU2_TR(0x73a071);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B73a074:{NFSU2_TR(0x73a074);
if(r1(R+514)){{goto L73a07c;}}
}
B73a076:L73a076:{c.instructions+=3;NFSU2_TR(0x73a076);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B73a078:{NFSU2_TR(0x73a078);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B73a07a:{NFSU2_TR(0x73a07a);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B73a07c:L73a07c:{c.instructions+=5;NFSU2_TR(0x73a07c);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B73a07e:{NFSU2_TR(0x73a07e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B73a084:{NFSU2_TR(0x73a084);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B73a086:{NFSU2_TR(0x73a086);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73a089:{NFSU2_TR(0x73a089);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a0bd;}}
}
B73a08b:L73a08b:{c.instructions+=5;NFSU2_TR(0x73a08b);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B73a08d:{NFSU2_TR(0x73a08d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B73a093:{NFSU2_TR(0x73a093);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B73a095:{NFSU2_TR(0x73a095);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B73a098:{NFSU2_TR(0x73a098);
if(r1(R+514)){{goto L73a0bd;}}
}
B73a09a:L73a09a:{c.instructions+=4;NFSU2_TR(0x73a09a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B73a09c:{NFSU2_TR(0x73a09c);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B73a09e:{NFSU2_TR(0x73a09e);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B73a0a0:{NFSU2_TR(0x73a0a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73a0a5ull));
TAIL_STATIC(0x75bed4u,75b);
}
B73a0a5:L73a0a5:{c.instructions+=6;NFSU2_TR(0x73a0a5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a0a7:{NFSU2_TR(0x73a0a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73a0aa:{NFSU2_TR(0x73a0aa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a0ac:{NFSU2_TR(0x73a0ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a0ad:{NFSU2_TR(0x73a0ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a0ae:{NFSU2_TR(0x73a0ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73a0b3ull));
TAIL_STATIC(0x47b820u,47b);
}
B73a0b3:L73a0b3:{c.instructions+=6;NFSU2_TR(0x73a0b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73a0b6:{NFSU2_TR(0x73a0b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73a0b7:{NFSU2_TR(0x73a0b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73a0b8:{NFSU2_TR(0x73a0b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73a0b9:{NFSU2_TR(0x73a0b9);
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
B73a0bc:{NFSU2_TR(0x73a0bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73a0bd:L73a0bd:{c.instructions+=8;NFSU2_TR(0x73a0bd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a0bf:{NFSU2_TR(0x73a0bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73a0c0:{NFSU2_TR(0x73a0c0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a0c2:{NFSU2_TR(0x73a0c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73a0c3:{NFSU2_TR(0x73a0c3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a0c5:{NFSU2_TR(0x73a0c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73a0c6:{NFSU2_TR(0x73a0c6);
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
B73a0c9:{NFSU2_TR(0x73a0c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73a0d0:L73a0d0:{c.instructions+=33;NFSU2_TR(0x73a0d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B73a0d3:{NFSU2_TR(0x73a0d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a0d4:{NFSU2_TR(0x73a0d4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a0d5:{NFSU2_TR(0x73a0d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a0d6:{NFSU2_TR(0x73a0d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73a0da:{NFSU2_TR(0x73a0da);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B73a0dd:{NFSU2_TR(0x73a0dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B73a0e0:{NFSU2_TR(0x73a0e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a0e1:{NFSU2_TR(0x73a0e1);
w4(R+28,u32(s32(s8(r1(R+8)))));
}
B73a0e4:{NFSU2_TR(0x73a0e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73a0e8:{NFSU2_TR(0x73a0e8);
w4(R+0,u32(s32(s8(r1(R+12)))));
}
B73a0eb:{NFSU2_TR(0x73a0eb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73a0ef:{NFSU2_TR(0x73a0ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73a0f3:{NFSU2_TR(0x73a0f3);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B73a0f8:{NFSU2_TR(0x73a0f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73a0fb:{NFSU2_TR(0x73a0fb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73a0ff:{NFSU2_TR(0x73a0ff);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73a103:{NFSU2_TR(0x73a103);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73a107:{NFSU2_TR(0x73a107);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73a10a:{NFSU2_TR(0x73a10a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B73a10d:{NFSU2_TR(0x73a10d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73a111:{NFSU2_TR(0x73a111);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xff80ull))));
}
B73a117:{NFSU2_TR(0x73a117);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73a11b:{NFSU2_TR(0x73a11b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B73a11e:{NFSU2_TR(0x73a11e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B73a122:{NFSU2_TR(0x73a122);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+20))));
}
B73a124:{NFSU2_TR(0x73a124);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73a12a:{NFSU2_TR(0x73a12a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B73a12c:{NFSU2_TR(0x73a12c);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B73a12e:{NFSU2_TR(0x73a12e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B73a134:{NFSU2_TR(0x73a134);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B73a136:{NFSU2_TR(0x73a136);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B73a139:{NFSU2_TR(0x73a139);
if(r1(R+514)){{goto L73a13f;}}
}
B73a13b:L73a13b:{c.instructions+=2;NFSU2_TR(0x73a13b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73a13d:{NFSU2_TR(0x73a13d);
{goto L73a144;}
}
B73a13f:L73a13f:{c.instructions+=1;NFSU2_TR(0x73a13f);
w4(R+0,u32(0x1ull));
}
B73a144:L73a144:{c.instructions+=11;NFSU2_TR(0x73a144);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73a147:{NFSU2_TR(0x73a147);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B73a14a:{NFSU2_TR(0x73a14a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B73a14c:{NFSU2_TR(0x73a14c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80ull))));
}
B73a151:{NFSU2_TR(0x73a151);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B73a153:{NFSU2_TR(0x73a153);
__builtin_memmove((R+0),gp(0x8b7bc4),4);
}
B73a158:{NFSU2_TR(0x73a158);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B73a15a:{NFSU2_TR(0x73a15a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73a15c:{NFSU2_TR(0x73a15c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73a160:{NFSU2_TR(0x73a160);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73a164:{NFSU2_TR(0x73a164);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73a16c;}}
}
B73a166:L73a166:{c.instructions+=1;NFSU2_TR(0x73a166);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73a16c:L73a16c:{c.instructions+=6;NFSU2_TR(0x73a16c);
__builtin_memmove((R+0),(R+4),4);
}
B73a16e:{NFSU2_TR(0x73a16e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73a171:{NFSU2_TR(0x73a171);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73a173:{NFSU2_TR(0x73a173);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73a177:{NFSU2_TR(0x73a177);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73a17b:{NFSU2_TR(0x73a17b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73a183;}}
}
B73a17d:L73a17d:{c.instructions+=1;NFSU2_TR(0x73a17d);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73a183:L73a183:{c.instructions+=6;NFSU2_TR(0x73a183);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B73a185:{NFSU2_TR(0x73a185);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B73a189:{NFSU2_TR(0x73a189);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B73a18f:{NFSU2_TR(0x73a18f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B73a191:{NFSU2_TR(0x73a191);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73a194:{NFSU2_TR(0x73a194);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a1c3;}}
}
B73a196:L73a196:{c.instructions+=7;NFSU2_TR(0x73a196);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73a199:{NFSU2_TR(0x73a199);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a19b:{NFSU2_TR(0x73a19b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a19c:{NFSU2_TR(0x73a19c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a19e:{NFSU2_TR(0x73a19e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a1a0:{NFSU2_TR(0x73a1a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a1a1:{NFSU2_TR(0x73a1a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73a1a6ull));
TAIL_STATIC(0x46c470u,46c);
}
B73a1a6:L73a1a6:{c.instructions+=11;NFSU2_TR(0x73a1a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73a1a9:{NFSU2_TR(0x73a1a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73a1ac:{NFSU2_TR(0x73a1ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73a1ad:{NFSU2_TR(0x73a1ad);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffull))));
}
B73a1b2:{NFSU2_TR(0x73a1b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73a1b5:{NFSU2_TR(0x73a1b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73a1bc:{NFSU2_TR(0x73a1bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73a1bd:{NFSU2_TR(0x73a1bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73a1be:{NFSU2_TR(0x73a1be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73a1bf:{NFSU2_TR(0x73a1bf);
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
B73a1c2:{NFSU2_TR(0x73a1c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73a1c3:L73a1c3:{c.instructions+=2;NFSU2_TR(0x73a1c3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B73a1c5:{NFSU2_TR(0x73a1c5);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L73a1d5;}}
}
B73a1c7:L73a1c7:{c.instructions+=3;NFSU2_TR(0x73a1c7);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73a1cd:{NFSU2_TR(0x73a1cd);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B73a1d1:{NFSU2_TR(0x73a1d1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73a1d5:L73a1d5:{c.instructions+=3;NFSU2_TR(0x73a1d5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7full))));
}
B73a1d8:{NFSU2_TR(0x73a1d8);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B73a1d9:{NFSU2_TR(0x73a1d9);
if(r1(R+518)){{goto L73a207;}}
}
B73a1db:L73a1db:{c.instructions+=2;NFSU2_TR(0x73a1db);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B73a1dc:{NFSU2_TR(0x73a1dc);
if(r1(R+518)){{goto L73a1f5;}}
}
B73a1de:L73a1de:{c.instructions+=2;NFSU2_TR(0x73a1de);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B73a1df:{NFSU2_TR(0x73a1df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a213;}}
}
B73a1e1:L73a1e1:{c.instructions+=5;NFSU2_TR(0x73a1e1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a1e3:{NFSU2_TR(0x73a1e3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73a1e9:{NFSU2_TR(0x73a1e9);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B73a1ed:{NFSU2_TR(0x73a1ed);
{u32 ea_=u32(u32(8200080u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73a1f3:{NFSU2_TR(0x73a1f3);
{goto L73a213;}
}
B73a1f5:L73a1f5:{c.instructions+=5;NFSU2_TR(0x73a1f5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a1f7:{NFSU2_TR(0x73a1f7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73a1fb:{NFSU2_TR(0x73a1fb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73a1ff:{NFSU2_TR(0x73a1ff);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B73a205:{NFSU2_TR(0x73a205);
{goto L73a213;}
}
B73a207:L73a207:{c.instructions+=3;NFSU2_TR(0x73a207);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a209:{NFSU2_TR(0x73a209);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73a20f:{NFSU2_TR(0x73a20f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B73a213:L73a213:{c.instructions+=3;NFSU2_TR(0x73a213);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(R+8),r1(U+0)));
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B73a215:{NFSU2_TR(0x73a215);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73a219:{NFSU2_TR(0x73a219);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73a221;}}
}
B73a21b:L73a21b:{c.instructions+=2;NFSU2_TR(0x73a21b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a21d:{NFSU2_TR(0x73a21d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73a221:L73a221:{c.instructions+=5;NFSU2_TR(0x73a221);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B73a223:{NFSU2_TR(0x73a223);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B73a229:{NFSU2_TR(0x73a229);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B73a22b:{NFSU2_TR(0x73a22b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B73a22e:{NFSU2_TR(0x73a22e);
if(r1(R+514)){{goto L73a236;}}
}
B73a230:L73a230:{c.instructions+=3;NFSU2_TR(0x73a230);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B73a232:{NFSU2_TR(0x73a232);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B73a234:{NFSU2_TR(0x73a234);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B73a236:L73a236:{c.instructions+=5;NFSU2_TR(0x73a236);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B73a238:{NFSU2_TR(0x73a238);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B73a23e:{NFSU2_TR(0x73a23e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B73a240:{NFSU2_TR(0x73a240);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73a243:{NFSU2_TR(0x73a243);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a27a;}}
}
B73a245:L73a245:{c.instructions+=5;NFSU2_TR(0x73a245);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B73a247:{NFSU2_TR(0x73a247);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B73a24d:{NFSU2_TR(0x73a24d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B73a24f:{NFSU2_TR(0x73a24f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B73a252:{NFSU2_TR(0x73a252);
if(r1(R+514)){{goto L73a27a;}}
}
B73a254:L73a254:{c.instructions+=4;NFSU2_TR(0x73a254);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B73a256:{NFSU2_TR(0x73a256);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B73a258:{NFSU2_TR(0x73a258);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B73a25a:{NFSU2_TR(0x73a25a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73a25full));
TAIL_STATIC(0x75bed4u,75b);
}
B73a25f:L73a25f:{c.instructions+=7;NFSU2_TR(0x73a25f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a261:{NFSU2_TR(0x73a261);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73a264:{NFSU2_TR(0x73a264);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a266:{NFSU2_TR(0x73a266);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a267:{NFSU2_TR(0x73a267);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a269:{NFSU2_TR(0x73a269);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a26a:{NFSU2_TR(0x73a26a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73a26full));
TAIL_STATIC(0x46c470u,46c);
}
B73a26f:L73a26f:{c.instructions+=7;NFSU2_TR(0x73a26f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73a272:{NFSU2_TR(0x73a272);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73a273:{NFSU2_TR(0x73a273);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73a274:{NFSU2_TR(0x73a274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73a275:{NFSU2_TR(0x73a275);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73a276:{NFSU2_TR(0x73a276);
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
B73a279:{NFSU2_TR(0x73a279);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73a27a:L73a27a:{c.instructions+=9;NFSU2_TR(0x73a27a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73a27b:{NFSU2_TR(0x73a27b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a27d:{NFSU2_TR(0x73a27d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73a27e:{NFSU2_TR(0x73a27e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a280:{NFSU2_TR(0x73a280);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73a281:{NFSU2_TR(0x73a281);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a283:{NFSU2_TR(0x73a283);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73a284:{NFSU2_TR(0x73a284);
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
B73a287:{NFSU2_TR(0x73a287);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73a290:L73a290:{c.instructions+=33;NFSU2_TR(0x73a290);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B73a293:{NFSU2_TR(0x73a293);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a294:{NFSU2_TR(0x73a294);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a295:{NFSU2_TR(0x73a295);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a296:{NFSU2_TR(0x73a296);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73a29a:{NFSU2_TR(0x73a29a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B73a29d:{NFSU2_TR(0x73a29d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B73a2a0:{NFSU2_TR(0x73a2a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a2a1:{NFSU2_TR(0x73a2a1);
w4(R+28,u32(s32(s8(r1(R+8)))));
}
B73a2a4:{NFSU2_TR(0x73a2a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73a2a8:{NFSU2_TR(0x73a2a8);
w4(R+0,u32(s32(s8(r1(R+12)))));
}
B73a2ab:{NFSU2_TR(0x73a2ab);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73a2af:{NFSU2_TR(0x73a2af);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73a2b3:{NFSU2_TR(0x73a2b3);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B73a2b8:{NFSU2_TR(0x73a2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73a2bb:{NFSU2_TR(0x73a2bb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73a2bf:{NFSU2_TR(0x73a2bf);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73a2c3:{NFSU2_TR(0x73a2c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73a2c7:{NFSU2_TR(0x73a2c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73a2ca:{NFSU2_TR(0x73a2ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B73a2cd:{NFSU2_TR(0x73a2cd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73a2d1:{NFSU2_TR(0x73a2d1);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xff80ull))));
}
B73a2d7:{NFSU2_TR(0x73a2d7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73a2db:{NFSU2_TR(0x73a2db);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B73a2de:{NFSU2_TR(0x73a2de);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B73a2e2:{NFSU2_TR(0x73a2e2);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+20))));
}
B73a2e4:{NFSU2_TR(0x73a2e4);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73a2ea:{NFSU2_TR(0x73a2ea);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B73a2ec:{NFSU2_TR(0x73a2ec);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B73a2ee:{NFSU2_TR(0x73a2ee);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B73a2f4:{NFSU2_TR(0x73a2f4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B73a2f6:{NFSU2_TR(0x73a2f6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B73a2f9:{NFSU2_TR(0x73a2f9);
if(r1(R+514)){{goto L73a2ff;}}
}
B73a2fb:L73a2fb:{c.instructions+=2;NFSU2_TR(0x73a2fb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73a2fd:{NFSU2_TR(0x73a2fd);
{goto L73a304;}
}
B73a2ff:L73a2ff:{c.instructions+=1;NFSU2_TR(0x73a2ff);
w4(R+0,u32(0x1ull));
}
B73a304:L73a304:{c.instructions+=11;NFSU2_TR(0x73a304);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73a307:{NFSU2_TR(0x73a307);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B73a30a:{NFSU2_TR(0x73a30a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B73a30c:{NFSU2_TR(0x73a30c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80ull))));
}
B73a311:{NFSU2_TR(0x73a311);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B73a313:{NFSU2_TR(0x73a313);
__builtin_memmove((R+0),gp(0x8b7bc4),4);
}
B73a318:{NFSU2_TR(0x73a318);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B73a31a:{NFSU2_TR(0x73a31a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73a31c:{NFSU2_TR(0x73a31c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73a320:{NFSU2_TR(0x73a320);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73a324:{NFSU2_TR(0x73a324);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73a32c;}}
}
B73a326:L73a326:{c.instructions+=1;NFSU2_TR(0x73a326);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73a32c:L73a32c:{c.instructions+=6;NFSU2_TR(0x73a32c);
__builtin_memmove((R+0),(R+4),4);
}
B73a32e:{NFSU2_TR(0x73a32e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73a331:{NFSU2_TR(0x73a331);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73a333:{NFSU2_TR(0x73a333);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73a337:{NFSU2_TR(0x73a337);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73a33b:{NFSU2_TR(0x73a33b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73a343;}}
}
B73a33d:L73a33d:{c.instructions+=1;NFSU2_TR(0x73a33d);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73a343:L73a343:{c.instructions+=6;NFSU2_TR(0x73a343);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B73a345:{NFSU2_TR(0x73a345);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B73a349:{NFSU2_TR(0x73a349);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B73a34f:{NFSU2_TR(0x73a34f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B73a351:{NFSU2_TR(0x73a351);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73a354:{NFSU2_TR(0x73a354);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a381;}}
}
B73a356:L73a356:{c.instructions+=6;NFSU2_TR(0x73a356);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73a359:{NFSU2_TR(0x73a359);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a35b:{NFSU2_TR(0x73a35b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a35c:{NFSU2_TR(0x73a35c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a35e:{NFSU2_TR(0x73a35e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a35f:{NFSU2_TR(0x73a35f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73a364ull));
TAIL_STATIC(0x46c500u,46c);
}
B73a364:L73a364:{c.instructions+=11;NFSU2_TR(0x73a364);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73a367:{NFSU2_TR(0x73a367);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73a36a:{NFSU2_TR(0x73a36a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73a36b:{NFSU2_TR(0x73a36b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffull))));
}
B73a370:{NFSU2_TR(0x73a370);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73a373:{NFSU2_TR(0x73a373);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73a37a:{NFSU2_TR(0x73a37a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73a37b:{NFSU2_TR(0x73a37b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73a37c:{NFSU2_TR(0x73a37c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73a37d:{NFSU2_TR(0x73a37d);
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
B73a380:{NFSU2_TR(0x73a380);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73a381:L73a381:{c.instructions+=2;NFSU2_TR(0x73a381);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B73a383:{NFSU2_TR(0x73a383);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L73a393;}}
}
B73a385:L73a385:{c.instructions+=3;NFSU2_TR(0x73a385);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73a38b:{NFSU2_TR(0x73a38b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B73a38f:{NFSU2_TR(0x73a38f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73a393:L73a393:{c.instructions+=3;NFSU2_TR(0x73a393);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7full))));
}
B73a396:{NFSU2_TR(0x73a396);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B73a397:{NFSU2_TR(0x73a397);
if(r1(R+518)){{goto L73a3c5;}}
}
B73a399:L73a399:{c.instructions+=2;NFSU2_TR(0x73a399);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B73a39a:{NFSU2_TR(0x73a39a);
if(r1(R+518)){{goto L73a3b3;}}
}
B73a39c:L73a39c:{c.instructions+=2;NFSU2_TR(0x73a39c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B73a39d:{NFSU2_TR(0x73a39d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a3d1;}}
}
B73a39f:L73a39f:{c.instructions+=5;NFSU2_TR(0x73a39f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a3a1:{NFSU2_TR(0x73a3a1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73a3a7:{NFSU2_TR(0x73a3a7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B73a3ab:{NFSU2_TR(0x73a3ab);
{u32 ea_=u32(u32(8200080u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73a3b1:{NFSU2_TR(0x73a3b1);
{goto L73a3d1;}
}
B73a3b3:L73a3b3:{c.instructions+=5;NFSU2_TR(0x73a3b3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a3b5:{NFSU2_TR(0x73a3b5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73a3b9:{NFSU2_TR(0x73a3b9);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73a3bd:{NFSU2_TR(0x73a3bd);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B73a3c3:{NFSU2_TR(0x73a3c3);
{goto L73a3d1;}
}
B73a3c5:L73a3c5:{c.instructions+=3;NFSU2_TR(0x73a3c5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a3c7:{NFSU2_TR(0x73a3c7);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73a3cd:{NFSU2_TR(0x73a3cd);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B73a3d1:L73a3d1:{c.instructions+=3;NFSU2_TR(0x73a3d1);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(R+8),r1(U+0)));
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B73a3d3:{NFSU2_TR(0x73a3d3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73a3d7:{NFSU2_TR(0x73a3d7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73a3df;}}
}
B73a3d9:L73a3d9:{c.instructions+=2;NFSU2_TR(0x73a3d9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a3db:{NFSU2_TR(0x73a3db);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73a3df:L73a3df:{c.instructions+=5;NFSU2_TR(0x73a3df);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B73a3e1:{NFSU2_TR(0x73a3e1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B73a3e7:{NFSU2_TR(0x73a3e7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B73a3e9:{NFSU2_TR(0x73a3e9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B73a3ec:{NFSU2_TR(0x73a3ec);
if(r1(R+514)){{goto L73a3f4;}}
}
B73a3ee:L73a3ee:{c.instructions+=3;NFSU2_TR(0x73a3ee);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B73a3f0:{NFSU2_TR(0x73a3f0);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B73a3f2:{NFSU2_TR(0x73a3f2);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B73a3f4:L73a3f4:{c.instructions+=5;NFSU2_TR(0x73a3f4);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B73a3f6:{NFSU2_TR(0x73a3f6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B73a3fc:{NFSU2_TR(0x73a3fc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B73a3fe:{NFSU2_TR(0x73a3fe);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73a401:{NFSU2_TR(0x73a401);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a436;}}
}
B73a403:L73a403:{c.instructions+=5;NFSU2_TR(0x73a403);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B73a405:{NFSU2_TR(0x73a405);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B73a40b:{NFSU2_TR(0x73a40b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B73a40d:{NFSU2_TR(0x73a40d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B73a410:{NFSU2_TR(0x73a410);
if(r1(R+514)){{goto L73a436;}}
}
B73a412:L73a412:{c.instructions+=4;NFSU2_TR(0x73a412);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B73a414:{NFSU2_TR(0x73a414);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B73a416:{NFSU2_TR(0x73a416);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B73a418:{NFSU2_TR(0x73a418);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73a41dull));
TAIL_STATIC(0x75bed4u,75b);
}
B73a41d:L73a41d:{c.instructions+=6;NFSU2_TR(0x73a41d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a41f:{NFSU2_TR(0x73a41f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73a422:{NFSU2_TR(0x73a422);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a424:{NFSU2_TR(0x73a424);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a425:{NFSU2_TR(0x73a425);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a426:{NFSU2_TR(0x73a426);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73a42bull));
TAIL_STATIC(0x46c500u,46c);
}
B73a42b:L73a42b:{c.instructions+=7;NFSU2_TR(0x73a42b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73a42e:{NFSU2_TR(0x73a42e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73a42f:{NFSU2_TR(0x73a42f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73a430:{NFSU2_TR(0x73a430);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73a431:{NFSU2_TR(0x73a431);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73a432:{NFSU2_TR(0x73a432);
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
B73a435:{NFSU2_TR(0x73a435);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73a436:L73a436:{c.instructions+=9;NFSU2_TR(0x73a436);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73a437:{NFSU2_TR(0x73a437);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a439:{NFSU2_TR(0x73a439);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73a43a:{NFSU2_TR(0x73a43a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a43c:{NFSU2_TR(0x73a43c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73a43d:{NFSU2_TR(0x73a43d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73a43f:{NFSU2_TR(0x73a43f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73a440:{NFSU2_TR(0x73a440);
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
B73a443:{NFSU2_TR(0x73a443);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73a450:L73a450:{c.instructions+=4;NFSU2_TR(0x73a450);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a451:{NFSU2_TR(0x73a451);
__builtin_memmove((R+0),gp(0x8b7bbc),1);
}
B73a456:{NFSU2_TR(0x73a456);
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
B73a458:{NFSU2_TR(0x73a458);
if(r1(R+518)){{goto L73a53f;}}
}
B73a45e:L73a45e:{c.instructions+=3;NFSU2_TR(0x73a45e);
__builtin_memmove((R+0),gp(0x8b7bc0),4);
}
B73a463:{NFSU2_TR(0x73a463);
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
B73a465:{NFSU2_TR(0x73a465);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a53f;}}
}
B73a46b:L73a46b:{c.instructions+=2;NFSU2_TR(0x73a46b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a46d:{NFSU2_TR(0x73a46d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73a472ull));
TAIL_STATIC(0x73b620u,73b);
}
B73a472:L73a472:{c.instructions+=3;NFSU2_TR(0x73a472);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73a475:{NFSU2_TR(0x73a475);
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
B73a477:{NFSU2_TR(0x73a477);
if(r1(R+518)){{goto L73a53f;}}
}
B73a47d:L73a47d:{c.instructions+=3;NFSU2_TR(0x73a47d);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B73a481:{NFSU2_TR(0x73a481);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x64ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x64ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73a483:{NFSU2_TR(0x73a483);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73a489;}}
}
B73a485:L73a485:{c.instructions+=2;NFSU2_TR(0x73a485);
w1(R+0,u8(0x64ull));
}
B73a487:{NFSU2_TR(0x73a487);
{goto L73a48f;}
}
B73a489:L73a489:{c.instructions+=2;NFSU2_TR(0x73a489);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B73a48b:{NFSU2_TR(0x73a48b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73a493;}}
}
B73a48d:L73a48d:{c.instructions+=1;NFSU2_TR(0x73a48d);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B73a48f:L73a48f:{c.instructions+=1;NFSU2_TR(0x73a48f);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B73a493:L73a493:{c.instructions+=7;NFSU2_TR(0x73a493);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a494:{NFSU2_TR(0x73a494);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73a498:{NFSU2_TR(0x73a498);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73a49b:{NFSU2_TR(0x73a49b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a49c:{NFSU2_TR(0x73a49c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a49d:{NFSU2_TR(0x73a49d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a49e:{NFSU2_TR(0x73a49e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a4a5;}}
}
B73a4a0:L73a4a0:{c.instructions+=1;NFSU2_TR(0x73a4a0);
__builtin_memmove(gp(0x819b08),(R+0),1);
}
B73a4a5:L73a4a5:{c.instructions+=2;NFSU2_TR(0x73a4a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73a4ad:{NFSU2_TR(0x73a4ad);
w4(R+20,u32(0x8b5740ull));
}
B73a4b2:L73a4b2:{c.instructions+=3;NFSU2_TR(0x73a4b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73a4b5:{NFSU2_TR(0x73a4b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73a4b7:{NFSU2_TR(0x73a4b7);
if(r1(R+518)){{goto L73a518;}}
}
B73a4b9:L73a4b9:{c.instructions+=4;NFSU2_TR(0x73a4b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73a4bc:{NFSU2_TR(0x73a4bc);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B73a4be:{NFSU2_TR(0x73a4be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73a4c3:{NFSU2_TR(0x73a4c3);
if(r1(R+518)){{goto L73a518;}}
}
B73a4c5:L73a4c5:{c.instructions+=2;NFSU2_TR(0x73a4c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xf000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73a4ca:{NFSU2_TR(0x73a4ca);
if(r1(R+518)){{goto L73a518;}}
}
B73a4cc:L73a4cc:{c.instructions+=3;NFSU2_TR(0x73a4cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73a4d0:{NFSU2_TR(0x73a4d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a4d1:{NFSU2_TR(0x73a4d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73a4d6ull));
TAIL_STATIC(0x73b620u,73b);
}
B73a4d6:L73a4d6:{c.instructions+=3;NFSU2_TR(0x73a4d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73a4d9:{NFSU2_TR(0x73a4d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73a4db:{NFSU2_TR(0x73a4db);
if(r1(R+518)){{goto L73a518;}}
}
B73a4dd:L73a4dd:{c.instructions+=2;NFSU2_TR(0x73a4dd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B73a4df:{NFSU2_TR(0x73a4df);
w4(R+24,u32(0x58ull));
}
B73a4e4:L73a4e4:{c.instructions+=4;NFSU2_TR(0x73a4e4);
__builtin_memmove((R+4),gp(0x8b7bb0),4);
}
B73a4ea:{NFSU2_TR(0x73a4ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B73a4ed:{NFSU2_TR(0x73a4ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73a4ef:{NFSU2_TR(0x73a4ef);
if(r1(R+518)){{goto L73a50c;}}
}
B73a4f1:L73a4f1:{c.instructions+=5;NFSU2_TR(0x73a4f1);
w4(R+8,u32(0x1ull));
}
B73a4f6:{NFSU2_TR(0x73a4f6);
__builtin_memmove((R+4),(R+28),4);
}
B73a4f8:{NFSU2_TR(0x73a4f8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B73a4fa:{NFSU2_TR(0x73a4fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73a4fc:{NFSU2_TR(0x73a4fc);
if(r1(R+518)){{goto L73a50c;}}
}
B73a4fe:L73a4fe:{c.instructions+=4;NFSU2_TR(0x73a4fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73a502:{NFSU2_TR(0x73a502);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a503:{NFSU2_TR(0x73a503);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a504:{NFSU2_TR(0x73a504);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73a509ull));
TAIL_STATIC(0x739de0u,739);
}
B73a509:L73a509:{c.instructions+=1;NFSU2_TR(0x73a509);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73a50c:L73a50c:{c.instructions+=4;NFSU2_TR(0x73a50c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B73a50f:{NFSU2_TR(0x73a50f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B73a510:{NFSU2_TR(0x73a510);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xb8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73a516:{NFSU2_TR(0x73a516);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73a4e4u);}goto L73a4e4;}}
}
B73a518:L73a518:{c.instructions+=6;NFSU2_TR(0x73a518);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73a51c:{NFSU2_TR(0x73a51c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B73a51d:{NFSU2_TR(0x73a51d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x928ull))));
}
B73a523:{NFSU2_TR(0x73a523);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8b7be0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8b7be0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73a529:{NFSU2_TR(0x73a529);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73a52d:{NFSU2_TR(0x73a52d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73a4b2u);}goto L73a4b2;}}
}
B73a52f:L73a52f:{c.instructions+=7;NFSU2_TR(0x73a52f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73a530:{NFSU2_TR(0x73a530);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73a531:{NFSU2_TR(0x73a531);
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
B73a533:{NFSU2_TR(0x73a533);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73a534:{NFSU2_TR(0x73a534);
__builtin_memmove(gp(0x8b7bc0),(R+0),4);
}
B73a539:{NFSU2_TR(0x73a539);
__builtin_memmove(gp(0x8b7bb0),(R+0),4);
}
B73a53e:{NFSU2_TR(0x73a53e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73a53f:L73a53f:{c.instructions+=2;NFSU2_TR(0x73a53f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73a540:{NFSU2_TR(0x73a540);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73a730:L73a730:{c.instructions+=5;NFSU2_TR(0x73a730);
__builtin_memmove((R+0),gp(0x8b7bc0),4);
}
B73a735:{NFSU2_TR(0x73a735);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a736:{NFSU2_TR(0x73a736);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B73a738:{NFSU2_TR(0x73a738);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B73a73a:{NFSU2_TR(0x73a73a);
if(r1(R+518)){{goto L73a743;}}
}
B73a73c:L73a73c:{c.instructions+=3;NFSU2_TR(0x73a73c);
w4(R+0,u32(0xffffffeeull));
}
B73a741:{NFSU2_TR(0x73a741);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73a742:{NFSU2_TR(0x73a742);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73a743:L73a743:{c.instructions+=3;NFSU2_TR(0x73a743);
w4(R+8,u32(0x8b6034ull));
}
B73a748:{NFSU2_TR(0x73a748);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a749:{NFSU2_TR(0x73a749);
__builtin_memmove((R+16),(R+16),4);
}
B73a750:L73a750:{c.instructions+=7;NFSU2_TR(0x73a750);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffff710ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73a756:{NFSU2_TR(0x73a756);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B73a758:{NFSU2_TR(0x73a758);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffff734ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73a75e:{NFSU2_TR(0x73a75e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73a760:{NFSU2_TR(0x73a760);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x928ull))));
}
B73a766:{NFSU2_TR(0x73a766);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x8b84d4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8b84d4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8b84d4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73a76c:{NFSU2_TR(0x73a76c);
w4(R+4,u32(0x18ull));
}
B73a771:L73a771:{c.instructions+=1;NFSU2_TR(0x73a771);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L73a773;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73a771u);}goto L73a771;}
}
B73a773:L73a773:{c.instructions+=1;NFSU2_TR(0x73a773);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73a750u);}goto L73a750;}}
}
B73a775:L73a775:{c.instructions+=7;NFSU2_TR(0x73a775);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73a776:{NFSU2_TR(0x73a776);
__builtin_memmove(gp(0x8b7bb0),(R+12),4);
}
B73a77c:{NFSU2_TR(0x73a77c);
__builtin_memmove(gp(0x8b7bbd),(R+12),1);
}
B73a782:{NFSU2_TR(0x73a782);
s1(0x8b7bbc,u8(0x1ull));
}
B73a789:{NFSU2_TR(0x73a789);
s4(0x819b0c,u32(0x100ull));
}
B73a793:{NFSU2_TR(0x73a793);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73a794:{NFSU2_TR(0x73a794);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73a7c0:L73a7c0:{c.instructions+=7;NFSU2_TR(0x73a7c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a7c1:{NFSU2_TR(0x73a7c1);
__builtin_memmove((R+0),gp(0x8b7bbc),1);
}
B73a7c6:{NFSU2_TR(0x73a7c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73a7c8:{NFSU2_TR(0x73a7c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a7c9:{NFSU2_TR(0x73a7c9);
w4(R+28,u32(0x4ull));
}
B73a7ce:{NFSU2_TR(0x73a7ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B73a7d6:{NFSU2_TR(0x73a7d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a7dd;}}
}
B73a7d8:L73a7d8:{c.instructions+=1;NFSU2_TR(0x73a7d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73a7ddull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73a730u);}goto L73a730;}
}
B73a7dd:L73a7dd:{c.instructions+=3;NFSU2_TR(0x73a7dd);
__builtin_memmove((R+0),gp(0x8b7bc0),4);
}
B73a7e2:{NFSU2_TR(0x73a7e2);
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
B73a7e4:{NFSU2_TR(0x73a7e4);
if(r1(R+518)){{goto L73a7ee;}}
}
B73a7e6:L73a7e6:{c.instructions+=4;NFSU2_TR(0x73a7e6);
w4(R+0,u32(0xffffffeeull));
}
B73a7eb:{NFSU2_TR(0x73a7eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73a7ec:{NFSU2_TR(0x73a7ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73a7ed:{NFSU2_TR(0x73a7ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73a7ee:L73a7ee:{c.instructions+=9;NFSU2_TR(0x73a7ee);
__builtin_memmove((R+0),gp(0x8b5744),4);
}
B73a7f3:{NFSU2_TR(0x73a7f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a7f4:{NFSU2_TR(0x73a7f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73a7f8:{NFSU2_TR(0x73a7f8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a7f9:{NFSU2_TR(0x73a7f9);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B73a7fb:{NFSU2_TR(0x73a7fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73a7fd:{NFSU2_TR(0x73a7fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a7fe:{NFSU2_TR(0x73a7fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B73a802:{NFSU2_TR(0x73a802);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a808;}}
}
B73a804:L73a804:{c.instructions+=2;NFSU2_TR(0x73a804);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B73a806:{NFSU2_TR(0x73a806);
{goto L73a815;}
}
B73a808:L73a808:{c.instructions+=3;NFSU2_TR(0x73a808);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B73a80c:{NFSU2_TR(0x73a80c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73a80e:{NFSU2_TR(0x73a80e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a815;}}
}
B73a810:L73a810:{c.instructions+=1;NFSU2_TR(0x73a810);
w4(R+20,u32(0x1ull));
}
B73a815:L73a815:{c.instructions+=3;NFSU2_TR(0x73a815);
__builtin_memmove((R+0),gp(0x8b606c),4);
}
B73a81a:{NFSU2_TR(0x73a81a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73a81c:{NFSU2_TR(0x73a81c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a82a;}}
}
B73a81e:L73a81e:{c.instructions+=2;NFSU2_TR(0x73a81e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73a821:{NFSU2_TR(0x73a821);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a833;}}
}
B73a823:L73a823:{c.instructions+=2;NFSU2_TR(0x73a823);
w4(R+28,u32(0x1ull));
}
B73a828:{NFSU2_TR(0x73a828);
{goto L73a833;}
}
B73a82a:L73a82a:{c.instructions+=3;NFSU2_TR(0x73a82a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B73a82e:{NFSU2_TR(0x73a82e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73a830:{NFSU2_TR(0x73a830);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a833;}}
}
B73a832:L73a832:{c.instructions+=1;NFSU2_TR(0x73a832);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B73a833:L73a833:{c.instructions+=3;NFSU2_TR(0x73a833);
__builtin_memmove((R+0),gp(0x8b6994),4);
}
B73a838:{NFSU2_TR(0x73a838);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73a83a:{NFSU2_TR(0x73a83a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a848;}}
}
B73a83c:L73a83c:{c.instructions+=2;NFSU2_TR(0x73a83c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73a83f:{NFSU2_TR(0x73a83f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a851;}}
}
B73a841:L73a841:{c.instructions+=2;NFSU2_TR(0x73a841);
w4(R+28,u32(0x2ull));
}
B73a846:{NFSU2_TR(0x73a846);
{goto L73a851;}
}
B73a848:L73a848:{c.instructions+=3;NFSU2_TR(0x73a848);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B73a84c:{NFSU2_TR(0x73a84c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73a84e:{NFSU2_TR(0x73a84e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a851;}}
}
B73a850:L73a850:{c.instructions+=1;NFSU2_TR(0x73a850);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B73a851:L73a851:{c.instructions+=3;NFSU2_TR(0x73a851);
__builtin_memmove((R+0),gp(0x8b72bc),4);
}
B73a856:{NFSU2_TR(0x73a856);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73a858:{NFSU2_TR(0x73a858);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a866;}}
}
B73a85a:L73a85a:{c.instructions+=2;NFSU2_TR(0x73a85a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73a85d:{NFSU2_TR(0x73a85d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a872;}}
}
B73a85f:L73a85f:{c.instructions+=2;NFSU2_TR(0x73a85f);
w4(R+28,u32(0x3ull));
}
B73a864:{NFSU2_TR(0x73a864);
{goto L73a86f;}
}
B73a866:L73a866:{c.instructions+=3;NFSU2_TR(0x73a866);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B73a86a:{NFSU2_TR(0x73a86a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73a86c:{NFSU2_TR(0x73a86c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a86f;}}
}
B73a86e:L73a86e:{c.instructions+=1;NFSU2_TR(0x73a86e);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B73a86f:L73a86f:{c.instructions+=1;NFSU2_TR(0x73a86f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73a872:L73a872:{c.instructions+=1;NFSU2_TR(0x73a872);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73a9b9;}}
}
B73a878:L73a878:{c.instructions+=2;NFSU2_TR(0x73a878);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x50464478ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B73a87e:{NFSU2_TR(0x73a87e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a9b9;}}
}
B73a884:L73a884:{c.instructions+=2;NFSU2_TR(0x73a884);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B73a888:{NFSU2_TR(0x73a888);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73a9b9;}}
}
B73a88e:L73a88e:{c.instructions+=5;NFSU2_TR(0x73a88e);
__builtin_memmove((R+8),(R+28),4);
}
B73a890:{NFSU2_TR(0x73a890);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x928ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B73a896:{NFSU2_TR(0x73a896);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73a898:{NFSU2_TR(0x73a898);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b5710ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73a89e:{NFSU2_TR(0x73a89e);
w4(R+4,u32(0x24aull));
}
B73a8a3:L73a8a3:{c.instructions+=1;NFSU2_TR(0x73a8a3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L73a8a5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73a8a3u);}goto L73a8a3;}
}
B73a8a5:L73a8a5:{c.instructions+=11;NFSU2_TR(0x73a8a5);
__builtin_memmove((R+4),(R+20),4);
}
B73a8a7:{NFSU2_TR(0x73a8a7);
w4(R+0,u32(0x10000000ull));
}
B73a8ac:{NFSU2_TR(0x73a8ac);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B73a8ae:{NFSU2_TR(0x73a8ae);
__builtin_memmove((R+4),(R+24),4);
}
B73a8b0:{NFSU2_TR(0x73a8b0);
w4(R+28,u32(0x1000000ull));
}
B73a8b5:{NFSU2_TR(0x73a8b5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B73a8b7:{NFSU2_TR(0x73a8b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b5744ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73a8bd:{NFSU2_TR(0x73a8bd);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B73a8bf:{NFSU2_TR(0x73a8bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73a8c0:{NFSU2_TR(0x73a8c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b5740ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73a8c6:{NFSU2_TR(0x73a8c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73a8cbull));
TAIL_STATIC(0x73b680u,73b);
}
B73a8cb:L73a8cb:{c.instructions+=55;NFSU2_TR(0x73a8cb);
__builtin_memmove((R+8),gp(0x8b7bb0),4);
}
B73a8d1:{NFSU2_TR(0x73a8d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73a8d4:{NFSU2_TR(0x73a8d4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B73a8d7:{NFSU2_TR(0x73a8d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73a8da:{NFSU2_TR(0x73a8da);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73a8dd:{NFSU2_TR(0x73a8dd);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B73a8e1:{NFSU2_TR(0x73a8e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B73a8e4:{NFSU2_TR(0x73a8e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73a8e7:{NFSU2_TR(0x73a8e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73a8ea:{NFSU2_TR(0x73a8ea);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B73a8ee:{NFSU2_TR(0x73a8ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73a8f1:{NFSU2_TR(0x73a8f1);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(s32(s16(r2(U+12)))));
}
B73a8f6:{NFSU2_TR(0x73a8f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B73a8f9:{NFSU2_TR(0x73a8f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73a8fc:{NFSU2_TR(0x73a8fc);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B73a8ff:{NFSU2_TR(0x73a8ff);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B73a902:{NFSU2_TR(0x73a902);
u8 U[12];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B73a906:{NFSU2_TR(0x73a906);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B73a909:{NFSU2_TR(0x73a909);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73a90c:{NFSU2_TR(0x73a90c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73a90f:{NFSU2_TR(0x73a90f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B73a913:{NFSU2_TR(0x73a913);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B73a917:{NFSU2_TR(0x73a917);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B73a91a:{NFSU2_TR(0x73a91a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73a91d:{NFSU2_TR(0x73a91d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73a920:{NFSU2_TR(0x73a920);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B73a924:{NFSU2_TR(0x73a924);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73a927:{NFSU2_TR(0x73a927);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(s32(s16(r2(U+12)))));
}
B73a92c:{NFSU2_TR(0x73a92c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B73a92f:{NFSU2_TR(0x73a92f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B73a931:{NFSU2_TR(0x73a931);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B73a934:{NFSU2_TR(0x73a934);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73a937:{NFSU2_TR(0x73a937);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3full))));
}
B73a93a:{NFSU2_TR(0x73a93a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B73a93d:{NFSU2_TR(0x73a93d);
u8 U[12];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B73a941:{NFSU2_TR(0x73a941);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B73a944:{NFSU2_TR(0x73a944);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73a947:{NFSU2_TR(0x73a947);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73a94a:{NFSU2_TR(0x73a94a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B73a94e:{NFSU2_TR(0x73a94e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B73a951:{NFSU2_TR(0x73a951);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B73a954:{NFSU2_TR(0x73a954);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73a957:{NFSU2_TR(0x73a957);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73a95a:{NFSU2_TR(0x73a95a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B73a95e:{NFSU2_TR(0x73a95e);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B73a962:{NFSU2_TR(0x73a962);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73a965:{NFSU2_TR(0x73a965);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73a968:{NFSU2_TR(0x73a968);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73a96b:{NFSU2_TR(0x73a96b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B73a96f:{NFSU2_TR(0x73a96f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B73a972:{NFSU2_TR(0x73a972);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B73a975:{NFSU2_TR(0x73a975);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73a978:{NFSU2_TR(0x73a978);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73a97a:{NFSU2_TR(0x73a97a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xdcull))));
__builtin_memmove((R+28),(U+0),4);
}
B73a980:{NFSU2_TR(0x73a980);
w4(R+4,u32(0x10ull));
}
B73a985:L73a985:{c.instructions+=1;NFSU2_TR(0x73a985);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L73a987;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73a985u);}goto L73a985;}
}
B73a987:L73a987:{c.instructions+=14;NFSU2_TR(0x73a987);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
w4(U+4,u32(0x32ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73a98e:{NFSU2_TR(0x73a98e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B73a995:{NFSU2_TR(0x73a995);
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
B73a997:{NFSU2_TR(0x73a997);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
w4(U+4,u32(0x3e8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73a99e:{NFSU2_TR(0x73a99e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73a9a5:{NFSU2_TR(0x73a9a5);
__builtin_memmove((R+0),(R+24),4);
}
B73a9a7:{NFSU2_TR(0x73a9a7);
__builtin_memmove(gp(0x8b7bc0),(R+4),4);
}
B73a9ad:{NFSU2_TR(0x73a9ad);
__builtin_memmove(gp(0x8b7bb0),(R+4),4);
}
B73a9b3:{NFSU2_TR(0x73a9b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73a9b4:{NFSU2_TR(0x73a9b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73a9b5:{NFSU2_TR(0x73a9b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73a9b6:{NFSU2_TR(0x73a9b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73a9b7:{NFSU2_TR(0x73a9b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73a9b8:{NFSU2_TR(0x73a9b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73a9b9:L73a9b9:{c.instructions+=10;NFSU2_TR(0x73a9b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73a9bd:{NFSU2_TR(0x73a9bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73a9be:{NFSU2_TR(0x73a9be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73a9bf:{NFSU2_TR(0x73a9bf);
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
B73a9c1:{NFSU2_TR(0x73a9c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73a9c2:{NFSU2_TR(0x73a9c2);
__builtin_memmove(gp(0x8b7bc0),(R+4),4);
}
B73a9c8:{NFSU2_TR(0x73a9c8);
__builtin_memmove(gp(0x8b7bb0),(R+4),4);
}
B73a9ce:{NFSU2_TR(0x73a9ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73a9cf:{NFSU2_TR(0x73a9cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73a9d0:{NFSU2_TR(0x73a9d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73a9f0:L73a9f0:{c.instructions+=5;NFSU2_TR(0x73a9f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73a9f4:{NFSU2_TR(0x73a9f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73a9f8:{NFSU2_TR(0x73a9f8);
__builtin_memmove(gp(0x8b7bb4),(R+0),4);
}
B73a9fd:{NFSU2_TR(0x73a9fd);
__builtin_memmove(gp(0x8b7bb8),(R+4),4);
}
B73aa03:{NFSU2_TR(0x73aa03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73aa10:L73aa10:{c.instructions+=9;NFSU2_TR(0x73aa10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73aa11:{NFSU2_TR(0x73aa11);
__builtin_memmove((R+0),gp(0x8b7bbc),1);
}
B73aa16:{NFSU2_TR(0x73aa16);
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
B73aa18:{NFSU2_TR(0x73aa18);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73aa19:{NFSU2_TR(0x73aa19);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73aa1d:{NFSU2_TR(0x73aa1d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73aa1e:{NFSU2_TR(0x73aa1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73aa26:{NFSU2_TR(0x73aa26);
__builtin_memmove((R+20),(R+12),4);
}
B73aa28:{NFSU2_TR(0x73aa28);
if(r1(R+518)){{goto L73ad06;}}
}
B73aa2e:L73aa2e:{c.instructions+=3;NFSU2_TR(0x73aa2e);
__builtin_memmove((R+0),gp(0x8b7bc0),4);
}
B73aa33:{NFSU2_TR(0x73aa33);
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
B73aa35:{NFSU2_TR(0x73aa35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73ad06;}}
}
B73aa3b:L73aa3b:{c.instructions+=2;NFSU2_TR(0x73aa3b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73aa3d:{NFSU2_TR(0x73aa3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73aa42ull));
TAIL_STATIC(0x73b620u,73b);
}
B73aa42:L73aa42:{c.instructions+=3;NFSU2_TR(0x73aa42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73aa45:{NFSU2_TR(0x73aa45);
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
B73aa47:{NFSU2_TR(0x73aa47);
if(r1(R+518)){{goto L73ad06;}}
}
B73aa4d:L73aa4d:{c.instructions+=1;NFSU2_TR(0x73aa4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73aa51:L73aa51:{c.instructions+=5;NFSU2_TR(0x73aa51);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73aa55:{NFSU2_TR(0x73aa55);
w4(R+8,u32(0x1ull));
}
B73aa5a:{NFSU2_TR(0x73aa5a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B73aa5c:{NFSU2_TR(0x73aa5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73aa5e:{NFSU2_TR(0x73aa5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73aa6a;}}
}
B73aa60:L73aa60:{c.instructions+=4;NFSU2_TR(0x73aa60);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B73aa61:{NFSU2_TR(0x73aa61);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x18ull))));
}
B73aa64:{NFSU2_TR(0x73aa64);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73aa68:{NFSU2_TR(0x73aa68);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73aa51u);}goto L73aa51;}}
}
B73aa6a:L73aa6a:{c.instructions+=6;NFSU2_TR(0x73aa6a);
__builtin_memmove((R+4),(R+0),4);
}
B73aa6c:{NFSU2_TR(0x73aa6c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xff000000ull))));
}
B73aa72:{NFSU2_TR(0x73aa72);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73aa76:{NFSU2_TR(0x73aa76);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B73aa78:{NFSU2_TR(0x73aa78);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73aa79:{NFSU2_TR(0x73aa79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73aa7eull));
TAIL_STATIC(0x73b680u,73b);
}
B73aa7e:L73aa7e:{c.instructions+=6;NFSU2_TR(0x73aa7e);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B73aa83:{NFSU2_TR(0x73aa83);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73aa87:{NFSU2_TR(0x73aa87);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B73aa8b:{NFSU2_TR(0x73aa8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73aa8e:{NFSU2_TR(0x73aa8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73aa90:{NFSU2_TR(0x73aa90);
if(r1(R+518)){{goto L73aaa9;}}
}
B73aa92:L73aa92:{c.instructions+=8;NFSU2_TR(0x73aa92);
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
B73aa94:{NFSU2_TR(0x73aa94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73aa95:{NFSU2_TR(0x73aa95);
w4(R+0,u32(0xfffffff3ull));
}
B73aa9a:{NFSU2_TR(0x73aa9a);
__builtin_memmove(gp(0x8b7bc0),(R+4),4);
}
B73aaa0:{NFSU2_TR(0x73aaa0);
__builtin_memmove(gp(0x8b7bb0),(R+4),4);
}
B73aaa6:{NFSU2_TR(0x73aaa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73aaa7:{NFSU2_TR(0x73aaa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73aaa8:{NFSU2_TR(0x73aaa8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73aaa9:L73aaa9:{c.instructions+=7;NFSU2_TR(0x73aaa9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73aaad:{NFSU2_TR(0x73aaad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73aaae:{NFSU2_TR(0x73aaae);
__builtin_memmove((R+24),(R+12),4);
}
B73aab0:{NFSU2_TR(0x73aab0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73aab2:{NFSU2_TR(0x73aab2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73aab3:{NFSU2_TR(0x73aab3);
w4(R+4,u32(0x44ull));
}
B73aab8:{NFSU2_TR(0x73aab8);
__builtin_memmove((R+28),(R+24),4);
}
B73aaba:L73aaba:{c.instructions+=1;NFSU2_TR(0x73aaba);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L73aabc;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73aabau);}goto L73aaba;}
}
B73aabc:L73aabc:{c.instructions+=9;NFSU2_TR(0x73aabc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x110ull))));
}
B73aac2:{NFSU2_TR(0x73aac2);
__builtin_memmove((R+4),(R+8),4);
}
B73aac4:{NFSU2_TR(0x73aac4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B73aac7:{NFSU2_TR(0x73aac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73aacd:{NFSU2_TR(0x73aacd);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B73aacf:{NFSU2_TR(0x73aacf);
__builtin_memmove((R+0),(R+12),4);
}
B73aad1:{NFSU2_TR(0x73aad1);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B73aad3:{NFSU2_TR(0x73aad3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8000000full))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B73aad8:{NFSU2_TR(0x73aad8);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L73aadf;}}
}
B73aada:L73aada:{c.instructions+=3;NFSU2_TR(0x73aada);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B73aadb:{NFSU2_TR(0x73aadb);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xfffffff0ull))));
}
B73aade:{NFSU2_TR(0x73aade);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73aadf:L73aadf:{c.instructions+=11;NFSU2_TR(0x73aadf);
w4(R+28,u32(0x10ull));
}
B73aae4:{NFSU2_TR(0x73aae4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B73aae6:{NFSU2_TR(0x73aae6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73aaea:{NFSU2_TR(0x73aaea);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B73aaec:{NFSU2_TR(0x73aaec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73aaf2:{NFSU2_TR(0x73aaf2);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+12))));
}
B73aaf4:{NFSU2_TR(0x73aaf4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B73aaf6:{NFSU2_TR(0x73aaf6);
__builtin_memmove((R+20),(R+4),4);
}
B73aaf8:{NFSU2_TR(0x73aaf8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B73aafb:{NFSU2_TR(0x73aafb);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73aaff:{NFSU2_TR(0x73aaff);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73ab01:L73ab01:{c.instructions+=1;NFSU2_TR(0x73ab01);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L73ab03;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73ab01u);}goto L73ab01;}
}
B73ab03:L73ab03:{c.instructions+=3;NFSU2_TR(0x73ab03);
__builtin_memmove((R+4),(R+20),4);
}
B73ab05:{NFSU2_TR(0x73ab05);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B73ab08:{NFSU2_TR(0x73ab08);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73ab0a:L73ab0a:{c.instructions+=1;NFSU2_TR(0x73ab0a);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L73ab0c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73ab0au);}goto L73ab0a;}
}
B73ab0c:L73ab0c:{c.instructions+=1;NFSU2_TR(0x73ab0c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73ab26;}}
}
B73ab0e:L73ab0e:{c.instructions+=2;NFSU2_TR(0x73ab0e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73ab10:{NFSU2_TR(0x73ab10);
__builtin_memmove((R+4),(R+8),4);
}
B73ab12:L73ab12:{c.instructions+=5;NFSU2_TR(0x73ab12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73ab18:{NFSU2_TR(0x73ab18);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0xffffffffull));
s4(u32(r4(U+8)),r4(U+12));
}
B73ab20:{NFSU2_TR(0x73ab20);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B73ab23:{NFSU2_TR(0x73ab23);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B73ab24:{NFSU2_TR(0x73ab24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73ab12u);}goto L73ab12;}}
}
B73ab26:L73ab26:{c.instructions+=39;NFSU2_TR(0x73ab26);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B73ab2a:{NFSU2_TR(0x73ab2a);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B73ab2f:{NFSU2_TR(0x73ab2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73ab32:{NFSU2_TR(0x73ab32);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B73ab34:{NFSU2_TR(0x73ab34);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B73ab37:{NFSU2_TR(0x73ab37);
__builtin_memmove((R+0),gp(0x819b08),1);
}
B73ab3c:{NFSU2_TR(0x73ab3c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B73ab3f:{NFSU2_TR(0x73ab3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ab42:{NFSU2_TR(0x73ab42);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B73ab45:{NFSU2_TR(0x73ab45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ab48:{NFSU2_TR(0x73ab48);
w4(R+28,u32(0xffffffull));
}
B73ab4d:{NFSU2_TR(0x73ab4d);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B73ab4f:{NFSU2_TR(0x73ab4f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffull))));
}
B73ab54:{NFSU2_TR(0x73ab54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ab57:{NFSU2_TR(0x73ab57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ab5a:{NFSU2_TR(0x73ab5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ab5e:{NFSU2_TR(0x73ab5e);
w4(R+8,u32(r1(R+8)));
}
B73ab61:{NFSU2_TR(0x73ab61);
w4(R+4,u32(r2(R+0)));
}
B73ab64:{NFSU2_TR(0x73ab64);
u8 U[4];
w4(U+0,u32(u32(u32(0xeull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B73ab67:{NFSU2_TR(0x73ab67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ab6a:{NFSU2_TR(0x73ab6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ab6d:{NFSU2_TR(0x73ab6d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B73ab6f:{NFSU2_TR(0x73ab6f);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+28))));
}
B73ab71:{NFSU2_TR(0x73ab71);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7c000ull))));
}
B73ab77:{NFSU2_TR(0x73ab77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ab7a:{NFSU2_TR(0x73ab7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73ab7d:{NFSU2_TR(0x73ab7d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+8))));
}
B73ab7f:{NFSU2_TR(0x73ab7f);
w4(R+8,u32(0xffff00ffull));
}
B73ab84:{NFSU2_TR(0x73ab84);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+28))));
}
B73ab86:{NFSU2_TR(0x73ab86);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x32ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x32ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73ab89:{NFSU2_TR(0x73ab89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ab8c:{NFSU2_TR(0x73ab8c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B73ab90:{NFSU2_TR(0x73ab90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ab93:{NFSU2_TR(0x73ab93);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
w1(U+4,u8(0x7full));
s1(u32(r4(U+0)),r1(U+4));
}
B73ab97:{NFSU2_TR(0x73ab97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ab9a:{NFSU2_TR(0x73ab9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ab9d:{NFSU2_TR(0x73ab9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73aba0:{NFSU2_TR(0x73aba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73abaa:{NFSU2_TR(0x73abaa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73abb2;}}
}
B73abac:L73abac:{c.instructions+=2;NFSU2_TR(0x73abac);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B73abb0:{NFSU2_TR(0x73abb0);
{goto L73abbb;}
}
B73abb2:L73abb2:{c.instructions+=2;NFSU2_TR(0x73abb2);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1f0ull))));
}
B73abb8:{NFSU2_TR(0x73abb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73abbb:L73abbb:{c.instructions+=4;NFSU2_TR(0x73abbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73abbf:{NFSU2_TR(0x73abbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+8),(U+0),4);
}
B73abc2:{NFSU2_TR(0x73abc2);
__builtin_memmove((R+0),(R+28),4);
}
B73abc4:{NFSU2_TR(0x73abc4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B73abc6:L73abc6:{c.instructions+=5;NFSU2_TR(0x73abc6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B73abc8:{NFSU2_TR(0x73abc8);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B73abcb:{NFSU2_TR(0x73abcb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73abcc:{NFSU2_TR(0x73abcc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73abce:{NFSU2_TR(0x73abce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73abc6u);}goto L73abc6;}}
}
B73abd0:L73abd0:{c.instructions+=2;NFSU2_TR(0x73abd0);
__builtin_memmove((R+0),(R+28),4);
}
B73abd2:{NFSU2_TR(0x73abd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B73abd5:L73abd5:{c.instructions+=4;NFSU2_TR(0x73abd5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B73abd7:{NFSU2_TR(0x73abd7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73abd8:{NFSU2_TR(0x73abd8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73abda:{NFSU2_TR(0x73abda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73abd5u);}goto L73abd5;}}
}
B73abdc:L73abdc:{c.instructions+=4;NFSU2_TR(0x73abdc);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B73abde:{NFSU2_TR(0x73abde);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B73abe1:{NFSU2_TR(0x73abe1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B73abe3:{NFSU2_TR(0x73abe3);
if(r1(R+512)){{goto L73abf8;}}
}
B73abe5:L73abe5:{c.instructions+=3;NFSU2_TR(0x73abe5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B73abe7:{NFSU2_TR(0x73abe7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5cull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73abe9:{NFSU2_TR(0x73abe9);
if(r1(R+518)){{goto L73abf8;}}
}
B73abeb:L73abeb:{c.instructions+=2;NFSU2_TR(0x73abeb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73abed:{NFSU2_TR(0x73abed);
if(r1(R+518)){{goto L73abf8;}}
}
B73abef:L73abef:{c.instructions+=2;NFSU2_TR(0x73abef);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3aull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73abf1:{NFSU2_TR(0x73abf1);
if(r1(R+518)){{goto L73abf8;}}
}
B73abf3:L73abf3:{c.instructions+=3;NFSU2_TR(0x73abf3);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B73abf4:{NFSU2_TR(0x73abf4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B73abf6:{NFSU2_TR(0x73abf6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73abe5u);}goto L73abe5;}}
}
B73abf8:L73abf8:{c.instructions+=2;NFSU2_TR(0x73abf8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73abfa:{NFSU2_TR(0x73abfa);
__builtin_memmove((R+12),(R+12),4);
}
B73ac00:L73ac00:{c.instructions+=6;NFSU2_TR(0x73ac00);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B73ac03:{NFSU2_TR(0x73ac03);
w4(R+28,u32(0x1ull));
}
B73ac08:{NFSU2_TR(0x73ac08);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B73ac0a:{NFSU2_TR(0x73ac0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ac0e:{NFSU2_TR(0x73ac0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73ac10:{NFSU2_TR(0x73ac10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73ac18;}}
}
B73ac12:L73ac12:{c.instructions+=3;NFSU2_TR(0x73ac12);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73ac13:{NFSU2_TR(0x73ac13);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73ac16:{NFSU2_TR(0x73ac16);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73ac00u);}goto L73ac00;}}
}
B73ac18:L73ac18:{c.instructions+=8;NFSU2_TR(0x73ac18);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B73ac19:{NFSU2_TR(0x73ac19);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ac1a:{NFSU2_TR(0x73ac1a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73ac1b:{NFSU2_TR(0x73ac1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ac1c:{NFSU2_TR(0x73ac1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((R+28),(U+0),4);
}
B73ac22:{NFSU2_TR(0x73ac22);
u8 U[4];
w4(U+0,u32(0x7d1f94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ac27:{NFSU2_TR(0x73ac27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ac28:{NFSU2_TR(0x73ac28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ac2dull));
TAIL_STATIC(0x75c784u,75c);
}
B73ac2d:L73ac2d:{c.instructions+=6;NFSU2_TR(0x73ac2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xddull))));
__builtin_memmove((R+4),(U+0),4);
}
B73ac33:{NFSU2_TR(0x73ac33);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B73ac39:{NFSU2_TR(0x73ac39);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B73ac3c:{NFSU2_TR(0x73ac3c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B73ac3e:{NFSU2_TR(0x73ac3e);
w1(R+0,u8(0x61ull));
}
B73ac40:{NFSU2_TR(0x73ac40);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L73ac77;}}
}
B73ac42:L73ac42:{c.instructions+=2;NFSU2_TR(0x73ac42);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73ac44:{NFSU2_TR(0x73ac44);
if(r1(R+518)){{goto L73ac5e;}}
}
B73ac46:L73ac46:{c.instructions+=3;NFSU2_TR(0x73ac46);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B73ac48:{NFSU2_TR(0x73ac48);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73ac4a:{NFSU2_TR(0x73ac4a);
if(r1(R+518)){{goto L73ac5e;}}
}
B73ac4c:L73ac4c:{c.instructions+=3;NFSU2_TR(0x73ac4c);
w1(R+0,u8(u32(r1(R+0))|u32(u8(0x20ull))));
}
B73ac4e:{NFSU2_TR(0x73ac4e);
w1(R+512,u8((r1(R+0))<(u8(0x61ull))));
}
B73ac50:{NFSU2_TR(0x73ac50);
if(r1(R+512)){{goto L73ac56;}}
}
B73ac52:L73ac52:{c.instructions+=2;NFSU2_TR(0x73ac52);
u8 U[1];
w1(R+512,u8((r1(R+0))<(u8(0x7aull))));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73ac54:{NFSU2_TR(0x73ac54);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L73ac6d;}}
}
B73ac56:L73ac56:{c.instructions+=2;NFSU2_TR(0x73ac56);
w1(R+512,u8((r1(R+0))<(u8(0x30ull))));
}
B73ac58:{NFSU2_TR(0x73ac58);
if(r1(R+512)){{goto L73ac5e;}}
}
B73ac5a:L73ac5a:{c.instructions+=2;NFSU2_TR(0x73ac5a);
u8 U[1];
w1(R+512,u8((r1(R+0))<(u8(0x39ull))));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73ac5c:{NFSU2_TR(0x73ac5c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L73ac6d;}}
}
B73ac5e:L73ac5e:{c.instructions+=4;NFSU2_TR(0x73ac5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73ac64:{NFSU2_TR(0x73ac64);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B73ac66:{NFSU2_TR(0x73ac66);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B73ac68:{NFSU2_TR(0x73ac68);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L73ac74;}}
}
B73ac6a:L73ac6a:{c.instructions+=1;NFSU2_TR(0x73ac6a);
u8 U[1];
w1(U+0,u8(0x20ull));
s1(u32(r4(R+4)),r1(U+0));
}
B73ac6d:L73ac6d:{c.instructions+=3;NFSU2_TR(0x73ac6d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B73ac6e:{NFSU2_TR(0x73ac6e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B73ac70:{NFSU2_TR(0x73ac70);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73ac42u);}goto L73ac42;}}
}
B73ac72:L73ac72:{c.instructions+=1;NFSU2_TR(0x73ac72);
{goto L73ac77;}
}
B73ac74:L73ac74:{c.instructions+=1;NFSU2_TR(0x73ac74);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+4)),r1(U+0));
}
B73ac77:L73ac77:{c.instructions+=5;NFSU2_TR(0x73ac77);
__builtin_memmove((R+8),gp(0x8b7bb0),4);
}
B73ac7d:{NFSU2_TR(0x73ac7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ac81:{NFSU2_TR(0x73ac81);
u8 U[4];
w4(U+0,u32(0xf000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ac86:{NFSU2_TR(0x73ac86);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B73ac8a:{NFSU2_TR(0x73ac8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ac8full));
TAIL_STATIC(0x73b520u,73b);
}
B73ac8f:L73ac8f:{c.instructions+=3;NFSU2_TR(0x73ac8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73ac92:{NFSU2_TR(0x73ac92);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73ac95:{NFSU2_TR(0x73ac95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73aca9;}}
}
B73ac97:L73ac97:{c.instructions+=3;NFSU2_TR(0x73ac97);
u8 U[4];
w4(U+0,u32(0x73b9c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ac9c:{NFSU2_TR(0x73ac9c);
u8 U[4];
w4(U+0,u32(0x73b9b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73aca1:{NFSU2_TR(0x73aca1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73aca6ull));
TAIL_STATIC(0x45a000u,45a);
}
B73aca6:L73aca6:{c.instructions+=1;NFSU2_TR(0x73aca6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73aca9:L73aca9:{c.instructions+=12;NFSU2_TR(0x73aca9);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73acad:{NFSU2_TR(0x73acad);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73acb1:{NFSU2_TR(0x73acb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73acb5:{NFSU2_TR(0x73acb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73acb6:{NFSU2_TR(0x73acb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73acba:{NFSU2_TR(0x73acba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73acbb:{NFSU2_TR(0x73acbb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73acbc:{NFSU2_TR(0x73acbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73acbd:{NFSU2_TR(0x73acbd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73acbe:{NFSU2_TR(0x73acbe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73acbf:{NFSU2_TR(0x73acbf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe7ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B73acc6:{NFSU2_TR(0x73acc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73accbull));
TAIL_STATIC(0x46bb90u,46b);
}
B73accb:L73accb:{c.instructions+=4;NFSU2_TR(0x73accb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B73acce:{NFSU2_TR(0x73acce);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73acd0:{NFSU2_TR(0x73acd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73acd3:{NFSU2_TR(0x73acd3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73ace9;}}
}
B73acd5:L73acd5:{c.instructions+=4;NFSU2_TR(0x73acd5);
__builtin_memmove((R+8),gp(0x8b7bb0),4);
}
B73acdb:{NFSU2_TR(0x73acdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73acdf:{NFSU2_TR(0x73acdf);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B73ace7:{NFSU2_TR(0x73ace7);
{goto L73acf2;}
}
B73ace9:L73ace9:{c.instructions+=2;NFSU2_TR(0x73ace9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B73acf0:{NFSU2_TR(0x73acf0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73acf2:L73acf2:{c.instructions+=9;NFSU2_TR(0x73acf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73acf3:{NFSU2_TR(0x73acf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73acf4:{NFSU2_TR(0x73acf4);
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
B73acf6:{NFSU2_TR(0x73acf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73acf7:{NFSU2_TR(0x73acf7);
__builtin_memmove(gp(0x8b7bc0),(R+4),4);
}
B73acfd:{NFSU2_TR(0x73acfd);
__builtin_memmove(gp(0x8b7bb0),(R+4),4);
}
B73ad03:{NFSU2_TR(0x73ad03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73ad04:{NFSU2_TR(0x73ad04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73ad05:{NFSU2_TR(0x73ad05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ad06:L73ad06:{c.instructions+=5;NFSU2_TR(0x73ad06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73ad07:{NFSU2_TR(0x73ad07);
w4(R+0,u32(0xffffffeeull));
}
B73ad0c:{NFSU2_TR(0x73ad0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73ad0d:{NFSU2_TR(0x73ad0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73ad0e:{NFSU2_TR(0x73ad0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ae40:L73ae40:{c.instructions+=3;NFSU2_TR(0x73ae40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ae44:{NFSU2_TR(0x73ae44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ae45:{NFSU2_TR(0x73ae45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ae4aull));
TAIL_STATIC(0x73b300u,73b);
}
B73ae4a:L73ae4a:{c.instructions+=3;NFSU2_TR(0x73ae4a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73ae4d:{NFSU2_TR(0x73ae4d);
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
B73ae4f:{NFSU2_TR(0x73ae4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73ae57;}}
}
B73ae51:L73ae51:{c.instructions+=2;NFSU2_TR(0x73ae51);
w4(R+0,u32(0xfffffff8ull));
}
B73ae56:{NFSU2_TR(0x73ae56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ae57:L73ae57:{c.instructions+=2;NFSU2_TR(0x73ae57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ae5a:{NFSU2_TR(0x73ae5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ae60:L73ae60:{c.instructions+=6;NFSU2_TR(0x73ae60);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ae64:{NFSU2_TR(0x73ae64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ae65:{NFSU2_TR(0x73ae65);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73ae69:{NFSU2_TR(0x73ae69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ae6a:{NFSU2_TR(0x73ae6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ae6b:{NFSU2_TR(0x73ae6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ae70ull));
TAIL_STATIC(0x45a3d0u,45a);
}
B73ae70:L73ae70:{c.instructions+=7;NFSU2_TR(0x73ae70);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x11ull))));
}
B73ae73:{NFSU2_TR(0x73ae73);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B73ae76:{NFSU2_TR(0x73ae76);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B73ae78:{NFSU2_TR(0x73ae78);
__builtin_memmove((R+4),(R+0),4);
}
B73ae7a:{NFSU2_TR(0x73ae7a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73ae7d:{NFSU2_TR(0x73ae7d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x8000000full))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B73ae83:{NFSU2_TR(0x73ae83);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L73ae8a;}}
}
B73ae85:L73ae85:{c.instructions+=3;NFSU2_TR(0x73ae85);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B73ae86:{NFSU2_TR(0x73ae86);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfffffff0ull))));
}
B73ae89:{NFSU2_TR(0x73ae89);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B73ae8a:L73ae8a:{c.instructions+=4;NFSU2_TR(0x73ae8a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B73ae8c:{NFSU2_TR(0x73ae8c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x10ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73ae8f:{NFSU2_TR(0x73ae8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73ae90:{NFSU2_TR(0x73ae90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73aea0:L73aea0:{c.instructions+=7;NFSU2_TR(0x73aea0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B73aea3:{NFSU2_TR(0x73aea3);
__builtin_memmove((R+0),gp(0x8b7bbc),1);
}
B73aea8:{NFSU2_TR(0x73aea8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73aeaa:{NFSU2_TR(0x73aeaa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73aeab:{NFSU2_TR(0x73aeab);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73aeb3:{NFSU2_TR(0x73aeb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73aebb:{NFSU2_TR(0x73aebb);
if(r1(R+518)){{goto L73afb8;}}
}
B73aec1:L73aec1:{c.instructions+=3;NFSU2_TR(0x73aec1);
__builtin_memmove((R+0),gp(0x8b7bc0),4);
}
B73aec6:{NFSU2_TR(0x73aec6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73aec8:{NFSU2_TR(0x73aec8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73afb8;}}
}
B73aece:L73aece:{c.instructions+=2;NFSU2_TR(0x73aece);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73aed0:{NFSU2_TR(0x73aed0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73aed5ull));
TAIL_STATIC(0x73b620u,73b);
}
B73aed5:L73aed5:{c.instructions+=3;NFSU2_TR(0x73aed5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73aed8:{NFSU2_TR(0x73aed8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73aeda:{NFSU2_TR(0x73aeda);
if(r1(R+518)){{goto L73afb8;}}
}
B73aee0:L73aee0:{c.instructions+=5;NFSU2_TR(0x73aee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73aee4:{NFSU2_TR(0x73aee4);
__builtin_memmove((R+0),(R+24),4);
}
B73aee6:{NFSU2_TR(0x73aee6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xff000000ull))));
}
B73aeeb:{NFSU2_TR(0x73aeeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73aeec:{NFSU2_TR(0x73aeec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73aef1ull));
TAIL_STATIC(0x73b680u,73b);
}
B73aef1:L73aef1:{c.instructions+=3;NFSU2_TR(0x73aef1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73aef4:{NFSU2_TR(0x73aef4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73aef6:{NFSU2_TR(0x73aef6);
if(r1(R+518)){{goto L73af21;}}
}
B73aef8:L73aef8:{c.instructions+=2;NFSU2_TR(0x73aef8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B73aefa:{NFSU2_TR(0x73aefa);
__builtin_memmove((R+12),(R+12),4);
}
B73af00:L73af00:{c.instructions+=4;NFSU2_TR(0x73af00);
w4(R+8,u32(0x1ull));
}
B73af05:{NFSU2_TR(0x73af05);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B73af07:{NFSU2_TR(0x73af07);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73af09:{NFSU2_TR(0x73af09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73af11;}}
}
B73af0b:L73af0b:{c.instructions+=3;NFSU2_TR(0x73af0b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B73af0c:{NFSU2_TR(0x73af0c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x18ull))));
}
B73af0f:{NFSU2_TR(0x73af0f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73af00u);}goto L73af00;}}
}
B73af11:L73af11:{c.instructions+=5;NFSU2_TR(0x73af11);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B73af16:{NFSU2_TR(0x73af16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73af19:{NFSU2_TR(0x73af19);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B73af1d:{NFSU2_TR(0x73af1d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73af1f:{NFSU2_TR(0x73af1f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L73af28;}}
}
B73af21:L73af21:{c.instructions+=4;NFSU2_TR(0x73af21);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73af23:{NFSU2_TR(0x73af23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73af24:{NFSU2_TR(0x73af24);
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
B73af27:{NFSU2_TR(0x73af27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73af28:L73af28:{c.instructions+=9;NFSU2_TR(0x73af28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73af2b:{NFSU2_TR(0x73af2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B73af2e:{NFSU2_TR(0x73af2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73af30:{NFSU2_TR(0x73af30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73af33:{NFSU2_TR(0x73af33);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B73af36:{NFSU2_TR(0x73af36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B73af39:{NFSU2_TR(0x73af39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B73af3c:{NFSU2_TR(0x73af3c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B73af3e:{NFSU2_TR(0x73af3e);
if(r1(R+512)){{goto L73af72;}}
}
B73af40:L73af40:{c.instructions+=1;NFSU2_TR(0x73af40);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73af44:L73af44:{c.instructions+=6;NFSU2_TR(0x73af44);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73af48:{NFSU2_TR(0x73af48);
s4(0x8b7bc0,u32(0x0ull));
}
B73af52:{NFSU2_TR(0x73af52);
s4(0x8b7bb0,u32(0x0ull));
}
B73af5c:{NFSU2_TR(0x73af5c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B73af5e:{NFSU2_TR(0x73af5e);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B73af64:{NFSU2_TR(0x73af64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73af69ull));
TAIL_STATIC(0x75bed4u,75b);
}
B73af69:L73af69:{c.instructions+=4;NFSU2_TR(0x73af69);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73af6b:{NFSU2_TR(0x73af6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73af6c:{NFSU2_TR(0x73af6c);
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
B73af6f:{NFSU2_TR(0x73af6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73af70:L73af70:{c.instructions+=1;NFSU2_TR(0x73af70);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73af72:L73af72:{c.instructions+=7;NFSU2_TR(0x73af72);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73af75:{NFSU2_TR(0x73af75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+0))));
}
B73af77:{NFSU2_TR(0x73af77);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B73af7a:{NFSU2_TR(0x73af7a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73af7c:{NFSU2_TR(0x73af7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73af80:{NFSU2_TR(0x73af80);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73af84:{NFSU2_TR(0x73af84);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73af8c;}}
}
B73af86:L73af86:{c.instructions+=1;NFSU2_TR(0x73af86);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73af8c:L73af8c:{c.instructions+=4;NFSU2_TR(0x73af8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73af8f:{NFSU2_TR(0x73af8f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73af92:{NFSU2_TR(0x73af92);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73af94:{NFSU2_TR(0x73af94);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73af9c;}}
}
B73af96:L73af96:{c.instructions+=1;NFSU2_TR(0x73af96);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73af9c:L73af9c:{c.instructions+=6;NFSU2_TR(0x73af9c);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B73af9e:{NFSU2_TR(0x73af9e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73afa2:{NFSU2_TR(0x73afa2);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B73afa4:{NFSU2_TR(0x73afa4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B73afa6:{NFSU2_TR(0x73afa6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B73afa9:{NFSU2_TR(0x73afa9);
if(r1(R+514)){{goto L73afaf;}}
}
B73afab:L73afab:{c.instructions+=1;NFSU2_TR(0x73afab);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B73afaf:L73afaf:{c.instructions+=3;NFSU2_TR(0x73afaf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B73afb2:{NFSU2_TR(0x73afb2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B73afb4:{NFSU2_TR(0x73afb4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73af70u);}goto L73af70;}}
}
B73afb6:L73afb6:{c.instructions+=1;NFSU2_TR(0x73afb6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73af44u);}goto L73af44;}
}
B73afb8:L73afb8:{c.instructions+=4;NFSU2_TR(0x73afb8);
w4(R+0,u32(0xffffffeeull));
}
B73afbd:{NFSU2_TR(0x73afbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73afbe:{NFSU2_TR(0x73afbe);
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
B73afc1:{NFSU2_TR(0x73afc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73afd0:L73afd0:{c.instructions+=3;NFSU2_TR(0x73afd0);
__builtin_memmove((R+0),gp(0x8b7bbc),1);
}
B73afd5:{NFSU2_TR(0x73afd5);
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
B73afd7:{NFSU2_TR(0x73afd7);
if(r1(R+518)){TAIL_STATIC(0x73b032u,73b);}
}
B73afd9:L73afd9:{c.instructions+=3;NFSU2_TR(0x73afd9);
__builtin_memmove((R+0),gp(0x8b7bc0),4);
}
B73afde:{NFSU2_TR(0x73afde);
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
B73afe0:{NFSU2_TR(0x73afe0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x73b032u,73b);}
}
B73afe2:L73afe2:{c.instructions+=2;NFSU2_TR(0x73afe2);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73afe4:{NFSU2_TR(0x73afe4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73afe9ull));
TAIL_STATIC(0x73b620u,73b);
}
B73afe9:L73afe9:{c.instructions+=3;NFSU2_TR(0x73afe9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73afec:{NFSU2_TR(0x73afec);
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
B73afee:{NFSU2_TR(0x73afee);
if(r1(R+518)){TAIL_STATIC(0x73b032u,73b);}
}
B73aff0:L73aff0:{c.instructions+=3;NFSU2_TR(0x73aff0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73aff4:{NFSU2_TR(0x73aff4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73aff5:{NFSU2_TR(0x73aff5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73affaull));
TAIL_STATIC(0x73b300u,73b);
}
B73affa:L73affa:{c.instructions+=3;NFSU2_TR(0x73affa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73affd:{NFSU2_TR(0x73affd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73afff:{NFSU2_TR(0x73afff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x73b008u,73b);}
TAIL_STATIC(0x73b001u,73b);
}
XIT:NFSU2_TR_EXIT(0x73a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
