#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6c1(u8* __restrict R,Cpu& c);
u32 body_6c7(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6c6,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6c6,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6c6(u8* __restrict R,Cpu& c);
u32 page_6c6(Cpu& c){return body_6c6(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6c6(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6c6000:goto L6c6000;
case 0x6c6003:c.instructions+=1;goto B6c6003;
case 0x6c6009:goto L6c6009;
case 0x6c600b:c.instructions+=3;goto B6c600b;
case 0x6c600e:c.instructions+=2;goto B6c600e;
case 0x6c6011:c.instructions+=1;goto B6c6011;
case 0x6c6013:goto L6c6013;
case 0x6c6016:c.instructions+=1;goto B6c6016;
case 0x6c6019:goto L6c6019;
case 0x6c601c:c.instructions+=5;goto B6c601c;
case 0x6c601f:c.instructions+=4;goto B6c601f;
case 0x6c6022:c.instructions+=3;goto B6c6022;
case 0x6c6025:c.instructions+=2;goto B6c6025;
case 0x6c6027:c.instructions+=1;goto B6c6027;
case 0x6c6029:goto L6c6029;
case 0x6c602b:goto L6c602b;
case 0x6c602e:c.instructions+=2;goto B6c602e;
case 0x6c6030:c.instructions+=1;goto B6c6030;
case 0x6c6032:goto L6c6032;
case 0x6c6034:goto L6c6034;
case 0x6c6035:c.instructions+=2;goto B6c6035;
case 0x6c6038:c.instructions+=1;goto B6c6038;
case 0x6c603a:goto L6c603a;
case 0x6c603d:c.instructions+=3;goto B6c603d;
case 0x6c6040:c.instructions+=2;goto B6c6040;
case 0x6c6042:c.instructions+=1;goto B6c6042;
case 0x6c6048:goto L6c6048;
case 0x6c604b:c.instructions+=3;goto B6c604b;
case 0x6c604e:c.instructions+=2;goto B6c604e;
case 0x6c6051:c.instructions+=1;goto B6c6051;
case 0x6c6054:goto L6c6054;
case 0x6c6057:c.instructions+=3;goto B6c6057;
case 0x6c6059:c.instructions+=2;goto B6c6059;
case 0x6c605c:c.instructions+=1;goto B6c605c;
case 0x6c605e:goto L6c605e;
case 0x6c6060:c.instructions+=2;goto B6c6060;
case 0x6c6063:c.instructions+=1;goto B6c6063;
case 0x6c6065:goto L6c6065;
case 0x6c606c:c.instructions+=1;goto B6c606c;
case 0x6c606e:goto L6c606e;
case 0x6c606f:c.instructions+=2;goto B6c606f;
case 0x6c6072:c.instructions+=1;goto B6c6072;
case 0x6c6074:goto L6c6074;
case 0x6c6077:goto L6c6077;
case 0x6c6079:goto L6c6079;
case 0x6c607c:c.instructions+=2;goto B6c607c;
case 0x6c607e:c.instructions+=1;goto B6c607e;
case 0x6c6080:goto L6c6080;
case 0x6c6083:c.instructions+=3;goto B6c6083;
case 0x6c6086:c.instructions+=2;goto B6c6086;
case 0x6c6089:c.instructions+=1;goto B6c6089;
case 0x6c608c:goto L6c608c;
case 0x6c608e:c.instructions+=4;goto B6c608e;
case 0x6c6091:c.instructions+=3;goto B6c6091;
case 0x6c6093:c.instructions+=2;goto B6c6093;
case 0x6c6096:c.instructions+=1;goto B6c6096;
case 0x6c6098:goto L6c6098;
case 0x6c609b:c.instructions+=3;goto B6c609b;
case 0x6c609e:c.instructions+=2;goto B6c609e;
case 0x6c60a0:c.instructions+=1;goto B6c60a0;
case 0x6c60a2:goto L6c60a2;
case 0x6c60a5:c.instructions+=1;goto B6c60a5;
case 0x6c60a7:goto L6c60a7;
case 0x6c60ae:goto L6c60ae;
case 0x6c60af:c.instructions+=2;goto B6c60af;
case 0x6c60b2:c.instructions+=1;goto B6c60b2;
case 0x6c60b4:goto L6c60b4;
case 0x6c60b7:c.instructions+=2;goto B6c60b7;
case 0x6c60ba:c.instructions+=1;goto B6c60ba;
case 0x6c60bc:goto L6c60bc;
case 0x6c60c0:c.instructions+=2;goto B6c60c0;
case 0x6c60c3:c.instructions+=1;goto B6c60c3;
case 0x6c60c5:goto L6c60c5;
case 0x6c60c9:c.instructions+=1;goto B6c60c9;
case 0x6c60cf:goto L6c60cf;
case 0x6c60d1:c.instructions+=1;goto B6c60d1;
case 0x6c60d6:goto L6c60d6;
case 0x6c60d8:c.instructions+=1;goto B6c60d8;
case 0x6c60da:goto L6c60da;
case 0x6c60dc:c.instructions+=1;goto B6c60dc;
case 0x6c60e1:goto L6c60e1;
case 0x6c60e3:c.instructions+=1;goto B6c60e3;
case 0x6c60e5:goto L6c60e5;
case 0x6c60e7:goto L6c60e7;
case 0x6c60e9:c.instructions+=1;goto B6c60e9;
case 0x6c60eb:goto L6c60eb;
case 0x6c60ed:c.instructions+=2;goto B6c60ed;
case 0x6c60ee:c.instructions+=1;goto B6c60ee;
case 0x6c60f3:goto L6c60f3;
case 0x6c60f6:c.instructions+=8;goto B6c60f6;
case 0x6c60f8:c.instructions+=7;goto B6c60f8;
case 0x6c60fb:c.instructions+=6;goto B6c60fb;
case 0x6c6100:c.instructions+=5;goto B6c6100;
case 0x6c6103:c.instructions+=4;goto B6c6103;
case 0x6c6108:c.instructions+=3;goto B6c6108;
case 0x6c6109:c.instructions+=2;goto B6c6109;
case 0x6c610b:c.instructions+=1;goto B6c610b;
case 0x6c6110:goto L6c6110;
case 0x6c6112:c.instructions+=3;goto B6c6112;
case 0x6c6114:c.instructions+=2;goto B6c6114;
case 0x6c6116:c.instructions+=1;goto B6c6116;
case 0x6c6118:goto L6c6118;
case 0x6c611b:c.instructions+=2;goto B6c611b;
case 0x6c6121:c.instructions+=1;goto B6c6121;
case 0x6c6126:goto L6c6126;
case 0x6c6128:c.instructions+=2;goto B6c6128;
case 0x6c612a:c.instructions+=1;goto B6c612a;
case 0x6c612c:goto L6c612c;
case 0x6c612e:goto L6c612e;
case 0x6c6130:c.instructions+=1;goto B6c6130;
case 0x6c6135:goto L6c6135;
case 0x6c6137:c.instructions+=1;goto B6c6137;
case 0x6c613c:goto L6c613c;
case 0x6c613f:c.instructions+=6;goto B6c613f;
case 0x6c6142:c.instructions+=5;goto B6c6142;
case 0x6c6145:c.instructions+=4;goto B6c6145;
case 0x6c6148:c.instructions+=3;goto B6c6148;
case 0x6c614a:c.instructions+=2;goto B6c614a;
case 0x6c614c:c.instructions+=1;goto B6c614c;
case 0x6c614f:goto L6c614f;
case 0x6c6151:goto L6c6151;
case 0x6c6153:c.instructions+=1;goto B6c6153;
case 0x6c6156:goto L6c6156;
case 0x6c6158:goto L6c6158;
case 0x6c615b:c.instructions+=6;goto B6c615b;
case 0x6c615d:c.instructions+=5;goto B6c615d;
case 0x6c6160:c.instructions+=4;goto B6c6160;
case 0x6c6166:c.instructions+=3;goto B6c6166;
case 0x6c6169:c.instructions+=2;goto B6c6169;
case 0x6c616b:c.instructions+=1;goto B6c616b;
case 0x6c616e:goto L6c616e;
case 0x6c6170:goto L6c6170;
case 0x6c6172:c.instructions+=1;goto B6c6172;
case 0x6c6175:goto L6c6175;
case 0x6c6177:goto L6c6177;
case 0x6c6179:c.instructions+=3;goto B6c6179;
case 0x6c617b:c.instructions+=2;goto B6c617b;
case 0x6c617e:c.instructions+=1;goto B6c617e;
case 0x6c6180:goto L6c6180;
case 0x6c6183:c.instructions+=7;goto B6c6183;
case 0x6c6186:c.instructions+=6;goto B6c6186;
case 0x6c6189:c.instructions+=5;goto B6c6189;
case 0x6c618c:c.instructions+=4;goto B6c618c;
case 0x6c6190:c.instructions+=3;goto B6c6190;
case 0x6c6191:c.instructions+=2;goto B6c6191;
case 0x6c6194:c.instructions+=1;goto B6c6194;
case 0x6c6196:goto L6c6196;
case 0x6c6198:c.instructions+=2;goto B6c6198;
case 0x6c619b:c.instructions+=1;goto B6c619b;
case 0x6c619d:goto L6c619d;
case 0x6c61a4:c.instructions+=4;goto B6c61a4;
case 0x6c61a5:c.instructions+=3;goto B6c61a5;
case 0x6c61a8:c.instructions+=2;goto B6c61a8;
case 0x6c61aa:c.instructions+=1;goto B6c61aa;
case 0x6c61ac:goto L6c61ac;
case 0x6c61af:c.instructions+=5;goto B6c61af;
case 0x6c61b5:c.instructions+=4;goto B6c61b5;
case 0x6c61b7:c.instructions+=3;goto B6c61b7;
case 0x6c61ba:c.instructions+=2;goto B6c61ba;
case 0x6c61bc:c.instructions+=1;goto B6c61bc;
case 0x6c61be:goto L6c61be;
case 0x6c61c0:c.instructions+=1;goto B6c61c0;
case 0x6c61c5:goto L6c61c5;
case 0x6c61c8:goto L6c61c8;
case 0x6c61ca:c.instructions+=3;goto B6c61ca;
case 0x6c61cd:c.instructions+=2;goto B6c61cd;
case 0x6c61d0:c.instructions+=1;goto B6c61d0;
case 0x6c61d5:goto L6c61d5;
case 0x6c61d7:c.instructions+=3;goto B6c61d7;
case 0x6c61da:c.instructions+=2;goto B6c61da;
case 0x6c61dd:c.instructions+=1;goto B6c61dd;
case 0x6c61e3:goto L6c61e3;
case 0x6c61e6:goto L6c61e6;
case 0x6c61e9:c.instructions+=9;goto B6c61e9;
case 0x6c61ed:c.instructions+=8;goto B6c61ed;
case 0x6c61f0:c.instructions+=7;goto B6c61f0;
case 0x6c61f6:c.instructions+=6;goto B6c61f6;
case 0x6c61f9:c.instructions+=5;goto B6c61f9;
case 0x6c61fb:c.instructions+=4;goto B6c61fb;
case 0x6c61fd:c.instructions+=3;goto B6c61fd;
case 0x6c6200:c.instructions+=2;goto B6c6200;
case 0x6c6203:c.instructions+=1;goto B6c6203;
case 0x6c6205:goto L6c6205;
case 0x6c6207:c.instructions+=3;goto B6c6207;
case 0x6c620a:c.instructions+=2;goto B6c620a;
case 0x6c620d:c.instructions+=1;goto B6c620d;
case 0x6c620f:goto L6c620f;
case 0x6c6212:c.instructions+=1;goto B6c6212;
case 0x6c6215:goto L6c6215;
case 0x6c6218:c.instructions+=3;goto B6c6218;
case 0x6c621b:c.instructions+=2;goto B6c621b;
case 0x6c621d:c.instructions+=1;goto B6c621d;
case 0x6c621f:goto L6c621f;
case 0x6c6225:c.instructions+=12;goto B6c6225;
case 0x6c6228:c.instructions+=11;goto B6c6228;
case 0x6c622b:c.instructions+=10;goto B6c622b;
case 0x6c622e:c.instructions+=9;goto B6c622e;
case 0x6c6231:c.instructions+=8;goto B6c6231;
case 0x6c6234:c.instructions+=7;goto B6c6234;
case 0x6c6237:c.instructions+=6;goto B6c6237;
case 0x6c623a:c.instructions+=5;goto B6c623a;
case 0x6c623c:c.instructions+=4;goto B6c623c;
case 0x6c623f:c.instructions+=3;goto B6c623f;
case 0x6c6242:c.instructions+=2;goto B6c6242;
case 0x6c6245:c.instructions+=1;goto B6c6245;
case 0x6c6249:goto L6c6249;
case 0x6c624a:c.instructions+=3;goto B6c624a;
case 0x6c624d:c.instructions+=2;goto B6c624d;
case 0x6c6250:c.instructions+=1;goto B6c6250;
case 0x6c6252:goto L6c6252;
case 0x6c6255:c.instructions+=4;goto B6c6255;
case 0x6c6256:c.instructions+=3;goto B6c6256;
case 0x6c6259:c.instructions+=2;goto B6c6259;
case 0x6c625c:c.instructions+=1;goto B6c625c;
case 0x6c625e:goto L6c625e;
case 0x6c6261:c.instructions+=4;goto B6c6261;
case 0x6c6262:c.instructions+=3;goto B6c6262;
case 0x6c6265:c.instructions+=2;goto B6c6265;
case 0x6c6268:c.instructions+=1;goto B6c6268;
case 0x6c626e:goto L6c626e;
case 0x6c6270:c.instructions+=2;goto B6c6270;
case 0x6c6273:c.instructions+=1;goto B6c6273;
case 0x6c6275:goto L6c6275;
case 0x6c627c:c.instructions+=4;goto B6c627c;
case 0x6c627f:c.instructions+=3;goto B6c627f;
case 0x6c6280:c.instructions+=2;goto B6c6280;
case 0x6c6283:c.instructions+=1;goto B6c6283;
case 0x6c6285:goto L6c6285;
case 0x6c6287:goto L6c6287;
case 0x6c6288:c.instructions+=4;goto B6c6288;
case 0x6c6289:c.instructions+=3;goto B6c6289;
case 0x6c628a:c.instructions+=2;goto B6c628a;
case 0x6c628b:c.instructions+=1;goto B6c628b;
case 0x6c628c:goto L6c628c;
case 0x6c628e:c.instructions+=6;goto B6c628e;
case 0x6c628f:c.instructions+=5;goto B6c628f;
case 0x6c6290:c.instructions+=4;goto B6c6290;
case 0x6c6292:c.instructions+=3;goto B6c6292;
case 0x6c6294:c.instructions+=2;goto B6c6294;
case 0x6c6297:c.instructions+=1;goto B6c6297;
case 0x6c6299:goto L6c6299;
case 0x6c629a:goto L6c629a;
case 0x6c629d:c.instructions+=4;goto B6c629d;
case 0x6c62a0:c.instructions+=3;goto B6c62a0;
case 0x6c62a3:c.instructions+=2;goto B6c62a3;
case 0x6c62a6:c.instructions+=1;goto B6c62a6;
case 0x6c62a8:goto L6c62a8;
case 0x6c62ab:c.instructions+=2;goto B6c62ab;
case 0x6c62ad:c.instructions+=1;goto B6c62ad;
case 0x6c62af:goto L6c62af;
case 0x6c62b2:c.instructions+=4;goto B6c62b2;
case 0x6c62b5:c.instructions+=3;goto B6c62b5;
case 0x6c62b8:c.instructions+=2;goto B6c62b8;
case 0x6c62bb:c.instructions+=1;goto B6c62bb;
case 0x6c62be:goto L6c62be;
case 0x6c62c2:c.instructions+=1;goto B6c62c2;
case 0x6c62c4:goto L6c62c4;
case 0x6c62c6:c.instructions+=1;goto B6c62c6;
case 0x6c62c8:goto L6c62c8;
case 0x6c62c9:c.instructions+=2;goto B6c62c9;
case 0x6c62cc:c.instructions+=1;goto B6c62cc;
case 0x6c62d1:goto L6c62d1;
case 0x6c62d2:c.instructions+=2;goto B6c62d2;
case 0x6c62d5:c.instructions+=1;goto B6c62d5;
case 0x6c62d7:goto L6c62d7;
case 0x6c62d8:goto L6c62d8;
case 0x6c62d9:c.instructions+=3;goto B6c62d9;
case 0x6c62db:c.instructions+=2;goto B6c62db;
case 0x6c62dc:c.instructions+=1;goto B6c62dc;
case 0x6c62dd:goto L6c62dd;
case 0x6c62df:c.instructions+=11;goto B6c62df;
case 0x6c62e0:c.instructions+=10;goto B6c62e0;
case 0x6c62e2:c.instructions+=9;goto B6c62e2;
case 0x6c62e5:c.instructions+=8;goto B6c62e5;
case 0x6c62e6:c.instructions+=7;goto B6c62e6;
case 0x6c62e8:c.instructions+=6;goto B6c62e8;
case 0x6c62ee:c.instructions+=5;goto B6c62ee;
case 0x6c62f0:c.instructions+=4;goto B6c62f0;
case 0x6c62f6:c.instructions+=3;goto B6c62f6;
case 0x6c62fc:c.instructions+=2;goto B6c62fc;
case 0x6c62ff:c.instructions+=1;goto B6c62ff;
case 0x6c6301:goto L6c6301;
case 0x6c6307:c.instructions+=1;goto B6c6307;
case 0x6c6309:goto L6c6309;
case 0x6c630f:c.instructions+=1;goto B6c630f;
case 0x6c6311:goto L6c6311;
case 0x6c6317:c.instructions+=1;goto B6c6317;
case 0x6c6319:goto L6c6319;
case 0x6c631f:c.instructions+=1;goto B6c631f;
case 0x6c6321:goto L6c6321;
case 0x6c6325:c.instructions+=1;goto B6c6325;
case 0x6c6327:goto L6c6327;
case 0x6c632a:c.instructions+=8;goto B6c632a;
case 0x6c632c:c.instructions+=7;goto B6c632c;
case 0x6c632f:c.instructions+=6;goto B6c632f;
case 0x6c6333:c.instructions+=5;goto B6c6333;
case 0x6c6336:c.instructions+=4;goto B6c6336;
case 0x6c6339:c.instructions+=3;goto B6c6339;
case 0x6c633c:c.instructions+=2;goto B6c633c;
case 0x6c633f:c.instructions+=1;goto B6c633f;
case 0x6c6341:goto L6c6341;
case 0x6c6343:c.instructions+=2;goto B6c6343;
case 0x6c6344:c.instructions+=1;goto B6c6344;
case 0x6c6349:goto L6c6349;
case 0x6c634d:c.instructions+=8;goto B6c634d;
case 0x6c634e:c.instructions+=7;goto B6c634e;
case 0x6c634f:c.instructions+=6;goto B6c634f;
case 0x6c6352:c.instructions+=5;goto B6c6352;
case 0x6c6355:c.instructions+=4;goto B6c6355;
case 0x6c6358:c.instructions+=3;goto B6c6358;
case 0x6c635a:c.instructions+=2;goto B6c635a;
case 0x6c635d:c.instructions+=1;goto B6c635d;
case 0x6c635f:goto L6c635f;
case 0x6c6362:c.instructions+=1;goto B6c6362;
case 0x6c6365:goto L6c6365;
case 0x6c6367:c.instructions+=4;goto B6c6367;
case 0x6c636a:c.instructions+=3;goto B6c636a;
case 0x6c636d:c.instructions+=2;goto B6c636d;
case 0x6c6370:c.instructions+=1;goto B6c6370;
case 0x6c6372:goto L6c6372;
case 0x6c6375:goto L6c6375;
case 0x6c6378:c.instructions+=2;goto B6c6378;
case 0x6c637b:c.instructions+=1;goto B6c637b;
case 0x6c637d:goto L6c637d;
case 0x6c6380:c.instructions+=6;goto B6c6380;
case 0x6c6382:c.instructions+=5;goto B6c6382;
case 0x6c6385:c.instructions+=4;goto B6c6385;
case 0x6c6388:c.instructions+=3;goto B6c6388;
case 0x6c638b:c.instructions+=2;goto B6c638b;
case 0x6c638e:c.instructions+=1;goto B6c638e;
case 0x6c6390:goto L6c6390;
case 0x6c6393:c.instructions+=2;goto B6c6393;
case 0x6c6396:c.instructions+=1;goto B6c6396;
case 0x6c6398:goto L6c6398;
case 0x6c639b:c.instructions+=2;goto B6c639b;
case 0x6c639e:c.instructions+=1;goto B6c639e;
case 0x6c63a0:goto L6c63a0;
case 0x6c63a3:c.instructions+=2;goto B6c63a3;
case 0x6c63a6:c.instructions+=1;goto B6c63a6;
case 0x6c63a8:goto L6c63a8;
case 0x6c63af:goto L6c63af;
case 0x6c63b2:c.instructions+=2;goto B6c63b2;
case 0x6c63b8:c.instructions+=1;goto B6c63b8;
case 0x6c63ba:goto L6c63ba;
case 0x6c63bc:c.instructions+=2;goto B6c63bc;
case 0x6c63bf:c.instructions+=1;goto B6c63bf;
case 0x6c63c1:goto L6c63c1;
case 0x6c63c4:c.instructions+=2;goto B6c63c4;
case 0x6c63c7:c.instructions+=1;goto B6c63c7;
case 0x6c63c9:goto L6c63c9;
case 0x6c63cd:c.instructions+=1;goto B6c63cd;
case 0x6c63cf:goto L6c63cf;
case 0x6c63d2:c.instructions+=1;goto B6c63d2;
case 0x6c63d4:goto L6c63d4;
case 0x6c63d7:c.instructions+=5;goto B6c63d7;
case 0x6c63d9:c.instructions+=4;goto B6c63d9;
case 0x6c63dc:c.instructions+=3;goto B6c63dc;
case 0x6c63df:c.instructions+=2;goto B6c63df;
case 0x6c63e5:c.instructions+=1;goto B6c63e5;
case 0x6c63e7:goto L6c63e7;
case 0x6c63e9:c.instructions+=3;goto B6c63e9;
case 0x6c63ee:c.instructions+=2;goto B6c63ee;
case 0x6c63f3:c.instructions+=1;goto B6c63f3;
case 0x6c63f5:goto L6c63f5;
case 0x6c63f8:c.instructions+=4;goto B6c63f8;
case 0x6c63fb:c.instructions+=3;goto B6c63fb;
case 0x6c63fe:c.instructions+=2;goto B6c63fe;
case 0x6c6402:c.instructions+=1;goto B6c6402;
case 0x6c6404:goto L6c6404;
case 0x6c6406:c.instructions+=2;goto B6c6406;
case 0x6c6409:c.instructions+=1;goto B6c6409;
case 0x6c640b:goto L6c640b;
case 0x6c640e:goto L6c640e;
case 0x6c6410:c.instructions+=2;goto B6c6410;
case 0x6c6413:c.instructions+=1;goto B6c6413;
case 0x6c6415:goto L6c6415;
case 0x6c6416:c.instructions+=3;goto B6c6416;
case 0x6c6419:c.instructions+=2;goto B6c6419;
case 0x6c641c:c.instructions+=1;goto B6c641c;
case 0x6c641e:goto L6c641e;
case 0x6c6421:c.instructions+=5;goto B6c6421;
case 0x6c6423:c.instructions+=4;goto B6c6423;
case 0x6c6426:c.instructions+=3;goto B6c6426;
case 0x6c6428:c.instructions+=2;goto B6c6428;
case 0x6c642b:c.instructions+=1;goto B6c642b;
case 0x6c642d:goto L6c642d;
case 0x6c642f:c.instructions+=2;goto B6c642f;
case 0x6c6430:c.instructions+=1;goto B6c6430;
case 0x6c6435:goto L6c6435;
case 0x6c6437:c.instructions+=1;goto B6c6437;
case 0x6c643c:goto L6c643c;
case 0x6c643e:c.instructions+=1;goto B6c643e;
case 0x6c6440:goto L6c6440;
case 0x6c6442:c.instructions+=1;goto B6c6442;
case 0x6c6447:goto L6c6447;
case 0x6c6449:goto L6c6449;
case 0x6c644b:c.instructions+=1;goto B6c644b;
case 0x6c644d:goto L6c644d;
case 0x6c6452:c.instructions+=1;goto B6c6452;
case 0x6c6457:goto L6c6457;
case 0x6c645d:c.instructions+=10;goto B6c645d;
case 0x6c645f:c.instructions+=9;goto B6c645f;
case 0x6c6462:c.instructions+=8;goto B6c6462;
case 0x6c6464:c.instructions+=7;goto B6c6464;
case 0x6c6467:c.instructions+=6;goto B6c6467;
case 0x6c646a:c.instructions+=5;goto B6c646a;
case 0x6c646b:c.instructions+=4;goto B6c646b;
case 0x6c646e:c.instructions+=3;goto B6c646e;
case 0x6c6470:c.instructions+=2;goto B6c6470;
case 0x6c6472:c.instructions+=1;goto B6c6472;
case 0x6c6477:goto L6c6477;
case 0x6c6479:c.instructions+=2;goto B6c6479;
case 0x6c647b:c.instructions+=1;goto B6c647b;
case 0x6c647d:goto L6c647d;
case 0x6c647f:c.instructions+=2;goto B6c647f;
case 0x6c6481:c.instructions+=1;goto B6c6481;
case 0x6c6486:goto L6c6486;
case 0x6c6488:c.instructions+=1;goto B6c6488;
case 0x6c648d:goto L6c648d;
case 0x6c6490:c.instructions+=5;goto B6c6490;
case 0x6c6493:c.instructions+=4;goto B6c6493;
case 0x6c6496:c.instructions+=3;goto B6c6496;
case 0x6c6499:c.instructions+=2;goto B6c6499;
case 0x6c649b:c.instructions+=1;goto B6c649b;
case 0x6c649e:goto L6c649e;
case 0x6c64a0:goto L6c64a0;
case 0x6c64a2:c.instructions+=3;goto B6c64a2;
case 0x6c64a5:c.instructions+=2;goto B6c64a5;
case 0x6c64a8:c.instructions+=1;goto B6c64a8;
case 0x6c64ac:goto L6c64ac;
case 0x6c64ae:goto L6c64ae;
case 0x6c64b0:goto L6c64b0;
case 0x6c64b6:c.instructions+=6;goto B6c64b6;
case 0x6c64b9:c.instructions+=5;goto B6c64b9;
case 0x6c64bc:c.instructions+=4;goto B6c64bc;
case 0x6c64bf:c.instructions+=3;goto B6c64bf;
case 0x6c64c2:c.instructions+=2;goto B6c64c2;
case 0x6c64c4:c.instructions+=1;goto B6c64c4;
case 0x6c64c7:goto L6c64c7;
case 0x6c64ca:c.instructions+=3;goto B6c64ca;
case 0x6c64ce:c.instructions+=2;goto B6c64ce;
case 0x6c64d0:c.instructions+=1;goto B6c64d0;
case 0x6c64d2:goto L6c64d2;
case 0x6c64d9:goto L6c64d9;
case 0x6c64dc:c.instructions+=3;goto B6c64dc;
case 0x6c64de:c.instructions+=2;goto B6c64de;
case 0x6c64e1:c.instructions+=1;goto B6c64e1;
case 0x6c64e3:goto L6c64e3;
case 0x6c64e6:c.instructions+=12;goto B6c64e6;
case 0x6c64e9:c.instructions+=11;goto B6c64e9;
case 0x6c64ec:c.instructions+=10;goto B6c64ec;
case 0x6c64ef:c.instructions+=9;goto B6c64ef;
case 0x6c64f2:c.instructions+=8;goto B6c64f2;
case 0x6c64f5:c.instructions+=7;goto B6c64f5;
case 0x6c64f8:c.instructions+=6;goto B6c64f8;
case 0x6c64fb:c.instructions+=5;goto B6c64fb;
case 0x6c64fe:c.instructions+=4;goto B6c64fe;
case 0x6c6501:c.instructions+=3;goto B6c6501;
case 0x6c6504:c.instructions+=2;goto B6c6504;
case 0x6c6507:c.instructions+=1;goto B6c6507;
case 0x6c6509:goto L6c6509;
case 0x6c650c:c.instructions+=11;goto B6c650c;
case 0x6c650e:c.instructions+=10;goto B6c650e;
case 0x6c6510:c.instructions+=9;goto B6c6510;
case 0x6c6513:c.instructions+=8;goto B6c6513;
case 0x6c6516:c.instructions+=7;goto B6c6516;
case 0x6c6519:c.instructions+=6;goto B6c6519;
case 0x6c651c:c.instructions+=5;goto B6c651c;
case 0x6c651e:c.instructions+=4;goto B6c651e;
case 0x6c6521:c.instructions+=3;goto B6c6521;
case 0x6c6524:c.instructions+=2;goto B6c6524;
case 0x6c6527:c.instructions+=1;goto B6c6527;
case 0x6c652a:goto L6c652a;
case 0x6c652d:c.instructions+=2;goto B6c652d;
case 0x6c6530:c.instructions+=1;goto B6c6530;
case 0x6c6532:goto L6c6532;
case 0x6c6535:c.instructions+=3;goto B6c6535;
case 0x6c6538:c.instructions+=2;goto B6c6538;
case 0x6c653b:c.instructions+=1;goto B6c653b;
case 0x6c653d:goto L6c653d;
case 0x6c6540:c.instructions+=4;goto B6c6540;
case 0x6c6543:c.instructions+=3;goto B6c6543;
case 0x6c6546:c.instructions+=2;goto B6c6546;
case 0x6c6549:c.instructions+=1;goto B6c6549;
case 0x6c654b:goto L6c654b;
case 0x6c6551:c.instructions+=6;goto B6c6551;
case 0x6c6554:c.instructions+=5;goto B6c6554;
case 0x6c6557:c.instructions+=4;goto B6c6557;
case 0x6c655a:c.instructions+=3;goto B6c655a;
case 0x6c655d:c.instructions+=2;goto B6c655d;
case 0x6c655f:c.instructions+=1;goto B6c655f;
case 0x6c6562:goto L6c6562;
case 0x6c6564:goto L6c6564;
case 0x6c6566:c.instructions+=1;goto B6c6566;
case 0x6c6569:goto L6c6569;
case 0x6c656b:goto L6c656b;
case 0x6c6571:c.instructions+=4;goto B6c6571;
case 0x6c6574:c.instructions+=3;goto B6c6574;
case 0x6c6577:c.instructions+=2;goto B6c6577;
case 0x6c6579:c.instructions+=1;goto B6c6579;
case 0x6c657b:goto L6c657b;
case 0x6c657d:c.instructions+=1;goto B6c657d;
case 0x6c6582:goto L6c6582;
case 0x6c6585:goto L6c6585;
case 0x6c658b:c.instructions+=5;goto B6c658b;
case 0x6c658e:c.instructions+=4;goto B6c658e;
case 0x6c6591:c.instructions+=3;goto B6c6591;
case 0x6c6594:c.instructions+=2;goto B6c6594;
case 0x6c6597:c.instructions+=1;goto B6c6597;
case 0x6c6599:goto L6c6599;
case 0x6c659a:c.instructions+=1;goto B6c659a;
case 0x6c659b:goto L6c659b;
case 0x6c659c:c.instructions+=2;goto B6c659c;
case 0x6c659d:c.instructions+=1;goto B6c659d;
case 0x6c659e:goto L6c659e;
case 0x6c65a4:c.instructions+=5;goto B6c65a4;
case 0x6c65a9:c.instructions+=4;goto B6c65a9;
case 0x6c65ae:c.instructions+=3;goto B6c65ae;
case 0x6c65b1:c.instructions+=2;goto B6c65b1;
case 0x6c65b2:c.instructions+=1;goto B6c65b2;
case 0x6c65b7:goto L6c65b7;
case 0x6c65ba:c.instructions+=3;goto B6c65ba;
case 0x6c65bd:c.instructions+=2;goto B6c65bd;
case 0x6c65bf:c.instructions+=1;goto B6c65bf;
case 0x6c65c4:goto L6c65c4;
case 0x6c65c9:c.instructions+=1;goto B6c65c9;
case 0x6c65cb:goto L6c65cb;
case 0x6c65cd:c.instructions+=32;goto B6c65cd;
case 0x6c65ce:c.instructions+=31;goto B6c65ce;
case 0x6c65d0:c.instructions+=30;goto B6c65d0;
case 0x6c65d6:c.instructions+=29;goto B6c65d6;
case 0x6c65d7:c.instructions+=28;goto B6c65d7;
case 0x6c65d8:c.instructions+=27;goto B6c65d8;
case 0x6c65d9:c.instructions+=26;goto B6c65d9;
case 0x6c65dd:c.instructions+=25;goto B6c65dd;
case 0x6c65e1:c.instructions+=24;goto B6c65e1;
case 0x6c65e3:c.instructions+=23;goto B6c65e3;
case 0x6c65e9:c.instructions+=22;goto B6c65e9;
case 0x6c65eb:c.instructions+=21;goto B6c65eb;
case 0x6c65ed:c.instructions+=20;goto B6c65ed;
case 0x6c65ee:c.instructions+=19;goto B6c65ee;
case 0x6c65ef:c.instructions+=18;goto B6c65ef;
case 0x6c65f5:c.instructions+=17;goto B6c65f5;
case 0x6c65f6:c.instructions+=16;goto B6c65f6;
case 0x6c65f9:c.instructions+=15;goto B6c65f9;
case 0x6c65fa:c.instructions+=14;goto B6c65fa;
case 0x6c6600:c.instructions+=13;goto B6c6600;
case 0x6c6601:c.instructions+=12;goto B6c6601;
case 0x6c6604:c.instructions+=11;goto B6c6604;
case 0x6c6605:c.instructions+=10;goto B6c6605;
case 0x6c660b:c.instructions+=9;goto B6c660b;
case 0x6c660c:c.instructions+=8;goto B6c660c;
case 0x6c6611:c.instructions+=7;goto B6c6611;
case 0x6c6612:c.instructions+=6;goto B6c6612;
case 0x6c6614:c.instructions+=5;goto B6c6614;
case 0x6c6617:c.instructions+=4;goto B6c6617;
case 0x6c661a:c.instructions+=3;goto B6c661a;
case 0x6c6621:c.instructions+=2;goto B6c6621;
case 0x6c6628:c.instructions+=1;goto B6c6628;
case 0x6c662d:goto L6c662d;
case 0x6c662f:c.instructions+=1;goto B6c662f;
case 0x6c6631:goto L6c6631;
case 0x6c6633:c.instructions+=1;goto B6c6633;
case 0x6c6638:goto L6c6638;
case 0x6c663a:c.instructions+=1;goto B6c663a;
case 0x6c663c:goto L6c663c;
case 0x6c663e:c.instructions+=1;goto B6c663e;
case 0x6c6643:goto L6c6643;
case 0x6c6645:c.instructions+=2;goto B6c6645;
case 0x6c6648:c.instructions+=1;goto B6c6648;
case 0x6c664a:goto L6c664a;
case 0x6c664e:c.instructions+=1;goto B6c664e;
case 0x6c6651:goto L6c6651;
case 0x6c6653:c.instructions+=1;goto B6c6653;
case 0x6c6659:goto L6c6659;
case 0x6c665b:c.instructions+=7;goto B6c665b;
case 0x6c665e:c.instructions+=6;goto B6c665e;
case 0x6c665f:c.instructions+=5;goto B6c665f;
case 0x6c6660:c.instructions+=4;goto B6c6660;
case 0x6c6662:c.instructions+=3;goto B6c6662;
case 0x6c6667:c.instructions+=2;goto B6c6667;
case 0x6c666c:c.instructions+=1;goto B6c666c;
case 0x6c666e:goto L6c666e;
case 0x6c666f:c.instructions+=13;goto B6c666f;
case 0x6c6670:c.instructions+=12;goto B6c6670;
case 0x6c6673:c.instructions+=11;goto B6c6673;
case 0x6c6674:c.instructions+=10;goto B6c6674;
case 0x6c667a:c.instructions+=9;goto B6c667a;
case 0x6c667b:c.instructions+=8;goto B6c667b;
case 0x6c667e:c.instructions+=7;goto B6c667e;
case 0x6c667f:c.instructions+=6;goto B6c667f;
case 0x6c6685:c.instructions+=5;goto B6c6685;
case 0x6c6686:c.instructions+=4;goto B6c6686;
case 0x6c668b:c.instructions+=3;goto B6c668b;
case 0x6c6691:c.instructions+=2;goto B6c6691;
case 0x6c6693:c.instructions+=1;goto B6c6693;
case 0x6c6698:goto L6c6698;
case 0x6c669a:c.instructions+=1;goto B6c669a;
case 0x6c66a0:goto L6c66a0;
case 0x6c66a2:c.instructions+=1;goto B6c66a2;
case 0x6c66a7:goto L6c66a7;
case 0x6c66a9:c.instructions+=1;goto B6c66a9;
case 0x6c66ab:goto L6c66ab;
case 0x6c66ad:c.instructions+=1;goto B6c66ad;
case 0x6c66b2:goto L6c66b2;
case 0x6c66b4:c.instructions+=2;goto B6c66b4;
case 0x6c66b7:c.instructions+=1;goto B6c66b7;
case 0x6c66b9:goto L6c66b9;
case 0x6c66bd:c.instructions+=1;goto B6c66bd;
case 0x6c66c0:goto L6c66c0;
case 0x6c66c2:c.instructions+=1;goto B6c66c2;
case 0x6c66c8:goto L6c66c8;
case 0x6c66ca:c.instructions+=6;goto B6c66ca;
case 0x6c66cd:c.instructions+=5;goto B6c66cd;
case 0x6c66ce:c.instructions+=4;goto B6c66ce;
case 0x6c66cf:c.instructions+=3;goto B6c66cf;
case 0x6c66d1:c.instructions+=2;goto B6c66d1;
case 0x6c66d6:c.instructions+=1;goto B6c66d6;
case 0x6c66db:goto L6c66db;
case 0x6c66dc:c.instructions+=2;goto B6c66dc;
case 0x6c66de:c.instructions+=1;goto B6c66de;
case 0x6c66e3:goto L6c66e3;
case 0x6c66e5:c.instructions+=3;goto B6c66e5;
case 0x6c66e8:c.instructions+=2;goto B6c66e8;
case 0x6c66ea:c.instructions+=1;goto B6c66ea;
case 0x6c66f0:goto L6c66f0;
case 0x6c66f6:c.instructions+=1;goto B6c66f6;
case 0x6c66fb:goto L6c66fb;
case 0x6c66fd:c.instructions+=2;goto B6c66fd;
case 0x6c6700:c.instructions+=1;goto B6c6700;
case 0x6c6706:goto L6c6706;
case 0x6c670c:c.instructions+=8;goto B6c670c;
case 0x6c670f:c.instructions+=7;goto B6c670f;
case 0x6c6712:c.instructions+=6;goto B6c6712;
case 0x6c6714:c.instructions+=5;goto B6c6714;
case 0x6c6717:c.instructions+=4;goto B6c6717;
case 0x6c671a:c.instructions+=3;goto B6c671a;
case 0x6c671c:c.instructions+=2;goto B6c671c;
case 0x6c671e:c.instructions+=1;goto B6c671e;
case 0x6c6721:goto L6c6721;
case 0x6c6723:goto L6c6723;
case 0x6c6725:c.instructions+=1;goto B6c6725;
case 0x6c6728:goto L6c6728;
case 0x6c672a:goto L6c672a;
case 0x6c672d:c.instructions+=3;goto B6c672d;
case 0x6c672f:c.instructions+=2;goto B6c672f;
case 0x6c6732:c.instructions+=1;goto B6c6732;
case 0x6c6738:goto L6c6738;
case 0x6c673a:goto L6c673a;
case 0x6c673c:c.instructions+=1;goto B6c673c;
case 0x6c673f:goto L6c673f;
case 0x6c6741:goto L6c6741;
case 0x6c6747:c.instructions+=1;goto B6c6747;
case 0x6c674c:goto L6c674c;
case 0x6c674d:c.instructions+=13;goto B6c674d;
case 0x6c674e:c.instructions+=12;goto B6c674e;
case 0x6c6751:c.instructions+=11;goto B6c6751;
case 0x6c6752:c.instructions+=10;goto B6c6752;
case 0x6c6758:c.instructions+=9;goto B6c6758;
case 0x6c6759:c.instructions+=8;goto B6c6759;
case 0x6c675c:c.instructions+=7;goto B6c675c;
case 0x6c675d:c.instructions+=6;goto B6c675d;
case 0x6c6763:c.instructions+=5;goto B6c6763;
case 0x6c6764:c.instructions+=4;goto B6c6764;
case 0x6c6769:c.instructions+=3;goto B6c6769;
case 0x6c676f:c.instructions+=2;goto B6c676f;
case 0x6c6771:c.instructions+=1;goto B6c6771;
case 0x6c6776:goto L6c6776;
case 0x6c6778:c.instructions+=1;goto B6c6778;
case 0x6c677e:goto L6c677e;
case 0x6c6784:c.instructions+=5;goto B6c6784;
case 0x6c6787:c.instructions+=4;goto B6c6787;
case 0x6c678a:c.instructions+=3;goto B6c678a;
case 0x6c678f:c.instructions+=2;goto B6c678f;
case 0x6c6792:c.instructions+=1;goto B6c6792;
case 0x6c6794:goto L6c6794;
case 0x6c6796:c.instructions+=2;goto B6c6796;
case 0x6c6798:c.instructions+=1;goto B6c6798;
case 0x6c679a:goto L6c679a;
case 0x6c679c:c.instructions+=2;goto B6c679c;
case 0x6c67a2:c.instructions+=1;goto B6c67a2;
case 0x6c67a5:goto L6c67a5;
case 0x6c67a7:goto L6c67a7;
case 0x6c67ae:c.instructions+=6;goto B6c67ae;
case 0x6c67b1:c.instructions+=5;goto B6c67b1;
case 0x6c67b4:c.instructions+=4;goto B6c67b4;
case 0x6c67b8:c.instructions+=3;goto B6c67b8;
case 0x6c67b9:c.instructions+=2;goto B6c67b9;
case 0x6c67bb:c.instructions+=1;goto B6c67bb;
case 0x6c67bd:goto L6c67bd;
case 0x6c67bf:goto L6c67bf;
case 0x6c67c5:c.instructions+=3;goto B6c67c5;
case 0x6c67c8:c.instructions+=2;goto B6c67c8;
case 0x6c67cb:c.instructions+=1;goto B6c67cb;
case 0x6c67d1:goto L6c67d1;
case 0x6c67d3:c.instructions+=2;goto B6c67d3;
case 0x6c67d5:c.instructions+=1;goto B6c67d5;
case 0x6c67d7:goto L6c67d7;
case 0x6c67d9:c.instructions+=2;goto B6c67d9;
case 0x6c67df:c.instructions+=1;goto B6c67df;
case 0x6c67e2:goto L6c67e2;
case 0x6c67e4:goto L6c67e4;
case 0x6c67eb:c.instructions+=6;goto B6c67eb;
case 0x6c67ee:c.instructions+=5;goto B6c67ee;
case 0x6c67f1:c.instructions+=4;goto B6c67f1;
case 0x6c67f5:c.instructions+=3;goto B6c67f5;
case 0x6c67f6:c.instructions+=2;goto B6c67f6;
case 0x6c67f8:c.instructions+=1;goto B6c67f8;
case 0x6c67fa:goto L6c67fa;
case 0x6c67fd:c.instructions+=2;goto B6c67fd;
case 0x6c67ff:c.instructions+=1;goto B6c67ff;
case 0x6c6800:goto L6c6800;
case 0x6c6804:c.instructions+=4;goto B6c6804;
case 0x6c6806:c.instructions+=3;goto B6c6806;
case 0x6c6809:c.instructions+=2;goto B6c6809;
case 0x6c680c:c.instructions+=1;goto B6c680c;
case 0x6c6812:goto L6c6812;
case 0x6c6818:c.instructions+=2;goto B6c6818;
case 0x6c681b:c.instructions+=1;goto B6c681b;
case 0x6c6821:goto L6c6821;
case 0x6c6824:c.instructions+=6;goto B6c6824;
case 0x6c682b:c.instructions+=5;goto B6c682b;
case 0x6c682e:c.instructions+=4;goto B6c682e;
case 0x6c6831:c.instructions+=3;goto B6c6831;
case 0x6c6834:c.instructions+=2;goto B6c6834;
case 0x6c6838:c.instructions+=1;goto B6c6838;
case 0x6c683a:goto L6c683a;
case 0x6c683e:c.instructions+=1;goto B6c683e;
case 0x6c6842:goto L6c6842;
case 0x6c6844:c.instructions+=5;goto B6c6844;
case 0x6c6847:c.instructions+=4;goto B6c6847;
case 0x6c6849:c.instructions+=3;goto B6c6849;
case 0x6c684b:c.instructions+=2;goto B6c684b;
case 0x6c684e:c.instructions+=1;goto B6c684e;
case 0x6c6850:goto L6c6850;
case 0x6c6854:goto L6c6854;
case 0x6c6856:c.instructions+=5;goto B6c6856;
case 0x6c6859:c.instructions+=4;goto B6c6859;
case 0x6c685b:c.instructions+=3;goto B6c685b;
case 0x6c685d:c.instructions+=2;goto B6c685d;
case 0x6c6860:c.instructions+=1;goto B6c6860;
case 0x6c6862:goto L6c6862;
case 0x6c6866:goto L6c6866;
case 0x6c6869:c.instructions+=6;goto B6c6869;
case 0x6c6870:c.instructions+=5;goto B6c6870;
case 0x6c6873:c.instructions+=4;goto B6c6873;
case 0x6c6876:c.instructions+=3;goto B6c6876;
case 0x6c6879:c.instructions+=2;goto B6c6879;
case 0x6c687d:c.instructions+=1;goto B6c687d;
case 0x6c687f:goto L6c687f;
case 0x6c6883:c.instructions+=1;goto B6c6883;
case 0x6c6887:goto L6c6887;
case 0x6c6889:c.instructions+=5;goto B6c6889;
case 0x6c688c:c.instructions+=4;goto B6c688c;
case 0x6c688e:c.instructions+=3;goto B6c688e;
case 0x6c6890:c.instructions+=2;goto B6c6890;
case 0x6c6893:c.instructions+=1;goto B6c6893;
case 0x6c6895:goto L6c6895;
case 0x6c6899:goto L6c6899;
case 0x6c689b:c.instructions+=5;goto B6c689b;
case 0x6c689e:c.instructions+=4;goto B6c689e;
case 0x6c68a0:c.instructions+=3;goto B6c68a0;
case 0x6c68a2:c.instructions+=2;goto B6c68a2;
case 0x6c68a5:c.instructions+=1;goto B6c68a5;
case 0x6c68a7:goto L6c68a7;
case 0x6c68ab:goto L6c68ab;
case 0x6c68ae:c.instructions+=2;goto B6c68ae;
case 0x6c68b1:c.instructions+=1;goto B6c68b1;
case 0x6c68b7:goto L6c68b7;
case 0x6c68bb:c.instructions+=3;goto B6c68bb;
case 0x6c68bd:c.instructions+=2;goto B6c68bd;
case 0x6c68bf:c.instructions+=1;goto B6c68bf;
case 0x6c68c1:goto L6c68c1;
case 0x6c68c5:c.instructions+=1;goto B6c68c5;
case 0x6c68c7:goto L6c68c7;
case 0x6c68c9:c.instructions+=2;goto B6c68c9;
case 0x6c68ca:c.instructions+=1;goto B6c68ca;
case 0x6c68cf:goto L6c68cf;
case 0x6c68d1:c.instructions+=1;goto B6c68d1;
case 0x6c68d6:goto L6c68d6;
case 0x6c68d8:c.instructions+=1;goto B6c68d8;
case 0x6c68da:goto L6c68da;
case 0x6c68dc:c.instructions+=1;goto B6c68dc;
case 0x6c68e1:goto L6c68e1;
case 0x6c68e3:c.instructions+=2;goto B6c68e3;
case 0x6c68e6:c.instructions+=1;goto B6c68e6;
case 0x6c68e8:goto L6c68e8;
case 0x6c68ec:c.instructions+=1;goto B6c68ec;
case 0x6c68ef:goto L6c68ef;
case 0x6c68f1:c.instructions+=1;goto B6c68f1;
case 0x6c68f3:goto L6c68f3;
case 0x6c68f8:c.instructions+=1;goto B6c68f8;
case 0x6c68fd:goto L6c68fd;
case 0x6c68ff:c.instructions+=3;goto B6c68ff;
case 0x6c6904:c.instructions+=2;goto B6c6904;
case 0x6c6908:c.instructions+=1;goto B6c6908;
case 0x6c690a:goto L6c690a;
case 0x6c690f:c.instructions+=1;goto B6c690f;
case 0x6c6911:goto L6c6911;
case 0x6c6916:goto L6c6916;
case 0x6c6918:c.instructions+=6;goto B6c6918;
case 0x6c6919:c.instructions+=5;goto B6c6919;
case 0x6c691c:c.instructions+=4;goto B6c691c;
case 0x6c691d:c.instructions+=3;goto B6c691d;
case 0x6c691e:c.instructions+=2;goto B6c691e;
case 0x6c6920:c.instructions+=1;goto B6c6920;
case 0x6c6925:goto L6c6925;
case 0x6c6927:c.instructions+=3;goto B6c6927;
case 0x6c692a:c.instructions+=2;goto B6c692a;
case 0x6c692c:c.instructions+=1;goto B6c692c;
case 0x6c692e:goto L6c692e;
case 0x6c6934:c.instructions+=1;goto B6c6934;
case 0x6c6939:goto L6c6939;
case 0x6c693b:c.instructions+=2;goto B6c693b;
case 0x6c693e:c.instructions+=1;goto B6c693e;
case 0x6c6940:goto L6c6940;
case 0x6c6942:goto L6c6942;
case 0x6c6944:c.instructions+=1;goto B6c6944;
case 0x6c6949:goto L6c6949;
case 0x6c694c:c.instructions+=1;goto B6c694c;
case 0x6c694e:goto L6c694e;
case 0x6c6954:c.instructions+=8;goto B6c6954;
case 0x6c6957:c.instructions+=7;goto B6c6957;
case 0x6c695a:c.instructions+=6;goto B6c695a;
case 0x6c695c:c.instructions+=5;goto B6c695c;
case 0x6c695f:c.instructions+=4;goto B6c695f;
case 0x6c6962:c.instructions+=3;goto B6c6962;
case 0x6c6964:c.instructions+=2;goto B6c6964;
case 0x6c6966:c.instructions+=1;goto B6c6966;
case 0x6c6969:goto L6c6969;
case 0x6c696b:goto L6c696b;
case 0x6c696d:c.instructions+=1;goto B6c696d;
case 0x6c6970:goto L6c6970;
case 0x6c6972:goto L6c6972;
case 0x6c6975:c.instructions+=3;goto B6c6975;
case 0x6c6977:c.instructions+=2;goto B6c6977;
case 0x6c697a:c.instructions+=1;goto B6c697a;
case 0x6c697d:goto L6c697d;
case 0x6c697f:goto L6c697f;
case 0x6c6981:c.instructions+=1;goto B6c6981;
case 0x6c6984:goto L6c6984;
case 0x6c6986:goto L6c6986;
case 0x6c6989:goto L6c6989;
case 0x6c698c:c.instructions+=3;goto B6c698c;
case 0x6c698e:c.instructions+=2;goto B6c698e;
case 0x6c6991:c.instructions+=1;goto B6c6991;
case 0x6c6993:goto L6c6993;
case 0x6c6995:goto L6c6995;
case 0x6c6997:c.instructions+=2;goto B6c6997;
case 0x6c699a:c.instructions+=1;goto B6c699a;
case 0x6c699d:goto L6c699d;
case 0x6c699f:goto L6c699f;
case 0x6c69a5:c.instructions+=2;goto B6c69a5;
case 0x6c69a6:c.instructions+=1;goto B6c69a6;
case 0x6c69ab:goto L6c69ab;
case 0x6c69ad:c.instructions+=3;goto B6c69ad;
case 0x6c69af:c.instructions+=2;goto B6c69af;
case 0x6c69b1:c.instructions+=1;goto B6c69b1;
case 0x6c69b6:goto L6c69b6;
case 0x6c69b8:c.instructions+=1;goto B6c69b8;
case 0x6c69ba:goto L6c69ba;
case 0x6c69bc:goto L6c69bc;
case 0x6c69bd:c.instructions+=4;goto B6c69bd;
case 0x6c69be:c.instructions+=3;goto B6c69be;
case 0x6c69bf:c.instructions+=2;goto B6c69bf;
case 0x6c69c0:c.instructions+=1;goto B6c69c0;
case 0x6c69c1:goto L6c69c1;
case 0x6c69c3:c.instructions+=33;goto B6c69c3;
case 0x6c69c4:c.instructions+=32;goto B6c69c4;
case 0x6c69c6:c.instructions+=31;goto B6c69c6;
case 0x6c69cc:c.instructions+=30;goto B6c69cc;
case 0x6c69cd:c.instructions+=29;goto B6c69cd;
case 0x6c69ce:c.instructions+=28;goto B6c69ce;
case 0x6c69d0:c.instructions+=27;goto B6c69d0;
case 0x6c69d6:c.instructions+=26;goto B6c69d6;
case 0x6c69d8:c.instructions+=25;goto B6c69d8;
case 0x6c69d9:c.instructions+=24;goto B6c69d9;
case 0x6c69db:c.instructions+=23;goto B6c69db;
case 0x6c69dc:c.instructions+=22;goto B6c69dc;
case 0x6c69dd:c.instructions+=21;goto B6c69dd;
case 0x6c69e0:c.instructions+=20;goto B6c69e0;
case 0x6c69e6:c.instructions+=19;goto B6c69e6;
case 0x6c69e7:c.instructions+=18;goto B6c69e7;
case 0x6c69ea:c.instructions+=17;goto B6c69ea;
case 0x6c69eb:c.instructions+=16;goto B6c69eb;
case 0x6c69f1:c.instructions+=15;goto B6c69f1;
case 0x6c69f2:c.instructions+=14;goto B6c69f2;
case 0x6c69f5:c.instructions+=13;goto B6c69f5;
case 0x6c69f6:c.instructions+=12;goto B6c69f6;
case 0x6c69fc:c.instructions+=11;goto B6c69fc;
case 0x6c69fd:c.instructions+=10;goto B6c69fd;
case 0x6c6a02:c.instructions+=9;goto B6c6a02;
case 0x6c6a04:c.instructions+=8;goto B6c6a04;
case 0x6c6a05:c.instructions+=7;goto B6c6a05;
case 0x6c6a07:c.instructions+=6;goto B6c6a07;
case 0x6c6a0a:c.instructions+=5;goto B6c6a0a;
case 0x6c6a0d:c.instructions+=4;goto B6c6a0d;
case 0x6c6a10:c.instructions+=3;goto B6c6a10;
case 0x6c6a17:c.instructions+=2;goto B6c6a17;
case 0x6c6a1e:c.instructions+=1;goto B6c6a1e;
case 0x6c6a23:goto L6c6a23;
case 0x6c6a25:c.instructions+=1;goto B6c6a25;
case 0x6c6a2b:goto L6c6a2b;
case 0x6c6a2d:c.instructions+=5;goto B6c6a2d;
case 0x6c6a30:c.instructions+=4;goto B6c6a30;
case 0x6c6a33:c.instructions+=3;goto B6c6a33;
case 0x6c6a36:c.instructions+=2;goto B6c6a36;
case 0x6c6a39:c.instructions+=1;goto B6c6a39;
case 0x6c6a3f:goto L6c6a3f;
case 0x6c6a42:c.instructions+=10;goto B6c6a42;
case 0x6c6a48:c.instructions+=9;goto B6c6a48;
case 0x6c6a4b:c.instructions+=8;goto B6c6a4b;
case 0x6c6a51:c.instructions+=7;goto B6c6a51;
case 0x6c6a54:c.instructions+=6;goto B6c6a54;
case 0x6c6a57:c.instructions+=5;goto B6c6a57;
case 0x6c6a5a:c.instructions+=4;goto B6c6a5a;
case 0x6c6a5d:c.instructions+=3;goto B6c6a5d;
case 0x6c6a60:c.instructions+=2;goto B6c6a60;
case 0x6c6a65:c.instructions+=1;goto B6c6a65;
case 0x6c6a68:goto L6c6a68;
case 0x6c6a6c:c.instructions+=1;goto B6c6a6c;
case 0x6c6a72:goto L6c6a72;
case 0x6c6a75:c.instructions+=3;goto B6c6a75;
case 0x6c6a78:c.instructions+=2;goto B6c6a78;
case 0x6c6a7c:c.instructions+=1;goto B6c6a7c;
case 0x6c6a7e:goto L6c6a7e;
case 0x6c6a82:c.instructions+=1;goto B6c6a82;
case 0x6c6a84:goto L6c6a84;
case 0x6c6a88:c.instructions+=1;goto B6c6a88;
case 0x6c6a8a:goto L6c6a8a;
case 0x6c6a90:c.instructions+=5;goto B6c6a90;
case 0x6c6a93:c.instructions+=4;goto B6c6a93;
case 0x6c6a95:c.instructions+=3;goto B6c6a95;
case 0x6c6a97:c.instructions+=2;goto B6c6a97;
case 0x6c6a9a:c.instructions+=1;goto B6c6a9a;
case 0x6c6a9c:goto L6c6a9c;
case 0x6c6aa2:c.instructions+=5;goto B6c6aa2;
case 0x6c6aa5:c.instructions+=4;goto B6c6aa5;
case 0x6c6aa7:c.instructions+=3;goto B6c6aa7;
case 0x6c6aa9:c.instructions+=2;goto B6c6aa9;
case 0x6c6aac:c.instructions+=1;goto B6c6aac;
case 0x6c6aae:goto L6c6aae;
case 0x6c6ab5:c.instructions+=1;goto B6c6ab5;
case 0x6c6ab7:goto L6c6ab7;
case 0x6c6abd:c.instructions+=5;goto B6c6abd;
case 0x6c6ac0:c.instructions+=4;goto B6c6ac0;
case 0x6c6ac2:c.instructions+=3;goto B6c6ac2;
case 0x6c6ac4:c.instructions+=2;goto B6c6ac4;
case 0x6c6ac7:c.instructions+=1;goto B6c6ac7;
case 0x6c6ac9:goto L6c6ac9;
case 0x6c6acf:c.instructions+=5;goto B6c6acf;
case 0x6c6ad2:c.instructions+=4;goto B6c6ad2;
case 0x6c6ad4:c.instructions+=3;goto B6c6ad4;
case 0x6c6ad6:c.instructions+=2;goto B6c6ad6;
case 0x6c6ad9:c.instructions+=1;goto B6c6ad9;
case 0x6c6adb:goto L6c6adb;
case 0x6c6ae2:goto L6c6ae2;
case 0x6c6ae5:c.instructions+=2;goto B6c6ae5;
case 0x6c6ae8:c.instructions+=1;goto B6c6ae8;
case 0x6c6aee:goto L6c6aee;
case 0x6c6af0:c.instructions+=2;goto B6c6af0;
case 0x6c6af3:c.instructions+=1;goto B6c6af3;
case 0x6c6af5:goto L6c6af5;
case 0x6c6af8:c.instructions+=1;goto B6c6af8;
case 0x6c6afa:goto L6c6afa;
case 0x6c6afc:c.instructions+=2;goto B6c6afc;
case 0x6c6afd:c.instructions+=1;goto B6c6afd;
case 0x6c6b02:goto L6c6b02;
case 0x6c6b04:c.instructions+=3;goto B6c6b04;
case 0x6c6b09:c.instructions+=2;goto B6c6b09;
case 0x6c6b0e:c.instructions+=1;goto B6c6b0e;
case 0x6c6b11:goto L6c6b11;
case 0x6c6b14:c.instructions+=1;goto B6c6b14;
case 0x6c6b16:goto L6c6b16;
case 0x6c6b18:c.instructions+=3;goto B6c6b18;
case 0x6c6b1d:c.instructions+=2;goto B6c6b1d;
case 0x6c6b22:c.instructions+=1;goto B6c6b22;
case 0x6c6b25:goto L6c6b25;
case 0x6c6b27:goto L6c6b27;
case 0x6c6b29:c.instructions+=1;goto B6c6b29;
case 0x6c6b2e:goto L6c6b2e;
case 0x6c6b30:c.instructions+=1;goto B6c6b30;
case 0x6c6b32:goto L6c6b32;
case 0x6c6b34:c.instructions+=1;goto B6c6b34;
case 0x6c6b39:goto L6c6b39;
case 0x6c6b3c:c.instructions+=1;goto B6c6b3c;
case 0x6c6b3e:goto L6c6b3e;
case 0x6c6b41:goto L6c6b41;
case 0x6c6b44:c.instructions+=2;goto B6c6b44;
case 0x6c6b46:c.instructions+=1;goto B6c6b46;
case 0x6c6b48:goto L6c6b48;
case 0x6c6b4d:c.instructions+=1;goto B6c6b4d;
case 0x6c6b52:goto L6c6b52;
case 0x6c6b53:c.instructions+=5;goto B6c6b53;
case 0x6c6b54:c.instructions+=4;goto B6c6b54;
case 0x6c6b57:c.instructions+=3;goto B6c6b57;
case 0x6c6b58:c.instructions+=2;goto B6c6b58;
case 0x6c6b5b:c.instructions+=1;goto B6c6b5b;
case 0x6c6b60:goto L6c6b60;
case 0x6c6b62:c.instructions+=1;goto B6c6b62;
case 0x6c6b68:goto L6c6b68;
case 0x6c6b6e:c.instructions+=2;goto B6c6b6e;
case 0x6c6b71:c.instructions+=1;goto B6c6b71;
case 0x6c6b76:goto L6c6b76;
case 0x6c6b78:c.instructions+=1;goto B6c6b78;
case 0x6c6b7e:goto L6c6b7e;
case 0x6c6b84:c.instructions+=9;goto B6c6b84;
case 0x6c6b86:c.instructions+=8;goto B6c6b86;
case 0x6c6b89:c.instructions+=7;goto B6c6b89;
case 0x6c6b8c:c.instructions+=6;goto B6c6b8c;
case 0x6c6b8f:c.instructions+=5;goto B6c6b8f;
case 0x6c6b91:c.instructions+=4;goto B6c6b91;
case 0x6c6b94:c.instructions+=3;goto B6c6b94;
case 0x6c6b96:c.instructions+=2;goto B6c6b96;
case 0x6c6b98:c.instructions+=1;goto B6c6b98;
case 0x6c6b9b:goto L6c6b9b;
case 0x6c6b9d:goto L6c6b9d;
case 0x6c6b9f:c.instructions+=1;goto B6c6b9f;
case 0x6c6ba2:goto L6c6ba2;
case 0x6c6ba4:goto L6c6ba4;
case 0x6c6ba6:c.instructions+=5;goto B6c6ba6;
case 0x6c6ba9:c.instructions+=4;goto B6c6ba9;
case 0x6c6bac:c.instructions+=3;goto B6c6bac;
case 0x6c6bae:c.instructions+=2;goto B6c6bae;
case 0x6c6bb1:c.instructions+=1;goto B6c6bb1;
case 0x6c6bb7:goto L6c6bb7;
case 0x6c6bb9:goto L6c6bb9;
case 0x6c6bbb:c.instructions+=1;goto B6c6bbb;
case 0x6c6bbe:goto L6c6bbe;
case 0x6c6bc0:goto L6c6bc0;
case 0x6c6bc3:c.instructions+=8;goto B6c6bc3;
case 0x6c6bc4:c.instructions+=7;goto B6c6bc4;
case 0x6c6bc5:c.instructions+=6;goto B6c6bc5;
case 0x6c6bc7:c.instructions+=5;goto B6c6bc7;
case 0x6c6bca:c.instructions+=4;goto B6c6bca;
case 0x6c6bcc:c.instructions+=3;goto B6c6bcc;
case 0x6c6bce:c.instructions+=2;goto B6c6bce;
case 0x6c6bd1:c.instructions+=1;goto B6c6bd1;
case 0x6c6bd6:goto L6c6bd6;
case 0x6c6bd9:c.instructions+=1;goto B6c6bd9;
case 0x6c6bdb:goto L6c6bdb;
case 0x6c6be0:c.instructions+=1;goto B6c6be0;
case 0x6c6be2:goto L6c6be2;
case 0x6c6be4:c.instructions+=1;goto B6c6be4;
case 0x6c6be6:goto L6c6be6;
case 0x6c6be8:c.instructions+=1;goto B6c6be8;
case 0x6c6beb:goto L6c6beb;
case 0x6c6bee:c.instructions+=5;goto B6c6bee;
case 0x6c6bf1:c.instructions+=4;goto B6c6bf1;
case 0x6c6bf4:c.instructions+=3;goto B6c6bf4;
case 0x6c6bf7:c.instructions+=2;goto B6c6bf7;
case 0x6c6bf8:c.instructions+=1;goto B6c6bf8;
case 0x6c6bfa:goto L6c6bfa;
case 0x6c6bfd:c.instructions+=2;goto B6c6bfd;
case 0x6c6c03:c.instructions+=1;goto B6c6c03;
case 0x6c6c08:goto L6c6c08;
case 0x6c6c0a:goto L6c6c0a;
case 0x6c6c0d:c.instructions+=2;goto B6c6c0d;
case 0x6c6c0f:c.instructions+=1;goto B6c6c0f;
case 0x6c6c14:goto L6c6c14;
case 0x6c6c16:goto L6c6c16;
case 0x6c6c17:c.instructions+=4;goto B6c6c17;
case 0x6c6c18:c.instructions+=3;goto B6c6c18;
case 0x6c6c19:c.instructions+=2;goto B6c6c19;
case 0x6c6c1a:c.instructions+=1;goto B6c6c1a;
case 0x6c6c1b:goto L6c6c1b;
case 0x6c6c1d:c.instructions+=13;goto B6c6c1d;
case 0x6c6c1e:c.instructions+=12;goto B6c6c1e;
case 0x6c6c20:c.instructions+=11;goto B6c6c20;
case 0x6c6c21:c.instructions+=10;goto B6c6c21;
case 0x6c6c22:c.instructions+=9;goto B6c6c22;
case 0x6c6c23:c.instructions+=8;goto B6c6c23;
case 0x6c6c25:c.instructions+=7;goto B6c6c25;
case 0x6c6c2b:c.instructions+=6;goto B6c6c2b;
case 0x6c6c2d:c.instructions+=5;goto B6c6c2d;
case 0x6c6c2f:c.instructions+=4;goto B6c6c2f;
case 0x6c6c35:c.instructions+=3;goto B6c6c35;
case 0x6c6c36:c.instructions+=2;goto B6c6c36;
case 0x6c6c38:c.instructions+=1;goto B6c6c38;
case 0x6c6c3a:goto L6c6c3a;
case 0x6c6c3c:c.instructions+=1;goto B6c6c3c;
case 0x6c6c41:goto L6c6c41;
case 0x6c6c44:c.instructions+=9;goto B6c6c44;
case 0x6c6c47:c.instructions+=8;goto B6c6c47;
case 0x6c6c4a:c.instructions+=7;goto B6c6c4a;
case 0x6c6c4d:c.instructions+=6;goto B6c6c4d;
case 0x6c6c50:c.instructions+=5;goto B6c6c50;
case 0x6c6c51:c.instructions+=4;goto B6c6c51;
case 0x6c6c54:c.instructions+=3;goto B6c6c54;
case 0x6c6c57:c.instructions+=2;goto B6c6c57;
case 0x6c6c5b:c.instructions+=1;goto B6c6c5b;
case 0x6c6c61:goto L6c6c61;
case 0x6c6c65:c.instructions+=1;goto B6c6c65;
case 0x6c6c6b:goto L6c6c6b;
case 0x6c6c71:c.instructions+=5;goto B6c6c71;
case 0x6c6c74:c.instructions+=4;goto B6c6c74;
case 0x6c6c76:c.instructions+=3;goto B6c6c76;
case 0x6c6c78:c.instructions+=2;goto B6c6c78;
case 0x6c6c7b:c.instructions+=1;goto B6c6c7b;
case 0x6c6c7d:goto L6c6c7d;
case 0x6c6c7e:c.instructions+=9;goto B6c6c7e;
case 0x6c6c80:c.instructions+=8;goto B6c6c80;
case 0x6c6c81:c.instructions+=7;goto B6c6c81;
case 0x6c6c84:c.instructions+=6;goto B6c6c84;
case 0x6c6c86:c.instructions+=5;goto B6c6c86;
case 0x6c6c87:c.instructions+=4;goto B6c6c87;
case 0x6c6c88:c.instructions+=3;goto B6c6c88;
case 0x6c6c89:c.instructions+=2;goto B6c6c89;
case 0x6c6c8b:c.instructions+=1;goto B6c6c8b;
case 0x6c6c90:goto L6c6c90;
case 0x6c6c92:c.instructions+=3;goto B6c6c92;
case 0x6c6c95:c.instructions+=2;goto B6c6c95;
case 0x6c6c98:c.instructions+=1;goto B6c6c98;
case 0x6c6c9a:goto L6c6c9a;
case 0x6c6c9f:c.instructions+=1;goto B6c6c9f;
case 0x6c6ca1:goto L6c6ca1;
case 0x6c6ca7:c.instructions+=8;goto B6c6ca7;
case 0x6c6caa:c.instructions+=7;goto B6c6caa;
case 0x6c6cad:c.instructions+=6;goto B6c6cad;
case 0x6c6caf:c.instructions+=5;goto B6c6caf;
case 0x6c6cb2:c.instructions+=4;goto B6c6cb2;
case 0x6c6cb5:c.instructions+=3;goto B6c6cb5;
case 0x6c6cb6:c.instructions+=2;goto B6c6cb6;
case 0x6c6cb8:c.instructions+=1;goto B6c6cb8;
case 0x6c6cbd:goto L6c6cbd;
case 0x6c6cbf:c.instructions+=1;goto B6c6cbf;
case 0x6c6cc1:goto L6c6cc1;
case 0x6c6cc2:c.instructions+=2;goto B6c6cc2;
case 0x6c6cc4:c.instructions+=1;goto B6c6cc4;
case 0x6c6cc9:goto L6c6cc9;
case 0x6c6ccb:c.instructions+=1;goto B6c6ccb;
case 0x6c6ccd:goto L6c6ccd;
case 0x6c6cd4:c.instructions+=2;goto B6c6cd4;
case 0x6c6cd8:c.instructions+=1;goto B6c6cd8;
case 0x6c6cda:goto L6c6cda;
case 0x6c6ce0:c.instructions+=3;goto B6c6ce0;
case 0x6c6ce3:c.instructions+=2;goto B6c6ce3;
case 0x6c6ce5:c.instructions+=1;goto B6c6ce5;
case 0x6c6ce8:goto L6c6ce8;
case 0x6c6cee:c.instructions+=5;goto B6c6cee;
case 0x6c6cf1:c.instructions+=4;goto B6c6cf1;
case 0x6c6cf4:c.instructions+=3;goto B6c6cf4;
case 0x6c6cf7:c.instructions+=2;goto B6c6cf7;
case 0x6c6cf9:c.instructions+=1;goto B6c6cf9;
case 0x6c6cfb:goto L6c6cfb;
case 0x6c6cfd:goto L6c6cfd;
case 0x6c6cfe:goto L6c6cfe;
case 0x6c6cff:c.instructions+=3;goto B6c6cff;
case 0x6c6d00:c.instructions+=2;goto B6c6d00;
case 0x6c6d01:c.instructions+=1;goto B6c6d01;
case 0x6c6d02:goto L6c6d02;
case 0x6c6d04:c.instructions+=33;goto B6c6d04;
case 0x6c6d05:c.instructions+=32;goto B6c6d05;
case 0x6c6d07:c.instructions+=31;goto B6c6d07;
case 0x6c6d0d:c.instructions+=30;goto B6c6d0d;
case 0x6c6d0e:c.instructions+=29;goto B6c6d0e;
case 0x6c6d0f:c.instructions+=28;goto B6c6d0f;
case 0x6c6d10:c.instructions+=27;goto B6c6d10;
case 0x6c6d12:c.instructions+=26;goto B6c6d12;
case 0x6c6d18:c.instructions+=25;goto B6c6d18;
case 0x6c6d1a:c.instructions+=24;goto B6c6d1a;
case 0x6c6d1c:c.instructions+=23;goto B6c6d1c;
case 0x6c6d1f:c.instructions+=22;goto B6c6d1f;
case 0x6c6d22:c.instructions+=21;goto B6c6d22;
case 0x6c6d24:c.instructions+=20;goto B6c6d24;
case 0x6c6d27:c.instructions+=19;goto B6c6d27;
case 0x6c6d28:c.instructions+=18;goto B6c6d28;
case 0x6c6d29:c.instructions+=17;goto B6c6d29;
case 0x6c6d2f:c.instructions+=16;goto B6c6d2f;
case 0x6c6d30:c.instructions+=15;goto B6c6d30;
case 0x6c6d33:c.instructions+=14;goto B6c6d33;
case 0x6c6d34:c.instructions+=13;goto B6c6d34;
case 0x6c6d3a:c.instructions+=12;goto B6c6d3a;
case 0x6c6d3b:c.instructions+=11;goto B6c6d3b;
case 0x6c6d3e:c.instructions+=10;goto B6c6d3e;
case 0x6c6d3f:c.instructions+=9;goto B6c6d3f;
case 0x6c6d42:c.instructions+=8;goto B6c6d42;
case 0x6c6d43:c.instructions+=7;goto B6c6d43;
case 0x6c6d48:c.instructions+=6;goto B6c6d48;
case 0x6c6d49:c.instructions+=5;goto B6c6d49;
case 0x6c6d4b:c.instructions+=4;goto B6c6d4b;
case 0x6c6d4e:c.instructions+=3;goto B6c6d4e;
case 0x6c6d55:c.instructions+=2;goto B6c6d55;
case 0x6c6d5c:c.instructions+=1;goto B6c6d5c;
case 0x6c6d61:goto L6c6d61;
case 0x6c6d63:c.instructions+=1;goto B6c6d63;
case 0x6c6d65:goto L6c6d65;
case 0x6c6d66:c.instructions+=14;goto B6c6d66;
case 0x6c6d67:c.instructions+=13;goto B6c6d67;
case 0x6c6d6a:c.instructions+=12;goto B6c6d6a;
case 0x6c6d6b:c.instructions+=11;goto B6c6d6b;
case 0x6c6d71:c.instructions+=10;goto B6c6d71;
case 0x6c6d72:c.instructions+=9;goto B6c6d72;
case 0x6c6d75:c.instructions+=8;goto B6c6d75;
case 0x6c6d76:c.instructions+=7;goto B6c6d76;
case 0x6c6d79:c.instructions+=6;goto B6c6d79;
case 0x6c6d7a:c.instructions+=5;goto B6c6d7a;
case 0x6c6d7f:c.instructions+=4;goto B6c6d7f;
case 0x6c6d85:c.instructions+=3;goto B6c6d85;
case 0x6c6d87:c.instructions+=2;goto B6c6d87;
case 0x6c6d8a:c.instructions+=1;goto B6c6d8a;
case 0x6c6d8f:goto L6c6d8f;
case 0x6c6d91:c.instructions+=1;goto B6c6d91;
case 0x6c6d97:goto L6c6d97;
case 0x6c6d9a:c.instructions+=2;goto B6c6d9a;
case 0x6c6d9c:c.instructions+=1;goto B6c6d9c;
case 0x6c6d9e:goto L6c6d9e;
case 0x6c6da0:c.instructions+=2;goto B6c6da0;
case 0x6c6da3:c.instructions+=1;goto B6c6da3;
case 0x6c6da6:goto L6c6da6;
case 0x6c6da9:c.instructions+=4;goto B6c6da9;
case 0x6c6dac:c.instructions+=3;goto B6c6dac;
case 0x6c6db3:c.instructions+=2;goto B6c6db3;
case 0x6c6dba:c.instructions+=1;goto B6c6dba;
case 0x6c6dbc:goto L6c6dbc;
case 0x6c6dc2:c.instructions+=10;goto B6c6dc2;
case 0x6c6dc5:c.instructions+=9;goto B6c6dc5;
case 0x6c6dc8:c.instructions+=8;goto B6c6dc8;
case 0x6c6dcb:c.instructions+=7;goto B6c6dcb;
case 0x6c6dce:c.instructions+=6;goto B6c6dce;
case 0x6c6dd1:c.instructions+=5;goto B6c6dd1;
case 0x6c6dd4:c.instructions+=4;goto B6c6dd4;
case 0x6c6dd7:c.instructions+=3;goto B6c6dd7;
case 0x6c6dda:c.instructions+=2;goto B6c6dda;
case 0x6c6dde:c.instructions+=1;goto B6c6dde;
case 0x6c6de0:goto L6c6de0;
case 0x6c6de6:c.instructions+=5;goto B6c6de6;
case 0x6c6de9:c.instructions+=4;goto B6c6de9;
case 0x6c6deb:c.instructions+=3;goto B6c6deb;
case 0x6c6ded:c.instructions+=2;goto B6c6ded;
case 0x6c6df0:c.instructions+=1;goto B6c6df0;
case 0x6c6df2:goto L6c6df2;
case 0x6c6df6:c.instructions+=1;goto B6c6df6;
case 0x6c6df8:goto L6c6df8;
case 0x6c6dfb:c.instructions+=3;goto B6c6dfb;
case 0x6c6dff:c.instructions+=2;goto B6c6dff;
case 0x6c6e02:c.instructions+=1;goto B6c6e02;
case 0x6c6e04:goto L6c6e04;
case 0x6c6e0a:c.instructions+=5;goto B6c6e0a;
case 0x6c6e0c:c.instructions+=4;goto B6c6e0c;
case 0x6c6e0e:c.instructions+=3;goto B6c6e0e;
case 0x6c6e14:c.instructions+=2;goto B6c6e14;
case 0x6c6e17:c.instructions+=1;goto B6c6e17;
case 0x6c6e19:goto L6c6e19;
case 0x6c6e1f:c.instructions+=1;goto B6c6e1f;
case 0x6c6e21:goto L6c6e21;
case 0x6c6e23:c.instructions+=1;goto B6c6e23;
case 0x6c6e25:goto L6c6e25;
case 0x6c6e2b:goto L6c6e2b;
case 0x6c6e2d:c.instructions+=2;goto B6c6e2d;
case 0x6c6e2f:c.instructions+=1;goto B6c6e2f;
case 0x6c6e31:goto L6c6e31;
case 0x6c6e37:c.instructions+=6;goto B6c6e37;
case 0x6c6e3e:c.instructions+=5;goto B6c6e3e;
case 0x6c6e41:c.instructions+=4;goto B6c6e41;
case 0x6c6e44:c.instructions+=3;goto B6c6e44;
case 0x6c6e45:c.instructions+=2;goto B6c6e45;
case 0x6c6e47:c.instructions+=1;goto B6c6e47;
case 0x6c6e49:goto L6c6e49;
case 0x6c6e4b:goto L6c6e4b;
case 0x6c6e4c:c.instructions+=4;goto B6c6e4c;
case 0x6c6e4d:c.instructions+=3;goto B6c6e4d;
case 0x6c6e4e:c.instructions+=2;goto B6c6e4e;
case 0x6c6e4f:c.instructions+=1;goto B6c6e4f;
case 0x6c6e50:goto L6c6e50;
case 0x6c6e52:c.instructions+=33;goto B6c6e52;
case 0x6c6e53:c.instructions+=32;goto B6c6e53;
case 0x6c6e55:c.instructions+=31;goto B6c6e55;
case 0x6c6e5b:c.instructions+=30;goto B6c6e5b;
case 0x6c6e5c:c.instructions+=29;goto B6c6e5c;
case 0x6c6e5d:c.instructions+=28;goto B6c6e5d;
case 0x6c6e5e:c.instructions+=27;goto B6c6e5e;
case 0x6c6e60:c.instructions+=26;goto B6c6e60;
case 0x6c6e66:c.instructions+=25;goto B6c6e66;
case 0x6c6e68:c.instructions+=24;goto B6c6e68;
case 0x6c6e6a:c.instructions+=23;goto B6c6e6a;
case 0x6c6e6d:c.instructions+=22;goto B6c6e6d;
case 0x6c6e70:c.instructions+=21;goto B6c6e70;
case 0x6c6e72:c.instructions+=20;goto B6c6e72;
case 0x6c6e75:c.instructions+=19;goto B6c6e75;
case 0x6c6e76:c.instructions+=18;goto B6c6e76;
case 0x6c6e77:c.instructions+=17;goto B6c6e77;
case 0x6c6e7d:c.instructions+=16;goto B6c6e7d;
case 0x6c6e7e:c.instructions+=15;goto B6c6e7e;
case 0x6c6e81:c.instructions+=14;goto B6c6e81;
case 0x6c6e82:c.instructions+=13;goto B6c6e82;
case 0x6c6e88:c.instructions+=12;goto B6c6e88;
case 0x6c6e89:c.instructions+=11;goto B6c6e89;
case 0x6c6e8c:c.instructions+=10;goto B6c6e8c;
case 0x6c6e8d:c.instructions+=9;goto B6c6e8d;
case 0x6c6e93:c.instructions+=8;goto B6c6e93;
case 0x6c6e94:c.instructions+=7;goto B6c6e94;
case 0x6c6e99:c.instructions+=6;goto B6c6e99;
case 0x6c6e9a:c.instructions+=5;goto B6c6e9a;
case 0x6c6e9c:c.instructions+=4;goto B6c6e9c;
case 0x6c6e9f:c.instructions+=3;goto B6c6e9f;
case 0x6c6ea6:c.instructions+=2;goto B6c6ea6;
case 0x6c6ead:c.instructions+=1;goto B6c6ead;
case 0x6c6eb2:goto L6c6eb2;
case 0x6c6eb4:c.instructions+=1;goto B6c6eb4;
case 0x6c6eb6:goto L6c6eb6;
case 0x6c6eb7:c.instructions+=14;goto B6c6eb7;
case 0x6c6eb8:c.instructions+=13;goto B6c6eb8;
case 0x6c6ebb:c.instructions+=12;goto B6c6ebb;
case 0x6c6ebc:c.instructions+=11;goto B6c6ebc;
case 0x6c6ec2:c.instructions+=10;goto B6c6ec2;
case 0x6c6ec3:c.instructions+=9;goto B6c6ec3;
case 0x6c6ec6:c.instructions+=8;goto B6c6ec6;
case 0x6c6ec7:c.instructions+=7;goto B6c6ec7;
case 0x6c6ecd:c.instructions+=6;goto B6c6ecd;
case 0x6c6ece:c.instructions+=5;goto B6c6ece;
case 0x6c6ed3:c.instructions+=4;goto B6c6ed3;
case 0x6c6ed9:c.instructions+=3;goto B6c6ed9;
case 0x6c6edb:c.instructions+=2;goto B6c6edb;
case 0x6c6ede:c.instructions+=1;goto B6c6ede;
case 0x6c6ee3:goto L6c6ee3;
case 0x6c6ee5:c.instructions+=1;goto B6c6ee5;
case 0x6c6eeb:goto L6c6eeb;
case 0x6c6eee:c.instructions+=2;goto B6c6eee;
case 0x6c6ef0:c.instructions+=1;goto B6c6ef0;
case 0x6c6ef2:goto L6c6ef2;
case 0x6c6ef5:c.instructions+=5;goto B6c6ef5;
case 0x6c6ef8:c.instructions+=4;goto B6c6ef8;
case 0x6c6eff:c.instructions+=3;goto B6c6eff;
case 0x6c6f06:c.instructions+=2;goto B6c6f06;
case 0x6c6f08:c.instructions+=1;goto B6c6f08;
case 0x6c6f0a:goto L6c6f0a;
case 0x6c6f11:c.instructions+=1;goto B6c6f11;
case 0x6c6f13:goto L6c6f13;
case 0x6c6f1a:c.instructions+=1;goto B6c6f1a;
case 0x6c6f1c:goto L6c6f1c;
case 0x6c6f1f:c.instructions+=2;goto B6c6f1f;
case 0x6c6f22:c.instructions+=1;goto B6c6f22;
case 0x6c6f24:goto L6c6f24;
case 0x6c6f2a:c.instructions+=5;goto B6c6f2a;
case 0x6c6f2c:c.instructions+=4;goto B6c6f2c;
case 0x6c6f2e:c.instructions+=3;goto B6c6f2e;
case 0x6c6f34:c.instructions+=2;goto B6c6f34;
case 0x6c6f37:c.instructions+=1;goto B6c6f37;
case 0x6c6f39:goto L6c6f39;
case 0x6c6f3f:c.instructions+=1;goto B6c6f3f;
case 0x6c6f41:goto L6c6f41;
case 0x6c6f43:c.instructions+=1;goto B6c6f43;
case 0x6c6f45:goto L6c6f45;
case 0x6c6f4b:goto L6c6f4b;
case 0x6c6f4c:c.instructions+=9;goto B6c6f4c;
case 0x6c6f4e:c.instructions+=8;goto B6c6f4e;
case 0x6c6f4f:c.instructions+=7;goto B6c6f4f;
case 0x6c6f52:c.instructions+=6;goto B6c6f52;
case 0x6c6f53:c.instructions+=5;goto B6c6f53;
case 0x6c6f55:c.instructions+=4;goto B6c6f55;
case 0x6c6f56:c.instructions+=3;goto B6c6f56;
case 0x6c6f59:c.instructions+=2;goto B6c6f59;
case 0x6c6f5b:c.instructions+=1;goto B6c6f5b;
case 0x6c6f60:goto L6c6f60;
case 0x6c6f63:c.instructions+=2;goto B6c6f63;
case 0x6c6f66:c.instructions+=1;goto B6c6f66;
case 0x6c6f68:goto L6c6f68;
case 0x6c6f6d:c.instructions+=1;goto B6c6f6d;
case 0x6c6f6f:goto L6c6f6f;
case 0x6c6f71:c.instructions+=2;goto B6c6f71;
case 0x6c6f73:c.instructions+=1;goto B6c6f73;
case 0x6c6f75:goto L6c6f75;
case 0x6c6f77:c.instructions+=2;goto B6c6f77;
case 0x6c6f7a:c.instructions+=1;goto B6c6f7a;
case 0x6c6f7d:goto L6c6f7d;
case 0x6c6f83:c.instructions+=12;goto B6c6f83;
case 0x6c6f86:c.instructions+=11;goto B6c6f86;
case 0x6c6f8d:c.instructions+=10;goto B6c6f8d;
case 0x6c6f90:c.instructions+=9;goto B6c6f90;
case 0x6c6f94:c.instructions+=8;goto B6c6f94;
case 0x6c6f97:c.instructions+=7;goto B6c6f97;
case 0x6c6f9d:c.instructions+=6;goto B6c6f9d;
case 0x6c6fa0:c.instructions+=5;goto B6c6fa0;
case 0x6c6fa3:c.instructions+=4;goto B6c6fa3;
case 0x6c6fa4:c.instructions+=3;goto B6c6fa4;
case 0x6c6fa6:c.instructions+=2;goto B6c6fa6;
case 0x6c6fa9:c.instructions+=1;goto B6c6fa9;
case 0x6c6fab:goto L6c6fab;
case 0x6c6fad:goto L6c6fad;
case 0x6c6fae:c.instructions+=4;goto B6c6fae;
case 0x6c6faf:c.instructions+=3;goto B6c6faf;
case 0x6c6fb0:c.instructions+=2;goto B6c6fb0;
case 0x6c6fb1:c.instructions+=1;goto B6c6fb1;
case 0x6c6fb2:goto L6c6fb2;
case 0x6c6fb4:c.instructions+=20;goto B6c6fb4;
case 0x6c6fb5:c.instructions+=19;goto B6c6fb5;
case 0x6c6fb7:c.instructions+=18;goto B6c6fb7;
case 0x6c6fbd:c.instructions+=17;goto B6c6fbd;
case 0x6c6fbe:c.instructions+=16;goto B6c6fbe;
case 0x6c6fbf:c.instructions+=15;goto B6c6fbf;
case 0x6c6fc1:c.instructions+=14;goto B6c6fc1;
case 0x6c6fc7:c.instructions+=13;goto B6c6fc7;
case 0x6c6fc9:c.instructions+=12;goto B6c6fc9;
case 0x6c6fca:c.instructions+=11;goto B6c6fca;
case 0x6c6fcc:c.instructions+=10;goto B6c6fcc;
case 0x6c6fce:c.instructions+=9;goto B6c6fce;
case 0x6c6fcf:c.instructions+=8;goto B6c6fcf;
case 0x6c6fd4:c.instructions+=7;goto B6c6fd4;
case 0x6c6fd6:c.instructions+=6;goto B6c6fd6;
case 0x6c6fd9:c.instructions+=5;goto B6c6fd9;
case 0x6c6fdc:c.instructions+=4;goto B6c6fdc;
case 0x6c6fdf:c.instructions+=3;goto B6c6fdf;
case 0x6c6fe6:c.instructions+=2;goto B6c6fe6;
case 0x6c6fed:c.instructions+=1;goto B6c6fed;
case 0x6c6fef:goto L6c6fef;
case 0x6c6ff1:c.instructions+=1;goto B6c6ff1;
case 0x6c6ff6:goto L6c6ff6;
case 0x6c6ff7:c.instructions+=4;goto B6c6ff7;
case 0x6c6ff8:c.instructions+=3;goto B6c6ff8;
case 0x6c6ffb:c.instructions+=2;goto B6c6ffb;
case 0x6c6ffc:c.instructions+=1;goto B6c6ffc;
default:missing_instruction(c.pc);}
B6c6000:L6c6000:{c.instructions+=2;NFSU2_TR(0x6c6000);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6003:{NFSU2_TR(0x6c6003);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c60cf;}}
}
B6c6009:L6c6009:{c.instructions+=4;NFSU2_TR(0x6c6009);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c600b:{NFSU2_TR(0x6c600b);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B6c600e:{NFSU2_TR(0x6c600e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6011:{NFSU2_TR(0x6c6011);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c603a;}}
}
B6c6013:L6c6013:{c.instructions+=2;NFSU2_TR(0x6c6013);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6016:{NFSU2_TR(0x6c6016);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c6019:L6c6019:{c.instructions+=6;NFSU2_TR(0x6c6019);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c601c:{NFSU2_TR(0x6c601c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c601f:{NFSU2_TR(0x6c601f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c6022:{NFSU2_TR(0x6c6022);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6025:{NFSU2_TR(0x6c6025);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B6c6027:{NFSU2_TR(0x6c6027);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c602b;}}
}
B6c6029:L6c6029:{c.instructions+=1;NFSU2_TR(0x6c6029);
__builtin_memmove((R+28),(R+4),4);
}
B6c602b:L6c602b:{c.instructions+=3;NFSU2_TR(0x6c602b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c602e:{NFSU2_TR(0x6c602e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c6030:{NFSU2_TR(0x6c6030);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c6034;}}
}
B6c6032:L6c6032:{c.instructions+=1;NFSU2_TR(0x6c6032);
__builtin_memmove((R+12),(R+0),4);
}
B6c6034:L6c6034:{c.instructions+=3;NFSU2_TR(0x6c6034);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c6035:{NFSU2_TR(0x6c6035);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c6038:{NFSU2_TR(0x6c6038);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6019u);}goto L6c6019;}}
}
B6c603a:L6c603a:{c.instructions+=4;NFSU2_TR(0x6c603a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c603d:{NFSU2_TR(0x6c603d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6040:{NFSU2_TR(0x6c6040);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c6042:{NFSU2_TR(0x6c6042);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c61d5;}}
}
B6c6048:L6c6048:{c.instructions+=4;NFSU2_TR(0x6c6048);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c604b:{NFSU2_TR(0x6c604b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c604e:{NFSU2_TR(0x6c604e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6051:{NFSU2_TR(0x6c6051);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6054:L6c6054:{c.instructions+=4;NFSU2_TR(0x6c6054);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6057:{NFSU2_TR(0x6c6057);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c6059:{NFSU2_TR(0x6c6059);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c605c:{NFSU2_TR(0x6c605c);
if(r1(R+518)){{goto L6c60bc;}}
}
B6c605e:L6c605e:{c.instructions+=3;NFSU2_TR(0x6c605e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c6060:{NFSU2_TR(0x6c6060);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6063:{NFSU2_TR(0x6c6063);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c6077;}}
}
B6c6065:L6c6065:{c.instructions+=2;NFSU2_TR(0x6c6065);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff14ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+0))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6c606c:{NFSU2_TR(0x6c606c);
if(r1(R+518)){{goto L6c6074;}}
}
B6c606e:L6c606e:{c.instructions+=3;NFSU2_TR(0x6c606e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c606f:{NFSU2_TR(0x6c606f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6c6072:{NFSU2_TR(0x6c6072);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6065u);}goto L6c6065;}}
}
B6c6074:L6c6074:{c.instructions+=1;NFSU2_TR(0x6c6074);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6077:L6c6077:{c.instructions+=1;NFSU2_TR(0x6c6077);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c60bc;}}
}
B6c6079:L6c6079:{c.instructions+=3;NFSU2_TR(0x6c6079);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c607c:{NFSU2_TR(0x6c607c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c607e:{NFSU2_TR(0x6c607e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c60bc;}}
}
B6c6080:L6c6080:{c.instructions+=4;NFSU2_TR(0x6c6080);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6083:{NFSU2_TR(0x6c6083);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6086:{NFSU2_TR(0x6c6086);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6089:{NFSU2_TR(0x6c6089);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c608c:L6c608c:{c.instructions+=5;NFSU2_TR(0x6c608c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c608e:{NFSU2_TR(0x6c608e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c6091:{NFSU2_TR(0x6c6091);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c6093:{NFSU2_TR(0x6c6093);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6096:{NFSU2_TR(0x6c6096);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c60b4;}}
}
B6c6098:L6c6098:{c.instructions+=4;NFSU2_TR(0x6c6098);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c609b:{NFSU2_TR(0x6c609b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c609e:{NFSU2_TR(0x6c609e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c60a0:{NFSU2_TR(0x6c60a0);
if(r1(R+518)){{goto L6c60a7;}}
}
B6c60a2:L6c60a2:{c.instructions+=2;NFSU2_TR(0x6c60a2);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c60a5:{NFSU2_TR(0x6c60a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c60ae;}}
}
B6c60a7:L6c60a7:{c.instructions+=1;NFSU2_TR(0x6c60a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c60ae:L6c60ae:{c.instructions+=3;NFSU2_TR(0x6c60ae);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c60af:{NFSU2_TR(0x6c60af);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6c60b2:{NFSU2_TR(0x6c60b2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6098u);}goto L6c6098;}}
}
B6c60b4:L6c60b4:{c.instructions+=3;NFSU2_TR(0x6c60b4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c60b7:{NFSU2_TR(0x6c60b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c60ba:{NFSU2_TR(0x6c60ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c608cu);}goto L6c608c;}}
}
B6c60bc:L6c60bc:{c.instructions+=3;NFSU2_TR(0x6c60bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c60c0:{NFSU2_TR(0x6c60c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c60c3:{NFSU2_TR(0x6c60c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6054u);}goto L6c6054;}}
}
B6c60c5:L6c60c5:{c.instructions+=2;NFSU2_TR(0x6c60c5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c60c9:{NFSU2_TR(0x6c60c9);
if(r1(R+518)){{goto L6c61d5;}}
}
B6c60cf:L6c60cf:{c.instructions+=2;NFSU2_TR(0x6c60cf);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c60d1:{NFSU2_TR(0x6c60d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c60d6ull));
TAIL_STATIC(0x699317u,699);
}
B6c60d6:L6c60d6:{c.instructions+=2;NFSU2_TR(0x6c60d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c60d8:{NFSU2_TR(0x6c60d8);
if(r1(R+518)){{goto L6c60e5;}}
}
B6c60da:L6c60da:{c.instructions+=2;NFSU2_TR(0x6c60da);
__builtin_memmove((R+4),(R+0),4);
}
B6c60dc:{NFSU2_TR(0x6c60dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c60e1ull));
TAIL_STATIC(0x698e7du,698);
}
B6c60e1:L6c60e1:{c.instructions+=2;NFSU2_TR(0x6c60e1);
__builtin_memmove((R+12),(R+0),4);
}
B6c60e3:{NFSU2_TR(0x6c60e3);
{goto L6c60e7;}
}
B6c60e5:L6c60e5:{c.instructions+=1;NFSU2_TR(0x6c60e5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c60e7:L6c60e7:{c.instructions+=2;NFSU2_TR(0x6c60e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c60e9:{NFSU2_TR(0x6c60e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c60f3;}}
}
B6c60eb:L6c60eb:{c.instructions+=3;NFSU2_TR(0x6c60eb);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c60ed:{NFSU2_TR(0x6c60ed);
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
B6c60ee:{NFSU2_TR(0x6c60ee);
{goto L6c6287;}
}
B6c60f3:L6c60f3:{c.instructions+=9;NFSU2_TR(0x6c60f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c60f6:{NFSU2_TR(0x6c60f6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c60f8:{NFSU2_TR(0x6c60f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c60fb:{NFSU2_TR(0x6c60fb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c6100:{NFSU2_TR(0x6c6100);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c6103:{NFSU2_TR(0x6c6103);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6c6108:{NFSU2_TR(0x6c6108);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6109:{NFSU2_TR(0x6c6109);
__builtin_memmove((R+4),(R+12),4);
}
B6c610b:{NFSU2_TR(0x6c610b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6110ull));
TAIL_STATIC(0x699362u,699);
}
B6c6110:L6c6110:{c.instructions+=4;NFSU2_TR(0x6c6110);
__builtin_memmove((R+24),(R+0),4);
}
B6c6112:{NFSU2_TR(0x6c6112);
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
B6c6114:{NFSU2_TR(0x6c6114);
__builtin_memmove((R+4),(R+12),4);
}
B6c6116:{NFSU2_TR(0x6c6116);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c612e;}}
}
B6c6118:L6c6118:{c.instructions+=3;NFSU2_TR(0x6c6118);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c611b:{NFSU2_TR(0x6c611b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c6121:{NFSU2_TR(0x6c6121);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6126ull));
TAIL_STATIC(0x698eb3u,698);
}
B6c6126:L6c6126:{c.instructions+=3;NFSU2_TR(0x6c6126);
__builtin_memmove((R+24),(R+0),4);
}
B6c6128:{NFSU2_TR(0x6c6128);
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
B6c612a:{NFSU2_TR(0x6c612a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6c613c;}}
}
B6c612c:L6c612c:{c.instructions+=1;NFSU2_TR(0x6c612c);
__builtin_memmove((R+4),(R+12),4);
}
B6c612e:L6c612e:{c.instructions+=2;NFSU2_TR(0x6c612e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6130:{NFSU2_TR(0x6c6130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6135ull));
TAIL_STATIC(0x6739efu,673);
}
B6c6135:L6c6135:{c.instructions+=2;NFSU2_TR(0x6c6135);
__builtin_memmove((R+0),(R+24),4);
}
B6c6137:{NFSU2_TR(0x6c6137);
{goto L6c6287;}
}
B6c613c:L6c613c:{c.instructions+=7;NFSU2_TR(0x6c613c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c613f:{NFSU2_TR(0x6c613f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c6142:{NFSU2_TR(0x6c6142);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c6145:{NFSU2_TR(0x6c6145);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c6148:{NFSU2_TR(0x6c6148);
__builtin_memmove((R+4),(R+0),4);
}
B6c614a:{NFSU2_TR(0x6c614a);
__builtin_memmove((R+8),(R+4),4);
}
B6c614c:{NFSU2_TR(0x6c614c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c614f:L6c614f:{c.instructions+=1;NFSU2_TR(0x6c614f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c6151;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c614fu);}goto L6c614f;}
}
B6c6151:L6c6151:{c.instructions+=2;NFSU2_TR(0x6c6151);
__builtin_memmove((R+4),(R+8),4);
}
B6c6153:{NFSU2_TR(0x6c6153);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c6156:L6c6156:{c.instructions+=1;NFSU2_TR(0x6c6156);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c6158;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6156u);}goto L6c6156;}
}
B6c6158:L6c6158:{c.instructions+=7;NFSU2_TR(0x6c6158);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c615b:{NFSU2_TR(0x6c615b);
__builtin_memmove((R+4),(R+0),4);
}
B6c615d:{NFSU2_TR(0x6c615d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6160:{NFSU2_TR(0x6c6160);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6166:{NFSU2_TR(0x6c6166);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c6169:{NFSU2_TR(0x6c6169);
__builtin_memmove((R+8),(R+4),4);
}
B6c616b:{NFSU2_TR(0x6c616b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c616e:L6c616e:{c.instructions+=1;NFSU2_TR(0x6c616e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c6170;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c616eu);}goto L6c616e;}
}
B6c6170:L6c6170:{c.instructions+=2;NFSU2_TR(0x6c6170);
__builtin_memmove((R+4),(R+8),4);
}
B6c6172:{NFSU2_TR(0x6c6172);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c6175:L6c6175:{c.instructions+=1;NFSU2_TR(0x6c6175);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c6177;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6175u);}goto L6c6175;}
}
B6c6177:L6c6177:{c.instructions+=4;NFSU2_TR(0x6c6177);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c6179:{NFSU2_TR(0x6c6179);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c617b:{NFSU2_TR(0x6c617b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c617e:{NFSU2_TR(0x6c617e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c6196;}}
}
B6c6180:L6c6180:{c.instructions+=8;NFSU2_TR(0x6c6180);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6183:{NFSU2_TR(0x6c6183);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c6186:{NFSU2_TR(0x6c6186);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c6189:{NFSU2_TR(0x6c6189);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c618c:{NFSU2_TR(0x6c618c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x2ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6c6190:{NFSU2_TR(0x6c6190);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c6191:{NFSU2_TR(0x6c6191);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c6194:{NFSU2_TR(0x6c6194);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6180u);}goto L6c6180;}}
}
B6c6196:L6c6196:{c.instructions+=3;NFSU2_TR(0x6c6196);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c6198:{NFSU2_TR(0x6c6198);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c619b:{NFSU2_TR(0x6c619b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c61ac;}}
}
B6c619d:L6c619d:{c.instructions+=5;NFSU2_TR(0x6c619d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff14ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c61a4:{NFSU2_TR(0x6c61a4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c61a5:{NFSU2_TR(0x6c61a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6c61a8:{NFSU2_TR(0x6c61a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6c61aa:{NFSU2_TR(0x6c61aa);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c619du);}goto L6c619d;}}
}
B6c61ac:L6c61ac:{c.instructions+=6;NFSU2_TR(0x6c61ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c61af:{NFSU2_TR(0x6c61af);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c61b5:{NFSU2_TR(0x6c61b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c61b7:{NFSU2_TR(0x6c61b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c61ba:{NFSU2_TR(0x6c61ba);
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
B6c61bc:{NFSU2_TR(0x6c61bc);
if(r1(R+518)){{goto L6c61c8;}}
}
B6c61be:L6c61be:{c.instructions+=2;NFSU2_TR(0x6c61be);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c61c0:{NFSU2_TR(0x6c61c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c61c5ull));
TAIL_STATIC(0x6739efu,673);
}
B6c61c5:L6c61c5:{c.instructions+=1;NFSU2_TR(0x6c61c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c61c8:L6c61c8:{c.instructions+=4;NFSU2_TR(0x6c61c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c61ca:{NFSU2_TR(0x6c61ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c61cd:{NFSU2_TR(0x6c61cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c61d0:{NFSU2_TR(0x6c61d0);
{goto L6c6285;}
}
B6c61d5:L6c61d5:{c.instructions+=4;NFSU2_TR(0x6c61d5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c61d7:{NFSU2_TR(0x6c61d7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c61da:{NFSU2_TR(0x6c61da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c61dd:{NFSU2_TR(0x6c61dd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c626e;}}
}
B6c61e3:L6c61e3:{c.instructions+=1;NFSU2_TR(0x6c61e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c61e6:L6c61e6:{c.instructions+=10;NFSU2_TR(0x6c61e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c61e9:{NFSU2_TR(0x6c61e9);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c61ed:{NFSU2_TR(0x6c61ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c61f0:{NFSU2_TR(0x6c61f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c61f6:{NFSU2_TR(0x6c61f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c61f9:{NFSU2_TR(0x6c61f9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c61fb:{NFSU2_TR(0x6c61fb);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c61fd:{NFSU2_TR(0x6c61fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6200:{NFSU2_TR(0x6c6200);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6203:{NFSU2_TR(0x6c6203);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c625e;}}
}
B6c6205:L6c6205:{c.instructions+=4;NFSU2_TR(0x6c6205);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c6207:{NFSU2_TR(0x6c6207);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c620a:{NFSU2_TR(0x6c620a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c620d:{NFSU2_TR(0x6c620d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c6252;}}
}
B6c620f:L6c620f:{c.instructions+=2;NFSU2_TR(0x6c620f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6212:{NFSU2_TR(0x6c6212);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6c6215:L6c6215:{c.instructions+=4;NFSU2_TR(0x6c6215);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6218:{NFSU2_TR(0x6c6218);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c621b:{NFSU2_TR(0x6c621b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+4))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c621d:{NFSU2_TR(0x6c621d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6249;}}
}
B6c621f:L6c621f:{c.instructions+=13;NFSU2_TR(0x6c621f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6225:{NFSU2_TR(0x6c6225);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6228:{NFSU2_TR(0x6c6228);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c622b:{NFSU2_TR(0x6c622b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c622e:{NFSU2_TR(0x6c622e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c6231:{NFSU2_TR(0x6c6231);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c6234:{NFSU2_TR(0x6c6234);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c6237:{NFSU2_TR(0x6c6237);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c623a:{NFSU2_TR(0x6c623a);
__builtin_memmove((R+28),(R+12),4);
}
B6c623c:{NFSU2_TR(0x6c623c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c623f:{NFSU2_TR(0x6c623f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c6242:{NFSU2_TR(0x6c6242);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c6245:{NFSU2_TR(0x6c6245);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x2ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6c6249:L6c6249:{c.instructions+=4;NFSU2_TR(0x6c6249);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c624a:{NFSU2_TR(0x6c624a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c624d:{NFSU2_TR(0x6c624d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6250:{NFSU2_TR(0x6c6250);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6215u);}goto L6c6215;}}
}
B6c6252:L6c6252:{c.instructions+=5;NFSU2_TR(0x6c6252);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c6255:{NFSU2_TR(0x6c6255);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c6256:{NFSU2_TR(0x6c6256);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6c6259:{NFSU2_TR(0x6c6259);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c625c:{NFSU2_TR(0x6c625c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6205u);}goto L6c6205;}}
}
B6c625e:L6c625e:{c.instructions+=5;NFSU2_TR(0x6c625e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6261:{NFSU2_TR(0x6c6261);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c6262:{NFSU2_TR(0x6c6262);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c6265:{NFSU2_TR(0x6c6265);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6268:{NFSU2_TR(0x6c6268);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c61e6u);}goto L6c61e6;}}
}
B6c626e:L6c626e:{c.instructions+=3;NFSU2_TR(0x6c626e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c6270:{NFSU2_TR(0x6c6270);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6273:{NFSU2_TR(0x6c6273);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c6285;}}
}
B6c6275:L6c6275:{c.instructions+=5;NFSU2_TR(0x6c6275);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff14ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c627c:{NFSU2_TR(0x6c627c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6c627f:{NFSU2_TR(0x6c627f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c6280:{NFSU2_TR(0x6c6280);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c6283:{NFSU2_TR(0x6c6283);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6275u);}goto L6c6275;}}
}
B6c6285:L6c6285:{c.instructions+=1;NFSU2_TR(0x6c6285);
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
B6c6287:L6c6287:{c.instructions+=5;NFSU2_TR(0x6c6287);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c6288:{NFSU2_TR(0x6c6288);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c6289:{NFSU2_TR(0x6c6289);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c628a:{NFSU2_TR(0x6c628a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c628b:{NFSU2_TR(0x6c628b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c628c:L6c628c:{c.instructions+=7;NFSU2_TR(0x6c628c);
__builtin_memmove((R+28),(R+28),4);
}
B6c628e:{NFSU2_TR(0x6c628e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c628f:{NFSU2_TR(0x6c628f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6290:{NFSU2_TR(0x6c6290);
__builtin_memmove((R+28),(R+4),4);
}
B6c6292:{NFSU2_TR(0x6c6292);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c6294:{NFSU2_TR(0x6c6294);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6297:{NFSU2_TR(0x6c6297);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c62d8;}}
}
B6c6299:L6c6299:{c.instructions+=1;NFSU2_TR(0x6c6299);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c629a:L6c629a:{c.instructions+=5;NFSU2_TR(0x6c629a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c629d:{NFSU2_TR(0x6c629d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c62a0:{NFSU2_TR(0x6c62a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c62a3:{NFSU2_TR(0x6c62a3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c62a6:{NFSU2_TR(0x6c62a6);
if(r1(R+518)){{goto L6c62d1;}}
}
B6c62a8:L6c62a8:{c.instructions+=3;NFSU2_TR(0x6c62a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c62ab:{NFSU2_TR(0x6c62ab);
__builtin_memmove((R+8),(R+24),4);
}
B6c62ad:{NFSU2_TR(0x6c62ad);
{goto L6c62be;}
}
B6c62af:L6c62af:{c.instructions+=5;NFSU2_TR(0x6c62af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c62b2:{NFSU2_TR(0x6c62b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c62b5:{NFSU2_TR(0x6c62b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c62b8:{NFSU2_TR(0x6c62b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c62bb:{NFSU2_TR(0x6c62bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c62be:L6c62be:{c.instructions+=2;NFSU2_TR(0x6c62be);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c62c2:{NFSU2_TR(0x6c62c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c62afu);}goto L6c62af;}}
}
B6c62c4:L6c62c4:{c.instructions+=2;NFSU2_TR(0x6c62c4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c62c6:{NFSU2_TR(0x6c62c6);
if(r1(R+518)){{goto L6c62d1;}}
}
B6c62c8:L6c62c8:{c.instructions+=3;NFSU2_TR(0x6c62c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c62c9:{NFSU2_TR(0x6c62c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c62cc:{NFSU2_TR(0x6c62cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c62d1ull));
TAIL_STATIC(0x699821u,699);
}
B6c62d1:L6c62d1:{c.instructions+=3;NFSU2_TR(0x6c62d1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6c62d2:{NFSU2_TR(0x6c62d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6c62d5:{NFSU2_TR(0x6c62d5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c629au);}goto L6c629a;}}
}
B6c62d7:L6c62d7:{c.instructions+=1;NFSU2_TR(0x6c62d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c62d8:L6c62d8:{c.instructions+=4;NFSU2_TR(0x6c62d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c62d9:{NFSU2_TR(0x6c62d9);
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
B6c62db:{NFSU2_TR(0x6c62db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c62dc:{NFSU2_TR(0x6c62dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c62dd:L6c62dd:{c.instructions+=12;NFSU2_TR(0x6c62dd);
__builtin_memmove((R+28),(R+28),4);
}
B6c62df:{NFSU2_TR(0x6c62df);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c62e0:{NFSU2_TR(0x6c62e0);
__builtin_memmove((R+20),(R+16),4);
}
B6c62e2:{NFSU2_TR(0x6c62e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B6c62e5:{NFSU2_TR(0x6c62e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c62e6:{NFSU2_TR(0x6c62e6);
__builtin_memmove((R+28),(R+4),4);
}
B6c62e8:{NFSU2_TR(0x6c62e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c62ee:{NFSU2_TR(0x6c62ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c62f0:{NFSU2_TR(0x6c62f0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6c62f6:{NFSU2_TR(0x6c62f6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c62fc:{NFSU2_TR(0x6c62fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c62ff:{NFSU2_TR(0x6c62ff);
if(r1(R+518)){{goto L6c6321;}}
}
B6c6301:L6c6301:{c.instructions+=2;NFSU2_TR(0x6c6301);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c6307:{NFSU2_TR(0x6c6307);
if(r1(R+518)){{goto L6c6321;}}
}
B6c6309:L6c6309:{c.instructions+=2;NFSU2_TR(0x6c6309);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10600000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c630f:{NFSU2_TR(0x6c630f);
if(r1(R+518)){{goto L6c6321;}}
}
B6c6311:L6c6311:{c.instructions+=2;NFSU2_TR(0x6c6311);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c6317:{NFSU2_TR(0x6c6317);
if(r1(R+518)){{goto L6c6321;}}
}
B6c6319:L6c6319:{c.instructions+=2;NFSU2_TR(0x6c6319);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c631f:{NFSU2_TR(0x6c631f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6341;}}
}
B6c6321:L6c6321:{c.instructions+=2;NFSU2_TR(0x6c6321);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6325:{NFSU2_TR(0x6c6325);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6341;}}
}
B6c6327:L6c6327:{c.instructions+=9;NFSU2_TR(0x6c6327);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c632a:{NFSU2_TR(0x6c632a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c632c:{NFSU2_TR(0x6c632c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c632f:{NFSU2_TR(0x6c632f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6333:{NFSU2_TR(0x6c6333);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6336:{NFSU2_TR(0x6c6336);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c6339:{NFSU2_TR(0x6c6339);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c633c:{NFSU2_TR(0x6c633c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c633f:{NFSU2_TR(0x6c633f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6349;}}
}
B6c6341:L6c6341:{c.instructions+=3;NFSU2_TR(0x6c6341);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c6343:{NFSU2_TR(0x6c6343);
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
B6c6344:{NFSU2_TR(0x6c6344);
{goto L6c659b;}
}
B6c6349:L6c6349:{c.instructions+=9;NFSU2_TR(0x6c6349);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c634d:{NFSU2_TR(0x6c634d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c634e:{NFSU2_TR(0x6c634e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c634f:{NFSU2_TR(0x6c634f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c6352:{NFSU2_TR(0x6c6352);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c6355:{NFSU2_TR(0x6c6355);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6358:{NFSU2_TR(0x6c6358);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c635a:{NFSU2_TR(0x6c635a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c635d:{NFSU2_TR(0x6c635d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c637d;}}
}
B6c635f:L6c635f:{c.instructions+=2;NFSU2_TR(0x6c635f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c6362:{NFSU2_TR(0x6c6362);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6365:L6c6365:{c.instructions+=5;NFSU2_TR(0x6c6365);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c6367:{NFSU2_TR(0x6c6367);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c636a:{NFSU2_TR(0x6c636a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c636d:{NFSU2_TR(0x6c636d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6370:{NFSU2_TR(0x6c6370);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c6375;}}
}
B6c6372:L6c6372:{c.instructions+=1;NFSU2_TR(0x6c6372);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6375:L6c6375:{c.instructions+=3;NFSU2_TR(0x6c6375);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6c6378:{NFSU2_TR(0x6c6378);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c637b:{NFSU2_TR(0x6c637b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6365u);}goto L6c6365;}}
}
B6c637d:L6c637d:{c.instructions+=7;NFSU2_TR(0x6c637d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6380:{NFSU2_TR(0x6c6380);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c6382:{NFSU2_TR(0x6c6382);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c6385:{NFSU2_TR(0x6c6385);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c6388:{NFSU2_TR(0x6c6388);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c638b:{NFSU2_TR(0x6c638b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c638e:{NFSU2_TR(0x6c638e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c63af;}}
}
B6c6390:L6c6390:{c.instructions+=3;NFSU2_TR(0x6c6390);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c6393:{NFSU2_TR(0x6c6393);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6396:{NFSU2_TR(0x6c6396);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c63af;}}
}
B6c6398:L6c6398:{c.instructions+=3;NFSU2_TR(0x6c6398);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c639b:{NFSU2_TR(0x6c639b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c639e:{NFSU2_TR(0x6c639e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c63af;}}
}
B6c63a0:L6c63a0:{c.instructions+=3;NFSU2_TR(0x6c63a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c63a3:{NFSU2_TR(0x6c63a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c63a6:{NFSU2_TR(0x6c63a6);
if(r1(R+518)){{goto L6c63af;}}
}
B6c63a8:L6c63a8:{c.instructions+=1;NFSU2_TR(0x6c63a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c63af:L6c63af:{c.instructions+=3;NFSU2_TR(0x6c63af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c63b2:{NFSU2_TR(0x6c63b2);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c63b8:{NFSU2_TR(0x6c63b8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6c642d;}}
}
B6c63ba:L6c63ba:{c.instructions+=3;NFSU2_TR(0x6c63ba);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c63bc:{NFSU2_TR(0x6c63bc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c63bf:{NFSU2_TR(0x6c63bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c63c9;}}
}
B6c63c1:L6c63c1:{c.instructions+=3;NFSU2_TR(0x6c63c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c63c4:{NFSU2_TR(0x6c63c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c63c7:{NFSU2_TR(0x6c63c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c642d;}}
}
B6c63c9:L6c63c9:{c.instructions+=2;NFSU2_TR(0x6c63c9);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c63cd:{NFSU2_TR(0x6c63cd);
if(r1(R+518)){{goto L6c63e7;}}
}
B6c63cf:L6c63cf:{c.instructions+=2;NFSU2_TR(0x6c63cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c63d2:{NFSU2_TR(0x6c63d2);
if(r1(R+518)){{goto L6c642d;}}
}
B6c63d4:L6c63d4:{c.instructions+=6;NFSU2_TR(0x6c63d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c63d7:{NFSU2_TR(0x6c63d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c63d9:{NFSU2_TR(0x6c63d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c63dc:{NFSU2_TR(0x6c63dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c63df:{NFSU2_TR(0x6c63df);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c63e5:{NFSU2_TR(0x6c63e5);
if(r1(R+518)){{goto L6c642d;}}
}
B6c63e7:L6c63e7:{c.instructions+=4;NFSU2_TR(0x6c63e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c63e9:{NFSU2_TR(0x6c63e9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6c63ee:{NFSU2_TR(0x6c63ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c63f3:{NFSU2_TR(0x6c63f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c642d;}}
}
B6c63f5:L6c63f5:{c.instructions+=5;NFSU2_TR(0x6c63f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c63f8:{NFSU2_TR(0x6c63f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c63fb:{NFSU2_TR(0x6c63fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c63fe:{NFSU2_TR(0x6c63fe);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c6402:{NFSU2_TR(0x6c6402);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c642d;}}
}
B6c6404:L6c6404:{c.instructions+=3;NFSU2_TR(0x6c6404);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c6406:{NFSU2_TR(0x6c6406);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6409:{NFSU2_TR(0x6c6409);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c641e;}}
}
B6c640b:L6c640b:{c.instructions+=1;NFSU2_TR(0x6c640b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c640e:L6c640e:{c.instructions+=3;NFSU2_TR(0x6c640e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6c6410:{NFSU2_TR(0x6c6410);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6413:{NFSU2_TR(0x6c6413);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c642d;}}
}
B6c6415:L6c6415:{c.instructions+=4;NFSU2_TR(0x6c6415);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c6416:{NFSU2_TR(0x6c6416);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c6419:{NFSU2_TR(0x6c6419);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c641c:{NFSU2_TR(0x6c641c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c640eu);}goto L6c640e;}}
}
B6c641e:L6c641e:{c.instructions+=6;NFSU2_TR(0x6c641e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6421:{NFSU2_TR(0x6c6421);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c6423:{NFSU2_TR(0x6c6423);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c6426:{NFSU2_TR(0x6c6426);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c6428:{NFSU2_TR(0x6c6428);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c642b:{NFSU2_TR(0x6c642b);
if(r1(R+518)){{goto L6c6435;}}
}
B6c642d:L6c642d:{c.instructions+=3;NFSU2_TR(0x6c642d);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c642f:{NFSU2_TR(0x6c642f);
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
B6c6430:{NFSU2_TR(0x6c6430);
{goto L6c6599;}
}
B6c6435:L6c6435:{c.instructions+=2;NFSU2_TR(0x6c6435);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6437:{NFSU2_TR(0x6c6437);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c643cull));
TAIL_STATIC(0x699317u,699);
}
B6c643c:L6c643c:{c.instructions+=2;NFSU2_TR(0x6c643c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c643e:{NFSU2_TR(0x6c643e);
if(r1(R+518)){{goto L6c6449;}}
}
B6c6440:L6c6440:{c.instructions+=2;NFSU2_TR(0x6c6440);
__builtin_memmove((R+4),(R+0),4);
}
B6c6442:{NFSU2_TR(0x6c6442);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6447ull));
TAIL_STATIC(0x698e7du,698);
}
B6c6447:L6c6447:{c.instructions+=1;NFSU2_TR(0x6c6447);
__builtin_memmove((R+12),(R+0),4);
}
B6c6449:L6c6449:{c.instructions+=2;NFSU2_TR(0x6c6449);
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
B6c644b:{NFSU2_TR(0x6c644b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6457;}}
}
B6c644d:L6c644d:{c.instructions+=2;NFSU2_TR(0x6c644d);
w4(R+0,u32(0x8007000eull));
}
B6c6452:{NFSU2_TR(0x6c6452);
{goto L6c6599;}
}
B6c6457:L6c6457:{c.instructions+=11;NFSU2_TR(0x6c6457);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c645d:{NFSU2_TR(0x6c645d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c645f:{NFSU2_TR(0x6c645f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6462:{NFSU2_TR(0x6c6462);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6464:{NFSU2_TR(0x6c6464);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B6c6467:{NFSU2_TR(0x6c6467);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6c646a:{NFSU2_TR(0x6c646a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c646b:{NFSU2_TR(0x6c646b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c646e:{NFSU2_TR(0x6c646e);
__builtin_memmove((R+4),(R+12),4);
}
B6c6470:{NFSU2_TR(0x6c6470);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6c6472:{NFSU2_TR(0x6c6472);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6477ull));
TAIL_STATIC(0x699362u,699);
}
B6c6477:L6c6477:{c.instructions+=3;NFSU2_TR(0x6c6477);
__builtin_memmove((R+28),(R+0),4);
}
B6c6479:{NFSU2_TR(0x6c6479);
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
B6c647b:{NFSU2_TR(0x6c647b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6c648d;}}
}
B6c647d:L6c647d:{c.instructions+=3;NFSU2_TR(0x6c647d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c647f:{NFSU2_TR(0x6c647f);
__builtin_memmove((R+4),(R+12),4);
}
B6c6481:{NFSU2_TR(0x6c6481);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6486ull));
TAIL_STATIC(0x6739efu,673);
}
B6c6486:L6c6486:{c.instructions+=2;NFSU2_TR(0x6c6486);
__builtin_memmove((R+0),(R+28),4);
}
B6c6488:{NFSU2_TR(0x6c6488);
{goto L6c6599;}
}
B6c648d:L6c648d:{c.instructions+=6;NFSU2_TR(0x6c648d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6490:{NFSU2_TR(0x6c6490);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c6493:{NFSU2_TR(0x6c6493);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c6496:{NFSU2_TR(0x6c6496);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c6499:{NFSU2_TR(0x6c6499);
__builtin_memmove((R+0),(R+4),4);
}
B6c649b:{NFSU2_TR(0x6c649b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c649e:L6c649e:{c.instructions+=1;NFSU2_TR(0x6c649e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c64a0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c649eu);}goto L6c649e;}
}
B6c64a0:L6c64a0:{c.instructions+=4;NFSU2_TR(0x6c64a0);
__builtin_memmove((R+4),(R+0),4);
}
B6c64a2:{NFSU2_TR(0x6c64a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c64a5:{NFSU2_TR(0x6c64a5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c64a8:{NFSU2_TR(0x6c64a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c64ac:L6c64ac:{c.instructions+=1;NFSU2_TR(0x6c64ac);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c64ae;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c64acu);}goto L6c64ac;}
}
B6c64ae:L6c64ae:{c.instructions+=1;NFSU2_TR(0x6c64ae);
if(r1(R+518)){{goto L6c64c7;}}
}
B6c64b0:L6c64b0:{c.instructions+=7;NFSU2_TR(0x6c64b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c64b6:{NFSU2_TR(0x6c64b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c64b9:{NFSU2_TR(0x6c64b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c64bc:{NFSU2_TR(0x6c64bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c64bf:{NFSU2_TR(0x6c64bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c64c2:{NFSU2_TR(0x6c64c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c64c4:{NFSU2_TR(0x6c64c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c64c7:L6c64c7:{c.instructions+=4;NFSU2_TR(0x6c64c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c64ca:{NFSU2_TR(0x6c64ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c64ce:{NFSU2_TR(0x6c64ce);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c64d0:{NFSU2_TR(0x6c64d0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c654b;}}
}
B6c64d2:L6c64d2:{c.instructions+=1;NFSU2_TR(0x6c64d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c64d9:L6c64d9:{c.instructions+=4;NFSU2_TR(0x6c64d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c64dc:{NFSU2_TR(0x6c64dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6c64de:{NFSU2_TR(0x6c64de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c64e1:{NFSU2_TR(0x6c64e1);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c653d;}}
}
B6c64e3:L6c64e3:{c.instructions+=13;NFSU2_TR(0x6c64e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c64e6:{NFSU2_TR(0x6c64e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c64e9:{NFSU2_TR(0x6c64e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c64ec:{NFSU2_TR(0x6c64ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c64ef:{NFSU2_TR(0x6c64ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c64f2:{NFSU2_TR(0x6c64f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c64f5:{NFSU2_TR(0x6c64f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6c64f8:{NFSU2_TR(0x6c64f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c64fb:{NFSU2_TR(0x6c64fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c64fe:{NFSU2_TR(0x6c64fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6501:{NFSU2_TR(0x6c6501);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6504:{NFSU2_TR(0x6c6504);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6507:{NFSU2_TR(0x6c6507);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c652a;}}
}
B6c6509:L6c6509:{c.instructions+=12;NFSU2_TR(0x6c6509);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c650c:{NFSU2_TR(0x6c650c);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B6c650e:{NFSU2_TR(0x6c650e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c6510:{NFSU2_TR(0x6c6510);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6513:{NFSU2_TR(0x6c6513);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6516:{NFSU2_TR(0x6c6516);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c6519:{NFSU2_TR(0x6c6519);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c651c:{NFSU2_TR(0x6c651c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6c651e:{NFSU2_TR(0x6c651e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6521:{NFSU2_TR(0x6c6521);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c6524:{NFSU2_TR(0x6c6524);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c6527:{NFSU2_TR(0x6c6527);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c652a:L6c652a:{c.instructions+=3;NFSU2_TR(0x6c652a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c652d:{NFSU2_TR(0x6c652d);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6530:{NFSU2_TR(0x6c6530);
if(r1(R+518)){{goto L6c659e;}}
}
B6c6532:L6c6532:{c.instructions+=4;NFSU2_TR(0x6c6532);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6535:{NFSU2_TR(0x6c6535);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6538:{NFSU2_TR(0x6c6538);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6c653b:{NFSU2_TR(0x6c653b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c64e3u);}goto L6c64e3;}}
}
B6c653d:L6c653d:{c.instructions+=5;NFSU2_TR(0x6c653d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6540:{NFSU2_TR(0x6c6540);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6543:{NFSU2_TR(0x6c6543);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6546:{NFSU2_TR(0x6c6546);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B6c6549:{NFSU2_TR(0x6c6549);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c64d9u);}goto L6c64d9;}}
}
B6c654b:L6c654b:{c.instructions+=7;NFSU2_TR(0x6c654b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6551:{NFSU2_TR(0x6c6551);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6554:{NFSU2_TR(0x6c6554);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c6557:{NFSU2_TR(0x6c6557);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c655a:{NFSU2_TR(0x6c655a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c655d:{NFSU2_TR(0x6c655d);
__builtin_memmove((R+8),(R+4),4);
}
B6c655f:{NFSU2_TR(0x6c655f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c6562:L6c6562:{c.instructions+=1;NFSU2_TR(0x6c6562);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c6564;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6562u);}goto L6c6562;}
}
B6c6564:L6c6564:{c.instructions+=2;NFSU2_TR(0x6c6564);
__builtin_memmove((R+4),(R+8),4);
}
B6c6566:{NFSU2_TR(0x6c6566);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c6569:L6c6569:{c.instructions+=1;NFSU2_TR(0x6c6569);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c656b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6569u);}goto L6c6569;}
}
B6c656b:L6c656b:{c.instructions+=5;NFSU2_TR(0x6c656b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6571:{NFSU2_TR(0x6c6571);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6574:{NFSU2_TR(0x6c6574);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c6577:{NFSU2_TR(0x6c6577);
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
B6c6579:{NFSU2_TR(0x6c6579);
if(r1(R+518)){{goto L6c6585;}}
}
B6c657b:L6c657b:{c.instructions+=2;NFSU2_TR(0x6c657b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c657d:{NFSU2_TR(0x6c657d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6582ull));
TAIL_STATIC(0x6739efu,673);
}
B6c6582:L6c6582:{c.instructions+=1;NFSU2_TR(0x6c6582);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6585:L6c6585:{c.instructions+=6;NFSU2_TR(0x6c6585);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c658b:{NFSU2_TR(0x6c658b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c658e:{NFSU2_TR(0x6c658e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c6591:{NFSU2_TR(0x6c6591);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6594:{NFSU2_TR(0x6c6594);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6c6597:{NFSU2_TR(0x6c6597);
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
B6c6599:L6c6599:{c.instructions+=2;NFSU2_TR(0x6c6599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c659a:{NFSU2_TR(0x6c659a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c659b:L6c659b:{c.instructions+=3;NFSU2_TR(0x6c659b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c659c:{NFSU2_TR(0x6c659c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c659d:{NFSU2_TR(0x6c659d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c659e:L6c659e:{c.instructions+=6;NFSU2_TR(0x6c659e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c65a4:{NFSU2_TR(0x6c65a4);
u8 U[4];
w4(U+0,u32(0x7bd29cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c65a9:{NFSU2_TR(0x6c65a9);
u8 U[4];
w4(U+0,u32(0x12d6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c65ae:{NFSU2_TR(0x6c65ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c65b1:{NFSU2_TR(0x6c65b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c65b2:{NFSU2_TR(0x6c65b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c65b7ull));
TAIL_STATIC(0x69e936u,69e);
}
B6c65b7:L6c65b7:{c.instructions+=4;NFSU2_TR(0x6c65b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c65ba:{NFSU2_TR(0x6c65ba);
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
B6c65bd:{NFSU2_TR(0x6c65bd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c65bf:{NFSU2_TR(0x6c65bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c65c4ull));
TAIL_STATIC(0x6739efu,673);
}
B6c65c4:L6c65c4:{c.instructions+=2;NFSU2_TR(0x6c65c4);
w4(R+0,u32(0x80004005ull));
}
B6c65c9:{NFSU2_TR(0x6c65c9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6599u);}goto L6c6599;}
}
B6c65cb:L6c65cb:{c.instructions+=33;NFSU2_TR(0x6c65cb);
__builtin_memmove((R+28),(R+28),4);
}
B6c65cd:{NFSU2_TR(0x6c65cd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c65ce:{NFSU2_TR(0x6c65ce);
__builtin_memmove((R+20),(R+16),4);
}
B6c65d0:{NFSU2_TR(0x6c65d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x110ull))));
}
B6c65d6:{NFSU2_TR(0x6c65d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c65d7:{NFSU2_TR(0x6c65d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c65d8:{NFSU2_TR(0x6c65d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c65d9:{NFSU2_TR(0x6c65d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c65dd:{NFSU2_TR(0x6c65dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c65e1:{NFSU2_TR(0x6c65e1);
__builtin_memmove((R+24),(R+4),4);
}
B6c65e3:{NFSU2_TR(0x6c65e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c65e9:{NFSU2_TR(0x6c65e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6c65eb:{NFSU2_TR(0x6c65eb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c65ed:{NFSU2_TR(0x6c65ed);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c65ee:{NFSU2_TR(0x6c65ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c65ef:{NFSU2_TR(0x6c65ef);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffull))));
}
B6c65f5:{NFSU2_TR(0x6c65f5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c65f6:{NFSU2_TR(0x6c65f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c65f9:{NFSU2_TR(0x6c65f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c65fa:{NFSU2_TR(0x6c65fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c6600:{NFSU2_TR(0x6c6600);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6601:{NFSU2_TR(0x6c6601);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c6604:{NFSU2_TR(0x6c6604);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6605:{NFSU2_TR(0x6c6605);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c660b:{NFSU2_TR(0x6c660b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c660c:{NFSU2_TR(0x6c660c);
u8 U[4];
w4(U+0,u32(0x7bdf80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6611:{NFSU2_TR(0x6c6611);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6612:{NFSU2_TR(0x6c6612);
__builtin_memmove((R+4),(R+24),4);
}
B6c6614:{NFSU2_TR(0x6c6614);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6617:{NFSU2_TR(0x6c6617);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c661a:{NFSU2_TR(0x6c661a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6621:{NFSU2_TR(0x6c6621);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6628:{NFSU2_TR(0x6c6628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c662dull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c662d:L6c662d:{c.instructions+=2;NFSU2_TR(0x6c662d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c662f:{NFSU2_TR(0x6c662f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c666e;}}
}
B6c6631:L6c6631:{c.instructions+=2;NFSU2_TR(0x6c6631);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6633:{NFSU2_TR(0x6c6633);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6638ull));
TAIL_STATIC(0x699317u,699);
}
B6c6638:L6c6638:{c.instructions+=2;NFSU2_TR(0x6c6638);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c663a:{NFSU2_TR(0x6c663a);
if(r1(R+518)){{goto L6c664a;}}
}
B6c663c:L6c663c:{c.instructions+=2;NFSU2_TR(0x6c663c);
__builtin_memmove((R+4),(R+0),4);
}
B6c663e:{NFSU2_TR(0x6c663e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6643ull));
TAIL_STATIC(0x698e7du,698);
}
B6c6643:L6c6643:{c.instructions+=3;NFSU2_TR(0x6c6643);
__builtin_memmove((R+28),(R+0),4);
}
B6c6645:{NFSU2_TR(0x6c6645);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6648:{NFSU2_TR(0x6c6648);
{goto L6c6651;}
}
B6c664a:L6c664a:{c.instructions+=2;NFSU2_TR(0x6c664a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c664e:{NFSU2_TR(0x6c664e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c6651:L6c6651:{c.instructions+=2;NFSU2_TR(0x6c6651);
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
B6c6653:{NFSU2_TR(0x6c6653);
if(r1(R+518)){{goto L6c68f3;}}
}
B6c6659:L6c6659:{c.instructions+=8;NFSU2_TR(0x6c6659);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c665b:{NFSU2_TR(0x6c665b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c665e:{NFSU2_TR(0x6c665e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c665f:{NFSU2_TR(0x6c665f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6660:{NFSU2_TR(0x6c6660);
__builtin_memmove((R+0),(R+12),4);
}
B6c6662:{NFSU2_TR(0x6c6662);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c6667:{NFSU2_TR(0x6c6667);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x73600000ull))));
}
B6c666c:{NFSU2_TR(0x6c666c);
{goto L6c66db;}
}
B6c666e:L6c666e:{c.instructions+=14;NFSU2_TR(0x6c666e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c666f:{NFSU2_TR(0x6c666f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6670:{NFSU2_TR(0x6c6670);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c6673:{NFSU2_TR(0x6c6673);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6674:{NFSU2_TR(0x6c6674);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c667a:{NFSU2_TR(0x6c667a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c667b:{NFSU2_TR(0x6c667b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c667e:{NFSU2_TR(0x6c667e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c667f:{NFSU2_TR(0x6c667f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c6685:{NFSU2_TR(0x6c6685);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6686:{NFSU2_TR(0x6c6686);
u8 U[4];
w4(U+0,u32(0x7bdfe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c668b:{NFSU2_TR(0x6c668b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c6691:{NFSU2_TR(0x6c6691);
__builtin_memmove((R+4),(R+24),4);
}
B6c6693:{NFSU2_TR(0x6c6693);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6698ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c6698:L6c6698:{c.instructions+=2;NFSU2_TR(0x6c6698);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c669a:{NFSU2_TR(0x6c669a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c674c;}}
}
B6c66a0:L6c66a0:{c.instructions+=2;NFSU2_TR(0x6c66a0);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c66a2:{NFSU2_TR(0x6c66a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c66a7ull));
TAIL_STATIC(0x699317u,699);
}
B6c66a7:L6c66a7:{c.instructions+=2;NFSU2_TR(0x6c66a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c66a9:{NFSU2_TR(0x6c66a9);
if(r1(R+518)){{goto L6c66b9;}}
}
B6c66ab:L6c66ab:{c.instructions+=2;NFSU2_TR(0x6c66ab);
__builtin_memmove((R+4),(R+0),4);
}
B6c66ad:{NFSU2_TR(0x6c66ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c66b2ull));
TAIL_STATIC(0x698e7du,698);
}
B6c66b2:L6c66b2:{c.instructions+=3;NFSU2_TR(0x6c66b2);
__builtin_memmove((R+28),(R+0),4);
}
B6c66b4:{NFSU2_TR(0x6c66b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c66b7:{NFSU2_TR(0x6c66b7);
{goto L6c66c0;}
}
B6c66b9:L6c66b9:{c.instructions+=2;NFSU2_TR(0x6c66b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c66bd:{NFSU2_TR(0x6c66bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c66c0:L6c66c0:{c.instructions+=2;NFSU2_TR(0x6c66c0);
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
B6c66c2:{NFSU2_TR(0x6c66c2);
if(r1(R+518)){{goto L6c68f3;}}
}
B6c66c8:L6c66c8:{c.instructions+=7;NFSU2_TR(0x6c66c8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c66ca:{NFSU2_TR(0x6c66ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c66cd:{NFSU2_TR(0x6c66cd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c66ce:{NFSU2_TR(0x6c66ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c66cf:{NFSU2_TR(0x6c66cf);
__builtin_memmove((R+0),(R+12),4);
}
B6c66d1:{NFSU2_TR(0x6c66d1);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c66d6:{NFSU2_TR(0x6c66d6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x73500000ull))));
}
B6c66db:L6c66db:{c.instructions+=3;NFSU2_TR(0x6c66db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c66dc:{NFSU2_TR(0x6c66dc);
__builtin_memmove((R+4),(R+28),4);
}
B6c66de:{NFSU2_TR(0x6c66de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c66e3ull));
TAIL_STATIC(0x699362u,699);
}
B6c66e3:L6c66e3:{c.instructions+=4;NFSU2_TR(0x6c66e3);
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
B6c66e5:{NFSU2_TR(0x6c66e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c66e8:{NFSU2_TR(0x6c66e8);
__builtin_memmove((R+4),(R+28),4);
}
B6c66ea:{NFSU2_TR(0x6c66ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c6942;}}
}
B6c66f0:L6c66f0:{c.instructions+=2;NFSU2_TR(0x6c66f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c66f6:{NFSU2_TR(0x6c66f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c66fbull));
TAIL_STATIC(0x698eb3u,698);
}
B6c66fb:L6c66fb:{c.instructions+=3;NFSU2_TR(0x6c66fb);
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
B6c66fd:{NFSU2_TR(0x6c66fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6700:{NFSU2_TR(0x6c6700);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c6940;}}
}
B6c6706:L6c6706:{c.instructions+=9;NFSU2_TR(0x6c6706);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c670c:{NFSU2_TR(0x6c670c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c670f:{NFSU2_TR(0x6c670f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c6712:{NFSU2_TR(0x6c6712);
__builtin_memmove((R+0),(R+12),4);
}
B6c6714:{NFSU2_TR(0x6c6714);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c6717:{NFSU2_TR(0x6c6717);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c671a:{NFSU2_TR(0x6c671a);
__builtin_memmove((R+4),(R+0),4);
}
B6c671c:{NFSU2_TR(0x6c671c);
__builtin_memmove((R+8),(R+4),4);
}
B6c671e:{NFSU2_TR(0x6c671e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c6721:L6c6721:{c.instructions+=1;NFSU2_TR(0x6c6721);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c6723;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6721u);}goto L6c6721;}
}
B6c6723:L6c6723:{c.instructions+=2;NFSU2_TR(0x6c6723);
__builtin_memmove((R+4),(R+8),4);
}
B6c6725:{NFSU2_TR(0x6c6725);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c6728:L6c6728:{c.instructions+=1;NFSU2_TR(0x6c6728);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c672a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6728u);}goto L6c6728;}
}
B6c672a:L6c672a:{c.instructions+=4;NFSU2_TR(0x6c672a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c672d:{NFSU2_TR(0x6c672d);
__builtin_memmove((R+4),(R+0),4);
}
B6c672f:{NFSU2_TR(0x6c672f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c6732:{NFSU2_TR(0x6c6732);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c6738:L6c6738:{c.instructions+=1;NFSU2_TR(0x6c6738);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c673a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6738u);}goto L6c6738;}
}
B6c673a:L6c673a:{c.instructions+=2;NFSU2_TR(0x6c673a);
__builtin_memmove((R+4),(R+8),4);
}
B6c673c:{NFSU2_TR(0x6c673c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c673f:L6c673f:{c.instructions+=1;NFSU2_TR(0x6c673f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c6741;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c673fu);}goto L6c673f;}
}
B6c6741:L6c6741:{c.instructions+=2;NFSU2_TR(0x6c6741);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c6747:{NFSU2_TR(0x6c6747);
{goto L6c6989;}
}
B6c674c:L6c674c:{c.instructions+=14;NFSU2_TR(0x6c674c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c674d:{NFSU2_TR(0x6c674d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c674e:{NFSU2_TR(0x6c674e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c6751:{NFSU2_TR(0x6c6751);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6752:{NFSU2_TR(0x6c6752);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c6758:{NFSU2_TR(0x6c6758);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6759:{NFSU2_TR(0x6c6759);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c675c:{NFSU2_TR(0x6c675c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c675d:{NFSU2_TR(0x6c675d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c6763:{NFSU2_TR(0x6c6763);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6764:{NFSU2_TR(0x6c6764);
u8 U[4];
w4(U+0,u32(0x7be040ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6769:{NFSU2_TR(0x6c6769);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c676f:{NFSU2_TR(0x6c676f);
__builtin_memmove((R+4),(R+24),4);
}
B6c6771:{NFSU2_TR(0x6c6771);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6776ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c6776:L6c6776:{c.instructions+=2;NFSU2_TR(0x6c6776);
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
B6c6778:{NFSU2_TR(0x6c6778);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c69bc;}}
}
B6c677e:L6c677e:{c.instructions+=6;NFSU2_TR(0x6c677e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6784:{NFSU2_TR(0x6c6784);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6787:{NFSU2_TR(0x6c6787);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c678a:{NFSU2_TR(0x6c678a);
w4(R+0,u32(0x80000ull));
}
B6c678f:{NFSU2_TR(0x6c678f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6792:{NFSU2_TR(0x6c6792);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c67bf;}}
}
B6c6794:L6c6794:{c.instructions+=3;NFSU2_TR(0x6c6794);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c6796:{NFSU2_TR(0x6c6796);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c6798:{NFSU2_TR(0x6c6798);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c6800;}}
}
B6c679a:L6c679a:{c.instructions+=3;NFSU2_TR(0x6c679a);
__builtin_memmove((R+4),(R+12),4);
}
B6c679c:{NFSU2_TR(0x6c679c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c67a2:{NFSU2_TR(0x6c67a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c67a5:L6c67a5:{c.instructions+=1;NFSU2_TR(0x6c67a5);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c67a7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c67a5u);}goto L6c67a5;}
}
B6c67a7:L6c67a7:{c.instructions+=7;NFSU2_TR(0x6c67a7);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff50ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c67ae:{NFSU2_TR(0x6c67ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c67b1:{NFSU2_TR(0x6c67b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c67b4:{NFSU2_TR(0x6c67b4);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c67b8:{NFSU2_TR(0x6c67b8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c67b9:{NFSU2_TR(0x6c67b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6c67bb:{NFSU2_TR(0x6c67bb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c67a7u);}goto L6c67a7;}}
}
B6c67bd:L6c67bd:{c.instructions+=1;NFSU2_TR(0x6c67bd);
{goto L6c67fa;}
}
B6c67bf:L6c67bf:{c.instructions+=4;NFSU2_TR(0x6c67bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c67c5:{NFSU2_TR(0x6c67c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c67c8:{NFSU2_TR(0x6c67c8);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
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
B6c67cb:{NFSU2_TR(0x6c67cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c69ba;}}
}
B6c67d1:L6c67d1:{c.instructions+=3;NFSU2_TR(0x6c67d1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c67d3:{NFSU2_TR(0x6c67d3);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c67d5:{NFSU2_TR(0x6c67d5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c6800;}}
}
B6c67d7:L6c67d7:{c.instructions+=3;NFSU2_TR(0x6c67d7);
__builtin_memmove((R+4),(R+12),4);
}
B6c67d9:{NFSU2_TR(0x6c67d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c67df:{NFSU2_TR(0x6c67df);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c67e2:L6c67e2:{c.instructions+=1;NFSU2_TR(0x6c67e2);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c67e4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c67e2u);}goto L6c67e2;}
}
B6c67e4:L6c67e4:{c.instructions+=7;NFSU2_TR(0x6c67e4);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff60ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c67eb:{NFSU2_TR(0x6c67eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c67ee:{NFSU2_TR(0x6c67ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c67f1:{NFSU2_TR(0x6c67f1);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c67f5:{NFSU2_TR(0x6c67f5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c67f6:{NFSU2_TR(0x6c67f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6c67f8:{NFSU2_TR(0x6c67f8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c67e4u);}goto L6c67e4;}}
}
B6c67fa:L6c67fa:{c.instructions+=3;NFSU2_TR(0x6c67fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c67fd:{NFSU2_TR(0x6c67fd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c67ff:{NFSU2_TR(0x6c67ff);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c6800:L6c6800:{c.instructions+=5;NFSU2_TR(0x6c6800);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6804:{NFSU2_TR(0x6c6804);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c6806:{NFSU2_TR(0x6c6806);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6809:{NFSU2_TR(0x6c6809);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c680c:{NFSU2_TR(0x6c680c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c68cf;}}
}
B6c6812:L6c6812:{c.instructions+=3;NFSU2_TR(0x6c6812);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c6818:{NFSU2_TR(0x6c6818);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c681b:{NFSU2_TR(0x6c681b);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c6821:L6c6821:{c.instructions+=7;NFSU2_TR(0x6c6821);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6824:{NFSU2_TR(0x6c6824);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff30ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c682b:{NFSU2_TR(0x6c682b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c682e:{NFSU2_TR(0x6c682e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6831:{NFSU2_TR(0x6c6831);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c6834:{NFSU2_TR(0x6c6834);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c6838:{NFSU2_TR(0x6c6838);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6842;}}
}
B6c683a:L6c683a:{c.instructions+=2;NFSU2_TR(0x6c683a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c683e:{NFSU2_TR(0x6c683e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6842:L6c6842:{c.instructions+=6;NFSU2_TR(0x6c6842);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6c6844:{NFSU2_TR(0x6c6844);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c6847:{NFSU2_TR(0x6c6847);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c6849:{NFSU2_TR(0x6c6849);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c684b:{NFSU2_TR(0x6c684b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c684e:{NFSU2_TR(0x6c684e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6c6854;}}
}
B6c6850:L6c6850:{c.instructions+=1;NFSU2_TR(0x6c6850);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6854:L6c6854:{c.instructions+=6;NFSU2_TR(0x6c6854);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6c6856:{NFSU2_TR(0x6c6856);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c6859:{NFSU2_TR(0x6c6859);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c685b:{NFSU2_TR(0x6c685b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c685d:{NFSU2_TR(0x6c685d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c6860:{NFSU2_TR(0x6c6860);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6c6866;}}
}
B6c6862:L6c6862:{c.instructions+=1;NFSU2_TR(0x6c6862);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6866:L6c6866:{c.instructions+=7;NFSU2_TR(0x6c6866);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6869:{NFSU2_TR(0x6c6869);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff40ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c6870:{NFSU2_TR(0x6c6870);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c6873:{NFSU2_TR(0x6c6873);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6876:{NFSU2_TR(0x6c6876);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c6879:{NFSU2_TR(0x6c6879);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c687d:{NFSU2_TR(0x6c687d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6887;}}
}
B6c687f:L6c687f:{c.instructions+=2;NFSU2_TR(0x6c687f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6883:{NFSU2_TR(0x6c6883);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6887:L6c6887:{c.instructions+=6;NFSU2_TR(0x6c6887);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6c6889:{NFSU2_TR(0x6c6889);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c688c:{NFSU2_TR(0x6c688c);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c688e:{NFSU2_TR(0x6c688e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c6890:{NFSU2_TR(0x6c6890);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c6893:{NFSU2_TR(0x6c6893);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6c6899;}}
}
B6c6895:L6c6895:{c.instructions+=1;NFSU2_TR(0x6c6895);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6899:L6c6899:{c.instructions+=6;NFSU2_TR(0x6c6899);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6c689b:{NFSU2_TR(0x6c689b);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c689e:{NFSU2_TR(0x6c689e);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c68a0:{NFSU2_TR(0x6c68a0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c68a2:{NFSU2_TR(0x6c68a2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c68a5:{NFSU2_TR(0x6c68a5);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6c68ab;}}
}
B6c68a7:L6c68a7:{c.instructions+=1;NFSU2_TR(0x6c68a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c68ab:L6c68ab:{c.instructions+=3;NFSU2_TR(0x6c68ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c68ae:{NFSU2_TR(0x6c68ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6c68b1:{NFSU2_TR(0x6c68b1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6821u);}goto L6c6821;}}
}
B6c68b7:L6c68b7:{c.instructions+=4;NFSU2_TR(0x6c68b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c68bb:{NFSU2_TR(0x6c68bb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6c68bd:{NFSU2_TR(0x6c68bd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6c68bf:{NFSU2_TR(0x6c68bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c68cf;}}
}
B6c68c1:L6c68c1:{c.instructions+=2;NFSU2_TR(0x6c68c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c68c5:{NFSU2_TR(0x6c68c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c68cf;}}
}
B6c68c7:L6c68c7:{c.instructions+=3;NFSU2_TR(0x6c68c7);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c68c9:{NFSU2_TR(0x6c68c9);
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
B6c68ca:{NFSU2_TR(0x6c68ca);
{goto L6c69bc;}
}
B6c68cf:L6c68cf:{c.instructions+=2;NFSU2_TR(0x6c68cf);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c68d1:{NFSU2_TR(0x6c68d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c68d6ull));
TAIL_STATIC(0x699317u,699);
}
B6c68d6:L6c68d6:{c.instructions+=2;NFSU2_TR(0x6c68d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c68d8:{NFSU2_TR(0x6c68d8);
if(r1(R+518)){{goto L6c68e8;}}
}
B6c68da:L6c68da:{c.instructions+=2;NFSU2_TR(0x6c68da);
__builtin_memmove((R+4),(R+0),4);
}
B6c68dc:{NFSU2_TR(0x6c68dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c68e1ull));
TAIL_STATIC(0x698e7du,698);
}
B6c68e1:L6c68e1:{c.instructions+=3;NFSU2_TR(0x6c68e1);
__builtin_memmove((R+28),(R+0),4);
}
B6c68e3:{NFSU2_TR(0x6c68e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c68e6:{NFSU2_TR(0x6c68e6);
{goto L6c68ef;}
}
B6c68e8:L6c68e8:{c.instructions+=2;NFSU2_TR(0x6c68e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c68ec:{NFSU2_TR(0x6c68ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c68ef:L6c68ef:{c.instructions+=2;NFSU2_TR(0x6c68ef);
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
B6c68f1:{NFSU2_TR(0x6c68f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c68fd;}}
}
B6c68f3:L6c68f3:{c.instructions+=2;NFSU2_TR(0x6c68f3);
w4(R+0,u32(0x8007000eull));
}
B6c68f8:{NFSU2_TR(0x6c68f8);
{goto L6c69bc;}
}
B6c68fd:L6c68fd:{c.instructions+=4;NFSU2_TR(0x6c68fd);
__builtin_memmove((R+0),(R+12),4);
}
B6c68ff:{NFSU2_TR(0x6c68ff);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c6904:{NFSU2_TR(0x6c6904);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6908:{NFSU2_TR(0x6c6908);
if(r1(R+518)){{goto L6c6911;}}
}
B6c690a:L6c690a:{c.instructions+=2;NFSU2_TR(0x6c690a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x73600000ull))));
}
B6c690f:{NFSU2_TR(0x6c690f);
{goto L6c6916;}
}
B6c6911:L6c6911:{c.instructions+=1;NFSU2_TR(0x6c6911);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x73500000ull))));
}
B6c6916:L6c6916:{c.instructions+=7;NFSU2_TR(0x6c6916);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6918:{NFSU2_TR(0x6c6918);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6919:{NFSU2_TR(0x6c6919);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6c691c:{NFSU2_TR(0x6c691c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c691d:{NFSU2_TR(0x6c691d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c691e:{NFSU2_TR(0x6c691e);
__builtin_memmove((R+4),(R+28),4);
}
B6c6920:{NFSU2_TR(0x6c6920);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6925ull));
TAIL_STATIC(0x699362u,699);
}
B6c6925:L6c6925:{c.instructions+=4;NFSU2_TR(0x6c6925);
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
B6c6927:{NFSU2_TR(0x6c6927);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c692a:{NFSU2_TR(0x6c692a);
__builtin_memmove((R+4),(R+28),4);
}
B6c692c:{NFSU2_TR(0x6c692c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c6942;}}
}
B6c692e:L6c692e:{c.instructions+=2;NFSU2_TR(0x6c692e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c6934:{NFSU2_TR(0x6c6934);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6939ull));
TAIL_STATIC(0x698eb3u,698);
}
B6c6939:L6c6939:{c.instructions+=3;NFSU2_TR(0x6c6939);
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
B6c693b:{NFSU2_TR(0x6c693b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c693e:{NFSU2_TR(0x6c693e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6c694e;}}
}
B6c6940:L6c6940:{c.instructions+=1;NFSU2_TR(0x6c6940);
__builtin_memmove((R+4),(R+28),4);
}
B6c6942:L6c6942:{c.instructions+=2;NFSU2_TR(0x6c6942);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6944:{NFSU2_TR(0x6c6944);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6949ull));
TAIL_STATIC(0x6739efu,673);
}
B6c6949:L6c6949:{c.instructions+=2;NFSU2_TR(0x6c6949);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c694c:{NFSU2_TR(0x6c694c);
{goto L6c69bc;}
}
B6c694e:L6c694e:{c.instructions+=9;NFSU2_TR(0x6c694e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6954:{NFSU2_TR(0x6c6954);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c6957:{NFSU2_TR(0x6c6957);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c695a:{NFSU2_TR(0x6c695a);
__builtin_memmove((R+0),(R+12),4);
}
B6c695c:{NFSU2_TR(0x6c695c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c695f:{NFSU2_TR(0x6c695f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c6962:{NFSU2_TR(0x6c6962);
__builtin_memmove((R+4),(R+0),4);
}
B6c6964:{NFSU2_TR(0x6c6964);
__builtin_memmove((R+8),(R+4),4);
}
B6c6966:{NFSU2_TR(0x6c6966);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c6969:L6c6969:{c.instructions+=1;NFSU2_TR(0x6c6969);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c696b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6969u);}goto L6c6969;}
}
B6c696b:L6c696b:{c.instructions+=2;NFSU2_TR(0x6c696b);
__builtin_memmove((R+4),(R+8),4);
}
B6c696d:{NFSU2_TR(0x6c696d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c6970:L6c6970:{c.instructions+=1;NFSU2_TR(0x6c6970);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c6972;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6970u);}goto L6c6970;}
}
B6c6972:L6c6972:{c.instructions+=4;NFSU2_TR(0x6c6972);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c6975:{NFSU2_TR(0x6c6975);
__builtin_memmove((R+4),(R+0),4);
}
B6c6977:{NFSU2_TR(0x6c6977);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c697a:{NFSU2_TR(0x6c697a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c697d:L6c697d:{c.instructions+=1;NFSU2_TR(0x6c697d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c697f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c697du);}goto L6c697d;}
}
B6c697f:L6c697f:{c.instructions+=2;NFSU2_TR(0x6c697f);
__builtin_memmove((R+4),(R+8),4);
}
B6c6981:{NFSU2_TR(0x6c6981);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c6984:L6c6984:{c.instructions+=1;NFSU2_TR(0x6c6984);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c6986;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6984u);}goto L6c6984;}
}
B6c6986:L6c6986:{c.instructions+=1;NFSU2_TR(0x6c6986);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c6989:L6c6989:{c.instructions+=4;NFSU2_TR(0x6c6989);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c698c:{NFSU2_TR(0x6c698c);
__builtin_memmove((R+4),(R+0),4);
}
B6c698e:{NFSU2_TR(0x6c698e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c6991:{NFSU2_TR(0x6c6991);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B6c6993:L6c6993:{c.instructions+=1;NFSU2_TR(0x6c6993);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c6995;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6993u);}goto L6c6993;}
}
B6c6995:L6c6995:{c.instructions+=3;NFSU2_TR(0x6c6995);
__builtin_memmove((R+4),(R+0),4);
}
B6c6997:{NFSU2_TR(0x6c6997);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c699a:{NFSU2_TR(0x6c699a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c699d:L6c699d:{c.instructions+=1;NFSU2_TR(0x6c699d);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c699f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c699du);}goto L6c699d;}
}
B6c699f:L6c699f:{c.instructions+=3;NFSU2_TR(0x6c699f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c69a5:{NFSU2_TR(0x6c69a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c69a6:{NFSU2_TR(0x6c69a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c69abull));
TAIL_STATIC(0x6995c1u,699);
}
B6c69ab:L6c69ab:{c.instructions+=4;NFSU2_TR(0x6c69ab);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c69ad:{NFSU2_TR(0x6c69ad);
__builtin_memmove((R+4),(R+12),4);
}
B6c69af:{NFSU2_TR(0x6c69af);
__builtin_memmove((R+24),(R+0),4);
}
B6c69b1:{NFSU2_TR(0x6c69b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c69b6ull));
TAIL_STATIC(0x6739efu,673);
}
B6c69b6:L6c69b6:{c.instructions+=2;NFSU2_TR(0x6c69b6);
__builtin_memmove((R+0),(R+24),4);
}
B6c69b8:{NFSU2_TR(0x6c69b8);
{goto L6c69bc;}
}
B6c69ba:L6c69ba:{c.instructions+=1;NFSU2_TR(0x6c69ba);
__builtin_memmove((R+0),(R+28),4);
}
B6c69bc:L6c69bc:{c.instructions+=5;NFSU2_TR(0x6c69bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c69bd:{NFSU2_TR(0x6c69bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c69be:{NFSU2_TR(0x6c69be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c69bf:{NFSU2_TR(0x6c69bf);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c69c0:{NFSU2_TR(0x6c69c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c69c1:L6c69c1:{c.instructions+=34;NFSU2_TR(0x6c69c1);
__builtin_memmove((R+28),(R+28),4);
}
B6c69c3:{NFSU2_TR(0x6c69c3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c69c4:{NFSU2_TR(0x6c69c4);
__builtin_memmove((R+20),(R+16),4);
}
B6c69c6:{NFSU2_TR(0x6c69c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x108ull))));
}
B6c69cc:{NFSU2_TR(0x6c69cc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c69cd:{NFSU2_TR(0x6c69cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c69ce:{NFSU2_TR(0x6c69ce);
__builtin_memmove((R+24),(R+4),4);
}
B6c69d0:{NFSU2_TR(0x6c69d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c69d6:{NFSU2_TR(0x6c69d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6c69d8:{NFSU2_TR(0x6c69d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c69d9:{NFSU2_TR(0x6c69d9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c69db:{NFSU2_TR(0x6c69db);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c69dc:{NFSU2_TR(0x6c69dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c69dd:{NFSU2_TR(0x6c69dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c69e0:{NFSU2_TR(0x6c69e0);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffull))));
}
B6c69e6:{NFSU2_TR(0x6c69e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c69e7:{NFSU2_TR(0x6c69e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c69ea:{NFSU2_TR(0x6c69ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c69eb:{NFSU2_TR(0x6c69eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c69f1:{NFSU2_TR(0x6c69f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c69f2:{NFSU2_TR(0x6c69f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c69f5:{NFSU2_TR(0x6c69f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c69f6:{NFSU2_TR(0x6c69f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c69fc:{NFSU2_TR(0x6c69fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c69fd:{NFSU2_TR(0x6c69fd);
u8 U[4];
w4(U+0,u32(0x7bdbe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6a02:{NFSU2_TR(0x6c6a02);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c6a04:{NFSU2_TR(0x6c6a04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6a05:{NFSU2_TR(0x6c6a05);
__builtin_memmove((R+4),(R+24),4);
}
B6c6a07:{NFSU2_TR(0x6c6a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6a0a:{NFSU2_TR(0x6c6a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6a0d:{NFSU2_TR(0x6c6a0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6a10:{NFSU2_TR(0x6c6a10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6a17:{NFSU2_TR(0x6c6a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6a1e:{NFSU2_TR(0x6c6a1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6a23ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c6a23:L6c6a23:{c.instructions+=2;NFSU2_TR(0x6c6a23);
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
B6c6a25:{NFSU2_TR(0x6c6a25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6c16;}}
}
B6c6a2b:L6c6a2b:{c.instructions+=6;NFSU2_TR(0x6c6a2b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c6a2d:{NFSU2_TR(0x6c6a2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6a30:{NFSU2_TR(0x6c6a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6a33:{NFSU2_TR(0x6c6a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6a36:{NFSU2_TR(0x6c6a36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6a39:{NFSU2_TR(0x6c6a39);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c6b27;}}
}
B6c6a3f:L6c6a3f:{c.instructions+=11;NFSU2_TR(0x6c6a3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6a42:{NFSU2_TR(0x6c6a42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6a48:{NFSU2_TR(0x6c6a48);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c6a4b:{NFSU2_TR(0x6c6a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6a51:{NFSU2_TR(0x6c6a51);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c6a54:{NFSU2_TR(0x6c6a54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6a57:{NFSU2_TR(0x6c6a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6a5a:{NFSU2_TR(0x6c6a5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c6a5d:{NFSU2_TR(0x6c6a5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6a60:{NFSU2_TR(0x6c6a60);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x100ull))));
}
B6c6a65:{NFSU2_TR(0x6c6a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6a68:L6c6a68:{c.instructions+=2;NFSU2_TR(0x6c6a68);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6a6c:{NFSU2_TR(0x6c6a6c);
if(r1(R+518)){{goto L6c6afa;}}
}
B6c6a72:L6c6a72:{c.instructions+=4;NFSU2_TR(0x6c6a72);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6a75:{NFSU2_TR(0x6c6a75);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c6a78:{NFSU2_TR(0x6c6a78);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c6a7c:{NFSU2_TR(0x6c6a7c);
if(r1(R+518)){{goto L6c6afa;}}
}
B6c6a7e:L6c6a7e:{c.instructions+=2;NFSU2_TR(0x6c6a7e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6a82:{NFSU2_TR(0x6c6a82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6afa;}}
}
B6c6a84:L6c6a84:{c.instructions+=2;NFSU2_TR(0x6c6a84);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6a88:{NFSU2_TR(0x6c6a88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6afa;}}
}
B6c6a8a:L6c6a8a:{c.instructions+=6;NFSU2_TR(0x6c6a8a);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c6a90:{NFSU2_TR(0x6c6a90);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c6a93:{NFSU2_TR(0x6c6a93);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c6a95:{NFSU2_TR(0x6c6a95);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c6a97:{NFSU2_TR(0x6c6a97);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c6a9a:{NFSU2_TR(0x6c6a9a);
if(r1(R+514)){{goto L6c6ab7;}}
}
B6c6a9c:L6c6a9c:{c.instructions+=6;NFSU2_TR(0x6c6a9c);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c6aa2:{NFSU2_TR(0x6c6aa2);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c6aa5:{NFSU2_TR(0x6c6aa5);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c6aa7:{NFSU2_TR(0x6c6aa7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c6aa9:{NFSU2_TR(0x6c6aa9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c6aac:{NFSU2_TR(0x6c6aac);
if(r1(R+514)){{goto L6c6ab7;}}
}
B6c6aae:L6c6aae:{c.instructions+=2;NFSU2_TR(0x6c6aae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6ab5:{NFSU2_TR(0x6c6ab5);
{goto L6c6ae2;}
}
B6c6ab7:L6c6ab7:{c.instructions+=6;NFSU2_TR(0x6c6ab7);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c6abd:{NFSU2_TR(0x6c6abd);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c6ac0:{NFSU2_TR(0x6c6ac0);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c6ac2:{NFSU2_TR(0x6c6ac2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c6ac4:{NFSU2_TR(0x6c6ac4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c6ac7:{NFSU2_TR(0x6c6ac7);
if(r1(R+514)){{goto L6c6afa;}}
}
B6c6ac9:L6c6ac9:{c.instructions+=6;NFSU2_TR(0x6c6ac9);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c6acf:{NFSU2_TR(0x6c6acf);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c6ad2:{NFSU2_TR(0x6c6ad2);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c6ad4:{NFSU2_TR(0x6c6ad4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c6ad6:{NFSU2_TR(0x6c6ad6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c6ad9:{NFSU2_TR(0x6c6ad9);
if(r1(R+514)){{goto L6c6afa;}}
}
B6c6adb:L6c6adb:{c.instructions+=1;NFSU2_TR(0x6c6adb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6ae2:L6c6ae2:{c.instructions+=3;NFSU2_TR(0x6c6ae2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6ae5:{NFSU2_TR(0x6c6ae5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6c6ae8:{NFSU2_TR(0x6c6ae8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6a68u);}goto L6c6a68;}}
}
B6c6aee:L6c6aee:{c.instructions+=3;NFSU2_TR(0x6c6aee);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c6af0:{NFSU2_TR(0x6c6af0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6af3:{NFSU2_TR(0x6c6af3);
if(r1(R+518)){{goto L6c6b11;}}
}
B6c6af5:L6c6af5:{c.instructions+=2;NFSU2_TR(0x6c6af5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6af8:{NFSU2_TR(0x6c6af8);
if(r1(R+518)){{goto L6c6b02;}}
}
B6c6afa:L6c6afa:{c.instructions+=3;NFSU2_TR(0x6c6afa);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c6afc:{NFSU2_TR(0x6c6afc);
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
B6c6afd:{NFSU2_TR(0x6c6afd);
{goto L6c6c16;}
}
B6c6b02:L6c6b02:{c.instructions+=4;NFSU2_TR(0x6c6b02);
__builtin_memmove((R+0),(R+12),4);
}
B6c6b04:{NFSU2_TR(0x6c6b04);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c6b09:{NFSU2_TR(0x6c6b09);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x73500000ull))));
}
B6c6b0e:{NFSU2_TR(0x6c6b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6b11:L6c6b11:{c.instructions+=2;NFSU2_TR(0x6c6b11);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6b14:{NFSU2_TR(0x6c6b14);
if(r1(R+518)){{goto L6c6b25;}}
}
B6c6b16:L6c6b16:{c.instructions+=4;NFSU2_TR(0x6c6b16);
__builtin_memmove((R+0),(R+12),4);
}
B6c6b18:{NFSU2_TR(0x6c6b18);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c6b1d:{NFSU2_TR(0x6c6b1d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x73600000ull))));
}
B6c6b22:{NFSU2_TR(0x6c6b22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6b25:L6c6b25:{c.instructions+=1;NFSU2_TR(0x6c6b25);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c6b27:L6c6b27:{c.instructions+=2;NFSU2_TR(0x6c6b27);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6b29:{NFSU2_TR(0x6c6b29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6b2eull));
TAIL_STATIC(0x699317u,699);
}
B6c6b2e:L6c6b2e:{c.instructions+=2;NFSU2_TR(0x6c6b2e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c6b30:{NFSU2_TR(0x6c6b30);
if(r1(R+518)){{goto L6c6b3e;}}
}
B6c6b32:L6c6b32:{c.instructions+=2;NFSU2_TR(0x6c6b32);
__builtin_memmove((R+4),(R+0),4);
}
B6c6b34:{NFSU2_TR(0x6c6b34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6b39ull));
TAIL_STATIC(0x698e7du,698);
}
B6c6b39:L6c6b39:{c.instructions+=2;NFSU2_TR(0x6c6b39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6b3c:{NFSU2_TR(0x6c6b3c);
{goto L6c6b41;}
}
B6c6b3e:L6c6b3e:{c.instructions+=1;NFSU2_TR(0x6c6b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6b41:L6c6b41:{c.instructions+=3;NFSU2_TR(0x6c6b41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6b44:{NFSU2_TR(0x6c6b44);
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
B6c6b46:{NFSU2_TR(0x6c6b46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6b52;}}
}
B6c6b48:L6c6b48:{c.instructions+=2;NFSU2_TR(0x6c6b48);
w4(R+0,u32(0x8007000eull));
}
B6c6b4d:{NFSU2_TR(0x6c6b4d);
{goto L6c6c16;}
}
B6c6b52:L6c6b52:{c.instructions+=6;NFSU2_TR(0x6c6b52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6b53:{NFSU2_TR(0x6c6b53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6b54:{NFSU2_TR(0x6c6b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c6b57:{NFSU2_TR(0x6c6b57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6b58:{NFSU2_TR(0x6c6b58);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c6b5b:{NFSU2_TR(0x6c6b5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6b60ull));
TAIL_STATIC(0x699362u,699);
}
B6c6b60:L6c6b60:{c.instructions+=2;NFSU2_TR(0x6c6b60);
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
B6c6b62:{NFSU2_TR(0x6c6b62);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c6c08;}}
}
B6c6b68:L6c6b68:{c.instructions+=3;NFSU2_TR(0x6c6b68);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c6b6e:{NFSU2_TR(0x6c6b6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6b71:{NFSU2_TR(0x6c6b71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6b76ull));
TAIL_STATIC(0x698eb3u,698);
}
B6c6b76:L6c6b76:{c.instructions+=2;NFSU2_TR(0x6c6b76);
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
B6c6b78:{NFSU2_TR(0x6c6b78);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c6c08;}}
}
B6c6b7e:L6c6b7e:{c.instructions+=10;NFSU2_TR(0x6c6b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6b84:{NFSU2_TR(0x6c6b84);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6c6b86:{NFSU2_TR(0x6c6b86);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c6b89:{NFSU2_TR(0x6c6b89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6b8c:{NFSU2_TR(0x6c6b8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c6b8f:{NFSU2_TR(0x6c6b8f);
__builtin_memmove((R+0),(R+12),4);
}
B6c6b91:{NFSU2_TR(0x6c6b91);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c6b94:{NFSU2_TR(0x6c6b94);
__builtin_memmove((R+4),(R+0),4);
}
B6c6b96:{NFSU2_TR(0x6c6b96);
__builtin_memmove((R+8),(R+4),4);
}
B6c6b98:{NFSU2_TR(0x6c6b98);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c6b9b:L6c6b9b:{c.instructions+=1;NFSU2_TR(0x6c6b9b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c6b9d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6b9bu);}goto L6c6b9b;}
}
B6c6b9d:L6c6b9d:{c.instructions+=2;NFSU2_TR(0x6c6b9d);
__builtin_memmove((R+4),(R+8),4);
}
B6c6b9f:{NFSU2_TR(0x6c6b9f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c6ba2:L6c6ba2:{c.instructions+=1;NFSU2_TR(0x6c6ba2);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c6ba4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6ba2u);}goto L6c6ba2;}
}
B6c6ba4:L6c6ba4:{c.instructions+=6;NFSU2_TR(0x6c6ba4);
__builtin_memmove((R+4),(R+0),4);
}
B6c6ba6:{NFSU2_TR(0x6c6ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6ba9:{NFSU2_TR(0x6c6ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c6bac:{NFSU2_TR(0x6c6bac);
__builtin_memmove((R+0),(R+4),4);
}
B6c6bae:{NFSU2_TR(0x6c6bae);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c6bb1:{NFSU2_TR(0x6c6bb1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff38ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c6bb7:L6c6bb7:{c.instructions+=1;NFSU2_TR(0x6c6bb7);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c6bb9;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6bb7u);}goto L6c6bb7;}
}
B6c6bb9:L6c6bb9:{c.instructions+=2;NFSU2_TR(0x6c6bb9);
__builtin_memmove((R+4),(R+0),4);
}
B6c6bbb:{NFSU2_TR(0x6c6bbb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c6bbe:L6c6bbe:{c.instructions+=1;NFSU2_TR(0x6c6bbe);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c6bc0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6bbeu);}goto L6c6bbe;}
}
B6c6bc0:L6c6bc0:{c.instructions+=9;NFSU2_TR(0x6c6bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c6bc3:{NFSU2_TR(0x6c6bc3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6bc4:{NFSU2_TR(0x6c6bc4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6bc5:{NFSU2_TR(0x6c6bc5);
__builtin_memmove((R+4),(R+24),4);
}
B6c6bc7:{NFSU2_TR(0x6c6bc7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c6bca:{NFSU2_TR(0x6c6bca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6bcc:{NFSU2_TR(0x6c6bcc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6bce:{NFSU2_TR(0x6c6bce);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c6bd1:{NFSU2_TR(0x6c6bd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6bd6ull));
TAIL_STATIC(0x699c39u,699);
}
B6c6bd6:L6c6bd6:{c.instructions+=2;NFSU2_TR(0x6c6bd6);
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
B6c6bd9:{NFSU2_TR(0x6c6bd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6be2;}}
}
B6c6bdb:L6c6bdb:{c.instructions+=2;NFSU2_TR(0x6c6bdb);
w4(R+24,u32(0x8007000eull));
}
B6c6be0:{NFSU2_TR(0x6c6be0);
{goto L6c6c0a;}
}
B6c6be2:L6c6be2:{c.instructions+=2;NFSU2_TR(0x6c6be2);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c6be4:{NFSU2_TR(0x6c6be4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c6bfa;}}
}
B6c6be6:L6c6be6:{c.instructions+=2;NFSU2_TR(0x6c6be6);
__builtin_memmove((R+4),(R+12),4);
}
B6c6be8:{NFSU2_TR(0x6c6be8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c6beb:L6c6beb:{c.instructions+=6;NFSU2_TR(0x6c6beb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6bee:{NFSU2_TR(0x6c6bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6bf1:{NFSU2_TR(0x6c6bf1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c6bf4:{NFSU2_TR(0x6c6bf4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c6bf7:{NFSU2_TR(0x6c6bf7);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B6c6bf8:{NFSU2_TR(0x6c6bf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6bebu);}goto L6c6beb;}}
}
B6c6bfa:L6c6bfa:{c.instructions+=3;NFSU2_TR(0x6c6bfa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c6bfd:{NFSU2_TR(0x6c6bfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6c03:{NFSU2_TR(0x6c6c03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6c08ull));
TAIL_STATIC(0x6995c1u,699);
}
B6c6c08:L6c6c08:{c.instructions+=1;NFSU2_TR(0x6c6c08);
__builtin_memmove((R+24),(R+0),4);
}
B6c6c0a:L6c6c0a:{c.instructions+=3;NFSU2_TR(0x6c6c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6c0d:{NFSU2_TR(0x6c6c0d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6c0f:{NFSU2_TR(0x6c6c0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6c14ull));
TAIL_STATIC(0x6739efu,673);
}
B6c6c14:L6c6c14:{c.instructions+=1;NFSU2_TR(0x6c6c14);
__builtin_memmove((R+0),(R+24),4);
}
B6c6c16:L6c6c16:{c.instructions+=5;NFSU2_TR(0x6c6c16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c6c17:{NFSU2_TR(0x6c6c17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c6c18:{NFSU2_TR(0x6c6c18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c6c19:{NFSU2_TR(0x6c6c19);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c6c1a:{NFSU2_TR(0x6c6c1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c6c1b:L6c6c1b:{c.instructions+=14;NFSU2_TR(0x6c6c1b);
__builtin_memmove((R+28),(R+28),4);
}
B6c6c1d:{NFSU2_TR(0x6c6c1d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6c1e:{NFSU2_TR(0x6c6c1e);
__builtin_memmove((R+20),(R+16),4);
}
B6c6c20:{NFSU2_TR(0x6c6c20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6c21:{NFSU2_TR(0x6c6c21);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6c22:{NFSU2_TR(0x6c6c22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6c23:{NFSU2_TR(0x6c6c23);
__builtin_memmove((R+24),(R+4),4);
}
B6c6c25:{NFSU2_TR(0x6c6c25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6c2b:{NFSU2_TR(0x6c6c2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c6c2d:{NFSU2_TR(0x6c6c2d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c6c2f:{NFSU2_TR(0x6c6c2f);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B6c6c35:{NFSU2_TR(0x6c6c35);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c6c36:{NFSU2_TR(0x6c6c36);
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
B6c6c38:{NFSU2_TR(0x6c6c38);
if(r1(R+518)){{goto L6c6c41;}}
}
B6c6c3a:L6c6c3a:{c.instructions+=2;NFSU2_TR(0x6c6c3a);
__builtin_memmove((R+0),(R+4),4);
}
B6c6c3c:{NFSU2_TR(0x6c6c3c);
{goto L6c6cfe;}
}
B6c6c41:L6c6c41:{c.instructions+=10;NFSU2_TR(0x6c6c41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6c44:{NFSU2_TR(0x6c6c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6c47:{NFSU2_TR(0x6c6c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6c4a:{NFSU2_TR(0x6c6c4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c6c4d:{NFSU2_TR(0x6c6c4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6c50:{NFSU2_TR(0x6c6c50);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6c51:{NFSU2_TR(0x6c6c51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c6c54:{NFSU2_TR(0x6c6c54);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c6c57:{NFSU2_TR(0x6c6c57);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6c6c5b:{NFSU2_TR(0x6c6c5b);
if(r1(R+518)){{goto L6c6cfb;}}
}
B6c6c61:L6c6c61:{c.instructions+=2;NFSU2_TR(0x6c6c61);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6c6c65:{NFSU2_TR(0x6c6c65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6cfb;}}
}
B6c6c6b:L6c6c6b:{c.instructions+=6;NFSU2_TR(0x6c6c6b);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c6c71:{NFSU2_TR(0x6c6c71);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c6c74:{NFSU2_TR(0x6c6c74);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c6c76:{NFSU2_TR(0x6c6c76);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c6c78:{NFSU2_TR(0x6c6c78);
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
B6c6c7b:{NFSU2_TR(0x6c6c7b);
if(r1(R+514)){{goto L6c6cfb;}}
}
B6c6c7d:L6c6c7d:{c.instructions+=10;NFSU2_TR(0x6c6c7d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6c7e:{NFSU2_TR(0x6c6c7e);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6c6c80:{NFSU2_TR(0x6c6c80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6c81:{NFSU2_TR(0x6c6c81);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c6c84:{NFSU2_TR(0x6c6c84);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c6c86:{NFSU2_TR(0x6c6c86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6c87:{NFSU2_TR(0x6c6c87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6c88:{NFSU2_TR(0x6c6c88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6c89:{NFSU2_TR(0x6c6c89);
__builtin_memmove((R+4),(R+24),4);
}
B6c6c8b:{NFSU2_TR(0x6c6c8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6c90ull));
TAIL_STATIC(0x699c39u,699);
}
B6c6c90:L6c6c90:{c.instructions+=4;NFSU2_TR(0x6c6c90);
__builtin_memmove((R+4),(R+0),4);
}
B6c6c92:{NFSU2_TR(0x6c6c92);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B6c6c95:{NFSU2_TR(0x6c6c95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6c98:{NFSU2_TR(0x6c6c98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6ca1;}}
}
B6c6c9a:L6c6c9a:{c.instructions+=2;NFSU2_TR(0x6c6c9a);
w4(R+0,u32(0x8007000eull));
}
B6c6c9f:{NFSU2_TR(0x6c6c9f);
{goto L6c6cfd;}
}
B6c6ca1:L6c6ca1:{c.instructions+=9;NFSU2_TR(0x6c6ca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6ca7:{NFSU2_TR(0x6c6ca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6caa:{NFSU2_TR(0x6c6caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6cad:{NFSU2_TR(0x6c6cad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c6caf:{NFSU2_TR(0x6c6caf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c6cb2:{NFSU2_TR(0x6c6cb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c6cb5:{NFSU2_TR(0x6c6cb5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6cb6:{NFSU2_TR(0x6c6cb6);
__builtin_memmove((R+4),(R+28),4);
}
B6c6cb8:{NFSU2_TR(0x6c6cb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6cbdull));
TAIL_STATIC(0x699765u,699);
}
B6c6cbd:L6c6cbd:{c.instructions+=2;NFSU2_TR(0x6c6cbd);
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
B6c6cbf:{NFSU2_TR(0x6c6cbf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c6cfd;}}
}
B6c6cc1:L6c6cc1:{c.instructions+=3;NFSU2_TR(0x6c6cc1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6cc2:{NFSU2_TR(0x6c6cc2);
__builtin_memmove((R+4),(R+28),4);
}
B6c6cc4:{NFSU2_TR(0x6c6cc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6cc9ull));
TAIL_STATIC(0x699821u,699);
}
B6c6cc9:L6c6cc9:{c.instructions+=2;NFSU2_TR(0x6c6cc9);
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
B6c6ccb:{NFSU2_TR(0x6c6ccb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c6cfd;}}
}
B6c6ccd:L6c6ccd:{c.instructions+=3;NFSU2_TR(0x6c6ccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(u32(0x80000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6cd4:{NFSU2_TR(0x6c6cd4);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6cd8:{NFSU2_TR(0x6c6cd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6ce8;}}
}
B6c6cda:L6c6cda:{c.instructions+=4;NFSU2_TR(0x6c6cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6ce0:{NFSU2_TR(0x6c6ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6ce3:{NFSU2_TR(0x6c6ce3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c6ce5:{NFSU2_TR(0x6c6ce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6ce8:L6c6ce8:{c.instructions+=6;NFSU2_TR(0x6c6ce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6cee:{NFSU2_TR(0x6c6cee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6cf1:{NFSU2_TR(0x6c6cf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6cf4:{NFSU2_TR(0x6c6cf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6cf7:{NFSU2_TR(0x6c6cf7);
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
B6c6cf9:{NFSU2_TR(0x6c6cf9);
{goto L6c6cfd;}
}
B6c6cfb:L6c6cfb:{c.instructions+=1;NFSU2_TR(0x6c6cfb);
__builtin_memmove((R+0),(R+4),4);
}
B6c6cfd:L6c6cfd:{c.instructions+=1;NFSU2_TR(0x6c6cfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c6cfe:L6c6cfe:{c.instructions+=4;NFSU2_TR(0x6c6cfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c6cff:{NFSU2_TR(0x6c6cff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c6d00:{NFSU2_TR(0x6c6d00);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c6d01:{NFSU2_TR(0x6c6d01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c6d02:L6c6d02:{c.instructions+=34;NFSU2_TR(0x6c6d02);
__builtin_memmove((R+28),(R+28),4);
}
B6c6d04:{NFSU2_TR(0x6c6d04);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6d05:{NFSU2_TR(0x6c6d05);
__builtin_memmove((R+20),(R+16),4);
}
B6c6d07:{NFSU2_TR(0x6c6d07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xfcull))));
}
B6c6d0d:{NFSU2_TR(0x6c6d0d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6d0e:{NFSU2_TR(0x6c6d0e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6d0f:{NFSU2_TR(0x6c6d0f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6d10:{NFSU2_TR(0x6c6d10);
__builtin_memmove((R+28),(R+4),4);
}
B6c6d12:{NFSU2_TR(0x6c6d12);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6d18:{NFSU2_TR(0x6c6d18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c6d1a:{NFSU2_TR(0x6c6d1a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c6d1c:{NFSU2_TR(0x6c6d1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6d1f:{NFSU2_TR(0x6c6d1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6d22:{NFSU2_TR(0x6c6d22);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c6d24:{NFSU2_TR(0x6c6d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6d27:{NFSU2_TR(0x6c6d27);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6c6d28:{NFSU2_TR(0x6c6d28);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6d29:{NFSU2_TR(0x6c6d29);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6c6d2f:{NFSU2_TR(0x6c6d2f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6d30:{NFSU2_TR(0x6c6d30);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c6d33:{NFSU2_TR(0x6c6d33);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6d34:{NFSU2_TR(0x6c6d34);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c6d3a:{NFSU2_TR(0x6c6d3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6d3b:{NFSU2_TR(0x6c6d3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c6d3e:{NFSU2_TR(0x6c6d3e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6d3f:{NFSU2_TR(0x6c6d3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c6d42:{NFSU2_TR(0x6c6d42);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6d43:{NFSU2_TR(0x6c6d43);
u8 U[4];
w4(U+0,u32(0x7bddc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6d48:{NFSU2_TR(0x6c6d48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6d49:{NFSU2_TR(0x6c6d49);
__builtin_memmove((R+4),(R+28),4);
}
B6c6d4b:{NFSU2_TR(0x6c6d4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6d4e:{NFSU2_TR(0x6c6d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6d55:{NFSU2_TR(0x6c6d55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6d5c:{NFSU2_TR(0x6c6d5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6d61ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c6d61:L6c6d61:{c.instructions+=2;NFSU2_TR(0x6c6d61);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c6d63:{NFSU2_TR(0x6c6d63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6d8f;}}
}
B6c6d65:L6c6d65:{c.instructions+=15;NFSU2_TR(0x6c6d65);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6d66:{NFSU2_TR(0x6c6d66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6d67:{NFSU2_TR(0x6c6d67);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c6d6a:{NFSU2_TR(0x6c6d6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6d6b:{NFSU2_TR(0x6c6d6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c6d71:{NFSU2_TR(0x6c6d71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6d72:{NFSU2_TR(0x6c6d72);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c6d75:{NFSU2_TR(0x6c6d75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6d76:{NFSU2_TR(0x6c6d76);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c6d79:{NFSU2_TR(0x6c6d79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6d7a:{NFSU2_TR(0x6c6d7a);
u8 U[4];
w4(U+0,u32(0x7bde20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6d7f:{NFSU2_TR(0x6c6d7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c6d85:{NFSU2_TR(0x6c6d85);
__builtin_memmove((R+4),(R+28),4);
}
B6c6d87:{NFSU2_TR(0x6c6d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6d8a:{NFSU2_TR(0x6c6d8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6d8full));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c6d8f:L6c6d8f:{c.instructions+=2;NFSU2_TR(0x6c6d8f);
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
B6c6d91:{NFSU2_TR(0x6c6d91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6e4b;}}
}
B6c6d97:L6c6d97:{c.instructions+=3;NFSU2_TR(0x6c6d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6d9a:{NFSU2_TR(0x6c6d9a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c6d9c:{NFSU2_TR(0x6c6d9c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c6e04;}}
}
B6c6d9e:L6c6d9e:{c.instructions+=3;NFSU2_TR(0x6c6d9e);
__builtin_memmove((R+0),(R+24),4);
}
B6c6da0:{NFSU2_TR(0x6c6da0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c6da3:{NFSU2_TR(0x6c6da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6da6:L6c6da6:{c.instructions+=5;NFSU2_TR(0x6c6da6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6da9:{NFSU2_TR(0x6c6da9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c6dac:{NFSU2_TR(0x6c6dac);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff14ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c6db3:{NFSU2_TR(0x6c6db3);
u8 U[30];
w4(U+0,u32(u32(u32(0xffffff24ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+22))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+22)));
w4(U+26,u32(u32(r4(R+4))-u32(r4(U+22))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B6c6dba:{NFSU2_TR(0x6c6dba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6e21;}}
}
B6c6dbc:L6c6dbc:{c.instructions+=11;NFSU2_TR(0x6c6dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6dc2:{NFSU2_TR(0x6c6dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6dc5:{NFSU2_TR(0x6c6dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6dc8:{NFSU2_TR(0x6c6dc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c6dcb:{NFSU2_TR(0x6c6dcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6dce:{NFSU2_TR(0x6c6dce);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c6dd1:{NFSU2_TR(0x6c6dd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6dd4:{NFSU2_TR(0x6c6dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6dd7:{NFSU2_TR(0x6c6dd7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c6dda:{NFSU2_TR(0x6c6dda);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6c6dde:{NFSU2_TR(0x6c6dde);
if(r1(R+518)){{goto L6c6e21;}}
}
B6c6de0:L6c6de0:{c.instructions+=6;NFSU2_TR(0x6c6de0);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c6de6:{NFSU2_TR(0x6c6de6);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c6de9:{NFSU2_TR(0x6c6de9);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c6deb:{NFSU2_TR(0x6c6deb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c6ded:{NFSU2_TR(0x6c6ded);
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
B6c6df0:{NFSU2_TR(0x6c6df0);
if(r1(R+514)){{goto L6c6e21;}}
}
B6c6df2:L6c6df2:{c.instructions+=2;NFSU2_TR(0x6c6df2);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6c6df6:{NFSU2_TR(0x6c6df6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6e21;}}
}
B6c6df8:L6c6df8:{c.instructions+=4;NFSU2_TR(0x6c6df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6dfb:{NFSU2_TR(0x6c6dfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6dff:{NFSU2_TR(0x6c6dff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6c6e02:{NFSU2_TR(0x6c6e02);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6da6u);}goto L6c6da6;}}
}
B6c6e04:L6c6e04:{c.instructions+=6;NFSU2_TR(0x6c6e04);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6e0a:{NFSU2_TR(0x6c6e0a);
__builtin_memmove((R+4),(R+24),4);
}
B6c6e0c:{NFSU2_TR(0x6c6e0c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c6e0e:{NFSU2_TR(0x6c6e0e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6c6e14:{NFSU2_TR(0x6c6e14);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6e17:{NFSU2_TR(0x6c6e17);
if(r1(R+518)){{goto L6c6e25;}}
}
B6c6e19:L6c6e19:{c.instructions+=2;NFSU2_TR(0x6c6e19);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x73700000ull))));
}
B6c6e1f:{NFSU2_TR(0x6c6e1f);
{goto L6c6e2b;}
}
B6c6e21:L6c6e21:{c.instructions+=2;NFSU2_TR(0x6c6e21);
__builtin_memmove((R+0),(R+12),4);
}
B6c6e23:{NFSU2_TR(0x6c6e23);
{goto L6c6e4b;}
}
B6c6e25:L6c6e25:{c.instructions+=1;NFSU2_TR(0x6c6e25);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x73800000ull))));
}
B6c6e2b:L6c6e2b:{c.instructions+=3;NFSU2_TR(0x6c6e2b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c6e2d:{NFSU2_TR(0x6c6e2d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6c6e2f:{NFSU2_TR(0x6c6e2f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c6e49;}}
}
B6c6e31:L6c6e31:{c.instructions+=7;NFSU2_TR(0x6c6e31);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6e37:{NFSU2_TR(0x6c6e37);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff14ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c6e3e:{NFSU2_TR(0x6c6e3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6e41:{NFSU2_TR(0x6c6e41);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c6e44:{NFSU2_TR(0x6c6e44);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c6e45:{NFSU2_TR(0x6c6e45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6c6e47:{NFSU2_TR(0x6c6e47);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6e31u);}goto L6c6e31;}}
}
B6c6e49:L6c6e49:{c.instructions+=1;NFSU2_TR(0x6c6e49);
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
B6c6e4b:L6c6e4b:{c.instructions+=5;NFSU2_TR(0x6c6e4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c6e4c:{NFSU2_TR(0x6c6e4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c6e4d:{NFSU2_TR(0x6c6e4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c6e4e:{NFSU2_TR(0x6c6e4e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c6e4f:{NFSU2_TR(0x6c6e4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c6e50:L6c6e50:{c.instructions+=34;NFSU2_TR(0x6c6e50);
__builtin_memmove((R+28),(R+28),4);
}
B6c6e52:{NFSU2_TR(0x6c6e52);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6e53:{NFSU2_TR(0x6c6e53);
__builtin_memmove((R+20),(R+16),4);
}
B6c6e55:{NFSU2_TR(0x6c6e55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xf8ull))));
}
B6c6e5b:{NFSU2_TR(0x6c6e5b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6e5c:{NFSU2_TR(0x6c6e5c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6e5d:{NFSU2_TR(0x6c6e5d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6e5e:{NFSU2_TR(0x6c6e5e);
__builtin_memmove((R+24),(R+4),4);
}
B6c6e60:{NFSU2_TR(0x6c6e60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6e66:{NFSU2_TR(0x6c6e66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6c6e68:{NFSU2_TR(0x6c6e68);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c6e6a:{NFSU2_TR(0x6c6e6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6e6d:{NFSU2_TR(0x6c6e6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6e70:{NFSU2_TR(0x6c6e70);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c6e72:{NFSU2_TR(0x6c6e72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6e75:{NFSU2_TR(0x6c6e75);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6c6e76:{NFSU2_TR(0x6c6e76);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6e77:{NFSU2_TR(0x6c6e77);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B6c6e7d:{NFSU2_TR(0x6c6e7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6e7e:{NFSU2_TR(0x6c6e7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c6e81:{NFSU2_TR(0x6c6e81);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6e82:{NFSU2_TR(0x6c6e82);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c6e88:{NFSU2_TR(0x6c6e88);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6e89:{NFSU2_TR(0x6c6e89);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c6e8c:{NFSU2_TR(0x6c6e8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6e8d:{NFSU2_TR(0x6c6e8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff08ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c6e93:{NFSU2_TR(0x6c6e93);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6e94:{NFSU2_TR(0x6c6e94);
u8 U[4];
w4(U+0,u32(0x7bde80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6e99:{NFSU2_TR(0x6c6e99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6e9a:{NFSU2_TR(0x6c6e9a);
__builtin_memmove((R+4),(R+24),4);
}
B6c6e9c:{NFSU2_TR(0x6c6e9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6e9f:{NFSU2_TR(0x6c6e9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6ea6:{NFSU2_TR(0x6c6ea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6ead:{NFSU2_TR(0x6c6ead);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6eb2ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c6eb2:L6c6eb2:{c.instructions+=2;NFSU2_TR(0x6c6eb2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c6eb4:{NFSU2_TR(0x6c6eb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6ee3;}}
}
B6c6eb6:L6c6eb6:{c.instructions+=15;NFSU2_TR(0x6c6eb6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6eb7:{NFSU2_TR(0x6c6eb7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6eb8:{NFSU2_TR(0x6c6eb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c6ebb:{NFSU2_TR(0x6c6ebb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6ebc:{NFSU2_TR(0x6c6ebc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c6ec2:{NFSU2_TR(0x6c6ec2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6ec3:{NFSU2_TR(0x6c6ec3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c6ec6:{NFSU2_TR(0x6c6ec6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6ec7:{NFSU2_TR(0x6c6ec7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff08ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c6ecd:{NFSU2_TR(0x6c6ecd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6ece:{NFSU2_TR(0x6c6ece);
u8 U[4];
w4(U+0,u32(0x7bdf00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6ed3:{NFSU2_TR(0x6c6ed3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c6ed9:{NFSU2_TR(0x6c6ed9);
__builtin_memmove((R+4),(R+24),4);
}
B6c6edb:{NFSU2_TR(0x6c6edb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6ede:{NFSU2_TR(0x6c6ede);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6ee3ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c6ee3:L6c6ee3:{c.instructions+=2;NFSU2_TR(0x6c6ee3);
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
B6c6ee5:{NFSU2_TR(0x6c6ee5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6fad;}}
}
B6c6eeb:L6c6eeb:{c.instructions+=3;NFSU2_TR(0x6c6eeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6eee:{NFSU2_TR(0x6c6eee);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c6ef0:{NFSU2_TR(0x6c6ef0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c6f24;}}
}
B6c6ef2:L6c6ef2:{c.instructions+=6;NFSU2_TR(0x6c6ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6ef5:{NFSU2_TR(0x6c6ef5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c6ef8:{NFSU2_TR(0x6c6ef8);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff48ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c6eff:{NFSU2_TR(0x6c6eff);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff58ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c6f06:{NFSU2_TR(0x6c6f06);
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
B6c6f08:{NFSU2_TR(0x6c6f08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6f41;}}
}
B6c6f0a:L6c6f0a:{c.instructions+=2;NFSU2_TR(0x6c6f0a);
u8 U[30];
w4(U+0,u32(u32(u32(0xffffff68ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+22))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+22)));
w4(U+26,u32(u32(r4(R+4))-u32(r4(U+22))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B6c6f11:{NFSU2_TR(0x6c6f11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6f41;}}
}
B6c6f13:L6c6f13:{c.instructions+=2;NFSU2_TR(0x6c6f13);
u8 U[30];
w4(U+0,u32(u32(u32(0xffffff78ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+22))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+22)));
w4(U+26,u32(u32(r4(R+8))-u32(r4(U+22))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B6c6f1a:{NFSU2_TR(0x6c6f1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6f41;}}
}
B6c6f1c:L6c6f1c:{c.instructions+=3;NFSU2_TR(0x6c6f1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6f1f:{NFSU2_TR(0x6c6f1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6c6f22:{NFSU2_TR(0x6c6f22);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6ef2u);}goto L6c6ef2;}}
}
B6c6f24:L6c6f24:{c.instructions+=6;NFSU2_TR(0x6c6f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6f2a:{NFSU2_TR(0x6c6f2a);
__builtin_memmove((R+4),(R+28),4);
}
B6c6f2c:{NFSU2_TR(0x6c6f2c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c6f2e:{NFSU2_TR(0x6c6f2e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6c6f34:{NFSU2_TR(0x6c6f34);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c6f37:{NFSU2_TR(0x6c6f37);
if(r1(R+518)){{goto L6c6f45;}}
}
B6c6f39:L6c6f39:{c.instructions+=2;NFSU2_TR(0x6c6f39);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x73700000ull))));
}
B6c6f3f:{NFSU2_TR(0x6c6f3f);
{goto L6c6f4b;}
}
B6c6f41:L6c6f41:{c.instructions+=2;NFSU2_TR(0x6c6f41);
__builtin_memmove((R+0),(R+12),4);
}
B6c6f43:{NFSU2_TR(0x6c6f43);
{goto L6c6fad;}
}
B6c6f45:L6c6f45:{c.instructions+=1;NFSU2_TR(0x6c6f45);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x73800000ull))));
}
B6c6f4b:L6c6f4b:{c.instructions+=10;NFSU2_TR(0x6c6f4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6f4c:{NFSU2_TR(0x6c6f4c);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6c6f4e:{NFSU2_TR(0x6c6f4e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6f4f:{NFSU2_TR(0x6c6f4f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c6f52:{NFSU2_TR(0x6c6f52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6f53:{NFSU2_TR(0x6c6f53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6c6f55:{NFSU2_TR(0x6c6f55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6f56:{NFSU2_TR(0x6c6f56);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c6f59:{NFSU2_TR(0x6c6f59);
__builtin_memmove((R+4),(R+24),4);
}
B6c6f5b:{NFSU2_TR(0x6c6f5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c6f60ull));
TAIL_STATIC(0x699c39u,699);
}
B6c6f60:L6c6f60:{c.instructions+=3;NFSU2_TR(0x6c6f60);
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
B6c6f63:{NFSU2_TR(0x6c6f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6f66:{NFSU2_TR(0x6c6f66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c6f6f;}}
}
B6c6f68:L6c6f68:{c.instructions+=2;NFSU2_TR(0x6c6f68);
w4(R+0,u32(0x8007000eull));
}
B6c6f6d:{NFSU2_TR(0x6c6f6d);
{goto L6c6fad;}
}
B6c6f6f:L6c6f6f:{c.instructions+=3;NFSU2_TR(0x6c6f6f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c6f71:{NFSU2_TR(0x6c6f71);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c6f73:{NFSU2_TR(0x6c6f73);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c6fab;}}
}
B6c6f75:L6c6f75:{c.instructions+=3;NFSU2_TR(0x6c6f75);
__builtin_memmove((R+0),(R+28),4);
}
B6c6f77:{NFSU2_TR(0x6c6f77);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c6f7a:{NFSU2_TR(0x6c6f7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6f7d:L6c6f7d:{c.instructions+=13;NFSU2_TR(0x6c6f7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6f83:{NFSU2_TR(0x6c6f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6f86:{NFSU2_TR(0x6c6f86);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff48ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c6f8d:{NFSU2_TR(0x6c6f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c6f90:{NFSU2_TR(0x6c6f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6f94:{NFSU2_TR(0x6c6f94);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c6f97:{NFSU2_TR(0x6c6f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6f9d:{NFSU2_TR(0x6c6f9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c6fa0:{NFSU2_TR(0x6c6fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c6fa3:{NFSU2_TR(0x6c6fa3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c6fa4:{NFSU2_TR(0x6c6fa4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6c6fa6:{NFSU2_TR(0x6c6fa6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c6fa9:{NFSU2_TR(0x6c6fa9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c6f7du);}goto L6c6f7d;}}
}
B6c6fab:L6c6fab:{c.instructions+=1;NFSU2_TR(0x6c6fab);
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
B6c6fad:L6c6fad:{c.instructions+=5;NFSU2_TR(0x6c6fad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c6fae:{NFSU2_TR(0x6c6fae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c6faf:{NFSU2_TR(0x6c6faf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c6fb0:{NFSU2_TR(0x6c6fb0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c6fb1:{NFSU2_TR(0x6c6fb1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c6fb2:L6c6fb2:{c.instructions+=21;NFSU2_TR(0x6c6fb2);
__builtin_memmove((R+28),(R+28),4);
}
B6c6fb4:{NFSU2_TR(0x6c6fb4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6fb5:{NFSU2_TR(0x6c6fb5);
__builtin_memmove((R+20),(R+16),4);
}
B6c6fb7:{NFSU2_TR(0x6c6fb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xfcull))));
}
B6c6fbd:{NFSU2_TR(0x6c6fbd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6fbe:{NFSU2_TR(0x6c6fbe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6fbf:{NFSU2_TR(0x6c6fbf);
__builtin_memmove((R+24),(R+4),4);
}
B6c6fc1:{NFSU2_TR(0x6c6fc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c6fc7:{NFSU2_TR(0x6c6fc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c6fc9:{NFSU2_TR(0x6c6fc9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6fca:{NFSU2_TR(0x6c6fca);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c6fcc:{NFSU2_TR(0x6c6fcc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c6fce:{NFSU2_TR(0x6c6fce);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c6fcf:{NFSU2_TR(0x6c6fcf);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c6fd4:{NFSU2_TR(0x6c6fd4);
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
B6c6fd6:{NFSU2_TR(0x6c6fd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6fd9:{NFSU2_TR(0x6c6fd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6fdc:{NFSU2_TR(0x6c6fdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c6fdf:{NFSU2_TR(0x6c6fdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6fe6:{NFSU2_TR(0x6c6fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c6fed:{NFSU2_TR(0x6c6fed);
if(r1(R+518)){{goto L6c6ff6;}}
}
B6c6fef:L6c6fef:{c.instructions+=2;NFSU2_TR(0x6c6fef);
__builtin_memmove((R+0),(R+28),4);
}
B6c6ff1:{NFSU2_TR(0x6c6ff1);
TAIL_STATIC(0x6c71abu,6c7);
}
B6c6ff6:L6c6ff6:{c.instructions+=5;NFSU2_TR(0x6c6ff6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6ff7:{NFSU2_TR(0x6c6ff7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6ff8:{NFSU2_TR(0x6c6ff8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c6ffb:{NFSU2_TR(0x6c6ffb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c6ffc:{NFSU2_TR(0x6c6ffc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((R+0),(U+0),4);
TAIL_STATIC(0x6c7002u,6c7);
}
XIT:NFSU2_TR_EXIT(0x6c6,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
