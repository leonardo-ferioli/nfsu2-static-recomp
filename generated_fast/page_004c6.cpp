#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4a9(u8* __restrict R,Cpu& c);
u32 body_4aa(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4be(u8* __restrict R,Cpu& c);
u32 body_4c7(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_534(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_594(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f8(u8* __restrict R,Cpu& c);
u32 body_6fb(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4c6,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4c6,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4c6(u8* __restrict R,Cpu& c);
u32 page_4c6(Cpu& c){return body_4c6(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4c6(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4c6000:goto L4c6000;
case 0x4c6001:c.instructions+=1;goto B4c6001;
case 0x4c6006:goto L4c6006;
case 0x4c6008:c.instructions+=9;goto B4c6008;
case 0x4c600f:c.instructions+=8;goto B4c600f;
case 0x4c6012:c.instructions+=7;goto B4c6012;
case 0x4c6015:c.instructions+=6;goto B4c6015;
case 0x4c6018:c.instructions+=5;goto B4c6018;
case 0x4c601f:c.instructions+=4;goto B4c601f;
case 0x4c6023:c.instructions+=3;goto B4c6023;
case 0x4c6026:c.instructions+=2;goto B4c6026;
case 0x4c602c:c.instructions+=1;goto B4c602c;
case 0x4c602e:goto L4c602e;
case 0x4c6031:c.instructions+=5;goto B4c6031;
case 0x4c6036:c.instructions+=4;goto B4c6036;
case 0x4c603b:c.instructions+=3;goto B4c603b;
case 0x4c603c:c.instructions+=2;goto B4c603c;
case 0x4c603d:c.instructions+=1;goto B4c603d;
case 0x4c6042:goto L4c6042;
case 0x4c6043:c.instructions+=3;goto B4c6043;
case 0x4c6044:c.instructions+=2;goto B4c6044;
case 0x4c6045:c.instructions+=1;goto B4c6045;
case 0x4c6050:goto L4c6050;
case 0x4c6055:c.instructions+=2;goto B4c6055;
case 0x4c6057:c.instructions+=1;goto B4c6057;
case 0x4c6059:goto L4c6059;
case 0x4c605b:c.instructions+=3;goto B4c605b;
case 0x4c605d:c.instructions+=2;goto B4c605d;
case 0x4c605f:c.instructions+=1;goto B4c605f;
case 0x4c6064:goto L4c6064;
case 0x4c6067:goto L4c6067;
case 0x4c6068:c.instructions+=7;goto B4c6068;
case 0x4c606c:c.instructions+=6;goto B4c606c;
case 0x4c606d:c.instructions+=5;goto B4c606d;
case 0x4c606e:c.instructions+=4;goto B4c606e;
case 0x4c606f:c.instructions+=3;goto B4c606f;
case 0x4c6071:c.instructions+=2;goto B4c6071;
case 0x4c6072:c.instructions+=1;goto B4c6072;
case 0x4c6077:goto L4c6077;
case 0x4c607b:c.instructions+=4;goto B4c607b;
case 0x4c607d:c.instructions+=3;goto B4c607d;
case 0x4c607f:c.instructions+=2;goto B4c607f;
case 0x4c6080:c.instructions+=1;goto B4c6080;
case 0x4c6085:goto L4c6085;
case 0x4c6089:c.instructions+=5;goto B4c6089;
case 0x4c608b:c.instructions+=4;goto B4c608b;
case 0x4c608e:c.instructions+=3;goto B4c608e;
case 0x4c6090:c.instructions+=2;goto B4c6090;
case 0x4c6092:c.instructions+=1;goto B4c6092;
case 0x4c6094:goto L4c6094;
case 0x4c6098:c.instructions+=3;goto B4c6098;
case 0x4c609a:c.instructions+=2;goto B4c609a;
case 0x4c609b:c.instructions+=1;goto B4c609b;
case 0x4c60a0:goto L4c60a0;
case 0x4c60a3:c.instructions+=3;goto B4c60a3;
case 0x4c60a4:c.instructions+=2;goto B4c60a4;
case 0x4c60a6:c.instructions+=1;goto B4c60a6;
case 0x4c60a8:goto L4c60a8;
case 0x4c60a9:c.instructions+=3;goto B4c60a9;
case 0x4c60aa:c.instructions+=2;goto B4c60aa;
case 0x4c60ab:c.instructions+=1;goto B4c60ab;
case 0x4c60b0:goto L4c60b0;
case 0x4c60b6:c.instructions+=6;goto B4c60b6;
case 0x4c60ba:c.instructions+=5;goto B4c60ba;
case 0x4c60bf:c.instructions+=4;goto B4c60bf;
case 0x4c60c2:c.instructions+=3;goto B4c60c2;
case 0x4c60c5:c.instructions+=2;goto B4c60c5;
case 0x4c60c8:c.instructions+=1;goto B4c60c8;
case 0x4c60ca:goto L4c60ca;
case 0x4c60cd:c.instructions+=1;goto B4c60cd;
case 0x4c60cf:goto L4c60cf;
case 0x4c60d2:c.instructions+=1;goto B4c60d2;
case 0x4c60d4:goto L4c60d4;
case 0x4c60d6:c.instructions+=1;goto B4c60d6;
case 0x4c60dc:goto L4c60dc;
case 0x4c60de:goto L4c60de;
case 0x4c60e0:c.instructions+=1;goto B4c60e0;
case 0x4c60e2:goto L4c60e2;
case 0x4c60e6:c.instructions+=4;goto B4c60e6;
case 0x4c60eb:c.instructions+=3;goto B4c60eb;
case 0x4c60ee:c.instructions+=2;goto B4c60ee;
case 0x4c60f0:c.instructions+=1;goto B4c60f0;
case 0x4c60f2:goto L4c60f2;
case 0x4c60f5:c.instructions+=3;goto B4c60f5;
case 0x4c60f6:c.instructions+=2;goto B4c60f6;
case 0x4c60fb:c.instructions+=1;goto B4c60fb;
case 0x4c6100:goto L4c6100;
case 0x4c6103:c.instructions+=1;goto B4c6103;
case 0x4c6105:goto L4c6105;
case 0x4c6108:c.instructions+=2;goto B4c6108;
case 0x4c610a:c.instructions+=1;goto B4c610a;
case 0x4c610c:goto L4c610c;
case 0x4c6113:goto L4c6113;
case 0x4c6118:goto L4c6118;
case 0x4c611b:c.instructions+=2;goto B4c611b;
case 0x4c611d:c.instructions+=1;goto B4c611d;
case 0x4c611f:goto L4c611f;
case 0x4c6120:c.instructions+=2;goto B4c6120;
case 0x4c6122:c.instructions+=1;goto B4c6122;
case 0x4c6127:goto L4c6127;
case 0x4c612a:c.instructions+=2;goto B4c612a;
case 0x4c612d:c.instructions+=1;goto B4c612d;
case 0x4c612f:goto L4c612f;
case 0x4c6136:goto L4c6136;
case 0x4c6138:c.instructions+=2;goto B4c6138;
case 0x4c613a:c.instructions+=1;goto B4c613a;
case 0x4c613c:goto L4c613c;
case 0x4c613f:c.instructions+=2;goto B4c613f;
case 0x4c6141:c.instructions+=1;goto B4c6141;
case 0x4c6142:goto L4c6142;
case 0x4c6145:c.instructions+=4;goto B4c6145;
case 0x4c614b:c.instructions+=3;goto B4c614b;
case 0x4c614c:c.instructions+=2;goto B4c614c;
case 0x4c614f:c.instructions+=1;goto B4c614f;
case 0x4c6154:goto L4c6154;
case 0x4c6155:c.instructions+=4;goto B4c6155;
case 0x4c6156:c.instructions+=3;goto B4c6156;
case 0x4c6157:c.instructions+=2;goto B4c6157;
case 0x4c6158:c.instructions+=1;goto B4c6158;
case 0x4c615b:goto L4c615b;
case 0x4c615e:c.instructions+=8;goto B4c615e;
case 0x4c6161:c.instructions+=7;goto B4c6161;
case 0x4c6164:c.instructions+=6;goto B4c6164;
case 0x4c6165:c.instructions+=5;goto B4c6165;
case 0x4c616a:c.instructions+=4;goto B4c616a;
case 0x4c616b:c.instructions+=3;goto B4c616b;
case 0x4c616e:c.instructions+=2;goto B4c616e;
case 0x4c616f:c.instructions+=1;goto B4c616f;
case 0x4c6174:goto L4c6174;
case 0x4c6175:c.instructions+=4;goto B4c6175;
case 0x4c6176:c.instructions+=3;goto B4c6176;
case 0x4c6177:c.instructions+=2;goto B4c6177;
case 0x4c6178:c.instructions+=1;goto B4c6178;
case 0x4c617b:goto L4c617b;
case 0x4c6181:c.instructions+=1;goto B4c6181;
case 0x4c6185:goto L4c6185;
case 0x4c6186:c.instructions+=4;goto B4c6186;
case 0x4c6187:c.instructions+=3;goto B4c6187;
case 0x4c6188:c.instructions+=2;goto B4c6188;
case 0x4c6189:c.instructions+=1;goto B4c6189;
case 0x4c61a0:goto L4c61a0;
case 0x4c61a5:c.instructions+=2;goto B4c61a5;
case 0x4c61a7:c.instructions+=1;goto B4c61a7;
case 0x4c61a9:goto L4c61a9;
case 0x4c61ab:c.instructions+=3;goto B4c61ab;
case 0x4c61ad:c.instructions+=2;goto B4c61ad;
case 0x4c61af:c.instructions+=1;goto B4c61af;
case 0x4c61b4:goto L4c61b4;
case 0x4c61b7:goto L4c61b7;
case 0x4c61bb:c.instructions+=6;goto B4c61bb;
case 0x4c61bc:c.instructions+=5;goto B4c61bc;
case 0x4c61bd:c.instructions+=4;goto B4c61bd;
case 0x4c61bf:c.instructions+=3;goto B4c61bf;
case 0x4c61c1:c.instructions+=2;goto B4c61c1;
case 0x4c61c2:c.instructions+=1;goto B4c61c2;
case 0x4c61c7:goto L4c61c7;
case 0x4c61cc:c.instructions+=5;goto B4c61cc;
case 0x4c61ce:c.instructions+=4;goto B4c61ce;
case 0x4c61d0:c.instructions+=3;goto B4c61d0;
case 0x4c61d1:c.instructions+=2;goto B4c61d1;
case 0x4c61d3:c.instructions+=1;goto B4c61d3;
case 0x4c61d8:goto L4c61d8;
case 0x4c61da:c.instructions+=9;goto B4c61da;
case 0x4c61df:c.instructions+=8;goto B4c61df;
case 0x4c61e6:c.instructions+=7;goto B4c61e6;
case 0x4c61ec:c.instructions+=6;goto B4c61ec;
case 0x4c61ef:c.instructions+=5;goto B4c61ef;
case 0x4c61f2:c.instructions+=4;goto B4c61f2;
case 0x4c61f6:c.instructions+=3;goto B4c61f6;
case 0x4c61f9:c.instructions+=2;goto B4c61f9;
case 0x4c61fa:c.instructions+=1;goto B4c61fa;
case 0x4c61ff:goto L4c61ff;
case 0x4c6206:c.instructions+=11;goto B4c6206;
case 0x4c620b:c.instructions+=10;goto B4c620b;
case 0x4c620f:c.instructions+=9;goto B4c620f;
case 0x4c6215:c.instructions+=8;goto B4c6215;
case 0x4c6218:c.instructions+=7;goto B4c6218;
case 0x4c621c:c.instructions+=6;goto B4c621c;
case 0x4c6221:c.instructions+=5;goto B4c6221;
case 0x4c6224:c.instructions+=4;goto B4c6224;
case 0x4c6228:c.instructions+=3;goto B4c6228;
case 0x4c6229:c.instructions+=2;goto B4c6229;
case 0x4c622a:c.instructions+=1;goto B4c622a;
case 0x4c622f:goto L4c622f;
case 0x4c6235:c.instructions+=8;goto B4c6235;
case 0x4c6239:c.instructions+=7;goto B4c6239;
case 0x4c623c:c.instructions+=6;goto B4c623c;
case 0x4c6241:c.instructions+=5;goto B4c6241;
case 0x4c6244:c.instructions+=4;goto B4c6244;
case 0x4c6246:c.instructions+=3;goto B4c6246;
case 0x4c6247:c.instructions+=2;goto B4c6247;
case 0x4c6248:c.instructions+=1;goto B4c6248;
case 0x4c624a:goto L4c624a;
case 0x4c624d:c.instructions+=1;goto B4c624d;
case 0x4c6252:goto L4c6252;
case 0x4c6255:goto L4c6255;
case 0x4c6258:c.instructions+=4;goto B4c6258;
case 0x4c625b:c.instructions+=3;goto B4c625b;
case 0x4c625c:c.instructions+=2;goto B4c625c;
case 0x4c6261:c.instructions+=1;goto B4c6261;
case 0x4c6266:goto L4c6266;
case 0x4c6269:c.instructions+=1;goto B4c6269;
case 0x4c6270:goto L4c6270;
case 0x4c6275:c.instructions+=4;goto B4c6275;
case 0x4c6276:c.instructions+=3;goto B4c6276;
case 0x4c6278:c.instructions+=2;goto B4c6278;
case 0x4c627a:c.instructions+=1;goto B4c627a;
case 0x4c627c:goto L4c627c;
case 0x4c627e:c.instructions+=3;goto B4c627e;
case 0x4c6280:c.instructions+=2;goto B4c6280;
case 0x4c6282:c.instructions+=1;goto B4c6282;
case 0x4c6287:goto L4c6287;
case 0x4c628a:goto L4c628a;
case 0x4c628e:c.instructions+=3;goto B4c628e;
case 0x4c6290:c.instructions+=2;goto B4c6290;
case 0x4c6291:c.instructions+=1;goto B4c6291;
case 0x4c6296:goto L4c6296;
case 0x4c629b:c.instructions+=4;goto B4c629b;
case 0x4c629e:c.instructions+=3;goto B4c629e;
case 0x4c62a1:c.instructions+=2;goto B4c62a1;
case 0x4c62a3:c.instructions+=1;goto B4c62a3;
case 0x4c62a5:goto L4c62a5;
case 0x4c62a8:c.instructions+=2;goto B4c62a8;
case 0x4c62a9:c.instructions+=1;goto B4c62a9;
case 0x4c62ae:goto L4c62ae;
case 0x4c62b3:c.instructions+=1;goto B4c62b3;
case 0x4c62b6:goto L4c62b6;
case 0x4c62b7:c.instructions+=4;goto B4c62b7;
case 0x4c62ba:c.instructions+=3;goto B4c62ba;
case 0x4c62bd:c.instructions+=2;goto B4c62bd;
case 0x4c62be:c.instructions+=1;goto B4c62be;
case 0x4c62c3:goto L4c62c3;
case 0x4c62c6:c.instructions+=10;goto B4c62c6;
case 0x4c62cb:c.instructions+=9;goto B4c62cb;
case 0x4c62ce:c.instructions+=8;goto B4c62ce;
case 0x4c62d4:c.instructions+=7;goto B4c62d4;
case 0x4c62d7:c.instructions+=6;goto B4c62d7;
case 0x4c62dc:c.instructions+=5;goto B4c62dc;
case 0x4c62df:c.instructions+=4;goto B4c62df;
case 0x4c62e2:c.instructions+=3;goto B4c62e2;
case 0x4c62e4:c.instructions+=2;goto B4c62e4;
case 0x4c62e5:c.instructions+=1;goto B4c62e5;
case 0x4c62e7:goto L4c62e7;
case 0x4c62ea:c.instructions+=1;goto B4c62ea;
case 0x4c62ec:goto L4c62ec;
case 0x4c62ef:c.instructions+=5;goto B4c62ef;
case 0x4c62f5:c.instructions+=4;goto B4c62f5;
case 0x4c62f8:c.instructions+=3;goto B4c62f8;
case 0x4c62fd:c.instructions+=2;goto B4c62fd;
case 0x4c62ff:c.instructions+=1;goto B4c62ff;
case 0x4c6304:goto L4c6304;
case 0x4c6309:goto L4c6309;
case 0x4c630c:c.instructions+=4;goto B4c630c;
case 0x4c630f:c.instructions+=3;goto B4c630f;
case 0x4c6310:c.instructions+=2;goto B4c6310;
case 0x4c6315:c.instructions+=1;goto B4c6315;
case 0x4c631a:goto L4c631a;
case 0x4c631d:c.instructions+=2;goto B4c631d;
case 0x4c631e:c.instructions+=1;goto B4c631e;
case 0x4c6330:goto L4c6330;
case 0x4c6335:c.instructions+=2;goto B4c6335;
case 0x4c6337:c.instructions+=1;goto B4c6337;
case 0x4c6339:goto L4c6339;
case 0x4c633b:c.instructions+=3;goto B4c633b;
case 0x4c633d:c.instructions+=2;goto B4c633d;
case 0x4c633f:c.instructions+=1;goto B4c633f;
case 0x4c6344:goto L4c6344;
case 0x4c6347:goto L4c6347;
case 0x4c6348:c.instructions+=5;goto B4c6348;
case 0x4c634c:c.instructions+=4;goto B4c634c;
case 0x4c634d:c.instructions+=3;goto B4c634d;
case 0x4c634f:c.instructions+=2;goto B4c634f;
case 0x4c6350:c.instructions+=1;goto B4c6350;
case 0x4c6355:goto L4c6355;
case 0x4c635a:c.instructions+=1;goto B4c635a;
case 0x4c635f:goto L4c635f;
case 0x4c6362:c.instructions+=3;goto B4c6362;
case 0x4c6367:c.instructions+=2;goto B4c6367;
case 0x4c6369:c.instructions+=1;goto B4c6369;
case 0x4c636e:goto L4c636e;
case 0x4c636f:c.instructions+=3;goto B4c636f;
case 0x4c6371:c.instructions+=2;goto B4c6371;
case 0x4c6372:c.instructions+=1;goto B4c6372;
case 0x4c6377:goto L4c6377;
case 0x4c637a:c.instructions+=4;goto B4c637a;
case 0x4c637c:c.instructions+=3;goto B4c637c;
case 0x4c637d:c.instructions+=2;goto B4c637d;
case 0x4c637e:c.instructions+=1;goto B4c637e;
case 0x4c6380:goto L4c6380;
case 0x4c6385:c.instructions+=1;goto B4c6385;
case 0x4c638a:goto L4c638a;
case 0x4c638f:c.instructions+=7;goto B4c638f;
case 0x4c6396:c.instructions+=6;goto B4c6396;
case 0x4c639c:c.instructions+=5;goto B4c639c;
case 0x4c639f:c.instructions+=4;goto B4c639f;
case 0x4c63a2:c.instructions+=3;goto B4c63a2;
case 0x4c63a3:c.instructions+=2;goto B4c63a3;
case 0x4c63a8:c.instructions+=1;goto B4c63a8;
case 0x4c63ad:goto L4c63ad;
case 0x4c63b0:c.instructions+=1;goto B4c63b0;
case 0x4c63c0:goto L4c63c0;
case 0x4c63c5:c.instructions+=6;goto B4c63c5;
case 0x4c63c6:c.instructions+=5;goto B4c63c6;
case 0x4c63c8:c.instructions+=4;goto B4c63c8;
case 0x4c63ca:c.instructions+=3;goto B4c63ca;
case 0x4c63cb:c.instructions+=2;goto B4c63cb;
case 0x4c63cc:c.instructions+=1;goto B4c63cc;
case 0x4c63ce:goto L4c63ce;
case 0x4c63d0:c.instructions+=3;goto B4c63d0;
case 0x4c63d2:c.instructions+=2;goto B4c63d2;
case 0x4c63d4:c.instructions+=1;goto B4c63d4;
case 0x4c63d9:goto L4c63d9;
case 0x4c63dc:goto L4c63dc;
case 0x4c63e0:c.instructions+=4;goto B4c63e0;
case 0x4c63e2:c.instructions+=3;goto B4c63e2;
case 0x4c63e4:c.instructions+=2;goto B4c63e4;
case 0x4c63e5:c.instructions+=1;goto B4c63e5;
case 0x4c63ea:goto L4c63ea;
case 0x4c63ee:c.instructions+=5;goto B4c63ee;
case 0x4c63f0:c.instructions+=4;goto B4c63f0;
case 0x4c63f2:c.instructions+=3;goto B4c63f2;
case 0x4c63f3:c.instructions+=2;goto B4c63f3;
case 0x4c63f5:c.instructions+=1;goto B4c63f5;
case 0x4c63fa:goto L4c63fa;
case 0x4c63fd:c.instructions+=3;goto B4c63fd;
case 0x4c6400:c.instructions+=2;goto B4c6400;
case 0x4c6405:c.instructions+=1;goto B4c6405;
case 0x4c6407:goto L4c6407;
case 0x4c640d:c.instructions+=1;goto B4c640d;
case 0x4c6411:goto L4c6411;
case 0x4c6416:c.instructions+=4;goto B4c6416;
case 0x4c6419:c.instructions+=3;goto B4c6419;
case 0x4c641a:c.instructions+=2;goto B4c641a;
case 0x4c641d:c.instructions+=1;goto B4c641d;
case 0x4c6423:goto L4c6423;
case 0x4c6424:c.instructions+=1;goto B4c6424;
case 0x4c642b:goto L4c642b;
case 0x4c642e:c.instructions+=1;goto B4c642e;
case 0x4c6430:goto L4c6430;
case 0x4c6436:goto L4c6436;
case 0x4c6439:c.instructions+=3;goto B4c6439;
case 0x4c643c:c.instructions+=2;goto B4c643c;
case 0x4c643d:c.instructions+=1;goto B4c643d;
case 0x4c6442:goto L4c6442;
case 0x4c6445:c.instructions+=3;goto B4c6445;
case 0x4c6448:c.instructions+=2;goto B4c6448;
case 0x4c644b:c.instructions+=1;goto B4c644b;
case 0x4c644d:goto L4c644d;
case 0x4c6450:c.instructions+=1;goto B4c6450;
case 0x4c6452:goto L4c6452;
case 0x4c6455:c.instructions+=1;goto B4c6455;
case 0x4c6457:goto L4c6457;
case 0x4c645c:c.instructions+=1;goto B4c645c;
case 0x4c645e:goto L4c645e;
case 0x4c6463:goto L4c6463;
case 0x4c6468:c.instructions+=2;goto B4c6468;
case 0x4c646b:c.instructions+=1;goto B4c646b;
case 0x4c646d:goto L4c646d;
case 0x4c6470:c.instructions+=2;goto B4c6470;
case 0x4c6471:c.instructions+=1;goto B4c6471;
case 0x4c6476:goto L4c6476;
case 0x4c647b:c.instructions+=1;goto B4c647b;
case 0x4c647e:goto L4c647e;
case 0x4c6481:c.instructions+=4;goto B4c6481;
case 0x4c6487:c.instructions+=3;goto B4c6487;
case 0x4c648b:c.instructions+=2;goto B4c648b;
case 0x4c6490:c.instructions+=1;goto B4c6490;
case 0x4c6492:goto L4c6492;
case 0x4c6495:c.instructions+=3;goto B4c6495;
case 0x4c6498:c.instructions+=2;goto B4c6498;
case 0x4c6499:c.instructions+=1;goto B4c6499;
case 0x4c649e:goto L4c649e;
case 0x4c64a1:c.instructions+=3;goto B4c64a1;
case 0x4c64a6:c.instructions+=2;goto B4c64a6;
case 0x4c64a9:c.instructions+=1;goto B4c64a9;
case 0x4c64ab:goto L4c64ab;
case 0x4c64ae:c.instructions+=1;goto B4c64ae;
case 0x4c64b0:goto L4c64b0;
case 0x4c64b5:goto L4c64b5;
case 0x4c64b6:goto L4c64b6;
case 0x4c64ba:c.instructions+=8;goto B4c64ba;
case 0x4c64c0:c.instructions+=7;goto B4c64c0;
case 0x4c64c3:c.instructions+=6;goto B4c64c3;
case 0x4c64c9:c.instructions+=5;goto B4c64c9;
case 0x4c64cc:c.instructions+=4;goto B4c64cc;
case 0x4c64cf:c.instructions+=3;goto B4c64cf;
case 0x4c64d0:c.instructions+=2;goto B4c64d0;
case 0x4c64d1:c.instructions+=1;goto B4c64d1;
case 0x4c64d6:goto L4c64d6;
case 0x4c64d9:c.instructions+=4;goto B4c64d9;
case 0x4c64da:c.instructions+=3;goto B4c64da;
case 0x4c64db:c.instructions+=2;goto B4c64db;
case 0x4c64dc:c.instructions+=1;goto B4c64dc;
case 0x4c6500:goto L4c6500;
case 0x4c6505:c.instructions+=2;goto B4c6505;
case 0x4c6507:c.instructions+=1;goto B4c6507;
case 0x4c6509:goto L4c6509;
case 0x4c650b:c.instructions+=3;goto B4c650b;
case 0x4c650d:c.instructions+=2;goto B4c650d;
case 0x4c650f:c.instructions+=1;goto B4c650f;
case 0x4c6514:goto L4c6514;
case 0x4c6517:goto L4c6517;
case 0x4c651b:c.instructions+=7;goto B4c651b;
case 0x4c651c:c.instructions+=6;goto B4c651c;
case 0x4c651d:c.instructions+=5;goto B4c651d;
case 0x4c651e:c.instructions+=4;goto B4c651e;
case 0x4c6520:c.instructions+=3;goto B4c6520;
case 0x4c6522:c.instructions+=2;goto B4c6522;
case 0x4c6523:c.instructions+=1;goto B4c6523;
case 0x4c6528:goto L4c6528;
case 0x4c652c:c.instructions+=5;goto B4c652c;
case 0x4c652e:c.instructions+=4;goto B4c652e;
case 0x4c6530:c.instructions+=3;goto B4c6530;
case 0x4c6531:c.instructions+=2;goto B4c6531;
case 0x4c6533:c.instructions+=1;goto B4c6533;
case 0x4c6538:goto L4c6538;
case 0x4c653c:c.instructions+=4;goto B4c653c;
case 0x4c653e:c.instructions+=3;goto B4c653e;
case 0x4c6540:c.instructions+=2;goto B4c6540;
case 0x4c6541:c.instructions+=1;goto B4c6541;
case 0x4c6546:goto L4c6546;
case 0x4c6549:c.instructions+=4;goto B4c6549;
case 0x4c654b:c.instructions+=3;goto B4c654b;
case 0x4c654e:c.instructions+=2;goto B4c654e;
case 0x4c6553:c.instructions+=1;goto B4c6553;
case 0x4c6555:goto L4c6555;
case 0x4c655a:c.instructions+=5;goto B4c655a;
case 0x4c655d:c.instructions+=4;goto B4c655d;
case 0x4c6560:c.instructions+=3;goto B4c6560;
case 0x4c6562:c.instructions+=2;goto B4c6562;
case 0x4c6567:c.instructions+=1;goto B4c6567;
case 0x4c6569:goto L4c6569;
case 0x4c656b:c.instructions+=2;goto B4c656b;
case 0x4c656c:c.instructions+=1;goto B4c656c;
case 0x4c6571:goto L4c6571;
case 0x4c6574:c.instructions+=2;goto B4c6574;
case 0x4c657b:c.instructions+=1;goto B4c657b;
case 0x4c657d:goto L4c657d;
case 0x4c6580:c.instructions+=1;goto B4c6580;
case 0x4c6583:goto L4c6583;
case 0x4c6589:c.instructions+=13;goto B4c6589;
case 0x4c658f:c.instructions+=12;goto B4c658f;
case 0x4c6592:c.instructions+=11;goto B4c6592;
case 0x4c6597:c.instructions+=10;goto B4c6597;
case 0x4c659e:c.instructions+=9;goto B4c659e;
case 0x4c65a4:c.instructions+=8;goto B4c65a4;
case 0x4c65a8:c.instructions+=7;goto B4c65a8;
case 0x4c65ae:c.instructions+=6;goto B4c65ae;
case 0x4c65b2:c.instructions+=5;goto B4c65b2;
case 0x4c65b7:c.instructions+=4;goto B4c65b7;
case 0x4c65ba:c.instructions+=3;goto B4c65ba;
case 0x4c65bc:c.instructions+=2;goto B4c65bc;
case 0x4c65be:c.instructions+=1;goto B4c65be;
case 0x4c65c3:goto L4c65c3;
case 0x4c65c9:c.instructions+=3;goto B4c65c9;
case 0x4c65cc:c.instructions+=2;goto B4c65cc;
case 0x4c65ce:c.instructions+=1;goto B4c65ce;
case 0x4c65d0:goto L4c65d0;
case 0x4c65d3:c.instructions+=3;goto B4c65d3;
case 0x4c65d4:c.instructions+=2;goto B4c65d4;
case 0x4c65d5:c.instructions+=1;goto B4c65d5;
case 0x4c65da:goto L4c65da;
case 0x4c65dd:goto L4c65dd;
case 0x4c65de:c.instructions+=3;goto B4c65de;
case 0x4c65df:c.instructions+=2;goto B4c65df;
case 0x4c65e0:c.instructions+=1;goto B4c65e0;
case 0x4c65f0:goto L4c65f0;
case 0x4c65f1:c.instructions+=4;goto B4c65f1;
case 0x4c65f2:c.instructions+=3;goto B4c65f2;
case 0x4c65f4:c.instructions+=2;goto B4c65f4;
case 0x4c65f6:c.instructions+=1;goto B4c65f6;
case 0x4c65fb:goto L4c65fb;
case 0x4c65fd:c.instructions+=3;goto B4c65fd;
case 0x4c6600:c.instructions+=2;goto B4c6600;
case 0x4c6602:c.instructions+=1;goto B4c6602;
case 0x4c6604:goto L4c6604;
case 0x4c6606:c.instructions+=1;goto B4c6606;
case 0x4c660b:goto L4c660b;
case 0x4c660d:goto L4c660d;
case 0x4c660f:goto L4c660f;
case 0x4c6612:c.instructions+=38;goto B4c6612;
case 0x4c6616:c.instructions+=37;goto B4c6616;
case 0x4c6618:c.instructions+=36;goto B4c6618;
case 0x4c661b:c.instructions+=35;goto B4c661b;
case 0x4c661e:c.instructions+=34;goto B4c661e;
case 0x4c6621:c.instructions+=33;goto B4c6621;
case 0x4c6624:c.instructions+=32;goto B4c6624;
case 0x4c6627:c.instructions+=31;goto B4c6627;
case 0x4c662a:c.instructions+=30;goto B4c662a;
case 0x4c662d:c.instructions+=29;goto B4c662d;
case 0x4c6630:c.instructions+=28;goto B4c6630;
case 0x4c6633:c.instructions+=27;goto B4c6633;
case 0x4c6636:c.instructions+=26;goto B4c6636;
case 0x4c6639:c.instructions+=25;goto B4c6639;
case 0x4c663c:c.instructions+=24;goto B4c663c;
case 0x4c663f:c.instructions+=23;goto B4c663f;
case 0x4c6642:c.instructions+=22;goto B4c6642;
case 0x4c6645:c.instructions+=21;goto B4c6645;
case 0x4c6648:c.instructions+=20;goto B4c6648;
case 0x4c664b:c.instructions+=19;goto B4c664b;
case 0x4c664e:c.instructions+=18;goto B4c664e;
case 0x4c6651:c.instructions+=17;goto B4c6651;
case 0x4c6654:c.instructions+=16;goto B4c6654;
case 0x4c6657:c.instructions+=15;goto B4c6657;
case 0x4c665a:c.instructions+=14;goto B4c665a;
case 0x4c665d:c.instructions+=13;goto B4c665d;
case 0x4c6664:c.instructions+=12;goto B4c6664;
case 0x4c6667:c.instructions+=11;goto B4c6667;
case 0x4c666a:c.instructions+=10;goto B4c666a;
case 0x4c6671:c.instructions+=9;goto B4c6671;
case 0x4c6674:c.instructions+=8;goto B4c6674;
case 0x4c6678:c.instructions+=7;goto B4c6678;
case 0x4c667f:c.instructions+=6;goto B4c667f;
case 0x4c6682:c.instructions+=5;goto B4c6682;
case 0x4c6685:c.instructions+=4;goto B4c6685;
case 0x4c6688:c.instructions+=3;goto B4c6688;
case 0x4c6689:c.instructions+=2;goto B4c6689;
case 0x4c668a:c.instructions+=1;goto B4c668a;
case 0x4c6690:goto L4c6690;
case 0x4c6694:c.instructions+=12;goto B4c6694;
case 0x4c6697:c.instructions+=11;goto B4c6697;
case 0x4c6698:c.instructions+=10;goto B4c6698;
case 0x4c669a:c.instructions+=9;goto B4c669a;
case 0x4c669b:c.instructions+=8;goto B4c669b;
case 0x4c669f:c.instructions+=7;goto B4c669f;
case 0x4c66a2:c.instructions+=6;goto B4c66a2;
case 0x4c66a5:c.instructions+=5;goto B4c66a5;
case 0x4c66a7:c.instructions+=4;goto B4c66a7;
case 0x4c66a9:c.instructions+=3;goto B4c66a9;
case 0x4c66aa:c.instructions+=2;goto B4c66aa;
case 0x4c66ad:c.instructions+=1;goto B4c66ad;
case 0x4c66af:goto L4c66af;
case 0x4c66b1:c.instructions+=1;goto B4c66b1;
case 0x4c66b3:goto L4c66b3;
case 0x4c66b5:goto L4c66b5;
case 0x4c66b7:c.instructions+=1;goto B4c66b7;
case 0x4c66bc:goto L4c66bc;
case 0x4c66be:c.instructions+=2;goto B4c66be;
case 0x4c66c0:c.instructions+=1;goto B4c66c0;
case 0x4c66c2:goto L4c66c2;
case 0x4c66c4:c.instructions+=3;goto B4c66c4;
case 0x4c66c7:c.instructions+=2;goto B4c66c7;
case 0x4c66c8:c.instructions+=1;goto B4c66c8;
case 0x4c66ca:goto L4c66ca;
case 0x4c66cf:goto L4c66cf;
case 0x4c66d1:goto L4c66d1;
case 0x4c66d6:goto L4c66d6;
case 0x4c66d8:c.instructions+=3;goto B4c66d8;
case 0x4c66db:c.instructions+=2;goto B4c66db;
case 0x4c66dd:c.instructions+=1;goto B4c66dd;
case 0x4c66df:goto L4c66df;
case 0x4c66e0:c.instructions+=3;goto B4c66e0;
case 0x4c66e1:c.instructions+=2;goto B4c66e1;
case 0x4c66e2:c.instructions+=1;goto B4c66e2;
case 0x4c66f0:goto L4c66f0;
case 0x4c66f3:c.instructions+=9;goto B4c66f3;
case 0x4c66f4:c.instructions+=8;goto B4c66f4;
case 0x4c66f5:c.instructions+=7;goto B4c66f5;
case 0x4c66f9:c.instructions+=6;goto B4c66f9;
case 0x4c66fc:c.instructions+=5;goto B4c66fc;
case 0x4c66ff:c.instructions+=4;goto B4c66ff;
case 0x4c6701:c.instructions+=3;goto B4c6701;
case 0x4c6703:c.instructions+=2;goto B4c6703;
case 0x4c6704:c.instructions+=1;goto B4c6704;
case 0x4c6709:goto L4c6709;
case 0x4c670d:c.instructions+=21;goto B4c670d;
case 0x4c6711:c.instructions+=20;goto B4c6711;
case 0x4c6715:c.instructions+=19;goto B4c6715;
case 0x4c6719:c.instructions+=18;goto B4c6719;
case 0x4c671d:c.instructions+=17;goto B4c671d;
case 0x4c6720:c.instructions+=16;goto B4c6720;
case 0x4c6721:c.instructions+=15;goto B4c6721;
case 0x4c6725:c.instructions+=14;goto B4c6725;
case 0x4c6728:c.instructions+=13;goto B4c6728;
case 0x4c672e:c.instructions+=12;goto B4c672e;
case 0x4c6732:c.instructions+=11;goto B4c6732;
case 0x4c6736:c.instructions+=10;goto B4c6736;
case 0x4c6738:c.instructions+=9;goto B4c6738;
case 0x4c673c:c.instructions+=8;goto B4c673c;
case 0x4c6740:c.instructions+=7;goto B4c6740;
case 0x4c6744:c.instructions+=6;goto B4c6744;
case 0x4c6746:c.instructions+=5;goto B4c6746;
case 0x4c6749:c.instructions+=4;goto B4c6749;
case 0x4c674a:c.instructions+=3;goto B4c674a;
case 0x4c674c:c.instructions+=2;goto B4c674c;
case 0x4c674e:c.instructions+=1;goto B4c674e;
case 0x4c6753:goto L4c6753;
case 0x4c6756:c.instructions+=30;goto B4c6756;
case 0x4c6759:c.instructions+=29;goto B4c6759;
case 0x4c675f:c.instructions+=28;goto B4c675f;
case 0x4c6763:c.instructions+=27;goto B4c6763;
case 0x4c6766:c.instructions+=26;goto B4c6766;
case 0x4c676a:c.instructions+=25;goto B4c676a;
case 0x4c676d:c.instructions+=24;goto B4c676d;
case 0x4c6771:c.instructions+=23;goto B4c6771;
case 0x4c6774:c.instructions+=22;goto B4c6774;
case 0x4c6778:c.instructions+=21;goto B4c6778;
case 0x4c677b:c.instructions+=20;goto B4c677b;
case 0x4c677f:c.instructions+=19;goto B4c677f;
case 0x4c6782:c.instructions+=18;goto B4c6782;
case 0x4c6786:c.instructions+=17;goto B4c6786;
case 0x4c678a:c.instructions+=16;goto B4c678a;
case 0x4c678d:c.instructions+=15;goto B4c678d;
case 0x4c678f:c.instructions+=14;goto B4c678f;
case 0x4c6793:c.instructions+=13;goto B4c6793;
case 0x4c6796:c.instructions+=12;goto B4c6796;
case 0x4c6798:c.instructions+=11;goto B4c6798;
case 0x4c679e:c.instructions+=10;goto B4c679e;
case 0x4c67a2:c.instructions+=9;goto B4c67a2;
case 0x4c67a7:c.instructions+=8;goto B4c67a7;
case 0x4c67ab:c.instructions+=7;goto B4c67ab;
case 0x4c67ac:c.instructions+=6;goto B4c67ac;
case 0x4c67ae:c.instructions+=5;goto B4c67ae;
case 0x4c67b0:c.instructions+=4;goto B4c67b0;
case 0x4c67b4:c.instructions+=3;goto B4c67b4;
case 0x4c67b7:c.instructions+=2;goto B4c67b7;
case 0x4c67bb:c.instructions+=1;goto B4c67bb;
case 0x4c67c0:goto L4c67c0;
case 0x4c67c2:c.instructions+=4;goto B4c67c2;
case 0x4c67c6:c.instructions+=3;goto B4c67c6;
case 0x4c67c7:c.instructions+=2;goto B4c67c7;
case 0x4c67c9:c.instructions+=1;goto B4c67c9;
case 0x4c67ce:goto L4c67ce;
case 0x4c67cf:c.instructions+=3;goto B4c67cf;
case 0x4c67d0:c.instructions+=2;goto B4c67d0;
case 0x4c67d3:c.instructions+=1;goto B4c67d3;
case 0x4c67e0:goto L4c67e0;
case 0x4c67e3:c.instructions+=9;goto B4c67e3;
case 0x4c67e4:c.instructions+=8;goto B4c67e4;
case 0x4c67e5:c.instructions+=7;goto B4c67e5;
case 0x4c67e9:c.instructions+=6;goto B4c67e9;
case 0x4c67ec:c.instructions+=5;goto B4c67ec;
case 0x4c67ef:c.instructions+=4;goto B4c67ef;
case 0x4c67f1:c.instructions+=3;goto B4c67f1;
case 0x4c67f3:c.instructions+=2;goto B4c67f3;
case 0x4c67f4:c.instructions+=1;goto B4c67f4;
case 0x4c67f9:goto L4c67f9;
case 0x4c67fd:c.instructions+=21;goto B4c67fd;
case 0x4c6801:c.instructions+=20;goto B4c6801;
case 0x4c6805:c.instructions+=19;goto B4c6805;
case 0x4c6809:c.instructions+=18;goto B4c6809;
case 0x4c680d:c.instructions+=17;goto B4c680d;
case 0x4c6810:c.instructions+=16;goto B4c6810;
case 0x4c6811:c.instructions+=15;goto B4c6811;
case 0x4c6815:c.instructions+=14;goto B4c6815;
case 0x4c6818:c.instructions+=13;goto B4c6818;
case 0x4c681e:c.instructions+=12;goto B4c681e;
case 0x4c6822:c.instructions+=11;goto B4c6822;
case 0x4c6826:c.instructions+=10;goto B4c6826;
case 0x4c6828:c.instructions+=9;goto B4c6828;
case 0x4c682c:c.instructions+=8;goto B4c682c;
case 0x4c6830:c.instructions+=7;goto B4c6830;
case 0x4c6834:c.instructions+=6;goto B4c6834;
case 0x4c6836:c.instructions+=5;goto B4c6836;
case 0x4c6839:c.instructions+=4;goto B4c6839;
case 0x4c683a:c.instructions+=3;goto B4c683a;
case 0x4c683c:c.instructions+=2;goto B4c683c;
case 0x4c683e:c.instructions+=1;goto B4c683e;
case 0x4c6843:goto L4c6843;
case 0x4c6849:c.instructions+=30;goto B4c6849;
case 0x4c684c:c.instructions+=29;goto B4c684c;
case 0x4c684e:c.instructions+=28;goto B4c684e;
case 0x4c6851:c.instructions+=27;goto B4c6851;
case 0x4c6854:c.instructions+=26;goto B4c6854;
case 0x4c6858:c.instructions+=25;goto B4c6858;
case 0x4c685c:c.instructions+=24;goto B4c685c;
case 0x4c685f:c.instructions+=23;goto B4c685f;
case 0x4c6863:c.instructions+=22;goto B4c6863;
case 0x4c6866:c.instructions+=21;goto B4c6866;
case 0x4c686a:c.instructions+=20;goto B4c686a;
case 0x4c686d:c.instructions+=19;goto B4c686d;
case 0x4c6871:c.instructions+=18;goto B4c6871;
case 0x4c6875:c.instructions+=17;goto B4c6875;
case 0x4c6878:c.instructions+=16;goto B4c6878;
case 0x4c687a:c.instructions+=15;goto B4c687a;
case 0x4c687e:c.instructions+=14;goto B4c687e;
case 0x4c6881:c.instructions+=13;goto B4c6881;
case 0x4c6887:c.instructions+=12;goto B4c6887;
case 0x4c688b:c.instructions+=11;goto B4c688b;
case 0x4c688e:c.instructions+=10;goto B4c688e;
case 0x4c6892:c.instructions+=9;goto B4c6892;
case 0x4c6896:c.instructions+=8;goto B4c6896;
case 0x4c6898:c.instructions+=7;goto B4c6898;
case 0x4c689d:c.instructions+=6;goto B4c689d;
case 0x4c68a1:c.instructions+=5;goto B4c68a1;
case 0x4c68a2:c.instructions+=4;goto B4c68a2;
case 0x4c68a4:c.instructions+=3;goto B4c68a4;
case 0x4c68a8:c.instructions+=2;goto B4c68a8;
case 0x4c68ab:c.instructions+=1;goto B4c68ab;
case 0x4c68b0:goto L4c68b0;
case 0x4c68b2:c.instructions+=4;goto B4c68b2;
case 0x4c68b6:c.instructions+=3;goto B4c68b6;
case 0x4c68b7:c.instructions+=2;goto B4c68b7;
case 0x4c68b9:c.instructions+=1;goto B4c68b9;
case 0x4c68be:goto L4c68be;
case 0x4c68bf:c.instructions+=3;goto B4c68bf;
case 0x4c68c0:c.instructions+=2;goto B4c68c0;
case 0x4c68c3:c.instructions+=1;goto B4c68c3;
case 0x4c68d0:goto L4c68d0;
case 0x4c68d1:c.instructions+=15;goto B4c68d1;
case 0x4c68d2:c.instructions+=14;goto B4c68d2;
case 0x4c68d3:c.instructions+=13;goto B4c68d3;
case 0x4c68d5:c.instructions+=12;goto B4c68d5;
case 0x4c68d9:c.instructions+=11;goto B4c68d9;
case 0x4c68da:c.instructions+=10;goto B4c68da;
case 0x4c68dd:c.instructions+=9;goto B4c68dd;
case 0x4c68e0:c.instructions+=8;goto B4c68e0;
case 0x4c68e3:c.instructions+=7;goto B4c68e3;
case 0x4c68e6:c.instructions+=6;goto B4c68e6;
case 0x4c68e7:c.instructions+=5;goto B4c68e7;
case 0x4c68ea:c.instructions+=4;goto B4c68ea;
case 0x4c68f0:c.instructions+=3;goto B4c68f0;
case 0x4c68f6:c.instructions+=2;goto B4c68f6;
case 0x4c68f9:c.instructions+=1;goto B4c68f9;
case 0x4c68fb:goto L4c68fb;
case 0x4c6901:c.instructions+=2;goto B4c6901;
case 0x4c6903:c.instructions+=1;goto B4c6903;
case 0x4c6905:goto L4c6905;
case 0x4c690b:c.instructions+=2;goto B4c690b;
case 0x4c690d:c.instructions+=1;goto B4c690d;
case 0x4c690f:goto L4c690f;
case 0x4c6912:c.instructions+=1;goto B4c6912;
case 0x4c6914:goto L4c6914;
case 0x4c691a:c.instructions+=4;goto B4c691a;
case 0x4c6920:c.instructions+=3;goto B4c6920;
case 0x4c6922:c.instructions+=2;goto B4c6922;
case 0x4c6925:c.instructions+=1;goto B4c6925;
case 0x4c6927:goto L4c6927;
case 0x4c692d:c.instructions+=2;goto B4c692d;
case 0x4c6931:c.instructions+=1;goto B4c6931;
case 0x4c6933:goto L4c6933;
case 0x4c6939:goto L4c6939;
case 0x4c693d:goto L4c693d;
case 0x4c6940:c.instructions+=9;goto B4c6940;
case 0x4c6946:c.instructions+=8;goto B4c6946;
case 0x4c6949:c.instructions+=7;goto B4c6949;
case 0x4c694b:c.instructions+=6;goto B4c694b;
case 0x4c694e:c.instructions+=5;goto B4c694e;
case 0x4c6951:c.instructions+=4;goto B4c6951;
case 0x4c6953:c.instructions+=3;goto B4c6953;
case 0x4c6955:c.instructions+=2;goto B4c6955;
case 0x4c6959:c.instructions+=1;goto B4c6959;
case 0x4c695f:goto L4c695f;
case 0x4c6964:goto L4c6964;
case 0x4c6968:c.instructions+=2;goto B4c6968;
case 0x4c696a:c.instructions+=1;goto B4c696a;
case 0x4c696c:goto L4c696c;
case 0x4c6972:c.instructions+=3;goto B4c6972;
case 0x4c6977:c.instructions+=2;goto B4c6977;
case 0x4c697b:c.instructions+=1;goto B4c697b;
case 0x4c6980:goto L4c6980;
case 0x4c6983:c.instructions+=3;goto B4c6983;
case 0x4c6984:c.instructions+=2;goto B4c6984;
case 0x4c6985:c.instructions+=1;goto B4c6985;
case 0x4c6987:goto L4c6987;
case 0x4c698d:c.instructions+=3;goto B4c698d;
case 0x4c6992:c.instructions+=2;goto B4c6992;
case 0x4c6996:c.instructions+=1;goto B4c6996;
case 0x4c699b:goto L4c699b;
case 0x4c699e:c.instructions+=2;goto B4c699e;
case 0x4c699f:c.instructions+=1;goto B4c699f;
case 0x4c69a0:goto L4c69a0;
case 0x4c69a5:goto L4c69a5;
case 0x4c69a9:c.instructions+=2;goto B4c69a9;
case 0x4c69ac:c.instructions+=1;goto B4c69ac;
case 0x4c69b1:goto L4c69b1;
case 0x4c69b2:c.instructions+=4;goto B4c69b2;
case 0x4c69b5:c.instructions+=3;goto B4c69b5;
case 0x4c69ba:c.instructions+=2;goto B4c69ba;
case 0x4c69bb:c.instructions+=1;goto B4c69bb;
case 0x4c69c0:goto L4c69c0;
case 0x4c69c5:c.instructions+=3;goto B4c69c5;
case 0x4c69c8:c.instructions+=2;goto B4c69c8;
case 0x4c69cb:c.instructions+=1;goto B4c69cb;
case 0x4c69cd:goto L4c69cd;
case 0x4c69d3:c.instructions+=6;goto B4c69d3;
case 0x4c69d7:c.instructions+=5;goto B4c69d7;
case 0x4c69d8:c.instructions+=4;goto B4c69d8;
case 0x4c69d9:c.instructions+=3;goto B4c69d9;
case 0x4c69da:c.instructions+=2;goto B4c69da;
case 0x4c69db:c.instructions+=1;goto B4c69db;
case 0x4c69e0:goto L4c69e0;
case 0x4c69e3:c.instructions+=4;goto B4c69e3;
case 0x4c69e6:c.instructions+=3;goto B4c69e6;
case 0x4c69e9:c.instructions+=2;goto B4c69e9;
case 0x4c69ea:c.instructions+=1;goto B4c69ea;
case 0x4c69ef:goto L4c69ef;
case 0x4c69f2:c.instructions+=1;goto B4c69f2;
case 0x4c69f4:goto L4c69f4;
case 0x4c69f8:c.instructions+=3;goto B4c69f8;
case 0x4c69fb:c.instructions+=2;goto B4c69fb;
case 0x4c6a01:c.instructions+=1;goto B4c6a01;
case 0x4c6a06:goto L4c6a06;
case 0x4c6a0b:c.instructions+=5;goto B4c6a0b;
case 0x4c6a0d:c.instructions+=4;goto B4c6a0d;
case 0x4c6a11:c.instructions+=3;goto B4c6a11;
case 0x4c6a13:c.instructions+=2;goto B4c6a13;
case 0x4c6a16:c.instructions+=1;goto B4c6a16;
case 0x4c6a18:goto L4c6a18;
case 0x4c6a1c:c.instructions+=1;goto B4c6a1c;
case 0x4c6a20:goto L4c6a20;
case 0x4c6a22:c.instructions+=2;goto B4c6a22;
case 0x4c6a25:c.instructions+=1;goto B4c6a25;
case 0x4c6a27:goto L4c6a27;
case 0x4c6a2a:c.instructions+=1;goto B4c6a2a;
case 0x4c6a2c:goto L4c6a2c;
case 0x4c6a31:c.instructions+=1;goto B4c6a31;
case 0x4c6a33:goto L4c6a33;
case 0x4c6a35:c.instructions+=3;goto B4c6a35;
case 0x4c6a3a:c.instructions+=2;goto B4c6a3a;
case 0x4c6a3b:c.instructions+=1;goto B4c6a3b;
case 0x4c6a3d:goto L4c6a3d;
case 0x4c6a40:c.instructions+=1;goto B4c6a40;
case 0x4c6a42:goto L4c6a42;
case 0x4c6a44:c.instructions+=3;goto B4c6a44;
case 0x4c6a49:c.instructions+=2;goto B4c6a49;
case 0x4c6a4a:c.instructions+=1;goto B4c6a4a;
case 0x4c6a4c:goto L4c6a4c;
case 0x4c6a51:goto L4c6a51;
case 0x4c6a53:c.instructions+=1;goto B4c6a53;
case 0x4c6a54:goto L4c6a54;
case 0x4c6a59:goto L4c6a59;
case 0x4c6a5b:c.instructions+=4;goto B4c6a5b;
case 0x4c6a5e:c.instructions+=3;goto B4c6a5e;
case 0x4c6a61:c.instructions+=2;goto B4c6a61;
case 0x4c6a64:c.instructions+=1;goto B4c6a64;
case 0x4c6a66:goto L4c6a66;
case 0x4c6a69:c.instructions+=2;goto B4c6a69;
case 0x4c6a6b:c.instructions+=1;goto B4c6a6b;
case 0x4c6a6d:goto L4c6a6d;
case 0x4c6a73:c.instructions+=3;goto B4c6a73;
case 0x4c6a79:c.instructions+=2;goto B4c6a79;
case 0x4c6a7b:c.instructions+=1;goto B4c6a7b;
case 0x4c6a80:goto L4c6a80;
case 0x4c6a88:c.instructions+=2;goto B4c6a88;
case 0x4c6a8a:c.instructions+=1;goto B4c6a8a;
case 0x4c6a8c:goto L4c6a8c;
case 0x4c6a8d:c.instructions+=2;goto B4c6a8d;
case 0x4c6a90:c.instructions+=1;goto B4c6a90;
case 0x4c6a92:goto L4c6a92;
case 0x4c6a94:goto L4c6a94;
case 0x4c6a97:c.instructions+=4;goto B4c6a97;
case 0x4c6a98:c.instructions+=3;goto B4c6a98;
case 0x4c6a9d:c.instructions+=2;goto B4c6a9d;
case 0x4c6a9e:c.instructions+=1;goto B4c6a9e;
case 0x4c6aa3:goto L4c6aa3;
case 0x4c6aa6:c.instructions+=2;goto B4c6aa6;
case 0x4c6aa8:c.instructions+=1;goto B4c6aa8;
case 0x4c6aaa:goto L4c6aaa;
case 0x4c6aad:c.instructions+=3;goto B4c6aad;
case 0x4c6ab2:c.instructions+=2;goto B4c6ab2;
case 0x4c6ab3:c.instructions+=1;goto B4c6ab3;
case 0x4c6ab5:goto L4c6ab5;
case 0x4c6abc:c.instructions+=1;goto B4c6abc;
case 0x4c6abe:goto L4c6abe;
case 0x4c6ac1:c.instructions+=2;goto B4c6ac1;
case 0x4c6ac6:c.instructions+=1;goto B4c6ac6;
case 0x4c6ac7:goto L4c6ac7;
case 0x4c6acc:goto L4c6acc;
case 0x4c6acf:goto L4c6acf;
case 0x4c6ad2:c.instructions+=3;goto B4c6ad2;
case 0x4c6ad8:c.instructions+=2;goto B4c6ad8;
case 0x4c6adb:c.instructions+=1;goto B4c6adb;
case 0x4c6ae0:goto L4c6ae0;
case 0x4c6ae3:c.instructions+=7;goto B4c6ae3;
case 0x4c6ae6:c.instructions+=6;goto B4c6ae6;
case 0x4c6ae8:c.instructions+=5;goto B4c6ae8;
case 0x4c6aef:c.instructions+=4;goto B4c6aef;
case 0x4c6af2:c.instructions+=3;goto B4c6af2;
case 0x4c6af5:c.instructions+=2;goto B4c6af5;
case 0x4c6af9:c.instructions+=1;goto B4c6af9;
case 0x4c6afb:goto L4c6afb;
case 0x4c6b01:c.instructions+=4;goto B4c6b01;
case 0x4c6b04:c.instructions+=3;goto B4c6b04;
case 0x4c6b07:c.instructions+=2;goto B4c6b07;
case 0x4c6b08:c.instructions+=1;goto B4c6b08;
case 0x4c6b0d:goto L4c6b0d;
case 0x4c6b11:goto L4c6b11;
case 0x4c6b17:c.instructions+=3;goto B4c6b17;
case 0x4c6b18:c.instructions+=2;goto B4c6b18;
case 0x4c6b1a:c.instructions+=1;goto B4c6b1a;
case 0x4c6b1f:goto L4c6b1f;
case 0x4c6b25:c.instructions+=6;goto B4c6b25;
case 0x4c6b29:c.instructions+=5;goto B4c6b29;
case 0x4c6b2b:c.instructions+=4;goto B4c6b2b;
case 0x4c6b2f:c.instructions+=3;goto B4c6b2f;
case 0x4c6b31:c.instructions+=2;goto B4c6b31;
case 0x4c6b34:c.instructions+=1;goto B4c6b34;
case 0x4c6b36:goto L4c6b36;
case 0x4c6b39:c.instructions+=2;goto B4c6b39;
case 0x4c6b3a:c.instructions+=1;goto B4c6b3a;
case 0x4c6b3f:goto L4c6b3f;
case 0x4c6b41:goto L4c6b41;
case 0x4c6b44:c.instructions+=2;goto B4c6b44;
case 0x4c6b45:c.instructions+=1;goto B4c6b45;
case 0x4c6b4a:goto L4c6b4a;
case 0x4c6b4d:goto L4c6b4d;
case 0x4c6b53:c.instructions+=2;goto B4c6b53;
case 0x4c6b55:c.instructions+=1;goto B4c6b55;
case 0x4c6b57:goto L4c6b57;
case 0x4c6b5a:c.instructions+=2;goto B4c6b5a;
case 0x4c6b5b:c.instructions+=1;goto B4c6b5b;
case 0x4c6b60:goto L4c6b60;
case 0x4c6b63:c.instructions+=2;goto B4c6b63;
case 0x4c6b64:c.instructions+=1;goto B4c6b64;
case 0x4c6b69:goto L4c6b69;
case 0x4c6b6c:goto L4c6b6c;
case 0x4c6b6d:c.instructions+=5;goto B4c6b6d;
case 0x4c6b6e:c.instructions+=4;goto B4c6b6e;
case 0x4c6b6f:c.instructions+=3;goto B4c6b6f;
case 0x4c6b70:c.instructions+=2;goto B4c6b70;
case 0x4c6b71:c.instructions+=1;goto B4c6b71;
case 0x4c6b80:goto L4c6b80;
case 0x4c6b81:c.instructions+=8;goto B4c6b81;
case 0x4c6b85:c.instructions+=7;goto B4c6b85;
case 0x4c6b86:c.instructions+=6;goto B4c6b86;
case 0x4c6b8a:c.instructions+=5;goto B4c6b8a;
case 0x4c6b8c:c.instructions+=4;goto B4c6b8c;
case 0x4c6b8f:c.instructions+=3;goto B4c6b8f;
case 0x4c6b90:c.instructions+=2;goto B4c6b90;
case 0x4c6b95:c.instructions+=1;goto B4c6b95;
case 0x4c6b9a:goto L4c6b9a;
case 0x4c6b9e:c.instructions+=8;goto B4c6b9e;
case 0x4c6ba1:c.instructions+=7;goto B4c6ba1;
case 0x4c6ba4:c.instructions+=6;goto B4c6ba4;
case 0x4c6ba7:c.instructions+=5;goto B4c6ba7;
case 0x4c6ba9:c.instructions+=4;goto B4c6ba9;
case 0x4c6bac:c.instructions+=3;goto B4c6bac;
case 0x4c6bae:c.instructions+=2;goto B4c6bae;
case 0x4c6bb0:c.instructions+=1;goto B4c6bb0;
case 0x4c6bb6:goto L4c6bb6;
case 0x4c6bba:c.instructions+=4;goto B4c6bba;
case 0x4c6bbc:c.instructions+=3;goto B4c6bbc;
case 0x4c6bbf:c.instructions+=2;goto B4c6bbf;
case 0x4c6bc0:c.instructions+=1;goto B4c6bc0;
case 0x4c6bc2:goto L4c6bc2;
case 0x4c6bc7:goto L4c6bc7;
case 0x4c6bca:c.instructions+=2;goto B4c6bca;
case 0x4c6bcb:c.instructions+=1;goto B4c6bcb;
case 0x4c6bd0:goto L4c6bd0;
case 0x4c6bd3:c.instructions+=2;goto B4c6bd3;
case 0x4c6bd4:c.instructions+=1;goto B4c6bd4;
case 0x4c6bd9:goto L4c6bd9;
case 0x4c6bdc:c.instructions+=2;goto B4c6bdc;
case 0x4c6bdd:c.instructions+=1;goto B4c6bdd;
case 0x4c6be2:goto L4c6be2;
case 0x4c6be5:c.instructions+=2;goto B4c6be5;
case 0x4c6be6:c.instructions+=1;goto B4c6be6;
case 0x4c6beb:goto L4c6beb;
case 0x4c6bee:c.instructions+=2;goto B4c6bee;
case 0x4c6bef:c.instructions+=1;goto B4c6bef;
case 0x4c6bf4:goto L4c6bf4;
case 0x4c6bf6:goto L4c6bf6;
case 0x4c6bfb:goto L4c6bfb;
case 0x4c6bfe:c.instructions+=2;goto B4c6bfe;
case 0x4c6bff:c.instructions+=1;goto B4c6bff;
case 0x4c6c04:goto L4c6c04;
case 0x4c6c07:c.instructions+=2;goto B4c6c07;
case 0x4c6c08:c.instructions+=1;goto B4c6c08;
case 0x4c6c0d:goto L4c6c0d;
case 0x4c6c10:c.instructions+=2;goto B4c6c10;
case 0x4c6c11:c.instructions+=1;goto B4c6c11;
case 0x4c6c16:goto L4c6c16;
case 0x4c6c19:c.instructions+=2;goto B4c6c19;
case 0x4c6c1a:c.instructions+=1;goto B4c6c1a;
case 0x4c6c1f:goto L4c6c1f;
case 0x4c6c22:c.instructions+=2;goto B4c6c22;
case 0x4c6c23:c.instructions+=1;goto B4c6c23;
case 0x4c6c28:goto L4c6c28;
case 0x4c6c2d:c.instructions+=3;goto B4c6c2d;
case 0x4c6c30:c.instructions+=2;goto B4c6c30;
case 0x4c6c32:c.instructions+=1;goto B4c6c32;
case 0x4c6c34:goto L4c6c34;
case 0x4c6c39:c.instructions+=2;goto B4c6c39;
case 0x4c6c3b:c.instructions+=1;goto B4c6c3b;
case 0x4c6c3d:goto L4c6c3d;
case 0x4c6c43:c.instructions+=9;goto B4c6c43;
case 0x4c6c47:c.instructions+=8;goto B4c6c47;
case 0x4c6c4d:c.instructions+=7;goto B4c6c4d;
case 0x4c6c50:c.instructions+=6;goto B4c6c50;
case 0x4c6c54:c.instructions+=5;goto B4c6c54;
case 0x4c6c5a:c.instructions+=4;goto B4c6c5a;
case 0x4c6c60:c.instructions+=3;goto B4c6c60;
case 0x4c6c63:c.instructions+=2;goto B4c6c63;
case 0x4c6c64:c.instructions+=1;goto B4c6c64;
case 0x4c6c66:goto L4c6c66;
case 0x4c6c6c:c.instructions+=8;goto B4c6c6c;
case 0x4c6c70:c.instructions+=7;goto B4c6c70;
case 0x4c6c76:c.instructions+=6;goto B4c6c76;
case 0x4c6c79:c.instructions+=5;goto B4c6c79;
case 0x4c6c7d:c.instructions+=4;goto B4c6c7d;
case 0x4c6c83:c.instructions+=3;goto B4c6c83;
case 0x4c6c89:c.instructions+=2;goto B4c6c89;
case 0x4c6c8c:c.instructions+=1;goto B4c6c8c;
case 0x4c6c8d:goto L4c6c8d;
case 0x4c6c8f:c.instructions+=1;goto B4c6c8f;
case 0x4c6c94:goto L4c6c94;
case 0x4c6c98:c.instructions+=5;goto B4c6c98;
case 0x4c6c9c:c.instructions+=4;goto B4c6c9c;
case 0x4c6c9f:c.instructions+=3;goto B4c6c9f;
case 0x4c6ca0:c.instructions+=2;goto B4c6ca0;
case 0x4c6ca1:c.instructions+=1;goto B4c6ca1;
case 0x4c6ca6:goto L4c6ca6;
case 0x4c6ca9:goto L4c6ca9;
case 0x4c6caa:c.instructions+=2;goto B4c6caa;
case 0x4c6cab:c.instructions+=1;goto B4c6cab;
case 0x4c6cb0:goto L4c6cb0;
case 0x4c6cb3:c.instructions+=6;goto B4c6cb3;
case 0x4c6cb4:c.instructions+=5;goto B4c6cb4;
case 0x4c6cb6:c.instructions+=4;goto B4c6cb6;
case 0x4c6cbc:c.instructions+=3;goto B4c6cbc;
case 0x4c6cbf:c.instructions+=2;goto B4c6cbf;
case 0x4c6cc2:c.instructions+=1;goto B4c6cc2;
case 0x4c6cc4:goto L4c6cc4;
case 0x4c6cc8:c.instructions+=3;goto B4c6cc8;
case 0x4c6cca:c.instructions+=2;goto B4c6cca;
case 0x4c6ccb:c.instructions+=1;goto B4c6ccb;
case 0x4c6ccd:goto L4c6ccd;
case 0x4c6cd1:c.instructions+=1;goto B4c6cd1;
case 0x4c6cd3:goto L4c6cd3;
case 0x4c6cd6:c.instructions+=1;goto B4c6cd6;
case 0x4c6cd8:goto L4c6cd8;
case 0x4c6cde:c.instructions+=1;goto B4c6cde;
case 0x4c6ce0:goto L4c6ce0;
case 0x4c6ce3:c.instructions+=1;goto B4c6ce3;
case 0x4c6ce5:goto L4c6ce5;
case 0x4c6ceb:c.instructions+=1;goto B4c6ceb;
case 0x4c6ced:goto L4c6ced;
case 0x4c6cef:goto L4c6cef;
case 0x4c6cf0:c.instructions+=4;goto B4c6cf0;
case 0x4c6cf1:c.instructions+=3;goto B4c6cf1;
case 0x4c6cf4:c.instructions+=2;goto B4c6cf4;
case 0x4c6cf5:c.instructions+=1;goto B4c6cf5;
case 0x4c6cfa:goto L4c6cfa;
case 0x4c6cfc:c.instructions+=5;goto B4c6cfc;
case 0x4c6d02:c.instructions+=4;goto B4c6d02;
case 0x4c6d08:c.instructions+=3;goto B4c6d08;
case 0x4c6d0a:c.instructions+=2;goto B4c6d0a;
case 0x4c6d0d:c.instructions+=1;goto B4c6d0d;
case 0x4c6d0f:goto L4c6d0f;
case 0x4c6d11:c.instructions+=4;goto B4c6d11;
case 0x4c6d15:c.instructions+=3;goto B4c6d15;
case 0x4c6d16:c.instructions+=2;goto B4c6d16;
case 0x4c6d18:c.instructions+=1;goto B4c6d18;
case 0x4c6d1d:goto L4c6d1d;
case 0x4c6d20:c.instructions+=5;goto B4c6d20;
case 0x4c6d24:c.instructions+=4;goto B4c6d24;
case 0x4c6d25:c.instructions+=3;goto B4c6d25;
case 0x4c6d2a:c.instructions+=2;goto B4c6d2a;
case 0x4c6d2b:c.instructions+=1;goto B4c6d2b;
case 0x4c6d30:goto L4c6d30;
case 0x4c6d33:c.instructions+=2;goto B4c6d33;
case 0x4c6d35:c.instructions+=1;goto B4c6d35;
case 0x4c6d3a:goto L4c6d3a;
case 0x4c6d3b:goto L4c6d3b;
case 0x4c6d3c:c.instructions+=2;goto B4c6d3c;
case 0x4c6d3f:c.instructions+=1;goto B4c6d3f;
case 0x4c6d50:goto L4c6d50;
case 0x4c6d53:c.instructions+=7;goto B4c6d53;
case 0x4c6d54:c.instructions+=6;goto B4c6d54;
case 0x4c6d58:c.instructions+=5;goto B4c6d58;
case 0x4c6d5b:c.instructions+=4;goto B4c6d5b;
case 0x4c6d5d:c.instructions+=3;goto B4c6d5d;
case 0x4c6d5e:c.instructions+=2;goto B4c6d5e;
case 0x4c6d60:c.instructions+=1;goto B4c6d60;
case 0x4c6d66:goto L4c6d66;
case 0x4c6d67:c.instructions+=4;goto B4c6d67;
case 0x4c6d6d:c.instructions+=3;goto B4c6d6d;
case 0x4c6d6f:c.instructions+=2;goto B4c6d6f;
case 0x4c6d72:c.instructions+=1;goto B4c6d72;
case 0x4c6d77:goto L4c6d77;
case 0x4c6d79:c.instructions+=8;goto B4c6d79;
case 0x4c6d7b:c.instructions+=7;goto B4c6d7b;
case 0x4c6d7f:c.instructions+=6;goto B4c6d7f;
case 0x4c6d83:c.instructions+=5;goto B4c6d83;
case 0x4c6d89:c.instructions+=4;goto B4c6d89;
case 0x4c6d8f:c.instructions+=3;goto B4c6d8f;
case 0x4c6d91:c.instructions+=2;goto B4c6d91;
case 0x4c6d94:c.instructions+=1;goto B4c6d94;
case 0x4c6d96:goto L4c6d96;
case 0x4c6d9a:c.instructions+=4;goto B4c6d9a;
case 0x4c6da1:c.instructions+=3;goto B4c6da1;
case 0x4c6da7:c.instructions+=2;goto B4c6da7;
case 0x4c6daa:c.instructions+=1;goto B4c6daa;
case 0x4c6dac:goto L4c6dac;
case 0x4c6db2:c.instructions+=3;goto B4c6db2;
case 0x4c6db4:c.instructions+=2;goto B4c6db4;
case 0x4c6db7:c.instructions+=1;goto B4c6db7;
case 0x4c6dbc:goto L4c6dbc;
case 0x4c6dbe:c.instructions+=1;goto B4c6dbe;
case 0x4c6dc0:goto L4c6dc0;
case 0x4c6dc2:c.instructions+=5;goto B4c6dc2;
case 0x4c6dc6:c.instructions+=4;goto B4c6dc6;
case 0x4c6dc9:c.instructions+=3;goto B4c6dc9;
case 0x4c6dca:c.instructions+=2;goto B4c6dca;
case 0x4c6dcc:c.instructions+=1;goto B4c6dcc;
case 0x4c6dd1:goto L4c6dd1;
case 0x4c6dd4:c.instructions+=5;goto B4c6dd4;
case 0x4c6dd8:c.instructions+=4;goto B4c6dd8;
case 0x4c6dd9:c.instructions+=3;goto B4c6dd9;
case 0x4c6dde:c.instructions+=2;goto B4c6dde;
case 0x4c6ddf:c.instructions+=1;goto B4c6ddf;
case 0x4c6de4:goto L4c6de4;
case 0x4c6de7:c.instructions+=2;goto B4c6de7;
case 0x4c6de9:c.instructions+=1;goto B4c6de9;
case 0x4c6dee:goto L4c6dee;
case 0x4c6def:goto L4c6def;
case 0x4c6df0:c.instructions+=3;goto B4c6df0;
case 0x4c6df1:c.instructions+=2;goto B4c6df1;
case 0x4c6df4:c.instructions+=1;goto B4c6df4;
case 0x4c6e00:goto L4c6e00;
case 0x4c6e03:c.instructions+=6;goto B4c6e03;
case 0x4c6e04:c.instructions+=5;goto B4c6e04;
case 0x4c6e06:c.instructions+=4;goto B4c6e06;
case 0x4c6e0a:c.instructions+=3;goto B4c6e0a;
case 0x4c6e0d:c.instructions+=2;goto B4c6e0d;
case 0x4c6e0f:c.instructions+=1;goto B4c6e0f;
case 0x4c6e11:goto L4c6e11;
case 0x4c6e16:goto L4c6e16;
case 0x4c6e18:c.instructions+=6;goto B4c6e18;
case 0x4c6e1a:c.instructions+=5;goto B4c6e1a;
case 0x4c6e1e:c.instructions+=4;goto B4c6e1e;
case 0x4c6e21:c.instructions+=3;goto B4c6e21;
case 0x4c6e22:c.instructions+=2;goto B4c6e22;
case 0x4c6e24:c.instructions+=1;goto B4c6e24;
case 0x4c6e29:goto L4c6e29;
case 0x4c6e2c:c.instructions+=5;goto B4c6e2c;
case 0x4c6e30:c.instructions+=4;goto B4c6e30;
case 0x4c6e31:c.instructions+=3;goto B4c6e31;
case 0x4c6e36:c.instructions+=2;goto B4c6e36;
case 0x4c6e37:c.instructions+=1;goto B4c6e37;
case 0x4c6e3c:goto L4c6e3c;
case 0x4c6e3f:c.instructions+=2;goto B4c6e3f;
case 0x4c6e41:c.instructions+=1;goto B4c6e41;
case 0x4c6e46:goto L4c6e46;
case 0x4c6e47:c.instructions+=2;goto B4c6e47;
case 0x4c6e4a:c.instructions+=1;goto B4c6e4a;
case 0x4c6e50:goto L4c6e50;
case 0x4c6e54:c.instructions+=6;goto B4c6e54;
case 0x4c6e57:c.instructions+=5;goto B4c6e57;
case 0x4c6e5a:c.instructions+=4;goto B4c6e5a;
case 0x4c6e5c:c.instructions+=3;goto B4c6e5c;
case 0x4c6e5d:c.instructions+=2;goto B4c6e5d;
case 0x4c6e5f:c.instructions+=1;goto B4c6e5f;
case 0x4c6e61:goto L4c6e61;
case 0x4c6e65:c.instructions+=2;goto B4c6e65;
case 0x4c6e68:c.instructions+=1;goto B4c6e68;
case 0x4c6e6a:goto L4c6e6a;
case 0x4c6e6b:c.instructions+=10;goto B4c6e6b;
case 0x4c6e72:c.instructions+=9;goto B4c6e72;
case 0x4c6e73:c.instructions+=8;goto B4c6e73;
case 0x4c6e7a:c.instructions+=7;goto B4c6e7a;
case 0x4c6e7c:c.instructions+=6;goto B4c6e7c;
case 0x4c6e80:c.instructions+=5;goto B4c6e80;
case 0x4c6e83:c.instructions+=4;goto B4c6e83;
case 0x4c6e85:c.instructions+=3;goto B4c6e85;
case 0x4c6e86:c.instructions+=2;goto B4c6e86;
case 0x4c6e88:c.instructions+=1;goto B4c6e88;
case 0x4c6e8d:goto L4c6e8d;
case 0x4c6e90:c.instructions+=5;goto B4c6e90;
case 0x4c6e94:c.instructions+=4;goto B4c6e94;
case 0x4c6e95:c.instructions+=3;goto B4c6e95;
case 0x4c6e9a:c.instructions+=2;goto B4c6e9a;
case 0x4c6e9b:c.instructions+=1;goto B4c6e9b;
case 0x4c6ea0:goto L4c6ea0;
case 0x4c6ea3:c.instructions+=2;goto B4c6ea3;
case 0x4c6ea5:c.instructions+=1;goto B4c6ea5;
case 0x4c6eaa:goto L4c6eaa;
case 0x4c6eab:c.instructions+=1;goto B4c6eab;
case 0x4c6eac:goto L4c6eac;
case 0x4c6ead:c.instructions+=2;goto B4c6ead;
case 0x4c6eb0:c.instructions+=1;goto B4c6eb0;
case 0x4c6ec0:goto L4c6ec0;
case 0x4c6ec1:c.instructions+=8;goto B4c6ec1;
case 0x4c6ec2:c.instructions+=7;goto B4c6ec2;
case 0x4c6ec3:c.instructions+=6;goto B4c6ec3;
case 0x4c6ec4:c.instructions+=5;goto B4c6ec4;
case 0x4c6ec6:c.instructions+=4;goto B4c6ec6;
case 0x4c6eca:c.instructions+=3;goto B4c6eca;
case 0x4c6ecc:c.instructions+=2;goto B4c6ecc;
case 0x4c6ece:c.instructions+=1;goto B4c6ece;
case 0x4c6ed3:goto L4c6ed3;
case 0x4c6ed5:c.instructions+=2;goto B4c6ed5;
case 0x4c6edb:c.instructions+=1;goto B4c6edb;
case 0x4c6ee0:goto L4c6ee0;
case 0x4c6ee2:c.instructions+=1;goto B4c6ee2;
case 0x4c6ee4:goto L4c6ee4;
case 0x4c6ee7:c.instructions+=11;goto B4c6ee7;
case 0x4c6eea:c.instructions+=10;goto B4c6eea;
case 0x4c6eed:c.instructions+=9;goto B4c6eed;
case 0x4c6eef:c.instructions+=8;goto B4c6eef;
case 0x4c6ef2:c.instructions+=7;goto B4c6ef2;
case 0x4c6ef5:c.instructions+=6;goto B4c6ef5;
case 0x4c6ef8:c.instructions+=5;goto B4c6ef8;
case 0x4c6ef9:c.instructions+=4;goto B4c6ef9;
case 0x4c6efc:c.instructions+=3;goto B4c6efc;
case 0x4c6efe:c.instructions+=2;goto B4c6efe;
case 0x4c6eff:c.instructions+=1;goto B4c6eff;
case 0x4c6f04:goto L4c6f04;
case 0x4c6f07:c.instructions+=2;goto B4c6f07;
case 0x4c6f08:c.instructions+=1;goto B4c6f08;
case 0x4c6f0d:goto L4c6f0d;
case 0x4c6f10:c.instructions+=6;goto B4c6f10;
case 0x4c6f13:c.instructions+=5;goto B4c6f13;
case 0x4c6f15:c.instructions+=4;goto B4c6f15;
case 0x4c6f16:c.instructions+=3;goto B4c6f16;
case 0x4c6f19:c.instructions+=2;goto B4c6f19;
case 0x4c6f1c:c.instructions+=1;goto B4c6f1c;
case 0x4c6f1e:goto L4c6f1e;
case 0x4c6f1f:c.instructions+=4;goto B4c6f1f;
case 0x4c6f20:c.instructions+=3;goto B4c6f20;
case 0x4c6f21:c.instructions+=2;goto B4c6f21;
case 0x4c6f22:c.instructions+=1;goto B4c6f22;
case 0x4c6f30:goto L4c6f30;
case 0x4c6f33:c.instructions+=8;goto B4c6f33;
case 0x4c6f37:c.instructions+=7;goto B4c6f37;
case 0x4c6f3a:c.instructions+=6;goto B4c6f3a;
case 0x4c6f3b:c.instructions+=5;goto B4c6f3b;
case 0x4c6f3d:c.instructions+=4;goto B4c6f3d;
case 0x4c6f43:c.instructions+=3;goto B4c6f43;
case 0x4c6f44:c.instructions+=2;goto B4c6f44;
case 0x4c6f48:c.instructions+=1;goto B4c6f48;
case 0x4c6f4d:goto L4c6f4d;
case 0x4c6f4f:c.instructions+=2;goto B4c6f4f;
case 0x4c6f53:c.instructions+=1;goto B4c6f53;
case 0x4c6f59:goto L4c6f59;
case 0x4c6f5f:c.instructions+=3;goto B4c6f5f;
case 0x4c6f62:c.instructions+=2;goto B4c6f62;
case 0x4c6f64:c.instructions+=1;goto B4c6f64;
case 0x4c6f6a:goto L4c6f6a;
case 0x4c6f6b:c.instructions+=8;goto B4c6f6b;
case 0x4c6f6c:c.instructions+=7;goto B4c6f6c;
case 0x4c6f6d:c.instructions+=6;goto B4c6f6d;
case 0x4c6f72:c.instructions+=5;goto B4c6f72;
case 0x4c6f75:c.instructions+=4;goto B4c6f75;
case 0x4c6f7d:c.instructions+=3;goto B4c6f7d;
case 0x4c6f80:c.instructions+=2;goto B4c6f80;
case 0x4c6f82:c.instructions+=1;goto B4c6f82;
case 0x4c6f88:goto L4c6f88;
case 0x4c6f8c:c.instructions+=3;goto B4c6f8c;
case 0x4c6f8f:c.instructions+=2;goto B4c6f8f;
case 0x4c6f91:c.instructions+=1;goto B4c6f91;
case 0x4c6f97:goto L4c6f97;
case 0x4c6f99:c.instructions+=2;goto B4c6f99;
case 0x4c6f9b:c.instructions+=1;goto B4c6f9b;
case 0x4c6fa1:goto L4c6fa1;
case 0x4c6fa4:c.instructions+=2;goto B4c6fa4;
case 0x4c6fa6:c.instructions+=1;goto B4c6fa6;
case 0x4c6fac:goto L4c6fac;
case 0x4c6faf:c.instructions+=3;goto B4c6faf;
case 0x4c6fb5:c.instructions+=2;goto B4c6fb5;
case 0x4c6fb6:c.instructions+=1;goto B4c6fb6;
case 0x4c6fbb:goto L4c6fbb;
case 0x4c6fbe:c.instructions+=5;goto B4c6fbe;
case 0x4c6fc2:c.instructions+=4;goto B4c6fc2;
case 0x4c6fc5:c.instructions+=3;goto B4c6fc5;
case 0x4c6fca:c.instructions+=2;goto B4c6fca;
case 0x4c6fcd:c.instructions+=1;goto B4c6fcd;
case 0x4c6fd2:goto L4c6fd2;
case 0x4c6fd4:c.instructions+=1;goto B4c6fd4;
case 0x4c6fd6:goto L4c6fd6;
case 0x4c6fda:c.instructions+=3;goto B4c6fda;
case 0x4c6fdb:c.instructions+=2;goto B4c6fdb;
case 0x4c6fe0:c.instructions+=1;goto B4c6fe0;
case 0x4c6fe5:goto L4c6fe5;
case 0x4c6fe7:c.instructions+=1;goto B4c6fe7;
case 0x4c6fe9:goto L4c6fe9;
case 0x4c6fec:c.instructions+=2;goto B4c6fec;
case 0x4c6fed:c.instructions+=1;goto B4c6fed;
case 0x4c6fef:goto L4c6fef;
case 0x4c6ff2:c.instructions+=2;goto B4c6ff2;
case 0x4c6ff6:c.instructions+=1;goto B4c6ff6;
case 0x4c6ff8:goto L4c6ff8;
case 0x4c6ffe:c.instructions+=1;goto B4c6ffe;
default:missing_instruction(c.pc);}
B4c6000:L4c6000:{c.instructions+=2;NFSU2_TR(0x4c6000);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6001:{NFSU2_TR(0x4c6001);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6006ull));
TAIL_STATIC(0x4bead0u,4be);
}
B4c6006:L4c6006:{c.instructions+=10;NFSU2_TR(0x4c6006);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4c6008:{NFSU2_TR(0x4c6008);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x837ae0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B4c600f:{NFSU2_TR(0x4c600f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6012:{NFSU2_TR(0x4c6012);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c6015:{NFSU2_TR(0x4c6015);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6018:{NFSU2_TR(0x4c6018);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c601f:{NFSU2_TR(0x4c601f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4c6023:{NFSU2_TR(0x4c6023);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c6026:{NFSU2_TR(0x4c6026);
u8 U[14];
__builtin_memmove((U+6),gp(0x8650d0),4);
w1(R+512,u8((r4(U+6))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+4)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c602c:{NFSU2_TR(0x4c602c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c6042;}}
}
B4c602e:L4c602e:{c.instructions+=6;NFSU2_TR(0x4c602e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6031:{NFSU2_TR(0x4c6031);
u8 U[4];
w4(U+0,u32(0x835bb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6036:{NFSU2_TR(0x4c6036);
u8 U[4];
w4(U+0,u32(0x837ae0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c603b:{NFSU2_TR(0x4c603b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4c603c:{NFSU2_TR(0x4c603c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c603d:{NFSU2_TR(0x4c603d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6042ull));
TAIL_STATIC(0x6fbf6bu,6fb);
}
B4c6042:L4c6042:{c.instructions+=4;NFSU2_TR(0x4c6042);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c6043:{NFSU2_TR(0x4c6043);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c6044:{NFSU2_TR(0x4c6044);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c6045:{NFSU2_TR(0x4c6045);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c6050:L4c6050:{c.instructions+=3;NFSU2_TR(0x4c6050);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B4c6055:{NFSU2_TR(0x4c6055);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c6057:{NFSU2_TR(0x4c6057);
if(r1(R+518)){{goto L4c6067;}}
}
B4c6059:L4c6059:{c.instructions+=4;NFSU2_TR(0x4c6059);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c605b:{NFSU2_TR(0x4c605b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c605d:{NFSU2_TR(0x4c605d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c605f:{NFSU2_TR(0x4c605f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6064ull));
TAIL_STATIC(0x57d670u,57d);
}
B4c6064:L4c6064:{c.instructions+=1;NFSU2_TR(0x4c6064);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c6067:L4c6067:{c.instructions+=8;NFSU2_TR(0x4c6067);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6068:{NFSU2_TR(0x4c6068);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4c606c:{NFSU2_TR(0x4c606c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c606d:{NFSU2_TR(0x4c606d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c606e:{NFSU2_TR(0x4c606e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c606f:{NFSU2_TR(0x4c606f);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6071:{NFSU2_TR(0x4c6071);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6072:{NFSU2_TR(0x4c6072);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6077ull));
TAIL_STATIC(0x57e5b0u,57e);
}
B4c6077:L4c6077:{c.instructions+=5;NFSU2_TR(0x4c6077);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c607b:{NFSU2_TR(0x4c607b);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c607d:{NFSU2_TR(0x4c607d);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c607f:{NFSU2_TR(0x4c607f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6080:{NFSU2_TR(0x4c6080);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6085ull));
TAIL_STATIC(0x57e480u,57e);
}
B4c6085:L4c6085:{c.instructions+=6;NFSU2_TR(0x4c6085);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4c6089:{NFSU2_TR(0x4c6089);
__builtin_memmove((R+28),(R+0),4);
}
B4c608b:{NFSU2_TR(0x4c608b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4c608e:{NFSU2_TR(0x4c608e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4c6090:{NFSU2_TR(0x4c6090);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c6092:{NFSU2_TR(0x4c6092);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4c60a8;}}
}
B4c6094:L4c6094:{c.instructions+=4;NFSU2_TR(0x4c6094);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4c6098:{NFSU2_TR(0x4c6098);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c609a:{NFSU2_TR(0x4c609a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c609b:{NFSU2_TR(0x4c609b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c60a0ull));
TAIL_STATIC(0x57e5b0u,57e);
}
B4c60a0:L4c60a0:{c.instructions+=4;NFSU2_TR(0x4c60a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c60a3:{NFSU2_TR(0x4c60a3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4c60a4:{NFSU2_TR(0x4c60a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B4c60a6:{NFSU2_TR(0x4c60a6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c6094u);}goto L4c6094;}}
}
B4c60a8:L4c60a8:{c.instructions+=4;NFSU2_TR(0x4c60a8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c60a9:{NFSU2_TR(0x4c60a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c60aa:{NFSU2_TR(0x4c60aa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c60ab:{NFSU2_TR(0x4c60ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c60b0ull));
TAIL_STATIC(0x4a9bf0u,4a9);
}
B4c60b0:L4c60b0:{c.instructions+=7;NFSU2_TR(0x4c60b0);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4c60b6:{NFSU2_TR(0x4c60b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c60ba:{NFSU2_TR(0x4c60ba);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c60bf:{NFSU2_TR(0x4c60bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c60c2:{NFSU2_TR(0x4c60c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c60c5:{NFSU2_TR(0x4c60c5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c60c8:{NFSU2_TR(0x4c60c8);
if(r1(R+518)){{goto L4c60de;}}
}
B4c60ca:L4c60ca:{c.instructions+=2;NFSU2_TR(0x4c60ca);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c60cd:{NFSU2_TR(0x4c60cd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c6118;}}
}
B4c60cf:L4c60cf:{c.instructions+=2;NFSU2_TR(0x4c60cf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c60d2:{NFSU2_TR(0x4c60d2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4c6118;}}
}
B4c60d4:L4c60d4:{c.instructions+=2;NFSU2_TR(0x4c60d4);
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
B4c60d6:{NFSU2_TR(0x4c60d6);
if(r1(R+518)){{goto L4c6185;}}
}
B4c60dc:L4c60dc:{c.instructions+=1;NFSU2_TR(0x4c60dc);
{goto L4c6118;}
}
B4c60de:L4c60de:{c.instructions+=2;NFSU2_TR(0x4c60de);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c60e0:{NFSU2_TR(0x4c60e0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4c6118;}}
}
B4c60e2:L4c60e2:{c.instructions+=5;NFSU2_TR(0x4c60e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c60e6:{NFSU2_TR(0x4c60e6);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c60eb:{NFSU2_TR(0x4c60eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c60ee:{NFSU2_TR(0x4c60ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c60f0:{NFSU2_TR(0x4c60f0);
if(r1(R+518)){{goto L4c6105;}}
}
B4c60f2:L4c60f2:{c.instructions+=4;NFSU2_TR(0x4c60f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c60f5:{NFSU2_TR(0x4c60f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c60f6:{NFSU2_TR(0x4c60f6);
u8 U[4];
w4(U+0,u32(0x15457de1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c60fb:{NFSU2_TR(0x4c60fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6100ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4c6100:L4c6100:{c.instructions+=2;NFSU2_TR(0x4c6100);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c6103:{NFSU2_TR(0x4c6103);
{goto L4c6113;}
}
B4c6105:L4c6105:{c.instructions+=3;NFSU2_TR(0x4c6105);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4c6108:{NFSU2_TR(0x4c6108);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c610a:{NFSU2_TR(0x4c610a);
if(r1(R+518)){{goto L4c6118;}}
}
B4c610c:L4c610c:{c.instructions+=1;NFSU2_TR(0x4c610c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c6113:L4c6113:{c.instructions+=1;NFSU2_TR(0x4c6113);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c6118:L4c6118:{c.instructions+=3;NFSU2_TR(0x4c6118);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c611b:{NFSU2_TR(0x4c611b);
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
B4c611d:{NFSU2_TR(0x4c611d);
if(r1(R+518)){{goto L4c6185;}}
}
B4c611f:L4c611f:{c.instructions+=3;NFSU2_TR(0x4c611f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6120:{NFSU2_TR(0x4c6120);
__builtin_memmove((R+4),(R+0),4);
}
B4c6122:{NFSU2_TR(0x4c6122);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6127ull));
TAIL_STATIC(0x4a37c0u,4a3);
}
B4c6127:L4c6127:{c.instructions+=3;NFSU2_TR(0x4c6127);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c612a:{NFSU2_TR(0x4c612a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4c612d:{NFSU2_TR(0x4c612d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4c617b;}}
}
B4c612f:L4c612f:{c.instructions+=1;NFSU2_TR(0x4c612f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4c618cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c6136:L4c6136:{c.instructions+=3;NFSU2_TR(0x4c6136);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6138:{NFSU2_TR(0x4c6138);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c613a:{NFSU2_TR(0x4c613a);
{goto L4c6142;}
}
B4c613c:L4c613c:{c.instructions+=3;NFSU2_TR(0x4c613c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c613f:{NFSU2_TR(0x4c613f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6141:{NFSU2_TR(0x4c6141);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6142:L4c6142:{c.instructions+=5;NFSU2_TR(0x4c6142);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4c6145:{NFSU2_TR(0x4c6145);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4c614b:{NFSU2_TR(0x4c614b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c614c:{NFSU2_TR(0x4c614c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c614f:{NFSU2_TR(0x4c614f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6154ull));
TAIL_STATIC(0x4a35c0u,4a3);
}
B4c6154:L4c6154:{c.instructions+=5;NFSU2_TR(0x4c6154);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c6155:{NFSU2_TR(0x4c6155);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c6156:{NFSU2_TR(0x4c6156);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c6157:{NFSU2_TR(0x4c6157);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c6158:{NFSU2_TR(0x4c6158);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c615b:L4c615b:{c.instructions+=9;NFSU2_TR(0x4c615b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c615e:{NFSU2_TR(0x4c615e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6161:{NFSU2_TR(0x4c6161);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c6164:{NFSU2_TR(0x4c6164);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6165:{NFSU2_TR(0x4c6165);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c616a:{NFSU2_TR(0x4c616a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c616b:{NFSU2_TR(0x4c616b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c616e:{NFSU2_TR(0x4c616e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c616f:{NFSU2_TR(0x4c616f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6174ull));
TAIL_STATIC(0x4a35c0u,4a3);
}
B4c6174:L4c6174:{c.instructions+=5;NFSU2_TR(0x4c6174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c6175:{NFSU2_TR(0x4c6175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c6176:{NFSU2_TR(0x4c6176);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c6177:{NFSU2_TR(0x4c6177);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c6178:{NFSU2_TR(0x4c6178);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c617b:L4c617b:{c.instructions+=2;NFSU2_TR(0x4c617b);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4c6181:{NFSU2_TR(0x4c6181);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c6185:L4c6185:{c.instructions+=5;NFSU2_TR(0x4c6185);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c6186:{NFSU2_TR(0x4c6186);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c6187:{NFSU2_TR(0x4c6187);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c6188:{NFSU2_TR(0x4c6188);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c6189:{NFSU2_TR(0x4c6189);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c61a0:L4c61a0:{c.instructions+=3;NFSU2_TR(0x4c61a0);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B4c61a5:{NFSU2_TR(0x4c61a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c61a7:{NFSU2_TR(0x4c61a7);
if(r1(R+518)){{goto L4c61b7;}}
}
B4c61a9:L4c61a9:{c.instructions+=4;NFSU2_TR(0x4c61a9);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c61ab:{NFSU2_TR(0x4c61ab);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c61ad:{NFSU2_TR(0x4c61ad);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c61af:{NFSU2_TR(0x4c61af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c61b4ull));
TAIL_STATIC(0x57d670u,57d);
}
B4c61b4:L4c61b4:{c.instructions+=1;NFSU2_TR(0x4c61b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c61b7:L4c61b7:{c.instructions+=7;NFSU2_TR(0x4c61b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c61bb:{NFSU2_TR(0x4c61bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c61bc:{NFSU2_TR(0x4c61bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c61bd:{NFSU2_TR(0x4c61bd);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c61bf:{NFSU2_TR(0x4c61bf);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c61c1:{NFSU2_TR(0x4c61c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c61c2:{NFSU2_TR(0x4c61c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c61c7ull));
TAIL_STATIC(0x57e480u,57e);
}
B4c61c7:L4c61c7:{c.instructions+=6;NFSU2_TR(0x4c61c7);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B4c61cc:{NFSU2_TR(0x4c61cc);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c61ce:{NFSU2_TR(0x4c61ce);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c61d0:{NFSU2_TR(0x4c61d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c61d1:{NFSU2_TR(0x4c61d1);
__builtin_memmove((R+24),(R+0),4);
}
B4c61d3:{NFSU2_TR(0x4c61d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c61d8ull));
TAIL_STATIC(0x57e480u,57e);
}
B4c61d8:L4c61d8:{c.instructions+=10;NFSU2_TR(0x4c61d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c61da:{NFSU2_TR(0x4c61da);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c61df:{NFSU2_TR(0x4c61df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c61e6:{NFSU2_TR(0x4c61e6);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4c61ec:{NFSU2_TR(0x4c61ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c61ef:{NFSU2_TR(0x4c61ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B4c61f2:{NFSU2_TR(0x4c61f2);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c61f6:{NFSU2_TR(0x4c61f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c61f9:{NFSU2_TR(0x4c61f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c61fa:{NFSU2_TR(0x4c61fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c61ffull));
TAIL_STATIC(0x575630u,575);
}
B4c61ff:L4c61ff:{c.instructions+=12;NFSU2_TR(0x4c61ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c6206:{NFSU2_TR(0x4c6206);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c620b:{NFSU2_TR(0x4c620b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4c620f:{NFSU2_TR(0x4c620f);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4c6215:{NFSU2_TR(0x4c6215);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4c6218:{NFSU2_TR(0x4c6218);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4c621c:{NFSU2_TR(0x4c621c);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c6221:{NFSU2_TR(0x4c6221);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6224:{NFSU2_TR(0x4c6224);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4c6228:{NFSU2_TR(0x4c6228);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6229:{NFSU2_TR(0x4c6229);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c622a:{NFSU2_TR(0x4c622a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c622full));
TAIL_STATIC(0x4a9c40u,4a9);
}
B4c622f:L4c622f:{c.instructions+=9;NFSU2_TR(0x4c622f);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4c6235:{NFSU2_TR(0x4c6235);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4c6239:{NFSU2_TR(0x4c6239);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c623c:{NFSU2_TR(0x4c623c);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c6241:{NFSU2_TR(0x4c6241);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4c6244:{NFSU2_TR(0x4c6244);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c6246:{NFSU2_TR(0x4c6246);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c6247:{NFSU2_TR(0x4c6247);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c6248:{NFSU2_TR(0x4c6248);
if(r1(R+518)){{goto L4c6255;}}
}
B4c624a:L4c624a:{c.instructions+=2;NFSU2_TR(0x4c624a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c624d:{NFSU2_TR(0x4c624d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6252ull));
TAIL_STATIC(0x4a3c80u,4a3);
}
B4c6252:L4c6252:{c.instructions+=1;NFSU2_TR(0x4c6252);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c6255:L4c6255:{c.instructions+=5;NFSU2_TR(0x4c6255);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6258:{NFSU2_TR(0x4c6258);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c625b:{NFSU2_TR(0x4c625b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c625c:{NFSU2_TR(0x4c625c);
u8 U[4];
w4(U+0,u32(0x461a18eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6261:{NFSU2_TR(0x4c6261);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6266ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4c6266:L4c6266:{c.instructions+=2;NFSU2_TR(0x4c6266);
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
B4c6269:{NFSU2_TR(0x4c6269);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c6270:L4c6270:{c.instructions+=5;NFSU2_TR(0x4c6270);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B4c6275:{NFSU2_TR(0x4c6275);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6276:{NFSU2_TR(0x4c6276);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4c6278:{NFSU2_TR(0x4c6278);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c627a:{NFSU2_TR(0x4c627a);
if(r1(R+518)){{goto L4c628a;}}
}
B4c627c:L4c627c:{c.instructions+=4;NFSU2_TR(0x4c627c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c627e:{NFSU2_TR(0x4c627e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6280:{NFSU2_TR(0x4c6280);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6282:{NFSU2_TR(0x4c6282);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6287ull));
TAIL_STATIC(0x57d670u,57d);
}
B4c6287:L4c6287:{c.instructions+=1;NFSU2_TR(0x4c6287);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c628a:L4c628a:{c.instructions+=4;NFSU2_TR(0x4c628a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c628e:{NFSU2_TR(0x4c628e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6290:{NFSU2_TR(0x4c6290);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6291:{NFSU2_TR(0x4c6291);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6296ull));
TAIL_STATIC(0x57e4d0u,57e);
}
B4c6296:L4c6296:{c.instructions+=5;NFSU2_TR(0x4c6296);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c629b:{NFSU2_TR(0x4c629b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c629e:{NFSU2_TR(0x4c629e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c62a1:{NFSU2_TR(0x4c62a1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c62a3:{NFSU2_TR(0x4c62a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c62b6;}}
}
B4c62a5:L4c62a5:{c.instructions+=3;NFSU2_TR(0x4c62a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c62a8:{NFSU2_TR(0x4c62a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c62a9:{NFSU2_TR(0x4c62a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c62aeull));
TAIL_STATIC(0x440540u,440);
}
B4c62ae:L4c62ae:{c.instructions+=2;NFSU2_TR(0x4c62ae);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c62b3:{NFSU2_TR(0x4c62b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c62b6:L4c62b6:{c.instructions+=5;NFSU2_TR(0x4c62b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c62b7:{NFSU2_TR(0x4c62b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c62ba:{NFSU2_TR(0x4c62ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c62bd:{NFSU2_TR(0x4c62bd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c62be:{NFSU2_TR(0x4c62be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c62c3ull));
TAIL_STATIC(0x575630u,575);
}
B4c62c3:L4c62c3:{c.instructions+=11;NFSU2_TR(0x4c62c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c62c6:{NFSU2_TR(0x4c62c6);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c62cb:{NFSU2_TR(0x4c62cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c62ce:{NFSU2_TR(0x4c62ce);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4c62d4:{NFSU2_TR(0x4c62d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c62d7:{NFSU2_TR(0x4c62d7);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c62dc:{NFSU2_TR(0x4c62dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4c62df:{NFSU2_TR(0x4c62df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c62e2:{NFSU2_TR(0x4c62e2);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4c62e4:{NFSU2_TR(0x4c62e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c62e5:{NFSU2_TR(0x4c62e5);
if(r1(R+518)){{goto L4c6309;}}
}
B4c62e7:L4c62e7:{c.instructions+=2;NFSU2_TR(0x4c62e7);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4c62ea:{NFSU2_TR(0x4c62ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c6309;}}
}
B4c62ec:L4c62ec:{c.instructions+=6;NFSU2_TR(0x4c62ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c62ef:{NFSU2_TR(0x4c62ef);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4c62f5:{NFSU2_TR(0x4c62f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c62f8:{NFSU2_TR(0x4c62f8);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c62fd:{NFSU2_TR(0x4c62fd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c62ff:{NFSU2_TR(0x4c62ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6304ull));
TAIL_STATIC(0x6fbfccu,6fb);
}
B4c6304:L4c6304:{c.instructions+=1;NFSU2_TR(0x4c6304);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c6309:L4c6309:{c.instructions+=5;NFSU2_TR(0x4c6309);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c630c:{NFSU2_TR(0x4c630c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c630f:{NFSU2_TR(0x4c630f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6310:{NFSU2_TR(0x4c6310);
u8 U[4];
w4(U+0,u32(0x461a18eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6315:{NFSU2_TR(0x4c6315);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c631aull));
TAIL_STATIC(0x55dda0u,55d);
}
B4c631a:L4c631a:{c.instructions+=3;NFSU2_TR(0x4c631a);
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
B4c631d:{NFSU2_TR(0x4c631d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c631e:{NFSU2_TR(0x4c631e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c6330:L4c6330:{c.instructions+=3;NFSU2_TR(0x4c6330);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B4c6335:{NFSU2_TR(0x4c6335);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c6337:{NFSU2_TR(0x4c6337);
if(r1(R+518)){{goto L4c6347;}}
}
B4c6339:L4c6339:{c.instructions+=4;NFSU2_TR(0x4c6339);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c633b:{NFSU2_TR(0x4c633b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c633d:{NFSU2_TR(0x4c633d);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c633f:{NFSU2_TR(0x4c633f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6344ull));
TAIL_STATIC(0x57d670u,57d);
}
B4c6344:L4c6344:{c.instructions+=1;NFSU2_TR(0x4c6344);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c6347:L4c6347:{c.instructions+=6;NFSU2_TR(0x4c6347);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6348:{NFSU2_TR(0x4c6348);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c634c:{NFSU2_TR(0x4c634c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c634d:{NFSU2_TR(0x4c634d);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c634f:{NFSU2_TR(0x4c634f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6350:{NFSU2_TR(0x4c6350);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6355ull));
TAIL_STATIC(0x57e4d0u,57e);
}
B4c6355:L4c6355:{c.instructions+=2;NFSU2_TR(0x4c6355);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c635a:{NFSU2_TR(0x4c635a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c635full));
TAIL_STATIC(0x43dbb0u,43d);
}
B4c635f:L4c635f:{c.instructions+=4;NFSU2_TR(0x4c635f);
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
B4c6362:{NFSU2_TR(0x4c6362);
w4(R+4,u32(0x83a9e0ull));
}
B4c6367:{NFSU2_TR(0x4c6367);
__builtin_memmove((R+28),(R+0),4);
}
B4c6369:{NFSU2_TR(0x4c6369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c636eull));
TAIL_STATIC(0x502fd0u,502);
}
B4c636e:L4c636e:{c.instructions+=4;NFSU2_TR(0x4c636e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c636f:{NFSU2_TR(0x4c636f);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B4c6371:{NFSU2_TR(0x4c6371);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6372:{NFSU2_TR(0x4c6372);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6377ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4c6377:L4c6377:{c.instructions+=5;NFSU2_TR(0x4c6377);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c637a:{NFSU2_TR(0x4c637a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c637c:{NFSU2_TR(0x4c637c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c637d:{NFSU2_TR(0x4c637d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c637e:{NFSU2_TR(0x4c637e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c638a;}}
}
B4c6380:L4c6380:{c.instructions+=2;NFSU2_TR(0x4c6380);
w4(R+4,u32(0x83a9d0ull));
}
B4c6385:{NFSU2_TR(0x4c6385);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c638aull));
TAIL_STATIC(0x5346f0u,534);
}
B4c638a:L4c638a:{c.instructions+=8;NFSU2_TR(0x4c638a);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c638f:{NFSU2_TR(0x4c638f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c6396:{NFSU2_TR(0x4c6396);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4c639c:{NFSU2_TR(0x4c639c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c639f:{NFSU2_TR(0x4c639f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c63a2:{NFSU2_TR(0x4c63a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c63a3:{NFSU2_TR(0x4c63a3);
u8 U[4];
w4(U+0,u32(0x461a18eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c63a8:{NFSU2_TR(0x4c63a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c63adull));
TAIL_STATIC(0x55dda0u,55d);
}
B4c63ad:L4c63ad:{c.instructions+=2;NFSU2_TR(0x4c63ad);
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
B4c63b0:{NFSU2_TR(0x4c63b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c63c0:L4c63c0:{c.instructions+=7;NFSU2_TR(0x4c63c0);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B4c63c5:{NFSU2_TR(0x4c63c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c63c6:{NFSU2_TR(0x4c63c6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4c63c8:{NFSU2_TR(0x4c63c8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c63ca:{NFSU2_TR(0x4c63ca);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c63cb:{NFSU2_TR(0x4c63cb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c63cc:{NFSU2_TR(0x4c63cc);
if(r1(R+518)){{goto L4c63dc;}}
}
B4c63ce:L4c63ce:{c.instructions+=4;NFSU2_TR(0x4c63ce);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c63d0:{NFSU2_TR(0x4c63d0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c63d2:{NFSU2_TR(0x4c63d2);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c63d4:{NFSU2_TR(0x4c63d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c63d9ull));
TAIL_STATIC(0x57d670u,57d);
}
B4c63d9:L4c63d9:{c.instructions+=1;NFSU2_TR(0x4c63d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c63dc:L4c63dc:{c.instructions+=5;NFSU2_TR(0x4c63dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c63e0:{NFSU2_TR(0x4c63e0);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c63e2:{NFSU2_TR(0x4c63e2);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c63e4:{NFSU2_TR(0x4c63e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c63e5:{NFSU2_TR(0x4c63e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c63eaull));
TAIL_STATIC(0x57e480u,57e);
}
B4c63ea:L4c63ea:{c.instructions+=6;NFSU2_TR(0x4c63ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c63ee:{NFSU2_TR(0x4c63ee);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c63f0:{NFSU2_TR(0x4c63f0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c63f2:{NFSU2_TR(0x4c63f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c63f3:{NFSU2_TR(0x4c63f3);
__builtin_memmove((R+24),(R+0),4);
}
B4c63f5:{NFSU2_TR(0x4c63f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c63faull));
TAIL_STATIC(0x57e480u,57e);
}
B4c63fa:L4c63fa:{c.instructions+=4;NFSU2_TR(0x4c63fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4c63fd:{NFSU2_TR(0x4c63fd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c6400:{NFSU2_TR(0x4c6400);
w4(R+20,u32(0x8867412dull));
}
B4c6405:{NFSU2_TR(0x4c6405);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c6411;}}
}
B4c6407:L4c6407:{c.instructions+=2;NFSU2_TR(0x4c6407);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4c640d:{NFSU2_TR(0x4c640d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c6411:L4c6411:{c.instructions+=5;NFSU2_TR(0x4c6411);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c6416:{NFSU2_TR(0x4c6416);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6419:{NFSU2_TR(0x4c6419);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4c641a:{NFSU2_TR(0x4c641a);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c641d:{NFSU2_TR(0x4c641d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4c64b6;}}
}
B4c6423:L4c6423:{c.instructions+=2;NFSU2_TR(0x4c6423);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6424:{NFSU2_TR(0x4c6424);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4c64e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c642b:L4c642b:{c.instructions+=2;NFSU2_TR(0x4c642b);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4c642e:{NFSU2_TR(0x4c642e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c6436;}}
}
B4c6430:L4c6430:{c.instructions+=1;NFSU2_TR(0x4c6430);
__builtin_memmove(gp(0x844ad9),(R+12),1);
}
B4c6436:L4c6436:{c.instructions+=4;NFSU2_TR(0x4c6436);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c6439:{NFSU2_TR(0x4c6439);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c643c:{NFSU2_TR(0x4c643c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c643d:{NFSU2_TR(0x4c643d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6442ull));
TAIL_STATIC(0x575630u,575);
}
B4c6442:L4c6442:{c.instructions+=4;NFSU2_TR(0x4c6442);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c6445:{NFSU2_TR(0x4c6445);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c6448:{NFSU2_TR(0x4c6448);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c644b:{NFSU2_TR(0x4c644b);
if(r1(R+518)){{goto L4c645e;}}
}
B4c644d:L4c644d:{c.instructions+=2;NFSU2_TR(0x4c644d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c6450:{NFSU2_TR(0x4c6450);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c6457;}}
}
B4c6452:L4c6452:{c.instructions+=2;NFSU2_TR(0x4c6452);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c6455:{NFSU2_TR(0x4c6455);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c645e;}}
}
B4c6457:L4c6457:{c.instructions+=2;NFSU2_TR(0x4c6457);
w4(R+20,u32(0xdc12af2eull));
}
B4c645c:{NFSU2_TR(0x4c645c);
{goto L4c6463;}
}
B4c645e:L4c645e:{c.instructions+=1;NFSU2_TR(0x4c645e);
w4(R+20,u32(0x8867412dull));
}
B4c6463:L4c6463:{c.instructions+=3;NFSU2_TR(0x4c6463);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c6468:{NFSU2_TR(0x4c6468);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c646b:{NFSU2_TR(0x4c646b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c647e;}}
}
B4c646d:L4c646d:{c.instructions+=3;NFSU2_TR(0x4c646d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6470:{NFSU2_TR(0x4c6470);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6471:{NFSU2_TR(0x4c6471);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6476ull));
TAIL_STATIC(0x440540u,440);
}
B4c6476:L4c6476:{c.instructions+=2;NFSU2_TR(0x4c6476);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c647b:{NFSU2_TR(0x4c647b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c647e:L4c647e:{c.instructions+=5;NFSU2_TR(0x4c647e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6481:{NFSU2_TR(0x4c6481);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4c6487:{NFSU2_TR(0x4c6487);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4c648b:{NFSU2_TR(0x4c648b);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c6490:{NFSU2_TR(0x4c6490);
{goto L4c64b5;}
}
B4c6492:L4c6492:{c.instructions+=4;NFSU2_TR(0x4c6492);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c6495:{NFSU2_TR(0x4c6495);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6498:{NFSU2_TR(0x4c6498);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6499:{NFSU2_TR(0x4c6499);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c649eull));
TAIL_STATIC(0x575630u,575);
}
B4c649e:L4c649e:{c.instructions+=4;NFSU2_TR(0x4c649e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c64a1:{NFSU2_TR(0x4c64a1);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c64a6:{NFSU2_TR(0x4c64a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c64a9:{NFSU2_TR(0x4c64a9);
{goto L4c64b5;}
}
B4c64ab:L4c64ab:{c.instructions+=2;NFSU2_TR(0x4c64ab);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c64ae:{NFSU2_TR(0x4c64ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c64b5;}}
}
B4c64b0:L4c64b0:{c.instructions+=1;NFSU2_TR(0x4c64b0);
w4(R+20,u32(0x5a051729ull));
}
B4c64b5:L4c64b5:{c.instructions+=1;NFSU2_TR(0x4c64b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c64b6:L4c64b6:{c.instructions+=9;NFSU2_TR(0x4c64b6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4c64ba:{NFSU2_TR(0x4c64ba);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4c64c0:{NFSU2_TR(0x4c64c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c64c3:{NFSU2_TR(0x4c64c3);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4c64c9:{NFSU2_TR(0x4c64c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c64cc:{NFSU2_TR(0x4c64cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c64cf:{NFSU2_TR(0x4c64cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c64d0:{NFSU2_TR(0x4c64d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c64d1:{NFSU2_TR(0x4c64d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c64d6ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4c64d6:L4c64d6:{c.instructions+=5;NFSU2_TR(0x4c64d6);
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
B4c64d9:{NFSU2_TR(0x4c64d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c64da:{NFSU2_TR(0x4c64da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c64db:{NFSU2_TR(0x4c64db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c64dc:{NFSU2_TR(0x4c64dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c6500:L4c6500:{c.instructions+=3;NFSU2_TR(0x4c6500);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B4c6505:{NFSU2_TR(0x4c6505);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c6507:{NFSU2_TR(0x4c6507);
if(r1(R+518)){{goto L4c6517;}}
}
B4c6509:L4c6509:{c.instructions+=4;NFSU2_TR(0x4c6509);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c650b:{NFSU2_TR(0x4c650b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c650d:{NFSU2_TR(0x4c650d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c650f:{NFSU2_TR(0x4c650f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6514ull));
TAIL_STATIC(0x57d670u,57d);
}
B4c6514:L4c6514:{c.instructions+=1;NFSU2_TR(0x4c6514);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c6517:L4c6517:{c.instructions+=8;NFSU2_TR(0x4c6517);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c651b:{NFSU2_TR(0x4c651b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c651c:{NFSU2_TR(0x4c651c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c651d:{NFSU2_TR(0x4c651d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c651e:{NFSU2_TR(0x4c651e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6520:{NFSU2_TR(0x4c6520);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6522:{NFSU2_TR(0x4c6522);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6523:{NFSU2_TR(0x4c6523);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6528ull));
TAIL_STATIC(0x57e480u,57e);
}
B4c6528:L4c6528:{c.instructions+=6;NFSU2_TR(0x4c6528);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c652c:{NFSU2_TR(0x4c652c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c652e:{NFSU2_TR(0x4c652e);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6530:{NFSU2_TR(0x4c6530);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6531:{NFSU2_TR(0x4c6531);
__builtin_memmove((R+24),(R+0),4);
}
B4c6533:{NFSU2_TR(0x4c6533);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6538ull));
TAIL_STATIC(0x57e480u,57e);
}
B4c6538:L4c6538:{c.instructions+=5;NFSU2_TR(0x4c6538);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c653c:{NFSU2_TR(0x4c653c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c653e:{NFSU2_TR(0x4c653e);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6540:{NFSU2_TR(0x4c6540);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6541:{NFSU2_TR(0x4c6541);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6546ull));
TAIL_STATIC(0x57e480u,57e);
}
B4c6546:L4c6546:{c.instructions+=5;NFSU2_TR(0x4c6546);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4c6549:{NFSU2_TR(0x4c6549);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B4c654b:{NFSU2_TR(0x4c654b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c654e:{NFSU2_TR(0x4c654e);
w4(R+28,u32(0x9854ed75ull));
}
B4c6553:{NFSU2_TR(0x4c6553);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c657d;}}
}
B4c6555:L4c6555:{c.instructions+=6;NFSU2_TR(0x4c6555);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c655a:{NFSU2_TR(0x4c655a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c655d:{NFSU2_TR(0x4c655d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6560:{NFSU2_TR(0x4c6560);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c6562:{NFSU2_TR(0x4c6562);
w4(R+28,u32(0x8867412dull));
}
B4c6567:{NFSU2_TR(0x4c6567);
if(r1(R+518)){{goto L4c6583;}}
}
B4c6569:L4c6569:{c.instructions+=3;NFSU2_TR(0x4c6569);
__builtin_memmove((R+4),(R+0),4);
}
B4c656b:{NFSU2_TR(0x4c656b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c656c:{NFSU2_TR(0x4c656c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6571ull));
TAIL_STATIC(0x575630u,575);
}
B4c6571:L4c6571:{c.instructions+=3;NFSU2_TR(0x4c6571);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c6574:{NFSU2_TR(0x4c6574);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c657b:{NFSU2_TR(0x4c657b);
{goto L4c6583;}
}
B4c657d:L4c657d:{c.instructions+=2;NFSU2_TR(0x4c657d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c6580:{NFSU2_TR(0x4c6580);
__builtin_memmove((R+12),(R+518),1);
}
B4c6583:L4c6583:{c.instructions+=14;NFSU2_TR(0x4c6583);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4c6589:{NFSU2_TR(0x4c6589);
__builtin_memmove(gp(0x844ad9),(R+12),1);
}
B4c658f:{NFSU2_TR(0x4c658f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c6592:{NFSU2_TR(0x4c6592);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c6597:{NFSU2_TR(0x4c6597);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c659e:{NFSU2_TR(0x4c659e);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4c65a4:{NFSU2_TR(0x4c65a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c65a8:{NFSU2_TR(0x4c65a8);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4c65ae:{NFSU2_TR(0x4c65ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c65b2:{NFSU2_TR(0x4c65b2);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c65b7:{NFSU2_TR(0x4c65b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c65ba:{NFSU2_TR(0x4c65ba);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c65bc:{NFSU2_TR(0x4c65bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c65be:{NFSU2_TR(0x4c65be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c65c3ull));
TAIL_STATIC(0x6fbfccu,6fb);
}
B4c65c3:L4c65c3:{c.instructions+=4;NFSU2_TR(0x4c65c3);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4c65c9:{NFSU2_TR(0x4c65c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c65cc:{NFSU2_TR(0x4c65cc);
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
B4c65ce:{NFSU2_TR(0x4c65ce);
if(r1(R+518)){{goto L4c65dd;}}
}
B4c65d0:L4c65d0:{c.instructions+=4;NFSU2_TR(0x4c65d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c65d3:{NFSU2_TR(0x4c65d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c65d4:{NFSU2_TR(0x4c65d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c65d5:{NFSU2_TR(0x4c65d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c65daull));
TAIL_STATIC(0x55dda0u,55d);
}
B4c65da:L4c65da:{c.instructions+=1;NFSU2_TR(0x4c65da);
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
B4c65dd:L4c65dd:{c.instructions+=4;NFSU2_TR(0x4c65dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c65de:{NFSU2_TR(0x4c65de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c65df:{NFSU2_TR(0x4c65df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c65e0:{NFSU2_TR(0x4c65e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c65f0:L4c65f0:{c.instructions+=5;NFSU2_TR(0x4c65f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c65f1:{NFSU2_TR(0x4c65f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c65f2:{NFSU2_TR(0x4c65f2);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c65f4:{NFSU2_TR(0x4c65f4);
__builtin_memmove((R+28),(R+4),4);
}
B4c65f6:{NFSU2_TR(0x4c65f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c65fbull));
TAIL_STATIC(0x575620u,575);
}
B4c65fb:L4c65fb:{c.instructions+=4;NFSU2_TR(0x4c65fb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4c65fd:{NFSU2_TR(0x4c65fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c6600:{NFSU2_TR(0x4c6600);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c6602:{NFSU2_TR(0x4c6602);
if(r1(R+518)){{goto L4c660d;}}
}
B4c6604:L4c6604:{c.instructions+=2;NFSU2_TR(0x4c6604);
__builtin_memmove((R+4),(R+0),4);
}
B4c6606:{NFSU2_TR(0x4c6606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c660bull));
TAIL_STATIC(0x4aec40u,4ae);
}
B4c660b:L4c660b:{c.instructions+=1;NFSU2_TR(0x4c660b);
{goto L4c660f;}
}
B4c660d:L4c660d:{c.instructions+=1;NFSU2_TR(0x4c660d);
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
B4c660f:L4c660f:{c.instructions+=39;NFSU2_TR(0x4c660f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6612:{NFSU2_TR(0x4c6612);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6616:{NFSU2_TR(0x4c6616);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4c6618:{NFSU2_TR(0x4c6618);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c661b:{NFSU2_TR(0x4c661b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c661e:{NFSU2_TR(0x4c661e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6621:{NFSU2_TR(0x4c6621);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6624:{NFSU2_TR(0x4c6624);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6627:{NFSU2_TR(0x4c6627);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c662a:{NFSU2_TR(0x4c662a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c662d:{NFSU2_TR(0x4c662d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6630:{NFSU2_TR(0x4c6630);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6633:{NFSU2_TR(0x4c6633);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6636:{NFSU2_TR(0x4c6636);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6639:{NFSU2_TR(0x4c6639);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c663c:{NFSU2_TR(0x4c663c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c663f:{NFSU2_TR(0x4c663f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6642:{NFSU2_TR(0x4c6642);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6645:{NFSU2_TR(0x4c6645);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6648:{NFSU2_TR(0x4c6648);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c664b:{NFSU2_TR(0x4c664b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c664e:{NFSU2_TR(0x4c664e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6651:{NFSU2_TR(0x4c6651);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6654:{NFSU2_TR(0x4c6654);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6657:{NFSU2_TR(0x4c6657);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c665a:{NFSU2_TR(0x4c665a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c665d:{NFSU2_TR(0x4c665d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f6658ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4c6664:{NFSU2_TR(0x4c6664);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6667:{NFSU2_TR(0x4c6667);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c666a:{NFSU2_TR(0x4c666a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
w4(U+4,u32(0x835bb8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c6671:{NFSU2_TR(0x4c6671);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6674:{NFSU2_TR(0x4c6674);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6678:{NFSU2_TR(0x4c6678);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c667f:{NFSU2_TR(0x4c667f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c6682:{NFSU2_TR(0x4c6682);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6685:{NFSU2_TR(0x4c6685);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6688:{NFSU2_TR(0x4c6688);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c6689:{NFSU2_TR(0x4c6689);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c668a:{NFSU2_TR(0x4c668a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c6690:L4c6690:{c.instructions+=13;NFSU2_TR(0x4c6690);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c6694:{NFSU2_TR(0x4c6694);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6697:{NFSU2_TR(0x4c6697);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6698:{NFSU2_TR(0x4c6698);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B4c669a:{NFSU2_TR(0x4c669a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c669b:{NFSU2_TR(0x4c669b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c669f:{NFSU2_TR(0x4c669f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c66a2:{NFSU2_TR(0x4c66a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c66a5:{NFSU2_TR(0x4c66a5);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+24))));
}
B4c66a7:{NFSU2_TR(0x4c66a7);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c66a9:{NFSU2_TR(0x4c66a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c66aa:{NFSU2_TR(0x4c66aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c66ad:{NFSU2_TR(0x4c66ad);
if(r1(R+518)){{goto L4c66b3;}}
}
B4c66af:L4c66af:{c.instructions+=2;NFSU2_TR(0x4c66af);
w1(R+12,u8(0x1ull));
}
B4c66b1:{NFSU2_TR(0x4c66b1);
{goto L4c66b5;}
}
B4c66b3:L4c66b3:{c.instructions+=1;NFSU2_TR(0x4c66b3);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c66b5:L4c66b5:{c.instructions+=2;NFSU2_TR(0x4c66b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4c66b7:{NFSU2_TR(0x4c66b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c66bcull));
TAIL_STATIC(0x502fd0u,502);
}
B4c66bc:L4c66bc:{c.instructions+=3;NFSU2_TR(0x4c66bc);
__builtin_memmove((R+28),(R+0),4);
}
B4c66be:{NFSU2_TR(0x4c66be);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B4c66c0:{NFSU2_TR(0x4c66c0);
if(r1(R+518)){{goto L4c66df;}}
}
B4c66c2:L4c66c2:{c.instructions+=4;NFSU2_TR(0x4c66c2);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c66c4:{NFSU2_TR(0x4c66c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c66c7:{NFSU2_TR(0x4c66c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c66c8:{NFSU2_TR(0x4c66c8);
if(r1(R+518)){{goto L4c66d1;}}
}
B4c66ca:L4c66ca:{c.instructions+=1;NFSU2_TR(0x4c66ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c66cfull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c66cf:L4c66cf:{c.instructions+=1;NFSU2_TR(0x4c66cf);
{goto L4c66d6;}
}
B4c66d1:L4c66d1:{c.instructions+=1;NFSU2_TR(0x4c66d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c66d6ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c66d6:L4c66d6:{c.instructions+=4;NFSU2_TR(0x4c66d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4c66d8:{NFSU2_TR(0x4c66d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c66db:{NFSU2_TR(0x4c66db);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B4c66dd:{NFSU2_TR(0x4c66dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c66c2u);}goto L4c66c2;}}
}
B4c66df:L4c66df:{c.instructions+=4;NFSU2_TR(0x4c66df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c66e0:{NFSU2_TR(0x4c66e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c66e1:{NFSU2_TR(0x4c66e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c66e2:{NFSU2_TR(0x4c66e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c66f0:L4c66f0:{c.instructions+=10;NFSU2_TR(0x4c66f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B4c66f3:{NFSU2_TR(0x4c66f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c66f4:{NFSU2_TR(0x4c66f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c66f5:{NFSU2_TR(0x4c66f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c66f9:{NFSU2_TR(0x4c66f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c66fc:{NFSU2_TR(0x4c66fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c66ff:{NFSU2_TR(0x4c66ff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6701:{NFSU2_TR(0x4c6701);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6703:{NFSU2_TR(0x4c6703);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6704:{NFSU2_TR(0x4c6704);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6709ull));
TAIL_STATIC(0x4901d0u,490);
}
B4c6709:L4c6709:{c.instructions+=22;NFSU2_TR(0x4c6709);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B4c670d:{NFSU2_TR(0x4c670d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6711:{NFSU2_TR(0x4c6711);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c6715:{NFSU2_TR(0x4c6715);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6719:{NFSU2_TR(0x4c6719);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c671d:{NFSU2_TR(0x4c671d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c6720:{NFSU2_TR(0x4c6720);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6721:{NFSU2_TR(0x4c6721);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c6725:{NFSU2_TR(0x4c6725);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4c6728:{NFSU2_TR(0x4c6728);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c672e:{NFSU2_TR(0x4c672e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4c6732:{NFSU2_TR(0x4c6732);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c6736:{NFSU2_TR(0x4c6736);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4c6738:{NFSU2_TR(0x4c6738);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c673c:{NFSU2_TR(0x4c673c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c6740:{NFSU2_TR(0x4c6740);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4c6744:{NFSU2_TR(0x4c6744);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4c6746:{NFSU2_TR(0x4c6746);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c6749:{NFSU2_TR(0x4c6749);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c674a:{NFSU2_TR(0x4c674a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c674c:{NFSU2_TR(0x4c674c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4c674e:{NFSU2_TR(0x4c674e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6753ull));
TAIL_STATIC(0x4a9d60u,4a9);
}
B4c6753:L4c6753:{c.instructions+=31;NFSU2_TR(0x4c6753);
if(mod_hook_table[48]){SPILL();c.pc=0x4c6753u;mod_hook_table[48](c);SPILL();if(c.pc!=0x4c6753u){TAIL_DYNAMIC(c.pc);}goto B4c6759;}
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4c6756:{NFSU2_TR(0x4c6756);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6759:{NFSU2_TR(0x4c6759);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4c675f:{NFSU2_TR(0x4c675f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6763:{NFSU2_TR(0x4c6763);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c6766:{NFSU2_TR(0x4c6766);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c676a:{NFSU2_TR(0x4c676a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c676d:{NFSU2_TR(0x4c676d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6771:{NFSU2_TR(0x4c6771);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6774:{NFSU2_TR(0x4c6774);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6778:{NFSU2_TR(0x4c6778);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c677b:{NFSU2_TR(0x4c677b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c677f:{NFSU2_TR(0x4c677f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6782:{NFSU2_TR(0x4c6782);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c6786:{NFSU2_TR(0x4c6786);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c678a:{NFSU2_TR(0x4c678a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4c678d:{NFSU2_TR(0x4c678d);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4c678f:{NFSU2_TR(0x4c678f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6793:{NFSU2_TR(0x4c6793);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6796:{NFSU2_TR(0x4c6796);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6798:{NFSU2_TR(0x4c6798);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c679e:{NFSU2_TR(0x4c679e);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4c67a2:{NFSU2_TR(0x4c67a2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
}
B4c67a7:{NFSU2_TR(0x4c67a7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4c67ab:{NFSU2_TR(0x4c67ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c67ac:{NFSU2_TR(0x4c67ac);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4c67ae:{NFSU2_TR(0x4c67ae);
__builtin_memmove((R+4),(R+28),4);
}
B4c67b0:{NFSU2_TR(0x4c67b0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c67b4:{NFSU2_TR(0x4c67b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c67b7:{NFSU2_TR(0x4c67b7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c67bb:{NFSU2_TR(0x4c67bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c67c0ull));
TAIL_STATIC(0x517db0u,517);
}
B4c67c0:L4c67c0:{c.instructions+=5;NFSU2_TR(0x4c67c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c67c2:{NFSU2_TR(0x4c67c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4c67c6:{NFSU2_TR(0x4c67c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c67c7:{NFSU2_TR(0x4c67c7);
__builtin_memmove((R+4),(R+28),4);
}
B4c67c9:{NFSU2_TR(0x4c67c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c67ceull));
TAIL_STATIC(0x517c10u,517);
}
B4c67ce:L4c67ce:{c.instructions+=4;NFSU2_TR(0x4c67ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c67cf:{NFSU2_TR(0x4c67cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c67d0:{NFSU2_TR(0x4c67d0);
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
B4c67d3:{NFSU2_TR(0x4c67d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c67e0:L4c67e0:{c.instructions+=10;NFSU2_TR(0x4c67e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B4c67e3:{NFSU2_TR(0x4c67e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c67e4:{NFSU2_TR(0x4c67e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c67e5:{NFSU2_TR(0x4c67e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c67e9:{NFSU2_TR(0x4c67e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c67ec:{NFSU2_TR(0x4c67ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c67ef:{NFSU2_TR(0x4c67ef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c67f1:{NFSU2_TR(0x4c67f1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c67f3:{NFSU2_TR(0x4c67f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c67f4:{NFSU2_TR(0x4c67f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c67f9ull));
TAIL_STATIC(0x4901d0u,490);
}
B4c67f9:L4c67f9:{c.instructions+=22;NFSU2_TR(0x4c67f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B4c67fd:{NFSU2_TR(0x4c67fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6801:{NFSU2_TR(0x4c6801);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c6805:{NFSU2_TR(0x4c6805);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6809:{NFSU2_TR(0x4c6809);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c680d:{NFSU2_TR(0x4c680d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c6810:{NFSU2_TR(0x4c6810);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6811:{NFSU2_TR(0x4c6811);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c6815:{NFSU2_TR(0x4c6815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4c6818:{NFSU2_TR(0x4c6818);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c681e:{NFSU2_TR(0x4c681e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4c6822:{NFSU2_TR(0x4c6822);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c6826:{NFSU2_TR(0x4c6826);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4c6828:{NFSU2_TR(0x4c6828);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c682c:{NFSU2_TR(0x4c682c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c6830:{NFSU2_TR(0x4c6830);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4c6834:{NFSU2_TR(0x4c6834);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4c6836:{NFSU2_TR(0x4c6836);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c6839:{NFSU2_TR(0x4c6839);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c683a:{NFSU2_TR(0x4c683a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c683c:{NFSU2_TR(0x4c683c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4c683e:{NFSU2_TR(0x4c683e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6843ull));
TAIL_STATIC(0x4a9d60u,4a9);
}
B4c6843:L4c6843:{c.instructions+=31;NFSU2_TR(0x4c6843);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4c6849:{NFSU2_TR(0x4c6849);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4c684c:{NFSU2_TR(0x4c684c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c684e:{NFSU2_TR(0x4c684e);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4c6851:{NFSU2_TR(0x4c6851);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6854:{NFSU2_TR(0x4c6854);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c6858:{NFSU2_TR(0x4c6858);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c685c:{NFSU2_TR(0x4c685c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c685f:{NFSU2_TR(0x4c685f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6863:{NFSU2_TR(0x4c6863);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6866:{NFSU2_TR(0x4c6866);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c686a:{NFSU2_TR(0x4c686a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c686d:{NFSU2_TR(0x4c686d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6871:{NFSU2_TR(0x4c6871);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c6875:{NFSU2_TR(0x4c6875);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c6878:{NFSU2_TR(0x4c6878);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4c687a:{NFSU2_TR(0x4c687a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c687e:{NFSU2_TR(0x4c687e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6881:{NFSU2_TR(0x4c6881);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c6887:{NFSU2_TR(0x4c6887);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c688b:{NFSU2_TR(0x4c688b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c688e:{NFSU2_TR(0x4c688e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4c6892:{NFSU2_TR(0x4c6892);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4c6896:{NFSU2_TR(0x4c6896);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4c6898:{NFSU2_TR(0x4c6898);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
}
B4c689d:{NFSU2_TR(0x4c689d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c68a1:{NFSU2_TR(0x4c68a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c68a2:{NFSU2_TR(0x4c68a2);
__builtin_memmove((R+4),(R+28),4);
}
B4c68a4:{NFSU2_TR(0x4c68a4);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c68a8:{NFSU2_TR(0x4c68a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c68ab:{NFSU2_TR(0x4c68ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c68b0ull));
TAIL_STATIC(0x517db0u,517);
}
B4c68b0:L4c68b0:{c.instructions+=5;NFSU2_TR(0x4c68b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c68b2:{NFSU2_TR(0x4c68b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4c68b6:{NFSU2_TR(0x4c68b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c68b7:{NFSU2_TR(0x4c68b7);
__builtin_memmove((R+4),(R+28),4);
}
B4c68b9:{NFSU2_TR(0x4c68b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c68beull));
TAIL_STATIC(0x517c10u,517);
}
B4c68be:L4c68be:{c.instructions+=4;NFSU2_TR(0x4c68be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c68bf:{NFSU2_TR(0x4c68bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c68c0:{NFSU2_TR(0x4c68c0);
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
B4c68c3:{NFSU2_TR(0x4c68c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c68d0:L4c68d0:{c.instructions+=16;NFSU2_TR(0x4c68d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c68d1:{NFSU2_TR(0x4c68d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c68d2:{NFSU2_TR(0x4c68d2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c68d3:{NFSU2_TR(0x4c68d3);
__builtin_memmove((R+20),(R+4),4);
}
B4c68d5:{NFSU2_TR(0x4c68d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c68d9:{NFSU2_TR(0x4c68d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c68da:{NFSU2_TR(0x4c68da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c68dd:{NFSU2_TR(0x4c68dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c68e0:{NFSU2_TR(0x4c68e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4c68e3:{NFSU2_TR(0x4c68e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c68e6:{NFSU2_TR(0x4c68e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c68e7:{NFSU2_TR(0x4c68e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c68ea:{NFSU2_TR(0x4c68ea);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x7f0ull))));
}
B4c68f0:{NFSU2_TR(0x4c68f0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1f0ull))));
}
B4c68f6:{NFSU2_TR(0x4c68f6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c68f9:{NFSU2_TR(0x4c68f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c6914;}}
}
B4c68fb:L4c68fb:{c.instructions+=3;NFSU2_TR(0x4c68fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4c6901:{NFSU2_TR(0x4c6901);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c6903:{NFSU2_TR(0x4c6903);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c6914;}}
}
B4c6905:L4c6905:{c.instructions+=3;NFSU2_TR(0x4c6905);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x968ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c690b:{NFSU2_TR(0x4c690b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c690d:{NFSU2_TR(0x4c690d);
if(r1(R+518)){{goto L4c6914;}}
}
B4c690f:L4c690f:{c.instructions+=2;NFSU2_TR(0x4c690f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6912:{NFSU2_TR(0x4c6912);
{goto L4c6939;}
}
B4c6914:L4c6914:{c.instructions+=5;NFSU2_TR(0x4c6914);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c691a:{NFSU2_TR(0x4c691a);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c6920:{NFSU2_TR(0x4c6920);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c6922:{NFSU2_TR(0x4c6922);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c6925:{NFSU2_TR(0x4c6925);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4c6933;}}
}
B4c6927:L4c6927:{c.instructions+=3;NFSU2_TR(0x4c6927);
__builtin_memmove((R+8),gp(0x7fbed8),4);
}
B4c692d:{NFSU2_TR(0x4c692d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6931:{NFSU2_TR(0x4c6931);
{goto L4c693d;}
}
B4c6933:L4c6933:{c.instructions+=1;NFSU2_TR(0x4c6933);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x440ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6939:L4c6939:{c.instructions+=1;NFSU2_TR(0x4c6939);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c693d:L4c693d:{c.instructions+=10;NFSU2_TR(0x4c693d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c6940:{NFSU2_TR(0x4c6940);
{u32 ea_=u32(r4(R+24)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c6946:{NFSU2_TR(0x4c6946);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6949:{NFSU2_TR(0x4c6949);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B4c694b:{NFSU2_TR(0x4c694b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c694e:{NFSU2_TR(0x4c694e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))&u32(r4(U+4))));
}
B4c6951:{NFSU2_TR(0x4c6951);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4c6953:{NFSU2_TR(0x4c6953);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4c6955:{NFSU2_TR(0x4c6955);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c6959:{NFSU2_TR(0x4c6959);
if(r1(R+518)){{goto L4c6b4d;}}
}
B4c695f:L4c695f:{c.instructions+=1;NFSU2_TR(0x4c695f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6964ull));
TAIL_STATIC(0x5ea8b0u,5ea);
}
B4c6964:L4c6964:{c.instructions+=3;NFSU2_TR(0x4c6964);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c6968:{NFSU2_TR(0x4c6968);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c696a:{NFSU2_TR(0x4c696a);
if(r1(R+518)){{goto L4c6987;}}
}
B4c696c:L4c696c:{c.instructions+=4;NFSU2_TR(0x4c696c);
{u32 ea_=u32(u32(7931132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c6972:{NFSU2_TR(0x4c6972);
u8 U[4];
w4(U+0,u32(0x8569a25full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6977:{NFSU2_TR(0x4c6977);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c697b:{NFSU2_TR(0x4c697b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6980ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c6980:L4c6980:{c.instructions+=4;NFSU2_TR(0x4c6980);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6983:{NFSU2_TR(0x4c6983);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6984:{NFSU2_TR(0x4c6984);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6985:{NFSU2_TR(0x4c6985);
{goto L4c69a0;}
}
B4c6987:L4c6987:{c.instructions+=4;NFSU2_TR(0x4c6987);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c698d:{NFSU2_TR(0x4c698d);
u8 U[4];
w4(U+0,u32(0x8569ab44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6992:{NFSU2_TR(0x4c6992);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c6996:{NFSU2_TR(0x4c6996);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c699bull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c699b:L4c699b:{c.instructions+=3;NFSU2_TR(0x4c699b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c699e:{NFSU2_TR(0x4c699e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c699f:{NFSU2_TR(0x4c699f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c69a0:L4c69a0:{c.instructions+=1;NFSU2_TR(0x4c69a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c69a5ull));
TAIL_STATIC(0x537be0u,537);
}
B4c69a5:L4c69a5:{c.instructions+=3;NFSU2_TR(0x4c69a5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c69a9:{NFSU2_TR(0x4c69a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c69ac:{NFSU2_TR(0x4c69ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c69b1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4c69b1:L4c69b1:{c.instructions+=5;NFSU2_TR(0x4c69b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c69b2:{NFSU2_TR(0x4c69b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c69b5:{NFSU2_TR(0x4c69b5);
u8 U[4];
w4(U+0,u32(0x795ac0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c69ba:{NFSU2_TR(0x4c69ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c69bb:{NFSU2_TR(0x4c69bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c69c0ull));
TAIL_STATIC(0x537be0u,537);
}
B4c69c0:L4c69c0:{c.instructions+=4;NFSU2_TR(0x4c69c0);
__builtin_memmove((R+0),gp(0x89e7c0),4);
}
B4c69c5:{NFSU2_TR(0x4c69c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c69c8:{NFSU2_TR(0x4c69c8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c69cb:{NFSU2_TR(0x4c69cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c69f4;}}
}
B4c69cd:L4c69cd:{c.instructions+=7;NFSU2_TR(0x4c69cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c69d3:{NFSU2_TR(0x4c69d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c69d7:{NFSU2_TR(0x4c69d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c69d8:{NFSU2_TR(0x4c69d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c69d9:{NFSU2_TR(0x4c69d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c69da:{NFSU2_TR(0x4c69da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c69db:{NFSU2_TR(0x4c69db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c69e0ull));
TAIL_STATIC(0x4aa0e0u,4aa);
}
B4c69e0:L4c69e0:{c.instructions+=5;NFSU2_TR(0x4c69e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c69e3:{NFSU2_TR(0x4c69e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c69e6:{NFSU2_TR(0x4c69e6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c69e9:{NFSU2_TR(0x4c69e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c69ea:{NFSU2_TR(0x4c69ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c69efull));
TAIL_STATIC(0x51ced0u,51c);
}
B4c69ef:L4c69ef:{c.instructions+=2;NFSU2_TR(0x4c69ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c69f2:{NFSU2_TR(0x4c69f2);
{goto L4c6a66;}
}
B4c69f4:L4c69f4:{c.instructions+=4;NFSU2_TR(0x4c69f4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c69f8:{NFSU2_TR(0x4c69f8);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4c69fb:{NFSU2_TR(0x4c69fb);
{u32 ea_=u32(u32(7897624u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c6a01:{NFSU2_TR(0x4c6a01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6a06ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4c6a06:L4c6a06:{c.instructions+=6;NFSU2_TR(0x4c6a06);
w4(R+4,u32(0x1ull));
}
B4c6a0b:{NFSU2_TR(0x4c6a0b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B4c6a0d:{NFSU2_TR(0x4c6a0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6a11:{NFSU2_TR(0x4c6a11);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c6a13:{NFSU2_TR(0x4c6a13);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c6a16:{NFSU2_TR(0x4c6a16);
{goto L4c6a20;}
}
B4c6a18:L4c6a18:{c.instructions+=2;NFSU2_TR(0x4c6a18);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6a1c:{NFSU2_TR(0x4c6a1c);
__builtin_memmove((R+16),(R+16),4);
}
B4c6a20:L4c6a20:{c.instructions+=3;NFSU2_TR(0x4c6a20);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c6a22:{NFSU2_TR(0x4c6a22);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c6a25:{NFSU2_TR(0x4c6a25);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4c6a3d;}}
}
B4c6a27:L4c6a27:{c.instructions+=2;NFSU2_TR(0x4c6a27);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c6a2a:{NFSU2_TR(0x4c6a2a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4c6a33;}}
}
B4c6a2c:L4c6a2c:{c.instructions+=2;NFSU2_TR(0x4c6a2c);
u8 U[4];
w4(U+0,u32(0xffc80b0bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6a31:{NFSU2_TR(0x4c6a31);
{goto L4c6a51;}
}
B4c6a33:L4c6a33:{c.instructions+=4;NFSU2_TR(0x4c6a33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c6a35:{NFSU2_TR(0x4c6a35);
u8 U[4];
w4(U+0,u32(0xffccf48aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6a3a:{NFSU2_TR(0x4c6a3a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6a3b:{NFSU2_TR(0x4c6a3b);
{goto L4c6a54;}
}
B4c6a3d:L4c6a3d:{c.instructions+=2;NFSU2_TR(0x4c6a3d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c6a40:{NFSU2_TR(0x4c6a40);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4c6a4c;}}
}
B4c6a42:L4c6a42:{c.instructions+=4;NFSU2_TR(0x4c6a42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c6a44:{NFSU2_TR(0x4c6a44);
u8 U[4];
w4(U+0,u32(0x7dc80b0bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6a49:{NFSU2_TR(0x4c6a49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6a4a:{NFSU2_TR(0x4c6a4a);
{goto L4c6a54;}
}
B4c6a4c:L4c6a4c:{c.instructions+=1;NFSU2_TR(0x4c6a4c);
u8 U[4];
w4(U+0,u32(0x64ccf48aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6a51:L4c6a51:{c.instructions+=2;NFSU2_TR(0x4c6a51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4c6a53:{NFSU2_TR(0x4c6a53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6a54:L4c6a54:{c.instructions+=1;NFSU2_TR(0x4c6a54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6a59ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4c6a59:L4c6a59:{c.instructions+=5;NFSU2_TR(0x4c6a59);
__builtin_memmove((R+0),(R+28),4);
}
B4c6a5b:{NFSU2_TR(0x4c6a5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c6a5e:{NFSU2_TR(0x4c6a5e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B4c6a61:{NFSU2_TR(0x4c6a61);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c6a64:{NFSU2_TR(0x4c6a64);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c6a18u);}goto L4c6a18;}}
}
B4c6a66:L4c6a66:{c.instructions+=3;NFSU2_TR(0x4c6a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c6a69:{NFSU2_TR(0x4c6a69);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c6a6b:{NFSU2_TR(0x4c6a6b);
if(r1(R+518)){{goto L4c6acf;}}
}
B4c6a6d:L4c6a6d:{c.instructions+=4;NFSU2_TR(0x4c6a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6a73:{NFSU2_TR(0x4c6a73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x448ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c6a79:{NFSU2_TR(0x4c6a79);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c6a7b:{NFSU2_TR(0x4c6a7b);
{goto L4c6a80;}
}
B4c6a80:L4c6a80:{c.instructions+=3;NFSU2_TR(0x4c6a80);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7f66a4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+12,u32(s32(s8(r1(U+8)))));
}
B4c6a88:{NFSU2_TR(0x4c6a88);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c6a8a:{NFSU2_TR(0x4c6a8a);
if(r1(R+518)){{goto L4c6ab5;}}
}
B4c6a8c:L4c6a8c:{c.instructions+=3;NFSU2_TR(0x4c6a8c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4c6a8d:{NFSU2_TR(0x4c6a8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0xaull))));
}
B4c6a90:{NFSU2_TR(0x4c6a90);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c6a80u);}goto L4c6a80;}}
}
B4c6a92:L4c6a92:{c.instructions+=1;NFSU2_TR(0x4c6a92);
w1(R+0,u8(0x58ull));
}
B4c6a94:L4c6a94:{c.instructions+=5;NFSU2_TR(0x4c6a94);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B4c6a97:{NFSU2_TR(0x4c6a97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6a98:{NFSU2_TR(0x4c6a98);
u8 U[4];
w4(U+0,u32(0x795abcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6a9d:{NFSU2_TR(0x4c6a9d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6a9e:{NFSU2_TR(0x4c6a9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6aa3ull));
TAIL_STATIC(0x537be0u,537);
}
B4c6aa3:L4c6aa3:{c.instructions+=3;NFSU2_TR(0x4c6aa3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c6aa6:{NFSU2_TR(0x4c6aa6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c6aa8:{NFSU2_TR(0x4c6aa8);
if(r1(R+518)){{goto L4c6abe;}}
}
B4c6aaa:L4c6aaa:{c.instructions+=4;NFSU2_TR(0x4c6aaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6aad:{NFSU2_TR(0x4c6aad);
u8 U[4];
w4(U+0,u32(0xffc3c3c3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6ab2:{NFSU2_TR(0x4c6ab2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6ab3:{NFSU2_TR(0x4c6ab3);
{goto L4c6ac7;}
}
B4c6ab5:L4c6ab5:{c.instructions+=2;NFSU2_TR(0x4c6ab5);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7f66a5ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B4c6abc:{NFSU2_TR(0x4c6abc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c6a94u);}goto L4c6a94;}
}
B4c6abe:L4c6abe:{c.instructions+=3;NFSU2_TR(0x4c6abe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c6ac1:{NFSU2_TR(0x4c6ac1);
u8 U[4];
w4(U+0,u32(0xffff8040ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6ac6:{NFSU2_TR(0x4c6ac6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6ac7:L4c6ac7:{c.instructions+=1;NFSU2_TR(0x4c6ac7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6accull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4c6acc:L4c6acc:{c.instructions+=1;NFSU2_TR(0x4c6acc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c6acf:L4c6acf:{c.instructions+=4;NFSU2_TR(0x4c6acf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6ad2:{NFSU2_TR(0x4c6ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c6ad8:{NFSU2_TR(0x4c6ad8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c6adb:{NFSU2_TR(0x4c6adb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6ae0ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B4c6ae0:L4c6ae0:{c.instructions+=8;NFSU2_TR(0x4c6ae0);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B4c6ae3:{NFSU2_TR(0x4c6ae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4c6ae6:{NFSU2_TR(0x4c6ae6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B4c6ae8:{NFSU2_TR(0x4c6ae8);
{u32 ea_=u32((r4(R+0)*4u)+u32(8372064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c6aef:{NFSU2_TR(0x4c6aef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6af2:{NFSU2_TR(0x4c6af2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c6af5:{NFSU2_TR(0x4c6af5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c6af9:{NFSU2_TR(0x4c6af9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c6b11;}}
}
B4c6afb:L4c6afb:{c.instructions+=5;NFSU2_TR(0x4c6afb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6b01:{NFSU2_TR(0x4c6b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6b04:{NFSU2_TR(0x4c6b04);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6b07:{NFSU2_TR(0x4c6b07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6b08:{NFSU2_TR(0x4c6b08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6b0dull));
TAIL_STATIC(0x594f00u,594);
}
B4c6b0d:L4c6b0d:{c.instructions+=1;NFSU2_TR(0x4c6b0d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c6b11:L4c6b11:{c.instructions+=4;NFSU2_TR(0x4c6b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6b17:{NFSU2_TR(0x4c6b17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6b18:{NFSU2_TR(0x4c6b18);
__builtin_memmove((R+4),(R+24),4);
}
B4c6b1a:{NFSU2_TR(0x4c6b1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6b1full));
TAIL_STATIC(0x5ecd30u,5ec);
}
B4c6b1f:L4c6b1f:{c.instructions+=7;NFSU2_TR(0x4c6b1f);
{u32 ea_=u32(u32(8372060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c6b25:{NFSU2_TR(0x4c6b25);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c6b29:{NFSU2_TR(0x4c6b29);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4c6b2b:{NFSU2_TR(0x4c6b2b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c6b2f:{NFSU2_TR(0x4c6b2f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c6b31:{NFSU2_TR(0x4c6b31);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c6b34:{NFSU2_TR(0x4c6b34);
if(r1(R+514)){{goto L4c6b41;}}
}
B4c6b36:L4c6b36:{c.instructions+=3;NFSU2_TR(0x4c6b36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c6b39:{NFSU2_TR(0x4c6b39);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6b3a:{NFSU2_TR(0x4c6b3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6b3full));
TAIL_STATIC(0x50ca50u,50c);
}
B4c6b3f:L4c6b3f:{c.instructions+=1;NFSU2_TR(0x4c6b3f);
{goto L4c6b4a;}
}
B4c6b41:L4c6b41:{c.instructions+=3;NFSU2_TR(0x4c6b41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6b44:{NFSU2_TR(0x4c6b44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6b45:{NFSU2_TR(0x4c6b45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6b4aull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c6b4a:L4c6b4a:{c.instructions+=1;NFSU2_TR(0x4c6b4a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c6b4d:L4c6b4d:{c.instructions+=3;NFSU2_TR(0x4c6b4d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c6b53:{NFSU2_TR(0x4c6b53);
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
B4c6b55:{NFSU2_TR(0x4c6b55);
if(r1(R+518)){{goto L4c6b6c;}}
}
B4c6b57:L4c6b57:{c.instructions+=3;NFSU2_TR(0x4c6b57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6b5a:{NFSU2_TR(0x4c6b5a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6b5b:{NFSU2_TR(0x4c6b5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6b60ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c6b60:L4c6b60:{c.instructions+=3;NFSU2_TR(0x4c6b60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c6b63:{NFSU2_TR(0x4c6b63);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6b64:{NFSU2_TR(0x4c6b64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6b69ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c6b69:L4c6b69:{c.instructions+=1;NFSU2_TR(0x4c6b69);
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
B4c6b6c:L4c6b6c:{c.instructions+=6;NFSU2_TR(0x4c6b6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c6b6d:{NFSU2_TR(0x4c6b6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c6b6e:{NFSU2_TR(0x4c6b6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c6b6f:{NFSU2_TR(0x4c6b6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c6b70:{NFSU2_TR(0x4c6b70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c6b71:{NFSU2_TR(0x4c6b71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c6b80:L4c6b80:{c.instructions+=9;NFSU2_TR(0x4c6b80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6b81:{NFSU2_TR(0x4c6b81);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6b85:{NFSU2_TR(0x4c6b85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6b86:{NFSU2_TR(0x4c6b86);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4c6b8a:{NFSU2_TR(0x4c6b8a);
__builtin_memmove((R+24),(R+4),4);
}
B4c6b8c:{NFSU2_TR(0x4c6b8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6b8f:{NFSU2_TR(0x4c6b8f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6b90:{NFSU2_TR(0x4c6b90);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c6b95:{NFSU2_TR(0x4c6b95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6b9aull));
TAIL_STATIC(0x5ecec0u,5ec);
}
B4c6b9a:L4c6b9a:{c.instructions+=9;NFSU2_TR(0x4c6b9a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c6b9e:{NFSU2_TR(0x4c6b9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6ba1:{NFSU2_TR(0x4c6ba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6ba4:{NFSU2_TR(0x4c6ba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c6ba7:{NFSU2_TR(0x4c6ba7);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B4c6ba9:{NFSU2_TR(0x4c6ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6bac:{NFSU2_TR(0x4c6bac);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B4c6bae:{NFSU2_TR(0x4c6bae);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c6bb0:{NFSU2_TR(0x4c6bb0);
if(r1(R+518)){{goto L4c6ca9;}}
}
B4c6bb6:L4c6bb6:{c.instructions+=5;NFSU2_TR(0x4c6bb6);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c6bba:{NFSU2_TR(0x4c6bba);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c6bbc:{NFSU2_TR(0x4c6bbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6bbf:{NFSU2_TR(0x4c6bbf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6bc0:{NFSU2_TR(0x4c6bc0);
if(r1(R+518)){{goto L4c6bf6;}}
}
B4c6bc2:L4c6bc2:{c.instructions+=1;NFSU2_TR(0x4c6bc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6bc7ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c6bc7:L4c6bc7:{c.instructions+=3;NFSU2_TR(0x4c6bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6bca:{NFSU2_TR(0x4c6bca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6bcb:{NFSU2_TR(0x4c6bcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6bd0ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c6bd0:L4c6bd0:{c.instructions+=3;NFSU2_TR(0x4c6bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c6bd3:{NFSU2_TR(0x4c6bd3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6bd4:{NFSU2_TR(0x4c6bd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6bd9ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c6bd9:L4c6bd9:{c.instructions+=3;NFSU2_TR(0x4c6bd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6bdc:{NFSU2_TR(0x4c6bdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6bdd:{NFSU2_TR(0x4c6bdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6be2ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c6be2:L4c6be2:{c.instructions+=3;NFSU2_TR(0x4c6be2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6be5:{NFSU2_TR(0x4c6be5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6be6:{NFSU2_TR(0x4c6be6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6bebull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c6beb:L4c6beb:{c.instructions+=3;NFSU2_TR(0x4c6beb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c6bee:{NFSU2_TR(0x4c6bee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6bef:{NFSU2_TR(0x4c6bef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6bf4ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c6bf4:L4c6bf4:{c.instructions+=1;NFSU2_TR(0x4c6bf4);
{goto L4c6c28;}
}
B4c6bf6:L4c6bf6:{c.instructions+=1;NFSU2_TR(0x4c6bf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6bfbull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c6bfb:L4c6bfb:{c.instructions+=3;NFSU2_TR(0x4c6bfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6bfe:{NFSU2_TR(0x4c6bfe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6bff:{NFSU2_TR(0x4c6bff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6c04ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c6c04:L4c6c04:{c.instructions+=3;NFSU2_TR(0x4c6c04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c6c07:{NFSU2_TR(0x4c6c07);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6c08:{NFSU2_TR(0x4c6c08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6c0dull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c6c0d:L4c6c0d:{c.instructions+=3;NFSU2_TR(0x4c6c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6c10:{NFSU2_TR(0x4c6c10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6c11:{NFSU2_TR(0x4c6c11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6c16ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c6c16:L4c6c16:{c.instructions+=3;NFSU2_TR(0x4c6c16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6c19:{NFSU2_TR(0x4c6c19);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6c1a:{NFSU2_TR(0x4c6c1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6c1full));
TAIL_STATIC(0x50ca00u,50c);
}
B4c6c1f:L4c6c1f:{c.instructions+=3;NFSU2_TR(0x4c6c1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c6c22:{NFSU2_TR(0x4c6c22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6c23:{NFSU2_TR(0x4c6c23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6c28ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c6c28:L4c6c28:{c.instructions+=4;NFSU2_TR(0x4c6c28);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4c6c2d:{NFSU2_TR(0x4c6c2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4c6c30:{NFSU2_TR(0x4c6c30);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c6c32:{NFSU2_TR(0x4c6c32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c6c3d;}}
}
B4c6c34:L4c6c34:{c.instructions+=3;NFSU2_TR(0x4c6c34);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4c6c39:{NFSU2_TR(0x4c6c39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c6c3b:{NFSU2_TR(0x4c6c3b);
if(r1(R+518)){{goto L4c6c66;}}
}
B4c6c3d:L4c6c3d:{c.instructions+=10;NFSU2_TR(0x4c6c3d);
{u32 ea_=u32(u32(7921760u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c6c43:{NFSU2_TR(0x4c6c43);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6c47:{NFSU2_TR(0x4c6c47);
{u32 ea_=u32(u32(7921764u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4c6c4d:{NFSU2_TR(0x4c6c4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4c6c50:{NFSU2_TR(0x4c6c50);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c6c54:{NFSU2_TR(0x4c6c54);
{u32 ea_=u32(u32(7921764u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c6c5a:{NFSU2_TR(0x4c6c5a);
{u32 ea_=u32(u32(7921760u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4c6c60:{NFSU2_TR(0x4c6c60);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c6c63:{NFSU2_TR(0x4c6c63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6c64:{NFSU2_TR(0x4c6c64);
{goto L4c6c8d;}
}
B4c6c66:L4c6c66:{c.instructions+=9;NFSU2_TR(0x4c6c66);
{u32 ea_=u32(u32(7921756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c6c6c:{NFSU2_TR(0x4c6c6c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6c70:{NFSU2_TR(0x4c6c70);
{u32 ea_=u32(u32(7921752u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4c6c76:{NFSU2_TR(0x4c6c76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4c6c79:{NFSU2_TR(0x4c6c79);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c6c7d:{NFSU2_TR(0x4c6c7d);
{u32 ea_=u32(u32(7921752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c6c83:{NFSU2_TR(0x4c6c83);
{u32 ea_=u32(u32(7921756u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4c6c89:{NFSU2_TR(0x4c6c89);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c6c8c:{NFSU2_TR(0x4c6c8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6c8d:L4c6c8d:{c.instructions+=2;NFSU2_TR(0x4c6c8d);
__builtin_memmove((R+4),(R+24),4);
}
B4c6c8f:{NFSU2_TR(0x4c6c8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6c94ull));
TAIL_STATIC(0x4aa160u,4aa);
}
B4c6c94:L4c6c94:{c.instructions+=6;NFSU2_TR(0x4c6c94);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c6c98:{NFSU2_TR(0x4c6c98);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c6c9c:{NFSU2_TR(0x4c6c9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6c9f:{NFSU2_TR(0x4c6c9f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6ca0:{NFSU2_TR(0x4c6ca0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6ca1:{NFSU2_TR(0x4c6ca1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6ca6ull));
TAIL_STATIC(0x51ced0u,51c);
}
B4c6ca6:L4c6ca6:{c.instructions+=1;NFSU2_TR(0x4c6ca6);
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
B4c6ca9:L4c6ca9:{c.instructions+=3;NFSU2_TR(0x4c6ca9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c6caa:{NFSU2_TR(0x4c6caa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c6cab:{NFSU2_TR(0x4c6cab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c6cb0:L4c6cb0:{c.instructions+=7;NFSU2_TR(0x4c6cb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B4c6cb3:{NFSU2_TR(0x4c6cb3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6cb4:{NFSU2_TR(0x4c6cb4);
__builtin_memmove((R+28),(R+4),4);
}
B4c6cb6:{NFSU2_TR(0x4c6cb6);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4c6cbc:{NFSU2_TR(0x4c6cbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6cbf:{NFSU2_TR(0x4c6cbf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c6cc2:{NFSU2_TR(0x4c6cc2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c6d3b;}}
}
B4c6cc4:L4c6cc4:{c.instructions+=4;NFSU2_TR(0x4c6cc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c6cc8:{NFSU2_TR(0x4c6cc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c6cca:{NFSU2_TR(0x4c6cca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6ccb:{NFSU2_TR(0x4c6ccb);
if(r1(R+518)){{goto L4c6ce0;}}
}
B4c6ccd:L4c6ccd:{c.instructions+=2;NFSU2_TR(0x4c6ccd);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4c6cd1:{NFSU2_TR(0x4c6cd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c6ce0;}}
}
B4c6cd3:L4c6cd3:{c.instructions+=2;NFSU2_TR(0x4c6cd3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c6cd6:{NFSU2_TR(0x4c6cd6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4c6ced;}}
}
B4c6cd8:L4c6cd8:{c.instructions+=2;NFSU2_TR(0x4c6cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6cde:{NFSU2_TR(0x4c6cde);
{goto L4c6cef;}
}
B4c6ce0:L4c6ce0:{c.instructions+=2;NFSU2_TR(0x4c6ce0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c6ce3:{NFSU2_TR(0x4c6ce3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4c6ced;}}
}
B4c6ce5:L4c6ce5:{c.instructions+=2;NFSU2_TR(0x4c6ce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6ceb:{NFSU2_TR(0x4c6ceb);
{goto L4c6cef;}
}
B4c6ced:L4c6ced:{c.instructions+=1;NFSU2_TR(0x4c6ced);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c6cef:L4c6cef:{c.instructions+=5;NFSU2_TR(0x4c6cef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6cf0:{NFSU2_TR(0x4c6cf0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6cf1:{NFSU2_TR(0x4c6cf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c6cf4:{NFSU2_TR(0x4c6cf4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6cf5:{NFSU2_TR(0x4c6cf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6cfaull));
TAIL_STATIC(0x5f82d0u,5f8);
}
B4c6cfa:L4c6cfa:{c.instructions+=6;NFSU2_TR(0x4c6cfa);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c6cfc:{NFSU2_TR(0x4c6cfc);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c6d02:{NFSU2_TR(0x4c6d02);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c6d08:{NFSU2_TR(0x4c6d08);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c6d0a:{NFSU2_TR(0x4c6d0a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c6d0d:{NFSU2_TR(0x4c6d0d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4c6d3a;}}
}
B4c6d0f:L4c6d0f:{c.instructions+=5;NFSU2_TR(0x4c6d0f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6d11:{NFSU2_TR(0x4c6d11);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4c6d15:{NFSU2_TR(0x4c6d15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6d16:{NFSU2_TR(0x4c6d16);
__builtin_memmove((R+4),(R+24),4);
}
B4c6d18:{NFSU2_TR(0x4c6d18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6d1dull));
TAIL_STATIC(0x577240u,577);
}
B4c6d1d:L4c6d1d:{c.instructions+=6;NFSU2_TR(0x4c6d1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c6d20:{NFSU2_TR(0x4c6d20);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4c6d24:{NFSU2_TR(0x4c6d24);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6d25:{NFSU2_TR(0x4c6d25);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6d2a:{NFSU2_TR(0x4c6d2a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6d2b:{NFSU2_TR(0x4c6d2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6d30ull));
TAIL_STATIC(0x537be0u,537);
}
B4c6d30:L4c6d30:{c.instructions+=3;NFSU2_TR(0x4c6d30);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c6d33:{NFSU2_TR(0x4c6d33);
__builtin_memmove((R+4),(R+28),4);
}
B4c6d35:{NFSU2_TR(0x4c6d35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6d3aull));
TAIL_STATIC(0x4aa740u,4aa);
}
B4c6d3a:L4c6d3a:{c.instructions+=1;NFSU2_TR(0x4c6d3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c6d3b:L4c6d3b:{c.instructions+=3;NFSU2_TR(0x4c6d3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c6d3c:{NFSU2_TR(0x4c6d3c);
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
B4c6d3f:{NFSU2_TR(0x4c6d3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c6d50:L4c6d50:{c.instructions+=8;NFSU2_TR(0x4c6d50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B4c6d53:{NFSU2_TR(0x4c6d53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6d54:{NFSU2_TR(0x4c6d54);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c6d58:{NFSU2_TR(0x4c6d58);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c6d5b:{NFSU2_TR(0x4c6d5b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c6d5d:{NFSU2_TR(0x4c6d5d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6d5e:{NFSU2_TR(0x4c6d5e);
__builtin_memmove((R+28),(R+4),4);
}
B4c6d60:{NFSU2_TR(0x4c6d60);
if(r1(R+518)){{goto L4c6def;}}
}
B4c6d66:L4c6d66:{c.instructions+=5;NFSU2_TR(0x4c6d66);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6d67:{NFSU2_TR(0x4c6d67);
__builtin_memmove((R+12),gp(0x890118),4);
}
B4c6d6d:{NFSU2_TR(0x4c6d6d);
__builtin_memmove((R+4),(R+24),4);
}
B4c6d6f:{NFSU2_TR(0x4c6d6f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x18ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c6d72:{NFSU2_TR(0x4c6d72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6d77ull));
TAIL_STATIC(0x5ee290u,5ee);
}
B4c6d77:L4c6d77:{c.instructions+=9;NFSU2_TR(0x4c6d77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c6d79:{NFSU2_TR(0x4c6d79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+0))));
}
B4c6d7b:{NFSU2_TR(0x4c6d7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6d7f:{NFSU2_TR(0x4c6d7f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c6d83:{NFSU2_TR(0x4c6d83);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c6d89:{NFSU2_TR(0x4c6d89);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c6d8f:{NFSU2_TR(0x4c6d8f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c6d91:{NFSU2_TR(0x4c6d91);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c6d94:{NFSU2_TR(0x4c6d94);
if(r1(R+514)){{goto L4c6dac;}}
}
B4c6d96:L4c6d96:{c.instructions+=5;NFSU2_TR(0x4c6d96);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B4c6d9a:{NFSU2_TR(0x4c6d9a);
u8 U[16];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4c6da1:{NFSU2_TR(0x4c6da1);
__builtin_memmove((R+8),gp(0x890118),4);
}
B4c6da7:{NFSU2_TR(0x4c6da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B4c6daa:{NFSU2_TR(0x4c6daa);
{goto L4c6dc0;}
}
B4c6dac:L4c6dac:{c.instructions+=4;NFSU2_TR(0x4c6dac);
__builtin_memmove((R+12),gp(0x890118),4);
}
B4c6db2:{NFSU2_TR(0x4c6db2);
__builtin_memmove((R+4),(R+24),4);
}
B4c6db4:{NFSU2_TR(0x4c6db4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x18ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c6db7:{NFSU2_TR(0x4c6db7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6dbcull));
TAIL_STATIC(0x5ee290u,5ee);
}
B4c6dbc:L4c6dbc:{c.instructions+=2;NFSU2_TR(0x4c6dbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c6dbe:{NFSU2_TR(0x4c6dbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+0))));
}
B4c6dc0:L4c6dc0:{c.instructions+=6;NFSU2_TR(0x4c6dc0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6dc2:{NFSU2_TR(0x4c6dc2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4c6dc6:{NFSU2_TR(0x4c6dc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c6dc9:{NFSU2_TR(0x4c6dc9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6dca:{NFSU2_TR(0x4c6dca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4c6dcc:{NFSU2_TR(0x4c6dcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6dd1ull));
TAIL_STATIC(0x577240u,577);
}
B4c6dd1:L4c6dd1:{c.instructions+=6;NFSU2_TR(0x4c6dd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6dd4:{NFSU2_TR(0x4c6dd4);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4c6dd8:{NFSU2_TR(0x4c6dd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6dd9:{NFSU2_TR(0x4c6dd9);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6dde:{NFSU2_TR(0x4c6dde);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6ddf:{NFSU2_TR(0x4c6ddf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6de4ull));
TAIL_STATIC(0x537be0u,537);
}
B4c6de4:L4c6de4:{c.instructions+=3;NFSU2_TR(0x4c6de4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c6de7:{NFSU2_TR(0x4c6de7);
__builtin_memmove((R+4),(R+28),4);
}
B4c6de9:{NFSU2_TR(0x4c6de9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6deeull));
TAIL_STATIC(0x4aa740u,4aa);
}
B4c6dee:L4c6dee:{c.instructions+=1;NFSU2_TR(0x4c6dee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c6def:L4c6def:{c.instructions+=4;NFSU2_TR(0x4c6def);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c6df0:{NFSU2_TR(0x4c6df0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c6df1:{NFSU2_TR(0x4c6df1);
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
B4c6df4:{NFSU2_TR(0x4c6df4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c6e00:L4c6e00:{c.instructions+=7;NFSU2_TR(0x4c6e00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B4c6e03:{NFSU2_TR(0x4c6e03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6e04:{NFSU2_TR(0x4c6e04);
__builtin_memmove((R+24),(R+4),4);
}
B4c6e06:{NFSU2_TR(0x4c6e06);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6e0a:{NFSU2_TR(0x4c6e0a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c6e0d:{NFSU2_TR(0x4c6e0d);
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
B4c6e0f:{NFSU2_TR(0x4c6e0f);
if(r1(R+518)){{goto L4c6e46;}}
}
B4c6e11:L4c6e11:{c.instructions+=1;NFSU2_TR(0x4c6e11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6e16ull));
TAIL_STATIC(0x5ee290u,5ee);
}
B4c6e16:L4c6e16:{c.instructions+=7;NFSU2_TR(0x4c6e16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c6e18:{NFSU2_TR(0x4c6e18);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6e1a:{NFSU2_TR(0x4c6e1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4c6e1e:{NFSU2_TR(0x4c6e1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c6e21:{NFSU2_TR(0x4c6e21);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6e22:{NFSU2_TR(0x4c6e22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4c6e24:{NFSU2_TR(0x4c6e24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6e29ull));
TAIL_STATIC(0x577240u,577);
}
B4c6e29:L4c6e29:{c.instructions+=6;NFSU2_TR(0x4c6e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6e2c:{NFSU2_TR(0x4c6e2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4c6e30:{NFSU2_TR(0x4c6e30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6e31:{NFSU2_TR(0x4c6e31);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6e36:{NFSU2_TR(0x4c6e36);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6e37:{NFSU2_TR(0x4c6e37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6e3cull));
TAIL_STATIC(0x537be0u,537);
}
B4c6e3c:L4c6e3c:{c.instructions+=3;NFSU2_TR(0x4c6e3c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c6e3f:{NFSU2_TR(0x4c6e3f);
__builtin_memmove((R+4),(R+24),4);
}
B4c6e41:{NFSU2_TR(0x4c6e41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6e46ull));
TAIL_STATIC(0x4aa740u,4aa);
}
B4c6e46:L4c6e46:{c.instructions+=3;NFSU2_TR(0x4c6e46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c6e47:{NFSU2_TR(0x4c6e47);
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
B4c6e4a:{NFSU2_TR(0x4c6e4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c6e50:L4c6e50:{c.instructions+=7;NFSU2_TR(0x4c6e50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c6e54:{NFSU2_TR(0x4c6e54);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c6e57:{NFSU2_TR(0x4c6e57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B4c6e5a:{NFSU2_TR(0x4c6e5a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c6e5c:{NFSU2_TR(0x4c6e5c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6e5d:{NFSU2_TR(0x4c6e5d);
__builtin_memmove((R+24),(R+4),4);
}
B4c6e5f:{NFSU2_TR(0x4c6e5f);
if(r1(R+518)){{goto L4c6eac;}}
}
B4c6e61:L4c6e61:{c.instructions+=3;NFSU2_TR(0x4c6e61);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4c6e65:{NFSU2_TR(0x4c6e65);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c6e68:{NFSU2_TR(0x4c6e68);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4c6eac;}}
}
B4c6e6a:L4c6e6a:{c.instructions+=11;NFSU2_TR(0x4c6e6a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6e6b:{NFSU2_TR(0x4c6e6b);
u8 U[16];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B4c6e72:{NFSU2_TR(0x4c6e72);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6e73:{NFSU2_TR(0x4c6e73);
u8 U[16];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B4c6e7a:{NFSU2_TR(0x4c6e7a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6e7c:{NFSU2_TR(0x4c6e7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4c6e80:{NFSU2_TR(0x4c6e80);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c6e83:{NFSU2_TR(0x4c6e83);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B4c6e85:{NFSU2_TR(0x4c6e85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6e86:{NFSU2_TR(0x4c6e86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4c6e88:{NFSU2_TR(0x4c6e88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6e8dull));
TAIL_STATIC(0x577240u,577);
}
B4c6e8d:L4c6e8d:{c.instructions+=6;NFSU2_TR(0x4c6e8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c6e90:{NFSU2_TR(0x4c6e90);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4c6e94:{NFSU2_TR(0x4c6e94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6e95:{NFSU2_TR(0x4c6e95);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6e9a:{NFSU2_TR(0x4c6e9a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6e9b:{NFSU2_TR(0x4c6e9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6ea0ull));
TAIL_STATIC(0x537be0u,537);
}
B4c6ea0:L4c6ea0:{c.instructions+=3;NFSU2_TR(0x4c6ea0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c6ea3:{NFSU2_TR(0x4c6ea3);
__builtin_memmove((R+4),(R+24),4);
}
B4c6ea5:{NFSU2_TR(0x4c6ea5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6eaaull));
TAIL_STATIC(0x4aa740u,4aa);
}
B4c6eaa:L4c6eaa:{c.instructions+=2;NFSU2_TR(0x4c6eaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c6eab:{NFSU2_TR(0x4c6eab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c6eac:L4c6eac:{c.instructions+=3;NFSU2_TR(0x4c6eac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c6ead:{NFSU2_TR(0x4c6ead);
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
B4c6eb0:{NFSU2_TR(0x4c6eb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c6ec0:L4c6ec0:{c.instructions+=9;NFSU2_TR(0x4c6ec0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6ec1:{NFSU2_TR(0x4c6ec1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6ec2:{NFSU2_TR(0x4c6ec2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6ec3:{NFSU2_TR(0x4c6ec3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6ec4:{NFSU2_TR(0x4c6ec4);
__builtin_memmove((R+28),(R+4),4);
}
B4c6ec6:{NFSU2_TR(0x4c6ec6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6eca:{NFSU2_TR(0x4c6eca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4c6ecc:{NFSU2_TR(0x4c6ecc);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c6ece:{NFSU2_TR(0x4c6ece);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6ed3ull));
TAIL_STATIC(0x502fd0u,502);
}
B4c6ed3:L4c6ed3:{c.instructions+=3;NFSU2_TR(0x4c6ed3);
__builtin_memmove((R+20),(R+0),4);
}
B4c6ed5:{NFSU2_TR(0x4c6ed5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1c8ull))));
}
B4c6edb:{NFSU2_TR(0x4c6edb);
{goto L4c6ee0;}
}
B4c6ee0:L4c6ee0:{c.instructions+=2;NFSU2_TR(0x4c6ee0);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B4c6ee2:{NFSU2_TR(0x4c6ee2);
if(r1(R+518)){{goto L4c6f1e;}}
}
B4c6ee4:L4c6ee4:{c.instructions+=12;NFSU2_TR(0x4c6ee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6ee7:{NFSU2_TR(0x4c6ee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6eea:{NFSU2_TR(0x4c6eea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c6eed:{NFSU2_TR(0x4c6eed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4c6eef:{NFSU2_TR(0x4c6eef);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4c6ef2:{NFSU2_TR(0x4c6ef2);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c6ef5:{NFSU2_TR(0x4c6ef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6ef8:{NFSU2_TR(0x4c6ef8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6ef9:{NFSU2_TR(0x4c6ef9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c6efc:{NFSU2_TR(0x4c6efc);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6efe:{NFSU2_TR(0x4c6efe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6eff:{NFSU2_TR(0x4c6eff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6f04ull));
TAIL_STATIC(0x50c960u,50c);
}
B4c6f04:L4c6f04:{c.instructions+=3;NFSU2_TR(0x4c6f04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c6f07:{NFSU2_TR(0x4c6f07);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6f08:{NFSU2_TR(0x4c6f08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6f0dull));
TAIL_STATIC(0x512080u,512);
}
B4c6f0d:L4c6f0d:{c.instructions+=7;NFSU2_TR(0x4c6f0d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c6f10:{NFSU2_TR(0x4c6f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6f13:{NFSU2_TR(0x4c6f13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4c6f15:{NFSU2_TR(0x4c6f15);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4c6f16:{NFSU2_TR(0x4c6f16);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B4c6f19:{NFSU2_TR(0x4c6f19);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c6f1c:{NFSU2_TR(0x4c6f1c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c6ee0u);}goto L4c6ee0;}}
}
B4c6f1e:L4c6f1e:{c.instructions+=5;NFSU2_TR(0x4c6f1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c6f1f:{NFSU2_TR(0x4c6f1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c6f20:{NFSU2_TR(0x4c6f20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c6f21:{NFSU2_TR(0x4c6f21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c6f22:{NFSU2_TR(0x4c6f22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c6f30:L4c6f30:{c.instructions+=9;NFSU2_TR(0x4c6f30);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c6f33:{NFSU2_TR(0x4c6f33);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6f37:{NFSU2_TR(0x4c6f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6f3a:{NFSU2_TR(0x4c6f3a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6f3b:{NFSU2_TR(0x4c6f3b);
__builtin_memmove((R+24),(R+4),4);
}
B4c6f3d:{NFSU2_TR(0x4c6f3d);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4c6f43:{NFSU2_TR(0x4c6f43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6f44:{NFSU2_TR(0x4c6f44);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6f48:{NFSU2_TR(0x4c6f48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6f4dull));
TAIL_STATIC(0x5eef60u,5ee);
}
B4c6f4d:L4c6f4d:{c.instructions+=3;NFSU2_TR(0x4c6f4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c6f4f:{NFSU2_TR(0x4c6f4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6f53:{NFSU2_TR(0x4c6f53);
if(r1(R+518)){TAIL_STATIC(0x4c7088u,4c7);}
}
B4c6f59:L4c6f59:{c.instructions+=4;NFSU2_TR(0x4c6f59);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4c6f5f:{NFSU2_TR(0x4c6f5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6f62:{NFSU2_TR(0x4c6f62);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c6f64:{NFSU2_TR(0x4c6f64);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4c707cu,4c7);}
}
B4c6f6a:L4c6f6a:{c.instructions+=9;NFSU2_TR(0x4c6f6a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6f6b:{NFSU2_TR(0x4c6f6b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6f6c:{NFSU2_TR(0x4c6f6c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6f6d:{NFSU2_TR(0x4c6f6d);
w4(R+20,u32(0x1ull));
}
B4c6f72:{NFSU2_TR(0x4c6f72);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2cull))));
}
B4c6f75:{NFSU2_TR(0x4c6f75);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xbd0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c6f7d:{NFSU2_TR(0x4c6f7d);
__builtin_memmove((R+4),(R+4),4);
}
B4c6f80:{NFSU2_TR(0x4c6f80);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c6f82:{NFSU2_TR(0x4c6f82);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x4c7058u,4c7);}
}
B4c6f88:L4c6f88:{c.instructions+=4;NFSU2_TR(0x4c6f88);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c6f8c:{NFSU2_TR(0x4c6f8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4c6f8f:{NFSU2_TR(0x4c6f8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c6f91:{NFSU2_TR(0x4c6f91);
if(r1(R+518)){TAIL_STATIC(0x4c7058u,4c7);}
}
B4c6f97:L4c6f97:{c.instructions+=3;NFSU2_TR(0x4c6f97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4c6f99:{NFSU2_TR(0x4c6f99);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c6f9b:{NFSU2_TR(0x4c6f9b);
if(r1(R+518)){TAIL_STATIC(0x4c7058u,4c7);}
}
B4c6fa1:L4c6fa1:{c.instructions+=3;NFSU2_TR(0x4c6fa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6fa4:{NFSU2_TR(0x4c6fa4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c6fa6:{NFSU2_TR(0x4c6fa6);
if(r1(R+518)){TAIL_STATIC(0x4c7058u,4c7);}
}
B4c6fac:L4c6fac:{c.instructions+=4;NFSU2_TR(0x4c6fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6faf:{NFSU2_TR(0x4c6faf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c6fb5:{NFSU2_TR(0x4c6fb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6fb6:{NFSU2_TR(0x4c6fb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6fbbull));
TAIL_STATIC(0x512080u,512);
}
B4c6fbb:L4c6fbb:{c.instructions+=6;NFSU2_TR(0x4c6fbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6fbe:{NFSU2_TR(0x4c6fbe);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4c6fc2:{NFSU2_TR(0x4c6fc2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c6fc5:{NFSU2_TR(0x4c6fc5);
w4(R+4,u32(0x89cf48ull));
}
B4c6fca:{NFSU2_TR(0x4c6fca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c6fcd:{NFSU2_TR(0x4c6fcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6fd2ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4c6fd2:L4c6fd2:{c.instructions+=2;NFSU2_TR(0x4c6fd2);
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
B4c6fd4:{NFSU2_TR(0x4c6fd4);
if(r1(R+518)){{goto L4c6fef;}}
}
B4c6fd6:L4c6fd6:{c.instructions+=4;NFSU2_TR(0x4c6fd6);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B4c6fda:{NFSU2_TR(0x4c6fda);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6fdb:{NFSU2_TR(0x4c6fdb);
w4(R+4,u32(0x89cf48ull));
}
B4c6fe0:{NFSU2_TR(0x4c6fe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c6fe5ull));
TAIL_STATIC(0x5f0220u,5f0);
}
B4c6fe5:L4c6fe5:{c.instructions+=2;NFSU2_TR(0x4c6fe5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c6fe7:{NFSU2_TR(0x4c6fe7);
if(r1(R+518)){TAIL_STATIC(0x4c702fu,4c7);}
}
B4c6fe9:L4c6fe9:{c.instructions+=3;NFSU2_TR(0x4c6fe9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
}
B4c6fec:{NFSU2_TR(0x4c6fec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c6fed:{NFSU2_TR(0x4c6fed);
TAIL_STATIC(0x4c7024u,4c7);
}
B4c6fef:L4c6fef:{c.instructions+=3;NFSU2_TR(0x4c6fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c6ff2:{NFSU2_TR(0x4c6ff2);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c6ff6:{NFSU2_TR(0x4c6ff6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4c701du,4c7);}
}
B4c6ff8:L4c6ff8:{c.instructions+=2;NFSU2_TR(0x4c6ff8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c6ffe:{NFSU2_TR(0x4c6ffe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
TAIL_STATIC(0x4c7000u,4c7);
}
XIT:NFSU2_TR_EXIT(0x4c6,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
