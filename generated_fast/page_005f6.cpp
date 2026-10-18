#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_572(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_593(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5af(u8* __restrict R,Cpu& c);
u32 body_5da(u8* __restrict R,Cpu& c);
u32 body_5dd(u8* __restrict R,Cpu& c);
u32 body_5e4(u8* __restrict R,Cpu& c);
u32 body_5e6(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5f5(u8* __restrict R,Cpu& c);
u32 body_5f7(u8* __restrict R,Cpu& c);
u32 body_61f(u8* __restrict R,Cpu& c);
u32 body_639(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5f6,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5f6,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 page_5f6(Cpu& c){return body_5f6(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5f6(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5f6001:goto L5f6001;
case 0x5f6007:c.instructions+=5;goto B5f6007;
case 0x5f6009:c.instructions+=4;goto B5f6009;
case 0x5f600b:c.instructions+=3;goto B5f600b;
case 0x5f600d:c.instructions+=2;goto B5f600d;
case 0x5f6010:c.instructions+=1;goto B5f6010;
case 0x5f6012:goto L5f6012;
case 0x5f6018:c.instructions+=9;goto B5f6018;
case 0x5f601c:c.instructions+=8;goto B5f601c;
case 0x5f6022:c.instructions+=7;goto B5f6022;
case 0x5f6024:c.instructions+=6;goto B5f6024;
case 0x5f6025:c.instructions+=5;goto B5f6025;
case 0x5f6026:c.instructions+=4;goto B5f6026;
case 0x5f6029:c.instructions+=3;goto B5f6029;
case 0x5f602b:c.instructions+=2;goto B5f602b;
case 0x5f602d:c.instructions+=1;goto B5f602d;
case 0x5f6032:goto L5f6032;
case 0x5f6038:c.instructions+=3;goto B5f6038;
case 0x5f603a:c.instructions+=2;goto B5f603a;
case 0x5f6041:c.instructions+=1;goto B5f6041;
case 0x5f6043:goto L5f6043;
case 0x5f6045:c.instructions+=4;goto B5f6045;
case 0x5f6047:c.instructions+=3;goto B5f6047;
case 0x5f6049:c.instructions+=2;goto B5f6049;
case 0x5f604b:c.instructions+=1;goto B5f604b;
case 0x5f604e:goto L5f604e;
case 0x5f6050:goto L5f6050;
case 0x5f6053:c.instructions+=1;goto B5f6053;
case 0x5f6055:goto L5f6055;
case 0x5f605b:c.instructions+=1;goto B5f605b;
case 0x5f605d:goto L5f605d;
case 0x5f6063:goto L5f6063;
case 0x5f6065:c.instructions+=6;goto B5f6065;
case 0x5f606b:c.instructions+=5;goto B5f606b;
case 0x5f606d:c.instructions+=4;goto B5f606d;
case 0x5f606f:c.instructions+=3;goto B5f606f;
case 0x5f6071:c.instructions+=2;goto B5f6071;
case 0x5f6074:c.instructions+=1;goto B5f6074;
case 0x5f6076:goto L5f6076;
case 0x5f607d:goto L5f607d;
case 0x5f607f:c.instructions+=1;goto B5f607f;
case 0x5f6084:goto L5f6084;
case 0x5f6086:c.instructions+=1;goto B5f6086;
case 0x5f6088:goto L5f6088;
case 0x5f608e:c.instructions+=3;goto B5f608e;
case 0x5f6090:c.instructions+=2;goto B5f6090;
case 0x5f6092:c.instructions+=1;goto B5f6092;
case 0x5f6094:goto L5f6094;
case 0x5f6097:c.instructions+=1;goto B5f6097;
case 0x5f6099:goto L5f6099;
case 0x5f609c:c.instructions+=1;goto B5f609c;
case 0x5f609e:goto L5f609e;
case 0x5f60a1:c.instructions+=1;goto B5f60a1;
case 0x5f60a3:goto L5f60a3;
case 0x5f60a5:c.instructions+=5;goto B5f60a5;
case 0x5f60a7:c.instructions+=4;goto B5f60a7;
case 0x5f60ac:c.instructions+=3;goto B5f60ac;
case 0x5f60ae:c.instructions+=2;goto B5f60ae;
case 0x5f60b0:c.instructions+=1;goto B5f60b0;
case 0x5f60b5:goto L5f60b5;
case 0x5f60bb:c.instructions+=2;goto B5f60bb;
case 0x5f60bd:c.instructions+=1;goto B5f60bd;
case 0x5f60c3:goto L5f60c3;
case 0x5f60c5:c.instructions+=2;goto B5f60c5;
case 0x5f60ca:c.instructions+=1;goto B5f60ca;
case 0x5f60d0:goto L5f60d0;
case 0x5f60d7:c.instructions+=2;goto B5f60d7;
case 0x5f60d9:c.instructions+=1;goto B5f60d9;
case 0x5f60df:goto L5f60df;
case 0x5f60e6:c.instructions+=5;goto B5f60e6;
case 0x5f60eb:c.instructions+=4;goto B5f60eb;
case 0x5f60ed:c.instructions+=3;goto B5f60ed;
case 0x5f60ef:c.instructions+=2;goto B5f60ef;
case 0x5f60f1:c.instructions+=1;goto B5f60f1;
case 0x5f60f3:goto L5f60f3;
case 0x5f60f9:c.instructions+=10;goto B5f60f9;
case 0x5f60ff:c.instructions+=9;goto B5f60ff;
case 0x5f6105:c.instructions+=8;goto B5f6105;
case 0x5f610b:c.instructions+=7;goto B5f610b;
case 0x5f6111:c.instructions+=6;goto B5f6111;
case 0x5f6113:c.instructions+=5;goto B5f6113;
case 0x5f6117:c.instructions+=4;goto B5f6117;
case 0x5f611d:c.instructions+=3;goto B5f611d;
case 0x5f611f:c.instructions+=2;goto B5f611f;
case 0x5f6122:c.instructions+=1;goto B5f6122;
case 0x5f6124:goto L5f6124;
case 0x5f6128:c.instructions+=5;goto B5f6128;
case 0x5f612e:c.instructions+=4;goto B5f612e;
case 0x5f6132:c.instructions+=3;goto B5f6132;
case 0x5f6134:c.instructions+=2;goto B5f6134;
case 0x5f6137:c.instructions+=1;goto B5f6137;
case 0x5f6139:goto L5f6139;
case 0x5f613b:c.instructions+=2;goto B5f613b;
case 0x5f6143:c.instructions+=1;goto B5f6143;
case 0x5f6145:goto L5f6145;
case 0x5f614b:goto L5f614b;
case 0x5f614f:goto L5f614f;
case 0x5f6153:c.instructions+=6;goto B5f6153;
case 0x5f6155:c.instructions+=5;goto B5f6155;
case 0x5f6156:c.instructions+=4;goto B5f6156;
case 0x5f6157:c.instructions+=3;goto B5f6157;
case 0x5f6159:c.instructions+=2;goto B5f6159;
case 0x5f615b:c.instructions+=1;goto B5f615b;
case 0x5f6160:goto L5f6160;
case 0x5f6166:c.instructions+=3;goto B5f6166;
case 0x5f6167:c.instructions+=2;goto B5f6167;
case 0x5f616d:c.instructions+=1;goto B5f616d;
case 0x5f6173:goto L5f6173;
case 0x5f6179:c.instructions+=8;goto B5f6179;
case 0x5f617a:c.instructions+=7;goto B5f617a;
case 0x5f6180:c.instructions+=6;goto B5f6180;
case 0x5f6186:c.instructions+=5;goto B5f6186;
case 0x5f6187:c.instructions+=4;goto B5f6187;
case 0x5f6188:c.instructions+=3;goto B5f6188;
case 0x5f618a:c.instructions+=2;goto B5f618a;
case 0x5f618b:c.instructions+=1;goto B5f618b;
case 0x5f6190:goto L5f6190;
case 0x5f6191:c.instructions+=5;goto B5f6191;
case 0x5f6192:c.instructions+=4;goto B5f6192;
case 0x5f6194:c.instructions+=3;goto B5f6194;
case 0x5f6197:c.instructions+=2;goto B5f6197;
case 0x5f619b:c.instructions+=1;goto B5f619b;
case 0x5f61a1:goto L5f61a1;
case 0x5f61a7:c.instructions+=2;goto B5f61a7;
case 0x5f61a9:c.instructions+=1;goto B5f61a9;
case 0x5f61af:goto L5f61af;
case 0x5f61b1:c.instructions+=7;goto B5f61b1;
case 0x5f61b3:c.instructions+=6;goto B5f61b3;
case 0x5f61b5:c.instructions+=5;goto B5f61b5;
case 0x5f61ba:c.instructions+=4;goto B5f61ba;
case 0x5f61bf:c.instructions+=3;goto B5f61bf;
case 0x5f61c4:c.instructions+=2;goto B5f61c4;
case 0x5f61c6:c.instructions+=1;goto B5f61c6;
case 0x5f61cb:goto L5f61cb;
case 0x5f61d1:c.instructions+=11;goto B5f61d1;
case 0x5f61d8:c.instructions+=10;goto B5f61d8;
case 0x5f61de:c.instructions+=9;goto B5f61de;
case 0x5f61e0:c.instructions+=8;goto B5f61e0;
case 0x5f61e4:c.instructions+=7;goto B5f61e4;
case 0x5f61e8:c.instructions+=6;goto B5f61e8;
case 0x5f61ea:c.instructions+=5;goto B5f61ea;
case 0x5f61f0:c.instructions+=4;goto B5f61f0;
case 0x5f61f6:c.instructions+=3;goto B5f61f6;
case 0x5f61f8:c.instructions+=2;goto B5f61f8;
case 0x5f61fb:c.instructions+=1;goto B5f61fb;
case 0x5f61fd:goto L5f61fd;
case 0x5f61ff:c.instructions+=1;goto B5f61ff;
case 0x5f6201:goto L5f6201;
case 0x5f6207:c.instructions+=4;goto B5f6207;
case 0x5f620d:c.instructions+=3;goto B5f620d;
case 0x5f620f:c.instructions+=2;goto B5f620f;
case 0x5f6212:c.instructions+=1;goto B5f6212;
case 0x5f6214:goto L5f6214;
case 0x5f621a:c.instructions+=3;goto B5f621a;
case 0x5f621c:c.instructions+=2;goto B5f621c;
case 0x5f621e:c.instructions+=1;goto B5f621e;
case 0x5f6220:goto L5f6220;
case 0x5f6226:c.instructions+=3;goto B5f6226;
case 0x5f6228:c.instructions+=2;goto B5f6228;
case 0x5f622a:c.instructions+=1;goto B5f622a;
case 0x5f622c:goto L5f622c;
case 0x5f6232:c.instructions+=2;goto B5f6232;
case 0x5f6234:c.instructions+=1;goto B5f6234;
case 0x5f6236:goto L5f6236;
case 0x5f6238:c.instructions+=1;goto B5f6238;
case 0x5f623a:goto L5f623a;
case 0x5f6240:c.instructions+=4;goto B5f6240;
case 0x5f6246:c.instructions+=3;goto B5f6246;
case 0x5f6248:c.instructions+=2;goto B5f6248;
case 0x5f624b:c.instructions+=1;goto B5f624b;
case 0x5f624d:goto L5f624d;
case 0x5f624f:c.instructions+=1;goto B5f624f;
case 0x5f6251:goto L5f6251;
case 0x5f6256:goto L5f6256;
case 0x5f6258:c.instructions+=2;goto B5f6258;
case 0x5f625e:c.instructions+=1;goto B5f625e;
case 0x5f6260:goto L5f6260;
case 0x5f6266:c.instructions+=2;goto B5f6266;
case 0x5f6268:c.instructions+=1;goto B5f6268;
case 0x5f626a:goto L5f626a;
case 0x5f626d:c.instructions+=2;goto B5f626d;
case 0x5f626f:c.instructions+=1;goto B5f626f;
case 0x5f6272:goto L5f6272;
case 0x5f6274:c.instructions+=1;goto B5f6274;
case 0x5f6276:goto L5f6276;
case 0x5f6279:c.instructions+=4;goto B5f6279;
case 0x5f627b:c.instructions+=3;goto B5f627b;
case 0x5f627c:c.instructions+=2;goto B5f627c;
case 0x5f627f:c.instructions+=1;goto B5f627f;
case 0x5f6282:goto L5f6282;
case 0x5f6285:c.instructions+=2;goto B5f6285;
case 0x5f6287:c.instructions+=1;goto B5f6287;
case 0x5f628a:goto L5f628a;
case 0x5f628c:c.instructions+=1;goto B5f628c;
case 0x5f628e:goto L5f628e;
case 0x5f6291:c.instructions+=4;goto B5f6291;
case 0x5f6293:c.instructions+=3;goto B5f6293;
case 0x5f6294:c.instructions+=2;goto B5f6294;
case 0x5f6297:c.instructions+=1;goto B5f6297;
case 0x5f629a:goto L5f629a;
case 0x5f62a1:c.instructions+=1;goto B5f62a1;
case 0x5f62a8:goto L5f62a8;
case 0x5f62a9:c.instructions+=2;goto B5f62a9;
case 0x5f62aa:c.instructions+=1;goto B5f62aa;
case 0x5f62b0:goto L5f62b0;
case 0x5f62b1:c.instructions+=3;goto B5f62b1;
case 0x5f62b4:c.instructions+=2;goto B5f62b4;
case 0x5f62b6:c.instructions+=1;goto B5f62b6;
case 0x5f62b8:goto L5f62b8;
case 0x5f62be:c.instructions+=1;goto B5f62be;
case 0x5f62c0:goto L5f62c0;
case 0x5f62c6:goto L5f62c6;
case 0x5f62cc:c.instructions+=3;goto B5f62cc;
case 0x5f62ce:c.instructions+=2;goto B5f62ce;
case 0x5f62d1:c.instructions+=1;goto B5f62d1;
case 0x5f62d3:goto L5f62d3;
case 0x5f62d8:c.instructions+=1;goto B5f62d8;
case 0x5f62de:goto L5f62de;
case 0x5f62e1:c.instructions+=3;goto B5f62e1;
case 0x5f62e4:c.instructions+=2;goto B5f62e4;
case 0x5f62e7:c.instructions+=1;goto B5f62e7;
case 0x5f62e9:goto L5f62e9;
case 0x5f62ec:c.instructions+=1;goto B5f62ec;
case 0x5f62ee:goto L5f62ee;
case 0x5f62f4:c.instructions+=3;goto B5f62f4;
case 0x5f62f6:c.instructions+=2;goto B5f62f6;
case 0x5f62f9:c.instructions+=1;goto B5f62f9;
case 0x5f62fb:goto L5f62fb;
case 0x5f6300:c.instructions+=3;goto B5f6300;
case 0x5f6306:c.instructions+=2;goto B5f6306;
case 0x5f6307:c.instructions+=1;goto B5f6307;
case 0x5f6308:goto L5f6308;
case 0x5f630e:c.instructions+=3;goto B5f630e;
case 0x5f6310:c.instructions+=2;goto B5f6310;
case 0x5f6312:c.instructions+=1;goto B5f6312;
case 0x5f6314:goto L5f6314;
case 0x5f6319:c.instructions+=1;goto B5f6319;
case 0x5f631b:goto L5f631b;
case 0x5f6320:c.instructions+=8;goto B5f6320;
case 0x5f6326:c.instructions+=7;goto B5f6326;
case 0x5f632a:c.instructions+=6;goto B5f632a;
case 0x5f632e:c.instructions+=5;goto B5f632e;
case 0x5f6334:c.instructions+=4;goto B5f6334;
case 0x5f633a:c.instructions+=3;goto B5f633a;
case 0x5f633c:c.instructions+=2;goto B5f633c;
case 0x5f633f:c.instructions+=1;goto B5f633f;
case 0x5f6341:goto L5f6341;
case 0x5f6343:c.instructions+=3;goto B5f6343;
case 0x5f6349:c.instructions+=2;goto B5f6349;
case 0x5f634a:c.instructions+=1;goto B5f634a;
case 0x5f6350:goto L5f6350;
case 0x5f6353:c.instructions+=6;goto B5f6353;
case 0x5f6354:c.instructions+=5;goto B5f6354;
case 0x5f6356:c.instructions+=4;goto B5f6356;
case 0x5f6359:c.instructions+=3;goto B5f6359;
case 0x5f635b:c.instructions+=2;goto B5f635b;
case 0x5f635e:c.instructions+=1;goto B5f635e;
case 0x5f6364:goto L5f6364;
case 0x5f6366:c.instructions+=1;goto B5f6366;
case 0x5f6368:goto L5f6368;
case 0x5f636d:c.instructions+=1;goto B5f636d;
case 0x5f636f:goto L5f636f;
case 0x5f6375:c.instructions+=2;goto B5f6375;
case 0x5f6377:c.instructions+=1;goto B5f6377;
case 0x5f637d:goto L5f637d;
case 0x5f637e:c.instructions+=11;goto B5f637e;
case 0x5f637f:c.instructions+=10;goto B5f637f;
case 0x5f6382:c.instructions+=9;goto B5f6382;
case 0x5f6385:c.instructions+=8;goto B5f6385;
case 0x5f6388:c.instructions+=7;goto B5f6388;
case 0x5f638f:c.instructions+=6;goto B5f638f;
case 0x5f6395:c.instructions+=5;goto B5f6395;
case 0x5f6397:c.instructions+=4;goto B5f6397;
case 0x5f639a:c.instructions+=3;goto B5f639a;
case 0x5f639d:c.instructions+=2;goto B5f639d;
case 0x5f63a1:c.instructions+=1;goto B5f63a1;
case 0x5f63a7:goto L5f63a7;
case 0x5f63a9:c.instructions+=3;goto B5f63a9;
case 0x5f63af:c.instructions+=2;goto B5f63af;
case 0x5f63b5:c.instructions+=1;goto B5f63b5;
case 0x5f63b7:goto L5f63b7;
case 0x5f63b9:c.instructions+=17;goto B5f63b9;
case 0x5f63ba:c.instructions+=16;goto B5f63ba;
case 0x5f63bc:c.instructions+=15;goto B5f63bc;
case 0x5f63be:c.instructions+=14;goto B5f63be;
case 0x5f63c0:c.instructions+=13;goto B5f63c0;
case 0x5f63c2:c.instructions+=12;goto B5f63c2;
case 0x5f63c4:c.instructions+=11;goto B5f63c4;
case 0x5f63c6:c.instructions+=10;goto B5f63c6;
case 0x5f63c8:c.instructions+=9;goto B5f63c8;
case 0x5f63ce:c.instructions+=8;goto B5f63ce;
case 0x5f63d0:c.instructions+=7;goto B5f63d0;
case 0x5f63d2:c.instructions+=6;goto B5f63d2;
case 0x5f63d4:c.instructions+=5;goto B5f63d4;
case 0x5f63d6:c.instructions+=4;goto B5f63d6;
case 0x5f63d9:c.instructions+=3;goto B5f63d9;
case 0x5f63da:c.instructions+=2;goto B5f63da;
case 0x5f63dc:c.instructions+=1;goto B5f63dc;
case 0x5f63e1:goto L5f63e1;
case 0x5f63e4:c.instructions+=2;goto B5f63e4;
case 0x5f63e7:c.instructions+=1;goto B5f63e7;
case 0x5f63ec:goto L5f63ec;
case 0x5f63ee:c.instructions+=6;goto B5f63ee;
case 0x5f63f4:c.instructions+=5;goto B5f63f4;
case 0x5f63f5:c.instructions+=4;goto B5f63f5;
case 0x5f63f8:c.instructions+=3;goto B5f63f8;
case 0x5f63f9:c.instructions+=2;goto B5f63f9;
case 0x5f63fb:c.instructions+=1;goto B5f63fb;
case 0x5f6400:goto L5f6400;
case 0x5f6403:c.instructions+=1;goto B5f6403;
case 0x5f6405:goto L5f6405;
case 0x5f6407:c.instructions+=1;goto B5f6407;
case 0x5f6409:goto L5f6409;
case 0x5f640f:c.instructions+=2;goto B5f640f;
case 0x5f6411:c.instructions+=1;goto B5f6411;
case 0x5f6413:goto L5f6413;
case 0x5f6419:c.instructions+=2;goto B5f6419;
case 0x5f641f:c.instructions+=1;goto B5f641f;
case 0x5f6424:goto L5f6424;
case 0x5f6426:c.instructions+=13;goto B5f6426;
case 0x5f6429:c.instructions+=12;goto B5f6429;
case 0x5f642a:c.instructions+=11;goto B5f642a;
case 0x5f642d:c.instructions+=10;goto B5f642d;
case 0x5f642f:c.instructions+=9;goto B5f642f;
case 0x5f6431:c.instructions+=8;goto B5f6431;
case 0x5f6433:c.instructions+=7;goto B5f6433;
case 0x5f6435:c.instructions+=6;goto B5f6435;
case 0x5f6437:c.instructions+=5;goto B5f6437;
case 0x5f6439:c.instructions+=4;goto B5f6439;
case 0x5f643b:c.instructions+=3;goto B5f643b;
case 0x5f643d:c.instructions+=2;goto B5f643d;
case 0x5f643f:c.instructions+=1;goto B5f643f;
case 0x5f6441:goto L5f6441;
case 0x5f6443:c.instructions+=1;goto B5f6443;
case 0x5f6445:goto L5f6445;
case 0x5f644b:c.instructions+=6;goto B5f644b;
case 0x5f644c:c.instructions+=5;goto B5f644c;
case 0x5f644e:c.instructions+=4;goto B5f644e;
case 0x5f6451:c.instructions+=3;goto B5f6451;
case 0x5f6452:c.instructions+=2;goto B5f6452;
case 0x5f6454:c.instructions+=1;goto B5f6454;
case 0x5f6459:goto L5f6459;
case 0x5f645c:c.instructions+=1;goto B5f645c;
case 0x5f645e:goto L5f645e;
case 0x5f6460:goto L5f6460;
case 0x5f6466:c.instructions+=10;goto B5f6466;
case 0x5f646c:c.instructions+=9;goto B5f646c;
case 0x5f6472:c.instructions+=8;goto B5f6472;
case 0x5f6474:c.instructions+=7;goto B5f6474;
case 0x5f6478:c.instructions+=6;goto B5f6478;
case 0x5f647e:c.instructions+=5;goto B5f647e;
case 0x5f647f:c.instructions+=4;goto B5f647f;
case 0x5f6484:c.instructions+=3;goto B5f6484;
case 0x5f648a:c.instructions+=2;goto B5f648a;
case 0x5f648e:c.instructions+=1;goto B5f648e;
case 0x5f6493:goto L5f6493;
case 0x5f6497:c.instructions+=3;goto B5f6497;
case 0x5f6499:c.instructions+=2;goto B5f6499;
case 0x5f649d:c.instructions+=1;goto B5f649d;
case 0x5f649f:goto L5f649f;
case 0x5f64a3:c.instructions+=4;goto B5f64a3;
case 0x5f64a4:c.instructions+=3;goto B5f64a4;
case 0x5f64a5:c.instructions+=2;goto B5f64a5;
case 0x5f64a7:c.instructions+=1;goto B5f64a7;
case 0x5f64ac:goto L5f64ac;
case 0x5f64af:goto L5f64af;
case 0x5f64b1:c.instructions+=5;goto B5f64b1;
case 0x5f64b7:c.instructions+=4;goto B5f64b7;
case 0x5f64bd:c.instructions+=3;goto B5f64bd;
case 0x5f64c3:c.instructions+=2;goto B5f64c3;
case 0x5f64c9:c.instructions+=1;goto B5f64c9;
case 0x5f64cb:goto L5f64cb;
case 0x5f64d1:c.instructions+=5;goto B5f64d1;
case 0x5f64d2:c.instructions+=4;goto B5f64d2;
case 0x5f64d5:c.instructions+=3;goto B5f64d5;
case 0x5f64d6:c.instructions+=2;goto B5f64d6;
case 0x5f64d8:c.instructions+=1;goto B5f64d8;
case 0x5f64dd:goto L5f64dd;
case 0x5f64e0:c.instructions+=1;goto B5f64e0;
case 0x5f64e2:goto L5f64e2;
case 0x5f64e4:goto L5f64e4;
case 0x5f64ea:c.instructions+=2;goto B5f64ea;
case 0x5f64ec:c.instructions+=1;goto B5f64ec;
case 0x5f64ee:goto L5f64ee;
case 0x5f64f0:goto L5f64f0;
case 0x5f64f7:c.instructions+=2;goto B5f64f7;
case 0x5f64f9:c.instructions+=1;goto B5f64f9;
case 0x5f64fb:goto L5f64fb;
case 0x5f6502:c.instructions+=4;goto B5f6502;
case 0x5f6507:c.instructions+=3;goto B5f6507;
case 0x5f6509:c.instructions+=2;goto B5f6509;
case 0x5f650b:c.instructions+=1;goto B5f650b;
case 0x5f650d:goto L5f650d;
case 0x5f650e:c.instructions+=2;goto B5f650e;
case 0x5f6511:c.instructions+=1;goto B5f6511;
case 0x5f6513:goto L5f6513;
case 0x5f6519:c.instructions+=6;goto B5f6519;
case 0x5f651f:c.instructions+=5;goto B5f651f;
case 0x5f6524:c.instructions+=4;goto B5f6524;
case 0x5f6526:c.instructions+=3;goto B5f6526;
case 0x5f6529:c.instructions+=2;goto B5f6529;
case 0x5f652b:c.instructions+=1;goto B5f652b;
case 0x5f652d:goto L5f652d;
case 0x5f6530:c.instructions+=1;goto B5f6530;
case 0x5f6532:goto L5f6532;
case 0x5f6535:goto L5f6535;
case 0x5f653b:c.instructions+=1;goto B5f653b;
case 0x5f653d:goto L5f653d;
case 0x5f6540:c.instructions+=1;goto B5f6540;
case 0x5f6542:goto L5f6542;
case 0x5f6545:goto L5f6545;
case 0x5f654b:c.instructions+=1;goto B5f654b;
case 0x5f654d:goto L5f654d;
case 0x5f6550:c.instructions+=1;goto B5f6550;
case 0x5f6552:goto L5f6552;
case 0x5f6555:goto L5f6555;
case 0x5f655b:c.instructions+=4;goto B5f655b;
case 0x5f655d:c.instructions+=3;goto B5f655d;
case 0x5f655f:c.instructions+=2;goto B5f655f;
case 0x5f6561:c.instructions+=1;goto B5f6561;
case 0x5f6563:goto L5f6563;
case 0x5f6569:c.instructions+=4;goto B5f6569;
case 0x5f656f:c.instructions+=3;goto B5f656f;
case 0x5f6571:c.instructions+=2;goto B5f6571;
case 0x5f6574:c.instructions+=1;goto B5f6574;
case 0x5f6576:goto L5f6576;
case 0x5f6578:c.instructions+=3;goto B5f6578;
case 0x5f657a:c.instructions+=2;goto B5f657a;
case 0x5f657d:c.instructions+=1;goto B5f657d;
case 0x5f657f:goto L5f657f;
case 0x5f6583:c.instructions+=2;goto B5f6583;
case 0x5f6585:c.instructions+=1;goto B5f6585;
case 0x5f6587:goto L5f6587;
case 0x5f658c:c.instructions+=3;goto B5f658c;
case 0x5f658d:c.instructions+=2;goto B5f658d;
case 0x5f658f:c.instructions+=1;goto B5f658f;
case 0x5f6591:goto L5f6591;
case 0x5f6597:c.instructions+=3;goto B5f6597;
case 0x5f6599:c.instructions+=2;goto B5f6599;
case 0x5f659c:c.instructions+=1;goto B5f659c;
case 0x5f659e:goto L5f659e;
case 0x5f65a2:c.instructions+=2;goto B5f65a2;
case 0x5f65a4:c.instructions+=1;goto B5f65a4;
case 0x5f65a6:goto L5f65a6;
case 0x5f65ab:c.instructions+=2;goto B5f65ab;
case 0x5f65ac:c.instructions+=1;goto B5f65ac;
case 0x5f65ae:goto L5f65ae;
case 0x5f65b3:goto L5f65b3;
case 0x5f65b6:goto L5f65b6;
case 0x5f65b9:c.instructions+=3;goto B5f65b9;
case 0x5f65bc:c.instructions+=2;goto B5f65bc;
case 0x5f65c2:c.instructions+=1;goto B5f65c2;
case 0x5f65c8:goto L5f65c8;
case 0x5f65cb:c.instructions+=6;goto B5f65cb;
case 0x5f65ce:c.instructions+=5;goto B5f65ce;
case 0x5f65d1:c.instructions+=4;goto B5f65d1;
case 0x5f65d7:c.instructions+=3;goto B5f65d7;
case 0x5f65d9:c.instructions+=2;goto B5f65d9;
case 0x5f65dc:c.instructions+=1;goto B5f65dc;
case 0x5f65de:goto L5f65de;
case 0x5f65e0:c.instructions+=1;goto B5f65e0;
case 0x5f65e2:goto L5f65e2;
case 0x5f65e4:goto L5f65e4;
case 0x5f65e6:c.instructions+=3;goto B5f65e6;
case 0x5f65e9:c.instructions+=2;goto B5f65e9;
case 0x5f65eb:c.instructions+=1;goto B5f65eb;
case 0x5f65ed:goto L5f65ed;
case 0x5f65f1:c.instructions+=2;goto B5f65f1;
case 0x5f65f3:c.instructions+=1;goto B5f65f3;
case 0x5f65f9:goto L5f65f9;
case 0x5f65fe:c.instructions+=3;goto B5f65fe;
case 0x5f65ff:c.instructions+=2;goto B5f65ff;
case 0x5f6601:c.instructions+=1;goto B5f6601;
case 0x5f6606:goto L5f6606;
case 0x5f6609:c.instructions+=1;goto B5f6609;
case 0x5f660e:goto L5f660e;
case 0x5f6611:c.instructions+=1;goto B5f6611;
case 0x5f6613:goto L5f6613;
case 0x5f6616:c.instructions+=8;goto B5f6616;
case 0x5f6619:c.instructions+=7;goto B5f6619;
case 0x5f661f:c.instructions+=6;goto B5f661f;
case 0x5f6623:c.instructions+=5;goto B5f6623;
case 0x5f6627:c.instructions+=4;goto B5f6627;
case 0x5f662d:c.instructions+=3;goto B5f662d;
case 0x5f662f:c.instructions+=2;goto B5f662f;
case 0x5f6632:c.instructions+=1;goto B5f6632;
case 0x5f6634:goto L5f6634;
case 0x5f6638:c.instructions+=5;goto B5f6638;
case 0x5f663e:c.instructions+=4;goto B5f663e;
case 0x5f6642:c.instructions+=3;goto B5f6642;
case 0x5f6644:c.instructions+=2;goto B5f6644;
case 0x5f6647:c.instructions+=1;goto B5f6647;
case 0x5f6649:goto L5f6649;
case 0x5f664b:c.instructions+=2;goto B5f664b;
case 0x5f6651:c.instructions+=1;goto B5f6651;
case 0x5f6653:goto L5f6653;
case 0x5f6659:goto L5f6659;
case 0x5f665f:c.instructions+=3;goto B5f665f;
case 0x5f6661:c.instructions+=2;goto B5f6661;
case 0x5f6664:c.instructions+=1;goto B5f6664;
case 0x5f6666:goto L5f6666;
case 0x5f6669:c.instructions+=1;goto B5f6669;
case 0x5f666b:goto L5f666b;
case 0x5f666e:c.instructions+=8;goto B5f666e;
case 0x5f6671:c.instructions+=7;goto B5f6671;
case 0x5f6677:c.instructions+=6;goto B5f6677;
case 0x5f667b:c.instructions+=5;goto B5f667b;
case 0x5f667f:c.instructions+=4;goto B5f667f;
case 0x5f6685:c.instructions+=3;goto B5f6685;
case 0x5f6687:c.instructions+=2;goto B5f6687;
case 0x5f668a:c.instructions+=1;goto B5f668a;
case 0x5f668c:goto L5f668c;
case 0x5f6690:c.instructions+=5;goto B5f6690;
case 0x5f6696:c.instructions+=4;goto B5f6696;
case 0x5f669a:c.instructions+=3;goto B5f669a;
case 0x5f669c:c.instructions+=2;goto B5f669c;
case 0x5f669f:c.instructions+=1;goto B5f669f;
case 0x5f66a1:goto L5f66a1;
case 0x5f66a3:c.instructions+=2;goto B5f66a3;
case 0x5f66a9:c.instructions+=1;goto B5f66a9;
case 0x5f66ab:goto L5f66ab;
case 0x5f66b1:goto L5f66b1;
case 0x5f66b5:c.instructions+=2;goto B5f66b5;
case 0x5f66b7:c.instructions+=1;goto B5f66b7;
case 0x5f66b9:goto L5f66b9;
case 0x5f66bf:c.instructions+=8;goto B5f66bf;
case 0x5f66c0:c.instructions+=7;goto B5f66c0;
case 0x5f66c6:c.instructions+=6;goto B5f66c6;
case 0x5f66cc:c.instructions+=5;goto B5f66cc;
case 0x5f66ce:c.instructions+=4;goto B5f66ce;
case 0x5f66d1:c.instructions+=3;goto B5f66d1;
case 0x5f66d2:c.instructions+=2;goto B5f66d2;
case 0x5f66d4:c.instructions+=1;goto B5f66d4;
case 0x5f66d9:goto L5f66d9;
case 0x5f66dc:c.instructions+=1;goto B5f66dc;
case 0x5f66de:goto L5f66de;
case 0x5f66e0:goto L5f66e0;
case 0x5f66e5:c.instructions+=2;goto B5f66e5;
case 0x5f66e8:c.instructions+=1;goto B5f66e8;
case 0x5f66ea:goto L5f66ea;
case 0x5f66ee:c.instructions+=2;goto B5f66ee;
case 0x5f66f0:c.instructions+=1;goto B5f66f0;
case 0x5f66f2:goto L5f66f2;
case 0x5f66f8:c.instructions+=4;goto B5f66f8;
case 0x5f66fe:c.instructions+=3;goto B5f66fe;
case 0x5f6700:c.instructions+=2;goto B5f6700;
case 0x5f6703:c.instructions+=1;goto B5f6703;
case 0x5f6705:goto L5f6705;
case 0x5f670b:c.instructions+=1;goto B5f670b;
case 0x5f670d:goto L5f670d;
case 0x5f6713:goto L5f6713;
case 0x5f6716:c.instructions+=6;goto B5f6716;
case 0x5f671c:c.instructions+=5;goto B5f671c;
case 0x5f671d:c.instructions+=4;goto B5f671d;
case 0x5f6720:c.instructions+=3;goto B5f6720;
case 0x5f6721:c.instructions+=2;goto B5f6721;
case 0x5f6723:c.instructions+=1;goto B5f6723;
case 0x5f6728:goto L5f6728;
case 0x5f672b:goto L5f672b;
case 0x5f672c:c.instructions+=1;goto B5f672c;
case 0x5f672d:goto L5f672d;
case 0x5f672e:c.instructions+=2;goto B5f672e;
case 0x5f6731:c.instructions+=1;goto B5f6731;
case 0x5f6740:goto L5f6740;
case 0x5f6743:c.instructions+=5;goto B5f6743;
case 0x5f6744:c.instructions+=4;goto B5f6744;
case 0x5f6746:c.instructions+=3;goto B5f6746;
case 0x5f6749:c.instructions+=2;goto B5f6749;
case 0x5f674d:c.instructions+=1;goto B5f674d;
case 0x5f6753:goto L5f6753;
case 0x5f6759:c.instructions+=2;goto B5f6759;
case 0x5f675b:c.instructions+=1;goto B5f675b;
case 0x5f6761:goto L5f6761;
case 0x5f6766:c.instructions+=2;goto B5f6766;
case 0x5f6768:c.instructions+=1;goto B5f6768;
case 0x5f676a:goto L5f676a;
case 0x5f6771:c.instructions+=1;goto B5f6771;
case 0x5f6773:goto L5f6773;
case 0x5f6776:c.instructions+=5;goto B5f6776;
case 0x5f6779:c.instructions+=4;goto B5f6779;
case 0x5f677c:c.instructions+=3;goto B5f677c;
case 0x5f677e:c.instructions+=2;goto B5f677e;
case 0x5f6784:c.instructions+=1;goto B5f6784;
case 0x5f6786:goto L5f6786;
case 0x5f678c:goto L5f678c;
case 0x5f678f:c.instructions+=13;goto B5f678f;
case 0x5f6792:c.instructions+=12;goto B5f6792;
case 0x5f6798:c.instructions+=11;goto B5f6798;
case 0x5f679b:c.instructions+=10;goto B5f679b;
case 0x5f679f:c.instructions+=9;goto B5f679f;
case 0x5f67a2:c.instructions+=8;goto B5f67a2;
case 0x5f67a7:c.instructions+=7;goto B5f67a7;
case 0x5f67a9:c.instructions+=6;goto B5f67a9;
case 0x5f67ae:c.instructions+=5;goto B5f67ae;
case 0x5f67b2:c.instructions+=4;goto B5f67b2;
case 0x5f67b3:c.instructions+=3;goto B5f67b3;
case 0x5f67b7:c.instructions+=2;goto B5f67b7;
case 0x5f67bb:c.instructions+=1;goto B5f67bb;
case 0x5f67c0:goto L5f67c0;
case 0x5f67c4:c.instructions+=8;goto B5f67c4;
case 0x5f67c8:c.instructions+=7;goto B5f67c8;
case 0x5f67c9:c.instructions+=6;goto B5f67c9;
case 0x5f67cd:c.instructions+=5;goto B5f67cd;
case 0x5f67d1:c.instructions+=4;goto B5f67d1;
case 0x5f67d5:c.instructions+=3;goto B5f67d5;
case 0x5f67d7:c.instructions+=2;goto B5f67d7;
case 0x5f67da:c.instructions+=1;goto B5f67da;
case 0x5f67df:goto L5f67df;
case 0x5f67e5:goto L5f67e5;
case 0x5f67e6:c.instructions+=2;goto B5f67e6;
case 0x5f67e9:c.instructions+=1;goto B5f67e9;
case 0x5f67f0:goto L5f67f0;
case 0x5f67f3:c.instructions+=2;goto B5f67f3;
case 0x5f67f7:c.instructions+=1;goto B5f67f7;
case 0x5f67f9:goto L5f67f9;
case 0x5f67ff:c.instructions+=2;goto B5f67ff;
case 0x5f6801:c.instructions+=1;goto B5f6801;
case 0x5f6803:goto L5f6803;
case 0x5f6809:c.instructions+=2;goto B5f6809;
case 0x5f680b:c.instructions+=1;goto B5f680b;
case 0x5f680d:goto L5f680d;
case 0x5f6813:c.instructions+=2;goto B5f6813;
case 0x5f6815:c.instructions+=1;goto B5f6815;
case 0x5f6817:goto L5f6817;
case 0x5f681c:c.instructions+=1;goto B5f681c;
case 0x5f681d:goto L5f681d;
case 0x5f681f:c.instructions+=1;goto B5f681f;
case 0x5f6820:goto L5f6820;
case 0x5f6821:c.instructions+=10;goto B5f6821;
case 0x5f6823:c.instructions+=9;goto B5f6823;
case 0x5f6827:c.instructions+=8;goto B5f6827;
case 0x5f682c:c.instructions+=7;goto B5f682c;
case 0x5f682e:c.instructions+=6;goto B5f682e;
case 0x5f6834:c.instructions+=5;goto B5f6834;
case 0x5f6835:c.instructions+=4;goto B5f6835;
case 0x5f6836:c.instructions+=3;goto B5f6836;
case 0x5f6838:c.instructions+=2;goto B5f6838;
case 0x5f6839:c.instructions+=1;goto B5f6839;
case 0x5f683f:goto L5f683f;
case 0x5f6843:c.instructions+=208;goto B5f6843;
case 0x5f6847:c.instructions+=207;goto B5f6847;
case 0x5f6849:c.instructions+=206;goto B5f6849;
case 0x5f684c:c.instructions+=205;goto B5f684c;
case 0x5f684f:c.instructions+=204;goto B5f684f;
case 0x5f6852:c.instructions+=203;goto B5f6852;
case 0x5f6855:c.instructions+=202;goto B5f6855;
case 0x5f6858:c.instructions+=201;goto B5f6858;
case 0x5f685b:c.instructions+=200;goto B5f685b;
case 0x5f685e:c.instructions+=199;goto B5f685e;
case 0x5f6861:c.instructions+=198;goto B5f6861;
case 0x5f6864:c.instructions+=197;goto B5f6864;
case 0x5f6867:c.instructions+=196;goto B5f6867;
case 0x5f686a:c.instructions+=195;goto B5f686a;
case 0x5f686d:c.instructions+=194;goto B5f686d;
case 0x5f6872:c.instructions+=193;goto B5f6872;
case 0x5f6874:c.instructions+=192;goto B5f6874;
case 0x5f6877:c.instructions+=191;goto B5f6877;
case 0x5f687a:c.instructions+=190;goto B5f687a;
case 0x5f687d:c.instructions+=189;goto B5f687d;
case 0x5f687f:c.instructions+=188;goto B5f687f;
case 0x5f6882:c.instructions+=187;goto B5f6882;
case 0x5f6885:c.instructions+=186;goto B5f6885;
case 0x5f6888:c.instructions+=185;goto B5f6888;
case 0x5f688b:c.instructions+=184;goto B5f688b;
case 0x5f688e:c.instructions+=183;goto B5f688e;
case 0x5f6891:c.instructions+=182;goto B5f6891;
case 0x5f6894:c.instructions+=181;goto B5f6894;
case 0x5f6897:c.instructions+=180;goto B5f6897;
case 0x5f689a:c.instructions+=179;goto B5f689a;
case 0x5f689d:c.instructions+=178;goto B5f689d;
case 0x5f68a0:c.instructions+=177;goto B5f68a0;
case 0x5f68a3:c.instructions+=176;goto B5f68a3;
case 0x5f68a6:c.instructions+=175;goto B5f68a6;
case 0x5f68a9:c.instructions+=174;goto B5f68a9;
case 0x5f68ac:c.instructions+=173;goto B5f68ac;
case 0x5f68af:c.instructions+=172;goto B5f68af;
case 0x5f68b2:c.instructions+=171;goto B5f68b2;
case 0x5f68b5:c.instructions+=170;goto B5f68b5;
case 0x5f68b8:c.instructions+=169;goto B5f68b8;
case 0x5f68bb:c.instructions+=168;goto B5f68bb;
case 0x5f68be:c.instructions+=167;goto B5f68be;
case 0x5f68c0:c.instructions+=166;goto B5f68c0;
case 0x5f68c3:c.instructions+=165;goto B5f68c3;
case 0x5f68c6:c.instructions+=164;goto B5f68c6;
case 0x5f68c9:c.instructions+=163;goto B5f68c9;
case 0x5f68cc:c.instructions+=162;goto B5f68cc;
case 0x5f68cf:c.instructions+=161;goto B5f68cf;
case 0x5f68d1:c.instructions+=160;goto B5f68d1;
case 0x5f68d4:c.instructions+=159;goto B5f68d4;
case 0x5f68d6:c.instructions+=158;goto B5f68d6;
case 0x5f68d9:c.instructions+=157;goto B5f68d9;
case 0x5f68dc:c.instructions+=156;goto B5f68dc;
case 0x5f68df:c.instructions+=155;goto B5f68df;
case 0x5f68e2:c.instructions+=154;goto B5f68e2;
case 0x5f68e5:c.instructions+=153;goto B5f68e5;
case 0x5f68e8:c.instructions+=152;goto B5f68e8;
case 0x5f68eb:c.instructions+=151;goto B5f68eb;
case 0x5f68ee:c.instructions+=150;goto B5f68ee;
case 0x5f68f1:c.instructions+=149;goto B5f68f1;
case 0x5f68f4:c.instructions+=148;goto B5f68f4;
case 0x5f68f7:c.instructions+=147;goto B5f68f7;
case 0x5f68fa:c.instructions+=146;goto B5f68fa;
case 0x5f68fd:c.instructions+=145;goto B5f68fd;
case 0x5f6900:c.instructions+=144;goto B5f6900;
case 0x5f6903:c.instructions+=143;goto B5f6903;
case 0x5f6906:c.instructions+=142;goto B5f6906;
case 0x5f6909:c.instructions+=141;goto B5f6909;
case 0x5f690c:c.instructions+=140;goto B5f690c;
case 0x5f690f:c.instructions+=139;goto B5f690f;
case 0x5f6912:c.instructions+=138;goto B5f6912;
case 0x5f6915:c.instructions+=137;goto B5f6915;
case 0x5f6918:c.instructions+=136;goto B5f6918;
case 0x5f691b:c.instructions+=135;goto B5f691b;
case 0x5f691e:c.instructions+=134;goto B5f691e;
case 0x5f6921:c.instructions+=133;goto B5f6921;
case 0x5f6924:c.instructions+=132;goto B5f6924;
case 0x5f6927:c.instructions+=131;goto B5f6927;
case 0x5f692a:c.instructions+=130;goto B5f692a;
case 0x5f692d:c.instructions+=129;goto B5f692d;
case 0x5f6930:c.instructions+=128;goto B5f6930;
case 0x5f6933:c.instructions+=127;goto B5f6933;
case 0x5f6936:c.instructions+=126;goto B5f6936;
case 0x5f6939:c.instructions+=125;goto B5f6939;
case 0x5f693c:c.instructions+=124;goto B5f693c;
case 0x5f693f:c.instructions+=123;goto B5f693f;
case 0x5f6942:c.instructions+=122;goto B5f6942;
case 0x5f6945:c.instructions+=121;goto B5f6945;
case 0x5f6948:c.instructions+=120;goto B5f6948;
case 0x5f694b:c.instructions+=119;goto B5f694b;
case 0x5f694e:c.instructions+=118;goto B5f694e;
case 0x5f6951:c.instructions+=117;goto B5f6951;
case 0x5f6953:c.instructions+=116;goto B5f6953;
case 0x5f6956:c.instructions+=115;goto B5f6956;
case 0x5f6959:c.instructions+=114;goto B5f6959;
case 0x5f695c:c.instructions+=113;goto B5f695c;
case 0x5f695f:c.instructions+=112;goto B5f695f;
case 0x5f6962:c.instructions+=111;goto B5f6962;
case 0x5f6964:c.instructions+=110;goto B5f6964;
case 0x5f6967:c.instructions+=109;goto B5f6967;
case 0x5f6969:c.instructions+=108;goto B5f6969;
case 0x5f696c:c.instructions+=107;goto B5f696c;
case 0x5f696f:c.instructions+=106;goto B5f696f;
case 0x5f6972:c.instructions+=105;goto B5f6972;
case 0x5f6978:c.instructions+=104;goto B5f6978;
case 0x5f697e:c.instructions+=103;goto B5f697e;
case 0x5f6984:c.instructions+=102;goto B5f6984;
case 0x5f698a:c.instructions+=101;goto B5f698a;
case 0x5f6990:c.instructions+=100;goto B5f6990;
case 0x5f6996:c.instructions+=99;goto B5f6996;
case 0x5f699c:c.instructions+=98;goto B5f699c;
case 0x5f69a2:c.instructions+=97;goto B5f69a2;
case 0x5f69a8:c.instructions+=96;goto B5f69a8;
case 0x5f69ae:c.instructions+=95;goto B5f69ae;
case 0x5f69b4:c.instructions+=94;goto B5f69b4;
case 0x5f69ba:c.instructions+=93;goto B5f69ba;
case 0x5f69c0:c.instructions+=92;goto B5f69c0;
case 0x5f69c6:c.instructions+=91;goto B5f69c6;
case 0x5f69cc:c.instructions+=90;goto B5f69cc;
case 0x5f69d2:c.instructions+=89;goto B5f69d2;
case 0x5f69d8:c.instructions+=88;goto B5f69d8;
case 0x5f69de:c.instructions+=87;goto B5f69de;
case 0x5f69e4:c.instructions+=86;goto B5f69e4;
case 0x5f69ea:c.instructions+=85;goto B5f69ea;
case 0x5f69f0:c.instructions+=84;goto B5f69f0;
case 0x5f69f6:c.instructions+=83;goto B5f69f6;
case 0x5f69fc:c.instructions+=82;goto B5f69fc;
case 0x5f6a02:c.instructions+=81;goto B5f6a02;
case 0x5f6a08:c.instructions+=80;goto B5f6a08;
case 0x5f6a0e:c.instructions+=79;goto B5f6a0e;
case 0x5f6a14:c.instructions+=78;goto B5f6a14;
case 0x5f6a1a:c.instructions+=77;goto B5f6a1a;
case 0x5f6a20:c.instructions+=76;goto B5f6a20;
case 0x5f6a26:c.instructions+=75;goto B5f6a26;
case 0x5f6a2c:c.instructions+=74;goto B5f6a2c;
case 0x5f6a32:c.instructions+=73;goto B5f6a32;
case 0x5f6a35:c.instructions+=72;goto B5f6a35;
case 0x5f6a38:c.instructions+=71;goto B5f6a38;
case 0x5f6a3b:c.instructions+=70;goto B5f6a3b;
case 0x5f6a3e:c.instructions+=69;goto B5f6a3e;
case 0x5f6a41:c.instructions+=68;goto B5f6a41;
case 0x5f6a47:c.instructions+=67;goto B5f6a47;
case 0x5f6a49:c.instructions+=66;goto B5f6a49;
case 0x5f6a4f:c.instructions+=65;goto B5f6a4f;
case 0x5f6a55:c.instructions+=64;goto B5f6a55;
case 0x5f6a5b:c.instructions+=63;goto B5f6a5b;
case 0x5f6a5e:c.instructions+=62;goto B5f6a5e;
case 0x5f6a61:c.instructions+=61;goto B5f6a61;
case 0x5f6a63:c.instructions+=60;goto B5f6a63;
case 0x5f6a69:c.instructions+=59;goto B5f6a69;
case 0x5f6a6b:c.instructions+=58;goto B5f6a6b;
case 0x5f6a71:c.instructions+=57;goto B5f6a71;
case 0x5f6a77:c.instructions+=56;goto B5f6a77;
case 0x5f6a7d:c.instructions+=55;goto B5f6a7d;
case 0x5f6a83:c.instructions+=54;goto B5f6a83;
case 0x5f6a89:c.instructions+=53;goto B5f6a89;
case 0x5f6a8f:c.instructions+=52;goto B5f6a8f;
case 0x5f6a95:c.instructions+=51;goto B5f6a95;
case 0x5f6a9b:c.instructions+=50;goto B5f6a9b;
case 0x5f6aa1:c.instructions+=49;goto B5f6aa1;
case 0x5f6aa7:c.instructions+=48;goto B5f6aa7;
case 0x5f6aad:c.instructions+=47;goto B5f6aad;
case 0x5f6ab3:c.instructions+=46;goto B5f6ab3;
case 0x5f6ab9:c.instructions+=45;goto B5f6ab9;
case 0x5f6abf:c.instructions+=44;goto B5f6abf;
case 0x5f6ac5:c.instructions+=43;goto B5f6ac5;
case 0x5f6acb:c.instructions+=42;goto B5f6acb;
case 0x5f6ad1:c.instructions+=41;goto B5f6ad1;
case 0x5f6ad7:c.instructions+=40;goto B5f6ad7;
case 0x5f6add:c.instructions+=39;goto B5f6add;
case 0x5f6ae3:c.instructions+=38;goto B5f6ae3;
case 0x5f6ae9:c.instructions+=37;goto B5f6ae9;
case 0x5f6aef:c.instructions+=36;goto B5f6aef;
case 0x5f6af5:c.instructions+=35;goto B5f6af5;
case 0x5f6afb:c.instructions+=34;goto B5f6afb;
case 0x5f6b01:c.instructions+=33;goto B5f6b01;
case 0x5f6b07:c.instructions+=32;goto B5f6b07;
case 0x5f6b0d:c.instructions+=31;goto B5f6b0d;
case 0x5f6b13:c.instructions+=30;goto B5f6b13;
case 0x5f6b19:c.instructions+=29;goto B5f6b19;
case 0x5f6b1f:c.instructions+=28;goto B5f6b1f;
case 0x5f6b25:c.instructions+=27;goto B5f6b25;
case 0x5f6b2b:c.instructions+=26;goto B5f6b2b;
case 0x5f6b31:c.instructions+=25;goto B5f6b31;
case 0x5f6b37:c.instructions+=24;goto B5f6b37;
case 0x5f6b3d:c.instructions+=23;goto B5f6b3d;
case 0x5f6b40:c.instructions+=22;goto B5f6b40;
case 0x5f6b46:c.instructions+=21;goto B5f6b46;
case 0x5f6b4c:c.instructions+=20;goto B5f6b4c;
case 0x5f6b52:c.instructions+=19;goto B5f6b52;
case 0x5f6b58:c.instructions+=18;goto B5f6b58;
case 0x5f6b5e:c.instructions+=17;goto B5f6b5e;
case 0x5f6b60:c.instructions+=16;goto B5f6b60;
case 0x5f6b66:c.instructions+=15;goto B5f6b66;
case 0x5f6b6c:c.instructions+=14;goto B5f6b6c;
case 0x5f6b6d:c.instructions+=13;goto B5f6b6d;
case 0x5f6b73:c.instructions+=12;goto B5f6b73;
case 0x5f6b76:c.instructions+=11;goto B5f6b76;
case 0x5f6b79:c.instructions+=10;goto B5f6b79;
case 0x5f6b7b:c.instructions+=9;goto B5f6b7b;
case 0x5f6b7d:c.instructions+=8;goto B5f6b7d;
case 0x5f6b83:c.instructions+=7;goto B5f6b83;
case 0x5f6b84:c.instructions+=6;goto B5f6b84;
case 0x5f6b8a:c.instructions+=5;goto B5f6b8a;
case 0x5f6b8b:c.instructions+=4;goto B5f6b8b;
case 0x5f6b91:c.instructions+=3;goto B5f6b91;
case 0x5f6b97:c.instructions+=2;goto B5f6b97;
case 0x5f6b98:c.instructions+=1;goto B5f6b98;
case 0x5f6b9b:goto L5f6b9b;
case 0x5f6b9f:c.instructions+=4;goto B5f6b9f;
case 0x5f6ba5:c.instructions+=3;goto B5f6ba5;
case 0x5f6ba9:c.instructions+=2;goto B5f6ba9;
case 0x5f6bab:c.instructions+=1;goto B5f6bab;
case 0x5f6bb0:goto L5f6bb0;
case 0x5f6bb6:c.instructions+=4;goto B5f6bb6;
case 0x5f6bb7:c.instructions+=3;goto B5f6bb7;
case 0x5f6bba:c.instructions+=2;goto B5f6bba;
case 0x5f6bbb:c.instructions+=1;goto B5f6bbb;
case 0x5f6bc0:goto L5f6bc0;
case 0x5f6bc1:c.instructions+=2;goto B5f6bc1;
case 0x5f6bc2:c.instructions+=1;goto B5f6bc2;
case 0x5f6bc7:goto L5f6bc7;
case 0x5f6bca:c.instructions+=4;goto B5f6bca;
case 0x5f6bcd:c.instructions+=3;goto B5f6bcd;
case 0x5f6bd0:c.instructions+=2;goto B5f6bd0;
case 0x5f6bd1:c.instructions+=1;goto B5f6bd1;
case 0x5f6bd3:goto L5f6bd3;
case 0x5f6bd4:c.instructions+=4;goto B5f6bd4;
case 0x5f6bd5:c.instructions+=3;goto B5f6bd5;
case 0x5f6bd6:c.instructions+=2;goto B5f6bd6;
case 0x5f6bd7:c.instructions+=1;goto B5f6bd7;
case 0x5f6be0:goto L5f6be0;
case 0x5f6be4:c.instructions+=3;goto B5f6be4;
case 0x5f6be7:c.instructions+=2;goto B5f6be7;
case 0x5f6bea:c.instructions+=1;goto B5f6bea;
case 0x5f6bec:goto L5f6bec;
case 0x5f6bef:c.instructions+=3;goto B5f6bef;
case 0x5f6bf9:c.instructions+=2;goto B5f6bf9;
case 0x5f6bfd:c.instructions+=1;goto B5f6bfd;
case 0x5f6bff:goto L5f6bff;
case 0x5f6c05:c.instructions+=2;goto B5f6c05;
case 0x5f6c07:c.instructions+=1;goto B5f6c07;
case 0x5f6c09:goto L5f6c09;
case 0x5f6c0e:c.instructions+=1;goto B5f6c0e;
case 0x5f6c14:goto L5f6c14;
case 0x5f6c20:goto L5f6c20;
case 0x5f6c24:c.instructions+=13;goto B5f6c24;
case 0x5f6c25:c.instructions+=12;goto B5f6c25;
case 0x5f6c27:c.instructions+=11;goto B5f6c27;
case 0x5f6c2a:c.instructions+=10;goto B5f6c2a;
case 0x5f6c2d:c.instructions+=9;goto B5f6c2d;
case 0x5f6c30:c.instructions+=8;goto B5f6c30;
case 0x5f6c32:c.instructions+=7;goto B5f6c32;
case 0x5f6c35:c.instructions+=6;goto B5f6c35;
case 0x5f6c36:c.instructions+=5;goto B5f6c36;
case 0x5f6c39:c.instructions+=4;goto B5f6c39;
case 0x5f6c3c:c.instructions+=3;goto B5f6c3c;
case 0x5f6c3e:c.instructions+=2;goto B5f6c3e;
case 0x5f6c3f:c.instructions+=1;goto B5f6c3f;
case 0x5f6c44:goto L5f6c44;
case 0x5f6c4a:c.instructions+=3;goto B5f6c4a;
case 0x5f6c4c:c.instructions+=2;goto B5f6c4c;
case 0x5f6c4f:c.instructions+=1;goto B5f6c4f;
case 0x5f6c51:goto L5f6c51;
case 0x5f6c56:c.instructions+=1;goto B5f6c56;
case 0x5f6c58:goto L5f6c58;
case 0x5f6c5e:c.instructions+=2;goto B5f6c5e;
case 0x5f6c64:c.instructions+=1;goto B5f6c64;
case 0x5f6c66:goto L5f6c66;
case 0x5f6c6c:goto L5f6c6c;
case 0x5f6c6f:c.instructions+=4;goto B5f6c6f;
case 0x5f6c75:c.instructions+=3;goto B5f6c75;
case 0x5f6c77:c.instructions+=2;goto B5f6c77;
case 0x5f6c7a:c.instructions+=1;goto B5f6c7a;
case 0x5f6c7c:goto L5f6c7c;
case 0x5f6c81:goto L5f6c81;
case 0x5f6c85:c.instructions+=1;goto B5f6c85;
case 0x5f6c87:goto L5f6c87;
case 0x5f6c8a:c.instructions+=2;goto B5f6c8a;
case 0x5f6c8d:c.instructions+=1;goto B5f6c8d;
case 0x5f6c92:goto L5f6c92;
case 0x5f6c95:c.instructions+=2;goto B5f6c95;
case 0x5f6c97:c.instructions+=1;goto B5f6c97;
case 0x5f6c99:goto L5f6c99;
case 0x5f6c9b:c.instructions+=2;goto B5f6c9b;
case 0x5f6c9d:c.instructions+=1;goto B5f6c9d;
case 0x5f6ca0:goto L5f6ca0;
case 0x5f6ca4:c.instructions+=1;goto B5f6ca4;
case 0x5f6ca6:goto L5f6ca6;
case 0x5f6ca9:c.instructions+=2;goto B5f6ca9;
case 0x5f6cab:c.instructions+=1;goto B5f6cab;
case 0x5f6cad:goto L5f6cad;
case 0x5f6caf:c.instructions+=1;goto B5f6caf;
case 0x5f6cb2:goto L5f6cb2;
case 0x5f6cb4:c.instructions+=1;goto B5f6cb4;
case 0x5f6cb6:goto L5f6cb6;
case 0x5f6cb9:c.instructions+=4;goto B5f6cb9;
case 0x5f6cbc:c.instructions+=3;goto B5f6cbc;
case 0x5f6cbe:c.instructions+=2;goto B5f6cbe;
case 0x5f6cbf:c.instructions+=1;goto B5f6cbf;
case 0x5f6cc2:goto L5f6cc2;
case 0x5f6cc4:c.instructions+=1;goto B5f6cc4;
case 0x5f6cc9:goto L5f6cc9;
case 0x5f6cca:c.instructions+=1;goto B5f6cca;
case 0x5f6cd0:goto L5f6cd0;
case 0x5f6cd1:c.instructions+=9;goto B5f6cd1;
case 0x5f6cd2:c.instructions+=8;goto B5f6cd2;
case 0x5f6cd3:c.instructions+=7;goto B5f6cd3;
case 0x5f6cd5:c.instructions+=6;goto B5f6cd5;
case 0x5f6cd7:c.instructions+=5;goto B5f6cd7;
case 0x5f6cda:c.instructions+=4;goto B5f6cda;
case 0x5f6ce0:c.instructions+=3;goto B5f6ce0;
case 0x5f6ce1:c.instructions+=2;goto B5f6ce1;
case 0x5f6ce3:c.instructions+=1;goto B5f6ce3;
case 0x5f6ce8:goto L5f6ce8;
case 0x5f6ceb:c.instructions+=6;goto B5f6ceb;
case 0x5f6cf1:c.instructions+=5;goto B5f6cf1;
case 0x5f6cf3:c.instructions+=4;goto B5f6cf3;
case 0x5f6cf6:c.instructions+=3;goto B5f6cf6;
case 0x5f6cf8:c.instructions+=2;goto B5f6cf8;
case 0x5f6cfc:c.instructions+=1;goto B5f6cfc;
case 0x5f6cfe:goto L5f6cfe;
case 0x5f6d00:c.instructions+=2;goto B5f6d00;
case 0x5f6d06:c.instructions+=1;goto B5f6d06;
case 0x5f6d08:goto L5f6d08;
case 0x5f6d09:c.instructions+=3;goto B5f6d09;
case 0x5f6d0c:c.instructions+=2;goto B5f6d0c;
case 0x5f6d0e:c.instructions+=1;goto B5f6d0e;
case 0x5f6d10:goto L5f6d10;
case 0x5f6d12:c.instructions+=3;goto B5f6d12;
case 0x5f6d13:c.instructions+=2;goto B5f6d13;
case 0x5f6d15:c.instructions+=1;goto B5f6d15;
case 0x5f6d1a:goto L5f6d1a;
case 0x5f6d1c:c.instructions+=3;goto B5f6d1c;
case 0x5f6d1d:c.instructions+=2;goto B5f6d1d;
case 0x5f6d1f:c.instructions+=1;goto B5f6d1f;
case 0x5f6d24:goto L5f6d24;
case 0x5f6d25:c.instructions+=2;goto B5f6d25;
case 0x5f6d28:c.instructions+=1;goto B5f6d28;
case 0x5f6d2a:goto L5f6d2a;
case 0x5f6d2b:c.instructions+=1;goto B5f6d2b;
case 0x5f6d2d:goto L5f6d2d;
case 0x5f6d2f:c.instructions+=1;goto B5f6d2f;
case 0x5f6d34:goto L5f6d34;
case 0x5f6d37:c.instructions+=2;goto B5f6d37;
case 0x5f6d39:c.instructions+=1;goto B5f6d39;
case 0x5f6d3b:goto L5f6d3b;
case 0x5f6d3f:c.instructions+=4;goto B5f6d3f;
case 0x5f6d41:c.instructions+=3;goto B5f6d41;
case 0x5f6d42:c.instructions+=2;goto B5f6d42;
case 0x5f6d44:c.instructions+=1;goto B5f6d44;
case 0x5f6d47:goto L5f6d47;
case 0x5f6d48:c.instructions+=3;goto B5f6d48;
case 0x5f6d49:c.instructions+=2;goto B5f6d49;
case 0x5f6d4a:c.instructions+=1;goto B5f6d4a;
case 0x5f6d50:goto L5f6d50;
case 0x5f6d51:c.instructions+=8;goto B5f6d51;
case 0x5f6d53:c.instructions+=7;goto B5f6d53;
case 0x5f6d56:c.instructions+=6;goto B5f6d56;
case 0x5f6d5d:c.instructions+=5;goto B5f6d5d;
case 0x5f6d64:c.instructions+=4;goto B5f6d64;
case 0x5f6d67:c.instructions+=3;goto B5f6d67;
case 0x5f6d6a:c.instructions+=2;goto B5f6d6a;
case 0x5f6d70:c.instructions+=1;goto B5f6d70;
case 0x5f6d72:goto L5f6d72;
case 0x5f6d74:c.instructions+=1;goto B5f6d74;
case 0x5f6d76:goto L5f6d76;
case 0x5f6d77:c.instructions+=2;goto B5f6d77;
case 0x5f6d79:c.instructions+=1;goto B5f6d79;
case 0x5f6d7e:goto L5f6d7e;
case 0x5f6d84:c.instructions+=2;goto B5f6d84;
case 0x5f6d86:c.instructions+=1;goto B5f6d86;
case 0x5f6d88:goto L5f6d88;
case 0x5f6d8b:c.instructions+=6;goto B5f6d8b;
case 0x5f6d8d:c.instructions+=5;goto B5f6d8d;
case 0x5f6d8f:c.instructions+=4;goto B5f6d8f;
case 0x5f6d95:c.instructions+=3;goto B5f6d95;
case 0x5f6d97:c.instructions+=2;goto B5f6d97;
case 0x5f6d99:c.instructions+=1;goto B5f6d99;
case 0x5f6d9c:goto L5f6d9c;
case 0x5f6d9e:goto L5f6d9e;
case 0x5f6da0:c.instructions+=1;goto B5f6da0;
case 0x5f6da2:goto L5f6da2;
case 0x5f6da4:c.instructions+=1;goto B5f6da4;
case 0x5f6da6:goto L5f6da6;
case 0x5f6da9:c.instructions+=1;goto B5f6da9;
case 0x5f6dab:goto L5f6dab;
case 0x5f6dad:c.instructions+=1;goto B5f6dad;
case 0x5f6daf:goto L5f6daf;
case 0x5f6db2:c.instructions+=1;goto B5f6db2;
case 0x5f6db4:goto L5f6db4;
case 0x5f6db6:goto L5f6db6;
case 0x5f6db8:c.instructions+=1;goto B5f6db8;
case 0x5f6dbd:goto L5f6dbd;
case 0x5f6dbe:c.instructions+=1;goto B5f6dbe;
case 0x5f6dc3:goto L5f6dc3;
case 0x5f6dc6:c.instructions+=3;goto B5f6dc6;
case 0x5f6dc7:c.instructions+=2;goto B5f6dc7;
case 0x5f6dc9:c.instructions+=1;goto B5f6dc9;
case 0x5f6dce:goto L5f6dce;
case 0x5f6dd1:c.instructions+=2;goto B5f6dd1;
case 0x5f6dd5:c.instructions+=1;goto B5f6dd5;
case 0x5f6dd7:goto L5f6dd7;
case 0x5f6ddd:c.instructions+=2;goto B5f6ddd;
case 0x5f6ddf:c.instructions+=1;goto B5f6ddf;
case 0x5f6de1:goto L5f6de1;
case 0x5f6de8:c.instructions+=3;goto B5f6de8;
case 0x5f6deb:c.instructions+=2;goto B5f6deb;
case 0x5f6dee:c.instructions+=1;goto B5f6dee;
case 0x5f6df0:goto L5f6df0;
case 0x5f6df6:c.instructions+=2;goto B5f6df6;
case 0x5f6df8:c.instructions+=1;goto B5f6df8;
case 0x5f6dfa:goto L5f6dfa;
case 0x5f6dff:c.instructions+=1;goto B5f6dff;
case 0x5f6e01:goto L5f6e01;
case 0x5f6e05:goto L5f6e05;
case 0x5f6e07:c.instructions+=2;goto B5f6e07;
case 0x5f6e08:c.instructions+=1;goto B5f6e08;
case 0x5f6e0b:goto L5f6e0b;
case 0x5f6e0e:c.instructions+=3;goto B5f6e0e;
case 0x5f6e10:c.instructions+=2;goto B5f6e10;
case 0x5f6e11:c.instructions+=1;goto B5f6e11;
case 0x5f6e13:goto L5f6e13;
case 0x5f6e15:c.instructions+=1;goto B5f6e15;
case 0x5f6e1a:goto L5f6e1a;
case 0x5f6e20:goto L5f6e20;
case 0x5f6e21:c.instructions+=5;goto B5f6e21;
case 0x5f6e23:c.instructions+=4;goto B5f6e23;
case 0x5f6e26:c.instructions+=3;goto B5f6e26;
case 0x5f6e28:c.instructions+=2;goto B5f6e28;
case 0x5f6e2f:c.instructions+=1;goto B5f6e2f;
case 0x5f6e31:goto L5f6e31;
case 0x5f6e36:goto L5f6e36;
case 0x5f6e38:c.instructions+=2;goto B5f6e38;
case 0x5f6e3a:c.instructions+=1;goto B5f6e3a;
case 0x5f6e3f:goto L5f6e3f;
case 0x5f6e45:c.instructions+=9;goto B5f6e45;
case 0x5f6e4b:c.instructions+=8;goto B5f6e4b;
case 0x5f6e50:c.instructions+=7;goto B5f6e50;
case 0x5f6e52:c.instructions+=6;goto B5f6e52;
case 0x5f6e54:c.instructions+=5;goto B5f6e54;
case 0x5f6e57:c.instructions+=4;goto B5f6e57;
case 0x5f6e59:c.instructions+=3;goto B5f6e59;
case 0x5f6e5c:c.instructions+=2;goto B5f6e5c;
case 0x5f6e5f:c.instructions+=1;goto B5f6e5f;
case 0x5f6e64:goto L5f6e64;
case 0x5f6e65:c.instructions+=1;goto B5f6e65;
case 0x5f6e70:goto L5f6e70;
case 0x5f6e71:c.instructions+=17;goto B5f6e71;
case 0x5f6e73:c.instructions+=16;goto B5f6e73;
case 0x5f6e76:c.instructions+=15;goto B5f6e76;
case 0x5f6e78:c.instructions+=14;goto B5f6e78;
case 0x5f6e7d:c.instructions+=13;goto B5f6e7d;
case 0x5f6e83:c.instructions+=12;goto B5f6e83;
case 0x5f6e84:c.instructions+=11;goto B5f6e84;
case 0x5f6e8b:c.instructions+=10;goto B5f6e8b;
case 0x5f6e91:c.instructions+=9;goto B5f6e91;
case 0x5f6e92:c.instructions+=8;goto B5f6e92;
case 0x5f6e93:c.instructions+=7;goto B5f6e93;
case 0x5f6e95:c.instructions+=6;goto B5f6e95;
case 0x5f6e96:c.instructions+=5;goto B5f6e96;
case 0x5f6e97:c.instructions+=4;goto B5f6e97;
case 0x5f6e99:c.instructions+=3;goto B5f6e99;
case 0x5f6e9a:c.instructions+=2;goto B5f6e9a;
case 0x5f6e9d:c.instructions+=1;goto B5f6e9d;
case 0x5f6ea2:goto L5f6ea2;
case 0x5f6ea4:goto L5f6ea4;
case 0x5f6ea6:c.instructions+=2;goto B5f6ea6;
case 0x5f6eab:c.instructions+=1;goto B5f6eab;
case 0x5f6eb2:goto L5f6eb2;
case 0x5f6eb4:goto L5f6eb4;
case 0x5f6eb9:c.instructions+=7;goto B5f6eb9;
case 0x5f6ebb:c.instructions+=6;goto B5f6ebb;
case 0x5f6ec0:c.instructions+=5;goto B5f6ec0;
case 0x5f6ec5:c.instructions+=4;goto B5f6ec5;
case 0x5f6ec6:c.instructions+=3;goto B5f6ec6;
case 0x5f6ecb:c.instructions+=2;goto B5f6ecb;
case 0x5f6ecf:c.instructions+=1;goto B5f6ecf;
case 0x5f6ed4:goto L5f6ed4;
case 0x5f6ed6:c.instructions+=2;goto B5f6ed6;
case 0x5f6ed8:c.instructions+=1;goto B5f6ed8;
case 0x5f6ede:goto L5f6ede;
case 0x5f6ee2:c.instructions+=1;goto B5f6ee2;
case 0x5f6ee7:goto L5f6ee7;
case 0x5f6ef2:c.instructions+=4;goto B5f6ef2;
case 0x5f6efa:c.instructions+=3;goto B5f6efa;
case 0x5f6f02:c.instructions+=2;goto B5f6f02;
case 0x5f6f04:c.instructions+=1;goto B5f6f04;
case 0x5f6f06:goto L5f6f06;
case 0x5f6f09:c.instructions+=3;goto B5f6f09;
case 0x5f6f0f:c.instructions+=2;goto B5f6f0f;
case 0x5f6f16:c.instructions+=1;goto B5f6f16;
case 0x5f6f18:goto L5f6f18;
case 0x5f6f1a:goto L5f6f1a;
case 0x5f6f1d:c.instructions+=7;goto B5f6f1d;
case 0x5f6f1f:c.instructions+=6;goto B5f6f1f;
case 0x5f6f22:c.instructions+=5;goto B5f6f22;
case 0x5f6f25:c.instructions+=4;goto B5f6f25;
case 0x5f6f26:c.instructions+=3;goto B5f6f26;
case 0x5f6f2a:c.instructions+=2;goto B5f6f2a;
case 0x5f6f2e:c.instructions+=1;goto B5f6f2e;
case 0x5f6f33:goto L5f6f33;
case 0x5f6f37:c.instructions+=2;goto B5f6f37;
case 0x5f6f39:c.instructions+=1;goto B5f6f39;
case 0x5f6f3b:goto L5f6f3b;
case 0x5f6f3f:c.instructions+=2;goto B5f6f3f;
case 0x5f6f41:c.instructions+=1;goto B5f6f41;
case 0x5f6f47:goto L5f6f47;
case 0x5f6f4b:c.instructions+=14;goto B5f6f4b;
case 0x5f6f4f:c.instructions+=13;goto B5f6f4f;
case 0x5f6f52:c.instructions+=12;goto B5f6f52;
case 0x5f6f56:c.instructions+=11;goto B5f6f56;
case 0x5f6f59:c.instructions+=10;goto B5f6f59;
case 0x5f6f5d:c.instructions+=9;goto B5f6f5d;
case 0x5f6f61:c.instructions+=8;goto B5f6f61;
case 0x5f6f67:c.instructions+=7;goto B5f6f67;
case 0x5f6f6b:c.instructions+=6;goto B5f6f6b;
case 0x5f6f71:c.instructions+=5;goto B5f6f71;
case 0x5f6f75:c.instructions+=4;goto B5f6f75;
case 0x5f6f77:c.instructions+=3;goto B5f6f77;
case 0x5f6f79:c.instructions+=2;goto B5f6f79;
case 0x5f6f7c:c.instructions+=1;goto B5f6f7c;
case 0x5f6f7e:goto L5f6f7e;
case 0x5f6f80:c.instructions+=1;goto B5f6f80;
case 0x5f6f84:goto L5f6f84;
case 0x5f6f89:c.instructions+=9;goto B5f6f89;
case 0x5f6f8c:c.instructions+=8;goto B5f6f8c;
case 0x5f6f8e:c.instructions+=7;goto B5f6f8e;
case 0x5f6f92:c.instructions+=6;goto B5f6f92;
case 0x5f6f96:c.instructions+=5;goto B5f6f96;
case 0x5f6f9c:c.instructions+=4;goto B5f6f9c;
case 0x5f6f9e:c.instructions+=3;goto B5f6f9e;
case 0x5f6fa2:c.instructions+=2;goto B5f6fa2;
case 0x5f6fa4:c.instructions+=1;goto B5f6fa4;
case 0x5f6fa6:goto L5f6fa6;
case 0x5f6faa:c.instructions+=6;goto B5f6faa;
case 0x5f6fab:c.instructions+=5;goto B5f6fab;
case 0x5f6fac:c.instructions+=4;goto B5f6fac;
case 0x5f6fb0:c.instructions+=3;goto B5f6fb0;
case 0x5f6fb1:c.instructions+=2;goto B5f6fb1;
case 0x5f6fb3:c.instructions+=1;goto B5f6fb3;
case 0x5f6fb8:goto L5f6fb8;
case 0x5f6fba:goto L5f6fba;
case 0x5f6fbe:c.instructions+=6;goto B5f6fbe;
case 0x5f6fbf:c.instructions+=5;goto B5f6fbf;
case 0x5f6fc1:c.instructions+=4;goto B5f6fc1;
case 0x5f6fc5:c.instructions+=3;goto B5f6fc5;
case 0x5f6fc6:c.instructions+=2;goto B5f6fc6;
case 0x5f6fc8:c.instructions+=1;goto B5f6fc8;
case 0x5f6fcd:goto L5f6fcd;
case 0x5f6fd1:c.instructions+=13;goto B5f6fd1;
case 0x5f6fd5:c.instructions+=12;goto B5f6fd5;
case 0x5f6fd8:c.instructions+=11;goto B5f6fd8;
case 0x5f6fdc:c.instructions+=10;goto B5f6fdc;
case 0x5f6fdf:c.instructions+=9;goto B5f6fdf;
case 0x5f6fe3:c.instructions+=8;goto B5f6fe3;
case 0x5f6fe7:c.instructions+=7;goto B5f6fe7;
case 0x5f6fed:c.instructions+=6;goto B5f6fed;
case 0x5f6ff1:c.instructions+=5;goto B5f6ff1;
case 0x5f6ff7:c.instructions+=4;goto B5f6ff7;
case 0x5f6ffb:c.instructions+=3;goto B5f6ffb;
case 0x5f6ffd:c.instructions+=2;goto B5f6ffd;
case 0x5f6fff:c.instructions+=1;goto B5f6fff;
default:missing_instruction(c.pc);}
B5f6001:L5f6001:{c.instructions+=6;NFSU2_TR(0x5f6001);
{u32 ea_=u32(u32(8017452u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f6007:{NFSU2_TR(0x5f6007);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f6009:{NFSU2_TR(0x5f6009);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5f600b:{NFSU2_TR(0x5f600b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f600d:{NFSU2_TR(0x5f600d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f6010:{NFSU2_TR(0x5f6010);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f607d;}}
}
B5f6012:L5f6012:{c.instructions+=10;NFSU2_TR(0x5f6012);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f6018:{NFSU2_TR(0x5f6018);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f601c:{NFSU2_TR(0x5f601c);
{u32 ea_=u32(u32(8019252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f6022:{NFSU2_TR(0x5f6022);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6024:{NFSU2_TR(0x5f6024);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6025:{NFSU2_TR(0x5f6025);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6026:{NFSU2_TR(0x5f6026);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f6029:{NFSU2_TR(0x5f6029);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f602b:{NFSU2_TR(0x5f602b);
__builtin_memmove((R+4),(R+24),4);
}
B5f602d:{NFSU2_TR(0x5f602d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6032ull));
TAIL_STATIC(0x61fb00u,61f);
}
B5f6032:L5f6032:{c.instructions+=4;NFSU2_TR(0x5f6032);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x968ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f6038:{NFSU2_TR(0x5f6038);
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
B5f603a:{NFSU2_TR(0x5f603a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x924ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f6041:{NFSU2_TR(0x5f6041);
if(r1(R+518)){{goto L5f607d;}}
}
B5f6043:L5f6043:{c.instructions+=5;NFSU2_TR(0x5f6043);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f6045:{NFSU2_TR(0x5f6045);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6047:{NFSU2_TR(0x5f6047);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6049:{NFSU2_TR(0x5f6049);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f604b:{NFSU2_TR(0x5f604b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f604eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f604e:L5f604e:{c.instructions+=1;NFSU2_TR(0x5f604e);
{goto L5f607d;}
}
B5f6050:L5f6050:{c.instructions+=2;NFSU2_TR(0x5f6050);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f6053:{NFSU2_TR(0x5f6053);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5f605d;}}
}
B5f6055:L5f6055:{c.instructions+=2;NFSU2_TR(0x5f6055);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f605b:{NFSU2_TR(0x5f605b);
{goto L5f6063;}
}
B5f605d:L5f605d:{c.instructions+=1;NFSU2_TR(0x5f605d);
{u32 ea_=u32(r4(R+24)+u32(1088u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6063:L5f6063:{c.instructions+=7;NFSU2_TR(0x5f6063);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f6065:{NFSU2_TR(0x5f6065);
{u32 ea_=u32(u32(8017456u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f606b:{NFSU2_TR(0x5f606b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f606d:{NFSU2_TR(0x5f606d);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5f606f:{NFSU2_TR(0x5f606f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f6071:{NFSU2_TR(0x5f6071);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f6074:{NFSU2_TR(0x5f6074);
if(r1(R+514)){{goto L5f607d;}}
}
B5f6076:L5f6076:{c.instructions+=1;NFSU2_TR(0x5f6076);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x924ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f607d:L5f607d:{c.instructions+=2;NFSU2_TR(0x5f607d);
__builtin_memmove((R+4),(R+28),4);
}
B5f607f:{NFSU2_TR(0x5f607f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6084ull));
TAIL_STATIC(0x59fa30u,59f);
}
B5f6084:L5f6084:{c.instructions+=2;NFSU2_TR(0x5f6084);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f6086:{NFSU2_TR(0x5f6086);
if(r1(R+518)){{goto L5f60b5;}}
}
B5f6088:L5f6088:{c.instructions+=4;NFSU2_TR(0x5f6088);
__builtin_memmove((R+4),gp(0x890118),4);
}
B5f608e:{NFSU2_TR(0x5f608e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f6090:{NFSU2_TR(0x5f6090);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f6092:{NFSU2_TR(0x5f6092);
if(r1(R+518)){{goto L5f60a3;}}
}
B5f6094:L5f6094:{c.instructions+=2;NFSU2_TR(0x5f6094);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f6097:{NFSU2_TR(0x5f6097);
if(r1(R+518)){{goto L5f60a3;}}
}
B5f6099:L5f6099:{c.instructions+=2;NFSU2_TR(0x5f6099);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f609c:{NFSU2_TR(0x5f609c);
if(r1(R+518)){{goto L5f60a3;}}
}
B5f609e:L5f609e:{c.instructions+=2;NFSU2_TR(0x5f609e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f60a1:{NFSU2_TR(0x5f60a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f60b5;}}
}
B5f60a3:L5f60a3:{c.instructions+=6;NFSU2_TR(0x5f60a3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f60a5:{NFSU2_TR(0x5f60a5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f60a7:{NFSU2_TR(0x5f60a7);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f60ac:{NFSU2_TR(0x5f60ac);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f60ae:{NFSU2_TR(0x5f60ae);
__builtin_memmove((R+4),(R+24),4);
}
B5f60b0:{NFSU2_TR(0x5f60b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f60b5ull));
TAIL_STATIC(0x61fb00u,61f);
}
B5f60b5:L5f60b5:{c.instructions+=3;NFSU2_TR(0x5f60b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x95dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f60bb:{NFSU2_TR(0x5f60bb);
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
B5f60bd:{NFSU2_TR(0x5f60bd);
if(r1(R+518)){{goto L5f6173;}}
}
B5f60c3:L5f60c3:{c.instructions+=3;NFSU2_TR(0x5f60c3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5f60c5:{NFSU2_TR(0x5f60c5);
w4(R+28,u32(0x50000ull));
}
B5f60ca:{NFSU2_TR(0x5f60ca);
__builtin_memmove((R+12),(R+12),4);
}
B5f60d0:L5f60d0:{c.instructions+=3;NFSU2_TR(0x5f60d0);
u8 U[13];
w4(U+0,u32(u32(u32(0x390ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5f60d7:{NFSU2_TR(0x5f60d7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f60d9:{NFSU2_TR(0x5f60d9);
if(r1(R+518)){{goto L5f6160;}}
}
B5f60df:L5f60df:{c.instructions+=6;NFSU2_TR(0x5f60df);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x95cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5f60e6:{NFSU2_TR(0x5f60e6);
w4(R+0,u32(0x1ull));
}
B5f60eb:{NFSU2_TR(0x5f60eb);
__builtin_memmove((R+4),(R+12),4);
}
B5f60ed:{NFSU2_TR(0x5f60ed);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B5f60ef:{NFSU2_TR(0x5f60ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f60f1:{NFSU2_TR(0x5f60f1);
if(r1(R+518)){{goto L5f6160;}}
}
B5f60f3:L5f60f3:{c.instructions+=11;NFSU2_TR(0x5f60f3);
{u32 ea_=u32(r4(R+24)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f60f9:{NFSU2_TR(0x5f60f9);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f60ff:{NFSU2_TR(0x5f60ff);
{u32 ea_=u32(u32(8017408u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f6105:{NFSU2_TR(0x5f6105);
{u32 ea_=u32(u32(8017412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f610b:{NFSU2_TR(0x5f610b);
{u32 ea_=u32(u32(8017408u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f6111:{NFSU2_TR(0x5f6111);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5f6113:{NFSU2_TR(0x5f6113);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f6117:{NFSU2_TR(0x5f6117);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f611d:{NFSU2_TR(0x5f611d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f611f:{NFSU2_TR(0x5f611f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f6122:{NFSU2_TR(0x5f6122);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6145;}}
}
B5f6124:L5f6124:{c.instructions+=6;NFSU2_TR(0x5f6124);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6128:{NFSU2_TR(0x5f6128);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f612e:{NFSU2_TR(0x5f612e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f6132:{NFSU2_TR(0x5f6132);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f6134:{NFSU2_TR(0x5f6134);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f6137:{NFSU2_TR(0x5f6137);
if(r1(R+514)){{goto L5f614b;}}
}
B5f6139:L5f6139:{c.instructions+=3;NFSU2_TR(0x5f6139);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f613b:{NFSU2_TR(0x5f613b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f6143:{NFSU2_TR(0x5f6143);
{goto L5f614f;}
}
B5f6145:L5f6145:{c.instructions+=1;NFSU2_TR(0x5f6145);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f614b:L5f614b:{c.instructions+=1;NFSU2_TR(0x5f614b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f614f:L5f614f:{c.instructions+=7;NFSU2_TR(0x5f614f);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f6153:{NFSU2_TR(0x5f6153);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6155:{NFSU2_TR(0x5f6155);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6156:{NFSU2_TR(0x5f6156);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6157:{NFSU2_TR(0x5f6157);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6159:{NFSU2_TR(0x5f6159);
__builtin_memmove((R+4),(R+24),4);
}
B5f615b:{NFSU2_TR(0x5f615b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6160ull));
TAIL_STATIC(0x61fb00u,61f);
}
B5f6160:L5f6160:{c.instructions+=4;NFSU2_TR(0x5f6160);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10000ull))));
}
B5f6166:{NFSU2_TR(0x5f6166);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5f6167:{NFSU2_TR(0x5f6167);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x90000ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x90000ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x90000ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f616d:{NFSU2_TR(0x5f616d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f60d0u);}goto L5f60d0;}}
}
B5f6173:L5f6173:{c.instructions+=9;NFSU2_TR(0x5f6173);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f6179:{NFSU2_TR(0x5f6179);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f617a:{NFSU2_TR(0x5f617a);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f6180:{NFSU2_TR(0x5f6180);
{u32 ea_=u32(r4(R+24)+u32(2476u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f6186:{NFSU2_TR(0x5f6186);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f6187:{NFSU2_TR(0x5f6187);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f6188:{NFSU2_TR(0x5f6188);
__builtin_memmove((R+16),(R+20),4);
}
B5f618a:{NFSU2_TR(0x5f618a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f618b:{NFSU2_TR(0x5f618b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f6190:L5f6190:{c.instructions+=6;NFSU2_TR(0x5f6190);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6191:{NFSU2_TR(0x5f6191);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6192:{NFSU2_TR(0x5f6192);
__builtin_memmove((R+24),(R+4),4);
}
B5f6194:{NFSU2_TR(0x5f6194);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f6197:{NFSU2_TR(0x5f6197);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5f619b:{NFSU2_TR(0x5f619b);
if(r1(R+518)){{goto L5f62a8;}}
}
B5f61a1:L5f61a1:{c.instructions+=3;NFSU2_TR(0x5f61a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x925ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f61a7:{NFSU2_TR(0x5f61a7);
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
B5f61a9:{NFSU2_TR(0x5f61a9);
if(r1(R+518)){{goto L5f629a;}}
}
B5f61af:L5f61af:{c.instructions+=8;NFSU2_TR(0x5f61af);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f61b1:{NFSU2_TR(0x5f61b1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f61b3:{NFSU2_TR(0x5f61b3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f61b5:{NFSU2_TR(0x5f61b5);
u8 U[4];
w4(U+0,u32(0x3f000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f61ba:{NFSU2_TR(0x5f61ba);
u8 U[4];
w4(U+0,u32(0x3e800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f61bf:{NFSU2_TR(0x5f61bf);
u8 U[4];
w4(U+0,u32(0x3f000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f61c4:{NFSU2_TR(0x5f61c4);
__builtin_memmove((R+4),(R+24),4);
}
B5f61c6:{NFSU2_TR(0x5f61c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f61cbull));
TAIL_STATIC(0x5ec160u,5ec);
}
B5f61cb:L5f61cb:{c.instructions+=12;NFSU2_TR(0x5f61cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x92cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f61d1:{NFSU2_TR(0x5f61d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x925ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f61d8:{NFSU2_TR(0x5f61d8);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5f61de:{NFSU2_TR(0x5f61de);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B5f61e0:{NFSU2_TR(0x5f61e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f61e4:{NFSU2_TR(0x5f61e4);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f61e8:{NFSU2_TR(0x5f61e8);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B5f61ea:{NFSU2_TR(0x5f61ea);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f61f0:{NFSU2_TR(0x5f61f0);
{u32 ea_=u32(r4(R+24)+u32(2352u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f61f6:{NFSU2_TR(0x5f61f6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f61f8:{NFSU2_TR(0x5f61f8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f61fb:{NFSU2_TR(0x5f61fb);
if(r1(R+514)){{goto L5f6201;}}
}
B5f61fd:L5f61fd:{c.instructions+=2;NFSU2_TR(0x5f61fd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f61ff:{NFSU2_TR(0x5f61ff);
{goto L5f622c;}
}
B5f6201:L5f6201:{c.instructions+=5;NFSU2_TR(0x5f6201);
{u32 ea_=u32(r4(R+24)+u32(2352u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f6207:{NFSU2_TR(0x5f6207);
{u32 ea_=u32(r4(R+24)+u32(2352u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f620d:{NFSU2_TR(0x5f620d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f620f:{NFSU2_TR(0x5f620f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f6212:{NFSU2_TR(0x5f6212);
if(r1(R+514)){{goto L5f623a;}}
}
B5f6214:L5f6214:{c.instructions+=4;NFSU2_TR(0x5f6214);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x928ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f621a:{NFSU2_TR(0x5f621a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f621c:{NFSU2_TR(0x5f621c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f621e:{NFSU2_TR(0x5f621e);
if(r1(R+518)){{goto L5f624d;}}
}
B5f6220:L5f6220:{c.instructions+=4;NFSU2_TR(0x5f6220);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x926ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f6226:{NFSU2_TR(0x5f6226);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f6228:{NFSU2_TR(0x5f6228);
w1(R+4,u8(0x1ull));
}
B5f622a:{NFSU2_TR(0x5f622a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6251;}}
}
B5f622c:L5f622c:{c.instructions+=3;NFSU2_TR(0x5f622c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x93cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f6232:{NFSU2_TR(0x5f6232);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f6234:{NFSU2_TR(0x5f6234);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6251;}}
}
B5f6236:L5f6236:{c.instructions+=2;NFSU2_TR(0x5f6236);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f6238:{NFSU2_TR(0x5f6238);
{goto L5f6256;}
}
B5f623a:L5f623a:{c.instructions+=5;NFSU2_TR(0x5f623a);
{u32 ea_=u32(r4(R+24)+u32(2360u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f6240:{NFSU2_TR(0x5f6240);
{u32 ea_=u32(r4(R+24)+u32(2356u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f6246:{NFSU2_TR(0x5f6246);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f6248:{NFSU2_TR(0x5f6248);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f624b:{NFSU2_TR(0x5f624b);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f622cu);}goto L5f622c;}}
}
B5f624d:L5f624d:{c.instructions+=2;NFSU2_TR(0x5f624d);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B5f624f:{NFSU2_TR(0x5f624f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f622cu);}goto L5f622c;}
}
B5f6251:L5f6251:{c.instructions+=1;NFSU2_TR(0x5f6251);
w4(R+0,u32(0x1ull));
}
B5f6256:L5f6256:{c.instructions+=3;NFSU2_TR(0x5f6256);
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
B5f6258:{NFSU2_TR(0x5f6258);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x93dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f625e:{NFSU2_TR(0x5f625e);
if(r1(R+518)){{goto L5f6282;}}
}
B5f6260:L5f6260:{c.instructions+=3;NFSU2_TR(0x5f6260);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x927ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f6266:{NFSU2_TR(0x5f6266);
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
B5f6268:{NFSU2_TR(0x5f6268);
if(r1(R+518)){{goto L5f6282;}}
}
B5f626a:L5f626a:{c.instructions+=3;NFSU2_TR(0x5f626a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f626d:{NFSU2_TR(0x5f626d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f626f:{NFSU2_TR(0x5f626f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6272ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f6272:L5f6272:{c.instructions+=2;NFSU2_TR(0x5f6272);
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
B5f6274:{NFSU2_TR(0x5f6274);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f62a8;}}
}
B5f6276:L5f6276:{c.instructions+=5;NFSU2_TR(0x5f6276);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f6279:{NFSU2_TR(0x5f6279);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f627b:{NFSU2_TR(0x5f627b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f627c:{NFSU2_TR(0x5f627c);
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
B5f627f:{NFSU2_TR(0x5f627f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5f6282:L5f6282:{c.instructions+=3;NFSU2_TR(0x5f6282);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f6285:{NFSU2_TR(0x5f6285);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f6287:{NFSU2_TR(0x5f6287);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f628aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f628a:L5f628a:{c.instructions+=2;NFSU2_TR(0x5f628a);
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
B5f628c:{NFSU2_TR(0x5f628c);
if(r1(R+518)){{goto L5f62a8;}}
}
B5f628e:L5f628e:{c.instructions+=5;NFSU2_TR(0x5f628e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f6291:{NFSU2_TR(0x5f6291);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f6293:{NFSU2_TR(0x5f6293);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f6294:{NFSU2_TR(0x5f6294);
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
B5f6297:{NFSU2_TR(0x5f6297);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5f629a:L5f629a:{c.instructions+=2;NFSU2_TR(0x5f629a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x925ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f62a1:{NFSU2_TR(0x5f62a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x93dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f62a8:L5f62a8:{c.instructions+=3;NFSU2_TR(0x5f62a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f62a9:{NFSU2_TR(0x5f62a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f62aa:{NFSU2_TR(0x5f62aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f62b0:L5f62b0:{c.instructions+=4;NFSU2_TR(0x5f62b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f62b1:{NFSU2_TR(0x5f62b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f62b4:{NFSU2_TR(0x5f62b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f62b6:{NFSU2_TR(0x5f62b6);
if(r1(R+518)){{goto L5f62c0;}}
}
B5f62b8:L5f62b8:{c.instructions+=2;NFSU2_TR(0x5f62b8);
{u32 ea_=u32(r4(R+0)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f62be:{NFSU2_TR(0x5f62be);
{goto L5f62c6;}
}
B5f62c0:L5f62c0:{c.instructions+=1;NFSU2_TR(0x5f62c0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f62c6:L5f62c6:{c.instructions+=4;NFSU2_TR(0x5f62c6);
{u32 ea_=u32(u32(8017464u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f62cc:{NFSU2_TR(0x5f62cc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f62ce:{NFSU2_TR(0x5f62ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f62d1:{NFSU2_TR(0x5f62d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f62de;}}
}
B5f62d3:L5f62d3:{c.instructions+=2;NFSU2_TR(0x5f62d3);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5f62d8:{NFSU2_TR(0x5f62d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x948ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f62de:L5f62de:{c.instructions+=4;NFSU2_TR(0x5f62de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f62e1:{NFSU2_TR(0x5f62e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f62e4:{NFSU2_TR(0x5f62e4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f62e7:{NFSU2_TR(0x5f62e7);
if(r1(R+518)){{goto L5f6308;}}
}
B5f62e9:L5f62e9:{c.instructions+=2;NFSU2_TR(0x5f62e9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f62ec:{NFSU2_TR(0x5f62ec);
if(r1(R+518)){{goto L5f6308;}}
}
B5f62ee:L5f62ee:{c.instructions+=4;NFSU2_TR(0x5f62ee);
{u32 ea_=u32(u32(8017464u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f62f4:{NFSU2_TR(0x5f62f4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f62f6:{NFSU2_TR(0x5f62f6);
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
B5f62f9:{NFSU2_TR(0x5f62f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6341;}}
}
B5f62fb:L5f62fb:{c.instructions+=4;NFSU2_TR(0x5f62fb);
w4(R+0,u32(0x1ull));
}
B5f6300:{NFSU2_TR(0x5f6300);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x944ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f6306:{NFSU2_TR(0x5f6306);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f6307:{NFSU2_TR(0x5f6307);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f6308:L5f6308:{c.instructions+=4;NFSU2_TR(0x5f6308);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x948ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f630e:{NFSU2_TR(0x5f630e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f6310:{NFSU2_TR(0x5f6310);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f6312:{NFSU2_TR(0x5f6312);
if(r1(R+518)){{goto L5f6341;}}
}
B5f6314:L5f6314:{c.instructions+=2;NFSU2_TR(0x5f6314);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f6319:{NFSU2_TR(0x5f6319);
if(r1(R+518)){{goto L5f6341;}}
}
B5f631b:L5f631b:{c.instructions+=9;NFSU2_TR(0x5f631b);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5f6320:{NFSU2_TR(0x5f6320);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x948ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B5f6326:{NFSU2_TR(0x5f6326);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5f632a:{NFSU2_TR(0x5f632a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f632e:{NFSU2_TR(0x5f632e);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f6334:{NFSU2_TR(0x5f6334);
{u32 ea_=u32(u32(8017468u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f633a:{NFSU2_TR(0x5f633a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f633c:{NFSU2_TR(0x5f633c);
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
B5f633f:{NFSU2_TR(0x5f633f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f62fbu);}goto L5f62fb;}}
}
B5f6341:L5f6341:{c.instructions+=4;NFSU2_TR(0x5f6341);
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
B5f6343:{NFSU2_TR(0x5f6343);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x944ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f6349:{NFSU2_TR(0x5f6349);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f634a:{NFSU2_TR(0x5f634a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f6350:L5f6350:{c.instructions+=7;NFSU2_TR(0x5f6350);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5f6353:{NFSU2_TR(0x5f6353);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6354:{NFSU2_TR(0x5f6354);
__builtin_memmove((R+24),(R+4),4);
}
B5f6356:{NFSU2_TR(0x5f6356);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f6359:{NFSU2_TR(0x5f6359);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f635b:{NFSU2_TR(0x5f635b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f635e:{NFSU2_TR(0x5f635e);
if(r1(R+518)){{goto L5f672d;}}
}
B5f6364:L5f6364:{c.instructions+=2;NFSU2_TR(0x5f6364);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f6366:{NFSU2_TR(0x5f6366);
if(r1(R+518)){{goto L5f637d;}}
}
B5f6368:L5f6368:{c.instructions+=2;NFSU2_TR(0x5f6368);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5f636d:{NFSU2_TR(0x5f636d);
if(r1(R+518)){{goto L5f637d;}}
}
B5f636f:L5f636f:{c.instructions+=3;NFSU2_TR(0x5f636f);
__builtin_memmove((R+4),gp(0x89e7b0),4);
}
B5f6375:{NFSU2_TR(0x5f6375);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f6377:{NFSU2_TR(0x5f6377);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f672d;}}
}
B5f637d:L5f637d:{c.instructions+=12;NFSU2_TR(0x5f637d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f637e:{NFSU2_TR(0x5f637e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f637f:{NFSU2_TR(0x5f637f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f6382:{NFSU2_TR(0x5f6382);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f6385:{NFSU2_TR(0x5f6385);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5f6388:{NFSU2_TR(0x5f6388);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa68ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B5f638f:{NFSU2_TR(0x5f638f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f6395:{NFSU2_TR(0x5f6395);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f6397:{NFSU2_TR(0x5f6397);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B5f639a:{NFSU2_TR(0x5f639a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f639d:{NFSU2_TR(0x5f639d);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f63a1:{NFSU2_TR(0x5f63a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6460;}}
}
B5f63a7:L5f63a7:{c.instructions+=4;NFSU2_TR(0x5f63a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f63a9:{NFSU2_TR(0x5f63a9);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f63af:{NFSU2_TR(0x5f63af);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f63b5:{NFSU2_TR(0x5f63b5);
if(r1(R+518)){{goto L5f6405;}}
}
B5f63b7:L5f63b7:{c.instructions+=18;NFSU2_TR(0x5f63b7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5f63b9:{NFSU2_TR(0x5f63b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f63ba:{NFSU2_TR(0x5f63ba);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5f63bc:{NFSU2_TR(0x5f63bc);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5f63be:{NFSU2_TR(0x5f63be);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5f63c0:{NFSU2_TR(0x5f63c0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f63c2:{NFSU2_TR(0x5f63c2);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5f63c4:{NFSU2_TR(0x5f63c4);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5f63c6:{NFSU2_TR(0x5f63c6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f63c8:{NFSU2_TR(0x5f63c8);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f63ce:{NFSU2_TR(0x5f63ce);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5f63d0:{NFSU2_TR(0x5f63d0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f63d2:{NFSU2_TR(0x5f63d2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f63d4:{NFSU2_TR(0x5f63d4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f63d6:{NFSU2_TR(0x5f63d6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f63d9:{NFSU2_TR(0x5f63d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f63da:{NFSU2_TR(0x5f63da);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f63dc:{NFSU2_TR(0x5f63dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f63e1ull));
TAIL_STATIC(0x5727b0u,572);
}
B5f63e1:L5f63e1:{c.instructions+=3;NFSU2_TR(0x5f63e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5f63e4:{NFSU2_TR(0x5f63e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f63e7:{NFSU2_TR(0x5f63e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f63ecull));
TAIL_STATIC(0x59fa10u,59f);
}
B5f63ec:L5f63ec:{c.instructions+=7;NFSU2_TR(0x5f63ec);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5f63ee:{NFSU2_TR(0x5f63ee);
{u32 ea_=u32(r4(R+24)+u32(1072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f63f4:{NFSU2_TR(0x5f63f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f63f5:{NFSU2_TR(0x5f63f5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f63f8:{NFSU2_TR(0x5f63f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f63f9:{NFSU2_TR(0x5f63f9);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f63fb:{NFSU2_TR(0x5f63fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6400ull));
TAIL_STATIC(0x5727b0u,572);
}
B5f6400:L5f6400:{c.instructions+=2;NFSU2_TR(0x5f6400);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5f6403:{NFSU2_TR(0x5f6403);
{goto L5f6409;}
}
B5f6405:L5f6405:{c.instructions+=2;NFSU2_TR(0x5f6405);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f6407:{NFSU2_TR(0x5f6407);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f6409:L5f6409:{c.instructions+=3;NFSU2_TR(0x5f6409);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f640f:{NFSU2_TR(0x5f640f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f6411:{NFSU2_TR(0x5f6411);
if(r1(R+518)){{goto L5f6460;}}
}
B5f6413:L5f6413:{c.instructions+=3;NFSU2_TR(0x5f6413);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6419:{NFSU2_TR(0x5f6419);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5f641f:{NFSU2_TR(0x5f641f);
w4(R+4,u32(0x4ull));
}
B5f6424:L5f6424:{c.instructions+=14;NFSU2_TR(0x5f6424);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6426:{NFSU2_TR(0x5f6426);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5f6429:{NFSU2_TR(0x5f6429);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5f642a:{NFSU2_TR(0x5f642a);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f642d:{NFSU2_TR(0x5f642d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5f642f:{NFSU2_TR(0x5f642f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5f6431:{NFSU2_TR(0x5f6431);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5f6433:{NFSU2_TR(0x5f6433);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5f6435:{NFSU2_TR(0x5f6435);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f6437:{NFSU2_TR(0x5f6437);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5f6439:{NFSU2_TR(0x5f6439);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5f643b:{NFSU2_TR(0x5f643b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f643d:{NFSU2_TR(0x5f643d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f643f:{NFSU2_TR(0x5f643f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f6424u);}goto L5f6424;}}
}
B5f6441:L5f6441:{c.instructions+=2;NFSU2_TR(0x5f6441);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f6443:{NFSU2_TR(0x5f6443);
if(r1(R+518)){{goto L5f645e;}}
}
B5f6445:L5f6445:{c.instructions+=7;NFSU2_TR(0x5f6445);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f644b:{NFSU2_TR(0x5f644b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f644c:{NFSU2_TR(0x5f644c);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5f644e:{NFSU2_TR(0x5f644e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f6451:{NFSU2_TR(0x5f6451);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6452:{NFSU2_TR(0x5f6452);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6454:{NFSU2_TR(0x5f6454);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6459ull));
TAIL_STATIC(0x5727b0u,572);
}
B5f6459:L5f6459:{c.instructions+=2;NFSU2_TR(0x5f6459);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5f645c:{NFSU2_TR(0x5f645c);
{goto L5f6460;}
}
B5f645e:L5f645e:{c.instructions+=1;NFSU2_TR(0x5f645e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f6460:L5f6460:{c.instructions+=11;NFSU2_TR(0x5f6460);
{u32 ea_=u32(r4(R+24)+u32(864u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6466:{NFSU2_TR(0x5f6466);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f646c:{NFSU2_TR(0x5f646c);
{u32 ea_=u32(r4(R+24)+u32(868u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f6472:{NFSU2_TR(0x5f6472);
__builtin_memmove((R+8),(R+4),4);
}
B5f6474:{NFSU2_TR(0x5f6474);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6478:{NFSU2_TR(0x5f6478);
{u32 ea_=u32(r4(R+24)+u32(872u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f647e:{NFSU2_TR(0x5f647e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f647f:{NFSU2_TR(0x5f647f);
w4(R+4,u32(0x89e798ull));
}
B5f6484:{NFSU2_TR(0x5f6484);
{u32 ea_=u32(r4(R+24)+u32(876u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f648a:{NFSU2_TR(0x5f648a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f648e:{NFSU2_TR(0x5f648e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6493ull));
TAIL_STATIC(0x576790u,576);
}
B5f6493:L5f6493:{c.instructions+=4;NFSU2_TR(0x5f6493);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f6497:{NFSU2_TR(0x5f6497);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f6499:{NFSU2_TR(0x5f6499);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f649d:{NFSU2_TR(0x5f649d);
if(r1(R+518)){{goto L5f64af;}}
}
B5f649f:L5f649f:{c.instructions+=5;NFSU2_TR(0x5f649f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f64a3:{NFSU2_TR(0x5f64a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f64a4:{NFSU2_TR(0x5f64a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f64a5:{NFSU2_TR(0x5f64a5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f64a7:{NFSU2_TR(0x5f64a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f64acull));
TAIL_STATIC(0x5727b0u,572);
}
B5f64ac:L5f64ac:{c.instructions+=1;NFSU2_TR(0x5f64ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5f64af:L5f64af:{c.instructions+=6;NFSU2_TR(0x5f64af);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f64b1:{NFSU2_TR(0x5f64b1);
{u32 ea_=u32(r4(R+24)+u32(880u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f64b7:{NFSU2_TR(0x5f64b7);
{u32 ea_=u32(r4(R+24)+u32(884u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f64bd:{NFSU2_TR(0x5f64bd);
{u32 ea_=u32(r4(R+24)+u32(888u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f64c3:{NFSU2_TR(0x5f64c3);
{u32 ea_=u32(r4(R+24)+u32(892u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f64c9:{NFSU2_TR(0x5f64c9);
if(r1(R+518)){{goto L5f64e2;}}
}
B5f64cb:L5f64cb:{c.instructions+=6;NFSU2_TR(0x5f64cb);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f64d1:{NFSU2_TR(0x5f64d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f64d2:{NFSU2_TR(0x5f64d2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f64d5:{NFSU2_TR(0x5f64d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f64d6:{NFSU2_TR(0x5f64d6);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f64d8:{NFSU2_TR(0x5f64d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f64ddull));
TAIL_STATIC(0x5727b0u,572);
}
B5f64dd:L5f64dd:{c.instructions+=2;NFSU2_TR(0x5f64dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5f64e0:{NFSU2_TR(0x5f64e0);
{goto L5f64e4;}
}
B5f64e2:L5f64e2:{c.instructions+=1;NFSU2_TR(0x5f64e2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f64e4:L5f64e4:{c.instructions+=3;NFSU2_TR(0x5f64e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x95dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f64ea:{NFSU2_TR(0x5f64ea);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f64ec:{NFSU2_TR(0x5f64ec);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f6513;}}
}
B5f64ee:L5f64ee:{c.instructions+=1;NFSU2_TR(0x5f64ee);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5f64f0:L5f64f0:{c.instructions+=3;NFSU2_TR(0x5f64f0);
u8 U[13];
w4(U+0,u32(u32(u32(0x390ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5f64f7:{NFSU2_TR(0x5f64f7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f64f9:{NFSU2_TR(0x5f64f9);
if(r1(R+518)){{goto L5f650d;}}
}
B5f64fb:L5f64fb:{c.instructions+=5;NFSU2_TR(0x5f64fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x95cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5f6502:{NFSU2_TR(0x5f6502);
w4(R+0,u32(0x1ull));
}
B5f6507:{NFSU2_TR(0x5f6507);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B5f6509:{NFSU2_TR(0x5f6509);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f650b:{NFSU2_TR(0x5f650b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6513;}}
}
B5f650d:L5f650d:{c.instructions+=3;NFSU2_TR(0x5f650d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5f650e:{NFSU2_TR(0x5f650e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f6511:{NFSU2_TR(0x5f6511);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f64f0u);}goto L5f64f0;}}
}
B5f6513:L5f6513:{c.instructions+=7;NFSU2_TR(0x5f6513);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f6519:{NFSU2_TR(0x5f6519);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f651f:{NFSU2_TR(0x5f651f);
w4(R+0,u32(0x19ull));
}
B5f6524:{NFSU2_TR(0x5f6524);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f6526:{NFSU2_TR(0x5f6526);
__builtin_memmove((R+12),(R+518),1);
}
B5f6529:{NFSU2_TR(0x5f6529);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f652b:{NFSU2_TR(0x5f652b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6532;}}
}
B5f652d:L5f652d:{c.instructions+=2;NFSU2_TR(0x5f652d);
w1(R+12,u8(u32(r1(R+12))|u32(u8(0x2ull))));
}
B5f6530:{NFSU2_TR(0x5f6530);
{goto L5f6535;}
}
B5f6532:L5f6532:{c.instructions+=1;NFSU2_TR(0x5f6532);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0xfdull))));
}
B5f6535:L5f6535:{c.instructions+=2;NFSU2_TR(0x5f6535);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f653b:{NFSU2_TR(0x5f653b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6542;}}
}
B5f653d:L5f653d:{c.instructions+=2;NFSU2_TR(0x5f653d);
w1(R+12,u8(u32(r1(R+12))|u32(u8(0x4ull))));
}
B5f6540:{NFSU2_TR(0x5f6540);
{goto L5f6545;}
}
B5f6542:L5f6542:{c.instructions+=1;NFSU2_TR(0x5f6542);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0xfbull))));
}
B5f6545:L5f6545:{c.instructions+=2;NFSU2_TR(0x5f6545);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f654b:{NFSU2_TR(0x5f654b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6552;}}
}
B5f654d:L5f654d:{c.instructions+=2;NFSU2_TR(0x5f654d);
w1(R+12,u8(u32(r1(R+12))|u32(u8(0x8ull))));
}
B5f6550:{NFSU2_TR(0x5f6550);
{goto L5f6555;}
}
B5f6552:L5f6552:{c.instructions+=1;NFSU2_TR(0x5f6552);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0xf7ull))));
}
B5f6555:L5f6555:{c.instructions+=5;NFSU2_TR(0x5f6555);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5f655b:{NFSU2_TR(0x5f655b);
__builtin_memmove((R+4),(R+8),1);
}
B5f655d:{NFSU2_TR(0x5f655d);
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+12))));
}
B5f655f:{NFSU2_TR(0x5f655f);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5f6561:{NFSU2_TR(0x5f6561);
if(r1(R+518)){{goto L5f65b6;}}
}
B5f6563:L5f6563:{c.instructions+=5;NFSU2_TR(0x5f6563);
{u32 ea_=u32(r4(R+24)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6569:{NFSU2_TR(0x5f6569);
{u32 ea_=u32(u32(8017476u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f656f:{NFSU2_TR(0x5f656f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f6571:{NFSU2_TR(0x5f6571);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f6574:{NFSU2_TR(0x5f6574);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6591;}}
}
B5f6576:L5f6576:{c.instructions+=4;NFSU2_TR(0x5f6576);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+8))));
}
B5f6578:{NFSU2_TR(0x5f6578);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f657a:{NFSU2_TR(0x5f657a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f657d:{NFSU2_TR(0x5f657d);
if(r1(R+518)){{goto L5f65b6;}}
}
B5f657f:L5f657f:{c.instructions+=3;NFSU2_TR(0x5f657f);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f6583:{NFSU2_TR(0x5f6583);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f6585:{NFSU2_TR(0x5f6585);
if(r1(R+518)){{goto L5f65b6;}}
}
B5f6587:L5f6587:{c.instructions+=4;NFSU2_TR(0x5f6587);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f658c:{NFSU2_TR(0x5f658c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f658d:{NFSU2_TR(0x5f658d);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f658f:{NFSU2_TR(0x5f658f);
{goto L5f65ae;}
}
B5f6591:L5f6591:{c.instructions+=4;NFSU2_TR(0x5f6591);
{u32 ea_=u32(u32(8017472u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f6597:{NFSU2_TR(0x5f6597);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f6599:{NFSU2_TR(0x5f6599);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f659c:{NFSU2_TR(0x5f659c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f65b6;}}
}
B5f659e:L5f659e:{c.instructions+=3;NFSU2_TR(0x5f659e);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f65a2:{NFSU2_TR(0x5f65a2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f65a4:{NFSU2_TR(0x5f65a4);
if(r1(R+518)){{goto L5f65b6;}}
}
B5f65a6:L5f65a6:{c.instructions+=3;NFSU2_TR(0x5f65a6);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f65ab:{NFSU2_TR(0x5f65ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f65ac:{NFSU2_TR(0x5f65ac);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f65ae:L5f65ae:{c.instructions+=1;NFSU2_TR(0x5f65ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f65b3ull));
TAIL_STATIC(0x5727b0u,572);
}
B5f65b3:L5f65b3:{c.instructions+=1;NFSU2_TR(0x5f65b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5f65b6:L5f65b6:{c.instructions+=4;NFSU2_TR(0x5f65b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f65b9:{NFSU2_TR(0x5f65b9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f65bc:{NFSU2_TR(0x5f65bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9b0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f65c2:{NFSU2_TR(0x5f65c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6653;}}
}
B5f65c8:L5f65c8:{c.instructions+=7;NFSU2_TR(0x5f65c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f65cb:{NFSU2_TR(0x5f65cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f65ce:{NFSU2_TR(0x5f65ce);
{u32 ea_=u32(r4(R+0)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f65d1:{NFSU2_TR(0x5f65d1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f65d7:{NFSU2_TR(0x5f65d7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f65d9:{NFSU2_TR(0x5f65d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f65dc:{NFSU2_TR(0x5f65dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f65e2;}}
}
B5f65de:L5f65de:{c.instructions+=2;NFSU2_TR(0x5f65de);
__builtin_memmove((R+0),(R+4),4);
}
B5f65e0:{NFSU2_TR(0x5f65e0);
{goto L5f65e4;}
}
B5f65e2:L5f65e2:{c.instructions+=1;NFSU2_TR(0x5f65e2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f65e4:L5f65e4:{c.instructions+=4;NFSU2_TR(0x5f65e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f65e6:{NFSU2_TR(0x5f65e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5f65e9:{NFSU2_TR(0x5f65e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f65eb:{NFSU2_TR(0x5f65eb);
if(r1(R+518)){{goto L5f660e;}}
}
B5f65ed:L5f65ed:{c.instructions+=3;NFSU2_TR(0x5f65ed);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f65f1:{NFSU2_TR(0x5f65f1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f65f3:{NFSU2_TR(0x5f65f3);
if(r1(R+518)){{goto L5f66e0;}}
}
B5f65f9:L5f65f9:{c.instructions+=4;NFSU2_TR(0x5f65f9);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f65fe:{NFSU2_TR(0x5f65fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f65ff:{NFSU2_TR(0x5f65ff);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6601:{NFSU2_TR(0x5f6601);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6606ull));
TAIL_STATIC(0x5727b0u,572);
}
B5f6606:L5f6606:{c.instructions+=2;NFSU2_TR(0x5f6606);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5f6609:{NFSU2_TR(0x5f6609);
{goto L5f66e0;}
}
B5f660e:L5f660e:{c.instructions+=2;NFSU2_TR(0x5f660e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f6611:{NFSU2_TR(0x5f6611);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6653;}}
}
B5f6613:L5f6613:{c.instructions+=9;NFSU2_TR(0x5f6613);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f6616:{NFSU2_TR(0x5f6616);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f6619:{NFSU2_TR(0x5f6619);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f661f:{NFSU2_TR(0x5f661f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6623:{NFSU2_TR(0x5f6623);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6627:{NFSU2_TR(0x5f6627);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f662d:{NFSU2_TR(0x5f662d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f662f:{NFSU2_TR(0x5f662f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f6632:{NFSU2_TR(0x5f6632);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6653;}}
}
B5f6634:L5f6634:{c.instructions+=6;NFSU2_TR(0x5f6634);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6638:{NFSU2_TR(0x5f6638);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f663e:{NFSU2_TR(0x5f663e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f6642:{NFSU2_TR(0x5f6642);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f6644:{NFSU2_TR(0x5f6644);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f6647:{NFSU2_TR(0x5f6647);
if(r1(R+514)){{goto L5f6659;}}
}
B5f6649:L5f6649:{c.instructions+=3;NFSU2_TR(0x5f6649);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f664b:{NFSU2_TR(0x5f664b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6651:{NFSU2_TR(0x5f6651);
{goto L5f6659;}
}
B5f6653:L5f6653:{c.instructions+=1;NFSU2_TR(0x5f6653);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6659:L5f6659:{c.instructions+=4;NFSU2_TR(0x5f6659);
{u32 ea_=u32(u32(8372208u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f665f:{NFSU2_TR(0x5f665f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f6661:{NFSU2_TR(0x5f6661);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f6664:{NFSU2_TR(0x5f6664);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f66e0;}}
}
B5f6666:L5f6666:{c.instructions+=2;NFSU2_TR(0x5f6666);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f6669:{NFSU2_TR(0x5f6669);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f66ab;}}
}
B5f666b:L5f666b:{c.instructions+=9;NFSU2_TR(0x5f666b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f666e:{NFSU2_TR(0x5f666e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f6671:{NFSU2_TR(0x5f6671);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f6677:{NFSU2_TR(0x5f6677);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f667b:{NFSU2_TR(0x5f667b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f667f:{NFSU2_TR(0x5f667f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f6685:{NFSU2_TR(0x5f6685);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f6687:{NFSU2_TR(0x5f6687);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f668a:{NFSU2_TR(0x5f668a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f66ab;}}
}
B5f668c:L5f668c:{c.instructions+=6;NFSU2_TR(0x5f668c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6690:{NFSU2_TR(0x5f6690);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6696:{NFSU2_TR(0x5f6696);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f669a:{NFSU2_TR(0x5f669a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f669c:{NFSU2_TR(0x5f669c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f669f:{NFSU2_TR(0x5f669f);
if(r1(R+514)){{goto L5f66b1;}}
}
B5f66a1:L5f66a1:{c.instructions+=3;NFSU2_TR(0x5f66a1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f66a3:{NFSU2_TR(0x5f66a3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f66a9:{NFSU2_TR(0x5f66a9);
{goto L5f66b1;}
}
B5f66ab:L5f66ab:{c.instructions+=1;NFSU2_TR(0x5f66ab);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f66b1:L5f66b1:{c.instructions+=3;NFSU2_TR(0x5f66b1);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f66b5:{NFSU2_TR(0x5f66b5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f66b7:{NFSU2_TR(0x5f66b7);
if(r1(R+518)){{goto L5f66de;}}
}
B5f66b9:L5f66b9:{c.instructions+=9;NFSU2_TR(0x5f66b9);
{u32 ea_=u32(u32(8372208u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f66bf:{NFSU2_TR(0x5f66bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f66c0:{NFSU2_TR(0x5f66c0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f66c6:{NFSU2_TR(0x5f66c6);
{u32 ea_=u32(u32(8372208u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f66cc:{NFSU2_TR(0x5f66cc);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5f66ce:{NFSU2_TR(0x5f66ce);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f66d1:{NFSU2_TR(0x5f66d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f66d2:{NFSU2_TR(0x5f66d2);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f66d4:{NFSU2_TR(0x5f66d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f66d9ull));
TAIL_STATIC(0x5727b0u,572);
}
B5f66d9:L5f66d9:{c.instructions+=2;NFSU2_TR(0x5f66d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5f66dc:{NFSU2_TR(0x5f66dc);
{goto L5f66e0;}
}
B5f66de:L5f66de:{c.instructions+=1;NFSU2_TR(0x5f66de);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f66e0:L5f66e0:{c.instructions+=3;NFSU2_TR(0x5f66e0);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5f66e5:{NFSU2_TR(0x5f66e5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5f66e8:{NFSU2_TR(0x5f66e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f672b;}}
}
B5f66ea:L5f66ea:{c.instructions+=3;NFSU2_TR(0x5f66ea);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f66ee:{NFSU2_TR(0x5f66ee);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f66f0:{NFSU2_TR(0x5f66f0);
if(r1(R+518)){{goto L5f672b;}}
}
B5f66f2:L5f66f2:{c.instructions+=5;NFSU2_TR(0x5f66f2);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f66f8:{NFSU2_TR(0x5f66f8);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f66fe:{NFSU2_TR(0x5f66fe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f6700:{NFSU2_TR(0x5f6700);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f6703:{NFSU2_TR(0x5f6703);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5f670d;}}
}
B5f6705:L5f6705:{c.instructions+=2;NFSU2_TR(0x5f6705);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f670b:{NFSU2_TR(0x5f670b);
{goto L5f6713;}
}
B5f670d:L5f670d:{c.instructions+=1;NFSU2_TR(0x5f670d);
{u32 ea_=u32(r4(R+24)+u32(1088u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6713:L5f6713:{c.instructions+=7;NFSU2_TR(0x5f6713);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f6716:{NFSU2_TR(0x5f6716);
{u32 ea_=u32(r4(R+4)+u32(504u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5f671c:{NFSU2_TR(0x5f671c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f671d:{NFSU2_TR(0x5f671d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f6720:{NFSU2_TR(0x5f6720);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6721:{NFSU2_TR(0x5f6721);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6723:{NFSU2_TR(0x5f6723);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6728ull));
TAIL_STATIC(0x5727b0u,572);
}
B5f6728:L5f6728:{c.instructions+=1;NFSU2_TR(0x5f6728);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5f672b:L5f672b:{c.instructions+=2;NFSU2_TR(0x5f672b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f672c:{NFSU2_TR(0x5f672c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f672d:L5f672d:{c.instructions+=3;NFSU2_TR(0x5f672d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f672e:{NFSU2_TR(0x5f672e);
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
B5f6731:{NFSU2_TR(0x5f6731);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f6740:L5f6740:{c.instructions+=6;NFSU2_TR(0x5f6740);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5f6743:{NFSU2_TR(0x5f6743);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6744:{NFSU2_TR(0x5f6744);
__builtin_memmove((R+24),(R+4),4);
}
B5f6746:{NFSU2_TR(0x5f6746);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f6749:{NFSU2_TR(0x5f6749);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f674d:{NFSU2_TR(0x5f674d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f67e5;}}
}
B5f6753:L5f6753:{c.instructions+=3;NFSU2_TR(0x5f6753);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5f6759:{NFSU2_TR(0x5f6759);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f675b:{NFSU2_TR(0x5f675b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f67e5;}}
}
B5f6761:L5f6761:{c.instructions+=3;NFSU2_TR(0x5f6761);
__builtin_memmove((R+0),gp(0x89e7f8),4);
}
B5f6766:{NFSU2_TR(0x5f6766);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f6768:{NFSU2_TR(0x5f6768);
if(r1(R+518)){{goto L5f67e5;}}
}
B5f676a:L5f676a:{c.instructions+=2;NFSU2_TR(0x5f676a);
u8 U[8];
__builtin_memmove((U+0),gp(0x8900bc),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f6771:{NFSU2_TR(0x5f6771);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f67e5;}}
}
B5f6773:L5f6773:{c.instructions+=6;NFSU2_TR(0x5f6773);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f6776:{NFSU2_TR(0x5f6776);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f6779:{NFSU2_TR(0x5f6779);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f677c:{NFSU2_TR(0x5f677c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f677e:{NFSU2_TR(0x5f677e);
__builtin_memmove((R+8),gp(0x8900b0),4);
}
B5f6784:{NFSU2_TR(0x5f6784);
if(r1(R+518)){{goto L5f678c;}}
}
B5f6786:L5f6786:{c.instructions+=1;NFSU2_TR(0x5f6786);
__builtin_memmove((R+8),gp(0x8900ac),4);
}
B5f678c:L5f678c:{c.instructions+=14;NFSU2_TR(0x5f678c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f678f:{NFSU2_TR(0x5f678f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f6792:{NFSU2_TR(0x5f6792);
__builtin_memmove((R+8),gp(0x88f2b0),4);
}
B5f6798:{NFSU2_TR(0x5f6798);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f679b:{NFSU2_TR(0x5f679b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f679f:{NFSU2_TR(0x5f679f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f67a2:{NFSU2_TR(0x5f67a2);
__builtin_memmove((R+0),gp(0x81cb60),4);
}
B5f67a7:{NFSU2_TR(0x5f67a7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f67a9:{NFSU2_TR(0x5f67a9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xa6cull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xa6cull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xa6cull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f67ae:{NFSU2_TR(0x5f67ae);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f67b2:{NFSU2_TR(0x5f67b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f67b3:{NFSU2_TR(0x5f67b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f67b7:{NFSU2_TR(0x5f67b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f67bb:{NFSU2_TR(0x5f67bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f67c0ull));
TAIL_STATIC(0x576770u,576);
}
B5f67c0:L5f67c0:{c.instructions+=9;NFSU2_TR(0x5f67c0);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f67c4:{NFSU2_TR(0x5f67c4);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f67c8:{NFSU2_TR(0x5f67c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f67c9:{NFSU2_TR(0x5f67c9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f67cd:{NFSU2_TR(0x5f67cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f67d1:{NFSU2_TR(0x5f67d1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f67d5:{NFSU2_TR(0x5f67d5);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5f67d7:{NFSU2_TR(0x5f67d7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f67da:{NFSU2_TR(0x5f67da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f67dfull));
TAIL_STATIC(0x576790u,576);
}
B5f67df:L5f67df:{c.instructions+=1;NFSU2_TR(0x5f67df);
{u32 ea_=u32(r4(R+24)+u32(1128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f67e5:L5f67e5:{c.instructions+=3;NFSU2_TR(0x5f67e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f67e6:{NFSU2_TR(0x5f67e6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f67e9:{NFSU2_TR(0x5f67e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f67f0:L5f67f0:{c.instructions+=3;NFSU2_TR(0x5f67f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f67f3:{NFSU2_TR(0x5f67f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f67f7:{NFSU2_TR(0x5f67f7);
if(r1(R+518)){{goto L5f681d;}}
}
B5f67f9:L5f67f9:{c.instructions+=3;NFSU2_TR(0x5f67f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x998ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f67ff:{NFSU2_TR(0x5f67ff);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f6801:{NFSU2_TR(0x5f6801);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f681d;}}
}
B5f6803:L5f6803:{c.instructions+=3;NFSU2_TR(0x5f6803);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x550ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f6809:{NFSU2_TR(0x5f6809);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f680b:{NFSU2_TR(0x5f680b);
if(r1(R+518)){{goto L5f681d;}}
}
B5f680d:L5f680d:{c.instructions+=3;NFSU2_TR(0x5f680d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f6813:{NFSU2_TR(0x5f6813);
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
B5f6815:{NFSU2_TR(0x5f6815);
if(r1(R+518)){{goto L5f681d;}}
}
B5f6817:L5f6817:{c.instructions+=2;NFSU2_TR(0x5f6817);
w4(R+0,u32(0x1ull));
}
B5f681c:{NFSU2_TR(0x5f681c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f681d:L5f681d:{c.instructions+=2;NFSU2_TR(0x5f681d);
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
B5f681f:{NFSU2_TR(0x5f681f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f6820:L5f6820:{c.instructions+=11;NFSU2_TR(0x5f6820);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6821:{NFSU2_TR(0x5f6821);
__builtin_memmove((R+12),(R+4),4);
}
B5f6823:{NFSU2_TR(0x5f6823);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f6827:{NFSU2_TR(0x5f6827);
w4(R+0,u32(0x1ull));
}
B5f682c:{NFSU2_TR(0x5f682c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B5f682e:{NFSU2_TR(0x5f682e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f6834:{NFSU2_TR(0x5f6834);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6835:{NFSU2_TR(0x5f6835);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6836:{NFSU2_TR(0x5f6836);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f6838:{NFSU2_TR(0x5f6838);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6839:{NFSU2_TR(0x5f6839);
if(r1(R+518)){{goto L5f6b9b;}}
}
B5f683f:L5f683f:{c.instructions+=209;NFSU2_TR(0x5f683f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f6843:{NFSU2_TR(0x5f6843);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f6847:{NFSU2_TR(0x5f6847);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5f6849:{NFSU2_TR(0x5f6849);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f684c:{NFSU2_TR(0x5f684c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f684f:{NFSU2_TR(0x5f684f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6852:{NFSU2_TR(0x5f6852);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6855:{NFSU2_TR(0x5f6855);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6858:{NFSU2_TR(0x5f6858);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f685b:{NFSU2_TR(0x5f685b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f685e:{NFSU2_TR(0x5f685e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6861:{NFSU2_TR(0x5f6861);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6864:{NFSU2_TR(0x5f6864);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6867:{NFSU2_TR(0x5f6867);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f686a:{NFSU2_TR(0x5f686a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f686d:{NFSU2_TR(0x5f686d);
w4(R+24,u32(0x3f800000ull));
}
B5f6872:{NFSU2_TR(0x5f6872);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5f6874:{NFSU2_TR(0x5f6874);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6877:{NFSU2_TR(0x5f6877);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f687a:{NFSU2_TR(0x5f687a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f687d:{NFSU2_TR(0x5f687d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5f687f:{NFSU2_TR(0x5f687f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6882:{NFSU2_TR(0x5f6882);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6885:{NFSU2_TR(0x5f6885);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6888:{NFSU2_TR(0x5f6888);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f688b:{NFSU2_TR(0x5f688b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f688e:{NFSU2_TR(0x5f688e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6891:{NFSU2_TR(0x5f6891);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6894:{NFSU2_TR(0x5f6894);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6897:{NFSU2_TR(0x5f6897);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f689a:{NFSU2_TR(0x5f689a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f689d:{NFSU2_TR(0x5f689d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f68a0:{NFSU2_TR(0x5f68a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f68a3:{NFSU2_TR(0x5f68a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f68a6:{NFSU2_TR(0x5f68a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f68a9:{NFSU2_TR(0x5f68a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f68ac:{NFSU2_TR(0x5f68ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f68af:{NFSU2_TR(0x5f68af);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f68b2:{NFSU2_TR(0x5f68b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5f68b5:{NFSU2_TR(0x5f68b5);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f68b8:{NFSU2_TR(0x5f68b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f68bb:{NFSU2_TR(0x5f68bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f68be:{NFSU2_TR(0x5f68be);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f68c0:{NFSU2_TR(0x5f68c0);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f68c3:{NFSU2_TR(0x5f68c3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5f68c6:{NFSU2_TR(0x5f68c6);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f68c9:{NFSU2_TR(0x5f68c9);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f68cc:{NFSU2_TR(0x5f68cc);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f68cf:{NFSU2_TR(0x5f68cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5f68d1:{NFSU2_TR(0x5f68d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f68d4:{NFSU2_TR(0x5f68d4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f68d6:{NFSU2_TR(0x5f68d6);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f68d9:{NFSU2_TR(0x5f68d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f68dc:{NFSU2_TR(0x5f68dc);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f68df:{NFSU2_TR(0x5f68df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f68e2:{NFSU2_TR(0x5f68e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f68e5:{NFSU2_TR(0x5f68e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f68e8:{NFSU2_TR(0x5f68e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f68eb:{NFSU2_TR(0x5f68eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f68ee:{NFSU2_TR(0x5f68ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f68f1:{NFSU2_TR(0x5f68f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f68f4:{NFSU2_TR(0x5f68f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f68f7:{NFSU2_TR(0x5f68f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f68fa:{NFSU2_TR(0x5f68fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f68fd:{NFSU2_TR(0x5f68fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6900:{NFSU2_TR(0x5f6900);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6903:{NFSU2_TR(0x5f6903);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6906:{NFSU2_TR(0x5f6906);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6909:{NFSU2_TR(0x5f6909);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f690c:{NFSU2_TR(0x5f690c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f690f:{NFSU2_TR(0x5f690f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6912:{NFSU2_TR(0x5f6912);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6915:{NFSU2_TR(0x5f6915);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6918:{NFSU2_TR(0x5f6918);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f691b:{NFSU2_TR(0x5f691b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f691e:{NFSU2_TR(0x5f691e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6921:{NFSU2_TR(0x5f6921);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6924:{NFSU2_TR(0x5f6924);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6927:{NFSU2_TR(0x5f6927);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f692a:{NFSU2_TR(0x5f692a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f692d:{NFSU2_TR(0x5f692d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6930:{NFSU2_TR(0x5f6930);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6933:{NFSU2_TR(0x5f6933);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6936:{NFSU2_TR(0x5f6936);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6939:{NFSU2_TR(0x5f6939);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f693c:{NFSU2_TR(0x5f693c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f693f:{NFSU2_TR(0x5f693f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f6942:{NFSU2_TR(0x5f6942);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6945:{NFSU2_TR(0x5f6945);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5f6948:{NFSU2_TR(0x5f6948);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f694b:{NFSU2_TR(0x5f694b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f694e:{NFSU2_TR(0x5f694e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6951:{NFSU2_TR(0x5f6951);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f6953:{NFSU2_TR(0x5f6953);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f6956:{NFSU2_TR(0x5f6956);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B5f6959:{NFSU2_TR(0x5f6959);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f695c:{NFSU2_TR(0x5f695c);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f695f:{NFSU2_TR(0x5f695f);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6962:{NFSU2_TR(0x5f6962);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5f6964:{NFSU2_TR(0x5f6964);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6967:{NFSU2_TR(0x5f6967);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f6969:{NFSU2_TR(0x5f6969);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f696c:{NFSU2_TR(0x5f696c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f696f:{NFSU2_TR(0x5f696f);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f6972:{NFSU2_TR(0x5f6972);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6978:{NFSU2_TR(0x5f6978);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f697e:{NFSU2_TR(0x5f697e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6984:{NFSU2_TR(0x5f6984);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f698a:{NFSU2_TR(0x5f698a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6990:{NFSU2_TR(0x5f6990);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6996:{NFSU2_TR(0x5f6996);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f699c:{NFSU2_TR(0x5f699c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f69a2:{NFSU2_TR(0x5f69a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f69a8:{NFSU2_TR(0x5f69a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f69ae:{NFSU2_TR(0x5f69ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f69b4:{NFSU2_TR(0x5f69b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f69ba:{NFSU2_TR(0x5f69ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f69c0:{NFSU2_TR(0x5f69c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f69c6:{NFSU2_TR(0x5f69c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f69cc:{NFSU2_TR(0x5f69cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f69d2:{NFSU2_TR(0x5f69d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f69d8:{NFSU2_TR(0x5f69d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f69de:{NFSU2_TR(0x5f69de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f69e4:{NFSU2_TR(0x5f69e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f69ea:{NFSU2_TR(0x5f69ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f69f0:{NFSU2_TR(0x5f69f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f69f6:{NFSU2_TR(0x5f69f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f69fc:{NFSU2_TR(0x5f69fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6a02:{NFSU2_TR(0x5f6a02);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6a08:{NFSU2_TR(0x5f6a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6a0e:{NFSU2_TR(0x5f6a0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6a14:{NFSU2_TR(0x5f6a14);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6a1a:{NFSU2_TR(0x5f6a1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6a20:{NFSU2_TR(0x5f6a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6a26:{NFSU2_TR(0x5f6a26);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6a2c:{NFSU2_TR(0x5f6a2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6a32:{NFSU2_TR(0x5f6a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f6a35:{NFSU2_TR(0x5f6a35);
{u32 ea_=u32(r4(R+28)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6a38:{NFSU2_TR(0x5f6a38);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5f6a3b:{NFSU2_TR(0x5f6a3b);
{u32 ea_=u32(r4(R+28)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6a3e:{NFSU2_TR(0x5f6a3e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x70ull))));
}
B5f6a41:{NFSU2_TR(0x5f6a41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6a47:{NFSU2_TR(0x5f6a47);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f6a49:{NFSU2_TR(0x5f6a49);
{u32 ea_=u32(r4(R+0)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f6a4f:{NFSU2_TR(0x5f6a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6a55:{NFSU2_TR(0x5f6a55);
{u32 ea_=u32(r4(R+0)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f6a5b:{NFSU2_TR(0x5f6a5b);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6a5e:{NFSU2_TR(0x5f6a5e);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6a61:{NFSU2_TR(0x5f6a61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5f6a63:{NFSU2_TR(0x5f6a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6a69:{NFSU2_TR(0x5f6a69);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f6a6b:{NFSU2_TR(0x5f6a6b);
{u32 ea_=u32(r4(R+4)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f6a71:{NFSU2_TR(0x5f6a71);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6a77:{NFSU2_TR(0x5f6a77);
{u32 ea_=u32(r4(R+4)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f6a7d:{NFSU2_TR(0x5f6a7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6a83:{NFSU2_TR(0x5f6a83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6a89:{NFSU2_TR(0x5f6a89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6a8f:{NFSU2_TR(0x5f6a8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6a95:{NFSU2_TR(0x5f6a95);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6a9b:{NFSU2_TR(0x5f6a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6aa1:{NFSU2_TR(0x5f6aa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6aa7:{NFSU2_TR(0x5f6aa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6aad:{NFSU2_TR(0x5f6aad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6ab3:{NFSU2_TR(0x5f6ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6ab9:{NFSU2_TR(0x5f6ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6abf:{NFSU2_TR(0x5f6abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6ac5:{NFSU2_TR(0x5f6ac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6acb:{NFSU2_TR(0x5f6acb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6ad1:{NFSU2_TR(0x5f6ad1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6ad7:{NFSU2_TR(0x5f6ad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6add:{NFSU2_TR(0x5f6add);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6ae3:{NFSU2_TR(0x5f6ae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6ae9:{NFSU2_TR(0x5f6ae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6aef:{NFSU2_TR(0x5f6aef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6af5:{NFSU2_TR(0x5f6af5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6afb:{NFSU2_TR(0x5f6afb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6b01:{NFSU2_TR(0x5f6b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6b07:{NFSU2_TR(0x5f6b07);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6b0d:{NFSU2_TR(0x5f6b0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6b13:{NFSU2_TR(0x5f6b13);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6b19:{NFSU2_TR(0x5f6b19);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6b1f:{NFSU2_TR(0x5f6b1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6b25:{NFSU2_TR(0x5f6b25);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6b2b:{NFSU2_TR(0x5f6b2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6b31:{NFSU2_TR(0x5f6b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6b37:{NFSU2_TR(0x5f6b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6b3d:{NFSU2_TR(0x5f6b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f6b40:{NFSU2_TR(0x5f6b40);
{u32 ea_=u32(r4(R+8)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6b46:{NFSU2_TR(0x5f6b46);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f6b4c:{NFSU2_TR(0x5f6b4c);
{u32 ea_=u32(r4(R+8)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6b52:{NFSU2_TR(0x5f6b52);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0xa0ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0xa0ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xa0ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f6b58:{NFSU2_TR(0x5f6b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6b5e:{NFSU2_TR(0x5f6b5e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f6b60:{NFSU2_TR(0x5f6b60);
{u32 ea_=u32(r4(R+0)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f6b66:{NFSU2_TR(0x5f6b66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6b6c:{NFSU2_TR(0x5f6b6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f6b6d:{NFSU2_TR(0x5f6b6d);
{u32 ea_=u32(r4(R+0)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f6b73:{NFSU2_TR(0x5f6b73);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6b76:{NFSU2_TR(0x5f6b76);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6b79:{NFSU2_TR(0x5f6b79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f6b7b:{NFSU2_TR(0x5f6b7b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f6b7d:{NFSU2_TR(0x5f6b7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6b83:{NFSU2_TR(0x5f6b83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f6b84:{NFSU2_TR(0x5f6b84);
{u32 ea_=u32(r4(R+4)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f6b8a:{NFSU2_TR(0x5f6b8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f6b8b:{NFSU2_TR(0x5f6b8b);
{u32 ea_=u32(r4(R+4)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f6b91:{NFSU2_TR(0x5f6b91);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6b97:{NFSU2_TR(0x5f6b97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f6b98:{NFSU2_TR(0x5f6b98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f6b9b:L5f6b9b:{c.instructions+=5;NFSU2_TR(0x5f6b9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f6b9f:{NFSU2_TR(0x5f6b9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f6ba5:{NFSU2_TR(0x5f6ba5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5f6ba9:{NFSU2_TR(0x5f6ba9);
u8 U[6];
w1(R+512,u8((r4(R+12))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(R+12),r4(R+28)));
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f6bab:{NFSU2_TR(0x5f6bab);
w4(R+20,u32(0x4ull));
}
B5f6bb0:L5f6bb0:{c.instructions+=5;NFSU2_TR(0x5f6bb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5f6bb6:{NFSU2_TR(0x5f6bb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6bb7:{NFSU2_TR(0x5f6bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5f6bba:{NFSU2_TR(0x5f6bba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6bbb:{NFSU2_TR(0x5f6bbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6bc0ull));
TAIL_STATIC(0x4012b0u,401);
}
B5f6bc0:L5f6bc0:{c.instructions+=3;NFSU2_TR(0x5f6bc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6bc1:{NFSU2_TR(0x5f6bc1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6bc2:{NFSU2_TR(0x5f6bc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6bc7ull));
TAIL_STATIC(0x4012b0u,401);
}
B5f6bc7:L5f6bc7:{c.instructions+=5;NFSU2_TR(0x5f6bc7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5f6bca:{NFSU2_TR(0x5f6bca);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B5f6bcd:{NFSU2_TR(0x5f6bcd);
w1(R+512,carry<u32>(r4(R+28),u32(0x40ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B5f6bd0:{NFSU2_TR(0x5f6bd0);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f6bd1:{NFSU2_TR(0x5f6bd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f6bb0u);}goto L5f6bb0;}}
}
B5f6bd3:L5f6bd3:{c.instructions+=5;NFSU2_TR(0x5f6bd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f6bd4:{NFSU2_TR(0x5f6bd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f6bd5:{NFSU2_TR(0x5f6bd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f6bd6:{NFSU2_TR(0x5f6bd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f6bd7:{NFSU2_TR(0x5f6bd7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f6be0:L5f6be0:{c.instructions+=4;NFSU2_TR(0x5f6be0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f6be4:{NFSU2_TR(0x5f6be4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5f6be7:{NFSU2_TR(0x5f6be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6bea:{NFSU2_TR(0x5f6bea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6c14;}}
}
B5f6bec:L5f6bec:{c.instructions+=4;NFSU2_TR(0x5f6bec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f6bef:{NFSU2_TR(0x5f6bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f6bf9:{NFSU2_TR(0x5f6bf9);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5f6bfd:{NFSU2_TR(0x5f6bfd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6c14;}}
}
B5f6bff:L5f6bff:{c.instructions+=3;NFSU2_TR(0x5f6bff);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5f6c05:{NFSU2_TR(0x5f6c05);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f6c07:{NFSU2_TR(0x5f6c07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6c14;}}
}
B5f6c09:L5f6c09:{c.instructions+=2;NFSU2_TR(0x5f6c09);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5f6c0e:{NFSU2_TR(0x5f6c0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x548ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6c14:L5f6c14:{c.instructions+=1;NFSU2_TR(0x5f6c14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f6c20:L5f6c20:{c.instructions+=14;NFSU2_TR(0x5f6c20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f6c24:{NFSU2_TR(0x5f6c24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6c25:{NFSU2_TR(0x5f6c25);
__builtin_memmove((R+24),(R+4),4);
}
B5f6c27:{NFSU2_TR(0x5f6c27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f6c2a:{NFSU2_TR(0x5f6c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f6c2d:{NFSU2_TR(0x5f6c2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f6c30:{NFSU2_TR(0x5f6c30);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6c32:{NFSU2_TR(0x5f6c32);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f6c35:{NFSU2_TR(0x5f6c35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6c36:{NFSU2_TR(0x5f6c36);
__builtin_memmove((R+8),(R+518),1);
}
B5f6c39:{NFSU2_TR(0x5f6c39);
w4(R+0,u32(r1(R+8)));
}
B5f6c3c:{NFSU2_TR(0x5f6c3c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6c3e:{NFSU2_TR(0x5f6c3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6c3f:{NFSU2_TR(0x5f6c3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6c44ull));
TAIL_STATIC(0x639ce0u,639);
}
B5f6c44:L5f6c44:{c.instructions+=4;NFSU2_TR(0x5f6c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x454ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f6c4a:{NFSU2_TR(0x5f6c4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f6c4c:{NFSU2_TR(0x5f6c4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f6c4f:{NFSU2_TR(0x5f6c4f);
if(r1(R+518)){{goto L5f6c66;}}
}
B5f6c51:L5f6c51:{c.instructions+=2;NFSU2_TR(0x5f6c51);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f6c56:{NFSU2_TR(0x5f6c56);
if(r1(R+518)){{goto L5f6c66;}}
}
B5f6c58:L5f6c58:{c.instructions+=3;NFSU2_TR(0x5f6c58);
{u32 ea_=u32(r4(R+4)+u32(1044u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f6c5e:{NFSU2_TR(0x5f6c5e);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f6c64:{NFSU2_TR(0x5f6c64);
{goto L5f6c6c;}
}
B5f6c66:L5f6c66:{c.instructions+=1;NFSU2_TR(0x5f6c66);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6c6c:L5f6c6c:{c.instructions+=5;NFSU2_TR(0x5f6c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f6c6f:{NFSU2_TR(0x5f6c6f);
{u32 ea_=u32(r4(R+8)+u32(672u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f6c75:{NFSU2_TR(0x5f6c75);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f6c77:{NFSU2_TR(0x5f6c77);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f6c7a:{NFSU2_TR(0x5f6c7a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5f6c81;}}
}
B5f6c7c:L5f6c7c:{c.instructions+=1;NFSU2_TR(0x5f6c7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6c81ull));
TAIL_STATIC(0x591cd0u,591);
}
B5f6c81:L5f6c81:{c.instructions+=2;NFSU2_TR(0x5f6c81);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f6c85:{NFSU2_TR(0x5f6c85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6c92;}}
}
B5f6c87:L5f6c87:{c.instructions+=3;NFSU2_TR(0x5f6c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f6c8a:{NFSU2_TR(0x5f6c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f6c8d:{NFSU2_TR(0x5f6c8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6c92ull));
TAIL_STATIC(0x5afb60u,5af);
}
B5f6c92:L5f6c92:{c.instructions+=3;NFSU2_TR(0x5f6c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f6c95:{NFSU2_TR(0x5f6c95);
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
B5f6c97:{NFSU2_TR(0x5f6c97);
if(r1(R+518)){{goto L5f6cc9;}}
}
B5f6c99:L5f6c99:{c.instructions+=3;NFSU2_TR(0x5f6c99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f6c9b:{NFSU2_TR(0x5f6c9b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6c9d:{NFSU2_TR(0x5f6c9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6ca0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f6ca0:L5f6ca0:{c.instructions+=2;NFSU2_TR(0x5f6ca0);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5f6ca4:{NFSU2_TR(0x5f6ca4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6cc9;}}
}
B5f6ca6:L5f6ca6:{c.instructions+=3;NFSU2_TR(0x5f6ca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f6ca9:{NFSU2_TR(0x5f6ca9);
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
B5f6cab:{NFSU2_TR(0x5f6cab);
if(r1(R+518)){{goto L5f6cc9;}}
}
B5f6cad:L5f6cad:{c.instructions+=2;NFSU2_TR(0x5f6cad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f6caf:{NFSU2_TR(0x5f6caf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6cb2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f6cb2:L5f6cb2:{c.instructions+=2;NFSU2_TR(0x5f6cb2);
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
B5f6cb4:{NFSU2_TR(0x5f6cb4);
if(r1(R+518)){{goto L5f6cc9;}}
}
B5f6cb6:L5f6cb6:{c.instructions+=5;NFSU2_TR(0x5f6cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f6cb9:{NFSU2_TR(0x5f6cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f6cbc:{NFSU2_TR(0x5f6cbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f6cbe:{NFSU2_TR(0x5f6cbe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6cbf:{NFSU2_TR(0x5f6cbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6cc2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f6cc2:L5f6cc2:{c.instructions+=2;NFSU2_TR(0x5f6cc2);
__builtin_memmove((R+4),(R+0),4);
}
B5f6cc4:{NFSU2_TR(0x5f6cc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6cc9ull));
TAIL_STATIC(0x59b8b0u,59b);
}
B5f6cc9:L5f6cc9:{c.instructions+=2;NFSU2_TR(0x5f6cc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f6cca:{NFSU2_TR(0x5f6cca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f6cd0:L5f6cd0:{c.instructions+=10;NFSU2_TR(0x5f6cd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6cd1:{NFSU2_TR(0x5f6cd1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6cd2:{NFSU2_TR(0x5f6cd2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6cd3:{NFSU2_TR(0x5f6cd3);
__builtin_memmove((R+28),(R+4),4);
}
B5f6cd5:{NFSU2_TR(0x5f6cd5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6cd7:{NFSU2_TR(0x5f6cd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5f6cda:{NFSU2_TR(0x5f6cda);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5c4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f6ce0:{NFSU2_TR(0x5f6ce0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6ce1:{NFSU2_TR(0x5f6ce1);
__builtin_memmove((R+4),(R+24),4);
}
B5f6ce3:{NFSU2_TR(0x5f6ce3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6ce8ull));
TAIL_STATIC(0x5e68d0u,5e6);
}
B5f6ce8:L5f6ce8:{c.instructions+=7;NFSU2_TR(0x5f6ce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f6ceb:{NFSU2_TR(0x5f6ceb);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5f6cf1:{NFSU2_TR(0x5f6cf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f6cf3:{NFSU2_TR(0x5f6cf3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5f6cf6:{NFSU2_TR(0x5f6cf6);
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
B5f6cf8:{NFSU2_TR(0x5f6cf8);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f6cfc:{NFSU2_TR(0x5f6cfc);
if(r1(R+518)){{goto L5f6d47;}}
}
B5f6cfe:L5f6cfe:{c.instructions+=3;NFSU2_TR(0x5f6cfe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f6d00:{NFSU2_TR(0x5f6d00);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5c0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f6d06:{NFSU2_TR(0x5f6d06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6d2d;}}
}
B5f6d08:L5f6d08:{c.instructions+=4;NFSU2_TR(0x5f6d08);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6d09:{NFSU2_TR(0x5f6d09);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f6d0c:{NFSU2_TR(0x5f6d0c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5f6d0e:{NFSU2_TR(0x5f6d0e);
__builtin_memmove((R+28),(R+28),4);
}
B5f6d10:L5f6d10:{c.instructions+=4;NFSU2_TR(0x5f6d10);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6d12:{NFSU2_TR(0x5f6d12);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6d13:{NFSU2_TR(0x5f6d13);
__builtin_memmove((R+4),(R+12),4);
}
B5f6d15:{NFSU2_TR(0x5f6d15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6d1aull));
TAIL_STATIC(0x592040u,592);
}
B5f6d1a:L5f6d1a:{c.instructions+=4;NFSU2_TR(0x5f6d1a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6d1c:{NFSU2_TR(0x5f6d1c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6d1d:{NFSU2_TR(0x5f6d1d);
__builtin_memmove((R+4),(R+12),4);
}
B5f6d1f:{NFSU2_TR(0x5f6d1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6d24ull));
TAIL_STATIC(0x592080u,592);
}
B5f6d24:L5f6d24:{c.instructions+=3;NFSU2_TR(0x5f6d24);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5f6d25:{NFSU2_TR(0x5f6d25);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f6d28:{NFSU2_TR(0x5f6d28);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f6d10u);}goto L5f6d10;}}
}
B5f6d2a:L5f6d2a:{c.instructions+=2;NFSU2_TR(0x5f6d2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f6d2b:{NFSU2_TR(0x5f6d2b);
{goto L5f6d34;}
}
B5f6d2d:L5f6d2d:{c.instructions+=2;NFSU2_TR(0x5f6d2d);
__builtin_memmove((R+4),(R+28),4);
}
B5f6d2f:{NFSU2_TR(0x5f6d2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6d34ull));
TAIL_STATIC(0x5f5010u,5f5);
}
B5f6d34:L5f6d34:{c.instructions+=3;NFSU2_TR(0x5f6d34);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f6d37:{NFSU2_TR(0x5f6d37);
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
B5f6d39:{NFSU2_TR(0x5f6d39);
if(r1(R+518)){{goto L5f6d47;}}
}
B5f6d3b:L5f6d3b:{c.instructions+=5;NFSU2_TR(0x5f6d3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f6d3f:{NFSU2_TR(0x5f6d3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f6d41:{NFSU2_TR(0x5f6d41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6d42:{NFSU2_TR(0x5f6d42);
__builtin_memmove((R+4),(R+28),4);
}
B5f6d44:{NFSU2_TR(0x5f6d44);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6d47ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f6d47:L5f6d47:{c.instructions+=4;NFSU2_TR(0x5f6d47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f6d48:{NFSU2_TR(0x5f6d48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f6d49:{NFSU2_TR(0x5f6d49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f6d4a:{NFSU2_TR(0x5f6d4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f6d50:L5f6d50:{c.instructions+=9;NFSU2_TR(0x5f6d50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6d51:{NFSU2_TR(0x5f6d51);
__builtin_memmove((R+24),(R+4),4);
}
B5f6d53:{NFSU2_TR(0x5f6d53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f6d56:{NFSU2_TR(0x5f6d56);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x998ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f6d5d:{NFSU2_TR(0x5f6d5d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x550ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f6d64:{NFSU2_TR(0x5f6d64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f6d67:{NFSU2_TR(0x5f6d67);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f6d6a:{NFSU2_TR(0x5f6d6a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5f6d70:{NFSU2_TR(0x5f6d70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6d9e;}}
}
B5f6d72:L5f6d72:{c.instructions+=2;NFSU2_TR(0x5f6d72);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f6d74:{NFSU2_TR(0x5f6d74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6da2;}}
}
B5f6d76:L5f6d76:{c.instructions+=3;NFSU2_TR(0x5f6d76);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6d77:{NFSU2_TR(0x5f6d77);
__builtin_memmove((R+4),(R+24),4);
}
B5f6d79:{NFSU2_TR(0x5f6d79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6d7eull));
TAIL_STATIC(0x5eba30u,5eb);
}
B5f6d7e:L5f6d7e:{c.instructions+=3;NFSU2_TR(0x5f6d7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x968ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f6d84:{NFSU2_TR(0x5f6d84);
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
B5f6d86:{NFSU2_TR(0x5f6d86);
if(r1(R+518)){{goto L5f6dbd;}}
}
B5f6d88:L5f6d88:{c.instructions+=7;NFSU2_TR(0x5f6d88);
{u32 ea_=u32(r4(R+4)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6d8b:{NFSU2_TR(0x5f6d8b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6d8d:{NFSU2_TR(0x5f6d8d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6d8f:{NFSU2_TR(0x5f6d8f);
{u32 ea_=u32(r4(R+24)+u32(1088u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f6d95:{NFSU2_TR(0x5f6d95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f6d97:{NFSU2_TR(0x5f6d97);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6d99:{NFSU2_TR(0x5f6d99);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6d9cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f6d9c:L5f6d9c:{c.instructions+=1;NFSU2_TR(0x5f6d9c);
{goto L5f6dbd;}
}
B5f6d9e:L5f6d9e:{c.instructions+=2;NFSU2_TR(0x5f6d9e);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f6da0:{NFSU2_TR(0x5f6da0);
if(r1(R+518)){{goto L5f6da6;}}
}
B5f6da2:L5f6da2:{c.instructions+=2;NFSU2_TR(0x5f6da2);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6da4:{NFSU2_TR(0x5f6da4);
{goto L5f6db6;}
}
B5f6da6:L5f6da6:{c.instructions+=2;NFSU2_TR(0x5f6da6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f6da9:{NFSU2_TR(0x5f6da9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6daf;}}
}
B5f6dab:L5f6dab:{c.instructions+=2;NFSU2_TR(0x5f6dab);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6dad:{NFSU2_TR(0x5f6dad);
{goto L5f6db6;}
}
B5f6daf:L5f6daf:{c.instructions+=2;NFSU2_TR(0x5f6daf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f6db2:{NFSU2_TR(0x5f6db2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6dbd;}}
}
B5f6db4:L5f6db4:{c.instructions+=1;NFSU2_TR(0x5f6db4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6db6:L5f6db6:{c.instructions+=2;NFSU2_TR(0x5f6db6);
__builtin_memmove((R+4),(R+24),4);
}
B5f6db8:{NFSU2_TR(0x5f6db8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6dbdull));
TAIL_STATIC(0x5eba30u,5eb);
}
B5f6dbd:L5f6dbd:{c.instructions+=2;NFSU2_TR(0x5f6dbd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6dbe:{NFSU2_TR(0x5f6dbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6dc3ull));
TAIL_STATIC(0x5f4400u,5f4);
}
B5f6dc3:L5f6dc3:{c.instructions+=4;NFSU2_TR(0x5f6dc3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f6dc6:{NFSU2_TR(0x5f6dc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6dc7:{NFSU2_TR(0x5f6dc7);
__builtin_memmove((R+4),(R+24),4);
}
B5f6dc9:{NFSU2_TR(0x5f6dc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6dceull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B5f6dce:L5f6dce:{c.instructions+=3;NFSU2_TR(0x5f6dce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f6dd1:{NFSU2_TR(0x5f6dd1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f6dd5:{NFSU2_TR(0x5f6dd5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6e0b;}}
}
B5f6dd7:L5f6dd7:{c.instructions+=3;NFSU2_TR(0x5f6dd7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5f6ddd:{NFSU2_TR(0x5f6ddd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f6ddf:{NFSU2_TR(0x5f6ddf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6e0b;}}
}
B5f6de1:L5f6de1:{c.instructions+=4;NFSU2_TR(0x5f6de1);
u8 U[5];
__builtin_memmove((U+3),gp(0x89e7d8),1);
w1(R+512,u8((r1(U+3))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x1ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f6de8:{NFSU2_TR(0x5f6de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f6deb:{NFSU2_TR(0x5f6deb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f6dee:{NFSU2_TR(0x5f6dee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6e01;}}
}
B5f6df0:L5f6df0:{c.instructions+=3;NFSU2_TR(0x5f6df0);
__builtin_memmove((R+8),gp(0x864fac),4);
}
B5f6df6:{NFSU2_TR(0x5f6df6);
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
B5f6df8:{NFSU2_TR(0x5f6df8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6e01;}}
}
B5f6dfa:L5f6dfa:{c.instructions+=2;NFSU2_TR(0x5f6dfa);
w4(R+0,u32(0x1ull));
}
B5f6dff:{NFSU2_TR(0x5f6dff);
{goto L5f6e05;}
}
B5f6e01:L5f6e01:{c.instructions+=1;NFSU2_TR(0x5f6e01);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5f6e05:L5f6e05:{c.instructions+=3;NFSU2_TR(0x5f6e05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f6e07:{NFSU2_TR(0x5f6e07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6e08:{NFSU2_TR(0x5f6e08);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6e0bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f6e0b:L5f6e0b:{c.instructions+=4;NFSU2_TR(0x5f6e0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f6e0e:{NFSU2_TR(0x5f6e0e);
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
B5f6e10:{NFSU2_TR(0x5f6e10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f6e11:{NFSU2_TR(0x5f6e11);
if(r1(R+518)){{goto L5f6e1a;}}
}
B5f6e13:L5f6e13:{c.instructions+=2;NFSU2_TR(0x5f6e13);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6e15:{NFSU2_TR(0x5f6e15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6e1aull));
TAIL_STATIC(0x593100u,593);
}
B5f6e1a:L5f6e1a:{c.instructions+=1;NFSU2_TR(0x5f6e1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f6e20:L5f6e20:{c.instructions+=6;NFSU2_TR(0x5f6e20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6e21:{NFSU2_TR(0x5f6e21);
__builtin_memmove((R+24),(R+4),4);
}
B5f6e23:{NFSU2_TR(0x5f6e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f6e26:{NFSU2_TR(0x5f6e26);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f6e28:{NFSU2_TR(0x5f6e28);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x550ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f6e2f:{NFSU2_TR(0x5f6e2f);
if(r1(R+518)){{goto L5f6e36;}}
}
B5f6e31:L5f6e31:{c.instructions+=1;NFSU2_TR(0x5f6e31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6e36ull));
TAIL_STATIC(0x5930f0u,593);
}
B5f6e36:L5f6e36:{c.instructions+=3;NFSU2_TR(0x5f6e36);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6e38:{NFSU2_TR(0x5f6e38);
__builtin_memmove((R+4),(R+24),4);
}
B5f6e3a:{NFSU2_TR(0x5f6e3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6e3full));
TAIL_STATIC(0x5f46a0u,5f4);
}
B5f6e3f:L5f6e3f:{c.instructions+=10;NFSU2_TR(0x5f6e3f);
{u32 ea_=u32(u32(8398260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6e45:{NFSU2_TR(0x5f6e45);
{u32 ea_=u32(u32(8398264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6e4b:{NFSU2_TR(0x5f6e4b);
__builtin_memmove((R+0),gp(0x8025b0),4);
}
B5f6e50:{NFSU2_TR(0x5f6e50);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f6e52:{NFSU2_TR(0x5f6e52);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6e54:{NFSU2_TR(0x5f6e54);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f6e57:{NFSU2_TR(0x5f6e57);
__builtin_memmove((R+4),(R+24),4);
}
B5f6e59:{NFSU2_TR(0x5f6e59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6e5c:{NFSU2_TR(0x5f6e5c);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f6e5f:{NFSU2_TR(0x5f6e5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6e64ull));
TAIL_STATIC(0x5eba30u,5eb);
}
B5f6e64:L5f6e64:{c.instructions+=2;NFSU2_TR(0x5f6e64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f6e65:{NFSU2_TR(0x5f6e65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f6e70:L5f6e70:{c.instructions+=18;NFSU2_TR(0x5f6e70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6e71:{NFSU2_TR(0x5f6e71);
__builtin_memmove((R+20),(R+16),4);
}
B5f6e73:{NFSU2_TR(0x5f6e73);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B5f6e76:{NFSU2_TR(0x5f6e76);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6e78:{NFSU2_TR(0x5f6e78);
u8 U[4];
w4(U+0,u32(0x779bbbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6e7d:{NFSU2_TR(0x5f6e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f6e83:{NFSU2_TR(0x5f6e83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6e84:{NFSU2_TR(0x5f6e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6e8b:{NFSU2_TR(0x5f6e8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x87cull))));
}
B5f6e91:{NFSU2_TR(0x5f6e91);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6e92:{NFSU2_TR(0x5f6e92);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6e93:{NFSU2_TR(0x5f6e93);
__builtin_memmove((R+12),(R+4),4);
}
B5f6e95:{NFSU2_TR(0x5f6e95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6e96:{NFSU2_TR(0x5f6e96);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6e97:{NFSU2_TR(0x5f6e97);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f6e99:{NFSU2_TR(0x5f6e99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6e9a:{NFSU2_TR(0x5f6e9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f6e9d:{NFSU2_TR(0x5f6e9d);
w4(R+4,u32(0x200ull));
}
B5f6ea2:L5f6ea2:{c.instructions+=1;NFSU2_TR(0x5f6ea2);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5f6ea4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f6ea2u);}goto L5f6ea2;}
}
B5f6ea4:L5f6ea4:{c.instructions+=3;NFSU2_TR(0x5f6ea4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5f6ea6:{NFSU2_TR(0x5f6ea6);
w4(R+4,u32(0x100ull));
}
B5f6eab:{NFSU2_TR(0x5f6eab);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5f6eb2:L5f6eb2:{c.instructions+=1;NFSU2_TR(0x5f6eb2);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5f6eb4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f6eb2u);}goto L5f6eb2;}
}
B5f6eb4:L5f6eb4:{c.instructions+=8;NFSU2_TR(0x5f6eb4);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5f6eb9:{NFSU2_TR(0x5f6eb9);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6ebb:{NFSU2_TR(0x5f6ebb);
u8 U[4];
w4(U+0,u32(0x42200000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6ec0:{NFSU2_TR(0x5f6ec0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xc10ull))));
}
B5f6ec5:{NFSU2_TR(0x5f6ec5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6ec6:{NFSU2_TR(0x5f6ec6);
w4(R+4,u32(0x88a320ull));
}
B5f6ecb:{NFSU2_TR(0x5f6ecb);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6ecf:{NFSU2_TR(0x5f6ecf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6ed4ull));
TAIL_STATIC(0x5e4080u,5e4);
}
B5f6ed4:L5f6ed4:{c.instructions+=3;NFSU2_TR(0x5f6ed4);
__builtin_memmove((R+24),(R+0),4);
}
B5f6ed6:{NFSU2_TR(0x5f6ed6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f6ed8:{NFSU2_TR(0x5f6ed8);
if(r1(R+518)){TAIL_STATIC(0x5f7327u,5f7);}
}
B5f6ede:L5f6ede:{c.instructions+=2;NFSU2_TR(0x5f6ede);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f6ee2:{NFSU2_TR(0x5f6ee2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6ee7ull));
TAIL_STATIC(0x5da2f0u,5da);
}
B5f6ee7:L5f6ee7:{c.instructions+=5;NFSU2_TR(0x5f6ee7);
u8 U[8];
w4(U+0,u32(u32(u32(0x894ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f6ef2:{NFSU2_TR(0x5f6ef2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f6efa:{NFSU2_TR(0x5f6efa);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f6f02:{NFSU2_TR(0x5f6f02);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f6f04:{NFSU2_TR(0x5f6f04);
if(r1(R+518)){{goto L5f6f18;}}
}
B5f6f06:L5f6f06:{c.instructions+=4;NFSU2_TR(0x5f6f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f6f09:{NFSU2_TR(0x5f6f09);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ffull))));
}
B5f6f0f:{NFSU2_TR(0x5f6f0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B5f6f16:{NFSU2_TR(0x5f6f16);
{goto L5f6f1a;}
}
B5f6f18:L5f6f18:{c.instructions+=1;NFSU2_TR(0x5f6f18);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5f6f1a:L5f6f1a:{c.instructions+=8;NFSU2_TR(0x5f6f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f6f1d:{NFSU2_TR(0x5f6f1d);
w4(R+28,shr<u32>(r4(R+28),u64(u32(0x1ull))));
}
B5f6f1f:{NFSU2_TR(0x5f6f1f);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5f6f22:{NFSU2_TR(0x5f6f22);
__builtin_memmove((R+8),(R+518),1);
}
B5f6f25:{NFSU2_TR(0x5f6f25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6f26:{NFSU2_TR(0x5f6f26);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f6f2a:{NFSU2_TR(0x5f6f2a);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f6f2e:{NFSU2_TR(0x5f6f2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6f33ull));
TAIL_STATIC(0x5da330u,5da);
}
B5f6f33:L5f6f33:{c.instructions+=3;NFSU2_TR(0x5f6f33);
u8 U[13];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5f6f37:{NFSU2_TR(0x5f6f37);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f6f39:{NFSU2_TR(0x5f6f39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6f47;}}
}
B5f6f3b:L5f6f3b:{c.instructions+=3;NFSU2_TR(0x5f6f3b);
u8 U[13];
w4(U+0,u32(u32(u32(0x75ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5f6f3f:{NFSU2_TR(0x5f6f3f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f6f41:{NFSU2_TR(0x5f6f41);
if(r1(R+518)){TAIL_STATIC(0x5f7258u,5f7);}
}
B5f6f47:L5f6f47:{c.instructions+=15;NFSU2_TR(0x5f6f47);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5f6f4b:{NFSU2_TR(0x5f6f4b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B5f6f4f:{NFSU2_TR(0x5f6f4f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5f6f52:{NFSU2_TR(0x5f6f52);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6f56:{NFSU2_TR(0x5f6f56);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5f6f59:{NFSU2_TR(0x5f6f59);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f6f5d:{NFSU2_TR(0x5f6f5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6f61:{NFSU2_TR(0x5f6f61);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f6f67:{NFSU2_TR(0x5f6f67);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f6f6b:{NFSU2_TR(0x5f6f6b);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f6f71:{NFSU2_TR(0x5f6f71);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f6f75:{NFSU2_TR(0x5f6f75);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f6f77:{NFSU2_TR(0x5f6f77);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f6f79:{NFSU2_TR(0x5f6f79);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f6f7c:{NFSU2_TR(0x5f6f7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6f84;}}
}
B5f6f7e:L5f6f7e:{c.instructions+=2;NFSU2_TR(0x5f6f7e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f6f80:{NFSU2_TR(0x5f6f80);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f6f84:L5f6f84:{c.instructions+=10;NFSU2_TR(0x5f6f84);
u8 U[13];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(s32(s8(r1(U+12)))));
}
B5f6f89:{NFSU2_TR(0x5f6f89);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5f6f8c:{NFSU2_TR(0x5f6f8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f6f8e:{NFSU2_TR(0x5f6f8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6f92:{NFSU2_TR(0x5f6f92);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f6f96:{NFSU2_TR(0x5f6f96);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f6f9c:{NFSU2_TR(0x5f6f9c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5f6f9e:{NFSU2_TR(0x5f6f9e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f6fa2:{NFSU2_TR(0x5f6fa2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f6fa4:{NFSU2_TR(0x5f6fa4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f6fba;}}
}
B5f6fa6:L5f6fa6:{c.instructions+=7;NFSU2_TR(0x5f6fa6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f6faa:{NFSU2_TR(0x5f6faa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6fab:{NFSU2_TR(0x5f6fab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6fac:{NFSU2_TR(0x5f6fac);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f6fb0:{NFSU2_TR(0x5f6fb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6fb1:{NFSU2_TR(0x5f6fb1);
__builtin_memmove((R+4),(R+24),4);
}
B5f6fb3:{NFSU2_TR(0x5f6fb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6fb8ull));
TAIL_STATIC(0x5dd2f0u,5dd);
}
B5f6fb8:L5f6fb8:{c.instructions+=1;NFSU2_TR(0x5f6fb8);
{goto L5f6fcd;}
}
B5f6fba:L5f6fba:{c.instructions+=7;NFSU2_TR(0x5f6fba);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f6fbe:{NFSU2_TR(0x5f6fbe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6fbf:{NFSU2_TR(0x5f6fbf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6fc1:{NFSU2_TR(0x5f6fc1);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f6fc5:{NFSU2_TR(0x5f6fc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f6fc6:{NFSU2_TR(0x5f6fc6);
__builtin_memmove((R+4),(R+24),4);
}
B5f6fc8:{NFSU2_TR(0x5f6fc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f6fcdull));
TAIL_STATIC(0x5dd430u,5dd);
}
B5f6fcd:L5f6fcd:{c.instructions+=14;NFSU2_TR(0x5f6fcd);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B5f6fd1:{NFSU2_TR(0x5f6fd1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B5f6fd5:{NFSU2_TR(0x5f6fd5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5f6fd8:{NFSU2_TR(0x5f6fd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6fdc:{NFSU2_TR(0x5f6fdc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5f6fdf:{NFSU2_TR(0x5f6fdf);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f6fe3:{NFSU2_TR(0x5f6fe3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f6fe7:{NFSU2_TR(0x5f6fe7);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f6fed:{NFSU2_TR(0x5f6fed);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f6ff1:{NFSU2_TR(0x5f6ff1);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f6ff7:{NFSU2_TR(0x5f6ff7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f6ffb:{NFSU2_TR(0x5f6ffb);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f6ffd:{NFSU2_TR(0x5f6ffd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f6fff:{NFSU2_TR(0x5f6fff);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
TAIL_STATIC(0x5f7002u,5f7);
}
XIT:NFSU2_TR_EXIT(0x5f6,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
