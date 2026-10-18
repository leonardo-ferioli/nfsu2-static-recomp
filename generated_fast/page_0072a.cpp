#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_71f(u8* __restrict R,Cpu& c);
u32 body_724(u8* __restrict R,Cpu& c);
u32 body_725(u8* __restrict R,Cpu& c);
u32 body_727(u8* __restrict R,Cpu& c);
u32 body_728(u8* __restrict R,Cpu& c);
u32 body_72d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x72a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x72a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_72a(u8* __restrict R,Cpu& c);
u32 page_72a(Cpu& c){return body_72a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_72a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x72a000:goto L72a000;
case 0x72a001:c.instructions+=5;goto B72a001;
case 0x72a002:c.instructions+=4;goto B72a002;
case 0x72a006:c.instructions+=3;goto B72a006;
case 0x72a008:c.instructions+=2;goto B72a008;
case 0x72a00a:c.instructions+=1;goto B72a00a;
case 0x72a00c:goto L72a00c;
case 0x72a00d:c.instructions+=1;goto B72a00d;
case 0x72a010:goto L72a010;
case 0x72a013:c.instructions+=2;goto B72a013;
case 0x72a014:c.instructions+=1;goto B72a014;
case 0x72a019:goto L72a019;
case 0x72a01c:c.instructions+=2;goto B72a01c;
case 0x72a01d:c.instructions+=1;goto B72a01d;
case 0x72a022:goto L72a022;
case 0x72a025:c.instructions+=7;goto B72a025;
case 0x72a026:c.instructions+=6;goto B72a026;
case 0x72a027:c.instructions+=5;goto B72a027;
case 0x72a028:c.instructions+=4;goto B72a028;
case 0x72a029:c.instructions+=3;goto B72a029;
case 0x72a02b:c.instructions+=2;goto B72a02b;
case 0x72a02c:c.instructions+=1;goto B72a02c;
case 0x72a02e:goto L72a02e;
case 0x72a02f:goto L72a02f;
case 0x72a030:c.instructions+=2;goto B72a030;
case 0x72a031:c.instructions+=1;goto B72a031;
case 0x72a032:goto L72a032;
case 0x72a036:c.instructions+=1;goto B72a036;
case 0x72a03c:goto L72a03c;
case 0x72a03e:c.instructions+=4;goto B72a03e;
case 0x72a040:c.instructions+=3;goto B72a040;
case 0x72a042:c.instructions+=2;goto B72a042;
case 0x72a045:c.instructions+=1;goto B72a045;
case 0x72a047:goto L72a047;
case 0x72a049:c.instructions+=3;goto B72a049;
case 0x72a04b:c.instructions+=2;goto B72a04b;
case 0x72a04d:c.instructions+=1;goto B72a04d;
case 0x72a04f:goto L72a04f;
case 0x72a051:c.instructions+=33;goto B72a051;
case 0x72a053:c.instructions+=32;goto B72a053;
case 0x72a055:c.instructions+=31;goto B72a055;
case 0x72a057:c.instructions+=30;goto B72a057;
case 0x72a059:c.instructions+=29;goto B72a059;
case 0x72a05b:c.instructions+=28;goto B72a05b;
case 0x72a05d:c.instructions+=27;goto B72a05d;
case 0x72a05f:c.instructions+=26;goto B72a05f;
case 0x72a061:c.instructions+=25;goto B72a061;
case 0x72a063:c.instructions+=24;goto B72a063;
case 0x72a069:c.instructions+=23;goto B72a069;
case 0x72a06f:c.instructions+=22;goto B72a06f;
case 0x72a071:c.instructions+=21;goto B72a071;
case 0x72a077:c.instructions+=20;goto B72a077;
case 0x72a079:c.instructions+=19;goto B72a079;
case 0x72a07b:c.instructions+=18;goto B72a07b;
case 0x72a081:c.instructions+=17;goto B72a081;
case 0x72a083:c.instructions+=16;goto B72a083;
case 0x72a085:c.instructions+=15;goto B72a085;
case 0x72a08b:c.instructions+=14;goto B72a08b;
case 0x72a08d:c.instructions+=13;goto B72a08d;
case 0x72a08f:c.instructions+=12;goto B72a08f;
case 0x72a091:c.instructions+=11;goto B72a091;
case 0x72a097:c.instructions+=10;goto B72a097;
case 0x72a099:c.instructions+=9;goto B72a099;
case 0x72a09b:c.instructions+=8;goto B72a09b;
case 0x72a09d:c.instructions+=7;goto B72a09d;
case 0x72a0a3:c.instructions+=6;goto B72a0a3;
case 0x72a0a5:c.instructions+=5;goto B72a0a5;
case 0x72a0a7:c.instructions+=4;goto B72a0a7;
case 0x72a0a9:c.instructions+=3;goto B72a0a9;
case 0x72a0ab:c.instructions+=2;goto B72a0ab;
case 0x72a0ad:c.instructions+=1;goto B72a0ad;
case 0x72a0ae:goto L72a0ae;
case 0x72a0af:c.instructions+=3;goto B72a0af;
case 0x72a0b1:c.instructions+=2;goto B72a0b1;
case 0x72a0b4:c.instructions+=1;goto B72a0b4;
case 0x72a0ba:goto L72a0ba;
case 0x72a0bc:c.instructions+=4;goto B72a0bc;
case 0x72a0be:c.instructions+=3;goto B72a0be;
case 0x72a0c0:c.instructions+=2;goto B72a0c0;
case 0x72a0c3:c.instructions+=1;goto B72a0c3;
case 0x72a0c5:goto L72a0c5;
case 0x72a0c7:c.instructions+=3;goto B72a0c7;
case 0x72a0c9:c.instructions+=2;goto B72a0c9;
case 0x72a0cb:c.instructions+=1;goto B72a0cb;
case 0x72a0cd:goto L72a0cd;
case 0x72a0cf:c.instructions+=40;goto B72a0cf;
case 0x72a0d1:c.instructions+=39;goto B72a0d1;
case 0x72a0d3:c.instructions+=38;goto B72a0d3;
case 0x72a0d5:c.instructions+=37;goto B72a0d5;
case 0x72a0d7:c.instructions+=36;goto B72a0d7;
case 0x72a0d9:c.instructions+=35;goto B72a0d9;
case 0x72a0db:c.instructions+=34;goto B72a0db;
case 0x72a0dd:c.instructions+=33;goto B72a0dd;
case 0x72a0df:c.instructions+=32;goto B72a0df;
case 0x72a0e1:c.instructions+=31;goto B72a0e1;
case 0x72a0e3:c.instructions+=30;goto B72a0e3;
case 0x72a0e5:c.instructions+=29;goto B72a0e5;
case 0x72a0e7:c.instructions+=28;goto B72a0e7;
case 0x72a0ea:c.instructions+=27;goto B72a0ea;
case 0x72a0ec:c.instructions+=26;goto B72a0ec;
case 0x72a0f2:c.instructions+=25;goto B72a0f2;
case 0x72a0f4:c.instructions+=24;goto B72a0f4;
case 0x72a0f6:c.instructions+=23;goto B72a0f6;
case 0x72a0fc:c.instructions+=22;goto B72a0fc;
case 0x72a0fe:c.instructions+=21;goto B72a0fe;
case 0x72a100:c.instructions+=20;goto B72a100;
case 0x72a106:c.instructions+=19;goto B72a106;
case 0x72a108:c.instructions+=18;goto B72a108;
case 0x72a10a:c.instructions+=17;goto B72a10a;
case 0x72a110:c.instructions+=16;goto B72a110;
case 0x72a112:c.instructions+=15;goto B72a112;
case 0x72a115:c.instructions+=14;goto B72a115;
case 0x72a11b:c.instructions+=13;goto B72a11b;
case 0x72a11d:c.instructions+=12;goto B72a11d;
case 0x72a120:c.instructions+=11;goto B72a120;
case 0x72a122:c.instructions+=10;goto B72a122;
case 0x72a128:c.instructions+=9;goto B72a128;
case 0x72a12a:c.instructions+=8;goto B72a12a;
case 0x72a12c:c.instructions+=7;goto B72a12c;
case 0x72a12e:c.instructions+=6;goto B72a12e;
case 0x72a130:c.instructions+=5;goto B72a130;
case 0x72a132:c.instructions+=4;goto B72a132;
case 0x72a134:c.instructions+=3;goto B72a134;
case 0x72a136:c.instructions+=2;goto B72a136;
case 0x72a137:c.instructions+=1;goto B72a137;
case 0x72a138:goto L72a138;
case 0x72a139:c.instructions+=9;goto B72a139;
case 0x72a13d:c.instructions+=8;goto B72a13d;
case 0x72a13e:c.instructions+=7;goto B72a13e;
case 0x72a142:c.instructions+=6;goto B72a142;
case 0x72a144:c.instructions+=5;goto B72a144;
case 0x72a147:c.instructions+=4;goto B72a147;
case 0x72a148:c.instructions+=3;goto B72a148;
case 0x72a14b:c.instructions+=2;goto B72a14b;
case 0x72a14f:c.instructions+=1;goto B72a14f;
case 0x72a154:goto L72a154;
case 0x72a156:c.instructions+=7;goto B72a156;
case 0x72a159:c.instructions+=6;goto B72a159;
case 0x72a15c:c.instructions+=5;goto B72a15c;
case 0x72a15f:c.instructions+=4;goto B72a15f;
case 0x72a161:c.instructions+=3;goto B72a161;
case 0x72a162:c.instructions+=2;goto B72a162;
case 0x72a163:c.instructions+=1;goto B72a163;
case 0x72a164:goto L72a164;
case 0x72a168:c.instructions+=5;goto B72a168;
case 0x72a16c:c.instructions+=4;goto B72a16c;
case 0x72a170:c.instructions+=3;goto B72a170;
case 0x72a176:c.instructions+=2;goto B72a176;
case 0x72a179:c.instructions+=1;goto B72a179;
case 0x72a17a:goto L72a17a;
case 0x72a17e:c.instructions+=9;goto B72a17e;
case 0x72a180:c.instructions+=8;goto B72a180;
case 0x72a183:c.instructions+=7;goto B72a183;
case 0x72a186:c.instructions+=6;goto B72a186;
case 0x72a189:c.instructions+=5;goto B72a189;
case 0x72a18c:c.instructions+=4;goto B72a18c;
case 0x72a18f:c.instructions+=3;goto B72a18f;
case 0x72a192:c.instructions+=2;goto B72a192;
case 0x72a194:c.instructions+=1;goto B72a194;
case 0x72a195:goto L72a195;
case 0x72a199:c.instructions+=4;goto B72a199;
case 0x72a19d:c.instructions+=3;goto B72a19d;
case 0x72a19f:c.instructions+=2;goto B72a19f;
case 0x72a1a1:c.instructions+=1;goto B72a1a1;
case 0x72a1a3:goto L72a1a3;
case 0x72a1a4:c.instructions+=2;goto B72a1a4;
case 0x72a1a5:c.instructions+=1;goto B72a1a5;
case 0x72a1a7:goto L72a1a7;
case 0x72a1aa:c.instructions+=5;goto B72a1aa;
case 0x72a1ad:c.instructions+=4;goto B72a1ad;
case 0x72a1af:c.instructions+=3;goto B72a1af;
case 0x72a1b0:c.instructions+=2;goto B72a1b0;
case 0x72a1b1:c.instructions+=1;goto B72a1b1;
case 0x72a1b3:goto L72a1b3;
case 0x72a1b4:c.instructions+=1;goto B72a1b4;
case 0x72a1b5:goto L72a1b5;
case 0x72a1b8:c.instructions+=1;goto B72a1b8;
case 0x72a1ba:goto L72a1ba;
case 0x72a1bd:c.instructions+=1;goto B72a1bd;
case 0x72a1bf:goto L72a1bf;
case 0x72a1c4:c.instructions+=1;goto B72a1c4;
case 0x72a1c5:goto L72a1c5;
case 0x72a1c8:c.instructions+=1;goto B72a1c8;
case 0x72a1ca:goto L72a1ca;
case 0x72a1cf:c.instructions+=1;goto B72a1cf;
case 0x72a1d1:goto L72a1d1;
case 0x72a1d6:c.instructions+=1;goto B72a1d6;
case 0x72a1d7:goto L72a1d7;
case 0x72a1da:c.instructions+=1;goto B72a1da;
case 0x72a1dc:goto L72a1dc;
case 0x72a1e1:c.instructions+=1;goto B72a1e1;
case 0x72a1e3:goto L72a1e3;
case 0x72a1e8:goto L72a1e8;
case 0x72a1e9:goto L72a1e9;
case 0x72a1ed:c.instructions+=6;goto B72a1ed;
case 0x72a1ee:c.instructions+=5;goto B72a1ee;
case 0x72a1f2:c.instructions+=4;goto B72a1f2;
case 0x72a1f4:c.instructions+=3;goto B72a1f4;
case 0x72a1f6:c.instructions+=2;goto B72a1f6;
case 0x72a1f8:c.instructions+=1;goto B72a1f8;
case 0x72a1fa:goto L72a1fa;
case 0x72a1fb:c.instructions+=1;goto B72a1fb;
case 0x72a1ff:goto L72a1ff;
case 0x72a203:c.instructions+=1;goto B72a203;
case 0x72a205:goto L72a205;
case 0x72a207:c.instructions+=3;goto B72a207;
case 0x72a20a:c.instructions+=2;goto B72a20a;
case 0x72a20c:c.instructions+=1;goto B72a20c;
case 0x72a20e:goto L72a20e;
case 0x72a20f:goto L72a20f;
case 0x72a211:c.instructions+=2;goto B72a211;
case 0x72a214:c.instructions+=1;goto B72a214;
case 0x72a216:goto L72a216;
case 0x72a219:goto L72a219;
case 0x72a21b:c.instructions+=1;goto B72a21b;
case 0x72a21d:goto L72a21d;
case 0x72a21f:c.instructions+=2;goto B72a21f;
case 0x72a220:c.instructions+=1;goto B72a220;
case 0x72a221:goto L72a221;
case 0x72a224:c.instructions+=3;goto B72a224;
case 0x72a227:c.instructions+=2;goto B72a227;
case 0x72a228:c.instructions+=1;goto B72a228;
case 0x72a229:goto L72a229;
case 0x72a22d:c.instructions+=3;goto B72a22d;
case 0x72a22f:c.instructions+=2;goto B72a22f;
case 0x72a233:c.instructions+=1;goto B72a233;
case 0x72a235:goto L72a235;
case 0x72a238:c.instructions+=2;goto B72a238;
case 0x72a23a:c.instructions+=1;goto B72a23a;
case 0x72a23b:goto L72a23b;
case 0x72a23e:c.instructions+=2;goto B72a23e;
case 0x72a242:c.instructions+=1;goto B72a242;
case 0x72a244:goto L72a244;
case 0x72a246:goto L72a246;
case 0x72a24a:c.instructions+=1;goto B72a24a;
case 0x72a24c:goto L72a24c;
case 0x72a24f:c.instructions+=2;goto B72a24f;
case 0x72a251:c.instructions+=1;goto B72a251;
case 0x72a253:goto L72a253;
case 0x72a257:c.instructions+=1;goto B72a257;
case 0x72a259:goto L72a259;
case 0x72a25c:c.instructions+=2;goto B72a25c;
case 0x72a25e:c.instructions+=1;goto B72a25e;
case 0x72a260:goto L72a260;
case 0x72a263:goto L72a263;
case 0x72a266:c.instructions+=2;goto B72a266;
case 0x72a269:c.instructions+=1;goto B72a269;
case 0x72a26c:goto L72a26c;
case 0x72a26d:goto L72a26d;
case 0x72a26e:c.instructions+=3;goto B72a26e;
case 0x72a270:c.instructions+=2;goto B72a270;
case 0x72a274:c.instructions+=1;goto B72a274;
case 0x72a276:goto L72a276;
case 0x72a27a:c.instructions+=1;goto B72a27a;
case 0x72a27c:goto L72a27c;
case 0x72a27f:c.instructions+=2;goto B72a27f;
case 0x72a283:c.instructions+=1;goto B72a283;
case 0x72a285:goto L72a285;
case 0x72a288:c.instructions+=2;goto B72a288;
case 0x72a28b:c.instructions+=1;goto B72a28b;
case 0x72a28e:goto L72a28e;
case 0x72a292:goto L72a292;
case 0x72a294:c.instructions+=2;goto B72a294;
case 0x72a295:c.instructions+=1;goto B72a295;
case 0x72a296:goto L72a296;
case 0x72a29a:c.instructions+=1;goto B72a29a;
case 0x72a29c:goto L72a29c;
case 0x72a29f:c.instructions+=2;goto B72a29f;
case 0x72a2a3:c.instructions+=1;goto B72a2a3;
case 0x72a2a5:goto L72a2a5;
case 0x72a2a8:c.instructions+=3;goto B72a2a8;
case 0x72a2ab:c.instructions+=2;goto B72a2ab;
case 0x72a2ae:c.instructions+=1;goto B72a2ae;
case 0x72a2b0:goto L72a2b0;
case 0x72a2b4:c.instructions+=1;goto B72a2b4;
case 0x72a2b6:goto L72a2b6;
case 0x72a2ba:c.instructions+=1;goto B72a2ba;
case 0x72a2bc:goto L72a2bc;
case 0x72a2bf:c.instructions+=2;goto B72a2bf;
case 0x72a2c3:c.instructions+=1;goto B72a2c3;
case 0x72a2c5:goto L72a2c5;
case 0x72a2c8:c.instructions+=3;goto B72a2c8;
case 0x72a2cb:c.instructions+=2;goto B72a2cb;
case 0x72a2ce:c.instructions+=1;goto B72a2ce;
case 0x72a2d0:goto L72a2d0;
case 0x72a2d4:c.instructions+=1;goto B72a2d4;
case 0x72a2d6:goto L72a2d6;
case 0x72a2d9:c.instructions+=2;goto B72a2d9;
case 0x72a2dd:c.instructions+=1;goto B72a2dd;
case 0x72a2df:goto L72a2df;
case 0x72a2e2:c.instructions+=2;goto B72a2e2;
case 0x72a2e5:c.instructions+=1;goto B72a2e5;
case 0x72a2e8:goto L72a2e8;
case 0x72a2ec:c.instructions+=1;goto B72a2ec;
case 0x72a2ee:goto L72a2ee;
case 0x72a2f1:c.instructions+=2;goto B72a2f1;
case 0x72a2f2:c.instructions+=1;goto B72a2f2;
case 0x72a2f3:goto L72a2f3;
case 0x72a2f4:c.instructions+=7;goto B72a2f4;
case 0x72a2f6:c.instructions+=6;goto B72a2f6;
case 0x72a2f7:c.instructions+=5;goto B72a2f7;
case 0x72a2f8:c.instructions+=4;goto B72a2f8;
case 0x72a2fb:c.instructions+=3;goto B72a2fb;
case 0x72a300:c.instructions+=2;goto B72a300;
case 0x72a301:c.instructions+=1;goto B72a301;
case 0x72a303:goto L72a303;
case 0x72a308:c.instructions+=1;goto B72a308;
case 0x72a30e:goto L72a30e;
case 0x72a311:c.instructions+=4;goto B72a311;
case 0x72a313:c.instructions+=3;goto B72a313;
case 0x72a316:c.instructions+=2;goto B72a316;
case 0x72a319:c.instructions+=1;goto B72a319;
case 0x72a31b:goto L72a31b;
case 0x72a31e:c.instructions+=2;goto B72a31e;
case 0x72a320:c.instructions+=1;goto B72a320;
case 0x72a322:goto L72a322;
case 0x72a323:c.instructions+=1;goto B72a323;
case 0x72a328:goto L72a328;
case 0x72a329:goto L72a329;
case 0x72a32a:c.instructions+=1;goto B72a32a;
case 0x72a32f:goto L72a32f;
case 0x72a330:c.instructions+=2;goto B72a330;
case 0x72a333:c.instructions+=1;goto B72a333;
case 0x72a336:goto L72a336;
case 0x72a33b:c.instructions+=1;goto B72a33b;
case 0x72a33d:goto L72a33d;
case 0x72a340:c.instructions+=6;goto B72a340;
case 0x72a342:c.instructions+=5;goto B72a342;
case 0x72a345:c.instructions+=4;goto B72a345;
case 0x72a348:c.instructions+=3;goto B72a348;
case 0x72a349:c.instructions+=2;goto B72a349;
case 0x72a34a:c.instructions+=1;goto B72a34a;
case 0x72a34c:goto L72a34c;
case 0x72a34f:c.instructions+=2;goto B72a34f;
case 0x72a351:c.instructions+=1;goto B72a351;
case 0x72a353:goto L72a353;
case 0x72a354:c.instructions+=3;goto B72a354;
case 0x72a357:c.instructions+=2;goto B72a357;
case 0x72a35a:c.instructions+=1;goto B72a35a;
case 0x72a35f:goto L72a35f;
case 0x72a360:c.instructions+=3;goto B72a360;
case 0x72a363:c.instructions+=2;goto B72a363;
case 0x72a366:c.instructions+=1;goto B72a366;
case 0x72a36b:goto L72a36b;
case 0x72a36e:c.instructions+=2;goto B72a36e;
case 0x72a373:c.instructions+=1;goto B72a373;
case 0x72a375:goto L72a375;
case 0x72a376:c.instructions+=3;goto B72a376;
case 0x72a379:c.instructions+=2;goto B72a379;
case 0x72a37c:c.instructions+=1;goto B72a37c;
case 0x72a381:goto L72a381;
case 0x72a384:c.instructions+=1;goto B72a384;
case 0x72a38a:goto L72a38a;
case 0x72a38c:goto L72a38c;
case 0x72a38d:c.instructions+=4;goto B72a38d;
case 0x72a38e:c.instructions+=3;goto B72a38e;
case 0x72a38f:c.instructions+=2;goto B72a38f;
case 0x72a390:c.instructions+=1;goto B72a390;
case 0x72a391:goto L72a391;
case 0x72a395:c.instructions+=3;goto B72a395;
case 0x72a398:c.instructions+=2;goto B72a398;
case 0x72a39a:c.instructions+=1;goto B72a39a;
case 0x72a39c:goto L72a39c;
case 0x72a39d:c.instructions+=1;goto B72a39d;
case 0x72a3a2:goto L72a3a2;
case 0x72a3a3:goto L72a3a3;
case 0x72a3a4:goto L72a3a4;
case 0x72a3a8:c.instructions+=14;goto B72a3a8;
case 0x72a3aa:c.instructions+=13;goto B72a3aa;
case 0x72a3ad:c.instructions+=12;goto B72a3ad;
case 0x72a3b0:c.instructions+=11;goto B72a3b0;
case 0x72a3b3:c.instructions+=10;goto B72a3b3;
case 0x72a3b6:c.instructions+=9;goto B72a3b6;
case 0x72a3b9:c.instructions+=8;goto B72a3b9;
case 0x72a3c0:c.instructions+=7;goto B72a3c0;
case 0x72a3c6:c.instructions+=6;goto B72a3c6;
case 0x72a3c9:c.instructions+=5;goto B72a3c9;
case 0x72a3cc:c.instructions+=4;goto B72a3cc;
case 0x72a3d0:c.instructions+=3;goto B72a3d0;
case 0x72a3d6:c.instructions+=2;goto B72a3d6;
case 0x72a3d8:c.instructions+=1;goto B72a3d8;
case 0x72a3d9:goto L72a3d9;
case 0x72a3da:c.instructions+=7;goto B72a3da;
case 0x72a3dc:c.instructions+=6;goto B72a3dc;
case 0x72a3dd:c.instructions+=5;goto B72a3dd;
case 0x72a3e0:c.instructions+=4;goto B72a3e0;
case 0x72a3e1:c.instructions+=3;goto B72a3e1;
case 0x72a3e4:c.instructions+=2;goto B72a3e4;
case 0x72a3e7:c.instructions+=1;goto B72a3e7;
case 0x72a3e9:goto L72a3e9;
case 0x72a3ec:c.instructions+=2;goto B72a3ec;
case 0x72a3ee:c.instructions+=1;goto B72a3ee;
case 0x72a3f0:goto L72a3f0;
case 0x72a3f1:c.instructions+=1;goto B72a3f1;
case 0x72a3f6:goto L72a3f6;
case 0x72a3f7:goto L72a3f7;
case 0x72a3f9:c.instructions+=4;goto B72a3f9;
case 0x72a3fc:c.instructions+=3;goto B72a3fc;
case 0x72a3fd:c.instructions+=2;goto B72a3fd;
case 0x72a400:c.instructions+=1;goto B72a400;
case 0x72a405:goto L72a405;
case 0x72a406:c.instructions+=1;goto B72a406;
case 0x72a409:goto L72a409;
case 0x72a40c:c.instructions+=6;goto B72a40c;
case 0x72a40e:c.instructions+=5;goto B72a40e;
case 0x72a411:c.instructions+=4;goto B72a411;
case 0x72a414:c.instructions+=3;goto B72a414;
case 0x72a415:c.instructions+=2;goto B72a415;
case 0x72a416:c.instructions+=1;goto B72a416;
case 0x72a418:goto L72a418;
case 0x72a41b:c.instructions+=2;goto B72a41b;
case 0x72a41d:c.instructions+=1;goto B72a41d;
case 0x72a41f:goto L72a41f;
case 0x72a422:c.instructions+=6;goto B72a422;
case 0x72a424:c.instructions+=5;goto B72a424;
case 0x72a427:c.instructions+=4;goto B72a427;
case 0x72a42a:c.instructions+=3;goto B72a42a;
case 0x72a42b:c.instructions+=2;goto B72a42b;
case 0x72a42c:c.instructions+=1;goto B72a42c;
case 0x72a42e:goto L72a42e;
case 0x72a431:c.instructions+=2;goto B72a431;
case 0x72a433:c.instructions+=1;goto B72a433;
case 0x72a435:goto L72a435;
case 0x72a437:c.instructions+=2;goto B72a437;
case 0x72a439:c.instructions+=1;goto B72a439;
case 0x72a43b:goto L72a43b;
case 0x72a43e:c.instructions+=8;goto B72a43e;
case 0x72a441:c.instructions+=7;goto B72a441;
case 0x72a444:c.instructions+=6;goto B72a444;
case 0x72a447:c.instructions+=5;goto B72a447;
case 0x72a449:c.instructions+=4;goto B72a449;
case 0x72a44a:c.instructions+=3;goto B72a44a;
case 0x72a44c:c.instructions+=2;goto B72a44c;
case 0x72a44e:c.instructions+=1;goto B72a44e;
case 0x72a450:goto L72a450;
case 0x72a452:goto L72a452;
case 0x72a453:c.instructions+=3;goto B72a453;
case 0x72a454:c.instructions+=2;goto B72a454;
case 0x72a455:c.instructions+=1;goto B72a455;
case 0x72a456:goto L72a456;
case 0x72a45a:c.instructions+=12;goto B72a45a;
case 0x72a45c:c.instructions+=11;goto B72a45c;
case 0x72a45f:c.instructions+=10;goto B72a45f;
case 0x72a462:c.instructions+=9;goto B72a462;
case 0x72a465:c.instructions+=8;goto B72a465;
case 0x72a468:c.instructions+=7;goto B72a468;
case 0x72a46b:c.instructions+=6;goto B72a46b;
case 0x72a472:c.instructions+=5;goto B72a472;
case 0x72a478:c.instructions+=4;goto B72a478;
case 0x72a47b:c.instructions+=3;goto B72a47b;
case 0x72a47e:c.instructions+=2;goto B72a47e;
case 0x72a480:c.instructions+=1;goto B72a480;
case 0x72a481:goto L72a481;
case 0x72a482:c.instructions+=14;goto B72a482;
case 0x72a484:c.instructions+=13;goto B72a484;
case 0x72a487:c.instructions+=12;goto B72a487;
case 0x72a48a:c.instructions+=11;goto B72a48a;
case 0x72a48d:c.instructions+=10;goto B72a48d;
case 0x72a48e:c.instructions+=9;goto B72a48e;
case 0x72a491:c.instructions+=8;goto B72a491;
case 0x72a494:c.instructions+=7;goto B72a494;
case 0x72a496:c.instructions+=6;goto B72a496;
case 0x72a499:c.instructions+=5;goto B72a499;
case 0x72a49a:c.instructions+=4;goto B72a49a;
case 0x72a49d:c.instructions+=3;goto B72a49d;
case 0x72a4a0:c.instructions+=2;goto B72a4a0;
case 0x72a4a3:c.instructions+=1;goto B72a4a3;
case 0x72a4a9:goto L72a4a9;
case 0x72a4ac:c.instructions+=5;goto B72a4ac;
case 0x72a4b2:c.instructions+=4;goto B72a4b2;
case 0x72a4b4:c.instructions+=3;goto B72a4b4;
case 0x72a4b7:c.instructions+=2;goto B72a4b7;
case 0x72a4ba:c.instructions+=1;goto B72a4ba;
case 0x72a4bb:goto L72a4bb;
case 0x72a4be:c.instructions+=46;goto B72a4be;
case 0x72a4c0:c.instructions+=45;goto B72a4c0;
case 0x72a4c3:c.instructions+=44;goto B72a4c3;
case 0x72a4c5:c.instructions+=43;goto B72a4c5;
case 0x72a4c8:c.instructions+=42;goto B72a4c8;
case 0x72a4cb:c.instructions+=41;goto B72a4cb;
case 0x72a4ce:c.instructions+=40;goto B72a4ce;
case 0x72a4d0:c.instructions+=39;goto B72a4d0;
case 0x72a4d3:c.instructions+=38;goto B72a4d3;
case 0x72a4d6:c.instructions+=37;goto B72a4d6;
case 0x72a4d8:c.instructions+=36;goto B72a4d8;
case 0x72a4da:c.instructions+=35;goto B72a4da;
case 0x72a4dd:c.instructions+=34;goto B72a4dd;
case 0x72a4e0:c.instructions+=33;goto B72a4e0;
case 0x72a4e3:c.instructions+=32;goto B72a4e3;
case 0x72a4e6:c.instructions+=31;goto B72a4e6;
case 0x72a4e9:c.instructions+=30;goto B72a4e9;
case 0x72a4eb:c.instructions+=29;goto B72a4eb;
case 0x72a4ee:c.instructions+=28;goto B72a4ee;
case 0x72a4f0:c.instructions+=27;goto B72a4f0;
case 0x72a4f3:c.instructions+=26;goto B72a4f3;
case 0x72a4f5:c.instructions+=25;goto B72a4f5;
case 0x72a4f7:c.instructions+=24;goto B72a4f7;
case 0x72a4fa:c.instructions+=23;goto B72a4fa;
case 0x72a4fc:c.instructions+=22;goto B72a4fc;
case 0x72a4ff:c.instructions+=21;goto B72a4ff;
case 0x72a502:c.instructions+=20;goto B72a502;
case 0x72a505:c.instructions+=19;goto B72a505;
case 0x72a508:c.instructions+=18;goto B72a508;
case 0x72a50b:c.instructions+=17;goto B72a50b;
case 0x72a50e:c.instructions+=16;goto B72a50e;
case 0x72a511:c.instructions+=15;goto B72a511;
case 0x72a514:c.instructions+=14;goto B72a514;
case 0x72a517:c.instructions+=13;goto B72a517;
case 0x72a51a:c.instructions+=12;goto B72a51a;
case 0x72a51d:c.instructions+=11;goto B72a51d;
case 0x72a520:c.instructions+=10;goto B72a520;
case 0x72a523:c.instructions+=9;goto B72a523;
case 0x72a526:c.instructions+=8;goto B72a526;
case 0x72a528:c.instructions+=7;goto B72a528;
case 0x72a52a:c.instructions+=6;goto B72a52a;
case 0x72a52d:c.instructions+=5;goto B72a52d;
case 0x72a530:c.instructions+=4;goto B72a530;
case 0x72a533:c.instructions+=3;goto B72a533;
case 0x72a536:c.instructions+=2;goto B72a536;
case 0x72a538:c.instructions+=1;goto B72a538;
case 0x72a53a:goto L72a53a;
case 0x72a53c:c.instructions+=1;goto B72a53c;
case 0x72a53d:goto L72a53d;
case 0x72a53e:c.instructions+=3;goto B72a53e;
case 0x72a53f:c.instructions+=2;goto B72a53f;
case 0x72a540:c.instructions+=1;goto B72a540;
case 0x72a541:goto L72a541;
case 0x72a542:c.instructions+=9;goto B72a542;
case 0x72a544:c.instructions+=8;goto B72a544;
case 0x72a545:c.instructions+=7;goto B72a545;
case 0x72a546:c.instructions+=6;goto B72a546;
case 0x72a549:c.instructions+=5;goto B72a549;
case 0x72a54c:c.instructions+=4;goto B72a54c;
case 0x72a54e:c.instructions+=3;goto B72a54e;
case 0x72a54f:c.instructions+=2;goto B72a54f;
case 0x72a552:c.instructions+=1;goto B72a552;
case 0x72a554:goto L72a554;
case 0x72a558:c.instructions+=6;goto B72a558;
case 0x72a559:c.instructions+=5;goto B72a559;
case 0x72a55a:c.instructions+=4;goto B72a55a;
case 0x72a55d:c.instructions+=3;goto B72a55d;
case 0x72a560:c.instructions+=2;goto B72a560;
case 0x72a561:c.instructions+=1;goto B72a561;
case 0x72a563:goto L72a563;
case 0x72a566:c.instructions+=2;goto B72a566;
case 0x72a568:c.instructions+=1;goto B72a568;
case 0x72a56a:goto L72a56a;
case 0x72a56d:c.instructions+=5;goto B72a56d;
case 0x72a56e:c.instructions+=4;goto B72a56e;
case 0x72a571:c.instructions+=3;goto B72a571;
case 0x72a574:c.instructions+=2;goto B72a574;
case 0x72a577:c.instructions+=1;goto B72a577;
case 0x72a579:goto L72a579;
case 0x72a57c:c.instructions+=2;goto B72a57c;
case 0x72a57f:c.instructions+=1;goto B72a57f;
case 0x72a581:goto L72a581;
case 0x72a585:goto L72a585;
case 0x72a588:c.instructions+=2;goto B72a588;
case 0x72a58a:c.instructions+=1;goto B72a58a;
case 0x72a58c:goto L72a58c;
case 0x72a58e:goto L72a58e;
case 0x72a591:c.instructions+=4;goto B72a591;
case 0x72a594:c.instructions+=3;goto B72a594;
case 0x72a595:c.instructions+=2;goto B72a595;
case 0x72a596:c.instructions+=1;goto B72a596;
case 0x72a59b:goto L72a59b;
case 0x72a59e:c.instructions+=6;goto B72a59e;
case 0x72a5a0:c.instructions+=5;goto B72a5a0;
case 0x72a5a3:c.instructions+=4;goto B72a5a3;
case 0x72a5a6:c.instructions+=3;goto B72a5a6;
case 0x72a5a9:c.instructions+=2;goto B72a5a9;
case 0x72a5ab:c.instructions+=1;goto B72a5ab;
case 0x72a5ae:goto L72a5ae;
case 0x72a5b0:c.instructions+=1;goto B72a5b0;
case 0x72a5b2:goto L72a5b2;
case 0x72a5b5:c.instructions+=1;goto B72a5b5;
case 0x72a5b6:goto L72a5b6;
case 0x72a5b7:c.instructions+=3;goto B72a5b7;
case 0x72a5b8:c.instructions+=2;goto B72a5b8;
case 0x72a5b9:c.instructions+=1;goto B72a5b9;
case 0x72a5ba:goto L72a5ba;
case 0x72a5bb:c.instructions+=4;goto B72a5bb;
case 0x72a5bf:c.instructions+=3;goto B72a5bf;
case 0x72a5c2:c.instructions+=2;goto B72a5c2;
case 0x72a5c4:c.instructions+=1;goto B72a5c4;
case 0x72a5c6:goto L72a5c6;
case 0x72a5c7:c.instructions+=1;goto B72a5c7;
case 0x72a5cc:goto L72a5cc;
case 0x72a5d0:c.instructions+=2;goto B72a5d0;
case 0x72a5d4:c.instructions+=1;goto B72a5d4;
case 0x72a5d5:goto L72a5d5;
case 0x72a5d6:c.instructions+=1;goto B72a5d6;
case 0x72a5d7:goto L72a5d7;
case 0x72a5db:c.instructions+=12;goto B72a5db;
case 0x72a5dd:c.instructions+=11;goto B72a5dd;
case 0x72a5e0:c.instructions+=10;goto B72a5e0;
case 0x72a5e3:c.instructions+=9;goto B72a5e3;
case 0x72a5e6:c.instructions+=8;goto B72a5e6;
case 0x72a5e9:c.instructions+=7;goto B72a5e9;
case 0x72a5ec:c.instructions+=6;goto B72a5ec;
case 0x72a5f3:c.instructions+=5;goto B72a5f3;
case 0x72a5f9:c.instructions+=4;goto B72a5f9;
case 0x72a5fc:c.instructions+=3;goto B72a5fc;
case 0x72a5ff:c.instructions+=2;goto B72a5ff;
case 0x72a601:c.instructions+=1;goto B72a601;
case 0x72a602:goto L72a602;
case 0x72a603:c.instructions+=15;goto B72a603;
case 0x72a605:c.instructions+=14;goto B72a605;
case 0x72a608:c.instructions+=13;goto B72a608;
case 0x72a60a:c.instructions+=12;goto B72a60a;
case 0x72a60b:c.instructions+=11;goto B72a60b;
case 0x72a60e:c.instructions+=10;goto B72a60e;
case 0x72a60f:c.instructions+=9;goto B72a60f;
case 0x72a612:c.instructions+=8;goto B72a612;
case 0x72a613:c.instructions+=7;goto B72a613;
case 0x72a616:c.instructions+=6;goto B72a616;
case 0x72a618:c.instructions+=5;goto B72a618;
case 0x72a619:c.instructions+=4;goto B72a619;
case 0x72a61c:c.instructions+=3;goto B72a61c;
case 0x72a61f:c.instructions+=2;goto B72a61f;
case 0x72a622:c.instructions+=1;goto B72a622;
case 0x72a627:goto L72a627;
case 0x72a62a:c.instructions+=7;goto B72a62a;
case 0x72a62b:c.instructions+=6;goto B72a62b;
case 0x72a62c:c.instructions+=5;goto B72a62c;
case 0x72a632:c.instructions+=4;goto B72a632;
case 0x72a635:c.instructions+=3;goto B72a635;
case 0x72a637:c.instructions+=2;goto B72a637;
case 0x72a63a:c.instructions+=1;goto B72a63a;
case 0x72a63f:goto L72a63f;
case 0x72a641:c.instructions+=5;goto B72a641;
case 0x72a644:c.instructions+=4;goto B72a644;
case 0x72a647:c.instructions+=3;goto B72a647;
case 0x72a64a:c.instructions+=2;goto B72a64a;
case 0x72a64b:c.instructions+=1;goto B72a64b;
case 0x72a650:goto L72a650;
case 0x72a653:c.instructions+=7;goto B72a653;
case 0x72a656:c.instructions+=6;goto B72a656;
case 0x72a659:c.instructions+=5;goto B72a659;
case 0x72a65c:c.instructions+=4;goto B72a65c;
case 0x72a65d:c.instructions+=3;goto B72a65d;
case 0x72a65e:c.instructions+=2;goto B72a65e;
case 0x72a661:c.instructions+=1;goto B72a661;
case 0x72a666:goto L72a666;
case 0x72a669:c.instructions+=6;goto B72a669;
case 0x72a66d:c.instructions+=5;goto B72a66d;
case 0x72a66e:c.instructions+=4;goto B72a66e;
case 0x72a66f:c.instructions+=3;goto B72a66f;
case 0x72a670:c.instructions+=2;goto B72a670;
case 0x72a671:c.instructions+=1;goto B72a671;
case 0x72a672:goto L72a672;
case 0x72a673:c.instructions+=7;goto B72a673;
case 0x72a675:c.instructions+=6;goto B72a675;
case 0x72a676:c.instructions+=5;goto B72a676;
case 0x72a679:c.instructions+=4;goto B72a679;
case 0x72a67d:c.instructions+=3;goto B72a67d;
case 0x72a67e:c.instructions+=2;goto B72a67e;
case 0x72a681:c.instructions+=1;goto B72a681;
case 0x72a683:goto L72a683;
case 0x72a687:c.instructions+=7;goto B72a687;
case 0x72a68a:c.instructions+=6;goto B72a68a;
case 0x72a68b:c.instructions+=5;goto B72a68b;
case 0x72a68e:c.instructions+=4;goto B72a68e;
case 0x72a691:c.instructions+=3;goto B72a691;
case 0x72a692:c.instructions+=2;goto B72a692;
case 0x72a693:c.instructions+=1;goto B72a693;
case 0x72a695:goto L72a695;
case 0x72a698:c.instructions+=2;goto B72a698;
case 0x72a69a:c.instructions+=1;goto B72a69a;
case 0x72a69c:goto L72a69c;
case 0x72a69e:c.instructions+=1;goto B72a69e;
case 0x72a6a0:goto L72a6a0;
case 0x72a6a3:c.instructions+=3;goto B72a6a3;
case 0x72a6a6:c.instructions+=2;goto B72a6a6;
case 0x72a6a8:c.instructions+=1;goto B72a6a8;
case 0x72a6aa:goto L72a6aa;
case 0x72a6ad:c.instructions+=5;goto B72a6ad;
case 0x72a6b0:c.instructions+=4;goto B72a6b0;
case 0x72a6b2:c.instructions+=3;goto B72a6b2;
case 0x72a6b5:c.instructions+=2;goto B72a6b5;
case 0x72a6b6:c.instructions+=1;goto B72a6b6;
case 0x72a6b8:goto L72a6b8;
case 0x72a6ba:goto L72a6ba;
case 0x72a6bb:c.instructions+=3;goto B72a6bb;
case 0x72a6bc:c.instructions+=2;goto B72a6bc;
case 0x72a6bd:c.instructions+=1;goto B72a6bd;
case 0x72a6be:goto L72a6be;
case 0x72a6c2:c.instructions+=12;goto B72a6c2;
case 0x72a6c4:c.instructions+=11;goto B72a6c4;
case 0x72a6c6:c.instructions+=10;goto B72a6c6;
case 0x72a6c9:c.instructions+=9;goto B72a6c9;
case 0x72a6cc:c.instructions+=8;goto B72a6cc;
case 0x72a6cf:c.instructions+=7;goto B72a6cf;
case 0x72a6d2:c.instructions+=6;goto B72a6d2;
case 0x72a6d5:c.instructions+=5;goto B72a6d5;
case 0x72a6d8:c.instructions+=4;goto B72a6d8;
case 0x72a6db:c.instructions+=3;goto B72a6db;
case 0x72a6e1:c.instructions+=2;goto B72a6e1;
case 0x72a6e3:c.instructions+=1;goto B72a6e3;
case 0x72a6e4:goto L72a6e4;
case 0x72a6e8:c.instructions+=5;goto B72a6e8;
case 0x72a6ea:c.instructions+=4;goto B72a6ea;
case 0x72a6ee:c.instructions+=3;goto B72a6ee;
case 0x72a6f4:c.instructions+=2;goto B72a6f4;
case 0x72a6f7:c.instructions+=1;goto B72a6f7;
case 0x72a6f8:goto L72a6f8;
case 0x72a6f9:c.instructions+=11;goto B72a6f9;
case 0x72a6fb:c.instructions+=10;goto B72a6fb;
case 0x72a6fe:c.instructions+=9;goto B72a6fe;
case 0x72a701:c.instructions+=8;goto B72a701;
case 0x72a704:c.instructions+=7;goto B72a704;
case 0x72a707:c.instructions+=6;goto B72a707;
case 0x72a708:c.instructions+=5;goto B72a708;
case 0x72a70e:c.instructions+=4;goto B72a70e;
case 0x72a711:c.instructions+=3;goto B72a711;
case 0x72a713:c.instructions+=2;goto B72a713;
case 0x72a716:c.instructions+=1;goto B72a716;
case 0x72a718:goto L72a718;
case 0x72a71b:c.instructions+=4;goto B72a71b;
case 0x72a721:c.instructions+=3;goto B72a721;
case 0x72a723:c.instructions+=2;goto B72a723;
case 0x72a726:c.instructions+=1;goto B72a726;
case 0x72a728:goto L72a728;
case 0x72a72a:c.instructions+=6;goto B72a72a;
case 0x72a72d:c.instructions+=5;goto B72a72d;
case 0x72a730:c.instructions+=4;goto B72a730;
case 0x72a733:c.instructions+=3;goto B72a733;
case 0x72a735:c.instructions+=2;goto B72a735;
case 0x72a738:c.instructions+=1;goto B72a738;
case 0x72a73a:goto L72a73a;
case 0x72a73d:c.instructions+=2;goto B72a73d;
case 0x72a73f:c.instructions+=1;goto B72a73f;
case 0x72a741:goto L72a741;
case 0x72a744:c.instructions+=3;goto B72a744;
case 0x72a747:c.instructions+=2;goto B72a747;
case 0x72a749:c.instructions+=1;goto B72a749;
case 0x72a74a:goto L72a74a;
case 0x72a74d:c.instructions+=19;goto B72a74d;
case 0x72a753:c.instructions+=18;goto B72a753;
case 0x72a756:c.instructions+=17;goto B72a756;
case 0x72a759:c.instructions+=16;goto B72a759;
case 0x72a75c:c.instructions+=15;goto B72a75c;
case 0x72a75e:c.instructions+=14;goto B72a75e;
case 0x72a761:c.instructions+=13;goto B72a761;
case 0x72a763:c.instructions+=12;goto B72a763;
case 0x72a766:c.instructions+=11;goto B72a766;
case 0x72a769:c.instructions+=10;goto B72a769;
case 0x72a76c:c.instructions+=9;goto B72a76c;
case 0x72a76e:c.instructions+=8;goto B72a76e;
case 0x72a770:c.instructions+=7;goto B72a770;
case 0x72a773:c.instructions+=6;goto B72a773;
case 0x72a776:c.instructions+=5;goto B72a776;
case 0x72a778:c.instructions+=4;goto B72a778;
case 0x72a77b:c.instructions+=3;goto B72a77b;
case 0x72a77c:c.instructions+=2;goto B72a77c;
case 0x72a77f:c.instructions+=1;goto B72a77f;
case 0x72a781:goto L72a781;
case 0x72a782:c.instructions+=1;goto B72a782;
case 0x72a784:goto L72a784;
case 0x72a787:c.instructions+=2;goto B72a787;
case 0x72a789:c.instructions+=1;goto B72a789;
case 0x72a78b:goto L72a78b;
case 0x72a78e:c.instructions+=2;goto B72a78e;
case 0x72a791:c.instructions+=1;goto B72a791;
case 0x72a793:goto L72a793;
case 0x72a796:c.instructions+=4;goto B72a796;
case 0x72a798:c.instructions+=3;goto B72a798;
case 0x72a79b:c.instructions+=2;goto B72a79b;
case 0x72a79c:c.instructions+=1;goto B72a79c;
case 0x72a79e:goto L72a79e;
case 0x72a79f:c.instructions+=2;goto B72a79f;
case 0x72a7a0:c.instructions+=1;goto B72a7a0;
case 0x72a7a1:goto L72a7a1;
case 0x72a7a2:c.instructions+=6;goto B72a7a2;
case 0x72a7a4:c.instructions+=5;goto B72a7a4;
case 0x72a7a5:c.instructions+=4;goto B72a7a5;
case 0x72a7a8:c.instructions+=3;goto B72a7a8;
case 0x72a7ac:c.instructions+=2;goto B72a7ac;
case 0x72a7ad:c.instructions+=1;goto B72a7ad;
case 0x72a7af:goto L72a7af;
case 0x72a7b3:c.instructions+=7;goto B72a7b3;
case 0x72a7b6:c.instructions+=6;goto B72a7b6;
case 0x72a7b7:c.instructions+=5;goto B72a7b7;
case 0x72a7ba:c.instructions+=4;goto B72a7ba;
case 0x72a7bd:c.instructions+=3;goto B72a7bd;
case 0x72a7c0:c.instructions+=2;goto B72a7c0;
case 0x72a7c1:c.instructions+=1;goto B72a7c1;
case 0x72a7c3:goto L72a7c3;
case 0x72a7c5:c.instructions+=3;goto B72a7c5;
case 0x72a7c8:c.instructions+=2;goto B72a7c8;
case 0x72a7ca:c.instructions+=1;goto B72a7ca;
case 0x72a7cc:goto L72a7cc;
case 0x72a7ce:goto L72a7ce;
case 0x72a7d1:goto L72a7d1;
case 0x72a7d4:c.instructions+=4;goto B72a7d4;
case 0x72a7d7:c.instructions+=3;goto B72a7d7;
case 0x72a7d8:c.instructions+=2;goto B72a7d8;
case 0x72a7d9:c.instructions+=1;goto B72a7d9;
case 0x72a7de:goto L72a7de;
case 0x72a7e1:goto L72a7e1;
case 0x72a7e3:c.instructions+=4;goto B72a7e3;
case 0x72a7e4:c.instructions+=3;goto B72a7e4;
case 0x72a7e5:c.instructions+=2;goto B72a7e5;
case 0x72a7e6:c.instructions+=1;goto B72a7e6;
case 0x72a7e7:goto L72a7e7;
case 0x72a7eb:c.instructions+=16;goto B72a7eb;
case 0x72a7ed:c.instructions+=15;goto B72a7ed;
case 0x72a7f0:c.instructions+=14;goto B72a7f0;
case 0x72a7f2:c.instructions+=13;goto B72a7f2;
case 0x72a7f4:c.instructions+=12;goto B72a7f4;
case 0x72a7f7:c.instructions+=11;goto B72a7f7;
case 0x72a7fa:c.instructions+=10;goto B72a7fa;
case 0x72a7fd:c.instructions+=9;goto B72a7fd;
case 0x72a7ff:c.instructions+=8;goto B72a7ff;
case 0x72a802:c.instructions+=7;goto B72a802;
case 0x72a805:c.instructions+=6;goto B72a805;
case 0x72a808:c.instructions+=5;goto B72a808;
case 0x72a80b:c.instructions+=4;goto B72a80b;
case 0x72a80e:c.instructions+=3;goto B72a80e;
case 0x72a814:c.instructions+=2;goto B72a814;
case 0x72a816:c.instructions+=1;goto B72a816;
case 0x72a817:goto L72a817;
case 0x72a818:c.instructions+=40;goto B72a818;
case 0x72a81a:c.instructions+=39;goto B72a81a;
case 0x72a81d:c.instructions+=38;goto B72a81d;
case 0x72a820:c.instructions+=37;goto B72a820;
case 0x72a823:c.instructions+=36;goto B72a823;
case 0x72a825:c.instructions+=35;goto B72a825;
case 0x72a828:c.instructions+=34;goto B72a828;
case 0x72a82b:c.instructions+=33;goto B72a82b;
case 0x72a831:c.instructions+=32;goto B72a831;
case 0x72a834:c.instructions+=31;goto B72a834;
case 0x72a837:c.instructions+=30;goto B72a837;
case 0x72a838:c.instructions+=29;goto B72a838;
case 0x72a83b:c.instructions+=28;goto B72a83b;
case 0x72a83e:c.instructions+=27;goto B72a83e;
case 0x72a841:c.instructions+=26;goto B72a841;
case 0x72a844:c.instructions+=25;goto B72a844;
case 0x72a847:c.instructions+=24;goto B72a847;
case 0x72a84a:c.instructions+=23;goto B72a84a;
case 0x72a84d:c.instructions+=22;goto B72a84d;
case 0x72a850:c.instructions+=21;goto B72a850;
case 0x72a853:c.instructions+=20;goto B72a853;
case 0x72a854:c.instructions+=19;goto B72a854;
case 0x72a857:c.instructions+=18;goto B72a857;
case 0x72a85a:c.instructions+=17;goto B72a85a;
case 0x72a860:c.instructions+=16;goto B72a860;
case 0x72a863:c.instructions+=15;goto B72a863;
case 0x72a865:c.instructions+=14;goto B72a865;
case 0x72a867:c.instructions+=13;goto B72a867;
case 0x72a86d:c.instructions+=12;goto B72a86d;
case 0x72a870:c.instructions+=11;goto B72a870;
case 0x72a872:c.instructions+=10;goto B72a872;
case 0x72a874:c.instructions+=9;goto B72a874;
case 0x72a877:c.instructions+=8;goto B72a877;
case 0x72a879:c.instructions+=7;goto B72a879;
case 0x72a87b:c.instructions+=6;goto B72a87b;
case 0x72a881:c.instructions+=5;goto B72a881;
case 0x72a883:c.instructions+=4;goto B72a883;
case 0x72a886:c.instructions+=3;goto B72a886;
case 0x72a888:c.instructions+=2;goto B72a888;
case 0x72a88a:c.instructions+=1;goto B72a88a;
case 0x72a88f:goto L72a88f;
case 0x72a892:c.instructions+=12;goto B72a892;
case 0x72a894:c.instructions+=11;goto B72a894;
case 0x72a897:c.instructions+=10;goto B72a897;
case 0x72a89d:c.instructions+=9;goto B72a89d;
case 0x72a89f:c.instructions+=8;goto B72a89f;
case 0x72a8a1:c.instructions+=7;goto B72a8a1;
case 0x72a8a4:c.instructions+=6;goto B72a8a4;
case 0x72a8a6:c.instructions+=5;goto B72a8a6;
case 0x72a8a8:c.instructions+=4;goto B72a8a8;
case 0x72a8aa:c.instructions+=3;goto B72a8aa;
case 0x72a8ad:c.instructions+=2;goto B72a8ad;
case 0x72a8af:c.instructions+=1;goto B72a8af;
case 0x72a8b4:goto L72a8b4;
case 0x72a8b6:c.instructions+=8;goto B72a8b6;
case 0x72a8b7:c.instructions+=7;goto B72a8b7;
case 0x72a8ba:c.instructions+=6;goto B72a8ba;
case 0x72a8bc:c.instructions+=5;goto B72a8bc;
case 0x72a8bf:c.instructions+=4;goto B72a8bf;
case 0x72a8c2:c.instructions+=3;goto B72a8c2;
case 0x72a8c3:c.instructions+=2;goto B72a8c3;
case 0x72a8c4:c.instructions+=1;goto B72a8c4;
case 0x72a8c5:goto L72a8c5;
case 0x72a8c6:c.instructions+=6;goto B72a8c6;
case 0x72a8c8:c.instructions+=5;goto B72a8c8;
case 0x72a8c9:c.instructions+=4;goto B72a8c9;
case 0x72a8cc:c.instructions+=3;goto B72a8cc;
case 0x72a8d0:c.instructions+=2;goto B72a8d0;
case 0x72a8d1:c.instructions+=1;goto B72a8d1;
case 0x72a8d3:goto L72a8d3;
case 0x72a8d7:c.instructions+=7;goto B72a8d7;
case 0x72a8da:c.instructions+=6;goto B72a8da;
case 0x72a8db:c.instructions+=5;goto B72a8db;
case 0x72a8de:c.instructions+=4;goto B72a8de;
case 0x72a8e1:c.instructions+=3;goto B72a8e1;
case 0x72a8e4:c.instructions+=2;goto B72a8e4;
case 0x72a8e5:c.instructions+=1;goto B72a8e5;
case 0x72a8e7:goto L72a8e7;
case 0x72a8e9:c.instructions+=3;goto B72a8e9;
case 0x72a8ec:c.instructions+=2;goto B72a8ec;
case 0x72a8ee:c.instructions+=1;goto B72a8ee;
case 0x72a8f0:goto L72a8f0;
case 0x72a8f2:goto L72a8f2;
case 0x72a8f5:goto L72a8f5;
case 0x72a8f8:c.instructions+=5;goto B72a8f8;
case 0x72a8fb:c.instructions+=4;goto B72a8fb;
case 0x72a8fe:c.instructions+=3;goto B72a8fe;
case 0x72a8ff:c.instructions+=2;goto B72a8ff;
case 0x72a900:c.instructions+=1;goto B72a900;
case 0x72a905:goto L72a905;
case 0x72a908:goto L72a908;
case 0x72a90a:c.instructions+=4;goto B72a90a;
case 0x72a90b:c.instructions+=3;goto B72a90b;
case 0x72a90c:c.instructions+=2;goto B72a90c;
case 0x72a90d:c.instructions+=1;goto B72a90d;
case 0x72a90e:goto L72a90e;
case 0x72a90f:c.instructions+=25;goto B72a90f;
case 0x72a911:c.instructions+=24;goto B72a911;
case 0x72a912:c.instructions+=23;goto B72a912;
case 0x72a915:c.instructions+=22;goto B72a915;
case 0x72a918:c.instructions+=21;goto B72a918;
case 0x72a91b:c.instructions+=20;goto B72a91b;
case 0x72a91e:c.instructions+=19;goto B72a91e;
case 0x72a921:c.instructions+=18;goto B72a921;
case 0x72a923:c.instructions+=17;goto B72a923;
case 0x72a926:c.instructions+=16;goto B72a926;
case 0x72a929:c.instructions+=15;goto B72a929;
case 0x72a92c:c.instructions+=14;goto B72a92c;
case 0x72a92f:c.instructions+=13;goto B72a92f;
case 0x72a932:c.instructions+=12;goto B72a932;
case 0x72a935:c.instructions+=11;goto B72a935;
case 0x72a938:c.instructions+=10;goto B72a938;
case 0x72a93b:c.instructions+=9;goto B72a93b;
case 0x72a93d:c.instructions+=8;goto B72a93d;
case 0x72a93f:c.instructions+=7;goto B72a93f;
case 0x72a940:c.instructions+=6;goto B72a940;
case 0x72a943:c.instructions+=5;goto B72a943;
case 0x72a946:c.instructions+=4;goto B72a946;
case 0x72a948:c.instructions+=3;goto B72a948;
case 0x72a94b:c.instructions+=2;goto B72a94b;
case 0x72a94d:c.instructions+=1;goto B72a94d;
case 0x72a952:goto L72a952;
case 0x72a953:c.instructions+=3;goto B72a953;
case 0x72a954:c.instructions+=2;goto B72a954;
case 0x72a955:c.instructions+=1;goto B72a955;
case 0x72a956:goto L72a956;
case 0x72a95a:c.instructions+=11;goto B72a95a;
case 0x72a95c:c.instructions+=10;goto B72a95c;
case 0x72a95f:c.instructions+=9;goto B72a95f;
case 0x72a962:c.instructions+=8;goto B72a962;
case 0x72a965:c.instructions+=7;goto B72a965;
case 0x72a968:c.instructions+=6;goto B72a968;
case 0x72a96b:c.instructions+=5;goto B72a96b;
case 0x72a96e:c.instructions+=4;goto B72a96e;
case 0x72a974:c.instructions+=3;goto B72a974;
case 0x72a977:c.instructions+=2;goto B72a977;
case 0x72a978:c.instructions+=1;goto B72a978;
case 0x72a97d:goto L72a97d;
case 0x72a97e:c.instructions+=2;goto B72a97e;
case 0x72a980:c.instructions+=1;goto B72a980;
case 0x72a981:goto L72a981;
case 0x72a982:c.instructions+=16;goto B72a982;
case 0x72a984:c.instructions+=15;goto B72a984;
case 0x72a987:c.instructions+=14;goto B72a987;
case 0x72a989:c.instructions+=13;goto B72a989;
case 0x72a98c:c.instructions+=12;goto B72a98c;
case 0x72a98f:c.instructions+=11;goto B72a98f;
case 0x72a992:c.instructions+=10;goto B72a992;
case 0x72a995:c.instructions+=9;goto B72a995;
case 0x72a998:c.instructions+=8;goto B72a998;
case 0x72a99b:c.instructions+=7;goto B72a99b;
case 0x72a99e:c.instructions+=6;goto B72a99e;
case 0x72a9a1:c.instructions+=5;goto B72a9a1;
case 0x72a9a4:c.instructions+=4;goto B72a9a4;
case 0x72a9a6:c.instructions+=3;goto B72a9a6;
case 0x72a9a7:c.instructions+=2;goto B72a9a7;
case 0x72a9aa:c.instructions+=1;goto B72a9aa;
case 0x72a9af:goto L72a9af;
case 0x72a9b0:c.instructions+=3;goto B72a9b0;
case 0x72a9b1:c.instructions+=2;goto B72a9b1;
case 0x72a9b2:c.instructions+=1;goto B72a9b2;
case 0x72a9b3:goto L72a9b3;
case 0x72a9b4:c.instructions+=5;goto B72a9b4;
case 0x72a9b6:c.instructions+=4;goto B72a9b6;
case 0x72a9b7:c.instructions+=3;goto B72a9b7;
case 0x72a9ba:c.instructions+=2;goto B72a9ba;
case 0x72a9be:c.instructions+=1;goto B72a9be;
case 0x72a9c0:goto L72a9c0;
case 0x72a9c4:c.instructions+=7;goto B72a9c4;
case 0x72a9c7:c.instructions+=6;goto B72a9c7;
case 0x72a9c8:c.instructions+=5;goto B72a9c8;
case 0x72a9cb:c.instructions+=4;goto B72a9cb;
case 0x72a9ce:c.instructions+=3;goto B72a9ce;
case 0x72a9d1:c.instructions+=2;goto B72a9d1;
case 0x72a9d2:c.instructions+=1;goto B72a9d2;
case 0x72a9d4:goto L72a9d4;
case 0x72a9d7:c.instructions+=2;goto B72a9d7;
case 0x72a9d9:c.instructions+=1;goto B72a9d9;
case 0x72a9db:goto L72a9db;
case 0x72a9de:c.instructions+=5;goto B72a9de;
case 0x72a9e1:c.instructions+=4;goto B72a9e1;
case 0x72a9e4:c.instructions+=3;goto B72a9e4;
case 0x72a9e7:c.instructions+=2;goto B72a9e7;
case 0x72a9e8:c.instructions+=1;goto B72a9e8;
case 0x72a9ed:goto L72a9ed;
case 0x72a9f0:c.instructions+=1;goto B72a9f0;
case 0x72a9f3:goto L72a9f3;
case 0x72a9f4:c.instructions+=2;goto B72a9f4;
case 0x72a9f5:c.instructions+=1;goto B72a9f5;
case 0x72a9f6:goto L72a9f6;
case 0x72a9fa:c.instructions+=11;goto B72a9fa;
case 0x72a9fc:c.instructions+=10;goto B72a9fc;
case 0x72a9ff:c.instructions+=9;goto B72a9ff;
case 0x72aa02:c.instructions+=8;goto B72aa02;
case 0x72aa05:c.instructions+=7;goto B72aa05;
case 0x72aa08:c.instructions+=6;goto B72aa08;
case 0x72aa0b:c.instructions+=5;goto B72aa0b;
case 0x72aa0e:c.instructions+=4;goto B72aa0e;
case 0x72aa14:c.instructions+=3;goto B72aa14;
case 0x72aa17:c.instructions+=2;goto B72aa17;
case 0x72aa18:c.instructions+=1;goto B72aa18;
case 0x72aa1d:goto L72aa1d;
case 0x72aa1e:c.instructions+=2;goto B72aa1e;
case 0x72aa20:c.instructions+=1;goto B72aa20;
case 0x72aa21:goto L72aa21;
case 0x72aa22:c.instructions+=17;goto B72aa22;
case 0x72aa24:c.instructions+=16;goto B72aa24;
case 0x72aa27:c.instructions+=15;goto B72aa27;
case 0x72aa29:c.instructions+=14;goto B72aa29;
case 0x72aa2c:c.instructions+=13;goto B72aa2c;
case 0x72aa2f:c.instructions+=12;goto B72aa2f;
case 0x72aa32:c.instructions+=11;goto B72aa32;
case 0x72aa35:c.instructions+=10;goto B72aa35;
case 0x72aa38:c.instructions+=9;goto B72aa38;
case 0x72aa3b:c.instructions+=8;goto B72aa3b;
case 0x72aa3e:c.instructions+=7;goto B72aa3e;
case 0x72aa40:c.instructions+=6;goto B72aa40;
case 0x72aa43:c.instructions+=5;goto B72aa43;
case 0x72aa45:c.instructions+=4;goto B72aa45;
case 0x72aa46:c.instructions+=3;goto B72aa46;
case 0x72aa49:c.instructions+=2;goto B72aa49;
case 0x72aa4c:c.instructions+=1;goto B72aa4c;
case 0x72aa51:goto L72aa51;
case 0x72aa52:c.instructions+=3;goto B72aa52;
case 0x72aa53:c.instructions+=2;goto B72aa53;
case 0x72aa54:c.instructions+=1;goto B72aa54;
case 0x72aa55:goto L72aa55;
case 0x72aa56:c.instructions+=5;goto B72aa56;
case 0x72aa58:c.instructions+=4;goto B72aa58;
case 0x72aa59:c.instructions+=3;goto B72aa59;
case 0x72aa5c:c.instructions+=2;goto B72aa5c;
case 0x72aa60:c.instructions+=1;goto B72aa60;
case 0x72aa62:goto L72aa62;
case 0x72aa66:c.instructions+=7;goto B72aa66;
case 0x72aa69:c.instructions+=6;goto B72aa69;
case 0x72aa6a:c.instructions+=5;goto B72aa6a;
case 0x72aa6d:c.instructions+=4;goto B72aa6d;
case 0x72aa70:c.instructions+=3;goto B72aa70;
case 0x72aa73:c.instructions+=2;goto B72aa73;
case 0x72aa74:c.instructions+=1;goto B72aa74;
case 0x72aa76:goto L72aa76;
case 0x72aa79:c.instructions+=2;goto B72aa79;
case 0x72aa7b:c.instructions+=1;goto B72aa7b;
case 0x72aa7d:goto L72aa7d;
case 0x72aa80:c.instructions+=5;goto B72aa80;
case 0x72aa83:c.instructions+=4;goto B72aa83;
case 0x72aa86:c.instructions+=3;goto B72aa86;
case 0x72aa89:c.instructions+=2;goto B72aa89;
case 0x72aa8a:c.instructions+=1;goto B72aa8a;
case 0x72aa8f:goto L72aa8f;
case 0x72aa92:c.instructions+=1;goto B72aa92;
case 0x72aa95:goto L72aa95;
case 0x72aa96:c.instructions+=2;goto B72aa96;
case 0x72aa97:c.instructions+=1;goto B72aa97;
case 0x72aa98:goto L72aa98;
case 0x72aa9c:c.instructions+=12;goto B72aa9c;
case 0x72aa9e:c.instructions+=11;goto B72aa9e;
case 0x72aaa0:c.instructions+=10;goto B72aaa0;
case 0x72aaa3:c.instructions+=9;goto B72aaa3;
case 0x72aaa6:c.instructions+=8;goto B72aaa6;
case 0x72aaa9:c.instructions+=7;goto B72aaa9;
case 0x72aaac:c.instructions+=6;goto B72aaac;
case 0x72aaaf:c.instructions+=5;goto B72aaaf;
case 0x72aab2:c.instructions+=4;goto B72aab2;
case 0x72aab5:c.instructions+=3;goto B72aab5;
case 0x72aabb:c.instructions+=2;goto B72aabb;
case 0x72aabd:c.instructions+=1;goto B72aabd;
case 0x72aabe:goto L72aabe;
case 0x72aac2:c.instructions+=20;goto B72aac2;
case 0x72aac4:c.instructions+=19;goto B72aac4;
case 0x72aac8:c.instructions+=18;goto B72aac8;
case 0x72aaca:c.instructions+=17;goto B72aaca;
case 0x72aacd:c.instructions+=16;goto B72aacd;
case 0x72aad0:c.instructions+=15;goto B72aad0;
case 0x72aad2:c.instructions+=14;goto B72aad2;
case 0x72aad4:c.instructions+=13;goto B72aad4;
case 0x72aad7:c.instructions+=12;goto B72aad7;
case 0x72aad9:c.instructions+=11;goto B72aad9;
case 0x72aadf:c.instructions+=10;goto B72aadf;
case 0x72aae2:c.instructions+=9;goto B72aae2;
case 0x72aae5:c.instructions+=8;goto B72aae5;
case 0x72aae7:c.instructions+=7;goto B72aae7;
case 0x72aaea:c.instructions+=6;goto B72aaea;
case 0x72aaed:c.instructions+=5;goto B72aaed;
case 0x72aaf0:c.instructions+=4;goto B72aaf0;
case 0x72aaf2:c.instructions+=3;goto B72aaf2;
case 0x72aaf5:c.instructions+=2;goto B72aaf5;
case 0x72aaf7:c.instructions+=1;goto B72aaf7;
case 0x72aaf8:goto L72aaf8;
case 0x72aaf9:c.instructions+=2;goto B72aaf9;
case 0x72aafd:c.instructions+=1;goto B72aafd;
case 0x72aaff:goto L72aaff;
case 0x72ab01:goto L72ab01;
case 0x72ab03:c.instructions+=2;goto B72ab03;
case 0x72ab06:c.instructions+=1;goto B72ab06;
case 0x72ab08:goto L72ab08;
case 0x72ab0b:c.instructions+=4;goto B72ab0b;
case 0x72ab10:c.instructions+=3;goto B72ab10;
case 0x72ab12:c.instructions+=2;goto B72ab12;
case 0x72ab15:c.instructions+=1;goto B72ab15;
case 0x72ab17:goto L72ab17;
case 0x72ab19:c.instructions+=2;goto B72ab19;
case 0x72ab1a:c.instructions+=1;goto B72ab1a;
case 0x72ab1b:goto L72ab1b;
case 0x72ab1e:c.instructions+=4;goto B72ab1e;
case 0x72ab1f:c.instructions+=3;goto B72ab1f;
case 0x72ab25:c.instructions+=2;goto B72ab25;
case 0x72ab27:c.instructions+=1;goto B72ab27;
case 0x72ab29:goto L72ab29;
case 0x72ab2f:c.instructions+=1;goto B72ab2f;
case 0x72ab31:goto L72ab31;
case 0x72ab34:c.instructions+=3;goto B72ab34;
case 0x72ab36:c.instructions+=2;goto B72ab36;
case 0x72ab39:c.instructions+=1;goto B72ab39;
case 0x72ab3b:goto L72ab3b;
case 0x72ab3c:c.instructions+=3;goto B72ab3c;
case 0x72ab3e:c.instructions+=2;goto B72ab3e;
case 0x72ab3f:c.instructions+=1;goto B72ab3f;
case 0x72ab44:goto L72ab44;
case 0x72ab47:c.instructions+=3;goto B72ab47;
case 0x72ab48:c.instructions+=2;goto B72ab48;
case 0x72ab49:c.instructions+=1;goto B72ab49;
case 0x72ab4c:goto L72ab4c;
case 0x72ab4e:c.instructions+=5;goto B72ab4e;
case 0x72ab51:c.instructions+=4;goto B72ab51;
case 0x72ab54:c.instructions+=3;goto B72ab54;
case 0x72ab56:c.instructions+=2;goto B72ab56;
case 0x72ab59:c.instructions+=1;goto B72ab59;
case 0x72ab5b:goto L72ab5b;
case 0x72ab5c:c.instructions+=2;goto B72ab5c;
case 0x72ab5d:c.instructions+=1;goto B72ab5d;
case 0x72ab62:goto L72ab62;
case 0x72ab63:c.instructions+=2;goto B72ab63;
case 0x72ab64:c.instructions+=1;goto B72ab64;
case 0x72ab67:goto L72ab67;
case 0x72ab6a:c.instructions+=1;goto B72ab6a;
case 0x72ab6c:goto L72ab6c;
case 0x72ab6e:c.instructions+=3;goto B72ab6e;
case 0x72ab6f:c.instructions+=2;goto B72ab6f;
case 0x72ab70:c.instructions+=1;goto B72ab70;
case 0x72ab71:goto L72ab71;
case 0x72ab75:c.instructions+=8;goto B72ab75;
case 0x72ab76:c.instructions+=7;goto B72ab76;
case 0x72ab77:c.instructions+=6;goto B72ab77;
case 0x72ab7a:c.instructions+=5;goto B72ab7a;
case 0x72ab7d:c.instructions+=4;goto B72ab7d;
case 0x72ab83:c.instructions+=3;goto B72ab83;
case 0x72ab85:c.instructions+=2;goto B72ab85;
case 0x72ab88:c.instructions+=1;goto B72ab88;
case 0x72ab8a:goto L72ab8a;
case 0x72ab8b:c.instructions+=1;goto B72ab8b;
case 0x72ab8e:goto L72ab8e;
case 0x72ab92:c.instructions+=4;goto B72ab92;
case 0x72ab95:c.instructions+=3;goto B72ab95;
case 0x72ab96:c.instructions+=2;goto B72ab96;
case 0x72ab97:c.instructions+=1;goto B72ab97;
case 0x72ab9c:goto L72ab9c;
case 0x72aba0:c.instructions+=6;goto B72aba0;
case 0x72aba3:c.instructions+=5;goto B72aba3;
case 0x72aba4:c.instructions+=4;goto B72aba4;
case 0x72aba5:c.instructions+=3;goto B72aba5;
case 0x72aba6:c.instructions+=2;goto B72aba6;
case 0x72aba8:c.instructions+=1;goto B72aba8;
case 0x72abaa:goto L72abaa;
case 0x72abab:goto L72abab;
case 0x72abac:c.instructions+=3;goto B72abac;
case 0x72abae:c.instructions+=2;goto B72abae;
case 0x72abaf:c.instructions+=1;goto B72abaf;
case 0x72abb0:goto L72abb0;
case 0x72abb1:c.instructions+=9;goto B72abb1;
case 0x72abb5:c.instructions+=8;goto B72abb5;
case 0x72abbb:c.instructions+=7;goto B72abbb;
case 0x72abbc:c.instructions+=6;goto B72abbc;
case 0x72abbd:c.instructions+=5;goto B72abbd;
case 0x72abc0:c.instructions+=4;goto B72abc0;
case 0x72abc1:c.instructions+=3;goto B72abc1;
case 0x72abc3:c.instructions+=2;goto B72abc3;
case 0x72abc4:c.instructions+=1;goto B72abc4;
case 0x72abc9:goto L72abc9;
case 0x72abcc:c.instructions+=3;goto B72abcc;
case 0x72abce:c.instructions+=2;goto B72abce;
case 0x72abcf:c.instructions+=1;goto B72abcf;
case 0x72abd4:goto L72abd4;
case 0x72abd7:c.instructions+=3;goto B72abd7;
case 0x72abd9:c.instructions+=2;goto B72abd9;
case 0x72abda:c.instructions+=1;goto B72abda;
case 0x72abdf:goto L72abdf;
case 0x72abe0:c.instructions+=1;goto B72abe0;
case 0x72abe5:goto L72abe5;
case 0x72abe8:c.instructions+=9;goto B72abe8;
case 0x72abec:c.instructions+=8;goto B72abec;
case 0x72abef:c.instructions+=7;goto B72abef;
case 0x72abf2:c.instructions+=6;goto B72abf2;
case 0x72abf5:c.instructions+=5;goto B72abf5;
case 0x72abf6:c.instructions+=4;goto B72abf6;
case 0x72abfd:c.instructions+=3;goto B72abfd;
case 0x72ac04:c.instructions+=2;goto B72ac04;
case 0x72ac0b:c.instructions+=1;goto B72ac0b;
case 0x72ac10:goto L72ac10;
case 0x72ac13:c.instructions+=2;goto B72ac13;
case 0x72ac15:c.instructions+=1;goto B72ac15;
case 0x72ac17:goto L72ac17;
case 0x72ac1a:c.instructions+=2;goto B72ac1a;
case 0x72ac1d:c.instructions+=1;goto B72ac1d;
case 0x72ac1f:goto L72ac1f;
case 0x72ac22:goto L72ac22;
case 0x72ac25:c.instructions+=2;goto B72ac25;
case 0x72ac28:c.instructions+=1;goto B72ac28;
case 0x72ac2a:goto L72ac2a;
case 0x72ac2d:c.instructions+=5;goto B72ac2d;
case 0x72ac30:c.instructions+=4;goto B72ac30;
case 0x72ac37:c.instructions+=3;goto B72ac37;
case 0x72ac3a:c.instructions+=2;goto B72ac3a;
case 0x72ac41:c.instructions+=1;goto B72ac41;
case 0x72ac43:goto L72ac43;
case 0x72ac46:c.instructions+=5;goto B72ac46;
case 0x72ac49:c.instructions+=4;goto B72ac49;
case 0x72ac4b:c.instructions+=3;goto B72ac4b;
case 0x72ac4e:c.instructions+=2;goto B72ac4e;
case 0x72ac51:c.instructions+=1;goto B72ac51;
case 0x72ac53:goto L72ac53;
case 0x72ac58:c.instructions+=1;goto B72ac58;
case 0x72ac5a:goto L72ac5a;
case 0x72ac5f:c.instructions+=1;goto B72ac5f;
case 0x72ac61:goto L72ac61;
case 0x72ac64:c.instructions+=5;goto B72ac64;
case 0x72ac6b:c.instructions+=4;goto B72ac6b;
case 0x72ac6f:c.instructions+=3;goto B72ac6f;
case 0x72ac72:c.instructions+=2;goto B72ac72;
case 0x72ac79:c.instructions+=1;goto B72ac79;
case 0x72ac7b:goto L72ac7b;
case 0x72ac80:c.instructions+=1;goto B72ac80;
case 0x72ac82:goto L72ac82;
case 0x72ac85:c.instructions+=2;goto B72ac85;
case 0x72ac86:c.instructions+=1;goto B72ac86;
case 0x72ac8b:goto L72ac8b;
case 0x72ac8d:c.instructions+=2;goto B72ac8d;
case 0x72ac8e:c.instructions+=1;goto B72ac8e;
case 0x72ac90:goto L72ac90;
case 0x72ac93:c.instructions+=12;goto B72ac93;
case 0x72ac96:c.instructions+=11;goto B72ac96;
case 0x72ac99:c.instructions+=10;goto B72ac99;
case 0x72ac9c:c.instructions+=9;goto B72ac9c;
case 0x72aca0:c.instructions+=8;goto B72aca0;
case 0x72aca3:c.instructions+=7;goto B72aca3;
case 0x72aca6:c.instructions+=6;goto B72aca6;
case 0x72aca8:c.instructions+=5;goto B72aca8;
case 0x72acaa:c.instructions+=4;goto B72acaa;
case 0x72acb0:c.instructions+=3;goto B72acb0;
case 0x72acb4:c.instructions+=2;goto B72acb4;
case 0x72acb7:c.instructions+=1;goto B72acb7;
case 0x72acb9:goto L72acb9;
case 0x72acbc:goto L72acbc;
case 0x72acc0:c.instructions+=10;goto B72acc0;
case 0x72acc3:c.instructions+=9;goto B72acc3;
case 0x72acc6:c.instructions+=8;goto B72acc6;
case 0x72acce:c.instructions+=7;goto B72acce;
case 0x72acd1:c.instructions+=6;goto B72acd1;
case 0x72acd5:c.instructions+=5;goto B72acd5;
case 0x72acd6:c.instructions+=4;goto B72acd6;
case 0x72acd7:c.instructions+=3;goto B72acd7;
case 0x72acd8:c.instructions+=2;goto B72acd8;
case 0x72acda:c.instructions+=1;goto B72acda;
case 0x72acdc:goto L72acdc;
case 0x72acdd:c.instructions+=5;goto B72acdd;
case 0x72acde:c.instructions+=4;goto B72acde;
case 0x72acdf:c.instructions+=3;goto B72acdf;
case 0x72ace2:c.instructions+=2;goto B72ace2;
case 0x72ace3:c.instructions+=1;goto B72ace3;
case 0x72ace4:goto L72ace4;
case 0x72acea:goto L72acea;
case 0x72acf0:goto L72acf0;
case 0x72acf6:c.instructions+=2;goto B72acf6;
case 0x72acf8:c.instructions+=1;goto B72acf8;
case 0x72acfa:goto L72acfa;
case 0x72ad01:goto L72ad01;
case 0x72ad03:goto L72ad03;
case 0x72ad06:c.instructions+=1;goto B72ad06;
case 0x72ad08:goto L72ad08;
case 0x72ad0c:c.instructions+=2;goto B72ad0c;
case 0x72ad0f:c.instructions+=1;goto B72ad0f;
case 0x72ad11:goto L72ad11;
case 0x72ad13:c.instructions+=2;goto B72ad13;
case 0x72ad14:c.instructions+=1;goto B72ad14;
case 0x72ad16:goto L72ad16;
case 0x72ad1a:c.instructions+=6;goto B72ad1a;
case 0x72ad21:c.instructions+=5;goto B72ad21;
case 0x72ad27:c.instructions+=4;goto B72ad27;
case 0x72ad2b:c.instructions+=3;goto B72ad2b;
case 0x72ad31:c.instructions+=2;goto B72ad31;
case 0x72ad37:c.instructions+=1;goto B72ad37;
case 0x72ad39:goto L72ad39;
case 0x72ad3c:goto L72ad3c;
case 0x72ad3e:c.instructions+=5;goto B72ad3e;
case 0x72ad44:c.instructions+=4;goto B72ad44;
case 0x72ad4a:c.instructions+=3;goto B72ad4a;
case 0x72ad50:c.instructions+=2;goto B72ad50;
case 0x72ad57:c.instructions+=1;goto B72ad57;
case 0x72ad58:goto L72ad58;
case 0x72ad59:c.instructions+=9;goto B72ad59;
case 0x72ad5b:c.instructions+=8;goto B72ad5b;
case 0x72ad5e:c.instructions+=7;goto B72ad5e;
case 0x72ad5f:c.instructions+=6;goto B72ad5f;
case 0x72ad60:c.instructions+=5;goto B72ad60;
case 0x72ad62:c.instructions+=4;goto B72ad62;
case 0x72ad68:c.instructions+=3;goto B72ad68;
case 0x72ad6a:c.instructions+=2;goto B72ad6a;
case 0x72ad6c:c.instructions+=1;goto B72ad6c;
case 0x72ad6e:goto L72ad6e;
case 0x72ad70:goto L72ad70;
case 0x72ad72:c.instructions+=1;goto B72ad72;
case 0x72ad77:goto L72ad77;
case 0x72ad7a:c.instructions+=1;goto B72ad7a;
case 0x72ad7c:goto L72ad7c;
case 0x72ad7f:goto L72ad7f;
case 0x72ad80:c.instructions+=2;goto B72ad80;
case 0x72ad83:c.instructions+=1;goto B72ad83;
case 0x72ad88:goto L72ad88;
case 0x72ad8e:c.instructions+=1;goto B72ad8e;
case 0x72ad94:goto L72ad94;
case 0x72ad9a:c.instructions+=1;goto B72ad9a;
case 0x72ada0:goto L72ada0;
case 0x72ada6:c.instructions+=4;goto B72ada6;
case 0x72ada8:c.instructions+=3;goto B72ada8;
case 0x72ada9:c.instructions+=2;goto B72ada9;
case 0x72adb0:c.instructions+=1;goto B72adb0;
case 0x72adb2:goto L72adb2;
case 0x72adb3:c.instructions+=3;goto B72adb3;
case 0x72adb4:c.instructions+=2;goto B72adb4;
case 0x72adb6:c.instructions+=1;goto B72adb6;
case 0x72adb9:goto L72adb9;
case 0x72adc3:c.instructions+=2;goto B72adc3;
case 0x72adca:c.instructions+=1;goto B72adca;
case 0x72adcc:goto L72adcc;
case 0x72adcd:c.instructions+=2;goto B72adcd;
case 0x72adcf:c.instructions+=1;goto B72adcf;
case 0x72add2:goto L72add2;
case 0x72add4:c.instructions+=2;goto B72add4;
case 0x72add6:c.instructions+=1;goto B72add6;
case 0x72add9:goto L72add9;
case 0x72addb:c.instructions+=1;goto B72addb;
case 0x72addd:goto L72addd;
case 0x72ade3:c.instructions+=2;goto B72ade3;
case 0x72ade5:c.instructions+=1;goto B72ade5;
case 0x72ade7:goto L72ade7;
case 0x72adea:c.instructions+=3;goto B72adea;
case 0x72adec:c.instructions+=2;goto B72adec;
case 0x72adef:c.instructions+=1;goto B72adef;
case 0x72adf1:goto L72adf1;
case 0x72adf3:goto L72adf3;
case 0x72adf5:c.instructions+=1;goto B72adf5;
case 0x72adf8:goto L72adf8;
case 0x72adfa:goto L72adfa;
case 0x72adfd:c.instructions+=16;goto B72adfd;
case 0x72ae00:c.instructions+=15;goto B72ae00;
case 0x72ae03:c.instructions+=14;goto B72ae03;
case 0x72ae09:c.instructions+=13;goto B72ae09;
case 0x72ae0c:c.instructions+=12;goto B72ae0c;
case 0x72ae0e:c.instructions+=11;goto B72ae0e;
case 0x72ae14:c.instructions+=10;goto B72ae14;
case 0x72ae17:c.instructions+=9;goto B72ae17;
case 0x72ae1a:c.instructions+=8;goto B72ae1a;
case 0x72ae1d:c.instructions+=7;goto B72ae1d;
case 0x72ae1f:c.instructions+=6;goto B72ae1f;
case 0x72ae21:c.instructions+=5;goto B72ae21;
case 0x72ae27:c.instructions+=4;goto B72ae27;
case 0x72ae2e:c.instructions+=3;goto B72ae2e;
case 0x72ae34:c.instructions+=2;goto B72ae34;
case 0x72ae37:c.instructions+=1;goto B72ae37;
case 0x72ae3d:goto L72ae3d;
case 0x72ae40:c.instructions+=18;goto B72ae40;
case 0x72ae43:c.instructions+=17;goto B72ae43;
case 0x72ae46:c.instructions+=16;goto B72ae46;
case 0x72ae49:c.instructions+=15;goto B72ae49;
case 0x72ae4c:c.instructions+=14;goto B72ae4c;
case 0x72ae52:c.instructions+=13;goto B72ae52;
case 0x72ae55:c.instructions+=12;goto B72ae55;
case 0x72ae58:c.instructions+=11;goto B72ae58;
case 0x72ae5b:c.instructions+=10;goto B72ae5b;
case 0x72ae5e:c.instructions+=9;goto B72ae5e;
case 0x72ae64:c.instructions+=8;goto B72ae64;
case 0x72ae68:c.instructions+=7;goto B72ae68;
case 0x72ae6a:c.instructions+=6;goto B72ae6a;
case 0x72ae6d:c.instructions+=5;goto B72ae6d;
case 0x72ae73:c.instructions+=4;goto B72ae73;
case 0x72ae76:c.instructions+=3;goto B72ae76;
case 0x72ae7a:c.instructions+=2;goto B72ae7a;
case 0x72ae7d:c.instructions+=1;goto B72ae7d;
case 0x72ae7f:goto L72ae7f;
case 0x72ae81:c.instructions+=1;goto B72ae81;
case 0x72ae87:goto L72ae87;
case 0x72ae8a:goto L72ae8a;
case 0x72ae90:c.instructions+=23;goto B72ae90;
case 0x72ae93:c.instructions+=22;goto B72ae93;
case 0x72ae94:c.instructions+=21;goto B72ae94;
case 0x72ae96:c.instructions+=20;goto B72ae96;
case 0x72ae99:c.instructions+=19;goto B72ae99;
case 0x72ae9c:c.instructions+=18;goto B72ae9c;
case 0x72aea0:c.instructions+=17;goto B72aea0;
case 0x72aea3:c.instructions+=16;goto B72aea3;
case 0x72aea6:c.instructions+=15;goto B72aea6;
case 0x72aea8:c.instructions+=14;goto B72aea8;
case 0x72aeae:c.instructions+=13;goto B72aeae;
case 0x72aeb1:c.instructions+=12;goto B72aeb1;
case 0x72aeb4:c.instructions+=11;goto B72aeb4;
case 0x72aeb6:c.instructions+=10;goto B72aeb6;
case 0x72aeb9:c.instructions+=9;goto B72aeb9;
case 0x72aebc:c.instructions+=8;goto B72aebc;
case 0x72aec0:c.instructions+=7;goto B72aec0;
case 0x72aec3:c.instructions+=6;goto B72aec3;
case 0x72aec6:c.instructions+=5;goto B72aec6;
case 0x72aec9:c.instructions+=4;goto B72aec9;
case 0x72aecf:c.instructions+=3;goto B72aecf;
case 0x72aed6:c.instructions+=2;goto B72aed6;
case 0x72aed9:c.instructions+=1;goto B72aed9;
case 0x72aedb:goto L72aedb;
case 0x72aedd:goto L72aedd;
case 0x72aedf:c.instructions+=1;goto B72aedf;
case 0x72aee1:goto L72aee1;
case 0x72aee4:goto L72aee4;
case 0x72aeea:c.instructions+=13;goto B72aeea;
case 0x72aeed:c.instructions+=12;goto B72aeed;
case 0x72aef0:c.instructions+=11;goto B72aef0;
case 0x72aef3:c.instructions+=10;goto B72aef3;
case 0x72aef6:c.instructions+=9;goto B72aef6;
case 0x72aefc:c.instructions+=8;goto B72aefc;
case 0x72aeff:c.instructions+=7;goto B72aeff;
case 0x72af03:c.instructions+=6;goto B72af03;
case 0x72af06:c.instructions+=5;goto B72af06;
case 0x72af09:c.instructions+=4;goto B72af09;
case 0x72af0b:c.instructions+=3;goto B72af0b;
case 0x72af0e:c.instructions+=2;goto B72af0e;
case 0x72af11:c.instructions+=1;goto B72af11;
case 0x72af13:goto L72af13;
case 0x72af17:c.instructions+=8;goto B72af17;
case 0x72af1a:c.instructions+=7;goto B72af1a;
case 0x72af1c:c.instructions+=6;goto B72af1c;
case 0x72af20:c.instructions+=5;goto B72af20;
case 0x72af26:c.instructions+=4;goto B72af26;
case 0x72af28:c.instructions+=3;goto B72af28;
case 0x72af29:c.instructions+=2;goto B72af29;
case 0x72af2b:c.instructions+=1;goto B72af2b;
case 0x72af31:goto L72af31;
case 0x72af37:c.instructions+=3;goto B72af37;
case 0x72af39:c.instructions+=2;goto B72af39;
case 0x72af3b:c.instructions+=1;goto B72af3b;
case 0x72af3d:goto L72af3d;
case 0x72af43:c.instructions+=2;goto B72af43;
case 0x72af45:c.instructions+=1;goto B72af45;
case 0x72af47:goto L72af47;
case 0x72af4d:c.instructions+=4;goto B72af4d;
case 0x72af4f:c.instructions+=3;goto B72af4f;
case 0x72af55:c.instructions+=2;goto B72af55;
case 0x72af5b:c.instructions+=1;goto B72af5b;
case 0x72af5d:goto L72af5d;
case 0x72af5f:c.instructions+=2;goto B72af5f;
case 0x72af65:c.instructions+=1;goto B72af65;
case 0x72af6b:goto L72af6b;
case 0x72af71:c.instructions+=2;goto B72af71;
case 0x72af73:c.instructions+=1;goto B72af73;
case 0x72af75:goto L72af75;
case 0x72af78:c.instructions+=1;goto B72af78;
case 0x72af7a:goto L72af7a;
case 0x72af7d:goto L72af7d;
case 0x72af81:c.instructions+=1;goto B72af81;
case 0x72af83:goto L72af83;
case 0x72af87:goto L72af87;
case 0x72af8d:c.instructions+=14;goto B72af8d;
case 0x72af8f:c.instructions+=13;goto B72af8f;
case 0x72af92:c.instructions+=12;goto B72af92;
case 0x72af93:c.instructions+=11;goto B72af93;
case 0x72af99:c.instructions+=10;goto B72af99;
case 0x72af9c:c.instructions+=9;goto B72af9c;
case 0x72af9f:c.instructions+=8;goto B72af9f;
case 0x72afa0:c.instructions+=7;goto B72afa0;
case 0x72afa3:c.instructions+=6;goto B72afa3;
case 0x72afa6:c.instructions+=5;goto B72afa6;
case 0x72afa9:c.instructions+=4;goto B72afa9;
case 0x72afac:c.instructions+=3;goto B72afac;
case 0x72afae:c.instructions+=2;goto B72afae;
case 0x72afaf:c.instructions+=1;goto B72afaf;
case 0x72afb5:goto L72afb5;
case 0x72afb9:c.instructions+=5;goto B72afb9;
case 0x72afc0:c.instructions+=4;goto B72afc0;
case 0x72afc3:c.instructions+=3;goto B72afc3;
case 0x72afc4:c.instructions+=2;goto B72afc4;
case 0x72afc6:c.instructions+=1;goto B72afc6;
case 0x72afc8:goto L72afc8;
case 0x72afce:c.instructions+=4;goto B72afce;
case 0x72afd4:c.instructions+=3;goto B72afd4;
case 0x72afda:c.instructions+=2;goto B72afda;
case 0x72afdc:c.instructions+=1;goto B72afdc;
case 0x72afde:goto L72afde;
case 0x72afe0:c.instructions+=1;goto B72afe0;
case 0x72afe6:goto L72afe6;
case 0x72afe9:c.instructions+=1;goto B72afe9;
case 0x72afec:goto L72afec;
case 0x72afee:goto L72afee;
case 0x72aff1:c.instructions+=1;goto B72aff1;
case 0x72aff7:goto L72aff7;
case 0x72affa:c.instructions+=1;goto B72affa;
case 0x72affb:goto L72affb;
case 0x72affc:c.instructions+=3;goto B72affc;
case 0x72affd:c.instructions+=2;goto B72affd;
case 0x72affe:c.instructions+=1;goto B72affe;
default:missing_instruction(c.pc);}
B72a000:L72a000:{c.instructions+=6;NFSU2_TR(0x72a000);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a001:{NFSU2_TR(0x72a001);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a002:{NFSU2_TR(0x72a002);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72a006:{NFSU2_TR(0x72a006);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B72a008:{NFSU2_TR(0x72a008);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+4),r1(R+12)));
w1(U+5,u8(u32(r1(U+4))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B72a00a:{NFSU2_TR(0x72a00a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L72a02f;}}
}
B72a00c:L72a00c:{c.instructions+=2;NFSU2_TR(0x72a00c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a00d:{NFSU2_TR(0x72a00d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72a010:L72a010:{c.instructions+=3;NFSU2_TR(0x72a010);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B72a013:{NFSU2_TR(0x72a013);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a014:{NFSU2_TR(0x72a014);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a019ull));
TAIL_STATIC(0x728fd2u,728);
}
B72a019:L72a019:{c.instructions+=3;NFSU2_TR(0x72a019);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B72a01c:{NFSU2_TR(0x72a01c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a01d:{NFSU2_TR(0x72a01d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a022ull));
TAIL_STATIC(0x725378u,725);
}
B72a022:L72a022:{c.instructions+=8;NFSU2_TR(0x72a022);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B72a025:{NFSU2_TR(0x72a025);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B72a026:{NFSU2_TR(0x72a026);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B72a027:{NFSU2_TR(0x72a027);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72a028:{NFSU2_TR(0x72a028);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B72a029:{NFSU2_TR(0x72a029);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72a02b:{NFSU2_TR(0x72a02b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72a02c:{NFSU2_TR(0x72a02c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72a010u);}goto L72a010;}}
}
B72a02e:L72a02e:{c.instructions+=1;NFSU2_TR(0x72a02e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72a02f:L72a02f:{c.instructions+=3;NFSU2_TR(0x72a02f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72a030:{NFSU2_TR(0x72a030);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72a031:{NFSU2_TR(0x72a031);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a032:L72a032:{c.instructions+=2;NFSU2_TR(0x72a032);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72a036:{NFSU2_TR(0x72a036);
{u32 ea_=u32(u32(7892380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72a03c:L72a03c:{c.instructions+=5;NFSU2_TR(0x72a03c);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72a03e:{NFSU2_TR(0x72a03e);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B72a040:{NFSU2_TR(0x72a040);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72a042:{NFSU2_TR(0x72a042);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72a045:{NFSU2_TR(0x72a045);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72a04f;}}
}
B72a047:L72a047:{c.instructions+=4;NFSU2_TR(0x72a047);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72a049:{NFSU2_TR(0x72a049);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B72a04b:{NFSU2_TR(0x72a04b);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B72a04d:{NFSU2_TR(0x72a04d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72a03cu);}goto L72a03c;}
}
B72a04f:L72a04f:{c.instructions+=34;NFSU2_TR(0x72a04f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72a051:{NFSU2_TR(0x72a051);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72a053:{NFSU2_TR(0x72a053);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B72a055:{NFSU2_TR(0x72a055);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72a057:{NFSU2_TR(0x72a057);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72a059:{NFSU2_TR(0x72a059);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72a05b:{NFSU2_TR(0x72a05b);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B72a05d:{NFSU2_TR(0x72a05d);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72a05f:{NFSU2_TR(0x72a05f);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B72a061:{NFSU2_TR(0x72a061);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B72a063:{NFSU2_TR(0x72a063);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a069:{NFSU2_TR(0x72a069);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B72a06f:{NFSU2_TR(0x72a06f);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B72a071:{NFSU2_TR(0x72a071);
{u32 ea_=u32(u32(7892400u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a077:{NFSU2_TR(0x72a077);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72a079:{NFSU2_TR(0x72a079);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B72a07b:{NFSU2_TR(0x72a07b);
{u32 ea_=u32(u32(7892396u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a081:{NFSU2_TR(0x72a081);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72a083:{NFSU2_TR(0x72a083);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72a085:{NFSU2_TR(0x72a085);
{u32 ea_=u32(u32(7892392u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a08b:{NFSU2_TR(0x72a08b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72a08d:{NFSU2_TR(0x72a08d);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72a08f:{NFSU2_TR(0x72a08f);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B72a091:{NFSU2_TR(0x72a091);
{u32 ea_=u32(u32(7892388u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a097:{NFSU2_TR(0x72a097);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72a099:{NFSU2_TR(0x72a099);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B72a09b:{NFSU2_TR(0x72a09b);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B72a09d:{NFSU2_TR(0x72a09d);
{u32 ea_=u32(u32(8153636u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a0a3:{NFSU2_TR(0x72a0a3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72a0a5:{NFSU2_TR(0x72a0a5);
__asm__ volatile(".byte 0xdd,0xdc":::"memory");
}
B72a0a7:{NFSU2_TR(0x72a0a7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72a0a9:{NFSU2_TR(0x72a0a9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72a0ab:{NFSU2_TR(0x72a0ab);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72a0ad:{NFSU2_TR(0x72a0ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a0ae:L72a0ae:{c.instructions+=4;NFSU2_TR(0x72a0ae);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a0af:{NFSU2_TR(0x72a0af);
__builtin_memmove((R+20),(R+16),4);
}
B72a0b1:{NFSU2_TR(0x72a0b1);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72a0b4:{NFSU2_TR(0x72a0b4);
{u32 ea_=u32(u32(7892380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72a0ba:L72a0ba:{c.instructions+=5;NFSU2_TR(0x72a0ba);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72a0bc:{NFSU2_TR(0x72a0bc);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B72a0be:{NFSU2_TR(0x72a0be);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72a0c0:{NFSU2_TR(0x72a0c0);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72a0c3:{NFSU2_TR(0x72a0c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72a0cd;}}
}
B72a0c5:L72a0c5:{c.instructions+=4;NFSU2_TR(0x72a0c5);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72a0c7:{NFSU2_TR(0x72a0c7);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B72a0c9:{NFSU2_TR(0x72a0c9);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B72a0cb:{NFSU2_TR(0x72a0cb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72a0bau);}goto L72a0ba;}
}
B72a0cd:L72a0cd:{c.instructions+=41;NFSU2_TR(0x72a0cd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72a0cf:{NFSU2_TR(0x72a0cf);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72a0d1:{NFSU2_TR(0x72a0d1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72a0d3:{NFSU2_TR(0x72a0d3);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72a0d5:{NFSU2_TR(0x72a0d5);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B72a0d7:{NFSU2_TR(0x72a0d7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72a0d9:{NFSU2_TR(0x72a0d9);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B72a0db:{NFSU2_TR(0x72a0db);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72a0dd:{NFSU2_TR(0x72a0dd);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B72a0df:{NFSU2_TR(0x72a0df);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72a0e1:{NFSU2_TR(0x72a0e1);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B72a0e3:{NFSU2_TR(0x72a0e3);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72a0e5:{NFSU2_TR(0x72a0e5);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B72a0e7:{NFSU2_TR(0x72a0e7);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a0ea:{NFSU2_TR(0x72a0ea);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B72a0ec:{NFSU2_TR(0x72a0ec);
{u32 ea_=u32(u32(7892372u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a0f2:{NFSU2_TR(0x72a0f2);
__asm__ volatile(".byte 0xd8,0xee":::"memory");
}
B72a0f4:{NFSU2_TR(0x72a0f4);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B72a0f6:{NFSU2_TR(0x72a0f6);
{u32 ea_=u32(u32(8153648u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a0fc:{NFSU2_TR(0x72a0fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72a0fe:{NFSU2_TR(0x72a0fe);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B72a100:{NFSU2_TR(0x72a100);
{u32 ea_=u32(u32(7892364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a106:{NFSU2_TR(0x72a106);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72a108:{NFSU2_TR(0x72a108);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72a10a:{NFSU2_TR(0x72a10a);
{u32 ea_=u32(u32(7892360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a110:{NFSU2_TR(0x72a110);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72a112:{NFSU2_TR(0x72a112);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72a115:{NFSU2_TR(0x72a115);
{u32 ea_=u32(u32(8153644u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a11b:{NFSU2_TR(0x72a11b);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72a11d:{NFSU2_TR(0x72a11d);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72a120:{NFSU2_TR(0x72a120);
__asm__ volatile(".byte 0xd8,0xce":::"memory");
}
B72a122:{NFSU2_TR(0x72a122);
{u32 ea_=u32(u32(8153640u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a128:{NFSU2_TR(0x72a128);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72a12a:{NFSU2_TR(0x72a12a);
__asm__ volatile(".byte 0xdd,0xde":::"memory");
}
B72a12c:{NFSU2_TR(0x72a12c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72a12e:{NFSU2_TR(0x72a12e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72a130:{NFSU2_TR(0x72a130);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72a132:{NFSU2_TR(0x72a132);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72a134:{NFSU2_TR(0x72a134);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72a136:{NFSU2_TR(0x72a136);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72a137:{NFSU2_TR(0x72a137);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a138:L72a138:{c.instructions+=10;NFSU2_TR(0x72a138);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a139:{NFSU2_TR(0x72a139);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72a13d:{NFSU2_TR(0x72a13d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a13e:{NFSU2_TR(0x72a13e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72a142:{NFSU2_TR(0x72a142);
__builtin_memmove((R+0),(R+28),4);
}
B72a144:{NFSU2_TR(0x72a144);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72a147:{NFSU2_TR(0x72a147);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a148:{NFSU2_TR(0x72a148);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a14b:{NFSU2_TR(0x72a14b);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a14f:{NFSU2_TR(0x72a14f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a154ull));
TAIL_STATIC(0x71feccu,71f);
}
B72a154:L72a154:{c.instructions+=8;NFSU2_TR(0x72a154);
__builtin_memmove((R+0),(R+28),4);
}
B72a156:{NFSU2_TR(0x72a156);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72a159:{NFSU2_TR(0x72a159);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B72a15c:{NFSU2_TR(0x72a15c);
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
B72a15f:{NFSU2_TR(0x72a15f);
__builtin_memmove((R+0),(R+28),4);
}
B72a161:{NFSU2_TR(0x72a161);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72a162:{NFSU2_TR(0x72a162);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72a163:{NFSU2_TR(0x72a163);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a164:L72a164:{c.instructions+=6;NFSU2_TR(0x72a164);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a168:{NFSU2_TR(0x72a168);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72a16c:{NFSU2_TR(0x72a16c);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B72a170:{NFSU2_TR(0x72a170);
u8 U[4];
w4(U+0,u32(0x72a138ull));
s4(u32(r4(R+0)),r4(U+0));
}
B72a176:{NFSU2_TR(0x72a176);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a179:{NFSU2_TR(0x72a179);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a17a:L72a17a:{c.instructions+=10;NFSU2_TR(0x72a17a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a17e:{NFSU2_TR(0x72a17e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72a180:{NFSU2_TR(0x72a180);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a183:{NFSU2_TR(0x72a183);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a186:{NFSU2_TR(0x72a186);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a189:{NFSU2_TR(0x72a189);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a18c:{NFSU2_TR(0x72a18c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1bull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72a18f:{NFSU2_TR(0x72a18f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a192:{NFSU2_TR(0x72a192);
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
B72a194:{NFSU2_TR(0x72a194);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a195:L72a195:{c.instructions+=5;NFSU2_TR(0x72a195);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72a199:{NFSU2_TR(0x72a199);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72a19d:{NFSU2_TR(0x72a19d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72a19f:{NFSU2_TR(0x72a19f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72a1a1:{NFSU2_TR(0x72a1a1);
if(r1(R+518)){{goto L72a1b5;}}
}
B72a1a3:L72a1a3:{c.instructions+=3;NFSU2_TR(0x72a1a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a1a4:{NFSU2_TR(0x72a1a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a1a5:{NFSU2_TR(0x72a1a5);
__builtin_memmove((R+24),(R+8),4);
}
B72a1a7:L72a1a7:{c.instructions+=6;NFSU2_TR(0x72a1a7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+28,u32(r1(U+0)));
}
B72a1aa:{NFSU2_TR(0x72a1aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72a1ad:{NFSU2_TR(0x72a1ad);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B72a1af:{NFSU2_TR(0x72a1af);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72a1b0:{NFSU2_TR(0x72a1b0);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B72a1b1:{NFSU2_TR(0x72a1b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72a1a7u);}goto L72a1a7;}}
}
B72a1b3:L72a1b3:{c.instructions+=2;NFSU2_TR(0x72a1b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72a1b4:{NFSU2_TR(0x72a1b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72a1b5:L72a1b5:{c.instructions+=2;NFSU2_TR(0x72a1b5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72a1b8:{NFSU2_TR(0x72a1b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72a1c5;}}
}
B72a1ba:L72a1ba:{c.instructions+=2;NFSU2_TR(0x72a1ba);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7full))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7full)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7full))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72a1bd:{NFSU2_TR(0x72a1bd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72a1e8;}}
}
B72a1bf:L72a1bf:{c.instructions+=2;NFSU2_TR(0x72a1bf);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x100ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x100ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72a1c4:{NFSU2_TR(0x72a1c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a1c5:L72a1c5:{c.instructions+=2;NFSU2_TR(0x72a1c5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72a1c8:{NFSU2_TR(0x72a1c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72a1d7;}}
}
B72a1ca:L72a1ca:{c.instructions+=2;NFSU2_TR(0x72a1ca);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72a1cf:{NFSU2_TR(0x72a1cf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72a1e8;}}
}
B72a1d1:L72a1d1:{c.instructions+=2;NFSU2_TR(0x72a1d1);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x10000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10000ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x10000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72a1d6:{NFSU2_TR(0x72a1d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a1d7:L72a1d7:{c.instructions+=2;NFSU2_TR(0x72a1d7);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72a1da:{NFSU2_TR(0x72a1da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72a1e8;}}
}
B72a1dc:L72a1dc:{c.instructions+=2;NFSU2_TR(0x72a1dc);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72a1e1:{NFSU2_TR(0x72a1e1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72a1e8;}}
}
B72a1e3:L72a1e3:{c.instructions+=1;NFSU2_TR(0x72a1e3);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x1000000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1000000ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1000000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72a1e8:L72a1e8:{c.instructions+=1;NFSU2_TR(0x72a1e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a1e9:L72a1e9:{c.instructions+=7;NFSU2_TR(0x72a1e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72a1ed:{NFSU2_TR(0x72a1ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a1ee:{NFSU2_TR(0x72a1ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72a1f2:{NFSU2_TR(0x72a1f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72a1f4:{NFSU2_TR(0x72a1f4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B72a1f6:{NFSU2_TR(0x72a1f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72a1f8:{NFSU2_TR(0x72a1f8);
if(r1(R+518)){{goto L72a20f;}}
}
B72a1fa:L72a1fa:{c.instructions+=2;NFSU2_TR(0x72a1fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a1fb:{NFSU2_TR(0x72a1fb);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B72a1ff:L72a1ff:{c.instructions+=2;NFSU2_TR(0x72a1ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+24))));
}
B72a203:{NFSU2_TR(0x72a203);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L72a20e;}}
}
B72a205:L72a205:{c.instructions+=4;NFSU2_TR(0x72a205);
__builtin_memmove((R+8),(R+0),4);
}
B72a207:{NFSU2_TR(0x72a207);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a20a:{NFSU2_TR(0x72a20a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72a20c:{NFSU2_TR(0x72a20c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72a1ffu);}goto L72a1ff;}}
}
B72a20e:L72a20e:{c.instructions+=1;NFSU2_TR(0x72a20e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72a20f:L72a20f:{c.instructions+=3;NFSU2_TR(0x72a20f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72a211:{NFSU2_TR(0x72a211);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a214:{NFSU2_TR(0x72a214);
if(r1(R+518)){{goto L72a219;}}
}
B72a216:L72a216:{c.instructions+=1;NFSU2_TR(0x72a216);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a219:L72a219:{c.instructions+=2;NFSU2_TR(0x72a219);
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
B72a21b:{NFSU2_TR(0x72a21b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72a221;}}
}
B72a21d:L72a21d:{c.instructions+=3;NFSU2_TR(0x72a21d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B72a21f:{NFSU2_TR(0x72a21f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72a220:{NFSU2_TR(0x72a220);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a221:L72a221:{c.instructions+=4;NFSU2_TR(0x72a221);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a224:{NFSU2_TR(0x72a224);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a227:{NFSU2_TR(0x72a227);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72a228:{NFSU2_TR(0x72a228);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a229:L72a229:{c.instructions+=4;NFSU2_TR(0x72a229);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72a22d:{NFSU2_TR(0x72a22d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72a22f:{NFSU2_TR(0x72a22f);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B72a233:{NFSU2_TR(0x72a233);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72a246;}}
}
B72a235:L72a235:{c.instructions+=3;NFSU2_TR(0x72a235);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a238:{NFSU2_TR(0x72a238);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B72a23a:{NFSU2_TR(0x72a23a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a23b:L72a23b:{c.instructions+=3;NFSU2_TR(0x72a23b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72a23e:{NFSU2_TR(0x72a23e);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72a242:{NFSU2_TR(0x72a242);
if(r1(R+518)){{goto L72a24c;}}
}
B72a244:L72a244:{c.instructions+=1;NFSU2_TR(0x72a244);
__builtin_memmove((R+0),(R+4),4);
}
B72a246:L72a246:{c.instructions+=2;NFSU2_TR(0x72a246);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72a24a:{NFSU2_TR(0x72a24a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72a23bu);}goto L72a23b;}}
}
B72a24c:L72a24c:{c.instructions+=3;NFSU2_TR(0x72a24c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72a24f:{NFSU2_TR(0x72a24f);
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
B72a251:{NFSU2_TR(0x72a251);
if(r1(R+518)){{goto L72a26c;}}
}
B72a253:L72a253:{c.instructions+=2;NFSU2_TR(0x72a253);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B72a257:{NFSU2_TR(0x72a257);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72a26c;}}
}
B72a259:L72a259:{c.instructions+=3;NFSU2_TR(0x72a259);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72a25c:{NFSU2_TR(0x72a25c);
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
B72a25e:{NFSU2_TR(0x72a25e);
if(r1(R+518)){{goto L72a263;}}
}
B72a260:L72a260:{c.instructions+=1;NFSU2_TR(0x72a260);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a263:L72a263:{c.instructions+=3;NFSU2_TR(0x72a263);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72a266:{NFSU2_TR(0x72a266);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72a269:{NFSU2_TR(0x72a269);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a26c:L72a26c:{c.instructions+=1;NFSU2_TR(0x72a26c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a26d:L72a26d:{c.instructions+=4;NFSU2_TR(0x72a26d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a26e:{NFSU2_TR(0x72a26e);
__builtin_memmove((R+20),(R+16),4);
}
B72a270:{NFSU2_TR(0x72a270);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72a274:{NFSU2_TR(0x72a274);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72a2b0;}}
}
B72a276:L72a276:{c.instructions+=2;NFSU2_TR(0x72a276);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72a27a:{NFSU2_TR(0x72a27a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72a296;}}
}
B72a27c:L72a27c:{c.instructions+=3;NFSU2_TR(0x72a27c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a27f:{NFSU2_TR(0x72a27f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72a283:{NFSU2_TR(0x72a283);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72a2ee;}}
}
B72a285:L72a285:{c.instructions+=3;NFSU2_TR(0x72a285);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72a288:{NFSU2_TR(0x72a288);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a28b:{NFSU2_TR(0x72a28b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a28e:L72a28e:{c.instructions+=1;NFSU2_TR(0x72a28e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72a292:L72a292:{c.instructions+=3;NFSU2_TR(0x72a292);
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
B72a294:{NFSU2_TR(0x72a294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72a295:{NFSU2_TR(0x72a295);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a296:L72a296:{c.instructions+=2;NFSU2_TR(0x72a296);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72a29a:{NFSU2_TR(0x72a29a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72a2ee;}}
}
B72a29c:L72a29c:{c.instructions+=3;NFSU2_TR(0x72a29c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a29f:{NFSU2_TR(0x72a29f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72a2a3:{NFSU2_TR(0x72a2a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72a2ee;}}
}
B72a2a5:L72a2a5:{c.instructions+=4;NFSU2_TR(0x72a2a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72a2a8:{NFSU2_TR(0x72a2a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a2ab:{NFSU2_TR(0x72a2ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a2ae:{NFSU2_TR(0x72a2ae);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72a28eu);}goto L72a28e;}
}
B72a2b0:L72a2b0:{c.instructions+=2;NFSU2_TR(0x72a2b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72a2b4:{NFSU2_TR(0x72a2b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72a2ee;}}
}
B72a2b6:L72a2b6:{c.instructions+=2;NFSU2_TR(0x72a2b6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72a2ba:{NFSU2_TR(0x72a2ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72a2d0;}}
}
B72a2bc:L72a2bc:{c.instructions+=3;NFSU2_TR(0x72a2bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a2bf:{NFSU2_TR(0x72a2bf);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72a2c3:{NFSU2_TR(0x72a2c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72a2ee;}}
}
B72a2c5:L72a2c5:{c.instructions+=4;NFSU2_TR(0x72a2c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72a2c8:{NFSU2_TR(0x72a2c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a2cb:{NFSU2_TR(0x72a2cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a2ce:{NFSU2_TR(0x72a2ce);
{goto L72a2e8;}
}
B72a2d0:L72a2d0:{c.instructions+=2;NFSU2_TR(0x72a2d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72a2d4:{NFSU2_TR(0x72a2d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72a2ee;}}
}
B72a2d6:L72a2d6:{c.instructions+=3;NFSU2_TR(0x72a2d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a2d9:{NFSU2_TR(0x72a2d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72a2dd:{NFSU2_TR(0x72a2dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72a2ee;}}
}
B72a2df:L72a2df:{c.instructions+=3;NFSU2_TR(0x72a2df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72a2e2:{NFSU2_TR(0x72a2e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a2e5:{NFSU2_TR(0x72a2e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a2e8:L72a2e8:{c.instructions+=2;NFSU2_TR(0x72a2e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72a2ec:{NFSU2_TR(0x72a2ec);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72a292u);}goto L72a292;}
}
B72a2ee:L72a2ee:{c.instructions+=3;NFSU2_TR(0x72a2ee);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72a2f1:{NFSU2_TR(0x72a2f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72a2f2:{NFSU2_TR(0x72a2f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a2f3:L72a2f3:{c.instructions+=8;NFSU2_TR(0x72a2f3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a2f4:{NFSU2_TR(0x72a2f4);
__builtin_memmove((R+20),(R+16),4);
}
B72a2f6:{NFSU2_TR(0x72a2f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a2f7:{NFSU2_TR(0x72a2f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a2f8:{NFSU2_TR(0x72a2f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72a2fb:{NFSU2_TR(0x72a2fb);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B72a300:{NFSU2_TR(0x72a300);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a301:{NFSU2_TR(0x72a301);
if(r1(R+518)){{goto L72a30e;}}
}
B72a303:L72a303:{c.instructions+=2;NFSU2_TR(0x72a303);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B72a308:{NFSU2_TR(0x72a308);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B72a30e:L72a30e:{c.instructions+=5;NFSU2_TR(0x72a30e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72a311:{NFSU2_TR(0x72a311);
__builtin_memmove((R+12),(R+28),4);
}
B72a313:{NFSU2_TR(0x72a313);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B72a316:{NFSU2_TR(0x72a316);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72a319:{NFSU2_TR(0x72a319);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72a336;}}
}
B72a31b:L72a31b:{c.instructions+=3;NFSU2_TR(0x72a31b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a31e:{NFSU2_TR(0x72a31e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72a320:{NFSU2_TR(0x72a320);
if(r1(R+518)){{goto L72a329;}}
}
B72a322:L72a322:{c.instructions+=2;NFSU2_TR(0x72a322);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a323:{NFSU2_TR(0x72a323);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a328ull));
TAIL_STATIC(0x724894u,724);
}
B72a328:L72a328:{c.instructions+=1;NFSU2_TR(0x72a328);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72a329:L72a329:{c.instructions+=2;NFSU2_TR(0x72a329);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a32a:{NFSU2_TR(0x72a32a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a32full));
TAIL_STATIC(0x724792u,724);
}
B72a32f:L72a32f:{c.instructions+=3;NFSU2_TR(0x72a32f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72a330:{NFSU2_TR(0x72a330);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a333:{NFSU2_TR(0x72a333);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a336:L72a336:{c.instructions+=2;NFSU2_TR(0x72a336);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x0ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B72a33b:{NFSU2_TR(0x72a33b);
if(r1(R+518)){{goto L72a375;}}
}
B72a33d:L72a33d:{c.instructions+=7;NFSU2_TR(0x72a33d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a340:{NFSU2_TR(0x72a340);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a342:{NFSU2_TR(0x72a342);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a345:{NFSU2_TR(0x72a345);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a348:{NFSU2_TR(0x72a348);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a349:{NFSU2_TR(0x72a349);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a34a:{NFSU2_TR(0x72a34a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a34cull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B72a34c:L72a34c:{c.instructions+=3;NFSU2_TR(0x72a34c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B72a34f:{NFSU2_TR(0x72a34f);
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
B72a351:{NFSU2_TR(0x72a351);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72a38c;}}
}
B72a353:L72a353:{c.instructions+=4;NFSU2_TR(0x72a353);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a354:{NFSU2_TR(0x72a354);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a357:{NFSU2_TR(0x72a357);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a35a:{NFSU2_TR(0x72a35a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a35full));
TAIL_STATIC(0x71feccu,71f);
}
B72a35f:L72a35f:{c.instructions+=4;NFSU2_TR(0x72a35f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a360:{NFSU2_TR(0x72a360);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a363:{NFSU2_TR(0x72a363);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a366:{NFSU2_TR(0x72a366);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a36bull));
TAIL_STATIC(0x71feccu,71f);
}
B72a36b:L72a36b:{c.instructions+=3;NFSU2_TR(0x72a36b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B72a36e:{NFSU2_TR(0x72a36e);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B72a373:{NFSU2_TR(0x72a373);
{goto L72a38a;}
}
B72a375:L72a375:{c.instructions+=4;NFSU2_TR(0x72a375);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a376:{NFSU2_TR(0x72a376);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a379:{NFSU2_TR(0x72a379);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a37c:{NFSU2_TR(0x72a37c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a381ull));
TAIL_STATIC(0x71feccu,71f);
}
B72a381:L72a381:{c.instructions+=2;NFSU2_TR(0x72a381);
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
B72a384:{NFSU2_TR(0x72a384);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B72a38a:L72a38a:{c.instructions+=1;NFSU2_TR(0x72a38a);
__builtin_memmove((R+0),(R+28),4);
}
B72a38c:L72a38c:{c.instructions+=5;NFSU2_TR(0x72a38c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72a38d:{NFSU2_TR(0x72a38d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72a38e:{NFSU2_TR(0x72a38e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72a38f:{NFSU2_TR(0x72a38f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72a390:{NFSU2_TR(0x72a390);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a391:L72a391:{c.instructions+=4;NFSU2_TR(0x72a391);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a395:{NFSU2_TR(0x72a395);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a398:{NFSU2_TR(0x72a398);
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
B72a39a:{NFSU2_TR(0x72a39a);
if(r1(R+518)){{goto L72a3a3;}}
}
B72a39c:L72a39c:{c.instructions+=2;NFSU2_TR(0x72a39c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a39d:{NFSU2_TR(0x72a39d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a3a2ull));
TAIL_STATIC(0x724894u,724);
}
B72a3a2:L72a3a2:{c.instructions+=1;NFSU2_TR(0x72a3a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72a3a3:L72a3a3:{c.instructions+=1;NFSU2_TR(0x72a3a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a3a4:L72a3a4:{c.instructions+=15;NFSU2_TR(0x72a3a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a3a8:{NFSU2_TR(0x72a3a8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72a3aa:{NFSU2_TR(0x72a3aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a3ad:{NFSU2_TR(0x72a3ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a3b0:{NFSU2_TR(0x72a3b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a3b3:{NFSU2_TR(0x72a3b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a3b6:{NFSU2_TR(0x72a3b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1bull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72a3b9:{NFSU2_TR(0x72a3b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x72a391ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72a3c0:{NFSU2_TR(0x72a3c0);
u8 U[4];
w4(U+0,u32(0x72a2f3ull));
s4(u32(r4(R+0)),r4(U+0));
}
B72a3c6:{NFSU2_TR(0x72a3c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a3c9:{NFSU2_TR(0x72a3c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a3cc:{NFSU2_TR(0x72a3cc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72a3d0:{NFSU2_TR(0x72a3d0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x26ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B72a3d6:{NFSU2_TR(0x72a3d6);
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
B72a3d8:{NFSU2_TR(0x72a3d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a3d9:L72a3d9:{c.instructions+=8;NFSU2_TR(0x72a3d9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a3da:{NFSU2_TR(0x72a3da);
__builtin_memmove((R+20),(R+16),4);
}
B72a3dc:{NFSU2_TR(0x72a3dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a3dd:{NFSU2_TR(0x72a3dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72a3e0:{NFSU2_TR(0x72a3e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a3e1:{NFSU2_TR(0x72a3e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72a3e4:{NFSU2_TR(0x72a3e4);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72a3e7:{NFSU2_TR(0x72a3e7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72a409;}}
}
B72a3e9:L72a3e9:{c.instructions+=3;NFSU2_TR(0x72a3e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a3ec:{NFSU2_TR(0x72a3ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72a3ee:{NFSU2_TR(0x72a3ee);
if(r1(R+518)){{goto L72a3f7;}}
}
B72a3f0:L72a3f0:{c.instructions+=2;NFSU2_TR(0x72a3f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a3f1:{NFSU2_TR(0x72a3f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a3f6ull));
TAIL_STATIC(0x724894u,724);
}
B72a3f6:L72a3f6:{c.instructions+=1;NFSU2_TR(0x72a3f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72a3f7:L72a3f7:{c.instructions+=5;NFSU2_TR(0x72a3f7);
__builtin_memmove((R+0),(R+28),4);
}
B72a3f9:{NFSU2_TR(0x72a3f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72a3fc:{NFSU2_TR(0x72a3fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a3fd:{NFSU2_TR(0x72a3fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a400:{NFSU2_TR(0x72a400);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a405ull));
TAIL_STATIC(0x724792u,724);
}
B72a405:L72a405:{c.instructions+=2;NFSU2_TR(0x72a405);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72a406:{NFSU2_TR(0x72a406);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a409:L72a409:{c.instructions+=7;NFSU2_TR(0x72a409);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a40c:{NFSU2_TR(0x72a40c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a40e:{NFSU2_TR(0x72a40e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a411:{NFSU2_TR(0x72a411);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a414:{NFSU2_TR(0x72a414);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a415:{NFSU2_TR(0x72a415);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a416:{NFSU2_TR(0x72a416);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a418ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B72a418:L72a418:{c.instructions+=3;NFSU2_TR(0x72a418);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B72a41b:{NFSU2_TR(0x72a41b);
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
B72a41d:{NFSU2_TR(0x72a41d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72a452;}}
}
B72a41f:L72a41f:{c.instructions+=7;NFSU2_TR(0x72a41f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a422:{NFSU2_TR(0x72a422);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a424:{NFSU2_TR(0x72a424);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a427:{NFSU2_TR(0x72a427);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a42a:{NFSU2_TR(0x72a42a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a42b:{NFSU2_TR(0x72a42b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a42c:{NFSU2_TR(0x72a42c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a42eull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B72a42e:L72a42e:{c.instructions+=3;NFSU2_TR(0x72a42e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B72a431:{NFSU2_TR(0x72a431);
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
B72a433:{NFSU2_TR(0x72a433);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72a452;}}
}
B72a435:L72a435:{c.instructions+=3;NFSU2_TR(0x72a435);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72a437:{NFSU2_TR(0x72a437);
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
B72a439:{NFSU2_TR(0x72a439);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72a450;}}
}
B72a43b:L72a43b:{c.instructions+=9;NFSU2_TR(0x72a43b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72a43e:{NFSU2_TR(0x72a43e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a441:{NFSU2_TR(0x72a441);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72a444:{NFSU2_TR(0x72a444);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72a447:{NFSU2_TR(0x72a447);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72a449:{NFSU2_TR(0x72a449);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72a44a:{NFSU2_TR(0x72a44a);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B72a44c:{NFSU2_TR(0x72a44c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a44e:{NFSU2_TR(0x72a44e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72a43bu);}goto L72a43b;}}
}
B72a450:L72a450:{c.instructions+=1;NFSU2_TR(0x72a450);
__builtin_memmove((R+0),(R+28),4);
}
B72a452:L72a452:{c.instructions+=4;NFSU2_TR(0x72a452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72a453:{NFSU2_TR(0x72a453);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72a454:{NFSU2_TR(0x72a454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72a455:{NFSU2_TR(0x72a455);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a456:L72a456:{c.instructions+=13;NFSU2_TR(0x72a456);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a45a:{NFSU2_TR(0x72a45a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72a45c:{NFSU2_TR(0x72a45c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a45f:{NFSU2_TR(0x72a45f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a462:{NFSU2_TR(0x72a462);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a465:{NFSU2_TR(0x72a465);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a468:{NFSU2_TR(0x72a468);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1bull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72a46b:{NFSU2_TR(0x72a46b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x72a391ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72a472:{NFSU2_TR(0x72a472);
u8 U[4];
w4(U+0,u32(0x72a3d9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B72a478:{NFSU2_TR(0x72a478);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a47b:{NFSU2_TR(0x72a47b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a47e:{NFSU2_TR(0x72a47e);
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
B72a480:{NFSU2_TR(0x72a480);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a481:L72a481:{c.instructions+=15;NFSU2_TR(0x72a481);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a482:{NFSU2_TR(0x72a482);
__builtin_memmove((R+20),(R+16),4);
}
B72a484:{NFSU2_TR(0x72a484);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B72a487:{NFSU2_TR(0x72a487);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a48a:{NFSU2_TR(0x72a48a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72a48d:{NFSU2_TR(0x72a48d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a48e:{NFSU2_TR(0x72a48e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72a491:{NFSU2_TR(0x72a491);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B72a494:{NFSU2_TR(0x72a494);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B72a496:{NFSU2_TR(0x72a496);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a499:{NFSU2_TR(0x72a499);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a49a:{NFSU2_TR(0x72a49a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72a49d:{NFSU2_TR(0x72a49d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a4a0:{NFSU2_TR(0x72a4a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72a4a3:{NFSU2_TR(0x72a4a3);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L72a53d;}}
}
B72a4a9:L72a4a9:{c.instructions+=6;NFSU2_TR(0x72a4a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72a4ac:{NFSU2_TR(0x72a4ac);
{u32 ea_=u32(u32(8153652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72a4b2:{NFSU2_TR(0x72a4b2);
__builtin_memmove((R+28),(R+24),4);
}
B72a4b4:{NFSU2_TR(0x72a4b4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B72a4b7:{NFSU2_TR(0x72a4b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B72a4ba:{NFSU2_TR(0x72a4ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a4bb:L72a4bb:{c.instructions+=47;NFSU2_TR(0x72a4bb);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72a4be:{NFSU2_TR(0x72a4be);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a4c0:{NFSU2_TR(0x72a4c0);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72a4c3:{NFSU2_TR(0x72a4c3);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B72a4c5:{NFSU2_TR(0x72a4c5);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72a4c8:{NFSU2_TR(0x72a4c8);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a4cb:{NFSU2_TR(0x72a4cb);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72a4ce:{NFSU2_TR(0x72a4ce);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B72a4d0:{NFSU2_TR(0x72a4d0);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72a4d3:{NFSU2_TR(0x72a4d3);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a4d6:{NFSU2_TR(0x72a4d6);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72a4d8:{NFSU2_TR(0x72a4d8);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B72a4da:{NFSU2_TR(0x72a4da);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a4dd:{NFSU2_TR(0x72a4dd);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72a4e0:{NFSU2_TR(0x72a4e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72a4e3:{NFSU2_TR(0x72a4e3);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a4e6:{NFSU2_TR(0x72a4e6);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72a4e9:{NFSU2_TR(0x72a4e9);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B72a4eb:{NFSU2_TR(0x72a4eb);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a4ee:{NFSU2_TR(0x72a4ee);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72a4f0:{NFSU2_TR(0x72a4f0);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a4f3:{NFSU2_TR(0x72a4f3);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72a4f5:{NFSU2_TR(0x72a4f5);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a4f7:{NFSU2_TR(0x72a4f7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B72a4fa:{NFSU2_TR(0x72a4fa);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72a4fc:{NFSU2_TR(0x72a4fc);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a4ff:{NFSU2_TR(0x72a4ff);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72a502:{NFSU2_TR(0x72a502);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a505:{NFSU2_TR(0x72a505);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72a508:{NFSU2_TR(0x72a508);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a50b:{NFSU2_TR(0x72a50b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72a50e:{NFSU2_TR(0x72a50e);
{u32 ea_=u32(r4(R+8)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a511:{NFSU2_TR(0x72a511);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B72a514:{NFSU2_TR(0x72a514);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72a517:{NFSU2_TR(0x72a517);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a51a:{NFSU2_TR(0x72a51a);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72a51d:{NFSU2_TR(0x72a51d);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a520:{NFSU2_TR(0x72a520);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a523:{NFSU2_TR(0x72a523);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72a526:{NFSU2_TR(0x72a526);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72a528:{NFSU2_TR(0x72a528);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a52a:{NFSU2_TR(0x72a52a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a52d:{NFSU2_TR(0x72a52d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B72a530:{NFSU2_TR(0x72a530);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72a533:{NFSU2_TR(0x72a533);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a536:{NFSU2_TR(0x72a536);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72a538:{NFSU2_TR(0x72a538);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72a4bbu);}goto L72a4bb;}}
}
B72a53a:L72a53a:{c.instructions+=2;NFSU2_TR(0x72a53a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72a53c:{NFSU2_TR(0x72a53c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72a53d:L72a53d:{c.instructions+=4;NFSU2_TR(0x72a53d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72a53e:{NFSU2_TR(0x72a53e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72a53f:{NFSU2_TR(0x72a53f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72a540:{NFSU2_TR(0x72a540);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a541:L72a541:{c.instructions+=10;NFSU2_TR(0x72a541);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a542:{NFSU2_TR(0x72a542);
__builtin_memmove((R+20),(R+16),4);
}
B72a544:{NFSU2_TR(0x72a544);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a545:{NFSU2_TR(0x72a545);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a546:{NFSU2_TR(0x72a546);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72a549:{NFSU2_TR(0x72a549);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a54c:{NFSU2_TR(0x72a54c);
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
B72a54e:{NFSU2_TR(0x72a54e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a54f:{NFSU2_TR(0x72a54f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72a552:{NFSU2_TR(0x72a552);
if(r1(R+518)){{goto L72a56a;}}
}
B72a554:L72a554:{c.instructions+=7;NFSU2_TR(0x72a554);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72a558:{NFSU2_TR(0x72a558);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a559:{NFSU2_TR(0x72a559);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a55a:{NFSU2_TR(0x72a55a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a55d:{NFSU2_TR(0x72a55d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a560:{NFSU2_TR(0x72a560);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a561:{NFSU2_TR(0x72a561);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a563ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B72a563:L72a563:{c.instructions+=3;NFSU2_TR(0x72a563);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B72a566:{NFSU2_TR(0x72a566);
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
B72a568:{NFSU2_TR(0x72a568);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72a5b6;}}
}
B72a56a:L72a56a:{c.instructions+=6;NFSU2_TR(0x72a56a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a56d:{NFSU2_TR(0x72a56d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a56e:{NFSU2_TR(0x72a56e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72a571:{NFSU2_TR(0x72a571);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a574:{NFSU2_TR(0x72a574);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a577:{NFSU2_TR(0x72a577);
{goto L72a5ae;}
}
B72a579:L72a579:{c.instructions+=3;NFSU2_TR(0x72a579);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72a57c:{NFSU2_TR(0x72a57c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72a57f:{NFSU2_TR(0x72a57f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72a585;}}
}
B72a581:L72a581:{c.instructions+=1;NFSU2_TR(0x72a581);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72a585:L72a585:{c.instructions+=3;NFSU2_TR(0x72a585);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B72a588:{NFSU2_TR(0x72a588);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72a58a:{NFSU2_TR(0x72a58a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72a58e;}}
}
B72a58c:L72a58c:{c.instructions+=1;NFSU2_TR(0x72a58c);
__builtin_memmove((R+28),(R+12),4);
}
B72a58e:L72a58e:{c.instructions+=5;NFSU2_TR(0x72a58e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a591:{NFSU2_TR(0x72a591);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a594:{NFSU2_TR(0x72a594);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a595:{NFSU2_TR(0x72a595);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a596:{NFSU2_TR(0x72a596);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a59bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72a481u);}goto L72a481;}
}
B72a59b:L72a59b:{c.instructions+=7;NFSU2_TR(0x72a59b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B72a59e:{NFSU2_TR(0x72a59e);
__builtin_memmove((R+0),(R+28),4);
}
B72a5a0:{NFSU2_TR(0x72a5a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72a5a3:{NFSU2_TR(0x72a5a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B72a5a6:{NFSU2_TR(0x72a5a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B72a5a9:{NFSU2_TR(0x72a5a9);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B72a5ab:{NFSU2_TR(0x72a5ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B72a5ae:L72a5ae:{c.instructions+=2;NFSU2_TR(0x72a5ae);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72a5b0:{NFSU2_TR(0x72a5b0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72a579u);}goto L72a579;}}
}
B72a5b2:L72a5b2:{c.instructions+=2;NFSU2_TR(0x72a5b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a5b5:{NFSU2_TR(0x72a5b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72a5b6:L72a5b6:{c.instructions+=4;NFSU2_TR(0x72a5b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72a5b7:{NFSU2_TR(0x72a5b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72a5b8:{NFSU2_TR(0x72a5b8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72a5b9:{NFSU2_TR(0x72a5b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a5ba:L72a5ba:{c.instructions+=5;NFSU2_TR(0x72a5ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a5bb:{NFSU2_TR(0x72a5bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72a5bf:{NFSU2_TR(0x72a5bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a5c2:{NFSU2_TR(0x72a5c2);
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
B72a5c4:{NFSU2_TR(0x72a5c4);
if(r1(R+518)){{goto L72a5d5;}}
}
B72a5c6:L72a5c6:{c.instructions+=2;NFSU2_TR(0x72a5c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a5c7:{NFSU2_TR(0x72a5c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a5ccull));
TAIL_STATIC(0x724894u,724);
}
B72a5cc:L72a5cc:{c.instructions+=3;NFSU2_TR(0x72a5cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72a5d0:{NFSU2_TR(0x72a5d0);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
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
B72a5d4:{NFSU2_TR(0x72a5d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72a5d5:L72a5d5:{c.instructions+=2;NFSU2_TR(0x72a5d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72a5d6:{NFSU2_TR(0x72a5d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a5d7:L72a5d7:{c.instructions+=13;NFSU2_TR(0x72a5d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a5db:{NFSU2_TR(0x72a5db);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72a5dd:{NFSU2_TR(0x72a5dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a5e0:{NFSU2_TR(0x72a5e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a5e3:{NFSU2_TR(0x72a5e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a5e6:{NFSU2_TR(0x72a5e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a5e9:{NFSU2_TR(0x72a5e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1bull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72a5ec:{NFSU2_TR(0x72a5ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x72a5baull));
s4(u32(r4(U+0)),r4(U+4));
}
B72a5f3:{NFSU2_TR(0x72a5f3);
u8 U[4];
w4(U+0,u32(0x72a541ull));
s4(u32(r4(R+0)),r4(U+0));
}
B72a5f9:{NFSU2_TR(0x72a5f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a5fc:{NFSU2_TR(0x72a5fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a5ff:{NFSU2_TR(0x72a5ff);
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
B72a601:{NFSU2_TR(0x72a601);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a602:L72a602:{c.instructions+=16;NFSU2_TR(0x72a602);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a603:{NFSU2_TR(0x72a603);
__builtin_memmove((R+20),(R+16),4);
}
B72a605:{NFSU2_TR(0x72a605);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a608:{NFSU2_TR(0x72a608);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B72a60a:{NFSU2_TR(0x72a60a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a60b:{NFSU2_TR(0x72a60b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72a60e:{NFSU2_TR(0x72a60e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a60f:{NFSU2_TR(0x72a60f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72a612:{NFSU2_TR(0x72a612);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a613:{NFSU2_TR(0x72a613);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72a616:{NFSU2_TR(0x72a616);
w4(R+4,sar<u32>(r4(R+4),u64(u32(0x1ull))));
}
B72a618:{NFSU2_TR(0x72a618);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a619:{NFSU2_TR(0x72a619);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a61c:{NFSU2_TR(0x72a61c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B72a61f:{NFSU2_TR(0x72a61f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B72a622:{NFSU2_TR(0x72a622);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a627ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72a5bau);}goto L72a5ba;}
}
B72a627:L72a627:{c.instructions+=8;NFSU2_TR(0x72a627);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72a62a:{NFSU2_TR(0x72a62a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a62b:{NFSU2_TR(0x72a62b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a62c:{NFSU2_TR(0x72a62c);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a632:{NFSU2_TR(0x72a632);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B72a635:{NFSU2_TR(0x72a635);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B72a637:{NFSU2_TR(0x72a637);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a63a:{NFSU2_TR(0x72a63a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a63full));
TAIL_STATIC(0x72d567u,72d);
}
B72a63f:L72a63f:{c.instructions+=6;NFSU2_TR(0x72a63f);
__builtin_memmove((R+28),(R+0),4);
}
B72a641:{NFSU2_TR(0x72a641);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a644:{NFSU2_TR(0x72a644);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B72a647:{NFSU2_TR(0x72a647);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72a64a:{NFSU2_TR(0x72a64a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a64b:{NFSU2_TR(0x72a64b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a650ull));
TAIL_STATIC(0x724792u,724);
}
B72a650:L72a650:{c.instructions+=8;NFSU2_TR(0x72a650);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a653:{NFSU2_TR(0x72a653);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
}
B72a656:{NFSU2_TR(0x72a656);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72a659:{NFSU2_TR(0x72a659);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72a65c:{NFSU2_TR(0x72a65c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a65d:{NFSU2_TR(0x72a65d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a65e:{NFSU2_TR(0x72a65e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a661:{NFSU2_TR(0x72a661);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a666ull));
TAIL_STATIC(0x727030u,727);
}
B72a666:L72a666:{c.instructions+=7;NFSU2_TR(0x72a666);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B72a669:{NFSU2_TR(0x72a669);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
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
B72a66d:{NFSU2_TR(0x72a66d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72a66e:{NFSU2_TR(0x72a66e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72a66f:{NFSU2_TR(0x72a66f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72a670:{NFSU2_TR(0x72a670);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72a671:{NFSU2_TR(0x72a671);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a672:L72a672:{c.instructions+=8;NFSU2_TR(0x72a672);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a673:{NFSU2_TR(0x72a673);
__builtin_memmove((R+20),(R+16),4);
}
B72a675:{NFSU2_TR(0x72a675);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a676:{NFSU2_TR(0x72a676);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72a679:{NFSU2_TR(0x72a679);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B72a67d:{NFSU2_TR(0x72a67d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a67e:{NFSU2_TR(0x72a67e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72a681:{NFSU2_TR(0x72a681);
if(r1(R+518)){{goto L72a69c;}}
}
B72a683:L72a683:{c.instructions+=8;NFSU2_TR(0x72a683);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72a687:{NFSU2_TR(0x72a687);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a68a:{NFSU2_TR(0x72a68a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a68b:{NFSU2_TR(0x72a68b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a68e:{NFSU2_TR(0x72a68e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a691:{NFSU2_TR(0x72a691);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a692:{NFSU2_TR(0x72a692);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a693:{NFSU2_TR(0x72a693);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a695ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B72a695:L72a695:{c.instructions+=3;NFSU2_TR(0x72a695);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B72a698:{NFSU2_TR(0x72a698);
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
B72a69a:{NFSU2_TR(0x72a69a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72a6ba;}}
}
B72a69c:L72a69c:{c.instructions+=2;NFSU2_TR(0x72a69c);
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
B72a69e:{NFSU2_TR(0x72a69e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72a6b8;}}
}
B72a6a0:L72a6a0:{c.instructions+=4;NFSU2_TR(0x72a6a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a6a3:{NFSU2_TR(0x72a6a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72a6a6:{NFSU2_TR(0x72a6a6);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B72a6a8:{NFSU2_TR(0x72a6a8);
__builtin_memmove((R+8),(R+28),4);
}
B72a6aa:L72a6aa:{c.instructions+=6;NFSU2_TR(0x72a6aa);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72a6ad:{NFSU2_TR(0x72a6ad);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a6b0:{NFSU2_TR(0x72a6b0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a6b2:{NFSU2_TR(0x72a6b2);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B72a6b5:{NFSU2_TR(0x72a6b5);
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
B72a6b6:{NFSU2_TR(0x72a6b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72a6aau);}goto L72a6aa;}}
}
B72a6b8:L72a6b8:{c.instructions+=1;NFSU2_TR(0x72a6b8);
__builtin_memmove((R+0),(R+28),4);
}
B72a6ba:L72a6ba:{c.instructions+=4;NFSU2_TR(0x72a6ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72a6bb:{NFSU2_TR(0x72a6bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72a6bc:{NFSU2_TR(0x72a6bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72a6bd:{NFSU2_TR(0x72a6bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a6be:L72a6be:{c.instructions+=13;NFSU2_TR(0x72a6be);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a6c2:{NFSU2_TR(0x72a6c2);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72a6c4:{NFSU2_TR(0x72a6c4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72a6c6:{NFSU2_TR(0x72a6c6);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a6c9:{NFSU2_TR(0x72a6c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a6cc:{NFSU2_TR(0x72a6cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a6cf:{NFSU2_TR(0x72a6cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a6d2:{NFSU2_TR(0x72a6d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a6d5:{NFSU2_TR(0x72a6d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1bull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72a6d8:{NFSU2_TR(0x72a6d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a6db:{NFSU2_TR(0x72a6db);
u8 U[4];
w4(U+0,u32(0x72a672ull));
s4(u32(r4(R+0)),r4(U+0));
}
B72a6e1:{NFSU2_TR(0x72a6e1);
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
B72a6e3:{NFSU2_TR(0x72a6e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a6e4:L72a6e4:{c.instructions+=6;NFSU2_TR(0x72a6e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a6e8:{NFSU2_TR(0x72a6e8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72a6ea:{NFSU2_TR(0x72a6ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a6ee:{NFSU2_TR(0x72a6ee);
{u32 ea_=u32(u32(7997184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a6f4:{NFSU2_TR(0x72a6f4);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a6f7:{NFSU2_TR(0x72a6f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a6f8:L72a6f8:{c.instructions+=12;NFSU2_TR(0x72a6f8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a6f9:{NFSU2_TR(0x72a6f9);
__builtin_memmove((R+20),(R+16),4);
}
B72a6fb:{NFSU2_TR(0x72a6fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72a6fe:{NFSU2_TR(0x72a6fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72a701:{NFSU2_TR(0x72a701);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a704:{NFSU2_TR(0x72a704);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72a707:{NFSU2_TR(0x72a707);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a708:{NFSU2_TR(0x72a708);
{u32 ea_=u32(u32(8153656u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a70e:{NFSU2_TR(0x72a70e);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B72a711:{NFSU2_TR(0x72a711);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72a713:{NFSU2_TR(0x72a713);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72a716:{NFSU2_TR(0x72a716);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72a784;}}
}
B72a718:L72a718:{c.instructions+=5;NFSU2_TR(0x72a718);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72a71b:{NFSU2_TR(0x72a71b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B72a721:{NFSU2_TR(0x72a721);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72a723:{NFSU2_TR(0x72a723);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72a726:{NFSU2_TR(0x72a726);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72a784;}}
}
B72a728:L72a728:{c.instructions+=7;NFSU2_TR(0x72a728);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B72a72a:{NFSU2_TR(0x72a72a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a72d:{NFSU2_TR(0x72a72d);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72a730:{NFSU2_TR(0x72a730);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B72a733:{NFSU2_TR(0x72a733);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72a735:{NFSU2_TR(0x72a735);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72a738:{NFSU2_TR(0x72a738);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72a784;}}
}
B72a73a:L72a73a:{c.instructions+=3;NFSU2_TR(0x72a73a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72a73d:{NFSU2_TR(0x72a73d);
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
B72a73f:{NFSU2_TR(0x72a73f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72a79e;}}
}
B72a741:L72a741:{c.instructions+=4;NFSU2_TR(0x72a741);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a744:{NFSU2_TR(0x72a744);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72a747:{NFSU2_TR(0x72a747);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B72a749:{NFSU2_TR(0x72a749);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a74a:L72a74a:{c.instructions+=20;NFSU2_TR(0x72a74a);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72a74d:{NFSU2_TR(0x72a74d);
{u32 ea_=u32(u32(8153652u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72a753:{NFSU2_TR(0x72a753);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a756:{NFSU2_TR(0x72a756);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72a759:{NFSU2_TR(0x72a759);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a75c:{NFSU2_TR(0x72a75c);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B72a75e:{NFSU2_TR(0x72a75e);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a761:{NFSU2_TR(0x72a761);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72a763:{NFSU2_TR(0x72a763);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72a766:{NFSU2_TR(0x72a766);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a769:{NFSU2_TR(0x72a769);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a76c:{NFSU2_TR(0x72a76c);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72a76e:{NFSU2_TR(0x72a76e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a770:{NFSU2_TR(0x72a770);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72a773:{NFSU2_TR(0x72a773);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a776:{NFSU2_TR(0x72a776);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B72a778:{NFSU2_TR(0x72a778);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B72a77b:{NFSU2_TR(0x72a77b);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72a77c:{NFSU2_TR(0x72a77c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a77f:{NFSU2_TR(0x72a77f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72a74au);}goto L72a74a;}}
}
B72a781:L72a781:{c.instructions+=2;NFSU2_TR(0x72a781);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72a782:{NFSU2_TR(0x72a782);
{goto L72a79e;}
}
B72a784:L72a784:{c.instructions+=3;NFSU2_TR(0x72a784);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72a787:{NFSU2_TR(0x72a787);
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
B72a789:{NFSU2_TR(0x72a789);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72a79e;}}
}
B72a78b:L72a78b:{c.instructions+=3;NFSU2_TR(0x72a78b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a78e:{NFSU2_TR(0x72a78e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72a791:{NFSU2_TR(0x72a791);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B72a793:L72a793:{c.instructions+=5;NFSU2_TR(0x72a793);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72a796:{NFSU2_TR(0x72a796);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a798:{NFSU2_TR(0x72a798);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B72a79b:{NFSU2_TR(0x72a79b);
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
B72a79c:{NFSU2_TR(0x72a79c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72a793u);}goto L72a793;}}
}
B72a79e:L72a79e:{c.instructions+=3;NFSU2_TR(0x72a79e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72a79f:{NFSU2_TR(0x72a79f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72a7a0:{NFSU2_TR(0x72a7a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a7a1:L72a7a1:{c.instructions+=7;NFSU2_TR(0x72a7a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a7a2:{NFSU2_TR(0x72a7a2);
__builtin_memmove((R+20),(R+16),4);
}
B72a7a4:{NFSU2_TR(0x72a7a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a7a5:{NFSU2_TR(0x72a7a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72a7a8:{NFSU2_TR(0x72a7a8);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B72a7ac:{NFSU2_TR(0x72a7ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a7ad:{NFSU2_TR(0x72a7ad);
if(r1(R+518)){{goto L72a7ce;}}
}
B72a7af:L72a7af:{c.instructions+=8;NFSU2_TR(0x72a7af);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72a7b3:{NFSU2_TR(0x72a7b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a7b6:{NFSU2_TR(0x72a7b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a7b7:{NFSU2_TR(0x72a7b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a7ba:{NFSU2_TR(0x72a7ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a7bd:{NFSU2_TR(0x72a7bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a7c0:{NFSU2_TR(0x72a7c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a7c1:{NFSU2_TR(0x72a7c1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a7c3ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B72a7c3:L72a7c3:{c.instructions+=4;NFSU2_TR(0x72a7c3);
__builtin_memmove((R+28),(R+0),4);
}
B72a7c5:{NFSU2_TR(0x72a7c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B72a7c8:{NFSU2_TR(0x72a7c8);
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
B72a7ca:{NFSU2_TR(0x72a7ca);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L72a7d1;}}
}
B72a7cc:L72a7cc:{c.instructions+=1;NFSU2_TR(0x72a7cc);
{goto L72a7e1;}
}
B72a7ce:L72a7ce:{c.instructions+=1;NFSU2_TR(0x72a7ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72a7d1:L72a7d1:{c.instructions+=5;NFSU2_TR(0x72a7d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a7d4:{NFSU2_TR(0x72a7d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a7d7:{NFSU2_TR(0x72a7d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a7d8:{NFSU2_TR(0x72a7d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a7d9:{NFSU2_TR(0x72a7d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a7deull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72a6f8u);}goto L72a6f8;}
}
B72a7de:L72a7de:{c.instructions+=1;NFSU2_TR(0x72a7de);
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
B72a7e1:L72a7e1:{c.instructions+=5;NFSU2_TR(0x72a7e1);
__builtin_memmove((R+0),(R+28),4);
}
B72a7e3:{NFSU2_TR(0x72a7e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72a7e4:{NFSU2_TR(0x72a7e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72a7e5:{NFSU2_TR(0x72a7e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72a7e6:{NFSU2_TR(0x72a7e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a7e7:L72a7e7:{c.instructions+=17;NFSU2_TR(0x72a7e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a7eb:{NFSU2_TR(0x72a7eb);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72a7ed:{NFSU2_TR(0x72a7ed);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a7f0:{NFSU2_TR(0x72a7f0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72a7f2:{NFSU2_TR(0x72a7f2);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72a7f4:{NFSU2_TR(0x72a7f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a7f7:{NFSU2_TR(0x72a7f7);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a7fa:{NFSU2_TR(0x72a7fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a7fd:{NFSU2_TR(0x72a7fd);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72a7ff:{NFSU2_TR(0x72a7ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a802:{NFSU2_TR(0x72a802);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a805:{NFSU2_TR(0x72a805);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a808:{NFSU2_TR(0x72a808);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1bull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72a80b:{NFSU2_TR(0x72a80b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a80e:{NFSU2_TR(0x72a80e);
u8 U[4];
w4(U+0,u32(0x72a7a1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B72a814:{NFSU2_TR(0x72a814);
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
B72a816:{NFSU2_TR(0x72a816);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a817:L72a817:{c.instructions+=41;NFSU2_TR(0x72a817);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a818:{NFSU2_TR(0x72a818);
__builtin_memmove((R+20),(R+16),4);
}
B72a81a:{NFSU2_TR(0x72a81a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B72a81d:{NFSU2_TR(0x72a81d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a820:{NFSU2_TR(0x72a820);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72a823:{NFSU2_TR(0x72a823);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B72a825:{NFSU2_TR(0x72a825);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72a828:{NFSU2_TR(0x72a828);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B72a82b:{NFSU2_TR(0x72a82b);
{u32 ea_=u32(u32(7997184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a831:{NFSU2_TR(0x72a831);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a834:{NFSU2_TR(0x72a834);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72a837:{NFSU2_TR(0x72a837);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a838:{NFSU2_TR(0x72a838);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72a83b:{NFSU2_TR(0x72a83b);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a83e:{NFSU2_TR(0x72a83e);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72a841:{NFSU2_TR(0x72a841);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B72a844:{NFSU2_TR(0x72a844);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a847:{NFSU2_TR(0x72a847);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B72a84a:{NFSU2_TR(0x72a84a);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B72a84d:{NFSU2_TR(0x72a84d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a850:{NFSU2_TR(0x72a850);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72a853:{NFSU2_TR(0x72a853);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a854:{NFSU2_TR(0x72a854);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a857:{NFSU2_TR(0x72a857);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B72a85a:{NFSU2_TR(0x72a85a);
{u32 ea_=u32(u32(7892376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a860:{NFSU2_TR(0x72a860);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72a863:{NFSU2_TR(0x72a863);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B72a865:{NFSU2_TR(0x72a865);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B72a867:{NFSU2_TR(0x72a867);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B72a86d:{NFSU2_TR(0x72a86d);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B72a870:{NFSU2_TR(0x72a870);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72a872:{NFSU2_TR(0x72a872);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72a874:{NFSU2_TR(0x72a874);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a877:{NFSU2_TR(0x72a877);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72a879:{NFSU2_TR(0x72a879);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72a87b:{NFSU2_TR(0x72a87b);
{u32 ea_=u32(u32(7892380u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a881:{NFSU2_TR(0x72a881);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B72a883:{NFSU2_TR(0x72a883);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a886:{NFSU2_TR(0x72a886);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72a888:{NFSU2_TR(0x72a888);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72a88a:{NFSU2_TR(0x72a88a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a88full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72a032u);}goto L72a032;}
}
B72a88f:L72a88f:{c.instructions+=13;NFSU2_TR(0x72a88f);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72a892:{NFSU2_TR(0x72a892);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B72a894:{NFSU2_TR(0x72a894);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72a897:{NFSU2_TR(0x72a897);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72a89d:{NFSU2_TR(0x72a89d);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B72a89f:{NFSU2_TR(0x72a89f);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B72a8a1:{NFSU2_TR(0x72a8a1);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B72a8a4:{NFSU2_TR(0x72a8a4);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72a8a6:{NFSU2_TR(0x72a8a6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72a8a8:{NFSU2_TR(0x72a8a8);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B72a8aa:{NFSU2_TR(0x72a8aa);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a8ad:{NFSU2_TR(0x72a8ad);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72a8af:{NFSU2_TR(0x72a8af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a8b4ull));
TAIL_STATIC(0x72d581u,72d);
}
B72a8b4:L72a8b4:{c.instructions+=9;NFSU2_TR(0x72a8b4);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B72a8b6:{NFSU2_TR(0x72a8b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72a8b7:{NFSU2_TR(0x72a8b7);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72a8ba:{NFSU2_TR(0x72a8ba);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B72a8bc:{NFSU2_TR(0x72a8bc);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72a8bf:{NFSU2_TR(0x72a8bf);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a8c2:{NFSU2_TR(0x72a8c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72a8c3:{NFSU2_TR(0x72a8c3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72a8c4:{NFSU2_TR(0x72a8c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a8c5:L72a8c5:{c.instructions+=7;NFSU2_TR(0x72a8c5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a8c6:{NFSU2_TR(0x72a8c6);
__builtin_memmove((R+20),(R+16),4);
}
B72a8c8:{NFSU2_TR(0x72a8c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a8c9:{NFSU2_TR(0x72a8c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72a8cc:{NFSU2_TR(0x72a8cc);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B72a8d0:{NFSU2_TR(0x72a8d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a8d1:{NFSU2_TR(0x72a8d1);
if(r1(R+518)){{goto L72a8f2;}}
}
B72a8d3:L72a8d3:{c.instructions+=8;NFSU2_TR(0x72a8d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72a8d7:{NFSU2_TR(0x72a8d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a8da:{NFSU2_TR(0x72a8da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a8db:{NFSU2_TR(0x72a8db);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a8de:{NFSU2_TR(0x72a8de);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a8e1:{NFSU2_TR(0x72a8e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a8e4:{NFSU2_TR(0x72a8e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a8e5:{NFSU2_TR(0x72a8e5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a8e7ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B72a8e7:L72a8e7:{c.instructions+=4;NFSU2_TR(0x72a8e7);
__builtin_memmove((R+28),(R+0),4);
}
B72a8e9:{NFSU2_TR(0x72a8e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B72a8ec:{NFSU2_TR(0x72a8ec);
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
B72a8ee:{NFSU2_TR(0x72a8ee);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L72a8f5;}}
}
B72a8f0:L72a8f0:{c.instructions+=1;NFSU2_TR(0x72a8f0);
{goto L72a908;}
}
B72a8f2:L72a8f2:{c.instructions+=1;NFSU2_TR(0x72a8f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72a8f5:L72a8f5:{c.instructions+=6;NFSU2_TR(0x72a8f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a8f8:{NFSU2_TR(0x72a8f8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
}
B72a8fb:{NFSU2_TR(0x72a8fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a8fe:{NFSU2_TR(0x72a8fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a8ff:{NFSU2_TR(0x72a8ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a900:{NFSU2_TR(0x72a900);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a905ull));
TAIL_STATIC(0x72d616u,72d);
}
B72a905:L72a905:{c.instructions+=1;NFSU2_TR(0x72a905);
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
B72a908:L72a908:{c.instructions+=5;NFSU2_TR(0x72a908);
__builtin_memmove((R+0),(R+28),4);
}
B72a90a:{NFSU2_TR(0x72a90a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72a90b:{NFSU2_TR(0x72a90b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72a90c:{NFSU2_TR(0x72a90c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72a90d:{NFSU2_TR(0x72a90d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a90e:L72a90e:{c.instructions+=26;NFSU2_TR(0x72a90e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a90f:{NFSU2_TR(0x72a90f);
__builtin_memmove((R+20),(R+16),4);
}
B72a911:{NFSU2_TR(0x72a911);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a912:{NFSU2_TR(0x72a912);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a915:{NFSU2_TR(0x72a915);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72a918:{NFSU2_TR(0x72a918);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B72a91b:{NFSU2_TR(0x72a91b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a91e:{NFSU2_TR(0x72a91e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72a921:{NFSU2_TR(0x72a921);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72a923:{NFSU2_TR(0x72a923);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B72a926:{NFSU2_TR(0x72a926);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a929:{NFSU2_TR(0x72a929);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72a92c:{NFSU2_TR(0x72a92c);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B72a92f:{NFSU2_TR(0x72a92f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a932:{NFSU2_TR(0x72a932);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72a935:{NFSU2_TR(0x72a935);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a938:{NFSU2_TR(0x72a938);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B72a93b:{NFSU2_TR(0x72a93b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a93d:{NFSU2_TR(0x72a93d);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B72a93f:{NFSU2_TR(0x72a93f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a940:{NFSU2_TR(0x72a940);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a943:{NFSU2_TR(0x72a943);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72a946:{NFSU2_TR(0x72a946);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B72a948:{NFSU2_TR(0x72a948);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a94b:{NFSU2_TR(0x72a94b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72a94d:{NFSU2_TR(0x72a94d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a952ull));
TAIL_STATIC(0x72d697u,72d);
}
B72a952:L72a952:{c.instructions+=4;NFSU2_TR(0x72a952);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72a953:{NFSU2_TR(0x72a953);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72a954:{NFSU2_TR(0x72a954);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72a955:{NFSU2_TR(0x72a955);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a956:L72a956:{c.instructions+=12;NFSU2_TR(0x72a956);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a95a:{NFSU2_TR(0x72a95a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72a95c:{NFSU2_TR(0x72a95c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a95f:{NFSU2_TR(0x72a95f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a962:{NFSU2_TR(0x72a962);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a965:{NFSU2_TR(0x72a965);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a968:{NFSU2_TR(0x72a968);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1bull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72a96b:{NFSU2_TR(0x72a96b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a96e:{NFSU2_TR(0x72a96e);
u8 U[4];
w4(U+0,u32(0x72a8c5ull));
s4(u32(r4(R+0)),r4(U+0));
}
B72a974:{NFSU2_TR(0x72a974);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x1cull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72a977:{NFSU2_TR(0x72a977);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a978:{NFSU2_TR(0x72a978);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a97dull));
TAIL_STATIC(0x72d5eau,72d);
}
B72a97d:L72a97d:{c.instructions+=3;NFSU2_TR(0x72a97d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72a97e:{NFSU2_TR(0x72a97e);
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
B72a980:{NFSU2_TR(0x72a980);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a981:L72a981:{c.instructions+=17;NFSU2_TR(0x72a981);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a982:{NFSU2_TR(0x72a982);
__builtin_memmove((R+20),(R+16),4);
}
B72a984:{NFSU2_TR(0x72a984);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a987:{NFSU2_TR(0x72a987);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B72a989:{NFSU2_TR(0x72a989);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a98c:{NFSU2_TR(0x72a98c);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B72a98f:{NFSU2_TR(0x72a98f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a992:{NFSU2_TR(0x72a992);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72a995:{NFSU2_TR(0x72a995);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B72a998:{NFSU2_TR(0x72a998);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a99b:{NFSU2_TR(0x72a99b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a99e:{NFSU2_TR(0x72a99e);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B72a9a1:{NFSU2_TR(0x72a9a1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B72a9a4:{NFSU2_TR(0x72a9a4);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a9a6:{NFSU2_TR(0x72a9a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a9a7:{NFSU2_TR(0x72a9a7);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72a9aa:{NFSU2_TR(0x72a9aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a9afull));
TAIL_STATIC(0x72d697u,72d);
}
B72a9af:L72a9af:{c.instructions+=4;NFSU2_TR(0x72a9af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72a9b0:{NFSU2_TR(0x72a9b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72a9b1:{NFSU2_TR(0x72a9b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72a9b2:{NFSU2_TR(0x72a9b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a9b3:L72a9b3:{c.instructions+=6;NFSU2_TR(0x72a9b3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a9b4:{NFSU2_TR(0x72a9b4);
__builtin_memmove((R+20),(R+16),4);
}
B72a9b6:{NFSU2_TR(0x72a9b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a9b7:{NFSU2_TR(0x72a9b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72a9ba:{NFSU2_TR(0x72a9ba);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B72a9be:{NFSU2_TR(0x72a9be);
if(r1(R+518)){{goto L72a9db;}}
}
B72a9c0:L72a9c0:{c.instructions+=8;NFSU2_TR(0x72a9c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72a9c4:{NFSU2_TR(0x72a9c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a9c7:{NFSU2_TR(0x72a9c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a9c8:{NFSU2_TR(0x72a9c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a9cb:{NFSU2_TR(0x72a9cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a9ce:{NFSU2_TR(0x72a9ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a9d1:{NFSU2_TR(0x72a9d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a9d2:{NFSU2_TR(0x72a9d2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a9d4ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B72a9d4:L72a9d4:{c.instructions+=3;NFSU2_TR(0x72a9d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B72a9d7:{NFSU2_TR(0x72a9d7);
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
B72a9d9:{NFSU2_TR(0x72a9d9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72a9f3;}}
}
B72a9db:L72a9db:{c.instructions+=6;NFSU2_TR(0x72a9db);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a9de:{NFSU2_TR(0x72a9de);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
}
B72a9e1:{NFSU2_TR(0x72a9e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a9e4:{NFSU2_TR(0x72a9e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72a9e7:{NFSU2_TR(0x72a9e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72a9e8:{NFSU2_TR(0x72a9e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72a9edull));
TAIL_STATIC(0x72d616u,72d);
}
B72a9ed:L72a9ed:{c.instructions+=2;NFSU2_TR(0x72a9ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a9f0:{NFSU2_TR(0x72a9f0);
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
B72a9f3:L72a9f3:{c.instructions+=3;NFSU2_TR(0x72a9f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72a9f4:{NFSU2_TR(0x72a9f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72a9f5:{NFSU2_TR(0x72a9f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72a9f6:L72a9f6:{c.instructions+=12;NFSU2_TR(0x72a9f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72a9fa:{NFSU2_TR(0x72a9fa);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72a9fc:{NFSU2_TR(0x72a9fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72a9ff:{NFSU2_TR(0x72a9ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72aa02:{NFSU2_TR(0x72aa02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72aa05:{NFSU2_TR(0x72aa05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72aa08:{NFSU2_TR(0x72aa08);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1bull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72aa0b:{NFSU2_TR(0x72aa0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72aa0e:{NFSU2_TR(0x72aa0e);
u8 U[4];
w4(U+0,u32(0x72a9b3ull));
s4(u32(r4(R+0)),r4(U+0));
}
B72aa14:{NFSU2_TR(0x72aa14);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x1cull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72aa17:{NFSU2_TR(0x72aa17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72aa18:{NFSU2_TR(0x72aa18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72aa1dull));
TAIL_STATIC(0x72d5eau,72d);
}
B72aa1d:L72aa1d:{c.instructions+=3;NFSU2_TR(0x72aa1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72aa1e:{NFSU2_TR(0x72aa1e);
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
B72aa20:{NFSU2_TR(0x72aa20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72aa21:L72aa21:{c.instructions+=18;NFSU2_TR(0x72aa21);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72aa22:{NFSU2_TR(0x72aa22);
__builtin_memmove((R+20),(R+16),4);
}
B72aa24:{NFSU2_TR(0x72aa24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72aa27:{NFSU2_TR(0x72aa27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B72aa29:{NFSU2_TR(0x72aa29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72aa2c:{NFSU2_TR(0x72aa2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B72aa2f:{NFSU2_TR(0x72aa2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72aa32:{NFSU2_TR(0x72aa32);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72aa35:{NFSU2_TR(0x72aa35);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B72aa38:{NFSU2_TR(0x72aa38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72aa3b:{NFSU2_TR(0x72aa3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72aa3e:{NFSU2_TR(0x72aa3e);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B72aa40:{NFSU2_TR(0x72aa40);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B72aa43:{NFSU2_TR(0x72aa43);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72aa45:{NFSU2_TR(0x72aa45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72aa46:{NFSU2_TR(0x72aa46);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B72aa49:{NFSU2_TR(0x72aa49);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72aa4c:{NFSU2_TR(0x72aa4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72aa51ull));
TAIL_STATIC(0x72d697u,72d);
}
B72aa51:L72aa51:{c.instructions+=4;NFSU2_TR(0x72aa51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72aa52:{NFSU2_TR(0x72aa52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72aa53:{NFSU2_TR(0x72aa53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72aa54:{NFSU2_TR(0x72aa54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72aa55:L72aa55:{c.instructions+=6;NFSU2_TR(0x72aa55);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72aa56:{NFSU2_TR(0x72aa56);
__builtin_memmove((R+20),(R+16),4);
}
B72aa58:{NFSU2_TR(0x72aa58);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72aa59:{NFSU2_TR(0x72aa59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72aa5c:{NFSU2_TR(0x72aa5c);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B72aa60:{NFSU2_TR(0x72aa60);
if(r1(R+518)){{goto L72aa7d;}}
}
B72aa62:L72aa62:{c.instructions+=8;NFSU2_TR(0x72aa62);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72aa66:{NFSU2_TR(0x72aa66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72aa69:{NFSU2_TR(0x72aa69);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72aa6a:{NFSU2_TR(0x72aa6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72aa6d:{NFSU2_TR(0x72aa6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72aa70:{NFSU2_TR(0x72aa70);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72aa73:{NFSU2_TR(0x72aa73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72aa74:{NFSU2_TR(0x72aa74);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72aa76ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B72aa76:L72aa76:{c.instructions+=3;NFSU2_TR(0x72aa76);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B72aa79:{NFSU2_TR(0x72aa79);
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
B72aa7b:{NFSU2_TR(0x72aa7b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72aa95;}}
}
B72aa7d:L72aa7d:{c.instructions+=6;NFSU2_TR(0x72aa7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72aa80:{NFSU2_TR(0x72aa80);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
}
B72aa83:{NFSU2_TR(0x72aa83);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72aa86:{NFSU2_TR(0x72aa86);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72aa89:{NFSU2_TR(0x72aa89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72aa8a:{NFSU2_TR(0x72aa8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72aa8full));
TAIL_STATIC(0x72d8b0u,72d);
}
B72aa8f:L72aa8f:{c.instructions+=2;NFSU2_TR(0x72aa8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72aa92:{NFSU2_TR(0x72aa92);
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
B72aa95:L72aa95:{c.instructions+=3;NFSU2_TR(0x72aa95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72aa96:{NFSU2_TR(0x72aa96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72aa97:{NFSU2_TR(0x72aa97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72aa98:L72aa98:{c.instructions+=13;NFSU2_TR(0x72aa98);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72aa9c:{NFSU2_TR(0x72aa9c);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72aa9e:{NFSU2_TR(0x72aa9e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72aaa0:{NFSU2_TR(0x72aaa0);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72aaa3:{NFSU2_TR(0x72aaa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72aaa6:{NFSU2_TR(0x72aaa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72aaa9:{NFSU2_TR(0x72aaa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72aaac:{NFSU2_TR(0x72aaac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72aaaf:{NFSU2_TR(0x72aaaf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1bull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72aab2:{NFSU2_TR(0x72aab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72aab5:{NFSU2_TR(0x72aab5);
u8 U[4];
w4(U+0,u32(0x72aa55ull));
s4(u32(r4(R+0)),r4(U+0));
}
B72aabb:{NFSU2_TR(0x72aabb);
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
B72aabd:{NFSU2_TR(0x72aabd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72aabe:L72aabe:{c.instructions+=21;NFSU2_TR(0x72aabe);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72aac2:{NFSU2_TR(0x72aac2);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72aac4:{NFSU2_TR(0x72aac4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72aac8:{NFSU2_TR(0x72aac8);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B72aaca:{NFSU2_TR(0x72aaca);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B72aacd:{NFSU2_TR(0x72aacd);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B72aad0:{NFSU2_TR(0x72aad0);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B72aad2:{NFSU2_TR(0x72aad2);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B72aad4:{NFSU2_TR(0x72aad4);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72aad7:{NFSU2_TR(0x72aad7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72aad9:{NFSU2_TR(0x72aad9);
{u32 ea_=u32(u32(7997184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72aadf:{NFSU2_TR(0x72aadf);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72aae2:{NFSU2_TR(0x72aae2);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72aae5:{NFSU2_TR(0x72aae5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72aae7:{NFSU2_TR(0x72aae7);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72aaea:{NFSU2_TR(0x72aaea);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72aaed:{NFSU2_TR(0x72aaed);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72aaf0:{NFSU2_TR(0x72aaf0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72aaf2:{NFSU2_TR(0x72aaf2);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72aaf5:{NFSU2_TR(0x72aaf5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72aaf7:{NFSU2_TR(0x72aaf7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72aaf8:L72aaf8:{c.instructions+=3;NFSU2_TR(0x72aaf8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72aaf9:{NFSU2_TR(0x72aaf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72aafd:{NFSU2_TR(0x72aafd);
{goto L72ab01;}
}
B72aaff:L72aaff:{c.instructions+=1;NFSU2_TR(0x72aaff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B72ab01:L72ab01:{c.instructions+=3;NFSU2_TR(0x72ab01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72ab03:{NFSU2_TR(0x72ab03);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xfcull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B72ab06:{NFSU2_TR(0x72ab06);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72aaffu);}goto L72aaff;}}
}
B72ab08:L72ab08:{c.instructions+=5;NFSU2_TR(0x72ab08);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+4,u32(r1(U+0)));
}
B72ab0b:{NFSU2_TR(0x72ab0b);
w4(R+8,u32(0xffull));
}
B72ab10:{NFSU2_TR(0x72ab10);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72ab12:{NFSU2_TR(0x72ab12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ab15:{NFSU2_TR(0x72ab15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72ab1b;}}
}
B72ab17:L72ab17:{c.instructions+=3;NFSU2_TR(0x72ab17);
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
B72ab19:{NFSU2_TR(0x72ab19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72ab1a:{NFSU2_TR(0x72ab1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72ab1b:L72ab1b:{c.instructions+=5;NFSU2_TR(0x72ab1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72ab1e:{NFSU2_TR(0x72ab1e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72ab1f:{NFSU2_TR(0x72ab1f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72ab25:{NFSU2_TR(0x72ab25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B72ab27:{NFSU2_TR(0x72ab27);
if(r1(R+518)){{goto L72ab6c;}}
}
B72ab29:L72ab29:{c.instructions+=2;NFSU2_TR(0x72ab29);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72ab2f:{NFSU2_TR(0x72ab2f);
if(r1(R+518)){{goto L72ab6c;}}
}
B72ab31:L72ab31:{c.instructions+=4;NFSU2_TR(0x72ab31);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+4,u32(r1(U+0)));
}
B72ab34:{NFSU2_TR(0x72ab34);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72ab36:{NFSU2_TR(0x72ab36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ab39:{NFSU2_TR(0x72ab39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72ab4c;}}
}
B72ab3b:L72ab3b:{c.instructions+=4;NFSU2_TR(0x72ab3b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72ab3c:{NFSU2_TR(0x72ab3c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ab3e:{NFSU2_TR(0x72ab3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ab3f:{NFSU2_TR(0x72ab3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72ab44ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72a195u);}goto L72a195;}
}
B72ab44:L72ab44:{c.instructions+=4;NFSU2_TR(0x72ab44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B72ab47:{NFSU2_TR(0x72ab47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72ab48:{NFSU2_TR(0x72ab48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72ab49:{NFSU2_TR(0x72ab49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ab4c:L72ab4c:{c.instructions+=6;NFSU2_TR(0x72ab4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B72ab4e:{NFSU2_TR(0x72ab4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72ab51:{NFSU2_TR(0x72ab51);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72ab54:{NFSU2_TR(0x72ab54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72ab56:{NFSU2_TR(0x72ab56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ab59:{NFSU2_TR(0x72ab59);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L72ab67;}}
}
B72ab5b:L72ab5b:{c.instructions+=3;NFSU2_TR(0x72ab5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ab5c:{NFSU2_TR(0x72ab5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ab5d:{NFSU2_TR(0x72ab5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72ab62ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72a195u);}goto L72a195;}
}
B72ab62:L72ab62:{c.instructions+=3;NFSU2_TR(0x72ab62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72ab63:{NFSU2_TR(0x72ab63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72ab64:{NFSU2_TR(0x72ab64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ab67:L72ab67:{c.instructions+=2;NFSU2_TR(0x72ab67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72ab6a:{NFSU2_TR(0x72ab6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
}
B72ab6c:L72ab6c:{c.instructions+=4;NFSU2_TR(0x72ab6c);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72ab6e:{NFSU2_TR(0x72ab6e);
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
B72ab6f:{NFSU2_TR(0x72ab6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72ab70:{NFSU2_TR(0x72ab70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72ab71:L72ab71:{c.instructions+=9;NFSU2_TR(0x72ab71);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72ab75:{NFSU2_TR(0x72ab75);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ab76:{NFSU2_TR(0x72ab76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ab77:{NFSU2_TR(0x72ab77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B72ab7a:{NFSU2_TR(0x72ab7a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B72ab7d:{NFSU2_TR(0x72ab7d);
w4(R+24,u32(u32(r4(R+24))+u32(m4(0x8b466c))));
}
B72ab83:{NFSU2_TR(0x72ab83);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B72ab85:{NFSU2_TR(0x72ab85);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(r1(R+12))));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72ab88:{NFSU2_TR(0x72ab88);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L72abab;}}
}
B72ab8a:L72ab8a:{c.instructions+=2;NFSU2_TR(0x72ab8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ab8b:{NFSU2_TR(0x72ab8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72ab8e:L72ab8e:{c.instructions+=5;NFSU2_TR(0x72ab8e);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72ab92:{NFSU2_TR(0x72ab92);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B72ab95:{NFSU2_TR(0x72ab95);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ab96:{NFSU2_TR(0x72ab96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ab97:{NFSU2_TR(0x72ab97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72ab9cull));
TAIL_STATIC(0x72d8e9u,72d);
}
B72ab9c:L72ab9c:{c.instructions+=7;NFSU2_TR(0x72ab9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72aba0:{NFSU2_TR(0x72aba0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B72aba3:{NFSU2_TR(0x72aba3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B72aba4:{NFSU2_TR(0x72aba4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B72aba5:{NFSU2_TR(0x72aba5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B72aba6:{NFSU2_TR(0x72aba6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72aba8:{NFSU2_TR(0x72aba8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72ab8eu);}goto L72ab8e;}}
}
B72abaa:L72abaa:{c.instructions+=1;NFSU2_TR(0x72abaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72abab:L72abab:{c.instructions+=4;NFSU2_TR(0x72abab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72abac:{NFSU2_TR(0x72abac);
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
B72abae:{NFSU2_TR(0x72abae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72abaf:{NFSU2_TR(0x72abaf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72abb0:L72abb0:{c.instructions+=10;NFSU2_TR(0x72abb0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72abb1:{NFSU2_TR(0x72abb1);
u8 U[4];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B72abb5:{NFSU2_TR(0x72abb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x230ull))));
}
B72abbb:{NFSU2_TR(0x72abbb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72abbc:{NFSU2_TR(0x72abbc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72abbd:{NFSU2_TR(0x72abbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72abc0:{NFSU2_TR(0x72abc0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72abc1:{NFSU2_TR(0x72abc1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72abc3:{NFSU2_TR(0x72abc3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72abc4:{NFSU2_TR(0x72abc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72abc9ull));
TAIL_STATIC(0x727030u,727);
}
B72abc9:L72abc9:{c.instructions+=4;NFSU2_TR(0x72abc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72abcc:{NFSU2_TR(0x72abcc);
u8 U[4];
w4(U+0,u32(0x68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72abce:{NFSU2_TR(0x72abce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72abcf:{NFSU2_TR(0x72abcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72abd4ull));
TAIL_STATIC(0x727030u,727);
}
B72abd4:L72abd4:{c.instructions+=4;NFSU2_TR(0x72abd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72abd7:{NFSU2_TR(0x72abd7);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72abd9:{NFSU2_TR(0x72abd9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72abda:{NFSU2_TR(0x72abda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72abdfull));
TAIL_STATIC(0x727030u,727);
}
B72abdf:L72abdf:{c.instructions+=2;NFSU2_TR(0x72abdf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72abe0:{NFSU2_TR(0x72abe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72abe5ull));
TAIL_STATIC(0x72423eu,724);
}
B72abe5:L72abe5:{c.instructions+=10;NFSU2_TR(0x72abe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72abe8:{NFSU2_TR(0x72abe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72abec:{NFSU2_TR(0x72abec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B72abef:{NFSU2_TR(0x72abef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72abf2:{NFSU2_TR(0x72abf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72abf5:{NFSU2_TR(0x72abf5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72abf6:{NFSU2_TR(0x72abf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72abfd:{NFSU2_TR(0x72abfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
w4(U+4,u32(0xbb80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72ac04:{NFSU2_TR(0x72ac04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B72ac0b:{NFSU2_TR(0x72ac0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72ac10ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72aaf8u);}goto L72aaf8;}
}
B72ac10:L72ac10:{c.instructions+=3;NFSU2_TR(0x72ac10);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B72ac13:{NFSU2_TR(0x72ac13);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72ac15:{NFSU2_TR(0x72ac15);
if(r1(R+518)){{goto L72ac90;}}
}
B72ac17:L72ac17:{c.instructions+=3;NFSU2_TR(0x72ac17);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72ac1a:{NFSU2_TR(0x72ac1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ac1d:{NFSU2_TR(0x72ac1d);
{goto L72ac22;}
}
B72ac1f:L72ac1f:{c.instructions+=1;NFSU2_TR(0x72ac1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72ac22:L72ac22:{c.instructions+=3;NFSU2_TR(0x72ac22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72ac25:{NFSU2_TR(0x72ac25);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2bull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2bull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72ac28:{NFSU2_TR(0x72ac28);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72ac53;}}
}
B72ac2a:L72ac2a:{c.instructions+=6;NFSU2_TR(0x72ac2a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72ac2d:{NFSU2_TR(0x72ac2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72ac30:{NFSU2_TR(0x72ac30);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe34ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B72ac37:{NFSU2_TR(0x72ac37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72ac3a:{NFSU2_TR(0x72ac3a);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffeecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B72ac41:{NFSU2_TR(0x72ac41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72ac82;}}
}
B72ac43:L72ac43:{c.instructions+=6;NFSU2_TR(0x72ac43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72ac46:{NFSU2_TR(0x72ac46);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ac49:{NFSU2_TR(0x72ac49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B72ac4b:{NFSU2_TR(0x72ac4b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B72ac4e:{NFSU2_TR(0x72ac4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ac51:{NFSU2_TR(0x72ac51);
{goto L72ac82;}
}
B72ac53:L72ac53:{c.instructions+=2;NFSU2_TR(0x72ac53);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x80ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B72ac58:{NFSU2_TR(0x72ac58);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72ac7b;}}
}
B72ac5a:L72ac5a:{c.instructions+=2;NFSU2_TR(0x72ac5a);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xaeull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xaeull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B72ac5f:{NFSU2_TR(0x72ac5f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72ac7b;}}
}
B72ac61:L72ac61:{c.instructions+=6;NFSU2_TR(0x72ac61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72ac64:{NFSU2_TR(0x72ac64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0xfffffe00ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72ac6b:{NFSU2_TR(0x72ac6b);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B72ac6f:{NFSU2_TR(0x72ac6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72ac72:{NFSU2_TR(0x72ac72);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffee0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B72ac79:{NFSU2_TR(0x72ac79);
{goto L72ac82;}
}
B72ac7b:L72ac7b:{c.instructions+=2;NFSU2_TR(0x72ac7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfeull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72ac80:{NFSU2_TR(0x72ac80);
if(r1(R+518)){{goto L72ac90;}}
}
B72ac82:L72ac82:{c.instructions+=3;NFSU2_TR(0x72ac82);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72ac85:{NFSU2_TR(0x72ac85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ac86:{NFSU2_TR(0x72ac86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72ac8bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72aaf8u);}goto L72aaf8;}
}
B72ac8b:L72ac8b:{c.instructions+=3;NFSU2_TR(0x72ac8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72ac8d:{NFSU2_TR(0x72ac8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72ac8e:{NFSU2_TR(0x72ac8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72ac1fu);}goto L72ac1f;}}
}
B72ac90:L72ac90:{c.instructions+=13;NFSU2_TR(0x72ac90);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72ac93:{NFSU2_TR(0x72ac93);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72ac96:{NFSU2_TR(0x72ac96);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72ac99:{NFSU2_TR(0x72ac99);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72ac9c:{NFSU2_TR(0x72ac9c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B72aca0:{NFSU2_TR(0x72aca0);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+24)),r2(U+0));
}
B72aca3:{NFSU2_TR(0x72aca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72aca6:{NFSU2_TR(0x72aca6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B72aca8:{NFSU2_TR(0x72aca8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72acaa:{NFSU2_TR(0x72acaa);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w2(U+4,u16(0x4ull));
s2(u32(r4(U+0)),r2(U+4));
}
B72acb0:{NFSU2_TR(0x72acb0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72acb4:{NFSU2_TR(0x72acb4);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(r1(R+4))));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72acb7:{NFSU2_TR(0x72acb7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L72acdc;}}
}
B72acb9:L72acb9:{c.instructions+=1;NFSU2_TR(0x72acb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B72acbc:L72acbc:{c.instructions+=11;NFSU2_TR(0x72acbc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72acc0:{NFSU2_TR(0x72acc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72acc3:{NFSU2_TR(0x72acc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72acc6:{NFSU2_TR(0x72acc6);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8b466cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+0),(U+8),2);
}
B72acce:{NFSU2_TR(0x72acce);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+8)),r2(U+0));
}
B72acd1:{NFSU2_TR(0x72acd1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72acd5:{NFSU2_TR(0x72acd5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72acd6:{NFSU2_TR(0x72acd6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B72acd7:{NFSU2_TR(0x72acd7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B72acd8:{NFSU2_TR(0x72acd8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72acda:{NFSU2_TR(0x72acda);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72acbcu);}goto L72acbc;}}
}
B72acdc:L72acdc:{c.instructions+=6;NFSU2_TR(0x72acdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72acdd:{NFSU2_TR(0x72acdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72acde:{NFSU2_TR(0x72acde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72acdf:{NFSU2_TR(0x72acdf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+20),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+20),u32(0x64ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72ace2:{NFSU2_TR(0x72ace2);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72ace3:{NFSU2_TR(0x72ace3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72ace4:L72ace4:{c.instructions+=1;NFSU2_TR(0x72ace4);
{u32 t_=u32(m4(0x8b4a1c));TAIL_DYNAMIC(t_);}
}
B72acea:L72acea:{c.instructions+=1;NFSU2_TR(0x72acea);
{u32 t_=u32(m4(0x8b4a24));TAIL_DYNAMIC(t_);}
}
B72acf0:L72acf0:{c.instructions+=3;NFSU2_TR(0x72acf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72acf6:{NFSU2_TR(0x72acf6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72acf8:{NFSU2_TR(0x72acf8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72ad01;}}
}
B72acfa:L72acfa:{c.instructions+=1;NFSU2_TR(0x72acfa);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72ad01:L72ad01:{c.instructions+=1;NFSU2_TR(0x72ad01);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72ad08;}}
}
B72ad03:L72ad03:{c.instructions+=2;NFSU2_TR(0x72ad03);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72ad06:{NFSU2_TR(0x72ad06);
{goto L72ad39;}
}
B72ad08:L72ad08:{c.instructions+=3;NFSU2_TR(0x72ad08);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72ad0c:{NFSU2_TR(0x72ad0c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72ad0f:{NFSU2_TR(0x72ad0f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72ad16;}}
}
B72ad11:L72ad11:{c.instructions+=3;NFSU2_TR(0x72ad11);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ad13:{NFSU2_TR(0x72ad13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72ad14:{NFSU2_TR(0x72ad14);
{goto L72ad39;}
}
B72ad16:L72ad16:{c.instructions+=7;NFSU2_TR(0x72ad16);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72ad1a:{NFSU2_TR(0x72ad1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72ad21:{NFSU2_TR(0x72ad21);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ad27:{NFSU2_TR(0x72ad27);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72ad2b:{NFSU2_TR(0x72ad2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ad31:{NFSU2_TR(0x72ad31);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ad37:{NFSU2_TR(0x72ad37);
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
B72ad39:L72ad39:{c.instructions+=1;NFSU2_TR(0x72ad39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72ad3c:L72ad3c:{c.instructions+=6;NFSU2_TR(0x72ad3c);
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
B72ad3e:{NFSU2_TR(0x72ad3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ad44:{NFSU2_TR(0x72ad44);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ad4a:{NFSU2_TR(0x72ad4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ad50:{NFSU2_TR(0x72ad50);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1d4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72ad57:{NFSU2_TR(0x72ad57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72ad58:L72ad58:{c.instructions+=10;NFSU2_TR(0x72ad58);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ad59:{NFSU2_TR(0x72ad59);
__builtin_memmove((R+20),(R+16),4);
}
B72ad5b:{NFSU2_TR(0x72ad5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B72ad5e:{NFSU2_TR(0x72ad5e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ad5f:{NFSU2_TR(0x72ad5f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ad60:{NFSU2_TR(0x72ad60);
__builtin_memmove((R+24),(R+4),4);
}
B72ad62:{NFSU2_TR(0x72ad62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72ad68:{NFSU2_TR(0x72ad68);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B72ad6a:{NFSU2_TR(0x72ad6a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72ad6c:{NFSU2_TR(0x72ad6c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72ad7f;}}
}
B72ad6e:L72ad6e:{c.instructions+=1;NFSU2_TR(0x72ad6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72ad77;}}
}
B72ad70:L72ad70:{c.instructions+=2;NFSU2_TR(0x72ad70);
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
B72ad72:{NFSU2_TR(0x72ad72);
{goto L72affb;}
}
B72ad77:L72ad77:{c.instructions+=2;NFSU2_TR(0x72ad77);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72ad7a:{NFSU2_TR(0x72ad7a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72ad7f;}}
}
B72ad7c:L72ad7c:{c.instructions+=1;NFSU2_TR(0x72ad7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ad7f:L72ad7f:{c.instructions+=3;NFSU2_TR(0x72ad7f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ad80:{NFSU2_TR(0x72ad80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ad83:{NFSU2_TR(0x72ad83);
{goto L72afee;}
}
B72ad88:L72ad88:{c.instructions+=2;NFSU2_TR(0x72ad88);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72ad8e:{NFSU2_TR(0x72ad8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72af31;}}
}
B72ad94:L72ad94:{c.instructions+=2;NFSU2_TR(0x72ad94);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
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
B72ad9a:{NFSU2_TR(0x72ad9a);
if(r1(R+518)){{goto L72aff7;}}
}
B72ada0:L72ada0:{c.instructions+=5;NFSU2_TR(0x72ada0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72ada6:{NFSU2_TR(0x72ada6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72ada8:{NFSU2_TR(0x72ada8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72ada9:{NFSU2_TR(0x72ada9);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B72adb0:{NFSU2_TR(0x72adb0);
if(r1(R+518)){{goto L72adcc;}}
}
B72adb2:L72adb2:{c.instructions+=4;NFSU2_TR(0x72adb2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72adb3:{NFSU2_TR(0x72adb3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72adb4:{NFSU2_TR(0x72adb4);
__builtin_memmove((R+4),(R+24),4);
}
B72adb6:{NFSU2_TR(0x72adb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72adb9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B72adb9:L72adb9:{c.instructions+=3;NFSU2_TR(0x72adb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
w4(U+4,u32(0x451ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72adc3:{NFSU2_TR(0x72adc3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72adca:{NFSU2_TR(0x72adca);
{goto L72add2;}
}
B72adcc:L72adcc:{c.instructions+=3;NFSU2_TR(0x72adcc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72adcd:{NFSU2_TR(0x72adcd);
__builtin_memmove((R+4),(R+24),4);
}
B72adcf:{NFSU2_TR(0x72adcf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72add2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B72add2:L72add2:{c.instructions+=3;NFSU2_TR(0x72add2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72add4:{NFSU2_TR(0x72add4);
__builtin_memmove((R+4),(R+24),4);
}
B72add6:{NFSU2_TR(0x72add6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72add9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B72add9:L72add9:{c.instructions+=2;NFSU2_TR(0x72add9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B72addb:{NFSU2_TR(0x72addb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72adfa;}}
}
B72addd:L72addd:{c.instructions+=3;NFSU2_TR(0x72addd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72ade3:{NFSU2_TR(0x72ade3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72ade5:{NFSU2_TR(0x72ade5);
if(r1(R+518)){{goto L72adfa;}}
}
B72ade7:L72ade7:{c.instructions+=4;NFSU2_TR(0x72ade7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72adea:{NFSU2_TR(0x72adea);
__builtin_memmove((R+8),(R+4),4);
}
B72adec:{NFSU2_TR(0x72adec);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B72adef:{NFSU2_TR(0x72adef);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72adf1:L72adf1:{c.instructions+=1;NFSU2_TR(0x72adf1);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L72adf3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72adf1u);}goto L72adf1;}
}
B72adf3:L72adf3:{c.instructions+=2;NFSU2_TR(0x72adf3);
__builtin_memmove((R+4),(R+8),4);
}
B72adf5:{NFSU2_TR(0x72adf5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B72adf8:L72adf8:{c.instructions+=1;NFSU2_TR(0x72adf8);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L72adfa;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72adf8u);}goto L72adf8;}
}
B72adfa:L72adfa:{c.instructions+=17;NFSU2_TR(0x72adfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72adfd:{NFSU2_TR(0x72adfd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B72ae00:{NFSU2_TR(0x72ae00);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72ae03:{NFSU2_TR(0x72ae03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B72ae09:{NFSU2_TR(0x72ae09);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B72ae0c:{NFSU2_TR(0x72ae0c);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B72ae0e:{NFSU2_TR(0x72ae0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B72ae14:{NFSU2_TR(0x72ae14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72ae17:{NFSU2_TR(0x72ae17);
w4(R+4,u32(r1(R+12)));
}
B72ae1a:{NFSU2_TR(0x72ae1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B72ae1d:{NFSU2_TR(0x72ae1d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B72ae1f:{NFSU2_TR(0x72ae1f);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x72ae1f);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x72ae1f);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B72ae21:{NFSU2_TR(0x72ae21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72ae27:{NFSU2_TR(0x72ae27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72ae2e:{NFSU2_TR(0x72ae2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ae34:{NFSU2_TR(0x72ae34);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xeeull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B72ae37:{NFSU2_TR(0x72ae37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72af31;}}
}
B72ae3d:L72ae3d:{c.instructions+=19;NFSU2_TR(0x72ae3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B72ae40:{NFSU2_TR(0x72ae40);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72ae43:{NFSU2_TR(0x72ae43);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B72ae46:{NFSU2_TR(0x72ae46);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff5ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72ae49:{NFSU2_TR(0x72ae49);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72ae4c:{NFSU2_TR(0x72ae4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ae52:{NFSU2_TR(0x72ae52);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B72ae55:{NFSU2_TR(0x72ae55);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B72ae58:{NFSU2_TR(0x72ae58);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72ae5b:{NFSU2_TR(0x72ae5b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B72ae5e:{NFSU2_TR(0x72ae5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ae64:{NFSU2_TR(0x72ae64);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B72ae68:{NFSU2_TR(0x72ae68);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B72ae6a:{NFSU2_TR(0x72ae6a);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B72ae6d:{NFSU2_TR(0x72ae6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72ae73:{NFSU2_TR(0x72ae73);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72ae76:{NFSU2_TR(0x72ae76);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B72ae7a:{NFSU2_TR(0x72ae7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B72ae7d:{NFSU2_TR(0x72ae7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72aedd;}}
}
B72ae7f:L72ae7f:{c.instructions+=2;NFSU2_TR(0x72ae7f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72ae81:{NFSU2_TR(0x72ae81);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72af13;}}
}
B72ae87:L72ae87:{c.instructions+=1;NFSU2_TR(0x72ae87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ae8a:L72ae8a:{c.instructions+=24;NFSU2_TR(0x72ae8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72ae90:{NFSU2_TR(0x72ae90);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B72ae93:{NFSU2_TR(0x72ae93);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72ae94:{NFSU2_TR(0x72ae94);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B72ae96:{NFSU2_TR(0x72ae96);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72ae99:{NFSU2_TR(0x72ae99);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72ae9c:{NFSU2_TR(0x72ae9c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B72aea0:{NFSU2_TR(0x72aea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72aea3:{NFSU2_TR(0x72aea3);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72aea6:{NFSU2_TR(0x72aea6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72aea8:{NFSU2_TR(0x72aea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72aeae:{NFSU2_TR(0x72aeae);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B72aeb1:{NFSU2_TR(0x72aeb1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B72aeb4:{NFSU2_TR(0x72aeb4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B72aeb6:{NFSU2_TR(0x72aeb6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72aeb9:{NFSU2_TR(0x72aeb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72aebc:{NFSU2_TR(0x72aebc);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B72aec0:{NFSU2_TR(0x72aec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72aec3:{NFSU2_TR(0x72aec3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B72aec6:{NFSU2_TR(0x72aec6);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72aec9:{NFSU2_TR(0x72aec9);
{u32 ea_=u32(r4(R+4)+u32(2300u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72aecf:{NFSU2_TR(0x72aecf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72aed6:{NFSU2_TR(0x72aed6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72aed9:{NFSU2_TR(0x72aed9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72ae8au);}goto L72ae8a;}}
}
B72aedb:L72aedb:{c.instructions+=1;NFSU2_TR(0x72aedb);
{goto L72af13;}
}
B72aedd:L72aedd:{c.instructions+=2;NFSU2_TR(0x72aedd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72aedf:{NFSU2_TR(0x72aedf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72af13;}}
}
B72aee1:L72aee1:{c.instructions+=1;NFSU2_TR(0x72aee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72aee4:L72aee4:{c.instructions+=14;NFSU2_TR(0x72aee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72aeea:{NFSU2_TR(0x72aeea);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B72aeed:{NFSU2_TR(0x72aeed);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72aef0:{NFSU2_TR(0x72aef0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B72aef3:{NFSU2_TR(0x72aef3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B72aef6:{NFSU2_TR(0x72aef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72aefc:{NFSU2_TR(0x72aefc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72aeff:{NFSU2_TR(0x72aeff);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B72af03:{NFSU2_TR(0x72af03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72af06:{NFSU2_TR(0x72af06);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72af09:{NFSU2_TR(0x72af09);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72af0b:{NFSU2_TR(0x72af0b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B72af0e:{NFSU2_TR(0x72af0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72af11:{NFSU2_TR(0x72af11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72aee4u);}goto L72aee4;}}
}
B72af13:L72af13:{c.instructions+=9;NFSU2_TR(0x72af13);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72af17:{NFSU2_TR(0x72af17);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72af1a:{NFSU2_TR(0x72af1a);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B72af1c:{NFSU2_TR(0x72af1c);
u8 U[12];
w4(U+0,u32(u32(u32(0x5ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B72af20:{NFSU2_TR(0x72af20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72af26:{NFSU2_TR(0x72af26);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72af28:{NFSU2_TR(0x72af28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72af29:{NFSU2_TR(0x72af29);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B72af2b:{NFSU2_TR(0x72af2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B72af31:L72af31:{c.instructions+=4;NFSU2_TR(0x72af31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72af37:{NFSU2_TR(0x72af37);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B72af39:{NFSU2_TR(0x72af39);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72af3b:{NFSU2_TR(0x72af3b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72af6b;}}
}
B72af3d:L72af3d:{c.instructions+=3;NFSU2_TR(0x72af3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72af43:{NFSU2_TR(0x72af43);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72af45:{NFSU2_TR(0x72af45);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72af5d;}}
}
B72af47:L72af47:{c.instructions+=5;NFSU2_TR(0x72af47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B72af4d:{NFSU2_TR(0x72af4d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B72af4f:{NFSU2_TR(0x72af4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72af55:{NFSU2_TR(0x72af55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72af5b:{NFSU2_TR(0x72af5b);
{goto L72af6b;}
}
B72af5d:L72af5d:{c.instructions+=3;NFSU2_TR(0x72af5d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B72af5f:{NFSU2_TR(0x72af5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72af65:{NFSU2_TR(0x72af65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72af6b:L72af6b:{c.instructions+=3;NFSU2_TR(0x72af6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72af71:{NFSU2_TR(0x72af71);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72af73:{NFSU2_TR(0x72af73);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72afec;}}
}
B72af75:L72af75:{c.instructions+=2;NFSU2_TR(0x72af75);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+8)));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72af78:{NFSU2_TR(0x72af78);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72af7d;}}
}
B72af7a:L72af7a:{c.instructions+=1;NFSU2_TR(0x72af7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72af7d:L72af7d:{c.instructions+=2;NFSU2_TR(0x72af7d);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x0ull))));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72af81:{NFSU2_TR(0x72af81);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L72afc8;}}
}
B72af83:L72af83:{c.instructions+=1;NFSU2_TR(0x72af83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72af87:L72af87:{c.instructions+=15;NFSU2_TR(0x72af87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72af8d:{NFSU2_TR(0x72af8d);
__builtin_memmove((R+0),(R+28),4);
}
B72af8f:{NFSU2_TR(0x72af8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72af92:{NFSU2_TR(0x72af92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72af93:{NFSU2_TR(0x72af93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72af99:{NFSU2_TR(0x72af99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B72af9c:{NFSU2_TR(0x72af9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72af9f:{NFSU2_TR(0x72af9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72afa0:{NFSU2_TR(0x72afa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72afa3:{NFSU2_TR(0x72afa3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B72afa6:{NFSU2_TR(0x72afa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72afa9:{NFSU2_TR(0x72afa9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72afac:{NFSU2_TR(0x72afac);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72afae:{NFSU2_TR(0x72afae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72afaf:{NFSU2_TR(0x72afaf);
u8 U[4];
__builtin_memmove((U+0),gp(0x818ba0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72afb5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B72afb5:L72afb5:{c.instructions+=6;NFSU2_TR(0x72afb5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72afb9:{NFSU2_TR(0x72afb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x240ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72afc0:{NFSU2_TR(0x72afc0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B72afc3:{NFSU2_TR(0x72afc3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B72afc4:{NFSU2_TR(0x72afc4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72afc6:{NFSU2_TR(0x72afc6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72af87u);}goto L72af87;}}
}
B72afc8:L72afc8:{c.instructions+=5;NFSU2_TR(0x72afc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72afce:{NFSU2_TR(0x72afce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B72afd4:{NFSU2_TR(0x72afd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B72afda:{NFSU2_TR(0x72afda);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B72afdc:{NFSU2_TR(0x72afdc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72afe6;}}
}
B72afde:L72afde:{c.instructions+=2;NFSU2_TR(0x72afde);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B72afe0:{NFSU2_TR(0x72afe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72afe6:L72afe6:{c.instructions+=2;NFSU2_TR(0x72afe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B72afe9:{NFSU2_TR(0x72afe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B72afec:L72afec:{c.instructions+=1;NFSU2_TR(0x72afec);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B72afee:L72afee:{c.instructions+=2;NFSU2_TR(0x72afee);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B72aff1:{NFSU2_TR(0x72aff1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72ad88u);}goto L72ad88;}}
}
B72aff7:L72aff7:{c.instructions+=2;NFSU2_TR(0x72aff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72affa:{NFSU2_TR(0x72affa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72affb:L72affb:{c.instructions+=4;NFSU2_TR(0x72affb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72affc:{NFSU2_TR(0x72affc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72affd:{NFSU2_TR(0x72affd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72affe:{NFSU2_TR(0x72affe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x72a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
