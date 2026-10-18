#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_675(u8* __restrict R,Cpu& c);
u32 body_678(u8* __restrict R,Cpu& c);
u32 body_67b(u8* __restrict R,Cpu& c);
u32 body_67f(u8* __restrict R,Cpu& c);
u32 body_680(u8* __restrict R,Cpu& c);
u32 body_681(u8* __restrict R,Cpu& c);
u32 body_682(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x67a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x67a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_67a(u8* __restrict R,Cpu& c);
u32 page_67a(Cpu& c){return body_67a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_67a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x67a001:goto L67a001;
case 0x67a004:c.instructions+=6;goto B67a004;
case 0x67a007:c.instructions+=5;goto B67a007;
case 0x67a009:c.instructions+=4;goto B67a009;
case 0x67a00c:c.instructions+=3;goto B67a00c;
case 0x67a00f:c.instructions+=2;goto B67a00f;
case 0x67a012:c.instructions+=1;goto B67a012;
case 0x67a014:goto L67a014;
case 0x67a017:c.instructions+=4;goto B67a017;
case 0x67a019:c.instructions+=3;goto B67a019;
case 0x67a01c:c.instructions+=2;goto B67a01c;
case 0x67a01f:c.instructions+=1;goto B67a01f;
case 0x67a022:goto L67a022;
case 0x67a025:c.instructions+=6;goto B67a025;
case 0x67a027:c.instructions+=5;goto B67a027;
case 0x67a02a:c.instructions+=4;goto B67a02a;
case 0x67a02c:c.instructions+=3;goto B67a02c;
case 0x67a02e:c.instructions+=2;goto B67a02e;
case 0x67a031:c.instructions+=1;goto B67a031;
case 0x67a033:goto L67a033;
case 0x67a036:c.instructions+=2;goto B67a036;
case 0x67a039:c.instructions+=1;goto B67a039;
case 0x67a03b:goto L67a03b;
case 0x67a03e:c.instructions+=10;goto B67a03e;
case 0x67a041:c.instructions+=9;goto B67a041;
case 0x67a044:c.instructions+=8;goto B67a044;
case 0x67a046:c.instructions+=7;goto B67a046;
case 0x67a049:c.instructions+=6;goto B67a049;
case 0x67a04b:c.instructions+=5;goto B67a04b;
case 0x67a04d:c.instructions+=4;goto B67a04d;
case 0x67a04f:c.instructions+=3;goto B67a04f;
case 0x67a051:c.instructions+=2;goto B67a051;
case 0x67a054:c.instructions+=1;goto B67a054;
case 0x67a056:goto L67a056;
case 0x67a059:c.instructions+=6;goto B67a059;
case 0x67a05c:c.instructions+=5;goto B67a05c;
case 0x67a05e:c.instructions+=4;goto B67a05e;
case 0x67a061:c.instructions+=3;goto B67a061;
case 0x67a064:c.instructions+=2;goto B67a064;
case 0x67a067:c.instructions+=1;goto B67a067;
case 0x67a069:goto L67a069;
case 0x67a06c:c.instructions+=1;goto B67a06c;
case 0x67a06e:goto L67a06e;
case 0x67a071:c.instructions+=1;goto B67a071;
case 0x67a074:goto L67a074;
case 0x67a077:c.instructions+=4;goto B67a077;
case 0x67a078:c.instructions+=3;goto B67a078;
case 0x67a07b:c.instructions+=2;goto B67a07b;
case 0x67a07e:c.instructions+=1;goto B67a07e;
case 0x67a080:goto L67a080;
case 0x67a083:c.instructions+=4;goto B67a083;
case 0x67a085:c.instructions+=3;goto B67a085;
case 0x67a088:c.instructions+=2;goto B67a088;
case 0x67a08b:c.instructions+=1;goto B67a08b;
case 0x67a090:goto L67a090;
case 0x67a093:c.instructions+=8;goto B67a093;
case 0x67a096:c.instructions+=7;goto B67a096;
case 0x67a098:c.instructions+=6;goto B67a098;
case 0x67a09a:c.instructions+=5;goto B67a09a;
case 0x67a09d:c.instructions+=4;goto B67a09d;
case 0x67a0a0:c.instructions+=3;goto B67a0a0;
case 0x67a0a3:c.instructions+=2;goto B67a0a3;
case 0x67a0a6:c.instructions+=1;goto B67a0a6;
case 0x67a0a8:goto L67a0a8;
case 0x67a0ae:goto L67a0ae;
case 0x67a0af:c.instructions+=6;goto B67a0af;
case 0x67a0b0:c.instructions+=5;goto B67a0b0;
case 0x67a0b3:c.instructions+=4;goto B67a0b3;
case 0x67a0b4:c.instructions+=3;goto B67a0b4;
case 0x67a0b5:c.instructions+=2;goto B67a0b5;
case 0x67a0b8:c.instructions+=1;goto B67a0b8;
case 0x67a0bd:goto L67a0bd;
case 0x67a0c1:c.instructions+=11;goto B67a0c1;
case 0x67a0c2:c.instructions+=10;goto B67a0c2;
case 0x67a0c3:c.instructions+=9;goto B67a0c3;
case 0x67a0c9:c.instructions+=8;goto B67a0c9;
case 0x67a0cf:c.instructions+=7;goto B67a0cf;
case 0x67a0d0:c.instructions+=6;goto B67a0d0;
case 0x67a0d3:c.instructions+=5;goto B67a0d3;
case 0x67a0d4:c.instructions+=4;goto B67a0d4;
case 0x67a0d9:c.instructions+=3;goto B67a0d9;
case 0x67a0dc:c.instructions+=2;goto B67a0dc;
case 0x67a0de:c.instructions+=1;goto B67a0de;
case 0x67a0e3:goto L67a0e3;
case 0x67a0e5:c.instructions+=2;goto B67a0e5;
case 0x67a0e7:c.instructions+=1;goto B67a0e7;
case 0x67a0ed:goto L67a0ed;
case 0x67a0f0:c.instructions+=20;goto B67a0f0;
case 0x67a0f3:c.instructions+=19;goto B67a0f3;
case 0x67a0f9:c.instructions+=18;goto B67a0f9;
case 0x67a0fc:c.instructions+=17;goto B67a0fc;
case 0x67a0ff:c.instructions+=16;goto B67a0ff;
case 0x67a102:c.instructions+=15;goto B67a102;
case 0x67a105:c.instructions+=14;goto B67a105;
case 0x67a106:c.instructions+=13;goto B67a106;
case 0x67a107:c.instructions+=12;goto B67a107;
case 0x67a10a:c.instructions+=11;goto B67a10a;
case 0x67a10d:c.instructions+=10;goto B67a10d;
case 0x67a110:c.instructions+=9;goto B67a110;
case 0x67a113:c.instructions+=8;goto B67a113;
case 0x67a118:c.instructions+=7;goto B67a118;
case 0x67a11b:c.instructions+=6;goto B67a11b;
case 0x67a120:c.instructions+=5;goto B67a120;
case 0x67a121:c.instructions+=4;goto B67a121;
case 0x67a124:c.instructions+=3;goto B67a124;
case 0x67a126:c.instructions+=2;goto B67a126;
case 0x67a12d:c.instructions+=1;goto B67a12d;
case 0x67a132:goto L67a132;
case 0x67a134:c.instructions+=2;goto B67a134;
case 0x67a136:c.instructions+=1;goto B67a136;
case 0x67a13c:goto L67a13c;
case 0x67a13f:c.instructions+=9;goto B67a13f;
case 0x67a140:c.instructions+=8;goto B67a140;
case 0x67a141:c.instructions+=7;goto B67a141;
case 0x67a144:c.instructions+=6;goto B67a144;
case 0x67a149:c.instructions+=5;goto B67a149;
case 0x67a14c:c.instructions+=4;goto B67a14c;
case 0x67a14e:c.instructions+=3;goto B67a14e;
case 0x67a14f:c.instructions+=2;goto B67a14f;
case 0x67a152:c.instructions+=1;goto B67a152;
case 0x67a157:goto L67a157;
case 0x67a159:c.instructions+=2;goto B67a159;
case 0x67a15b:c.instructions+=1;goto B67a15b;
case 0x67a161:goto L67a161;
case 0x67a164:c.instructions+=2;goto B67a164;
case 0x67a166:c.instructions+=1;goto B67a166;
case 0x67a16c:goto L67a16c;
case 0x67a16f:c.instructions+=7;goto B67a16f;
case 0x67a172:c.instructions+=6;goto B67a172;
case 0x67a174:c.instructions+=5;goto B67a174;
case 0x67a177:c.instructions+=4;goto B67a177;
case 0x67a17a:c.instructions+=3;goto B67a17a;
case 0x67a17c:c.instructions+=2;goto B67a17c;
case 0x67a17f:c.instructions+=1;goto B67a17f;
case 0x67a182:goto L67a182;
case 0x67a185:c.instructions+=12;goto B67a185;
case 0x67a188:c.instructions+=11;goto B67a188;
case 0x67a18a:c.instructions+=10;goto B67a18a;
case 0x67a18d:c.instructions+=9;goto B67a18d;
case 0x67a190:c.instructions+=8;goto B67a190;
case 0x67a193:c.instructions+=7;goto B67a193;
case 0x67a196:c.instructions+=6;goto B67a196;
case 0x67a199:c.instructions+=5;goto B67a199;
case 0x67a19b:c.instructions+=4;goto B67a19b;
case 0x67a19e:c.instructions+=3;goto B67a19e;
case 0x67a1a0:c.instructions+=2;goto B67a1a0;
case 0x67a1a3:c.instructions+=1;goto B67a1a3;
case 0x67a1a5:goto L67a1a5;
case 0x67a1a7:c.instructions+=12;goto B67a1a7;
case 0x67a1aa:c.instructions+=11;goto B67a1aa;
case 0x67a1ad:c.instructions+=10;goto B67a1ad;
case 0x67a1b1:c.instructions+=9;goto B67a1b1;
case 0x67a1b3:c.instructions+=8;goto B67a1b3;
case 0x67a1b6:c.instructions+=7;goto B67a1b6;
case 0x67a1b9:c.instructions+=6;goto B67a1b9;
case 0x67a1bc:c.instructions+=5;goto B67a1bc;
case 0x67a1be:c.instructions+=4;goto B67a1be;
case 0x67a1c0:c.instructions+=3;goto B67a1c0;
case 0x67a1c2:c.instructions+=2;goto B67a1c2;
case 0x67a1c5:c.instructions+=1;goto B67a1c5;
case 0x67a1c7:goto L67a1c7;
case 0x67a1ca:c.instructions+=2;goto B67a1ca;
case 0x67a1cf:c.instructions+=1;goto B67a1cf;
case 0x67a1d1:goto L67a1d1;
case 0x67a1d4:c.instructions+=20;goto B67a1d4;
case 0x67a1d7:c.instructions+=19;goto B67a1d7;
case 0x67a1da:c.instructions+=18;goto B67a1da;
case 0x67a1dd:c.instructions+=17;goto B67a1dd;
case 0x67a1df:c.instructions+=16;goto B67a1df;
case 0x67a1e2:c.instructions+=15;goto B67a1e2;
case 0x67a1e5:c.instructions+=14;goto B67a1e5;
case 0x67a1e7:c.instructions+=13;goto B67a1e7;
case 0x67a1ea:c.instructions+=12;goto B67a1ea;
case 0x67a1f0:c.instructions+=11;goto B67a1f0;
case 0x67a1f3:c.instructions+=10;goto B67a1f3;
case 0x67a1f6:c.instructions+=9;goto B67a1f6;
case 0x67a1f9:c.instructions+=8;goto B67a1f9;
case 0x67a1fc:c.instructions+=7;goto B67a1fc;
case 0x67a1ff:c.instructions+=6;goto B67a1ff;
case 0x67a202:c.instructions+=5;goto B67a202;
case 0x67a208:c.instructions+=4;goto B67a208;
case 0x67a20b:c.instructions+=3;goto B67a20b;
case 0x67a20e:c.instructions+=2;goto B67a20e;
case 0x67a211:c.instructions+=1;goto B67a211;
case 0x67a217:goto L67a217;
case 0x67a21a:c.instructions+=1;goto B67a21a;
case 0x67a21c:goto L67a21c;
case 0x67a21f:c.instructions+=1;goto B67a21f;
case 0x67a221:goto L67a221;
case 0x67a222:c.instructions+=3;goto B67a222;
case 0x67a225:c.instructions+=2;goto B67a225;
case 0x67a227:c.instructions+=1;goto B67a227;
case 0x67a22c:goto L67a22c;
case 0x67a22e:c.instructions+=2;goto B67a22e;
case 0x67a230:c.instructions+=1;goto B67a230;
case 0x67a236:goto L67a236;
case 0x67a23a:c.instructions+=6;goto B67a23a;
case 0x67a23b:c.instructions+=5;goto B67a23b;
case 0x67a23e:c.instructions+=4;goto B67a23e;
case 0x67a23f:c.instructions+=3;goto B67a23f;
case 0x67a242:c.instructions+=2;goto B67a242;
case 0x67a244:c.instructions+=1;goto B67a244;
case 0x67a249:goto L67a249;
case 0x67a24b:c.instructions+=2;goto B67a24b;
case 0x67a24d:c.instructions+=1;goto B67a24d;
case 0x67a253:goto L67a253;
case 0x67a256:c.instructions+=2;goto B67a256;
case 0x67a258:c.instructions+=1;goto B67a258;
case 0x67a25a:goto L67a25a;
case 0x67a25d:c.instructions+=3;goto B67a25d;
case 0x67a260:c.instructions+=2;goto B67a260;
case 0x67a262:c.instructions+=1;goto B67a262;
case 0x67a265:goto L67a265;
case 0x67a268:c.instructions+=6;goto B67a268;
case 0x67a26b:c.instructions+=5;goto B67a26b;
case 0x67a26e:c.instructions+=4;goto B67a26e;
case 0x67a270:c.instructions+=3;goto B67a270;
case 0x67a273:c.instructions+=2;goto B67a273;
case 0x67a276:c.instructions+=1;goto B67a276;
case 0x67a278:goto L67a278;
case 0x67a27e:c.instructions+=4;goto B67a27e;
case 0x67a27f:c.instructions+=3;goto B67a27f;
case 0x67a282:c.instructions+=2;goto B67a282;
case 0x67a284:c.instructions+=1;goto B67a284;
case 0x67a289:goto L67a289;
case 0x67a28b:c.instructions+=1;goto B67a28b;
case 0x67a28d:goto L67a28d;
case 0x67a293:c.instructions+=4;goto B67a293;
case 0x67a299:c.instructions+=3;goto B67a299;
case 0x67a29b:c.instructions+=2;goto B67a29b;
case 0x67a29e:c.instructions+=1;goto B67a29e;
case 0x67a2a0:goto L67a2a0;
case 0x67a2a6:c.instructions+=4;goto B67a2a6;
case 0x67a2ac:c.instructions+=3;goto B67a2ac;
case 0x67a2ae:c.instructions+=2;goto B67a2ae;
case 0x67a2b1:c.instructions+=1;goto B67a2b1;
case 0x67a2b3:goto L67a2b3;
case 0x67a2b6:c.instructions+=1;goto B67a2b6;
case 0x67a2b8:goto L67a2b8;
case 0x67a2bb:c.instructions+=1;goto B67a2bb;
case 0x67a2bd:goto L67a2bd;
case 0x67a2be:c.instructions+=3;goto B67a2be;
case 0x67a2c1:c.instructions+=2;goto B67a2c1;
case 0x67a2c3:c.instructions+=1;goto B67a2c3;
case 0x67a2c8:goto L67a2c8;
case 0x67a2ca:c.instructions+=2;goto B67a2ca;
case 0x67a2cc:c.instructions+=1;goto B67a2cc;
case 0x67a2d2:goto L67a2d2;
case 0x67a2d5:c.instructions+=2;goto B67a2d5;
case 0x67a2d7:c.instructions+=1;goto B67a2d7;
case 0x67a2dd:goto L67a2dd;
case 0x67a2e0:c.instructions+=3;goto B67a2e0;
case 0x67a2e3:c.instructions+=2;goto B67a2e3;
case 0x67a2e5:c.instructions+=1;goto B67a2e5;
case 0x67a2e8:goto L67a2e8;
case 0x67a2eb:c.instructions+=5;goto B67a2eb;
case 0x67a2ee:c.instructions+=4;goto B67a2ee;
case 0x67a2f1:c.instructions+=3;goto B67a2f1;
case 0x67a2f4:c.instructions+=2;goto B67a2f4;
case 0x67a2f6:c.instructions+=1;goto B67a2f6;
case 0x67a2f8:goto L67a2f8;
case 0x67a2fb:c.instructions+=1;goto B67a2fb;
case 0x67a2fd:goto L67a2fd;
case 0x67a300:c.instructions+=2;goto B67a300;
case 0x67a303:c.instructions+=1;goto B67a303;
case 0x67a305:goto L67a305;
case 0x67a30a:goto L67a30a;
case 0x67a30d:c.instructions+=2;goto B67a30d;
case 0x67a310:c.instructions+=1;goto B67a310;
case 0x67a312:goto L67a312;
case 0x67a315:c.instructions+=2;goto B67a315;
case 0x67a319:c.instructions+=1;goto B67a319;
case 0x67a31f:goto L67a31f;
case 0x67a323:c.instructions+=10;goto B67a323;
case 0x67a324:c.instructions+=9;goto B67a324;
case 0x67a325:c.instructions+=8;goto B67a325;
case 0x67a328:c.instructions+=7;goto B67a328;
case 0x67a329:c.instructions+=6;goto B67a329;
case 0x67a32c:c.instructions+=5;goto B67a32c;
case 0x67a32d:c.instructions+=4;goto B67a32d;
case 0x67a332:c.instructions+=3;goto B67a332;
case 0x67a335:c.instructions+=2;goto B67a335;
case 0x67a337:c.instructions+=1;goto B67a337;
case 0x67a33c:goto L67a33c;
case 0x67a33e:c.instructions+=2;goto B67a33e;
case 0x67a340:c.instructions+=1;goto B67a340;
case 0x67a346:goto L67a346;
case 0x67a349:c.instructions+=10;goto B67a349;
case 0x67a34c:c.instructions+=9;goto B67a34c;
case 0x67a34f:c.instructions+=8;goto B67a34f;
case 0x67a352:c.instructions+=7;goto B67a352;
case 0x67a358:c.instructions+=6;goto B67a358;
case 0x67a35b:c.instructions+=5;goto B67a35b;
case 0x67a35e:c.instructions+=4;goto B67a35e;
case 0x67a361:c.instructions+=3;goto B67a361;
case 0x67a364:c.instructions+=2;goto B67a364;
case 0x67a36b:c.instructions+=1;goto B67a36b;
case 0x67a36d:goto L67a36d;
case 0x67a370:c.instructions+=1;goto B67a370;
case 0x67a372:goto L67a372;
case 0x67a373:c.instructions+=3;goto B67a373;
case 0x67a376:c.instructions+=2;goto B67a376;
case 0x67a378:c.instructions+=1;goto B67a378;
case 0x67a37d:goto L67a37d;
case 0x67a37f:c.instructions+=2;goto B67a37f;
case 0x67a381:c.instructions+=1;goto B67a381;
case 0x67a387:goto L67a387;
case 0x67a38a:c.instructions+=3;goto B67a38a;
case 0x67a38c:c.instructions+=2;goto B67a38c;
case 0x67a38f:c.instructions+=1;goto B67a38f;
case 0x67a391:goto L67a391;
case 0x67a394:c.instructions+=2;goto B67a394;
case 0x67a396:c.instructions+=1;goto B67a396;
case 0x67a399:goto L67a399;
case 0x67a39c:c.instructions+=6;goto B67a39c;
case 0x67a39f:c.instructions+=5;goto B67a39f;
case 0x67a3a2:c.instructions+=4;goto B67a3a2;
case 0x67a3a4:c.instructions+=3;goto B67a3a4;
case 0x67a3a7:c.instructions+=2;goto B67a3a7;
case 0x67a3aa:c.instructions+=1;goto B67a3aa;
case 0x67a3ac:goto L67a3ac;
case 0x67a3af:c.instructions+=10;goto B67a3af;
case 0x67a3b0:c.instructions+=9;goto B67a3b0;
case 0x67a3b1:c.instructions+=8;goto B67a3b1;
case 0x67a3b4:c.instructions+=7;goto B67a3b4;
case 0x67a3b9:c.instructions+=6;goto B67a3b9;
case 0x67a3bc:c.instructions+=5;goto B67a3bc;
case 0x67a3be:c.instructions+=4;goto B67a3be;
case 0x67a3bf:c.instructions+=3;goto B67a3bf;
case 0x67a3c2:c.instructions+=2;goto B67a3c2;
case 0x67a3c5:c.instructions+=1;goto B67a3c5;
case 0x67a3ca:goto L67a3ca;
case 0x67a3cc:c.instructions+=2;goto B67a3cc;
case 0x67a3ce:c.instructions+=1;goto B67a3ce;
case 0x67a3d4:goto L67a3d4;
case 0x67a3d6:c.instructions+=2;goto B67a3d6;
case 0x67a3d9:c.instructions+=1;goto B67a3d9;
case 0x67a3db:goto L67a3db;
case 0x67a3de:c.instructions+=9;goto B67a3de;
case 0x67a3e1:c.instructions+=8;goto B67a3e1;
case 0x67a3e4:c.instructions+=7;goto B67a3e4;
case 0x67a3e7:c.instructions+=6;goto B67a3e7;
case 0x67a3ea:c.instructions+=5;goto B67a3ea;
case 0x67a3f0:c.instructions+=4;goto B67a3f0;
case 0x67a3f1:c.instructions+=3;goto B67a3f1;
case 0x67a3f4:c.instructions+=2;goto B67a3f4;
case 0x67a3f7:c.instructions+=1;goto B67a3f7;
case 0x67a3f9:goto L67a3f9;
case 0x67a3fc:c.instructions+=10;goto B67a3fc;
case 0x67a3fd:c.instructions+=9;goto B67a3fd;
case 0x67a3fe:c.instructions+=8;goto B67a3fe;
case 0x67a401:c.instructions+=7;goto B67a401;
case 0x67a403:c.instructions+=6;goto B67a403;
case 0x67a406:c.instructions+=5;goto B67a406;
case 0x67a409:c.instructions+=4;goto B67a409;
case 0x67a40c:c.instructions+=3;goto B67a40c;
case 0x67a40f:c.instructions+=2;goto B67a40f;
case 0x67a412:c.instructions+=1;goto B67a412;
case 0x67a417:goto L67a417;
case 0x67a419:c.instructions+=2;goto B67a419;
case 0x67a41b:c.instructions+=1;goto B67a41b;
case 0x67a421:goto L67a421;
case 0x67a423:c.instructions+=2;goto B67a423;
case 0x67a426:c.instructions+=1;goto B67a426;
case 0x67a428:goto L67a428;
case 0x67a42b:c.instructions+=9;goto B67a42b;
case 0x67a42e:c.instructions+=8;goto B67a42e;
case 0x67a431:c.instructions+=7;goto B67a431;
case 0x67a434:c.instructions+=6;goto B67a434;
case 0x67a437:c.instructions+=5;goto B67a437;
case 0x67a43d:c.instructions+=4;goto B67a43d;
case 0x67a43e:c.instructions+=3;goto B67a43e;
case 0x67a441:c.instructions+=2;goto B67a441;
case 0x67a444:c.instructions+=1;goto B67a444;
case 0x67a446:goto L67a446;
case 0x67a449:c.instructions+=12;goto B67a449;
case 0x67a44a:c.instructions+=11;goto B67a44a;
case 0x67a44d:c.instructions+=10;goto B67a44d;
case 0x67a450:c.instructions+=9;goto B67a450;
case 0x67a453:c.instructions+=8;goto B67a453;
case 0x67a456:c.instructions+=7;goto B67a456;
case 0x67a459:c.instructions+=6;goto B67a459;
case 0x67a45e:c.instructions+=5;goto B67a45e;
case 0x67a45f:c.instructions+=4;goto B67a45f;
case 0x67a462:c.instructions+=3;goto B67a462;
case 0x67a464:c.instructions+=2;goto B67a464;
case 0x67a46b:c.instructions+=1;goto B67a46b;
case 0x67a470:goto L67a470;
case 0x67a472:c.instructions+=2;goto B67a472;
case 0x67a474:c.instructions+=1;goto B67a474;
case 0x67a47a:goto L67a47a;
case 0x67a47c:c.instructions+=2;goto B67a47c;
case 0x67a47f:c.instructions+=1;goto B67a47f;
case 0x67a481:goto L67a481;
case 0x67a484:c.instructions+=9;goto B67a484;
case 0x67a487:c.instructions+=8;goto B67a487;
case 0x67a48a:c.instructions+=7;goto B67a48a;
case 0x67a48d:c.instructions+=6;goto B67a48d;
case 0x67a490:c.instructions+=5;goto B67a490;
case 0x67a496:c.instructions+=4;goto B67a496;
case 0x67a497:c.instructions+=3;goto B67a497;
case 0x67a49a:c.instructions+=2;goto B67a49a;
case 0x67a49d:c.instructions+=1;goto B67a49d;
case 0x67a49f:goto L67a49f;
case 0x67a4a2:c.instructions+=9;goto B67a4a2;
case 0x67a4a3:c.instructions+=8;goto B67a4a3;
case 0x67a4a4:c.instructions+=7;goto B67a4a4;
case 0x67a4a7:c.instructions+=6;goto B67a4a7;
case 0x67a4ac:c.instructions+=5;goto B67a4ac;
case 0x67a4af:c.instructions+=4;goto B67a4af;
case 0x67a4b1:c.instructions+=3;goto B67a4b1;
case 0x67a4b2:c.instructions+=2;goto B67a4b2;
case 0x67a4b5:c.instructions+=1;goto B67a4b5;
case 0x67a4ba:goto L67a4ba;
case 0x67a4bc:c.instructions+=2;goto B67a4bc;
case 0x67a4be:c.instructions+=1;goto B67a4be;
case 0x67a4c4:goto L67a4c4;
case 0x67a4c6:c.instructions+=2;goto B67a4c6;
case 0x67a4c9:c.instructions+=1;goto B67a4c9;
case 0x67a4cb:goto L67a4cb;
case 0x67a4ce:c.instructions+=9;goto B67a4ce;
case 0x67a4d1:c.instructions+=8;goto B67a4d1;
case 0x67a4d4:c.instructions+=7;goto B67a4d4;
case 0x67a4d7:c.instructions+=6;goto B67a4d7;
case 0x67a4da:c.instructions+=5;goto B67a4da;
case 0x67a4e0:c.instructions+=4;goto B67a4e0;
case 0x67a4e1:c.instructions+=3;goto B67a4e1;
case 0x67a4e4:c.instructions+=2;goto B67a4e4;
case 0x67a4e7:c.instructions+=1;goto B67a4e7;
case 0x67a4e9:goto L67a4e9;
case 0x67a4ec:c.instructions+=9;goto B67a4ec;
case 0x67a4ed:c.instructions+=8;goto B67a4ed;
case 0x67a4f0:c.instructions+=7;goto B67a4f0;
case 0x67a4f5:c.instructions+=6;goto B67a4f5;
case 0x67a4f8:c.instructions+=5;goto B67a4f8;
case 0x67a4fa:c.instructions+=4;goto B67a4fa;
case 0x67a4fd:c.instructions+=3;goto B67a4fd;
case 0x67a4fe:c.instructions+=2;goto B67a4fe;
case 0x67a501:c.instructions+=1;goto B67a501;
case 0x67a506:goto L67a506;
case 0x67a508:c.instructions+=2;goto B67a508;
case 0x67a50a:c.instructions+=1;goto B67a50a;
case 0x67a510:goto L67a510;
case 0x67a512:c.instructions+=2;goto B67a512;
case 0x67a515:c.instructions+=1;goto B67a515;
case 0x67a517:goto L67a517;
case 0x67a51a:c.instructions+=9;goto B67a51a;
case 0x67a51d:c.instructions+=8;goto B67a51d;
case 0x67a520:c.instructions+=7;goto B67a520;
case 0x67a523:c.instructions+=6;goto B67a523;
case 0x67a526:c.instructions+=5;goto B67a526;
case 0x67a52c:c.instructions+=4;goto B67a52c;
case 0x67a52d:c.instructions+=3;goto B67a52d;
case 0x67a530:c.instructions+=2;goto B67a530;
case 0x67a533:c.instructions+=1;goto B67a533;
case 0x67a535:goto L67a535;
case 0x67a538:c.instructions+=13;goto B67a538;
case 0x67a539:c.instructions+=12;goto B67a539;
case 0x67a53a:c.instructions+=11;goto B67a53a;
case 0x67a53d:c.instructions+=10;goto B67a53d;
case 0x67a540:c.instructions+=9;goto B67a540;
case 0x67a543:c.instructions+=8;goto B67a543;
case 0x67a546:c.instructions+=7;goto B67a546;
case 0x67a549:c.instructions+=6;goto B67a549;
case 0x67a54c:c.instructions+=5;goto B67a54c;
case 0x67a551:c.instructions+=4;goto B67a551;
case 0x67a552:c.instructions+=3;goto B67a552;
case 0x67a555:c.instructions+=2;goto B67a555;
case 0x67a557:c.instructions+=1;goto B67a557;
case 0x67a55c:goto L67a55c;
case 0x67a55e:c.instructions+=2;goto B67a55e;
case 0x67a560:c.instructions+=1;goto B67a560;
case 0x67a566:goto L67a566;
case 0x67a569:c.instructions+=2;goto B67a569;
case 0x67a56b:c.instructions+=1;goto B67a56b;
case 0x67a56d:goto L67a56d;
case 0x67a570:c.instructions+=4;goto B67a570;
case 0x67a573:c.instructions+=3;goto B67a573;
case 0x67a575:c.instructions+=2;goto B67a575;
case 0x67a578:c.instructions+=1;goto B67a578;
case 0x67a57b:goto L67a57b;
case 0x67a57e:c.instructions+=12;goto B67a57e;
case 0x67a581:c.instructions+=11;goto B67a581;
case 0x67a584:c.instructions+=10;goto B67a584;
case 0x67a587:c.instructions+=9;goto B67a587;
case 0x67a58a:c.instructions+=8;goto B67a58a;
case 0x67a58c:c.instructions+=7;goto B67a58c;
case 0x67a58f:c.instructions+=6;goto B67a58f;
case 0x67a592:c.instructions+=5;goto B67a592;
case 0x67a594:c.instructions+=4;goto B67a594;
case 0x67a597:c.instructions+=3;goto B67a597;
case 0x67a599:c.instructions+=2;goto B67a599;
case 0x67a59c:c.instructions+=1;goto B67a59c;
case 0x67a59e:goto L67a59e;
case 0x67a5a0:c.instructions+=12;goto B67a5a0;
case 0x67a5a3:c.instructions+=11;goto B67a5a3;
case 0x67a5a6:c.instructions+=10;goto B67a5a6;
case 0x67a5aa:c.instructions+=9;goto B67a5aa;
case 0x67a5ac:c.instructions+=8;goto B67a5ac;
case 0x67a5af:c.instructions+=7;goto B67a5af;
case 0x67a5b2:c.instructions+=6;goto B67a5b2;
case 0x67a5b5:c.instructions+=5;goto B67a5b5;
case 0x67a5b7:c.instructions+=4;goto B67a5b7;
case 0x67a5b9:c.instructions+=3;goto B67a5b9;
case 0x67a5bb:c.instructions+=2;goto B67a5bb;
case 0x67a5be:c.instructions+=1;goto B67a5be;
case 0x67a5c0:goto L67a5c0;
case 0x67a5c3:c.instructions+=2;goto B67a5c3;
case 0x67a5c8:c.instructions+=1;goto B67a5c8;
case 0x67a5ca:goto L67a5ca;
case 0x67a5cc:c.instructions+=6;goto B67a5cc;
case 0x67a5cf:c.instructions+=5;goto B67a5cf;
case 0x67a5d2:c.instructions+=4;goto B67a5d2;
case 0x67a5d4:c.instructions+=3;goto B67a5d4;
case 0x67a5d7:c.instructions+=2;goto B67a5d7;
case 0x67a5da:c.instructions+=1;goto B67a5da;
case 0x67a5dc:goto L67a5dc;
case 0x67a5df:c.instructions+=1;goto B67a5df;
case 0x67a5e1:goto L67a5e1;
case 0x67a5e4:c.instructions+=1;goto B67a5e4;
case 0x67a5e6:goto L67a5e6;
case 0x67a5e9:c.instructions+=1;goto B67a5e9;
case 0x67a5eb:goto L67a5eb;
case 0x67a5ee:c.instructions+=1;goto B67a5ee;
case 0x67a5f0:goto L67a5f0;
case 0x67a5f3:c.instructions+=11;goto B67a5f3;
case 0x67a5f4:c.instructions+=10;goto B67a5f4;
case 0x67a5f5:c.instructions+=9;goto B67a5f5;
case 0x67a5f8:c.instructions+=8;goto B67a5f8;
case 0x67a5f9:c.instructions+=7;goto B67a5f9;
case 0x67a5fc:c.instructions+=6;goto B67a5fc;
case 0x67a5ff:c.instructions+=5;goto B67a5ff;
case 0x67a600:c.instructions+=4;goto B67a600;
case 0x67a605:c.instructions+=3;goto B67a605;
case 0x67a608:c.instructions+=2;goto B67a608;
case 0x67a60a:c.instructions+=1;goto B67a60a;
case 0x67a60f:goto L67a60f;
case 0x67a611:c.instructions+=1;goto B67a611;
case 0x67a613:goto L67a613;
case 0x67a618:c.instructions+=1;goto B67a618;
case 0x67a61a:goto L67a61a;
case 0x67a61c:c.instructions+=1;goto B67a61c;
case 0x67a61e:goto L67a61e;
case 0x67a623:goto L67a623;
case 0x67a626:c.instructions+=1;goto B67a626;
case 0x67a62b:goto L67a62b;
case 0x67a62e:c.instructions+=1;goto B67a62e;
case 0x67a633:goto L67a633;
case 0x67a636:c.instructions+=1;goto B67a636;
case 0x67a63b:goto L67a63b;
case 0x67a63e:c.instructions+=1;goto B67a63e;
case 0x67a643:goto L67a643;
case 0x67a646:c.instructions+=1;goto B67a646;
case 0x67a64b:goto L67a64b;
case 0x67a64e:c.instructions+=1;goto B67a64e;
case 0x67a653:goto L67a653;
case 0x67a656:c.instructions+=15;goto B67a656;
case 0x67a659:c.instructions+=14;goto B67a659;
case 0x67a65c:c.instructions+=13;goto B67a65c;
case 0x67a65f:c.instructions+=12;goto B67a65f;
case 0x67a665:c.instructions+=11;goto B67a665;
case 0x67a668:c.instructions+=10;goto B67a668;
case 0x67a66e:c.instructions+=9;goto B67a66e;
case 0x67a671:c.instructions+=8;goto B67a671;
case 0x67a674:c.instructions+=7;goto B67a674;
case 0x67a677:c.instructions+=6;goto B67a677;
case 0x67a679:c.instructions+=5;goto B67a679;
case 0x67a67a:c.instructions+=4;goto B67a67a;
case 0x67a67b:c.instructions+=3;goto B67a67b;
case 0x67a67c:c.instructions+=2;goto B67a67c;
case 0x67a67d:c.instructions+=1;goto B67a67d;
case 0x67a680:goto L67a680;
case 0x67a682:c.instructions+=27;goto B67a682;
case 0x67a683:c.instructions+=26;goto B67a683;
case 0x67a685:c.instructions+=25;goto B67a685;
case 0x67a688:c.instructions+=24;goto B67a688;
case 0x67a689:c.instructions+=23;goto B67a689;
case 0x67a68b:c.instructions+=22;goto B67a68b;
case 0x67a68e:c.instructions+=21;goto B67a68e;
case 0x67a691:c.instructions+=20;goto B67a691;
case 0x67a694:c.instructions+=19;goto B67a694;
case 0x67a697:c.instructions+=18;goto B67a697;
case 0x67a69a:c.instructions+=17;goto B67a69a;
case 0x67a69d:c.instructions+=16;goto B67a69d;
case 0x67a6a0:c.instructions+=15;goto B67a6a0;
case 0x67a6a1:c.instructions+=14;goto B67a6a1;
case 0x67a6a4:c.instructions+=13;goto B67a6a4;
case 0x67a6a6:c.instructions+=12;goto B67a6a6;
case 0x67a6a9:c.instructions+=11;goto B67a6a9;
case 0x67a6aa:c.instructions+=10;goto B67a6aa;
case 0x67a6ac:c.instructions+=9;goto B67a6ac;
case 0x67a6ad:c.instructions+=8;goto B67a6ad;
case 0x67a6b0:c.instructions+=7;goto B67a6b0;
case 0x67a6b3:c.instructions+=6;goto B67a6b3;
case 0x67a6b6:c.instructions+=5;goto B67a6b6;
case 0x67a6b9:c.instructions+=4;goto B67a6b9;
case 0x67a6bc:c.instructions+=3;goto B67a6bc;
case 0x67a6bf:c.instructions+=2;goto B67a6bf;
case 0x67a6c2:c.instructions+=1;goto B67a6c2;
case 0x67a6c7:goto L67a6c7;
case 0x67a6c9:c.instructions+=3;goto B67a6c9;
case 0x67a6ca:c.instructions+=2;goto B67a6ca;
case 0x67a6cd:c.instructions+=1;goto B67a6cd;
case 0x67a6d3:goto L67a6d3;
case 0x67a6d6:c.instructions+=1;goto B67a6d6;
case 0x67a6db:goto L67a6db;
case 0x67a6dd:c.instructions+=3;goto B67a6dd;
case 0x67a6de:c.instructions+=2;goto B67a6de;
case 0x67a6e1:c.instructions+=1;goto B67a6e1;
case 0x67a6e7:goto L67a6e7;
case 0x67a6ea:c.instructions+=3;goto B67a6ea;
case 0x67a6eb:c.instructions+=2;goto B67a6eb;
case 0x67a6ee:c.instructions+=1;goto B67a6ee;
case 0x67a6f3:goto L67a6f3;
case 0x67a6f5:c.instructions+=3;goto B67a6f5;
case 0x67a6f6:c.instructions+=2;goto B67a6f6;
case 0x67a6f9:c.instructions+=1;goto B67a6f9;
case 0x67a6ff:goto L67a6ff;
case 0x67a700:c.instructions+=1;goto B67a700;
case 0x67a705:goto L67a705;
case 0x67a707:c.instructions+=3;goto B67a707;
case 0x67a708:c.instructions+=2;goto B67a708;
case 0x67a70b:c.instructions+=1;goto B67a70b;
case 0x67a711:goto L67a711;
case 0x67a714:c.instructions+=1;goto B67a714;
case 0x67a719:goto L67a719;
case 0x67a71b:c.instructions+=3;goto B67a71b;
case 0x67a71c:c.instructions+=2;goto B67a71c;
case 0x67a71f:c.instructions+=1;goto B67a71f;
case 0x67a725:goto L67a725;
case 0x67a728:c.instructions+=1;goto B67a728;
case 0x67a72d:goto L67a72d;
case 0x67a72f:c.instructions+=3;goto B67a72f;
case 0x67a730:c.instructions+=2;goto B67a730;
case 0x67a733:c.instructions+=1;goto B67a733;
case 0x67a739:goto L67a739;
case 0x67a73c:c.instructions+=2;goto B67a73c;
case 0x67a73f:c.instructions+=1;goto B67a73f;
case 0x67a741:goto L67a741;
case 0x67a742:c.instructions+=3;goto B67a742;
case 0x67a745:c.instructions+=2;goto B67a745;
case 0x67a747:c.instructions+=1;goto B67a747;
case 0x67a74c:goto L67a74c;
case 0x67a74e:c.instructions+=2;goto B67a74e;
case 0x67a750:c.instructions+=1;goto B67a750;
case 0x67a756:goto L67a756;
case 0x67a758:c.instructions+=2;goto B67a758;
case 0x67a75b:c.instructions+=1;goto B67a75b;
case 0x67a75d:goto L67a75d;
case 0x67a764:goto L67a764;
case 0x67a767:c.instructions+=1;goto B67a767;
case 0x67a76d:goto L67a76d;
case 0x67a770:c.instructions+=1;goto B67a770;
case 0x67a776:goto L67a776;
case 0x67a779:c.instructions+=4;goto B67a779;
case 0x67a77c:c.instructions+=3;goto B67a77c;
case 0x67a77f:c.instructions+=2;goto B67a77f;
case 0x67a781:c.instructions+=1;goto B67a781;
case 0x67a784:goto L67a784;
case 0x67a786:goto L67a786;
case 0x67a788:c.instructions+=1;goto B67a788;
case 0x67a78b:goto L67a78b;
case 0x67a78d:goto L67a78d;
case 0x67a790:c.instructions+=3;goto B67a790;
case 0x67a793:c.instructions+=2;goto B67a793;
case 0x67a795:c.instructions+=1;goto B67a795;
case 0x67a798:goto L67a798;
case 0x67a79a:goto L67a79a;
case 0x67a79c:c.instructions+=1;goto B67a79c;
case 0x67a79f:goto L67a79f;
case 0x67a7a1:goto L67a7a1;
case 0x67a7a3:c.instructions+=2;goto B67a7a3;
case 0x67a7a6:c.instructions+=1;goto B67a7a6;
case 0x67a7a8:goto L67a7a8;
case 0x67a7ab:c.instructions+=1;goto B67a7ab;
case 0x67a7ae:goto L67a7ae;
case 0x67a7b1:c.instructions+=5;goto B67a7b1;
case 0x67a7b3:c.instructions+=4;goto B67a7b3;
case 0x67a7b6:c.instructions+=3;goto B67a7b6;
case 0x67a7b9:c.instructions+=2;goto B67a7b9;
case 0x67a7bc:c.instructions+=1;goto B67a7bc;
case 0x67a7be:goto L67a7be;
case 0x67a7c1:c.instructions+=3;goto B67a7c1;
case 0x67a7c3:c.instructions+=2;goto B67a7c3;
case 0x67a7c4:c.instructions+=1;goto B67a7c4;
case 0x67a7c9:goto L67a7c9;
case 0x67a7cb:c.instructions+=1;goto B67a7cb;
case 0x67a7cd:goto L67a7cd;
case 0x67a7d3:c.instructions+=4;goto B67a7d3;
case 0x67a7d6:c.instructions+=3;goto B67a7d6;
case 0x67a7d8:c.instructions+=2;goto B67a7d8;
case 0x67a7de:c.instructions+=1;goto B67a7de;
case 0x67a7e1:goto L67a7e1;
case 0x67a7e4:c.instructions+=3;goto B67a7e4;
case 0x67a7e7:c.instructions+=2;goto B67a7e7;
case 0x67a7ea:c.instructions+=1;goto B67a7ea;
case 0x67a7ec:goto L67a7ec;
case 0x67a7ef:c.instructions+=5;goto B67a7ef;
case 0x67a7f2:c.instructions+=4;goto B67a7f2;
case 0x67a7f5:c.instructions+=3;goto B67a7f5;
case 0x67a7f8:c.instructions+=2;goto B67a7f8;
case 0x67a7fb:c.instructions+=1;goto B67a7fb;
case 0x67a7fd:goto L67a7fd;
case 0x67a7ff:c.instructions+=4;goto B67a7ff;
case 0x67a802:c.instructions+=3;goto B67a802;
case 0x67a805:c.instructions+=2;goto B67a805;
case 0x67a808:c.instructions+=1;goto B67a808;
case 0x67a80a:goto L67a80a;
case 0x67a80d:c.instructions+=1;goto B67a80d;
case 0x67a814:goto L67a814;
case 0x67a818:c.instructions+=3;goto B67a818;
case 0x67a819:c.instructions+=2;goto B67a819;
case 0x67a81c:c.instructions+=1;goto B67a81c;
case 0x67a81e:goto L67a81e;
case 0x67a821:c.instructions+=7;goto B67a821;
case 0x67a825:c.instructions+=6;goto B67a825;
case 0x67a829:c.instructions+=5;goto B67a829;
case 0x67a82d:c.instructions+=4;goto B67a82d;
case 0x67a831:c.instructions+=3;goto B67a831;
case 0x67a834:c.instructions+=2;goto B67a834;
case 0x67a837:c.instructions+=1;goto B67a837;
case 0x67a83e:goto L67a83e;
case 0x67a841:c.instructions+=9;goto B67a841;
case 0x67a844:c.instructions+=8;goto B67a844;
case 0x67a847:c.instructions+=7;goto B67a847;
case 0x67a84a:c.instructions+=6;goto B67a84a;
case 0x67a84d:c.instructions+=5;goto B67a84d;
case 0x67a850:c.instructions+=4;goto B67a850;
case 0x67a853:c.instructions+=3;goto B67a853;
case 0x67a856:c.instructions+=2;goto B67a856;
case 0x67a858:c.instructions+=1;goto B67a858;
case 0x67a85b:goto L67a85b;
case 0x67a85d:goto L67a85d;
case 0x67a85f:c.instructions+=1;goto B67a85f;
case 0x67a862:goto L67a862;
case 0x67a864:goto L67a864;
case 0x67a867:c.instructions+=4;goto B67a867;
case 0x67a86a:c.instructions+=3;goto B67a86a;
case 0x67a86d:c.instructions+=2;goto B67a86d;
case 0x67a86f:c.instructions+=1;goto B67a86f;
case 0x67a872:goto L67a872;
case 0x67a874:goto L67a874;
case 0x67a878:c.instructions+=2;goto B67a878;
case 0x67a87a:c.instructions+=1;goto B67a87a;
case 0x67a87d:goto L67a87d;
case 0x67a87f:goto L67a87f;
case 0x67a882:c.instructions+=4;goto B67a882;
case 0x67a885:c.instructions+=3;goto B67a885;
case 0x67a888:c.instructions+=2;goto B67a888;
case 0x67a88a:c.instructions+=1;goto B67a88a;
case 0x67a88d:goto L67a88d;
case 0x67a88f:goto L67a88f;
case 0x67a891:c.instructions+=1;goto B67a891;
case 0x67a894:goto L67a894;
case 0x67a896:goto L67a896;
case 0x67a898:c.instructions+=2;goto B67a898;
case 0x67a89b:c.instructions+=1;goto B67a89b;
case 0x67a8a1:goto L67a8a1;
case 0x67a8a4:c.instructions+=10;goto B67a8a4;
case 0x67a8a8:c.instructions+=9;goto B67a8a8;
case 0x67a8ab:c.instructions+=8;goto B67a8ab;
case 0x67a8ac:c.instructions+=7;goto B67a8ac;
case 0x67a8af:c.instructions+=6;goto B67a8af;
case 0x67a8b0:c.instructions+=5;goto B67a8b0;
case 0x67a8b3:c.instructions+=4;goto B67a8b3;
case 0x67a8b5:c.instructions+=3;goto B67a8b5;
case 0x67a8b8:c.instructions+=2;goto B67a8b8;
case 0x67a8bb:c.instructions+=1;goto B67a8bb;
case 0x67a8c0:goto L67a8c0;
case 0x67a8c2:c.instructions+=2;goto B67a8c2;
case 0x67a8c4:c.instructions+=1;goto B67a8c4;
case 0x67a8ca:goto L67a8ca;
case 0x67a8cc:c.instructions+=10;goto B67a8cc;
case 0x67a8cf:c.instructions+=9;goto B67a8cf;
case 0x67a8d0:c.instructions+=8;goto B67a8d0;
case 0x67a8d3:c.instructions+=7;goto B67a8d3;
case 0x67a8d4:c.instructions+=6;goto B67a8d4;
case 0x67a8d5:c.instructions+=5;goto B67a8d5;
case 0x67a8da:c.instructions+=4;goto B67a8da;
case 0x67a8db:c.instructions+=3;goto B67a8db;
case 0x67a8de:c.instructions+=2;goto B67a8de;
case 0x67a8e0:c.instructions+=1;goto B67a8e0;
case 0x67a8e5:goto L67a8e5;
case 0x67a8e7:c.instructions+=2;goto B67a8e7;
case 0x67a8e9:c.instructions+=1;goto B67a8e9;
case 0x67a8ef:goto L67a8ef;
case 0x67a8f2:c.instructions+=11;goto B67a8f2;
case 0x67a8f6:c.instructions+=10;goto B67a8f6;
case 0x67a8f9:c.instructions+=9;goto B67a8f9;
case 0x67a8fb:c.instructions+=8;goto B67a8fb;
case 0x67a8fc:c.instructions+=7;goto B67a8fc;
case 0x67a8ff:c.instructions+=6;goto B67a8ff;
case 0x67a902:c.instructions+=5;goto B67a902;
case 0x67a905:c.instructions+=4;goto B67a905;
case 0x67a906:c.instructions+=3;goto B67a906;
case 0x67a909:c.instructions+=2;goto B67a909;
case 0x67a90b:c.instructions+=1;goto B67a90b;
case 0x67a910:goto L67a910;
case 0x67a912:c.instructions+=2;goto B67a912;
case 0x67a914:c.instructions+=1;goto B67a914;
case 0x67a91a:goto L67a91a;
case 0x67a91c:c.instructions+=9;goto B67a91c;
case 0x67a91f:c.instructions+=8;goto B67a91f;
case 0x67a920:c.instructions+=7;goto B67a920;
case 0x67a923:c.instructions+=6;goto B67a923;
case 0x67a924:c.instructions+=5;goto B67a924;
case 0x67a925:c.instructions+=4;goto B67a925;
case 0x67a926:c.instructions+=3;goto B67a926;
case 0x67a929:c.instructions+=2;goto B67a929;
case 0x67a92b:c.instructions+=1;goto B67a92b;
case 0x67a930:goto L67a930;
case 0x67a932:c.instructions+=2;goto B67a932;
case 0x67a934:c.instructions+=1;goto B67a934;
case 0x67a93a:goto L67a93a;
case 0x67a93c:c.instructions+=2;goto B67a93c;
case 0x67a93f:c.instructions+=1;goto B67a93f;
case 0x67a941:goto L67a941;
case 0x67a944:c.instructions+=1;goto B67a944;
case 0x67a94a:goto L67a94a;
case 0x67a94d:c.instructions+=1;goto B67a94d;
case 0x67a953:goto L67a953;
case 0x67a956:c.instructions+=2;goto B67a956;
case 0x67a959:c.instructions+=1;goto B67a959;
case 0x67a95b:goto L67a95b;
case 0x67a95e:c.instructions+=4;goto B67a95e;
case 0x67a95f:c.instructions+=3;goto B67a95f;
case 0x67a962:c.instructions+=2;goto B67a962;
case 0x67a964:c.instructions+=1;goto B67a964;
case 0x67a969:goto L67a969;
case 0x67a96b:c.instructions+=1;goto B67a96b;
case 0x67a96d:goto L67a96d;
case 0x67a973:c.instructions+=3;goto B67a973;
case 0x67a976:c.instructions+=2;goto B67a976;
case 0x67a97c:c.instructions+=1;goto B67a97c;
case 0x67a97f:goto L67a97f;
case 0x67a982:c.instructions+=4;goto B67a982;
case 0x67a988:c.instructions+=3;goto B67a988;
case 0x67a98a:c.instructions+=2;goto B67a98a;
case 0x67a98d:c.instructions+=1;goto B67a98d;
case 0x67a98f:goto L67a98f;
case 0x67a992:c.instructions+=4;goto B67a992;
case 0x67a998:c.instructions+=3;goto B67a998;
case 0x67a99a:c.instructions+=2;goto B67a99a;
case 0x67a99d:c.instructions+=1;goto B67a99d;
case 0x67a99f:goto L67a99f;
case 0x67a9a6:goto L67a9a6;
case 0x67a9a9:c.instructions+=1;goto B67a9a9;
case 0x67a9af:goto L67a9af;
case 0x67a9b2:c.instructions+=6;goto B67a9b2;
case 0x67a9b5:c.instructions+=5;goto B67a9b5;
case 0x67a9b8:c.instructions+=4;goto B67a9b8;
case 0x67a9bb:c.instructions+=3;goto B67a9bb;
case 0x67a9be:c.instructions+=2;goto B67a9be;
case 0x67a9c0:c.instructions+=1;goto B67a9c0;
case 0x67a9c3:goto L67a9c3;
case 0x67a9c5:c.instructions+=2;goto B67a9c5;
case 0x67a9c8:c.instructions+=1;goto B67a9c8;
case 0x67a9ce:goto L67a9ce;
case 0x67a9d1:c.instructions+=4;goto B67a9d1;
case 0x67a9d2:c.instructions+=3;goto B67a9d2;
case 0x67a9d3:c.instructions+=2;goto B67a9d3;
case 0x67a9d5:c.instructions+=1;goto B67a9d5;
case 0x67a9da:goto L67a9da;
case 0x67a9dc:c.instructions+=1;goto B67a9dc;
case 0x67a9de:goto L67a9de;
case 0x67a9e4:c.instructions+=4;goto B67a9e4;
case 0x67a9e7:c.instructions+=3;goto B67a9e7;
case 0x67a9ed:c.instructions+=2;goto B67a9ed;
case 0x67a9f0:c.instructions+=1;goto B67a9f0;
case 0x67a9f2:goto L67a9f2;
case 0x67a9f5:goto L67a9f5;
case 0x67a9f9:c.instructions+=2;goto B67a9f9;
case 0x67a9fc:c.instructions+=1;goto B67a9fc;
case 0x67a9fe:goto L67a9fe;
case 0x67aa01:c.instructions+=11;goto B67aa01;
case 0x67aa03:c.instructions+=10;goto B67aa03;
case 0x67aa05:c.instructions+=9;goto B67aa05;
case 0x67aa08:c.instructions+=8;goto B67aa08;
case 0x67aa0b:c.instructions+=7;goto B67aa0b;
case 0x67aa0d:c.instructions+=6;goto B67aa0d;
case 0x67aa10:c.instructions+=5;goto B67aa10;
case 0x67aa13:c.instructions+=4;goto B67aa13;
case 0x67aa15:c.instructions+=3;goto B67aa15;
case 0x67aa18:c.instructions+=2;goto B67aa18;
case 0x67aa1b:c.instructions+=1;goto B67aa1b;
case 0x67aa1d:goto L67aa1d;
case 0x67aa1f:c.instructions+=4;goto B67aa1f;
case 0x67aa22:c.instructions+=3;goto B67aa22;
case 0x67aa24:c.instructions+=2;goto B67aa24;
case 0x67aa27:c.instructions+=1;goto B67aa27;
case 0x67aa29:goto L67aa29;
case 0x67aa2c:c.instructions+=1;goto B67aa2c;
case 0x67aa2e:goto L67aa2e;
case 0x67aa31:c.instructions+=3;goto B67aa31;
case 0x67aa33:c.instructions+=2;goto B67aa33;
case 0x67aa36:c.instructions+=1;goto B67aa36;
case 0x67aa38:goto L67aa38;
case 0x67aa3b:c.instructions+=1;goto B67aa3b;
case 0x67aa3d:goto L67aa3d;
case 0x67aa3f:goto L67aa3f;
case 0x67aa42:c.instructions+=6;goto B67aa42;
case 0x67aa44:c.instructions+=5;goto B67aa44;
case 0x67aa47:c.instructions+=4;goto B67aa47;
case 0x67aa4a:c.instructions+=3;goto B67aa4a;
case 0x67aa4c:c.instructions+=2;goto B67aa4c;
case 0x67aa4f:c.instructions+=1;goto B67aa4f;
case 0x67aa51:goto L67aa51;
case 0x67aa54:goto L67aa54;
case 0x67aa57:c.instructions+=4;goto B67aa57;
case 0x67aa5a:c.instructions+=3;goto B67aa5a;
case 0x67aa5d:c.instructions+=2;goto B67aa5d;
case 0x67aa60:c.instructions+=1;goto B67aa60;
case 0x67aa66:goto L67aa66;
case 0x67aa68:goto L67aa68;
case 0x67aa6b:c.instructions+=5;goto B67aa6b;
case 0x67aa71:c.instructions+=4;goto B67aa71;
case 0x67aa73:c.instructions+=3;goto B67aa73;
case 0x67aa75:c.instructions+=2;goto B67aa75;
case 0x67aa78:c.instructions+=1;goto B67aa78;
case 0x67aa7a:goto L67aa7a;
case 0x67aa7d:c.instructions+=5;goto B67aa7d;
case 0x67aa83:c.instructions+=4;goto B67aa83;
case 0x67aa85:c.instructions+=3;goto B67aa85;
case 0x67aa87:c.instructions+=2;goto B67aa87;
case 0x67aa8a:c.instructions+=1;goto B67aa8a;
case 0x67aa90:goto L67aa90;
case 0x67aa92:c.instructions+=4;goto B67aa92;
case 0x67aa95:c.instructions+=3;goto B67aa95;
case 0x67aa97:c.instructions+=2;goto B67aa97;
case 0x67aa9a:c.instructions+=1;goto B67aa9a;
case 0x67aa9c:goto L67aa9c;
case 0x67aa9e:c.instructions+=4;goto B67aa9e;
case 0x67aaa1:c.instructions+=3;goto B67aaa1;
case 0x67aaa3:c.instructions+=2;goto B67aaa3;
case 0x67aaa6:c.instructions+=1;goto B67aaa6;
case 0x67aaa8:goto L67aaa8;
case 0x67aaaf:goto L67aaaf;
case 0x67aab2:c.instructions+=1;goto B67aab2;
case 0x67aab4:goto L67aab4;
case 0x67aab7:c.instructions+=1;goto B67aab7;
case 0x67aab9:goto L67aab9;
case 0x67aabc:c.instructions+=7;goto B67aabc;
case 0x67aabd:c.instructions+=6;goto B67aabd;
case 0x67aac0:c.instructions+=5;goto B67aac0;
case 0x67aac1:c.instructions+=4;goto B67aac1;
case 0x67aac4:c.instructions+=3;goto B67aac4;
case 0x67aac6:c.instructions+=2;goto B67aac6;
case 0x67aac9:c.instructions+=1;goto B67aac9;
case 0x67aace:goto L67aace;
case 0x67aad0:c.instructions+=2;goto B67aad0;
case 0x67aad7:c.instructions+=1;goto B67aad7;
case 0x67aad9:goto L67aad9;
case 0x67aadc:goto L67aadc;
case 0x67aadf:c.instructions+=1;goto B67aadf;
case 0x67aae1:goto L67aae1;
case 0x67aae4:c.instructions+=5;goto B67aae4;
case 0x67aae7:c.instructions+=4;goto B67aae7;
case 0x67aaea:c.instructions+=3;goto B67aaea;
case 0x67aaec:c.instructions+=2;goto B67aaec;
case 0x67aaef:c.instructions+=1;goto B67aaef;
case 0x67aaf2:goto L67aaf2;
case 0x67aaf5:c.instructions+=3;goto B67aaf5;
case 0x67aaf7:c.instructions+=2;goto B67aaf7;
case 0x67aaf9:c.instructions+=1;goto B67aaf9;
case 0x67aafb:goto L67aafb;
case 0x67aafe:c.instructions+=15;goto B67aafe;
case 0x67ab01:c.instructions+=14;goto B67ab01;
case 0x67ab04:c.instructions+=13;goto B67ab04;
case 0x67ab07:c.instructions+=12;goto B67ab07;
case 0x67ab0c:c.instructions+=11;goto B67ab0c;
case 0x67ab0e:c.instructions+=10;goto B67ab0e;
case 0x67ab10:c.instructions+=9;goto B67ab10;
case 0x67ab16:c.instructions+=8;goto B67ab16;
case 0x67ab18:c.instructions+=7;goto B67ab18;
case 0x67ab1a:c.instructions+=6;goto B67ab1a;
case 0x67ab1d:c.instructions+=5;goto B67ab1d;
case 0x67ab20:c.instructions+=4;goto B67ab20;
case 0x67ab22:c.instructions+=3;goto B67ab22;
case 0x67ab25:c.instructions+=2;goto B67ab25;
case 0x67ab28:c.instructions+=1;goto B67ab28;
case 0x67ab2b:goto L67ab2b;
case 0x67ab2e:c.instructions+=2;goto B67ab2e;
case 0x67ab31:c.instructions+=1;goto B67ab31;
case 0x67ab33:goto L67ab33;
case 0x67ab36:c.instructions+=1;goto B67ab36;
case 0x67ab38:goto L67ab38;
case 0x67ab3b:c.instructions+=9;goto B67ab3b;
case 0x67ab3c:c.instructions+=8;goto B67ab3c;
case 0x67ab3f:c.instructions+=7;goto B67ab3f;
case 0x67ab41:c.instructions+=6;goto B67ab41;
case 0x67ab44:c.instructions+=5;goto B67ab44;
case 0x67ab47:c.instructions+=4;goto B67ab47;
case 0x67ab4a:c.instructions+=3;goto B67ab4a;
case 0x67ab4d:c.instructions+=2;goto B67ab4d;
case 0x67ab50:c.instructions+=1;goto B67ab50;
case 0x67ab55:goto L67ab55;
case 0x67ab57:c.instructions+=2;goto B67ab57;
case 0x67ab59:c.instructions+=1;goto B67ab59;
case 0x67ab5f:goto L67ab5f;
case 0x67ab62:c.instructions+=7;goto B67ab62;
case 0x67ab63:c.instructions+=6;goto B67ab63;
case 0x67ab66:c.instructions+=5;goto B67ab66;
case 0x67ab68:c.instructions+=4;goto B67ab68;
case 0x67ab6b:c.instructions+=3;goto B67ab6b;
case 0x67ab6e:c.instructions+=2;goto B67ab6e;
case 0x67ab71:c.instructions+=1;goto B67ab71;
case 0x67ab76:goto L67ab76;
case 0x67ab78:c.instructions+=2;goto B67ab78;
case 0x67ab7a:c.instructions+=1;goto B67ab7a;
case 0x67ab80:goto L67ab80;
case 0x67ab83:c.instructions+=1;goto B67ab83;
case 0x67ab85:goto L67ab85;
case 0x67ab88:c.instructions+=1;goto B67ab88;
case 0x67ab8a:goto L67ab8a;
case 0x67ab8d:c.instructions+=1;goto B67ab8d;
case 0x67ab8f:goto L67ab8f;
case 0x67ab92:c.instructions+=1;goto B67ab92;
case 0x67ab95:goto L67ab95;
case 0x67ab98:c.instructions+=1;goto B67ab98;
case 0x67ab9a:goto L67ab9a;
case 0x67ab9d:c.instructions+=2;goto B67ab9d;
case 0x67aba4:c.instructions+=1;goto B67aba4;
case 0x67abaa:goto L67abaa;
case 0x67abac:goto L67abac;
case 0x67abaf:c.instructions+=16;goto B67abaf;
case 0x67abb2:c.instructions+=15;goto B67abb2;
case 0x67abb5:c.instructions+=14;goto B67abb5;
case 0x67abb6:c.instructions+=13;goto B67abb6;
case 0x67abb9:c.instructions+=12;goto B67abb9;
case 0x67abbc:c.instructions+=11;goto B67abbc;
case 0x67abbf:c.instructions+=10;goto B67abbf;
case 0x67abc2:c.instructions+=9;goto B67abc2;
case 0x67abc5:c.instructions+=8;goto B67abc5;
case 0x67abc8:c.instructions+=7;goto B67abc8;
case 0x67abcb:c.instructions+=6;goto B67abcb;
case 0x67abce:c.instructions+=5;goto B67abce;
case 0x67abd1:c.instructions+=4;goto B67abd1;
case 0x67abd3:c.instructions+=3;goto B67abd3;
case 0x67abd6:c.instructions+=2;goto B67abd6;
case 0x67abd9:c.instructions+=1;goto B67abd9;
case 0x67abde:goto L67abde;
case 0x67abe1:c.instructions+=4;goto B67abe1;
case 0x67abe4:c.instructions+=3;goto B67abe4;
case 0x67abe7:c.instructions+=2;goto B67abe7;
case 0x67abea:c.instructions+=1;goto B67abea;
case 0x67abec:goto L67abec;
case 0x67abf3:c.instructions+=1;goto B67abf3;
case 0x67abf5:goto L67abf5;
case 0x67abf7:goto L67abf7;
case 0x67abfc:c.instructions+=2;goto B67abfc;
case 0x67abff:c.instructions+=1;goto B67abff;
case 0x67ac01:goto L67ac01;
case 0x67ac02:c.instructions+=5;goto B67ac02;
case 0x67ac07:c.instructions+=4;goto B67ac07;
case 0x67ac0c:c.instructions+=3;goto B67ac0c;
case 0x67ac0f:c.instructions+=2;goto B67ac0f;
case 0x67ac10:c.instructions+=1;goto B67ac10;
case 0x67ac15:goto L67ac15;
case 0x67ac18:c.instructions+=1;goto B67ac18;
case 0x67ac1d:goto L67ac1d;
case 0x67ac20:c.instructions+=2;goto B67ac20;
case 0x67ac22:c.instructions+=1;goto B67ac22;
case 0x67ac24:goto L67ac24;
case 0x67ac27:c.instructions+=4;goto B67ac27;
case 0x67ac2a:c.instructions+=3;goto B67ac2a;
case 0x67ac2d:c.instructions+=2;goto B67ac2d;
case 0x67ac2f:c.instructions+=1;goto B67ac2f;
case 0x67ac32:goto L67ac32;
case 0x67ac34:c.instructions+=2;goto B67ac34;
case 0x67ac37:c.instructions+=1;goto B67ac37;
case 0x67ac39:goto L67ac39;
case 0x67ac3c:c.instructions+=9;goto B67ac3c;
case 0x67ac3e:c.instructions+=8;goto B67ac3e;
case 0x67ac41:c.instructions+=7;goto B67ac41;
case 0x67ac44:c.instructions+=6;goto B67ac44;
case 0x67ac47:c.instructions+=5;goto B67ac47;
case 0x67ac4a:c.instructions+=4;goto B67ac4a;
case 0x67ac4d:c.instructions+=3;goto B67ac4d;
case 0x67ac50:c.instructions+=2;goto B67ac50;
case 0x67ac56:c.instructions+=1;goto B67ac56;
case 0x67ac58:goto L67ac58;
case 0x67ac5b:c.instructions+=3;goto B67ac5b;
case 0x67ac5e:c.instructions+=2;goto B67ac5e;
case 0x67ac61:c.instructions+=1;goto B67ac61;
case 0x67ac63:goto L67ac63;
case 0x67ac66:c.instructions+=5;goto B67ac66;
case 0x67ac69:c.instructions+=4;goto B67ac69;
case 0x67ac6c:c.instructions+=3;goto B67ac6c;
case 0x67ac6e:c.instructions+=2;goto B67ac6e;
case 0x67ac71:c.instructions+=1;goto B67ac71;
case 0x67ac74:goto L67ac74;
case 0x67ac76:goto L67ac76;
case 0x67ac78:c.instructions+=2;goto B67ac78;
case 0x67ac7b:c.instructions+=1;goto B67ac7b;
case 0x67ac7f:goto L67ac7f;
case 0x67ac81:goto L67ac81;
case 0x67ac83:goto L67ac83;
case 0x67ac87:c.instructions+=1;goto B67ac87;
case 0x67ac89:goto L67ac89;
case 0x67ac8d:c.instructions+=1;goto B67ac8d;
case 0x67ac8f:goto L67ac8f;
case 0x67ac93:c.instructions+=1;goto B67ac93;
case 0x67ac95:goto L67ac95;
case 0x67ac98:c.instructions+=11;goto B67ac98;
case 0x67ac9a:c.instructions+=10;goto B67ac9a;
case 0x67ac9c:c.instructions+=9;goto B67ac9c;
case 0x67ac9f:c.instructions+=8;goto B67ac9f;
case 0x67aca0:c.instructions+=7;goto B67aca0;
case 0x67aca3:c.instructions+=6;goto B67aca3;
case 0x67aca6:c.instructions+=5;goto B67aca6;
case 0x67aca7:c.instructions+=4;goto B67aca7;
case 0x67acac:c.instructions+=3;goto B67acac;
case 0x67acaf:c.instructions+=2;goto B67acaf;
case 0x67acb1:c.instructions+=1;goto B67acb1;
case 0x67acb6:goto L67acb6;
case 0x67acb8:c.instructions+=1;goto B67acb8;
case 0x67acba:goto L67acba;
case 0x67acbf:c.instructions+=1;goto B67acbf;
case 0x67acc1:goto L67acc1;
case 0x67acc3:c.instructions+=1;goto B67acc3;
case 0x67acc5:goto L67acc5;
case 0x67acca:goto L67acca;
case 0x67accd:c.instructions+=3;goto B67accd;
case 0x67acd0:c.instructions+=2;goto B67acd0;
case 0x67acd3:c.instructions+=1;goto B67acd3;
case 0x67acd8:goto L67acd8;
case 0x67acdb:c.instructions+=1;goto B67acdb;
case 0x67ace0:goto L67ace0;
case 0x67ace3:c.instructions+=1;goto B67ace3;
case 0x67ace8:goto L67ace8;
case 0x67aceb:c.instructions+=1;goto B67aceb;
case 0x67acf0:goto L67acf0;
case 0x67acf3:c.instructions+=1;goto B67acf3;
case 0x67acf8:goto L67acf8;
case 0x67acfb:c.instructions+=1;goto B67acfb;
case 0x67ad00:goto L67ad00;
case 0x67ad03:c.instructions+=10;goto B67ad03;
case 0x67ad06:c.instructions+=9;goto B67ad06;
case 0x67ad09:c.instructions+=8;goto B67ad09;
case 0x67ad0c:c.instructions+=7;goto B67ad0c;
case 0x67ad0f:c.instructions+=6;goto B67ad0f;
case 0x67ad10:c.instructions+=5;goto B67ad10;
case 0x67ad12:c.instructions+=4;goto B67ad12;
case 0x67ad13:c.instructions+=3;goto B67ad13;
case 0x67ad14:c.instructions+=2;goto B67ad14;
case 0x67ad15:c.instructions+=1;goto B67ad15;
case 0x67ad18:goto L67ad18;
case 0x67ad1a:c.instructions+=8;goto B67ad1a;
case 0x67ad1b:c.instructions+=7;goto B67ad1b;
case 0x67ad1d:c.instructions+=6;goto B67ad1d;
case 0x67ad23:c.instructions+=5;goto B67ad23;
case 0x67ad26:c.instructions+=4;goto B67ad26;
case 0x67ad28:c.instructions+=3;goto B67ad28;
case 0x67ad29:c.instructions+=2;goto B67ad29;
case 0x67ad2b:c.instructions+=1;goto B67ad2b;
case 0x67ad2d:goto L67ad2d;
case 0x67ad30:c.instructions+=1;goto B67ad30;
case 0x67ad36:goto L67ad36;
case 0x67ad3b:goto L67ad3b;
case 0x67ad3f:c.instructions+=1;goto B67ad3f;
case 0x67ad45:goto L67ad45;
case 0x67ad48:c.instructions+=6;goto B67ad48;
case 0x67ad4c:c.instructions+=5;goto B67ad4c;
case 0x67ad50:c.instructions+=4;goto B67ad50;
case 0x67ad53:c.instructions+=3;goto B67ad53;
case 0x67ad56:c.instructions+=2;goto B67ad56;
case 0x67ad5c:c.instructions+=1;goto B67ad5c;
case 0x67ad62:goto L67ad62;
case 0x67ad65:c.instructions+=28;goto B67ad65;
case 0x67ad6b:c.instructions+=27;goto B67ad6b;
case 0x67ad6d:c.instructions+=26;goto B67ad6d;
case 0x67ad6e:c.instructions+=25;goto B67ad6e;
case 0x67ad6f:c.instructions+=24;goto B67ad6f;
case 0x67ad72:c.instructions+=23;goto B67ad72;
case 0x67ad73:c.instructions+=22;goto B67ad73;
case 0x67ad74:c.instructions+=21;goto B67ad74;
case 0x67ad75:c.instructions+=20;goto B67ad75;
case 0x67ad76:c.instructions+=19;goto B67ad76;
case 0x67ad78:c.instructions+=18;goto B67ad78;
case 0x67ad7b:c.instructions+=17;goto B67ad7b;
case 0x67ad81:c.instructions+=16;goto B67ad81;
case 0x67ad82:c.instructions+=15;goto B67ad82;
case 0x67ad83:c.instructions+=14;goto B67ad83;
case 0x67ad84:c.instructions+=13;goto B67ad84;
case 0x67ad85:c.instructions+=12;goto B67ad85;
case 0x67ad87:c.instructions+=11;goto B67ad87;
case 0x67ad89:c.instructions+=10;goto B67ad89;
case 0x67ad8c:c.instructions+=9;goto B67ad8c;
case 0x67ad8d:c.instructions+=8;goto B67ad8d;
case 0x67ad8e:c.instructions+=7;goto B67ad8e;
case 0x67ad8f:c.instructions+=6;goto B67ad8f;
case 0x67ad90:c.instructions+=5;goto B67ad90;
case 0x67ad93:c.instructions+=4;goto B67ad93;
case 0x67ad99:c.instructions+=3;goto B67ad99;
case 0x67ada0:c.instructions+=2;goto B67ada0;
case 0x67ada3:c.instructions+=1;goto B67ada3;
case 0x67ada9:goto L67ada9;
case 0x67adad:goto L67adad;
case 0x67adb0:c.instructions+=3;goto B67adb0;
case 0x67adb3:c.instructions+=2;goto B67adb3;
case 0x67adb5:c.instructions+=1;goto B67adb5;
case 0x67adb7:goto L67adb7;
case 0x67adba:c.instructions+=8;goto B67adba;
case 0x67adbe:c.instructions+=7;goto B67adbe;
case 0x67adc1:c.instructions+=6;goto B67adc1;
case 0x67adc8:c.instructions+=5;goto B67adc8;
case 0x67adcb:c.instructions+=4;goto B67adcb;
case 0x67adcf:c.instructions+=3;goto B67adcf;
case 0x67add0:c.instructions+=2;goto B67add0;
case 0x67add2:c.instructions+=1;goto B67add2;
case 0x67add7:goto L67add7;
case 0x67addb:c.instructions+=5;goto B67addb;
case 0x67addd:c.instructions+=4;goto B67addd;
case 0x67addf:c.instructions+=3;goto B67addf;
case 0x67ade0:c.instructions+=2;goto B67ade0;
case 0x67ade3:c.instructions+=1;goto B67ade3;
case 0x67ade9:goto L67ade9;
case 0x67adea:c.instructions+=4;goto B67adea;
case 0x67adeb:c.instructions+=3;goto B67adeb;
case 0x67aded:c.instructions+=2;goto B67aded;
case 0x67adef:c.instructions+=1;goto B67adef;
case 0x67adf4:goto L67adf4;
case 0x67adf6:c.instructions+=2;goto B67adf6;
case 0x67adf8:c.instructions+=1;goto B67adf8;
case 0x67adfe:goto L67adfe;
case 0x67ae01:c.instructions+=2;goto B67ae01;
case 0x67ae08:c.instructions+=1;goto B67ae08;
case 0x67ae0a:goto L67ae0a;
case 0x67ae0d:c.instructions+=3;goto B67ae0d;
case 0x67ae10:c.instructions+=2;goto B67ae10;
case 0x67ae13:c.instructions+=1;goto B67ae13;
case 0x67ae1a:goto L67ae1a;
case 0x67ae1c:c.instructions+=6;goto B67ae1c;
case 0x67ae1f:c.instructions+=5;goto B67ae1f;
case 0x67ae21:c.instructions+=4;goto B67ae21;
case 0x67ae24:c.instructions+=3;goto B67ae24;
case 0x67ae27:c.instructions+=2;goto B67ae27;
case 0x67ae28:c.instructions+=1;goto B67ae28;
case 0x67ae2a:goto L67ae2a;
case 0x67ae2d:c.instructions+=5;goto B67ae2d;
case 0x67ae30:c.instructions+=4;goto B67ae30;
case 0x67ae34:c.instructions+=3;goto B67ae34;
case 0x67ae36:c.instructions+=2;goto B67ae36;
case 0x67ae39:c.instructions+=1;goto B67ae39;
case 0x67ae3f:goto L67ae3f;
case 0x67ae46:c.instructions+=1;goto B67ae46;
case 0x67ae48:goto L67ae48;
case 0x67ae4c:goto L67ae4c;
case 0x67ae4f:c.instructions+=7;goto B67ae4f;
case 0x67ae52:c.instructions+=6;goto B67ae52;
case 0x67ae55:c.instructions+=5;goto B67ae55;
case 0x67ae58:c.instructions+=4;goto B67ae58;
case 0x67ae5b:c.instructions+=3;goto B67ae5b;
case 0x67ae5e:c.instructions+=2;goto B67ae5e;
case 0x67ae61:c.instructions+=1;goto B67ae61;
case 0x67ae67:goto L67ae67;
case 0x67ae6e:goto L67ae6e;
case 0x67ae70:c.instructions+=2;goto B67ae70;
case 0x67ae73:c.instructions+=1;goto B67ae73;
case 0x67ae79:goto L67ae79;
case 0x67ae7c:c.instructions+=1;goto B67ae7c;
case 0x67ae82:goto L67ae82;
case 0x67ae85:c.instructions+=2;goto B67ae85;
case 0x67ae87:c.instructions+=1;goto B67ae87;
case 0x67ae8c:goto L67ae8c;
case 0x67ae8e:c.instructions+=2;goto B67ae8e;
case 0x67ae91:c.instructions+=1;goto B67ae91;
case 0x67ae97:goto L67ae97;
case 0x67ae9a:c.instructions+=3;goto B67ae9a;
case 0x67ae9c:c.instructions+=2;goto B67ae9c;
case 0x67ae9d:c.instructions+=1;goto B67ae9d;
case 0x67aea2:goto L67aea2;
case 0x67aea4:c.instructions+=2;goto B67aea4;
case 0x67aea6:c.instructions+=1;goto B67aea6;
case 0x67aeac:goto L67aeac;
case 0x67aeaf:c.instructions+=3;goto B67aeaf;
case 0x67aeb1:c.instructions+=2;goto B67aeb1;
case 0x67aeb4:c.instructions+=1;goto B67aeb4;
case 0x67aeb9:goto L67aeb9;
case 0x67aebb:c.instructions+=2;goto B67aebb;
case 0x67aebd:c.instructions+=1;goto B67aebd;
case 0x67aec3:goto L67aec3;
case 0x67aec6:c.instructions+=11;goto B67aec6;
case 0x67aec7:c.instructions+=10;goto B67aec7;
case 0x67aec8:c.instructions+=9;goto B67aec8;
case 0x67aecb:c.instructions+=8;goto B67aecb;
case 0x67aed0:c.instructions+=7;goto B67aed0;
case 0x67aed3:c.instructions+=6;goto B67aed3;
case 0x67aed6:c.instructions+=5;goto B67aed6;
case 0x67aedb:c.instructions+=4;goto B67aedb;
case 0x67aedc:c.instructions+=3;goto B67aedc;
case 0x67aedf:c.instructions+=2;goto B67aedf;
case 0x67aee1:c.instructions+=1;goto B67aee1;
case 0x67aee6:goto L67aee6;
case 0x67aee8:c.instructions+=2;goto B67aee8;
case 0x67aeea:c.instructions+=1;goto B67aeea;
case 0x67aef0:goto L67aef0;
case 0x67aef3:c.instructions+=9;goto B67aef3;
case 0x67aef5:c.instructions+=8;goto B67aef5;
case 0x67aef8:c.instructions+=7;goto B67aef8;
case 0x67aefd:c.instructions+=6;goto B67aefd;
case 0x67af00:c.instructions+=5;goto B67af00;
case 0x67af03:c.instructions+=4;goto B67af03;
case 0x67af04:c.instructions+=3;goto B67af04;
case 0x67af07:c.instructions+=2;goto B67af07;
case 0x67af09:c.instructions+=1;goto B67af09;
case 0x67af0e:goto L67af0e;
case 0x67af10:c.instructions+=2;goto B67af10;
case 0x67af12:c.instructions+=1;goto B67af12;
case 0x67af18:goto L67af18;
case 0x67af1e:c.instructions+=4;goto B67af1e;
case 0x67af21:c.instructions+=3;goto B67af21;
case 0x67af23:c.instructions+=2;goto B67af23;
case 0x67af26:c.instructions+=1;goto B67af26;
case 0x67af28:goto L67af28;
case 0x67af2b:c.instructions+=1;goto B67af2b;
case 0x67af2e:goto L67af2e;
case 0x67af31:c.instructions+=1;goto B67af31;
case 0x67af33:goto L67af33;
case 0x67af36:c.instructions+=8;goto B67af36;
case 0x67af38:c.instructions+=7;goto B67af38;
case 0x67af39:c.instructions+=6;goto B67af39;
case 0x67af3c:c.instructions+=5;goto B67af3c;
case 0x67af3f:c.instructions+=4;goto B67af3f;
case 0x67af40:c.instructions+=3;goto B67af40;
case 0x67af43:c.instructions+=2;goto B67af43;
case 0x67af45:c.instructions+=1;goto B67af45;
case 0x67af4a:goto L67af4a;
case 0x67af4c:c.instructions+=2;goto B67af4c;
case 0x67af4e:c.instructions+=1;goto B67af4e;
case 0x67af54:goto L67af54;
case 0x67af57:goto L67af57;
case 0x67af5a:c.instructions+=4;goto B67af5a;
case 0x67af5e:c.instructions+=3;goto B67af5e;
case 0x67af60:c.instructions+=2;goto B67af60;
case 0x67af63:c.instructions+=1;goto B67af63;
case 0x67af65:goto L67af65;
case 0x67af67:c.instructions+=1;goto B67af67;
case 0x67af6c:goto L67af6c;
case 0x67af6e:c.instructions+=2;goto B67af6e;
case 0x67af71:c.instructions+=1;goto B67af71;
case 0x67af77:goto L67af77;
case 0x67af7a:c.instructions+=1;goto B67af7a;
case 0x67af7c:goto L67af7c;
case 0x67af7f:c.instructions+=3;goto B67af7f;
case 0x67af81:c.instructions+=2;goto B67af81;
case 0x67af84:c.instructions+=1;goto B67af84;
case 0x67af89:goto L67af89;
case 0x67af8b:c.instructions+=2;goto B67af8b;
case 0x67af8d:c.instructions+=1;goto B67af8d;
case 0x67af93:goto L67af93;
case 0x67af96:c.instructions+=3;goto B67af96;
case 0x67af99:c.instructions+=2;goto B67af99;
case 0x67af9a:c.instructions+=1;goto B67af9a;
case 0x67af9f:goto L67af9f;
case 0x67afa1:c.instructions+=2;goto B67afa1;
case 0x67afa4:c.instructions+=1;goto B67afa4;
case 0x67afaa:goto L67afaa;
case 0x67afad:c.instructions+=1;goto B67afad;
case 0x67afb3:goto L67afb3;
case 0x67afb9:c.instructions+=3;goto B67afb9;
case 0x67afbc:c.instructions+=2;goto B67afbc;
case 0x67afbe:c.instructions+=1;goto B67afbe;
case 0x67afc0:goto L67afc0;
case 0x67afc1:c.instructions+=3;goto B67afc1;
case 0x67afc4:c.instructions+=2;goto B67afc4;
case 0x67afc5:c.instructions+=1;goto B67afc5;
case 0x67afca:goto L67afca;
case 0x67afcc:c.instructions+=2;goto B67afcc;
case 0x67afce:c.instructions+=1;goto B67afce;
case 0x67afd4:goto L67afd4;
case 0x67afd6:c.instructions+=4;goto B67afd6;
case 0x67afd9:c.instructions+=3;goto B67afd9;
case 0x67afda:c.instructions+=2;goto B67afda;
case 0x67afdc:c.instructions+=1;goto B67afdc;
case 0x67afe1:goto L67afe1;
case 0x67afe3:c.instructions+=2;goto B67afe3;
case 0x67afe5:c.instructions+=1;goto B67afe5;
case 0x67afeb:goto L67afeb;
case 0x67afed:c.instructions+=3;goto B67afed;
case 0x67aff0:c.instructions+=2;goto B67aff0;
case 0x67aff2:c.instructions+=1;goto B67aff2;
case 0x67aff7:goto L67aff7;
case 0x67aff9:c.instructions+=2;goto B67aff9;
case 0x67affb:c.instructions+=1;goto B67affb;
default:missing_instruction(c.pc);}
B67a001:L67a001:{c.instructions+=7;NFSU2_TR(0x67a001);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67a004:{NFSU2_TR(0x67a004);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67a007:{NFSU2_TR(0x67a007);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67a009:{NFSU2_TR(0x67a009);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a00c:{NFSU2_TR(0x67a00c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a00f:{NFSU2_TR(0x67a00f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a012:{NFSU2_TR(0x67a012);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67a080;}}
}
B67a014:L67a014:{c.instructions+=5;NFSU2_TR(0x67a014);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a017:{NFSU2_TR(0x67a017);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B67a019:{NFSU2_TR(0x67a019);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a01c:{NFSU2_TR(0x67a01c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B67a01f:{NFSU2_TR(0x67a01f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a022:L67a022:{c.instructions+=7;NFSU2_TR(0x67a022);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a025:{NFSU2_TR(0x67a025);
__builtin_memmove((R+24),(R+4),4);
}
B67a027:{NFSU2_TR(0x67a027);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B67a02a:{NFSU2_TR(0x67a02a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B67a02c:{NFSU2_TR(0x67a02c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B67a02e:{NFSU2_TR(0x67a02e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67a031:{NFSU2_TR(0x67a031);
if(r1(R+518)){{goto L67a074;}}
}
B67a033:L67a033:{c.instructions+=3;NFSU2_TR(0x67a033);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67a036:{NFSU2_TR(0x67a036);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B67a039:{NFSU2_TR(0x67a039);
if(r1(R+518)){{goto L67a074;}}
}
B67a03b:L67a03b:{c.instructions+=11;NFSU2_TR(0x67a03b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a03e:{NFSU2_TR(0x67a03e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67a041:{NFSU2_TR(0x67a041);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67a044:{NFSU2_TR(0x67a044);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B67a046:{NFSU2_TR(0x67a046);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B67a049:{NFSU2_TR(0x67a049);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B67a04b:{NFSU2_TR(0x67a04b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B67a04d:{NFSU2_TR(0x67a04d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B67a04f:{NFSU2_TR(0x67a04f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B67a051:{NFSU2_TR(0x67a051);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B67a054:{NFSU2_TR(0x67a054);
if(r1(R+518)){{goto L67a069;}}
}
B67a056:L67a056:{c.instructions+=7;NFSU2_TR(0x67a056);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a059:{NFSU2_TR(0x67a059);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67a05c:{NFSU2_TR(0x67a05c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67a05e:{NFSU2_TR(0x67a05e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B67a061:{NFSU2_TR(0x67a061);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a064:{NFSU2_TR(0x67a064);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a067:{NFSU2_TR(0x67a067);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67a06e;}}
}
B67a069:L67a069:{c.instructions+=2;NFSU2_TR(0x67a069);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a06c:{NFSU2_TR(0x67a06c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B67a06e:L67a06e:{c.instructions+=2;NFSU2_TR(0x67a06e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67a071:{NFSU2_TR(0x67a071);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B67a074:L67a074:{c.instructions+=5;NFSU2_TR(0x67a074);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a077:{NFSU2_TR(0x67a077);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67a078:{NFSU2_TR(0x67a078);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B67a07b:{NFSU2_TR(0x67a07b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a07e:{NFSU2_TR(0x67a07e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a022u);}goto L67a022;}}
}
B67a080:L67a080:{c.instructions+=5;NFSU2_TR(0x67a080);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a083:{NFSU2_TR(0x67a083);
__builtin_memmove((R+4),(R+12),4);
}
B67a085:{NFSU2_TR(0x67a085);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a088:{NFSU2_TR(0x67a088);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a08b:{NFSU2_TR(0x67a08b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a090ull));
TAIL_STATIC(0x675830u,675);
}
B67a090:L67a090:{c.instructions+=9;NFSU2_TR(0x67a090);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a093:{NFSU2_TR(0x67a093);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a096:{NFSU2_TR(0x67a096);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67a098:{NFSU2_TR(0x67a098);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67a09a:{NFSU2_TR(0x67a09a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a09d:{NFSU2_TR(0x67a09d);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B67a0a0:{NFSU2_TR(0x67a0a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a0a3:{NFSU2_TR(0x67a0a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a0a6:{NFSU2_TR(0x67a0a6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L67a0ae;}}
}
B67a0a8:L67a0a8:{c.instructions+=1;NFSU2_TR(0x67a0a8);
{u32 ea_=u32(u32(8042640u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B67a0ae:L67a0ae:{c.instructions+=7;NFSU2_TR(0x67a0ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a0af:{NFSU2_TR(0x67a0af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a0b0:{NFSU2_TR(0x67a0b0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67a0b3:{NFSU2_TR(0x67a0b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a0b4:{NFSU2_TR(0x67a0b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a0b5:{NFSU2_TR(0x67a0b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a0b8:{NFSU2_TR(0x67a0b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a0bdull));
TAIL_STATIC(0x699c39u,699);
}
B67a0bd:L67a0bd:{c.instructions+=12;NFSU2_TR(0x67a0bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67a0c1:{NFSU2_TR(0x67a0c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a0c2:{NFSU2_TR(0x67a0c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a0c3:{NFSU2_TR(0x67a0c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a0c9:{NFSU2_TR(0x67a0c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67a0cf:{NFSU2_TR(0x67a0cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a0d0:{NFSU2_TR(0x67a0d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67a0d3:{NFSU2_TR(0x67a0d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a0d4:{NFSU2_TR(0x67a0d4);
u8 U[4];
w4(U+0,u32(0x11100001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a0d9:{NFSU2_TR(0x67a0d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a0dc:{NFSU2_TR(0x67a0dc);
__builtin_memmove((R+4),(R+12),4);
}
B67a0de:{NFSU2_TR(0x67a0de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a0e3ull));
TAIL_STATIC(0x6758ceu,675);
}
B67a0e3:L67a0e3:{c.instructions+=3;NFSU2_TR(0x67a0e3);
__builtin_memmove((R+24),(R+0),4);
}
B67a0e5:{NFSU2_TR(0x67a0e5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67a0e7:{NFSU2_TR(0x67a0e7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67a623;}}
}
B67a0ed:L67a0ed:{c.instructions+=21;NFSU2_TR(0x67a0ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a0f0:{NFSU2_TR(0x67a0f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a0f3:{NFSU2_TR(0x67a0f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a0f9:{NFSU2_TR(0x67a0f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67a0fc:{NFSU2_TR(0x67a0fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B67a0ff:{NFSU2_TR(0x67a0ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a102:{NFSU2_TR(0x67a102);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a105:{NFSU2_TR(0x67a105);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a106:{NFSU2_TR(0x67a106);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a107:{NFSU2_TR(0x67a107);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a10a:{NFSU2_TR(0x67a10a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a10d:{NFSU2_TR(0x67a10d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a110:{NFSU2_TR(0x67a110);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a113:{NFSU2_TR(0x67a113);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67a118:{NFSU2_TR(0x67a118);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a11b:{NFSU2_TR(0x67a11b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x11200000ull))));
}
B67a120:{NFSU2_TR(0x67a120);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a121:{NFSU2_TR(0x67a121);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a124:{NFSU2_TR(0x67a124);
__builtin_memmove((R+4),(R+12),4);
}
B67a126:{NFSU2_TR(0x67a126);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67a12d:{NFSU2_TR(0x67a12d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a132ull));
TAIL_STATIC(0x6758ceu,675);
}
B67a132:L67a132:{c.instructions+=3;NFSU2_TR(0x67a132);
__builtin_memmove((R+24),(R+0),4);
}
B67a134:{NFSU2_TR(0x67a134);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67a136:{NFSU2_TR(0x67a136);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67a623;}}
}
B67a13c:L67a13c:{c.instructions+=10;NFSU2_TR(0x67a13c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a13f:{NFSU2_TR(0x67a13f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a140:{NFSU2_TR(0x67a140);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a141:{NFSU2_TR(0x67a141);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a144:{NFSU2_TR(0x67a144);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x11300000ull))));
}
B67a149:{NFSU2_TR(0x67a149);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a14c:{NFSU2_TR(0x67a14c);
__builtin_memmove((R+4),(R+12),4);
}
B67a14e:{NFSU2_TR(0x67a14e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a14f:{NFSU2_TR(0x67a14f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a152:{NFSU2_TR(0x67a152);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a157ull));
TAIL_STATIC(0x6758ceu,675);
}
B67a157:L67a157:{c.instructions+=3;NFSU2_TR(0x67a157);
__builtin_memmove((R+24),(R+0),4);
}
B67a159:{NFSU2_TR(0x67a159);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67a15b:{NFSU2_TR(0x67a15b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67a623;}}
}
B67a161:L67a161:{c.instructions+=3;NFSU2_TR(0x67a161);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a164:{NFSU2_TR(0x67a164);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67a166:{NFSU2_TR(0x67a166);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67a217;}}
}
B67a16c:L67a16c:{c.instructions+=8;NFSU2_TR(0x67a16c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67a16f:{NFSU2_TR(0x67a16f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a172:{NFSU2_TR(0x67a172);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B67a174:{NFSU2_TR(0x67a174);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a177:{NFSU2_TR(0x67a177);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a17a:{NFSU2_TR(0x67a17a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B67a17c:{NFSU2_TR(0x67a17c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a17f:{NFSU2_TR(0x67a17f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a182:L67a182:{c.instructions+=13;NFSU2_TR(0x67a182);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a185:{NFSU2_TR(0x67a185);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a188:{NFSU2_TR(0x67a188);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67a18a:{NFSU2_TR(0x67a18a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B67a18d:{NFSU2_TR(0x67a18d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a190:{NFSU2_TR(0x67a190);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B67a193:{NFSU2_TR(0x67a193);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B67a196:{NFSU2_TR(0x67a196);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B67a199:{NFSU2_TR(0x67a199);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67a19b:{NFSU2_TR(0x67a19b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67a19e:{NFSU2_TR(0x67a19e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67a1a0:{NFSU2_TR(0x67a1a0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B67a1a3:{NFSU2_TR(0x67a1a3);
if(r1(R+514)){{goto L67a1d1;}}
}
B67a1a5:L67a1a5:{c.instructions+=13;NFSU2_TR(0x67a1a5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67a1a7:{NFSU2_TR(0x67a1a7);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67a1aa:{NFSU2_TR(0x67a1aa);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67a1ad:{NFSU2_TR(0x67a1ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B67a1b1:{NFSU2_TR(0x67a1b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67a1b3:{NFSU2_TR(0x67a1b3);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67a1b6:{NFSU2_TR(0x67a1b6);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67a1b9:{NFSU2_TR(0x67a1b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a1bc:{NFSU2_TR(0x67a1bc);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67a1be:{NFSU2_TR(0x67a1be);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B67a1c0:{NFSU2_TR(0x67a1c0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67a1c2:{NFSU2_TR(0x67a1c2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B67a1c5:{NFSU2_TR(0x67a1c5);
if(r1(R+514)){{goto L67a1d1;}}
}
B67a1c7:L67a1c7:{c.instructions+=3;NFSU2_TR(0x67a1c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a1ca:{NFSU2_TR(0x67a1ca);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x80ull))));
}
B67a1cf:{NFSU2_TR(0x67a1cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B67a1d1:L67a1d1:{c.instructions+=21;NFSU2_TR(0x67a1d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a1d4:{NFSU2_TR(0x67a1d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B67a1d7:{NFSU2_TR(0x67a1d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a1da:{NFSU2_TR(0x67a1da);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B67a1dd:{NFSU2_TR(0x67a1dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+0))));
s4(u32(r4(R+8)),r4(U+0));
}
B67a1df:{NFSU2_TR(0x67a1df);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a1e2:{NFSU2_TR(0x67a1e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67a1e5:{NFSU2_TR(0x67a1e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B67a1e7:{NFSU2_TR(0x67a1e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B67a1ea:{NFSU2_TR(0x67a1ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a1f0:{NFSU2_TR(0x67a1f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a1f3:{NFSU2_TR(0x67a1f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a1f6:{NFSU2_TR(0x67a1f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a1f9:{NFSU2_TR(0x67a1f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B67a1fc:{NFSU2_TR(0x67a1fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67a1ff:{NFSU2_TR(0x67a1ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B67a202:{NFSU2_TR(0x67a202);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a208:{NFSU2_TR(0x67a208);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B67a20b:{NFSU2_TR(0x67a20b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67a20e:{NFSU2_TR(0x67a20e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a211:{NFSU2_TR(0x67a211);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a182u);}goto L67a182;}}
}
B67a217:L67a217:{c.instructions+=2;NFSU2_TR(0x67a217);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a21a:{NFSU2_TR(0x67a21a);
if(r1(R+518)){{goto L67a236;}}
}
B67a21c:L67a21c:{c.instructions+=2;NFSU2_TR(0x67a21c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a21f:{NFSU2_TR(0x67a21f);
if(r1(R+518)){{goto L67a236;}}
}
B67a221:L67a221:{c.instructions+=4;NFSU2_TR(0x67a221);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a222:{NFSU2_TR(0x67a222);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a225:{NFSU2_TR(0x67a225);
__builtin_memmove((R+4),(R+12),4);
}
B67a227:{NFSU2_TR(0x67a227);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a22cull));
TAIL_STATIC(0x681bf8u,681);
}
B67a22c:L67a22c:{c.instructions+=3;NFSU2_TR(0x67a22c);
__builtin_memmove((R+24),(R+0),4);
}
B67a22e:{NFSU2_TR(0x67a22e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67a230:{NFSU2_TR(0x67a230);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67a623;}}
}
B67a236:L67a236:{c.instructions+=7;NFSU2_TR(0x67a236);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67a23a:{NFSU2_TR(0x67a23a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a23b:{NFSU2_TR(0x67a23b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67a23e:{NFSU2_TR(0x67a23e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a23f:{NFSU2_TR(0x67a23f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a242:{NFSU2_TR(0x67a242);
__builtin_memmove((R+4),(R+12),4);
}
B67a244:{NFSU2_TR(0x67a244);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a249ull));
TAIL_STATIC(0x682bb1u,682);
}
B67a249:L67a249:{c.instructions+=3;NFSU2_TR(0x67a249);
__builtin_memmove((R+24),(R+0),4);
}
B67a24b:{NFSU2_TR(0x67a24b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67a24d:{NFSU2_TR(0x67a24d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67a623;}}
}
B67a253:L67a253:{c.instructions+=3;NFSU2_TR(0x67a253);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67a256:{NFSU2_TR(0x67a256);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67a258:{NFSU2_TR(0x67a258);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67a278;}}
}
B67a25a:L67a25a:{c.instructions+=4;NFSU2_TR(0x67a25a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a25d:{NFSU2_TR(0x67a25d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a260:{NFSU2_TR(0x67a260);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B67a262:{NFSU2_TR(0x67a262);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a265:L67a265:{c.instructions+=7;NFSU2_TR(0x67a265);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B67a268:{NFSU2_TR(0x67a268);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67a26b:{NFSU2_TR(0x67a26b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B67a26e:{NFSU2_TR(0x67a26e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B67a270:{NFSU2_TR(0x67a270);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B67a273:{NFSU2_TR(0x67a273);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67a276:{NFSU2_TR(0x67a276);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a265u);}goto L67a265;}}
}
B67a278:L67a278:{c.instructions+=5;NFSU2_TR(0x67a278);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67a27e:{NFSU2_TR(0x67a27e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a27f:{NFSU2_TR(0x67a27f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a282:{NFSU2_TR(0x67a282);
__builtin_memmove((R+4),(R+12),4);
}
B67a284:{NFSU2_TR(0x67a284);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a289ull));
TAIL_STATIC(0x673e90u,673);
}
B67a289:L67a289:{c.instructions+=2;NFSU2_TR(0x67a289);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67a28b:{NFSU2_TR(0x67a28b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67a30a;}}
}
B67a28d:L67a28d:{c.instructions+=5;NFSU2_TR(0x67a28d);
{u32 ea_=u32(r4(R+20)+u32(4294967128u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67a293:{NFSU2_TR(0x67a293);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67a299:{NFSU2_TR(0x67a299);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67a29b:{NFSU2_TR(0x67a29b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B67a29e:{NFSU2_TR(0x67a29e);
if(r1(R+518)){{goto L67a2b3;}}
}
B67a2a0:L67a2a0:{c.instructions+=5;NFSU2_TR(0x67a2a0);
{u32 ea_=u32(r4(R+20)+u32(4294967136u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67a2a6:{NFSU2_TR(0x67a2a6);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67a2ac:{NFSU2_TR(0x67a2ac);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67a2ae:{NFSU2_TR(0x67a2ae);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B67a2b1:{NFSU2_TR(0x67a2b1);
if(r1(R+514)){{goto L67a30a;}}
}
B67a2b3:L67a2b3:{c.instructions+=2;NFSU2_TR(0x67a2b3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a2b6:{NFSU2_TR(0x67a2b6);
if(r1(R+518)){{goto L67a2d2;}}
}
B67a2b8:L67a2b8:{c.instructions+=2;NFSU2_TR(0x67a2b8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a2bb:{NFSU2_TR(0x67a2bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67a2d2;}}
}
B67a2bd:L67a2bd:{c.instructions+=4;NFSU2_TR(0x67a2bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a2be:{NFSU2_TR(0x67a2be);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a2c1:{NFSU2_TR(0x67a2c1);
__builtin_memmove((R+4),(R+12),4);
}
B67a2c3:{NFSU2_TR(0x67a2c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a2c8ull));
TAIL_STATIC(0x681bf8u,681);
}
B67a2c8:L67a2c8:{c.instructions+=3;NFSU2_TR(0x67a2c8);
__builtin_memmove((R+24),(R+0),4);
}
B67a2ca:{NFSU2_TR(0x67a2ca);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67a2cc:{NFSU2_TR(0x67a2cc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67a623;}}
}
B67a2d2:L67a2d2:{c.instructions+=3;NFSU2_TR(0x67a2d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a2d5:{NFSU2_TR(0x67a2d5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67a2d7:{NFSU2_TR(0x67a2d7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67a49f;}}
}
B67a2dd:L67a2dd:{c.instructions+=4;NFSU2_TR(0x67a2dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a2e0:{NFSU2_TR(0x67a2e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67a2e3:{NFSU2_TR(0x67a2e3);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B67a2e5:{NFSU2_TR(0x67a2e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a2e8:L67a2e8:{c.instructions+=6;NFSU2_TR(0x67a2e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B67a2eb:{NFSU2_TR(0x67a2eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67a2ee:{NFSU2_TR(0x67a2ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B67a2f1:{NFSU2_TR(0x67a2f1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67a2f4:{NFSU2_TR(0x67a2f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B67a2f6:{NFSU2_TR(0x67a2f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67a2fd;}}
}
B67a2f8:L67a2f8:{c.instructions+=2;NFSU2_TR(0x67a2f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a2fb:{NFSU2_TR(0x67a2fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B67a2fd:L67a2fd:{c.instructions+=3;NFSU2_TR(0x67a2fd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B67a300:{NFSU2_TR(0x67a300);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67a303:{NFSU2_TR(0x67a303);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a2e8u);}goto L67a2e8;}}
}
B67a305:L67a305:{c.instructions+=1;NFSU2_TR(0x67a305);
{goto L67a49f;}
}
B67a30a:L67a30a:{c.instructions+=3;NFSU2_TR(0x67a30a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a30d:{NFSU2_TR(0x67a30d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B67a310:{NFSU2_TR(0x67a310);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L67a31f;}}
}
B67a312:L67a312:{c.instructions+=3;NFSU2_TR(0x67a312);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a315:{NFSU2_TR(0x67a315);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B67a319:{NFSU2_TR(0x67a319);
if(r1(R+518)){{goto L67a613;}}
}
B67a31f:L67a31f:{c.instructions+=11;NFSU2_TR(0x67a31f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67a323:{NFSU2_TR(0x67a323);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a324:{NFSU2_TR(0x67a324);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a325:{NFSU2_TR(0x67a325);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67a328:{NFSU2_TR(0x67a328);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a329:{NFSU2_TR(0x67a329);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67a32c:{NFSU2_TR(0x67a32c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a32d:{NFSU2_TR(0x67a32d);
u8 U[4];
w4(U+0,u32(0x11400001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a332:{NFSU2_TR(0x67a332);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a335:{NFSU2_TR(0x67a335);
__builtin_memmove((R+4),(R+12),4);
}
B67a337:{NFSU2_TR(0x67a337);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a33cull));
TAIL_STATIC(0x6758ceu,675);
}
B67a33c:L67a33c:{c.instructions+=3;NFSU2_TR(0x67a33c);
__builtin_memmove((R+24),(R+0),4);
}
B67a33e:{NFSU2_TR(0x67a33e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67a340:{NFSU2_TR(0x67a340);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67a623;}}
}
B67a346:L67a346:{c.instructions+=11;NFSU2_TR(0x67a346);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a349:{NFSU2_TR(0x67a349);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a34c:{NFSU2_TR(0x67a34c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a34f:{NFSU2_TR(0x67a34f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67a352:{NFSU2_TR(0x67a352);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a358:{NFSU2_TR(0x67a358);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B67a35b:{NFSU2_TR(0x67a35b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a35e:{NFSU2_TR(0x67a35e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a361:{NFSU2_TR(0x67a361);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a364:{NFSU2_TR(0x67a364);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67a36b:{NFSU2_TR(0x67a36b);
if(r1(R+518)){{goto L67a387;}}
}
B67a36d:L67a36d:{c.instructions+=2;NFSU2_TR(0x67a36d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a370:{NFSU2_TR(0x67a370);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67a387;}}
}
B67a372:L67a372:{c.instructions+=4;NFSU2_TR(0x67a372);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a373:{NFSU2_TR(0x67a373);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a376:{NFSU2_TR(0x67a376);
__builtin_memmove((R+4),(R+12),4);
}
B67a378:{NFSU2_TR(0x67a378);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a37dull));
TAIL_STATIC(0x681bf8u,681);
}
B67a37d:L67a37d:{c.instructions+=3;NFSU2_TR(0x67a37d);
__builtin_memmove((R+24),(R+0),4);
}
B67a37f:{NFSU2_TR(0x67a37f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67a381:{NFSU2_TR(0x67a381);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67a623;}}
}
B67a387:L67a387:{c.instructions+=4;NFSU2_TR(0x67a387);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67a38a:{NFSU2_TR(0x67a38a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67a38c:{NFSU2_TR(0x67a38c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a38f:{NFSU2_TR(0x67a38f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67a3ac;}}
}
B67a391:L67a391:{c.instructions+=3;NFSU2_TR(0x67a391);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a394:{NFSU2_TR(0x67a394);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B67a396:{NFSU2_TR(0x67a396);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a399:L67a399:{c.instructions+=7;NFSU2_TR(0x67a399);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B67a39c:{NFSU2_TR(0x67a39c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67a39f:{NFSU2_TR(0x67a39f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B67a3a2:{NFSU2_TR(0x67a3a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B67a3a4:{NFSU2_TR(0x67a3a4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B67a3a7:{NFSU2_TR(0x67a3a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67a3aa:{NFSU2_TR(0x67a3aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a399u);}goto L67a399;}}
}
B67a3ac:L67a3ac:{c.instructions+=11;NFSU2_TR(0x67a3ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a3af:{NFSU2_TR(0x67a3af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a3b0:{NFSU2_TR(0x67a3b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a3b1:{NFSU2_TR(0x67a3b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a3b4:{NFSU2_TR(0x67a3b4);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B67a3b9:{NFSU2_TR(0x67a3b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a3bc:{NFSU2_TR(0x67a3bc);
__builtin_memmove((R+4),(R+12),4);
}
B67a3be:{NFSU2_TR(0x67a3be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a3bf:{NFSU2_TR(0x67a3bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a3c2:{NFSU2_TR(0x67a3c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a3c5:{NFSU2_TR(0x67a3c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a3caull));
TAIL_STATIC(0x6758ceu,675);
}
B67a3ca:L67a3ca:{c.instructions+=3;NFSU2_TR(0x67a3ca);
__builtin_memmove((R+24),(R+0),4);
}
B67a3cc:{NFSU2_TR(0x67a3cc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67a3ce:{NFSU2_TR(0x67a3ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67a623;}}
}
B67a3d4:L67a3d4:{c.instructions+=3;NFSU2_TR(0x67a3d4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67a3d6:{NFSU2_TR(0x67a3d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a3d9:{NFSU2_TR(0x67a3d9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67a3f9;}}
}
B67a3db:L67a3db:{c.instructions+=10;NFSU2_TR(0x67a3db);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a3de:{NFSU2_TR(0x67a3de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67a3e1:{NFSU2_TR(0x67a3e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B67a3e4:{NFSU2_TR(0x67a3e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67a3e7:{NFSU2_TR(0x67a3e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B67a3ea:{NFSU2_TR(0x67a3ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a3f0:{NFSU2_TR(0x67a3f0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67a3f1:{NFSU2_TR(0x67a3f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B67a3f4:{NFSU2_TR(0x67a3f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a3f7:{NFSU2_TR(0x67a3f7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a3dbu);}goto L67a3db;}}
}
B67a3f9:L67a3f9:{c.instructions+=11;NFSU2_TR(0x67a3f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a3fc:{NFSU2_TR(0x67a3fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a3fd:{NFSU2_TR(0x67a3fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a3fe:{NFSU2_TR(0x67a3fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a401:{NFSU2_TR(0x67a401);
__builtin_memmove((R+4),(R+12),4);
}
B67a403:{NFSU2_TR(0x67a403);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a406:{NFSU2_TR(0x67a406);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a409:{NFSU2_TR(0x67a409);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a40c:{NFSU2_TR(0x67a40c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a40f:{NFSU2_TR(0x67a40f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a412:{NFSU2_TR(0x67a412);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a417ull));
TAIL_STATIC(0x6758ceu,675);
}
B67a417:L67a417:{c.instructions+=3;NFSU2_TR(0x67a417);
__builtin_memmove((R+24),(R+0),4);
}
B67a419:{NFSU2_TR(0x67a419);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67a41b:{NFSU2_TR(0x67a41b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67a623;}}
}
B67a421:L67a421:{c.instructions+=3;NFSU2_TR(0x67a421);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67a423:{NFSU2_TR(0x67a423);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a426:{NFSU2_TR(0x67a426);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67a446;}}
}
B67a428:L67a428:{c.instructions+=10;NFSU2_TR(0x67a428);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a42b:{NFSU2_TR(0x67a42b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67a42e:{NFSU2_TR(0x67a42e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B67a431:{NFSU2_TR(0x67a431);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67a434:{NFSU2_TR(0x67a434);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B67a437:{NFSU2_TR(0x67a437);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a43d:{NFSU2_TR(0x67a43d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67a43e:{NFSU2_TR(0x67a43e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B67a441:{NFSU2_TR(0x67a441);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a444:{NFSU2_TR(0x67a444);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a428u);}goto L67a428;}}
}
B67a446:L67a446:{c.instructions+=13;NFSU2_TR(0x67a446);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a449:{NFSU2_TR(0x67a449);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a44a:{NFSU2_TR(0x67a44a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a44d:{NFSU2_TR(0x67a44d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a450:{NFSU2_TR(0x67a450);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a453:{NFSU2_TR(0x67a453);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a456:{NFSU2_TR(0x67a456);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a459:{NFSU2_TR(0x67a459);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20800000ull))));
}
B67a45e:{NFSU2_TR(0x67a45e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a45f:{NFSU2_TR(0x67a45f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a462:{NFSU2_TR(0x67a462);
__builtin_memmove((R+4),(R+12),4);
}
B67a464:{NFSU2_TR(0x67a464);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67a46b:{NFSU2_TR(0x67a46b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a470ull));
TAIL_STATIC(0x6758ceu,675);
}
B67a470:L67a470:{c.instructions+=3;NFSU2_TR(0x67a470);
__builtin_memmove((R+24),(R+0),4);
}
B67a472:{NFSU2_TR(0x67a472);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67a474:{NFSU2_TR(0x67a474);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67a623;}}
}
B67a47a:L67a47a:{c.instructions+=3;NFSU2_TR(0x67a47a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67a47c:{NFSU2_TR(0x67a47c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a47f:{NFSU2_TR(0x67a47f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67a49f;}}
}
B67a481:L67a481:{c.instructions+=10;NFSU2_TR(0x67a481);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a484:{NFSU2_TR(0x67a484);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67a487:{NFSU2_TR(0x67a487);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B67a48a:{NFSU2_TR(0x67a48a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67a48d:{NFSU2_TR(0x67a48d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B67a490:{NFSU2_TR(0x67a490);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a496:{NFSU2_TR(0x67a496);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67a497:{NFSU2_TR(0x67a497);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B67a49a:{NFSU2_TR(0x67a49a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a49d:{NFSU2_TR(0x67a49d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a481u);}goto L67a481;}}
}
B67a49f:L67a49f:{c.instructions+=10;NFSU2_TR(0x67a49f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a4a2:{NFSU2_TR(0x67a4a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a4a3:{NFSU2_TR(0x67a4a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a4a4:{NFSU2_TR(0x67a4a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a4a7:{NFSU2_TR(0x67a4a7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B67a4ac:{NFSU2_TR(0x67a4ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a4af:{NFSU2_TR(0x67a4af);
__builtin_memmove((R+4),(R+12),4);
}
B67a4b1:{NFSU2_TR(0x67a4b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a4b2:{NFSU2_TR(0x67a4b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a4b5:{NFSU2_TR(0x67a4b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a4baull));
TAIL_STATIC(0x6758ceu,675);
}
B67a4ba:L67a4ba:{c.instructions+=3;NFSU2_TR(0x67a4ba);
__builtin_memmove((R+24),(R+0),4);
}
B67a4bc:{NFSU2_TR(0x67a4bc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67a4be:{NFSU2_TR(0x67a4be);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67a623;}}
}
B67a4c4:L67a4c4:{c.instructions+=3;NFSU2_TR(0x67a4c4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67a4c6:{NFSU2_TR(0x67a4c6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a4c9:{NFSU2_TR(0x67a4c9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67a4e9;}}
}
B67a4cb:L67a4cb:{c.instructions+=10;NFSU2_TR(0x67a4cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a4ce:{NFSU2_TR(0x67a4ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67a4d1:{NFSU2_TR(0x67a4d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B67a4d4:{NFSU2_TR(0x67a4d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67a4d7:{NFSU2_TR(0x67a4d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B67a4da:{NFSU2_TR(0x67a4da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a4e0:{NFSU2_TR(0x67a4e0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67a4e1:{NFSU2_TR(0x67a4e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B67a4e4:{NFSU2_TR(0x67a4e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a4e7:{NFSU2_TR(0x67a4e7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a4cbu);}goto L67a4cb;}}
}
B67a4e9:L67a4e9:{c.instructions+=10;NFSU2_TR(0x67a4e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a4ec:{NFSU2_TR(0x67a4ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a4ed:{NFSU2_TR(0x67a4ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a4f0:{NFSU2_TR(0x67a4f0);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20900000ull))));
}
B67a4f5:{NFSU2_TR(0x67a4f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a4f8:{NFSU2_TR(0x67a4f8);
__builtin_memmove((R+4),(R+12),4);
}
B67a4fa:{NFSU2_TR(0x67a4fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a4fd:{NFSU2_TR(0x67a4fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a4fe:{NFSU2_TR(0x67a4fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a501:{NFSU2_TR(0x67a501);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a506ull));
TAIL_STATIC(0x6758ceu,675);
}
B67a506:L67a506:{c.instructions+=3;NFSU2_TR(0x67a506);
__builtin_memmove((R+24),(R+0),4);
}
B67a508:{NFSU2_TR(0x67a508);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67a50a:{NFSU2_TR(0x67a50a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67a623;}}
}
B67a510:L67a510:{c.instructions+=3;NFSU2_TR(0x67a510);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67a512:{NFSU2_TR(0x67a512);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a515:{NFSU2_TR(0x67a515);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67a535;}}
}
B67a517:L67a517:{c.instructions+=10;NFSU2_TR(0x67a517);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a51a:{NFSU2_TR(0x67a51a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67a51d:{NFSU2_TR(0x67a51d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B67a520:{NFSU2_TR(0x67a520);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67a523:{NFSU2_TR(0x67a523);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B67a526:{NFSU2_TR(0x67a526);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a52c:{NFSU2_TR(0x67a52c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67a52d:{NFSU2_TR(0x67a52d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B67a530:{NFSU2_TR(0x67a530);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a533:{NFSU2_TR(0x67a533);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a517u);}goto L67a517;}}
}
B67a535:L67a535:{c.instructions+=14;NFSU2_TR(0x67a535);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a538:{NFSU2_TR(0x67a538);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a539:{NFSU2_TR(0x67a539);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a53a:{NFSU2_TR(0x67a53a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a53d:{NFSU2_TR(0x67a53d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a540:{NFSU2_TR(0x67a540);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a543:{NFSU2_TR(0x67a543);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a546:{NFSU2_TR(0x67a546);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a549:{NFSU2_TR(0x67a549);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a54c:{NFSU2_TR(0x67a54c);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x11500000ull))));
}
B67a551:{NFSU2_TR(0x67a551);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a552:{NFSU2_TR(0x67a552);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a555:{NFSU2_TR(0x67a555);
__builtin_memmove((R+4),(R+12),4);
}
B67a557:{NFSU2_TR(0x67a557);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a55cull));
TAIL_STATIC(0x6758ceu,675);
}
B67a55c:L67a55c:{c.instructions+=3;NFSU2_TR(0x67a55c);
__builtin_memmove((R+24),(R+0),4);
}
B67a55e:{NFSU2_TR(0x67a55e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67a560:{NFSU2_TR(0x67a560);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67a623;}}
}
B67a566:L67a566:{c.instructions+=3;NFSU2_TR(0x67a566);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a569:{NFSU2_TR(0x67a569);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67a56b:{NFSU2_TR(0x67a56b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67a5dc;}}
}
B67a56d:L67a56d:{c.instructions+=5;NFSU2_TR(0x67a56d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67a570:{NFSU2_TR(0x67a570);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a573:{NFSU2_TR(0x67a573);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B67a575:{NFSU2_TR(0x67a575);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a578:{NFSU2_TR(0x67a578);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a57b:L67a57b:{c.instructions+=13;NFSU2_TR(0x67a57b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a57e:{NFSU2_TR(0x67a57e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a581:{NFSU2_TR(0x67a581);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a584:{NFSU2_TR(0x67a584);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B67a587:{NFSU2_TR(0x67a587);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B67a58a:{NFSU2_TR(0x67a58a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B67a58c:{NFSU2_TR(0x67a58c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B67a58f:{NFSU2_TR(0x67a58f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B67a592:{NFSU2_TR(0x67a592);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67a594:{NFSU2_TR(0x67a594);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67a597:{NFSU2_TR(0x67a597);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67a599:{NFSU2_TR(0x67a599);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B67a59c:{NFSU2_TR(0x67a59c);
if(r1(R+514)){{goto L67a5ca;}}
}
B67a59e:L67a59e:{c.instructions+=13;NFSU2_TR(0x67a59e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67a5a0:{NFSU2_TR(0x67a5a0);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67a5a3:{NFSU2_TR(0x67a5a3);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67a5a6:{NFSU2_TR(0x67a5a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B67a5aa:{NFSU2_TR(0x67a5aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67a5ac:{NFSU2_TR(0x67a5ac);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67a5af:{NFSU2_TR(0x67a5af);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67a5b2:{NFSU2_TR(0x67a5b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a5b5:{NFSU2_TR(0x67a5b5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67a5b7:{NFSU2_TR(0x67a5b7);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B67a5b9:{NFSU2_TR(0x67a5b9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67a5bb:{NFSU2_TR(0x67a5bb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B67a5be:{NFSU2_TR(0x67a5be);
if(r1(R+514)){{goto L67a5ca;}}
}
B67a5c0:L67a5c0:{c.instructions+=3;NFSU2_TR(0x67a5c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a5c3:{NFSU2_TR(0x67a5c3);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x80ull))));
}
B67a5c8:{NFSU2_TR(0x67a5c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B67a5ca:L67a5ca:{c.instructions+=7;NFSU2_TR(0x67a5ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67a5cc:{NFSU2_TR(0x67a5cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a5cf:{NFSU2_TR(0x67a5cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B67a5d2:{NFSU2_TR(0x67a5d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+0))));
s4(u32(r4(R+8)),r4(U+0));
}
B67a5d4:{NFSU2_TR(0x67a5d4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B67a5d7:{NFSU2_TR(0x67a5d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67a5da:{NFSU2_TR(0x67a5da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a57bu);}goto L67a57b;}}
}
B67a5dc:L67a5dc:{c.instructions+=2;NFSU2_TR(0x67a5dc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a5df:{NFSU2_TR(0x67a5df);
if(r1(R+518)){{goto L67a61a;}}
}
B67a5e1:L67a5e1:{c.instructions+=2;NFSU2_TR(0x67a5e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a5e4:{NFSU2_TR(0x67a5e4);
if(r1(R+518)){{goto L67a61a;}}
}
B67a5e6:L67a5e6:{c.instructions+=2;NFSU2_TR(0x67a5e6);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a5e9:{NFSU2_TR(0x67a5e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67a61a;}}
}
B67a5eb:L67a5eb:{c.instructions+=2;NFSU2_TR(0x67a5eb);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a5ee:{NFSU2_TR(0x67a5ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67a61a;}}
}
B67a5f0:L67a5f0:{c.instructions+=12;NFSU2_TR(0x67a5f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a5f3:{NFSU2_TR(0x67a5f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a5f4:{NFSU2_TR(0x67a5f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a5f5:{NFSU2_TR(0x67a5f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67a5f8:{NFSU2_TR(0x67a5f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a5f9:{NFSU2_TR(0x67a5f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a5fc:{NFSU2_TR(0x67a5fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B67a5ff:{NFSU2_TR(0x67a5ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a600:{NFSU2_TR(0x67a600);
u8 U[4];
w4(U+0,u32(0x10000001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a605:{NFSU2_TR(0x67a605);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a608:{NFSU2_TR(0x67a608);
__builtin_memmove((R+4),(R+12),4);
}
B67a60a:{NFSU2_TR(0x67a60a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a60full));
TAIL_STATIC(0x6758ceu,675);
}
B67a60f:L67a60f:{c.instructions+=2;NFSU2_TR(0x67a60f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67a611:{NFSU2_TR(0x67a611);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L67a61a;}}
}
B67a613:L67a613:{c.instructions+=2;NFSU2_TR(0x67a613);
w4(R+24,u32(0x80004005ull));
}
B67a618:{NFSU2_TR(0x67a618);
{goto L67a623;}
}
B67a61a:L67a61a:{c.instructions+=2;NFSU2_TR(0x67a61a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B67a61c:{NFSU2_TR(0x67a61c);
{goto L67a623;}
}
B67a61e:L67a61e:{c.instructions+=1;NFSU2_TR(0x67a61e);
w4(R+24,u32(0x8007000eull));
}
B67a623:L67a623:{c.instructions+=2;NFSU2_TR(0x67a623);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a626:{NFSU2_TR(0x67a626);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a62bull));
TAIL_STATIC(0x575630u,575);
}
B67a62b:L67a62b:{c.instructions+=2;NFSU2_TR(0x67a62b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a62e:{NFSU2_TR(0x67a62e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a633ull));
TAIL_STATIC(0x575630u,575);
}
B67a633:L67a633:{c.instructions+=2;NFSU2_TR(0x67a633);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a636:{NFSU2_TR(0x67a636);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a63bull));
TAIL_STATIC(0x575630u,575);
}
B67a63b:L67a63b:{c.instructions+=2;NFSU2_TR(0x67a63b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a63e:{NFSU2_TR(0x67a63e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a643ull));
TAIL_STATIC(0x575630u,575);
}
B67a643:L67a643:{c.instructions+=2;NFSU2_TR(0x67a643);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a646:{NFSU2_TR(0x67a646);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a64bull));
TAIL_STATIC(0x575630u,575);
}
B67a64b:L67a64b:{c.instructions+=2;NFSU2_TR(0x67a64b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a64e:{NFSU2_TR(0x67a64e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a653ull));
TAIL_STATIC(0x575630u,575);
}
B67a653:L67a653:{c.instructions+=16;NFSU2_TR(0x67a653);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a656:{NFSU2_TR(0x67a656);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a659:{NFSU2_TR(0x67a659);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a65c:{NFSU2_TR(0x67a65c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a65f:{NFSU2_TR(0x67a65f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a665:{NFSU2_TR(0x67a665);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a668:{NFSU2_TR(0x67a668);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a66e:{NFSU2_TR(0x67a66e);
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B67a671:{NFSU2_TR(0x67a671);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B67a674:{NFSU2_TR(0x67a674);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a677:{NFSU2_TR(0x67a677);
__builtin_memmove((R+0),(R+24),4);
}
B67a679:{NFSU2_TR(0x67a679);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B67a67a:{NFSU2_TR(0x67a67a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B67a67b:{NFSU2_TR(0x67a67b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B67a67c:{NFSU2_TR(0x67a67c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B67a67d:{NFSU2_TR(0x67a67d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67a680:L67a680:{c.instructions+=28;NFSU2_TR(0x67a680);
__builtin_memmove((R+28),(R+28),4);
}
B67a682:{NFSU2_TR(0x67a682);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a683:{NFSU2_TR(0x67a683);
__builtin_memmove((R+20),(R+16),4);
}
B67a685:{NFSU2_TR(0x67a685);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x7cull))));
}
B67a688:{NFSU2_TR(0x67a688);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a689:{NFSU2_TR(0x67a689);
__builtin_memmove((R+12),(R+4),4);
}
B67a68b:{NFSU2_TR(0x67a68b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a68e:{NFSU2_TR(0x67a68e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a691:{NFSU2_TR(0x67a691);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a694:{NFSU2_TR(0x67a694);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a697:{NFSU2_TR(0x67a697);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a69a:{NFSU2_TR(0x67a69a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a69d:{NFSU2_TR(0x67a69d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a6a0:{NFSU2_TR(0x67a6a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a6a1:{NFSU2_TR(0x67a6a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67a6a4:{NFSU2_TR(0x67a6a4);
__builtin_memmove((R+0),(R+24),4);
}
B67a6a6:{NFSU2_TR(0x67a6a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B67a6a9:{NFSU2_TR(0x67a6a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a6aa:{NFSU2_TR(0x67a6aa);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67a6ac:{NFSU2_TR(0x67a6ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a6ad:{NFSU2_TR(0x67a6ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a6b0:{NFSU2_TR(0x67a6b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a6b3:{NFSU2_TR(0x67a6b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a6b6:{NFSU2_TR(0x67a6b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a6b9:{NFSU2_TR(0x67a6b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a6bc:{NFSU2_TR(0x67a6bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a6bf:{NFSU2_TR(0x67a6bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a6c2:{NFSU2_TR(0x67a6c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a6c7ull));
TAIL_STATIC(0x575620u,575);
}
B67a6c7:L67a6c7:{c.instructions+=4;NFSU2_TR(0x67a6c7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67a6c9:{NFSU2_TR(0x67a6c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67a6ca:{NFSU2_TR(0x67a6ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a6cd:{NFSU2_TR(0x67a6cd);
if(r1(R+518)){{goto L67acc5;}}
}
B67a6d3:L67a6d3:{c.instructions+=2;NFSU2_TR(0x67a6d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a6d6:{NFSU2_TR(0x67a6d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a6dbull));
TAIL_STATIC(0x575620u,575);
}
B67a6db:L67a6db:{c.instructions+=4;NFSU2_TR(0x67a6db);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67a6dd:{NFSU2_TR(0x67a6dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67a6de:{NFSU2_TR(0x67a6de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a6e1:{NFSU2_TR(0x67a6e1);
if(r1(R+518)){{goto L67acc5;}}
}
B67a6e7:L67a6e7:{c.instructions+=4;NFSU2_TR(0x67a6e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B67a6ea:{NFSU2_TR(0x67a6ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a6eb:{NFSU2_TR(0x67a6eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a6ee:{NFSU2_TR(0x67a6ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a6f3ull));
TAIL_STATIC(0x575620u,575);
}
B67a6f3:L67a6f3:{c.instructions+=4;NFSU2_TR(0x67a6f3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67a6f5:{NFSU2_TR(0x67a6f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67a6f6:{NFSU2_TR(0x67a6f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a6f9:{NFSU2_TR(0x67a6f9);
if(r1(R+518)){{goto L67acc5;}}
}
B67a6ff:L67a6ff:{c.instructions+=2;NFSU2_TR(0x67a6ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a700:{NFSU2_TR(0x67a700);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a705ull));
TAIL_STATIC(0x575620u,575);
}
B67a705:L67a705:{c.instructions+=4;NFSU2_TR(0x67a705);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67a707:{NFSU2_TR(0x67a707);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67a708:{NFSU2_TR(0x67a708);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a70b:{NFSU2_TR(0x67a70b);
if(r1(R+518)){{goto L67acc5;}}
}
B67a711:L67a711:{c.instructions+=2;NFSU2_TR(0x67a711);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a714:{NFSU2_TR(0x67a714);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a719ull));
TAIL_STATIC(0x575620u,575);
}
B67a719:L67a719:{c.instructions+=4;NFSU2_TR(0x67a719);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67a71b:{NFSU2_TR(0x67a71b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67a71c:{NFSU2_TR(0x67a71c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a71f:{NFSU2_TR(0x67a71f);
if(r1(R+518)){{goto L67acc5;}}
}
B67a725:L67a725:{c.instructions+=2;NFSU2_TR(0x67a725);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a728:{NFSU2_TR(0x67a728);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a72dull));
TAIL_STATIC(0x575620u,575);
}
B67a72d:L67a72d:{c.instructions+=4;NFSU2_TR(0x67a72d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67a72f:{NFSU2_TR(0x67a72f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67a730:{NFSU2_TR(0x67a730);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a733:{NFSU2_TR(0x67a733);
if(r1(R+518)){{goto L67acc5;}}
}
B67a739:L67a739:{c.instructions+=3;NFSU2_TR(0x67a739);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a73c:{NFSU2_TR(0x67a73c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a73f:{NFSU2_TR(0x67a73f);
if(r1(R+518)){{goto L67a776;}}
}
B67a741:L67a741:{c.instructions+=4;NFSU2_TR(0x67a741);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a742:{NFSU2_TR(0x67a742);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a745:{NFSU2_TR(0x67a745);
__builtin_memmove((R+4),(R+12),4);
}
B67a747:{NFSU2_TR(0x67a747);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a74cull));
TAIL_STATIC(0x681bf8u,681);
}
B67a74c:L67a74c:{c.instructions+=3;NFSU2_TR(0x67a74c);
__builtin_memmove((R+24),(R+0),4);
}
B67a74e:{NFSU2_TR(0x67a74e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67a750:{NFSU2_TR(0x67a750);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67acca;}}
}
B67a756:L67a756:{c.instructions+=3;NFSU2_TR(0x67a756);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B67a758:{NFSU2_TR(0x67a758);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a75b:{NFSU2_TR(0x67a75b);
if(r1(R+518)){{goto L67a764;}}
}
B67a75d:L67a75d:{c.instructions+=1;NFSU2_TR(0x67a75d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67a764:L67a764:{c.instructions+=2;NFSU2_TR(0x67a764);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a767:{NFSU2_TR(0x67a767);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67acca;}}
}
B67a76d:L67a76d:{c.instructions+=2;NFSU2_TR(0x67a76d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a770:{NFSU2_TR(0x67a770);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67acca;}}
}
B67a776:L67a776:{c.instructions+=5;NFSU2_TR(0x67a776);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a779:{NFSU2_TR(0x67a779);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67a77c:{NFSU2_TR(0x67a77c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67a77f:{NFSU2_TR(0x67a77f);
__builtin_memmove((R+0),(R+4),4);
}
B67a781:{NFSU2_TR(0x67a781);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B67a784:L67a784:{c.instructions+=1;NFSU2_TR(0x67a784);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L67a786;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a784u);}goto L67a784;}
}
B67a786:L67a786:{c.instructions+=2;NFSU2_TR(0x67a786);
__builtin_memmove((R+4),(R+0),4);
}
B67a788:{NFSU2_TR(0x67a788);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B67a78b:L67a78b:{c.instructions+=1;NFSU2_TR(0x67a78b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L67a78d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a78bu);}goto L67a78b;}
}
B67a78d:L67a78d:{c.instructions+=4;NFSU2_TR(0x67a78d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67a790:{NFSU2_TR(0x67a790);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67a793:{NFSU2_TR(0x67a793);
__builtin_memmove((R+4),(R+0),4);
}
B67a795:{NFSU2_TR(0x67a795);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B67a798:L67a798:{c.instructions+=1;NFSU2_TR(0x67a798);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L67a79a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a798u);}goto L67a798;}
}
B67a79a:L67a79a:{c.instructions+=2;NFSU2_TR(0x67a79a);
__builtin_memmove((R+4),(R+0),4);
}
B67a79c:{NFSU2_TR(0x67a79c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B67a79f:L67a79f:{c.instructions+=1;NFSU2_TR(0x67a79f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L67a7a1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a79fu);}goto L67a79f;}
}
B67a7a1:L67a7a1:{c.instructions+=3;NFSU2_TR(0x67a7a1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67a7a3:{NFSU2_TR(0x67a7a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a7a6:{NFSU2_TR(0x67a7a6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67a81e;}}
}
B67a7a8:L67a7a8:{c.instructions+=2;NFSU2_TR(0x67a7a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a7ab:{NFSU2_TR(0x67a7ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a7ae:L67a7ae:{c.instructions+=6;NFSU2_TR(0x67a7ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a7b1:{NFSU2_TR(0x67a7b1);
__builtin_memmove((R+24),(R+28),4);
}
B67a7b3:{NFSU2_TR(0x67a7b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B67a7b6:{NFSU2_TR(0x67a7b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B67a7b9:{NFSU2_TR(0x67a7b9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67a7bc:{NFSU2_TR(0x67a7bc);
if(r1(R+518)){{goto L67a7cd;}}
}
B67a7be:L67a7be:{c.instructions+=4;NFSU2_TR(0x67a7be);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a7c1:{NFSU2_TR(0x67a7c1);
__builtin_memmove((R+4),(R+12),4);
}
B67a7c3:{NFSU2_TR(0x67a7c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a7c4:{NFSU2_TR(0x67a7c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a7c9ull));
TAIL_STATIC(0x673e90u,673);
}
B67a7c9:L67a7c9:{c.instructions+=2;NFSU2_TR(0x67a7c9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67a7cb:{NFSU2_TR(0x67a7cb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L67a7e1;}}
}
B67a7cd:L67a7cd:{c.instructions+=5;NFSU2_TR(0x67a7cd);
{u32 ea_=u32(r4(R+12)+u32(160u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67a7d3:{NFSU2_TR(0x67a7d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a7d6:{NFSU2_TR(0x67a7d6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67a7d8:{NFSU2_TR(0x67a7d8);
{u32 ea_=u32(r4(R+12)+u32(168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67a7de:{NFSU2_TR(0x67a7de);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67a7e1:L67a7e1:{c.instructions+=4;NFSU2_TR(0x67a7e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a7e4:{NFSU2_TR(0x67a7e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B67a7e7:{NFSU2_TR(0x67a7e7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67a7ea:{NFSU2_TR(0x67a7ea);
if(r1(R+518)){{goto L67a80a;}}
}
B67a7ec:L67a7ec:{c.instructions+=6;NFSU2_TR(0x67a7ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a7ef:{NFSU2_TR(0x67a7ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67a7f2:{NFSU2_TR(0x67a7f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B67a7f5:{NFSU2_TR(0x67a7f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a7f8:{NFSU2_TR(0x67a7f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a7fb:{NFSU2_TR(0x67a7fb);
if(r1(R+518)){{goto L67a80a;}}
}
B67a7fd:L67a7fd:{c.instructions+=5;NFSU2_TR(0x67a7fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67a7ff:{NFSU2_TR(0x67a7ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a802:{NFSU2_TR(0x67a802);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B67a805:{NFSU2_TR(0x67a805);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B67a808:{NFSU2_TR(0x67a808);
{goto L67a814;}
}
B67a80a:L67a80a:{c.instructions+=2;NFSU2_TR(0x67a80a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a80d:{NFSU2_TR(0x67a80d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w4(U+8,u32(0x1full));
s4(u32(r4(U+4)),r4(U+8));
}
B67a814:L67a814:{c.instructions+=4;NFSU2_TR(0x67a814);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67a818:{NFSU2_TR(0x67a818);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B67a819:{NFSU2_TR(0x67a819);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B67a81c:{NFSU2_TR(0x67a81c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a7aeu);}goto L67a7ae;}}
}
B67a81e:L67a81e:{c.instructions+=8;NFSU2_TR(0x67a81e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a821:{NFSU2_TR(0x67a821);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67a825:{NFSU2_TR(0x67a825);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67a829:{NFSU2_TR(0x67a829);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67a82d:{NFSU2_TR(0x67a82d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67a831:{NFSU2_TR(0x67a831);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a834:{NFSU2_TR(0x67a834);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a837:{NFSU2_TR(0x67a837);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67a83e:L67a83e:{c.instructions+=10;NFSU2_TR(0x67a83e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a841:{NFSU2_TR(0x67a841);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a844:{NFSU2_TR(0x67a844);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a847:{NFSU2_TR(0x67a847);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67a84a:{NFSU2_TR(0x67a84a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67a84d:{NFSU2_TR(0x67a84d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a850:{NFSU2_TR(0x67a850);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a853:{NFSU2_TR(0x67a853);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a856:{NFSU2_TR(0x67a856);
__builtin_memmove((R+0),(R+4),4);
}
B67a858:{NFSU2_TR(0x67a858);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B67a85b:L67a85b:{c.instructions+=1;NFSU2_TR(0x67a85b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L67a85d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a85bu);}goto L67a85b;}
}
B67a85d:L67a85d:{c.instructions+=2;NFSU2_TR(0x67a85d);
__builtin_memmove((R+4),(R+0),4);
}
B67a85f:{NFSU2_TR(0x67a85f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B67a862:L67a862:{c.instructions+=1;NFSU2_TR(0x67a862);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L67a864;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a862u);}goto L67a862;}
}
B67a864:L67a864:{c.instructions+=5;NFSU2_TR(0x67a864);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a867:{NFSU2_TR(0x67a867);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67a86a:{NFSU2_TR(0x67a86a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67a86d:{NFSU2_TR(0x67a86d);
__builtin_memmove((R+0),(R+4),4);
}
B67a86f:{NFSU2_TR(0x67a86f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B67a872:L67a872:{c.instructions+=1;NFSU2_TR(0x67a872);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L67a874;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a872u);}goto L67a872;}
}
B67a874:L67a874:{c.instructions+=3;NFSU2_TR(0x67a874);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67a878:{NFSU2_TR(0x67a878);
__builtin_memmove((R+4),(R+0),4);
}
B67a87a:{NFSU2_TR(0x67a87a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B67a87d:L67a87d:{c.instructions+=1;NFSU2_TR(0x67a87d);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L67a87f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a87du);}goto L67a87d;}
}
B67a87f:L67a87f:{c.instructions+=5;NFSU2_TR(0x67a87f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a882:{NFSU2_TR(0x67a882);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67a885:{NFSU2_TR(0x67a885);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67a888:{NFSU2_TR(0x67a888);
__builtin_memmove((R+0),(R+4),4);
}
B67a88a:{NFSU2_TR(0x67a88a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B67a88d:L67a88d:{c.instructions+=1;NFSU2_TR(0x67a88d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L67a88f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a88du);}goto L67a88d;}
}
B67a88f:L67a88f:{c.instructions+=2;NFSU2_TR(0x67a88f);
__builtin_memmove((R+4),(R+0),4);
}
B67a891:{NFSU2_TR(0x67a891);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B67a894:L67a894:{c.instructions+=1;NFSU2_TR(0x67a894);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L67a896;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a894u);}goto L67a894;}
}
B67a896:L67a896:{c.instructions+=3;NFSU2_TR(0x67a896);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67a898:{NFSU2_TR(0x67a898);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a89b:{NFSU2_TR(0x67a89b);
if(r1(R+518)){{goto L67a95b;}}
}
B67a8a1:L67a8a1:{c.instructions+=11;NFSU2_TR(0x67a8a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a8a4:{NFSU2_TR(0x67a8a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67a8a8:{NFSU2_TR(0x67a8a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a8ab:{NFSU2_TR(0x67a8ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a8ac:{NFSU2_TR(0x67a8ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B67a8af:{NFSU2_TR(0x67a8af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a8b0:{NFSU2_TR(0x67a8b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a8b3:{NFSU2_TR(0x67a8b3);
__builtin_memmove((R+4),(R+12),4);
}
B67a8b5:{NFSU2_TR(0x67a8b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a8b8:{NFSU2_TR(0x67a8b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a8bb:{NFSU2_TR(0x67a8bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a8c0ull));
TAIL_STATIC(0x682bb1u,682);
}
B67a8c0:L67a8c0:{c.instructions+=3;NFSU2_TR(0x67a8c0);
__builtin_memmove((R+24),(R+0),4);
}
B67a8c2:{NFSU2_TR(0x67a8c2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67a8c4:{NFSU2_TR(0x67a8c4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67acca;}}
}
B67a8ca:L67a8ca:{c.instructions+=11;NFSU2_TR(0x67a8ca);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a8cc:{NFSU2_TR(0x67a8cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B67a8cf:{NFSU2_TR(0x67a8cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a8d0:{NFSU2_TR(0x67a8d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67a8d3:{NFSU2_TR(0x67a8d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a8d4:{NFSU2_TR(0x67a8d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a8d5:{NFSU2_TR(0x67a8d5);
w4(R+28,u32(0x20500001ull));
}
B67a8da:{NFSU2_TR(0x67a8da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a8db:{NFSU2_TR(0x67a8db);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a8de:{NFSU2_TR(0x67a8de);
__builtin_memmove((R+4),(R+12),4);
}
B67a8e0:{NFSU2_TR(0x67a8e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a8e5ull));
TAIL_STATIC(0x6758ceu,675);
}
B67a8e5:L67a8e5:{c.instructions+=3;NFSU2_TR(0x67a8e5);
__builtin_memmove((R+24),(R+0),4);
}
B67a8e7:{NFSU2_TR(0x67a8e7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67a8e9:{NFSU2_TR(0x67a8e9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67acca;}}
}
B67a8ef:L67a8ef:{c.instructions+=12;NFSU2_TR(0x67a8ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a8f2:{NFSU2_TR(0x67a8f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67a8f6:{NFSU2_TR(0x67a8f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a8f9:{NFSU2_TR(0x67a8f9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67a8fb:{NFSU2_TR(0x67a8fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a8fc:{NFSU2_TR(0x67a8fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a8ff:{NFSU2_TR(0x67a8ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a902:{NFSU2_TR(0x67a902);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B67a905:{NFSU2_TR(0x67a905);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a906:{NFSU2_TR(0x67a906);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a909:{NFSU2_TR(0x67a909);
__builtin_memmove((R+4),(R+12),4);
}
B67a90b:{NFSU2_TR(0x67a90b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a910ull));
TAIL_STATIC(0x682bb1u,682);
}
B67a910:L67a910:{c.instructions+=3;NFSU2_TR(0x67a910);
__builtin_memmove((R+24),(R+0),4);
}
B67a912:{NFSU2_TR(0x67a912);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67a914:{NFSU2_TR(0x67a914);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67acca;}}
}
B67a91a:L67a91a:{c.instructions+=10;NFSU2_TR(0x67a91a);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a91c:{NFSU2_TR(0x67a91c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B67a91f:{NFSU2_TR(0x67a91f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a920:{NFSU2_TR(0x67a920);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67a923:{NFSU2_TR(0x67a923);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a924:{NFSU2_TR(0x67a924);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a925:{NFSU2_TR(0x67a925);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a926:{NFSU2_TR(0x67a926);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a929:{NFSU2_TR(0x67a929);
__builtin_memmove((R+4),(R+12),4);
}
B67a92b:{NFSU2_TR(0x67a92b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a930ull));
TAIL_STATIC(0x6758ceu,675);
}
B67a930:L67a930:{c.instructions+=3;NFSU2_TR(0x67a930);
__builtin_memmove((R+24),(R+0),4);
}
B67a932:{NFSU2_TR(0x67a932);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67a934:{NFSU2_TR(0x67a934);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67acca;}}
}
B67a93a:L67a93a:{c.instructions+=3;NFSU2_TR(0x67a93a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67a93c:{NFSU2_TR(0x67a93c);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a93f:{NFSU2_TR(0x67a93f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67a953;}}
}
B67a941:L67a941:{c.instructions+=2;NFSU2_TR(0x67a941);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a944:{NFSU2_TR(0x67a944);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67abf5;}}
}
B67a94a:L67a94a:{c.instructions+=2;NFSU2_TR(0x67a94a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a94d:{NFSU2_TR(0x67a94d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67abf5;}}
}
B67a953:L67a953:{c.instructions+=3;NFSU2_TR(0x67a953);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a956:{NFSU2_TR(0x67a956);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a959:{NFSU2_TR(0x67a959);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67a95b:L67a95b:{c.instructions+=5;NFSU2_TR(0x67a95b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67a95e:{NFSU2_TR(0x67a95e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a95f:{NFSU2_TR(0x67a95f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67a962:{NFSU2_TR(0x67a962);
__builtin_memmove((R+4),(R+12),4);
}
B67a964:{NFSU2_TR(0x67a964);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a969ull));
TAIL_STATIC(0x673e90u,673);
}
B67a969:L67a969:{c.instructions+=2;NFSU2_TR(0x67a969);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67a96b:{NFSU2_TR(0x67a96b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L67a97f;}}
}
B67a96d:L67a96d:{c.instructions+=4;NFSU2_TR(0x67a96d);
{u32 ea_=u32(r4(R+12)+u32(168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67a973:{NFSU2_TR(0x67a973);
{u32 ea_=u32(r4(R+20)+u32(4294967188u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67a976:{NFSU2_TR(0x67a976);
{u32 ea_=u32(r4(R+12)+u32(160u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67a97c:{NFSU2_TR(0x67a97c);
{u32 ea_=u32(r4(R+20)+u32(4294967196u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67a97f:L67a97f:{c.instructions+=5;NFSU2_TR(0x67a97f);
{u32 ea_=u32(r4(R+20)+u32(4294967188u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67a982:{NFSU2_TR(0x67a982);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67a988:{NFSU2_TR(0x67a988);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67a98a:{NFSU2_TR(0x67a98a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B67a98d:{NFSU2_TR(0x67a98d);
if(r1(R+518)){{goto L67a99f;}}
}
B67a98f:L67a98f:{c.instructions+=5;NFSU2_TR(0x67a98f);
{u32 ea_=u32(r4(R+20)+u32(4294967196u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67a992:{NFSU2_TR(0x67a992);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67a998:{NFSU2_TR(0x67a998);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67a99a:{NFSU2_TR(0x67a99a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B67a99d:{NFSU2_TR(0x67a99d);
if(r1(R+514)){{goto L67a9a6;}}
}
B67a99f:L67a99f:{c.instructions+=1;NFSU2_TR(0x67a99f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67a9a6:L67a9a6:{c.instructions+=2;NFSU2_TR(0x67a9a6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a9a9:{NFSU2_TR(0x67a9a9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67aa68;}}
}
B67a9af:L67a9af:{c.instructions+=7;NFSU2_TR(0x67a9af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a9b2:{NFSU2_TR(0x67a9b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67a9b5:{NFSU2_TR(0x67a9b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67a9b8:{NFSU2_TR(0x67a9b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a9bb:{NFSU2_TR(0x67a9bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67a9be:{NFSU2_TR(0x67a9be);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B67a9c0:{NFSU2_TR(0x67a9c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67a9c3:L67a9c3:{c.instructions+=3;NFSU2_TR(0x67a9c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67a9c5:{NFSU2_TR(0x67a9c5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67a9c8:{NFSU2_TR(0x67a9c8);
if(r1(R+518)){{goto L67aa51;}}
}
B67a9ce:L67a9ce:{c.instructions+=5;NFSU2_TR(0x67a9ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67a9d1:{NFSU2_TR(0x67a9d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a9d2:{NFSU2_TR(0x67a9d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67a9d3:{NFSU2_TR(0x67a9d3);
__builtin_memmove((R+4),(R+12),4);
}
B67a9d5:{NFSU2_TR(0x67a9d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67a9daull));
TAIL_STATIC(0x673e90u,673);
}
B67a9da:L67a9da:{c.instructions+=2;NFSU2_TR(0x67a9da);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67a9dc:{NFSU2_TR(0x67a9dc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L67a9f2;}}
}
B67a9de:L67a9de:{c.instructions+=5;NFSU2_TR(0x67a9de);
{u32 ea_=u32(r4(R+12)+u32(160u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67a9e4:{NFSU2_TR(0x67a9e4);
{u32 ea_=u32(r4(R+20)+u32(4294967172u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67a9e7:{NFSU2_TR(0x67a9e7);
{u32 ea_=u32(r4(R+12)+u32(168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67a9ed:{NFSU2_TR(0x67a9ed);
{u32 ea_=u32(r4(R+20)+u32(4294967180u));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
}
B67a9f0:{NFSU2_TR(0x67a9f0);
{goto L67a9f5;}
}
B67a9f2:L67a9f2:{c.instructions+=1;NFSU2_TR(0x67a9f2);
{u32 ea_=u32(r4(R+20)+u32(4294967180u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67a9f5:L67a9f5:{c.instructions+=3;NFSU2_TR(0x67a9f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67a9f9:{NFSU2_TR(0x67a9f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67a9fc:{NFSU2_TR(0x67a9fc);
if(r1(R+518)){{goto L67aa1d;}}
}
B67a9fe:L67a9fe:{c.instructions+=12;NFSU2_TR(0x67a9fe);
{u32 ea_=u32(r4(R+20)+u32(4294967172u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67aa01:{NFSU2_TR(0x67aa01);
__builtin_memmove((R+0),(R+4),4);
}
B67aa03:{NFSU2_TR(0x67aa03);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67aa05:{NFSU2_TR(0x67aa05);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67aa08:{NFSU2_TR(0x67aa08);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67aa0b:{NFSU2_TR(0x67aa0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67aa0d:{NFSU2_TR(0x67aa0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67aa10:{NFSU2_TR(0x67aa10);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B67aa13:{NFSU2_TR(0x67aa13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67aa15:{NFSU2_TR(0x67aa15);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B67aa18:{NFSU2_TR(0x67aa18);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B67aa1b:{NFSU2_TR(0x67aa1b);
{goto L67aa54;}
}
B67aa1d:L67aa1d:{c.instructions+=5;NFSU2_TR(0x67aa1d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67aa1f:{NFSU2_TR(0x67aa1f);
{u32 ea_=u32(r4(R+20)+u32(4294967172u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67aa22:{NFSU2_TR(0x67aa22);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67aa24:{NFSU2_TR(0x67aa24);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B67aa27:{NFSU2_TR(0x67aa27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67aa2e;}}
}
B67aa29:L67aa29:{c.instructions+=2;NFSU2_TR(0x67aa29);
{u32 ea_=u32(r4(R+20)+u32(4294967172u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67aa2c:{NFSU2_TR(0x67aa2c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67aa2e:L67aa2e:{c.instructions+=4;NFSU2_TR(0x67aa2e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xdc,0x10"::"a"(ea_):"memory");}
}
B67aa31:{NFSU2_TR(0x67aa31);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67aa33:{NFSU2_TR(0x67aa33);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B67aa36:{NFSU2_TR(0x67aa36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67aa3d;}}
}
B67aa38:L67aa38:{c.instructions+=2;NFSU2_TR(0x67aa38);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67aa3b:{NFSU2_TR(0x67aa3b);
{goto L67aa3f;}
}
B67aa3d:L67aa3d:{c.instructions+=1;NFSU2_TR(0x67aa3d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B67aa3f:L67aa3f:{c.instructions+=7;NFSU2_TR(0x67aa3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67aa42:{NFSU2_TR(0x67aa42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67aa44:{NFSU2_TR(0x67aa44);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67aa47:{NFSU2_TR(0x67aa47);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B67aa4a:{NFSU2_TR(0x67aa4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67aa4c:{NFSU2_TR(0x67aa4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))&u32(r4(R+0))));
s4(u32(r4(U+4)),r4(U+8));
}
B67aa4f:{NFSU2_TR(0x67aa4f);
{goto L67aa54;}
}
B67aa51:L67aa51:{c.instructions+=1;NFSU2_TR(0x67aa51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67aa54:L67aa54:{c.instructions+=5;NFSU2_TR(0x67aa54);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B67aa57:{NFSU2_TR(0x67aa57);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B67aa5a:{NFSU2_TR(0x67aa5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67aa5d:{NFSU2_TR(0x67aa5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67aa60:{NFSU2_TR(0x67aa60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a9c3u);}goto L67a9c3;}}
}
B67aa66:L67aa66:{c.instructions+=1;NFSU2_TR(0x67aa66);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67aa68:L67aa68:{c.instructions+=6;NFSU2_TR(0x67aa68);
{u32 ea_=u32(r4(R+20)+u32(4294967188u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67aa6b:{NFSU2_TR(0x67aa6b);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67aa71:{NFSU2_TR(0x67aa71);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B67aa73:{NFSU2_TR(0x67aa73);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67aa75:{NFSU2_TR(0x67aa75);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B67aa78:{NFSU2_TR(0x67aa78);
if(r1(R+514)){{goto L67aa90;}}
}
B67aa7a:L67aa7a:{c.instructions+=6;NFSU2_TR(0x67aa7a);
{u32 ea_=u32(r4(R+20)+u32(4294967196u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67aa7d:{NFSU2_TR(0x67aa7d);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67aa83:{NFSU2_TR(0x67aa83);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B67aa85:{NFSU2_TR(0x67aa85);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67aa87:{NFSU2_TR(0x67aa87);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B67aa8a:{NFSU2_TR(0x67aa8a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L67abf7;}}
}
B67aa90:L67aa90:{c.instructions+=5;NFSU2_TR(0x67aa90);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B67aa92:{NFSU2_TR(0x67aa92);
{u32 ea_=u32(r4(R+20)+u32(4294967188u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67aa95:{NFSU2_TR(0x67aa95);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67aa97:{NFSU2_TR(0x67aa97);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B67aa9a:{NFSU2_TR(0x67aa9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67aaaf;}}
}
B67aa9c:L67aa9c:{c.instructions+=5;NFSU2_TR(0x67aa9c);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B67aa9e:{NFSU2_TR(0x67aa9e);
{u32 ea_=u32(r4(R+20)+u32(4294967196u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67aaa1:{NFSU2_TR(0x67aaa1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67aaa3:{NFSU2_TR(0x67aaa3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B67aaa6:{NFSU2_TR(0x67aaa6);
if(r1(R+514)){{goto L67aaaf;}}
}
B67aaa8:L67aaa8:{c.instructions+=1;NFSU2_TR(0x67aaa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67aaaf:L67aaaf:{c.instructions+=2;NFSU2_TR(0x67aaaf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67aab2:{NFSU2_TR(0x67aab2);
if(r1(R+518)){{goto L67aadc;}}
}
B67aab4:L67aab4:{c.instructions+=2;NFSU2_TR(0x67aab4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67aab7:{NFSU2_TR(0x67aab7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67aad9;}}
}
B67aab9:L67aab9:{c.instructions+=8;NFSU2_TR(0x67aab9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B67aabc:{NFSU2_TR(0x67aabc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67aabd:{NFSU2_TR(0x67aabd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67aac0:{NFSU2_TR(0x67aac0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67aac1:{NFSU2_TR(0x67aac1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67aac4:{NFSU2_TR(0x67aac4);
__builtin_memmove((R+4),(R+12),4);
}
B67aac6:{NFSU2_TR(0x67aac6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67aac9:{NFSU2_TR(0x67aac9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67aaceull));
TAIL_STATIC(0x67874eu,678);
}
B67aace:L67aace:{c.instructions+=3;NFSU2_TR(0x67aace);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67aad0:{NFSU2_TR(0x67aad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67aad7:{NFSU2_TR(0x67aad7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67aadc;}}
}
B67aad9:L67aad9:{c.instructions+=1;NFSU2_TR(0x67aad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67aadc:L67aadc:{c.instructions+=2;NFSU2_TR(0x67aadc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67aadf:{NFSU2_TR(0x67aadf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67ab33;}}
}
B67aae1:L67aae1:{c.instructions+=6;NFSU2_TR(0x67aae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67aae4:{NFSU2_TR(0x67aae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67aae7:{NFSU2_TR(0x67aae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67aaea:{NFSU2_TR(0x67aaea);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B67aaec:{NFSU2_TR(0x67aaec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67aaef:{NFSU2_TR(0x67aaef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67aaf2:L67aaf2:{c.instructions+=4;NFSU2_TR(0x67aaf2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B67aaf5:{NFSU2_TR(0x67aaf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B67aaf7:{NFSU2_TR(0x67aaf7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67aaf9:{NFSU2_TR(0x67aaf9);
if(r1(R+518)){{goto L67ab2b;}}
}
B67aafb:L67aafb:{c.instructions+=16;NFSU2_TR(0x67aafb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67aafe:{NFSU2_TR(0x67aafe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67ab01:{NFSU2_TR(0x67ab01);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B67ab04:{NFSU2_TR(0x67ab04);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B67ab07:{NFSU2_TR(0x67ab07);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w2(U+0,u16(u32(r2(U+0))&u32(u16(0xfe60ull))));
s2(u32(r4(R+0)),r2(U+0));
}
B67ab0c:{NFSU2_TR(0x67ab0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B67ab0e:{NFSU2_TR(0x67ab0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B67ab10:{NFSU2_TR(0x67ab10);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x19full))));
}
B67ab16:{NFSU2_TR(0x67ab16);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+8))));
}
B67ab18:{NFSU2_TR(0x67ab18);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B67ab1a:{NFSU2_TR(0x67ab1a);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67ab1d:{NFSU2_TR(0x67ab1d);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67ab20:{NFSU2_TR(0x67ab20);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67ab22:{NFSU2_TR(0x67ab22);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67ab25:{NFSU2_TR(0x67ab25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67ab28:{NFSU2_TR(0x67ab28);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67ab2b:L67ab2b:{c.instructions+=3;NFSU2_TR(0x67ab2b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B67ab2e:{NFSU2_TR(0x67ab2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67ab31:{NFSU2_TR(0x67ab31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67aaf2u);}goto L67aaf2;}}
}
B67ab33:L67ab33:{c.instructions+=2;NFSU2_TR(0x67ab33);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ab36:{NFSU2_TR(0x67ab36);
if(r1(R+518)){{goto L67ab95;}}
}
B67ab38:L67ab38:{c.instructions+=10;NFSU2_TR(0x67ab38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67ab3b:{NFSU2_TR(0x67ab3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ab3c:{NFSU2_TR(0x67ab3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ab3f:{NFSU2_TR(0x67ab3f);
__builtin_memmove((R+4),(R+12),4);
}
B67ab41:{NFSU2_TR(0x67ab41);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ab44:{NFSU2_TR(0x67ab44);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ab47:{NFSU2_TR(0x67ab47);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ab4a:{NFSU2_TR(0x67ab4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ab4d:{NFSU2_TR(0x67ab4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ab50:{NFSU2_TR(0x67ab50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ab55ull));
TAIL_STATIC(0x678b03u,678);
}
B67ab55:L67ab55:{c.instructions+=3;NFSU2_TR(0x67ab55);
__builtin_memmove((R+24),(R+0),4);
}
B67ab57:{NFSU2_TR(0x67ab57);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ab59:{NFSU2_TR(0x67ab59);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67acca;}}
}
B67ab5f:L67ab5f:{c.instructions+=8;NFSU2_TR(0x67ab5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67ab62:{NFSU2_TR(0x67ab62);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ab63:{NFSU2_TR(0x67ab63);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ab66:{NFSU2_TR(0x67ab66);
__builtin_memmove((R+4),(R+12),4);
}
B67ab68:{NFSU2_TR(0x67ab68);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ab6b:{NFSU2_TR(0x67ab6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ab6e:{NFSU2_TR(0x67ab6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ab71:{NFSU2_TR(0x67ab71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ab76ull));
TAIL_STATIC(0x681bf8u,681);
}
B67ab76:L67ab76:{c.instructions+=3;NFSU2_TR(0x67ab76);
__builtin_memmove((R+24),(R+0),4);
}
B67ab78:{NFSU2_TR(0x67ab78);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ab7a:{NFSU2_TR(0x67ab7a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67acca;}}
}
B67ab80:L67ab80:{c.instructions+=2;NFSU2_TR(0x67ab80);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ab83:{NFSU2_TR(0x67ab83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67ab8f;}}
}
B67ab85:L67ab85:{c.instructions+=2;NFSU2_TR(0x67ab85);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ab88:{NFSU2_TR(0x67ab88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67abf7;}}
}
B67ab8a:L67ab8a:{c.instructions+=2;NFSU2_TR(0x67ab8a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ab8d:{NFSU2_TR(0x67ab8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67abf7;}}
}
B67ab8f:L67ab8f:{c.instructions+=2;NFSU2_TR(0x67ab8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ab92:{NFSU2_TR(0x67ab92);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ab95:L67ab95:{c.instructions+=2;NFSU2_TR(0x67ab95);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ab98:{NFSU2_TR(0x67ab98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67abac;}}
}
B67ab9a:L67ab9a:{c.instructions+=3;NFSU2_TR(0x67ab9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67ab9d:{NFSU2_TR(0x67ab9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x400ull))));
}
B67aba4:{NFSU2_TR(0x67aba4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67a83eu);}goto L67a83e;}}
}
B67abaa:L67abaa:{c.instructions+=1;NFSU2_TR(0x67abaa);
{goto L67abf7;}
}
B67abac:L67abac:{c.instructions+=17;NFSU2_TR(0x67abac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67abaf:{NFSU2_TR(0x67abaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67abb2:{NFSU2_TR(0x67abb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67abb5:{NFSU2_TR(0x67abb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67abb6:{NFSU2_TR(0x67abb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67abb9:{NFSU2_TR(0x67abb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67abbc:{NFSU2_TR(0x67abbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67abbf:{NFSU2_TR(0x67abbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67abc2:{NFSU2_TR(0x67abc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67abc5:{NFSU2_TR(0x67abc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67abc8:{NFSU2_TR(0x67abc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67abcb:{NFSU2_TR(0x67abcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67abce:{NFSU2_TR(0x67abce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67abd1:{NFSU2_TR(0x67abd1);
__builtin_memmove((R+4),(R+12),4);
}
B67abd3:{NFSU2_TR(0x67abd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67abd6:{NFSU2_TR(0x67abd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67abd9:{NFSU2_TR(0x67abd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67abdeull));
TAIL_STATIC(0x675830u,675);
}
B67abde:L67abde:{c.instructions+=5;NFSU2_TR(0x67abde);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67abe1:{NFSU2_TR(0x67abe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67abe4:{NFSU2_TR(0x67abe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67abe7:{NFSU2_TR(0x67abe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67abea:{NFSU2_TR(0x67abea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67abf7;}}
}
B67abec:L67abec:{c.instructions+=2;NFSU2_TR(0x67abec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67abf3:{NFSU2_TR(0x67abf3);
{goto L67abf7;}
}
B67abf5:L67abf5:{c.instructions+=1;NFSU2_TR(0x67abf5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67abf7:L67abf7:{c.instructions+=3;NFSU2_TR(0x67abf7);
w4(R+0,u32(0x400ull));
}
B67abfc:{NFSU2_TR(0x67abfc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67abff:{NFSU2_TR(0x67abff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67ac1d;}}
}
B67ac01:L67ac01:{c.instructions+=6;NFSU2_TR(0x67ac01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ac02:{NFSU2_TR(0x67ac02);
u8 U[4];
w4(U+0,u32(0x7b79c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ac07:{NFSU2_TR(0x67ac07);
u8 U[4];
w4(U+0,u32(0xdb7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ac0c:{NFSU2_TR(0x67ac0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ac0f:{NFSU2_TR(0x67ac0f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ac10:{NFSU2_TR(0x67ac10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ac15ull));
TAIL_STATIC(0x675267u,675);
}
B67ac15:L67ac15:{c.instructions+=2;NFSU2_TR(0x67ac15);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B67ac18:{NFSU2_TR(0x67ac18);
{goto L67acba;}
}
B67ac1d:L67ac1d:{c.instructions+=3;NFSU2_TR(0x67ac1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67ac20:{NFSU2_TR(0x67ac20);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67ac22:{NFSU2_TR(0x67ac22);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67ac63;}}
}
B67ac24:L67ac24:{c.instructions+=5;NFSU2_TR(0x67ac24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67ac27:{NFSU2_TR(0x67ac27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67ac2a:{NFSU2_TR(0x67ac2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67ac2d:{NFSU2_TR(0x67ac2d);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B67ac2f:{NFSU2_TR(0x67ac2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ac32:L67ac32:{c.instructions+=3;NFSU2_TR(0x67ac32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67ac34:{NFSU2_TR(0x67ac34);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67ac37:{NFSU2_TR(0x67ac37);
if(r1(R+518)){{goto L67ac58;}}
}
B67ac39:L67ac39:{c.instructions+=10;NFSU2_TR(0x67ac39);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67ac3c:{NFSU2_TR(0x67ac3c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67ac3e:{NFSU2_TR(0x67ac3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67ac41:{NFSU2_TR(0x67ac41);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B67ac44:{NFSU2_TR(0x67ac44);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67ac47:{NFSU2_TR(0x67ac47);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67ac4a:{NFSU2_TR(0x67ac4a);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67ac4d:{NFSU2_TR(0x67ac4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B67ac50:{NFSU2_TR(0x67ac50);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x180ull))));
}
B67ac56:{NFSU2_TR(0x67ac56);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B67ac58:L67ac58:{c.instructions+=4;NFSU2_TR(0x67ac58);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B67ac5b:{NFSU2_TR(0x67ac5b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B67ac5e:{NFSU2_TR(0x67ac5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67ac61:{NFSU2_TR(0x67ac61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67ac32u);}goto L67ac32;}}
}
B67ac63:L67ac63:{c.instructions+=6;NFSU2_TR(0x67ac63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67ac66:{NFSU2_TR(0x67ac66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67ac69:{NFSU2_TR(0x67ac69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67ac6c:{NFSU2_TR(0x67ac6c);
__builtin_memmove((R+0),(R+4),4);
}
B67ac6e:{NFSU2_TR(0x67ac6e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B67ac71:{NFSU2_TR(0x67ac71);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ac74:L67ac74:{c.instructions+=1;NFSU2_TR(0x67ac74);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L67ac76;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67ac74u);}goto L67ac74;}
}
B67ac76:L67ac76:{c.instructions+=3;NFSU2_TR(0x67ac76);
__builtin_memmove((R+4),(R+0),4);
}
B67ac78:{NFSU2_TR(0x67ac78);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B67ac7b:{NFSU2_TR(0x67ac7b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ac7f:L67ac7f:{c.instructions+=1;NFSU2_TR(0x67ac7f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L67ac81;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67ac7fu);}goto L67ac7f;}
}
B67ac81:L67ac81:{c.instructions+=1;NFSU2_TR(0x67ac81);
if(r1(R+518)){{goto L67acc1;}}
}
B67ac83:L67ac83:{c.instructions+=2;NFSU2_TR(0x67ac83);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ac87:{NFSU2_TR(0x67ac87);
if(r1(R+518)){{goto L67acc1;}}
}
B67ac89:L67ac89:{c.instructions+=2;NFSU2_TR(0x67ac89);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ac8d:{NFSU2_TR(0x67ac8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67acc1;}}
}
B67ac8f:L67ac8f:{c.instructions+=2;NFSU2_TR(0x67ac8f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ac93:{NFSU2_TR(0x67ac93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67acc1;}}
}
B67ac95:L67ac95:{c.instructions+=12;NFSU2_TR(0x67ac95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67ac98:{NFSU2_TR(0x67ac98);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ac9a:{NFSU2_TR(0x67ac9a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ac9c:{NFSU2_TR(0x67ac9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ac9f:{NFSU2_TR(0x67ac9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67aca0:{NFSU2_TR(0x67aca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67aca3:{NFSU2_TR(0x67aca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B67aca6:{NFSU2_TR(0x67aca6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67aca7:{NFSU2_TR(0x67aca7);
u8 U[4];
w4(U+0,u32(0x10000001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67acac:{NFSU2_TR(0x67acac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67acaf:{NFSU2_TR(0x67acaf);
__builtin_memmove((R+4),(R+12),4);
}
B67acb1:{NFSU2_TR(0x67acb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67acb6ull));
TAIL_STATIC(0x6758ceu,675);
}
B67acb6:L67acb6:{c.instructions+=2;NFSU2_TR(0x67acb6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67acb8:{NFSU2_TR(0x67acb8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L67acc1;}}
}
B67acba:L67acba:{c.instructions+=2;NFSU2_TR(0x67acba);
w4(R+24,u32(0x80004005ull));
}
B67acbf:{NFSU2_TR(0x67acbf);
{goto L67acca;}
}
B67acc1:L67acc1:{c.instructions+=2;NFSU2_TR(0x67acc1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B67acc3:{NFSU2_TR(0x67acc3);
{goto L67acca;}
}
B67acc5:L67acc5:{c.instructions+=1;NFSU2_TR(0x67acc5);
w4(R+24,u32(0x8007000eull));
}
B67acca:L67acca:{c.instructions+=4;NFSU2_TR(0x67acca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67accd:{NFSU2_TR(0x67accd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67acd0:{NFSU2_TR(0x67acd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67acd3:{NFSU2_TR(0x67acd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67acd8ull));
TAIL_STATIC(0x575630u,575);
}
B67acd8:L67acd8:{c.instructions+=2;NFSU2_TR(0x67acd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67acdb:{NFSU2_TR(0x67acdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ace0ull));
TAIL_STATIC(0x575630u,575);
}
B67ace0:L67ace0:{c.instructions+=2;NFSU2_TR(0x67ace0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ace3:{NFSU2_TR(0x67ace3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ace8ull));
TAIL_STATIC(0x575630u,575);
}
B67ace8:L67ace8:{c.instructions+=2;NFSU2_TR(0x67ace8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67aceb:{NFSU2_TR(0x67aceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67acf0ull));
TAIL_STATIC(0x575630u,575);
}
B67acf0:L67acf0:{c.instructions+=2;NFSU2_TR(0x67acf0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67acf3:{NFSU2_TR(0x67acf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67acf8ull));
TAIL_STATIC(0x575630u,575);
}
B67acf8:L67acf8:{c.instructions+=2;NFSU2_TR(0x67acf8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67acfb:{NFSU2_TR(0x67acfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ad00ull));
TAIL_STATIC(0x575630u,575);
}
B67ad00:L67ad00:{c.instructions+=11;NFSU2_TR(0x67ad00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67ad03:{NFSU2_TR(0x67ad03);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ad06:{NFSU2_TR(0x67ad06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67ad09:{NFSU2_TR(0x67ad09);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B67ad0c:{NFSU2_TR(0x67ad0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ad0f:{NFSU2_TR(0x67ad0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B67ad10:{NFSU2_TR(0x67ad10);
__builtin_memmove((R+0),(R+24),4);
}
B67ad12:{NFSU2_TR(0x67ad12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B67ad13:{NFSU2_TR(0x67ad13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B67ad14:{NFSU2_TR(0x67ad14);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B67ad15:{NFSU2_TR(0x67ad15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67ad18:L67ad18:{c.instructions+=9;NFSU2_TR(0x67ad18);
__builtin_memmove((R+28),(R+28),4);
}
B67ad1a:{NFSU2_TR(0x67ad1a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ad1b:{NFSU2_TR(0x67ad1b);
__builtin_memmove((R+20),(R+16),4);
}
B67ad1d:{NFSU2_TR(0x67ad1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1f4ull))));
}
B67ad23:{NFSU2_TR(0x67ad23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67ad26:{NFSU2_TR(0x67ad26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67ad28:{NFSU2_TR(0x67ad28);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ad29:{NFSU2_TR(0x67ad29);
__builtin_memmove((R+12),(R+4),4);
}
B67ad2b:{NFSU2_TR(0x67ad2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67ad3b;}}
}
B67ad2d:L67ad2d:{c.instructions+=2;NFSU2_TR(0x67ad2d);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B67ad30:{NFSU2_TR(0x67ad30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x68092au,680);}
}
B67ad36:L67ad36:{c.instructions+=1;NFSU2_TR(0x67ad36);
TAIL_STATIC(0x68092fu,680);
}
B67ad3b:L67ad3b:{c.instructions+=2;NFSU2_TR(0x67ad3b);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xdull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B67ad3f:{NFSU2_TR(0x67ad3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x68092au,680);}
}
B67ad45:L67ad45:{c.instructions+=7;NFSU2_TR(0x67ad45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67ad48:{NFSU2_TR(0x67ad48);
u8 U[32];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B67ad4c:{NFSU2_TR(0x67ad4c);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1aull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1aull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1aull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B67ad50:{NFSU2_TR(0x67ad50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ad53:{NFSU2_TR(0x67ad53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67ad56:{NFSU2_TR(0x67ad56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe9cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ad5c:{NFSU2_TR(0x67ad5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x68092au,680);}
}
B67ad62:L67ad62:{c.instructions+=29;NFSU2_TR(0x67ad62);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67ad65:{NFSU2_TR(0x67ad65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffea4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ad6b:{NFSU2_TR(0x67ad6b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67ad6d:{NFSU2_TR(0x67ad6d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ad6e:{NFSU2_TR(0x67ad6e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ad6f:{NFSU2_TR(0x67ad6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+28),(U+0),4);
}
B67ad72:{NFSU2_TR(0x67ad72);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B67ad73:{NFSU2_TR(0x67ad73);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B67ad74:{NFSU2_TR(0x67ad74);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B67ad75:{NFSU2_TR(0x67ad75);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B67ad76:{NFSU2_TR(0x67ad76);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67ad78:{NFSU2_TR(0x67ad78);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67ad7b:{NFSU2_TR(0x67ad7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((R+28),(U+0),4);
}
B67ad81:{NFSU2_TR(0x67ad81);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B67ad82:{NFSU2_TR(0x67ad82);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B67ad83:{NFSU2_TR(0x67ad83);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B67ad84:{NFSU2_TR(0x67ad84);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B67ad85:{NFSU2_TR(0x67ad85);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67ad87:{NFSU2_TR(0x67ad87);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67ad89:{NFSU2_TR(0x67ad89);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B67ad8c:{NFSU2_TR(0x67ad8c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B67ad8d:{NFSU2_TR(0x67ad8d);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B67ad8e:{NFSU2_TR(0x67ad8e);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B67ad8f:{NFSU2_TR(0x67ad8f);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B67ad90:{NFSU2_TR(0x67ad90);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67ad93:{NFSU2_TR(0x67ad93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffea0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ad99:{NFSU2_TR(0x67ad99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
w4(U+4,u32(0xe000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67ada0:{NFSU2_TR(0x67ada0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ada3:{NFSU2_TR(0x67ada3);
if(r1(R+518)){{goto L67ae48;}}
}
B67ada9:L67ada9:{c.instructions+=1;NFSU2_TR(0x67ada9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67adad:L67adad:{c.instructions+=4;NFSU2_TR(0x67adad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67adb0:{NFSU2_TR(0x67adb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67adb3:{NFSU2_TR(0x67adb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67adb5:{NFSU2_TR(0x67adb5);
if(r1(R+518)){{goto L67ae2a;}}
}
B67adb7:L67adb7:{c.instructions+=9;NFSU2_TR(0x67adb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67adba:{NFSU2_TR(0x67adba);
u8 U[32];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B67adbe:{NFSU2_TR(0x67adbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67adc1:{NFSU2_TR(0x67adc1);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff44ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67adc8:{NFSU2_TR(0x67adc8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B67adcb:{NFSU2_TR(0x67adcb);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B67adcf:{NFSU2_TR(0x67adcf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67add0:{NFSU2_TR(0x67add0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B67add2:{NFSU2_TR(0x67add2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67add7ull));
TAIL_STATIC(0x575620u,575);
}
B67add7:L67add7:{c.instructions+=6;NFSU2_TR(0x67add7);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67addb:{NFSU2_TR(0x67addb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67addd:{NFSU2_TR(0x67addd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67addf:{NFSU2_TR(0x67addf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67ade0:{NFSU2_TR(0x67ade0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ade3:{NFSU2_TR(0x67ade3);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67ade9:L67ade9:{c.instructions+=5;NFSU2_TR(0x67ade9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67adea:{NFSU2_TR(0x67adea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67adeb:{NFSU2_TR(0x67adeb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B67aded:{NFSU2_TR(0x67aded);
__builtin_memmove((R+4),(R+12),4);
}
B67adef:{NFSU2_TR(0x67adef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67adf4ull));
TAIL_STATIC(0x682bb1u,682);
}
B67adf4:L67adf4:{c.instructions+=3;NFSU2_TR(0x67adf4);
__builtin_memmove((R+24),(R+0),4);
}
B67adf6:{NFSU2_TR(0x67adf6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67adf8:{NFSU2_TR(0x67adf8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67adfe:L67adfe:{c.instructions+=3;NFSU2_TR(0x67adfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67ae01:{NFSU2_TR(0x67ae01);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff44ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(U+16))<(r4(R+28))));
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+28))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B67ae08:{NFSU2_TR(0x67ae08);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67ae2a;}}
}
B67ae0a:L67ae0a:{c.instructions+=4;NFSU2_TR(0x67ae0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67ae0d:{NFSU2_TR(0x67ae0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67ae10:{NFSU2_TR(0x67ae10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67ae13:{NFSU2_TR(0x67ae13);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff44ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B67ae1a:L67ae1a:{c.instructions+=7;NFSU2_TR(0x67ae1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B67ae1c:{NFSU2_TR(0x67ae1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B67ae1f:{NFSU2_TR(0x67ae1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B67ae21:{NFSU2_TR(0x67ae21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B67ae24:{NFSU2_TR(0x67ae24);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B67ae27:{NFSU2_TR(0x67ae27);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B67ae28:{NFSU2_TR(0x67ae28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67ae1au);}goto L67ae1a;}}
}
B67ae2a:L67ae2a:{c.instructions+=6;NFSU2_TR(0x67ae2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67ae2d:{NFSU2_TR(0x67ae2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67ae30:{NFSU2_TR(0x67ae30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67ae34:{NFSU2_TR(0x67ae34);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67ae36:{NFSU2_TR(0x67ae36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ae39:{NFSU2_TR(0x67ae39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67adadu);}goto L67adad;}}
}
B67ae3f:L67ae3f:{c.instructions+=2;NFSU2_TR(0x67ae3f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xe000000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ae46:{NFSU2_TR(0x67ae46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67ae4c;}}
}
B67ae48:L67ae48:{c.instructions+=1;NFSU2_TR(0x67ae48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67ae4c:L67ae4c:{c.instructions+=8;NFSU2_TR(0x67ae4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67ae4f:{NFSU2_TR(0x67ae4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67ae52:{NFSU2_TR(0x67ae52);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ae55:{NFSU2_TR(0x67ae55);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67ae58:{NFSU2_TR(0x67ae58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67ae5b:{NFSU2_TR(0x67ae5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67ae5e:{NFSU2_TR(0x67ae5e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x59ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x59ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x59ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B67ae61:{NFSU2_TR(0x67ae61);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6808e4u,680);}
}
B67ae67:L67ae67:{c.instructions+=1;NFSU2_TR(0x67ae67);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x680934ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B67ae6e:L67ae6e:{c.instructions+=3;NFSU2_TR(0x67ae6e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67ae70:{NFSU2_TR(0x67ae70);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ae73:{NFSU2_TR(0x67ae73);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67ae79:L67ae79:{c.instructions+=2;NFSU2_TR(0x67ae79);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ae7c:{NFSU2_TR(0x67ae7c);
if(r1(R+518)){{goto L67af18;}}
}
B67ae82:L67ae82:{c.instructions+=3;NFSU2_TR(0x67ae82);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ae85:{NFSU2_TR(0x67ae85);
__builtin_memmove((R+4),(R+12),4);
}
B67ae87:{NFSU2_TR(0x67ae87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ae8cull));
TAIL_STATIC(0x673a0fu,673);
}
B67ae8c:L67ae8c:{c.instructions+=3;NFSU2_TR(0x67ae8c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67ae8e:{NFSU2_TR(0x67ae8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ae91:{NFSU2_TR(0x67ae91);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67ae97:L67ae97:{c.instructions+=4;NFSU2_TR(0x67ae97);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ae9a:{NFSU2_TR(0x67ae9a);
__builtin_memmove((R+4),(R+12),4);
}
B67ae9c:{NFSU2_TR(0x67ae9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ae9d:{NFSU2_TR(0x67ae9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67aea2ull));
TAIL_STATIC(0x673b2cu,673);
}
B67aea2:L67aea2:{c.instructions+=3;NFSU2_TR(0x67aea2);
__builtin_memmove((R+24),(R+0),4);
}
B67aea4:{NFSU2_TR(0x67aea4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67aea6:{NFSU2_TR(0x67aea6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67aeac:L67aeac:{c.instructions+=4;NFSU2_TR(0x67aeac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67aeaf:{NFSU2_TR(0x67aeaf);
__builtin_memmove((R+4),(R+12),4);
}
B67aeb1:{NFSU2_TR(0x67aeb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67aeb4:{NFSU2_TR(0x67aeb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67aeb9ull));
TAIL_STATIC(0x673b2cu,673);
}
B67aeb9:L67aeb9:{c.instructions+=3;NFSU2_TR(0x67aeb9);
__builtin_memmove((R+24),(R+0),4);
}
B67aebb:{NFSU2_TR(0x67aebb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67aebd:{NFSU2_TR(0x67aebd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67aec3:L67aec3:{c.instructions+=12;NFSU2_TR(0x67aec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67aec6:{NFSU2_TR(0x67aec6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67aec7:{NFSU2_TR(0x67aec7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67aec8:{NFSU2_TR(0x67aec8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67aecb:{NFSU2_TR(0x67aecb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67aed0:{NFSU2_TR(0x67aed0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67aed3:{NFSU2_TR(0x67aed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67aed6:{NFSU2_TR(0x67aed6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B67aedb:{NFSU2_TR(0x67aedb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67aedc:{NFSU2_TR(0x67aedc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67aedf:{NFSU2_TR(0x67aedf);
__builtin_memmove((R+4),(R+12),4);
}
B67aee1:{NFSU2_TR(0x67aee1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67aee6ull));
TAIL_STATIC(0x6758ceu,675);
}
B67aee6:L67aee6:{c.instructions+=3;NFSU2_TR(0x67aee6);
__builtin_memmove((R+24),(R+0),4);
}
B67aee8:{NFSU2_TR(0x67aee8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67aeea:{NFSU2_TR(0x67aeea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67aef0:L67aef0:{c.instructions+=10;NFSU2_TR(0x67aef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67aef3:{NFSU2_TR(0x67aef3);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67aef5:{NFSU2_TR(0x67aef5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67aef8:{NFSU2_TR(0x67aef8);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20100000ull))));
}
B67aefd:{NFSU2_TR(0x67aefd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67af00:{NFSU2_TR(0x67af00);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67af03:{NFSU2_TR(0x67af03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67af04:{NFSU2_TR(0x67af04);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67af07:{NFSU2_TR(0x67af07);
__builtin_memmove((R+4),(R+12),4);
}
B67af09:{NFSU2_TR(0x67af09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67af0eull));
TAIL_STATIC(0x6758ceu,675);
}
B67af0e:L67af0e:{c.instructions+=3;NFSU2_TR(0x67af0e);
__builtin_memmove((R+24),(R+0),4);
}
B67af10:{NFSU2_TR(0x67af10);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67af12:{NFSU2_TR(0x67af12);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67af18:L67af18:{c.instructions+=5;NFSU2_TR(0x67af18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67af1e:{NFSU2_TR(0x67af1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67af21:{NFSU2_TR(0x67af21);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67af23:{NFSU2_TR(0x67af23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67af26:{NFSU2_TR(0x67af26);
if(r1(R+518)){{goto L67af65;}}
}
B67af28:L67af28:{c.instructions+=2;NFSU2_TR(0x67af28);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67af2b:{NFSU2_TR(0x67af2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67af2e:L67af2e:{c.instructions+=2;NFSU2_TR(0x67af2e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67af31:{NFSU2_TR(0x67af31);
if(r1(R+518)){{goto L67af57;}}
}
B67af33:L67af33:{c.instructions+=9;NFSU2_TR(0x67af33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67af36:{NFSU2_TR(0x67af36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67af38:{NFSU2_TR(0x67af38);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67af39:{NFSU2_TR(0x67af39);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67af3c:{NFSU2_TR(0x67af3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67af3f:{NFSU2_TR(0x67af3f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67af40:{NFSU2_TR(0x67af40);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67af43:{NFSU2_TR(0x67af43);
__builtin_memmove((R+4),(R+12),4);
}
B67af45:{NFSU2_TR(0x67af45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67af4aull));
TAIL_STATIC(0x682bb1u,682);
}
B67af4a:L67af4a:{c.instructions+=3;NFSU2_TR(0x67af4a);
__builtin_memmove((R+24),(R+0),4);
}
B67af4c:{NFSU2_TR(0x67af4c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67af4e:{NFSU2_TR(0x67af4e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67af54:L67af54:{c.instructions+=1;NFSU2_TR(0x67af54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67af57:L67af57:{c.instructions+=5;NFSU2_TR(0x67af57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67af5a:{NFSU2_TR(0x67af5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67af5e:{NFSU2_TR(0x67af5e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67af60:{NFSU2_TR(0x67af60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67af63:{NFSU2_TR(0x67af63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67af2eu);}goto L67af2e;}}
}
B67af65:L67af65:{c.instructions+=2;NFSU2_TR(0x67af65);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B67af67:{NFSU2_TR(0x67af67);
TAIL_STATIC(0x680902u,680);
}
B67af6c:L67af6c:{c.instructions+=3;NFSU2_TR(0x67af6c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67af6e:{NFSU2_TR(0x67af6e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67af71:{NFSU2_TR(0x67af71);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67af77:L67af77:{c.instructions+=2;NFSU2_TR(0x67af77);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67af7a:{NFSU2_TR(0x67af7a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67af18u);}goto L67af18;}}
}
B67af7c:L67af7c:{c.instructions+=4;NFSU2_TR(0x67af7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67af7f:{NFSU2_TR(0x67af7f);
__builtin_memmove((R+4),(R+12),4);
}
B67af81:{NFSU2_TR(0x67af81);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67af84:{NFSU2_TR(0x67af84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67af89ull));
TAIL_STATIC(0x673b2cu,673);
}
B67af89:L67af89:{c.instructions+=3;NFSU2_TR(0x67af89);
__builtin_memmove((R+24),(R+0),4);
}
B67af8b:{NFSU2_TR(0x67af8b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67af8d:{NFSU2_TR(0x67af8d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67af93:L67af93:{c.instructions+=4;NFSU2_TR(0x67af93);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67af96:{NFSU2_TR(0x67af96);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67af99:{NFSU2_TR(0x67af99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67af9a:{NFSU2_TR(0x67af9a);
TAIL_STATIC(0x67b435u,67b);
}
B67af9f:L67af9f:{c.instructions+=3;NFSU2_TR(0x67af9f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67afa1:{NFSU2_TR(0x67afa1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67afa4:{NFSU2_TR(0x67afa4);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67afaa:L67afaa:{c.instructions+=2;NFSU2_TR(0x67afaa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67afad:{NFSU2_TR(0x67afad);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67af18u);}goto L67af18;}}
}
B67afb3:L67afb3:{c.instructions+=4;NFSU2_TR(0x67afb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67afb9:{NFSU2_TR(0x67afb9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67afbc:{NFSU2_TR(0x67afbc);
__builtin_memmove((R+4),(R+12),4);
}
B67afbe:{NFSU2_TR(0x67afbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67b039u,67b);}
}
B67afc0:L67afc0:{c.instructions+=4;NFSU2_TR(0x67afc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67afc1:{NFSU2_TR(0x67afc1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B67afc4:{NFSU2_TR(0x67afc4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67afc5:{NFSU2_TR(0x67afc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67afcaull));
TAIL_STATIC(0x673b2cu,673);
}
B67afca:L67afca:{c.instructions+=3;NFSU2_TR(0x67afca);
__builtin_memmove((R+24),(R+0),4);
}
B67afcc:{NFSU2_TR(0x67afcc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67afce:{NFSU2_TR(0x67afce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67afd4:L67afd4:{c.instructions+=5;NFSU2_TR(0x67afd4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67afd6:{NFSU2_TR(0x67afd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67afd9:{NFSU2_TR(0x67afd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67afda:{NFSU2_TR(0x67afda);
__builtin_memmove((R+4),(R+12),4);
}
B67afdc:{NFSU2_TR(0x67afdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67afe1ull));
TAIL_STATIC(0x673b2cu,673);
}
B67afe1:L67afe1:{c.instructions+=3;NFSU2_TR(0x67afe1);
__builtin_memmove((R+24),(R+0),4);
}
B67afe3:{NFSU2_TR(0x67afe3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67afe5:{NFSU2_TR(0x67afe5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67afeb:L67afeb:{c.instructions+=4;NFSU2_TR(0x67afeb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67afed:{NFSU2_TR(0x67afed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67aff0:{NFSU2_TR(0x67aff0);
__builtin_memmove((R+4),(R+12),4);
}
B67aff2:{NFSU2_TR(0x67aff2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67aff7ull));
TAIL_STATIC(0x673b2cu,673);
}
B67aff7:L67aff7:{c.instructions+=3;NFSU2_TR(0x67aff7);
__builtin_memmove((R+24),(R+0),4);
}
B67aff9:{NFSU2_TR(0x67aff9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67affb:{NFSU2_TR(0x67affb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
TAIL_STATIC(0x67b001u,67b);
}
XIT:NFSU2_TR_EXIT(0x67a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
