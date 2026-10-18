#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_644(u8* __restrict R,Cpu& c);
u32 body_647(u8* __restrict R,Cpu& c);
u32 body_64f(u8* __restrict R,Cpu& c);
u32 body_655(u8* __restrict R,Cpu& c);
u32 body_658(u8* __restrict R,Cpu& c);
u32 body_659(u8* __restrict R,Cpu& c);
u32 body_65b(u8* __restrict R,Cpu& c);
u32 body_671(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x65a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x65a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_65a(u8* __restrict R,Cpu& c);
u32 page_65a(Cpu& c){return body_65a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_65a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x65a001:goto L65a001;
case 0x65a003:c.instructions+=2;goto B65a003;
case 0x65a008:c.instructions+=1;goto B65a008;
case 0x65a00d:goto L65a00d;
case 0x65a00f:c.instructions+=2;goto B65a00f;
case 0x65a014:c.instructions+=1;goto B65a014;
case 0x65a019:goto L65a019;
case 0x65a01a:c.instructions+=2;goto B65a01a;
case 0x65a01f:c.instructions+=1;goto B65a01f;
case 0x65a024:goto L65a024;
case 0x65a026:c.instructions+=2;goto B65a026;
case 0x65a02b:c.instructions+=1;goto B65a02b;
case 0x65a030:goto L65a030;
case 0x65a031:c.instructions+=2;goto B65a031;
case 0x65a036:c.instructions+=1;goto B65a036;
case 0x65a03b:goto L65a03b;
case 0x65a03c:c.instructions+=2;goto B65a03c;
case 0x65a041:c.instructions+=1;goto B65a041;
case 0x65a046:goto L65a046;
case 0x65a047:c.instructions+=2;goto B65a047;
case 0x65a04c:c.instructions+=1;goto B65a04c;
case 0x65a051:goto L65a051;
case 0x65a052:c.instructions+=2;goto B65a052;
case 0x65a057:c.instructions+=1;goto B65a057;
case 0x65a05c:goto L65a05c;
case 0x65a05d:c.instructions+=2;goto B65a05d;
case 0x65a062:c.instructions+=1;goto B65a062;
case 0x65a067:goto L65a067;
case 0x65a068:c.instructions+=2;goto B65a068;
case 0x65a06d:c.instructions+=1;goto B65a06d;
case 0x65a072:goto L65a072;
case 0x65a074:c.instructions+=2;goto B65a074;
case 0x65a079:c.instructions+=1;goto B65a079;
case 0x65a07e:goto L65a07e;
case 0x65a07f:c.instructions+=2;goto B65a07f;
case 0x65a084:c.instructions+=1;goto B65a084;
case 0x65a089:goto L65a089;
case 0x65a08a:c.instructions+=2;goto B65a08a;
case 0x65a08f:c.instructions+=1;goto B65a08f;
case 0x65a094:goto L65a094;
case 0x65a096:c.instructions+=2;goto B65a096;
case 0x65a09b:c.instructions+=1;goto B65a09b;
case 0x65a0a0:goto L65a0a0;
case 0x65a0a1:c.instructions+=2;goto B65a0a1;
case 0x65a0a6:c.instructions+=1;goto B65a0a6;
case 0x65a0ab:goto L65a0ab;
case 0x65a0ac:c.instructions+=2;goto B65a0ac;
case 0x65a0b1:c.instructions+=1;goto B65a0b1;
case 0x65a0b6:goto L65a0b6;
case 0x65a0b7:c.instructions+=2;goto B65a0b7;
case 0x65a0bc:c.instructions+=1;goto B65a0bc;
case 0x65a0c1:goto L65a0c1;
case 0x65a0c2:c.instructions+=2;goto B65a0c2;
case 0x65a0c7:c.instructions+=1;goto B65a0c7;
case 0x65a0cc:goto L65a0cc;
case 0x65a0cd:c.instructions+=2;goto B65a0cd;
case 0x65a0d2:c.instructions+=1;goto B65a0d2;
case 0x65a0d7:goto L65a0d7;
case 0x65a0d9:c.instructions+=2;goto B65a0d9;
case 0x65a0de:c.instructions+=1;goto B65a0de;
case 0x65a0e3:goto L65a0e3;
case 0x65a0e4:c.instructions+=2;goto B65a0e4;
case 0x65a0e9:c.instructions+=1;goto B65a0e9;
case 0x65a0ee:goto L65a0ee;
case 0x65a0ef:c.instructions+=2;goto B65a0ef;
case 0x65a0f4:c.instructions+=1;goto B65a0f4;
case 0x65a0f9:goto L65a0f9;
case 0x65a0fa:c.instructions+=2;goto B65a0fa;
case 0x65a0ff:c.instructions+=1;goto B65a0ff;
case 0x65a104:goto L65a104;
case 0x65a105:c.instructions+=2;goto B65a105;
case 0x65a10a:c.instructions+=1;goto B65a10a;
case 0x65a10f:goto L65a10f;
case 0x65a110:c.instructions+=2;goto B65a110;
case 0x65a115:c.instructions+=1;goto B65a115;
case 0x65a11a:goto L65a11a;
case 0x65a11b:c.instructions+=2;goto B65a11b;
case 0x65a120:c.instructions+=1;goto B65a120;
case 0x65a125:goto L65a125;
case 0x65a126:c.instructions+=2;goto B65a126;
case 0x65a12b:c.instructions+=1;goto B65a12b;
case 0x65a130:goto L65a130;
case 0x65a131:c.instructions+=2;goto B65a131;
case 0x65a136:c.instructions+=1;goto B65a136;
case 0x65a138:goto L65a138;
case 0x65a139:c.instructions+=2;goto B65a139;
case 0x65a13e:c.instructions+=1;goto B65a13e;
case 0x65a140:goto L65a140;
case 0x65a141:c.instructions+=2;goto B65a141;
case 0x65a146:c.instructions+=1;goto B65a146;
case 0x65a148:goto L65a148;
case 0x65a149:c.instructions+=2;goto B65a149;
case 0x65a14e:c.instructions+=1;goto B65a14e;
case 0x65a150:goto L65a150;
case 0x65a151:c.instructions+=2;goto B65a151;
case 0x65a156:c.instructions+=1;goto B65a156;
case 0x65a158:goto L65a158;
case 0x65a159:c.instructions+=2;goto B65a159;
case 0x65a15e:c.instructions+=1;goto B65a15e;
case 0x65a160:goto L65a160;
case 0x65a161:c.instructions+=2;goto B65a161;
case 0x65a166:c.instructions+=1;goto B65a166;
case 0x65a168:goto L65a168;
case 0x65a169:c.instructions+=2;goto B65a169;
case 0x65a16e:c.instructions+=1;goto B65a16e;
case 0x65a170:goto L65a170;
case 0x65a171:c.instructions+=2;goto B65a171;
case 0x65a176:c.instructions+=1;goto B65a176;
case 0x65a178:goto L65a178;
case 0x65a179:c.instructions+=2;goto B65a179;
case 0x65a17e:c.instructions+=1;goto B65a17e;
case 0x65a180:goto L65a180;
case 0x65a182:c.instructions+=2;goto B65a182;
case 0x65a187:c.instructions+=1;goto B65a187;
case 0x65a189:goto L65a189;
case 0x65a18a:c.instructions+=2;goto B65a18a;
case 0x65a18f:c.instructions+=1;goto B65a18f;
case 0x65a191:goto L65a191;
case 0x65a192:c.instructions+=2;goto B65a192;
case 0x65a197:c.instructions+=1;goto B65a197;
case 0x65a199:goto L65a199;
case 0x65a19a:c.instructions+=2;goto B65a19a;
case 0x65a19f:c.instructions+=1;goto B65a19f;
case 0x65a1a1:goto L65a1a1;
case 0x65a1a2:c.instructions+=2;goto B65a1a2;
case 0x65a1a7:c.instructions+=1;goto B65a1a7;
case 0x65a1a9:goto L65a1a9;
case 0x65a1aa:c.instructions+=2;goto B65a1aa;
case 0x65a1af:c.instructions+=1;goto B65a1af;
case 0x65a1b1:goto L65a1b1;
case 0x65a1b2:c.instructions+=1;goto B65a1b2;
case 0x65a1b7:goto L65a1b7;
case 0x65a1bd:c.instructions+=1;goto B65a1bd;
case 0x65a1c2:goto L65a1c2;
case 0x65a1c7:c.instructions+=10;goto B65a1c7;
case 0x65a1ca:c.instructions+=9;goto B65a1ca;
case 0x65a1cc:c.instructions+=8;goto B65a1cc;
case 0x65a1cf:c.instructions+=7;goto B65a1cf;
case 0x65a1d4:c.instructions+=6;goto B65a1d4;
case 0x65a1d7:c.instructions+=5;goto B65a1d7;
case 0x65a1dd:c.instructions+=4;goto B65a1dd;
case 0x65a1df:c.instructions+=3;goto B65a1df;
case 0x65a1e2:c.instructions+=2;goto B65a1e2;
case 0x65a1e9:c.instructions+=1;goto B65a1e9;
case 0x65a1eb:goto L65a1eb;
case 0x65a1ed:c.instructions+=1;goto B65a1ed;
case 0x65a1ef:goto L65a1ef;
case 0x65a1f0:c.instructions+=12;goto B65a1f0;
case 0x65a1f1:c.instructions+=11;goto B65a1f1;
case 0x65a1f3:c.instructions+=10;goto B65a1f3;
case 0x65a1f8:c.instructions+=9;goto B65a1f8;
case 0x65a1f9:c.instructions+=8;goto B65a1f9;
case 0x65a1fc:c.instructions+=7;goto B65a1fc;
case 0x65a203:c.instructions+=6;goto B65a203;
case 0x65a208:c.instructions+=5;goto B65a208;
case 0x65a20e:c.instructions+=4;goto B65a20e;
case 0x65a210:c.instructions+=3;goto B65a210;
case 0x65a215:c.instructions+=2;goto B65a215;
case 0x65a217:c.instructions+=1;goto B65a217;
case 0x65a219:goto L65a219;
case 0x65a21f:c.instructions+=1;goto B65a21f;
case 0x65a224:goto L65a224;
case 0x65a226:c.instructions+=2;goto B65a226;
case 0x65a22b:c.instructions+=1;goto B65a22b;
case 0x65a22d:goto L65a22d;
case 0x65a22f:c.instructions+=2;goto B65a22f;
case 0x65a234:c.instructions+=1;goto B65a234;
case 0x65a236:goto L65a236;
case 0x65a23c:goto L65a23c;
case 0x65a23e:c.instructions+=1;goto B65a23e;
case 0x65a243:goto L65a243;
case 0x65a246:c.instructions+=3;goto B65a246;
case 0x65a24d:c.instructions+=2;goto B65a24d;
case 0x65a24f:c.instructions+=1;goto B65a24f;
case 0x65a251:goto L65a251;
case 0x65a253:c.instructions+=1;goto B65a253;
case 0x65a255:goto L65a255;
case 0x65a25b:c.instructions+=1;goto B65a25b;
case 0x65a25d:goto L65a25d;
case 0x65a25f:c.instructions+=3;goto B65a25f;
case 0x65a266:c.instructions+=2;goto B65a266;
case 0x65a268:c.instructions+=1;goto B65a268;
case 0x65a26a:goto L65a26a;
case 0x65a271:c.instructions+=2;goto B65a271;
case 0x65a273:c.instructions+=1;goto B65a273;
case 0x65a275:goto L65a275;
case 0x65a277:goto L65a277;
case 0x65a27e:goto L65a27e;
case 0x65a283:c.instructions+=1;goto B65a283;
case 0x65a289:goto L65a289;
case 0x65a28a:c.instructions+=5;goto B65a28a;
case 0x65a28b:c.instructions+=4;goto B65a28b;
case 0x65a290:c.instructions+=3;goto B65a290;
case 0x65a293:c.instructions+=2;goto B65a293;
case 0x65a298:c.instructions+=1;goto B65a298;
case 0x65a29d:goto L65a29d;
case 0x65a2a3:c.instructions+=1;goto B65a2a3;
case 0x65a2a5:goto L65a2a5;
case 0x65a2aa:c.instructions+=2;goto B65a2aa;
case 0x65a2b0:c.instructions+=1;goto B65a2b0;
case 0x65a2b5:goto L65a2b5;
case 0x65a2bb:c.instructions+=3;goto B65a2bb;
case 0x65a2c0:c.instructions+=2;goto B65a2c0;
case 0x65a2c1:c.instructions+=1;goto B65a2c1;
case 0x65a2c2:goto L65a2c2;
case 0x65a2c4:c.instructions+=3;goto B65a2c4;
case 0x65a2c5:c.instructions+=2;goto B65a2c5;
case 0x65a2cb:c.instructions+=1;goto B65a2cb;
case 0x65a2d1:goto L65a2d1;
case 0x65a2d7:c.instructions+=2;goto B65a2d7;
case 0x65a2dd:c.instructions+=1;goto B65a2dd;
case 0x65a2e2:goto L65a2e2;
case 0x65a2e5:c.instructions+=3;goto B65a2e5;
case 0x65a2ed:c.instructions+=2;goto B65a2ed;
case 0x65a2ef:c.instructions+=1;goto B65a2ef;
case 0x65a2f1:goto L65a2f1;
case 0x65a2f3:c.instructions+=1;goto B65a2f3;
case 0x65a2f5:goto L65a2f5;
case 0x65a2fa:c.instructions+=1;goto B65a2fa;
case 0x65a2fc:goto L65a2fc;
case 0x65a304:c.instructions+=1;goto B65a304;
case 0x65a306:goto L65a306;
case 0x65a30c:c.instructions+=1;goto B65a30c;
case 0x65a30e:goto L65a30e;
case 0x65a30f:c.instructions+=4;goto B65a30f;
case 0x65a310:c.instructions+=3;goto B65a310;
case 0x65a317:c.instructions+=2;goto B65a317;
case 0x65a31d:c.instructions+=1;goto B65a31d;
case 0x65a31f:goto L65a31f;
case 0x65a325:c.instructions+=1;goto B65a325;
case 0x65a327:goto L65a327;
case 0x65a32f:c.instructions+=5;goto B65a32f;
case 0x65a330:c.instructions+=4;goto B65a330;
case 0x65a331:c.instructions+=3;goto B65a331;
case 0x65a337:c.instructions+=2;goto B65a337;
case 0x65a33a:c.instructions+=1;goto B65a33a;
case 0x65a33f:goto L65a33f;
case 0x65a346:c.instructions+=4;goto B65a346;
case 0x65a34c:c.instructions+=3;goto B65a34c;
case 0x65a34e:c.instructions+=2;goto B65a34e;
case 0x65a353:c.instructions+=1;goto B65a353;
case 0x65a358:goto L65a358;
case 0x65a35a:c.instructions+=1;goto B65a35a;
case 0x65a35c:goto L65a35c;
case 0x65a35f:c.instructions+=1;goto B65a35f;
case 0x65a364:goto L65a364;
case 0x65a369:c.instructions+=2;goto B65a369;
case 0x65a36f:c.instructions+=1;goto B65a36f;
case 0x65a374:goto L65a374;
case 0x65a375:c.instructions+=1;goto B65a375;
case 0x65a376:goto L65a376;
case 0x65a378:goto L65a378;
case 0x65a379:c.instructions+=4;goto B65a379;
case 0x65a37a:c.instructions+=3;goto B65a37a;
case 0x65a37b:c.instructions+=2;goto B65a37b;
case 0x65a37c:c.instructions+=1;goto B65a37c;
case 0x65a811:goto L65a811;
case 0x65a813:c.instructions+=9;goto B65a813;
case 0x65a814:c.instructions+=8;goto B65a814;
case 0x65a816:c.instructions+=7;goto B65a816;
case 0x65a819:c.instructions+=6;goto B65a819;
case 0x65a81a:c.instructions+=5;goto B65a81a;
case 0x65a81b:c.instructions+=4;goto B65a81b;
case 0x65a81d:c.instructions+=3;goto B65a81d;
case 0x65a81f:c.instructions+=2;goto B65a81f;
case 0x65a821:c.instructions+=1;goto B65a821;
case 0x65a823:goto L65a823;
case 0x65a828:c.instructions+=1;goto B65a828;
case 0x65a82d:goto L65a82d;
case 0x65a82f:c.instructions+=23;goto B65a82f;
case 0x65a832:c.instructions+=22;goto B65a832;
case 0x65a833:c.instructions+=21;goto B65a833;
case 0x65a835:c.instructions+=20;goto B65a835;
case 0x65a838:c.instructions+=19;goto B65a838;
case 0x65a83a:c.instructions+=18;goto B65a83a;
case 0x65a83b:c.instructions+=17;goto B65a83b;
case 0x65a83e:c.instructions+=16;goto B65a83e;
case 0x65a841:c.instructions+=15;goto B65a841;
case 0x65a844:c.instructions+=14;goto B65a844;
case 0x65a847:c.instructions+=13;goto B65a847;
case 0x65a84a:c.instructions+=12;goto B65a84a;
case 0x65a84d:c.instructions+=11;goto B65a84d;
case 0x65a850:c.instructions+=10;goto B65a850;
case 0x65a853:c.instructions+=9;goto B65a853;
case 0x65a856:c.instructions+=8;goto B65a856;
case 0x65a859:c.instructions+=7;goto B65a859;
case 0x65a85c:c.instructions+=6;goto B65a85c;
case 0x65a85f:c.instructions+=5;goto B65a85f;
case 0x65a862:c.instructions+=4;goto B65a862;
case 0x65a868:c.instructions+=3;goto B65a868;
case 0x65a86b:c.instructions+=2;goto B65a86b;
case 0x65a86c:c.instructions+=1;goto B65a86c;
case 0x65a871:goto L65a871;
case 0x65a873:c.instructions+=1;goto B65a873;
case 0x65a875:goto L65a875;
case 0x65a876:c.instructions+=3;goto B65a876;
case 0x65a877:c.instructions+=2;goto B65a877;
case 0x65a879:c.instructions+=1;goto B65a879;
case 0x65a87e:goto L65a87e;
case 0x65a883:goto L65a883;
case 0x65a885:c.instructions+=1;goto B65a885;
case 0x65a887:goto L65a887;
case 0x65a88a:goto L65a88a;
case 0x65a88d:c.instructions+=1;goto B65a88d;
case 0x65a892:goto L65a892;
case 0x65a894:c.instructions+=1;goto B65a894;
case 0x65a896:goto L65a896;
case 0x65a899:c.instructions+=1;goto B65a899;
case 0x65a89b:goto L65a89b;
case 0x65a89e:c.instructions+=5;goto B65a89e;
case 0x65a8a1:c.instructions+=4;goto B65a8a1;
case 0x65a8a4:c.instructions+=3;goto B65a8a4;
case 0x65a8a6:c.instructions+=2;goto B65a8a6;
case 0x65a8a9:c.instructions+=1;goto B65a8a9;
case 0x65a8ac:goto L65a8ac;
case 0x65a8af:c.instructions+=3;goto B65a8af;
case 0x65a8b1:c.instructions+=2;goto B65a8b1;
case 0x65a8b3:c.instructions+=1;goto B65a8b3;
case 0x65a8b8:goto L65a8b8;
case 0x65a8b9:goto L65a8b9;
case 0x65a8ba:c.instructions+=3;goto B65a8ba;
case 0x65a8bb:c.instructions+=2;goto B65a8bb;
case 0x65a8bc:c.instructions+=1;goto B65a8bc;
case 0x65a8bf:goto L65a8bf;
case 0x65a8c1:c.instructions+=5;goto B65a8c1;
case 0x65a8c4:c.instructions+=4;goto B65a8c4;
case 0x65a8c8:c.instructions+=3;goto B65a8c8;
case 0x65a8cc:c.instructions+=2;goto B65a8cc;
case 0x65a8d0:c.instructions+=1;goto B65a8d0;
case 0x65a8d1:goto L65a8d1;
case 0x65a8d3:c.instructions+=10;goto B65a8d3;
case 0x65a8d4:c.instructions+=9;goto B65a8d4;
case 0x65a8d6:c.instructions+=8;goto B65a8d6;
case 0x65a8dc:c.instructions+=7;goto B65a8dc;
case 0x65a8dd:c.instructions+=6;goto B65a8dd;
case 0x65a8df:c.instructions+=5;goto B65a8df;
case 0x65a8e2:c.instructions+=4;goto B65a8e2;
case 0x65a8e3:c.instructions+=3;goto B65a8e3;
case 0x65a8e5:c.instructions+=2;goto B65a8e5;
case 0x65a8e8:c.instructions+=1;goto B65a8e8;
case 0x65a8ea:goto L65a8ea;
case 0x65a8ef:c.instructions+=1;goto B65a8ef;
case 0x65a8f4:goto L65a8f4;
case 0x65a8f7:c.instructions+=2;goto B65a8f7;
case 0x65a8f8:c.instructions+=1;goto B65a8f8;
case 0x65a8fe:goto L65a8fe;
case 0x65a904:c.instructions+=3;goto B65a904;
case 0x65a905:c.instructions+=2;goto B65a905;
case 0x65a90f:c.instructions+=1;goto B65a90f;
case 0x65a915:goto L65a915;
case 0x65a91c:c.instructions+=1;goto B65a91c;
case 0x65a91e:goto L65a91e;
case 0x65a924:c.instructions+=9;goto B65a924;
case 0x65a925:c.instructions+=8;goto B65a925;
case 0x65a926:c.instructions+=7;goto B65a926;
case 0x65a927:c.instructions+=6;goto B65a927;
case 0x65a928:c.instructions+=5;goto B65a928;
case 0x65a92a:c.instructions+=4;goto B65a92a;
case 0x65a92d:c.instructions+=3;goto B65a92d;
case 0x65a92e:c.instructions+=2;goto B65a92e;
case 0x65a933:c.instructions+=1;goto B65a933;
case 0x65a935:goto L65a935;
case 0x65a936:c.instructions+=2;goto B65a936;
case 0x65a939:c.instructions+=1;goto B65a939;
case 0x65a93e:goto L65a93e;
case 0x65a940:c.instructions+=3;goto B65a940;
case 0x65a941:c.instructions+=2;goto B65a941;
case 0x65a944:c.instructions+=1;goto B65a944;
case 0x65a946:goto L65a946;
case 0x65a94b:c.instructions+=1;goto B65a94b;
case 0x65a950:goto L65a950;
case 0x65a951:c.instructions+=8;goto B65a951;
case 0x65a952:c.instructions+=7;goto B65a952;
case 0x65a955:c.instructions+=6;goto B65a955;
case 0x65a956:c.instructions+=5;goto B65a956;
case 0x65a958:c.instructions+=4;goto B65a958;
case 0x65a95b:c.instructions+=3;goto B65a95b;
case 0x65a95c:c.instructions+=2;goto B65a95c;
case 0x65a961:c.instructions+=1;goto B65a961;
case 0x65a963:goto L65a963;
case 0x65a966:c.instructions+=2;goto B65a966;
case 0x65a969:c.instructions+=1;goto B65a969;
case 0x65a96c:goto L65a96c;
case 0x65a96f:c.instructions+=1;goto B65a96f;
case 0x65a971:goto L65a971;
case 0x65a972:c.instructions+=7;goto B65a972;
case 0x65a977:c.instructions+=6;goto B65a977;
case 0x65a979:c.instructions+=5;goto B65a979;
case 0x65a97a:c.instructions+=4;goto B65a97a;
case 0x65a97c:c.instructions+=3;goto B65a97c;
case 0x65a981:c.instructions+=2;goto B65a981;
case 0x65a984:c.instructions+=1;goto B65a984;
case 0x65a98a:goto L65a98a;
case 0x65a98c:goto L65a98c;
case 0x65a98d:c.instructions+=7;goto B65a98d;
case 0x65a992:c.instructions+=6;goto B65a992;
case 0x65a994:c.instructions+=5;goto B65a994;
case 0x65a995:c.instructions+=4;goto B65a995;
case 0x65a997:c.instructions+=3;goto B65a997;
case 0x65a99c:c.instructions+=2;goto B65a99c;
case 0x65a99f:c.instructions+=1;goto B65a99f;
case 0x65a9a5:goto L65a9a5;
case 0x65a9a8:c.instructions+=2;goto B65a9a8;
case 0x65a9aa:c.instructions+=1;goto B65a9aa;
case 0x65a9af:goto L65a9af;
case 0x65a9b1:c.instructions+=3;goto B65a9b1;
case 0x65a9b4:c.instructions+=2;goto B65a9b4;
case 0x65a9b5:c.instructions+=1;goto B65a9b5;
case 0x65a9b7:goto L65a9b7;
case 0x65a9b8:c.instructions+=6;goto B65a9b8;
case 0x65a9b9:c.instructions+=5;goto B65a9b9;
case 0x65a9ba:c.instructions+=4;goto B65a9ba;
case 0x65a9bc:c.instructions+=3;goto B65a9bc;
case 0x65a9bd:c.instructions+=2;goto B65a9bd;
case 0x65a9be:c.instructions+=1;goto B65a9be;
case 0x65a9c4:goto L65a9c4;
case 0x65a9c7:c.instructions+=2;goto B65a9c7;
case 0x65a9ca:c.instructions+=1;goto B65a9ca;
case 0x65a9cc:goto L65a9cc;
case 0x65a9cd:c.instructions+=2;goto B65a9cd;
case 0x65a9cf:c.instructions+=1;goto B65a9cf;
case 0x65a9d5:goto L65a9d5;
case 0x65a9d8:c.instructions+=2;goto B65a9d8;
case 0x65a9db:c.instructions+=1;goto B65a9db;
case 0x65a9dd:goto L65a9dd;
case 0x65a9df:c.instructions+=1;goto B65a9df;
case 0x65a9e1:goto L65a9e1;
case 0x65a9e2:c.instructions+=5;goto B65a9e2;
case 0x65a9e3:c.instructions+=4;goto B65a9e3;
case 0x65a9e4:c.instructions+=3;goto B65a9e4;
case 0x65a9e6:c.instructions+=2;goto B65a9e6;
case 0x65a9e9:c.instructions+=1;goto B65a9e9;
case 0x65a9ef:goto L65a9ef;
case 0x65a9f1:c.instructions+=2;goto B65a9f1;
case 0x65a9f4:c.instructions+=1;goto B65a9f4;
case 0x65a9f6:goto L65a9f6;
case 0x65a9fc:goto L65a9fc;
case 0x65aa01:c.instructions+=1;goto B65aa01;
case 0x65aa03:goto L65aa03;
case 0x65aa06:goto L65aa06;
case 0x65aa08:goto L65aa08;
case 0x65aa09:goto L65aa09;
case 0x65aa0a:c.instructions+=3;goto B65aa0a;
case 0x65aa0b:c.instructions+=2;goto B65aa0b;
case 0x65aa0c:c.instructions+=1;goto B65aa0c;
case 0x65aa0f:goto L65aa0f;
case 0x65aa11:c.instructions+=6;goto B65aa11;
case 0x65aa12:c.instructions+=5;goto B65aa12;
case 0x65aa14:c.instructions+=4;goto B65aa14;
case 0x65aa17:c.instructions+=3;goto B65aa17;
case 0x65aa19:c.instructions+=2;goto B65aa19;
case 0x65aa1a:c.instructions+=1;goto B65aa1a;
case 0x65aa1c:goto L65aa1c;
case 0x65aa1d:c.instructions+=1;goto B65aa1d;
case 0x65aa23:goto L65aa23;
case 0x65aa27:c.instructions+=1;goto B65aa27;
case 0x65aa2b:goto L65aa2b;
case 0x65aa2e:c.instructions+=3;goto B65aa2e;
case 0x65aa31:c.instructions+=2;goto B65aa31;
case 0x65aa37:c.instructions+=1;goto B65aa37;
case 0x65aa39:goto L65aa39;
case 0x65aa3a:c.instructions+=1;goto B65aa3a;
case 0x65aa3c:goto L65aa3c;
case 0x65aa40:goto L65aa40;
case 0x65aa42:c.instructions+=2;goto B65aa42;
case 0x65aa45:c.instructions+=1;goto B65aa45;
case 0x65aa47:goto L65aa47;
case 0x65aa48:c.instructions+=1;goto B65aa48;
case 0x65aa4a:goto L65aa4a;
case 0x65aa4d:goto L65aa4d;
case 0x65aa4e:c.instructions+=3;goto B65aa4e;
case 0x65aa50:c.instructions+=2;goto B65aa50;
case 0x65aa51:c.instructions+=1;goto B65aa51;
case 0x65aa52:goto L65aa52;
case 0x65aa55:c.instructions+=1;goto B65aa55;
case 0x65aa57:goto L65aa57;
case 0x65aa5c:goto L65aa5c;
case 0x65aa5d:goto L65aa5d;
case 0x65aa5f:c.instructions+=8;goto B65aa5f;
case 0x65aa60:c.instructions+=7;goto B65aa60;
case 0x65aa62:c.instructions+=6;goto B65aa62;
case 0x65aa63:c.instructions+=5;goto B65aa63;
case 0x65aa64:c.instructions+=4;goto B65aa64;
case 0x65aa66:c.instructions+=3;goto B65aa66;
case 0x65aa69:c.instructions+=2;goto B65aa69;
case 0x65aa6a:c.instructions+=1;goto B65aa6a;
case 0x65aa6c:goto L65aa6c;
case 0x65aa6f:c.instructions+=1;goto B65aa6f;
case 0x65aa72:goto L65aa72;
case 0x65aa76:c.instructions+=2;goto B65aa76;
case 0x65aa79:c.instructions+=1;goto B65aa79;
case 0x65aa7b:goto L65aa7b;
case 0x65aa7f:goto L65aa7f;
case 0x65aa81:c.instructions+=8;goto B65aa81;
case 0x65aa83:c.instructions+=7;goto B65aa83;
case 0x65aa86:c.instructions+=6;goto B65aa86;
case 0x65aa87:c.instructions+=5;goto B65aa87;
case 0x65aa8a:c.instructions+=4;goto B65aa8a;
case 0x65aa8c:c.instructions+=3;goto B65aa8c;
case 0x65aa8d:c.instructions+=2;goto B65aa8d;
case 0x65aa8e:c.instructions+=1;goto B65aa8e;
case 0x65aa94:goto L65aa94;
case 0x65aa96:c.instructions+=1;goto B65aa96;
case 0x65aa98:goto L65aa98;
case 0x65aa9b:c.instructions+=3;goto B65aa9b;
case 0x65aa9c:c.instructions+=2;goto B65aa9c;
case 0x65aa9f:c.instructions+=1;goto B65aa9f;
case 0x65aaa1:goto L65aaa1;
case 0x65aaa3:goto L65aaa3;
case 0x65aaa4:c.instructions+=4;goto B65aaa4;
case 0x65aaa5:c.instructions+=3;goto B65aaa5;
case 0x65aaa6:c.instructions+=2;goto B65aaa6;
case 0x65aaa7:c.instructions+=1;goto B65aaa7;
case 0x65aaaa:goto L65aaaa;
case 0x65aaac:c.instructions+=13;goto B65aaac;
case 0x65aaad:c.instructions+=12;goto B65aaad;
case 0x65aaaf:c.instructions+=11;goto B65aaaf;
case 0x65aab0:c.instructions+=10;goto B65aab0;
case 0x65aab1:c.instructions+=9;goto B65aab1;
case 0x65aab3:c.instructions+=8;goto B65aab3;
case 0x65aab9:c.instructions+=7;goto B65aab9;
case 0x65aabb:c.instructions+=6;goto B65aabb;
case 0x65aabd:c.instructions+=5;goto B65aabd;
case 0x65aabf:c.instructions+=4;goto B65aabf;
case 0x65aac2:c.instructions+=3;goto B65aac2;
case 0x65aac3:c.instructions+=2;goto B65aac3;
case 0x65aac4:c.instructions+=1;goto B65aac4;
case 0x65aac9:goto L65aac9;
case 0x65aacb:c.instructions+=4;goto B65aacb;
case 0x65aacd:c.instructions+=3;goto B65aacd;
case 0x65aace:c.instructions+=2;goto B65aace;
case 0x65aad1:c.instructions+=1;goto B65aad1;
case 0x65aad3:goto L65aad3;
case 0x65aad8:c.instructions+=1;goto B65aad8;
case 0x65aada:goto L65aada;
case 0x65aae0:c.instructions+=5;goto B65aae0;
case 0x65aae3:c.instructions+=4;goto B65aae3;
case 0x65aae5:c.instructions+=3;goto B65aae5;
case 0x65aae6:c.instructions+=2;goto B65aae6;
case 0x65aaec:c.instructions+=1;goto B65aaec;
case 0x65aaef:goto L65aaef;
case 0x65aaf1:goto L65aaf1;
case 0x65aaf3:c.instructions+=1;goto B65aaf3;
case 0x65aaf6:goto L65aaf6;
case 0x65aaf8:goto L65aaf8;
case 0x65aafe:c.instructions+=1;goto B65aafe;
case 0x65ab03:goto L65ab03;
case 0x65ab06:c.instructions+=4;goto B65ab06;
case 0x65ab07:c.instructions+=3;goto B65ab07;
case 0x65ab0d:c.instructions+=2;goto B65ab0d;
case 0x65ab0f:c.instructions+=1;goto B65ab0f;
case 0x65ab10:goto L65ab10;
case 0x65ab11:c.instructions+=3;goto B65ab11;
case 0x65ab12:c.instructions+=2;goto B65ab12;
case 0x65ab13:c.instructions+=1;goto B65ab13;
case 0x65ab14:goto L65ab14;
case 0x65ab16:c.instructions+=8;goto B65ab16;
case 0x65ab17:c.instructions+=7;goto B65ab17;
case 0x65ab19:c.instructions+=6;goto B65ab19;
case 0x65ab1a:c.instructions+=5;goto B65ab1a;
case 0x65ab1b:c.instructions+=4;goto B65ab1b;
case 0x65ab1d:c.instructions+=3;goto B65ab1d;
case 0x65ab24:c.instructions+=2;goto B65ab24;
case 0x65ab25:c.instructions+=1;goto B65ab25;
case 0x65ab2b:goto L65ab2b;
case 0x65ab2e:c.instructions+=3;goto B65ab2e;
case 0x65ab31:c.instructions+=2;goto B65ab31;
case 0x65ab37:c.instructions+=1;goto B65ab37;
case 0x65ab3d:goto L65ab3d;
case 0x65ab43:c.instructions+=6;goto B65ab43;
case 0x65ab47:c.instructions+=5;goto B65ab47;
case 0x65ab4a:c.instructions+=4;goto B65ab4a;
case 0x65ab50:c.instructions+=3;goto B65ab50;
case 0x65ab53:c.instructions+=2;goto B65ab53;
case 0x65ab55:c.instructions+=1;goto B65ab55;
case 0x65ab5b:goto L65ab5b;
case 0x65ab62:c.instructions+=1;goto B65ab62;
case 0x65ab68:goto L65ab68;
case 0x65ab6a:goto L65ab6a;
case 0x65ab6c:c.instructions+=6;goto B65ab6c;
case 0x65ab6d:c.instructions+=5;goto B65ab6d;
case 0x65ab6f:c.instructions+=4;goto B65ab6f;
case 0x65ab71:c.instructions+=3;goto B65ab71;
case 0x65ab74:c.instructions+=2;goto B65ab74;
case 0x65ab76:c.instructions+=1;goto B65ab76;
case 0x65ab79:goto L65ab79;
case 0x65ab7b:c.instructions+=2;goto B65ab7b;
case 0x65ab7d:c.instructions+=1;goto B65ab7d;
case 0x65ab7f:goto L65ab7f;
case 0x65ab84:goto L65ab84;
case 0x65ab87:c.instructions+=7;goto B65ab87;
case 0x65ab89:c.instructions+=6;goto B65ab89;
case 0x65ab8a:c.instructions+=5;goto B65ab8a;
case 0x65ab8c:c.instructions+=4;goto B65ab8c;
case 0x65ab90:c.instructions+=3;goto B65ab90;
case 0x65ab93:c.instructions+=2;goto B65ab93;
case 0x65ab95:c.instructions+=1;goto B65ab95;
case 0x65ab97:goto L65ab97;
case 0x65ab9d:c.instructions+=2;goto B65ab9d;
case 0x65aba3:c.instructions+=1;goto B65aba3;
case 0x65aba5:goto L65aba5;
case 0x65aba7:c.instructions+=1;goto B65aba7;
case 0x65abac:goto L65abac;
case 0x65abae:c.instructions+=1;goto B65abae;
case 0x65abb4:goto L65abb4;
case 0x65abba:c.instructions+=10;goto B65abba;
case 0x65abbe:c.instructions+=9;goto B65abbe;
case 0x65abc4:c.instructions+=8;goto B65abc4;
case 0x65abc8:c.instructions+=7;goto B65abc8;
case 0x65abce:c.instructions+=6;goto B65abce;
case 0x65abd2:c.instructions+=5;goto B65abd2;
case 0x65abd8:c.instructions+=4;goto B65abd8;
case 0x65abdd:c.instructions+=3;goto B65abdd;
case 0x65abe0:c.instructions+=2;goto B65abe0;
case 0x65abe4:c.instructions+=1;goto B65abe4;
case 0x65abea:goto L65abea;
case 0x65abed:goto L65abed;
case 0x65abef:c.instructions+=2;goto B65abef;
case 0x65abf1:c.instructions+=1;goto B65abf1;
case 0x65abf3:goto L65abf3;
case 0x65abf8:goto L65abf8;
case 0x65abfb:c.instructions+=7;goto B65abfb;
case 0x65abfe:c.instructions+=6;goto B65abfe;
case 0x65ac04:c.instructions+=5;goto B65ac04;
case 0x65ac07:c.instructions+=4;goto B65ac07;
case 0x65ac0a:c.instructions+=3;goto B65ac0a;
case 0x65ac0c:c.instructions+=2;goto B65ac0c;
case 0x65ac0f:c.instructions+=1;goto B65ac0f;
case 0x65ac15:goto L65ac15;
case 0x65ac1c:c.instructions+=2;goto B65ac1c;
case 0x65ac1f:c.instructions+=1;goto B65ac1f;
case 0x65ac21:goto L65ac21;
case 0x65ac24:goto L65ac24;
case 0x65ac26:c.instructions+=12;goto B65ac26;
case 0x65ac2a:c.instructions+=11;goto B65ac2a;
case 0x65ac2e:c.instructions+=10;goto B65ac2e;
case 0x65ac31:c.instructions+=9;goto B65ac31;
case 0x65ac34:c.instructions+=8;goto B65ac34;
case 0x65ac3a:c.instructions+=7;goto B65ac3a;
case 0x65ac3d:c.instructions+=6;goto B65ac3d;
case 0x65ac41:c.instructions+=5;goto B65ac41;
case 0x65ac48:c.instructions+=4;goto B65ac48;
case 0x65ac4b:c.instructions+=3;goto B65ac4b;
case 0x65ac4d:c.instructions+=2;goto B65ac4d;
case 0x65ac50:c.instructions+=1;goto B65ac50;
case 0x65ac52:goto L65ac52;
case 0x65ac57:goto L65ac57;
case 0x65ac5a:c.instructions+=10;goto B65ac5a;
case 0x65ac5e:c.instructions+=9;goto B65ac5e;
case 0x65ac62:c.instructions+=8;goto B65ac62;
case 0x65ac65:c.instructions+=7;goto B65ac65;
case 0x65ac68:c.instructions+=6;goto B65ac68;
case 0x65ac6e:c.instructions+=5;goto B65ac6e;
case 0x65ac71:c.instructions+=4;goto B65ac71;
case 0x65ac75:c.instructions+=3;goto B65ac75;
case 0x65ac79:c.instructions+=2;goto B65ac79;
case 0x65ac7f:c.instructions+=1;goto B65ac7f;
case 0x65ac81:goto L65ac81;
case 0x65ac87:c.instructions+=2;goto B65ac87;
case 0x65ac8d:c.instructions+=1;goto B65ac8d;
case 0x65ac8f:goto L65ac8f;
case 0x65ac91:c.instructions+=1;goto B65ac91;
case 0x65ac96:goto L65ac96;
case 0x65ac98:c.instructions+=1;goto B65ac98;
case 0x65ac9a:goto L65ac9a;
case 0x65aca0:c.instructions+=10;goto B65aca0;
case 0x65aca4:c.instructions+=9;goto B65aca4;
case 0x65acaa:c.instructions+=8;goto B65acaa;
case 0x65acae:c.instructions+=7;goto B65acae;
case 0x65acb4:c.instructions+=6;goto B65acb4;
case 0x65acba:c.instructions+=5;goto B65acba;
case 0x65acbe:c.instructions+=4;goto B65acbe;
case 0x65acc3:c.instructions+=3;goto B65acc3;
case 0x65acc7:c.instructions+=2;goto B65acc7;
case 0x65accd:c.instructions+=1;goto B65accd;
case 0x65acd0:goto L65acd0;
case 0x65acd3:c.instructions+=2;goto B65acd3;
case 0x65acd6:c.instructions+=1;goto B65acd6;
case 0x65acdc:goto L65acdc;
case 0x65acde:goto L65acde;
case 0x65acdf:c.instructions+=4;goto B65acdf;
case 0x65ace0:c.instructions+=3;goto B65ace0;
case 0x65ace1:c.instructions+=2;goto B65ace1;
case 0x65ace2:c.instructions+=1;goto B65ace2;
case 0x65ace5:goto L65ace5;
case 0x65ace7:c.instructions+=9;goto B65ace7;
case 0x65ace8:c.instructions+=8;goto B65ace8;
case 0x65acea:c.instructions+=7;goto B65acea;
case 0x65aceb:c.instructions+=6;goto B65aceb;
case 0x65acec:c.instructions+=5;goto B65acec;
case 0x65acef:c.instructions+=4;goto B65acef;
case 0x65acf1:c.instructions+=3;goto B65acf1;
case 0x65acf3:c.instructions+=2;goto B65acf3;
case 0x65acf7:c.instructions+=1;goto B65acf7;
case 0x65acf9:goto L65acf9;
case 0x65acfe:c.instructions+=1;goto B65acfe;
case 0x65ad03:goto L65ad03;
case 0x65ad06:c.instructions+=2;goto B65ad06;
case 0x65ad08:c.instructions+=1;goto B65ad08;
case 0x65ad0a:goto L65ad0a;
case 0x65ad0d:c.instructions+=2;goto B65ad0d;
case 0x65ad10:c.instructions+=1;goto B65ad10;
case 0x65ad13:goto L65ad13;
case 0x65ad14:c.instructions+=6;goto B65ad14;
case 0x65ad18:c.instructions+=5;goto B65ad18;
case 0x65ad1e:c.instructions+=4;goto B65ad1e;
case 0x65ad24:c.instructions+=3;goto B65ad24;
case 0x65ad2b:c.instructions+=2;goto B65ad2b;
case 0x65ad2e:c.instructions+=1;goto B65ad2e;
case 0x65ad34:goto L65ad34;
case 0x65ad3a:c.instructions+=2;goto B65ad3a;
case 0x65ad3c:c.instructions+=1;goto B65ad3c;
case 0x65ad3e:goto L65ad3e;
case 0x65ad40:c.instructions+=3;goto B65ad40;
case 0x65ad42:c.instructions+=2;goto B65ad42;
case 0x65ad43:c.instructions+=1;goto B65ad43;
case 0x65ad46:goto L65ad46;
case 0x65ad48:goto L65ad48;
case 0x65ad4a:goto L65ad4a;
case 0x65ad4c:c.instructions+=1;goto B65ad4c;
case 0x65ad4e:goto L65ad4e;
case 0x65ad55:c.instructions+=1;goto B65ad55;
case 0x65ad57:goto L65ad57;
case 0x65ad5d:c.instructions+=2;goto B65ad5d;
case 0x65ad5f:c.instructions+=1;goto B65ad5f;
case 0x65ad61:goto L65ad61;
case 0x65ad63:c.instructions+=3;goto B65ad63;
case 0x65ad65:c.instructions+=2;goto B65ad65;
case 0x65ad66:c.instructions+=1;goto B65ad66;
case 0x65ad69:goto L65ad69;
case 0x65ad6b:goto L65ad6b;
case 0x65ad6d:goto L65ad6d;
case 0x65ad6f:c.instructions+=1;goto B65ad6f;
case 0x65ad71:goto L65ad71;
case 0x65ad77:c.instructions+=2;goto B65ad77;
case 0x65ad79:c.instructions+=1;goto B65ad79;
case 0x65ad7b:goto L65ad7b;
case 0x65ad7d:c.instructions+=3;goto B65ad7d;
case 0x65ad7f:c.instructions+=2;goto B65ad7f;
case 0x65ad80:c.instructions+=1;goto B65ad80;
case 0x65ad83:goto L65ad83;
case 0x65ad85:goto L65ad85;
case 0x65ad87:goto L65ad87;
case 0x65ad89:c.instructions+=1;goto B65ad89;
case 0x65ad8b:goto L65ad8b;
case 0x65ad92:c.instructions+=1;goto B65ad92;
case 0x65ad94:goto L65ad94;
case 0x65ad9a:c.instructions+=2;goto B65ad9a;
case 0x65ad9c:c.instructions+=1;goto B65ad9c;
case 0x65ad9e:goto L65ad9e;
case 0x65ada0:c.instructions+=3;goto B65ada0;
case 0x65ada2:c.instructions+=2;goto B65ada2;
case 0x65ada3:c.instructions+=1;goto B65ada3;
case 0x65ada6:goto L65ada6;
case 0x65ada8:goto L65ada8;
case 0x65adaa:goto L65adaa;
case 0x65adac:c.instructions+=1;goto B65adac;
case 0x65adae:goto L65adae;
case 0x65adb4:c.instructions+=2;goto B65adb4;
case 0x65adb6:c.instructions+=1;goto B65adb6;
case 0x65adb8:goto L65adb8;
case 0x65adba:c.instructions+=3;goto B65adba;
case 0x65adbc:c.instructions+=2;goto B65adbc;
case 0x65adbd:c.instructions+=1;goto B65adbd;
case 0x65adc0:goto L65adc0;
case 0x65adc2:goto L65adc2;
case 0x65adc4:goto L65adc4;
case 0x65adc5:goto L65adc5;
case 0x65adc6:c.instructions+=3;goto B65adc6;
case 0x65adc7:c.instructions+=2;goto B65adc7;
case 0x65adc8:c.instructions+=1;goto B65adc8;
case 0x65adcb:goto L65adcb;
case 0x65adcd:c.instructions+=7;goto B65adcd;
case 0x65adce:c.instructions+=6;goto B65adce;
case 0x65add0:c.instructions+=5;goto B65add0;
case 0x65add3:c.instructions+=4;goto B65add3;
case 0x65add9:c.instructions+=3;goto B65add9;
case 0x65ade0:c.instructions+=2;goto B65ade0;
case 0x65ade2:c.instructions+=1;goto B65ade2;
case 0x65ade4:goto L65ade4;
case 0x65ade6:c.instructions+=2;goto B65ade6;
case 0x65ade8:c.instructions+=1;goto B65ade8;
case 0x65adea:goto L65adea;
case 0x65adeb:c.instructions+=1;goto B65adeb;
case 0x65adec:goto L65adec;
case 0x65adf2:c.instructions+=11;goto B65adf2;
case 0x65adf5:c.instructions+=10;goto B65adf5;
case 0x65adf8:c.instructions+=9;goto B65adf8;
case 0x65adfb:c.instructions+=8;goto B65adfb;
case 0x65adff:c.instructions+=7;goto B65adff;
case 0x65ae02:c.instructions+=6;goto B65ae02;
case 0x65ae05:c.instructions+=5;goto B65ae05;
case 0x65ae09:c.instructions+=4;goto B65ae09;
case 0x65ae0d:c.instructions+=3;goto B65ae0d;
case 0x65ae0e:c.instructions+=2;goto B65ae0e;
case 0x65ae14:c.instructions+=1;goto B65ae14;
case 0x65ae16:goto L65ae16;
case 0x65ae17:c.instructions+=1;goto B65ae17;
case 0x65ae18:goto L65ae18;
case 0x65ae1f:goto L65ae1f;
case 0x65ae21:c.instructions+=2;goto B65ae21;
case 0x65ae22:c.instructions+=1;goto B65ae22;
case 0x65ae25:goto L65ae25;
case 0x65ae27:c.instructions+=17;goto B65ae27;
case 0x65ae28:c.instructions+=16;goto B65ae28;
case 0x65ae2a:c.instructions+=15;goto B65ae2a;
case 0x65ae2d:c.instructions+=14;goto B65ae2d;
case 0x65ae2e:c.instructions+=13;goto B65ae2e;
case 0x65ae2f:c.instructions+=12;goto B65ae2f;
case 0x65ae32:c.instructions+=11;goto B65ae32;
case 0x65ae35:c.instructions+=10;goto B65ae35;
case 0x65ae38:c.instructions+=9;goto B65ae38;
case 0x65ae3a:c.instructions+=8;goto B65ae3a;
case 0x65ae3e:c.instructions+=7;goto B65ae3e;
case 0x65ae41:c.instructions+=6;goto B65ae41;
case 0x65ae44:c.instructions+=5;goto B65ae44;
case 0x65ae45:c.instructions+=4;goto B65ae45;
case 0x65ae48:c.instructions+=3;goto B65ae48;
case 0x65ae4b:c.instructions+=2;goto B65ae4b;
case 0x65ae4d:c.instructions+=1;goto B65ae4d;
case 0x65ae4f:goto L65ae4f;
case 0x65ae51:c.instructions+=1;goto B65ae51;
case 0x65ae55:goto L65ae55;
case 0x65ae58:c.instructions+=6;goto B65ae58;
case 0x65ae5a:c.instructions+=5;goto B65ae5a;
case 0x65ae5e:c.instructions+=4;goto B65ae5e;
case 0x65ae61:c.instructions+=3;goto B65ae61;
case 0x65ae64:c.instructions+=2;goto B65ae64;
case 0x65ae66:c.instructions+=1;goto B65ae66;
case 0x65ae68:goto L65ae68;
case 0x65ae6a:c.instructions+=1;goto B65ae6a;
case 0x65ae6e:goto L65ae6e;
case 0x65ae71:c.instructions+=5;goto B65ae71;
case 0x65ae73:c.instructions+=4;goto B65ae73;
case 0x65ae75:c.instructions+=3;goto B65ae75;
case 0x65ae79:c.instructions+=2;goto B65ae79;
case 0x65ae7c:c.instructions+=1;goto B65ae7c;
case 0x65ae82:goto L65ae82;
case 0x65ae85:c.instructions+=7;goto B65ae85;
case 0x65ae89:c.instructions+=6;goto B65ae89;
case 0x65ae8c:c.instructions+=5;goto B65ae8c;
case 0x65ae8f:c.instructions+=4;goto B65ae8f;
case 0x65ae92:c.instructions+=3;goto B65ae92;
case 0x65ae94:c.instructions+=2;goto B65ae94;
case 0x65ae97:c.instructions+=1;goto B65ae97;
case 0x65ae99:goto L65ae99;
case 0x65ae9c:c.instructions+=3;goto B65ae9c;
case 0x65ae9f:c.instructions+=2;goto B65ae9f;
case 0x65aea2:c.instructions+=1;goto B65aea2;
case 0x65aea5:goto L65aea5;
case 0x65aea8:c.instructions+=2;goto B65aea8;
case 0x65aeaa:c.instructions+=1;goto B65aeaa;
case 0x65aeac:goto L65aeac;
case 0x65aeae:c.instructions+=1;goto B65aeae;
case 0x65aeaf:goto L65aeaf;
case 0x65aeb3:c.instructions+=2;goto B65aeb3;
case 0x65aeb5:c.instructions+=1;goto B65aeb5;
case 0x65aeb7:goto L65aeb7;
case 0x65aebb:c.instructions+=1;goto B65aebb;
case 0x65aebd:goto L65aebd;
case 0x65aec0:c.instructions+=6;goto B65aec0;
case 0x65aec3:c.instructions+=5;goto B65aec3;
case 0x65aec7:c.instructions+=4;goto B65aec7;
case 0x65aeca:c.instructions+=3;goto B65aeca;
case 0x65aecb:c.instructions+=2;goto B65aecb;
case 0x65aecc:c.instructions+=1;goto B65aecc;
case 0x65aed1:goto L65aed1;
case 0x65aed3:goto L65aed3;
case 0x65aed6:c.instructions+=1;goto B65aed6;
case 0x65aed8:goto L65aed8;
case 0x65aedc:c.instructions+=1;goto B65aedc;
case 0x65aede:goto L65aede;
case 0x65aee1:c.instructions+=7;goto B65aee1;
case 0x65aee5:c.instructions+=6;goto B65aee5;
case 0x65aee6:c.instructions+=5;goto B65aee6;
case 0x65aee9:c.instructions+=4;goto B65aee9;
case 0x65aeed:c.instructions+=3;goto B65aeed;
case 0x65aef0:c.instructions+=2;goto B65aef0;
case 0x65aef1:c.instructions+=1;goto B65aef1;
case 0x65aef6:goto L65aef6;
case 0x65aef8:goto L65aef8;
case 0x65aefc:c.instructions+=3;goto B65aefc;
case 0x65aeff:c.instructions+=2;goto B65aeff;
case 0x65af02:c.instructions+=1;goto B65af02;
case 0x65af08:goto L65af08;
case 0x65af09:c.instructions+=5;goto B65af09;
case 0x65af0a:c.instructions+=4;goto B65af0a;
case 0x65af0c:c.instructions+=3;goto B65af0c;
case 0x65af0d:c.instructions+=2;goto B65af0d;
case 0x65af0e:c.instructions+=1;goto B65af0e;
case 0x65af11:goto L65af11;
case 0x65af13:c.instructions+=11;goto B65af13;
case 0x65af14:c.instructions+=10;goto B65af14;
case 0x65af16:c.instructions+=9;goto B65af16;
case 0x65af1c:c.instructions+=8;goto B65af1c;
case 0x65af1d:c.instructions+=7;goto B65af1d;
case 0x65af1f:c.instructions+=6;goto B65af1f;
case 0x65af22:c.instructions+=5;goto B65af22;
case 0x65af23:c.instructions+=4;goto B65af23;
case 0x65af24:c.instructions+=3;goto B65af24;
case 0x65af26:c.instructions+=2;goto B65af26;
case 0x65af29:c.instructions+=1;goto B65af29;
case 0x65af2b:goto L65af2b;
case 0x65af31:c.instructions+=2;goto B65af31;
case 0x65af33:c.instructions+=1;goto B65af33;
case 0x65af35:goto L65af35;
case 0x65af37:c.instructions+=3;goto B65af37;
case 0x65af39:c.instructions+=2;goto B65af39;
case 0x65af3a:c.instructions+=1;goto B65af3a;
case 0x65af3d:goto L65af3d;
case 0x65af3f:c.instructions+=2;goto B65af3f;
case 0x65af42:c.instructions+=1;goto B65af42;
case 0x65af47:goto L65af47;
case 0x65af4a:c.instructions+=5;goto B65af4a;
case 0x65af4b:c.instructions+=4;goto B65af4b;
case 0x65af51:c.instructions+=3;goto B65af51;
case 0x65af52:c.instructions+=2;goto B65af52;
case 0x65af55:c.instructions+=1;goto B65af55;
case 0x65af5a:goto L65af5a;
case 0x65af5c:c.instructions+=2;goto B65af5c;
case 0x65af5e:c.instructions+=1;goto B65af5e;
case 0x65af64:goto L65af64;
case 0x65af68:c.instructions+=1;goto B65af68;
case 0x65af6a:goto L65af6a;
case 0x65af6f:c.instructions+=1;goto B65af6f;
case 0x65af74:goto L65af74;
case 0x65af76:c.instructions+=2;goto B65af76;
case 0x65af79:c.instructions+=1;goto B65af79;
case 0x65af7b:goto L65af7b;
case 0x65af7d:c.instructions+=15;goto B65af7d;
case 0x65af80:c.instructions+=14;goto B65af80;
case 0x65af87:c.instructions+=13;goto B65af87;
case 0x65af8a:c.instructions+=12;goto B65af8a;
case 0x65af8d:c.instructions+=11;goto B65af8d;
case 0x65af91:c.instructions+=10;goto B65af91;
case 0x65af94:c.instructions+=9;goto B65af94;
case 0x65af98:c.instructions+=8;goto B65af98;
case 0x65af9b:c.instructions+=7;goto B65af9b;
case 0x65afa2:c.instructions+=6;goto B65afa2;
case 0x65afa9:c.instructions+=5;goto B65afa9;
case 0x65afb0:c.instructions+=4;goto B65afb0;
case 0x65afb1:c.instructions+=3;goto B65afb1;
case 0x65afb4:c.instructions+=2;goto B65afb4;
case 0x65afbb:c.instructions+=1;goto B65afbb;
case 0x65afbd:goto L65afbd;
case 0x65afc2:c.instructions+=11;goto B65afc2;
case 0x65afc9:c.instructions+=10;goto B65afc9;
case 0x65afce:c.instructions+=9;goto B65afce;
case 0x65afd1:c.instructions+=8;goto B65afd1;
case 0x65afd2:c.instructions+=7;goto B65afd2;
case 0x65afd9:c.instructions+=6;goto B65afd9;
case 0x65afdc:c.instructions+=5;goto B65afdc;
case 0x65afde:c.instructions+=4;goto B65afde;
case 0x65afe4:c.instructions+=3;goto B65afe4;
case 0x65afe5:c.instructions+=2;goto B65afe5;
case 0x65afe6:c.instructions+=1;goto B65afe6;
case 0x65afec:goto L65afec;
case 0x65afee:c.instructions+=2;goto B65afee;
case 0x65aff0:c.instructions+=1;goto B65aff0;
case 0x65aff2:goto L65aff2;
case 0x65aff5:c.instructions+=4;goto B65aff5;
case 0x65aff8:c.instructions+=3;goto B65aff8;
case 0x65affa:c.instructions+=2;goto B65affa;
case 0x65affb:c.instructions+=1;goto B65affb;
default:missing_instruction(c.pc);}
B65a001:L65a001:{c.instructions+=3;NFSU2_TR(0x65a001);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a003:{NFSU2_TR(0x65a003);
u8 U[4];
w4(U+0,u32(0xfbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a008:{NFSU2_TR(0x65a008);
{goto L65a1b7;}
}
B65a00d:L65a00d:{c.instructions+=3;NFSU2_TR(0x65a00d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a00f:{NFSU2_TR(0x65a00f);
u8 U[4];
w4(U+0,u32(0xfcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a014:{NFSU2_TR(0x65a014);
{goto L65a1b7;}
}
B65a019:L65a019:{c.instructions+=3;NFSU2_TR(0x65a019);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a01a:{NFSU2_TR(0x65a01a);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a01f:{NFSU2_TR(0x65a01f);
{goto L65a1b7;}
}
B65a024:L65a024:{c.instructions+=3;NFSU2_TR(0x65a024);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a026:{NFSU2_TR(0x65a026);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a02b:{NFSU2_TR(0x65a02b);
{goto L65a1b7;}
}
B65a030:L65a030:{c.instructions+=3;NFSU2_TR(0x65a030);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a031:{NFSU2_TR(0x65a031);
u8 U[4];
w4(U+0,u32(0x101ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a036:{NFSU2_TR(0x65a036);
{goto L65a1b7;}
}
B65a03b:L65a03b:{c.instructions+=3;NFSU2_TR(0x65a03b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a03c:{NFSU2_TR(0x65a03c);
u8 U[4];
w4(U+0,u32(0x102ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a041:{NFSU2_TR(0x65a041);
{goto L65a1b7;}
}
B65a046:L65a046:{c.instructions+=3;NFSU2_TR(0x65a046);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a047:{NFSU2_TR(0x65a047);
u8 U[4];
w4(U+0,u32(0x103ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a04c:{NFSU2_TR(0x65a04c);
{goto L65a1b7;}
}
B65a051:L65a051:{c.instructions+=3;NFSU2_TR(0x65a051);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a052:{NFSU2_TR(0x65a052);
u8 U[4];
w4(U+0,u32(0x104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a057:{NFSU2_TR(0x65a057);
{goto L65a1b7;}
}
B65a05c:L65a05c:{c.instructions+=3;NFSU2_TR(0x65a05c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a05d:{NFSU2_TR(0x65a05d);
u8 U[4];
w4(U+0,u32(0x105ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a062:{NFSU2_TR(0x65a062);
{goto L65a1b7;}
}
B65a067:L65a067:{c.instructions+=3;NFSU2_TR(0x65a067);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a068:{NFSU2_TR(0x65a068);
u8 U[4];
w4(U+0,u32(0x106ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a06d:{NFSU2_TR(0x65a06d);
{goto L65a1b7;}
}
B65a072:L65a072:{c.instructions+=3;NFSU2_TR(0x65a072);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a074:{NFSU2_TR(0x65a074);
u8 U[4];
w4(U+0,u32(0x107ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a079:{NFSU2_TR(0x65a079);
{goto L65a1b7;}
}
B65a07e:L65a07e:{c.instructions+=3;NFSU2_TR(0x65a07e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a07f:{NFSU2_TR(0x65a07f);
u8 U[4];
w4(U+0,u32(0x108ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a084:{NFSU2_TR(0x65a084);
{goto L65a1b7;}
}
B65a089:L65a089:{c.instructions+=3;NFSU2_TR(0x65a089);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a08a:{NFSU2_TR(0x65a08a);
u8 U[4];
w4(U+0,u32(0x109ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a08f:{NFSU2_TR(0x65a08f);
{goto L65a1b7;}
}
B65a094:L65a094:{c.instructions+=3;NFSU2_TR(0x65a094);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a096:{NFSU2_TR(0x65a096);
u8 U[4];
w4(U+0,u32(0x10aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a09b:{NFSU2_TR(0x65a09b);
{goto L65a1b7;}
}
B65a0a0:L65a0a0:{c.instructions+=3;NFSU2_TR(0x65a0a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a0a1:{NFSU2_TR(0x65a0a1);
u8 U[4];
w4(U+0,u32(0x10bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a0a6:{NFSU2_TR(0x65a0a6);
{goto L65a1b7;}
}
B65a0ab:L65a0ab:{c.instructions+=3;NFSU2_TR(0x65a0ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a0ac:{NFSU2_TR(0x65a0ac);
u8 U[4];
w4(U+0,u32(0x10cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a0b1:{NFSU2_TR(0x65a0b1);
{goto L65a1b7;}
}
B65a0b6:L65a0b6:{c.instructions+=3;NFSU2_TR(0x65a0b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a0b7:{NFSU2_TR(0x65a0b7);
u8 U[4];
w4(U+0,u32(0x10dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a0bc:{NFSU2_TR(0x65a0bc);
{goto L65a1b7;}
}
B65a0c1:L65a0c1:{c.instructions+=3;NFSU2_TR(0x65a0c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a0c2:{NFSU2_TR(0x65a0c2);
u8 U[4];
w4(U+0,u32(0x10eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a0c7:{NFSU2_TR(0x65a0c7);
{goto L65a1b7;}
}
B65a0cc:L65a0cc:{c.instructions+=3;NFSU2_TR(0x65a0cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a0cd:{NFSU2_TR(0x65a0cd);
u8 U[4];
w4(U+0,u32(0x10full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a0d2:{NFSU2_TR(0x65a0d2);
{goto L65a1b7;}
}
B65a0d7:L65a0d7:{c.instructions+=3;NFSU2_TR(0x65a0d7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a0d9:{NFSU2_TR(0x65a0d9);
u8 U[4];
w4(U+0,u32(0x110ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a0de:{NFSU2_TR(0x65a0de);
{goto L65a1b7;}
}
B65a0e3:L65a0e3:{c.instructions+=3;NFSU2_TR(0x65a0e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a0e4:{NFSU2_TR(0x65a0e4);
u8 U[4];
w4(U+0,u32(0x111ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a0e9:{NFSU2_TR(0x65a0e9);
{goto L65a1b7;}
}
B65a0ee:L65a0ee:{c.instructions+=3;NFSU2_TR(0x65a0ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a0ef:{NFSU2_TR(0x65a0ef);
u8 U[4];
w4(U+0,u32(0x112ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a0f4:{NFSU2_TR(0x65a0f4);
{goto L65a1b7;}
}
B65a0f9:L65a0f9:{c.instructions+=3;NFSU2_TR(0x65a0f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a0fa:{NFSU2_TR(0x65a0fa);
u8 U[4];
w4(U+0,u32(0x113ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a0ff:{NFSU2_TR(0x65a0ff);
{goto L65a1b7;}
}
B65a104:L65a104:{c.instructions+=3;NFSU2_TR(0x65a104);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a105:{NFSU2_TR(0x65a105);
u8 U[4];
w4(U+0,u32(0x114ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a10a:{NFSU2_TR(0x65a10a);
{goto L65a1b7;}
}
B65a10f:L65a10f:{c.instructions+=3;NFSU2_TR(0x65a10f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a110:{NFSU2_TR(0x65a110);
u8 U[4];
w4(U+0,u32(0x115ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a115:{NFSU2_TR(0x65a115);
{goto L65a1b7;}
}
B65a11a:L65a11a:{c.instructions+=3;NFSU2_TR(0x65a11a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a11b:{NFSU2_TR(0x65a11b);
u8 U[4];
w4(U+0,u32(0x116ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a120:{NFSU2_TR(0x65a120);
{goto L65a1b7;}
}
B65a125:L65a125:{c.instructions+=3;NFSU2_TR(0x65a125);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a126:{NFSU2_TR(0x65a126);
u8 U[4];
w4(U+0,u32(0x117ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a12b:{NFSU2_TR(0x65a12b);
{goto L65a1b7;}
}
B65a130:L65a130:{c.instructions+=3;NFSU2_TR(0x65a130);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a131:{NFSU2_TR(0x65a131);
u8 U[4];
w4(U+0,u32(0x118ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a136:{NFSU2_TR(0x65a136);
{goto L65a1b7;}
}
B65a138:L65a138:{c.instructions+=3;NFSU2_TR(0x65a138);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a139:{NFSU2_TR(0x65a139);
u8 U[4];
w4(U+0,u32(0x119ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a13e:{NFSU2_TR(0x65a13e);
{goto L65a1b7;}
}
B65a140:L65a140:{c.instructions+=3;NFSU2_TR(0x65a140);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a141:{NFSU2_TR(0x65a141);
u8 U[4];
w4(U+0,u32(0x11aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a146:{NFSU2_TR(0x65a146);
{goto L65a1b7;}
}
B65a148:L65a148:{c.instructions+=3;NFSU2_TR(0x65a148);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a149:{NFSU2_TR(0x65a149);
u8 U[4];
w4(U+0,u32(0x11bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a14e:{NFSU2_TR(0x65a14e);
{goto L65a1b7;}
}
B65a150:L65a150:{c.instructions+=3;NFSU2_TR(0x65a150);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a151:{NFSU2_TR(0x65a151);
u8 U[4];
w4(U+0,u32(0x11cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a156:{NFSU2_TR(0x65a156);
{goto L65a1b7;}
}
B65a158:L65a158:{c.instructions+=3;NFSU2_TR(0x65a158);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a159:{NFSU2_TR(0x65a159);
u8 U[4];
w4(U+0,u32(0x11dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a15e:{NFSU2_TR(0x65a15e);
{goto L65a1b7;}
}
B65a160:L65a160:{c.instructions+=3;NFSU2_TR(0x65a160);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a161:{NFSU2_TR(0x65a161);
u8 U[4];
w4(U+0,u32(0x11eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a166:{NFSU2_TR(0x65a166);
{goto L65a1b7;}
}
B65a168:L65a168:{c.instructions+=3;NFSU2_TR(0x65a168);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a169:{NFSU2_TR(0x65a169);
u8 U[4];
w4(U+0,u32(0x11full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a16e:{NFSU2_TR(0x65a16e);
{goto L65a1b7;}
}
B65a170:L65a170:{c.instructions+=3;NFSU2_TR(0x65a170);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a171:{NFSU2_TR(0x65a171);
u8 U[4];
w4(U+0,u32(0x120ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a176:{NFSU2_TR(0x65a176);
{goto L65a1b7;}
}
B65a178:L65a178:{c.instructions+=3;NFSU2_TR(0x65a178);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a179:{NFSU2_TR(0x65a179);
u8 U[4];
w4(U+0,u32(0x121ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a17e:{NFSU2_TR(0x65a17e);
{goto L65a1b7;}
}
B65a180:L65a180:{c.instructions+=3;NFSU2_TR(0x65a180);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a182:{NFSU2_TR(0x65a182);
u8 U[4];
w4(U+0,u32(0x122ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a187:{NFSU2_TR(0x65a187);
{goto L65a1b7;}
}
B65a189:L65a189:{c.instructions+=3;NFSU2_TR(0x65a189);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a18a:{NFSU2_TR(0x65a18a);
u8 U[4];
w4(U+0,u32(0x123ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a18f:{NFSU2_TR(0x65a18f);
{goto L65a1b7;}
}
B65a191:L65a191:{c.instructions+=3;NFSU2_TR(0x65a191);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a192:{NFSU2_TR(0x65a192);
u8 U[4];
w4(U+0,u32(0x124ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a197:{NFSU2_TR(0x65a197);
{goto L65a1b7;}
}
B65a199:L65a199:{c.instructions+=3;NFSU2_TR(0x65a199);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a19a:{NFSU2_TR(0x65a19a);
u8 U[4];
w4(U+0,u32(0x125ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a19f:{NFSU2_TR(0x65a19f);
{goto L65a1b7;}
}
B65a1a1:L65a1a1:{c.instructions+=3;NFSU2_TR(0x65a1a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a1a2:{NFSU2_TR(0x65a1a2);
u8 U[4];
w4(U+0,u32(0x126ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a1a7:{NFSU2_TR(0x65a1a7);
{goto L65a1b7;}
}
B65a1a9:L65a1a9:{c.instructions+=3;NFSU2_TR(0x65a1a9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a1aa:{NFSU2_TR(0x65a1aa);
u8 U[4];
w4(U+0,u32(0x127ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a1af:{NFSU2_TR(0x65a1af);
{goto L65a1b7;}
}
B65a1b1:L65a1b1:{c.instructions+=2;NFSU2_TR(0x65a1b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a1b2:{NFSU2_TR(0x65a1b2);
u8 U[4];
w4(U+0,u32(0x128ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a1b7:L65a1b7:{c.instructions+=2;NFSU2_TR(0x65a1b7);
__builtin_memmove((R+4),gp(0x8a5cf0),4);
}
B65a1bd:{NFSU2_TR(0x65a1bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65a1c2ull));
TAIL_STATIC(0x6581bcu,658);
}
B65a1c2:L65a1c2:{c.instructions+=11;NFSU2_TR(0x65a1c2);
__builtin_memmove((R+0),gp(0x8a5cdc),4);
}
B65a1c7:{NFSU2_TR(0x65a1c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65a1ca:{NFSU2_TR(0x65a1ca);
w4(R+24,u32(0-u32(r4(R+24))));
}
B65a1cc:{NFSU2_TR(0x65a1cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65a1cf:{NFSU2_TR(0x65a1cf);
__builtin_memmove(gp(0x8a5cdc),(R+0),4);
}
B65a1d4:{NFSU2_TR(0x65a1d4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B65a1d7:{NFSU2_TR(0x65a1d7);
s4(0x8a5cd8,u32(u32(m4(0x8a5cd8))-u32(r4(R+4))));
}
B65a1dd:{NFSU2_TR(0x65a1dd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65a1df:{NFSU2_TR(0x65a1df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65a1e2:{NFSU2_TR(0x65a1e2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x804970ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B65a1e9:{NFSU2_TR(0x65a1e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65a243;}}
}
B65a1eb:L65a1eb:{c.instructions+=2;NFSU2_TR(0x65a1eb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65a1ed:{NFSU2_TR(0x65a1ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65a243;}}
}
B65a1ef:L65a1ef:{c.instructions+=13;NFSU2_TR(0x65a1ef);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B65a1f0:{NFSU2_TR(0x65a1f0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B65a1f1:{NFSU2_TR(0x65a1f1);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a1f3:{NFSU2_TR(0x65a1f3);
__builtin_memmove(gp(0x8a5cdc),(R+0),4);
}
B65a1f8:{NFSU2_TR(0x65a1f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65a1f9:{NFSU2_TR(0x65a1f9);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+0)),r2(U+0));
}
B65a1fc:{NFSU2_TR(0x65a1fc);
s4(0x8a5cd8,u32(u32(m4(0x8a5cd8))+u32(u32(0x4ull))));
}
B65a203:{NFSU2_TR(0x65a203);
__builtin_memmove((R+0),gp(0x8a5cd4),4);
}
B65a208:{NFSU2_TR(0x65a208);
__builtin_memmove((R+4),gp(0x8a5cd8),4);
}
B65a20e:{NFSU2_TR(0x65a20e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65a210:{NFSU2_TR(0x65a210);
__builtin_memmove((R+0),gp(0x8a5ce0),4);
}
B65a215:{NFSU2_TR(0x65a215);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65a217:{NFSU2_TR(0x65a217);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L65a236;}}
}
B65a219:L65a219:{c.instructions+=2;NFSU2_TR(0x65a219);
__builtin_memmove((R+4),gp(0x8a5cf0),4);
}
B65a21f:{NFSU2_TR(0x65a21f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65a224ull));
TAIL_STATIC(0x6557c0u,655);
}
B65a224:L65a224:{c.instructions+=3;NFSU2_TR(0x65a224);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65a226:{NFSU2_TR(0x65a226);
__builtin_memmove(gp(0x8a5ce0),(R+0),4);
}
B65a22b:{NFSU2_TR(0x65a22b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L65a236;}}
}
B65a22d:L65a22d:{c.instructions+=3;NFSU2_TR(0x65a22d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65a22f:{NFSU2_TR(0x65a22f);
__builtin_memmove(gp(0x8a5ce0),(R+0),4);
}
B65a234:{NFSU2_TR(0x65a234);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65a236:L65a236:{c.instructions+=1;NFSU2_TR(0x65a236);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x659552u,659);}
}
B65a23c:L65a23c:{c.instructions+=2;NFSU2_TR(0x65a23c);
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
B65a23e:{NFSU2_TR(0x65a23e);
{goto L65a378;}
}
B65a243:L65a243:{c.instructions+=4;NFSU2_TR(0x65a243);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B65a246:{NFSU2_TR(0x65a246);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x805a50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B65a24d:{NFSU2_TR(0x65a24d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65a24f:{NFSU2_TR(0x65a24f);
if(r1(R+518)){{goto L65a277;}}
}
B65a251:L65a251:{c.instructions+=2;NFSU2_TR(0x65a251);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B65a253:{NFSU2_TR(0x65a253);
if(r1(R+519)){{goto L65a277;}}
}
B65a255:L65a255:{c.instructions+=2;NFSU2_TR(0x65a255);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xd88ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd88ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65a25b:{NFSU2_TR(0x65a25b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L65a277;}}
}
B65a25d:L65a25d:{c.instructions+=4;NFSU2_TR(0x65a25d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+4))));
}
B65a25f:{NFSU2_TR(0x65a25f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x807650ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B65a266:{NFSU2_TR(0x65a266);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65a268:{NFSU2_TR(0x65a268);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65a275;}}
}
B65a26a:L65a26a:{c.instructions+=3;NFSU2_TR(0x65a26a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x805b38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B65a271:{NFSU2_TR(0x65a271);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65a273:{NFSU2_TR(0x65a273);
{goto L65a27e;}
}
B65a275:L65a275:{c.instructions+=1;NFSU2_TR(0x65a275);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65a277:L65a277:{c.instructions+=1;NFSU2_TR(0x65a277);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8051d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B65a27e:L65a27e:{c.instructions+=2;NFSU2_TR(0x65a27e);
w1(R+512,u8((r4(R+0))<(u32(0x8a5cceull))));
}
B65a283:{NFSU2_TR(0x65a283);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L65a364;}}
}
B65a289:L65a289:{c.instructions+=6;NFSU2_TR(0x65a289);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B65a28a:{NFSU2_TR(0x65a28a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B65a28b:{NFSU2_TR(0x65a28b);
__builtin_memmove(gp(0x8a5cdc),(R+0),4);
}
B65a290:{NFSU2_TR(0x65a290);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+0)),r2(U+0));
}
B65a293:{NFSU2_TR(0x65a293);
__builtin_memmove((R+0),gp(0x8a5cd4),4);
}
B65a298:{NFSU2_TR(0x65a298);
{goto L65a33f;}
}
B65a29d:L65a29d:{c.instructions+=2;NFSU2_TR(0x65a29d);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a5ce4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65a2a3:{NFSU2_TR(0x65a2a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65a2c2;}}
}
B65a2a5:L65a2a5:{c.instructions+=3;NFSU2_TR(0x65a2a5);
u8 U[4];
w4(U+0,u32(0x7ab74cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a2aa:{NFSU2_TR(0x65a2aa);
u8 U[4];
__builtin_memmove((U+0),gp(0x8a5cf0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a2b0:{NFSU2_TR(0x65a2b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65a2b5ull));
TAIL_STATIC(0x64f3fau,64f);
}
B65a2b5:L65a2b5:{c.instructions+=4;NFSU2_TR(0x65a2b5);
s4(0x8a5ce8,u32(u32(m4(0x8a5ce8))+u32(u32(0x1ull))));
}
B65a2bb:{NFSU2_TR(0x65a2bb);
__builtin_memmove((R+0),gp(0x8a5ce0),4);
}
B65a2c0:{NFSU2_TR(0x65a2c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65a2c1:{NFSU2_TR(0x65a2c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65a2c2:L65a2c2:{c.instructions+=4;NFSU2_TR(0x65a2c2);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a2c4:{NFSU2_TR(0x65a2c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65a2c5:{NFSU2_TR(0x65a2c5);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a5ce4),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+4)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B65a2cb:{NFSU2_TR(0x65a2cb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L65a358;}}
}
B65a2d1:L65a2d1:{c.instructions+=3;NFSU2_TR(0x65a2d1);
__builtin_memmove(gp(0x8a5ce4),(R+4),4);
}
B65a2d7:{NFSU2_TR(0x65a2d7);
__builtin_memmove((R+4),gp(0x8a5cdc),4);
}
B65a2dd:{NFSU2_TR(0x65a2dd);
w4(R+8,u32(0x100ull));
}
B65a2e2:L65a2e2:{c.instructions+=4;NFSU2_TR(0x65a2e2);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B65a2e5:{NFSU2_TR(0x65a2e5);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8052c0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(s32(s16(r2(U+8)))));
}
B65a2ed:{NFSU2_TR(0x65a2ed);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65a2ef:{NFSU2_TR(0x65a2ef);
if(r1(R+518)){{goto L65a306;}}
}
B65a2f1:L65a2f1:{c.instructions+=2;NFSU2_TR(0x65a2f1);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B65a2f3:{NFSU2_TR(0x65a2f3);
if(r1(R+519)){{goto L65a306;}}
}
B65a2f5:L65a2f5:{c.instructions+=2;NFSU2_TR(0x65a2f5);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xd88ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd88ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65a2fa:{NFSU2_TR(0x65a2fa);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L65a306;}}
}
B65a2fc:L65a2fc:{c.instructions+=2;NFSU2_TR(0x65a2fc);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x807650ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+8))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B65a304:{NFSU2_TR(0x65a304);
if(r1(R+518)){{goto L65a31f;}}
}
B65a306:L65a306:{c.instructions+=2;NFSU2_TR(0x65a306);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x8a58e8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8a58e8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8a58e8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65a30c:{NFSU2_TR(0x65a30c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65a376;}}
}
B65a30e:L65a30e:{c.instructions+=5;NFSU2_TR(0x65a30e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B65a30f:{NFSU2_TR(0x65a30f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B65a310:{NFSU2_TR(0x65a310);
s4(0x8a5cd8,u32(u32(m4(0x8a5cd8))-u32(u32(0x4ull))));
}
B65a317:{NFSU2_TR(0x65a317);
__builtin_memmove(gp(0x8a5cdc),(R+4),4);
}
B65a31d:{NFSU2_TR(0x65a31d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65a2e2u);}goto L65a2e2;}
}
B65a31f:L65a31f:{c.instructions+=2;NFSU2_TR(0x65a31f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x8a5cceull))));
}
B65a325:{NFSU2_TR(0x65a325);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L65a364;}}
}
B65a327:L65a327:{c.instructions+=6;NFSU2_TR(0x65a327);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x805b38ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+24,u32(s32(s16(r2(U+8)))));
}
B65a32f:{NFSU2_TR(0x65a32f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B65a330:{NFSU2_TR(0x65a330);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B65a331:{NFSU2_TR(0x65a331);
__builtin_memmove(gp(0x8a5cdc),(R+4),4);
}
B65a337:{NFSU2_TR(0x65a337);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+4)),r2(U+0));
}
B65a33a:{NFSU2_TR(0x65a33a);
__builtin_memmove((R+0),gp(0x8a5cd0),4);
}
B65a33f:L65a33f:{c.instructions+=5;NFSU2_TR(0x65a33f);
s4(0x8a5cd8,u32(u32(m4(0x8a5cd8))+u32(u32(0x4ull))));
}
B65a346:{NFSU2_TR(0x65a346);
__builtin_memmove((R+4),gp(0x8a5cd8),4);
}
B65a34c:{NFSU2_TR(0x65a34c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65a34e:{NFSU2_TR(0x65a34e);
__builtin_memmove((R+0),gp(0x8a5ce0),4);
}
B65a353:{NFSU2_TR(0x65a353);
TAIL_STATIC(0x659552u,659);
}
B65a358:L65a358:{c.instructions+=2;NFSU2_TR(0x65a358);
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
B65a35a:{NFSU2_TR(0x65a35a);
if(r1(R+518)){{goto L65a376;}}
}
B65a35c:L65a35c:{c.instructions+=2;NFSU2_TR(0x65a35c);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B65a35f:{NFSU2_TR(0x65a35f);
TAIL_STATIC(0x65954du,659);
}
B65a364:L65a364:{c.instructions+=3;NFSU2_TR(0x65a364);
u8 U[4];
w4(U+0,u32(0x7abb00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a369:{NFSU2_TR(0x65a369);
u8 U[4];
__builtin_memmove((U+0),gp(0x8a5cf0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a36f:{NFSU2_TR(0x65a36f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65a374ull));
TAIL_STATIC(0x64f3fau,64f);
}
B65a374:L65a374:{c.instructions+=2;NFSU2_TR(0x65a374);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65a375:{NFSU2_TR(0x65a375);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65a376:L65a376:{c.instructions+=1;NFSU2_TR(0x65a376);
__builtin_memmove((R+0),(R+28),4);
}
B65a378:L65a378:{c.instructions+=5;NFSU2_TR(0x65a378);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65a379:{NFSU2_TR(0x65a379);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65a37a:{NFSU2_TR(0x65a37a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65a37b:{NFSU2_TR(0x65a37b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65a37c:{NFSU2_TR(0x65a37c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65a811:L65a811:{c.instructions+=10;NFSU2_TR(0x65a811);
__builtin_memmove((R+28),(R+28),4);
}
B65a813:{NFSU2_TR(0x65a813);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a814:{NFSU2_TR(0x65a814);
__builtin_memmove((R+20),(R+16),4);
}
B65a816:{NFSU2_TR(0x65a816);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65a819:{NFSU2_TR(0x65a819);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a81a:{NFSU2_TR(0x65a81a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a81b:{NFSU2_TR(0x65a81b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65a81d:{NFSU2_TR(0x65a81d);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B65a81f:{NFSU2_TR(0x65a81f);
__builtin_memmove((R+24),(R+4),4);
}
B65a821:{NFSU2_TR(0x65a821);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65a82d;}}
}
B65a823:L65a823:{c.instructions+=2;NFSU2_TR(0x65a823);
w4(R+0,u32(0x8876086cull));
}
B65a828:{NFSU2_TR(0x65a828);
{goto L65a8b9;}
}
B65a82d:L65a82d:{c.instructions+=24;NFSU2_TR(0x65a82d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65a82f:{NFSU2_TR(0x65a82f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65a832:{NFSU2_TR(0x65a832);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a833:{NFSU2_TR(0x65a833);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65a835:{NFSU2_TR(0x65a835);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65a838:{NFSU2_TR(0x65a838);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65a83a:{NFSU2_TR(0x65a83a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B65a83b:{NFSU2_TR(0x65a83b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65a83e:{NFSU2_TR(0x65a83e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65a841:{NFSU2_TR(0x65a841);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65a844:{NFSU2_TR(0x65a844);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65a847:{NFSU2_TR(0x65a847);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65a84a:{NFSU2_TR(0x65a84a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65a84d:{NFSU2_TR(0x65a84d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65a850:{NFSU2_TR(0x65a850);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65a853:{NFSU2_TR(0x65a853);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65a856:{NFSU2_TR(0x65a856);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65a859:{NFSU2_TR(0x65a859);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65a85c:{NFSU2_TR(0x65a85c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65a85f:{NFSU2_TR(0x65a85f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65a862:{NFSU2_TR(0x65a862);
__builtin_memmove(gp(0x8a5cf0),(R+24),4);
}
B65a868:{NFSU2_TR(0x65a868);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65a86b:{NFSU2_TR(0x65a86b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a86c:{NFSU2_TR(0x65a86c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65a871ull));
TAIL_STATIC(0x64413du,644);
}
B65a871:L65a871:{c.instructions+=2;NFSU2_TR(0x65a871);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B65a873:{NFSU2_TR(0x65a873);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65a8b8;}}
}
B65a875:L65a875:{c.instructions+=4;NFSU2_TR(0x65a875);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a876:{NFSU2_TR(0x65a876);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a877:{NFSU2_TR(0x65a877);
__builtin_memmove((R+4),(R+24),4);
}
B65a879:{NFSU2_TR(0x65a879);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65a87eull));
TAIL_STATIC(0x64f65au,64f);
}
B65a87e:L65a87e:{c.instructions+=1;NFSU2_TR(0x65a87e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65a883ull));
TAIL_STATIC(0x659512u,659);
}
B65a883:L65a883:{c.instructions+=2;NFSU2_TR(0x65a883);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65a885:{NFSU2_TR(0x65a885);
if(r1(R+518)){{goto L65a88a;}}
}
B65a887:L65a887:{c.instructions+=1;NFSU2_TR(0x65a887);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65a88a:L65a88a:{c.instructions+=2;NFSU2_TR(0x65a88a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65a88d:{NFSU2_TR(0x65a88d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65a892ull));
TAIL_STATIC(0x6475e7u,647);
}
B65a892:L65a892:{c.instructions+=2;NFSU2_TR(0x65a892);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B65a894:{NFSU2_TR(0x65a894);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65a8b8;}}
}
B65a896:L65a896:{c.instructions+=2;NFSU2_TR(0x65a896);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65a899:{NFSU2_TR(0x65a899);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65a8ac;}}
}
B65a89b:L65a89b:{c.instructions+=6;NFSU2_TR(0x65a89b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65a89e:{NFSU2_TR(0x65a89e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65a8a1:{NFSU2_TR(0x65a8a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65a8a4:{NFSU2_TR(0x65a8a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65a8a6:{NFSU2_TR(0x65a8a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65a8a9:{NFSU2_TR(0x65a8a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65a8ac:L65a8ac:{c.instructions+=4;NFSU2_TR(0x65a8ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65a8af:{NFSU2_TR(0x65a8af);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B65a8b1:{NFSU2_TR(0x65a8b1);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B65a8b3:{NFSU2_TR(0x65a8b3);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80004005ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65a8b8:L65a8b8:{c.instructions+=1;NFSU2_TR(0x65a8b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65a8b9:L65a8b9:{c.instructions+=4;NFSU2_TR(0x65a8b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65a8ba:{NFSU2_TR(0x65a8ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65a8bb:{NFSU2_TR(0x65a8bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65a8bc:{NFSU2_TR(0x65a8bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65a8bf:L65a8bf:{c.instructions+=6;NFSU2_TR(0x65a8bf);
__builtin_memmove((R+0),(R+4),4);
}
B65a8c1:{NFSU2_TR(0x65a8c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+0)),r4(U+0));
}
B65a8c4:{NFSU2_TR(0x65a8c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65a8c8:{NFSU2_TR(0x65a8c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65a8cc:{NFSU2_TR(0x65a8cc);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
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
B65a8d0:{NFSU2_TR(0x65a8d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65a8d1:L65a8d1:{c.instructions+=11;NFSU2_TR(0x65a8d1);
__builtin_memmove((R+28),(R+28),4);
}
B65a8d3:{NFSU2_TR(0x65a8d3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a8d4:{NFSU2_TR(0x65a8d4);
__builtin_memmove((R+20),(R+16),4);
}
B65a8d6:{NFSU2_TR(0x65a8d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x98ull))));
}
B65a8dc:{NFSU2_TR(0x65a8dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a8dd:{NFSU2_TR(0x65a8dd);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65a8df:{NFSU2_TR(0x65a8df);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65a8e2:{NFSU2_TR(0x65a8e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a8e3:{NFSU2_TR(0x65a8e3);
__builtin_memmove((R+28),(R+4),4);
}
B65a8e5:{NFSU2_TR(0x65a8e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65a8e8:{NFSU2_TR(0x65a8e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65a8f4;}}
}
B65a8ea:L65a8ea:{c.instructions+=2;NFSU2_TR(0x65a8ea);
w4(R+0,u32(0x8876086cull));
}
B65a8ef:{NFSU2_TR(0x65a8ef);
{goto L65aa09;}
}
B65a8f4:L65a8f4:{c.instructions+=3;NFSU2_TR(0x65a8f4);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65a8f7:{NFSU2_TR(0x65a8f7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a8f8:{NFSU2_TR(0x65a8f8);
if(r1(R+518)){{goto L65a98c;}}
}
B65a8fe:L65a8fe:{c.instructions+=4;NFSU2_TR(0x65a8fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65a904:{NFSU2_TR(0x65a904);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a905:{NFSU2_TR(0x65a905);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
w4(U+4,u32(0x94ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65a90f:{NFSU2_TR(0x65a90f);
u8 U[4];
__builtin_memmove((U+0),gp(0x783168),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65a915ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B65a915:L65a915:{c.instructions+=2;NFSU2_TR(0x65a915);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
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
B65a91c:{NFSU2_TR(0x65a91c);
if(r1(R+518)){{goto L65a96c;}}
}
B65a91e:L65a91e:{c.instructions+=10;NFSU2_TR(0x65a91e);
__builtin_memmove((R+12),gp(0x78319c),4);
}
B65a924:{NFSU2_TR(0x65a924);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a925:{NFSU2_TR(0x65a925);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a926:{NFSU2_TR(0x65a926);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a927:{NFSU2_TR(0x65a927);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a928:{NFSU2_TR(0x65a928);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a92a:{NFSU2_TR(0x65a92a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65a92d:{NFSU2_TR(0x65a92d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a92e:{NFSU2_TR(0x65a92e);
u8 U[4];
w4(U+0,u32(0xfde9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a933:{NFSU2_TR(0x65a933);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65a935ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B65a935:L65a935:{c.instructions+=3;NFSU2_TR(0x65a935);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a936:{NFSU2_TR(0x65a936);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65a939:{NFSU2_TR(0x65a939);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65a93eull));
TAIL_STATIC(0x575620u,575);
}
B65a93e:L65a93e:{c.instructions+=4;NFSU2_TR(0x65a93e);
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
B65a940:{NFSU2_TR(0x65a940);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65a941:{NFSU2_TR(0x65a941);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65a944:{NFSU2_TR(0x65a944);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65a950;}}
}
B65a946:L65a946:{c.instructions+=2;NFSU2_TR(0x65a946);
w4(R+0,u32(0x8007000eull));
}
B65a94b:{NFSU2_TR(0x65a94b);
{goto L65aa08;}
}
B65a950:L65a950:{c.instructions+=9;NFSU2_TR(0x65a950);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a951:{NFSU2_TR(0x65a951);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a952:{NFSU2_TR(0x65a952);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65a955:{NFSU2_TR(0x65a955);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a956:{NFSU2_TR(0x65a956);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a958:{NFSU2_TR(0x65a958);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65a95b:{NFSU2_TR(0x65a95b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a95c:{NFSU2_TR(0x65a95c);
u8 U[4];
w4(U+0,u32(0xfde9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a961:{NFSU2_TR(0x65a961);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65a963ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B65a963:L65a963:{c.instructions+=3;NFSU2_TR(0x65a963);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65a966:{NFSU2_TR(0x65a966);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65a969:{NFSU2_TR(0x65a969);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65a96c:L65a96c:{c.instructions+=2;NFSU2_TR(0x65a96c);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65a96f:{NFSU2_TR(0x65a96f);
if(r1(R+518)){{goto L65a98c;}}
}
B65a971:L65a971:{c.instructions+=8;NFSU2_TR(0x65a971);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a972:{NFSU2_TR(0x65a972);
u8 U[4];
w4(U+0,u32(0x10000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a977:{NFSU2_TR(0x65a977);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a979:{NFSU2_TR(0x65a979);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a97a:{NFSU2_TR(0x65a97a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a97c:{NFSU2_TR(0x65a97c);
u8 U[4];
w4(U+0,u32(0x80000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a981:{NFSU2_TR(0x65a981);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65a984:{NFSU2_TR(0x65a984);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831d4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65a98aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B65a98a:L65a98a:{c.instructions+=1;NFSU2_TR(0x65a98a);
{goto L65a9a5;}
}
B65a98c:L65a98c:{c.instructions+=8;NFSU2_TR(0x65a98c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a98d:{NFSU2_TR(0x65a98d);
u8 U[4];
w4(U+0,u32(0x10000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a992:{NFSU2_TR(0x65a992);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a994:{NFSU2_TR(0x65a994);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a995:{NFSU2_TR(0x65a995);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a997:{NFSU2_TR(0x65a997);
u8 U[4];
w4(U+0,u32(0x80000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a99c:{NFSU2_TR(0x65a99c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65a99f:{NFSU2_TR(0x65a99f);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831d0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65a9a5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B65a9a5:L65a9a5:{c.instructions+=3;NFSU2_TR(0x65a9a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65a9a8:{NFSU2_TR(0x65a9a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B65a9aa:{NFSU2_TR(0x65a9aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65a9afull));
TAIL_STATIC(0x575630u,575);
}
B65a9af:L65a9af:{c.instructions+=4;NFSU2_TR(0x65a9af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65a9b1:{NFSU2_TR(0x65a9b1);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65a9b4:{NFSU2_TR(0x65a9b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65a9b5:{NFSU2_TR(0x65a9b5);
if(r1(R+518)){{goto L65a9f6;}}
}
B65a9b7:L65a9b7:{c.instructions+=7;NFSU2_TR(0x65a9b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a9b8:{NFSU2_TR(0x65a9b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a9b9:{NFSU2_TR(0x65a9b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a9ba:{NFSU2_TR(0x65a9ba);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a9bc:{NFSU2_TR(0x65a9bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a9bd:{NFSU2_TR(0x65a9bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a9be:{NFSU2_TR(0x65a9be);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831cc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65a9c4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B65a9c4:L65a9c4:{c.instructions+=3;NFSU2_TR(0x65a9c4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65a9c7:{NFSU2_TR(0x65a9c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65a9ca:{NFSU2_TR(0x65a9ca);
if(r1(R+518)){{goto L65a9f6;}}
}
B65a9cc:L65a9cc:{c.instructions+=3;NFSU2_TR(0x65a9cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a9cd:{NFSU2_TR(0x65a9cd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B65a9cf:{NFSU2_TR(0x65a9cf);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831c8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65a9d5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B65a9d5:L65a9d5:{c.instructions+=3;NFSU2_TR(0x65a9d5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65a9d8:{NFSU2_TR(0x65a9d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65a9db:{NFSU2_TR(0x65a9db);
if(r1(R+518)){{goto L65a9f6;}}
}
B65a9dd:L65a9dd:{c.instructions+=2;NFSU2_TR(0x65a9dd);
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
B65a9df:{NFSU2_TR(0x65a9df);
if(r1(R+518)){{goto L65aa03;}}
}
B65a9e1:L65a9e1:{c.instructions+=6;NFSU2_TR(0x65a9e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a9e2:{NFSU2_TR(0x65a9e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a9e3:{NFSU2_TR(0x65a9e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a9e4:{NFSU2_TR(0x65a9e4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65a9e6:{NFSU2_TR(0x65a9e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65a9e9:{NFSU2_TR(0x65a9e9);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831c4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65a9efull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B65a9ef:L65a9ef:{c.instructions+=3;NFSU2_TR(0x65a9ef);
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
B65a9f1:{NFSU2_TR(0x65a9f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65a9f4:{NFSU2_TR(0x65a9f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65aa06;}}
}
B65a9f6:L65a9f6:{c.instructions+=1;NFSU2_TR(0x65a9f6);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65a9fcull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B65a9fc:L65a9fc:{c.instructions+=2;NFSU2_TR(0x65a9fc);
w4(R+0,u32(0x88760b59ull));
}
B65aa01:{NFSU2_TR(0x65aa01);
{goto L65aa08;}
}
B65aa03:L65aa03:{c.instructions+=1;NFSU2_TR(0x65aa03);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65aa06:L65aa06:{c.instructions+=1;NFSU2_TR(0x65aa06);
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
B65aa08:L65aa08:{c.instructions+=1;NFSU2_TR(0x65aa08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65aa09:L65aa09:{c.instructions+=4;NFSU2_TR(0x65aa09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65aa0a:{NFSU2_TR(0x65aa0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65aa0b:{NFSU2_TR(0x65aa0b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65aa0c:{NFSU2_TR(0x65aa0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65aa0f:L65aa0f:{c.instructions+=7;NFSU2_TR(0x65aa0f);
__builtin_memmove((R+28),(R+28),4);
}
B65aa11:{NFSU2_TR(0x65aa11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aa12:{NFSU2_TR(0x65aa12);
__builtin_memmove((R+24),(R+4),4);
}
B65aa14:{NFSU2_TR(0x65aa14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65aa17:{NFSU2_TR(0x65aa17);
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
B65aa19:{NFSU2_TR(0x65aa19);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aa1a:{NFSU2_TR(0x65aa1a);
if(r1(R+518)){{goto L65aa2b;}}
}
B65aa1c:L65aa1c:{c.instructions+=2;NFSU2_TR(0x65aa1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aa1d:{NFSU2_TR(0x65aa1d);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831d8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65aa23ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B65aa23:L65aa23:{c.instructions+=2;NFSU2_TR(0x65aa23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65aa27:{NFSU2_TR(0x65aa27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65aa2b:L65aa2b:{c.instructions+=4;NFSU2_TR(0x65aa2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65aa2e:{NFSU2_TR(0x65aa2e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65aa31:{NFSU2_TR(0x65aa31);
__builtin_memmove((R+28),gp(0x783144),4);
}
B65aa37:{NFSU2_TR(0x65aa37);
if(r1(R+518)){{goto L65aa40;}}
}
B65aa39:L65aa39:{c.instructions+=2;NFSU2_TR(0x65aa39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aa3a:{NFSU2_TR(0x65aa3a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65aa3cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B65aa3c:L65aa3c:{c.instructions+=1;NFSU2_TR(0x65aa3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65aa40:L65aa40:{c.instructions+=3;NFSU2_TR(0x65aa40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65aa42:{NFSU2_TR(0x65aa42);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65aa45:{NFSU2_TR(0x65aa45);
if(r1(R+518)){{goto L65aa4d;}}
}
B65aa47:L65aa47:{c.instructions+=2;NFSU2_TR(0x65aa47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aa48:{NFSU2_TR(0x65aa48);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65aa4aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B65aa4a:L65aa4a:{c.instructions+=1;NFSU2_TR(0x65aa4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+24)),r4(U+0));
}
B65aa4d:L65aa4d:{c.instructions+=4;NFSU2_TR(0x65aa4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65aa4e:{NFSU2_TR(0x65aa4e);
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
B65aa50:{NFSU2_TR(0x65aa50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65aa51:{NFSU2_TR(0x65aa51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65aa52:L65aa52:{c.instructions+=2;NFSU2_TR(0x65aa52);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0xffffffffull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65aa55:{NFSU2_TR(0x65aa55);
if(r1(R+518)){{goto L65aa5c;}}
}
B65aa57:L65aa57:{c.instructions+=1;NFSU2_TR(0x65aa57);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65aa0fu);}goto L65aa0f;}
}
B65aa5c:L65aa5c:{c.instructions+=1;NFSU2_TR(0x65aa5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65aa5d:L65aa5d:{c.instructions+=9;NFSU2_TR(0x65aa5d);
__builtin_memmove((R+28),(R+28),4);
}
B65aa5f:{NFSU2_TR(0x65aa5f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aa60:{NFSU2_TR(0x65aa60);
__builtin_memmove((R+20),(R+16),4);
}
B65aa62:{NFSU2_TR(0x65aa62);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aa63:{NFSU2_TR(0x65aa63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aa64:{NFSU2_TR(0x65aa64);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65aa66:{NFSU2_TR(0x65aa66);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65aa69:{NFSU2_TR(0x65aa69);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aa6a:{NFSU2_TR(0x65aa6a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65aaa1;}}
}
B65aa6c:L65aa6c:{c.instructions+=2;NFSU2_TR(0x65aa6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65aa6f:{NFSU2_TR(0x65aa6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65aa72:L65aa72:{c.instructions+=3;NFSU2_TR(0x65aa72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65aa76:{NFSU2_TR(0x65aa76);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65aa79:{NFSU2_TR(0x65aa79);
if(r1(R+518)){{goto L65aa7f;}}
}
B65aa7b:L65aa7b:{c.instructions+=1;NFSU2_TR(0x65aa7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65aa7f:L65aa7f:{c.instructions+=9;NFSU2_TR(0x65aa7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65aa81:{NFSU2_TR(0x65aa81);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aa83:{NFSU2_TR(0x65aa83);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65aa86:{NFSU2_TR(0x65aa86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aa87:{NFSU2_TR(0x65aa87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65aa8a:{NFSU2_TR(0x65aa8a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+24)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65aa8c:{NFSU2_TR(0x65aa8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aa8d:{NFSU2_TR(0x65aa8d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aa8e:{NFSU2_TR(0x65aa8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65aa94ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65aa94:L65aa94:{c.instructions+=2;NFSU2_TR(0x65aa94);
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
B65aa96:{NFSU2_TR(0x65aa96);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65aaa3;}}
}
B65aa98:L65aa98:{c.instructions+=4;NFSU2_TR(0x65aa98);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B65aa9b:{NFSU2_TR(0x65aa9b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B65aa9c:{NFSU2_TR(0x65aa9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65aa9f:{NFSU2_TR(0x65aa9f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65aa72u);}goto L65aa72;}}
}
B65aaa1:L65aaa1:{c.instructions+=1;NFSU2_TR(0x65aaa1);
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
B65aaa3:L65aaa3:{c.instructions+=5;NFSU2_TR(0x65aaa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65aaa4:{NFSU2_TR(0x65aaa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65aaa5:{NFSU2_TR(0x65aaa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65aaa6:{NFSU2_TR(0x65aaa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65aaa7:{NFSU2_TR(0x65aaa7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65aaaa:L65aaaa:{c.instructions+=14;NFSU2_TR(0x65aaaa);
__builtin_memmove((R+28),(R+28),4);
}
B65aaac:{NFSU2_TR(0x65aaac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aaad:{NFSU2_TR(0x65aaad);
__builtin_memmove((R+20),(R+16),4);
}
B65aaaf:{NFSU2_TR(0x65aaaf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aab0:{NFSU2_TR(0x65aab0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aab1:{NFSU2_TR(0x65aab1);
__builtin_memmove((R+12),(R+4),4);
}
B65aab3:{NFSU2_TR(0x65aab3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65aab9:{NFSU2_TR(0x65aab9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65aabb:{NFSU2_TR(0x65aabb);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B65aabd:{NFSU2_TR(0x65aabd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65aabf:{NFSU2_TR(0x65aabf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65aac2:{NFSU2_TR(0x65aac2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aac3:{NFSU2_TR(0x65aac3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aac4:{NFSU2_TR(0x65aac4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65aac9ull));
TAIL_STATIC(0x575620u,575);
}
B65aac9:L65aac9:{c.instructions+=5;NFSU2_TR(0x65aac9);
__builtin_memmove((R+28),(R+0),4);
}
B65aacb:{NFSU2_TR(0x65aacb);
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
B65aacd:{NFSU2_TR(0x65aacd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65aace:{NFSU2_TR(0x65aace);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65aad1:{NFSU2_TR(0x65aad1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65aada;}}
}
B65aad3:L65aad3:{c.instructions+=2;NFSU2_TR(0x65aad3);
w4(R+0,u32(0x8007000eull));
}
B65aad8:{NFSU2_TR(0x65aad8);
{goto L65ab10;}
}
B65aada:L65aada:{c.instructions+=6;NFSU2_TR(0x65aada);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65aae0:{NFSU2_TR(0x65aae0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B65aae3:{NFSU2_TR(0x65aae3);
__builtin_memmove((R+0),(R+4),4);
}
B65aae5:{NFSU2_TR(0x65aae5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aae6:{NFSU2_TR(0x65aae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65aaec:{NFSU2_TR(0x65aaec);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B65aaef:L65aaef:{c.instructions+=1;NFSU2_TR(0x65aaef);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L65aaf1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65aaefu);}goto L65aaef;}
}
B65aaf1:L65aaf1:{c.instructions+=2;NFSU2_TR(0x65aaf1);
__builtin_memmove((R+4),(R+0),4);
}
B65aaf3:{NFSU2_TR(0x65aaf3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B65aaf6:L65aaf6:{c.instructions+=1;NFSU2_TR(0x65aaf6);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L65aaf8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65aaf6u);}goto L65aaf6;}
}
B65aaf8:L65aaf8:{c.instructions+=2;NFSU2_TR(0x65aaf8);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65aafe:{NFSU2_TR(0x65aafe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ab03ull));
TAIL_STATIC(0x575630u,575);
}
B65ab03:L65ab03:{c.instructions+=5;NFSU2_TR(0x65ab03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ab06:{NFSU2_TR(0x65ab06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65ab07:{NFSU2_TR(0x65ab07);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ab0d:{NFSU2_TR(0x65ab0d);
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
B65ab0f:{NFSU2_TR(0x65ab0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65ab10:L65ab10:{c.instructions+=4;NFSU2_TR(0x65ab10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65ab11:{NFSU2_TR(0x65ab11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65ab12:{NFSU2_TR(0x65ab12);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65ab13:{NFSU2_TR(0x65ab13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65ab14:L65ab14:{c.instructions+=9;NFSU2_TR(0x65ab14);
__builtin_memmove((R+28),(R+28),4);
}
B65ab16:{NFSU2_TR(0x65ab16);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ab17:{NFSU2_TR(0x65ab17);
__builtin_memmove((R+20),(R+16),4);
}
B65ab19:{NFSU2_TR(0x65ab19);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ab1a:{NFSU2_TR(0x65ab1a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ab1b:{NFSU2_TR(0x65ab1b);
__builtin_memmove((R+24),(R+4),4);
}
B65ab1d:{NFSU2_TR(0x65ab1d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65ab24:{NFSU2_TR(0x65ab24);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ab25:{NFSU2_TR(0x65ab25);
if(r1(R+518)){{goto L65abf8;}}
}
B65ab2b:L65ab2b:{c.instructions+=4;NFSU2_TR(0x65ab2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65ab2e:{NFSU2_TR(0x65ab2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ab31:{NFSU2_TR(0x65ab31);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65ab37:{NFSU2_TR(0x65ab37);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L65acdc;}}
}
B65ab3d:L65ab3d:{c.instructions+=7;NFSU2_TR(0x65ab3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65ab43:{NFSU2_TR(0x65ab43);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w1(U+8,u8(0x1ull));
s1(u32(r4(U+4)),r1(U+8));
}
B65ab47:{NFSU2_TR(0x65ab47);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ab4a:{NFSU2_TR(0x65ab4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65ab50:{NFSU2_TR(0x65ab50);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B65ab53:{NFSU2_TR(0x65ab53);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65ab55:{NFSU2_TR(0x65ab55);
if(r1(R+518)){{goto L65acdc;}}
}
B65ab5b:L65ab5b:{c.instructions+=2;NFSU2_TR(0x65ab5b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x119ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B65ab62:{NFSU2_TR(0x65ab62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65abed;}}
}
B65ab68:L65ab68:{c.instructions+=1;NFSU2_TR(0x65ab68);
{goto L65ab79;}
}
B65ab6a:L65ab6a:{c.instructions+=7;NFSU2_TR(0x65ab6a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B65ab6c:{NFSU2_TR(0x65ab6c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B65ab6d:{NFSU2_TR(0x65ab6d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65ab6f:{NFSU2_TR(0x65ab6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ab71:{NFSU2_TR(0x65ab71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ab74:{NFSU2_TR(0x65ab74);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65ab76:{NFSU2_TR(0x65ab76);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B65ab79:L65ab79:{c.instructions+=3;NFSU2_TR(0x65ab79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ab7b:{NFSU2_TR(0x65ab7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65ab7d:{NFSU2_TR(0x65ab7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ab6au);}goto L65ab6a;}}
}
B65ab7f:L65ab7f:{c.instructions+=1;NFSU2_TR(0x65ab7f);
{goto L65acdc;}
}
B65ab84:L65ab84:{c.instructions+=8;NFSU2_TR(0x65ab84);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ab87:{NFSU2_TR(0x65ab87);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B65ab89:{NFSU2_TR(0x65ab89);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B65ab8a:{NFSU2_TR(0x65ab8a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B65ab8c:{NFSU2_TR(0x65ab8c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B65ab90:{NFSU2_TR(0x65ab90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ab93:{NFSU2_TR(0x65ab93);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65ab95:{NFSU2_TR(0x65ab95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65abea;}}
}
B65ab97:L65ab97:{c.instructions+=3;NFSU2_TR(0x65ab97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ab9d:{NFSU2_TR(0x65ab9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65aba3:{NFSU2_TR(0x65aba3);
if(r1(R+512)){{goto L65abb4;}}
}
B65aba5:L65aba5:{c.instructions+=2;NFSU2_TR(0x65aba5);
__builtin_memmove((R+4),(R+24),4);
}
B65aba7:{NFSU2_TR(0x65aba7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65abacull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65aaaau);}goto L65aaaa;}
}
B65abac:L65abac:{c.instructions+=2;NFSU2_TR(0x65abac);
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
B65abae:{NFSU2_TR(0x65abae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65acde;}}
}
B65abb4:L65abb4:{c.instructions+=11;NFSU2_TR(0x65abb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65abba:{NFSU2_TR(0x65abba);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B65abbe:{NFSU2_TR(0x65abbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65abc4:{NFSU2_TR(0x65abc4);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),2);
s2(u32(r4(U+4)),r2(U+8));
}
B65abc8:{NFSU2_TR(0x65abc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65abce:{NFSU2_TR(0x65abce);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B65abd2:{NFSU2_TR(0x65abd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65abd8:{NFSU2_TR(0x65abd8);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B65abdd:{NFSU2_TR(0x65abdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65abe0:{NFSU2_TR(0x65abe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65abe4:{NFSU2_TR(0x65abe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65abea:L65abea:{c.instructions+=1;NFSU2_TR(0x65abea);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B65abed:L65abed:{c.instructions+=3;NFSU2_TR(0x65abed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65abef:{NFSU2_TR(0x65abef);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65abf1:{NFSU2_TR(0x65abf1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ab84u);}goto L65ab84;}}
}
B65abf3:L65abf3:{c.instructions+=1;NFSU2_TR(0x65abf3);
{goto L65acdc;}
}
B65abf8:L65abf8:{c.instructions+=8;NFSU2_TR(0x65abf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65abfb:{NFSU2_TR(0x65abfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65abfe:{NFSU2_TR(0x65abfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65ac04:{NFSU2_TR(0x65ac04);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B65ac07:{NFSU2_TR(0x65ac07);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ac0a:{NFSU2_TR(0x65ac0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65ac0c:{NFSU2_TR(0x65ac0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ac0f:{NFSU2_TR(0x65ac0f);
if(r1(R+518)){{goto L65acdc;}}
}
B65ac15:L65ac15:{c.instructions+=3;NFSU2_TR(0x65ac15);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x119ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B65ac1c:{NFSU2_TR(0x65ac1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65ac1f:{NFSU2_TR(0x65ac1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65ac57;}}
}
B65ac21:L65ac21:{c.instructions+=1;NFSU2_TR(0x65ac21);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1cull))));
}
B65ac24:L65ac24:{c.instructions+=13;NFSU2_TR(0x65ac24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ac26:{NFSU2_TR(0x65ac26);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B65ac2a:{NFSU2_TR(0x65ac2a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B65ac2e:{NFSU2_TR(0x65ac2e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B65ac31:{NFSU2_TR(0x65ac31);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B65ac34:{NFSU2_TR(0x65ac34);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B65ac3a:{NFSU2_TR(0x65ac3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65ac3d:{NFSU2_TR(0x65ac3d);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B65ac41:{NFSU2_TR(0x65ac41);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
w4(U+8,u32(0x1ull));
s4(u32(r4(U+4)),r4(U+8));
}
B65ac48:{NFSU2_TR(0x65ac48);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((R+12),(U+0),4);
}
B65ac4b:{NFSU2_TR(0x65ac4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ac4d:{NFSU2_TR(0x65ac4d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65ac50:{NFSU2_TR(0x65ac50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ac24u);}goto L65ac24;}}
}
B65ac52:L65ac52:{c.instructions+=1;NFSU2_TR(0x65ac52);
{goto L65acdc;}
}
B65ac57:L65ac57:{c.instructions+=11;NFSU2_TR(0x65ac57);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65ac5a:{NFSU2_TR(0x65ac5a);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B65ac5e:{NFSU2_TR(0x65ac5e);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B65ac62:{NFSU2_TR(0x65ac62);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B65ac65:{NFSU2_TR(0x65ac65);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B65ac68:{NFSU2_TR(0x65ac68);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+12)),r4(U+0));
}
B65ac6e:{NFSU2_TR(0x65ac6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65ac71:{NFSU2_TR(0x65ac71);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+12))));
}
B65ac75:{NFSU2_TR(0x65ac75);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B65ac79:{NFSU2_TR(0x65ac79);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+28)),r4(U+0));
}
B65ac7f:{NFSU2_TR(0x65ac7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65acd0;}}
}
B65ac81:L65ac81:{c.instructions+=3;NFSU2_TR(0x65ac81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ac87:{NFSU2_TR(0x65ac87);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65ac8d:{NFSU2_TR(0x65ac8d);
if(r1(R+512)){{goto L65ac9a;}}
}
B65ac8f:L65ac8f:{c.instructions+=2;NFSU2_TR(0x65ac8f);
__builtin_memmove((R+4),(R+24),4);
}
B65ac91:{NFSU2_TR(0x65ac91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ac96ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65aaaau);}goto L65aaaa;}
}
B65ac96:L65ac96:{c.instructions+=2;NFSU2_TR(0x65ac96);
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
B65ac98:{NFSU2_TR(0x65ac98);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65acde;}}
}
B65ac9a:L65ac9a:{c.instructions+=11;NFSU2_TR(0x65ac9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65aca0:{NFSU2_TR(0x65aca0);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B65aca4:{NFSU2_TR(0x65aca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65acaa:{NFSU2_TR(0x65acaa);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),2);
s2(u32(r4(U+4)),r2(U+8));
}
B65acae:{NFSU2_TR(0x65acae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65acb4:{NFSU2_TR(0x65acb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65acba:{NFSU2_TR(0x65acba);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B65acbe:{NFSU2_TR(0x65acbe);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B65acc3:{NFSU2_TR(0x65acc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65acc7:{NFSU2_TR(0x65acc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65accd:{NFSU2_TR(0x65accd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65acd0:L65acd0:{c.instructions+=3;NFSU2_TR(0x65acd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65acd3:{NFSU2_TR(0x65acd3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65acd6:{NFSU2_TR(0x65acd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ac57u);}goto L65ac57;}}
}
B65acdc:L65acdc:{c.instructions+=1;NFSU2_TR(0x65acdc);
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
B65acde:L65acde:{c.instructions+=5;NFSU2_TR(0x65acde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65acdf:{NFSU2_TR(0x65acdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65ace0:{NFSU2_TR(0x65ace0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65ace1:{NFSU2_TR(0x65ace1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65ace2:{NFSU2_TR(0x65ace2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65ace5:L65ace5:{c.instructions+=10;NFSU2_TR(0x65ace5);
__builtin_memmove((R+28),(R+28),4);
}
B65ace7:{NFSU2_TR(0x65ace7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ace8:{NFSU2_TR(0x65ace8);
__builtin_memmove((R+20),(R+16),4);
}
B65acea:{NFSU2_TR(0x65acea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aceb:{NFSU2_TR(0x65aceb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65acec:{NFSU2_TR(0x65acec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65acef:{NFSU2_TR(0x65acef);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65acf1:{NFSU2_TR(0x65acf1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65acf3:{NFSU2_TR(0x65acf3);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65acf7:{NFSU2_TR(0x65acf7);
if(r1(R+518)){{goto L65ad03;}}
}
B65acf9:L65acf9:{c.instructions+=2;NFSU2_TR(0x65acf9);
w4(R+0,u32(0x80004005ull));
}
B65acfe:{NFSU2_TR(0x65acfe);
{goto L65adc5;}
}
B65ad03:L65ad03:{c.instructions+=3;NFSU2_TR(0x65ad03);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65ad06:{NFSU2_TR(0x65ad06);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ad08:{NFSU2_TR(0x65ad08);
if(r1(R+518)){{goto L65ad13;}}
}
B65ad0a:L65ad0a:{c.instructions+=3;NFSU2_TR(0x65ad0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65ad0d:{NFSU2_TR(0x65ad0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65ad10:{NFSU2_TR(0x65ad10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ad13:L65ad13:{c.instructions+=7;NFSU2_TR(0x65ad13);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ad14:{NFSU2_TR(0x65ad14);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B65ad18:{NFSU2_TR(0x65ad18);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B65ad1e:{NFSU2_TR(0x65ad1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B65ad24:{NFSU2_TR(0x65ad24);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x118ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B65ad2b:{NFSU2_TR(0x65ad2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ad2e:{NFSU2_TR(0x65ad2e);
if(r1(R+518)){{goto L65adc4;}}
}
B65ad34:L65ad34:{c.instructions+=3;NFSU2_TR(0x65ad34);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65ad3a:{NFSU2_TR(0x65ad3a);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65ad3c:{NFSU2_TR(0x65ad3c);
if(r1(R+518)){{goto L65ad48;}}
}
B65ad3e:L65ad3e:{c.instructions+=4;NFSU2_TR(0x65ad3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ad40:{NFSU2_TR(0x65ad40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ad42:{NFSU2_TR(0x65ad42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ad43:{NFSU2_TR(0x65ad43);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ad46ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ad46:L65ad46:{c.instructions+=1;NFSU2_TR(0x65ad46);
{goto L65ad4a;}
}
B65ad48:L65ad48:{c.instructions+=1;NFSU2_TR(0x65ad48);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65ad4a:L65ad4a:{c.instructions+=2;NFSU2_TR(0x65ad4a);
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
B65ad4c:{NFSU2_TR(0x65ad4c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65adc4;}}
}
B65ad4e:L65ad4e:{c.instructions+=2;NFSU2_TR(0x65ad4e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B65ad55:{NFSU2_TR(0x65ad55);
if(r1(R+518)){{goto L65ad8b;}}
}
B65ad57:L65ad57:{c.instructions+=3;NFSU2_TR(0x65ad57);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65ad5d:{NFSU2_TR(0x65ad5d);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65ad5f:{NFSU2_TR(0x65ad5f);
if(r1(R+518)){{goto L65ad6b;}}
}
B65ad61:L65ad61:{c.instructions+=4;NFSU2_TR(0x65ad61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ad63:{NFSU2_TR(0x65ad63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ad65:{NFSU2_TR(0x65ad65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ad66:{NFSU2_TR(0x65ad66);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ad69ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ad69:L65ad69:{c.instructions+=1;NFSU2_TR(0x65ad69);
{goto L65ad6d;}
}
B65ad6b:L65ad6b:{c.instructions+=1;NFSU2_TR(0x65ad6b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65ad6d:L65ad6d:{c.instructions+=2;NFSU2_TR(0x65ad6d);
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
B65ad6f:{NFSU2_TR(0x65ad6f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65adc4;}}
}
B65ad71:L65ad71:{c.instructions+=3;NFSU2_TR(0x65ad71);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B65ad77:{NFSU2_TR(0x65ad77);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65ad79:{NFSU2_TR(0x65ad79);
if(r1(R+518)){{goto L65ad85;}}
}
B65ad7b:L65ad7b:{c.instructions+=4;NFSU2_TR(0x65ad7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ad7d:{NFSU2_TR(0x65ad7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ad7f:{NFSU2_TR(0x65ad7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ad80:{NFSU2_TR(0x65ad80);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ad83ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ad83:L65ad83:{c.instructions+=1;NFSU2_TR(0x65ad83);
{goto L65ad87;}
}
B65ad85:L65ad85:{c.instructions+=1;NFSU2_TR(0x65ad85);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65ad87:L65ad87:{c.instructions+=2;NFSU2_TR(0x65ad87);
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
B65ad89:{NFSU2_TR(0x65ad89);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65adc4;}}
}
B65ad8b:L65ad8b:{c.instructions+=2;NFSU2_TR(0x65ad8b);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x118ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B65ad92:{NFSU2_TR(0x65ad92);
if(r1(R+518)){{goto L65adc4;}}
}
B65ad94:L65ad94:{c.instructions+=3;NFSU2_TR(0x65ad94);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65ad9a:{NFSU2_TR(0x65ad9a);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65ad9c:{NFSU2_TR(0x65ad9c);
if(r1(R+518)){{goto L65ada8;}}
}
B65ad9e:L65ad9e:{c.instructions+=4;NFSU2_TR(0x65ad9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ada0:{NFSU2_TR(0x65ada0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ada2:{NFSU2_TR(0x65ada2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ada3:{NFSU2_TR(0x65ada3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ada6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ada6:L65ada6:{c.instructions+=1;NFSU2_TR(0x65ada6);
{goto L65adaa;}
}
B65ada8:L65ada8:{c.instructions+=1;NFSU2_TR(0x65ada8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65adaa:L65adaa:{c.instructions+=2;NFSU2_TR(0x65adaa);
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
B65adac:{NFSU2_TR(0x65adac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65adc4;}}
}
B65adae:L65adae:{c.instructions+=3;NFSU2_TR(0x65adae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65adb4:{NFSU2_TR(0x65adb4);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65adb6:{NFSU2_TR(0x65adb6);
if(r1(R+518)){{goto L65adc2;}}
}
B65adb8:L65adb8:{c.instructions+=4;NFSU2_TR(0x65adb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65adba:{NFSU2_TR(0x65adba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65adbc:{NFSU2_TR(0x65adbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65adbd:{NFSU2_TR(0x65adbd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65adc0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65adc0:L65adc0:{c.instructions+=1;NFSU2_TR(0x65adc0);
{goto L65adc4;}
}
B65adc2:L65adc2:{c.instructions+=1;NFSU2_TR(0x65adc2);
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
B65adc4:L65adc4:{c.instructions+=1;NFSU2_TR(0x65adc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65adc5:L65adc5:{c.instructions+=4;NFSU2_TR(0x65adc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65adc6:{NFSU2_TR(0x65adc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65adc7:{NFSU2_TR(0x65adc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65adc8:{NFSU2_TR(0x65adc8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65adcb:L65adcb:{c.instructions+=8;NFSU2_TR(0x65adcb);
__builtin_memmove((R+28),(R+28),4);
}
B65adcd:{NFSU2_TR(0x65adcd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65adce:{NFSU2_TR(0x65adce);
__builtin_memmove((R+20),(R+16),4);
}
B65add0:{NFSU2_TR(0x65add0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65add3:{NFSU2_TR(0x65add3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65add9:{NFSU2_TR(0x65add9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x119ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0xfeull))));
s1(u32(r4(U+0)),r1(U+4));
}
B65ade0:{NFSU2_TR(0x65ade0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65ade2:{NFSU2_TR(0x65ade2);
if(r1(R+518)){{goto L65ae1f;}}
}
B65ade4:L65ade4:{c.instructions+=3;NFSU2_TR(0x65ade4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B65ade6:{NFSU2_TR(0x65ade6);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65ade8:{NFSU2_TR(0x65ade8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65ae18;}}
}
B65adea:L65adea:{c.instructions+=2;NFSU2_TR(0x65adea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65adeb:{NFSU2_TR(0x65adeb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65adec:L65adec:{c.instructions+=12;NFSU2_TR(0x65adec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65adf2:{NFSU2_TR(0x65adf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65adf5:{NFSU2_TR(0x65adf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65adf8:{NFSU2_TR(0x65adf8);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+24,u32(r2(U+0)));
}
B65adfb:{NFSU2_TR(0x65adfb);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B65adff:{NFSU2_TR(0x65adff);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B65ae02:{NFSU2_TR(0x65ae02);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B65ae05:{NFSU2_TR(0x65ae05);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+12))));
}
B65ae09:{NFSU2_TR(0x65ae09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffdull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65ae0d:{NFSU2_TR(0x65ae0d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B65ae0e:{NFSU2_TR(0x65ae0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B65ae14:{NFSU2_TR(0x65ae14);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65adecu);}goto L65adec;}}
}
B65ae16:L65ae16:{c.instructions+=2;NFSU2_TR(0x65ae16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65ae17:{NFSU2_TR(0x65ae17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65ae18:L65ae18:{c.instructions+=1;NFSU2_TR(0x65ae18);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65ae1f:L65ae1f:{c.instructions+=3;NFSU2_TR(0x65ae1f);
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
B65ae21:{NFSU2_TR(0x65ae21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65ae22:{NFSU2_TR(0x65ae22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65ae25:L65ae25:{c.instructions+=18;NFSU2_TR(0x65ae25);
__builtin_memmove((R+28),(R+28),4);
}
B65ae27:{NFSU2_TR(0x65ae27);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ae28:{NFSU2_TR(0x65ae28);
__builtin_memmove((R+20),(R+16),4);
}
B65ae2a:{NFSU2_TR(0x65ae2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B65ae2d:{NFSU2_TR(0x65ae2d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ae2e:{NFSU2_TR(0x65ae2e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ae2f:{NFSU2_TR(0x65ae2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65ae32:{NFSU2_TR(0x65ae32);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B65ae35:{NFSU2_TR(0x65ae35);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B65ae38:{NFSU2_TR(0x65ae38);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65ae3a:{NFSU2_TR(0x65ae3a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B65ae3e:{NFSU2_TR(0x65ae3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ae41:{NFSU2_TR(0x65ae41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65ae44:{NFSU2_TR(0x65ae44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ae45:{NFSU2_TR(0x65ae45);
w4(R+8,u32(r2(R+0)));
}
B65ae48:{NFSU2_TR(0x65ae48);
w4(R+28,u32(s32(s16(r2(R+4)))));
}
B65ae4b:{NFSU2_TR(0x65ae4b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B65ae4d:{NFSU2_TR(0x65ae4d);
if(r1(R+519)){{goto L65ae55;}}
}
B65ae4f:L65ae4f:{c.instructions+=2;NFSU2_TR(0x65ae4f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B65ae51:{NFSU2_TR(0x65ae51);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B65ae55:L65ae55:{c.instructions+=7;NFSU2_TR(0x65ae55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65ae58:{NFSU2_TR(0x65ae58);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65ae5a:{NFSU2_TR(0x65ae5a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B65ae5e:{NFSU2_TR(0x65ae5e);
w4(R+8,u32(r2(R+0)));
}
B65ae61:{NFSU2_TR(0x65ae61);
w4(R+28,u32(s32(s16(r2(R+4)))));
}
B65ae64:{NFSU2_TR(0x65ae64);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B65ae66:{NFSU2_TR(0x65ae66);
if(r1(R+519)){{goto L65ae6e;}}
}
B65ae68:L65ae68:{c.instructions+=2;NFSU2_TR(0x65ae68);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B65ae6a:{NFSU2_TR(0x65ae6a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3aull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B65ae6e:L65ae6e:{c.instructions+=6;NFSU2_TR(0x65ae6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65ae71:{NFSU2_TR(0x65ae71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+0))));
}
B65ae73:{NFSU2_TR(0x65ae73);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B65ae75:{NFSU2_TR(0x65ae75);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+8))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+8))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B65ae79:{NFSU2_TR(0x65ae79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ae7c:{NFSU2_TR(0x65ae7c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65af08;}}
}
B65ae82:L65ae82:{c.instructions+=8;NFSU2_TR(0x65ae82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ae85:{NFSU2_TR(0x65ae85);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B65ae89:{NFSU2_TR(0x65ae89);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B65ae8c:{NFSU2_TR(0x65ae8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B65ae8f:{NFSU2_TR(0x65ae8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65ae92:{NFSU2_TR(0x65ae92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+0))));
}
B65ae94:{NFSU2_TR(0x65ae94);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+8))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B65ae97:{NFSU2_TR(0x65ae97);
if(r1(R+518)){{goto L65aef8;}}
}
B65ae99:L65ae99:{c.instructions+=4;NFSU2_TR(0x65ae99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ae9c:{NFSU2_TR(0x65ae9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ae9f:{NFSU2_TR(0x65ae9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65aea2:{NFSU2_TR(0x65aea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65aea5:L65aea5:{c.instructions+=3;NFSU2_TR(0x65aea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65aea8:{NFSU2_TR(0x65aea8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65aeaa:{NFSU2_TR(0x65aeaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65aeaf;}}
}
B65aeac:L65aeac:{c.instructions+=2;NFSU2_TR(0x65aeac);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B65aeae:{NFSU2_TR(0x65aeae);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B65aeaf:L65aeaf:{c.instructions+=3;NFSU2_TR(0x65aeaf);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B65aeb3:{NFSU2_TR(0x65aeb3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B65aeb5:{NFSU2_TR(0x65aeb5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L65aed8;}}
}
B65aeb7:L65aeb7:{c.instructions+=2;NFSU2_TR(0x65aeb7);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+8))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B65aebb:{NFSU2_TR(0x65aebb);
if(r1(R+518)){{goto L65aed3;}}
}
B65aebd:L65aebd:{c.instructions+=7;NFSU2_TR(0x65aebd);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+4,u32(r2(U+0)));
}
B65aec0:{NFSU2_TR(0x65aec0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65aec3:{NFSU2_TR(0x65aec3);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B65aec7:{NFSU2_TR(0x65aec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65aeca:{NFSU2_TR(0x65aeca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aecb:{NFSU2_TR(0x65aecb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aecc:{NFSU2_TR(0x65aecc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65aed1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ae25u);}goto L65ae25;}
}
B65aed1:L65aed1:{c.instructions+=1;NFSU2_TR(0x65aed1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B65aed3:L65aed3:{c.instructions+=2;NFSU2_TR(0x65aed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65aed6:{NFSU2_TR(0x65aed6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65aea5u);}goto L65aea5;}
}
B65aed8:L65aed8:{c.instructions+=2;NFSU2_TR(0x65aed8);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+8))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B65aedc:{NFSU2_TR(0x65aedc);
if(r1(R+518)){{goto L65aef8;}}
}
B65aede:L65aede:{c.instructions+=8;NFSU2_TR(0x65aede);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+4,u32(r2(U+0)));
}
B65aee1:{NFSU2_TR(0x65aee1);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B65aee5:{NFSU2_TR(0x65aee5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aee6:{NFSU2_TR(0x65aee6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65aee9:{NFSU2_TR(0x65aee9);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B65aeed:{NFSU2_TR(0x65aeed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65aef0:{NFSU2_TR(0x65aef0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65aef1:{NFSU2_TR(0x65aef1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65aef6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ae25u);}goto L65ae25;}
}
B65aef6:L65aef6:{c.instructions+=1;NFSU2_TR(0x65aef6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B65aef8:L65aef8:{c.instructions+=4;NFSU2_TR(0x65aef8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B65aefc:{NFSU2_TR(0x65aefc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65aeff:{NFSU2_TR(0x65aeff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B65af02:{NFSU2_TR(0x65af02);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ae82u);}goto L65ae82;}}
}
B65af08:L65af08:{c.instructions+=6;NFSU2_TR(0x65af08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65af09:{NFSU2_TR(0x65af09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65af0a:{NFSU2_TR(0x65af0a);
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
B65af0c:{NFSU2_TR(0x65af0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65af0d:{NFSU2_TR(0x65af0d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65af0e:{NFSU2_TR(0x65af0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65af11:L65af11:{c.instructions+=12;NFSU2_TR(0x65af11);
__builtin_memmove((R+28),(R+28),4);
}
B65af13:{NFSU2_TR(0x65af13);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65af14:{NFSU2_TR(0x65af14);
__builtin_memmove((R+20),(R+16),4);
}
B65af16:{NFSU2_TR(0x65af16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x414ull))));
}
B65af1c:{NFSU2_TR(0x65af1c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65af1d:{NFSU2_TR(0x65af1d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65af1f:{NFSU2_TR(0x65af1f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65af22:{NFSU2_TR(0x65af22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65af23:{NFSU2_TR(0x65af23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65af24:{NFSU2_TR(0x65af24);
__builtin_memmove((R+28),(R+4),4);
}
B65af26:{NFSU2_TR(0x65af26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65af29:{NFSU2_TR(0x65af29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65af47;}}
}
B65af2b:L65af2b:{c.instructions+=3;NFSU2_TR(0x65af2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65af31:{NFSU2_TR(0x65af31);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65af33:{NFSU2_TR(0x65af33);
if(r1(R+518)){{goto L65af3d;}}
}
B65af35:L65af35:{c.instructions+=4;NFSU2_TR(0x65af35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65af37:{NFSU2_TR(0x65af37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65af39:{NFSU2_TR(0x65af39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65af3a:{NFSU2_TR(0x65af3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65af3dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65af3d:L65af3d:{c.instructions+=3;NFSU2_TR(0x65af3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65af3f:{NFSU2_TR(0x65af3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65af42:{NFSU2_TR(0x65af42);
{goto L65aff2;}
}
B65af47:L65af47:{c.instructions+=6;NFSU2_TR(0x65af47);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65af4a:{NFSU2_TR(0x65af4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65af4b:{NFSU2_TR(0x65af4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbecull))));
__builtin_memmove((R+0),(U+0),4);
}
B65af51:{NFSU2_TR(0x65af51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65af52:{NFSU2_TR(0x65af52);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65af55:{NFSU2_TR(0x65af55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65af5aull));
TAIL_STATIC(0x671e9cu,671);
}
B65af5a:L65af5a:{c.instructions+=3;NFSU2_TR(0x65af5a);
__builtin_memmove((R+24),(R+0),4);
}
B65af5c:{NFSU2_TR(0x65af5c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B65af5e:{NFSU2_TR(0x65af5e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x65b003u,65b);}
}
B65af64:L65af64:{c.instructions+=2;NFSU2_TR(0x65af64);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x41ull))));
}
B65af68:{NFSU2_TR(0x65af68);
if(r1(R+512)){{goto L65af74;}}
}
B65af6a:L65af6a:{c.instructions+=2;NFSU2_TR(0x65af6a);
w4(R+24,u32(0x80004005ull));
}
B65af6f:{NFSU2_TR(0x65af6f);
TAIL_STATIC(0x65b003u,65b);
}
B65af74:L65af74:{c.instructions+=3;NFSU2_TR(0x65af74);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B65af76:{NFSU2_TR(0x65af76);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B65af79:{NFSU2_TR(0x65af79);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65afbd;}}
}
B65af7b:L65af7b:{c.instructions+=16;NFSU2_TR(0x65af7b);
__builtin_memmove((R+0),(R+4),4);
}
B65af7d:{NFSU2_TR(0x65af7d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65af80:{NFSU2_TR(0x65af80);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffdf6ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B65af87:{NFSU2_TR(0x65af87);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B65af8a:{NFSU2_TR(0x65af8a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B65af8d:{NFSU2_TR(0x65af8d);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B65af91:{NFSU2_TR(0x65af91);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+8)),r2(U+0));
}
B65af94:{NFSU2_TR(0x65af94);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B65af98:{NFSU2_TR(0x65af98);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B65af9b:{NFSU2_TR(0x65af9b);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffffbecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B65afa2:{NFSU2_TR(0x65afa2);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffffdfaull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B65afa9:{NFSU2_TR(0x65afa9);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffffbf0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B65afb0:{NFSU2_TR(0x65afb0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B65afb1:{NFSU2_TR(0x65afb1);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B65afb4:{NFSU2_TR(0x65afb4);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffffdfbull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B65afbb:{NFSU2_TR(0x65afbb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65af7bu);}goto L65af7b;}}
}
B65afbd:L65afbd:{c.instructions+=12;NFSU2_TR(0x65afbd);
__builtin_memmove((R+0),gp(0x7b4ff0),4);
}
B65afc2:{NFSU2_TR(0x65afc2);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffdf4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B65afc9:{NFSU2_TR(0x65afc9);
__builtin_memmove((R+0),gp(0x7b4ff4),4);
}
B65afce:{NFSU2_TR(0x65afce);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B65afd1:{NFSU2_TR(0x65afd1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65afd2:{NFSU2_TR(0x65afd2);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffdf8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B65afd9:{NFSU2_TR(0x65afd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65afdc:{NFSU2_TR(0x65afdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65afde:{NFSU2_TR(0x65afde);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B65afe4:{NFSU2_TR(0x65afe4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65afe5:{NFSU2_TR(0x65afe5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65afe6:{NFSU2_TR(0x65afe6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65afecull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65afec:L65afec:{c.instructions+=3;NFSU2_TR(0x65afec);
__builtin_memmove((R+24),(R+0),4);
}
B65afee:{NFSU2_TR(0x65afee);
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
B65aff0:{NFSU2_TR(0x65aff0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x65b003u,65b);}
}
B65aff2:L65aff2:{c.instructions+=5;NFSU2_TR(0x65aff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65aff5:{NFSU2_TR(0x65aff5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65aff8:{NFSU2_TR(0x65aff8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65affa:{NFSU2_TR(0x65affa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65affb:{NFSU2_TR(0x65affb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b001ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x65a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
