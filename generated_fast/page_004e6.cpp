#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4a0(u8* __restrict R,Cpu& c);
u32 body_4a1(u8* __restrict R,Cpu& c);
u32 body_4bc(u8* __restrict R,Cpu& c);
u32 body_4bd(u8* __restrict R,Cpu& c);
u32 body_4cf(u8* __restrict R,Cpu& c);
u32 body_4d3(u8* __restrict R,Cpu& c);
u32 body_4d4(u8* __restrict R,Cpu& c);
u32 body_4d5(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_4e7(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_515(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58b(u8* __restrict R,Cpu& c);
u32 body_58c(u8* __restrict R,Cpu& c);
u32 body_58e(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_5ac(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_73e(u8* __restrict R,Cpu& c);
u32 body_73f(u8* __restrict R,Cpu& c);
u32 body_740(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4e6,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4e6,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4e6(u8* __restrict R,Cpu& c);
u32 page_4e6(Cpu& c){return body_4e6(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4e6(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4e6001:goto L4e6001;
case 0x4e6006:goto L4e6006;
case 0x4e6009:c.instructions+=5;goto B4e6009;
case 0x4e600c:c.instructions+=4;goto B4e600c;
case 0x4e6011:c.instructions+=3;goto B4e6011;
case 0x4e6016:c.instructions+=2;goto B4e6016;
case 0x4e601a:c.instructions+=1;goto B4e601a;
case 0x4e601f:goto L4e601f;
case 0x4e6023:c.instructions+=3;goto B4e6023;
case 0x4e6024:c.instructions+=2;goto B4e6024;
case 0x4e6025:c.instructions+=1;goto B4e6025;
case 0x4e602a:goto L4e602a;
case 0x4e602d:c.instructions+=2;goto B4e602d;
case 0x4e602e:c.instructions+=1;goto B4e602e;
case 0x4e6033:goto L4e6033;
case 0x4e6038:c.instructions+=3;goto B4e6038;
case 0x4e603b:c.instructions+=2;goto B4e603b;
case 0x4e603d:c.instructions+=1;goto B4e603d;
case 0x4e603f:goto L4e603f;
case 0x4e6046:c.instructions+=2;goto B4e6046;
case 0x4e6048:c.instructions+=1;goto B4e6048;
case 0x4e604a:goto L4e604a;
case 0x4e604b:c.instructions+=1;goto B4e604b;
case 0x4e604d:goto L4e604d;
case 0x4e604f:goto L4e604f;
case 0x4e6050:c.instructions+=1;goto B4e6050;
case 0x4e6055:goto L4e6055;
case 0x4e605c:c.instructions+=1;goto B4e605c;
case 0x4e605e:goto L4e605e;
case 0x4e6063:c.instructions+=1;goto B4e6063;
case 0x4e6068:goto L4e6068;
case 0x4e6072:c.instructions+=4;goto B4e6072;
case 0x4e6075:c.instructions+=3;goto B4e6075;
case 0x4e6079:c.instructions+=2;goto B4e6079;
case 0x4e607e:c.instructions+=1;goto B4e607e;
case 0x4e6083:goto L4e6083;
case 0x4e6084:c.instructions+=6;goto B4e6084;
case 0x4e6085:c.instructions+=5;goto B4e6085;
case 0x4e6086:c.instructions+=4;goto B4e6086;
case 0x4e6088:c.instructions+=3;goto B4e6088;
case 0x4e608c:c.instructions+=2;goto B4e608c;
case 0x4e6094:c.instructions+=1;goto B4e6094;
case 0x4e6099:goto L4e6099;
case 0x4e609a:c.instructions+=6;goto B4e609a;
case 0x4e609e:c.instructions+=5;goto B4e609e;
case 0x4e609f:c.instructions+=4;goto B4e609f;
case 0x4e60a0:c.instructions+=3;goto B4e60a0;
case 0x4e60a5:c.instructions+=2;goto B4e60a5;
case 0x4e60ad:c.instructions+=1;goto B4e60ad;
case 0x4e60b2:goto L4e60b2;
case 0x4e60b7:c.instructions+=1;goto B4e60b7;
case 0x4e60bc:goto L4e60bc;
case 0x4e60bf:c.instructions+=2;goto B4e60bf;
case 0x4e60c1:c.instructions+=1;goto B4e60c1;
case 0x4e60c3:goto L4e60c3;
case 0x4e60c8:c.instructions+=1;goto B4e60c8;
case 0x4e60cd:goto L4e60cd;
case 0x4e60d0:c.instructions+=2;goto B4e60d0;
case 0x4e60d2:c.instructions+=1;goto B4e60d2;
case 0x4e60d4:goto L4e60d4;
case 0x4e60d9:c.instructions+=1;goto B4e60d9;
case 0x4e60de:goto L4e60de;
case 0x4e60e1:c.instructions+=2;goto B4e60e1;
case 0x4e60e3:c.instructions+=1;goto B4e60e3;
case 0x4e60e5:goto L4e60e5;
case 0x4e60ea:c.instructions+=1;goto B4e60ea;
case 0x4e60ef:goto L4e60ef;
case 0x4e60f2:c.instructions+=2;goto B4e60f2;
case 0x4e60f4:c.instructions+=1;goto B4e60f4;
case 0x4e60f6:goto L4e60f6;
case 0x4e60f9:c.instructions+=1;goto B4e60f9;
case 0x4e60fb:goto L4e60fb;
case 0x4e60fd:goto L4e60fd;
case 0x4e6101:c.instructions+=3;goto B4e6101;
case 0x4e6102:c.instructions+=2;goto B4e6102;
case 0x4e6107:c.instructions+=1;goto B4e6107;
case 0x4e610c:goto L4e610c;
case 0x4e610e:c.instructions+=2;goto B4e610e;
case 0x4e6118:c.instructions+=1;goto B4e6118;
case 0x4e611a:goto L4e611a;
case 0x4e611c:c.instructions+=3;goto B4e611c;
case 0x4e6121:c.instructions+=2;goto B4e6121;
case 0x4e6123:c.instructions+=1;goto B4e6123;
case 0x4e6128:goto L4e6128;
case 0x4e612d:c.instructions+=1;goto B4e612d;
case 0x4e6132:goto L4e6132;
case 0x4e6135:c.instructions+=2;goto B4e6135;
case 0x4e6137:c.instructions+=1;goto B4e6137;
case 0x4e6139:goto L4e6139;
case 0x4e613a:c.instructions+=5;goto B4e613a;
case 0x4e613b:c.instructions+=4;goto B4e613b;
case 0x4e613c:c.instructions+=3;goto B4e613c;
case 0x4e6141:c.instructions+=2;goto B4e6141;
case 0x4e6142:c.instructions+=1;goto B4e6142;
case 0x4e6147:goto L4e6147;
case 0x4e614a:goto L4e614a;
case 0x4e614c:c.instructions+=1;goto B4e614c;
case 0x4e6151:goto L4e6151;
case 0x4e6158:c.instructions+=2;goto B4e6158;
case 0x4e6160:c.instructions+=1;goto B4e6160;
case 0x4e6165:goto L4e6165;
case 0x4e616c:c.instructions+=8;goto B4e616c;
case 0x4e616e:c.instructions+=7;goto B4e616e;
case 0x4e616f:c.instructions+=6;goto B4e616f;
case 0x4e6170:c.instructions+=5;goto B4e6170;
case 0x4e6177:c.instructions+=4;goto B4e6177;
case 0x4e6178:c.instructions+=3;goto B4e6178;
case 0x4e617a:c.instructions+=2;goto B4e617a;
case 0x4e617b:c.instructions+=1;goto B4e617b;
case 0x4e6180:goto L4e6180;
case 0x4e6181:c.instructions+=2;goto B4e6181;
case 0x4e6183:c.instructions+=1;goto B4e6183;
case 0x4e6188:goto L4e6188;
case 0x4e618d:c.instructions+=1;goto B4e618d;
case 0x4e618f:goto L4e618f;
case 0x4e6190:c.instructions+=1;goto B4e6190;
case 0x4e6195:goto L4e6195;
case 0x4e6198:goto L4e6198;
case 0x4e619a:c.instructions+=2;goto B4e619a;
case 0x4e619b:c.instructions+=1;goto B4e619b;
case 0x4e61a0:goto L4e61a0;
case 0x4e61a2:c.instructions+=13;goto B4e61a2;
case 0x4e61a7:c.instructions+=12;goto B4e61a7;
case 0x4e61ad:c.instructions+=11;goto B4e61ad;
case 0x4e61ae:c.instructions+=10;goto B4e61ae;
case 0x4e61b5:c.instructions+=9;goto B4e61b5;
case 0x4e61b6:c.instructions+=8;goto B4e61b6;
case 0x4e61b7:c.instructions+=7;goto B4e61b7;
case 0x4e61b9:c.instructions+=6;goto B4e61b9;
case 0x4e61bd:c.instructions+=5;goto B4e61bd;
case 0x4e61c3:c.instructions+=4;goto B4e61c3;
case 0x4e61c9:c.instructions+=3;goto B4e61c9;
case 0x4e61cb:c.instructions+=2;goto B4e61cb;
case 0x4e61d3:c.instructions+=1;goto B4e61d3;
case 0x4e61d5:goto L4e61d5;
case 0x4e61d6:c.instructions+=1;goto B4e61d6;
case 0x4e61db:goto L4e61db;
case 0x4e61de:c.instructions+=1;goto B4e61de;
case 0x4e61e8:goto L4e61e8;
case 0x4e61ea:c.instructions+=2;goto B4e61ea;
case 0x4e61f2:c.instructions+=1;goto B4e61f2;
case 0x4e61f7:goto L4e61f7;
case 0x4e61fb:c.instructions+=4;goto B4e61fb;
case 0x4e61fc:c.instructions+=3;goto B4e61fc;
case 0x4e6203:c.instructions+=2;goto B4e6203;
case 0x4e6206:c.instructions+=1;goto B4e6206;
case 0x4e6210:goto L4e6210;
case 0x4e6212:c.instructions+=12;goto B4e6212;
case 0x4e6217:c.instructions+=11;goto B4e6217;
case 0x4e621d:c.instructions+=10;goto B4e621d;
case 0x4e621e:c.instructions+=9;goto B4e621e;
case 0x4e6225:c.instructions+=8;goto B4e6225;
case 0x4e6226:c.instructions+=7;goto B4e6226;
case 0x4e622a:c.instructions+=6;goto B4e622a;
case 0x4e622b:c.instructions+=5;goto B4e622b;
case 0x4e622c:c.instructions+=4;goto B4e622c;
case 0x4e622e:c.instructions+=3;goto B4e622e;
case 0x4e622f:c.instructions+=2;goto B4e622f;
case 0x4e6233:c.instructions+=1;goto B4e6233;
case 0x4e6238:goto L4e6238;
case 0x4e623a:c.instructions+=5;goto B4e623a;
case 0x4e623d:c.instructions+=4;goto B4e623d;
case 0x4e6241:c.instructions+=3;goto B4e6241;
case 0x4e6247:c.instructions+=2;goto B4e6247;
case 0x4e624a:c.instructions+=1;goto B4e624a;
case 0x4e624f:goto L4e624f;
case 0x4e6252:c.instructions+=5;goto B4e6252;
case 0x4e6257:c.instructions+=4;goto B4e6257;
case 0x4e625c:c.instructions+=3;goto B4e625c;
case 0x4e625d:c.instructions+=2;goto B4e625d;
case 0x4e6262:c.instructions+=1;goto B4e6262;
case 0x4e6267:goto L4e6267;
case 0x4e626a:c.instructions+=2;goto B4e626a;
case 0x4e626b:c.instructions+=1;goto B4e626b;
case 0x4e6270:goto L4e6270;
case 0x4e6273:c.instructions+=3;goto B4e6273;
case 0x4e6276:c.instructions+=2;goto B4e6276;
case 0x4e627b:c.instructions+=1;goto B4e627b;
case 0x4e6280:goto L4e6280;
case 0x4e6281:c.instructions+=3;goto B4e6281;
case 0x4e6286:c.instructions+=2;goto B4e6286;
case 0x4e628b:c.instructions+=1;goto B4e628b;
case 0x4e6290:goto L4e6290;
case 0x4e6293:c.instructions+=3;goto B4e6293;
case 0x4e6294:c.instructions+=2;goto B4e6294;
case 0x4e6295:c.instructions+=1;goto B4e6295;
case 0x4e629a:goto L4e629a;
case 0x4e629d:c.instructions+=2;goto B4e629d;
case 0x4e629f:c.instructions+=1;goto B4e629f;
case 0x4e62a4:goto L4e62a4;
case 0x4e62a6:c.instructions+=1;goto B4e62a6;
case 0x4e62a8:goto L4e62a8;
case 0x4e62ab:c.instructions+=2;goto B4e62ab;
case 0x4e62b0:c.instructions+=1;goto B4e62b0;
case 0x4e62b5:goto L4e62b5;
case 0x4e62b6:c.instructions+=5;goto B4e62b6;
case 0x4e62bb:c.instructions+=4;goto B4e62bb;
case 0x4e62c0:c.instructions+=3;goto B4e62c0;
case 0x4e62c5:c.instructions+=2;goto B4e62c5;
case 0x4e62c6:c.instructions+=1;goto B4e62c6;
case 0x4e62cb:goto L4e62cb;
case 0x4e62ce:c.instructions+=1;goto B4e62ce;
case 0x4e62d1:goto L4e62d1;
case 0x4e62d3:c.instructions+=1;goto B4e62d3;
case 0x4e62d8:goto L4e62d8;
case 0x4e62dc:c.instructions+=6;goto B4e62dc;
case 0x4e62dd:c.instructions+=5;goto B4e62dd;
case 0x4e62df:c.instructions+=4;goto B4e62df;
case 0x4e62e0:c.instructions+=3;goto B4e62e0;
case 0x4e62e7:c.instructions+=2;goto B4e62e7;
case 0x4e62ea:c.instructions+=1;goto B4e62ea;
case 0x4e62f0:goto L4e62f0;
case 0x4e62f1:c.instructions+=2;goto B4e62f1;
case 0x4e62f3:c.instructions+=1;goto B4e62f3;
case 0x4e62f8:goto L4e62f8;
case 0x4e62fd:c.instructions+=1;goto B4e62fd;
case 0x4e62ff:goto L4e62ff;
case 0x4e6300:c.instructions+=1;goto B4e6300;
case 0x4e6305:goto L4e6305;
case 0x4e6308:goto L4e6308;
case 0x4e630a:c.instructions+=2;goto B4e630a;
case 0x4e630b:c.instructions+=1;goto B4e630b;
case 0x4e6310:goto L4e6310;
case 0x4e6311:c.instructions+=4;goto B4e6311;
case 0x4e6312:c.instructions+=3;goto B4e6312;
case 0x4e6313:c.instructions+=2;goto B4e6313;
case 0x4e6315:c.instructions+=1;goto B4e6315;
case 0x4e631a:goto L4e631a;
case 0x4e631c:c.instructions+=6;goto B4e631c;
case 0x4e631f:c.instructions+=5;goto B4e631f;
case 0x4e6323:c.instructions+=4;goto B4e6323;
case 0x4e6326:c.instructions+=3;goto B4e6326;
case 0x4e6327:c.instructions+=2;goto B4e6327;
case 0x4e6328:c.instructions+=1;goto B4e6328;
case 0x4e632d:goto L4e632d;
case 0x4e6330:c.instructions+=3;goto B4e6330;
case 0x4e6331:c.instructions+=2;goto B4e6331;
case 0x4e6334:c.instructions+=1;goto B4e6334;
case 0x4e6339:goto L4e6339;
case 0x4e633c:c.instructions+=3;goto B4e633c;
case 0x4e633d:c.instructions+=2;goto B4e633d;
case 0x4e633f:c.instructions+=1;goto B4e633f;
case 0x4e6344:goto L4e6344;
case 0x4e6345:c.instructions+=3;goto B4e6345;
case 0x4e634a:c.instructions+=2;goto B4e634a;
case 0x4e634f:c.instructions+=1;goto B4e634f;
case 0x4e6354:goto L4e6354;
case 0x4e6357:c.instructions+=3;goto B4e6357;
case 0x4e6358:c.instructions+=2;goto B4e6358;
case 0x4e6359:c.instructions+=1;goto B4e6359;
case 0x4e635e:goto L4e635e;
case 0x4e6361:c.instructions+=3;goto B4e6361;
case 0x4e6363:c.instructions+=2;goto B4e6363;
case 0x4e6368:c.instructions+=1;goto B4e6368;
case 0x4e636d:goto L4e636d;
case 0x4e636f:c.instructions+=1;goto B4e636f;
case 0x4e6374:goto L4e6374;
case 0x4e6377:c.instructions+=5;goto B4e6377;
case 0x4e6378:c.instructions+=4;goto B4e6378;
case 0x4e637d:c.instructions+=3;goto B4e637d;
case 0x4e637e:c.instructions+=2;goto B4e637e;
case 0x4e6380:c.instructions+=1;goto B4e6380;
case 0x4e6385:goto L4e6385;
case 0x4e6387:c.instructions+=2;goto B4e6387;
case 0x4e638a:c.instructions+=1;goto B4e638a;
case 0x4e638c:goto L4e638c;
case 0x4e638f:c.instructions+=2;goto B4e638f;
case 0x4e6394:c.instructions+=1;goto B4e6394;
case 0x4e6399:goto L4e6399;
case 0x4e639a:c.instructions+=6;goto B4e639a;
case 0x4e639f:c.instructions+=5;goto B4e639f;
case 0x4e63a4:c.instructions+=4;goto B4e63a4;
case 0x4e63a9:c.instructions+=3;goto B4e63a9;
case 0x4e63ae:c.instructions+=2;goto B4e63ae;
case 0x4e63af:c.instructions+=1;goto B4e63af;
case 0x4e63b4:goto L4e63b4;
case 0x4e63b7:c.instructions+=1;goto B4e63b7;
case 0x4e63b9:goto L4e63b9;
case 0x4e63bb:goto L4e63bb;
case 0x4e63bd:c.instructions+=2;goto B4e63bd;
case 0x4e63bf:c.instructions+=1;goto B4e63bf;
case 0x4e63c4:goto L4e63c4;
case 0x4e63c6:goto L4e63c6;
case 0x4e63c9:c.instructions+=2;goto B4e63c9;
case 0x4e63ce:c.instructions+=1;goto B4e63ce;
case 0x4e63d3:goto L4e63d3;
case 0x4e63d4:c.instructions+=5;goto B4e63d4;
case 0x4e63d9:c.instructions+=4;goto B4e63d9;
case 0x4e63de:c.instructions+=3;goto B4e63de;
case 0x4e63e3:c.instructions+=2;goto B4e63e3;
case 0x4e63e4:c.instructions+=1;goto B4e63e4;
case 0x4e63e9:goto L4e63e9;
case 0x4e63ec:c.instructions+=1;goto B4e63ec;
case 0x4e63ef:goto L4e63ef;
case 0x4e63f2:c.instructions+=4;goto B4e63f2;
case 0x4e63f4:c.instructions+=3;goto B4e63f4;
case 0x4e63f7:c.instructions+=2;goto B4e63f7;
case 0x4e63fc:c.instructions+=1;goto B4e63fc;
case 0x4e63fe:goto L4e63fe;
case 0x4e6403:goto L4e6403;
case 0x4e6404:c.instructions+=2;goto B4e6404;
case 0x4e6405:c.instructions+=1;goto B4e6405;
case 0x4e640a:goto L4e640a;
case 0x4e640b:c.instructions+=1;goto B4e640b;
case 0x4e6410:goto L4e6410;
case 0x4e6412:goto L4e6412;
case 0x4e6417:goto L4e6417;
case 0x4e6418:c.instructions+=2;goto B4e6418;
case 0x4e6419:c.instructions+=1;goto B4e6419;
case 0x4e641e:goto L4e641e;
case 0x4e641f:c.instructions+=1;goto B4e641f;
case 0x4e6424:goto L4e6424;
case 0x4e6427:c.instructions+=5;goto B4e6427;
case 0x4e642a:c.instructions+=4;goto B4e642a;
case 0x4e642d:c.instructions+=3;goto B4e642d;
case 0x4e6430:c.instructions+=2;goto B4e6430;
case 0x4e6435:c.instructions+=1;goto B4e6435;
case 0x4e6437:goto L4e6437;
case 0x4e643c:goto L4e643c;
case 0x4e643d:c.instructions+=2;goto B4e643d;
case 0x4e643e:c.instructions+=1;goto B4e643e;
case 0x4e6443:goto L4e6443;
case 0x4e6444:c.instructions+=1;goto B4e6444;
case 0x4e6449:goto L4e6449;
case 0x4e644c:c.instructions+=4;goto B4e644c;
case 0x4e644d:c.instructions+=3;goto B4e644d;
case 0x4e644e:c.instructions+=2;goto B4e644e;
case 0x4e644f:c.instructions+=1;goto B4e644f;
case 0x4e6450:goto L4e6450;
case 0x4e6455:goto L4e6455;
case 0x4e6456:c.instructions+=2;goto B4e6456;
case 0x4e6457:c.instructions+=1;goto B4e6457;
case 0x4e645c:goto L4e645c;
case 0x4e645d:c.instructions+=1;goto B4e645d;
case 0x4e6462:goto L4e6462;
case 0x4e6465:c.instructions+=4;goto B4e6465;
case 0x4e6466:c.instructions+=3;goto B4e6466;
case 0x4e6467:c.instructions+=2;goto B4e6467;
case 0x4e6468:c.instructions+=1;goto B4e6468;
case 0x4e6470:goto L4e6470;
case 0x4e6474:c.instructions+=4;goto B4e6474;
case 0x4e6477:c.instructions+=3;goto B4e6477;
case 0x4e6479:c.instructions+=2;goto B4e6479;
case 0x4e647a:c.instructions+=1;goto B4e647a;
case 0x4e647c:goto L4e647c;
case 0x4e6480:c.instructions+=3;goto B4e6480;
case 0x4e6483:c.instructions+=2;goto B4e6483;
case 0x4e6488:c.instructions+=1;goto B4e6488;
case 0x4e648d:goto L4e648d;
case 0x4e648e:c.instructions+=6;goto B4e648e;
case 0x4e6493:c.instructions+=5;goto B4e6493;
case 0x4e6498:c.instructions+=4;goto B4e6498;
case 0x4e649d:c.instructions+=3;goto B4e649d;
case 0x4e64a2:c.instructions+=2;goto B4e64a2;
case 0x4e64a3:c.instructions+=1;goto B4e64a3;
case 0x4e64a8:goto L4e64a8;
case 0x4e64ab:c.instructions+=2;goto B4e64ab;
case 0x4e64ac:c.instructions+=1;goto B4e64ac;
case 0x4e64ad:goto L4e64ad;
case 0x4e64b1:c.instructions+=5;goto B4e64b1;
case 0x4e64b3:c.instructions+=4;goto B4e64b3;
case 0x4e64b6:c.instructions+=3;goto B4e64b6;
case 0x4e64b8:c.instructions+=2;goto B4e64b8;
case 0x4e64b9:c.instructions+=1;goto B4e64b9;
case 0x4e64be:goto L4e64be;
case 0x4e64c0:c.instructions+=1;goto B4e64c0;
case 0x4e64c5:goto L4e64c5;
case 0x4e64c7:c.instructions+=2;goto B4e64c7;
case 0x4e64c8:c.instructions+=1;goto B4e64c8;
case 0x4e64d0:goto L4e64d0;
case 0x4e64d2:c.instructions+=7;goto B4e64d2;
case 0x4e64d7:c.instructions+=6;goto B4e64d7;
case 0x4e64dd:c.instructions+=5;goto B4e64dd;
case 0x4e64de:c.instructions+=4;goto B4e64de;
case 0x4e64e5:c.instructions+=3;goto B4e64e5;
case 0x4e64e6:c.instructions+=2;goto B4e64e6;
case 0x4e64eb:c.instructions+=1;goto B4e64eb;
case 0x4e64f0:goto L4e64f0;
case 0x4e64f3:c.instructions+=4;goto B4e64f3;
case 0x4e64f7:c.instructions+=3;goto B4e64f7;
case 0x4e64f9:c.instructions+=2;goto B4e64f9;
case 0x4e6501:c.instructions+=1;goto B4e6501;
case 0x4e6503:goto L4e6503;
case 0x4e6507:c.instructions+=3;goto B4e6507;
case 0x4e6508:c.instructions+=2;goto B4e6508;
case 0x4e650a:c.instructions+=1;goto B4e650a;
case 0x4e650f:goto L4e650f;
case 0x4e6513:c.instructions+=3;goto B4e6513;
case 0x4e651a:c.instructions+=2;goto B4e651a;
case 0x4e651d:c.instructions+=1;goto B4e651d;
case 0x4e651e:goto L4e651e;
case 0x4e6522:c.instructions+=4;goto B4e6522;
case 0x4e6524:c.instructions+=3;goto B4e6524;
case 0x4e652b:c.instructions+=2;goto B4e652b;
case 0x4e652e:c.instructions+=1;goto B4e652e;
case 0x4e6530:goto L4e6530;
case 0x4e6532:c.instructions+=7;goto B4e6532;
case 0x4e6537:c.instructions+=6;goto B4e6537;
case 0x4e653d:c.instructions+=5;goto B4e653d;
case 0x4e653e:c.instructions+=4;goto B4e653e;
case 0x4e6545:c.instructions+=3;goto B4e6545;
case 0x4e6546:c.instructions+=2;goto B4e6546;
case 0x4e654b:c.instructions+=1;goto B4e654b;
case 0x4e6550:goto L4e6550;
case 0x4e6553:c.instructions+=4;goto B4e6553;
case 0x4e6557:c.instructions+=3;goto B4e6557;
case 0x4e6559:c.instructions+=2;goto B4e6559;
case 0x4e6561:c.instructions+=1;goto B4e6561;
case 0x4e6563:goto L4e6563;
case 0x4e6567:c.instructions+=3;goto B4e6567;
case 0x4e6568:c.instructions+=2;goto B4e6568;
case 0x4e656a:c.instructions+=1;goto B4e656a;
case 0x4e656f:goto L4e656f;
case 0x4e6573:c.instructions+=3;goto B4e6573;
case 0x4e657a:c.instructions+=2;goto B4e657a;
case 0x4e657d:c.instructions+=1;goto B4e657d;
case 0x4e657e:goto L4e657e;
case 0x4e6582:c.instructions+=4;goto B4e6582;
case 0x4e6584:c.instructions+=3;goto B4e6584;
case 0x4e658b:c.instructions+=2;goto B4e658b;
case 0x4e658e:c.instructions+=1;goto B4e658e;
case 0x4e6590:goto L4e6590;
case 0x4e6591:c.instructions+=2;goto B4e6591;
case 0x4e6593:c.instructions+=1;goto B4e6593;
case 0x4e6598:goto L4e6598;
case 0x4e659d:c.instructions+=1;goto B4e659d;
case 0x4e659f:goto L4e659f;
case 0x4e65a0:c.instructions+=1;goto B4e65a0;
case 0x4e65a5:goto L4e65a5;
case 0x4e65a8:goto L4e65a8;
case 0x4e65aa:c.instructions+=2;goto B4e65aa;
case 0x4e65ab:c.instructions+=1;goto B4e65ab;
case 0x4e65b0:goto L4e65b0;
case 0x4e65b2:c.instructions+=13;goto B4e65b2;
case 0x4e65b7:c.instructions+=12;goto B4e65b7;
case 0x4e65bd:c.instructions+=11;goto B4e65bd;
case 0x4e65be:c.instructions+=10;goto B4e65be;
case 0x4e65c5:c.instructions+=9;goto B4e65c5;
case 0x4e65c6:c.instructions+=8;goto B4e65c6;
case 0x4e65c7:c.instructions+=7;goto B4e65c7;
case 0x4e65c8:c.instructions+=6;goto B4e65c8;
case 0x4e65c9:c.instructions+=5;goto B4e65c9;
case 0x4e65cd:c.instructions+=4;goto B4e65cd;
case 0x4e65cf:c.instructions+=3;goto B4e65cf;
case 0x4e65d0:c.instructions+=2;goto B4e65d0;
case 0x4e65d4:c.instructions+=1;goto B4e65d4;
case 0x4e65d9:goto L4e65d9;
case 0x4e65dc:c.instructions+=18;goto B4e65dc;
case 0x4e65de:c.instructions+=17;goto B4e65de;
case 0x4e65e0:c.instructions+=16;goto B4e65e0;
case 0x4e65e1:c.instructions+=15;goto B4e65e1;
case 0x4e65e2:c.instructions+=14;goto B4e65e2;
case 0x4e65e4:c.instructions+=13;goto B4e65e4;
case 0x4e65e9:c.instructions+=12;goto B4e65e9;
case 0x4e65ee:c.instructions+=11;goto B4e65ee;
case 0x4e65ef:c.instructions+=10;goto B4e65ef;
case 0x4e65f2:c.instructions+=9;goto B4e65f2;
case 0x4e65f6:c.instructions+=8;goto B4e65f6;
case 0x4e65fc:c.instructions+=7;goto B4e65fc;
case 0x4e65ff:c.instructions+=6;goto B4e65ff;
case 0x4e6602:c.instructions+=5;goto B4e6602;
case 0x4e6605:c.instructions+=4;goto B4e6605;
case 0x4e6608:c.instructions+=3;goto B4e6608;
case 0x4e660b:c.instructions+=2;goto B4e660b;
case 0x4e660e:c.instructions+=1;goto B4e660e;
case 0x4e6613:goto L4e6613;
case 0x4e6619:c.instructions+=9;goto B4e6619;
case 0x4e661e:c.instructions+=8;goto B4e661e;
case 0x4e6624:c.instructions+=7;goto B4e6624;
case 0x4e662a:c.instructions+=6;goto B4e662a;
case 0x4e6630:c.instructions+=5;goto B4e6630;
case 0x4e6636:c.instructions+=4;goto B4e6636;
case 0x4e663c:c.instructions+=3;goto B4e663c;
case 0x4e6642:c.instructions+=2;goto B4e6642;
case 0x4e6648:c.instructions+=1;goto B4e6648;
case 0x4e664d:goto L4e664d;
case 0x4e6653:c.instructions+=8;goto B4e6653;
case 0x4e6659:c.instructions+=7;goto B4e6659;
case 0x4e665f:c.instructions+=6;goto B4e665f;
case 0x4e6664:c.instructions+=5;goto B4e6664;
case 0x4e6669:c.instructions+=4;goto B4e6669;
case 0x4e666c:c.instructions+=3;goto B4e666c;
case 0x4e666d:c.instructions+=2;goto B4e666d;
case 0x4e6672:c.instructions+=1;goto B4e6672;
case 0x4e6677:goto L4e6677;
case 0x4e667a:c.instructions+=4;goto B4e667a;
case 0x4e667f:c.instructions+=3;goto B4e667f;
case 0x4e6684:c.instructions+=2;goto B4e6684;
case 0x4e6685:c.instructions+=1;goto B4e6685;
case 0x4e668a:goto L4e668a;
case 0x4e668d:c.instructions+=2;goto B4e668d;
case 0x4e668e:c.instructions+=1;goto B4e668e;
case 0x4e6693:goto L4e6693;
case 0x4e6699:c.instructions+=5;goto B4e6699;
case 0x4e669b:c.instructions+=4;goto B4e669b;
case 0x4e66a0:c.instructions+=3;goto B4e66a0;
case 0x4e66a5:c.instructions+=2;goto B4e66a5;
case 0x4e66a6:c.instructions+=1;goto B4e66a6;
case 0x4e66ab:goto L4e66ab;
case 0x4e66ae:c.instructions+=5;goto B4e66ae;
case 0x4e66b0:c.instructions+=4;goto B4e66b0;
case 0x4e66b5:c.instructions+=3;goto B4e66b5;
case 0x4e66ba:c.instructions+=2;goto B4e66ba;
case 0x4e66bb:c.instructions+=1;goto B4e66bb;
case 0x4e66c0:goto L4e66c0;
case 0x4e66c3:c.instructions+=2;goto B4e66c3;
case 0x4e66c5:c.instructions+=1;goto B4e66c5;
case 0x4e66ca:goto L4e66ca;
case 0x4e66cc:c.instructions+=1;goto B4e66cc;
case 0x4e66d1:goto L4e66d1;
case 0x4e66d3:c.instructions+=1;goto B4e66d3;
case 0x4e66d8:goto L4e66d8;
case 0x4e66da:c.instructions+=2;goto B4e66da;
case 0x4e66dc:c.instructions+=1;goto B4e66dc;
case 0x4e66e1:goto L4e66e1;
case 0x4e66e6:c.instructions+=4;goto B4e66e6;
case 0x4e66ec:c.instructions+=3;goto B4e66ec;
case 0x4e66ed:c.instructions+=2;goto B4e66ed;
case 0x4e66f2:c.instructions+=1;goto B4e66f2;
case 0x4e66f7:goto L4e66f7;
case 0x4e66fd:c.instructions+=2;goto B4e66fd;
case 0x4e66fe:c.instructions+=1;goto B4e66fe;
case 0x4e6703:goto L4e6703;
case 0x4e6706:c.instructions+=2;goto B4e6706;
case 0x4e6708:c.instructions+=1;goto B4e6708;
case 0x4e670a:goto L4e670a;
case 0x4e6710:c.instructions+=3;goto B4e6710;
case 0x4e6711:c.instructions+=2;goto B4e6711;
case 0x4e6712:c.instructions+=1;goto B4e6712;
case 0x4e6717:goto L4e6717;
case 0x4e671a:goto L4e671a;
case 0x4e6720:c.instructions+=1;goto B4e6720;
case 0x4e6725:goto L4e6725;
case 0x4e6729:c.instructions+=9;goto B4e6729;
case 0x4e672a:c.instructions+=8;goto B4e672a;
case 0x4e6734:c.instructions+=7;goto B4e6734;
case 0x4e673b:c.instructions+=6;goto B4e673b;
case 0x4e673d:c.instructions+=5;goto B4e673d;
case 0x4e673e:c.instructions+=4;goto B4e673e;
case 0x4e673f:c.instructions+=3;goto B4e673f;
case 0x4e6746:c.instructions+=2;goto B4e6746;
case 0x4e6749:c.instructions+=1;goto B4e6749;
case 0x4e6750:goto L4e6750;
case 0x4e6751:c.instructions+=2;goto B4e6751;
case 0x4e6753:c.instructions+=1;goto B4e6753;
case 0x4e6758:goto L4e6758;
case 0x4e675d:c.instructions+=1;goto B4e675d;
case 0x4e675f:goto L4e675f;
case 0x4e6760:c.instructions+=1;goto B4e6760;
case 0x4e6765:goto L4e6765;
case 0x4e6768:goto L4e6768;
case 0x4e676a:c.instructions+=2;goto B4e676a;
case 0x4e676b:c.instructions+=1;goto B4e676b;
case 0x4e6770:goto L4e6770;
case 0x4e6774:c.instructions+=4;goto B4e6774;
case 0x4e6779:c.instructions+=3;goto B4e6779;
case 0x4e677a:c.instructions+=2;goto B4e677a;
case 0x4e677c:c.instructions+=1;goto B4e677c;
case 0x4e677e:goto L4e677e;
case 0x4e6781:c.instructions+=2;goto B4e6781;
case 0x4e6782:c.instructions+=1;goto B4e6782;
case 0x4e6787:goto L4e6787;
case 0x4e678a:c.instructions+=2;goto B4e678a;
case 0x4e678b:c.instructions+=1;goto B4e678b;
case 0x4e678e:goto L4e678e;
case 0x4e6794:c.instructions+=2;goto B4e6794;
case 0x4e6796:c.instructions+=1;goto B4e6796;
case 0x4e6798:goto L4e6798;
case 0x4e679d:c.instructions+=1;goto B4e679d;
case 0x4e679f:goto L4e679f;
case 0x4e67a4:c.instructions+=1;goto B4e67a4;
case 0x4e67a6:goto L4e67a6;
case 0x4e67ab:c.instructions+=1;goto B4e67ab;
case 0x4e67ad:goto L4e67ad;
case 0x4e67b2:c.instructions+=1;goto B4e67b2;
case 0x4e67b8:goto L4e67b8;
case 0x4e67bd:c.instructions+=1;goto B4e67bd;
case 0x4e67c3:goto L4e67c3;
case 0x4e67c9:goto L4e67c9;
case 0x4e67ce:c.instructions+=1;goto B4e67ce;
case 0x4e67d4:goto L4e67d4;
case 0x4e67d6:goto L4e67d6;
case 0x4e67db:c.instructions+=1;goto B4e67db;
case 0x4e67dd:goto L4e67dd;
case 0x4e67e3:goto L4e67e3;
case 0x4e67e6:c.instructions+=1;goto B4e67e6;
case 0x4e67e8:goto L4e67e8;
case 0x4e67ed:c.instructions+=1;goto B4e67ed;
case 0x4e67f3:goto L4e67f3;
case 0x4e67f9:c.instructions+=2;goto B4e67f9;
case 0x4e67fb:c.instructions+=1;goto B4e67fb;
case 0x4e6801:goto L4e6801;
case 0x4e6804:c.instructions+=3;goto B4e6804;
case 0x4e6807:c.instructions+=2;goto B4e6807;
case 0x4e6809:c.instructions+=1;goto B4e6809;
case 0x4e680f:goto L4e680f;
case 0x4e6812:c.instructions+=1;goto B4e6812;
case 0x4e6817:goto L4e6817;
case 0x4e6818:c.instructions+=1;goto B4e6818;
case 0x4e681b:goto L4e681b;
case 0x4e681d:c.instructions+=2;goto B4e681d;
case 0x4e681f:c.instructions+=1;goto B4e681f;
case 0x4e6824:goto L4e6824;
case 0x4e6825:c.instructions+=1;goto B4e6825;
case 0x4e6828:goto L4e6828;
case 0x4e682d:c.instructions+=1;goto B4e682d;
case 0x4e6833:goto L4e6833;
case 0x4e6838:c.instructions+=2;goto B4e6838;
case 0x4e683a:c.instructions+=1;goto B4e683a;
case 0x4e683f:goto L4e683f;
case 0x4e6843:c.instructions+=2;goto B4e6843;
case 0x4e6844:c.instructions+=1;goto B4e6844;
case 0x4e6847:goto L4e6847;
case 0x4e6849:c.instructions+=4;goto B4e6849;
case 0x4e684e:c.instructions+=3;goto B4e684e;
case 0x4e6853:c.instructions+=2;goto B4e6853;
case 0x4e6858:c.instructions+=1;goto B4e6858;
case 0x4e685d:goto L4e685d;
case 0x4e6863:c.instructions+=5;goto B4e6863;
case 0x4e6865:c.instructions+=4;goto B4e6865;
case 0x4e686a:c.instructions+=3;goto B4e686a;
case 0x4e686f:c.instructions+=2;goto B4e686f;
case 0x4e6870:c.instructions+=1;goto B4e6870;
case 0x4e6875:goto L4e6875;
case 0x4e6878:c.instructions+=3;goto B4e6878;
case 0x4e687a:c.instructions+=2;goto B4e687a;
case 0x4e687c:c.instructions+=1;goto B4e687c;
case 0x4e6881:goto L4e6881;
case 0x4e6883:c.instructions+=1;goto B4e6883;
case 0x4e6888:goto L4e6888;
case 0x4e6889:c.instructions+=1;goto B4e6889;
case 0x4e688c:goto L4e688c;
case 0x4e6891:c.instructions+=1;goto B4e6891;
case 0x4e6893:goto L4e6893;
case 0x4e6895:goto L4e6895;
case 0x4e689a:c.instructions+=1;goto B4e689a;
case 0x4e689c:goto L4e689c;
case 0x4e68a1:c.instructions+=1;goto B4e68a1;
case 0x4e68a7:goto L4e68a7;
case 0x4e68ae:c.instructions+=3;goto B4e68ae;
case 0x4e68b2:c.instructions+=2;goto B4e68b2;
case 0x4e68b3:c.instructions+=1;goto B4e68b3;
case 0x4e68b6:goto L4e68b6;
case 0x4e68bb:c.instructions+=1;goto B4e68bb;
case 0x4e68c0:goto L4e68c0;
case 0x4e68c3:c.instructions+=2;goto B4e68c3;
case 0x4e68c5:c.instructions+=1;goto B4e68c5;
case 0x4e68cb:goto L4e68cb;
case 0x4e68cc:c.instructions+=2;goto B4e68cc;
case 0x4e68ce:c.instructions+=1;goto B4e68ce;
case 0x4e68d3:goto L4e68d3;
case 0x4e68d4:c.instructions+=1;goto B4e68d4;
case 0x4e68d7:goto L4e68d7;
case 0x4e68dd:c.instructions+=1;goto B4e68dd;
case 0x4e68df:goto L4e68df;
case 0x4e68e9:goto L4e68e9;
case 0x4e68eb:c.instructions+=2;goto B4e68eb;
case 0x4e68ed:c.instructions+=1;goto B4e68ed;
case 0x4e68f2:goto L4e68f2;
case 0x4e68f3:c.instructions+=1;goto B4e68f3;
case 0x4e68f6:goto L4e68f6;
case 0x4e68fb:c.instructions+=1;goto B4e68fb;
case 0x4e6901:goto L4e6901;
case 0x4e6903:c.instructions+=2;goto B4e6903;
case 0x4e6905:c.instructions+=1;goto B4e6905;
case 0x4e690a:goto L4e690a;
case 0x4e690b:c.instructions+=1;goto B4e690b;
case 0x4e690e:goto L4e690e;
case 0x4e6910:c.instructions+=1;goto B4e6910;
case 0x4e6915:goto L4e6915;
case 0x4e6918:c.instructions+=5;goto B4e6918;
case 0x4e691a:c.instructions+=4;goto B4e691a;
case 0x4e691f:c.instructions+=3;goto B4e691f;
case 0x4e6924:c.instructions+=2;goto B4e6924;
case 0x4e6925:c.instructions+=1;goto B4e6925;
case 0x4e692a:goto L4e692a;
case 0x4e692f:c.instructions+=5;goto B4e692f;
case 0x4e6931:c.instructions+=4;goto B4e6931;
case 0x4e6936:c.instructions+=3;goto B4e6936;
case 0x4e693b:c.instructions+=2;goto B4e693b;
case 0x4e693c:c.instructions+=1;goto B4e693c;
case 0x4e6941:goto L4e6941;
case 0x4e6943:c.instructions+=4;goto B4e6943;
case 0x4e6948:c.instructions+=3;goto B4e6948;
case 0x4e694d:c.instructions+=2;goto B4e694d;
case 0x4e6952:c.instructions+=1;goto B4e6952;
case 0x4e6957:goto L4e6957;
case 0x4e695a:c.instructions+=3;goto B4e695a;
case 0x4e695e:c.instructions+=2;goto B4e695e;
case 0x4e695f:c.instructions+=1;goto B4e695f;
case 0x4e6962:goto L4e6962;
case 0x4e6967:c.instructions+=1;goto B4e6967;
case 0x4e696d:goto L4e696d;
case 0x4e696f:goto L4e696f;
case 0x4e6974:c.instructions+=1;goto B4e6974;
case 0x4e6976:goto L4e6976;
case 0x4e6978:goto L4e6978;
case 0x4e697d:c.instructions+=1;goto B4e697d;
case 0x4e697f:goto L4e697f;
case 0x4e6984:c.instructions+=1;goto B4e6984;
case 0x4e698a:goto L4e698a;
case 0x4e698c:c.instructions+=1;goto B4e698c;
case 0x4e6991:goto L4e6991;
case 0x4e6992:c.instructions+=1;goto B4e6992;
case 0x4e6995:goto L4e6995;
case 0x4e6997:c.instructions+=2;goto B4e6997;
case 0x4e6999:c.instructions+=1;goto B4e6999;
case 0x4e699e:goto L4e699e;
case 0x4e699f:c.instructions+=1;goto B4e699f;
case 0x4e69a2:goto L4e69a2;
case 0x4e69a4:c.instructions+=1;goto B4e69a4;
case 0x4e69a9:goto L4e69a9;
case 0x4e69aa:c.instructions+=1;goto B4e69aa;
case 0x4e69ad:goto L4e69ad;
case 0x4e69b2:c.instructions+=1;goto B4e69b2;
case 0x4e69b8:goto L4e69b8;
case 0x4e69ba:c.instructions+=1;goto B4e69ba;
case 0x4e69bf:goto L4e69bf;
case 0x4e69c0:c.instructions+=1;goto B4e69c0;
case 0x4e69c3:goto L4e69c3;
case 0x4e69c9:c.instructions+=8;goto B4e69c9;
case 0x4e69cf:c.instructions+=7;goto B4e69cf;
case 0x4e69d5:c.instructions+=6;goto B4e69d5;
case 0x4e69db:c.instructions+=5;goto B4e69db;
case 0x4e69dd:c.instructions+=4;goto B4e69dd;
case 0x4e69e3:c.instructions+=3;goto B4e69e3;
case 0x4e69e5:c.instructions+=2;goto B4e69e5;
case 0x4e69e8:c.instructions+=1;goto B4e69e8;
case 0x4e69ee:goto L4e69ee;
case 0x4e69f1:c.instructions+=2;goto B4e69f1;
case 0x4e69f3:c.instructions+=1;goto B4e69f3;
case 0x4e69f9:goto L4e69f9;
case 0x4e69fc:c.instructions+=6;goto B4e69fc;
case 0x4e69fe:c.instructions+=5;goto B4e69fe;
case 0x4e6a03:c.instructions+=4;goto B4e6a03;
case 0x4e6a04:c.instructions+=3;goto B4e6a04;
case 0x4e6a09:c.instructions+=2;goto B4e6a09;
case 0x4e6a0d:c.instructions+=1;goto B4e6a0d;
case 0x4e6a12:goto L4e6a12;
case 0x4e6a15:c.instructions+=2;goto B4e6a15;
case 0x4e6a16:c.instructions+=1;goto B4e6a16;
case 0x4e6a19:goto L4e6a19;
case 0x4e6a1e:c.instructions+=1;goto B4e6a1e;
case 0x4e6a24:goto L4e6a24;
case 0x4e6a2a:goto L4e6a2a;
case 0x4e6a2f:c.instructions+=1;goto B4e6a2f;
case 0x4e6a31:goto L4e6a31;
case 0x4e6a36:c.instructions+=1;goto B4e6a36;
case 0x4e6a3c:goto L4e6a3c;
case 0x4e6a3f:c.instructions+=5;goto B4e6a3f;
case 0x4e6a41:c.instructions+=4;goto B4e6a41;
case 0x4e6a46:c.instructions+=3;goto B4e6a46;
case 0x4e6a4b:c.instructions+=2;goto B4e6a4b;
case 0x4e6a4c:c.instructions+=1;goto B4e6a4c;
case 0x4e6a51:goto L4e6a51;
case 0x4e6a54:c.instructions+=3;goto B4e6a54;
case 0x4e6a58:c.instructions+=2;goto B4e6a58;
case 0x4e6a59:c.instructions+=1;goto B4e6a59;
case 0x4e6a5c:goto L4e6a5c;
case 0x4e6a61:goto L4e6a61;
case 0x4e6a63:c.instructions+=1;goto B4e6a63;
case 0x4e6a68:goto L4e6a68;
case 0x4e6a6a:c.instructions+=1;goto B4e6a6a;
case 0x4e6a6f:goto L4e6a6f;
case 0x4e6a74:c.instructions+=8;goto B4e6a74;
case 0x4e6a7a:c.instructions+=7;goto B4e6a7a;
case 0x4e6a7e:c.instructions+=6;goto B4e6a7e;
case 0x4e6a82:c.instructions+=5;goto B4e6a82;
case 0x4e6a88:c.instructions+=4;goto B4e6a88;
case 0x4e6a8e:c.instructions+=3;goto B4e6a8e;
case 0x4e6a90:c.instructions+=2;goto B4e6a90;
case 0x4e6a93:c.instructions+=1;goto B4e6a93;
case 0x4e6a95:goto L4e6a95;
case 0x4e6a9a:goto L4e6a9a;
case 0x4e6aa1:c.instructions+=1;goto B4e6aa1;
case 0x4e6aa3:goto L4e6aa3;
case 0x4e6aa9:c.instructions+=3;goto B4e6aa9;
case 0x4e6aaf:c.instructions+=2;goto B4e6aaf;
case 0x4e6ab1:c.instructions+=1;goto B4e6ab1;
case 0x4e6ab6:goto L4e6ab6;
case 0x4e6abc:c.instructions+=2;goto B4e6abc;
case 0x4e6abd:c.instructions+=1;goto B4e6abd;
case 0x4e6ac2:goto L4e6ac2;
case 0x4e6ac5:c.instructions+=2;goto B4e6ac5;
case 0x4e6ac7:c.instructions+=1;goto B4e6ac7;
case 0x4e6ac9:goto L4e6ac9;
case 0x4e6ace:c.instructions+=3;goto B4e6ace;
case 0x4e6ad0:c.instructions+=2;goto B4e6ad0;
case 0x4e6ad1:c.instructions+=1;goto B4e6ad1;
case 0x4e6ad6:goto L4e6ad6;
case 0x4e6ad9:goto L4e6ad9;
case 0x4e6ade:c.instructions+=1;goto B4e6ade;
case 0x4e6ae3:goto L4e6ae3;
case 0x4e6ae6:c.instructions+=2;goto B4e6ae6;
case 0x4e6ae8:c.instructions+=1;goto B4e6ae8;
case 0x4e6aea:goto L4e6aea;
case 0x4e6aec:c.instructions+=2;goto B4e6aec;
case 0x4e6af1:c.instructions+=1;goto B4e6af1;
case 0x4e6af6:goto L4e6af6;
case 0x4e6af9:goto L4e6af9;
case 0x4e6afe:c.instructions+=1;goto B4e6afe;
case 0x4e6b03:goto L4e6b03;
case 0x4e6b06:c.instructions+=2;goto B4e6b06;
case 0x4e6b08:c.instructions+=1;goto B4e6b08;
case 0x4e6b0a:goto L4e6b0a;
case 0x4e6b0c:c.instructions+=2;goto B4e6b0c;
case 0x4e6b11:c.instructions+=1;goto B4e6b11;
case 0x4e6b16:goto L4e6b16;
case 0x4e6b19:goto L4e6b19;
case 0x4e6b1f:c.instructions+=2;goto B4e6b1f;
case 0x4e6b21:c.instructions+=1;goto B4e6b21;
case 0x4e6b23:goto L4e6b23;
case 0x4e6b2d:c.instructions+=1;goto B4e6b2d;
case 0x4e6b34:goto L4e6b34;
case 0x4e6b39:c.instructions+=2;goto B4e6b39;
case 0x4e6b3b:c.instructions+=1;goto B4e6b3b;
case 0x4e6b3d:goto L4e6b3d;
case 0x4e6b3f:c.instructions+=2;goto B4e6b3f;
case 0x4e6b41:c.instructions+=1;goto B4e6b41;
case 0x4e6b46:goto L4e6b46;
case 0x4e6b4d:goto L4e6b4d;
case 0x4e6b50:c.instructions+=2;goto B4e6b50;
case 0x4e6b52:c.instructions+=1;goto B4e6b52;
case 0x4e6b58:goto L4e6b58;
case 0x4e6b5b:c.instructions+=2;goto B4e6b5b;
case 0x4e6b5c:c.instructions+=1;goto B4e6b5c;
case 0x4e6b61:goto L4e6b61;
case 0x4e6b67:c.instructions+=4;goto B4e6b67;
case 0x4e6b6a:c.instructions+=3;goto B4e6b6a;
case 0x4e6b6c:c.instructions+=2;goto B4e6b6c;
case 0x4e6b70:c.instructions+=1;goto B4e6b70;
case 0x4e6b72:goto L4e6b72;
case 0x4e6b77:c.instructions+=2;goto B4e6b77;
case 0x4e6b7c:c.instructions+=1;goto B4e6b7c;
case 0x4e6b81:goto L4e6b81;
case 0x4e6b84:goto L4e6b84;
case 0x4e6b89:c.instructions+=2;goto B4e6b89;
case 0x4e6b8e:c.instructions+=1;goto B4e6b8e;
case 0x4e6b93:goto L4e6b93;
case 0x4e6b96:c.instructions+=2;goto B4e6b96;
case 0x4e6b97:c.instructions+=1;goto B4e6b97;
case 0x4e6b9a:goto L4e6b9a;
case 0x4e6ba0:c.instructions+=5;goto B4e6ba0;
case 0x4e6ba1:c.instructions+=4;goto B4e6ba1;
case 0x4e6ba3:c.instructions+=3;goto B4e6ba3;
case 0x4e6ba6:c.instructions+=2;goto B4e6ba6;
case 0x4e6bac:c.instructions+=1;goto B4e6bac;
case 0x4e6bae:goto L4e6bae;
case 0x4e6bb8:goto L4e6bb8;
case 0x4e6bba:c.instructions+=2;goto B4e6bba;
case 0x4e6bbc:c.instructions+=1;goto B4e6bbc;
case 0x4e6bc1:goto L4e6bc1;
case 0x4e6bc2:c.instructions+=1;goto B4e6bc2;
case 0x4e6bc5:goto L4e6bc5;
case 0x4e6bca:c.instructions+=1;goto B4e6bca;
case 0x4e6bcc:goto L4e6bcc;
case 0x4e6bcf:c.instructions+=5;goto B4e6bcf;
case 0x4e6bd1:c.instructions+=4;goto B4e6bd1;
case 0x4e6bd6:c.instructions+=3;goto B4e6bd6;
case 0x4e6bdb:c.instructions+=2;goto B4e6bdb;
case 0x4e6bdc:c.instructions+=1;goto B4e6bdc;
case 0x4e6be1:goto L4e6be1;
case 0x4e6be4:c.instructions+=2;goto B4e6be4;
case 0x4e6be6:c.instructions+=1;goto B4e6be6;
case 0x4e6beb:goto L4e6beb;
case 0x4e6bed:c.instructions+=1;goto B4e6bed;
case 0x4e6bef:goto L4e6bef;
case 0x4e6bf1:c.instructions+=1;goto B4e6bf1;
case 0x4e6bf6:goto L4e6bf6;
case 0x4e6bf7:c.instructions+=2;goto B4e6bf7;
case 0x4e6bf9:c.instructions+=1;goto B4e6bf9;
case 0x4e6bfe:goto L4e6bfe;
case 0x4e6c02:goto L4e6c02;
case 0x4e6c03:c.instructions+=1;goto B4e6c03;
case 0x4e6c10:goto L4e6c10;
case 0x4e6c11:c.instructions+=2;goto B4e6c11;
case 0x4e6c13:c.instructions+=1;goto B4e6c13;
case 0x4e6c18:goto L4e6c18;
case 0x4e6c1d:c.instructions+=1;goto B4e6c1d;
case 0x4e6c1f:goto L4e6c1f;
case 0x4e6c20:c.instructions+=1;goto B4e6c20;
case 0x4e6c25:goto L4e6c25;
case 0x4e6c28:goto L4e6c28;
case 0x4e6c2a:c.instructions+=2;goto B4e6c2a;
case 0x4e6c2b:c.instructions+=1;goto B4e6c2b;
case 0x4e6c30:goto L4e6c30;
case 0x4e6c31:c.instructions+=10;goto B4e6c31;
case 0x4e6c33:c.instructions+=9;goto B4e6c33;
case 0x4e6c36:c.instructions+=8;goto B4e6c36;
case 0x4e6c3c:c.instructions+=7;goto B4e6c3c;
case 0x4e6c3d:c.instructions+=6;goto B4e6c3d;
case 0x4e6c3e:c.instructions+=5;goto B4e6c3e;
case 0x4e6c41:c.instructions+=4;goto B4e6c41;
case 0x4e6c47:c.instructions+=3;goto B4e6c47;
case 0x4e6c48:c.instructions+=2;goto B4e6c48;
case 0x4e6c4a:c.instructions+=1;goto B4e6c4a;
case 0x4e6c4c:goto L4e6c4c;
case 0x4e6c4f:c.instructions+=2;goto B4e6c4f;
case 0x4e6c50:c.instructions+=1;goto B4e6c50;
case 0x4e6c55:goto L4e6c55;
case 0x4e6c58:c.instructions+=6;goto B4e6c58;
case 0x4e6c59:c.instructions+=5;goto B4e6c59;
case 0x4e6c5a:c.instructions+=4;goto B4e6c5a;
case 0x4e6c5b:c.instructions+=3;goto B4e6c5b;
case 0x4e6c5d:c.instructions+=2;goto B4e6c5d;
case 0x4e6c5e:c.instructions+=1;goto B4e6c5e;
case 0x4e6c61:goto L4e6c61;
case 0x4e6c66:c.instructions+=3;goto B4e6c66;
case 0x4e6c68:c.instructions+=2;goto B4e6c68;
case 0x4e6c6a:c.instructions+=1;goto B4e6c6a;
case 0x4e6c6c:goto L4e6c6c;
case 0x4e6c73:goto L4e6c73;
case 0x4e6c79:c.instructions+=1;goto B4e6c79;
case 0x4e6c7b:goto L4e6c7b;
case 0x4e6c81:c.instructions+=1;goto B4e6c81;
case 0x4e6c83:goto L4e6c83;
case 0x4e6c89:c.instructions+=1;goto B4e6c89;
case 0x4e6c8b:goto L4e6c8b;
case 0x4e6c91:c.instructions+=1;goto B4e6c91;
case 0x4e6c93:goto L4e6c93;
case 0x4e6c99:c.instructions+=2;goto B4e6c99;
case 0x4e6c9b:c.instructions+=1;goto B4e6c9b;
case 0x4e6ca1:goto L4e6ca1;
case 0x4e6ca4:c.instructions+=2;goto B4e6ca4;
case 0x4e6ca5:c.instructions+=1;goto B4e6ca5;
case 0x4e6caa:goto L4e6caa;
case 0x4e6cab:c.instructions+=1;goto B4e6cab;
case 0x4e6cb0:goto L4e6cb0;
case 0x4e6cb3:c.instructions+=2;goto B4e6cb3;
case 0x4e6cb5:c.instructions+=1;goto B4e6cb5;
case 0x4e6cb7:goto L4e6cb7;
case 0x4e6cbd:c.instructions+=1;goto B4e6cbd;
case 0x4e6cc3:goto L4e6cc3;
case 0x4e6cc9:c.instructions+=1;goto B4e6cc9;
case 0x4e6ccf:goto L4e6ccf;
case 0x4e6cd5:c.instructions+=1;goto B4e6cd5;
case 0x4e6cdb:goto L4e6cdb;
case 0x4e6ce1:c.instructions+=1;goto B4e6ce1;
case 0x4e6ce7:goto L4e6ce7;
case 0x4e6ced:c.instructions+=1;goto B4e6ced;
case 0x4e6cf3:goto L4e6cf3;
case 0x4e6cf9:c.instructions+=1;goto B4e6cf9;
case 0x4e6cff:goto L4e6cff;
case 0x4e6d05:c.instructions+=1;goto B4e6d05;
case 0x4e6d0b:goto L4e6d0b;
case 0x4e6d11:c.instructions+=1;goto B4e6d11;
case 0x4e6d17:goto L4e6d17;
case 0x4e6d1d:goto L4e6d1d;
case 0x4e6d20:c.instructions+=2;goto B4e6d20;
case 0x4e6d23:c.instructions+=1;goto B4e6d23;
case 0x4e6d29:goto L4e6d29;
case 0x4e6d30:goto L4e6d30;
case 0x4e6d35:c.instructions+=3;goto B4e6d35;
case 0x4e6d37:c.instructions+=2;goto B4e6d37;
case 0x4e6d3c:c.instructions+=1;goto B4e6d3c;
case 0x4e6d40:goto L4e6d40;
case 0x4e6d42:goto L4e6d42;
case 0x4e6d44:c.instructions+=4;goto B4e6d44;
case 0x4e6d49:c.instructions+=3;goto B4e6d49;
case 0x4e6d4e:c.instructions+=2;goto B4e6d4e;
case 0x4e6d4f:c.instructions+=1;goto B4e6d4f;
case 0x4e6d54:goto L4e6d54;
case 0x4e6d57:c.instructions+=5;goto B4e6d57;
case 0x4e6d58:c.instructions+=4;goto B4e6d58;
case 0x4e6d5c:c.instructions+=3;goto B4e6d5c;
case 0x4e6d61:c.instructions+=2;goto B4e6d61;
case 0x4e6d62:c.instructions+=1;goto B4e6d62;
case 0x4e6d67:goto L4e6d67;
case 0x4e6d6a:c.instructions+=11;goto B4e6d6a;
case 0x4e6d6e:c.instructions+=10;goto B4e6d6e;
case 0x4e6d6f:c.instructions+=9;goto B4e6d6f;
case 0x4e6d71:c.instructions+=8;goto B4e6d71;
case 0x4e6d73:c.instructions+=7;goto B4e6d73;
case 0x4e6d75:c.instructions+=6;goto B4e6d75;
case 0x4e6d77:c.instructions+=5;goto B4e6d77;
case 0x4e6d7c:c.instructions+=4;goto B4e6d7c;
case 0x4e6d81:c.instructions+=3;goto B4e6d81;
case 0x4e6d86:c.instructions+=2;goto B4e6d86;
case 0x4e6d87:c.instructions+=1;goto B4e6d87;
case 0x4e6d8c:goto L4e6d8c;
case 0x4e6d8f:c.instructions+=6;goto B4e6d8f;
case 0x4e6d90:c.instructions+=5;goto B4e6d90;
case 0x4e6d91:c.instructions+=4;goto B4e6d91;
case 0x4e6d92:c.instructions+=3;goto B4e6d92;
case 0x4e6d94:c.instructions+=2;goto B4e6d94;
case 0x4e6d95:c.instructions+=1;goto B4e6d95;
case 0x4e6d98:goto L4e6d98;
case 0x4e6d9e:c.instructions+=11;goto B4e6d9e;
case 0x4e6da0:c.instructions+=10;goto B4e6da0;
case 0x4e6da2:c.instructions+=9;goto B4e6da2;
case 0x4e6da5:c.instructions+=8;goto B4e6da5;
case 0x4e6da6:c.instructions+=7;goto B4e6da6;
case 0x4e6dac:c.instructions+=6;goto B4e6dac;
case 0x4e6daf:c.instructions+=5;goto B4e6daf;
case 0x4e6db0:c.instructions+=4;goto B4e6db0;
case 0x4e6db5:c.instructions+=3;goto B4e6db5;
case 0x4e6db6:c.instructions+=2;goto B4e6db6;
case 0x4e6dbb:c.instructions+=1;goto B4e6dbb;
case 0x4e6dc0:goto L4e6dc0;
case 0x4e6dc3:c.instructions+=6;goto B4e6dc3;
case 0x4e6dc4:c.instructions+=5;goto B4e6dc4;
case 0x4e6dc5:c.instructions+=4;goto B4e6dc5;
case 0x4e6dc6:c.instructions+=3;goto B4e6dc6;
case 0x4e6dc8:c.instructions+=2;goto B4e6dc8;
case 0x4e6dc9:c.instructions+=1;goto B4e6dc9;
case 0x4e6dcc:goto L4e6dcc;
case 0x4e6dcf:c.instructions+=2;goto B4e6dcf;
case 0x4e6dd1:c.instructions+=1;goto B4e6dd1;
case 0x4e6dd7:goto L4e6dd7;
case 0x4e6dd8:c.instructions+=1;goto B4e6dd8;
case 0x4e6ddd:goto L4e6ddd;
case 0x4e6de0:c.instructions+=7;goto B4e6de0;
case 0x4e6de3:c.instructions+=6;goto B4e6de3;
case 0x4e6de4:c.instructions+=5;goto B4e6de4;
case 0x4e6de5:c.instructions+=4;goto B4e6de5;
case 0x4e6de6:c.instructions+=3;goto B4e6de6;
case 0x4e6de8:c.instructions+=2;goto B4e6de8;
case 0x4e6de9:c.instructions+=1;goto B4e6de9;
case 0x4e6dec:goto L4e6dec;
case 0x4e6df2:c.instructions+=1;goto B4e6df2;
case 0x4e6df8:goto L4e6df8;
case 0x4e6dfd:goto L4e6dfd;
case 0x4e6e03:c.instructions+=6;goto B4e6e03;
case 0x4e6e04:c.instructions+=5;goto B4e6e04;
case 0x4e6e09:c.instructions+=4;goto B4e6e09;
case 0x4e6e0a:c.instructions+=3;goto B4e6e0a;
case 0x4e6e0f:c.instructions+=2;goto B4e6e0f;
case 0x4e6e10:c.instructions+=1;goto B4e6e10;
case 0x4e6e15:goto L4e6e15;
case 0x4e6e18:c.instructions+=2;goto B4e6e18;
case 0x4e6e1a:c.instructions+=1;goto B4e6e1a;
case 0x4e6e20:goto L4e6e20;
case 0x4e6e25:c.instructions+=3;goto B4e6e25;
case 0x4e6e2a:c.instructions+=2;goto B4e6e2a;
case 0x4e6e2c:c.instructions+=1;goto B4e6e2c;
case 0x4e6e31:goto L4e6e31;
case 0x4e6e32:c.instructions+=5;goto B4e6e32;
case 0x4e6e33:c.instructions+=4;goto B4e6e33;
case 0x4e6e34:c.instructions+=3;goto B4e6e34;
case 0x4e6e36:c.instructions+=2;goto B4e6e36;
case 0x4e6e37:c.instructions+=1;goto B4e6e37;
case 0x4e6e3a:goto L4e6e3a;
case 0x4e6e40:c.instructions+=1;goto B4e6e40;
case 0x4e6e46:goto L4e6e46;
case 0x4e6e4b:goto L4e6e4b;
case 0x4e6e51:c.instructions+=6;goto B4e6e51;
case 0x4e6e52:c.instructions+=5;goto B4e6e52;
case 0x4e6e57:c.instructions+=4;goto B4e6e57;
case 0x4e6e59:c.instructions+=3;goto B4e6e59;
case 0x4e6e5e:c.instructions+=2;goto B4e6e5e;
case 0x4e6e5f:c.instructions+=1;goto B4e6e5f;
case 0x4e6e64:goto L4e6e64;
case 0x4e6e67:c.instructions+=2;goto B4e6e67;
case 0x4e6e69:c.instructions+=1;goto B4e6e69;
case 0x4e6e6f:goto L4e6e6f;
case 0x4e6e74:c.instructions+=3;goto B4e6e74;
case 0x4e6e79:c.instructions+=2;goto B4e6e79;
case 0x4e6e7b:c.instructions+=1;goto B4e6e7b;
case 0x4e6e80:goto L4e6e80;
case 0x4e6e81:c.instructions+=5;goto B4e6e81;
case 0x4e6e82:c.instructions+=4;goto B4e6e82;
case 0x4e6e83:c.instructions+=3;goto B4e6e83;
case 0x4e6e85:c.instructions+=2;goto B4e6e85;
case 0x4e6e86:c.instructions+=1;goto B4e6e86;
case 0x4e6e89:goto L4e6e89;
case 0x4e6e8f:c.instructions+=1;goto B4e6e8f;
case 0x4e6e91:goto L4e6e91;
case 0x4e6e96:goto L4e6e96;
case 0x4e6e9c:c.instructions+=6;goto B4e6e9c;
case 0x4e6e9d:c.instructions+=5;goto B4e6e9d;
case 0x4e6ea2:c.instructions+=4;goto B4e6ea2;
case 0x4e6ea4:c.instructions+=3;goto B4e6ea4;
case 0x4e6ea9:c.instructions+=2;goto B4e6ea9;
case 0x4e6eaa:c.instructions+=1;goto B4e6eaa;
case 0x4e6eaf:goto L4e6eaf;
case 0x4e6eb2:c.instructions+=2;goto B4e6eb2;
case 0x4e6eb4:c.instructions+=1;goto B4e6eb4;
case 0x4e6eba:goto L4e6eba;
case 0x4e6ebf:c.instructions+=3;goto B4e6ebf;
case 0x4e6ec4:c.instructions+=2;goto B4e6ec4;
case 0x4e6ec6:c.instructions+=1;goto B4e6ec6;
case 0x4e6ecb:goto L4e6ecb;
case 0x4e6ecc:c.instructions+=5;goto B4e6ecc;
case 0x4e6ecd:c.instructions+=4;goto B4e6ecd;
case 0x4e6ece:c.instructions+=3;goto B4e6ece;
case 0x4e6ed0:c.instructions+=2;goto B4e6ed0;
case 0x4e6ed1:c.instructions+=1;goto B4e6ed1;
case 0x4e6ed4:goto L4e6ed4;
case 0x4e6ed7:c.instructions+=2;goto B4e6ed7;
case 0x4e6edc:c.instructions+=1;goto B4e6edc;
case 0x4e6ee1:goto L4e6ee1;
case 0x4e6ee2:c.instructions+=6;goto B4e6ee2;
case 0x4e6ee7:c.instructions+=5;goto B4e6ee7;
case 0x4e6eec:c.instructions+=4;goto B4e6eec;
case 0x4e6ef1:c.instructions+=3;goto B4e6ef1;
case 0x4e6ef6:c.instructions+=2;goto B4e6ef6;
case 0x4e6ef7:c.instructions+=1;goto B4e6ef7;
case 0x4e6efc:goto L4e6efc;
case 0x4e6eff:c.instructions+=6;goto B4e6eff;
case 0x4e6f00:c.instructions+=5;goto B4e6f00;
case 0x4e6f01:c.instructions+=4;goto B4e6f01;
case 0x4e6f02:c.instructions+=3;goto B4e6f02;
case 0x4e6f04:c.instructions+=2;goto B4e6f04;
case 0x4e6f05:c.instructions+=1;goto B4e6f05;
case 0x4e6f08:goto L4e6f08;
case 0x4e6f0a:c.instructions+=1;goto B4e6f0a;
case 0x4e6f0f:goto L4e6f0f;
case 0x4e6f10:c.instructions+=5;goto B4e6f10;
case 0x4e6f11:c.instructions+=4;goto B4e6f11;
case 0x4e6f12:c.instructions+=3;goto B4e6f12;
case 0x4e6f14:c.instructions+=2;goto B4e6f14;
case 0x4e6f15:c.instructions+=1;goto B4e6f15;
case 0x4e6f18:goto L4e6f18;
case 0x4e6f1d:goto L4e6f1d;
case 0x4e6f23:c.instructions+=5;goto B4e6f23;
case 0x4e6f24:c.instructions+=4;goto B4e6f24;
case 0x4e6f29:c.instructions+=3;goto B4e6f29;
case 0x4e6f2e:c.instructions+=2;goto B4e6f2e;
case 0x4e6f2f:c.instructions+=1;goto B4e6f2f;
case 0x4e6f34:goto L4e6f34;
case 0x4e6f37:c.instructions+=2;goto B4e6f37;
case 0x4e6f39:c.instructions+=1;goto B4e6f39;
case 0x4e6f3f:goto L4e6f3f;
case 0x4e6f44:c.instructions+=3;goto B4e6f44;
case 0x4e6f49:c.instructions+=2;goto B4e6f49;
case 0x4e6f4b:c.instructions+=1;goto B4e6f4b;
case 0x4e6f50:goto L4e6f50;
case 0x4e6f51:c.instructions+=5;goto B4e6f51;
case 0x4e6f52:c.instructions+=4;goto B4e6f52;
case 0x4e6f53:c.instructions+=3;goto B4e6f53;
case 0x4e6f55:c.instructions+=2;goto B4e6f55;
case 0x4e6f56:c.instructions+=1;goto B4e6f56;
case 0x4e6f59:goto L4e6f59;
case 0x4e6f5e:goto L4e6f5e;
case 0x4e6f64:c.instructions+=5;goto B4e6f64;
case 0x4e6f65:c.instructions+=4;goto B4e6f65;
case 0x4e6f6a:c.instructions+=3;goto B4e6f6a;
case 0x4e6f6f:c.instructions+=2;goto B4e6f6f;
case 0x4e6f70:c.instructions+=1;goto B4e6f70;
case 0x4e6f75:goto L4e6f75;
case 0x4e6f78:c.instructions+=2;goto B4e6f78;
case 0x4e6f7a:c.instructions+=1;goto B4e6f7a;
case 0x4e6f80:goto L4e6f80;
case 0x4e6f85:c.instructions+=3;goto B4e6f85;
case 0x4e6f8a:c.instructions+=2;goto B4e6f8a;
case 0x4e6f8c:c.instructions+=1;goto B4e6f8c;
case 0x4e6f91:goto L4e6f91;
case 0x4e6f92:c.instructions+=5;goto B4e6f92;
case 0x4e6f93:c.instructions+=4;goto B4e6f93;
case 0x4e6f94:c.instructions+=3;goto B4e6f94;
case 0x4e6f96:c.instructions+=2;goto B4e6f96;
case 0x4e6f97:c.instructions+=1;goto B4e6f97;
case 0x4e6f9a:goto L4e6f9a;
case 0x4e6fa0:c.instructions+=2;goto B4e6fa0;
case 0x4e6fa2:c.instructions+=1;goto B4e6fa2;
case 0x4e6fa4:goto L4e6fa4;
case 0x4e6fa7:c.instructions+=2;goto B4e6fa7;
case 0x4e6fae:c.instructions+=1;goto B4e6fae;
case 0x4e6fb3:goto L4e6fb3;
case 0x4e6fb4:c.instructions+=5;goto B4e6fb4;
case 0x4e6fb5:c.instructions+=4;goto B4e6fb5;
case 0x4e6fb6:c.instructions+=3;goto B4e6fb6;
case 0x4e6fb8:c.instructions+=2;goto B4e6fb8;
case 0x4e6fb9:c.instructions+=1;goto B4e6fb9;
case 0x4e6fbc:goto L4e6fbc;
case 0x4e6fc1:c.instructions+=1;goto B4e6fc1;
case 0x4e6fc6:goto L4e6fc6;
case 0x4e6fc8:c.instructions+=1;goto B4e6fc8;
case 0x4e6fcd:goto L4e6fcd;
case 0x4e6fcf:c.instructions+=1;goto B4e6fcf;
case 0x4e6fd1:goto L4e6fd1;
case 0x4e6fd6:c.instructions+=2;goto B4e6fd6;
case 0x4e6fd7:c.instructions+=1;goto B4e6fd7;
case 0x4e6fdc:goto L4e6fdc;
case 0x4e6fdf:c.instructions+=2;goto B4e6fdf;
case 0x4e6fe1:c.instructions+=1;goto B4e6fe1;
case 0x4e6fe3:goto L4e6fe3;
case 0x4e6fe4:c.instructions+=2;goto B4e6fe4;
case 0x4e6fe5:c.instructions+=1;goto B4e6fe5;
case 0x4e6fea:goto L4e6fea;
case 0x4e6fed:goto L4e6fed;
case 0x4e6fef:c.instructions+=1;goto B4e6fef;
case 0x4e6ff4:goto L4e6ff4;
case 0x4e6ff7:c.instructions+=1;goto B4e6ff7;
case 0x4e6ffc:goto L4e6ffc;
case 0x4e6ffd:c.instructions+=3;goto B4e6ffd;
case 0x4e6ffe:c.instructions+=2;goto B4e6ffe;
case 0x4e6fff:c.instructions+=1;goto B4e6fff;
default:missing_instruction(c.pc);}
B4e6001:L4e6001:{c.instructions+=1;NFSU2_TR(0x4e6001);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6006ull));
TAIL_STATIC(0x542600u,542);
}
B4e6006:L4e6006:{c.instructions+=6;NFSU2_TR(0x4e6006);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e6009:{NFSU2_TR(0x4e6009);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e600c:{NFSU2_TR(0x4e600c);
u8 U[4];
w4(U+0,u32(0xca38d55full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6011:{NFSU2_TR(0x4e6011);
u8 U[4];
w4(U+0,u32(0x78fc4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6016:{NFSU2_TR(0x4e6016);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e601a:{NFSU2_TR(0x4e601a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e601full));
TAIL_STATIC(0x505450u,505);
}
B4e601f:L4e601f:{c.instructions+=4;NFSU2_TR(0x4e601f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e6023:{NFSU2_TR(0x4e6023);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6024:{NFSU2_TR(0x4e6024);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6025:{NFSU2_TR(0x4e6025);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e602aull));
TAIL_STATIC(0x537a10u,537);
}
B4e602a:L4e602a:{c.instructions+=3;NFSU2_TR(0x4e602a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e602d:{NFSU2_TR(0x4e602d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e602e:{NFSU2_TR(0x4e602e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6033ull));
TAIL_STATIC(0x50c900u,50c);
}
B4e6033:L4e6033:{c.instructions+=4;NFSU2_TR(0x4e6033);
__builtin_memmove((R+0),gp(0x83636c),1);
}
B4e6038:{NFSU2_TR(0x4e6038);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e603b:{NFSU2_TR(0x4e603b);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4e603d:{NFSU2_TR(0x4e603d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e6055;}}
}
B4e603f:L4e603f:{c.instructions+=3;NFSU2_TR(0x4e603f);
u8 U[8];
__builtin_memmove((U+0),gp(0x8500d0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4e6046:{NFSU2_TR(0x4e6046);
__builtin_memmove((R+4),(R+24),4);
}
B4e6048:{NFSU2_TR(0x4e6048);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4e604d;}}
}
B4e604a:L4e604a:{c.instructions+=2;NFSU2_TR(0x4e604a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e604b:{NFSU2_TR(0x4e604b);
{goto L4e604f;}
}
B4e604d:L4e604d:{c.instructions+=1;NFSU2_TR(0x4e604d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e604f:L4e604f:{c.instructions+=2;NFSU2_TR(0x4e604f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6050:{NFSU2_TR(0x4e6050);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6055ull));
TAIL_STATIC(0x4cfd80u,4cf);
}
B4e6055:L4e6055:{c.instructions+=2;NFSU2_TR(0x4e6055);
u8 U[8];
__builtin_memmove((U+0),gp(0x89cf48),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e605c:{NFSU2_TR(0x4e605c);
if(r1(R+518)){{goto L4e6068;}}
}
B4e605e:L4e605e:{c.instructions+=2;NFSU2_TR(0x4e605e);
w4(R+4,u32(0x89cf48ull));
}
B4e6063:{NFSU2_TR(0x4e6063);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6068ull));
TAIL_STATIC(0x5f0150u,5f0);
}
B4e6068:L4e6068:{c.instructions+=5;NFSU2_TR(0x4e6068);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e6072:{NFSU2_TR(0x4e6072);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4e6075:{NFSU2_TR(0x4e6075);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e6079:{NFSU2_TR(0x4e6079);
__builtin_memmove(gp(0x838528),(R+0),1);
}
B4e607e:{NFSU2_TR(0x4e607e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6083ull));
TAIL_STATIC(0x5ac6e0u,5ac);
}
B4e6083:L4e6083:{c.instructions+=7;NFSU2_TR(0x4e6083);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6084:{NFSU2_TR(0x4e6084);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6085:{NFSU2_TR(0x4e6085);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6086:{NFSU2_TR(0x4e6086);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6088:{NFSU2_TR(0x4e6088);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e608c:{NFSU2_TR(0x4e608c);
u8 U[5];
w4(U+0,u32(u32(u32(0x92cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e6094:{NFSU2_TR(0x4e6094);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6099ull));
TAIL_STATIC(0x610270u,610);
}
B4e6099:L4e6099:{c.instructions+=7;NFSU2_TR(0x4e6099);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e609a:{NFSU2_TR(0x4e609a);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e609e:{NFSU2_TR(0x4e609e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e609f:{NFSU2_TR(0x4e609f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e60a0:{NFSU2_TR(0x4e60a0);
w4(R+4,u32(0x83a9d0ull));
}
B4e60a5:{NFSU2_TR(0x4e60a5);
u8 U[5];
w4(U+0,u32(u32(u32(0x928ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e60ad:{NFSU2_TR(0x4e60ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e60b2ull));
TAIL_STATIC(0x515d00u,515);
}
B4e60b2:L4e60b2:{c.instructions+=2;NFSU2_TR(0x4e60b2);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e60b7:{NFSU2_TR(0x4e60b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e60bcull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e60bc:L4e60bc:{c.instructions+=3;NFSU2_TR(0x4e60bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e60bf:{NFSU2_TR(0x4e60bf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e60c1:{NFSU2_TR(0x4e60c1);
if(r1(R+518)){{goto L4e60d4;}}
}
B4e60c3:L4e60c3:{c.instructions+=2;NFSU2_TR(0x4e60c3);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e60c8:{NFSU2_TR(0x4e60c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e60cdull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e60cd:L4e60cd:{c.instructions+=3;NFSU2_TR(0x4e60cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e60d0:{NFSU2_TR(0x4e60d0);
__builtin_memmove((R+24),(R+0),4);
}
B4e60d2:{NFSU2_TR(0x4e60d2);
{goto L4e60fd;}
}
B4e60d4:L4e60d4:{c.instructions+=2;NFSU2_TR(0x4e60d4);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e60d9:{NFSU2_TR(0x4e60d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e60deull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e60de:L4e60de:{c.instructions+=3;NFSU2_TR(0x4e60de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e60e1:{NFSU2_TR(0x4e60e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e60e3:{NFSU2_TR(0x4e60e3);
if(r1(R+518)){{goto L4e60fb;}}
}
B4e60e5:L4e60e5:{c.instructions+=2;NFSU2_TR(0x4e60e5);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e60ea:{NFSU2_TR(0x4e60ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e60efull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e60ef:L4e60ef:{c.instructions+=3;NFSU2_TR(0x4e60ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e60f2:{NFSU2_TR(0x4e60f2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e60f4:{NFSU2_TR(0x4e60f4);
if(r1(R+518)){{goto L4e60fb;}}
}
B4e60f6:L4e60f6:{c.instructions+=2;NFSU2_TR(0x4e60f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e60f9:{NFSU2_TR(0x4e60f9);
{goto L4e60fd;}
}
B4e60fb:L4e60fb:{c.instructions+=1;NFSU2_TR(0x4e60fb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4e60fd:L4e60fd:{c.instructions+=4;NFSU2_TR(0x4e60fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e6101:{NFSU2_TR(0x4e6101);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6102:{NFSU2_TR(0x4e6102);
w4(R+4,u32(0x8371b0ull));
}
B4e6107:{NFSU2_TR(0x4e6107);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e610cull));
TAIL_STATIC(0x413440u,413);
}
B4e610c:L4e610c:{c.instructions+=3;NFSU2_TR(0x4e610c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e610e:{NFSU2_TR(0x4e610e);
s4(0x83623c,u32(0x2ull));
}
B4e6118:{NFSU2_TR(0x4e6118);
if(r1(R+518)){{goto L4e6128;}}
}
B4e611a:L4e611a:{c.instructions+=4;NFSU2_TR(0x4e611a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e611c:{NFSU2_TR(0x4e611c);
u8 U[4];
w4(U+0,u32(0x8371b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6121:{NFSU2_TR(0x4e6121);
__builtin_memmove((R+4),(R+24),4);
}
B4e6123:{NFSU2_TR(0x4e6123);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6128ull));
TAIL_STATIC(0x4d8c70u,4d8);
}
B4e6128:L4e6128:{c.instructions+=2;NFSU2_TR(0x4e6128);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e612d:{NFSU2_TR(0x4e612d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6132ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e6132:L4e6132:{c.instructions+=3;NFSU2_TR(0x4e6132);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e6135:{NFSU2_TR(0x4e6135);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e6137:{NFSU2_TR(0x4e6137);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e614a;}}
}
B4e6139:L4e6139:{c.instructions+=6;NFSU2_TR(0x4e6139);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e613a:{NFSU2_TR(0x4e613a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e613b:{NFSU2_TR(0x4e613b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e613c:{NFSU2_TR(0x4e613c);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6141:{NFSU2_TR(0x4e6141);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6142:{NFSU2_TR(0x4e6142);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6147ull));
TAIL_STATIC(0x555f50u,555);
}
B4e6147:L4e6147:{c.instructions+=1;NFSU2_TR(0x4e6147);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4e614a:L4e614a:{c.instructions+=2;NFSU2_TR(0x4e614a);
__builtin_memmove((R+4),(R+28),4);
}
B4e614c:{NFSU2_TR(0x4e614c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6151ull));
TAIL_STATIC(0x4bc7b0u,4bc);
}
B4e6151:L4e6151:{c.instructions+=3;NFSU2_TR(0x4e6151);
u8 U[4];
w4(U+0,u32(u32(u32(0x3a4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e6158:{NFSU2_TR(0x4e6158);
u8 U[5];
w4(U+0,u32(u32(u32(0x91cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e6160:{NFSU2_TR(0x4e6160);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6165ull));
TAIL_STATIC(0x4022c0u,402);
}
B4e6165:L4e6165:{c.instructions+=9;NFSU2_TR(0x4e6165);
u8 U[8];
w4(U+0,u32(u32(u32(0x914ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e616c:{NFSU2_TR(0x4e616c);
__builtin_memmove((R+0),(R+28),4);
}
B4e616e:{NFSU2_TR(0x4e616e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e616f:{NFSU2_TR(0x4e616f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6170:{NFSU2_TR(0x4e6170);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e6177:{NFSU2_TR(0x4e6177);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e6178:{NFSU2_TR(0x4e6178);
__builtin_memmove((R+16),(R+20),4);
}
B4e617a:{NFSU2_TR(0x4e617a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e617b:{NFSU2_TR(0x4e617b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6180:L4e6180:{c.instructions+=3;NFSU2_TR(0x4e6180);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6181:{NFSU2_TR(0x4e6181);
__builtin_memmove((R+24),(R+4),4);
}
B4e6183:{NFSU2_TR(0x4e6183);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6188ull));
{goto L4e61a0;}
}
B4e6188:L4e6188:{c.instructions+=2;NFSU2_TR(0x4e6188);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B4e618d:{NFSU2_TR(0x4e618d);
if(r1(R+518)){{goto L4e6198;}}
}
B4e618f:L4e618f:{c.instructions+=2;NFSU2_TR(0x4e618f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6190:{NFSU2_TR(0x4e6190);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6195ull));
TAIL_STATIC(0x575630u,575);
}
B4e6195:L4e6195:{c.instructions+=1;NFSU2_TR(0x4e6195);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e6198:L4e6198:{c.instructions+=3;NFSU2_TR(0x4e6198);
__builtin_memmove((R+0),(R+24),4);
}
B4e619a:{NFSU2_TR(0x4e619a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e619b:{NFSU2_TR(0x4e619b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e61a0:L4e61a0:{c.instructions+=14;NFSU2_TR(0x4e61a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e61a2:{NFSU2_TR(0x4e61a2);
u8 U[4];
w4(U+0,u32(0x776178ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e61a7:{NFSU2_TR(0x4e61a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e61ad:{NFSU2_TR(0x4e61ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e61ae:{NFSU2_TR(0x4e61ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e61b5:{NFSU2_TR(0x4e61b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e61b6:{NFSU2_TR(0x4e61b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e61b7:{NFSU2_TR(0x4e61b7);
__builtin_memmove((R+24),(R+4),4);
}
B4e61b9:{NFSU2_TR(0x4e61b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e61bd:{NFSU2_TR(0x4e61bd);
u8 U[4];
w4(U+0,u32(0x797908ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e61c3:{NFSU2_TR(0x4e61c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e61c9:{NFSU2_TR(0x4e61c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e61cb:{NFSU2_TR(0x4e61cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e61d3:{NFSU2_TR(0x4e61d3);
if(r1(R+518)){{goto L4e61e8;}}
}
B4e61d5:L4e61d5:{c.instructions+=2;NFSU2_TR(0x4e61d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e61d6:{NFSU2_TR(0x4e61d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e61dbull));
TAIL_STATIC(0x540a60u,540);
}
B4e61db:L4e61db:{c.instructions+=2;NFSU2_TR(0x4e61db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e61de:{NFSU2_TR(0x4e61de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e61e8:L4e61e8:{c.instructions+=3;NFSU2_TR(0x4e61e8);
__builtin_memmove((R+4),(R+24),4);
}
B4e61ea:{NFSU2_TR(0x4e61ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e61f2:{NFSU2_TR(0x4e61f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e61f7ull));
TAIL_STATIC(0x4defb0u,4de);
}
B4e61f7:L4e61f7:{c.instructions+=5;NFSU2_TR(0x4e61f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e61fb:{NFSU2_TR(0x4e61fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e61fc:{NFSU2_TR(0x4e61fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e6203:{NFSU2_TR(0x4e6203);
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
B4e6206:{NFSU2_TR(0x4e6206);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6210:L4e6210:{c.instructions+=13;NFSU2_TR(0x4e6210);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6212:{NFSU2_TR(0x4e6212);
u8 U[4];
w4(U+0,u32(0x7729f3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6217:{NFSU2_TR(0x4e6217);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e621d:{NFSU2_TR(0x4e621d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e621e:{NFSU2_TR(0x4e621e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e6225:{NFSU2_TR(0x4e6225);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6226:{NFSU2_TR(0x4e6226);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e622a:{NFSU2_TR(0x4e622a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e622b:{NFSU2_TR(0x4e622b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e622c:{NFSU2_TR(0x4e622c);
__builtin_memmove((R+24),(R+4),4);
}
B4e622e:{NFSU2_TR(0x4e622e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e622f:{NFSU2_TR(0x4e622f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e6233:{NFSU2_TR(0x4e6233);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6238ull));
TAIL_STATIC(0x551de0u,551);
}
B4e6238:L4e6238:{c.instructions+=6;NFSU2_TR(0x4e6238);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e623a:{NFSU2_TR(0x4e623a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e623d:{NFSU2_TR(0x4e623d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e6241:{NFSU2_TR(0x4e6241);
u8 U[4];
w4(U+0,u32(0x790060ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e6247:{NFSU2_TR(0x4e6247);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e624a:{NFSU2_TR(0x4e624a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e624full));
TAIL_STATIC(0x4ff430u,4ff);
}
B4e624f:L4e624f:{c.instructions+=6;NFSU2_TR(0x4e624f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e6252:{NFSU2_TR(0x4e6252);
u8 U[4];
w4(U+0,u32(0x3bfe592cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6257:{NFSU2_TR(0x4e6257);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e625c:{NFSU2_TR(0x4e625c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e625d:{NFSU2_TR(0x4e625d);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e6262:{NFSU2_TR(0x4e6262);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6267ull));
TAIL_STATIC(0x537a10u,537);
}
B4e6267:L4e6267:{c.instructions+=3;NFSU2_TR(0x4e6267);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e626a:{NFSU2_TR(0x4e626a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e626b:{NFSU2_TR(0x4e626b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6270ull));
TAIL_STATIC(0x50c900u,50c);
}
B4e6270:L4e6270:{c.instructions+=4;NFSU2_TR(0x4e6270);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e6273:{NFSU2_TR(0x4e6273);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e6276:{NFSU2_TR(0x4e6276);
w4(R+4,u32(0x850080ull));
}
B4e627b:{NFSU2_TR(0x4e627b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6280ull));
TAIL_STATIC(0x5031f0u,503);
}
B4e6280:L4e6280:{c.instructions+=4;NFSU2_TR(0x4e6280);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6281:{NFSU2_TR(0x4e6281);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6286:{NFSU2_TR(0x4e6286);
u8 U[4];
w4(U+0,u32(0x78f844ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e628b:{NFSU2_TR(0x4e628b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6290ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4e6290:L4e6290:{c.instructions+=4;NFSU2_TR(0x4e6290);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e6293:{NFSU2_TR(0x4e6293);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6294:{NFSU2_TR(0x4e6294);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6295:{NFSU2_TR(0x4e6295);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e629aull));
TAIL_STATIC(0x537b80u,537);
}
B4e629a:L4e629a:{c.instructions+=3;NFSU2_TR(0x4e629a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e629d:{NFSU2_TR(0x4e629d);
__builtin_memmove((R+4),(R+24),4);
}
B4e629f:{NFSU2_TR(0x4e629f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e62a4ull));
TAIL_STATIC(0x4d3490u,4d3);
}
B4e62a4:L4e62a4:{c.instructions+=2;NFSU2_TR(0x4e62a4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e62a6:{NFSU2_TR(0x4e62a6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4e62d1;}}
}
B4e62a8:L4e62a8:{c.instructions+=3;NFSU2_TR(0x4e62a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e62ab:{NFSU2_TR(0x4e62ab);
u8 U[4];
w4(U+0,u32(0xec3905c1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e62b0:{NFSU2_TR(0x4e62b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e62b5ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e62b5:L4e62b5:{c.instructions+=6;NFSU2_TR(0x4e62b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e62b6:{NFSU2_TR(0x4e62b6);
u8 U[4];
w4(U+0,u32(0xca4ce1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e62bb:{NFSU2_TR(0x4e62bb);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e62c0:{NFSU2_TR(0x4e62c0);
u8 U[4];
w4(U+0,u32(0x7902c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e62c5:{NFSU2_TR(0x4e62c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e62c6:{NFSU2_TR(0x4e62c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e62cbull));
TAIL_STATIC(0x5585e0u,558);
}
B4e62cb:L4e62cb:{c.instructions+=2;NFSU2_TR(0x4e62cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4e62ce:{NFSU2_TR(0x4e62ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e62d1:L4e62d1:{c.instructions+=2;NFSU2_TR(0x4e62d1);
__builtin_memmove((R+4),(R+24),4);
}
B4e62d3:{NFSU2_TR(0x4e62d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e62d8ull));
TAIL_STATIC(0x4a04d0u,4a0);
}
B4e62d8:L4e62d8:{c.instructions+=7;NFSU2_TR(0x4e62d8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e62dc:{NFSU2_TR(0x4e62dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e62dd:{NFSU2_TR(0x4e62dd);
__builtin_memmove((R+0),(R+24),4);
}
B4e62df:{NFSU2_TR(0x4e62df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e62e0:{NFSU2_TR(0x4e62e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e62e7:{NFSU2_TR(0x4e62e7);
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
B4e62ea:{NFSU2_TR(0x4e62ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e62f0:L4e62f0:{c.instructions+=3;NFSU2_TR(0x4e62f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e62f1:{NFSU2_TR(0x4e62f1);
__builtin_memmove((R+24),(R+4),4);
}
B4e62f3:{NFSU2_TR(0x4e62f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e62f8ull));
TAIL_STATIC(0x4d37c0u,4d3);
}
B4e62f8:L4e62f8:{c.instructions+=2;NFSU2_TR(0x4e62f8);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B4e62fd:{NFSU2_TR(0x4e62fd);
if(r1(R+518)){{goto L4e6308;}}
}
B4e62ff:L4e62ff:{c.instructions+=2;NFSU2_TR(0x4e62ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6300:{NFSU2_TR(0x4e6300);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6305ull));
TAIL_STATIC(0x575630u,575);
}
B4e6305:L4e6305:{c.instructions+=1;NFSU2_TR(0x4e6305);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e6308:L4e6308:{c.instructions+=3;NFSU2_TR(0x4e6308);
__builtin_memmove((R+0),(R+24),4);
}
B4e630a:{NFSU2_TR(0x4e630a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e630b:{NFSU2_TR(0x4e630b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6310:L4e6310:{c.instructions+=5;NFSU2_TR(0x4e6310);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6311:{NFSU2_TR(0x4e6311);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6312:{NFSU2_TR(0x4e6312);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6313:{NFSU2_TR(0x4e6313);
__builtin_memmove((R+24),(R+4),4);
}
B4e6315:{NFSU2_TR(0x4e6315);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e631aull));
TAIL_STATIC(0x58f230u,58f);
}
B4e631a:L4e631a:{c.instructions+=7;NFSU2_TR(0x4e631a);
__builtin_memmove((R+28),(R+0),4);
}
B4e631c:{NFSU2_TR(0x4e631c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e631f:{NFSU2_TR(0x4e631f);
u8 U[12];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B4e6323:{NFSU2_TR(0x4e6323);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4e6326:{NFSU2_TR(0x4e6326);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6327:{NFSU2_TR(0x4e6327);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6328:{NFSU2_TR(0x4e6328);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e632dull));
TAIL_STATIC(0x58ce30u,58c);
}
B4e632d:L4e632d:{c.instructions+=4;NFSU2_TR(0x4e632d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4e6330:{NFSU2_TR(0x4e6330);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6331:{NFSU2_TR(0x4e6331);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e6334:{NFSU2_TR(0x4e6334);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6339ull));
TAIL_STATIC(0x5825e0u,582);
}
B4e6339:L4e6339:{c.instructions+=4;NFSU2_TR(0x4e6339);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e633c:{NFSU2_TR(0x4e633c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e633d:{NFSU2_TR(0x4e633d);
__builtin_memmove((R+4),(R+24),4);
}
B4e633f:{NFSU2_TR(0x4e633f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6344ull));
TAIL_STATIC(0x4a0790u,4a0);
}
B4e6344:L4e6344:{c.instructions+=4;NFSU2_TR(0x4e6344);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6345:{NFSU2_TR(0x4e6345);
u8 U[4];
w4(U+0,u32(0x79795cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e634a:{NFSU2_TR(0x4e634a);
u8 U[4];
w4(U+0,u32(0x79794cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e634f:{NFSU2_TR(0x4e634f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6354ull));
TAIL_STATIC(0x50b990u,50b);
}
B4e6354:L4e6354:{c.instructions+=4;NFSU2_TR(0x4e6354);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e6357:{NFSU2_TR(0x4e6357);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6358:{NFSU2_TR(0x4e6358);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6359:{NFSU2_TR(0x4e6359);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e635eull));
TAIL_STATIC(0x537b80u,537);
}
B4e635e:L4e635e:{c.instructions+=4;NFSU2_TR(0x4e635e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4e6361:{NFSU2_TR(0x4e6361);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6363:{NFSU2_TR(0x4e6363);
u8 U[4];
w4(U+0,u32(0x4d3eb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6368:{NFSU2_TR(0x4e6368);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e636dull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4e636d:L4e636d:{c.instructions+=2;NFSU2_TR(0x4e636d);
__builtin_memmove((R+4),(R+0),4);
}
B4e636f:{NFSU2_TR(0x4e636f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6374ull));
TAIL_STATIC(0x584270u,584);
}
B4e6374:L4e6374:{c.instructions+=6;NFSU2_TR(0x4e6374);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e6377:{NFSU2_TR(0x4e6377);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6378:{NFSU2_TR(0x4e6378);
u8 U[4];
w4(U+0,u32(0x4d3eb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e637d:{NFSU2_TR(0x4e637d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e637e:{NFSU2_TR(0x4e637e);
__builtin_memmove((R+4),(R+28),4);
}
B4e6380:{NFSU2_TR(0x4e6380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6385ull));
TAIL_STATIC(0x58c700u,58c);
}
B4e6385:L4e6385:{c.instructions+=3;NFSU2_TR(0x4e6385);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e6387:{NFSU2_TR(0x4e6387);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e638a:{NFSU2_TR(0x4e638a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4e63b9;}}
}
B4e638c:L4e638c:{c.instructions+=3;NFSU2_TR(0x4e638c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e638f:{NFSU2_TR(0x4e638f);
u8 U[4];
w4(U+0,u32(0x6cf6e689ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6394:{NFSU2_TR(0x4e6394);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6399ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e6399:L4e6399:{c.instructions+=7;NFSU2_TR(0x4e6399);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e639a:{NFSU2_TR(0x4e639a);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e639f:{NFSU2_TR(0x4e639f);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e63a4:{NFSU2_TR(0x4e63a4);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e63a9:{NFSU2_TR(0x4e63a9);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e63ae:{NFSU2_TR(0x4e63ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e63af:{NFSU2_TR(0x4e63af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e63b4ull));
TAIL_STATIC(0x558540u,558);
}
B4e63b4:L4e63b4:{c.instructions+=2;NFSU2_TR(0x4e63b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4e63b7:{NFSU2_TR(0x4e63b7);
{goto L4e63ef;}
}
B4e63b9:L4e63b9:{c.instructions+=1;NFSU2_TR(0x4e63b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e63c6;}}
}
B4e63bb:L4e63bb:{c.instructions+=3;NFSU2_TR(0x4e63bb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e63bd:{NFSU2_TR(0x4e63bd);
__builtin_memmove((R+4),(R+24),4);
}
B4e63bf:{NFSU2_TR(0x4e63bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e63c4ull));
TAIL_STATIC(0x4d39b0u,4d3);
}
B4e63c4:L4e63c4:{c.instructions+=1;NFSU2_TR(0x4e63c4);
{goto L4e63ef;}
}
B4e63c6:L4e63c6:{c.instructions+=3;NFSU2_TR(0x4e63c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e63c9:{NFSU2_TR(0x4e63c9);
u8 U[4];
w4(U+0,u32(0x12df9f4full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e63ce:{NFSU2_TR(0x4e63ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e63d3ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e63d3:L4e63d3:{c.instructions+=6;NFSU2_TR(0x4e63d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e63d4:{NFSU2_TR(0x4e63d4);
u8 U[4];
w4(U+0,u32(0xca4ce1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e63d9:{NFSU2_TR(0x4e63d9);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e63de:{NFSU2_TR(0x4e63de);
u8 U[4];
w4(U+0,u32(0x7902c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e63e3:{NFSU2_TR(0x4e63e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e63e4:{NFSU2_TR(0x4e63e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e63e9ull));
TAIL_STATIC(0x5585e0u,558);
}
B4e63e9:L4e63e9:{c.instructions+=2;NFSU2_TR(0x4e63e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4e63ec:{NFSU2_TR(0x4e63ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e63ef:L4e63ef:{c.instructions+=5;NFSU2_TR(0x4e63ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e63f2:{NFSU2_TR(0x4e63f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e63f4:{NFSU2_TR(0x4e63f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e63f7:{NFSU2_TR(0x4e63f7);
u8 U[4];
w4(U+0,u32(0x797938ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e63fc:{NFSU2_TR(0x4e63fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e6412;}}
}
B4e63fe:L4e63fe:{c.instructions+=1;NFSU2_TR(0x4e63fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6403ull));
TAIL_STATIC(0x505450u,505);
}
B4e6403:L4e6403:{c.instructions+=3;NFSU2_TR(0x4e6403);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6404:{NFSU2_TR(0x4e6404);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6405:{NFSU2_TR(0x4e6405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e640aull));
TAIL_STATIC(0x5379c0u,537);
}
B4e640a:L4e640a:{c.instructions+=2;NFSU2_TR(0x4e640a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e640b:{NFSU2_TR(0x4e640b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6410ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e6410:L4e6410:{c.instructions+=1;NFSU2_TR(0x4e6410);
{goto L4e6424;}
}
B4e6412:L4e6412:{c.instructions+=1;NFSU2_TR(0x4e6412);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6417ull));
TAIL_STATIC(0x505450u,505);
}
B4e6417:L4e6417:{c.instructions+=3;NFSU2_TR(0x4e6417);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6418:{NFSU2_TR(0x4e6418);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6419:{NFSU2_TR(0x4e6419);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e641eull));
TAIL_STATIC(0x5379c0u,537);
}
B4e641e:L4e641e:{c.instructions+=2;NFSU2_TR(0x4e641e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e641f:{NFSU2_TR(0x4e641f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6424ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4e6424:L4e6424:{c.instructions+=6;NFSU2_TR(0x4e6424);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e6427:{NFSU2_TR(0x4e6427);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e642a:{NFSU2_TR(0x4e642a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e642d:{NFSU2_TR(0x4e642d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e6430:{NFSU2_TR(0x4e6430);
u8 U[4];
w4(U+0,u32(0x797924ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6435:{NFSU2_TR(0x4e6435);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e6450;}}
}
B4e6437:L4e6437:{c.instructions+=1;NFSU2_TR(0x4e6437);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e643cull));
TAIL_STATIC(0x505450u,505);
}
B4e643c:L4e643c:{c.instructions+=3;NFSU2_TR(0x4e643c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e643d:{NFSU2_TR(0x4e643d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e643e:{NFSU2_TR(0x4e643e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6443ull));
TAIL_STATIC(0x5379c0u,537);
}
B4e6443:L4e6443:{c.instructions+=2;NFSU2_TR(0x4e6443);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6444:{NFSU2_TR(0x4e6444);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6449ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e6449:L4e6449:{c.instructions+=5;NFSU2_TR(0x4e6449);
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
B4e644c:{NFSU2_TR(0x4e644c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e644d:{NFSU2_TR(0x4e644d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e644e:{NFSU2_TR(0x4e644e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e644f:{NFSU2_TR(0x4e644f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6450:L4e6450:{c.instructions+=1;NFSU2_TR(0x4e6450);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6455ull));
TAIL_STATIC(0x505450u,505);
}
B4e6455:L4e6455:{c.instructions+=3;NFSU2_TR(0x4e6455);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6456:{NFSU2_TR(0x4e6456);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6457:{NFSU2_TR(0x4e6457);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e645cull));
TAIL_STATIC(0x5379c0u,537);
}
B4e645c:L4e645c:{c.instructions+=2;NFSU2_TR(0x4e645c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e645d:{NFSU2_TR(0x4e645d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6462ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4e6462:L4e6462:{c.instructions+=5;NFSU2_TR(0x4e6462);
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
B4e6465:{NFSU2_TR(0x4e6465);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e6466:{NFSU2_TR(0x4e6466);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6467:{NFSU2_TR(0x4e6467);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e6468:{NFSU2_TR(0x4e6468);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6470:L4e6470:{c.instructions+=5;NFSU2_TR(0x4e6470);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e6474:{NFSU2_TR(0x4e6474);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e6477:{NFSU2_TR(0x4e6477);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e6479:{NFSU2_TR(0x4e6479);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e647a:{NFSU2_TR(0x4e647a);
if(r1(R+518)){{goto L4e64ad;}}
}
B4e647c:L4e647c:{c.instructions+=4;NFSU2_TR(0x4e647c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e6480:{NFSU2_TR(0x4e6480);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e6483:{NFSU2_TR(0x4e6483);
u8 U[4];
w4(U+0,u32(0x6cf6e689ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6488:{NFSU2_TR(0x4e6488);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e648dull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e648d:L4e648d:{c.instructions+=7;NFSU2_TR(0x4e648d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e648e:{NFSU2_TR(0x4e648e);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6493:{NFSU2_TR(0x4e6493);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6498:{NFSU2_TR(0x4e6498);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e649d:{NFSU2_TR(0x4e649d);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e64a2:{NFSU2_TR(0x4e64a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e64a3:{NFSU2_TR(0x4e64a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e64a8ull));
TAIL_STATIC(0x558540u,558);
}
B4e64a8:L4e64a8:{c.instructions+=3;NFSU2_TR(0x4e64a8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e64ab:{NFSU2_TR(0x4e64ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e64ac:{NFSU2_TR(0x4e64ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e64ad:L4e64ad:{c.instructions+=6;NFSU2_TR(0x4e64ad);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e64b1:{NFSU2_TR(0x4e64b1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e64b3:{NFSU2_TR(0x4e64b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4e64b6:{NFSU2_TR(0x4e64b6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e64b8:{NFSU2_TR(0x4e64b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e64b9:{NFSU2_TR(0x4e64b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e64beull));
TAIL_STATIC(0x58b9a0u,58b);
}
B4e64be:L4e64be:{c.instructions+=2;NFSU2_TR(0x4e64be);
__builtin_memmove((R+4),(R+0),4);
}
B4e64c0:{NFSU2_TR(0x4e64c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e64c5ull));
TAIL_STATIC(0x58e850u,58e);
}
B4e64c5:L4e64c5:{c.instructions+=3;NFSU2_TR(0x4e64c5);
__builtin_memmove((R+4),(R+24),4);
}
B4e64c7:{NFSU2_TR(0x4e64c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e64c8:{NFSU2_TR(0x4e64c8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e6310u);}goto L4e6310;}
}
B4e64d0:L4e64d0:{c.instructions+=8;NFSU2_TR(0x4e64d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e64d2:{NFSU2_TR(0x4e64d2);
u8 U[4];
w4(U+0,u32(0x775e34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e64d7:{NFSU2_TR(0x4e64d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e64dd:{NFSU2_TR(0x4e64dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e64de:{NFSU2_TR(0x4e64de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e64e5:{NFSU2_TR(0x4e64e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e64e6:{NFSU2_TR(0x4e64e6);
u8 U[4];
w4(U+0,u32(0x94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e64eb:{NFSU2_TR(0x4e64eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e64f0ull));
TAIL_STATIC(0x575620u,575);
}
B4e64f0:L4e64f0:{c.instructions+=5;NFSU2_TR(0x4e64f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e64f3:{NFSU2_TR(0x4e64f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4e64f7:{NFSU2_TR(0x4e64f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e64f9:{NFSU2_TR(0x4e64f9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e6501:{NFSU2_TR(0x4e6501);
if(r1(R+518)){{goto L4e651e;}}
}
B4e6503:L4e6503:{c.instructions+=4;NFSU2_TR(0x4e6503);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e6507:{NFSU2_TR(0x4e6507);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6508:{NFSU2_TR(0x4e6508);
__builtin_memmove((R+4),(R+0),4);
}
B4e650a:{NFSU2_TR(0x4e650a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e650full));
TAIL_STATIC(0x4d4240u,4d4);
}
B4e650f:L4e650f:{c.instructions+=4;NFSU2_TR(0x4e650f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e6513:{NFSU2_TR(0x4e6513);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e651a:{NFSU2_TR(0x4e651a);
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
B4e651d:{NFSU2_TR(0x4e651d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e651e:L4e651e:{c.instructions+=5;NFSU2_TR(0x4e651e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e6522:{NFSU2_TR(0x4e6522);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e6524:{NFSU2_TR(0x4e6524);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e652b:{NFSU2_TR(0x4e652b);
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
B4e652e:{NFSU2_TR(0x4e652e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6530:L4e6530:{c.instructions+=8;NFSU2_TR(0x4e6530);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6532:{NFSU2_TR(0x4e6532);
u8 U[4];
w4(U+0,u32(0x775e54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6537:{NFSU2_TR(0x4e6537);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e653d:{NFSU2_TR(0x4e653d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e653e:{NFSU2_TR(0x4e653e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e6545:{NFSU2_TR(0x4e6545);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6546:{NFSU2_TR(0x4e6546);
u8 U[4];
w4(U+0,u32(0x158ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e654b:{NFSU2_TR(0x4e654b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6550ull));
TAIL_STATIC(0x575620u,575);
}
B4e6550:L4e6550:{c.instructions+=5;NFSU2_TR(0x4e6550);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e6553:{NFSU2_TR(0x4e6553);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4e6557:{NFSU2_TR(0x4e6557);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e6559:{NFSU2_TR(0x4e6559);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e6561:{NFSU2_TR(0x4e6561);
if(r1(R+518)){{goto L4e657e;}}
}
B4e6563:L4e6563:{c.instructions+=4;NFSU2_TR(0x4e6563);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e6567:{NFSU2_TR(0x4e6567);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6568:{NFSU2_TR(0x4e6568);
__builtin_memmove((R+4),(R+0),4);
}
B4e656a:{NFSU2_TR(0x4e656a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e656full));
TAIL_STATIC(0x4d4560u,4d4);
}
B4e656f:L4e656f:{c.instructions+=4;NFSU2_TR(0x4e656f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e6573:{NFSU2_TR(0x4e6573);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e657a:{NFSU2_TR(0x4e657a);
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
B4e657d:{NFSU2_TR(0x4e657d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e657e:L4e657e:{c.instructions+=5;NFSU2_TR(0x4e657e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e6582:{NFSU2_TR(0x4e6582);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e6584:{NFSU2_TR(0x4e6584);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e658b:{NFSU2_TR(0x4e658b);
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
B4e658e:{NFSU2_TR(0x4e658e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6590:L4e6590:{c.instructions+=3;NFSU2_TR(0x4e6590);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6591:{NFSU2_TR(0x4e6591);
__builtin_memmove((R+24),(R+4),4);
}
B4e6593:{NFSU2_TR(0x4e6593);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6598ull));
TAIL_STATIC(0x4d47c0u,4d4);
}
B4e6598:L4e6598:{c.instructions+=2;NFSU2_TR(0x4e6598);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B4e659d:{NFSU2_TR(0x4e659d);
if(r1(R+518)){{goto L4e65a8;}}
}
B4e659f:L4e659f:{c.instructions+=2;NFSU2_TR(0x4e659f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e65a0:{NFSU2_TR(0x4e65a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e65a5ull));
TAIL_STATIC(0x575630u,575);
}
B4e65a5:L4e65a5:{c.instructions+=1;NFSU2_TR(0x4e65a5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e65a8:L4e65a8:{c.instructions+=3;NFSU2_TR(0x4e65a8);
__builtin_memmove((R+0),(R+24),4);
}
B4e65aa:{NFSU2_TR(0x4e65aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e65ab:{NFSU2_TR(0x4e65ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e65b0:L4e65b0:{c.instructions+=14;NFSU2_TR(0x4e65b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e65b2:{NFSU2_TR(0x4e65b2);
u8 U[4];
w4(U+0,u32(0x775e81ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e65b7:{NFSU2_TR(0x4e65b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e65bd:{NFSU2_TR(0x4e65bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e65be:{NFSU2_TR(0x4e65be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e65c5:{NFSU2_TR(0x4e65c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e65c6:{NFSU2_TR(0x4e65c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e65c7:{NFSU2_TR(0x4e65c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e65c8:{NFSU2_TR(0x4e65c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e65c9:{NFSU2_TR(0x4e65c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e65cd:{NFSU2_TR(0x4e65cd);
__builtin_memmove((R+24),(R+4),4);
}
B4e65cf:{NFSU2_TR(0x4e65cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e65d0:{NFSU2_TR(0x4e65d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e65d4:{NFSU2_TR(0x4e65d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e65d9ull));
TAIL_STATIC(0x551de0u,551);
}
B4e65d9:L4e65d9:{c.instructions+=19;NFSU2_TR(0x4e65d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e65dc:{NFSU2_TR(0x4e65dc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4e65de:{NFSU2_TR(0x4e65de);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e65e0:{NFSU2_TR(0x4e65e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e65e1:{NFSU2_TR(0x4e65e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e65e2:{NFSU2_TR(0x4e65e2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e65e4:{NFSU2_TR(0x4e65e4);
u8 U[4];
w4(U+0,u32(0x796484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e65e9:{NFSU2_TR(0x4e65e9);
u8 U[4];
w4(U+0,u32(0x796484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e65ee:{NFSU2_TR(0x4e65ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e65ef:{NFSU2_TR(0x4e65ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e65f2:{NFSU2_TR(0x4e65f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e65f6:{NFSU2_TR(0x4e65f6);
u8 U[4];
w4(U+0,u32(0x796248ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e65fc:{NFSU2_TR(0x4e65fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e65ff:{NFSU2_TR(0x4e65ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e6602:{NFSU2_TR(0x4e6602);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e6605:{NFSU2_TR(0x4e6605);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e6608:{NFSU2_TR(0x4e6608);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e660b:{NFSU2_TR(0x4e660b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e660e:{NFSU2_TR(0x4e660e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6613ull));
TAIL_STATIC(0x542ca0u,542);
}
B4e6613:L4e6613:{c.instructions+=10;NFSU2_TR(0x4e6613);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e6619:{NFSU2_TR(0x4e6619);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e661e:{NFSU2_TR(0x4e661e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e6624:{NFSU2_TR(0x4e6624);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e662a:{NFSU2_TR(0x4e662a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e6630:{NFSU2_TR(0x4e6630);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e6636:{NFSU2_TR(0x4e6636);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e663c:{NFSU2_TR(0x4e663c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e6642:{NFSU2_TR(0x4e6642);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x125ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e6648:{NFSU2_TR(0x4e6648);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e664dull));
TAIL_STATIC(0x495630u,495);
}
B4e664d:L4e664d:{c.instructions+=9;NFSU2_TR(0x4e664d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e6653:{NFSU2_TR(0x4e6653);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e6659:{NFSU2_TR(0x4e6659);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e665f:{NFSU2_TR(0x4e665f);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4e6664:{NFSU2_TR(0x4e6664);
__builtin_memmove(gp(0x8637c8),(R+0),4);
}
B4e6669:{NFSU2_TR(0x4e6669);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e666c:{NFSU2_TR(0x4e666c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e666d:{NFSU2_TR(0x4e666d);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e6672:{NFSU2_TR(0x4e6672);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6677ull));
TAIL_STATIC(0x504820u,504);
}
B4e6677:L4e6677:{c.instructions+=5;NFSU2_TR(0x4e6677);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e667a:{NFSU2_TR(0x4e667a);
u8 U[4];
w4(U+0,u32(0xb7f74a4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e667f:{NFSU2_TR(0x4e667f);
u8 U[4];
w4(U+0,u32(0x64aff8d3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6684:{NFSU2_TR(0x4e6684);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6685:{NFSU2_TR(0x4e6685);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e668aull));
TAIL_STATIC(0x537a10u,537);
}
B4e668a:L4e668a:{c.instructions+=3;NFSU2_TR(0x4e668a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e668d:{NFSU2_TR(0x4e668d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e668e:{NFSU2_TR(0x4e668e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6693ull));
TAIL_STATIC(0x50c900u,50c);
}
B4e6693:L4e6693:{c.instructions+=6;NFSU2_TR(0x4e6693);
__builtin_memmove((R+4),gp(0x7f44b4),4);
}
B4e6699:{NFSU2_TR(0x4e6699);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e669b:{NFSU2_TR(0x4e669b);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e66a0:{NFSU2_TR(0x4e66a0);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e66a5:{NFSU2_TR(0x4e66a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e66a6:{NFSU2_TR(0x4e66a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e66abull));
TAIL_STATIC(0x537c00u,537);
}
B4e66ab:L4e66ab:{c.instructions+=6;NFSU2_TR(0x4e66ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e66ae:{NFSU2_TR(0x4e66ae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e66b0:{NFSU2_TR(0x4e66b0);
u8 U[4];
w4(U+0,u32(0x7905f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e66b5:{NFSU2_TR(0x4e66b5);
u8 U[4];
w4(U+0,u32(0x79798cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e66ba:{NFSU2_TR(0x4e66ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e66bb:{NFSU2_TR(0x4e66bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e66c0ull));
TAIL_STATIC(0x5426c0u,542);
}
B4e66c0:L4e66c0:{c.instructions+=3;NFSU2_TR(0x4e66c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4e66c3:{NFSU2_TR(0x4e66c3);
__builtin_memmove((R+4),(R+24),4);
}
B4e66c5:{NFSU2_TR(0x4e66c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e66caull));
TAIL_STATIC(0x4a0e90u,4a0);
}
B4e66ca:L4e66ca:{c.instructions+=2;NFSU2_TR(0x4e66ca);
__builtin_memmove((R+4),(R+24),4);
}
B4e66cc:{NFSU2_TR(0x4e66cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e66d1ull));
TAIL_STATIC(0x4bce60u,4bc);
}
B4e66d1:L4e66d1:{c.instructions+=2;NFSU2_TR(0x4e66d1);
__builtin_memmove((R+4),(R+24),4);
}
B4e66d3:{NFSU2_TR(0x4e66d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e66d8ull));
TAIL_STATIC(0x4d4d50u,4d4);
}
B4e66d8:L4e66d8:{c.instructions+=3;NFSU2_TR(0x4e66d8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e66da:{NFSU2_TR(0x4e66da);
__builtin_memmove((R+4),(R+24),4);
}
B4e66dc:{NFSU2_TR(0x4e66dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e66e1ull));
TAIL_STATIC(0x4d49d0u,4d4);
}
B4e66e1:L4e66e1:{c.instructions+=5;NFSU2_TR(0x4e66e1);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4e66e6:{NFSU2_TR(0x4e66e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e66ec:{NFSU2_TR(0x4e66ec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e66ed:{NFSU2_TR(0x4e66ed);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e66f2:{NFSU2_TR(0x4e66f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e66f7ull));
TAIL_STATIC(0x51ce80u,51c);
}
B4e66f7:L4e66f7:{c.instructions+=3;NFSU2_TR(0x4e66f7);
__builtin_memmove((R+4),gp(0x7f44b4),4);
}
B4e66fd:{NFSU2_TR(0x4e66fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e66fe:{NFSU2_TR(0x4e66fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6703ull));
TAIL_STATIC(0x52cef0u,52c);
}
B4e6703:L4e6703:{c.instructions+=3;NFSU2_TR(0x4e6703);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e6706:{NFSU2_TR(0x4e6706);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e6708:{NFSU2_TR(0x4e6708);
if(r1(R+518)){{goto L4e671a;}}
}
B4e670a:L4e670a:{c.instructions+=4;NFSU2_TR(0x4e670a);
__builtin_memmove((R+8),gp(0x7f44b4),4);
}
B4e6710:{NFSU2_TR(0x4e6710);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6711:{NFSU2_TR(0x4e6711);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6712:{NFSU2_TR(0x4e6712);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6717ull));
TAIL_STATIC(0x51ce80u,51c);
}
B4e6717:L4e6717:{c.instructions+=1;NFSU2_TR(0x4e6717);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e671a:L4e671a:{c.instructions+=2;NFSU2_TR(0x4e671a);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4e6720:{NFSU2_TR(0x4e6720);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6725ull));
TAIL_STATIC(0x54e6b0u,54e);
}
B4e6725:L4e6725:{c.instructions+=10;NFSU2_TR(0x4e6725);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e6729:{NFSU2_TR(0x4e6729);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e672a:{NFSU2_TR(0x4e672a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
w4(U+4,u32(0xc407210ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e6734:{NFSU2_TR(0x4e6734);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e673b:{NFSU2_TR(0x4e673b);
__builtin_memmove((R+0),(R+24),4);
}
B4e673d:{NFSU2_TR(0x4e673d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e673e:{NFSU2_TR(0x4e673e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e673f:{NFSU2_TR(0x4e673f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e6746:{NFSU2_TR(0x4e6746);
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
B4e6749:{NFSU2_TR(0x4e6749);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6750:L4e6750:{c.instructions+=3;NFSU2_TR(0x4e6750);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6751:{NFSU2_TR(0x4e6751);
__builtin_memmove((R+24),(R+4),4);
}
B4e6753:{NFSU2_TR(0x4e6753);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6758ull));
TAIL_STATIC(0x4d4830u,4d4);
}
B4e6758:L4e6758:{c.instructions+=2;NFSU2_TR(0x4e6758);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B4e675d:{NFSU2_TR(0x4e675d);
if(r1(R+518)){{goto L4e6768;}}
}
B4e675f:L4e675f:{c.instructions+=2;NFSU2_TR(0x4e675f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6760:{NFSU2_TR(0x4e6760);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6765ull));
TAIL_STATIC(0x575630u,575);
}
B4e6765:L4e6765:{c.instructions+=1;NFSU2_TR(0x4e6765);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e6768:L4e6768:{c.instructions+=3;NFSU2_TR(0x4e6768);
__builtin_memmove((R+0),(R+24),4);
}
B4e676a:{NFSU2_TR(0x4e676a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e676b:{NFSU2_TR(0x4e676b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6770:L4e6770:{c.instructions+=5;NFSU2_TR(0x4e6770);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e6774:{NFSU2_TR(0x4e6774);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd15c04ecull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e6779:{NFSU2_TR(0x4e6779);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e677a:{NFSU2_TR(0x4e677a);
__builtin_memmove((R+24),(R+4),4);
}
B4e677c:{NFSU2_TR(0x4e677c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e678e;}}
}
B4e677e:L4e677e:{c.instructions+=3;NFSU2_TR(0x4e677e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e6781:{NFSU2_TR(0x4e6781);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6782:{NFSU2_TR(0x4e6782);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6787ull));
TAIL_STATIC(0x5379a0u,537);
}
B4e6787:L4e6787:{c.instructions+=3;NFSU2_TR(0x4e6787);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e678a:{NFSU2_TR(0x4e678a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e678b:{NFSU2_TR(0x4e678b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e678e:L4e678e:{c.instructions+=3;NFSU2_TR(0x4e678e);
__builtin_memmove((R+4),gp(0x838521),1);
}
B4e6794:{NFSU2_TR(0x4e6794);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e6796:{NFSU2_TR(0x4e6796);
if(r1(R+518)){{goto L4e67b8;}}
}
B4e6798:L4e6798:{c.instructions+=2;NFSU2_TR(0x4e6798);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e679d:{NFSU2_TR(0x4e679d);
if(r1(R+518)){{goto L4e67b8;}}
}
B4e679f:L4e679f:{c.instructions+=2;NFSU2_TR(0x4e679f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x153e234ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e67a4:{NFSU2_TR(0x4e67a4);
if(r1(R+518)){{goto L4e67b8;}}
}
B4e67a6:L4e67a6:{c.instructions+=2;NFSU2_TR(0x4e67a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xe1fde1d1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e67ab:{NFSU2_TR(0x4e67ab);
if(r1(R+518)){{goto L4e67b8;}}
}
B4e67ad:L4e67ad:{c.instructions+=2;NFSU2_TR(0x4e67ad);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x4fbee42aull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4fbee42aull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x4fbee42aull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e67b2:{NFSU2_TR(0x4e67b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e6c02;}}
}
B4e67b8:L4e67b8:{c.instructions+=2;NFSU2_TR(0x4e67b8);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e67bd:{NFSU2_TR(0x4e67bd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e6962;}}
}
B4e67c3:L4e67c3:{c.instructions+=1;NFSU2_TR(0x4e67c3);
if(r1(R+518)){{goto L4e690e;}}
}
B4e67c9:L4e67c9:{c.instructions+=2;NFSU2_TR(0x4e67c9);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x35f8620bull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e67ce:{NFSU2_TR(0x4e67ce);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e688c;}}
}
B4e67d4:L4e67d4:{c.instructions+=1;NFSU2_TR(0x4e67d4);
if(r1(R+518)){{goto L4e6847;}}
}
B4e67d6:L4e67d6:{c.instructions+=2;NFSU2_TR(0x4e67d6);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e67db:{NFSU2_TR(0x4e67db);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e6828;}}
}
B4e67dd:L4e67dd:{c.instructions+=1;NFSU2_TR(0x4e67dd);
if(r1(R+518)){{goto L4e68b6;}}
}
B4e67e3:L4e67e3:{c.instructions+=2;NFSU2_TR(0x4e67e3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e67e6:{NFSU2_TR(0x4e67e6);
if(r1(R+518)){{goto L4e681b;}}
}
B4e67e8:L4e67e8:{c.instructions+=2;NFSU2_TR(0x4e67e8);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x153e234ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x153e234ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x153e234ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e67ed:{NFSU2_TR(0x4e67ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e6c02;}}
}
B4e67f3:L4e67f3:{c.instructions+=3;NFSU2_TR(0x4e67f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e67f9:{NFSU2_TR(0x4e67f9);
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
B4e67fb:{NFSU2_TR(0x4e67fb);
if(r1(R+518)){{goto L4e6c02;}}
}
B4e6801:L4e6801:{c.instructions+=4;NFSU2_TR(0x4e6801);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e6804:{NFSU2_TR(0x4e6804);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e6807:{NFSU2_TR(0x4e6807);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4e6809:{NFSU2_TR(0x4e6809);
if(r1(R+518)){{goto L4e6c02;}}
}
B4e680f:L4e680f:{c.instructions+=2;NFSU2_TR(0x4e680f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e6812:{NFSU2_TR(0x4e6812);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6817ull));
TAIL_STATIC(0x4958d0u,495);
}
B4e6817:L4e6817:{c.instructions+=2;NFSU2_TR(0x4e6817);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6818:{NFSU2_TR(0x4e6818);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e681b:L4e681b:{c.instructions+=3;NFSU2_TR(0x4e681b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e681d:{NFSU2_TR(0x4e681d);
__builtin_memmove((R+4),(R+24),4);
}
B4e681f:{NFSU2_TR(0x4e681f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6824ull));
TAIL_STATIC(0x4a0f90u,4a0);
}
B4e6824:L4e6824:{c.instructions+=2;NFSU2_TR(0x4e6824);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6825:{NFSU2_TR(0x4e6825);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6828:L4e6828:{c.instructions+=2;NFSU2_TR(0x4e6828);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x1c6d9c35ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1c6d9c35ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x1c6d9c35ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e682d:{NFSU2_TR(0x4e682d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e6c02;}}
}
B4e6833:L4e6833:{c.instructions+=3;NFSU2_TR(0x4e6833);
u8 U[4];
w4(U+0,u32(0x836390ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6838:{NFSU2_TR(0x4e6838);
__builtin_memmove((R+4),(R+24),4);
}
B4e683a:{NFSU2_TR(0x4e683a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e683full));
TAIL_STATIC(0x4bcdb0u,4bc);
}
B4e683f:L4e683f:{c.instructions+=3;NFSU2_TR(0x4e683f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e6843:{NFSU2_TR(0x4e6843);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6844:{NFSU2_TR(0x4e6844);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6847:L4e6847:{c.instructions+=5;NFSU2_TR(0x4e6847);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6849:{NFSU2_TR(0x4e6849);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e684e:{NFSU2_TR(0x4e684e);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6853:{NFSU2_TR(0x4e6853);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6858:{NFSU2_TR(0x4e6858);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e685dull));
TAIL_STATIC(0x537c00u,537);
}
B4e685d:L4e685d:{c.instructions+=6;NFSU2_TR(0x4e685d);
__builtin_memmove((R+4),gp(0x7f44b4),4);
}
B4e6863:{NFSU2_TR(0x4e6863);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6865:{NFSU2_TR(0x4e6865);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e686a:{NFSU2_TR(0x4e686a);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e686f:{NFSU2_TR(0x4e686f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6870:{NFSU2_TR(0x4e6870);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6875ull));
TAIL_STATIC(0x537c00u,537);
}
B4e6875:L4e6875:{c.instructions+=4;NFSU2_TR(0x4e6875);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4e6878:{NFSU2_TR(0x4e6878);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e687a:{NFSU2_TR(0x4e687a);
__builtin_memmove((R+4),(R+24),4);
}
B4e687c:{NFSU2_TR(0x4e687c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6881ull));
TAIL_STATIC(0x4d49d0u,4d4);
}
B4e6881:L4e6881:{c.instructions+=2;NFSU2_TR(0x4e6881);
__builtin_memmove((R+4),(R+24),4);
}
B4e6883:{NFSU2_TR(0x4e6883);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6888ull));
TAIL_STATIC(0x542720u,542);
}
B4e6888:L4e6888:{c.instructions+=2;NFSU2_TR(0x4e6888);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6889:{NFSU2_TR(0x4e6889);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e688c:L4e688c:{c.instructions+=2;NFSU2_TR(0x4e688c);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x5073ef13ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5073ef13ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e6891:{NFSU2_TR(0x4e6891);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e68f6;}}
}
B4e6893:L4e6893:{c.instructions+=1;NFSU2_TR(0x4e6893);
if(r1(R+518)){{goto L4e68d7;}}
}
B4e6895:L4e6895:{c.instructions+=2;NFSU2_TR(0x4e6895);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e689a:{NFSU2_TR(0x4e689a);
if(r1(R+518)){{goto L4e68b6;}}
}
B4e689c:L4e689c:{c.instructions+=2;NFSU2_TR(0x4e689c);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x4fbee42aull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4fbee42aull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x4fbee42aull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e68a1:{NFSU2_TR(0x4e68a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e6c02;}}
}
B4e68a7:L4e68a7:{c.instructions+=4;NFSU2_TR(0x4e68a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e68ae:{NFSU2_TR(0x4e68ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e68b2:{NFSU2_TR(0x4e68b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e68b3:{NFSU2_TR(0x4e68b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e68b6:L4e68b6:{c.instructions+=2;NFSU2_TR(0x4e68b6);
u8 U[4];
w4(U+0,u32(0x790210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e68bb:{NFSU2_TR(0x4e68bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e68c0ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e68c0:L4e68c0:{c.instructions+=3;NFSU2_TR(0x4e68c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e68c3:{NFSU2_TR(0x4e68c3);
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
B4e68c5:{NFSU2_TR(0x4e68c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e6c02;}}
}
B4e68cb:L4e68cb:{c.instructions+=3;NFSU2_TR(0x4e68cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e68cc:{NFSU2_TR(0x4e68cc);
__builtin_memmove((R+4),(R+24),4);
}
B4e68ce:{NFSU2_TR(0x4e68ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e68d3ull));
TAIL_STATIC(0x4a0f90u,4a0);
}
B4e68d3:L4e68d3:{c.instructions+=2;NFSU2_TR(0x4e68d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e68d4:{NFSU2_TR(0x4e68d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e68d7:L4e68d7:{c.instructions+=2;NFSU2_TR(0x4e68d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4e68dd:{NFSU2_TR(0x4e68dd);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4e68e9;}}
}
B4e68df:L4e68df:{c.instructions+=1;NFSU2_TR(0x4e68df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e68e9:L4e68e9:{c.instructions+=3;NFSU2_TR(0x4e68e9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e68eb:{NFSU2_TR(0x4e68eb);
__builtin_memmove((R+4),(R+24),4);
}
B4e68ed:{NFSU2_TR(0x4e68ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e68f2ull));
TAIL_STATIC(0x4d49d0u,4d4);
}
B4e68f2:L4e68f2:{c.instructions+=2;NFSU2_TR(0x4e68f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e68f3:{NFSU2_TR(0x4e68f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e68f6:L4e68f6:{c.instructions+=2;NFSU2_TR(0x4e68f6);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x72619778ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x72619778ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e68fb:{NFSU2_TR(0x4e68fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e6c02;}}
}
B4e6901:L4e6901:{c.instructions+=3;NFSU2_TR(0x4e6901);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6903:{NFSU2_TR(0x4e6903);
__builtin_memmove((R+4),(R+24),4);
}
B4e6905:{NFSU2_TR(0x4e6905);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e690aull));
TAIL_STATIC(0x4d4f00u,4d4);
}
B4e690a:L4e690a:{c.instructions+=2;NFSU2_TR(0x4e690a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e690b:{NFSU2_TR(0x4e690b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e690e:L4e690e:{c.instructions+=2;NFSU2_TR(0x4e690e);
u8 U[4];
w4(U+0,u32(0x4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6910:{NFSU2_TR(0x4e6910);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6915ull));
TAIL_STATIC(0x50d180u,50d);
}
B4e6915:L4e6915:{c.instructions+=6;NFSU2_TR(0x4e6915);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e6918:{NFSU2_TR(0x4e6918);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e691a:{NFSU2_TR(0x4e691a);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e691f:{NFSU2_TR(0x4e691f);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6924:{NFSU2_TR(0x4e6924);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6925:{NFSU2_TR(0x4e6925);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e692aull));
TAIL_STATIC(0x537c00u,537);
}
B4e692a:L4e692a:{c.instructions+=6;NFSU2_TR(0x4e692a);
__builtin_memmove((R+0),gp(0x7f44b4),4);
}
B4e692f:{NFSU2_TR(0x4e692f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6931:{NFSU2_TR(0x4e6931);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6936:{NFSU2_TR(0x4e6936);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e693b:{NFSU2_TR(0x4e693b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e693c:{NFSU2_TR(0x4e693c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6941ull));
TAIL_STATIC(0x537c00u,537);
}
B4e6941:L4e6941:{c.instructions+=5;NFSU2_TR(0x4e6941);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6943:{NFSU2_TR(0x4e6943);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6948:{NFSU2_TR(0x4e6948);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e694d:{NFSU2_TR(0x4e694d);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6952:{NFSU2_TR(0x4e6952);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6957ull));
TAIL_STATIC(0x537c00u,537);
}
B4e6957:L4e6957:{c.instructions+=4;NFSU2_TR(0x4e6957);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e695a:{NFSU2_TR(0x4e695a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e695e:{NFSU2_TR(0x4e695e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e695f:{NFSU2_TR(0x4e695f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6962:L4e6962:{c.instructions+=2;NFSU2_TR(0x4e6962);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc519bfc0ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc519bfc0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e6967:{NFSU2_TR(0x4e6967);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e6a19;}}
}
B4e696d:L4e696d:{c.instructions+=1;NFSU2_TR(0x4e696d);
if(r1(R+518)){{goto L4e69c3;}}
}
B4e696f:L4e696f:{c.instructions+=2;NFSU2_TR(0x4e696f);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9803f6e2ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e6974:{NFSU2_TR(0x4e6974);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e69ad;}}
}
B4e6976:L4e6976:{c.instructions+=1;NFSU2_TR(0x4e6976);
if(r1(R+518)){{goto L4e69a2;}}
}
B4e6978:L4e6978:{c.instructions+=2;NFSU2_TR(0x4e6978);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e697d:{NFSU2_TR(0x4e697d);
if(r1(R+518)){{goto L4e6995;}}
}
B4e697f:L4e697f:{c.instructions+=2;NFSU2_TR(0x4e697f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e6984:{NFSU2_TR(0x4e6984);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e6c02;}}
}
B4e698a:L4e698a:{c.instructions+=2;NFSU2_TR(0x4e698a);
__builtin_memmove((R+4),(R+24),4);
}
B4e698c:{NFSU2_TR(0x4e698c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6991ull));
TAIL_STATIC(0x4bcff0u,4bc);
}
B4e6991:L4e6991:{c.instructions+=2;NFSU2_TR(0x4e6991);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6992:{NFSU2_TR(0x4e6992);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6995:L4e6995:{c.instructions+=3;NFSU2_TR(0x4e6995);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6997:{NFSU2_TR(0x4e6997);
__builtin_memmove((R+4),(R+24),4);
}
B4e6999:{NFSU2_TR(0x4e6999);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e699eull));
TAIL_STATIC(0x4d4f00u,4d4);
}
B4e699e:L4e699e:{c.instructions+=2;NFSU2_TR(0x4e699e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e699f:{NFSU2_TR(0x4e699f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e69a2:L4e69a2:{c.instructions+=2;NFSU2_TR(0x4e69a2);
__builtin_memmove((R+4),(R+24),4);
}
B4e69a4:{NFSU2_TR(0x4e69a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e69a9ull));
TAIL_STATIC(0x4bd090u,4bd);
}
B4e69a9:L4e69a9:{c.instructions+=2;NFSU2_TR(0x4e69a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e69aa:{NFSU2_TR(0x4e69aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e69ad:L4e69ad:{c.instructions+=2;NFSU2_TR(0x4e69ad);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e69b2:{NFSU2_TR(0x4e69b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e6c02;}}
}
B4e69b8:L4e69b8:{c.instructions+=2;NFSU2_TR(0x4e69b8);
__builtin_memmove((R+4),(R+24),4);
}
B4e69ba:{NFSU2_TR(0x4e69ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e69bfull));
TAIL_STATIC(0x4d4fc0u,4d4);
}
B4e69bf:L4e69bf:{c.instructions+=2;NFSU2_TR(0x4e69bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e69c0:{NFSU2_TR(0x4e69c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e69c3:L4e69c3:{c.instructions+=9;NFSU2_TR(0x4e69c3);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4e69c9:{NFSU2_TR(0x4e69c9);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4e69cf:{NFSU2_TR(0x4e69cf);
{u32 ea_=u32(u32(8628680u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4e69d5:{NFSU2_TR(0x4e69d5);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4e69db:{NFSU2_TR(0x4e69db);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4e69dd:{NFSU2_TR(0x4e69dd);
{u32 ea_=u32(u32(8361004u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4e69e3:{NFSU2_TR(0x4e69e3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4e69e5:{NFSU2_TR(0x4e69e5);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4e69e8:{NFSU2_TR(0x4e69e8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4e6c02;}}
}
B4e69ee:L4e69ee:{c.instructions+=3;NFSU2_TR(0x4e69ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e69f1:{NFSU2_TR(0x4e69f1);
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
B4e69f3:{NFSU2_TR(0x4e69f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e6c02;}}
}
B4e69f9:L4e69f9:{c.instructions+=7;NFSU2_TR(0x4e69f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e69fc:{NFSU2_TR(0x4e69fc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e69fe:{NFSU2_TR(0x4e69fe);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6a03:{NFSU2_TR(0x4e6a03);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6a04:{NFSU2_TR(0x4e6a04);
u8 U[4];
w4(U+0,u32(0x79799cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6a09:{NFSU2_TR(0x4e6a09);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e6a0d:{NFSU2_TR(0x4e6a0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6a12ull));
TAIL_STATIC(0x555eb0u,555);
}
B4e6a12:L4e6a12:{c.instructions+=3;NFSU2_TR(0x4e6a12);
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
B4e6a15:{NFSU2_TR(0x4e6a15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6a16:{NFSU2_TR(0x4e6a16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6a19:L4e6a19:{c.instructions+=2;NFSU2_TR(0x4e6a19);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xd9feec59ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd9feec59ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e6a1e:{NFSU2_TR(0x4e6a1e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e6bc5;}}
}
B4e6a24:L4e6a24:{c.instructions+=1;NFSU2_TR(0x4e6a24);
if(r1(R+518)){{goto L4e6b9a;}}
}
B4e6a2a:L4e6a2a:{c.instructions+=2;NFSU2_TR(0x4e6a2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e6a2f:{NFSU2_TR(0x4e6a2f);
if(r1(R+518)){{goto L4e6a5c;}}
}
B4e6a31:L4e6a31:{c.instructions+=2;NFSU2_TR(0x4e6a31);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc9d30688ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc9d30688ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc9d30688ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e6a36:{NFSU2_TR(0x4e6a36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e6c02;}}
}
B4e6a3c:L4e6a3c:{c.instructions+=6;NFSU2_TR(0x4e6a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e6a3f:{NFSU2_TR(0x4e6a3f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6a41:{NFSU2_TR(0x4e6a41);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6a46:{NFSU2_TR(0x4e6a46);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6a4b:{NFSU2_TR(0x4e6a4b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6a4c:{NFSU2_TR(0x4e6a4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6a51ull));
TAIL_STATIC(0x537c00u,537);
}
B4e6a51:L4e6a51:{c.instructions+=4;NFSU2_TR(0x4e6a51);
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
B4e6a54:{NFSU2_TR(0x4e6a54);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e6a58:{NFSU2_TR(0x4e6a58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6a59:{NFSU2_TR(0x4e6a59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6a5c:L4e6a5c:{c.instructions+=1;NFSU2_TR(0x4e6a5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6a61ull));
TAIL_STATIC(0x582b60u,582);
}
B4e6a61:L4e6a61:{c.instructions+=2;NFSU2_TR(0x4e6a61);
__builtin_memmove((R+4),(R+0),4);
}
B4e6a63:{NFSU2_TR(0x4e6a63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6a68ull));
TAIL_STATIC(0x584f10u,584);
}
B4e6a68:L4e6a68:{c.instructions+=2;NFSU2_TR(0x4e6a68);
__builtin_memmove((R+4),(R+24),4);
}
B4e6a6a:{NFSU2_TR(0x4e6a6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6a6full));
TAIL_STATIC(0x4bce60u,4bc);
}
B4e6a6f:L4e6a6f:{c.instructions+=9;NFSU2_TR(0x4e6a6f);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4e6a74:{NFSU2_TR(0x4e6a74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B4e6a7a:{NFSU2_TR(0x4e6a7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e6a7e:{NFSU2_TR(0x4e6a7e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4e6a82:{NFSU2_TR(0x4e6a82);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4e6a88:{NFSU2_TR(0x4e6a88);
{u32 ea_=u32(u32(7921592u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4e6a8e:{NFSU2_TR(0x4e6a8e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4e6a90:{NFSU2_TR(0x4e6a90);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e6a93:{NFSU2_TR(0x4e6a93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e6ab6;}}
}
B4e6a95:L4e6a95:{c.instructions+=1;NFSU2_TR(0x4e6a95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6a9aull));
TAIL_STATIC(0x582b60u,582);
}
B4e6a9a:L4e6a9a:{c.instructions+=2;NFSU2_TR(0x4e6a9a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4e6aa1:{NFSU2_TR(0x4e6aa1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e6ab6;}}
}
B4e6aa3:L4e6aa3:{c.instructions+=4;NFSU2_TR(0x4e6aa3);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4e6aa9:{NFSU2_TR(0x4e6aa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e6aaf:{NFSU2_TR(0x4e6aaf);
__builtin_memmove((R+4),(R+24),4);
}
B4e6ab1:{NFSU2_TR(0x4e6ab1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6ab6ull));
TAIL_STATIC(0x4bcf00u,4bc);
}
B4e6ab6:L4e6ab6:{c.instructions+=3;NFSU2_TR(0x4e6ab6);
__builtin_memmove((R+8),gp(0x7f44b4),4);
}
B4e6abc:{NFSU2_TR(0x4e6abc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6abd:{NFSU2_TR(0x4e6abd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6ac2ull));
TAIL_STATIC(0x52cef0u,52c);
}
B4e6ac2:L4e6ac2:{c.instructions+=3;NFSU2_TR(0x4e6ac2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e6ac5:{NFSU2_TR(0x4e6ac5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e6ac7:{NFSU2_TR(0x4e6ac7);
if(r1(R+518)){{goto L4e6ad9;}}
}
B4e6ac9:L4e6ac9:{c.instructions+=4;NFSU2_TR(0x4e6ac9);
__builtin_memmove((R+0),gp(0x7f44b4),4);
}
B4e6ace:{NFSU2_TR(0x4e6ace);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6ad0:{NFSU2_TR(0x4e6ad0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6ad1:{NFSU2_TR(0x4e6ad1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6ad6ull));
TAIL_STATIC(0x51ce80u,51c);
}
B4e6ad6:L4e6ad6:{c.instructions+=1;NFSU2_TR(0x4e6ad6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e6ad9:L4e6ad9:{c.instructions+=2;NFSU2_TR(0x4e6ad9);
u8 U[4];
w4(U+0,u32(0x796230ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6ade:{NFSU2_TR(0x4e6ade);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6ae3ull));
TAIL_STATIC(0x52cef0u,52c);
}
B4e6ae3:L4e6ae3:{c.instructions+=3;NFSU2_TR(0x4e6ae3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e6ae6:{NFSU2_TR(0x4e6ae6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e6ae8:{NFSU2_TR(0x4e6ae8);
if(r1(R+518)){{goto L4e6af9;}}
}
B4e6aea:L4e6aea:{c.instructions+=3;NFSU2_TR(0x4e6aea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6aec:{NFSU2_TR(0x4e6aec);
u8 U[4];
w4(U+0,u32(0x796230ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6af1:{NFSU2_TR(0x4e6af1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6af6ull));
TAIL_STATIC(0x51ce80u,51c);
}
B4e6af6:L4e6af6:{c.instructions+=1;NFSU2_TR(0x4e6af6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e6af9:L4e6af9:{c.instructions+=2;NFSU2_TR(0x4e6af9);
u8 U[4];
w4(U+0,u32(0x796214ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6afe:{NFSU2_TR(0x4e6afe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6b03ull));
TAIL_STATIC(0x52cef0u,52c);
}
B4e6b03:L4e6b03:{c.instructions+=3;NFSU2_TR(0x4e6b03);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e6b06:{NFSU2_TR(0x4e6b06);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e6b08:{NFSU2_TR(0x4e6b08);
if(r1(R+518)){{goto L4e6b19;}}
}
B4e6b0a:L4e6b0a:{c.instructions+=3;NFSU2_TR(0x4e6b0a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6b0c:{NFSU2_TR(0x4e6b0c);
u8 U[4];
w4(U+0,u32(0x796214ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6b11:{NFSU2_TR(0x4e6b11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6b16ull));
TAIL_STATIC(0x51ce80u,51c);
}
B4e6b16:L4e6b16:{c.instructions+=1;NFSU2_TR(0x4e6b16);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e6b19:L4e6b19:{c.instructions+=3;NFSU2_TR(0x4e6b19);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e6b1f:{NFSU2_TR(0x4e6b1f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e6b21:{NFSU2_TR(0x4e6b21);
if(r1(R+518)){{goto L4e6b34;}}
}
B4e6b23:L4e6b23:{c.instructions+=2;NFSU2_TR(0x4e6b23);
s4(0x83637c,u32(0x0ull));
}
B4e6b2d:{NFSU2_TR(0x4e6b2d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e6b34:L4e6b34:{c.instructions+=3;NFSU2_TR(0x4e6b34);
__builtin_memmove((R+0),gp(0x83637c),4);
}
B4e6b39:{NFSU2_TR(0x4e6b39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e6b3b:{NFSU2_TR(0x4e6b3b);
if(r1(R+518)){{goto L4e6b4d;}}
}
B4e6b3d:L4e6b3d:{c.instructions+=3;NFSU2_TR(0x4e6b3d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6b3f:{NFSU2_TR(0x4e6b3f);
__builtin_memmove((R+4),(R+24),4);
}
B4e6b41:{NFSU2_TR(0x4e6b41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6b46ull));
TAIL_STATIC(0x4d49d0u,4d4);
}
B4e6b46:L4e6b46:{c.instructions+=1;NFSU2_TR(0x4e6b46);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e6b4d:L4e6b4d:{c.instructions+=3;NFSU2_TR(0x4e6b4d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e6b50:{NFSU2_TR(0x4e6b50);
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
B4e6b52:{NFSU2_TR(0x4e6b52);
if(r1(R+518)){{goto L4e6c02;}}
}
B4e6b58:L4e6b58:{c.instructions+=3;NFSU2_TR(0x4e6b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e6b5b:{NFSU2_TR(0x4e6b5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6b5c:{NFSU2_TR(0x4e6b5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6b61ull));
TAIL_STATIC(0x5379a0u,537);
}
B4e6b61:L4e6b61:{c.instructions+=5;NFSU2_TR(0x4e6b61);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e6b67:{NFSU2_TR(0x4e6b67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e6b6a:{NFSU2_TR(0x4e6b6a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e6b6c:{NFSU2_TR(0x4e6b6c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e6b70:{NFSU2_TR(0x4e6b70);
if(r1(R+518)){{goto L4e6b84;}}
}
B4e6b72:L4e6b72:{c.instructions+=3;NFSU2_TR(0x4e6b72);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6b77:{NFSU2_TR(0x4e6b77);
u8 U[4];
w4(U+0,u32(0xf764cbe7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6b7c:{NFSU2_TR(0x4e6b7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6b81ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4e6b81:L4e6b81:{c.instructions+=1;NFSU2_TR(0x4e6b81);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e6b84:L4e6b84:{c.instructions+=3;NFSU2_TR(0x4e6b84);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6b89:{NFSU2_TR(0x4e6b89);
u8 U[4];
w4(U+0,u32(0x5d1a570full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6b8e:{NFSU2_TR(0x4e6b8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6b93ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4e6b93:L4e6b93:{c.instructions+=3;NFSU2_TR(0x4e6b93);
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
B4e6b96:{NFSU2_TR(0x4e6b96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6b97:{NFSU2_TR(0x4e6b97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6b9a:L4e6b9a:{c.instructions+=6;NFSU2_TR(0x4e6b9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e6ba0:{NFSU2_TR(0x4e6ba0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4e6ba1:{NFSU2_TR(0x4e6ba1);
__builtin_memmove((R+0),(R+4),4);
}
B4e6ba3:{NFSU2_TR(0x4e6ba3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e6ba6:{NFSU2_TR(0x4e6ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e6bac:{NFSU2_TR(0x4e6bac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4e6bb8;}}
}
B4e6bae:L4e6bae:{c.instructions+=1;NFSU2_TR(0x4e6bae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e6bb8:L4e6bb8:{c.instructions+=3;NFSU2_TR(0x4e6bb8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6bba:{NFSU2_TR(0x4e6bba);
__builtin_memmove((R+4),(R+24),4);
}
B4e6bbc:{NFSU2_TR(0x4e6bbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6bc1ull));
TAIL_STATIC(0x4d49d0u,4d4);
}
B4e6bc1:L4e6bc1:{c.instructions+=2;NFSU2_TR(0x4e6bc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6bc2:{NFSU2_TR(0x4e6bc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6bc5:L4e6bc5:{c.instructions+=2;NFSU2_TR(0x4e6bc5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xda5b8712ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xda5b8712ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xda5b8712ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e6bca:{NFSU2_TR(0x4e6bca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e6c02;}}
}
B4e6bcc:L4e6bcc:{c.instructions+=6;NFSU2_TR(0x4e6bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e6bcf:{NFSU2_TR(0x4e6bcf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6bd1:{NFSU2_TR(0x4e6bd1);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6bd6:{NFSU2_TR(0x4e6bd6);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6bdb:{NFSU2_TR(0x4e6bdb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6bdc:{NFSU2_TR(0x4e6bdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6be1ull));
TAIL_STATIC(0x537c00u,537);
}
B4e6be1:L4e6be1:{c.instructions+=3;NFSU2_TR(0x4e6be1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e6be4:{NFSU2_TR(0x4e6be4);
__builtin_memmove((R+4),(R+24),4);
}
B4e6be6:{NFSU2_TR(0x4e6be6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6bebull));
TAIL_STATIC(0x4a15d0u,4a1);
}
B4e6beb:L4e6beb:{c.instructions+=2;NFSU2_TR(0x4e6beb);
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
B4e6bed:{NFSU2_TR(0x4e6bed);
if(r1(R+518)){{goto L4e6bfe;}}
}
B4e6bef:L4e6bef:{c.instructions+=2;NFSU2_TR(0x4e6bef);
__builtin_memmove((R+4),(R+24),4);
}
B4e6bf1:{NFSU2_TR(0x4e6bf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6bf6ull));
TAIL_STATIC(0x50ced0u,50c);
}
B4e6bf6:L4e6bf6:{c.instructions+=3;NFSU2_TR(0x4e6bf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6bf7:{NFSU2_TR(0x4e6bf7);
__builtin_memmove((R+4),(R+24),4);
}
B4e6bf9:{NFSU2_TR(0x4e6bf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6bfeull));
TAIL_STATIC(0x4bcdb0u,4bc);
}
B4e6bfe:L4e6bfe:{c.instructions+=1;NFSU2_TR(0x4e6bfe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e6c02:L4e6c02:{c.instructions+=2;NFSU2_TR(0x4e6c02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6c03:{NFSU2_TR(0x4e6c03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6c10:L4e6c10:{c.instructions+=3;NFSU2_TR(0x4e6c10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6c11:{NFSU2_TR(0x4e6c11);
__builtin_memmove((R+24),(R+4),4);
}
B4e6c13:{NFSU2_TR(0x4e6c13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6c18ull));
TAIL_STATIC(0x4d50d0u,4d5);
}
B4e6c18:L4e6c18:{c.instructions+=2;NFSU2_TR(0x4e6c18);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B4e6c1d:{NFSU2_TR(0x4e6c1d);
if(r1(R+518)){{goto L4e6c28;}}
}
B4e6c1f:L4e6c1f:{c.instructions+=2;NFSU2_TR(0x4e6c1f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6c20:{NFSU2_TR(0x4e6c20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6c25ull));
TAIL_STATIC(0x575630u,575);
}
B4e6c25:L4e6c25:{c.instructions+=1;NFSU2_TR(0x4e6c25);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e6c28:L4e6c28:{c.instructions+=3;NFSU2_TR(0x4e6c28);
__builtin_memmove((R+0),(R+24),4);
}
B4e6c2a:{NFSU2_TR(0x4e6c2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6c2b:{NFSU2_TR(0x4e6c2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6c30:L4e6c30:{c.instructions+=11;NFSU2_TR(0x4e6c30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6c31:{NFSU2_TR(0x4e6c31);
__builtin_memmove((R+20),(R+16),4);
}
B4e6c33:{NFSU2_TR(0x4e6c33);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4e6c36:{NFSU2_TR(0x4e6c36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x6fcull))));
}
B4e6c3c:{NFSU2_TR(0x4e6c3c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6c3d:{NFSU2_TR(0x4e6c3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6c3e:{NFSU2_TR(0x4e6c3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e6c41:{NFSU2_TR(0x4e6c41);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd15c04ecull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e6c47:{NFSU2_TR(0x4e6c47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6c48:{NFSU2_TR(0x4e6c48);
__builtin_memmove((R+12),(R+4),4);
}
B4e6c4a:{NFSU2_TR(0x4e6c4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e6c61;}}
}
B4e6c4c:L4e6c4c:{c.instructions+=3;NFSU2_TR(0x4e6c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e6c4f:{NFSU2_TR(0x4e6c4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6c50:{NFSU2_TR(0x4e6c50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6c55ull));
TAIL_STATIC(0x5379a0u,537);
}
B4e6c55:L4e6c55:{c.instructions+=7;NFSU2_TR(0x4e6c55);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e6c58:{NFSU2_TR(0x4e6c58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e6c59:{NFSU2_TR(0x4e6c59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6c5a:{NFSU2_TR(0x4e6c5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e6c5b:{NFSU2_TR(0x4e6c5b);
__builtin_memmove((R+16),(R+20),4);
}
B4e6c5d:{NFSU2_TR(0x4e6c5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e6c5e:{NFSU2_TR(0x4e6c5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6c61:L4e6c61:{c.instructions+=4;NFSU2_TR(0x4e6c61);
__builtin_memmove((R+0),gp(0x838521),1);
}
B4e6c66:{NFSU2_TR(0x4e6c66);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e6c68:{NFSU2_TR(0x4e6c68);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e6c6a:{NFSU2_TR(0x4e6c6a);
if(r1(R+518)){{goto L4e6c73;}}
}
B4e6c6c:L4e6c6c:{c.instructions+=1;NFSU2_TR(0x4e6c6c);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e6c73:L4e6c73:{c.instructions+=2;NFSU2_TR(0x4e6c73);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e6c79:{NFSU2_TR(0x4e6c79);
if(r1(R+518)){{goto L4e6ca1;}}
}
B4e6c7b:L4e6c7b:{c.instructions+=2;NFSU2_TR(0x4e6c7b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x153e234ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e6c81:{NFSU2_TR(0x4e6c81);
if(r1(R+518)){{goto L4e6ca1;}}
}
B4e6c83:L4e6c83:{c.instructions+=2;NFSU2_TR(0x4e6c83);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xe1fde1d1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e6c89:{NFSU2_TR(0x4e6c89);
if(r1(R+518)){{goto L4e6ca1;}}
}
B4e6c8b:L4e6c8b:{c.instructions+=2;NFSU2_TR(0x4e6c8b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4fbee42aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e6c91:{NFSU2_TR(0x4e6c91);
if(r1(R+518)){{goto L4e6ca1;}}
}
B4e6c93:L4e6c93:{c.instructions+=3;NFSU2_TR(0x4e6c93);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e6c99:{NFSU2_TR(0x4e6c99);
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
B4e6c9b:{NFSU2_TR(0x4e6c9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4e73f6u,4e7);}
}
B4e6ca1:L4e6ca1:{c.instructions+=3;NFSU2_TR(0x4e6ca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e6ca4:{NFSU2_TR(0x4e6ca4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6ca5:{NFSU2_TR(0x4e6ca5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6caaull));
TAIL_STATIC(0x4a0000u,4a0);
}
B4e6caa:L4e6caa:{c.instructions+=2;NFSU2_TR(0x4e6caa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6cab:{NFSU2_TR(0x4e6cab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6cb0ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4e6cb0:L4e6cb0:{c.instructions+=3;NFSU2_TR(0x4e6cb0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e6cb3:{NFSU2_TR(0x4e6cb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e6cb5:{NFSU2_TR(0x4e6cb5);
if(r1(R+518)){{goto L4e6d0b;}}
}
B4e6cb7:L4e6cb7:{c.instructions+=2;NFSU2_TR(0x4e6cb7);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc407210ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e6cbd:{NFSU2_TR(0x4e6cbd);
if(r1(R+518)){TAIL_STATIC(0x4e73f6u,4e7);}
}
B4e6cc3:L4e6cc3:{c.instructions+=2;NFSU2_TR(0x4e6cc3);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x406415e3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x406415e3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x406415e3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e6cc9:{NFSU2_TR(0x4e6cc9);
if(r1(R+518)){TAIL_STATIC(0x4e73f6u,4e7);}
}
B4e6ccf:L4e6ccf:{c.instructions+=2;NFSU2_TR(0x4e6ccf);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x911ab364ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e6cd5:{NFSU2_TR(0x4e6cd5);
if(r1(R+518)){TAIL_STATIC(0x4e73f6u,4e7);}
}
B4e6cdb:L4e6cdb:{c.instructions+=2;NFSU2_TR(0x4e6cdb);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x72619778ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x72619778ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x72619778ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e6ce1:{NFSU2_TR(0x4e6ce1);
if(r1(R+518)){TAIL_STATIC(0x4e73f6u,4e7);}
}
B4e6ce7:L4e6ce7:{c.instructions+=2;NFSU2_TR(0x4e6ce7);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x911c0a4bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x911c0a4bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x911c0a4bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e6ced:{NFSU2_TR(0x4e6ced);
if(r1(R+518)){TAIL_STATIC(0x4e73f6u,4e7);}
}
B4e6cf3:L4e6cf3:{c.instructions+=2;NFSU2_TR(0x4e6cf3);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9120409eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e6cf9:{NFSU2_TR(0x4e6cf9);
if(r1(R+518)){TAIL_STATIC(0x4e73f6u,4e7);}
}
B4e6cff:L4e6cff:{c.instructions+=2;NFSU2_TR(0x4e6cff);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb5971bf1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e6d05:{NFSU2_TR(0x4e6d05);
if(r1(R+518)){TAIL_STATIC(0x4e73f6u,4e7);}
}
B4e6d0b:L4e6d0b:{c.instructions+=2;NFSU2_TR(0x4e6d0b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x153e234ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x153e234ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e6d11:{NFSU2_TR(0x4e6d11);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4e7026u,4e7);}
}
B4e6d17:L4e6d17:{c.instructions+=1;NFSU2_TR(0x4e6d17);
if(r1(R+518)){{goto L4e6f9a;}}
}
B4e6d1d:L4e6d1d:{c.instructions+=3;NFSU2_TR(0x4e6d1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e6d20:{NFSU2_TR(0x4e6d20);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e6d23:{NFSU2_TR(0x4e6d23);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4e73f6u,4e7);}
}
B4e6d29:L4e6d29:{c.instructions+=1;NFSU2_TR(0x4e6d29);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4e7400ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4e6d30:L4e6d30:{c.instructions+=4;NFSU2_TR(0x4e6d30);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e6d35:{NFSU2_TR(0x4e6d35);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e6d37:{NFSU2_TR(0x4e6d37);
w4(R+4,u32(0x7full));
}
B4e6d3c:{NFSU2_TR(0x4e6d3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4e6d40:L4e6d40:{c.instructions+=1;NFSU2_TR(0x4e6d40);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4e6d42;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e6d40u);}goto L4e6d40;}
}
B4e6d42:L4e6d42:{c.instructions+=5;NFSU2_TR(0x4e6d42);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4e6d44:{NFSU2_TR(0x4e6d44);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6d49:{NFSU2_TR(0x4e6d49);
u8 U[4];
w4(U+0,u32(0x8d0a8371ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6d4e:{NFSU2_TR(0x4e6d4e);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4e6d4f:{NFSU2_TR(0x4e6d4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6d54ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e6d54:L4e6d54:{c.instructions+=6;NFSU2_TR(0x4e6d54);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e6d57:{NFSU2_TR(0x4e6d57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6d58:{NFSU2_TR(0x4e6d58);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e6d5c:{NFSU2_TR(0x4e6d5c);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6d61:{NFSU2_TR(0x4e6d61);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6d62:{NFSU2_TR(0x4e6d62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6d67ull));
TAIL_STATIC(0x50c960u,50c);
}
B4e6d67:L4e6d67:{c.instructions+=12;NFSU2_TR(0x4e6d67);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e6d6a:{NFSU2_TR(0x4e6d6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e6d6e:{NFSU2_TR(0x4e6d6e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6d6f:{NFSU2_TR(0x4e6d6f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6d71:{NFSU2_TR(0x4e6d71);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6d73:{NFSU2_TR(0x4e6d73);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6d75:{NFSU2_TR(0x4e6d75);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6d77:{NFSU2_TR(0x4e6d77);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6d7c:{NFSU2_TR(0x4e6d7c);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6d81:{NFSU2_TR(0x4e6d81);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6d86:{NFSU2_TR(0x4e6d86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6d87:{NFSU2_TR(0x4e6d87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6d8cull));
TAIL_STATIC(0x558750u,558);
}
B4e6d8c:L4e6d8c:{c.instructions+=7;NFSU2_TR(0x4e6d8c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e6d8f:{NFSU2_TR(0x4e6d8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e6d90:{NFSU2_TR(0x4e6d90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6d91:{NFSU2_TR(0x4e6d91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e6d92:{NFSU2_TR(0x4e6d92);
__builtin_memmove((R+16),(R+20),4);
}
B4e6d94:{NFSU2_TR(0x4e6d94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e6d95:{NFSU2_TR(0x4e6d95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6d98:L4e6d98:{c.instructions+=12;NFSU2_TR(0x4e6d98);
__builtin_memmove((R+8),gp(0x836378),4);
}
B4e6d9e:{NFSU2_TR(0x4e6d9e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4e6da0:{NFSU2_TR(0x4e6da0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e6da2:{NFSU2_TR(0x4e6da2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B4e6da5:{NFSU2_TR(0x4e6da5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4e6da6:{NFSU2_TR(0x4e6da6);
__builtin_memmove(gp(0x836378),(R+4),4);
}
B4e6dac:{NFSU2_TR(0x4e6dac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e6daf:{NFSU2_TR(0x4e6daf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6db0:{NFSU2_TR(0x4e6db0);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6db5:{NFSU2_TR(0x4e6db5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6db6:{NFSU2_TR(0x4e6db6);
u8 U[4];
w4(U+0,u32(0x7979b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6dbb:{NFSU2_TR(0x4e6dbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6dc0ull));
TAIL_STATIC(0x555eb0u,555);
}
B4e6dc0:L4e6dc0:{c.instructions+=7;NFSU2_TR(0x4e6dc0);
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
B4e6dc3:{NFSU2_TR(0x4e6dc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e6dc4:{NFSU2_TR(0x4e6dc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6dc5:{NFSU2_TR(0x4e6dc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e6dc6:{NFSU2_TR(0x4e6dc6);
__builtin_memmove((R+16),(R+20),4);
}
B4e6dc8:{NFSU2_TR(0x4e6dc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e6dc9:{NFSU2_TR(0x4e6dc9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6dcc:L4e6dcc:{c.instructions+=3;NFSU2_TR(0x4e6dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e6dcf:{NFSU2_TR(0x4e6dcf);
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
B4e6dd1:{NFSU2_TR(0x4e6dd1);
if(r1(R+518)){TAIL_STATIC(0x4e73f6u,4e7);}
}
B4e6dd7:L4e6dd7:{c.instructions+=2;NFSU2_TR(0x4e6dd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6dd8:{NFSU2_TR(0x4e6dd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6dddull));
TAIL_STATIC(0x540a60u,540);
}
B4e6ddd:L4e6ddd:{c.instructions+=8;NFSU2_TR(0x4e6ddd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e6de0:{NFSU2_TR(0x4e6de0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e6de3:{NFSU2_TR(0x4e6de3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e6de4:{NFSU2_TR(0x4e6de4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6de5:{NFSU2_TR(0x4e6de5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e6de6:{NFSU2_TR(0x4e6de6);
__builtin_memmove((R+16),(R+20),4);
}
B4e6de8:{NFSU2_TR(0x4e6de8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e6de9:{NFSU2_TR(0x4e6de9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6dec:L4e6dec:{c.instructions+=2;NFSU2_TR(0x4e6dec);
u8 U[8];
__builtin_memmove((U+0),gp(0x835fd4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e6df2:{NFSU2_TR(0x4e6df2);
if(r1(R+518)){{goto L4e6ed4;}}
}
B4e6df8:L4e6df8:{c.instructions+=1;NFSU2_TR(0x4e6df8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6dfdull));
TAIL_STATIC(0x582b60u,582);
}
B4e6dfd:L4e6dfd:{c.instructions+=7;NFSU2_TR(0x4e6dfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e6e03:{NFSU2_TR(0x4e6e03);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6e04:{NFSU2_TR(0x4e6e04);
u8 U[4];
w4(U+0,u32(0x4ae670ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6e09:{NFSU2_TR(0x4e6e09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6e0a:{NFSU2_TR(0x4e6e0a);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6e0f:{NFSU2_TR(0x4e6e0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6e10:{NFSU2_TR(0x4e6e10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6e15ull));
TAIL_STATIC(0x73fad0u,73f);
}
B4e6e15:L4e6e15:{c.instructions+=3;NFSU2_TR(0x4e6e15);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4e6e18:{NFSU2_TR(0x4e6e18);
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
B4e6e1a:{NFSU2_TR(0x4e6e1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4e73f6u,4e7);}
}
B4e6e20:L4e6e20:{c.instructions+=4;NFSU2_TR(0x4e6e20);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6e25:{NFSU2_TR(0x4e6e25);
u8 U[4];
w4(U+0,u32(0x91070ff2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6e2a:{NFSU2_TR(0x4e6e2a);
__builtin_memmove((R+4),(R+12),4);
}
B4e6e2c:{NFSU2_TR(0x4e6e2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6e31ull));
TAIL_STATIC(0x4a1700u,4a1);
}
B4e6e31:L4e6e31:{c.instructions+=6;NFSU2_TR(0x4e6e31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e6e32:{NFSU2_TR(0x4e6e32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6e33:{NFSU2_TR(0x4e6e33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e6e34:{NFSU2_TR(0x4e6e34);
__builtin_memmove((R+16),(R+20),4);
}
B4e6e36:{NFSU2_TR(0x4e6e36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e6e37:{NFSU2_TR(0x4e6e37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6e3a:L4e6e3a:{c.instructions+=2;NFSU2_TR(0x4e6e3a);
u8 U[8];
__builtin_memmove((U+0),gp(0x835fd4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e6e40:{NFSU2_TR(0x4e6e40);
if(r1(R+518)){{goto L4e6ed4;}}
}
B4e6e46:L4e6e46:{c.instructions+=1;NFSU2_TR(0x4e6e46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6e4bull));
TAIL_STATIC(0x582b60u,582);
}
B4e6e4b:L4e6e4b:{c.instructions+=7;NFSU2_TR(0x4e6e4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e6e51:{NFSU2_TR(0x4e6e51);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6e52:{NFSU2_TR(0x4e6e52);
u8 U[4];
w4(U+0,u32(0x4ae670ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6e57:{NFSU2_TR(0x4e6e57);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6e59:{NFSU2_TR(0x4e6e59);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6e5e:{NFSU2_TR(0x4e6e5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6e5f:{NFSU2_TR(0x4e6e5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6e64ull));
TAIL_STATIC(0x73fad0u,73f);
}
B4e6e64:L4e6e64:{c.instructions+=3;NFSU2_TR(0x4e6e64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4e6e67:{NFSU2_TR(0x4e6e67);
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
B4e6e69:{NFSU2_TR(0x4e6e69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4e73f6u,4e7);}
}
B4e6e6f:L4e6e6f:{c.instructions+=4;NFSU2_TR(0x4e6e6f);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6e74:{NFSU2_TR(0x4e6e74);
u8 U[4];
w4(U+0,u32(0xc744b7abull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6e79:{NFSU2_TR(0x4e6e79);
__builtin_memmove((R+4),(R+12),4);
}
B4e6e7b:{NFSU2_TR(0x4e6e7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6e80ull));
TAIL_STATIC(0x4a1700u,4a1);
}
B4e6e80:L4e6e80:{c.instructions+=6;NFSU2_TR(0x4e6e80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e6e81:{NFSU2_TR(0x4e6e81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6e82:{NFSU2_TR(0x4e6e82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e6e83:{NFSU2_TR(0x4e6e83);
__builtin_memmove((R+16),(R+20),4);
}
B4e6e85:{NFSU2_TR(0x4e6e85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e6e86:{NFSU2_TR(0x4e6e86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6e89:L4e6e89:{c.instructions+=2;NFSU2_TR(0x4e6e89);
u8 U[8];
__builtin_memmove((U+0),gp(0x835fd4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e6e8f:{NFSU2_TR(0x4e6e8f);
if(r1(R+518)){{goto L4e6ed4;}}
}
B4e6e91:L4e6e91:{c.instructions+=1;NFSU2_TR(0x4e6e91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6e96ull));
TAIL_STATIC(0x582b60u,582);
}
B4e6e96:L4e6e96:{c.instructions+=7;NFSU2_TR(0x4e6e96);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e6e9c:{NFSU2_TR(0x4e6e9c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6e9d:{NFSU2_TR(0x4e6e9d);
u8 U[4];
w4(U+0,u32(0x4ae690ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6ea2:{NFSU2_TR(0x4e6ea2);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6ea4:{NFSU2_TR(0x4e6ea4);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6ea9:{NFSU2_TR(0x4e6ea9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6eaa:{NFSU2_TR(0x4e6eaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6eafull));
TAIL_STATIC(0x73fad0u,73f);
}
B4e6eaf:L4e6eaf:{c.instructions+=3;NFSU2_TR(0x4e6eaf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4e6eb2:{NFSU2_TR(0x4e6eb2);
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
B4e6eb4:{NFSU2_TR(0x4e6eb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4e73f6u,4e7);}
}
B4e6eba:L4e6eba:{c.instructions+=4;NFSU2_TR(0x4e6eba);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6ebf:{NFSU2_TR(0x4e6ebf);
u8 U[4];
w4(U+0,u32(0x7f1025e7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6ec4:{NFSU2_TR(0x4e6ec4);
__builtin_memmove((R+4),(R+12),4);
}
B4e6ec6:{NFSU2_TR(0x4e6ec6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6ecbull));
TAIL_STATIC(0x4a1700u,4a1);
}
B4e6ecb:L4e6ecb:{c.instructions+=6;NFSU2_TR(0x4e6ecb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e6ecc:{NFSU2_TR(0x4e6ecc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6ecd:{NFSU2_TR(0x4e6ecd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e6ece:{NFSU2_TR(0x4e6ece);
__builtin_memmove((R+16),(R+20),4);
}
B4e6ed0:{NFSU2_TR(0x4e6ed0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e6ed1:{NFSU2_TR(0x4e6ed1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6ed4:L4e6ed4:{c.instructions+=3;NFSU2_TR(0x4e6ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4e6ed7:{NFSU2_TR(0x4e6ed7);
u8 U[4];
w4(U+0,u32(0x2106e2feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6edc:{NFSU2_TR(0x4e6edc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6ee1ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e6ee1:L4e6ee1:{c.instructions+=7;NFSU2_TR(0x4e6ee1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6ee2:{NFSU2_TR(0x4e6ee2);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6ee7:{NFSU2_TR(0x4e6ee7);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6eec:{NFSU2_TR(0x4e6eec);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6ef1:{NFSU2_TR(0x4e6ef1);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6ef6:{NFSU2_TR(0x4e6ef6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6ef7:{NFSU2_TR(0x4e6ef7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6efcull));
TAIL_STATIC(0x558540u,558);
}
B4e6efc:L4e6efc:{c.instructions+=7;NFSU2_TR(0x4e6efc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e6eff:{NFSU2_TR(0x4e6eff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e6f00:{NFSU2_TR(0x4e6f00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6f01:{NFSU2_TR(0x4e6f01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e6f02:{NFSU2_TR(0x4e6f02);
__builtin_memmove((R+16),(R+20),4);
}
B4e6f04:{NFSU2_TR(0x4e6f04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e6f05:{NFSU2_TR(0x4e6f05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6f08:L4e6f08:{c.instructions+=2;NFSU2_TR(0x4e6f08);
__builtin_memmove((R+4),(R+12),4);
}
B4e6f0a:{NFSU2_TR(0x4e6f0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6f0full));
TAIL_STATIC(0x4bd490u,4bd);
}
B4e6f0f:L4e6f0f:{c.instructions+=6;NFSU2_TR(0x4e6f0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e6f10:{NFSU2_TR(0x4e6f10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6f11:{NFSU2_TR(0x4e6f11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e6f12:{NFSU2_TR(0x4e6f12);
__builtin_memmove((R+16),(R+20),4);
}
B4e6f14:{NFSU2_TR(0x4e6f14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e6f15:{NFSU2_TR(0x4e6f15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6f18:L4e6f18:{c.instructions+=1;NFSU2_TR(0x4e6f18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6f1dull));
TAIL_STATIC(0x582b60u,582);
}
B4e6f1d:L4e6f1d:{c.instructions+=6;NFSU2_TR(0x4e6f1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e6f23:{NFSU2_TR(0x4e6f23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6f24:{NFSU2_TR(0x4e6f24);
u8 U[4];
w4(U+0,u32(0x4ae690ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6f29:{NFSU2_TR(0x4e6f29);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6f2e:{NFSU2_TR(0x4e6f2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6f2f:{NFSU2_TR(0x4e6f2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6f34ull));
TAIL_STATIC(0x7406e0u,740);
}
B4e6f34:L4e6f34:{c.instructions+=3;NFSU2_TR(0x4e6f34);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e6f37:{NFSU2_TR(0x4e6f37);
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
B4e6f39:{NFSU2_TR(0x4e6f39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4e73f6u,4e7);}
}
B4e6f3f:L4e6f3f:{c.instructions+=4;NFSU2_TR(0x4e6f3f);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6f44:{NFSU2_TR(0x4e6f44);
u8 U[4];
w4(U+0,u32(0x78300ebfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6f49:{NFSU2_TR(0x4e6f49);
__builtin_memmove((R+4),(R+12),4);
}
B4e6f4b:{NFSU2_TR(0x4e6f4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6f50ull));
TAIL_STATIC(0x4a1700u,4a1);
}
B4e6f50:L4e6f50:{c.instructions+=6;NFSU2_TR(0x4e6f50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e6f51:{NFSU2_TR(0x4e6f51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6f52:{NFSU2_TR(0x4e6f52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e6f53:{NFSU2_TR(0x4e6f53);
__builtin_memmove((R+16),(R+20),4);
}
B4e6f55:{NFSU2_TR(0x4e6f55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e6f56:{NFSU2_TR(0x4e6f56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6f59:L4e6f59:{c.instructions+=1;NFSU2_TR(0x4e6f59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6f5eull));
TAIL_STATIC(0x582b60u,582);
}
B4e6f5e:L4e6f5e:{c.instructions+=6;NFSU2_TR(0x4e6f5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e6f64:{NFSU2_TR(0x4e6f64);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6f65:{NFSU2_TR(0x4e6f65);
u8 U[4];
w4(U+0,u32(0x4ae6b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6f6a:{NFSU2_TR(0x4e6f6a);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6f6f:{NFSU2_TR(0x4e6f6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6f70:{NFSU2_TR(0x4e6f70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6f75ull));
TAIL_STATIC(0x73f990u,73f);
}
B4e6f75:L4e6f75:{c.instructions+=3;NFSU2_TR(0x4e6f75);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e6f78:{NFSU2_TR(0x4e6f78);
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
B4e6f7a:{NFSU2_TR(0x4e6f7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4e73f6u,4e7);}
}
B4e6f80:L4e6f80:{c.instructions+=4;NFSU2_TR(0x4e6f80);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6f85:{NFSU2_TR(0x4e6f85);
u8 U[4];
w4(U+0,u32(0xa33aa702ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6f8a:{NFSU2_TR(0x4e6f8a);
__builtin_memmove((R+4),(R+12),4);
}
B4e6f8c:{NFSU2_TR(0x4e6f8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6f91ull));
TAIL_STATIC(0x4a1700u,4a1);
}
B4e6f91:L4e6f91:{c.instructions+=6;NFSU2_TR(0x4e6f91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e6f92:{NFSU2_TR(0x4e6f92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6f93:{NFSU2_TR(0x4e6f93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e6f94:{NFSU2_TR(0x4e6f94);
__builtin_memmove((R+16),(R+20),4);
}
B4e6f96:{NFSU2_TR(0x4e6f96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e6f97:{NFSU2_TR(0x4e6f97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6f9a:L4e6f9a:{c.instructions+=3;NFSU2_TR(0x4e6f9a);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e6fa0:{NFSU2_TR(0x4e6fa0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e6fa2:{NFSU2_TR(0x4e6fa2);
if(r1(R+518)){{goto L4e6fbc;}}
}
B4e6fa4:L4e6fa4:{c.instructions+=3;NFSU2_TR(0x4e6fa4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e6fa7:{NFSU2_TR(0x4e6fa7);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e6fae:{NFSU2_TR(0x4e6fae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6fb3ull));
TAIL_STATIC(0x4958d0u,495);
}
B4e6fb3:L4e6fb3:{c.instructions+=6;NFSU2_TR(0x4e6fb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e6fb4:{NFSU2_TR(0x4e6fb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6fb5:{NFSU2_TR(0x4e6fb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e6fb6:{NFSU2_TR(0x4e6fb6);
__builtin_memmove((R+16),(R+20),4);
}
B4e6fb8:{NFSU2_TR(0x4e6fb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e6fb9:{NFSU2_TR(0x4e6fb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e6fbc:L4e6fbc:{c.instructions+=2;NFSU2_TR(0x4e6fbc);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6fc1:{NFSU2_TR(0x4e6fc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6fc6ull));
TAIL_STATIC(0x582b60u,582);
}
B4e6fc6:L4e6fc6:{c.instructions+=2;NFSU2_TR(0x4e6fc6);
__builtin_memmove((R+4),(R+0),4);
}
B4e6fc8:{NFSU2_TR(0x4e6fc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6fcdull));
TAIL_STATIC(0x582bb0u,582);
}
B4e6fcd:L4e6fcd:{c.instructions+=2;NFSU2_TR(0x4e6fcd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e6fcf:{NFSU2_TR(0x4e6fcf);
if(r1(R+518)){TAIL_STATIC(0x4e7005u,4e7);}
}
B4e6fd1:L4e6fd1:{c.instructions+=3;NFSU2_TR(0x4e6fd1);
__builtin_memmove((R+0),gp(0x836010),4);
}
B4e6fd6:{NFSU2_TR(0x4e6fd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6fd7:{NFSU2_TR(0x4e6fd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6fdcull));
TAIL_STATIC(0x73ed70u,73e);
}
B4e6fdc:L4e6fdc:{c.instructions+=3;NFSU2_TR(0x4e6fdc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e6fdf:{NFSU2_TR(0x4e6fdf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e6fe1:{NFSU2_TR(0x4e6fe1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e6fed;}}
}
B4e6fe3:L4e6fe3:{c.instructions+=3;NFSU2_TR(0x4e6fe3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6fe4:{NFSU2_TR(0x4e6fe4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e6fe5:{NFSU2_TR(0x4e6fe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6feaull));
TAIL_STATIC(0x50cee0u,50c);
}
B4e6fea:L4e6fea:{c.instructions+=1;NFSU2_TR(0x4e6fea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e6fed:L4e6fed:{c.instructions+=2;NFSU2_TR(0x4e6fed);
__builtin_memmove((R+4),(R+12),4);
}
B4e6fef:{NFSU2_TR(0x4e6fef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6ff4ull));
TAIL_STATIC(0x4d5490u,4d5);
}
B4e6ff4:L4e6ff4:{c.instructions+=2;NFSU2_TR(0x4e6ff4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e6ff7:{NFSU2_TR(0x4e6ff7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e6ffcull));
TAIL_STATIC(0x4958d0u,495);
}
B4e6ffc:L4e6ffc:{c.instructions+=4;NFSU2_TR(0x4e6ffc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e6ffd:{NFSU2_TR(0x4e6ffd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e6ffe:{NFSU2_TR(0x4e6ffe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e6fff:{NFSU2_TR(0x4e6fff);
__builtin_memmove((R+16),(R+20),4);
TAIL_STATIC(0x4e7001u,4e7);
}
XIT:NFSU2_TR_EXIT(0x4e6,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
