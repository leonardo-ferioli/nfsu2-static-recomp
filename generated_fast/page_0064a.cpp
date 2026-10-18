#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_642(u8* __restrict R,Cpu& c);
u32 body_643(u8* __restrict R,Cpu& c);
u32 body_645(u8* __restrict R,Cpu& c);
u32 body_647(u8* __restrict R,Cpu& c);
u32 body_649(u8* __restrict R,Cpu& c);
u32 body_64b(u8* __restrict R,Cpu& c);
u32 body_64c(u8* __restrict R,Cpu& c);
u32 body_670(u8* __restrict R,Cpu& c);
u32 body_675(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x64a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x64a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_64a(u8* __restrict R,Cpu& c);
u32 page_64a(Cpu& c){return body_64a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_64a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x64a001:goto L64a001;
case 0x64a002:c.instructions+=1;goto B64a002;
case 0x64a005:goto L64a005;
case 0x64a007:c.instructions+=5;goto B64a007;
case 0x64a009:c.instructions+=4;goto B64a009;
case 0x64a00b:c.instructions+=3;goto B64a00b;
case 0x64a00e:c.instructions+=2;goto B64a00e;
case 0x64a010:c.instructions+=1;goto B64a010;
case 0x64a013:goto L64a013;
case 0x64a015:goto L64a015;
case 0x64a017:c.instructions+=1;goto B64a017;
case 0x64a01a:goto L64a01a;
case 0x64a01c:goto L64a01c;
case 0x64a01f:c.instructions+=9;goto B64a01f;
case 0x64a022:c.instructions+=8;goto B64a022;
case 0x64a026:c.instructions+=7;goto B64a026;
case 0x64a028:c.instructions+=6;goto B64a028;
case 0x64a02b:c.instructions+=5;goto B64a02b;
case 0x64a02e:c.instructions+=4;goto B64a02e;
case 0x64a02f:c.instructions+=3;goto B64a02f;
case 0x64a032:c.instructions+=2;goto B64a032;
case 0x64a035:c.instructions+=1;goto B64a035;
case 0x64a03a:goto L64a03a;
case 0x64a03d:c.instructions+=4;goto B64a03d;
case 0x64a03f:c.instructions+=3;goto B64a03f;
case 0x64a042:c.instructions+=2;goto B64a042;
case 0x64a043:c.instructions+=1;goto B64a043;
case 0x64a046:goto L64a046;
case 0x64a049:c.instructions+=4;goto B64a049;
case 0x64a04c:c.instructions+=3;goto B64a04c;
case 0x64a04e:c.instructions+=2;goto B64a04e;
case 0x64a04f:c.instructions+=1;goto B64a04f;
case 0x64a052:goto L64a052;
case 0x64a055:c.instructions+=6;goto B64a055;
case 0x64a057:c.instructions+=5;goto B64a057;
case 0x64a05a:c.instructions+=4;goto B64a05a;
case 0x64a05d:c.instructions+=3;goto B64a05d;
case 0x64a060:c.instructions+=2;goto B64a060;
case 0x64a062:c.instructions+=1;goto B64a062;
case 0x64a065:goto L64a065;
case 0x64a067:goto L64a067;
case 0x64a069:c.instructions+=1;goto B64a069;
case 0x64a06c:goto L64a06c;
case 0x64a06e:goto L64a06e;
case 0x64a071:c.instructions+=2;goto B64a071;
case 0x64a073:c.instructions+=1;goto B64a073;
case 0x64a075:goto L64a075;
case 0x64a077:c.instructions+=2;goto B64a077;
case 0x64a078:c.instructions+=1;goto B64a078;
case 0x64a07b:goto L64a07b;
case 0x64a07f:goto L64a07f;
case 0x64a082:c.instructions+=2;goto B64a082;
case 0x64a084:c.instructions+=1;goto B64a084;
case 0x64a086:goto L64a086;
case 0x64a088:c.instructions+=2;goto B64a088;
case 0x64a089:c.instructions+=1;goto B64a089;
case 0x64a08c:goto L64a08c;
case 0x64a08f:c.instructions+=7;goto B64a08f;
case 0x64a093:c.instructions+=6;goto B64a093;
case 0x64a096:c.instructions+=5;goto B64a096;
case 0x64a09d:c.instructions+=4;goto B64a09d;
case 0x64a0a0:c.instructions+=3;goto B64a0a0;
case 0x64a0a2:c.instructions+=2;goto B64a0a2;
case 0x64a0a3:c.instructions+=1;goto B64a0a3;
case 0x64a0a6:goto L64a0a6;
case 0x64a0a9:c.instructions+=4;goto B64a0a9;
case 0x64a0ac:c.instructions+=3;goto B64a0ac;
case 0x64a0ae:c.instructions+=2;goto B64a0ae;
case 0x64a0af:c.instructions+=1;goto B64a0af;
case 0x64a0b2:goto L64a0b2;
case 0x64a0b5:c.instructions+=7;goto B64a0b5;
case 0x64a0b8:c.instructions+=6;goto B64a0b8;
case 0x64a0ba:c.instructions+=5;goto B64a0ba;
case 0x64a0bd:c.instructions+=4;goto B64a0bd;
case 0x64a0bf:c.instructions+=3;goto B64a0bf;
case 0x64a0c2:c.instructions+=2;goto B64a0c2;
case 0x64a0c3:c.instructions+=1;goto B64a0c3;
case 0x64a0c8:goto L64a0c8;
case 0x64a0ca:c.instructions+=2;goto B64a0ca;
case 0x64a0cc:c.instructions+=1;goto B64a0cc;
case 0x64a0d2:goto L64a0d2;
case 0x64a0d5:c.instructions+=5;goto B64a0d5;
case 0x64a0d7:c.instructions+=4;goto B64a0d7;
case 0x64a0d9:c.instructions+=3;goto B64a0d9;
case 0x64a0dc:c.instructions+=2;goto B64a0dc;
case 0x64a0dd:c.instructions+=1;goto B64a0dd;
case 0x64a0e2:goto L64a0e2;
case 0x64a0e4:c.instructions+=2;goto B64a0e4;
case 0x64a0e6:c.instructions+=1;goto B64a0e6;
case 0x64a0ec:goto L64a0ec;
case 0x64a0ef:c.instructions+=5;goto B64a0ef;
case 0x64a0f1:c.instructions+=4;goto B64a0f1;
case 0x64a0f3:c.instructions+=3;goto B64a0f3;
case 0x64a0f6:c.instructions+=2;goto B64a0f6;
case 0x64a0f7:c.instructions+=1;goto B64a0f7;
case 0x64a0fc:goto L64a0fc;
case 0x64a0fe:c.instructions+=2;goto B64a0fe;
case 0x64a100:c.instructions+=1;goto B64a100;
case 0x64a106:goto L64a106;
case 0x64a109:c.instructions+=5;goto B64a109;
case 0x64a10b:c.instructions+=4;goto B64a10b;
case 0x64a10d:c.instructions+=3;goto B64a10d;
case 0x64a110:c.instructions+=2;goto B64a110;
case 0x64a111:c.instructions+=1;goto B64a111;
case 0x64a116:goto L64a116;
case 0x64a118:c.instructions+=2;goto B64a118;
case 0x64a11a:c.instructions+=1;goto B64a11a;
case 0x64a120:goto L64a120;
case 0x64a123:c.instructions+=5;goto B64a123;
case 0x64a125:c.instructions+=4;goto B64a125;
case 0x64a127:c.instructions+=3;goto B64a127;
case 0x64a12a:c.instructions+=2;goto B64a12a;
case 0x64a12b:c.instructions+=1;goto B64a12b;
case 0x64a130:goto L64a130;
case 0x64a132:c.instructions+=2;goto B64a132;
case 0x64a134:c.instructions+=1;goto B64a134;
case 0x64a13a:goto L64a13a;
case 0x64a13d:c.instructions+=5;goto B64a13d;
case 0x64a13f:c.instructions+=4;goto B64a13f;
case 0x64a141:c.instructions+=3;goto B64a141;
case 0x64a144:c.instructions+=2;goto B64a144;
case 0x64a145:c.instructions+=1;goto B64a145;
case 0x64a14a:goto L64a14a;
case 0x64a14c:c.instructions+=2;goto B64a14c;
case 0x64a14e:c.instructions+=1;goto B64a14e;
case 0x64a154:goto L64a154;
case 0x64a157:c.instructions+=4;goto B64a157;
case 0x64a159:c.instructions+=3;goto B64a159;
case 0x64a15c:c.instructions+=2;goto B64a15c;
case 0x64a15f:c.instructions+=1;goto B64a15f;
case 0x64a164:goto L64a164;
case 0x64a166:c.instructions+=2;goto B64a166;
case 0x64a168:c.instructions+=1;goto B64a168;
case 0x64a16e:goto L64a16e;
case 0x64a171:c.instructions+=3;goto B64a171;
case 0x64a174:c.instructions+=2;goto B64a174;
case 0x64a176:c.instructions+=1;goto B64a176;
case 0x64a178:goto L64a178;
case 0x64a17a:c.instructions+=2;goto B64a17a;
case 0x64a17b:c.instructions+=1;goto B64a17b;
case 0x64a17e:goto L64a17e;
case 0x64a182:goto L64a182;
case 0x64a188:c.instructions+=1;goto B64a188;
case 0x64a18d:goto L64a18d;
case 0x64a190:c.instructions+=3;goto B64a190;
case 0x64a192:c.instructions+=2;goto B64a192;
case 0x64a195:c.instructions+=1;goto B64a195;
case 0x64a19b:goto L64a19b;
case 0x64a19e:c.instructions+=5;goto B64a19e;
case 0x64a1a2:c.instructions+=4;goto B64a1a2;
case 0x64a1a5:c.instructions+=3;goto B64a1a5;
case 0x64a1a6:c.instructions+=2;goto B64a1a6;
case 0x64a1a8:c.instructions+=1;goto B64a1a8;
case 0x64a1ad:goto L64a1ad;
case 0x64a1af:c.instructions+=2;goto B64a1af;
case 0x64a1b1:c.instructions+=1;goto B64a1b1;
case 0x64a1b7:goto L64a1b7;
case 0x64a1ba:c.instructions+=2;goto B64a1ba;
case 0x64a1bb:c.instructions+=1;goto B64a1bb;
case 0x64a1c0:goto L64a1c0;
case 0x64a1c2:c.instructions+=3;goto B64a1c2;
case 0x64a1c3:c.instructions+=2;goto B64a1c3;
case 0x64a1c6:c.instructions+=1;goto B64a1c6;
case 0x64a1cc:goto L64a1cc;
case 0x64a1cf:c.instructions+=3;goto B64a1cf;
case 0x64a1d1:c.instructions+=2;goto B64a1d1;
case 0x64a1d2:c.instructions+=1;goto B64a1d2;
case 0x64a1d7:goto L64a1d7;
case 0x64a1d9:c.instructions+=2;goto B64a1d9;
case 0x64a1db:c.instructions+=1;goto B64a1db;
case 0x64a1e1:goto L64a1e1;
case 0x64a1e7:c.instructions+=6;goto B64a1e7;
case 0x64a1ed:c.instructions+=5;goto B64a1ed;
case 0x64a1f0:c.instructions+=4;goto B64a1f0;
case 0x64a1f4:c.instructions+=3;goto B64a1f4;
case 0x64a1f5:c.instructions+=2;goto B64a1f5;
case 0x64a1f6:c.instructions+=1;goto B64a1f6;
case 0x64a1fb:goto L64a1fb;
case 0x64a1fd:c.instructions+=3;goto B64a1fd;
case 0x64a1ff:c.instructions+=2;goto B64a1ff;
case 0x64a202:c.instructions+=1;goto B64a202;
case 0x64a208:goto L64a208;
case 0x64a20b:c.instructions+=3;goto B64a20b;
case 0x64a20d:c.instructions+=2;goto B64a20d;
case 0x64a20e:c.instructions+=1;goto B64a20e;
case 0x64a211:goto L64a211;
case 0x64a217:c.instructions+=9;goto B64a217;
case 0x64a21d:c.instructions+=8;goto B64a21d;
case 0x64a220:c.instructions+=7;goto B64a220;
case 0x64a222:c.instructions+=6;goto B64a222;
case 0x64a228:c.instructions+=5;goto B64a228;
case 0x64a22e:c.instructions+=4;goto B64a22e;
case 0x64a230:c.instructions+=3;goto B64a230;
case 0x64a233:c.instructions+=2;goto B64a233;
case 0x64a236:c.instructions+=1;goto B64a236;
case 0x64a238:goto L64a238;
case 0x64a23a:goto L64a23a;
case 0x64a23c:c.instructions+=1;goto B64a23c;
case 0x64a23f:goto L64a23f;
case 0x64a241:goto L64a241;
case 0x64a247:c.instructions+=5;goto B64a247;
case 0x64a24d:c.instructions+=4;goto B64a24d;
case 0x64a253:c.instructions+=3;goto B64a253;
case 0x64a255:c.instructions+=2;goto B64a255;
case 0x64a258:c.instructions+=1;goto B64a258;
case 0x64a25a:goto L64a25a;
case 0x64a25c:goto L64a25c;
case 0x64a25e:c.instructions+=1;goto B64a25e;
case 0x64a261:goto L64a261;
case 0x64a263:goto L64a263;
case 0x64a269:c.instructions+=10;goto B64a269;
case 0x64a26c:c.instructions+=9;goto B64a26c;
case 0x64a26f:c.instructions+=8;goto B64a26f;
case 0x64a271:c.instructions+=7;goto B64a271;
case 0x64a274:c.instructions+=6;goto B64a274;
case 0x64a277:c.instructions+=5;goto B64a277;
case 0x64a279:c.instructions+=4;goto B64a279;
case 0x64a27c:c.instructions+=3;goto B64a27c;
case 0x64a27f:c.instructions+=2;goto B64a27f;
case 0x64a281:c.instructions+=1;goto B64a281;
case 0x64a284:goto L64a284;
case 0x64a286:goto L64a286;
case 0x64a288:c.instructions+=2;goto B64a288;
case 0x64a28b:c.instructions+=1;goto B64a28b;
case 0x64a28f:goto L64a28f;
case 0x64a291:goto L64a291;
case 0x64a293:goto L64a293;
case 0x64a296:c.instructions+=5;goto B64a296;
case 0x64a299:c.instructions+=4;goto B64a299;
case 0x64a29b:c.instructions+=3;goto B64a29b;
case 0x64a29d:c.instructions+=2;goto B64a29d;
case 0x64a29e:c.instructions+=1;goto B64a29e;
case 0x64a2a1:goto L64a2a1;
case 0x64a2a4:goto L64a2a4;
case 0x64a2a6:c.instructions+=2;goto B64a2a6;
case 0x64a2a8:c.instructions+=1;goto B64a2a8;
case 0x64a2aa:goto L64a2aa;
case 0x64a2ad:c.instructions+=1;goto B64a2ad;
case 0x64a2b2:goto L64a2b2;
case 0x64a2b4:c.instructions+=1;goto B64a2b4;
case 0x64a2b6:goto L64a2b6;
case 0x64a2bb:goto L64a2bb;
case 0x64a2bd:c.instructions+=1;goto B64a2bd;
case 0x64a2bf:goto L64a2bf;
case 0x64a2c4:c.instructions+=5;goto B64a2c4;
case 0x64a2c6:c.instructions+=4;goto B64a2c6;
case 0x64a2c7:c.instructions+=3;goto B64a2c7;
case 0x64a2c8:c.instructions+=2;goto B64a2c8;
case 0x64a2cb:c.instructions+=1;goto B64a2cb;
case 0x64a2d0:goto L64a2d0;
case 0x64a2d3:goto L64a2d3;
case 0x64a2d6:c.instructions+=1;goto B64a2d6;
case 0x64a2d8:goto L64a2d8;
case 0x64a2db:c.instructions+=2;goto B64a2db;
case 0x64a2de:c.instructions+=1;goto B64a2de;
case 0x64a2e3:goto L64a2e3;
case 0x64a2e6:c.instructions+=1;goto B64a2e6;
case 0x64a2e8:goto L64a2e8;
case 0x64a2eb:c.instructions+=1;goto B64a2eb;
case 0x64a2f0:goto L64a2f0;
case 0x64a2f1:goto L64a2f1;
case 0x64a2f4:c.instructions+=2;goto B64a2f4;
case 0x64a2f6:c.instructions+=1;goto B64a2f6;
case 0x64a2f8:goto L64a2f8;
case 0x64a2fa:c.instructions+=1;goto B64a2fa;
case 0x64a2ff:goto L64a2ff;
case 0x64a302:c.instructions+=2;goto B64a302;
case 0x64a304:c.instructions+=1;goto B64a304;
case 0x64a306:goto L64a306;
case 0x64a308:c.instructions+=2;goto B64a308;
case 0x64a309:c.instructions+=1;goto B64a309;
case 0x64a30c:goto L64a30c;
case 0x64a30f:goto L64a30f;
case 0x64a312:c.instructions+=2;goto B64a312;
case 0x64a314:c.instructions+=1;goto B64a314;
case 0x64a316:goto L64a316;
case 0x64a318:c.instructions+=2;goto B64a318;
case 0x64a319:c.instructions+=1;goto B64a319;
case 0x64a31c:goto L64a31c;
case 0x64a31f:goto L64a31f;
case 0x64a322:c.instructions+=2;goto B64a322;
case 0x64a324:c.instructions+=1;goto B64a324;
case 0x64a326:goto L64a326;
case 0x64a328:c.instructions+=2;goto B64a328;
case 0x64a329:c.instructions+=1;goto B64a329;
case 0x64a32c:goto L64a32c;
case 0x64a32f:goto L64a32f;
case 0x64a332:c.instructions+=1;goto B64a332;
case 0x64a337:goto L64a337;
case 0x64a339:c.instructions+=5;goto B64a339;
case 0x64a33a:c.instructions+=4;goto B64a33a;
case 0x64a33b:c.instructions+=3;goto B64a33b;
case 0x64a33c:c.instructions+=2;goto B64a33c;
case 0x64a33d:c.instructions+=1;goto B64a33d;
case 0x64a340:goto L64a340;
case 0x64a345:c.instructions+=4;goto B64a345;
case 0x64a347:c.instructions+=3;goto B64a347;
case 0x64a34a:c.instructions+=2;goto B64a34a;
case 0x64a34b:c.instructions+=1;goto B64a34b;
case 0x64a34d:goto L64a34d;
case 0x64a352:c.instructions+=1;goto B64a352;
case 0x64a354:goto L64a354;
case 0x64a359:c.instructions+=1;goto B64a359;
case 0x64a35b:goto L64a35b;
case 0x64a360:c.instructions+=5;goto B64a360;
case 0x64a362:c.instructions+=4;goto B64a362;
case 0x64a365:c.instructions+=3;goto B64a365;
case 0x64a366:c.instructions+=2;goto B64a366;
case 0x64a369:c.instructions+=1;goto B64a369;
case 0x64a36e:goto L64a36e;
case 0x64a371:goto L64a371;
case 0x64a377:c.instructions+=1;goto B64a377;
case 0x64a37c:goto L64a37c;
case 0x64a381:goto L64a381;
case 0x64a386:goto L64a386;
case 0x64a389:c.instructions+=3;goto B64a389;
case 0x64a38b:c.instructions+=2;goto B64a38b;
case 0x64a38e:c.instructions+=1;goto B64a38e;
case 0x64a38f:goto L64a38f;
case 0x64a392:c.instructions+=1;goto B64a392;
case 0x64a397:goto L64a397;
case 0x64a39a:c.instructions+=3;goto B64a39a;
case 0x64a3a0:c.instructions+=2;goto B64a3a0;
case 0x64a3a5:c.instructions+=1;goto B64a3a5;
case 0x64a3aa:goto L64a3aa;
case 0x64a3af:goto L64a3af;
case 0x64a3b1:c.instructions+=6;goto B64a3b1;
case 0x64a3b2:c.instructions+=5;goto B64a3b2;
case 0x64a3b4:c.instructions+=4;goto B64a3b4;
case 0x64a3b7:c.instructions+=3;goto B64a3b7;
case 0x64a3b9:c.instructions+=2;goto B64a3b9;
case 0x64a3bb:c.instructions+=1;goto B64a3bb;
case 0x64a3bd:goto L64a3bd;
case 0x64a3c2:c.instructions+=1;goto B64a3c2;
case 0x64a3c4:goto L64a3c4;
case 0x64a3c5:c.instructions+=16;goto B64a3c5;
case 0x64a3c6:c.instructions+=15;goto B64a3c6;
case 0x64a3c8:c.instructions+=14;goto B64a3c8;
case 0x64a3ca:c.instructions+=13;goto B64a3ca;
case 0x64a3cb:c.instructions+=12;goto B64a3cb;
case 0x64a3cc:c.instructions+=11;goto B64a3cc;
case 0x64a3cd:c.instructions+=10;goto B64a3cd;
case 0x64a3ce:c.instructions+=9;goto B64a3ce;
case 0x64a3d1:c.instructions+=8;goto B64a3d1;
case 0x64a3d7:c.instructions+=7;goto B64a3d7;
case 0x64a3da:c.instructions+=6;goto B64a3da;
case 0x64a3e0:c.instructions+=5;goto B64a3e0;
case 0x64a3e3:c.instructions+=4;goto B64a3e3;
case 0x64a3e9:c.instructions+=3;goto B64a3e9;
case 0x64a3ea:c.instructions+=2;goto B64a3ea;
case 0x64a3ed:c.instructions+=1;goto B64a3ed;
case 0x64a3ee:goto L64a3ee;
case 0x64a3f0:c.instructions+=2;goto B64a3f0;
case 0x64a3f1:c.instructions+=1;goto B64a3f1;
case 0x64a3f4:goto L64a3f4;
case 0x64a3f6:c.instructions+=8;goto B64a3f6;
case 0x64a3f7:c.instructions+=7;goto B64a3f7;
case 0x64a3f9:c.instructions+=6;goto B64a3f9;
case 0x64a3fa:c.instructions+=5;goto B64a3fa;
case 0x64a3fb:c.instructions+=4;goto B64a3fb;
case 0x64a3fe:c.instructions+=3;goto B64a3fe;
case 0x64a400:c.instructions+=2;goto B64a400;
case 0x64a402:c.instructions+=1;goto B64a402;
case 0x64a404:goto L64a404;
case 0x64a409:c.instructions+=1;goto B64a409;
case 0x64a40b:goto L64a40b;
case 0x64a40e:c.instructions+=2;goto B64a40e;
case 0x64a411:c.instructions+=1;goto B64a411;
case 0x64a416:goto L64a416;
case 0x64a418:c.instructions+=2;goto B64a418;
case 0x64a41a:c.instructions+=1;goto B64a41a;
case 0x64a41c:goto L64a41c;
case 0x64a41d:c.instructions+=8;goto B64a41d;
case 0x64a41f:c.instructions+=7;goto B64a41f;
case 0x64a421:c.instructions+=6;goto B64a421;
case 0x64a422:c.instructions+=5;goto B64a422;
case 0x64a423:c.instructions+=4;goto B64a423;
case 0x64a426:c.instructions+=3;goto B64a426;
case 0x64a428:c.instructions+=2;goto B64a428;
case 0x64a42b:c.instructions+=1;goto B64a42b;
case 0x64a42c:goto L64a42c;
case 0x64a42d:c.instructions+=4;goto B64a42d;
case 0x64a42f:c.instructions+=3;goto B64a42f;
case 0x64a430:c.instructions+=2;goto B64a430;
case 0x64a431:c.instructions+=1;goto B64a431;
case 0x64a434:goto L64a434;
case 0x64a436:c.instructions+=8;goto B64a436;
case 0x64a437:c.instructions+=7;goto B64a437;
case 0x64a439:c.instructions+=6;goto B64a439;
case 0x64a43a:c.instructions+=5;goto B64a43a;
case 0x64a43b:c.instructions+=4;goto B64a43b;
case 0x64a43e:c.instructions+=3;goto B64a43e;
case 0x64a440:c.instructions+=2;goto B64a440;
case 0x64a442:c.instructions+=1;goto B64a442;
case 0x64a444:goto L64a444;
case 0x64a449:c.instructions+=1;goto B64a449;
case 0x64a44b:goto L64a44b;
case 0x64a44e:c.instructions+=2;goto B64a44e;
case 0x64a451:c.instructions+=1;goto B64a451;
case 0x64a456:goto L64a456;
case 0x64a458:c.instructions+=2;goto B64a458;
case 0x64a45a:c.instructions+=1;goto B64a45a;
case 0x64a45c:goto L64a45c;
case 0x64a45d:c.instructions+=12;goto B64a45d;
case 0x64a45f:c.instructions+=11;goto B64a45f;
case 0x64a461:c.instructions+=10;goto B64a461;
case 0x64a462:c.instructions+=9;goto B64a462;
case 0x64a463:c.instructions+=8;goto B64a463;
case 0x64a464:c.instructions+=7;goto B64a464;
case 0x64a467:c.instructions+=6;goto B64a467;
case 0x64a469:c.instructions+=5;goto B64a469;
case 0x64a46c:c.instructions+=4;goto B64a46c;
case 0x64a46f:c.instructions+=3;goto B64a46f;
case 0x64a472:c.instructions+=2;goto B64a472;
case 0x64a475:c.instructions+=1;goto B64a475;
case 0x64a476:goto L64a476;
case 0x64a477:c.instructions+=4;goto B64a477;
case 0x64a479:c.instructions+=3;goto B64a479;
case 0x64a47a:c.instructions+=2;goto B64a47a;
case 0x64a47b:c.instructions+=1;goto B64a47b;
case 0x64a47e:goto L64a47e;
case 0x64a480:c.instructions+=7;goto B64a480;
case 0x64a481:c.instructions+=6;goto B64a481;
case 0x64a483:c.instructions+=5;goto B64a483;
case 0x64a486:c.instructions+=4;goto B64a486;
case 0x64a487:c.instructions+=3;goto B64a487;
case 0x64a489:c.instructions+=2;goto B64a489;
case 0x64a48b:c.instructions+=1;goto B64a48b;
case 0x64a48d:goto L64a48d;
case 0x64a492:c.instructions+=1;goto B64a492;
case 0x64a494:goto L64a494;
case 0x64a497:c.instructions+=2;goto B64a497;
case 0x64a49a:c.instructions+=1;goto B64a49a;
case 0x64a49f:goto L64a49f;
case 0x64a4a1:c.instructions+=2;goto B64a4a1;
case 0x64a4a3:c.instructions+=1;goto B64a4a3;
case 0x64a4a5:goto L64a4a5;
case 0x64a4a6:c.instructions+=13;goto B64a4a6;
case 0x64a4a8:c.instructions+=12;goto B64a4a8;
case 0x64a4aa:c.instructions+=11;goto B64a4aa;
case 0x64a4ab:c.instructions+=10;goto B64a4ab;
case 0x64a4ac:c.instructions+=9;goto B64a4ac;
case 0x64a4ad:c.instructions+=8;goto B64a4ad;
case 0x64a4ae:c.instructions+=7;goto B64a4ae;
case 0x64a4b1:c.instructions+=6;goto B64a4b1;
case 0x64a4b3:c.instructions+=5;goto B64a4b3;
case 0x64a4b6:c.instructions+=4;goto B64a4b6;
case 0x64a4b9:c.instructions+=3;goto B64a4b9;
case 0x64a4bc:c.instructions+=2;goto B64a4bc;
case 0x64a4bf:c.instructions+=1;goto B64a4bf;
case 0x64a4c0:goto L64a4c0;
case 0x64a4c2:c.instructions+=3;goto B64a4c2;
case 0x64a4c3:c.instructions+=2;goto B64a4c3;
case 0x64a4c4:c.instructions+=1;goto B64a4c4;
case 0x64a4c7:goto L64a4c7;
case 0x64a4c9:c.instructions+=10;goto B64a4c9;
case 0x64a4ca:c.instructions+=9;goto B64a4ca;
case 0x64a4cc:c.instructions+=8;goto B64a4cc;
case 0x64a4cd:c.instructions+=7;goto B64a4cd;
case 0x64a4ce:c.instructions+=6;goto B64a4ce;
case 0x64a4d2:c.instructions+=5;goto B64a4d2;
case 0x64a4d3:c.instructions+=4;goto B64a4d3;
case 0x64a4d4:c.instructions+=3;goto B64a4d4;
case 0x64a4d6:c.instructions+=2;goto B64a4d6;
case 0x64a4d9:c.instructions+=1;goto B64a4d9;
case 0x64a4db:goto L64a4db;
case 0x64a4dd:c.instructions+=1;goto B64a4dd;
case 0x64a4e2:goto L64a4e2;
case 0x64a4e3:c.instructions+=4;goto B64a4e3;
case 0x64a4e6:c.instructions+=3;goto B64a4e6;
case 0x64a4e8:c.instructions+=2;goto B64a4e8;
case 0x64a4eb:c.instructions+=1;goto B64a4eb;
case 0x64a4f0:goto L64a4f0;
case 0x64a4f2:c.instructions+=2;goto B64a4f2;
case 0x64a4f4:c.instructions+=1;goto B64a4f4;
case 0x64a4fa:goto L64a4fa;
case 0x64a4fd:c.instructions+=7;goto B64a4fd;
case 0x64a500:c.instructions+=6;goto B64a500;
case 0x64a506:c.instructions+=5;goto B64a506;
case 0x64a50a:c.instructions+=4;goto B64a50a;
case 0x64a50d:c.instructions+=3;goto B64a50d;
case 0x64a511:c.instructions+=2;goto B64a511;
case 0x64a514:c.instructions+=1;goto B64a514;
case 0x64a51a:goto L64a51a;
case 0x64a51c:c.instructions+=1;goto B64a51c;
case 0x64a522:goto L64a522;
case 0x64a525:c.instructions+=2;goto B64a525;
case 0x64a527:c.instructions+=1;goto B64a527;
case 0x64a52d:goto L64a52d;
case 0x64a530:c.instructions+=3;goto B64a530;
case 0x64a534:c.instructions+=2;goto B64a534;
case 0x64a536:c.instructions+=1;goto B64a536;
case 0x64a538:goto L64a538;
case 0x64a53b:c.instructions+=1;goto B64a53b;
case 0x64a53d:goto L64a53d;
case 0x64a540:c.instructions+=3;goto B64a540;
case 0x64a543:c.instructions+=2;goto B64a543;
case 0x64a545:c.instructions+=1;goto B64a545;
case 0x64a547:goto L64a547;
case 0x64a549:c.instructions+=1;goto B64a549;
case 0x64a54b:goto L64a54b;
case 0x64a54e:c.instructions+=1;goto B64a54e;
case 0x64a554:goto L64a554;
case 0x64a556:c.instructions+=1;goto B64a556;
case 0x64a55b:goto L64a55b;
case 0x64a55c:c.instructions+=3;goto B64a55c;
case 0x64a55e:c.instructions+=2;goto B64a55e;
case 0x64a560:c.instructions+=1;goto B64a560;
case 0x64a562:goto L64a562;
case 0x64a566:c.instructions+=5;goto B64a566;
case 0x64a569:c.instructions+=4;goto B64a569;
case 0x64a56c:c.instructions+=3;goto B64a56c;
case 0x64a56f:c.instructions+=2;goto B64a56f;
case 0x64a571:c.instructions+=1;goto B64a571;
case 0x64a573:goto L64a573;
case 0x64a575:goto L64a575;
case 0x64a577:c.instructions+=1;goto B64a577;
case 0x64a57d:goto L64a57d;
case 0x64a580:c.instructions+=10;goto B64a580;
case 0x64a583:c.instructions+=9;goto B64a583;
case 0x64a586:c.instructions+=8;goto B64a586;
case 0x64a589:c.instructions+=7;goto B64a589;
case 0x64a58c:c.instructions+=6;goto B64a58c;
case 0x64a58d:c.instructions+=5;goto B64a58d;
case 0x64a590:c.instructions+=4;goto B64a590;
case 0x64a591:c.instructions+=3;goto B64a591;
case 0x64a594:c.instructions+=2;goto B64a594;
case 0x64a59a:c.instructions+=1;goto B64a59a;
case 0x64a59f:goto L64a59f;
case 0x64a5a1:c.instructions+=17;goto B64a5a1;
case 0x64a5a4:c.instructions+=16;goto B64a5a4;
case 0x64a5aa:c.instructions+=15;goto B64a5aa;
case 0x64a5ad:c.instructions+=14;goto B64a5ad;
case 0x64a5b0:c.instructions+=13;goto B64a5b0;
case 0x64a5b3:c.instructions+=12;goto B64a5b3;
case 0x64a5b6:c.instructions+=11;goto B64a5b6;
case 0x64a5b9:c.instructions+=10;goto B64a5b9;
case 0x64a5bb:c.instructions+=9;goto B64a5bb;
case 0x64a5bd:c.instructions+=8;goto B64a5bd;
case 0x64a5c0:c.instructions+=7;goto B64a5c0;
case 0x64a5c3:c.instructions+=6;goto B64a5c3;
case 0x64a5c6:c.instructions+=5;goto B64a5c6;
case 0x64a5c9:c.instructions+=4;goto B64a5c9;
case 0x64a5cc:c.instructions+=3;goto B64a5cc;
case 0x64a5cf:c.instructions+=2;goto B64a5cf;
case 0x64a5d1:c.instructions+=1;goto B64a5d1;
case 0x64a5d3:goto L64a5d3;
case 0x64a5d6:c.instructions+=9;goto B64a5d6;
case 0x64a5d9:c.instructions+=8;goto B64a5d9;
case 0x64a5dc:c.instructions+=7;goto B64a5dc;
case 0x64a5df:c.instructions+=6;goto B64a5df;
case 0x64a5e3:c.instructions+=5;goto B64a5e3;
case 0x64a5e5:c.instructions+=4;goto B64a5e5;
case 0x64a5e8:c.instructions+=3;goto B64a5e8;
case 0x64a5e9:c.instructions+=2;goto B64a5e9;
case 0x64a5eb:c.instructions+=1;goto B64a5eb;
case 0x64a5ed:goto L64a5ed;
case 0x64a5f0:c.instructions+=2;goto B64a5f0;
case 0x64a5f2:c.instructions+=1;goto B64a5f2;
case 0x64a5f4:goto L64a5f4;
case 0x64a5f7:c.instructions+=3;goto B64a5f7;
case 0x64a5fa:c.instructions+=2;goto B64a5fa;
case 0x64a5fd:c.instructions+=1;goto B64a5fd;
case 0x64a5ff:goto L64a5ff;
case 0x64a602:c.instructions+=2;goto B64a602;
case 0x64a605:c.instructions+=1;goto B64a605;
case 0x64a608:goto L64a608;
case 0x64a60a:c.instructions+=2;goto B64a60a;
case 0x64a60c:c.instructions+=1;goto B64a60c;
case 0x64a60e:goto L64a60e;
case 0x64a610:goto L64a610;
case 0x64a611:goto L64a611;
case 0x64a612:c.instructions+=3;goto B64a612;
case 0x64a613:c.instructions+=2;goto B64a613;
case 0x64a614:c.instructions+=1;goto B64a614;
case 0x64a617:goto L64a617;
case 0x64a619:c.instructions+=6;goto B64a619;
case 0x64a61a:c.instructions+=5;goto B64a61a;
case 0x64a61c:c.instructions+=4;goto B64a61c;
case 0x64a61d:c.instructions+=3;goto B64a61d;
case 0x64a620:c.instructions+=2;goto B64a620;
case 0x64a622:c.instructions+=1;goto B64a622;
case 0x64a624:goto L64a624;
case 0x64a627:c.instructions+=2;goto B64a627;
case 0x64a628:c.instructions+=1;goto B64a628;
case 0x64a62d:goto L64a62d;
case 0x64a62f:c.instructions+=1;goto B64a62f;
case 0x64a631:goto L64a631;
case 0x64a634:c.instructions+=1;goto B64a634;
case 0x64a637:goto L64a637;
case 0x64a63a:c.instructions+=1;goto B64a63a;
case 0x64a63c:goto L64a63c;
case 0x64a63f:c.instructions+=2;goto B64a63f;
case 0x64a640:c.instructions+=1;goto B64a640;
case 0x64a645:goto L64a645;
case 0x64a647:c.instructions+=1;goto B64a647;
case 0x64a649:goto L64a649;
case 0x64a64c:c.instructions+=1;goto B64a64c;
case 0x64a64e:goto L64a64e;
case 0x64a651:c.instructions+=2;goto B64a651;
case 0x64a652:c.instructions+=1;goto B64a652;
case 0x64a657:goto L64a657;
case 0x64a659:c.instructions+=1;goto B64a659;
case 0x64a65b:goto L64a65b;
case 0x64a65e:c.instructions+=1;goto B64a65e;
case 0x64a661:goto L64a661;
case 0x64a664:c.instructions+=2;goto B64a664;
case 0x64a666:c.instructions+=1;goto B64a666;
case 0x64a668:goto L64a668;
case 0x64a66a:goto L64a66a;
case 0x64a66b:c.instructions+=2;goto B64a66b;
case 0x64a66c:c.instructions+=1;goto B64a66c;
case 0x64a66f:goto L64a66f;
case 0x64a672:goto L64a672;
case 0x64a673:c.instructions+=2;goto B64a673;
case 0x64a675:c.instructions+=1;goto B64a675;
case 0x64a677:goto L64a677;
case 0x64a679:c.instructions+=1;goto B64a679;
case 0x64a67b:goto L64a67b;
case 0x64a67d:c.instructions+=11;goto B64a67d;
case 0x64a67e:c.instructions+=10;goto B64a67e;
case 0x64a680:c.instructions+=9;goto B64a680;
case 0x64a681:c.instructions+=8;goto B64a681;
case 0x64a684:c.instructions+=7;goto B64a684;
case 0x64a686:c.instructions+=6;goto B64a686;
case 0x64a687:c.instructions+=5;goto B64a687;
case 0x64a688:c.instructions+=4;goto B64a688;
case 0x64a68a:c.instructions+=3;goto B64a68a;
case 0x64a68b:c.instructions+=2;goto B64a68b;
case 0x64a68e:c.instructions+=1;goto B64a68e;
case 0x64a694:goto L64a694;
case 0x64a697:c.instructions+=1;goto B64a697;
case 0x64a69d:goto L64a69d;
case 0x64a6a0:c.instructions+=1;goto B64a6a0;
case 0x64a6a5:goto L64a6a5;
case 0x64a6a7:c.instructions+=1;goto B64a6a7;
case 0x64a6a9:goto L64a6a9;
case 0x64a6ac:goto L64a6ac;
case 0x64a6af:c.instructions+=1;goto B64a6af;
case 0x64a6b1:goto L64a6b1;
case 0x64a6b4:c.instructions+=2;goto B64a6b4;
case 0x64a6b6:c.instructions+=1;goto B64a6b6;
case 0x64a6bb:goto L64a6bb;
case 0x64a6bd:c.instructions+=1;goto B64a6bd;
case 0x64a6bf:goto L64a6bf;
case 0x64a6c2:c.instructions+=2;goto B64a6c2;
case 0x64a6c4:c.instructions+=1;goto B64a6c4;
case 0x64a6c9:goto L64a6c9;
case 0x64a6cb:c.instructions+=1;goto B64a6cb;
case 0x64a6cd:goto L64a6cd;
case 0x64a6d0:goto L64a6d0;
case 0x64a6d2:c.instructions+=1;goto B64a6d2;
case 0x64a6d4:goto L64a6d4;
case 0x64a6da:c.instructions+=2;goto B64a6da;
case 0x64a6dd:c.instructions+=1;goto B64a6dd;
case 0x64a6df:goto L64a6df;
case 0x64a6e2:c.instructions+=1;goto B64a6e2;
case 0x64a6e5:goto L64a6e5;
case 0x64a6e8:c.instructions+=6;goto B64a6e8;
case 0x64a6eb:c.instructions+=5;goto B64a6eb;
case 0x64a6ee:c.instructions+=4;goto B64a6ee;
case 0x64a6f0:c.instructions+=3;goto B64a6f0;
case 0x64a6f3:c.instructions+=2;goto B64a6f3;
case 0x64a6f7:c.instructions+=1;goto B64a6f7;
case 0x64a6f9:goto L64a6f9;
case 0x64a6fb:c.instructions+=1;goto B64a6fb;
case 0x64a6fd:goto L64a6fd;
case 0x64a703:c.instructions+=1;goto B64a703;
case 0x64a707:goto L64a707;
case 0x64a70a:c.instructions+=3;goto B64a70a;
case 0x64a70c:c.instructions+=2;goto B64a70c;
case 0x64a70e:c.instructions+=1;goto B64a70e;
case 0x64a710:goto L64a710;
case 0x64a712:c.instructions+=1;goto B64a712;
case 0x64a714:goto L64a714;
case 0x64a715:c.instructions+=2;goto B64a715;
case 0x64a717:c.instructions+=1;goto B64a717;
case 0x64a718:goto L64a718;
case 0x64a71a:c.instructions+=1;goto B64a71a;
case 0x64a71c:goto L64a71c;
case 0x64a71e:c.instructions+=3;goto B64a71e;
case 0x64a720:c.instructions+=2;goto B64a720;
case 0x64a722:c.instructions+=1;goto B64a722;
case 0x64a724:goto L64a724;
case 0x64a726:c.instructions+=1;goto B64a726;
case 0x64a728:goto L64a728;
case 0x64a72a:c.instructions+=1;goto B64a72a;
case 0x64a72c:goto L64a72c;
case 0x64a72e:c.instructions+=1;goto B64a72e;
case 0x64a730:goto L64a730;
case 0x64a733:c.instructions+=2;goto B64a733;
case 0x64a735:c.instructions+=1;goto B64a735;
case 0x64a737:goto L64a737;
case 0x64a739:goto L64a739;
case 0x64a73a:c.instructions+=4;goto B64a73a;
case 0x64a73b:c.instructions+=3;goto B64a73b;
case 0x64a73c:c.instructions+=2;goto B64a73c;
case 0x64a73d:c.instructions+=1;goto B64a73d;
case 0x64a740:goto L64a740;
case 0x64a742:c.instructions+=2;goto B64a742;
case 0x64a744:c.instructions+=1;goto B64a744;
case 0x64a746:goto L64a746;
case 0x64a747:c.instructions+=3;goto B64a747;
case 0x64a749:c.instructions+=2;goto B64a749;
case 0x64a74b:c.instructions+=1;goto B64a74b;
case 0x64a74d:goto L64a74d;
case 0x64a74f:c.instructions+=1;goto B64a74f;
case 0x64a751:goto L64a751;
case 0x64a752:c.instructions+=1;goto B64a752;
case 0x64a757:goto L64a757;
case 0x64a75a:c.instructions+=2;goto B64a75a;
case 0x64a75b:c.instructions+=1;goto B64a75b;
case 0x64a75d:goto L64a75d;
case 0x64a75f:goto L64a75f;
case 0x64a762:c.instructions+=1;goto B64a762;
case 0x64a764:goto L64a764;
case 0x64a765:goto L64a765;
case 0x64a767:c.instructions+=2;goto B64a767;
case 0x64a76a:c.instructions+=1;goto B64a76a;
case 0x64a76c:goto L64a76c;
case 0x64a76f:c.instructions+=1;goto B64a76f;
case 0x64a771:goto L64a771;
case 0x64a774:c.instructions+=6;goto B64a774;
case 0x64a777:c.instructions+=5;goto B64a777;
case 0x64a778:c.instructions+=4;goto B64a778;
case 0x64a77a:c.instructions+=3;goto B64a77a;
case 0x64a77b:c.instructions+=2;goto B64a77b;
case 0x64a77c:c.instructions+=1;goto B64a77c;
case 0x64a781:goto L64a781;
case 0x64a783:c.instructions+=1;goto B64a783;
case 0x64a785:goto L64a785;
case 0x64a787:c.instructions+=2;goto B64a787;
case 0x64a789:c.instructions+=1;goto B64a789;
case 0x64a78b:goto L64a78b;
case 0x64a78e:c.instructions+=1;goto B64a78e;
case 0x64a790:goto L64a790;
case 0x64a793:c.instructions+=3;goto B64a793;
case 0x64a794:c.instructions+=2;goto B64a794;
case 0x64a795:c.instructions+=1;goto B64a795;
case 0x64a796:goto L64a796;
case 0x64a799:c.instructions+=1;goto B64a799;
case 0x64a79e:goto L64a79e;
case 0x64a7a0:goto L64a7a0;
case 0x64a7a3:c.instructions+=5;goto B64a7a3;
case 0x64a7a4:c.instructions+=4;goto B64a7a4;
case 0x64a7a5:c.instructions+=3;goto B64a7a5;
case 0x64a7a7:c.instructions+=2;goto B64a7a7;
case 0x64a7a8:c.instructions+=1;goto B64a7a8;
case 0x64a7aa:goto L64a7aa;
case 0x64a7ac:c.instructions+=7;goto B64a7ac;
case 0x64a7ad:c.instructions+=6;goto B64a7ad;
case 0x64a7af:c.instructions+=5;goto B64a7af;
case 0x64a7b2:c.instructions+=4;goto B64a7b2;
case 0x64a7b8:c.instructions+=3;goto B64a7b8;
case 0x64a7bb:c.instructions+=2;goto B64a7bb;
case 0x64a7bd:c.instructions+=1;goto B64a7bd;
case 0x64a7bf:goto L64a7bf;
case 0x64a7c1:c.instructions+=1;goto B64a7c1;
case 0x64a7c3:goto L64a7c3;
case 0x64a7c9:c.instructions+=1;goto B64a7c9;
case 0x64a7cb:goto L64a7cb;
case 0x64a7ce:goto L64a7ce;
case 0x64a7cf:c.instructions+=2;goto B64a7cf;
case 0x64a7d1:c.instructions+=1;goto B64a7d1;
case 0x64a7d3:goto L64a7d3;
case 0x64a7d5:goto L64a7d5;
case 0x64a7d6:c.instructions+=1;goto B64a7d6;
case 0x64a7d9:goto L64a7d9;
case 0x64a7db:c.instructions+=5;goto B64a7db;
case 0x64a7dc:c.instructions+=4;goto B64a7dc;
case 0x64a7de:c.instructions+=3;goto B64a7de;
case 0x64a7e1:c.instructions+=2;goto B64a7e1;
case 0x64a7e4:c.instructions+=1;goto B64a7e4;
case 0x64a7e9:goto L64a7e9;
case 0x64a7eb:c.instructions+=1;goto B64a7eb;
case 0x64a7ed:goto L64a7ed;
case 0x64a7ef:goto L64a7ef;
case 0x64a7f0:c.instructions+=1;goto B64a7f0;
case 0x64a7f3:goto L64a7f3;
case 0x64a7f5:c.instructions+=5;goto B64a7f5;
case 0x64a7f6:c.instructions+=4;goto B64a7f6;
case 0x64a7f8:c.instructions+=3;goto B64a7f8;
case 0x64a7fb:c.instructions+=2;goto B64a7fb;
case 0x64a7fe:c.instructions+=1;goto B64a7fe;
case 0x64a803:goto L64a803;
case 0x64a805:c.instructions+=1;goto B64a805;
case 0x64a807:goto L64a807;
case 0x64a80a:c.instructions+=3;goto B64a80a;
case 0x64a80d:c.instructions+=2;goto B64a80d;
case 0x64a80f:c.instructions+=1;goto B64a80f;
case 0x64a811:goto L64a811;
case 0x64a813:c.instructions+=1;goto B64a813;
case 0x64a815:goto L64a815;
case 0x64a818:c.instructions+=3;goto B64a818;
case 0x64a819:c.instructions+=2;goto B64a819;
case 0x64a81b:c.instructions+=1;goto B64a81b;
case 0x64a81d:goto L64a81d;
case 0x64a81f:goto L64a81f;
case 0x64a820:c.instructions+=1;goto B64a820;
case 0x64a823:goto L64a823;
case 0x64a825:c.instructions+=5;goto B64a825;
case 0x64a826:c.instructions+=4;goto B64a826;
case 0x64a828:c.instructions+=3;goto B64a828;
case 0x64a82b:c.instructions+=2;goto B64a82b;
case 0x64a82e:c.instructions+=1;goto B64a82e;
case 0x64a833:goto L64a833;
case 0x64a835:c.instructions+=1;goto B64a835;
case 0x64a837:goto L64a837;
case 0x64a838:c.instructions+=3;goto B64a838;
case 0x64a839:c.instructions+=2;goto B64a839;
case 0x64a83c:c.instructions+=1;goto B64a83c;
case 0x64a83e:goto L64a83e;
case 0x64a842:c.instructions+=1;goto B64a842;
case 0x64a844:goto L64a844;
case 0x64a848:c.instructions+=1;goto B64a848;
case 0x64a84a:goto L64a84a;
case 0x64a84d:c.instructions+=2;goto B64a84d;
case 0x64a84f:c.instructions+=1;goto B64a84f;
case 0x64a851:goto L64a851;
case 0x64a854:goto L64a854;
case 0x64a856:c.instructions+=3;goto B64a856;
case 0x64a858:c.instructions+=2;goto B64a858;
case 0x64a85a:c.instructions+=1;goto B64a85a;
case 0x64a85c:goto L64a85c;
case 0x64a85e:c.instructions+=1;goto B64a85e;
case 0x64a860:goto L64a860;
case 0x64a863:c.instructions+=3;goto B64a863;
case 0x64a865:c.instructions+=2;goto B64a865;
case 0x64a868:c.instructions+=1;goto B64a868;
case 0x64a86a:goto L64a86a;
case 0x64a86b:c.instructions+=5;goto B64a86b;
case 0x64a86c:c.instructions+=4;goto B64a86c;
case 0x64a86d:c.instructions+=3;goto B64a86d;
case 0x64a86e:c.instructions+=2;goto B64a86e;
case 0x64a870:c.instructions+=1;goto B64a870;
case 0x64a872:goto L64a872;
case 0x64a874:c.instructions+=1;goto B64a874;
case 0x64a876:goto L64a876;
case 0x64a878:c.instructions+=1;goto B64a878;
case 0x64a87b:goto L64a87b;
case 0x64a87d:goto L64a87d;
case 0x64a87f:goto L64a87f;
case 0x64a882:goto L64a882;
case 0x64a884:c.instructions+=1;goto B64a884;
case 0x64a886:goto L64a886;
case 0x64a888:goto L64a888;
case 0x64a889:c.instructions+=1;goto B64a889;
case 0x64a88a:goto L64a88a;
case 0x64a88b:c.instructions+=1;goto B64a88b;
case 0x64a88e:goto L64a88e;
case 0x64a890:c.instructions+=2;goto B64a890;
case 0x64a892:c.instructions+=1;goto B64a892;
case 0x64a894:goto L64a894;
case 0x64a896:c.instructions+=7;goto B64a896;
case 0x64a897:c.instructions+=6;goto B64a897;
case 0x64a899:c.instructions+=5;goto B64a899;
case 0x64a89c:c.instructions+=4;goto B64a89c;
case 0x64a8a2:c.instructions+=3;goto B64a8a2;
case 0x64a8a5:c.instructions+=2;goto B64a8a5;
case 0x64a8a7:c.instructions+=1;goto B64a8a7;
case 0x64a8a9:goto L64a8a9;
case 0x64a8ab:c.instructions+=1;goto B64a8ab;
case 0x64a8ad:goto L64a8ad;
case 0x64a8b3:c.instructions+=1;goto B64a8b3;
case 0x64a8b5:goto L64a8b5;
case 0x64a8b8:goto L64a8b8;
case 0x64a8b9:c.instructions+=2;goto B64a8b9;
case 0x64a8bb:c.instructions+=1;goto B64a8bb;
case 0x64a8bd:goto L64a8bd;
case 0x64a8bf:goto L64a8bf;
case 0x64a8c0:c.instructions+=1;goto B64a8c0;
case 0x64a8c3:goto L64a8c3;
case 0x64a8c5:c.instructions+=5;goto B64a8c5;
case 0x64a8c6:c.instructions+=4;goto B64a8c6;
case 0x64a8c8:c.instructions+=3;goto B64a8c8;
case 0x64a8cb:c.instructions+=2;goto B64a8cb;
case 0x64a8ce:c.instructions+=1;goto B64a8ce;
case 0x64a8d3:goto L64a8d3;
case 0x64a8d5:c.instructions+=1;goto B64a8d5;
case 0x64a8d7:goto L64a8d7;
case 0x64a8d9:goto L64a8d9;
case 0x64a8da:c.instructions+=1;goto B64a8da;
case 0x64a8dd:goto L64a8dd;
case 0x64a8df:c.instructions+=10;goto B64a8df;
case 0x64a8e0:c.instructions+=9;goto B64a8e0;
case 0x64a8e2:c.instructions+=8;goto B64a8e2;
case 0x64a8e5:c.instructions+=7;goto B64a8e5;
case 0x64a8e6:c.instructions+=6;goto B64a8e6;
case 0x64a8e9:c.instructions+=5;goto B64a8e9;
case 0x64a8ec:c.instructions+=4;goto B64a8ec;
case 0x64a8ed:c.instructions+=3;goto B64a8ed;
case 0x64a8ef:c.instructions+=2;goto B64a8ef;
case 0x64a8f1:c.instructions+=1;goto B64a8f1;
case 0x64a8f3:goto L64a8f3;
case 0x64a8f4:c.instructions+=1;goto B64a8f4;
case 0x64a8f6:goto L64a8f6;
case 0x64a8f7:c.instructions+=1;goto B64a8f7;
case 0x64a8f9:goto L64a8f9;
case 0x64a8fa:c.instructions+=1;goto B64a8fa;
case 0x64a8fc:goto L64a8fc;
case 0x64a901:c.instructions+=1;goto B64a901;
case 0x64a903:goto L64a903;
case 0x64a906:c.instructions+=2;goto B64a906;
case 0x64a909:c.instructions+=1;goto B64a909;
case 0x64a90b:goto L64a90b;
case 0x64a90e:c.instructions+=1;goto B64a90e;
case 0x64a913:goto L64a913;
case 0x64a915:goto L64a915;
case 0x64a918:c.instructions+=5;goto B64a918;
case 0x64a91e:c.instructions+=4;goto B64a91e;
case 0x64a920:c.instructions+=3;goto B64a920;
case 0x64a922:c.instructions+=2;goto B64a922;
case 0x64a925:c.instructions+=1;goto B64a925;
case 0x64a927:goto L64a927;
case 0x64a929:c.instructions+=2;goto B64a929;
case 0x64a92a:c.instructions+=1;goto B64a92a;
case 0x64a92c:goto L64a92c;
case 0x64a92e:goto L64a92e;
case 0x64a931:goto L64a931;
case 0x64a933:c.instructions+=4;goto B64a933;
case 0x64a934:c.instructions+=3;goto B64a934;
case 0x64a935:c.instructions+=2;goto B64a935;
case 0x64a936:c.instructions+=1;goto B64a936;
case 0x64a939:goto L64a939;
case 0x64a93b:c.instructions+=8;goto B64a93b;
case 0x64a93c:c.instructions+=7;goto B64a93c;
case 0x64a93e:c.instructions+=6;goto B64a93e;
case 0x64a941:c.instructions+=5;goto B64a941;
case 0x64a944:c.instructions+=4;goto B64a944;
case 0x64a947:c.instructions+=3;goto B64a947;
case 0x64a949:c.instructions+=2;goto B64a949;
case 0x64a94b:c.instructions+=1;goto B64a94b;
case 0x64a94d:goto L64a94d;
case 0x64a94e:c.instructions+=1;goto B64a94e;
case 0x64a950:goto L64a950;
case 0x64a951:c.instructions+=1;goto B64a951;
case 0x64a953:goto L64a953;
case 0x64a954:c.instructions+=1;goto B64a954;
case 0x64a956:goto L64a956;
case 0x64a95b:c.instructions+=1;goto B64a95b;
case 0x64a95d:goto L64a95d;
case 0x64a960:c.instructions+=1;goto B64a960;
case 0x64a962:goto L64a962;
case 0x64a965:c.instructions+=4;goto B64a965;
case 0x64a967:c.instructions+=3;goto B64a967;
case 0x64a96a:c.instructions+=2;goto B64a96a;
case 0x64a96d:c.instructions+=1;goto B64a96d;
case 0x64a96f:goto L64a96f;
case 0x64a975:c.instructions+=1;goto B64a975;
case 0x64a977:goto L64a977;
case 0x64a97a:c.instructions+=1;goto B64a97a;
case 0x64a97c:goto L64a97c;
case 0x64a97e:c.instructions+=4;goto B64a97e;
case 0x64a981:c.instructions+=3;goto B64a981;
case 0x64a984:c.instructions+=2;goto B64a984;
case 0x64a987:c.instructions+=1;goto B64a987;
case 0x64a98a:goto L64a98a;
case 0x64a98d:c.instructions+=1;goto B64a98d;
case 0x64a98f:goto L64a98f;
case 0x64a990:c.instructions+=1;goto B64a990;
case 0x64a993:goto L64a993;
case 0x64a995:c.instructions+=7;goto B64a995;
case 0x64a996:c.instructions+=6;goto B64a996;
case 0x64a998:c.instructions+=5;goto B64a998;
case 0x64a99b:c.instructions+=4;goto B64a99b;
case 0x64a99d:c.instructions+=3;goto B64a99d;
case 0x64a9a0:c.instructions+=2;goto B64a9a0;
case 0x64a9a3:c.instructions+=1;goto B64a9a3;
case 0x64a9a9:goto L64a9a9;
case 0x64a9ac:c.instructions+=10;goto B64a9ac;
case 0x64a9af:c.instructions+=9;goto B64a9af;
case 0x64a9b0:c.instructions+=8;goto B64a9b0;
case 0x64a9b3:c.instructions+=7;goto B64a9b3;
case 0x64a9b5:c.instructions+=6;goto B64a9b5;
case 0x64a9b6:c.instructions+=5;goto B64a9b6;
case 0x64a9b8:c.instructions+=4;goto B64a9b8;
case 0x64a9bb:c.instructions+=3;goto B64a9bb;
case 0x64a9be:c.instructions+=2;goto B64a9be;
case 0x64a9c1:c.instructions+=1;goto B64a9c1;
case 0x64a9c3:goto L64a9c3;
case 0x64a9c6:goto L64a9c6;
case 0x64a9c8:c.instructions+=2;goto B64a9c8;
case 0x64a9cb:c.instructions+=1;goto B64a9cb;
case 0x64a9cd:goto L64a9cd;
case 0x64a9d0:goto L64a9d0;
case 0x64a9d1:c.instructions+=2;goto B64a9d1;
case 0x64a9d4:c.instructions+=1;goto B64a9d4;
case 0x64a9d5:goto L64a9d5;
case 0x64a9d8:c.instructions+=2;goto B64a9d8;
case 0x64a9db:c.instructions+=1;goto B64a9db;
case 0x64a9dd:goto L64a9dd;
case 0x64a9e0:c.instructions+=1;goto B64a9e0;
case 0x64a9e3:goto L64a9e3;
case 0x64a9e5:c.instructions+=2;goto B64a9e5;
case 0x64a9e8:c.instructions+=1;goto B64a9e8;
case 0x64a9ea:goto L64a9ea;
case 0x64a9ed:goto L64a9ed;
case 0x64a9ef:c.instructions+=4;goto B64a9ef;
case 0x64a9f0:c.instructions+=3;goto B64a9f0;
case 0x64a9f3:c.instructions+=2;goto B64a9f3;
case 0x64a9f4:c.instructions+=1;goto B64a9f4;
case 0x64a9f9:goto L64a9f9;
case 0x64a9fb:c.instructions+=2;goto B64a9fb;
case 0x64a9fe:c.instructions+=1;goto B64a9fe;
case 0x64aa00:goto L64aa00;
case 0x64aa03:c.instructions+=4;goto B64aa03;
case 0x64aa04:c.instructions+=3;goto B64aa04;
case 0x64aa07:c.instructions+=2;goto B64aa07;
case 0x64aa0a:c.instructions+=1;goto B64aa0a;
case 0x64aa0c:goto L64aa0c;
case 0x64aa0f:c.instructions+=1;goto B64aa0f;
case 0x64aa12:goto L64aa12;
case 0x64aa14:c.instructions+=1;goto B64aa14;
case 0x64aa16:goto L64aa16;
case 0x64aa18:c.instructions+=1;goto B64aa18;
case 0x64aa1a:goto L64aa1a;
case 0x64aa1b:c.instructions+=2;goto B64aa1b;
case 0x64aa1e:c.instructions+=1;goto B64aa1e;
case 0x64aa20:goto L64aa20;
case 0x64aa23:c.instructions+=4;goto B64aa23;
case 0x64aa26:c.instructions+=3;goto B64aa26;
case 0x64aa2a:c.instructions+=2;goto B64aa2a;
case 0x64aa2d:c.instructions+=1;goto B64aa2d;
case 0x64aa2f:goto L64aa2f;
case 0x64aa32:c.instructions+=1;goto B64aa32;
case 0x64aa34:goto L64aa34;
case 0x64aa36:c.instructions+=1;goto B64aa36;
case 0x64aa39:goto L64aa39;
case 0x64aa3b:c.instructions+=1;goto B64aa3b;
case 0x64aa3d:goto L64aa3d;
case 0x64aa3f:goto L64aa3f;
case 0x64aa40:c.instructions+=2;goto B64aa40;
case 0x64aa43:c.instructions+=1;goto B64aa43;
case 0x64aa45:goto L64aa45;
case 0x64aa46:c.instructions+=1;goto B64aa46;
case 0x64aa48:goto L64aa48;
case 0x64aa4b:c.instructions+=4;goto B64aa4b;
case 0x64aa4f:c.instructions+=3;goto B64aa4f;
case 0x64aa51:c.instructions+=2;goto B64aa51;
case 0x64aa54:c.instructions+=1;goto B64aa54;
case 0x64aa5a:goto L64aa5a;
case 0x64aa5b:c.instructions+=2;goto B64aa5b;
case 0x64aa5c:c.instructions+=1;goto B64aa5c;
case 0x64aa5d:goto L64aa5d;
case 0x64aa60:c.instructions+=2;goto B64aa60;
case 0x64aa61:c.instructions+=1;goto B64aa61;
case 0x64aa64:goto L64aa64;
case 0x64aa66:c.instructions+=7;goto B64aa66;
case 0x64aa67:c.instructions+=6;goto B64aa67;
case 0x64aa69:c.instructions+=5;goto B64aa69;
case 0x64aa6c:c.instructions+=4;goto B64aa6c;
case 0x64aa6f:c.instructions+=3;goto B64aa6f;
case 0x64aa73:c.instructions+=2;goto B64aa73;
case 0x64aa75:c.instructions+=1;goto B64aa75;
case 0x64aa7b:goto L64aa7b;
case 0x64aa7e:c.instructions+=10;goto B64aa7e;
case 0x64aa81:c.instructions+=9;goto B64aa81;
case 0x64aa82:c.instructions+=8;goto B64aa82;
case 0x64aa85:c.instructions+=7;goto B64aa85;
case 0x64aa87:c.instructions+=6;goto B64aa87;
case 0x64aa88:c.instructions+=5;goto B64aa88;
case 0x64aa8a:c.instructions+=4;goto B64aa8a;
case 0x64aa8d:c.instructions+=3;goto B64aa8d;
case 0x64aa90:c.instructions+=2;goto B64aa90;
case 0x64aa93:c.instructions+=1;goto B64aa93;
case 0x64aa95:goto L64aa95;
case 0x64aa98:goto L64aa98;
case 0x64aa9a:c.instructions+=2;goto B64aa9a;
case 0x64aa9d:c.instructions+=1;goto B64aa9d;
case 0x64aa9f:goto L64aa9f;
case 0x64aaa2:goto L64aaa2;
case 0x64aaa5:c.instructions+=6;goto B64aaa5;
case 0x64aaa6:c.instructions+=5;goto B64aaa6;
case 0x64aaa8:c.instructions+=4;goto B64aaa8;
case 0x64aaa9:c.instructions+=3;goto B64aaa9;
case 0x64aaac:c.instructions+=2;goto B64aaac;
case 0x64aaaf:c.instructions+=1;goto B64aaaf;
case 0x64aab1:goto L64aab1;
case 0x64aab3:goto L64aab3;
case 0x64aab5:c.instructions+=2;goto B64aab5;
case 0x64aab8:c.instructions+=1;goto B64aab8;
case 0x64aabb:goto L64aabb;
case 0x64aabd:goto L64aabd;
case 0x64aac1:c.instructions+=2;goto B64aac1;
case 0x64aac5:c.instructions+=1;goto B64aac5;
case 0x64aac7:goto L64aac7;
case 0x64aaca:c.instructions+=1;goto B64aaca;
case 0x64aacd:goto L64aacd;
case 0x64aacf:c.instructions+=2;goto B64aacf;
case 0x64aad2:c.instructions+=1;goto B64aad2;
case 0x64aad4:goto L64aad4;
case 0x64aad7:goto L64aad7;
case 0x64aad8:c.instructions+=2;goto B64aad8;
case 0x64aad9:c.instructions+=1;goto B64aad9;
case 0x64aade:goto L64aade;
case 0x64aae0:c.instructions+=2;goto B64aae0;
case 0x64aae3:c.instructions+=1;goto B64aae3;
case 0x64aae5:goto L64aae5;
case 0x64aae8:c.instructions+=4;goto B64aae8;
case 0x64aae9:c.instructions+=3;goto B64aae9;
case 0x64aaec:c.instructions+=2;goto B64aaec;
case 0x64aaef:c.instructions+=1;goto B64aaef;
case 0x64aaf1:goto L64aaf1;
case 0x64aaf4:c.instructions+=1;goto B64aaf4;
case 0x64aaf7:goto L64aaf7;
case 0x64aaf9:c.instructions+=1;goto B64aaf9;
case 0x64aafb:goto L64aafb;
case 0x64aafd:c.instructions+=1;goto B64aafd;
case 0x64aaff:goto L64aaff;
case 0x64ab00:c.instructions+=2;goto B64ab00;
case 0x64ab03:c.instructions+=1;goto B64ab03;
case 0x64ab05:goto L64ab05;
case 0x64ab08:c.instructions+=4;goto B64ab08;
case 0x64ab0b:c.instructions+=3;goto B64ab0b;
case 0x64ab0f:c.instructions+=2;goto B64ab0f;
case 0x64ab12:c.instructions+=1;goto B64ab12;
case 0x64ab14:goto L64ab14;
case 0x64ab17:c.instructions+=1;goto B64ab17;
case 0x64ab19:goto L64ab19;
case 0x64ab1b:c.instructions+=1;goto B64ab1b;
case 0x64ab1e:goto L64ab1e;
case 0x64ab20:c.instructions+=1;goto B64ab20;
case 0x64ab22:goto L64ab22;
case 0x64ab24:goto L64ab24;
case 0x64ab25:c.instructions+=2;goto B64ab25;
case 0x64ab28:c.instructions+=1;goto B64ab28;
case 0x64ab2a:goto L64ab2a;
case 0x64ab2b:c.instructions+=1;goto B64ab2b;
case 0x64ab2d:goto L64ab2d;
case 0x64ab30:c.instructions+=3;goto B64ab30;
case 0x64ab34:c.instructions+=2;goto B64ab34;
case 0x64ab38:c.instructions+=1;goto B64ab38;
case 0x64ab3a:goto L64ab3a;
case 0x64ab3b:c.instructions+=2;goto B64ab3b;
case 0x64ab3c:c.instructions+=1;goto B64ab3c;
case 0x64ab3d:goto L64ab3d;
case 0x64ab40:c.instructions+=2;goto B64ab40;
case 0x64ab41:c.instructions+=1;goto B64ab41;
case 0x64ab44:goto L64ab44;
case 0x64ab46:c.instructions+=7;goto B64ab46;
case 0x64ab47:c.instructions+=6;goto B64ab47;
case 0x64ab49:c.instructions+=5;goto B64ab49;
case 0x64ab4c:c.instructions+=4;goto B64ab4c;
case 0x64ab4e:c.instructions+=3;goto B64ab4e;
case 0x64ab51:c.instructions+=2;goto B64ab51;
case 0x64ab54:c.instructions+=1;goto B64ab54;
case 0x64ab5a:goto L64ab5a;
case 0x64ab5d:c.instructions+=10;goto B64ab5d;
case 0x64ab60:c.instructions+=9;goto B64ab60;
case 0x64ab61:c.instructions+=8;goto B64ab61;
case 0x64ab64:c.instructions+=7;goto B64ab64;
case 0x64ab66:c.instructions+=6;goto B64ab66;
case 0x64ab67:c.instructions+=5;goto B64ab67;
case 0x64ab69:c.instructions+=4;goto B64ab69;
case 0x64ab6c:c.instructions+=3;goto B64ab6c;
case 0x64ab6f:c.instructions+=2;goto B64ab6f;
case 0x64ab72:c.instructions+=1;goto B64ab72;
case 0x64ab74:goto L64ab74;
case 0x64ab77:goto L64ab77;
case 0x64ab79:c.instructions+=2;goto B64ab79;
case 0x64ab7c:c.instructions+=1;goto B64ab7c;
case 0x64ab7e:goto L64ab7e;
case 0x64ab81:goto L64ab81;
case 0x64ab82:c.instructions+=2;goto B64ab82;
case 0x64ab85:c.instructions+=1;goto B64ab85;
case 0x64ab86:goto L64ab86;
case 0x64ab89:c.instructions+=2;goto B64ab89;
case 0x64ab8c:c.instructions+=1;goto B64ab8c;
case 0x64ab8e:goto L64ab8e;
case 0x64ab91:c.instructions+=1;goto B64ab91;
case 0x64ab94:goto L64ab94;
case 0x64ab96:c.instructions+=2;goto B64ab96;
case 0x64ab99:c.instructions+=1;goto B64ab99;
case 0x64ab9b:goto L64ab9b;
case 0x64ab9e:goto L64ab9e;
case 0x64aba0:c.instructions+=4;goto B64aba0;
case 0x64aba1:c.instructions+=3;goto B64aba1;
case 0x64aba4:c.instructions+=2;goto B64aba4;
case 0x64aba5:c.instructions+=1;goto B64aba5;
case 0x64abaa:goto L64abaa;
case 0x64abac:c.instructions+=2;goto B64abac;
case 0x64abaf:c.instructions+=1;goto B64abaf;
case 0x64abb1:goto L64abb1;
case 0x64abb4:c.instructions+=4;goto B64abb4;
case 0x64abb5:c.instructions+=3;goto B64abb5;
case 0x64abb8:c.instructions+=2;goto B64abb8;
case 0x64abbb:c.instructions+=1;goto B64abbb;
case 0x64abbd:goto L64abbd;
case 0x64abc0:c.instructions+=1;goto B64abc0;
case 0x64abc3:goto L64abc3;
case 0x64abc5:c.instructions+=1;goto B64abc5;
case 0x64abc7:goto L64abc7;
case 0x64abc9:c.instructions+=1;goto B64abc9;
case 0x64abcb:goto L64abcb;
case 0x64abcc:c.instructions+=2;goto B64abcc;
case 0x64abcf:c.instructions+=1;goto B64abcf;
case 0x64abd1:goto L64abd1;
case 0x64abd4:c.instructions+=4;goto B64abd4;
case 0x64abd7:c.instructions+=3;goto B64abd7;
case 0x64abdb:c.instructions+=2;goto B64abdb;
case 0x64abde:c.instructions+=1;goto B64abde;
case 0x64abe0:goto L64abe0;
case 0x64abe3:c.instructions+=1;goto B64abe3;
case 0x64abe5:goto L64abe5;
case 0x64abe7:c.instructions+=1;goto B64abe7;
case 0x64abea:goto L64abea;
case 0x64abec:c.instructions+=1;goto B64abec;
case 0x64abee:goto L64abee;
case 0x64abf0:goto L64abf0;
case 0x64abf1:c.instructions+=2;goto B64abf1;
case 0x64abf4:c.instructions+=1;goto B64abf4;
case 0x64abf6:goto L64abf6;
case 0x64abf7:c.instructions+=1;goto B64abf7;
case 0x64abf9:goto L64abf9;
case 0x64abfc:c.instructions+=4;goto B64abfc;
case 0x64ac00:c.instructions+=3;goto B64ac00;
case 0x64ac02:c.instructions+=2;goto B64ac02;
case 0x64ac05:c.instructions+=1;goto B64ac05;
case 0x64ac0b:goto L64ac0b;
case 0x64ac0c:c.instructions+=2;goto B64ac0c;
case 0x64ac0d:c.instructions+=1;goto B64ac0d;
case 0x64ac0e:goto L64ac0e;
case 0x64ac11:c.instructions+=2;goto B64ac11;
case 0x64ac12:c.instructions+=1;goto B64ac12;
case 0x64ac15:goto L64ac15;
case 0x64ac17:c.instructions+=7;goto B64ac17;
case 0x64ac18:c.instructions+=6;goto B64ac18;
case 0x64ac1a:c.instructions+=5;goto B64ac1a;
case 0x64ac1d:c.instructions+=4;goto B64ac1d;
case 0x64ac20:c.instructions+=3;goto B64ac20;
case 0x64ac24:c.instructions+=2;goto B64ac24;
case 0x64ac26:c.instructions+=1;goto B64ac26;
case 0x64ac2c:goto L64ac2c;
case 0x64ac2f:c.instructions+=10;goto B64ac2f;
case 0x64ac32:c.instructions+=9;goto B64ac32;
case 0x64ac33:c.instructions+=8;goto B64ac33;
case 0x64ac36:c.instructions+=7;goto B64ac36;
case 0x64ac38:c.instructions+=6;goto B64ac38;
case 0x64ac39:c.instructions+=5;goto B64ac39;
case 0x64ac3b:c.instructions+=4;goto B64ac3b;
case 0x64ac3e:c.instructions+=3;goto B64ac3e;
case 0x64ac41:c.instructions+=2;goto B64ac41;
case 0x64ac44:c.instructions+=1;goto B64ac44;
case 0x64ac46:goto L64ac46;
case 0x64ac49:goto L64ac49;
case 0x64ac4b:c.instructions+=2;goto B64ac4b;
case 0x64ac4e:c.instructions+=1;goto B64ac4e;
case 0x64ac50:goto L64ac50;
case 0x64ac53:goto L64ac53;
case 0x64ac56:c.instructions+=6;goto B64ac56;
case 0x64ac57:c.instructions+=5;goto B64ac57;
case 0x64ac59:c.instructions+=4;goto B64ac59;
case 0x64ac5a:c.instructions+=3;goto B64ac5a;
case 0x64ac5d:c.instructions+=2;goto B64ac5d;
case 0x64ac60:c.instructions+=1;goto B64ac60;
case 0x64ac62:goto L64ac62;
case 0x64ac64:goto L64ac64;
case 0x64ac66:c.instructions+=2;goto B64ac66;
case 0x64ac69:c.instructions+=1;goto B64ac69;
case 0x64ac6c:goto L64ac6c;
case 0x64ac6e:goto L64ac6e;
case 0x64ac72:c.instructions+=2;goto B64ac72;
case 0x64ac76:c.instructions+=1;goto B64ac76;
case 0x64ac78:goto L64ac78;
case 0x64ac7b:c.instructions+=1;goto B64ac7b;
case 0x64ac7e:goto L64ac7e;
case 0x64ac80:c.instructions+=2;goto B64ac80;
case 0x64ac83:c.instructions+=1;goto B64ac83;
case 0x64ac85:goto L64ac85;
case 0x64ac88:goto L64ac88;
case 0x64ac89:c.instructions+=2;goto B64ac89;
case 0x64ac8a:c.instructions+=1;goto B64ac8a;
case 0x64ac8f:goto L64ac8f;
case 0x64ac91:c.instructions+=2;goto B64ac91;
case 0x64ac94:c.instructions+=1;goto B64ac94;
case 0x64ac96:goto L64ac96;
case 0x64ac99:c.instructions+=4;goto B64ac99;
case 0x64ac9a:c.instructions+=3;goto B64ac9a;
case 0x64ac9d:c.instructions+=2;goto B64ac9d;
case 0x64aca0:c.instructions+=1;goto B64aca0;
case 0x64aca2:goto L64aca2;
case 0x64aca5:c.instructions+=1;goto B64aca5;
case 0x64aca8:goto L64aca8;
case 0x64acaa:c.instructions+=1;goto B64acaa;
case 0x64acac:goto L64acac;
case 0x64acae:c.instructions+=1;goto B64acae;
case 0x64acb0:goto L64acb0;
case 0x64acb1:c.instructions+=2;goto B64acb1;
case 0x64acb4:c.instructions+=1;goto B64acb4;
case 0x64acb6:goto L64acb6;
case 0x64acb9:c.instructions+=4;goto B64acb9;
case 0x64acbc:c.instructions+=3;goto B64acbc;
case 0x64acc0:c.instructions+=2;goto B64acc0;
case 0x64acc3:c.instructions+=1;goto B64acc3;
case 0x64acc5:goto L64acc5;
case 0x64acc8:c.instructions+=1;goto B64acc8;
case 0x64acca:goto L64acca;
case 0x64accc:c.instructions+=1;goto B64accc;
case 0x64accf:goto L64accf;
case 0x64acd1:c.instructions+=1;goto B64acd1;
case 0x64acd3:goto L64acd3;
case 0x64acd5:goto L64acd5;
case 0x64acd6:c.instructions+=2;goto B64acd6;
case 0x64acd9:c.instructions+=1;goto B64acd9;
case 0x64acdb:goto L64acdb;
case 0x64acdc:c.instructions+=1;goto B64acdc;
case 0x64acde:goto L64acde;
case 0x64ace1:c.instructions+=3;goto B64ace1;
case 0x64ace5:c.instructions+=2;goto B64ace5;
case 0x64ace9:c.instructions+=1;goto B64ace9;
case 0x64aceb:goto L64aceb;
case 0x64acec:c.instructions+=2;goto B64acec;
case 0x64aced:c.instructions+=1;goto B64aced;
case 0x64acee:goto L64acee;
case 0x64acf1:c.instructions+=2;goto B64acf1;
case 0x64acf2:c.instructions+=1;goto B64acf2;
case 0x64acf5:goto L64acf5;
case 0x64acf7:c.instructions+=8;goto B64acf7;
case 0x64acf8:c.instructions+=7;goto B64acf8;
case 0x64acfa:c.instructions+=6;goto B64acfa;
case 0x64acfd:c.instructions+=5;goto B64acfd;
case 0x64acfe:c.instructions+=4;goto B64acfe;
case 0x64ad00:c.instructions+=3;goto B64ad00;
case 0x64ad03:c.instructions+=2;goto B64ad03;
case 0x64ad06:c.instructions+=1;goto B64ad06;
case 0x64ad0c:goto L64ad0c;
case 0x64ad0f:c.instructions+=10;goto B64ad0f;
case 0x64ad12:c.instructions+=9;goto B64ad12;
case 0x64ad13:c.instructions+=8;goto B64ad13;
case 0x64ad16:c.instructions+=7;goto B64ad16;
case 0x64ad18:c.instructions+=6;goto B64ad18;
case 0x64ad19:c.instructions+=5;goto B64ad19;
case 0x64ad1b:c.instructions+=4;goto B64ad1b;
case 0x64ad1e:c.instructions+=3;goto B64ad1e;
case 0x64ad21:c.instructions+=2;goto B64ad21;
case 0x64ad24:c.instructions+=1;goto B64ad24;
case 0x64ad26:goto L64ad26;
case 0x64ad29:goto L64ad29;
case 0x64ad2b:c.instructions+=2;goto B64ad2b;
case 0x64ad2e:c.instructions+=1;goto B64ad2e;
case 0x64ad30:goto L64ad30;
case 0x64ad33:goto L64ad33;
case 0x64ad34:c.instructions+=1;goto B64ad34;
case 0x64ad37:goto L64ad37;
case 0x64ad3a:c.instructions+=2;goto B64ad3a;
case 0x64ad3c:c.instructions+=1;goto B64ad3c;
case 0x64ad3e:goto L64ad3e;
case 0x64ad40:c.instructions+=3;goto B64ad40;
case 0x64ad43:c.instructions+=2;goto B64ad43;
case 0x64ad46:c.instructions+=1;goto B64ad46;
case 0x64ad48:goto L64ad48;
case 0x64ad4a:c.instructions+=2;goto B64ad4a;
case 0x64ad4d:c.instructions+=1;goto B64ad4d;
case 0x64ad4f:goto L64ad4f;
case 0x64ad51:c.instructions+=1;goto B64ad51;
case 0x64ad54:goto L64ad54;
case 0x64ad57:c.instructions+=6;goto B64ad57;
case 0x64ad59:c.instructions+=5;goto B64ad59;
case 0x64ad5c:c.instructions+=4;goto B64ad5c;
case 0x64ad5d:c.instructions+=3;goto B64ad5d;
case 0x64ad60:c.instructions+=2;goto B64ad60;
case 0x64ad61:c.instructions+=1;goto B64ad61;
case 0x64ad66:goto L64ad66;
case 0x64ad68:c.instructions+=2;goto B64ad68;
case 0x64ad6b:c.instructions+=1;goto B64ad6b;
case 0x64ad6d:goto L64ad6d;
case 0x64ad70:c.instructions+=4;goto B64ad70;
case 0x64ad71:c.instructions+=3;goto B64ad71;
case 0x64ad74:c.instructions+=2;goto B64ad74;
case 0x64ad77:c.instructions+=1;goto B64ad77;
case 0x64ad79:goto L64ad79;
case 0x64ad7c:c.instructions+=1;goto B64ad7c;
case 0x64ad7f:goto L64ad7f;
case 0x64ad81:c.instructions+=1;goto B64ad81;
case 0x64ad83:goto L64ad83;
case 0x64ad85:c.instructions+=1;goto B64ad85;
case 0x64ad87:goto L64ad87;
case 0x64ad88:c.instructions+=2;goto B64ad88;
case 0x64ad8b:c.instructions+=1;goto B64ad8b;
case 0x64ad8d:goto L64ad8d;
case 0x64ad90:c.instructions+=4;goto B64ad90;
case 0x64ad91:c.instructions+=3;goto B64ad91;
case 0x64ad94:c.instructions+=2;goto B64ad94;
case 0x64ad97:c.instructions+=1;goto B64ad97;
case 0x64ad99:goto L64ad99;
case 0x64ad9b:c.instructions+=1;goto B64ad9b;
case 0x64ad9d:goto L64ad9d;
case 0x64ad9f:c.instructions+=1;goto B64ad9f;
case 0x64ada1:goto L64ada1;
case 0x64ada3:c.instructions+=1;goto B64ada3;
case 0x64ada5:goto L64ada5;
case 0x64ada7:goto L64ada7;
case 0x64ada8:c.instructions+=2;goto B64ada8;
case 0x64adab:c.instructions+=1;goto B64adab;
case 0x64adad:goto L64adad;
case 0x64adae:c.instructions+=1;goto B64adae;
case 0x64adb0:goto L64adb0;
case 0x64adb2:goto L64adb2;
case 0x64adb4:c.instructions+=1;goto B64adb4;
case 0x64adb6:goto L64adb6;
case 0x64adb8:goto L64adb8;
case 0x64adba:c.instructions+=1;goto B64adba;
case 0x64adbc:goto L64adbc;
case 0x64adbe:goto L64adbe;
case 0x64adbf:c.instructions+=2;goto B64adbf;
case 0x64adc2:c.instructions+=1;goto B64adc2;
case 0x64adc4:goto L64adc4;
case 0x64adc5:c.instructions+=1;goto B64adc5;
case 0x64adc7:goto L64adc7;
case 0x64adca:c.instructions+=4;goto B64adca;
case 0x64adce:c.instructions+=3;goto B64adce;
case 0x64add0:c.instructions+=2;goto B64add0;
case 0x64add3:c.instructions+=1;goto B64add3;
case 0x64add9:goto L64add9;
case 0x64adda:c.instructions+=1;goto B64adda;
case 0x64addb:goto L64addb;
case 0x64adde:c.instructions+=3;goto B64adde;
case 0x64addf:c.instructions+=2;goto B64addf;
case 0x64ade0:c.instructions+=1;goto B64ade0;
case 0x64ade3:goto L64ade3;
case 0x64ade5:c.instructions+=6;goto B64ade5;
case 0x64ade6:c.instructions+=5;goto B64ade6;
case 0x64ade8:c.instructions+=4;goto B64ade8;
case 0x64adeb:c.instructions+=3;goto B64adeb;
case 0x64adef:c.instructions+=2;goto B64adef;
case 0x64adf3:c.instructions+=1;goto B64adf3;
case 0x64adf9:goto L64adf9;
case 0x64adfc:c.instructions+=10;goto B64adfc;
case 0x64adff:c.instructions+=9;goto B64adff;
case 0x64ae00:c.instructions+=8;goto B64ae00;
case 0x64ae03:c.instructions+=7;goto B64ae03;
case 0x64ae05:c.instructions+=6;goto B64ae05;
case 0x64ae06:c.instructions+=5;goto B64ae06;
case 0x64ae08:c.instructions+=4;goto B64ae08;
case 0x64ae0b:c.instructions+=3;goto B64ae0b;
case 0x64ae0e:c.instructions+=2;goto B64ae0e;
case 0x64ae11:c.instructions+=1;goto B64ae11;
case 0x64ae13:goto L64ae13;
case 0x64ae16:goto L64ae16;
case 0x64ae18:c.instructions+=2;goto B64ae18;
case 0x64ae1b:c.instructions+=1;goto B64ae1b;
case 0x64ae1d:goto L64ae1d;
case 0x64ae20:goto L64ae20;
case 0x64ae21:c.instructions+=2;goto B64ae21;
case 0x64ae24:c.instructions+=1;goto B64ae24;
case 0x64ae25:goto L64ae25;
case 0x64ae28:c.instructions+=3;goto B64ae28;
case 0x64ae2a:c.instructions+=2;goto B64ae2a;
case 0x64ae2c:c.instructions+=1;goto B64ae2c;
case 0x64ae2e:goto L64ae2e;
case 0x64ae30:c.instructions+=2;goto B64ae30;
case 0x64ae32:c.instructions+=1;goto B64ae32;
case 0x64ae33:goto L64ae33;
case 0x64ae35:goto L64ae35;
case 0x64ae37:c.instructions+=3;goto B64ae37;
case 0x64ae3a:c.instructions+=2;goto B64ae3a;
case 0x64ae3d:c.instructions+=1;goto B64ae3d;
case 0x64ae3f:goto L64ae3f;
case 0x64ae41:c.instructions+=2;goto B64ae41;
case 0x64ae44:c.instructions+=1;goto B64ae44;
case 0x64ae46:goto L64ae46;
case 0x64ae49:goto L64ae49;
case 0x64ae4c:c.instructions+=5;goto B64ae4c;
case 0x64ae4e:c.instructions+=4;goto B64ae4e;
case 0x64ae50:c.instructions+=3;goto B64ae50;
case 0x64ae51:c.instructions+=2;goto B64ae51;
case 0x64ae52:c.instructions+=1;goto B64ae52;
case 0x64ae57:goto L64ae57;
case 0x64ae59:c.instructions+=2;goto B64ae59;
case 0x64ae5c:c.instructions+=1;goto B64ae5c;
case 0x64ae5e:goto L64ae5e;
case 0x64ae61:c.instructions+=4;goto B64ae61;
case 0x64ae62:c.instructions+=3;goto B64ae62;
case 0x64ae65:c.instructions+=2;goto B64ae65;
case 0x64ae68:c.instructions+=1;goto B64ae68;
case 0x64ae6a:goto L64ae6a;
case 0x64ae6d:goto L64ae6d;
case 0x64ae6f:c.instructions+=1;goto B64ae6f;
case 0x64ae71:goto L64ae71;
case 0x64ae73:c.instructions+=1;goto B64ae73;
case 0x64ae75:goto L64ae75;
case 0x64ae76:c.instructions+=2;goto B64ae76;
case 0x64ae79:c.instructions+=1;goto B64ae79;
case 0x64ae7b:goto L64ae7b;
case 0x64ae7e:c.instructions+=4;goto B64ae7e;
case 0x64ae7f:c.instructions+=3;goto B64ae7f;
case 0x64ae82:c.instructions+=2;goto B64ae82;
case 0x64ae85:c.instructions+=1;goto B64ae85;
case 0x64ae87:goto L64ae87;
case 0x64ae8a:goto L64ae8a;
case 0x64ae8c:c.instructions+=1;goto B64ae8c;
case 0x64ae8e:goto L64ae8e;
case 0x64ae90:c.instructions+=1;goto B64ae90;
case 0x64ae92:goto L64ae92;
case 0x64ae94:c.instructions+=1;goto B64ae94;
case 0x64ae96:goto L64ae96;
case 0x64ae98:goto L64ae98;
case 0x64ae99:c.instructions+=2;goto B64ae99;
case 0x64ae9c:c.instructions+=1;goto B64ae9c;
case 0x64ae9e:goto L64ae9e;
case 0x64ae9f:c.instructions+=1;goto B64ae9f;
case 0x64aea1:goto L64aea1;
case 0x64aea3:goto L64aea3;
case 0x64aea5:c.instructions+=1;goto B64aea5;
case 0x64aea7:goto L64aea7;
case 0x64aea9:goto L64aea9;
case 0x64aeab:c.instructions+=1;goto B64aeab;
case 0x64aead:goto L64aead;
case 0x64aeaf:goto L64aeaf;
case 0x64aeb0:c.instructions+=2;goto B64aeb0;
case 0x64aeb3:c.instructions+=1;goto B64aeb3;
case 0x64aeb5:goto L64aeb5;
case 0x64aeb6:c.instructions+=1;goto B64aeb6;
case 0x64aeb8:goto L64aeb8;
case 0x64aebb:c.instructions+=3;goto B64aebb;
case 0x64aebf:c.instructions+=2;goto B64aebf;
case 0x64aec3:c.instructions+=1;goto B64aec3;
case 0x64aec9:goto L64aec9;
case 0x64aeca:c.instructions+=2;goto B64aeca;
case 0x64aecb:c.instructions+=1;goto B64aecb;
case 0x64aecc:goto L64aecc;
case 0x64aecf:c.instructions+=2;goto B64aecf;
case 0x64aed0:c.instructions+=1;goto B64aed0;
case 0x64aed3:goto L64aed3;
case 0x64aed5:c.instructions+=8;goto B64aed5;
case 0x64aed6:c.instructions+=7;goto B64aed6;
case 0x64aed8:c.instructions+=6;goto B64aed8;
case 0x64aedb:c.instructions+=5;goto B64aedb;
case 0x64aedc:c.instructions+=4;goto B64aedc;
case 0x64aede:c.instructions+=3;goto B64aede;
case 0x64aee1:c.instructions+=2;goto B64aee1;
case 0x64aee4:c.instructions+=1;goto B64aee4;
case 0x64aeea:goto L64aeea;
case 0x64aeed:c.instructions+=10;goto B64aeed;
case 0x64aef0:c.instructions+=9;goto B64aef0;
case 0x64aef1:c.instructions+=8;goto B64aef1;
case 0x64aef4:c.instructions+=7;goto B64aef4;
case 0x64aef6:c.instructions+=6;goto B64aef6;
case 0x64aef7:c.instructions+=5;goto B64aef7;
case 0x64aef9:c.instructions+=4;goto B64aef9;
case 0x64aefc:c.instructions+=3;goto B64aefc;
case 0x64aeff:c.instructions+=2;goto B64aeff;
case 0x64af02:c.instructions+=1;goto B64af02;
case 0x64af04:goto L64af04;
case 0x64af07:goto L64af07;
case 0x64af09:c.instructions+=2;goto B64af09;
case 0x64af0c:c.instructions+=1;goto B64af0c;
case 0x64af0e:goto L64af0e;
case 0x64af11:goto L64af11;
case 0x64af12:c.instructions+=1;goto B64af12;
case 0x64af15:goto L64af15;
case 0x64af18:c.instructions+=2;goto B64af18;
case 0x64af1a:c.instructions+=1;goto B64af1a;
case 0x64af1c:goto L64af1c;
case 0x64af1e:c.instructions+=3;goto B64af1e;
case 0x64af21:c.instructions+=2;goto B64af21;
case 0x64af24:c.instructions+=1;goto B64af24;
case 0x64af26:goto L64af26;
case 0x64af28:c.instructions+=2;goto B64af28;
case 0x64af2b:c.instructions+=1;goto B64af2b;
case 0x64af2d:goto L64af2d;
case 0x64af2f:c.instructions+=1;goto B64af2f;
case 0x64af32:goto L64af32;
case 0x64af35:c.instructions+=6;goto B64af35;
case 0x64af37:c.instructions+=5;goto B64af37;
case 0x64af3a:c.instructions+=4;goto B64af3a;
case 0x64af3b:c.instructions+=3;goto B64af3b;
case 0x64af3e:c.instructions+=2;goto B64af3e;
case 0x64af3f:c.instructions+=1;goto B64af3f;
case 0x64af44:goto L64af44;
case 0x64af46:c.instructions+=2;goto B64af46;
case 0x64af49:c.instructions+=1;goto B64af49;
case 0x64af4b:goto L64af4b;
case 0x64af4e:c.instructions+=4;goto B64af4e;
case 0x64af4f:c.instructions+=3;goto B64af4f;
case 0x64af52:c.instructions+=2;goto B64af52;
case 0x64af55:c.instructions+=1;goto B64af55;
case 0x64af57:goto L64af57;
case 0x64af5a:c.instructions+=1;goto B64af5a;
case 0x64af5d:goto L64af5d;
case 0x64af5f:c.instructions+=1;goto B64af5f;
case 0x64af61:goto L64af61;
case 0x64af63:c.instructions+=1;goto B64af63;
case 0x64af65:goto L64af65;
case 0x64af66:c.instructions+=2;goto B64af66;
case 0x64af69:c.instructions+=1;goto B64af69;
case 0x64af6b:goto L64af6b;
case 0x64af6e:c.instructions+=4;goto B64af6e;
case 0x64af6f:c.instructions+=3;goto B64af6f;
case 0x64af72:c.instructions+=2;goto B64af72;
case 0x64af75:c.instructions+=1;goto B64af75;
case 0x64af77:goto L64af77;
case 0x64af79:c.instructions+=1;goto B64af79;
case 0x64af7b:goto L64af7b;
case 0x64af7d:c.instructions+=1;goto B64af7d;
case 0x64af7f:goto L64af7f;
case 0x64af81:c.instructions+=1;goto B64af81;
case 0x64af83:goto L64af83;
case 0x64af85:goto L64af85;
case 0x64af86:c.instructions+=2;goto B64af86;
case 0x64af89:c.instructions+=1;goto B64af89;
case 0x64af8b:goto L64af8b;
case 0x64af8c:c.instructions+=1;goto B64af8c;
case 0x64af8e:goto L64af8e;
case 0x64af90:goto L64af90;
case 0x64af92:c.instructions+=1;goto B64af92;
case 0x64af94:goto L64af94;
case 0x64af96:goto L64af96;
case 0x64af98:c.instructions+=1;goto B64af98;
case 0x64af9a:goto L64af9a;
case 0x64af9c:goto L64af9c;
case 0x64af9d:c.instructions+=2;goto B64af9d;
case 0x64afa0:c.instructions+=1;goto B64afa0;
case 0x64afa2:goto L64afa2;
case 0x64afa3:c.instructions+=1;goto B64afa3;
case 0x64afa5:goto L64afa5;
case 0x64afa8:c.instructions+=4;goto B64afa8;
case 0x64afac:c.instructions+=3;goto B64afac;
case 0x64afae:c.instructions+=2;goto B64afae;
case 0x64afb1:c.instructions+=1;goto B64afb1;
case 0x64afb7:goto L64afb7;
case 0x64afb8:c.instructions+=1;goto B64afb8;
case 0x64afb9:goto L64afb9;
case 0x64afbc:c.instructions+=3;goto B64afbc;
case 0x64afbd:c.instructions+=2;goto B64afbd;
case 0x64afbe:c.instructions+=1;goto B64afbe;
case 0x64afc1:goto L64afc1;
case 0x64afc3:c.instructions+=6;goto B64afc3;
case 0x64afc4:c.instructions+=5;goto B64afc4;
case 0x64afc6:c.instructions+=4;goto B64afc6;
case 0x64afc9:c.instructions+=3;goto B64afc9;
case 0x64afcd:c.instructions+=2;goto B64afcd;
case 0x64afd1:c.instructions+=1;goto B64afd1;
case 0x64afd7:goto L64afd7;
case 0x64afda:c.instructions+=10;goto B64afda;
case 0x64afdd:c.instructions+=9;goto B64afdd;
case 0x64afde:c.instructions+=8;goto B64afde;
case 0x64afe1:c.instructions+=7;goto B64afe1;
case 0x64afe3:c.instructions+=6;goto B64afe3;
case 0x64afe4:c.instructions+=5;goto B64afe4;
case 0x64afe6:c.instructions+=4;goto B64afe6;
case 0x64afe9:c.instructions+=3;goto B64afe9;
case 0x64afec:c.instructions+=2;goto B64afec;
case 0x64afef:c.instructions+=1;goto B64afef;
case 0x64aff1:goto L64aff1;
case 0x64aff4:goto L64aff4;
case 0x64aff6:c.instructions+=2;goto B64aff6;
case 0x64aff9:c.instructions+=1;goto B64aff9;
case 0x64affb:goto L64affb;
case 0x64affe:goto L64affe;
case 0x64afff:c.instructions+=1;goto B64afff;
default:missing_instruction(c.pc);}
B64a001:L64a001:{c.instructions+=2;NFSU2_TR(0x64a001);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a002:{NFSU2_TR(0x64a002);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a005ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B64a005:L64a005:{c.instructions+=6;NFSU2_TR(0x64a005);
__builtin_memmove((R+28),(R+0),4);
}
B64a007:{NFSU2_TR(0x64a007);
__builtin_memmove((R+4),(R+24),4);
}
B64a009:{NFSU2_TR(0x64a009);
__builtin_memmove((R+8),(R+4),4);
}
B64a00b:{NFSU2_TR(0x64a00b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B64a00e:{NFSU2_TR(0x64a00e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64a010:{NFSU2_TR(0x64a010);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a013:L64a013:{c.instructions+=1;NFSU2_TR(0x64a013);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L64a015;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a013u);}goto L64a013;}
}
B64a015:L64a015:{c.instructions+=2;NFSU2_TR(0x64a015);
__builtin_memmove((R+4),(R+8),4);
}
B64a017:{NFSU2_TR(0x64a017);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B64a01a:L64a01a:{c.instructions+=1;NFSU2_TR(0x64a01a);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L64a01c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a01au);}goto L64a01a;}
}
B64a01c:L64a01c:{c.instructions+=10;NFSU2_TR(0x64a01c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a01f:{NFSU2_TR(0x64a01f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a022:{NFSU2_TR(0x64a022);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64a026:{NFSU2_TR(0x64a026);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B64a028:{NFSU2_TR(0x64a028);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a02b:{NFSU2_TR(0x64a02b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B64a02e:{NFSU2_TR(0x64a02e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a02f:{NFSU2_TR(0x64a02f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a032:{NFSU2_TR(0x64a032);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a035:{NFSU2_TR(0x64a035);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a03aull));
TAIL_STATIC(0x75c840u,75c);
}
B64a03a:L64a03a:{c.instructions+=5;NFSU2_TR(0x64a03a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a03d:{NFSU2_TR(0x64a03d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64a03f:{NFSU2_TR(0x64a03f);
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
B64a042:{NFSU2_TR(0x64a042);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a043:{NFSU2_TR(0x64a043);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a046ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B64a046:L64a046:{c.instructions+=5;NFSU2_TR(0x64a046);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a049:{NFSU2_TR(0x64a049);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a04c:{NFSU2_TR(0x64a04c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64a04e:{NFSU2_TR(0x64a04e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a04f:{NFSU2_TR(0x64a04f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a052ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B64a052:L64a052:{c.instructions+=7;NFSU2_TR(0x64a052);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a055:{NFSU2_TR(0x64a055);
__builtin_memmove((R+24),(R+0),4);
}
B64a057:{NFSU2_TR(0x64a057);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a05a:{NFSU2_TR(0x64a05a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B64a05d:{NFSU2_TR(0x64a05d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a060:{NFSU2_TR(0x64a060);
__builtin_memmove((R+4),(R+0),4);
}
B64a062:{NFSU2_TR(0x64a062);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B64a065:L64a065:{c.instructions+=1;NFSU2_TR(0x64a065);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L64a067;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a065u);}goto L64a065;}
}
B64a067:L64a067:{c.instructions+=2;NFSU2_TR(0x64a067);
__builtin_memmove((R+4),(R+0),4);
}
B64a069:{NFSU2_TR(0x64a069);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B64a06c:L64a06c:{c.instructions+=1;NFSU2_TR(0x64a06c);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L64a06e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a06cu);}goto L64a06c;}
}
B64a06e:L64a06e:{c.instructions+=3;NFSU2_TR(0x64a06e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a071:{NFSU2_TR(0x64a071);
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
B64a073:{NFSU2_TR(0x64a073);
if(r1(R+518)){{goto L64a07f;}}
}
B64a075:L64a075:{c.instructions+=3;NFSU2_TR(0x64a075);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64a077:{NFSU2_TR(0x64a077);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a078:{NFSU2_TR(0x64a078);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a07bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B64a07b:L64a07b:{c.instructions+=1;NFSU2_TR(0x64a07b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64a07f:L64a07f:{c.instructions+=3;NFSU2_TR(0x64a07f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a082:{NFSU2_TR(0x64a082);
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
B64a084:{NFSU2_TR(0x64a084);
if(r1(R+518)){{goto L64a08c;}}
}
B64a086:L64a086:{c.instructions+=3;NFSU2_TR(0x64a086);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64a088:{NFSU2_TR(0x64a088);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a089:{NFSU2_TR(0x64a089);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a08cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B64a08c:L64a08c:{c.instructions+=8;NFSU2_TR(0x64a08c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a08f:{NFSU2_TR(0x64a08f);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64a093:{NFSU2_TR(0x64a093);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a096:{NFSU2_TR(0x64a096);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64a09d:{NFSU2_TR(0x64a09d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a0a0:{NFSU2_TR(0x64a0a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64a0a2:{NFSU2_TR(0x64a0a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a0a3:{NFSU2_TR(0x64a0a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a0a6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B64a0a6:L64a0a6:{c.instructions+=5;NFSU2_TR(0x64a0a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a0a9:{NFSU2_TR(0x64a0a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a0ac:{NFSU2_TR(0x64a0ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64a0ae:{NFSU2_TR(0x64a0ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a0af:{NFSU2_TR(0x64a0af);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a0b2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B64a0b2:L64a0b2:{c.instructions+=8;NFSU2_TR(0x64a0b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64a0b5:{NFSU2_TR(0x64a0b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a0b8:{NFSU2_TR(0x64a0b8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a0ba:{NFSU2_TR(0x64a0ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a0bd:{NFSU2_TR(0x64a0bd);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a0bf:{NFSU2_TR(0x64a0bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64a0c2:{NFSU2_TR(0x64a0c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a0c3:{NFSU2_TR(0x64a0c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a0c8ull));
TAIL_STATIC(0x647827u,647);
}
B64a0c8:L64a0c8:{c.instructions+=3;NFSU2_TR(0x64a0c8);
__builtin_memmove((R+28),(R+0),4);
}
B64a0ca:{NFSU2_TR(0x64a0ca);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64a0cc:{NFSU2_TR(0x64a0cc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64a371;}}
}
B64a0d2:L64a0d2:{c.instructions+=6;NFSU2_TR(0x64a0d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a0d5:{NFSU2_TR(0x64a0d5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a0d7:{NFSU2_TR(0x64a0d7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a0d9:{NFSU2_TR(0x64a0d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64a0dc:{NFSU2_TR(0x64a0dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a0dd:{NFSU2_TR(0x64a0dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a0e2ull));
TAIL_STATIC(0x647827u,647);
}
B64a0e2:L64a0e2:{c.instructions+=3;NFSU2_TR(0x64a0e2);
__builtin_memmove((R+28),(R+0),4);
}
B64a0e4:{NFSU2_TR(0x64a0e4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64a0e6:{NFSU2_TR(0x64a0e6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64a371;}}
}
B64a0ec:L64a0ec:{c.instructions+=6;NFSU2_TR(0x64a0ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a0ef:{NFSU2_TR(0x64a0ef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a0f1:{NFSU2_TR(0x64a0f1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a0f3:{NFSU2_TR(0x64a0f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B64a0f6:{NFSU2_TR(0x64a0f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a0f7:{NFSU2_TR(0x64a0f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a0fcull));
TAIL_STATIC(0x647827u,647);
}
B64a0fc:L64a0fc:{c.instructions+=3;NFSU2_TR(0x64a0fc);
__builtin_memmove((R+28),(R+0),4);
}
B64a0fe:{NFSU2_TR(0x64a0fe);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64a100:{NFSU2_TR(0x64a100);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64a371;}}
}
B64a106:L64a106:{c.instructions+=6;NFSU2_TR(0x64a106);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a109:{NFSU2_TR(0x64a109);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a10b:{NFSU2_TR(0x64a10b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a10d:{NFSU2_TR(0x64a10d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64a110:{NFSU2_TR(0x64a110);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a111:{NFSU2_TR(0x64a111);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a116ull));
TAIL_STATIC(0x647827u,647);
}
B64a116:L64a116:{c.instructions+=3;NFSU2_TR(0x64a116);
__builtin_memmove((R+28),(R+0),4);
}
B64a118:{NFSU2_TR(0x64a118);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64a11a:{NFSU2_TR(0x64a11a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64a371;}}
}
B64a120:L64a120:{c.instructions+=6;NFSU2_TR(0x64a120);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a123:{NFSU2_TR(0x64a123);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a125:{NFSU2_TR(0x64a125);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a127:{NFSU2_TR(0x64a127);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B64a12a:{NFSU2_TR(0x64a12a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a12b:{NFSU2_TR(0x64a12b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a130ull));
TAIL_STATIC(0x647827u,647);
}
B64a130:L64a130:{c.instructions+=3;NFSU2_TR(0x64a130);
__builtin_memmove((R+28),(R+0),4);
}
B64a132:{NFSU2_TR(0x64a132);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64a134:{NFSU2_TR(0x64a134);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64a371;}}
}
B64a13a:L64a13a:{c.instructions+=6;NFSU2_TR(0x64a13a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a13d:{NFSU2_TR(0x64a13d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a13f:{NFSU2_TR(0x64a13f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a141:{NFSU2_TR(0x64a141);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B64a144:{NFSU2_TR(0x64a144);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a145:{NFSU2_TR(0x64a145);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a14aull));
TAIL_STATIC(0x647827u,647);
}
B64a14a:L64a14a:{c.instructions+=3;NFSU2_TR(0x64a14a);
__builtin_memmove((R+28),(R+0),4);
}
B64a14c:{NFSU2_TR(0x64a14c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64a14e:{NFSU2_TR(0x64a14e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64a371;}}
}
B64a154:L64a154:{c.instructions+=5;NFSU2_TR(0x64a154);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a157:{NFSU2_TR(0x64a157);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a159:{NFSU2_TR(0x64a159);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a15c:{NFSU2_TR(0x64a15c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a15f:{NFSU2_TR(0x64a15f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a164ull));
TAIL_STATIC(0x647827u,647);
}
B64a164:L64a164:{c.instructions+=3;NFSU2_TR(0x64a164);
__builtin_memmove((R+28),(R+0),4);
}
B64a166:{NFSU2_TR(0x64a166);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64a168:{NFSU2_TR(0x64a168);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64a371;}}
}
B64a16e:L64a16e:{c.instructions+=4;NFSU2_TR(0x64a16e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a171:{NFSU2_TR(0x64a171);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64a174:{NFSU2_TR(0x64a174);
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
B64a176:{NFSU2_TR(0x64a176);
if(r1(R+518)){{goto L64a182;}}
}
B64a178:L64a178:{c.instructions+=3;NFSU2_TR(0x64a178);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64a17a:{NFSU2_TR(0x64a17a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a17b:{NFSU2_TR(0x64a17b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a17eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B64a17e:L64a17e:{c.instructions+=1;NFSU2_TR(0x64a17e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64a182:L64a182:{c.instructions+=2;NFSU2_TR(0x64a182);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64a188:{NFSU2_TR(0x64a188);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a18dull));
TAIL_STATIC(0x675379u,675);
}
B64a18d:L64a18d:{c.instructions+=4;NFSU2_TR(0x64a18d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64a190:{NFSU2_TR(0x64a190);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64a192:{NFSU2_TR(0x64a192);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a195:{NFSU2_TR(0x64a195);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x649de4u,649);}
}
B64a19b:L64a19b:{c.instructions+=6;NFSU2_TR(0x64a19b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a19e:{NFSU2_TR(0x64a19e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64a1a2:{NFSU2_TR(0x64a1a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B64a1a5:{NFSU2_TR(0x64a1a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a1a6:{NFSU2_TR(0x64a1a6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a1a8:{NFSU2_TR(0x64a1a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a1adull));
TAIL_STATIC(0x6479dbu,647);
}
B64a1ad:L64a1ad:{c.instructions+=3;NFSU2_TR(0x64a1ad);
__builtin_memmove((R+28),(R+0),4);
}
B64a1af:{NFSU2_TR(0x64a1af);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64a1b1:{NFSU2_TR(0x64a1b1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64a2bf;}}
}
B64a1b7:L64a1b7:{c.instructions+=3;NFSU2_TR(0x64a1b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64a1ba:{NFSU2_TR(0x64a1ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a1bb:{NFSU2_TR(0x64a1bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a1c0ull));
TAIL_STATIC(0x575620u,575);
}
B64a1c0:L64a1c0:{c.instructions+=4;NFSU2_TR(0x64a1c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64a1c2:{NFSU2_TR(0x64a1c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64a1c3:{NFSU2_TR(0x64a1c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a1c6:{NFSU2_TR(0x64a1c6);
if(r1(R+518)){{goto L64a2a4;}}
}
B64a1cc:L64a1cc:{c.instructions+=4;NFSU2_TR(0x64a1cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a1cf:{NFSU2_TR(0x64a1cf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a1d1:{NFSU2_TR(0x64a1d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a1d2:{NFSU2_TR(0x64a1d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a1d7ull));
TAIL_STATIC(0x6479dbu,647);
}
B64a1d7:L64a1d7:{c.instructions+=3;NFSU2_TR(0x64a1d7);
__builtin_memmove((R+28),(R+0),4);
}
B64a1d9:{NFSU2_TR(0x64a1d9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64a1db:{NFSU2_TR(0x64a1db);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64a2bf;}}
}
B64a1e1:L64a1e1:{c.instructions+=7;NFSU2_TR(0x64a1e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x338ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a1e7:{NFSU2_TR(0x64a1e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x340ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B64a1ed:{NFSU2_TR(0x64a1ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64a1f0:{NFSU2_TR(0x64a1f0);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B64a1f4:{NFSU2_TR(0x64a1f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a1f5:{NFSU2_TR(0x64a1f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a1f6:{NFSU2_TR(0x64a1f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a1fbull));
TAIL_STATIC(0x670f08u,670);
}
B64a1fb:L64a1fb:{c.instructions+=4;NFSU2_TR(0x64a1fb);
__builtin_memmove((R+28),(R+0),4);
}
B64a1fd:{NFSU2_TR(0x64a1fd);
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
B64a1ff:{NFSU2_TR(0x64a1ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a202:{NFSU2_TR(0x64a202);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64a2bf;}}
}
B64a208:L64a208:{c.instructions+=4;NFSU2_TR(0x64a208);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a20b:{NFSU2_TR(0x64a20b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64a20d:{NFSU2_TR(0x64a20d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a20e:{NFSU2_TR(0x64a20e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a211ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B64a211:L64a211:{c.instructions+=10;NFSU2_TR(0x64a211);
u8 U[4];
w4(U+0,u32(0xfeff0901ull));
s4(u32(r4(R+0)),r4(U+0));
}
B64a217:{NFSU2_TR(0x64a217);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x340ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a21d:{NFSU2_TR(0x64a21d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B64a220:{NFSU2_TR(0x64a220);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64a222:{NFSU2_TR(0x64a222);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x340ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a228:{NFSU2_TR(0x64a228);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64a22e:{NFSU2_TR(0x64a22e);
__builtin_memmove((R+8),(R+4),4);
}
B64a230:{NFSU2_TR(0x64a230);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B64a233:{NFSU2_TR(0x64a233);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B64a236:{NFSU2_TR(0x64a236);
__builtin_memmove((R+28),(R+0),4);
}
B64a238:L64a238:{c.instructions+=1;NFSU2_TR(0x64a238);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L64a23a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a238u);}goto L64a238;}
}
B64a23a:L64a23a:{c.instructions+=2;NFSU2_TR(0x64a23a);
__builtin_memmove((R+4),(R+8),4);
}
B64a23c:{NFSU2_TR(0x64a23c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B64a23f:L64a23f:{c.instructions+=1;NFSU2_TR(0x64a23f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L64a241;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a23fu);}goto L64a23f;}
}
B64a241:L64a241:{c.instructions+=6;NFSU2_TR(0x64a241);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x340ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B64a247:{NFSU2_TR(0x64a247);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x338ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a24d:{NFSU2_TR(0x64a24d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x33cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64a253:{NFSU2_TR(0x64a253);
__builtin_memmove((R+8),(R+4),4);
}
B64a255:{NFSU2_TR(0x64a255);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B64a258:{NFSU2_TR(0x64a258);
__builtin_memmove((R+28),(R+0),4);
}
B64a25a:L64a25a:{c.instructions+=1;NFSU2_TR(0x64a25a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L64a25c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a25au);}goto L64a25a;}
}
B64a25c:L64a25c:{c.instructions+=2;NFSU2_TR(0x64a25c);
__builtin_memmove((R+4),(R+8),4);
}
B64a25e:{NFSU2_TR(0x64a25e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B64a261:L64a261:{c.instructions+=1;NFSU2_TR(0x64a261);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L64a263;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a261u);}goto L64a261;}
}
B64a263:L64a263:{c.instructions+=11;NFSU2_TR(0x64a263);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x338ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B64a269:{NFSU2_TR(0x64a269);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a26c:{NFSU2_TR(0x64a26c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64a26f:{NFSU2_TR(0x64a26f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64a271:{NFSU2_TR(0x64a271);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a274:{NFSU2_TR(0x64a274);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B64a277:{NFSU2_TR(0x64a277);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64a279:{NFSU2_TR(0x64a279);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a27c:{NFSU2_TR(0x64a27c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64a27f:{NFSU2_TR(0x64a27f);
__builtin_memmove((R+0),(R+4),4);
}
B64a281:{NFSU2_TR(0x64a281);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B64a284:L64a284:{c.instructions+=1;NFSU2_TR(0x64a284);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L64a286;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a284u);}goto L64a284;}
}
B64a286:L64a286:{c.instructions+=3;NFSU2_TR(0x64a286);
__builtin_memmove((R+4),(R+0),4);
}
B64a288:{NFSU2_TR(0x64a288);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B64a28b:{NFSU2_TR(0x64a28b);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B64a28f:L64a28f:{c.instructions+=1;NFSU2_TR(0x64a28f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L64a291;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a28fu);}goto L64a28f;}
}
B64a291:L64a291:{c.instructions+=1;NFSU2_TR(0x64a291);
if(r1(R+518)){{goto L64a2a1;}}
}
B64a293:L64a293:{c.instructions+=6;NFSU2_TR(0x64a293);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a296:{NFSU2_TR(0x64a296);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a299:{NFSU2_TR(0x64a299);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B64a29b:{NFSU2_TR(0x64a29b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64a29d:{NFSU2_TR(0x64a29d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a29e:{NFSU2_TR(0x64a29e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a2a1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B64a2a1:L64a2a1:{c.instructions+=1;NFSU2_TR(0x64a2a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64a2a4:L64a2a4:{c.instructions+=3;NFSU2_TR(0x64a2a4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B64a2a6:{NFSU2_TR(0x64a2a6);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B64a2a8:{NFSU2_TR(0x64a2a8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64a2bf;}}
}
B64a2aa:L64a2aa:{c.instructions+=2;NFSU2_TR(0x64a2aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a2ad:{NFSU2_TR(0x64a2ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a2b2ull));
TAIL_STATIC(0x642b3fu,642);
}
B64a2b2:L64a2b2:{c.instructions+=2;NFSU2_TR(0x64a2b2);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64a2b4:{NFSU2_TR(0x64a2b4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64a2bb;}}
}
B64a2b6:L64a2b6:{c.instructions+=1;NFSU2_TR(0x64a2b6);
w4(R+28,u32(0x88760b59ull));
}
B64a2bb:L64a2bb:{c.instructions+=2;NFSU2_TR(0x64a2bb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64a2bd:{NFSU2_TR(0x64a2bd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L64a2d3;}}
}
B64a2bf:L64a2bf:{c.instructions+=6;NFSU2_TR(0x64a2bf);
u8 U[4];
w4(U+0,u32(0x7af58cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a2c4:{NFSU2_TR(0x64a2c4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B64a2c6:{NFSU2_TR(0x64a2c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a2c7:{NFSU2_TR(0x64a2c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a2c8:{NFSU2_TR(0x64a2c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a2cb:{NFSU2_TR(0x64a2cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a2d0ull));
TAIL_STATIC(0x64307cu,643);
}
B64a2d0:L64a2d0:{c.instructions+=1;NFSU2_TR(0x64a2d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64a2d3:L64a2d3:{c.instructions+=2;NFSU2_TR(0x64a2d3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64a2d6:{NFSU2_TR(0x64a2d6);
if(r1(R+518)){{goto L64a2e3;}}
}
B64a2d8:L64a2d8:{c.instructions+=3;NFSU2_TR(0x64a2d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a2db:{NFSU2_TR(0x64a2db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a2de:{NFSU2_TR(0x64a2de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a2e3ull));
TAIL_STATIC(0x642ad1u,642);
}
B64a2e3:L64a2e3:{c.instructions+=2;NFSU2_TR(0x64a2e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64a2e6:{NFSU2_TR(0x64a2e6);
if(r1(R+518)){{goto L64a2f1;}}
}
B64a2e8:L64a2e8:{c.instructions+=2;NFSU2_TR(0x64a2e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a2eb:{NFSU2_TR(0x64a2eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a2f0ull));
TAIL_STATIC(0x575630u,575);
}
B64a2f0:L64a2f0:{c.instructions+=1;NFSU2_TR(0x64a2f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64a2f1:L64a2f1:{c.instructions+=3;NFSU2_TR(0x64a2f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a2f4:{NFSU2_TR(0x64a2f4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64a2f6:{NFSU2_TR(0x64a2f6);
if(r1(R+518)){{goto L64a2ff;}}
}
B64a2f8:L64a2f8:{c.instructions+=2;NFSU2_TR(0x64a2f8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a2fa:{NFSU2_TR(0x64a2fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a2ffull));
TAIL_STATIC(0x647806u,647);
}
B64a2ff:L64a2ff:{c.instructions+=3;NFSU2_TR(0x64a2ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a302:{NFSU2_TR(0x64a302);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B64a304:{NFSU2_TR(0x64a304);
if(r1(R+518)){{goto L64a30f;}}
}
B64a306:L64a306:{c.instructions+=3;NFSU2_TR(0x64a306);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64a308:{NFSU2_TR(0x64a308);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a309:{NFSU2_TR(0x64a309);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a30cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B64a30c:L64a30c:{c.instructions+=1;NFSU2_TR(0x64a30c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a30f:L64a30f:{c.instructions+=3;NFSU2_TR(0x64a30f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a312:{NFSU2_TR(0x64a312);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B64a314:{NFSU2_TR(0x64a314);
if(r1(R+518)){{goto L64a31f;}}
}
B64a316:L64a316:{c.instructions+=3;NFSU2_TR(0x64a316);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64a318:{NFSU2_TR(0x64a318);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a319:{NFSU2_TR(0x64a319);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a31cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B64a31c:L64a31c:{c.instructions+=1;NFSU2_TR(0x64a31c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a31f:L64a31f:{c.instructions+=3;NFSU2_TR(0x64a31f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a322:{NFSU2_TR(0x64a322);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B64a324:{NFSU2_TR(0x64a324);
if(r1(R+518)){{goto L64a32f;}}
}
B64a326:L64a326:{c.instructions+=3;NFSU2_TR(0x64a326);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64a328:{NFSU2_TR(0x64a328);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a329:{NFSU2_TR(0x64a329);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a32cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B64a32c:L64a32c:{c.instructions+=1;NFSU2_TR(0x64a32c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a32f:L64a32f:{c.instructions+=2;NFSU2_TR(0x64a32f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a332:{NFSU2_TR(0x64a332);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a337ull));
TAIL_STATIC(0x64547fu,645);
}
B64a337:L64a337:{c.instructions+=6;NFSU2_TR(0x64a337);
__builtin_memmove((R+0),(R+28),4);
}
B64a339:{NFSU2_TR(0x64a339);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64a33a:{NFSU2_TR(0x64a33a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64a33b:{NFSU2_TR(0x64a33b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64a33c:{NFSU2_TR(0x64a33c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64a33d:{NFSU2_TR(0x64a33d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64a340:L64a340:{c.instructions+=5;NFSU2_TR(0x64a340);
u8 U[4];
w4(U+0,u32(0x7af548ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a345:{NFSU2_TR(0x64a345);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a347:{NFSU2_TR(0x64a347);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B64a34a:{NFSU2_TR(0x64a34a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a34b:{NFSU2_TR(0x64a34b);
{goto L64a38f;}
}
B64a34d:L64a34d:{c.instructions+=2;NFSU2_TR(0x64a34d);
u8 U[4];
w4(U+0,u32(0x7af4e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a352:{NFSU2_TR(0x64a352);
{goto L64a386;}
}
B64a354:L64a354:{c.instructions+=2;NFSU2_TR(0x64a354);
u8 U[4];
w4(U+0,u32(0x7af498ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a359:{NFSU2_TR(0x64a359);
{goto L64a386;}
}
B64a35b:L64a35b:{c.instructions+=6;NFSU2_TR(0x64a35b);
u8 U[4];
w4(U+0,u32(0x7af448ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a360:{NFSU2_TR(0x64a360);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a362:{NFSU2_TR(0x64a362);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B64a365:{NFSU2_TR(0x64a365);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a366:{NFSU2_TR(0x64a366);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a369:{NFSU2_TR(0x64a369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a36eull));
TAIL_STATIC(0x64307cu,643);
}
B64a36e:L64a36e:{c.instructions+=1;NFSU2_TR(0x64a36e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64a371:L64a371:{c.instructions+=2;NFSU2_TR(0x64a371);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64a377:{NFSU2_TR(0x64a377);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a37cull));
TAIL_STATIC(0x675379u,675);
}
B64a37c:L64a37c:{c.instructions+=1;NFSU2_TR(0x64a37c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a2a4u);}goto L64a2a4;}
}
B64a381:L64a381:{c.instructions+=1;NFSU2_TR(0x64a381);
u8 U[4];
w4(U+0,u32(0x7af3e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a386:L64a386:{c.instructions+=4;NFSU2_TR(0x64a386);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a389:{NFSU2_TR(0x64a389);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a38b:{NFSU2_TR(0x64a38b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B64a38e:{NFSU2_TR(0x64a38e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a38f:L64a38f:{c.instructions+=2;NFSU2_TR(0x64a38f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a392:{NFSU2_TR(0x64a392);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a397ull));
TAIL_STATIC(0x64307cu,643);
}
B64a397:L64a397:{c.instructions+=4;NFSU2_TR(0x64a397);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64a39a:{NFSU2_TR(0x64a39a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64a3a0:{NFSU2_TR(0x64a3a0);
w4(R+28,u32(0x80004005ull));
}
B64a3a5:{NFSU2_TR(0x64a3a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a3aaull));
TAIL_STATIC(0x675379u,675);
}
B64a3aa:L64a3aa:{c.instructions+=1;NFSU2_TR(0x64a3aa);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a2bfu);}goto L64a2bf;}
}
B64a3af:L64a3af:{c.instructions+=7;NFSU2_TR(0x64a3af);
__builtin_memmove((R+28),(R+28),4);
}
B64a3b1:{NFSU2_TR(0x64a3b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a3b2:{NFSU2_TR(0x64a3b2);
__builtin_memmove((R+20),(R+16),4);
}
B64a3b4:{NFSU2_TR(0x64a3b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a3b7:{NFSU2_TR(0x64a3b7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64a3b9:{NFSU2_TR(0x64a3b9);
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
B64a3bb:{NFSU2_TR(0x64a3bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64a3c4;}}
}
B64a3bd:L64a3bd:{c.instructions+=2;NFSU2_TR(0x64a3bd);
w4(R+8,u32(0x8876086cull));
}
B64a3c2:{NFSU2_TR(0x64a3c2);
{goto L64a3ee;}
}
B64a3c4:L64a3c4:{c.instructions+=17;NFSU2_TR(0x64a3c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a3c5:{NFSU2_TR(0x64a3c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a3c6:{NFSU2_TR(0x64a3c6);
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
B64a3c8:{NFSU2_TR(0x64a3c8);
__builtin_memmove((R+28),(R+4),4);
}
B64a3ca:{NFSU2_TR(0x64a3ca);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B64a3cb:{NFSU2_TR(0x64a3cb);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B64a3cc:{NFSU2_TR(0x64a3cc);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B64a3cd:{NFSU2_TR(0x64a3cd);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B64a3ce:{NFSU2_TR(0x64a3ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a3d1:{NFSU2_TR(0x64a3d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x328ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64a3d7:{NFSU2_TR(0x64a3d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a3da:{NFSU2_TR(0x64a3da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x324ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64a3e0:{NFSU2_TR(0x64a3e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a3e3:{NFSU2_TR(0x64a3e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x32cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a3e9:{NFSU2_TR(0x64a3e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64a3ea:{NFSU2_TR(0x64a3ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a3ed:{NFSU2_TR(0x64a3ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64a3ee:L64a3ee:{c.instructions+=3;NFSU2_TR(0x64a3ee);
__builtin_memmove((R+0),(R+8),4);
}
B64a3f0:{NFSU2_TR(0x64a3f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64a3f1:{NFSU2_TR(0x64a3f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64a3f4:L64a3f4:{c.instructions+=9;NFSU2_TR(0x64a3f4);
__builtin_memmove((R+28),(R+28),4);
}
B64a3f6:{NFSU2_TR(0x64a3f6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a3f7:{NFSU2_TR(0x64a3f7);
__builtin_memmove((R+20),(R+16),4);
}
B64a3f9:{NFSU2_TR(0x64a3f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a3fa:{NFSU2_TR(0x64a3fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a3fb:{NFSU2_TR(0x64a3fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64a3fe:{NFSU2_TR(0x64a3fe);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64a400:{NFSU2_TR(0x64a400);
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
B64a402:{NFSU2_TR(0x64a402);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64a40b;}}
}
B64a404:L64a404:{c.instructions+=2;NFSU2_TR(0x64a404);
w4(R+12,u32(0x8876086cull));
}
B64a409:{NFSU2_TR(0x64a409);
{goto L64a42c;}
}
B64a40b:L64a40b:{c.instructions+=3;NFSU2_TR(0x64a40b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a40e:{NFSU2_TR(0x64a40e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a411:{NFSU2_TR(0x64a411);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a416ull));
TAIL_STATIC(0x64977cu,649);
}
B64a416:L64a416:{c.instructions+=3;NFSU2_TR(0x64a416);
__builtin_memmove((R+4),(R+0),4);
}
B64a418:{NFSU2_TR(0x64a418);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64a41a:{NFSU2_TR(0x64a41a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a404u);}goto L64a404;}}
}
B64a41c:L64a41c:{c.instructions+=9;NFSU2_TR(0x64a41c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a41d:{NFSU2_TR(0x64a41d);
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
B64a41f:{NFSU2_TR(0x64a41f);
__builtin_memmove((R+28),(R+24),4);
}
B64a421:{NFSU2_TR(0x64a421);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B64a422:{NFSU2_TR(0x64a422);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B64a423:{NFSU2_TR(0x64a423);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a426:{NFSU2_TR(0x64a426);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B64a428:{NFSU2_TR(0x64a428);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a42b:{NFSU2_TR(0x64a42b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64a42c:L64a42c:{c.instructions+=5;NFSU2_TR(0x64a42c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64a42d:{NFSU2_TR(0x64a42d);
__builtin_memmove((R+0),(R+12),4);
}
B64a42f:{NFSU2_TR(0x64a42f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64a430:{NFSU2_TR(0x64a430);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64a431:{NFSU2_TR(0x64a431);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64a434:L64a434:{c.instructions+=9;NFSU2_TR(0x64a434);
__builtin_memmove((R+28),(R+28),4);
}
B64a436:{NFSU2_TR(0x64a436);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a437:{NFSU2_TR(0x64a437);
__builtin_memmove((R+20),(R+16),4);
}
B64a439:{NFSU2_TR(0x64a439);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a43a:{NFSU2_TR(0x64a43a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a43b:{NFSU2_TR(0x64a43b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64a43e:{NFSU2_TR(0x64a43e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64a440:{NFSU2_TR(0x64a440);
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
B64a442:{NFSU2_TR(0x64a442);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64a44b;}}
}
B64a444:L64a444:{c.instructions+=2;NFSU2_TR(0x64a444);
w4(R+12,u32(0x8876086cull));
}
B64a449:{NFSU2_TR(0x64a449);
{goto L64a476;}
}
B64a44b:L64a44b:{c.instructions+=3;NFSU2_TR(0x64a44b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a44e:{NFSU2_TR(0x64a44e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a451:{NFSU2_TR(0x64a451);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a456ull));
TAIL_STATIC(0x6497fdu,649);
}
B64a456:L64a456:{c.instructions+=3;NFSU2_TR(0x64a456);
__builtin_memmove((R+4),(R+0),4);
}
B64a458:{NFSU2_TR(0x64a458);
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
B64a45a:{NFSU2_TR(0x64a45a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a444u);}goto L64a444;}}
}
B64a45c:L64a45c:{c.instructions+=13;NFSU2_TR(0x64a45c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a45d:{NFSU2_TR(0x64a45d);
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
B64a45f:{NFSU2_TR(0x64a45f);
__builtin_memmove((R+28),(R+24),4);
}
B64a461:{NFSU2_TR(0x64a461);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B64a462:{NFSU2_TR(0x64a462);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B64a463:{NFSU2_TR(0x64a463);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B64a464:{NFSU2_TR(0x64a464);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a467:{NFSU2_TR(0x64a467);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B64a469:{NFSU2_TR(0x64a469);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a46c:{NFSU2_TR(0x64a46c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a46f:{NFSU2_TR(0x64a46f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a472:{NFSU2_TR(0x64a472);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a475:{NFSU2_TR(0x64a475);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64a476:L64a476:{c.instructions+=5;NFSU2_TR(0x64a476);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64a477:{NFSU2_TR(0x64a477);
__builtin_memmove((R+0),(R+12),4);
}
B64a479:{NFSU2_TR(0x64a479);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64a47a:{NFSU2_TR(0x64a47a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64a47b:{NFSU2_TR(0x64a47b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64a47e:L64a47e:{c.instructions+=8;NFSU2_TR(0x64a47e);
__builtin_memmove((R+28),(R+28),4);
}
B64a480:{NFSU2_TR(0x64a480);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a481:{NFSU2_TR(0x64a481);
__builtin_memmove((R+20),(R+16),4);
}
B64a483:{NFSU2_TR(0x64a483);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64a486:{NFSU2_TR(0x64a486);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a487:{NFSU2_TR(0x64a487);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B64a489:{NFSU2_TR(0x64a489);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64a48b:{NFSU2_TR(0x64a48b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64a494;}}
}
B64a48d:L64a48d:{c.instructions+=2;NFSU2_TR(0x64a48d);
w4(R+24,u32(0x8876086cull));
}
B64a492:{NFSU2_TR(0x64a492);
{goto L64a4c0;}
}
B64a494:L64a494:{c.instructions+=3;NFSU2_TR(0x64a494);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a497:{NFSU2_TR(0x64a497);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a49a:{NFSU2_TR(0x64a49a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a49full));
TAIL_STATIC(0x64987eu,649);
}
B64a49f:L64a49f:{c.instructions+=3;NFSU2_TR(0x64a49f);
__builtin_memmove((R+4),(R+0),4);
}
B64a4a1:{NFSU2_TR(0x64a4a1);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64a4a3:{NFSU2_TR(0x64a4a3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a48du);}goto L64a48d;}}
}
B64a4a5:L64a4a5:{c.instructions+=14;NFSU2_TR(0x64a4a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a4a6:{NFSU2_TR(0x64a4a6);
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
B64a4a8:{NFSU2_TR(0x64a4a8);
__builtin_memmove((R+28),(R+8),4);
}
B64a4aa:{NFSU2_TR(0x64a4aa);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B64a4ab:{NFSU2_TR(0x64a4ab);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B64a4ac:{NFSU2_TR(0x64a4ac);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B64a4ad:{NFSU2_TR(0x64a4ad);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B64a4ae:{NFSU2_TR(0x64a4ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a4b1:{NFSU2_TR(0x64a4b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B64a4b3:{NFSU2_TR(0x64a4b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a4b6:{NFSU2_TR(0x64a4b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a4b9:{NFSU2_TR(0x64a4b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a4bc:{NFSU2_TR(0x64a4bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a4bf:{NFSU2_TR(0x64a4bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64a4c0:L64a4c0:{c.instructions+=4;NFSU2_TR(0x64a4c0);
__builtin_memmove((R+0),(R+24),4);
}
B64a4c2:{NFSU2_TR(0x64a4c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64a4c3:{NFSU2_TR(0x64a4c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64a4c4:{NFSU2_TR(0x64a4c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64a4c7:L64a4c7:{c.instructions+=11;NFSU2_TR(0x64a4c7);
__builtin_memmove((R+28),(R+28),4);
}
B64a4c9:{NFSU2_TR(0x64a4c9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a4ca:{NFSU2_TR(0x64a4ca);
__builtin_memmove((R+20),(R+16),4);
}
B64a4cc:{NFSU2_TR(0x64a4cc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a4cd:{NFSU2_TR(0x64a4cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a4ce:{NFSU2_TR(0x64a4ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64a4d2:{NFSU2_TR(0x64a4d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a4d3:{NFSU2_TR(0x64a4d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a4d4:{NFSU2_TR(0x64a4d4);
__builtin_memmove((R+24),(R+4),4);
}
B64a4d6:{NFSU2_TR(0x64a4d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a4d9:{NFSU2_TR(0x64a4d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64a4e2;}}
}
B64a4db:L64a4db:{c.instructions+=2;NFSU2_TR(0x64a4db);
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
B64a4dd:{NFSU2_TR(0x64a4dd);
{goto L64a611;}
}
B64a4e2:L64a4e2:{c.instructions+=5;NFSU2_TR(0x64a4e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a4e3:{NFSU2_TR(0x64a4e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a4e6:{NFSU2_TR(0x64a4e6);
__builtin_memmove((R+4),(R+24),4);
}
B64a4e8:{NFSU2_TR(0x64a4e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a4eb:{NFSU2_TR(0x64a4eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a4f0ull));
TAIL_STATIC(0x64c399u,64c);
}
B64a4f0:L64a4f0:{c.instructions+=3;NFSU2_TR(0x64a4f0);
__builtin_memmove((R+28),(R+0),4);
}
B64a4f2:{NFSU2_TR(0x64a4f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64a4f4:{NFSU2_TR(0x64a4f4);
if(r1(R+518)){{goto L64a60e;}}
}
B64a4fa:L64a4fa:{c.instructions+=8;NFSU2_TR(0x64a4fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a4fd:{NFSU2_TR(0x64a4fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a500:{NFSU2_TR(0x64a500);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B64a506:{NFSU2_TR(0x64a506);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64a50a:{NFSU2_TR(0x64a50a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a50d:{NFSU2_TR(0x64a50d);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B64a511:{NFSU2_TR(0x64a511);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a514:{NFSU2_TR(0x64a514);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64a60e;}}
}
B64a51a:L64a51a:{c.instructions+=2;NFSU2_TR(0x64a51a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64a51c:{NFSU2_TR(0x64a51c);
if(r1(R+518)){{goto L64a60e;}}
}
B64a522:L64a522:{c.instructions+=3;NFSU2_TR(0x64a522);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64a525:{NFSU2_TR(0x64a525);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B64a527:{NFSU2_TR(0x64a527);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64a60e;}}
}
B64a52d:L64a52d:{c.instructions+=4;NFSU2_TR(0x64a52d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64a530:{NFSU2_TR(0x64a530);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64a534:{NFSU2_TR(0x64a534);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64a536:{NFSU2_TR(0x64a536);
if(r1(R+518)){{goto L64a554;}}
}
B64a538:L64a538:{c.instructions+=2;NFSU2_TR(0x64a538);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B64a53b:{NFSU2_TR(0x64a53b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64a547;}}
}
B64a53d:L64a53d:{c.instructions+=4;NFSU2_TR(0x64a53d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a540:{NFSU2_TR(0x64a540);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64a543:{NFSU2_TR(0x64a543);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64a545:{NFSU2_TR(0x64a545);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a538u);}goto L64a538;}}
}
B64a547:L64a547:{c.instructions+=2;NFSU2_TR(0x64a547);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64a549:{NFSU2_TR(0x64a549);
if(r1(R+518)){{goto L64a554;}}
}
B64a54b:L64a54b:{c.instructions+=2;NFSU2_TR(0x64a54b);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64a54e:{NFSU2_TR(0x64a54e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64a608;}}
}
B64a554:L64a554:{c.instructions+=2;NFSU2_TR(0x64a554);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a556:{NFSU2_TR(0x64a556);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a55bull));
TAIL_STATIC(0x575620u,575);
}
B64a55b:L64a55b:{c.instructions+=4;NFSU2_TR(0x64a55b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64a55c:{NFSU2_TR(0x64a55c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B64a55e:{NFSU2_TR(0x64a55e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64a560:{NFSU2_TR(0x64a560);
if(r1(R+518)){{goto L64a573;}}
}
B64a562:L64a562:{c.instructions+=6;NFSU2_TR(0x64a562);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64a566:{NFSU2_TR(0x64a566);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a569:{NFSU2_TR(0x64a569);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a56c:{NFSU2_TR(0x64a56c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a56f:{NFSU2_TR(0x64a56f);
__builtin_memmove((R+24),(R+0),4);
}
B64a571:{NFSU2_TR(0x64a571);
{goto L64a575;}
}
B64a573:L64a573:{c.instructions+=1;NFSU2_TR(0x64a573);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B64a575:L64a575:{c.instructions+=2;NFSU2_TR(0x64a575);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64a577:{NFSU2_TR(0x64a577);
if(r1(R+518)){{goto L64a60e;}}
}
B64a57d:L64a57d:{c.instructions+=11;NFSU2_TR(0x64a57d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a580:{NFSU2_TR(0x64a580);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a583:{NFSU2_TR(0x64a583);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B64a586:{NFSU2_TR(0x64a586);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a589:{NFSU2_TR(0x64a589);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64a58c:{NFSU2_TR(0x64a58c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a58d:{NFSU2_TR(0x64a58d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B64a590:{NFSU2_TR(0x64a590);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a591:{NFSU2_TR(0x64a591);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a594:{NFSU2_TR(0x64a594);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a59a:{NFSU2_TR(0x64a59a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a59full));
TAIL_STATIC(0x647d81u,647);
}
B64a59f:L64a59f:{c.instructions+=18;NFSU2_TR(0x64a59f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64a5a1:{NFSU2_TR(0x64a5a1);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x64a5a1);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x64a5a1);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B64a5a4:{NFSU2_TR(0x64a5a4);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+24)),r4(U+0));
}
B64a5aa:{NFSU2_TR(0x64a5aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a5ad:{NFSU2_TR(0x64a5ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a5b0:{NFSU2_TR(0x64a5b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a5b3:{NFSU2_TR(0x64a5b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a5b6:{NFSU2_TR(0x64a5b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a5b9:{NFSU2_TR(0x64a5b9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64a5bb:{NFSU2_TR(0x64a5bb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B64a5bd:{NFSU2_TR(0x64a5bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a5c0:{NFSU2_TR(0x64a5c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a5c3:{NFSU2_TR(0x64a5c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a5c6:{NFSU2_TR(0x64a5c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a5c9:{NFSU2_TR(0x64a5c9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B64a5cc:{NFSU2_TR(0x64a5cc);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x64a5cc);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x64a5cc);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B64a5cf:{NFSU2_TR(0x64a5cf);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64a5d1:{NFSU2_TR(0x64a5d1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64a5ed;}}
}
B64a5d3:L64a5d3:{c.instructions+=10;NFSU2_TR(0x64a5d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a5d6:{NFSU2_TR(0x64a5d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a5d9:{NFSU2_TR(0x64a5d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a5dc:{NFSU2_TR(0x64a5dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a5df:{NFSU2_TR(0x64a5df);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B64a5e3:{NFSU2_TR(0x64a5e3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64a5e5:{NFSU2_TR(0x64a5e5);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x64a5e5);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x64a5e5);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B64a5e8:{NFSU2_TR(0x64a5e8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B64a5e9:{NFSU2_TR(0x64a5e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B64a5eb:{NFSU2_TR(0x64a5eb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a5d3u);}goto L64a5d3;}}
}
B64a5ed:L64a5ed:{c.instructions+=3;NFSU2_TR(0x64a5ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a5f0:{NFSU2_TR(0x64a5f0);
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
B64a5f2:{NFSU2_TR(0x64a5f2);
if(r1(R+518)){{goto L64a5ff;}}
}
B64a5f4:L64a5f4:{c.instructions+=4;NFSU2_TR(0x64a5f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a5f7:{NFSU2_TR(0x64a5f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a5fa:{NFSU2_TR(0x64a5fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a5fd:{NFSU2_TR(0x64a5fd);
{goto L64a608;}
}
B64a5ff:L64a5ff:{c.instructions+=3;NFSU2_TR(0x64a5ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a602:{NFSU2_TR(0x64a602);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a605:{NFSU2_TR(0x64a605);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a608:L64a608:{c.instructions+=3;NFSU2_TR(0x64a608);
__builtin_memmove((R+0),(R+24),4);
}
B64a60a:{NFSU2_TR(0x64a60a);
w4(R+0,u32(~u32(r4(R+0))));
}
B64a60c:{NFSU2_TR(0x64a60c);
{goto L64a610;}
}
B64a60e:L64a60e:{c.instructions+=1;NFSU2_TR(0x64a60e);
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
B64a610:L64a610:{c.instructions+=1;NFSU2_TR(0x64a610);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64a611:L64a611:{c.instructions+=4;NFSU2_TR(0x64a611);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64a612:{NFSU2_TR(0x64a612);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64a613:{NFSU2_TR(0x64a613);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64a614:{NFSU2_TR(0x64a614);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64a617:L64a617:{c.instructions+=7;NFSU2_TR(0x64a617);
__builtin_memmove((R+28),(R+28),4);
}
B64a619:{NFSU2_TR(0x64a619);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a61a:{NFSU2_TR(0x64a61a);
__builtin_memmove((R+20),(R+16),4);
}
B64a61c:{NFSU2_TR(0x64a61c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a61d:{NFSU2_TR(0x64a61d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64a620:{NFSU2_TR(0x64a620);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64a622:{NFSU2_TR(0x64a622);
if(r1(R+518)){{goto L64a668;}}
}
B64a624:L64a624:{c.instructions+=3;NFSU2_TR(0x64a624);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a627:{NFSU2_TR(0x64a627);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a628:{NFSU2_TR(0x64a628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a62dull));
TAIL_STATIC(0x6496e6u,649);
}
B64a62d:L64a62d:{c.instructions+=2;NFSU2_TR(0x64a62d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64a62f:{NFSU2_TR(0x64a62f);
if(r1(R+518)){{goto L64a63c;}}
}
B64a631:L64a631:{c.instructions+=2;NFSU2_TR(0x64a631);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a634:{NFSU2_TR(0x64a634);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a637:L64a637:{c.instructions+=2;NFSU2_TR(0x64a637);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a63a:{NFSU2_TR(0x64a63a);
{goto L64a661;}
}
B64a63c:L64a63c:{c.instructions+=3;NFSU2_TR(0x64a63c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a63f:{NFSU2_TR(0x64a63f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a640:{NFSU2_TR(0x64a640);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a645ull));
TAIL_STATIC(0x6497fdu,649);
}
B64a645:L64a645:{c.instructions+=2;NFSU2_TR(0x64a645);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64a647:{NFSU2_TR(0x64a647);
if(r1(R+518)){{goto L64a64e;}}
}
B64a649:L64a649:{c.instructions+=2;NFSU2_TR(0x64a649);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a64c:{NFSU2_TR(0x64a64c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a637u);}goto L64a637;}
}
B64a64e:L64a64e:{c.instructions+=3;NFSU2_TR(0x64a64e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a651:{NFSU2_TR(0x64a651);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a652:{NFSU2_TR(0x64a652);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a657ull));
TAIL_STATIC(0x64987eu,649);
}
B64a657:L64a657:{c.instructions+=2;NFSU2_TR(0x64a657);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64a659:{NFSU2_TR(0x64a659);
if(r1(R+518)){{goto L64a668;}}
}
B64a65b:L64a65b:{c.instructions+=2;NFSU2_TR(0x64a65b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a65e:{NFSU2_TR(0x64a65e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a661:L64a661:{c.instructions+=3;NFSU2_TR(0x64a661);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64a664:{NFSU2_TR(0x64a664);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B64a666:{NFSU2_TR(0x64a666);
if(r1(R+512)){{goto L64a672;}}
}
B64a668:L64a668:{c.instructions+=1;NFSU2_TR(0x64a668);
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
B64a66a:L64a66a:{c.instructions+=3;NFSU2_TR(0x64a66a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64a66b:{NFSU2_TR(0x64a66b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64a66c:{NFSU2_TR(0x64a66c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64a66f:L64a66f:{c.instructions+=1;NFSU2_TR(0x64a66f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a672:L64a672:{c.instructions+=3;NFSU2_TR(0x64a672);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B64a673:{NFSU2_TR(0x64a673);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64a675:{NFSU2_TR(0x64a675);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a66fu);}goto L64a66f;}}
}
B64a677:L64a677:{c.instructions+=2;NFSU2_TR(0x64a677);
w4(R+0,u32(~u32(r4(R+0))));
}
B64a679:{NFSU2_TR(0x64a679);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a66au);}goto L64a66a;}
}
B64a67b:L64a67b:{c.instructions+=12;NFSU2_TR(0x64a67b);
__builtin_memmove((R+28),(R+28),4);
}
B64a67d:{NFSU2_TR(0x64a67d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a67e:{NFSU2_TR(0x64a67e);
__builtin_memmove((R+20),(R+16),4);
}
B64a680:{NFSU2_TR(0x64a680);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a681:{NFSU2_TR(0x64a681);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a684:{NFSU2_TR(0x64a684);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64a686:{NFSU2_TR(0x64a686);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a687:{NFSU2_TR(0x64a687);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a688:{NFSU2_TR(0x64a688);
__builtin_memmove((R+24),(R+4),4);
}
B64a68a:{NFSU2_TR(0x64a68a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a68b:{NFSU2_TR(0x64a68b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a68e:{NFSU2_TR(0x64a68e);
if(r1(R+518)){{goto L64a737;}}
}
B64a694:L64a694:{c.instructions+=2;NFSU2_TR(0x64a694);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B64a697:{NFSU2_TR(0x64a697);
if(r1(R+518)){{goto L64a737;}}
}
B64a69d:L64a69d:{c.instructions+=2;NFSU2_TR(0x64a69d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a6a0:{NFSU2_TR(0x64a6a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a6a5ull));
TAIL_STATIC(0x6496e6u,649);
}
B64a6a5:L64a6a5:{c.instructions+=2;NFSU2_TR(0x64a6a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64a6a7:{NFSU2_TR(0x64a6a7);
if(r1(R+518)){{goto L64a6b1;}}
}
B64a6a9:L64a6a9:{c.instructions+=1;NFSU2_TR(0x64a6a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a6ac:L64a6ac:{c.instructions+=2;NFSU2_TR(0x64a6ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64a6af:{NFSU2_TR(0x64a6af);
{goto L64a6d0;}
}
B64a6b1:L64a6b1:{c.instructions+=3;NFSU2_TR(0x64a6b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a6b4:{NFSU2_TR(0x64a6b4);
__builtin_memmove((R+4),(R+24),4);
}
B64a6b6:{NFSU2_TR(0x64a6b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a6bbull));
TAIL_STATIC(0x6497fdu,649);
}
B64a6bb:L64a6bb:{c.instructions+=2;NFSU2_TR(0x64a6bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64a6bd:{NFSU2_TR(0x64a6bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a6acu);}goto L64a6ac;}}
}
B64a6bf:L64a6bf:{c.instructions+=3;NFSU2_TR(0x64a6bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a6c2:{NFSU2_TR(0x64a6c2);
__builtin_memmove((R+4),(R+24),4);
}
B64a6c4:{NFSU2_TR(0x64a6c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a6c9ull));
TAIL_STATIC(0x64987eu,649);
}
B64a6c9:L64a6c9:{c.instructions+=2;NFSU2_TR(0x64a6c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64a6cb:{NFSU2_TR(0x64a6cb);
if(r1(R+518)){{goto L64a737;}}
}
B64a6cd:L64a6cd:{c.instructions+=1;NFSU2_TR(0x64a6cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64a6d0:L64a6d0:{c.instructions+=2;NFSU2_TR(0x64a6d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64a6d2:{NFSU2_TR(0x64a6d2);
if(r1(R+518)){{goto L64a737;}}
}
B64a6d4:L64a6d4:{c.instructions+=3;NFSU2_TR(0x64a6d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a6da:{NFSU2_TR(0x64a6da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a6dd:{NFSU2_TR(0x64a6dd);
{goto L64a6e5;}
}
B64a6df:L64a6df:{c.instructions+=2;NFSU2_TR(0x64a6df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64a6e2:{NFSU2_TR(0x64a6e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a6e5:L64a6e5:{c.instructions+=7;NFSU2_TR(0x64a6e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a6e8:{NFSU2_TR(0x64a6e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64a6eb:{NFSU2_TR(0x64a6eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B64a6ee:{NFSU2_TR(0x64a6ee);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B64a6f0:{NFSU2_TR(0x64a6f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a6f3:{NFSU2_TR(0x64a6f3);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B64a6f7:{NFSU2_TR(0x64a6f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64a6fd;}}
}
B64a6f9:L64a6f9:{c.instructions+=2;NFSU2_TR(0x64a6f9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B64a6fb:{NFSU2_TR(0x64a6fb);
{goto L64a707;}
}
B64a6fd:L64a6fd:{c.instructions+=2;NFSU2_TR(0x64a6fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a703:{NFSU2_TR(0x64a703);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B64a707:L64a707:{c.instructions+=4;NFSU2_TR(0x64a707);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64a70a:{NFSU2_TR(0x64a70a);
__builtin_memmove((R+0),(R+24),4);
}
B64a70c:{NFSU2_TR(0x64a70c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B64a70e:{NFSU2_TR(0x64a70e);
{goto L64a718;}
}
B64a710:L64a710:{c.instructions+=2;NFSU2_TR(0x64a710);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64a712:{NFSU2_TR(0x64a712);
if(r1(R+518)){{goto L64a71c;}}
}
B64a714:L64a714:{c.instructions+=3;NFSU2_TR(0x64a714);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64a715:{NFSU2_TR(0x64a715);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B64a717:{NFSU2_TR(0x64a717);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B64a718:L64a718:{c.instructions+=2;NFSU2_TR(0x64a718);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B64a71a:{NFSU2_TR(0x64a71a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a710u);}goto L64a710;}}
}
B64a71c:L64a71c:{c.instructions+=4;NFSU2_TR(0x64a71c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B64a71e:{NFSU2_TR(0x64a71e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+4),(U+0),1);
}
B64a720:{NFSU2_TR(0x64a720);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B64a722:{NFSU2_TR(0x64a722);
if(r1(R+518)){{goto L64a740;}}
}
B64a724:L64a724:{c.instructions+=2;NFSU2_TR(0x64a724);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64a726:{NFSU2_TR(0x64a726);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64a730;}}
}
B64a728:L64a728:{c.instructions+=2;NFSU2_TR(0x64a728);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64a72a:{NFSU2_TR(0x64a72a);
if(r1(R+518)){{goto L64a7a0;}}
}
B64a72c:L64a72c:{c.instructions+=2;NFSU2_TR(0x64a72c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5bull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64a72e:{NFSU2_TR(0x64a72e);
if(r1(R+518)){{goto L64a746;}}
}
B64a730:L64a730:{c.instructions+=3;NFSU2_TR(0x64a730);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64a733:{NFSU2_TR(0x64a733);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64a735:{NFSU2_TR(0x64a735);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a6dfu);}goto L64a6df;}}
}
B64a737:L64a737:{c.instructions+=1;NFSU2_TR(0x64a737);
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
B64a739:L64a739:{c.instructions+=5;NFSU2_TR(0x64a739);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64a73a:{NFSU2_TR(0x64a73a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64a73b:{NFSU2_TR(0x64a73b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64a73c:{NFSU2_TR(0x64a73c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64a73d:{NFSU2_TR(0x64a73d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64a740:L64a740:{c.instructions+=3;NFSU2_TR(0x64a740);
__builtin_memmove((R+0),(R+28),4);
}
B64a742:{NFSU2_TR(0x64a742);
w4(R+0,u32(~u32(r4(R+0))));
}
B64a744:{NFSU2_TR(0x64a744);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a739u);}goto L64a739;}
}
B64a746:L64a746:{c.instructions+=4;NFSU2_TR(0x64a746);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64a747:{NFSU2_TR(0x64a747);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B64a749:{NFSU2_TR(0x64a749);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B64a74b:{NFSU2_TR(0x64a74b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a737u);}goto L64a737;}}
}
B64a74d:L64a74d:{c.instructions+=2;NFSU2_TR(0x64a74d);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x39ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B64a74f:{NFSU2_TR(0x64a74f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a737u);}goto L64a737;}}
}
B64a751:L64a751:{c.instructions+=2;NFSU2_TR(0x64a751);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a752:{NFSU2_TR(0x64a752);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a757ull));
TAIL_STATIC(0x75d65bu,75d);
}
B64a757:L64a757:{c.instructions+=3;NFSU2_TR(0x64a757);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B64a75a:{NFSU2_TR(0x64a75a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64a75b:{NFSU2_TR(0x64a75b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a737u);}goto L64a737;}}
}
B64a75d:L64a75d:{c.instructions+=1;NFSU2_TR(0x64a75d);
{goto L64a765;}
}
B64a75f:L64a75f:{c.instructions+=2;NFSU2_TR(0x64a75f);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B64a762:{NFSU2_TR(0x64a762);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L64a76c;}}
}
B64a764:L64a764:{c.instructions+=1;NFSU2_TR(0x64a764);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64a765:L64a765:{c.instructions+=3;NFSU2_TR(0x64a765);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B64a767:{NFSU2_TR(0x64a767);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B64a76a:{NFSU2_TR(0x64a76a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a75fu);}goto L64a75f;}}
}
B64a76c:L64a76c:{c.instructions+=2;NFSU2_TR(0x64a76c);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x5dull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B64a76f:{NFSU2_TR(0x64a76f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a737u);}goto L64a737;}}
}
B64a771:L64a771:{c.instructions+=7;NFSU2_TR(0x64a771);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a774:{NFSU2_TR(0x64a774);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a777:{NFSU2_TR(0x64a777);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a778:{NFSU2_TR(0x64a778);
w4(R+28,u32(~u32(r4(R+28))));
}
B64a77a:{NFSU2_TR(0x64a77a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a77b:{NFSU2_TR(0x64a77b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64a77c:{NFSU2_TR(0x64a77c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a781ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a4c7u);}goto L64a4c7;}
}
B64a781:L64a781:{c.instructions+=2;NFSU2_TR(0x64a781);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64a783:{NFSU2_TR(0x64a783);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a737u);}goto L64a737;}}
}
B64a785:L64a785:{c.instructions+=3;NFSU2_TR(0x64a785);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B64a787:{NFSU2_TR(0x64a787);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B64a789:{NFSU2_TR(0x64a789);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a739u);}goto L64a739;}}
}
B64a78b:L64a78b:{c.instructions+=2;NFSU2_TR(0x64a78b);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B64a78e:{NFSU2_TR(0x64a78e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a737u);}goto L64a737;}}
}
B64a790:L64a790:{c.instructions+=4;NFSU2_TR(0x64a790);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a793:{NFSU2_TR(0x64a793);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64a794:{NFSU2_TR(0x64a794);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a795:{NFSU2_TR(0x64a795);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a796:L64a796:{c.instructions+=2;NFSU2_TR(0x64a796);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a799:{NFSU2_TR(0x64a799);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a79eull));
TAIL_STATIC(0x64bed4u,64b);
}
B64a79e:L64a79e:{c.instructions+=1;NFSU2_TR(0x64a79e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a739u);}goto L64a739;}
}
B64a7a0:L64a7a0:{c.instructions+=6;NFSU2_TR(0x64a7a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a7a3:{NFSU2_TR(0x64a7a3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64a7a4:{NFSU2_TR(0x64a7a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a7a5:{NFSU2_TR(0x64a7a5);
w4(R+28,u32(~u32(r4(R+28))));
}
B64a7a7:{NFSU2_TR(0x64a7a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a7a8:{NFSU2_TR(0x64a7a8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a796u);}goto L64a796;}
}
B64a7aa:L64a7aa:{c.instructions+=8;NFSU2_TR(0x64a7aa);
__builtin_memmove((R+28),(R+28),4);
}
B64a7ac:{NFSU2_TR(0x64a7ac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a7ad:{NFSU2_TR(0x64a7ad);
__builtin_memmove((R+20),(R+16),4);
}
B64a7af:{NFSU2_TR(0x64a7af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a7b2:{NFSU2_TR(0x64a7b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x324ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64a7b8:{NFSU2_TR(0x64a7b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a7bb:{NFSU2_TR(0x64a7bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B64a7bd:{NFSU2_TR(0x64a7bd);
if(r1(R+512)){{goto L64a7c3;}}
}
B64a7bf:L64a7bf:{c.instructions+=2;NFSU2_TR(0x64a7bf);
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
B64a7c1:{NFSU2_TR(0x64a7c1);
{goto L64a7d5;}
}
B64a7c3:L64a7c3:{c.instructions+=2;NFSU2_TR(0x64a7c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x348ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a7c9:{NFSU2_TR(0x64a7c9);
{goto L64a7ce;}
}
B64a7cb:L64a7cb:{c.instructions+=1;NFSU2_TR(0x64a7cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a7ce:L64a7ce:{c.instructions+=3;NFSU2_TR(0x64a7ce);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B64a7cf:{NFSU2_TR(0x64a7cf);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64a7d1:{NFSU2_TR(0x64a7d1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a7cbu);}goto L64a7cb;}}
}
B64a7d3:L64a7d3:{c.instructions+=1;NFSU2_TR(0x64a7d3);
w4(R+0,u32(~u32(r4(R+0))));
}
B64a7d5:L64a7d5:{c.instructions+=2;NFSU2_TR(0x64a7d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64a7d6:{NFSU2_TR(0x64a7d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64a7d9:L64a7d9:{c.instructions+=6;NFSU2_TR(0x64a7d9);
__builtin_memmove((R+28),(R+28),4);
}
B64a7db:{NFSU2_TR(0x64a7db);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a7dc:{NFSU2_TR(0x64a7dc);
__builtin_memmove((R+20),(R+16),4);
}
B64a7de:{NFSU2_TR(0x64a7de);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a7e1:{NFSU2_TR(0x64a7e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a7e4:{NFSU2_TR(0x64a7e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a7e9ull));
TAIL_STATIC(0x6497fdu,649);
}
B64a7e9:L64a7e9:{c.instructions+=2;NFSU2_TR(0x64a7e9);
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
B64a7eb:{NFSU2_TR(0x64a7eb);
if(r1(R+518)){{goto L64a7ef;}}
}
B64a7ed:L64a7ed:{c.instructions+=1;NFSU2_TR(0x64a7ed);
w4(R+0,u32(~u32(r4(R+0))));
}
B64a7ef:L64a7ef:{c.instructions+=2;NFSU2_TR(0x64a7ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64a7f0:{NFSU2_TR(0x64a7f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64a7f3:L64a7f3:{c.instructions+=6;NFSU2_TR(0x64a7f3);
__builtin_memmove((R+28),(R+28),4);
}
B64a7f5:{NFSU2_TR(0x64a7f5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a7f6:{NFSU2_TR(0x64a7f6);
__builtin_memmove((R+20),(R+16),4);
}
B64a7f8:{NFSU2_TR(0x64a7f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a7fb:{NFSU2_TR(0x64a7fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a7fe:{NFSU2_TR(0x64a7fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a803ull));
TAIL_STATIC(0x6497fdu,649);
}
B64a803:L64a803:{c.instructions+=2;NFSU2_TR(0x64a803);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64a805:{NFSU2_TR(0x64a805);
if(r1(R+518)){{goto L64a811;}}
}
B64a807:L64a807:{c.instructions+=4;NFSU2_TR(0x64a807);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64a80a:{NFSU2_TR(0x64a80a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a80d:{NFSU2_TR(0x64a80d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B64a80f:{NFSU2_TR(0x64a80f);
if(r1(R+512)){{goto L64a815;}}
}
B64a811:L64a811:{c.instructions+=2;NFSU2_TR(0x64a811);
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
B64a813:{NFSU2_TR(0x64a813);
{goto L64a81f;}
}
B64a815:L64a815:{c.instructions+=4;NFSU2_TR(0x64a815);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a818:{NFSU2_TR(0x64a818);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B64a819:{NFSU2_TR(0x64a819);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64a81b:{NFSU2_TR(0x64a81b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a815u);}goto L64a815;}}
}
B64a81d:L64a81d:{c.instructions+=1;NFSU2_TR(0x64a81d);
w4(R+0,u32(~u32(r4(R+0))));
}
B64a81f:L64a81f:{c.instructions+=2;NFSU2_TR(0x64a81f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64a820:{NFSU2_TR(0x64a820);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64a823:L64a823:{c.instructions+=6;NFSU2_TR(0x64a823);
__builtin_memmove((R+28),(R+28),4);
}
B64a825:{NFSU2_TR(0x64a825);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a826:{NFSU2_TR(0x64a826);
__builtin_memmove((R+20),(R+16),4);
}
B64a828:{NFSU2_TR(0x64a828);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a82b:{NFSU2_TR(0x64a82b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a82e:{NFSU2_TR(0x64a82e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a833ull));
TAIL_STATIC(0x6497fdu,649);
}
B64a833:L64a833:{c.instructions+=2;NFSU2_TR(0x64a833);
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
B64a835:{NFSU2_TR(0x64a835);
if(r1(R+518)){{goto L64a88a;}}
}
B64a837:L64a837:{c.instructions+=4;NFSU2_TR(0x64a837);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a838:{NFSU2_TR(0x64a838);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a839:{NFSU2_TR(0x64a839);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64a83c:{NFSU2_TR(0x64a83c);
{goto L64a882;}
}
B64a83e:L64a83e:{c.instructions+=2;NFSU2_TR(0x64a83e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64a842:{NFSU2_TR(0x64a842);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64a84a;}}
}
B64a844:L64a844:{c.instructions+=2;NFSU2_TR(0x64a844);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
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
B64a848:{NFSU2_TR(0x64a848);
{goto L64a87d;}
}
B64a84a:L64a84a:{c.instructions+=3;NFSU2_TR(0x64a84a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64a84d:{NFSU2_TR(0x64a84d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64a84f:{NFSU2_TR(0x64a84f);
if(r1(R+518)){{goto L64a87f;}}
}
B64a851:L64a851:{c.instructions+=1;NFSU2_TR(0x64a851);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a854:L64a854:{c.instructions+=4;NFSU2_TR(0x64a854);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B64a856:{NFSU2_TR(0x64a856);
__builtin_memmove((R+0),(R+8),1);
}
B64a858:{NFSU2_TR(0x64a858);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B64a85a:{NFSU2_TR(0x64a85a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64a876;}}
}
B64a85c:L64a85c:{c.instructions+=2;NFSU2_TR(0x64a85c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64a85e:{NFSU2_TR(0x64a85e);
if(r1(R+518)){{goto L64a872;}}
}
B64a860:L64a860:{c.instructions+=4;NFSU2_TR(0x64a860);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B64a863:{NFSU2_TR(0x64a863);
__builtin_memmove((R+0),(R+8),1);
}
B64a865:{NFSU2_TR(0x64a865);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B64a868:{NFSU2_TR(0x64a868);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64a876;}}
}
B64a86a:L64a86a:{c.instructions+=6;NFSU2_TR(0x64a86a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B64a86b:{NFSU2_TR(0x64a86b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B64a86c:{NFSU2_TR(0x64a86c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64a86d:{NFSU2_TR(0x64a86d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64a86e:{NFSU2_TR(0x64a86e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64a870:{NFSU2_TR(0x64a870);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a854u);}goto L64a854;}}
}
B64a872:L64a872:{c.instructions+=2;NFSU2_TR(0x64a872);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64a874:{NFSU2_TR(0x64a874);
{goto L64a87b;}
}
B64a876:L64a876:{c.instructions+=2;NFSU2_TR(0x64a876);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B64a878:{NFSU2_TR(0x64a878);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B64a87b:L64a87b:{c.instructions+=1;NFSU2_TR(0x64a87b);
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
B64a87d:L64a87d:{c.instructions+=1;NFSU2_TR(0x64a87d);
if(r1(R+518)){{goto L64a88e;}}
}
B64a87f:L64a87f:{c.instructions+=1;NFSU2_TR(0x64a87f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64a882:L64a882:{c.instructions+=2;NFSU2_TR(0x64a882);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64a884:{NFSU2_TR(0x64a884);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a83eu);}goto L64a83e;}}
}
B64a886:L64a886:{c.instructions+=1;NFSU2_TR(0x64a886);
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
B64a888:L64a888:{c.instructions+=2;NFSU2_TR(0x64a888);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64a889:{NFSU2_TR(0x64a889);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64a88a:L64a88a:{c.instructions+=2;NFSU2_TR(0x64a88a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64a88b:{NFSU2_TR(0x64a88b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64a88e:L64a88e:{c.instructions+=3;NFSU2_TR(0x64a88e);
__builtin_memmove((R+0),(R+28),4);
}
B64a890:{NFSU2_TR(0x64a890);
w4(R+0,u32(~u32(r4(R+0))));
}
B64a892:{NFSU2_TR(0x64a892);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a888u);}goto L64a888;}
}
B64a894:L64a894:{c.instructions+=8;NFSU2_TR(0x64a894);
__builtin_memmove((R+28),(R+28),4);
}
B64a896:{NFSU2_TR(0x64a896);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a897:{NFSU2_TR(0x64a897);
__builtin_memmove((R+20),(R+16),4);
}
B64a899:{NFSU2_TR(0x64a899);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a89c:{NFSU2_TR(0x64a89c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x32cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64a8a2:{NFSU2_TR(0x64a8a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a8a5:{NFSU2_TR(0x64a8a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B64a8a7:{NFSU2_TR(0x64a8a7);
if(r1(R+512)){{goto L64a8ad;}}
}
B64a8a9:L64a8a9:{c.instructions+=2;NFSU2_TR(0x64a8a9);
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
B64a8ab:{NFSU2_TR(0x64a8ab);
{goto L64a8bf;}
}
B64a8ad:L64a8ad:{c.instructions+=2;NFSU2_TR(0x64a8ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x350ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a8b3:{NFSU2_TR(0x64a8b3);
{goto L64a8b8;}
}
B64a8b5:L64a8b5:{c.instructions+=1;NFSU2_TR(0x64a8b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a8b8:L64a8b8:{c.instructions+=3;NFSU2_TR(0x64a8b8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B64a8b9:{NFSU2_TR(0x64a8b9);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64a8bb:{NFSU2_TR(0x64a8bb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a8b5u);}goto L64a8b5;}}
}
B64a8bd:L64a8bd:{c.instructions+=1;NFSU2_TR(0x64a8bd);
w4(R+0,u32(~u32(r4(R+0))));
}
B64a8bf:L64a8bf:{c.instructions+=2;NFSU2_TR(0x64a8bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64a8c0:{NFSU2_TR(0x64a8c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64a8c3:L64a8c3:{c.instructions+=6;NFSU2_TR(0x64a8c3);
__builtin_memmove((R+28),(R+28),4);
}
B64a8c5:{NFSU2_TR(0x64a8c5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a8c6:{NFSU2_TR(0x64a8c6);
__builtin_memmove((R+20),(R+16),4);
}
B64a8c8:{NFSU2_TR(0x64a8c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64a8cb:{NFSU2_TR(0x64a8cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a8ce:{NFSU2_TR(0x64a8ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a8d3ull));
TAIL_STATIC(0x64977cu,649);
}
B64a8d3:L64a8d3:{c.instructions+=2;NFSU2_TR(0x64a8d3);
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
B64a8d5:{NFSU2_TR(0x64a8d5);
if(r1(R+518)){{goto L64a8d9;}}
}
B64a8d7:L64a8d7:{c.instructions+=1;NFSU2_TR(0x64a8d7);
w4(R+0,u32(~u32(r4(R+0))));
}
B64a8d9:L64a8d9:{c.instructions+=2;NFSU2_TR(0x64a8d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64a8da:{NFSU2_TR(0x64a8da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64a8dd:L64a8dd:{c.instructions+=11;NFSU2_TR(0x64a8dd);
__builtin_memmove((R+28),(R+28),4);
}
B64a8df:{NFSU2_TR(0x64a8df);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a8e0:{NFSU2_TR(0x64a8e0);
__builtin_memmove((R+20),(R+16),4);
}
B64a8e2:{NFSU2_TR(0x64a8e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a8e5:{NFSU2_TR(0x64a8e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a8e6:{NFSU2_TR(0x64a8e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64a8e9:{NFSU2_TR(0x64a8e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a8ec:{NFSU2_TR(0x64a8ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a8ed:{NFSU2_TR(0x64a8ed);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64a8ef:{NFSU2_TR(0x64a8ef);
w1(R+512,u8((r4(R+0))<(r4(R+28))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64a8f1:{NFSU2_TR(0x64a8f1);
if(r1(R+518)){{goto L64a915;}}
}
B64a8f3:L64a8f3:{c.instructions+=2;NFSU2_TR(0x64a8f3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64a8f4:{NFSU2_TR(0x64a8f4);
if(r1(R+518)){{goto L64a90b;}}
}
B64a8f6:L64a8f6:{c.instructions+=2;NFSU2_TR(0x64a8f6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64a8f7:{NFSU2_TR(0x64a8f7);
if(r1(R+518)){{goto L64a90b;}}
}
B64a8f9:L64a8f9:{c.instructions+=2;NFSU2_TR(0x64a8f9);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64a8fa:{NFSU2_TR(0x64a8fa);
if(r1(R+518)){{goto L64a903;}}
}
B64a8fc:L64a8fc:{c.instructions+=2;NFSU2_TR(0x64a8fc);
w4(R+28,u32(0x8876086cull));
}
B64a901:{NFSU2_TR(0x64a901);
{goto L64a931;}
}
B64a903:L64a903:{c.instructions+=3;NFSU2_TR(0x64a903);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64a906:{NFSU2_TR(0x64a906);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B64a909:{NFSU2_TR(0x64a909);
{goto L64a931;}
}
B64a90b:L64a90b:{c.instructions+=2;NFSU2_TR(0x64a90b);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64a90e:{NFSU2_TR(0x64a90e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a913ull));
TAIL_STATIC(0x75dd28u,75d);
}
B64a913:L64a913:{c.instructions+=1;NFSU2_TR(0x64a913);
{goto L64a92e;}
}
B64a915:L64a915:{c.instructions+=6;NFSU2_TR(0x64a915);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64a918:{NFSU2_TR(0x64a918);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64a91e:{NFSU2_TR(0x64a91e);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B64a920:{NFSU2_TR(0x64a920);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B64a922:{NFSU2_TR(0x64a922);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B64a925:{NFSU2_TR(0x64a925);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L64a92c;}}
}
B64a927:L64a927:{c.instructions+=3;NFSU2_TR(0x64a927);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64a929:{NFSU2_TR(0x64a929);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64a92a:{NFSU2_TR(0x64a92a);
{goto L64a92e;}
}
B64a92c:L64a92c:{c.instructions+=1;NFSU2_TR(0x64a92c);
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
B64a92e:L64a92e:{c.instructions+=1;NFSU2_TR(0x64a92e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a931:L64a931:{c.instructions+=5;NFSU2_TR(0x64a931);
__builtin_memmove((R+0),(R+28),4);
}
B64a933:{NFSU2_TR(0x64a933);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64a934:{NFSU2_TR(0x64a934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64a935:{NFSU2_TR(0x64a935);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64a936:{NFSU2_TR(0x64a936);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64a939:L64a939:{c.instructions+=9;NFSU2_TR(0x64a939);
__builtin_memmove((R+28),(R+28),4);
}
B64a93b:{NFSU2_TR(0x64a93b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a93c:{NFSU2_TR(0x64a93c);
__builtin_memmove((R+20),(R+16),4);
}
B64a93e:{NFSU2_TR(0x64a93e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a941:{NFSU2_TR(0x64a941);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a944:{NFSU2_TR(0x64a944);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64a947:{NFSU2_TR(0x64a947);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64a949:{NFSU2_TR(0x64a949);
w1(R+512,u8((r4(R+8))<(r4(R+0))));
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64a94b:{NFSU2_TR(0x64a94b);
if(r1(R+518)){{goto L64a97c;}}
}
B64a94d:L64a94d:{c.instructions+=2;NFSU2_TR(0x64a94d);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64a94e:{NFSU2_TR(0x64a94e);
if(r1(R+518)){{goto L64a977;}}
}
B64a950:L64a950:{c.instructions+=2;NFSU2_TR(0x64a950);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64a951:{NFSU2_TR(0x64a951);
if(r1(R+518)){{goto L64a962;}}
}
B64a953:L64a953:{c.instructions+=2;NFSU2_TR(0x64a953);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64a954:{NFSU2_TR(0x64a954);
if(r1(R+518)){{goto L64a95d;}}
}
B64a956:L64a956:{c.instructions+=2;NFSU2_TR(0x64a956);
w4(R+0,u32(0x8876086cull));
}
B64a95b:{NFSU2_TR(0x64a95b);
{goto L64a98f;}
}
B64a95d:L64a95d:{c.instructions+=2;NFSU2_TR(0x64a95d);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B64a960:{NFSU2_TR(0x64a960);
{goto L64a98a;}
}
B64a962:L64a962:{c.instructions+=5;NFSU2_TR(0x64a962);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a965:{NFSU2_TR(0x64a965);
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
B64a967:{NFSU2_TR(0x64a967);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a96a:{NFSU2_TR(0x64a96a);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B64a96d:{NFSU2_TR(0x64a96d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L64a98a;}}
}
B64a96f:L64a96f:{c.instructions+=2;NFSU2_TR(0x64a96f);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B64a975:{NFSU2_TR(0x64a975);
{goto L64a98a;}
}
B64a977:L64a977:{c.instructions+=2;NFSU2_TR(0x64a977);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B64a97a:{NFSU2_TR(0x64a97a);
{goto L64a98a;}
}
B64a97c:L64a97c:{c.instructions+=5;NFSU2_TR(0x64a97c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64a97e:{NFSU2_TR(0x64a97e);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64a981:{NFSU2_TR(0x64a981);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B64a984:{NFSU2_TR(0x64a984);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a987:{NFSU2_TR(0x64a987);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B64a98a:L64a98a:{c.instructions+=2;NFSU2_TR(0x64a98a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a98d:{NFSU2_TR(0x64a98d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64a98f:L64a98f:{c.instructions+=2;NFSU2_TR(0x64a98f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64a990:{NFSU2_TR(0x64a990);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64a993:L64a993:{c.instructions+=8;NFSU2_TR(0x64a993);
__builtin_memmove((R+28),(R+28),4);
}
B64a995:{NFSU2_TR(0x64a995);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a996:{NFSU2_TR(0x64a996);
__builtin_memmove((R+20),(R+16),4);
}
B64a998:{NFSU2_TR(0x64a998);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B64a99b:{NFSU2_TR(0x64a99b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64a99d:{NFSU2_TR(0x64a99d);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64a9a0:{NFSU2_TR(0x64a9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a9a3:{NFSU2_TR(0x64a9a3);
if(r1(R+518)){{goto L64aa5d;}}
}
B64a9a9:L64a9a9:{c.instructions+=11;NFSU2_TR(0x64a9a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a9ac:{NFSU2_TR(0x64a9ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64a9af:{NFSU2_TR(0x64a9af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a9b0:{NFSU2_TR(0x64a9b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64a9b3:{NFSU2_TR(0x64a9b3);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a9b5:{NFSU2_TR(0x64a9b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64a9b6:{NFSU2_TR(0x64a9b6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64a9b8:{NFSU2_TR(0x64a9b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a9bb:{NFSU2_TR(0x64a9bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a9be:{NFSU2_TR(0x64a9be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a9c1:{NFSU2_TR(0x64a9c1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64a9c6;}}
}
B64a9c3:L64a9c3:{c.instructions+=1;NFSU2_TR(0x64a9c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a9c6:L64a9c6:{c.instructions+=3;NFSU2_TR(0x64a9c6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64a9c8:{NFSU2_TR(0x64a9c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a9cb:{NFSU2_TR(0x64a9cb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64a9d0;}}
}
B64a9cd:L64a9cd:{c.instructions+=1;NFSU2_TR(0x64a9cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a9d0:L64a9d0:{c.instructions+=3;NFSU2_TR(0x64a9d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a9d1:{NFSU2_TR(0x64a9d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64a9d4:{NFSU2_TR(0x64a9d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a9d5:L64a9d5:{c.instructions+=3;NFSU2_TR(0x64a9d5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64a9d8:{NFSU2_TR(0x64a9d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a9db:{NFSU2_TR(0x64a9db);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64aa2f;}}
}
B64a9dd:L64a9dd:{c.instructions+=2;NFSU2_TR(0x64a9dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64a9e0:{NFSU2_TR(0x64a9e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a9e3:L64a9e3:{c.instructions+=3;NFSU2_TR(0x64a9e3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64a9e5:{NFSU2_TR(0x64a9e5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64a9e8:{NFSU2_TR(0x64a9e8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64aa12;}}
}
B64a9ea:L64a9ea:{c.instructions+=1;NFSU2_TR(0x64a9ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64a9ed:L64a9ed:{c.instructions+=5;NFSU2_TR(0x64a9ed);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64a9ef:{NFSU2_TR(0x64a9ef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a9f0:{NFSU2_TR(0x64a9f0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64a9f3:{NFSU2_TR(0x64a9f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64a9f4:{NFSU2_TR(0x64a9f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64a9f9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a8ddu);}goto L64a8dd;}
}
B64a9f9:L64a9f9:{c.instructions+=3;NFSU2_TR(0x64a9f9);
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
B64a9fb:{NFSU2_TR(0x64a9fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64a9fe:{NFSU2_TR(0x64a9fe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64aa5a;}}
}
B64aa00:L64aa00:{c.instructions+=5;NFSU2_TR(0x64aa00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64aa03:{NFSU2_TR(0x64aa03);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64aa04:{NFSU2_TR(0x64aa04);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B64aa07:{NFSU2_TR(0x64aa07);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B64aa0a:{NFSU2_TR(0x64aa0a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a9edu);}goto L64a9ed;}}
}
B64aa0c:L64aa0c:{c.instructions+=2;NFSU2_TR(0x64aa0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64aa0f:{NFSU2_TR(0x64aa0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64aa12:L64aa12:{c.instructions+=2;NFSU2_TR(0x64aa12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B64aa14:{NFSU2_TR(0x64aa14);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64aa20;}}
}
B64aa16:L64aa16:{c.instructions+=2;NFSU2_TR(0x64aa16);
__builtin_memmove((R+4),(R+28),4);
}
B64aa18:{NFSU2_TR(0x64aa18);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B64aa1a:L64aa1a:{c.instructions+=3;NFSU2_TR(0x64aa1a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64aa1b:{NFSU2_TR(0x64aa1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64aa1e:{NFSU2_TR(0x64aa1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64aa1au);}goto L64aa1a;}}
}
B64aa20:L64aa20:{c.instructions+=5;NFSU2_TR(0x64aa20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64aa23:{NFSU2_TR(0x64aa23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64aa26:{NFSU2_TR(0x64aa26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64aa2a:{NFSU2_TR(0x64aa2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B64aa2d:{NFSU2_TR(0x64aa2d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a9e3u);}goto L64a9e3;}}
}
B64aa2f:L64aa2f:{c.instructions+=2;NFSU2_TR(0x64aa2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B64aa32:{NFSU2_TR(0x64aa32);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64aa48;}}
}
B64aa34:L64aa34:{c.instructions+=2;NFSU2_TR(0x64aa34);
__builtin_memmove((R+4),(R+0),4);
}
B64aa36:{NFSU2_TR(0x64aa36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B64aa39:L64aa39:{c.instructions+=2;NFSU2_TR(0x64aa39);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64aa3b:{NFSU2_TR(0x64aa3b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64aa45;}}
}
B64aa3d:L64aa3d:{c.instructions+=1;NFSU2_TR(0x64aa3d);
__builtin_memmove((R+8),(R+28),4);
}
B64aa3f:L64aa3f:{c.instructions+=3;NFSU2_TR(0x64aa3f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64aa40:{NFSU2_TR(0x64aa40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64aa43:{NFSU2_TR(0x64aa43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64aa3fu);}goto L64aa3f;}}
}
B64aa45:L64aa45:{c.instructions+=2;NFSU2_TR(0x64aa45);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64aa46:{NFSU2_TR(0x64aa46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64aa39u);}goto L64aa39;}}
}
B64aa48:L64aa48:{c.instructions+=5;NFSU2_TR(0x64aa48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64aa4b:{NFSU2_TR(0x64aa4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64aa4f:{NFSU2_TR(0x64aa4f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64aa51:{NFSU2_TR(0x64aa51);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64aa54:{NFSU2_TR(0x64aa54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a9d5u);}goto L64a9d5;}}
}
B64aa5a:L64aa5a:{c.instructions+=3;NFSU2_TR(0x64aa5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64aa5b:{NFSU2_TR(0x64aa5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64aa5c:{NFSU2_TR(0x64aa5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64aa5d:L64aa5d:{c.instructions+=3;NFSU2_TR(0x64aa5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64aa60:{NFSU2_TR(0x64aa60);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64aa61:{NFSU2_TR(0x64aa61);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64aa64:L64aa64:{c.instructions+=8;NFSU2_TR(0x64aa64);
__builtin_memmove((R+28),(R+28),4);
}
B64aa66:{NFSU2_TR(0x64aa66);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64aa67:{NFSU2_TR(0x64aa67);
__builtin_memmove((R+20),(R+16),4);
}
B64aa69:{NFSU2_TR(0x64aa69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B64aa6c:{NFSU2_TR(0x64aa6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64aa6f:{NFSU2_TR(0x64aa6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64aa73:{NFSU2_TR(0x64aa73);
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
B64aa75:{NFSU2_TR(0x64aa75);
if(r1(R+518)){{goto L64ab3d;}}
}
B64aa7b:L64aa7b:{c.instructions+=11;NFSU2_TR(0x64aa7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64aa7e:{NFSU2_TR(0x64aa7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64aa81:{NFSU2_TR(0x64aa81);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64aa82:{NFSU2_TR(0x64aa82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64aa85:{NFSU2_TR(0x64aa85);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64aa87:{NFSU2_TR(0x64aa87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64aa88:{NFSU2_TR(0x64aa88);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64aa8a:{NFSU2_TR(0x64aa8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64aa8d:{NFSU2_TR(0x64aa8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64aa90:{NFSU2_TR(0x64aa90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64aa93:{NFSU2_TR(0x64aa93);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64aa98;}}
}
B64aa95:L64aa95:{c.instructions+=1;NFSU2_TR(0x64aa95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64aa98:L64aa98:{c.instructions+=3;NFSU2_TR(0x64aa98);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64aa9a:{NFSU2_TR(0x64aa9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64aa9d:{NFSU2_TR(0x64aa9d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64aaa2;}}
}
B64aa9f:L64aa9f:{c.instructions+=1;NFSU2_TR(0x64aa9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64aaa2:L64aaa2:{c.instructions+=7;NFSU2_TR(0x64aaa2);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B64aaa5:{NFSU2_TR(0x64aaa5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64aaa6:{NFSU2_TR(0x64aaa6);
__builtin_memmove((R+24),(R+4),4);
}
B64aaa8:{NFSU2_TR(0x64aaa8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64aaa9:{NFSU2_TR(0x64aaa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64aaac:{NFSU2_TR(0x64aaac);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B64aaaf:{NFSU2_TR(0x64aaaf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64aab1:L64aab1:{c.instructions+=1;NFSU2_TR(0x64aab1);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L64aab3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64aab1u);}goto L64aab1;}
}
B64aab3:L64aab3:{c.instructions+=3;NFSU2_TR(0x64aab3);
__builtin_memmove((R+4),(R+24),4);
}
B64aab5:{NFSU2_TR(0x64aab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64aab8:{NFSU2_TR(0x64aab8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B64aabb:L64aabb:{c.instructions+=1;NFSU2_TR(0x64aabb);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L64aabd;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64aabbu);}goto L64aabb;}
}
B64aabd:L64aabd:{c.instructions+=3;NFSU2_TR(0x64aabd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64aac1:{NFSU2_TR(0x64aac1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64aac5:{NFSU2_TR(0x64aac5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64ab14;}}
}
B64aac7:L64aac7:{c.instructions+=2;NFSU2_TR(0x64aac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64aaca:{NFSU2_TR(0x64aaca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64aacd:L64aacd:{c.instructions+=3;NFSU2_TR(0x64aacd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64aacf:{NFSU2_TR(0x64aacf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64aad2:{NFSU2_TR(0x64aad2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64aaf7;}}
}
B64aad4:L64aad4:{c.instructions+=1;NFSU2_TR(0x64aad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64aad7:L64aad7:{c.instructions+=3;NFSU2_TR(0x64aad7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64aad8:{NFSU2_TR(0x64aad8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64aad9:{NFSU2_TR(0x64aad9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64aadeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a939u);}goto L64a939;}
}
B64aade:L64aade:{c.instructions+=3;NFSU2_TR(0x64aade);
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
B64aae0:{NFSU2_TR(0x64aae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64aae3:{NFSU2_TR(0x64aae3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64ab3a;}}
}
B64aae5:L64aae5:{c.instructions+=5;NFSU2_TR(0x64aae5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64aae8:{NFSU2_TR(0x64aae8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B64aae9:{NFSU2_TR(0x64aae9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B64aaec:{NFSU2_TR(0x64aaec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B64aaef:{NFSU2_TR(0x64aaef);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64aad7u);}goto L64aad7;}}
}
B64aaf1:L64aaf1:{c.instructions+=2;NFSU2_TR(0x64aaf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64aaf4:{NFSU2_TR(0x64aaf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64aaf7:L64aaf7:{c.instructions+=2;NFSU2_TR(0x64aaf7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B64aaf9:{NFSU2_TR(0x64aaf9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64ab05;}}
}
B64aafb:L64aafb:{c.instructions+=2;NFSU2_TR(0x64aafb);
__builtin_memmove((R+0),(R+12),4);
}
B64aafd:{NFSU2_TR(0x64aafd);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B64aaff:L64aaff:{c.instructions+=3;NFSU2_TR(0x64aaff);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64ab00:{NFSU2_TR(0x64ab00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ab03:{NFSU2_TR(0x64ab03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64aaffu);}goto L64aaff;}}
}
B64ab05:L64ab05:{c.instructions+=5;NFSU2_TR(0x64ab05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64ab08:{NFSU2_TR(0x64ab08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64ab0b:{NFSU2_TR(0x64ab0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64ab0f:{NFSU2_TR(0x64ab0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B64ab12:{NFSU2_TR(0x64ab12);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64aacdu);}goto L64aacd;}}
}
B64ab14:L64ab14:{c.instructions+=2;NFSU2_TR(0x64ab14);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B64ab17:{NFSU2_TR(0x64ab17);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64ab2d;}}
}
B64ab19:L64ab19:{c.instructions+=2;NFSU2_TR(0x64ab19);
__builtin_memmove((R+0),(R+8),4);
}
B64ab1b:{NFSU2_TR(0x64ab1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B64ab1e:L64ab1e:{c.instructions+=2;NFSU2_TR(0x64ab1e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64ab20:{NFSU2_TR(0x64ab20);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64ab2a;}}
}
B64ab22:L64ab22:{c.instructions+=1;NFSU2_TR(0x64ab22);
__builtin_memmove((R+4),(R+12),4);
}
B64ab24:L64ab24:{c.instructions+=3;NFSU2_TR(0x64ab24);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64ab25:{NFSU2_TR(0x64ab25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ab28:{NFSU2_TR(0x64ab28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ab24u);}goto L64ab24;}}
}
B64ab2a:L64ab2a:{c.instructions+=2;NFSU2_TR(0x64ab2a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64ab2b:{NFSU2_TR(0x64ab2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ab1eu);}goto L64ab1e;}}
}
B64ab2d:L64ab2d:{c.instructions+=4;NFSU2_TR(0x64ab2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64ab30:{NFSU2_TR(0x64ab30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64ab34:{NFSU2_TR(0x64ab34);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B64ab38:{NFSU2_TR(0x64ab38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64aabdu);}goto L64aabd;}}
}
B64ab3a:L64ab3a:{c.instructions+=3;NFSU2_TR(0x64ab3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64ab3b:{NFSU2_TR(0x64ab3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64ab3c:{NFSU2_TR(0x64ab3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64ab3d:L64ab3d:{c.instructions+=3;NFSU2_TR(0x64ab3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64ab40:{NFSU2_TR(0x64ab40);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64ab41:{NFSU2_TR(0x64ab41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64ab44:L64ab44:{c.instructions+=8;NFSU2_TR(0x64ab44);
__builtin_memmove((R+28),(R+28),4);
}
B64ab46:{NFSU2_TR(0x64ab46);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ab47:{NFSU2_TR(0x64ab47);
__builtin_memmove((R+20),(R+16),4);
}
B64ab49:{NFSU2_TR(0x64ab49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B64ab4c:{NFSU2_TR(0x64ab4c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64ab4e:{NFSU2_TR(0x64ab4e);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64ab51:{NFSU2_TR(0x64ab51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ab54:{NFSU2_TR(0x64ab54);
if(r1(R+518)){{goto L64ac0e;}}
}
B64ab5a:L64ab5a:{c.instructions+=11;NFSU2_TR(0x64ab5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ab5d:{NFSU2_TR(0x64ab5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64ab60:{NFSU2_TR(0x64ab60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ab61:{NFSU2_TR(0x64ab61);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64ab64:{NFSU2_TR(0x64ab64);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ab66:{NFSU2_TR(0x64ab66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64ab67:{NFSU2_TR(0x64ab67);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64ab69:{NFSU2_TR(0x64ab69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ab6c:{NFSU2_TR(0x64ab6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ab6f:{NFSU2_TR(0x64ab6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ab72:{NFSU2_TR(0x64ab72);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64ab77;}}
}
B64ab74:L64ab74:{c.instructions+=1;NFSU2_TR(0x64ab74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ab77:L64ab77:{c.instructions+=3;NFSU2_TR(0x64ab77);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64ab79:{NFSU2_TR(0x64ab79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ab7c:{NFSU2_TR(0x64ab7c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64ab81;}}
}
B64ab7e:L64ab7e:{c.instructions+=1;NFSU2_TR(0x64ab7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ab81:L64ab81:{c.instructions+=3;NFSU2_TR(0x64ab81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ab82:{NFSU2_TR(0x64ab82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ab85:{NFSU2_TR(0x64ab85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ab86:L64ab86:{c.instructions+=3;NFSU2_TR(0x64ab86);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ab89:{NFSU2_TR(0x64ab89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ab8c:{NFSU2_TR(0x64ab8c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64abe0;}}
}
B64ab8e:L64ab8e:{c.instructions+=2;NFSU2_TR(0x64ab8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ab91:{NFSU2_TR(0x64ab91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ab94:L64ab94:{c.instructions+=3;NFSU2_TR(0x64ab94);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64ab96:{NFSU2_TR(0x64ab96);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ab99:{NFSU2_TR(0x64ab99);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64abc3;}}
}
B64ab9b:L64ab9b:{c.instructions+=1;NFSU2_TR(0x64ab9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64ab9e:L64ab9e:{c.instructions+=5;NFSU2_TR(0x64ab9e);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64aba0:{NFSU2_TR(0x64aba0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64aba1:{NFSU2_TR(0x64aba1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64aba4:{NFSU2_TR(0x64aba4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64aba5:{NFSU2_TR(0x64aba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64abaaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a8ddu);}goto L64a8dd;}
}
B64abaa:L64abaa:{c.instructions+=3;NFSU2_TR(0x64abaa);
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
B64abac:{NFSU2_TR(0x64abac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64abaf:{NFSU2_TR(0x64abaf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64ac0b;}}
}
B64abb1:L64abb1:{c.instructions+=5;NFSU2_TR(0x64abb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64abb4:{NFSU2_TR(0x64abb4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64abb5:{NFSU2_TR(0x64abb5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B64abb8:{NFSU2_TR(0x64abb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B64abbb:{NFSU2_TR(0x64abbb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ab9eu);}goto L64ab9e;}}
}
B64abbd:L64abbd:{c.instructions+=2;NFSU2_TR(0x64abbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64abc0:{NFSU2_TR(0x64abc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64abc3:L64abc3:{c.instructions+=2;NFSU2_TR(0x64abc3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B64abc5:{NFSU2_TR(0x64abc5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64abd1;}}
}
B64abc7:L64abc7:{c.instructions+=2;NFSU2_TR(0x64abc7);
__builtin_memmove((R+4),(R+28),4);
}
B64abc9:{NFSU2_TR(0x64abc9);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B64abcb:L64abcb:{c.instructions+=3;NFSU2_TR(0x64abcb);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64abcc:{NFSU2_TR(0x64abcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64abcf:{NFSU2_TR(0x64abcf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64abcbu);}goto L64abcb;}}
}
B64abd1:L64abd1:{c.instructions+=5;NFSU2_TR(0x64abd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64abd4:{NFSU2_TR(0x64abd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64abd7:{NFSU2_TR(0x64abd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64abdb:{NFSU2_TR(0x64abdb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B64abde:{NFSU2_TR(0x64abde);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ab94u);}goto L64ab94;}}
}
B64abe0:L64abe0:{c.instructions+=2;NFSU2_TR(0x64abe0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B64abe3:{NFSU2_TR(0x64abe3);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64abf9;}}
}
B64abe5:L64abe5:{c.instructions+=2;NFSU2_TR(0x64abe5);
__builtin_memmove((R+4),(R+0),4);
}
B64abe7:{NFSU2_TR(0x64abe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B64abea:L64abea:{c.instructions+=2;NFSU2_TR(0x64abea);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64abec:{NFSU2_TR(0x64abec);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64abf6;}}
}
B64abee:L64abee:{c.instructions+=1;NFSU2_TR(0x64abee);
__builtin_memmove((R+8),(R+28),4);
}
B64abf0:L64abf0:{c.instructions+=3;NFSU2_TR(0x64abf0);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64abf1:{NFSU2_TR(0x64abf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64abf4:{NFSU2_TR(0x64abf4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64abf0u);}goto L64abf0;}}
}
B64abf6:L64abf6:{c.instructions+=2;NFSU2_TR(0x64abf6);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64abf7:{NFSU2_TR(0x64abf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64abeau);}goto L64abea;}}
}
B64abf9:L64abf9:{c.instructions+=5;NFSU2_TR(0x64abf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64abfc:{NFSU2_TR(0x64abfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64ac00:{NFSU2_TR(0x64ac00);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64ac02:{NFSU2_TR(0x64ac02);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64ac05:{NFSU2_TR(0x64ac05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ab86u);}goto L64ab86;}}
}
B64ac0b:L64ac0b:{c.instructions+=3;NFSU2_TR(0x64ac0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64ac0c:{NFSU2_TR(0x64ac0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64ac0d:{NFSU2_TR(0x64ac0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64ac0e:L64ac0e:{c.instructions+=3;NFSU2_TR(0x64ac0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64ac11:{NFSU2_TR(0x64ac11);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64ac12:{NFSU2_TR(0x64ac12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64ac15:L64ac15:{c.instructions+=8;NFSU2_TR(0x64ac15);
__builtin_memmove((R+28),(R+28),4);
}
B64ac17:{NFSU2_TR(0x64ac17);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ac18:{NFSU2_TR(0x64ac18);
__builtin_memmove((R+20),(R+16),4);
}
B64ac1a:{NFSU2_TR(0x64ac1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B64ac1d:{NFSU2_TR(0x64ac1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ac20:{NFSU2_TR(0x64ac20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64ac24:{NFSU2_TR(0x64ac24);
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
B64ac26:{NFSU2_TR(0x64ac26);
if(r1(R+518)){{goto L64acee;}}
}
B64ac2c:L64ac2c:{c.instructions+=11;NFSU2_TR(0x64ac2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64ac2f:{NFSU2_TR(0x64ac2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64ac32:{NFSU2_TR(0x64ac32);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ac33:{NFSU2_TR(0x64ac33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64ac36:{NFSU2_TR(0x64ac36);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ac38:{NFSU2_TR(0x64ac38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64ac39:{NFSU2_TR(0x64ac39);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64ac3b:{NFSU2_TR(0x64ac3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ac3e:{NFSU2_TR(0x64ac3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ac41:{NFSU2_TR(0x64ac41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ac44:{NFSU2_TR(0x64ac44);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64ac49;}}
}
B64ac46:L64ac46:{c.instructions+=1;NFSU2_TR(0x64ac46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ac49:L64ac49:{c.instructions+=3;NFSU2_TR(0x64ac49);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64ac4b:{NFSU2_TR(0x64ac4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ac4e:{NFSU2_TR(0x64ac4e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64ac53;}}
}
B64ac50:L64ac50:{c.instructions+=1;NFSU2_TR(0x64ac50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ac53:L64ac53:{c.instructions+=7;NFSU2_TR(0x64ac53);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B64ac56:{NFSU2_TR(0x64ac56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ac57:{NFSU2_TR(0x64ac57);
__builtin_memmove((R+24),(R+4),4);
}
B64ac59:{NFSU2_TR(0x64ac59);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ac5a:{NFSU2_TR(0x64ac5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64ac5d:{NFSU2_TR(0x64ac5d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B64ac60:{NFSU2_TR(0x64ac60);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64ac62:L64ac62:{c.instructions+=1;NFSU2_TR(0x64ac62);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L64ac64;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ac62u);}goto L64ac62;}
}
B64ac64:L64ac64:{c.instructions+=3;NFSU2_TR(0x64ac64);
__builtin_memmove((R+4),(R+24),4);
}
B64ac66:{NFSU2_TR(0x64ac66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ac69:{NFSU2_TR(0x64ac69);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B64ac6c:L64ac6c:{c.instructions+=1;NFSU2_TR(0x64ac6c);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L64ac6e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ac6cu);}goto L64ac6c;}
}
B64ac6e:L64ac6e:{c.instructions+=3;NFSU2_TR(0x64ac6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64ac72:{NFSU2_TR(0x64ac72);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ac76:{NFSU2_TR(0x64ac76);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64acc5;}}
}
B64ac78:L64ac78:{c.instructions+=2;NFSU2_TR(0x64ac78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64ac7b:{NFSU2_TR(0x64ac7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ac7e:L64ac7e:{c.instructions+=3;NFSU2_TR(0x64ac7e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64ac80:{NFSU2_TR(0x64ac80);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ac83:{NFSU2_TR(0x64ac83);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64aca8;}}
}
B64ac85:L64ac85:{c.instructions+=1;NFSU2_TR(0x64ac85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64ac88:L64ac88:{c.instructions+=3;NFSU2_TR(0x64ac88);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ac89:{NFSU2_TR(0x64ac89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ac8a:{NFSU2_TR(0x64ac8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ac8full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a939u);}goto L64a939;}
}
B64ac8f:L64ac8f:{c.instructions+=3;NFSU2_TR(0x64ac8f);
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
B64ac91:{NFSU2_TR(0x64ac91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ac94:{NFSU2_TR(0x64ac94);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64aceb;}}
}
B64ac96:L64ac96:{c.instructions+=5;NFSU2_TR(0x64ac96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ac99:{NFSU2_TR(0x64ac99);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B64ac9a:{NFSU2_TR(0x64ac9a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B64ac9d:{NFSU2_TR(0x64ac9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B64aca0:{NFSU2_TR(0x64aca0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ac88u);}goto L64ac88;}}
}
B64aca2:L64aca2:{c.instructions+=2;NFSU2_TR(0x64aca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64aca5:{NFSU2_TR(0x64aca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64aca8:L64aca8:{c.instructions+=2;NFSU2_TR(0x64aca8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B64acaa:{NFSU2_TR(0x64acaa);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64acb6;}}
}
B64acac:L64acac:{c.instructions+=2;NFSU2_TR(0x64acac);
__builtin_memmove((R+0),(R+12),4);
}
B64acae:{NFSU2_TR(0x64acae);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B64acb0:L64acb0:{c.instructions+=3;NFSU2_TR(0x64acb0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64acb1:{NFSU2_TR(0x64acb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64acb4:{NFSU2_TR(0x64acb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64acb0u);}goto L64acb0;}}
}
B64acb6:L64acb6:{c.instructions+=5;NFSU2_TR(0x64acb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64acb9:{NFSU2_TR(0x64acb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64acbc:{NFSU2_TR(0x64acbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64acc0:{NFSU2_TR(0x64acc0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B64acc3:{NFSU2_TR(0x64acc3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ac7eu);}goto L64ac7e;}}
}
B64acc5:L64acc5:{c.instructions+=2;NFSU2_TR(0x64acc5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B64acc8:{NFSU2_TR(0x64acc8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64acde;}}
}
B64acca:L64acca:{c.instructions+=2;NFSU2_TR(0x64acca);
__builtin_memmove((R+0),(R+8),4);
}
B64accc:{NFSU2_TR(0x64accc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B64accf:L64accf:{c.instructions+=2;NFSU2_TR(0x64accf);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64acd1:{NFSU2_TR(0x64acd1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64acdb;}}
}
B64acd3:L64acd3:{c.instructions+=1;NFSU2_TR(0x64acd3);
__builtin_memmove((R+4),(R+12),4);
}
B64acd5:L64acd5:{c.instructions+=3;NFSU2_TR(0x64acd5);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64acd6:{NFSU2_TR(0x64acd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64acd9:{NFSU2_TR(0x64acd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64acd5u);}goto L64acd5;}}
}
B64acdb:L64acdb:{c.instructions+=2;NFSU2_TR(0x64acdb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64acdc:{NFSU2_TR(0x64acdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64accfu);}goto L64accf;}}
}
B64acde:L64acde:{c.instructions+=4;NFSU2_TR(0x64acde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64ace1:{NFSU2_TR(0x64ace1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64ace5:{NFSU2_TR(0x64ace5);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B64ace9:{NFSU2_TR(0x64ace9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ac6eu);}goto L64ac6e;}}
}
B64aceb:L64aceb:{c.instructions+=3;NFSU2_TR(0x64aceb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64acec:{NFSU2_TR(0x64acec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64aced:{NFSU2_TR(0x64aced);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64acee:L64acee:{c.instructions+=3;NFSU2_TR(0x64acee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64acf1:{NFSU2_TR(0x64acf1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64acf2:{NFSU2_TR(0x64acf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64acf5:L64acf5:{c.instructions+=9;NFSU2_TR(0x64acf5);
__builtin_memmove((R+28),(R+28),4);
}
B64acf7:{NFSU2_TR(0x64acf7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64acf8:{NFSU2_TR(0x64acf8);
__builtin_memmove((R+20),(R+16),4);
}
B64acfa:{NFSU2_TR(0x64acfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B64acfd:{NFSU2_TR(0x64acfd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64acfe:{NFSU2_TR(0x64acfe);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64ad00:{NFSU2_TR(0x64ad00);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64ad03:{NFSU2_TR(0x64ad03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ad06:{NFSU2_TR(0x64ad06);
if(r1(R+518)){{goto L64addb;}}
}
B64ad0c:L64ad0c:{c.instructions+=11;NFSU2_TR(0x64ad0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ad0f:{NFSU2_TR(0x64ad0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64ad12:{NFSU2_TR(0x64ad12);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ad13:{NFSU2_TR(0x64ad13);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ad16:{NFSU2_TR(0x64ad16);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ad18:{NFSU2_TR(0x64ad18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64ad19:{NFSU2_TR(0x64ad19);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64ad1b:{NFSU2_TR(0x64ad1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ad1e:{NFSU2_TR(0x64ad1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ad21:{NFSU2_TR(0x64ad21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ad24:{NFSU2_TR(0x64ad24);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64ad29;}}
}
B64ad26:L64ad26:{c.instructions+=1;NFSU2_TR(0x64ad26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ad29:L64ad29:{c.instructions+=3;NFSU2_TR(0x64ad29);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64ad2b:{NFSU2_TR(0x64ad2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ad2e:{NFSU2_TR(0x64ad2e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64ad33;}}
}
B64ad30:L64ad30:{c.instructions+=1;NFSU2_TR(0x64ad30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ad33:L64ad33:{c.instructions+=2;NFSU2_TR(0x64ad33);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ad34:{NFSU2_TR(0x64ad34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64ad37:L64ad37:{c.instructions+=3;NFSU2_TR(0x64ad37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ad3a:{NFSU2_TR(0x64ad3a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64ad3c:{NFSU2_TR(0x64ad3c);
if(r1(R+518)){{goto L64adb2;}}
}
B64ad3e:L64ad3e:{c.instructions+=4;NFSU2_TR(0x64ad3e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64ad40:{NFSU2_TR(0x64ad40);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ad43:{NFSU2_TR(0x64ad43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ad46:{NFSU2_TR(0x64ad46);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64ad99;}}
}
B64ad48:L64ad48:{c.instructions+=3;NFSU2_TR(0x64ad48);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64ad4a:{NFSU2_TR(0x64ad4a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ad4d:{NFSU2_TR(0x64ad4d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64ad7f;}}
}
B64ad4f:L64ad4f:{c.instructions+=2;NFSU2_TR(0x64ad4f);
__builtin_memmove((R+24),(R+8),4);
}
B64ad51:{NFSU2_TR(0x64ad51);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B64ad54:L64ad54:{c.instructions+=7;NFSU2_TR(0x64ad54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64ad57:{NFSU2_TR(0x64ad57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64ad59:{NFSU2_TR(0x64ad59);
{u32 ea_=u32(r4(R+0)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64ad5c:{NFSU2_TR(0x64ad5c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ad5d:{NFSU2_TR(0x64ad5d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64ad60:{NFSU2_TR(0x64ad60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ad61:{NFSU2_TR(0x64ad61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ad66ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a8ddu);}goto L64a8dd;}
}
B64ad66:L64ad66:{c.instructions+=3;NFSU2_TR(0x64ad66);
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
B64ad68:{NFSU2_TR(0x64ad68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ad6b:{NFSU2_TR(0x64ad6b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64add9;}}
}
B64ad6d:L64ad6d:{c.instructions+=5;NFSU2_TR(0x64ad6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64ad70:{NFSU2_TR(0x64ad70);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64ad71:{NFSU2_TR(0x64ad71);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B64ad74:{NFSU2_TR(0x64ad74);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B64ad77:{NFSU2_TR(0x64ad77);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ad54u);}goto L64ad54;}}
}
B64ad79:L64ad79:{c.instructions+=2;NFSU2_TR(0x64ad79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64ad7c:{NFSU2_TR(0x64ad7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ad7f:L64ad7f:{c.instructions+=2;NFSU2_TR(0x64ad7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B64ad81:{NFSU2_TR(0x64ad81);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64ad8d;}}
}
B64ad83:L64ad83:{c.instructions+=2;NFSU2_TR(0x64ad83);
__builtin_memmove((R+4),(R+24),4);
}
B64ad85:{NFSU2_TR(0x64ad85);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B64ad87:L64ad87:{c.instructions+=3;NFSU2_TR(0x64ad87);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64ad88:{NFSU2_TR(0x64ad88);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64ad8b:{NFSU2_TR(0x64ad8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ad87u);}goto L64ad87;}}
}
B64ad8d:L64ad8d:{c.instructions+=5;NFSU2_TR(0x64ad8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64ad90:{NFSU2_TR(0x64ad90);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B64ad91:{NFSU2_TR(0x64ad91);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B64ad94:{NFSU2_TR(0x64ad94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ad97:{NFSU2_TR(0x64ad97);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ad48u);}goto L64ad48;}}
}
B64ad99:L64ad99:{c.instructions+=2;NFSU2_TR(0x64ad99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B64ad9b:{NFSU2_TR(0x64ad9b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64adc7;}}
}
B64ad9d:L64ad9d:{c.instructions+=2;NFSU2_TR(0x64ad9d);
__builtin_memmove((R+4),(R+0),4);
}
B64ad9f:{NFSU2_TR(0x64ad9f);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B64ada1:L64ada1:{c.instructions+=2;NFSU2_TR(0x64ada1);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64ada3:{NFSU2_TR(0x64ada3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64adad;}}
}
B64ada5:L64ada5:{c.instructions+=1;NFSU2_TR(0x64ada5);
__builtin_memmove((R+8),(R+24),4);
}
B64ada7:L64ada7:{c.instructions+=3;NFSU2_TR(0x64ada7);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64ada8:{NFSU2_TR(0x64ada8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64adab:{NFSU2_TR(0x64adab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ada7u);}goto L64ada7;}}
}
B64adad:L64adad:{c.instructions+=2;NFSU2_TR(0x64adad);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64adae:{NFSU2_TR(0x64adae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ada1u);}goto L64ada1;}}
}
B64adb0:L64adb0:{c.instructions+=1;NFSU2_TR(0x64adb0);
{goto L64adc7;}
}
B64adb2:L64adb2:{c.instructions+=2;NFSU2_TR(0x64adb2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64adb4:{NFSU2_TR(0x64adb4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64adc7;}}
}
B64adb6:L64adb6:{c.instructions+=1;NFSU2_TR(0x64adb6);
__builtin_memmove((R+8),(R+0),4);
}
B64adb8:L64adb8:{c.instructions+=2;NFSU2_TR(0x64adb8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64adba:{NFSU2_TR(0x64adba);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64adc4;}}
}
B64adbc:L64adbc:{c.instructions+=1;NFSU2_TR(0x64adbc);
__builtin_memmove((R+4),(R+24),4);
}
B64adbe:L64adbe:{c.instructions+=3;NFSU2_TR(0x64adbe);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64adbf:{NFSU2_TR(0x64adbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64adc2:{NFSU2_TR(0x64adc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64adbeu);}goto L64adbe;}}
}
B64adc4:L64adc4:{c.instructions+=2;NFSU2_TR(0x64adc4);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64adc5:{NFSU2_TR(0x64adc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64adb8u);}goto L64adb8;}}
}
B64adc7:L64adc7:{c.instructions+=5;NFSU2_TR(0x64adc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64adca:{NFSU2_TR(0x64adca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64adce:{NFSU2_TR(0x64adce);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64add0:{NFSU2_TR(0x64add0);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64add3:{NFSU2_TR(0x64add3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ad37u);}goto L64ad37;}}
}
B64add9:L64add9:{c.instructions+=2;NFSU2_TR(0x64add9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64adda:{NFSU2_TR(0x64adda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64addb:L64addb:{c.instructions+=4;NFSU2_TR(0x64addb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64adde:{NFSU2_TR(0x64adde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64addf:{NFSU2_TR(0x64addf);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64ade0:{NFSU2_TR(0x64ade0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64ade3:L64ade3:{c.instructions+=7;NFSU2_TR(0x64ade3);
__builtin_memmove((R+28),(R+28),4);
}
B64ade5:{NFSU2_TR(0x64ade5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ade6:{NFSU2_TR(0x64ade6);
__builtin_memmove((R+20),(R+16),4);
}
B64ade8:{NFSU2_TR(0x64ade8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B64adeb:{NFSU2_TR(0x64adeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64adef:{NFSU2_TR(0x64adef);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B64adf3:{NFSU2_TR(0x64adf3);
if(r1(R+518)){{goto L64aecc;}}
}
B64adf9:L64adf9:{c.instructions+=11;NFSU2_TR(0x64adf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64adfc:{NFSU2_TR(0x64adfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64adff:{NFSU2_TR(0x64adff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ae00:{NFSU2_TR(0x64ae00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64ae03:{NFSU2_TR(0x64ae03);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ae05:{NFSU2_TR(0x64ae05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64ae06:{NFSU2_TR(0x64ae06);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64ae08:{NFSU2_TR(0x64ae08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ae0b:{NFSU2_TR(0x64ae0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ae0e:{NFSU2_TR(0x64ae0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ae11:{NFSU2_TR(0x64ae11);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64ae16;}}
}
B64ae13:L64ae13:{c.instructions+=1;NFSU2_TR(0x64ae13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ae16:L64ae16:{c.instructions+=3;NFSU2_TR(0x64ae16);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64ae18:{NFSU2_TR(0x64ae18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ae1b:{NFSU2_TR(0x64ae1b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64ae20;}}
}
B64ae1d:L64ae1d:{c.instructions+=1;NFSU2_TR(0x64ae1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ae20:L64ae20:{c.instructions+=3;NFSU2_TR(0x64ae20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ae21:{NFSU2_TR(0x64ae21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ae24:{NFSU2_TR(0x64ae24);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ae25:L64ae25:{c.instructions+=4;NFSU2_TR(0x64ae25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64ae28:{NFSU2_TR(0x64ae28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B64ae2a:{NFSU2_TR(0x64ae2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64ae2c:{NFSU2_TR(0x64ae2c);
if(r1(R+518)){{goto L64aea3;}}
}
B64ae2e:L64ae2e:{c.instructions+=3;NFSU2_TR(0x64ae2e);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ae30:{NFSU2_TR(0x64ae30);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64ae32:{NFSU2_TR(0x64ae32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64ae33:L64ae33:{c.instructions+=1;NFSU2_TR(0x64ae33);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L64ae35;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ae33u);}goto L64ae33;}
}
B64ae35:L64ae35:{c.instructions+=4;NFSU2_TR(0x64ae35);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64ae37:{NFSU2_TR(0x64ae37);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ae3a:{NFSU2_TR(0x64ae3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ae3d:{NFSU2_TR(0x64ae3d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64ae8a;}}
}
B64ae3f:L64ae3f:{c.instructions+=3;NFSU2_TR(0x64ae3f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64ae41:{NFSU2_TR(0x64ae41);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ae44:{NFSU2_TR(0x64ae44);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64ae6d;}}
}
B64ae46:L64ae46:{c.instructions+=1;NFSU2_TR(0x64ae46);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B64ae49:L64ae49:{c.instructions+=6;NFSU2_TR(0x64ae49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64ae4c:{NFSU2_TR(0x64ae4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64ae4e:{NFSU2_TR(0x64ae4e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B64ae50:{NFSU2_TR(0x64ae50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ae51:{NFSU2_TR(0x64ae51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ae52:{NFSU2_TR(0x64ae52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ae57ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a939u);}goto L64a939;}
}
B64ae57:L64ae57:{c.instructions+=3;NFSU2_TR(0x64ae57);
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
B64ae59:{NFSU2_TR(0x64ae59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ae5c:{NFSU2_TR(0x64ae5c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64aec9;}}
}
B64ae5e:L64ae5e:{c.instructions+=5;NFSU2_TR(0x64ae5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ae61:{NFSU2_TR(0x64ae61);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64ae62:{NFSU2_TR(0x64ae62);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B64ae65:{NFSU2_TR(0x64ae65);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B64ae68:{NFSU2_TR(0x64ae68);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ae49u);}goto L64ae49;}}
}
B64ae6a:L64ae6a:{c.instructions+=1;NFSU2_TR(0x64ae6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64ae6d:L64ae6d:{c.instructions+=2;NFSU2_TR(0x64ae6d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B64ae6f:{NFSU2_TR(0x64ae6f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64ae7b;}}
}
B64ae71:L64ae71:{c.instructions+=2;NFSU2_TR(0x64ae71);
__builtin_memmove((R+0),(R+8),4);
}
B64ae73:{NFSU2_TR(0x64ae73);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B64ae75:L64ae75:{c.instructions+=3;NFSU2_TR(0x64ae75);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64ae76:{NFSU2_TR(0x64ae76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ae79:{NFSU2_TR(0x64ae79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ae75u);}goto L64ae75;}}
}
B64ae7b:L64ae7b:{c.instructions+=5;NFSU2_TR(0x64ae7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64ae7e:{NFSU2_TR(0x64ae7e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B64ae7f:{NFSU2_TR(0x64ae7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B64ae82:{NFSU2_TR(0x64ae82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ae85:{NFSU2_TR(0x64ae85);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ae3fu);}goto L64ae3f;}}
}
B64ae87:L64ae87:{c.instructions+=1;NFSU2_TR(0x64ae87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64ae8a:L64ae8a:{c.instructions+=2;NFSU2_TR(0x64ae8a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B64ae8c:{NFSU2_TR(0x64ae8c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64aeb8;}}
}
B64ae8e:L64ae8e:{c.instructions+=2;NFSU2_TR(0x64ae8e);
__builtin_memmove((R+0),(R+12),4);
}
B64ae90:{NFSU2_TR(0x64ae90);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B64ae92:L64ae92:{c.instructions+=2;NFSU2_TR(0x64ae92);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64ae94:{NFSU2_TR(0x64ae94);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64ae9e;}}
}
B64ae96:L64ae96:{c.instructions+=1;NFSU2_TR(0x64ae96);
__builtin_memmove((R+4),(R+8),4);
}
B64ae98:L64ae98:{c.instructions+=3;NFSU2_TR(0x64ae98);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64ae99:{NFSU2_TR(0x64ae99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ae9c:{NFSU2_TR(0x64ae9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ae98u);}goto L64ae98;}}
}
B64ae9e:L64ae9e:{c.instructions+=2;NFSU2_TR(0x64ae9e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64ae9f:{NFSU2_TR(0x64ae9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ae92u);}goto L64ae92;}}
}
B64aea1:L64aea1:{c.instructions+=1;NFSU2_TR(0x64aea1);
{goto L64aeb8;}
}
B64aea3:L64aea3:{c.instructions+=2;NFSU2_TR(0x64aea3);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64aea5:{NFSU2_TR(0x64aea5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64aeb8;}}
}
B64aea7:L64aea7:{c.instructions+=1;NFSU2_TR(0x64aea7);
__builtin_memmove((R+4),(R+12),4);
}
B64aea9:L64aea9:{c.instructions+=2;NFSU2_TR(0x64aea9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64aeab:{NFSU2_TR(0x64aeab);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64aeb5;}}
}
B64aead:L64aead:{c.instructions+=1;NFSU2_TR(0x64aead);
__builtin_memmove((R+0),(R+8),4);
}
B64aeaf:L64aeaf:{c.instructions+=3;NFSU2_TR(0x64aeaf);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64aeb0:{NFSU2_TR(0x64aeb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64aeb3:{NFSU2_TR(0x64aeb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64aeafu);}goto L64aeaf;}}
}
B64aeb5:L64aeb5:{c.instructions+=2;NFSU2_TR(0x64aeb5);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64aeb6:{NFSU2_TR(0x64aeb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64aea9u);}goto L64aea9;}}
}
B64aeb8:L64aeb8:{c.instructions+=4;NFSU2_TR(0x64aeb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64aebb:{NFSU2_TR(0x64aebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64aebf:{NFSU2_TR(0x64aebf);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B64aec3:{NFSU2_TR(0x64aec3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ae25u);}goto L64ae25;}}
}
B64aec9:L64aec9:{c.instructions+=3;NFSU2_TR(0x64aec9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64aeca:{NFSU2_TR(0x64aeca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64aecb:{NFSU2_TR(0x64aecb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64aecc:L64aecc:{c.instructions+=3;NFSU2_TR(0x64aecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64aecf:{NFSU2_TR(0x64aecf);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64aed0:{NFSU2_TR(0x64aed0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64aed3:L64aed3:{c.instructions+=9;NFSU2_TR(0x64aed3);
__builtin_memmove((R+28),(R+28),4);
}
B64aed5:{NFSU2_TR(0x64aed5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64aed6:{NFSU2_TR(0x64aed6);
__builtin_memmove((R+20),(R+16),4);
}
B64aed8:{NFSU2_TR(0x64aed8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B64aedb:{NFSU2_TR(0x64aedb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64aedc:{NFSU2_TR(0x64aedc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64aede:{NFSU2_TR(0x64aede);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64aee1:{NFSU2_TR(0x64aee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64aee4:{NFSU2_TR(0x64aee4);
if(r1(R+518)){{goto L64afb9;}}
}
B64aeea:L64aeea:{c.instructions+=11;NFSU2_TR(0x64aeea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64aeed:{NFSU2_TR(0x64aeed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64aef0:{NFSU2_TR(0x64aef0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64aef1:{NFSU2_TR(0x64aef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64aef4:{NFSU2_TR(0x64aef4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64aef6:{NFSU2_TR(0x64aef6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64aef7:{NFSU2_TR(0x64aef7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64aef9:{NFSU2_TR(0x64aef9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64aefc:{NFSU2_TR(0x64aefc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64aeff:{NFSU2_TR(0x64aeff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64af02:{NFSU2_TR(0x64af02);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64af07;}}
}
B64af04:L64af04:{c.instructions+=1;NFSU2_TR(0x64af04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64af07:L64af07:{c.instructions+=3;NFSU2_TR(0x64af07);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64af09:{NFSU2_TR(0x64af09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64af0c:{NFSU2_TR(0x64af0c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64af11;}}
}
B64af0e:L64af0e:{c.instructions+=1;NFSU2_TR(0x64af0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64af11:L64af11:{c.instructions+=2;NFSU2_TR(0x64af11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64af12:{NFSU2_TR(0x64af12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64af15:L64af15:{c.instructions+=3;NFSU2_TR(0x64af15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64af18:{NFSU2_TR(0x64af18);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64af1a:{NFSU2_TR(0x64af1a);
if(r1(R+518)){{goto L64af90;}}
}
B64af1c:L64af1c:{c.instructions+=4;NFSU2_TR(0x64af1c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64af1e:{NFSU2_TR(0x64af1e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64af21:{NFSU2_TR(0x64af21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64af24:{NFSU2_TR(0x64af24);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64af77;}}
}
B64af26:L64af26:{c.instructions+=3;NFSU2_TR(0x64af26);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64af28:{NFSU2_TR(0x64af28);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64af2b:{NFSU2_TR(0x64af2b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64af5d;}}
}
B64af2d:L64af2d:{c.instructions+=2;NFSU2_TR(0x64af2d);
__builtin_memmove((R+28),(R+8),4);
}
B64af2f:{NFSU2_TR(0x64af2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B64af32:L64af32:{c.instructions+=7;NFSU2_TR(0x64af32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64af35:{NFSU2_TR(0x64af35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64af37:{NFSU2_TR(0x64af37);
{u32 ea_=u32(r4(R+0)+r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64af3a:{NFSU2_TR(0x64af3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64af3b:{NFSU2_TR(0x64af3b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64af3e:{NFSU2_TR(0x64af3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64af3f:{NFSU2_TR(0x64af3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64af44ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64a8ddu);}goto L64a8dd;}
}
B64af44:L64af44:{c.instructions+=3;NFSU2_TR(0x64af44);
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
B64af46:{NFSU2_TR(0x64af46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64af49:{NFSU2_TR(0x64af49);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64afb7;}}
}
B64af4b:L64af4b:{c.instructions+=5;NFSU2_TR(0x64af4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64af4e:{NFSU2_TR(0x64af4e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64af4f:{NFSU2_TR(0x64af4f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B64af52:{NFSU2_TR(0x64af52);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B64af55:{NFSU2_TR(0x64af55);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64af32u);}goto L64af32;}}
}
B64af57:L64af57:{c.instructions+=2;NFSU2_TR(0x64af57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64af5a:{NFSU2_TR(0x64af5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64af5d:L64af5d:{c.instructions+=2;NFSU2_TR(0x64af5d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B64af5f:{NFSU2_TR(0x64af5f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64af6b;}}
}
B64af61:L64af61:{c.instructions+=2;NFSU2_TR(0x64af61);
__builtin_memmove((R+4),(R+28),4);
}
B64af63:{NFSU2_TR(0x64af63);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B64af65:L64af65:{c.instructions+=3;NFSU2_TR(0x64af65);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64af66:{NFSU2_TR(0x64af66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64af69:{NFSU2_TR(0x64af69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64af65u);}goto L64af65;}}
}
B64af6b:L64af6b:{c.instructions+=5;NFSU2_TR(0x64af6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64af6e:{NFSU2_TR(0x64af6e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B64af6f:{NFSU2_TR(0x64af6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B64af72:{NFSU2_TR(0x64af72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64af75:{NFSU2_TR(0x64af75);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64af26u);}goto L64af26;}}
}
B64af77:L64af77:{c.instructions+=2;NFSU2_TR(0x64af77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B64af79:{NFSU2_TR(0x64af79);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64afa5;}}
}
B64af7b:L64af7b:{c.instructions+=2;NFSU2_TR(0x64af7b);
__builtin_memmove((R+4),(R+0),4);
}
B64af7d:{NFSU2_TR(0x64af7d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B64af7f:L64af7f:{c.instructions+=2;NFSU2_TR(0x64af7f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64af81:{NFSU2_TR(0x64af81);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64af8b;}}
}
B64af83:L64af83:{c.instructions+=1;NFSU2_TR(0x64af83);
__builtin_memmove((R+8),(R+28),4);
}
B64af85:L64af85:{c.instructions+=3;NFSU2_TR(0x64af85);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64af86:{NFSU2_TR(0x64af86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64af89:{NFSU2_TR(0x64af89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64af85u);}goto L64af85;}}
}
B64af8b:L64af8b:{c.instructions+=2;NFSU2_TR(0x64af8b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64af8c:{NFSU2_TR(0x64af8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64af7fu);}goto L64af7f;}}
}
B64af8e:L64af8e:{c.instructions+=1;NFSU2_TR(0x64af8e);
{goto L64afa5;}
}
B64af90:L64af90:{c.instructions+=2;NFSU2_TR(0x64af90);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64af92:{NFSU2_TR(0x64af92);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64afa5;}}
}
B64af94:L64af94:{c.instructions+=1;NFSU2_TR(0x64af94);
__builtin_memmove((R+8),(R+0),4);
}
B64af96:L64af96:{c.instructions+=2;NFSU2_TR(0x64af96);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64af98:{NFSU2_TR(0x64af98);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64afa2;}}
}
B64af9a:L64af9a:{c.instructions+=1;NFSU2_TR(0x64af9a);
__builtin_memmove((R+4),(R+28),4);
}
B64af9c:L64af9c:{c.instructions+=3;NFSU2_TR(0x64af9c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64af9d:{NFSU2_TR(0x64af9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64afa0:{NFSU2_TR(0x64afa0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64af9cu);}goto L64af9c;}}
}
B64afa2:L64afa2:{c.instructions+=2;NFSU2_TR(0x64afa2);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64afa3:{NFSU2_TR(0x64afa3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64af96u);}goto L64af96;}}
}
B64afa5:L64afa5:{c.instructions+=5;NFSU2_TR(0x64afa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64afa8:{NFSU2_TR(0x64afa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64afac:{NFSU2_TR(0x64afac);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64afae:{NFSU2_TR(0x64afae);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64afb1:{NFSU2_TR(0x64afb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64af15u);}goto L64af15;}}
}
B64afb7:L64afb7:{c.instructions+=2;NFSU2_TR(0x64afb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64afb8:{NFSU2_TR(0x64afb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64afb9:L64afb9:{c.instructions+=4;NFSU2_TR(0x64afb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64afbc:{NFSU2_TR(0x64afbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64afbd:{NFSU2_TR(0x64afbd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64afbe:{NFSU2_TR(0x64afbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64afc1:L64afc1:{c.instructions+=7;NFSU2_TR(0x64afc1);
__builtin_memmove((R+28),(R+28),4);
}
B64afc3:{NFSU2_TR(0x64afc3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64afc4:{NFSU2_TR(0x64afc4);
__builtin_memmove((R+20),(R+16),4);
}
B64afc6:{NFSU2_TR(0x64afc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B64afc9:{NFSU2_TR(0x64afc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64afcd:{NFSU2_TR(0x64afcd);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B64afd1:{NFSU2_TR(0x64afd1);
if(r1(R+518)){TAIL_STATIC(0x64b0acu,64b);}
}
B64afd7:L64afd7:{c.instructions+=11;NFSU2_TR(0x64afd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64afda:{NFSU2_TR(0x64afda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64afdd:{NFSU2_TR(0x64afdd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64afde:{NFSU2_TR(0x64afde);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64afe1:{NFSU2_TR(0x64afe1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64afe3:{NFSU2_TR(0x64afe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64afe4:{NFSU2_TR(0x64afe4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64afe6:{NFSU2_TR(0x64afe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64afe9:{NFSU2_TR(0x64afe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64afec:{NFSU2_TR(0x64afec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64afef:{NFSU2_TR(0x64afef);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64aff4;}}
}
B64aff1:L64aff1:{c.instructions+=1;NFSU2_TR(0x64aff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64aff4:L64aff4:{c.instructions+=3;NFSU2_TR(0x64aff4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64aff6:{NFSU2_TR(0x64aff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64aff9:{NFSU2_TR(0x64aff9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64affe;}}
}
B64affb:L64affb:{c.instructions+=1;NFSU2_TR(0x64affb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64affe:L64affe:{c.instructions+=2;NFSU2_TR(0x64affe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64afff:{NFSU2_TR(0x64afff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
TAIL_STATIC(0x64b002u,64b);
}
XIT:NFSU2_TR_EXIT(0x64a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
