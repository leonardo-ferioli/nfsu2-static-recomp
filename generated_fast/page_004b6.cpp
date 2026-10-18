#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4b7(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4b6,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4b6,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4b6(u8* __restrict R,Cpu& c);
u32 page_4b6(Cpu& c){return body_4b6(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4b6(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4b6004:goto L4b6004;
case 0x4b6007:c.instructions+=1;goto B4b6007;
case 0x4b6010:goto L4b6010;
case 0x4b6011:c.instructions+=3;goto B4b6011;
case 0x4b6017:c.instructions+=2;goto B4b6017;
case 0x4b6019:c.instructions+=1;goto B4b6019;
case 0x4b601b:goto L4b601b;
case 0x4b6020:c.instructions+=1;goto B4b6020;
case 0x4b6025:goto L4b6025;
case 0x4b6027:c.instructions+=1;goto B4b6027;
case 0x4b6029:goto L4b6029;
case 0x4b602f:c.instructions+=1;goto B4b602f;
case 0x4b6031:goto L4b6031;
case 0x4b6036:c.instructions+=9;goto B4b6036;
case 0x4b603a:c.instructions+=8;goto B4b603a;
case 0x4b603c:c.instructions+=7;goto B4b603c;
case 0x4b603e:c.instructions+=6;goto B4b603e;
case 0x4b6040:c.instructions+=5;goto B4b6040;
case 0x4b6042:c.instructions+=4;goto B4b6042;
case 0x4b6047:c.instructions+=3;goto B4b6047;
case 0x4b6048:c.instructions+=2;goto B4b6048;
case 0x4b6049:c.instructions+=1;goto B4b6049;
case 0x4b604e:goto L4b604e;
case 0x4b6051:c.instructions+=3;goto B4b6051;
case 0x4b6056:c.instructions+=2;goto B4b6056;
case 0x4b6057:c.instructions+=1;goto B4b6057;
case 0x4b605c:goto L4b605c;
case 0x4b6062:c.instructions+=5;goto B4b6062;
case 0x4b6066:c.instructions+=4;goto B4b6066;
case 0x4b6068:c.instructions+=3;goto B4b6068;
case 0x4b6069:c.instructions+=2;goto B4b6069;
case 0x4b606a:c.instructions+=1;goto B4b606a;
case 0x4b606f:goto L4b606f;
case 0x4b6072:c.instructions+=3;goto B4b6072;
case 0x4b6077:c.instructions+=2;goto B4b6077;
case 0x4b6078:c.instructions+=1;goto B4b6078;
case 0x4b6080:goto L4b6080;
case 0x4b6084:c.instructions+=12;goto B4b6084;
case 0x4b6088:c.instructions+=11;goto B4b6088;
case 0x4b6089:c.instructions+=10;goto B4b6089;
case 0x4b608a:c.instructions+=9;goto B4b608a;
case 0x4b608e:c.instructions+=8;goto B4b608e;
case 0x4b6090:c.instructions+=7;goto B4b6090;
case 0x4b6094:c.instructions+=6;goto B4b6094;
case 0x4b6095:c.instructions+=5;goto B4b6095;
case 0x4b6096:c.instructions+=4;goto B4b6096;
case 0x4b6097:c.instructions+=3;goto B4b6097;
case 0x4b6098:c.instructions+=2;goto B4b6098;
case 0x4b609a:c.instructions+=1;goto B4b609a;
case 0x4b609f:goto L4b609f;
case 0x4b60a5:c.instructions+=1;goto B4b60a5;
case 0x4b60ab:goto L4b60ab;
case 0x4b60ad:goto L4b60ad;
case 0x4b60b3:c.instructions+=1;goto B4b60b3;
case 0x4b60b5:goto L4b60b5;
case 0x4b60bb:c.instructions+=1;goto B4b60bb;
case 0x4b60c1:goto L4b60c1;
case 0x4b60c3:c.instructions+=2;goto B4b60c3;
case 0x4b60cd:c.instructions+=1;goto B4b60cd;
case 0x4b60d2:goto L4b60d2;
case 0x4b60d3:c.instructions+=2;goto B4b60d3;
case 0x4b60d4:c.instructions+=1;goto B4b60d4;
case 0x4b60d7:goto L4b60d7;
case 0x4b60da:c.instructions+=4;goto B4b60da;
case 0x4b60df:c.instructions+=3;goto B4b60df;
case 0x4b60e4:c.instructions+=2;goto B4b60e4;
case 0x4b60e5:c.instructions+=1;goto B4b60e5;
case 0x4b60ea:goto L4b60ea;
case 0x4b60ed:c.instructions+=2;goto B4b60ed;
case 0x4b60ef:c.instructions+=1;goto B4b60ef;
case 0x4b60f5:goto L4b60f5;
case 0x4b60fc:c.instructions+=1;goto B4b60fc;
case 0x4b6102:goto L4b6102;
case 0x4b6105:c.instructions+=5;goto B4b6105;
case 0x4b6107:c.instructions+=4;goto B4b6107;
case 0x4b610c:c.instructions+=3;goto B4b610c;
case 0x4b6111:c.instructions+=2;goto B4b6111;
case 0x4b6112:c.instructions+=1;goto B4b6112;
case 0x4b6117:goto L4b6117;
case 0x4b611a:c.instructions+=3;goto B4b611a;
case 0x4b611b:c.instructions+=2;goto B4b611b;
case 0x4b611c:c.instructions+=1;goto B4b611c;
case 0x4b611f:goto L4b611f;
case 0x4b6122:c.instructions+=4;goto B4b6122;
case 0x4b6127:c.instructions+=3;goto B4b6127;
case 0x4b612c:c.instructions+=2;goto B4b612c;
case 0x4b612d:c.instructions+=1;goto B4b612d;
case 0x4b6132:goto L4b6132;
case 0x4b6135:c.instructions+=2;goto B4b6135;
case 0x4b6137:c.instructions+=1;goto B4b6137;
case 0x4b613d:goto L4b613d;
case 0x4b6140:c.instructions+=5;goto B4b6140;
case 0x4b6142:c.instructions+=4;goto B4b6142;
case 0x4b6147:c.instructions+=3;goto B4b6147;
case 0x4b614c:c.instructions+=2;goto B4b614c;
case 0x4b614d:c.instructions+=1;goto B4b614d;
case 0x4b6152:goto L4b6152;
case 0x4b6155:c.instructions+=3;goto B4b6155;
case 0x4b6156:c.instructions+=2;goto B4b6156;
case 0x4b6157:c.instructions+=1;goto B4b6157;
case 0x4b615a:goto L4b615a;
case 0x4b6160:c.instructions+=1;goto B4b6160;
case 0x4b6166:goto L4b6166;
case 0x4b616c:c.instructions+=2;goto B4b616c;
case 0x4b6171:c.instructions+=1;goto B4b6171;
case 0x4b6173:goto L4b6173;
case 0x4b6178:c.instructions+=2;goto B4b6178;
case 0x4b617b:c.instructions+=1;goto B4b617b;
case 0x4b6181:goto L4b6181;
case 0x4b6188:goto L4b6188;
case 0x4b618b:c.instructions+=4;goto B4b618b;
case 0x4b618d:c.instructions+=3;goto B4b618d;
case 0x4b6192:c.instructions+=2;goto B4b6192;
case 0x4b6193:c.instructions+=1;goto B4b6193;
case 0x4b6198:goto L4b6198;
case 0x4b619b:c.instructions+=3;goto B4b619b;
case 0x4b619c:c.instructions+=2;goto B4b619c;
case 0x4b619d:c.instructions+=1;goto B4b619d;
case 0x4b61a0:goto L4b61a0;
case 0x4b61a3:c.instructions+=4;goto B4b61a3;
case 0x4b61a5:c.instructions+=3;goto B4b61a5;
case 0x4b61aa:c.instructions+=2;goto B4b61aa;
case 0x4b61ab:c.instructions+=1;goto B4b61ab;
case 0x4b61b0:goto L4b61b0;
case 0x4b61b3:c.instructions+=3;goto B4b61b3;
case 0x4b61b4:c.instructions+=2;goto B4b61b4;
case 0x4b61b5:c.instructions+=1;goto B4b61b5;
case 0x4b61b8:goto L4b61b8;
case 0x4b61bb:c.instructions+=4;goto B4b61bb;
case 0x4b61bd:c.instructions+=3;goto B4b61bd;
case 0x4b61c2:c.instructions+=2;goto B4b61c2;
case 0x4b61c3:c.instructions+=1;goto B4b61c3;
case 0x4b61c8:goto L4b61c8;
case 0x4b61cb:c.instructions+=3;goto B4b61cb;
case 0x4b61cc:c.instructions+=2;goto B4b61cc;
case 0x4b61cd:c.instructions+=1;goto B4b61cd;
case 0x4b61d0:goto L4b61d0;
case 0x4b61d3:c.instructions+=4;goto B4b61d3;
case 0x4b61d5:c.instructions+=3;goto B4b61d5;
case 0x4b61da:c.instructions+=2;goto B4b61da;
case 0x4b61db:c.instructions+=1;goto B4b61db;
case 0x4b61e0:goto L4b61e0;
case 0x4b61e3:c.instructions+=3;goto B4b61e3;
case 0x4b61e4:c.instructions+=2;goto B4b61e4;
case 0x4b61e5:c.instructions+=1;goto B4b61e5;
case 0x4b61e8:goto L4b61e8;
case 0x4b61ed:c.instructions+=1;goto B4b61ed;
case 0x4b61ef:goto L4b61ef;
case 0x4b61f2:c.instructions+=3;goto B4b61f2;
case 0x4b61f4:c.instructions+=2;goto B4b61f4;
case 0x4b61f5:c.instructions+=1;goto B4b61f5;
case 0x4b61fa:goto L4b61fa;
case 0x4b61fd:c.instructions+=2;goto B4b61fd;
case 0x4b61fe:c.instructions+=1;goto B4b61fe;
case 0x4b6203:goto L4b6203;
case 0x4b6206:goto L4b6206;
case 0x4b6207:c.instructions+=2;goto B4b6207;
case 0x4b6208:c.instructions+=1;goto B4b6208;
case 0x4b6230:goto L4b6230;
case 0x4b6232:c.instructions+=11;goto B4b6232;
case 0x4b6237:c.instructions+=10;goto B4b6237;
case 0x4b623d:c.instructions+=9;goto B4b623d;
case 0x4b623e:c.instructions+=8;goto B4b623e;
case 0x4b6245:c.instructions+=7;goto B4b6245;
case 0x4b6246:c.instructions+=6;goto B4b6246;
case 0x4b6247:c.instructions+=5;goto B4b6247;
case 0x4b6248:c.instructions+=4;goto B4b6248;
case 0x4b6249:c.instructions+=3;goto B4b6249;
case 0x4b624b:c.instructions+=2;goto B4b624b;
case 0x4b624d:c.instructions+=1;goto B4b624d;
case 0x4b6252:goto L4b6252;
case 0x4b6254:c.instructions+=5;goto B4b6254;
case 0x4b6257:c.instructions+=4;goto B4b6257;
case 0x4b625b:c.instructions+=3;goto B4b625b;
case 0x4b625d:c.instructions+=2;goto B4b625d;
case 0x4b6265:c.instructions+=1;goto B4b6265;
case 0x4b6267:goto L4b6267;
case 0x4b6269:c.instructions+=4;goto B4b6269;
case 0x4b626e:c.instructions+=3;goto B4b626e;
case 0x4b6273:c.instructions+=2;goto B4b6273;
case 0x4b6275:c.instructions+=1;goto B4b6275;
case 0x4b627a:goto L4b627a;
case 0x4b6280:c.instructions+=1;goto B4b6280;
case 0x4b6282:goto L4b6282;
case 0x4b6284:goto L4b6284;
case 0x4b6286:c.instructions+=5;goto B4b6286;
case 0x4b6289:c.instructions+=4;goto B4b6289;
case 0x4b628a:c.instructions+=3;goto B4b628a;
case 0x4b628c:c.instructions+=2;goto B4b628c;
case 0x4b6290:c.instructions+=1;goto B4b6290;
case 0x4b6293:goto L4b6293;
case 0x4b6295:c.instructions+=1;goto B4b6295;
case 0x4b629a:goto L4b629a;
case 0x4b629c:c.instructions+=5;goto B4b629c;
case 0x4b629f:c.instructions+=4;goto B4b629f;
case 0x4b62a3:c.instructions+=3;goto B4b62a3;
case 0x4b62a5:c.instructions+=2;goto B4b62a5;
case 0x4b62ad:c.instructions+=1;goto B4b62ad;
case 0x4b62af:goto L4b62af;
case 0x4b62b1:c.instructions+=4;goto B4b62b1;
case 0x4b62b6:c.instructions+=3;goto B4b62b6;
case 0x4b62bb:c.instructions+=2;goto B4b62bb;
case 0x4b62bd:c.instructions+=1;goto B4b62bd;
case 0x4b62c2:goto L4b62c2;
case 0x4b62c8:c.instructions+=1;goto B4b62c8;
case 0x4b62ca:goto L4b62ca;
case 0x4b62cc:goto L4b62cc;
case 0x4b62ce:c.instructions+=4;goto B4b62ce;
case 0x4b62cf:c.instructions+=3;goto B4b62cf;
case 0x4b62d1:c.instructions+=2;goto B4b62d1;
case 0x4b62d5:c.instructions+=1;goto B4b62d5;
case 0x4b62d8:goto L4b62d8;
case 0x4b62da:c.instructions+=1;goto B4b62da;
case 0x4b62df:goto L4b62df;
case 0x4b62e1:c.instructions+=5;goto B4b62e1;
case 0x4b62e4:c.instructions+=4;goto B4b62e4;
case 0x4b62e8:c.instructions+=3;goto B4b62e8;
case 0x4b62ea:c.instructions+=2;goto B4b62ea;
case 0x4b62f2:c.instructions+=1;goto B4b62f2;
case 0x4b62f4:goto L4b62f4;
case 0x4b62f6:c.instructions+=4;goto B4b62f6;
case 0x4b62fb:c.instructions+=3;goto B4b62fb;
case 0x4b6300:c.instructions+=2;goto B4b6300;
case 0x4b6302:c.instructions+=1;goto B4b6302;
case 0x4b6307:goto L4b6307;
case 0x4b630d:c.instructions+=1;goto B4b630d;
case 0x4b630f:goto L4b630f;
case 0x4b6311:goto L4b6311;
case 0x4b6313:c.instructions+=4;goto B4b6313;
case 0x4b6314:c.instructions+=3;goto B4b6314;
case 0x4b6316:c.instructions+=2;goto B4b6316;
case 0x4b631a:c.instructions+=1;goto B4b631a;
case 0x4b631d:goto L4b631d;
case 0x4b631f:c.instructions+=1;goto B4b631f;
case 0x4b6324:goto L4b6324;
case 0x4b6326:c.instructions+=5;goto B4b6326;
case 0x4b6329:c.instructions+=4;goto B4b6329;
case 0x4b632d:c.instructions+=3;goto B4b632d;
case 0x4b632f:c.instructions+=2;goto B4b632f;
case 0x4b6337:c.instructions+=1;goto B4b6337;
case 0x4b6339:goto L4b6339;
case 0x4b633b:c.instructions+=4;goto B4b633b;
case 0x4b6340:c.instructions+=3;goto B4b6340;
case 0x4b6345:c.instructions+=2;goto B4b6345;
case 0x4b6347:c.instructions+=1;goto B4b6347;
case 0x4b634c:goto L4b634c;
case 0x4b6352:c.instructions+=1;goto B4b6352;
case 0x4b6354:goto L4b6354;
case 0x4b6356:goto L4b6356;
case 0x4b6358:c.instructions+=4;goto B4b6358;
case 0x4b6359:c.instructions+=3;goto B4b6359;
case 0x4b635b:c.instructions+=2;goto B4b635b;
case 0x4b635f:c.instructions+=1;goto B4b635f;
case 0x4b6362:goto L4b6362;
case 0x4b6364:c.instructions+=1;goto B4b6364;
case 0x4b6369:goto L4b6369;
case 0x4b636b:c.instructions+=5;goto B4b636b;
case 0x4b636e:c.instructions+=4;goto B4b636e;
case 0x4b6372:c.instructions+=3;goto B4b6372;
case 0x4b6374:c.instructions+=2;goto B4b6374;
case 0x4b637c:c.instructions+=1;goto B4b637c;
case 0x4b637e:goto L4b637e;
case 0x4b6380:c.instructions+=4;goto B4b6380;
case 0x4b6385:c.instructions+=3;goto B4b6385;
case 0x4b638a:c.instructions+=2;goto B4b638a;
case 0x4b638c:c.instructions+=1;goto B4b638c;
case 0x4b6391:goto L4b6391;
case 0x4b6397:c.instructions+=1;goto B4b6397;
case 0x4b6399:goto L4b6399;
case 0x4b639b:goto L4b639b;
case 0x4b639d:c.instructions+=4;goto B4b639d;
case 0x4b639e:c.instructions+=3;goto B4b639e;
case 0x4b63a0:c.instructions+=2;goto B4b63a0;
case 0x4b63a4:c.instructions+=1;goto B4b63a4;
case 0x4b63a7:goto L4b63a7;
case 0x4b63ae:c.instructions+=2;goto B4b63ae;
case 0x4b63b0:c.instructions+=1;goto B4b63b0;
case 0x4b63b6:goto L4b63b6;
case 0x4b63bb:goto L4b63bb;
case 0x4b63bd:c.instructions+=5;goto B4b63bd;
case 0x4b63c0:c.instructions+=4;goto B4b63c0;
case 0x4b63c4:c.instructions+=3;goto B4b63c4;
case 0x4b63c6:c.instructions+=2;goto B4b63c6;
case 0x4b63ce:c.instructions+=1;goto B4b63ce;
case 0x4b63d0:goto L4b63d0;
case 0x4b63d2:c.instructions+=4;goto B4b63d2;
case 0x4b63d7:c.instructions+=3;goto B4b63d7;
case 0x4b63dc:c.instructions+=2;goto B4b63dc;
case 0x4b63de:c.instructions+=1;goto B4b63de;
case 0x4b63e3:goto L4b63e3;
case 0x4b63e9:c.instructions+=1;goto B4b63e9;
case 0x4b63eb:goto L4b63eb;
case 0x4b63ed:goto L4b63ed;
case 0x4b63ef:c.instructions+=4;goto B4b63ef;
case 0x4b63f0:c.instructions+=3;goto B4b63f0;
case 0x4b63f2:c.instructions+=2;goto B4b63f2;
case 0x4b63f6:c.instructions+=1;goto B4b63f6;
case 0x4b63f9:goto L4b63f9;
case 0x4b63fb:c.instructions+=1;goto B4b63fb;
case 0x4b6400:goto L4b6400;
case 0x4b6402:c.instructions+=5;goto B4b6402;
case 0x4b6405:c.instructions+=4;goto B4b6405;
case 0x4b6409:c.instructions+=3;goto B4b6409;
case 0x4b640b:c.instructions+=2;goto B4b640b;
case 0x4b6413:c.instructions+=1;goto B4b6413;
case 0x4b6419:goto L4b6419;
case 0x4b641b:c.instructions+=4;goto B4b641b;
case 0x4b6420:c.instructions+=3;goto B4b6420;
case 0x4b6425:c.instructions+=2;goto B4b6425;
case 0x4b6427:c.instructions+=1;goto B4b6427;
case 0x4b642c:goto L4b642c;
case 0x4b6432:c.instructions+=1;goto B4b6432;
case 0x4b6437:goto L4b6437;
case 0x4b6441:c.instructions+=1;goto B4b6441;
case 0x4b6443:goto L4b6443;
case 0x4b6448:goto L4b6448;
case 0x4b644a:c.instructions+=5;goto B4b644a;
case 0x4b644d:c.instructions+=4;goto B4b644d;
case 0x4b6451:c.instructions+=3;goto B4b6451;
case 0x4b6453:c.instructions+=2;goto B4b6453;
case 0x4b645b:c.instructions+=1;goto B4b645b;
case 0x4b645d:goto L4b645d;
case 0x4b645f:c.instructions+=4;goto B4b645f;
case 0x4b6464:c.instructions+=3;goto B4b6464;
case 0x4b6469:c.instructions+=2;goto B4b6469;
case 0x4b646b:c.instructions+=1;goto B4b646b;
case 0x4b6470:goto L4b6470;
case 0x4b6476:c.instructions+=5;goto B4b6476;
case 0x4b6478:c.instructions+=4;goto B4b6478;
case 0x4b6479:c.instructions+=3;goto B4b6479;
case 0x4b647b:c.instructions+=2;goto B4b647b;
case 0x4b647f:c.instructions+=1;goto B4b647f;
case 0x4b6482:goto L4b6482;
case 0x4b6484:goto L4b6484;
case 0x4b6486:c.instructions+=5;goto B4b6486;
case 0x4b6488:c.instructions+=4;goto B4b6488;
case 0x4b6489:c.instructions+=3;goto B4b6489;
case 0x4b648b:c.instructions+=2;goto B4b648b;
case 0x4b648f:c.instructions+=1;goto B4b648f;
case 0x4b6492:goto L4b6492;
case 0x4b6494:goto L4b6494;
case 0x4b6499:goto L4b6499;
case 0x4b649b:c.instructions+=5;goto B4b649b;
case 0x4b649e:c.instructions+=4;goto B4b649e;
case 0x4b64a2:c.instructions+=3;goto B4b64a2;
case 0x4b64a4:c.instructions+=2;goto B4b64a4;
case 0x4b64ac:c.instructions+=1;goto B4b64ac;
case 0x4b64ae:goto L4b64ae;
case 0x4b64b0:c.instructions+=4;goto B4b64b0;
case 0x4b64b5:c.instructions+=3;goto B4b64b5;
case 0x4b64ba:c.instructions+=2;goto B4b64ba;
case 0x4b64bc:c.instructions+=1;goto B4b64bc;
case 0x4b64c1:goto L4b64c1;
case 0x4b64c7:c.instructions+=1;goto B4b64c7;
case 0x4b64c9:goto L4b64c9;
case 0x4b64cb:goto L4b64cb;
case 0x4b64cd:c.instructions+=4;goto B4b64cd;
case 0x4b64cf:c.instructions+=3;goto B4b64cf;
case 0x4b64d0:c.instructions+=2;goto B4b64d0;
case 0x4b64d4:c.instructions+=1;goto B4b64d4;
case 0x4b64d7:goto L4b64d7;
case 0x4b64da:c.instructions+=4;goto B4b64da;
case 0x4b64dd:c.instructions+=3;goto B4b64dd;
case 0x4b64e0:c.instructions+=2;goto B4b64e0;
case 0x4b64e1:c.instructions+=1;goto B4b64e1;
case 0x4b64e6:goto L4b64e6;
case 0x4b64e9:c.instructions+=3;goto B4b64e9;
case 0x4b64ea:c.instructions+=2;goto B4b64ea;
case 0x4b64ec:c.instructions+=1;goto B4b64ec;
case 0x4b64ef:goto L4b64ef;
case 0x4b64f1:c.instructions+=2;goto B4b64f1;
case 0x4b64f3:c.instructions+=1;goto B4b64f3;
case 0x4b64f6:goto L4b64f6;
case 0x4b64fa:c.instructions+=6;goto B4b64fa;
case 0x4b64fb:c.instructions+=5;goto B4b64fb;
case 0x4b64fc:c.instructions+=4;goto B4b64fc;
case 0x4b64fd:c.instructions+=3;goto B4b64fd;
case 0x4b6504:c.instructions+=2;goto B4b6504;
case 0x4b6507:c.instructions+=1;goto B4b6507;
case 0x4b6510:goto L4b6510;
case 0x4b6512:c.instructions+=13;goto B4b6512;
case 0x4b6517:c.instructions+=12;goto B4b6517;
case 0x4b651d:c.instructions+=11;goto B4b651d;
case 0x4b651e:c.instructions+=10;goto B4b651e;
case 0x4b6525:c.instructions+=9;goto B4b6525;
case 0x4b6526:c.instructions+=8;goto B4b6526;
case 0x4b652b:c.instructions+=7;goto B4b652b;
case 0x4b652c:c.instructions+=6;goto B4b652c;
case 0x4b652d:c.instructions+=5;goto B4b652d;
case 0x4b6530:c.instructions+=4;goto B4b6530;
case 0x4b6532:c.instructions+=3;goto B4b6532;
case 0x4b6533:c.instructions+=2;goto B4b6533;
case 0x4b6535:c.instructions+=1;goto B4b6535;
case 0x4b653b:goto L4b653b;
case 0x4b653c:c.instructions+=2;goto B4b653c;
case 0x4b6541:c.instructions+=1;goto B4b6541;
case 0x4b6546:goto L4b6546;
case 0x4b6548:c.instructions+=5;goto B4b6548;
case 0x4b654b:c.instructions+=4;goto B4b654b;
case 0x4b654f:c.instructions+=3;goto B4b654f;
case 0x4b6551:c.instructions+=2;goto B4b6551;
case 0x4b6559:c.instructions+=1;goto B4b6559;
case 0x4b655b:goto L4b655b;
case 0x4b655d:c.instructions+=10;goto B4b655d;
case 0x4b6563:c.instructions+=9;goto B4b6563;
case 0x4b6564:c.instructions+=8;goto B4b6564;
case 0x4b656a:c.instructions+=7;goto B4b656a;
case 0x4b656b:c.instructions+=6;goto B4b656b;
case 0x4b6571:c.instructions+=5;goto B4b6571;
case 0x4b6572:c.instructions+=4;goto B4b6572;
case 0x4b6578:c.instructions+=3;goto B4b6578;
case 0x4b6579:c.instructions+=2;goto B4b6579;
case 0x4b657b:c.instructions+=1;goto B4b657b;
case 0x4b6580:goto L4b6580;
case 0x4b6586:c.instructions+=1;goto B4b6586;
case 0x4b6588:goto L4b6588;
case 0x4b658a:goto L4b658a;
case 0x4b658c:c.instructions+=4;goto B4b658c;
case 0x4b658d:c.instructions+=3;goto B4b658d;
case 0x4b658f:c.instructions+=2;goto B4b658f;
case 0x4b6593:c.instructions+=1;goto B4b6593;
case 0x4b6598:goto L4b6598;
case 0x4b659d:c.instructions+=1;goto B4b659d;
case 0x4b65a2:goto L4b65a2;
case 0x4b65a4:c.instructions+=2;goto B4b65a4;
case 0x4b65a5:c.instructions+=1;goto B4b65a5;
case 0x4b65aa:goto L4b65aa;
case 0x4b65ad:c.instructions+=2;goto B4b65ad;
case 0x4b65af:c.instructions+=1;goto B4b65af;
case 0x4b65b1:goto L4b65b1;
case 0x4b65b4:c.instructions+=3;goto B4b65b4;
case 0x4b65b9:c.instructions+=2;goto B4b65b9;
case 0x4b65ba:c.instructions+=1;goto B4b65ba;
case 0x4b65bf:goto L4b65bf;
case 0x4b65c1:c.instructions+=2;goto B4b65c1;
case 0x4b65c4:c.instructions+=1;goto B4b65c4;
case 0x4b65c9:goto L4b65c9;
case 0x4b65cb:c.instructions+=5;goto B4b65cb;
case 0x4b65ce:c.instructions+=4;goto B4b65ce;
case 0x4b65d2:c.instructions+=3;goto B4b65d2;
case 0x4b65d4:c.instructions+=2;goto B4b65d4;
case 0x4b65dc:c.instructions+=1;goto B4b65dc;
case 0x4b65de:goto L4b65de;
case 0x4b65e0:c.instructions+=6;goto B4b65e0;
case 0x4b65e6:c.instructions+=5;goto B4b65e6;
case 0x4b65e7:c.instructions+=4;goto B4b65e7;
case 0x4b65ed:c.instructions+=3;goto B4b65ed;
case 0x4b65ee:c.instructions+=2;goto B4b65ee;
case 0x4b65f0:c.instructions+=1;goto B4b65f0;
case 0x4b65f5:goto L4b65f5;
case 0x4b65fb:c.instructions+=1;goto B4b65fb;
case 0x4b65fd:goto L4b65fd;
case 0x4b65ff:goto L4b65ff;
case 0x4b6600:c.instructions+=3;goto B4b6600;
case 0x4b6602:c.instructions+=2;goto B4b6602;
case 0x4b6606:c.instructions+=1;goto B4b6606;
case 0x4b660b:goto L4b660b;
case 0x4b6612:c.instructions+=1;goto B4b6612;
case 0x4b6619:goto L4b6619;
case 0x4b661a:goto L4b661a;
case 0x4b661f:c.instructions+=2;goto B4b661f;
case 0x4b6621:c.instructions+=1;goto B4b6621;
case 0x4b6623:goto L4b6623;
case 0x4b6625:c.instructions+=1;goto B4b6625;
case 0x4b662a:goto L4b662a;
case 0x4b662c:c.instructions+=5;goto B4b662c;
case 0x4b662f:c.instructions+=4;goto B4b662f;
case 0x4b6633:c.instructions+=3;goto B4b6633;
case 0x4b6635:c.instructions+=2;goto B4b6635;
case 0x4b663d:c.instructions+=1;goto B4b663d;
case 0x4b663f:goto L4b663f;
case 0x4b6641:c.instructions+=10;goto B4b6641;
case 0x4b6647:c.instructions+=9;goto B4b6647;
case 0x4b6648:c.instructions+=8;goto B4b6648;
case 0x4b664e:c.instructions+=7;goto B4b664e;
case 0x4b664f:c.instructions+=6;goto B4b664f;
case 0x4b6655:c.instructions+=5;goto B4b6655;
case 0x4b6656:c.instructions+=4;goto B4b6656;
case 0x4b665c:c.instructions+=3;goto B4b665c;
case 0x4b665d:c.instructions+=2;goto B4b665d;
case 0x4b665f:c.instructions+=1;goto B4b665f;
case 0x4b6664:goto L4b6664;
case 0x4b666a:c.instructions+=1;goto B4b666a;
case 0x4b666c:goto L4b666c;
case 0x4b666e:goto L4b666e;
case 0x4b6670:c.instructions+=4;goto B4b6670;
case 0x4b6671:c.instructions+=3;goto B4b6671;
case 0x4b6673:c.instructions+=2;goto B4b6673;
case 0x4b6677:c.instructions+=1;goto B4b6677;
case 0x4b667c:goto L4b667c;
case 0x4b6681:c.instructions+=2;goto B4b6681;
case 0x4b6683:c.instructions+=1;goto B4b6683;
case 0x4b6685:goto L4b6685;
case 0x4b668a:c.instructions+=1;goto B4b668a;
case 0x4b668f:goto L4b668f;
case 0x4b6691:c.instructions+=5;goto B4b6691;
case 0x4b6694:c.instructions+=4;goto B4b6694;
case 0x4b6698:c.instructions+=3;goto B4b6698;
case 0x4b669a:c.instructions+=2;goto B4b669a;
case 0x4b66a2:c.instructions+=1;goto B4b66a2;
case 0x4b66a4:goto L4b66a4;
case 0x4b66a6:c.instructions+=10;goto B4b66a6;
case 0x4b66ac:c.instructions+=9;goto B4b66ac;
case 0x4b66ad:c.instructions+=8;goto B4b66ad;
case 0x4b66b3:c.instructions+=7;goto B4b66b3;
case 0x4b66b4:c.instructions+=6;goto B4b66b4;
case 0x4b66ba:c.instructions+=5;goto B4b66ba;
case 0x4b66bb:c.instructions+=4;goto B4b66bb;
case 0x4b66c1:c.instructions+=3;goto B4b66c1;
case 0x4b66c2:c.instructions+=2;goto B4b66c2;
case 0x4b66c4:c.instructions+=1;goto B4b66c4;
case 0x4b66c9:goto L4b66c9;
case 0x4b66cf:c.instructions+=1;goto B4b66cf;
case 0x4b66d1:goto L4b66d1;
case 0x4b66d3:goto L4b66d3;
case 0x4b66d5:c.instructions+=4;goto B4b66d5;
case 0x4b66d6:c.instructions+=3;goto B4b66d6;
case 0x4b66d8:c.instructions+=2;goto B4b66d8;
case 0x4b66dc:c.instructions+=1;goto B4b66dc;
case 0x4b66e1:goto L4b66e1;
case 0x4b66e6:c.instructions+=2;goto B4b66e6;
case 0x4b66e8:c.instructions+=1;goto B4b66e8;
case 0x4b66ea:goto L4b66ea;
case 0x4b66ec:c.instructions+=1;goto B4b66ec;
case 0x4b66f1:goto L4b66f1;
case 0x4b66f3:c.instructions+=5;goto B4b66f3;
case 0x4b66f6:c.instructions+=4;goto B4b66f6;
case 0x4b66fa:c.instructions+=3;goto B4b66fa;
case 0x4b66fc:c.instructions+=2;goto B4b66fc;
case 0x4b6704:c.instructions+=1;goto B4b6704;
case 0x4b6706:goto L4b6706;
case 0x4b6708:c.instructions+=10;goto B4b6708;
case 0x4b670e:c.instructions+=9;goto B4b670e;
case 0x4b670f:c.instructions+=8;goto B4b670f;
case 0x4b6715:c.instructions+=7;goto B4b6715;
case 0x4b6716:c.instructions+=6;goto B4b6716;
case 0x4b671c:c.instructions+=5;goto B4b671c;
case 0x4b671d:c.instructions+=4;goto B4b671d;
case 0x4b6723:c.instructions+=3;goto B4b6723;
case 0x4b6724:c.instructions+=2;goto B4b6724;
case 0x4b6726:c.instructions+=1;goto B4b6726;
case 0x4b672b:goto L4b672b;
case 0x4b6731:c.instructions+=1;goto B4b6731;
case 0x4b6733:goto L4b6733;
case 0x4b6735:goto L4b6735;
case 0x4b6737:c.instructions+=4;goto B4b6737;
case 0x4b6738:c.instructions+=3;goto B4b6738;
case 0x4b673a:c.instructions+=2;goto B4b673a;
case 0x4b673e:c.instructions+=1;goto B4b673e;
case 0x4b6743:goto L4b6743;
case 0x4b6748:c.instructions+=2;goto B4b6748;
case 0x4b674a:c.instructions+=1;goto B4b674a;
case 0x4b674c:goto L4b674c;
case 0x4b674e:c.instructions+=1;goto B4b674e;
case 0x4b6753:goto L4b6753;
case 0x4b6755:c.instructions+=5;goto B4b6755;
case 0x4b6758:c.instructions+=4;goto B4b6758;
case 0x4b675c:c.instructions+=3;goto B4b675c;
case 0x4b675e:c.instructions+=2;goto B4b675e;
case 0x4b6766:c.instructions+=1;goto B4b6766;
case 0x4b6768:goto L4b6768;
case 0x4b676a:c.instructions+=10;goto B4b676a;
case 0x4b6770:c.instructions+=9;goto B4b6770;
case 0x4b6771:c.instructions+=8;goto B4b6771;
case 0x4b6777:c.instructions+=7;goto B4b6777;
case 0x4b6778:c.instructions+=6;goto B4b6778;
case 0x4b677e:c.instructions+=5;goto B4b677e;
case 0x4b677f:c.instructions+=4;goto B4b677f;
case 0x4b6785:c.instructions+=3;goto B4b6785;
case 0x4b6786:c.instructions+=2;goto B4b6786;
case 0x4b6788:c.instructions+=1;goto B4b6788;
case 0x4b678d:goto L4b678d;
case 0x4b6793:c.instructions+=1;goto B4b6793;
case 0x4b6795:goto L4b6795;
case 0x4b6797:goto L4b6797;
case 0x4b6799:c.instructions+=4;goto B4b6799;
case 0x4b679a:c.instructions+=3;goto B4b679a;
case 0x4b679c:c.instructions+=2;goto B4b679c;
case 0x4b67a0:c.instructions+=1;goto B4b67a0;
case 0x4b67a5:goto L4b67a5;
case 0x4b67aa:c.instructions+=2;goto B4b67aa;
case 0x4b67ac:c.instructions+=1;goto B4b67ac;
case 0x4b67ae:goto L4b67ae;
case 0x4b67b0:c.instructions+=1;goto B4b67b0;
case 0x4b67b5:goto L4b67b5;
case 0x4b67b7:c.instructions+=5;goto B4b67b7;
case 0x4b67ba:c.instructions+=4;goto B4b67ba;
case 0x4b67be:c.instructions+=3;goto B4b67be;
case 0x4b67c0:c.instructions+=2;goto B4b67c0;
case 0x4b67c8:c.instructions+=1;goto B4b67c8;
case 0x4b67ca:goto L4b67ca;
case 0x4b67cc:c.instructions+=10;goto B4b67cc;
case 0x4b67d2:c.instructions+=9;goto B4b67d2;
case 0x4b67d3:c.instructions+=8;goto B4b67d3;
case 0x4b67d9:c.instructions+=7;goto B4b67d9;
case 0x4b67da:c.instructions+=6;goto B4b67da;
case 0x4b67e0:c.instructions+=5;goto B4b67e0;
case 0x4b67e1:c.instructions+=4;goto B4b67e1;
case 0x4b67e7:c.instructions+=3;goto B4b67e7;
case 0x4b67e8:c.instructions+=2;goto B4b67e8;
case 0x4b67ea:c.instructions+=1;goto B4b67ea;
case 0x4b67ef:goto L4b67ef;
case 0x4b67f5:c.instructions+=1;goto B4b67f5;
case 0x4b67f7:goto L4b67f7;
case 0x4b67f9:goto L4b67f9;
case 0x4b67fb:c.instructions+=4;goto B4b67fb;
case 0x4b67fc:c.instructions+=3;goto B4b67fc;
case 0x4b67fe:c.instructions+=2;goto B4b67fe;
case 0x4b6802:c.instructions+=1;goto B4b6802;
case 0x4b6807:goto L4b6807;
case 0x4b680c:c.instructions+=2;goto B4b680c;
case 0x4b680e:c.instructions+=1;goto B4b680e;
case 0x4b6810:goto L4b6810;
case 0x4b6815:c.instructions+=1;goto B4b6815;
case 0x4b681a:goto L4b681a;
case 0x4b681c:c.instructions+=5;goto B4b681c;
case 0x4b681f:c.instructions+=4;goto B4b681f;
case 0x4b6823:c.instructions+=3;goto B4b6823;
case 0x4b6825:c.instructions+=2;goto B4b6825;
case 0x4b682d:c.instructions+=1;goto B4b682d;
case 0x4b682f:goto L4b682f;
case 0x4b6831:c.instructions+=10;goto B4b6831;
case 0x4b6837:c.instructions+=9;goto B4b6837;
case 0x4b6838:c.instructions+=8;goto B4b6838;
case 0x4b683e:c.instructions+=7;goto B4b683e;
case 0x4b683f:c.instructions+=6;goto B4b683f;
case 0x4b6845:c.instructions+=5;goto B4b6845;
case 0x4b6846:c.instructions+=4;goto B4b6846;
case 0x4b684c:c.instructions+=3;goto B4b684c;
case 0x4b684d:c.instructions+=2;goto B4b684d;
case 0x4b684f:c.instructions+=1;goto B4b684f;
case 0x4b6854:goto L4b6854;
case 0x4b685a:c.instructions+=1;goto B4b685a;
case 0x4b685c:goto L4b685c;
case 0x4b685e:goto L4b685e;
case 0x4b6860:c.instructions+=4;goto B4b6860;
case 0x4b6861:c.instructions+=3;goto B4b6861;
case 0x4b6863:c.instructions+=2;goto B4b6863;
case 0x4b6867:c.instructions+=1;goto B4b6867;
case 0x4b686c:goto L4b686c;
case 0x4b6871:c.instructions+=2;goto B4b6871;
case 0x4b6873:c.instructions+=1;goto B4b6873;
case 0x4b6875:goto L4b6875;
case 0x4b687a:c.instructions+=1;goto B4b687a;
case 0x4b687f:goto L4b687f;
case 0x4b6881:c.instructions+=5;goto B4b6881;
case 0x4b6884:c.instructions+=4;goto B4b6884;
case 0x4b6888:c.instructions+=3;goto B4b6888;
case 0x4b688a:c.instructions+=2;goto B4b688a;
case 0x4b6892:c.instructions+=1;goto B4b6892;
case 0x4b6894:goto L4b6894;
case 0x4b6896:c.instructions+=10;goto B4b6896;
case 0x4b689c:c.instructions+=9;goto B4b689c;
case 0x4b689d:c.instructions+=8;goto B4b689d;
case 0x4b68a3:c.instructions+=7;goto B4b68a3;
case 0x4b68a4:c.instructions+=6;goto B4b68a4;
case 0x4b68aa:c.instructions+=5;goto B4b68aa;
case 0x4b68ab:c.instructions+=4;goto B4b68ab;
case 0x4b68b1:c.instructions+=3;goto B4b68b1;
case 0x4b68b2:c.instructions+=2;goto B4b68b2;
case 0x4b68b4:c.instructions+=1;goto B4b68b4;
case 0x4b68b9:goto L4b68b9;
case 0x4b68bf:c.instructions+=1;goto B4b68bf;
case 0x4b68c1:goto L4b68c1;
case 0x4b68c3:goto L4b68c3;
case 0x4b68c5:c.instructions+=4;goto B4b68c5;
case 0x4b68c6:c.instructions+=3;goto B4b68c6;
case 0x4b68c8:c.instructions+=2;goto B4b68c8;
case 0x4b68cc:c.instructions+=1;goto B4b68cc;
case 0x4b68d1:goto L4b68d1;
case 0x4b68d6:c.instructions+=2;goto B4b68d6;
case 0x4b68d8:c.instructions+=1;goto B4b68d8;
case 0x4b68da:goto L4b68da;
case 0x4b68dc:c.instructions+=1;goto B4b68dc;
case 0x4b68e1:goto L4b68e1;
case 0x4b68e3:c.instructions+=5;goto B4b68e3;
case 0x4b68e6:c.instructions+=4;goto B4b68e6;
case 0x4b68ea:c.instructions+=3;goto B4b68ea;
case 0x4b68ec:c.instructions+=2;goto B4b68ec;
case 0x4b68f4:c.instructions+=1;goto B4b68f4;
case 0x4b68f6:goto L4b68f6;
case 0x4b68f8:c.instructions+=10;goto B4b68f8;
case 0x4b68fe:c.instructions+=9;goto B4b68fe;
case 0x4b68ff:c.instructions+=8;goto B4b68ff;
case 0x4b6905:c.instructions+=7;goto B4b6905;
case 0x4b6906:c.instructions+=6;goto B4b6906;
case 0x4b690c:c.instructions+=5;goto B4b690c;
case 0x4b690d:c.instructions+=4;goto B4b690d;
case 0x4b6913:c.instructions+=3;goto B4b6913;
case 0x4b6914:c.instructions+=2;goto B4b6914;
case 0x4b6916:c.instructions+=1;goto B4b6916;
case 0x4b691b:goto L4b691b;
case 0x4b6921:c.instructions+=1;goto B4b6921;
case 0x4b6923:goto L4b6923;
case 0x4b6925:goto L4b6925;
case 0x4b6927:c.instructions+=4;goto B4b6927;
case 0x4b6928:c.instructions+=3;goto B4b6928;
case 0x4b692a:c.instructions+=2;goto B4b692a;
case 0x4b692e:c.instructions+=1;goto B4b692e;
case 0x4b6933:goto L4b6933;
case 0x4b6938:c.instructions+=2;goto B4b6938;
case 0x4b693a:c.instructions+=1;goto B4b693a;
case 0x4b693c:goto L4b693c;
case 0x4b693e:c.instructions+=1;goto B4b693e;
case 0x4b6943:goto L4b6943;
case 0x4b6945:c.instructions+=5;goto B4b6945;
case 0x4b6948:c.instructions+=4;goto B4b6948;
case 0x4b694c:c.instructions+=3;goto B4b694c;
case 0x4b694e:c.instructions+=2;goto B4b694e;
case 0x4b6956:c.instructions+=1;goto B4b6956;
case 0x4b6958:goto L4b6958;
case 0x4b695a:c.instructions+=10;goto B4b695a;
case 0x4b6960:c.instructions+=9;goto B4b6960;
case 0x4b6961:c.instructions+=8;goto B4b6961;
case 0x4b6967:c.instructions+=7;goto B4b6967;
case 0x4b6968:c.instructions+=6;goto B4b6968;
case 0x4b696e:c.instructions+=5;goto B4b696e;
case 0x4b696f:c.instructions+=4;goto B4b696f;
case 0x4b6975:c.instructions+=3;goto B4b6975;
case 0x4b6976:c.instructions+=2;goto B4b6976;
case 0x4b6978:c.instructions+=1;goto B4b6978;
case 0x4b697d:goto L4b697d;
case 0x4b6983:c.instructions+=1;goto B4b6983;
case 0x4b6985:goto L4b6985;
case 0x4b6987:goto L4b6987;
case 0x4b6989:c.instructions+=4;goto B4b6989;
case 0x4b698a:c.instructions+=3;goto B4b698a;
case 0x4b698c:c.instructions+=2;goto B4b698c;
case 0x4b6990:c.instructions+=1;goto B4b6990;
case 0x4b6995:goto L4b6995;
case 0x4b699a:c.instructions+=2;goto B4b699a;
case 0x4b699c:c.instructions+=1;goto B4b699c;
case 0x4b699e:goto L4b699e;
case 0x4b69a0:c.instructions+=1;goto B4b69a0;
case 0x4b69a5:goto L4b69a5;
case 0x4b69a7:c.instructions+=5;goto B4b69a7;
case 0x4b69aa:c.instructions+=4;goto B4b69aa;
case 0x4b69ae:c.instructions+=3;goto B4b69ae;
case 0x4b69b0:c.instructions+=2;goto B4b69b0;
case 0x4b69b8:c.instructions+=1;goto B4b69b8;
case 0x4b69ba:goto L4b69ba;
case 0x4b69bc:c.instructions+=10;goto B4b69bc;
case 0x4b69c2:c.instructions+=9;goto B4b69c2;
case 0x4b69c3:c.instructions+=8;goto B4b69c3;
case 0x4b69c9:c.instructions+=7;goto B4b69c9;
case 0x4b69ca:c.instructions+=6;goto B4b69ca;
case 0x4b69d0:c.instructions+=5;goto B4b69d0;
case 0x4b69d1:c.instructions+=4;goto B4b69d1;
case 0x4b69d7:c.instructions+=3;goto B4b69d7;
case 0x4b69d8:c.instructions+=2;goto B4b69d8;
case 0x4b69da:c.instructions+=1;goto B4b69da;
case 0x4b69df:goto L4b69df;
case 0x4b69e5:c.instructions+=1;goto B4b69e5;
case 0x4b69e7:goto L4b69e7;
case 0x4b69e9:goto L4b69e9;
case 0x4b69eb:c.instructions+=4;goto B4b69eb;
case 0x4b69ec:c.instructions+=3;goto B4b69ec;
case 0x4b69ee:c.instructions+=2;goto B4b69ee;
case 0x4b69f2:c.instructions+=1;goto B4b69f2;
case 0x4b69f7:goto L4b69f7;
case 0x4b69fc:c.instructions+=2;goto B4b69fc;
case 0x4b69fe:c.instructions+=1;goto B4b69fe;
case 0x4b6a00:goto L4b6a00;
case 0x4b6a02:c.instructions+=1;goto B4b6a02;
case 0x4b6a07:goto L4b6a07;
case 0x4b6a09:c.instructions+=5;goto B4b6a09;
case 0x4b6a0c:c.instructions+=4;goto B4b6a0c;
case 0x4b6a10:c.instructions+=3;goto B4b6a10;
case 0x4b6a12:c.instructions+=2;goto B4b6a12;
case 0x4b6a1a:c.instructions+=1;goto B4b6a1a;
case 0x4b6a1c:goto L4b6a1c;
case 0x4b6a1e:c.instructions+=10;goto B4b6a1e;
case 0x4b6a24:c.instructions+=9;goto B4b6a24;
case 0x4b6a25:c.instructions+=8;goto B4b6a25;
case 0x4b6a2b:c.instructions+=7;goto B4b6a2b;
case 0x4b6a2c:c.instructions+=6;goto B4b6a2c;
case 0x4b6a32:c.instructions+=5;goto B4b6a32;
case 0x4b6a33:c.instructions+=4;goto B4b6a33;
case 0x4b6a39:c.instructions+=3;goto B4b6a39;
case 0x4b6a3a:c.instructions+=2;goto B4b6a3a;
case 0x4b6a3c:c.instructions+=1;goto B4b6a3c;
case 0x4b6a41:goto L4b6a41;
case 0x4b6a47:c.instructions+=1;goto B4b6a47;
case 0x4b6a49:goto L4b6a49;
case 0x4b6a4b:goto L4b6a4b;
case 0x4b6a4d:c.instructions+=4;goto B4b6a4d;
case 0x4b6a4e:c.instructions+=3;goto B4b6a4e;
case 0x4b6a50:c.instructions+=2;goto B4b6a50;
case 0x4b6a54:c.instructions+=1;goto B4b6a54;
case 0x4b6a59:goto L4b6a59;
case 0x4b6a5e:c.instructions+=2;goto B4b6a5e;
case 0x4b6a60:c.instructions+=1;goto B4b6a60;
case 0x4b6a62:goto L4b6a62;
case 0x4b6a64:c.instructions+=1;goto B4b6a64;
case 0x4b6a69:goto L4b6a69;
case 0x4b6a6b:c.instructions+=5;goto B4b6a6b;
case 0x4b6a6e:c.instructions+=4;goto B4b6a6e;
case 0x4b6a72:c.instructions+=3;goto B4b6a72;
case 0x4b6a74:c.instructions+=2;goto B4b6a74;
case 0x4b6a7c:c.instructions+=1;goto B4b6a7c;
case 0x4b6a7e:goto L4b6a7e;
case 0x4b6a80:c.instructions+=10;goto B4b6a80;
case 0x4b6a86:c.instructions+=9;goto B4b6a86;
case 0x4b6a87:c.instructions+=8;goto B4b6a87;
case 0x4b6a8d:c.instructions+=7;goto B4b6a8d;
case 0x4b6a8e:c.instructions+=6;goto B4b6a8e;
case 0x4b6a94:c.instructions+=5;goto B4b6a94;
case 0x4b6a95:c.instructions+=4;goto B4b6a95;
case 0x4b6a9b:c.instructions+=3;goto B4b6a9b;
case 0x4b6a9c:c.instructions+=2;goto B4b6a9c;
case 0x4b6a9e:c.instructions+=1;goto B4b6a9e;
case 0x4b6aa3:goto L4b6aa3;
case 0x4b6aa9:c.instructions+=1;goto B4b6aa9;
case 0x4b6aab:goto L4b6aab;
case 0x4b6aad:goto L4b6aad;
case 0x4b6aaf:c.instructions+=4;goto B4b6aaf;
case 0x4b6ab0:c.instructions+=3;goto B4b6ab0;
case 0x4b6ab2:c.instructions+=2;goto B4b6ab2;
case 0x4b6ab6:c.instructions+=1;goto B4b6ab6;
case 0x4b6abb:goto L4b6abb;
case 0x4b6ac0:c.instructions+=2;goto B4b6ac0;
case 0x4b6ac2:c.instructions+=1;goto B4b6ac2;
case 0x4b6ac4:goto L4b6ac4;
case 0x4b6ac6:c.instructions+=1;goto B4b6ac6;
case 0x4b6acb:goto L4b6acb;
case 0x4b6acd:c.instructions+=5;goto B4b6acd;
case 0x4b6ad0:c.instructions+=4;goto B4b6ad0;
case 0x4b6ad4:c.instructions+=3;goto B4b6ad4;
case 0x4b6ad6:c.instructions+=2;goto B4b6ad6;
case 0x4b6ade:c.instructions+=1;goto B4b6ade;
case 0x4b6ae0:goto L4b6ae0;
case 0x4b6ae2:c.instructions+=10;goto B4b6ae2;
case 0x4b6ae8:c.instructions+=9;goto B4b6ae8;
case 0x4b6ae9:c.instructions+=8;goto B4b6ae9;
case 0x4b6aef:c.instructions+=7;goto B4b6aef;
case 0x4b6af0:c.instructions+=6;goto B4b6af0;
case 0x4b6af6:c.instructions+=5;goto B4b6af6;
case 0x4b6af7:c.instructions+=4;goto B4b6af7;
case 0x4b6afd:c.instructions+=3;goto B4b6afd;
case 0x4b6afe:c.instructions+=2;goto B4b6afe;
case 0x4b6b00:c.instructions+=1;goto B4b6b00;
case 0x4b6b05:goto L4b6b05;
case 0x4b6b0b:c.instructions+=1;goto B4b6b0b;
case 0x4b6b0d:goto L4b6b0d;
case 0x4b6b0f:goto L4b6b0f;
case 0x4b6b11:c.instructions+=4;goto B4b6b11;
case 0x4b6b12:c.instructions+=3;goto B4b6b12;
case 0x4b6b14:c.instructions+=2;goto B4b6b14;
case 0x4b6b18:c.instructions+=1;goto B4b6b18;
case 0x4b6b1d:goto L4b6b1d;
case 0x4b6b22:c.instructions+=2;goto B4b6b22;
case 0x4b6b24:c.instructions+=1;goto B4b6b24;
case 0x4b6b26:goto L4b6b26;
case 0x4b6b2b:c.instructions+=1;goto B4b6b2b;
case 0x4b6b30:goto L4b6b30;
case 0x4b6b32:c.instructions+=5;goto B4b6b32;
case 0x4b6b35:c.instructions+=4;goto B4b6b35;
case 0x4b6b39:c.instructions+=3;goto B4b6b39;
case 0x4b6b3b:c.instructions+=2;goto B4b6b3b;
case 0x4b6b43:c.instructions+=1;goto B4b6b43;
case 0x4b6b45:goto L4b6b45;
case 0x4b6b47:c.instructions+=10;goto B4b6b47;
case 0x4b6b4d:c.instructions+=9;goto B4b6b4d;
case 0x4b6b4e:c.instructions+=8;goto B4b6b4e;
case 0x4b6b54:c.instructions+=7;goto B4b6b54;
case 0x4b6b55:c.instructions+=6;goto B4b6b55;
case 0x4b6b5b:c.instructions+=5;goto B4b6b5b;
case 0x4b6b5c:c.instructions+=4;goto B4b6b5c;
case 0x4b6b62:c.instructions+=3;goto B4b6b62;
case 0x4b6b63:c.instructions+=2;goto B4b6b63;
case 0x4b6b65:c.instructions+=1;goto B4b6b65;
case 0x4b6b6a:goto L4b6b6a;
case 0x4b6b70:c.instructions+=1;goto B4b6b70;
case 0x4b6b72:goto L4b6b72;
case 0x4b6b74:goto L4b6b74;
case 0x4b6b76:c.instructions+=4;goto B4b6b76;
case 0x4b6b77:c.instructions+=3;goto B4b6b77;
case 0x4b6b79:c.instructions+=2;goto B4b6b79;
case 0x4b6b7d:c.instructions+=1;goto B4b6b7d;
case 0x4b6b82:goto L4b6b82;
case 0x4b6b87:c.instructions+=2;goto B4b6b87;
case 0x4b6b89:c.instructions+=1;goto B4b6b89;
case 0x4b6b8b:goto L4b6b8b;
case 0x4b6b8d:c.instructions+=1;goto B4b6b8d;
case 0x4b6b92:goto L4b6b92;
case 0x4b6b94:c.instructions+=5;goto B4b6b94;
case 0x4b6b97:c.instructions+=4;goto B4b6b97;
case 0x4b6b9b:c.instructions+=3;goto B4b6b9b;
case 0x4b6b9d:c.instructions+=2;goto B4b6b9d;
case 0x4b6ba5:c.instructions+=1;goto B4b6ba5;
case 0x4b6ba7:goto L4b6ba7;
case 0x4b6ba9:c.instructions+=10;goto B4b6ba9;
case 0x4b6baf:c.instructions+=9;goto B4b6baf;
case 0x4b6bb0:c.instructions+=8;goto B4b6bb0;
case 0x4b6bb6:c.instructions+=7;goto B4b6bb6;
case 0x4b6bb7:c.instructions+=6;goto B4b6bb7;
case 0x4b6bbd:c.instructions+=5;goto B4b6bbd;
case 0x4b6bbe:c.instructions+=4;goto B4b6bbe;
case 0x4b6bc4:c.instructions+=3;goto B4b6bc4;
case 0x4b6bc5:c.instructions+=2;goto B4b6bc5;
case 0x4b6bc7:c.instructions+=1;goto B4b6bc7;
case 0x4b6bcc:goto L4b6bcc;
case 0x4b6bd2:c.instructions+=1;goto B4b6bd2;
case 0x4b6bd4:goto L4b6bd4;
case 0x4b6bd6:goto L4b6bd6;
case 0x4b6bd8:c.instructions+=4;goto B4b6bd8;
case 0x4b6bd9:c.instructions+=3;goto B4b6bd9;
case 0x4b6bdb:c.instructions+=2;goto B4b6bdb;
case 0x4b6bdf:c.instructions+=1;goto B4b6bdf;
case 0x4b6be4:goto L4b6be4;
case 0x4b6be9:c.instructions+=2;goto B4b6be9;
case 0x4b6beb:c.instructions+=1;goto B4b6beb;
case 0x4b6bed:goto L4b6bed;
case 0x4b6bef:c.instructions+=1;goto B4b6bef;
case 0x4b6bf4:goto L4b6bf4;
case 0x4b6bf6:c.instructions+=5;goto B4b6bf6;
case 0x4b6bf9:c.instructions+=4;goto B4b6bf9;
case 0x4b6bfd:c.instructions+=3;goto B4b6bfd;
case 0x4b6bff:c.instructions+=2;goto B4b6bff;
case 0x4b6c07:c.instructions+=1;goto B4b6c07;
case 0x4b6c09:goto L4b6c09;
case 0x4b6c0b:c.instructions+=10;goto B4b6c0b;
case 0x4b6c11:c.instructions+=9;goto B4b6c11;
case 0x4b6c12:c.instructions+=8;goto B4b6c12;
case 0x4b6c18:c.instructions+=7;goto B4b6c18;
case 0x4b6c19:c.instructions+=6;goto B4b6c19;
case 0x4b6c1f:c.instructions+=5;goto B4b6c1f;
case 0x4b6c20:c.instructions+=4;goto B4b6c20;
case 0x4b6c26:c.instructions+=3;goto B4b6c26;
case 0x4b6c27:c.instructions+=2;goto B4b6c27;
case 0x4b6c29:c.instructions+=1;goto B4b6c29;
case 0x4b6c2e:goto L4b6c2e;
case 0x4b6c34:c.instructions+=1;goto B4b6c34;
case 0x4b6c36:goto L4b6c36;
case 0x4b6c38:goto L4b6c38;
case 0x4b6c3a:c.instructions+=4;goto B4b6c3a;
case 0x4b6c3b:c.instructions+=3;goto B4b6c3b;
case 0x4b6c3d:c.instructions+=2;goto B4b6c3d;
case 0x4b6c41:c.instructions+=1;goto B4b6c41;
case 0x4b6c46:goto L4b6c46;
case 0x4b6c4b:c.instructions+=2;goto B4b6c4b;
case 0x4b6c4d:c.instructions+=1;goto B4b6c4d;
case 0x4b6c4f:goto L4b6c4f;
case 0x4b6c51:c.instructions+=1;goto B4b6c51;
case 0x4b6c56:goto L4b6c56;
case 0x4b6c58:c.instructions+=5;goto B4b6c58;
case 0x4b6c5b:c.instructions+=4;goto B4b6c5b;
case 0x4b6c5f:c.instructions+=3;goto B4b6c5f;
case 0x4b6c61:c.instructions+=2;goto B4b6c61;
case 0x4b6c69:c.instructions+=1;goto B4b6c69;
case 0x4b6c6b:goto L4b6c6b;
case 0x4b6c6d:c.instructions+=10;goto B4b6c6d;
case 0x4b6c73:c.instructions+=9;goto B4b6c73;
case 0x4b6c74:c.instructions+=8;goto B4b6c74;
case 0x4b6c7a:c.instructions+=7;goto B4b6c7a;
case 0x4b6c7b:c.instructions+=6;goto B4b6c7b;
case 0x4b6c81:c.instructions+=5;goto B4b6c81;
case 0x4b6c82:c.instructions+=4;goto B4b6c82;
case 0x4b6c88:c.instructions+=3;goto B4b6c88;
case 0x4b6c89:c.instructions+=2;goto B4b6c89;
case 0x4b6c8b:c.instructions+=1;goto B4b6c8b;
case 0x4b6c90:goto L4b6c90;
case 0x4b6c96:c.instructions+=1;goto B4b6c96;
case 0x4b6c98:goto L4b6c98;
case 0x4b6c9a:goto L4b6c9a;
case 0x4b6c9c:c.instructions+=4;goto B4b6c9c;
case 0x4b6c9d:c.instructions+=3;goto B4b6c9d;
case 0x4b6c9f:c.instructions+=2;goto B4b6c9f;
case 0x4b6ca3:c.instructions+=1;goto B4b6ca3;
case 0x4b6ca8:goto L4b6ca8;
case 0x4b6cad:c.instructions+=2;goto B4b6cad;
case 0x4b6caf:c.instructions+=1;goto B4b6caf;
case 0x4b6cb1:goto L4b6cb1;
case 0x4b6cb3:c.instructions+=1;goto B4b6cb3;
case 0x4b6cb8:goto L4b6cb8;
case 0x4b6cba:c.instructions+=5;goto B4b6cba;
case 0x4b6cbd:c.instructions+=4;goto B4b6cbd;
case 0x4b6cc1:c.instructions+=3;goto B4b6cc1;
case 0x4b6cc3:c.instructions+=2;goto B4b6cc3;
case 0x4b6ccb:c.instructions+=1;goto B4b6ccb;
case 0x4b6ccd:goto L4b6ccd;
case 0x4b6ccf:c.instructions+=10;goto B4b6ccf;
case 0x4b6cd5:c.instructions+=9;goto B4b6cd5;
case 0x4b6cd6:c.instructions+=8;goto B4b6cd6;
case 0x4b6cdc:c.instructions+=7;goto B4b6cdc;
case 0x4b6cdd:c.instructions+=6;goto B4b6cdd;
case 0x4b6ce3:c.instructions+=5;goto B4b6ce3;
case 0x4b6ce4:c.instructions+=4;goto B4b6ce4;
case 0x4b6cea:c.instructions+=3;goto B4b6cea;
case 0x4b6ceb:c.instructions+=2;goto B4b6ceb;
case 0x4b6ced:c.instructions+=1;goto B4b6ced;
case 0x4b6cf2:goto L4b6cf2;
case 0x4b6cf8:c.instructions+=1;goto B4b6cf8;
case 0x4b6cfa:goto L4b6cfa;
case 0x4b6cfc:goto L4b6cfc;
case 0x4b6cfe:c.instructions+=4;goto B4b6cfe;
case 0x4b6cff:c.instructions+=3;goto B4b6cff;
case 0x4b6d01:c.instructions+=2;goto B4b6d01;
case 0x4b6d05:c.instructions+=1;goto B4b6d05;
case 0x4b6d0a:goto L4b6d0a;
case 0x4b6d0f:c.instructions+=2;goto B4b6d0f;
case 0x4b6d11:c.instructions+=1;goto B4b6d11;
case 0x4b6d13:goto L4b6d13;
case 0x4b6d15:c.instructions+=1;goto B4b6d15;
case 0x4b6d1a:goto L4b6d1a;
case 0x4b6d1c:c.instructions+=5;goto B4b6d1c;
case 0x4b6d1f:c.instructions+=4;goto B4b6d1f;
case 0x4b6d23:c.instructions+=3;goto B4b6d23;
case 0x4b6d25:c.instructions+=2;goto B4b6d25;
case 0x4b6d2d:c.instructions+=1;goto B4b6d2d;
case 0x4b6d2f:goto L4b6d2f;
case 0x4b6d31:c.instructions+=10;goto B4b6d31;
case 0x4b6d37:c.instructions+=9;goto B4b6d37;
case 0x4b6d38:c.instructions+=8;goto B4b6d38;
case 0x4b6d3e:c.instructions+=7;goto B4b6d3e;
case 0x4b6d3f:c.instructions+=6;goto B4b6d3f;
case 0x4b6d45:c.instructions+=5;goto B4b6d45;
case 0x4b6d46:c.instructions+=4;goto B4b6d46;
case 0x4b6d4c:c.instructions+=3;goto B4b6d4c;
case 0x4b6d4d:c.instructions+=2;goto B4b6d4d;
case 0x4b6d4f:c.instructions+=1;goto B4b6d4f;
case 0x4b6d54:goto L4b6d54;
case 0x4b6d5a:c.instructions+=1;goto B4b6d5a;
case 0x4b6d5c:goto L4b6d5c;
case 0x4b6d5e:goto L4b6d5e;
case 0x4b6d60:c.instructions+=4;goto B4b6d60;
case 0x4b6d61:c.instructions+=3;goto B4b6d61;
case 0x4b6d63:c.instructions+=2;goto B4b6d63;
case 0x4b6d67:c.instructions+=1;goto B4b6d67;
case 0x4b6d6c:goto L4b6d6c;
case 0x4b6d71:c.instructions+=2;goto B4b6d71;
case 0x4b6d73:c.instructions+=1;goto B4b6d73;
case 0x4b6d75:goto L4b6d75;
case 0x4b6d7a:c.instructions+=1;goto B4b6d7a;
case 0x4b6d7f:goto L4b6d7f;
case 0x4b6d81:c.instructions+=5;goto B4b6d81;
case 0x4b6d84:c.instructions+=4;goto B4b6d84;
case 0x4b6d88:c.instructions+=3;goto B4b6d88;
case 0x4b6d8a:c.instructions+=2;goto B4b6d8a;
case 0x4b6d92:c.instructions+=1;goto B4b6d92;
case 0x4b6d94:goto L4b6d94;
case 0x4b6d96:c.instructions+=10;goto B4b6d96;
case 0x4b6d9c:c.instructions+=9;goto B4b6d9c;
case 0x4b6d9d:c.instructions+=8;goto B4b6d9d;
case 0x4b6da3:c.instructions+=7;goto B4b6da3;
case 0x4b6da4:c.instructions+=6;goto B4b6da4;
case 0x4b6daa:c.instructions+=5;goto B4b6daa;
case 0x4b6dab:c.instructions+=4;goto B4b6dab;
case 0x4b6db1:c.instructions+=3;goto B4b6db1;
case 0x4b6db2:c.instructions+=2;goto B4b6db2;
case 0x4b6db4:c.instructions+=1;goto B4b6db4;
case 0x4b6db9:goto L4b6db9;
case 0x4b6dbf:c.instructions+=1;goto B4b6dbf;
case 0x4b6dc1:goto L4b6dc1;
case 0x4b6dc3:goto L4b6dc3;
case 0x4b6dc5:c.instructions+=4;goto B4b6dc5;
case 0x4b6dc6:c.instructions+=3;goto B4b6dc6;
case 0x4b6dc8:c.instructions+=2;goto B4b6dc8;
case 0x4b6dcc:c.instructions+=1;goto B4b6dcc;
case 0x4b6dd1:goto L4b6dd1;
case 0x4b6dd3:c.instructions+=1;goto B4b6dd3;
case 0x4b6dd8:goto L4b6dd8;
case 0x4b6dda:c.instructions+=5;goto B4b6dda;
case 0x4b6ddd:c.instructions+=4;goto B4b6ddd;
case 0x4b6de1:c.instructions+=3;goto B4b6de1;
case 0x4b6de3:c.instructions+=2;goto B4b6de3;
case 0x4b6deb:c.instructions+=1;goto B4b6deb;
case 0x4b6ded:goto L4b6ded;
case 0x4b6def:c.instructions+=10;goto B4b6def;
case 0x4b6df5:c.instructions+=9;goto B4b6df5;
case 0x4b6df6:c.instructions+=8;goto B4b6df6;
case 0x4b6dfc:c.instructions+=7;goto B4b6dfc;
case 0x4b6dfd:c.instructions+=6;goto B4b6dfd;
case 0x4b6e03:c.instructions+=5;goto B4b6e03;
case 0x4b6e04:c.instructions+=4;goto B4b6e04;
case 0x4b6e0a:c.instructions+=3;goto B4b6e0a;
case 0x4b6e0b:c.instructions+=2;goto B4b6e0b;
case 0x4b6e0d:c.instructions+=1;goto B4b6e0d;
case 0x4b6e12:goto L4b6e12;
case 0x4b6e18:c.instructions+=1;goto B4b6e18;
case 0x4b6e1a:goto L4b6e1a;
case 0x4b6e1c:goto L4b6e1c;
case 0x4b6e1e:c.instructions+=4;goto B4b6e1e;
case 0x4b6e1f:c.instructions+=3;goto B4b6e1f;
case 0x4b6e21:c.instructions+=2;goto B4b6e21;
case 0x4b6e25:c.instructions+=1;goto B4b6e25;
case 0x4b6e2a:goto L4b6e2a;
case 0x4b6e2f:c.instructions+=1;goto B4b6e2f;
case 0x4b6e34:goto L4b6e34;
case 0x4b6e35:c.instructions+=2;goto B4b6e35;
case 0x4b6e3a:c.instructions+=1;goto B4b6e3a;
case 0x4b6e3f:goto L4b6e3f;
case 0x4b6e40:c.instructions+=1;goto B4b6e40;
case 0x4b6e45:goto L4b6e45;
case 0x4b6e49:c.instructions+=7;goto B4b6e49;
case 0x4b6e4c:c.instructions+=6;goto B4b6e4c;
case 0x4b6e4d:c.instructions+=5;goto B4b6e4d;
case 0x4b6e4e:c.instructions+=4;goto B4b6e4e;
case 0x4b6e4f:c.instructions+=3;goto B4b6e4f;
case 0x4b6e56:c.instructions+=2;goto B4b6e56;
case 0x4b6e59:c.instructions+=1;goto B4b6e59;
case 0x4b6e60:goto L4b6e60;
case 0x4b6e62:c.instructions+=11;goto B4b6e62;
case 0x4b6e67:c.instructions+=10;goto B4b6e67;
case 0x4b6e6d:c.instructions+=9;goto B4b6e6d;
case 0x4b6e6e:c.instructions+=8;goto B4b6e6e;
case 0x4b6e75:c.instructions+=7;goto B4b6e75;
case 0x4b6e76:c.instructions+=6;goto B4b6e76;
case 0x4b6e77:c.instructions+=5;goto B4b6e77;
case 0x4b6e78:c.instructions+=4;goto B4b6e78;
case 0x4b6e79:c.instructions+=3;goto B4b6e79;
case 0x4b6e7e:c.instructions+=2;goto B4b6e7e;
case 0x4b6e80:c.instructions+=1;goto B4b6e80;
case 0x4b6e85:goto L4b6e85;
case 0x4b6e87:c.instructions+=5;goto B4b6e87;
case 0x4b6e8a:c.instructions+=4;goto B4b6e8a;
case 0x4b6e8e:c.instructions+=3;goto B4b6e8e;
case 0x4b6e90:c.instructions+=2;goto B4b6e90;
case 0x4b6e98:c.instructions+=1;goto B4b6e98;
case 0x4b6e9a:goto L4b6e9a;
case 0x4b6e9c:c.instructions+=10;goto B4b6e9c;
case 0x4b6ea2:c.instructions+=9;goto B4b6ea2;
case 0x4b6ea3:c.instructions+=8;goto B4b6ea3;
case 0x4b6ea9:c.instructions+=7;goto B4b6ea9;
case 0x4b6eaa:c.instructions+=6;goto B4b6eaa;
case 0x4b6eb0:c.instructions+=5;goto B4b6eb0;
case 0x4b6eb1:c.instructions+=4;goto B4b6eb1;
case 0x4b6eb7:c.instructions+=3;goto B4b6eb7;
case 0x4b6eb8:c.instructions+=2;goto B4b6eb8;
case 0x4b6eba:c.instructions+=1;goto B4b6eba;
case 0x4b6ebf:goto L4b6ebf;
case 0x4b6ec5:c.instructions+=1;goto B4b6ec5;
case 0x4b6ec7:goto L4b6ec7;
case 0x4b6ec9:goto L4b6ec9;
case 0x4b6ecb:c.instructions+=5;goto B4b6ecb;
case 0x4b6ece:c.instructions+=4;goto B4b6ece;
case 0x4b6ecf:c.instructions+=3;goto B4b6ecf;
case 0x4b6ed1:c.instructions+=2;goto B4b6ed1;
case 0x4b6ed5:c.instructions+=1;goto B4b6ed5;
case 0x4b6eda:goto L4b6eda;
case 0x4b6edf:c.instructions+=1;goto B4b6edf;
case 0x4b6ee4:goto L4b6ee4;
case 0x4b6ee6:c.instructions+=5;goto B4b6ee6;
case 0x4b6ee9:c.instructions+=4;goto B4b6ee9;
case 0x4b6eed:c.instructions+=3;goto B4b6eed;
case 0x4b6eef:c.instructions+=2;goto B4b6eef;
case 0x4b6ef7:c.instructions+=1;goto B4b6ef7;
case 0x4b6ef9:goto L4b6ef9;
case 0x4b6efb:c.instructions+=10;goto B4b6efb;
case 0x4b6f01:c.instructions+=9;goto B4b6f01;
case 0x4b6f02:c.instructions+=8;goto B4b6f02;
case 0x4b6f08:c.instructions+=7;goto B4b6f08;
case 0x4b6f09:c.instructions+=6;goto B4b6f09;
case 0x4b6f0f:c.instructions+=5;goto B4b6f0f;
case 0x4b6f10:c.instructions+=4;goto B4b6f10;
case 0x4b6f16:c.instructions+=3;goto B4b6f16;
case 0x4b6f17:c.instructions+=2;goto B4b6f17;
case 0x4b6f19:c.instructions+=1;goto B4b6f19;
case 0x4b6f1e:goto L4b6f1e;
case 0x4b6f24:c.instructions+=1;goto B4b6f24;
case 0x4b6f26:goto L4b6f26;
case 0x4b6f28:goto L4b6f28;
case 0x4b6f2a:c.instructions+=4;goto B4b6f2a;
case 0x4b6f2b:c.instructions+=3;goto B4b6f2b;
case 0x4b6f2d:c.instructions+=2;goto B4b6f2d;
case 0x4b6f31:c.instructions+=1;goto B4b6f31;
case 0x4b6f36:goto L4b6f36;
case 0x4b6f3b:c.instructions+=1;goto B4b6f3b;
case 0x4b6f40:goto L4b6f40;
case 0x4b6f42:c.instructions+=5;goto B4b6f42;
case 0x4b6f45:c.instructions+=4;goto B4b6f45;
case 0x4b6f49:c.instructions+=3;goto B4b6f49;
case 0x4b6f4b:c.instructions+=2;goto B4b6f4b;
case 0x4b6f53:c.instructions+=1;goto B4b6f53;
case 0x4b6f55:goto L4b6f55;
case 0x4b6f57:c.instructions+=10;goto B4b6f57;
case 0x4b6f5d:c.instructions+=9;goto B4b6f5d;
case 0x4b6f5e:c.instructions+=8;goto B4b6f5e;
case 0x4b6f64:c.instructions+=7;goto B4b6f64;
case 0x4b6f65:c.instructions+=6;goto B4b6f65;
case 0x4b6f6b:c.instructions+=5;goto B4b6f6b;
case 0x4b6f6c:c.instructions+=4;goto B4b6f6c;
case 0x4b6f72:c.instructions+=3;goto B4b6f72;
case 0x4b6f73:c.instructions+=2;goto B4b6f73;
case 0x4b6f75:c.instructions+=1;goto B4b6f75;
case 0x4b6f7a:goto L4b6f7a;
case 0x4b6f80:c.instructions+=1;goto B4b6f80;
case 0x4b6f82:goto L4b6f82;
case 0x4b6f84:goto L4b6f84;
case 0x4b6f86:c.instructions+=4;goto B4b6f86;
case 0x4b6f87:c.instructions+=3;goto B4b6f87;
case 0x4b6f89:c.instructions+=2;goto B4b6f89;
case 0x4b6f8d:c.instructions+=1;goto B4b6f8d;
case 0x4b6f92:goto L4b6f92;
case 0x4b6f97:c.instructions+=1;goto B4b6f97;
case 0x4b6f9c:goto L4b6f9c;
case 0x4b6f9e:c.instructions+=5;goto B4b6f9e;
case 0x4b6fa1:c.instructions+=4;goto B4b6fa1;
case 0x4b6fa5:c.instructions+=3;goto B4b6fa5;
case 0x4b6fa7:c.instructions+=2;goto B4b6fa7;
case 0x4b6faf:c.instructions+=1;goto B4b6faf;
case 0x4b6fb1:goto L4b6fb1;
case 0x4b6fb3:c.instructions+=10;goto B4b6fb3;
case 0x4b6fb9:c.instructions+=9;goto B4b6fb9;
case 0x4b6fba:c.instructions+=8;goto B4b6fba;
case 0x4b6fc0:c.instructions+=7;goto B4b6fc0;
case 0x4b6fc1:c.instructions+=6;goto B4b6fc1;
case 0x4b6fc7:c.instructions+=5;goto B4b6fc7;
case 0x4b6fc8:c.instructions+=4;goto B4b6fc8;
case 0x4b6fce:c.instructions+=3;goto B4b6fce;
case 0x4b6fcf:c.instructions+=2;goto B4b6fcf;
case 0x4b6fd1:c.instructions+=1;goto B4b6fd1;
case 0x4b6fd6:goto L4b6fd6;
case 0x4b6fdc:c.instructions+=1;goto B4b6fdc;
case 0x4b6fde:goto L4b6fde;
case 0x4b6fe0:goto L4b6fe0;
case 0x4b6fe2:c.instructions+=4;goto B4b6fe2;
case 0x4b6fe3:c.instructions+=3;goto B4b6fe3;
case 0x4b6fe5:c.instructions+=2;goto B4b6fe5;
case 0x4b6fe9:c.instructions+=1;goto B4b6fe9;
case 0x4b6fee:goto L4b6fee;
case 0x4b6ff3:c.instructions+=1;goto B4b6ff3;
case 0x4b6ff8:goto L4b6ff8;
case 0x4b6ffa:c.instructions+=2;goto B4b6ffa;
case 0x4b6ffd:c.instructions+=1;goto B4b6ffd;
default:missing_instruction(c.pc);}
B4b6004:L4b6004:{c.instructions+=2;NFSU2_TR(0x4b6004);
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
B4b6007:{NFSU2_TR(0x4b6007);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b6010:L4b6010:{c.instructions+=4;NFSU2_TR(0x4b6010);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6011:{NFSU2_TR(0x4b6011);
__builtin_memmove((R+12),gp(0x844ad8),1);
}
B4b6017:{NFSU2_TR(0x4b6017);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b6019:{NFSU2_TR(0x4b6019);
if(r1(R+518)){{goto L4b605c;}}
}
B4b601b:L4b601b:{c.instructions+=2;NFSU2_TR(0x4b601b);
w4(R+4,u32(0x83a9d0ull));
}
B4b6020:{NFSU2_TR(0x4b6020);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6025ull));
TAIL_STATIC(0x52a4c0u,52a);
}
B4b6025:L4b6025:{c.instructions+=2;NFSU2_TR(0x4b6025);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b6027:{NFSU2_TR(0x4b6027);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b6031;}}
}
B4b6029:L4b6029:{c.instructions+=2;NFSU2_TR(0x4b6029);
u8 U[2];
__builtin_memmove((U+0),gp(0x836360),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4b602f:{NFSU2_TR(0x4b602f);
if(r1(R+518)){{goto L4b605c;}}
}
B4b6031:L4b6031:{c.instructions+=10;NFSU2_TR(0x4b6031);
__builtin_memmove((R+0),gp(0x83635c),4);
}
B4b6036:{NFSU2_TR(0x4b6036);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b603a:{NFSU2_TR(0x4b603a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b603c:{NFSU2_TR(0x4b603c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b603e:{NFSU2_TR(0x4b603e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6040:{NFSU2_TR(0x4b6040);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6042:{NFSU2_TR(0x4b6042);
u8 U[4];
w4(U+0,u32(0x2042ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6047:{NFSU2_TR(0x4b6047);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6048:{NFSU2_TR(0x4b6048);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6049:{NFSU2_TR(0x4b6049);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b604eull));
TAIL_STATIC(0x4a3100u,4a3);
}
B4b604e:L4b604e:{c.instructions+=4;NFSU2_TR(0x4b604e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4b6051:{NFSU2_TR(0x4b6051);
w4(R+4,u32(0x83a9d0ull));
}
B4b6056:{NFSU2_TR(0x4b6056);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b6057:{NFSU2_TR(0x4b6057);
TAIL_STATIC(0x5032c0u,503);
}
B4b605c:L4b605c:{c.instructions+=6;NFSU2_TR(0x4b605c);
__builtin_memmove((R+8),gp(0x83635c),4);
}
B4b6062:{NFSU2_TR(0x4b6062);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b6066:{NFSU2_TR(0x4b6066);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6068:{NFSU2_TR(0x4b6068);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6069:{NFSU2_TR(0x4b6069);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b606a:{NFSU2_TR(0x4b606a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b606full));
TAIL_STATIC(0x537980u,537);
}
B4b606f:L4b606f:{c.instructions+=4;NFSU2_TR(0x4b606f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b6072:{NFSU2_TR(0x4b6072);
w4(R+4,u32(0x83a9d0ull));
}
B4b6077:{NFSU2_TR(0x4b6077);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b6078:{NFSU2_TR(0x4b6078);
TAIL_STATIC(0x5032c0u,503);
}
B4b6080:L4b6080:{c.instructions+=13;NFSU2_TR(0x4b6080);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b6084:{NFSU2_TR(0x4b6084);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b6088:{NFSU2_TR(0x4b6088);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6089:{NFSU2_TR(0x4b6089);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b608a:{NFSU2_TR(0x4b608a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b608e:{NFSU2_TR(0x4b608e);
__builtin_memmove((R+24),(R+4),4);
}
B4b6090:{NFSU2_TR(0x4b6090);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b6094:{NFSU2_TR(0x4b6094);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6095:{NFSU2_TR(0x4b6095);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6096:{NFSU2_TR(0x4b6096);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6097:{NFSU2_TR(0x4b6097);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6098:{NFSU2_TR(0x4b6098);
__builtin_memmove((R+4),(R+24),4);
}
B4b609a:{NFSU2_TR(0x4b609a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b609full));
TAIL_STATIC(0x543d40u,543);
}
B4b609f:L4b609f:{c.instructions+=2;NFSU2_TR(0x4b609f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x911ab364ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b60a5:{NFSU2_TR(0x4b60a5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4b615a;}}
}
B4b60ab:L4b60ab:{c.instructions+=1;NFSU2_TR(0x4b60ab);
if(r1(R+518)){{goto L4b611f;}}
}
B4b60ad:L4b60ad:{c.instructions+=2;NFSU2_TR(0x4b60ad);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b60b3:{NFSU2_TR(0x4b60b3);
if(r1(R+518)){{goto L4b60d7;}}
}
B4b60b5:L4b60b5:{c.instructions+=2;NFSU2_TR(0x4b60b5);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x1fab5998ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1fab5998ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1fab5998ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b60bb:{NFSU2_TR(0x4b60bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b6206;}}
}
B4b60c1:L4b60c1:{c.instructions+=3;NFSU2_TR(0x4b60c1);
__builtin_memmove((R+4),(R+24),4);
}
B4b60c3:{NFSU2_TR(0x4b60c3);
s4(0x83aa04,u32(0x5ull));
}
B4b60cd:{NFSU2_TR(0x4b60cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b60d2ull));
TAIL_STATIC(0x538ca0u,538);
}
B4b60d2:L4b60d2:{c.instructions+=3;NFSU2_TR(0x4b60d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b60d3:{NFSU2_TR(0x4b60d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b60d4:{NFSU2_TR(0x4b60d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b60d7:L4b60d7:{c.instructions+=5;NFSU2_TR(0x4b60d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b60da:{NFSU2_TR(0x4b60da);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b60df:{NFSU2_TR(0x4b60df);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b60e4:{NFSU2_TR(0x4b60e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b60e5:{NFSU2_TR(0x4b60e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b60eaull));
TAIL_STATIC(0x537d40u,537);
}
B4b60ea:L4b60ea:{c.instructions+=3;NFSU2_TR(0x4b60ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b60ed:{NFSU2_TR(0x4b60ed);
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
B4b60ef:{NFSU2_TR(0x4b60ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b6206;}}
}
B4b60f5:L4b60f5:{c.instructions+=2;NFSU2_TR(0x4b60f5);
u8 U[14];
__builtin_memmove((U+6),gp(0x83aa04),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b60fc:{NFSU2_TR(0x4b60fc);
if(r1(R+518)){{goto L4b6206;}}
}
B4b6102:L4b6102:{c.instructions+=6;NFSU2_TR(0x4b6102);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b6105:{NFSU2_TR(0x4b6105);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6107:{NFSU2_TR(0x4b6107);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b610c:{NFSU2_TR(0x4b610c);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6111:{NFSU2_TR(0x4b6111);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6112:{NFSU2_TR(0x4b6112);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6117ull));
TAIL_STATIC(0x537c60u,537);
}
B4b6117:L4b6117:{c.instructions+=4;NFSU2_TR(0x4b6117);
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
B4b611a:{NFSU2_TR(0x4b611a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b611b:{NFSU2_TR(0x4b611b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b611c:{NFSU2_TR(0x4b611c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b611f:L4b611f:{c.instructions+=5;NFSU2_TR(0x4b611f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b6122:{NFSU2_TR(0x4b6122);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6127:{NFSU2_TR(0x4b6127);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b612c:{NFSU2_TR(0x4b612c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b612d:{NFSU2_TR(0x4b612d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6132ull));
TAIL_STATIC(0x537d40u,537);
}
B4b6132:L4b6132:{c.instructions+=3;NFSU2_TR(0x4b6132);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b6135:{NFSU2_TR(0x4b6135);
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
B4b6137:{NFSU2_TR(0x4b6137);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b6206;}}
}
B4b613d:L4b613d:{c.instructions+=6;NFSU2_TR(0x4b613d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b6140:{NFSU2_TR(0x4b6140);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6142:{NFSU2_TR(0x4b6142);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6147:{NFSU2_TR(0x4b6147);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b614c:{NFSU2_TR(0x4b614c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b614d:{NFSU2_TR(0x4b614d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6152ull));
TAIL_STATIC(0x537c60u,537);
}
B4b6152:L4b6152:{c.instructions+=4;NFSU2_TR(0x4b6152);
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
B4b6155:{NFSU2_TR(0x4b6155);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b6156:{NFSU2_TR(0x4b6156);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b6157:{NFSU2_TR(0x4b6157);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b615a:L4b615a:{c.instructions+=2;NFSU2_TR(0x4b615a);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe1fde1d1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b6160:{NFSU2_TR(0x4b6160);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b6206;}}
}
B4b6166:L4b6166:{c.instructions+=3;NFSU2_TR(0x4b6166);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b616c:{NFSU2_TR(0x4b616c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6171:{NFSU2_TR(0x4b6171);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b61e8;}}
}
B4b6173:L4b6173:{c.instructions+=3;NFSU2_TR(0x4b6173);
__builtin_memmove((R+0),gp(0x83aa04),4);
}
B4b6178:{NFSU2_TR(0x4b6178);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b617b:{NFSU2_TR(0x4b617b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4b6206;}}
}
B4b6181:L4b6181:{c.instructions+=1;NFSU2_TR(0x4b6181);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4b620cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b6188:L4b6188:{c.instructions+=5;NFSU2_TR(0x4b6188);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b618b:{NFSU2_TR(0x4b618b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b618d:{NFSU2_TR(0x4b618d);
u8 U[4];
w4(U+0,u32(0x78fa50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6192:{NFSU2_TR(0x4b6192);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6193:{NFSU2_TR(0x4b6193);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6198ull));
TAIL_STATIC(0x537980u,537);
}
B4b6198:L4b6198:{c.instructions+=4;NFSU2_TR(0x4b6198);
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
B4b619b:{NFSU2_TR(0x4b619b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b619c:{NFSU2_TR(0x4b619c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b619d:{NFSU2_TR(0x4b619d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b61a0:L4b61a0:{c.instructions+=5;NFSU2_TR(0x4b61a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b61a3:{NFSU2_TR(0x4b61a3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b61a5:{NFSU2_TR(0x4b61a5);
u8 U[4];
w4(U+0,u32(0x793dccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b61aa:{NFSU2_TR(0x4b61aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b61ab:{NFSU2_TR(0x4b61ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b61b0ull));
TAIL_STATIC(0x537980u,537);
}
B4b61b0:L4b61b0:{c.instructions+=4;NFSU2_TR(0x4b61b0);
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
B4b61b3:{NFSU2_TR(0x4b61b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b61b4:{NFSU2_TR(0x4b61b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b61b5:{NFSU2_TR(0x4b61b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b61b8:L4b61b8:{c.instructions+=5;NFSU2_TR(0x4b61b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b61bb:{NFSU2_TR(0x4b61bb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b61bd:{NFSU2_TR(0x4b61bd);
u8 U[4];
w4(U+0,u32(0x793db8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b61c2:{NFSU2_TR(0x4b61c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b61c3:{NFSU2_TR(0x4b61c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b61c8ull));
TAIL_STATIC(0x537980u,537);
}
B4b61c8:L4b61c8:{c.instructions+=4;NFSU2_TR(0x4b61c8);
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
B4b61cb:{NFSU2_TR(0x4b61cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b61cc:{NFSU2_TR(0x4b61cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b61cd:{NFSU2_TR(0x4b61cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b61d0:L4b61d0:{c.instructions+=5;NFSU2_TR(0x4b61d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b61d3:{NFSU2_TR(0x4b61d3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b61d5:{NFSU2_TR(0x4b61d5);
u8 U[4];
w4(U+0,u32(0x793dacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b61da:{NFSU2_TR(0x4b61da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b61db:{NFSU2_TR(0x4b61db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b61e0ull));
TAIL_STATIC(0x537980u,537);
}
B4b61e0:L4b61e0:{c.instructions+=4;NFSU2_TR(0x4b61e0);
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
B4b61e3:{NFSU2_TR(0x4b61e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b61e4:{NFSU2_TR(0x4b61e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b61e5:{NFSU2_TR(0x4b61e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b61e8:L4b61e8:{c.instructions+=2;NFSU2_TR(0x4b61e8);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911ab364ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b61ed:{NFSU2_TR(0x4b61ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b6206;}}
}
B4b61ef:L4b61ef:{c.instructions+=4;NFSU2_TR(0x4b61ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b61f2:{NFSU2_TR(0x4b61f2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b61f4:{NFSU2_TR(0x4b61f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b61f5:{NFSU2_TR(0x4b61f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b61faull));
TAIL_STATIC(0x50b8c0u,50b);
}
B4b61fa:L4b61fa:{c.instructions+=3;NFSU2_TR(0x4b61fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b61fd:{NFSU2_TR(0x4b61fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b61fe:{NFSU2_TR(0x4b61fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6203ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b6010u);}goto L4b6010;}
}
B4b6203:L4b6203:{c.instructions+=1;NFSU2_TR(0x4b6203);
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
B4b6206:L4b6206:{c.instructions+=3;NFSU2_TR(0x4b6206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b6207:{NFSU2_TR(0x4b6207);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b6208:{NFSU2_TR(0x4b6208);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b6230:L4b6230:{c.instructions+=12;NFSU2_TR(0x4b6230);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6232:{NFSU2_TR(0x4b6232);
u8 U[4];
w4(U+0,u32(0x773184ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6237:{NFSU2_TR(0x4b6237);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b623d:{NFSU2_TR(0x4b623d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b623e:{NFSU2_TR(0x4b623e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6245:{NFSU2_TR(0x4b6245);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6246:{NFSU2_TR(0x4b6246);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6247:{NFSU2_TR(0x4b6247);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6248:{NFSU2_TR(0x4b6248);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6249:{NFSU2_TR(0x4b6249);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b624b:{NFSU2_TR(0x4b624b);
__builtin_memmove((R+24),(R+4),4);
}
B4b624d:{NFSU2_TR(0x4b624d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6252ull));
TAIL_STATIC(0x575620u,575);
}
B4b6252:L4b6252:{c.instructions+=6;NFSU2_TR(0x4b6252);
__builtin_memmove((R+28),(R+0),4);
}
B4b6254:{NFSU2_TR(0x4b6254);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b6257:{NFSU2_TR(0x4b6257);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b625b:{NFSU2_TR(0x4b625b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b625d:{NFSU2_TR(0x4b625d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6265:{NFSU2_TR(0x4b6265);
if(r1(R+518)){{goto L4b6282;}}
}
B4b6267:L4b6267:{c.instructions+=5;NFSU2_TR(0x4b6267);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6269:{NFSU2_TR(0x4b6269);
u8 U[4];
w4(U+0,u32(0xe76cd783ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b626e:{NFSU2_TR(0x4b626e);
u8 U[4];
w4(U+0,u32(0xf37af144ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6273:{NFSU2_TR(0x4b6273);
__builtin_memmove((R+4),(R+28),4);
}
B4b6275:{NFSU2_TR(0x4b6275);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b627aull));
TAIL_STATIC(0x51f670u,51f);
}
B4b627a:L4b627a:{c.instructions+=2;NFSU2_TR(0x4b627a);
u8 U[4];
w4(U+0,u32(0x7918b8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6280:{NFSU2_TR(0x4b6280);
{goto L4b6284;}
}
B4b6282:L4b6282:{c.instructions+=1;NFSU2_TR(0x4b6282);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b6284:L4b6284:{c.instructions+=6;NFSU2_TR(0x4b6284);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b6286:{NFSU2_TR(0x4b6286);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b6289:{NFSU2_TR(0x4b6289);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b628a:{NFSU2_TR(0x4b628a);
__builtin_memmove((R+4),(R+24),4);
}
B4b628c:{NFSU2_TR(0x4b628c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6290:{NFSU2_TR(0x4b6290);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6293ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b6293:L4b6293:{c.instructions+=2;NFSU2_TR(0x4b6293);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6295:{NFSU2_TR(0x4b6295);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b629aull));
TAIL_STATIC(0x575620u,575);
}
B4b629a:L4b629a:{c.instructions+=6;NFSU2_TR(0x4b629a);
__builtin_memmove((R+28),(R+0),4);
}
B4b629c:{NFSU2_TR(0x4b629c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b629f:{NFSU2_TR(0x4b629f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b62a3:{NFSU2_TR(0x4b62a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b62a5:{NFSU2_TR(0x4b62a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b62ad:{NFSU2_TR(0x4b62ad);
if(r1(R+518)){{goto L4b62ca;}}
}
B4b62af:L4b62af:{c.instructions+=5;NFSU2_TR(0x4b62af);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b62b1:{NFSU2_TR(0x4b62b1);
u8 U[4];
w4(U+0,u32(0x4204d527ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b62b6:{NFSU2_TR(0x4b62b6);
u8 U[4];
w4(U+0,u32(0x8a006328ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b62bb:{NFSU2_TR(0x4b62bb);
__builtin_memmove((R+4),(R+28),4);
}
B4b62bd:{NFSU2_TR(0x4b62bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b62c2ull));
TAIL_STATIC(0x51f670u,51f);
}
B4b62c2:L4b62c2:{c.instructions+=2;NFSU2_TR(0x4b62c2);
u8 U[4];
w4(U+0,u32(0x7918c0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b62c8:{NFSU2_TR(0x4b62c8);
{goto L4b62cc;}
}
B4b62ca:L4b62ca:{c.instructions+=1;NFSU2_TR(0x4b62ca);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b62cc:L4b62cc:{c.instructions+=5;NFSU2_TR(0x4b62cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b62ce:{NFSU2_TR(0x4b62ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b62cf:{NFSU2_TR(0x4b62cf);
__builtin_memmove((R+4),(R+24),4);
}
B4b62d1:{NFSU2_TR(0x4b62d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b62d5:{NFSU2_TR(0x4b62d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b62d8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b62d8:L4b62d8:{c.instructions+=2;NFSU2_TR(0x4b62d8);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b62da:{NFSU2_TR(0x4b62da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b62dfull));
TAIL_STATIC(0x575620u,575);
}
B4b62df:L4b62df:{c.instructions+=6;NFSU2_TR(0x4b62df);
__builtin_memmove((R+28),(R+0),4);
}
B4b62e1:{NFSU2_TR(0x4b62e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b62e4:{NFSU2_TR(0x4b62e4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b62e8:{NFSU2_TR(0x4b62e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b62ea:{NFSU2_TR(0x4b62ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b62f2:{NFSU2_TR(0x4b62f2);
if(r1(R+518)){{goto L4b630f;}}
}
B4b62f4:L4b62f4:{c.instructions+=5;NFSU2_TR(0x4b62f4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b62f6:{NFSU2_TR(0x4b62f6);
u8 U[4];
w4(U+0,u32(0xd0cf6ee1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b62fb:{NFSU2_TR(0x4b62fb);
u8 U[4];
w4(U+0,u32(0x4df98fb2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6300:{NFSU2_TR(0x4b6300);
__builtin_memmove((R+4),(R+28),4);
}
B4b6302:{NFSU2_TR(0x4b6302);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6307ull));
TAIL_STATIC(0x51f670u,51f);
}
B4b6307:L4b6307:{c.instructions+=2;NFSU2_TR(0x4b6307);
u8 U[4];
w4(U+0,u32(0x7918c8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b630d:{NFSU2_TR(0x4b630d);
{goto L4b6311;}
}
B4b630f:L4b630f:{c.instructions+=1;NFSU2_TR(0x4b630f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b6311:L4b6311:{c.instructions+=5;NFSU2_TR(0x4b6311);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b6313:{NFSU2_TR(0x4b6313);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6314:{NFSU2_TR(0x4b6314);
__builtin_memmove((R+4),(R+24),4);
}
B4b6316:{NFSU2_TR(0x4b6316);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b631a:{NFSU2_TR(0x4b631a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b631dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b631d:L4b631d:{c.instructions+=2;NFSU2_TR(0x4b631d);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b631f:{NFSU2_TR(0x4b631f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6324ull));
TAIL_STATIC(0x575620u,575);
}
B4b6324:L4b6324:{c.instructions+=6;NFSU2_TR(0x4b6324);
__builtin_memmove((R+28),(R+0),4);
}
B4b6326:{NFSU2_TR(0x4b6326);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b6329:{NFSU2_TR(0x4b6329);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b632d:{NFSU2_TR(0x4b632d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b632f:{NFSU2_TR(0x4b632f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6337:{NFSU2_TR(0x4b6337);
if(r1(R+518)){{goto L4b6354;}}
}
B4b6339:L4b6339:{c.instructions+=5;NFSU2_TR(0x4b6339);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b633b:{NFSU2_TR(0x4b633b);
u8 U[4];
w4(U+0,u32(0xf760eabeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6340:{NFSU2_TR(0x4b6340);
u8 U[4];
w4(U+0,u32(0xd708efefull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6345:{NFSU2_TR(0x4b6345);
__builtin_memmove((R+4),(R+28),4);
}
B4b6347:{NFSU2_TR(0x4b6347);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b634cull));
TAIL_STATIC(0x51f670u,51f);
}
B4b634c:L4b634c:{c.instructions+=2;NFSU2_TR(0x4b634c);
u8 U[4];
w4(U+0,u32(0x7918d0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6352:{NFSU2_TR(0x4b6352);
{goto L4b6356;}
}
B4b6354:L4b6354:{c.instructions+=1;NFSU2_TR(0x4b6354);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b6356:L4b6356:{c.instructions+=5;NFSU2_TR(0x4b6356);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b6358:{NFSU2_TR(0x4b6358);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6359:{NFSU2_TR(0x4b6359);
__builtin_memmove((R+4),(R+24),4);
}
B4b635b:{NFSU2_TR(0x4b635b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b635f:{NFSU2_TR(0x4b635f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6362ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b6362:L4b6362:{c.instructions+=2;NFSU2_TR(0x4b6362);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6364:{NFSU2_TR(0x4b6364);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6369ull));
TAIL_STATIC(0x575620u,575);
}
B4b6369:L4b6369:{c.instructions+=6;NFSU2_TR(0x4b6369);
__builtin_memmove((R+28),(R+0),4);
}
B4b636b:{NFSU2_TR(0x4b636b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b636e:{NFSU2_TR(0x4b636e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6372:{NFSU2_TR(0x4b6372);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6374:{NFSU2_TR(0x4b6374);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b637c:{NFSU2_TR(0x4b637c);
if(r1(R+518)){{goto L4b6399;}}
}
B4b637e:L4b637e:{c.instructions+=5;NFSU2_TR(0x4b637e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6380:{NFSU2_TR(0x4b6380);
u8 U[4];
w4(U+0,u32(0x4dc6db5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6385:{NFSU2_TR(0x4b6385);
u8 U[4];
w4(U+0,u32(0xa04a7b26ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b638a:{NFSU2_TR(0x4b638a);
__builtin_memmove((R+4),(R+28),4);
}
B4b638c:{NFSU2_TR(0x4b638c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6391ull));
TAIL_STATIC(0x51f670u,51f);
}
B4b6391:L4b6391:{c.instructions+=2;NFSU2_TR(0x4b6391);
u8 U[4];
w4(U+0,u32(0x7918d8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6397:{NFSU2_TR(0x4b6397);
{goto L4b639b;}
}
B4b6399:L4b6399:{c.instructions+=1;NFSU2_TR(0x4b6399);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b639b:L4b639b:{c.instructions+=5;NFSU2_TR(0x4b639b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b639d:{NFSU2_TR(0x4b639d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b639e:{NFSU2_TR(0x4b639e);
__builtin_memmove((R+4),(R+24),4);
}
B4b63a0:{NFSU2_TR(0x4b63a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b63a4:{NFSU2_TR(0x4b63a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b63a7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b63a7:L4b63a7:{c.instructions+=3;NFSU2_TR(0x4b63a7);
u8 U[8];
__builtin_memmove((U+0),gp(0x8500d0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4b63ae:{NFSU2_TR(0x4b63ae);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b63b0:{NFSU2_TR(0x4b63b0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4b6437;}}
}
B4b63b6:L4b63b6:{c.instructions+=1;NFSU2_TR(0x4b63b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b63bbull));
TAIL_STATIC(0x575620u,575);
}
B4b63bb:L4b63bb:{c.instructions+=6;NFSU2_TR(0x4b63bb);
__builtin_memmove((R+28),(R+0),4);
}
B4b63bd:{NFSU2_TR(0x4b63bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b63c0:{NFSU2_TR(0x4b63c0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b63c4:{NFSU2_TR(0x4b63c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b63c6:{NFSU2_TR(0x4b63c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b63ce:{NFSU2_TR(0x4b63ce);
if(r1(R+518)){{goto L4b63eb;}}
}
B4b63d0:L4b63d0:{c.instructions+=5;NFSU2_TR(0x4b63d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b63d2:{NFSU2_TR(0x4b63d2);
u8 U[4];
w4(U+0,u32(0xdcfb6b36ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b63d7:{NFSU2_TR(0x4b63d7);
u8 U[4];
w4(U+0,u32(0xc52ccbf6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b63dc:{NFSU2_TR(0x4b63dc);
__builtin_memmove((R+4),(R+28),4);
}
B4b63de:{NFSU2_TR(0x4b63de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b63e3ull));
TAIL_STATIC(0x51f670u,51f);
}
B4b63e3:L4b63e3:{c.instructions+=2;NFSU2_TR(0x4b63e3);
u8 U[4];
w4(U+0,u32(0x7918e0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b63e9:{NFSU2_TR(0x4b63e9);
{goto L4b63ed;}
}
B4b63eb:L4b63eb:{c.instructions+=1;NFSU2_TR(0x4b63eb);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b63ed:L4b63ed:{c.instructions+=5;NFSU2_TR(0x4b63ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b63ef:{NFSU2_TR(0x4b63ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b63f0:{NFSU2_TR(0x4b63f0);
__builtin_memmove((R+4),(R+24),4);
}
B4b63f2:{NFSU2_TR(0x4b63f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b63f6:{NFSU2_TR(0x4b63f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b63f9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b63f9:L4b63f9:{c.instructions+=2;NFSU2_TR(0x4b63f9);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b63fb:{NFSU2_TR(0x4b63fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6400ull));
TAIL_STATIC(0x575620u,575);
}
B4b6400:L4b6400:{c.instructions+=6;NFSU2_TR(0x4b6400);
__builtin_memmove((R+28),(R+0),4);
}
B4b6402:{NFSU2_TR(0x4b6402);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b6405:{NFSU2_TR(0x4b6405);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6409:{NFSU2_TR(0x4b6409);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b640b:{NFSU2_TR(0x4b640b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6413:{NFSU2_TR(0x4b6413);
if(r1(R+518)){{goto L4b64c9;}}
}
B4b6419:L4b6419:{c.instructions+=5;NFSU2_TR(0x4b6419);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b641b:{NFSU2_TR(0x4b641b);
u8 U[4];
w4(U+0,u32(0x905101full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6420:{NFSU2_TR(0x4b6420);
u8 U[4];
w4(U+0,u32(0x51009e20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6425:{NFSU2_TR(0x4b6425);
__builtin_memmove((R+4),(R+28),4);
}
B4b6427:{NFSU2_TR(0x4b6427);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b642cull));
TAIL_STATIC(0x51f670u,51f);
}
B4b642c:L4b642c:{c.instructions+=2;NFSU2_TR(0x4b642c);
u8 U[4];
w4(U+0,u32(0x7918f0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6432:{NFSU2_TR(0x4b6432);
{goto L4b64cb;}
}
B4b6437:L4b6437:{c.instructions+=2;NFSU2_TR(0x4b6437);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b6441:{NFSU2_TR(0x4b6441);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b6494;}}
}
B4b6443:L4b6443:{c.instructions+=1;NFSU2_TR(0x4b6443);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6448ull));
TAIL_STATIC(0x575620u,575);
}
B4b6448:L4b6448:{c.instructions+=6;NFSU2_TR(0x4b6448);
__builtin_memmove((R+28),(R+0),4);
}
B4b644a:{NFSU2_TR(0x4b644a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b644d:{NFSU2_TR(0x4b644d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6451:{NFSU2_TR(0x4b6451);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6453:{NFSU2_TR(0x4b6453);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b645b:{NFSU2_TR(0x4b645b);
if(r1(R+518)){{goto L4b6484;}}
}
B4b645d:L4b645d:{c.instructions+=5;NFSU2_TR(0x4b645d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b645f:{NFSU2_TR(0x4b645f);
u8 U[4];
w4(U+0,u32(0x19889765ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6464:{NFSU2_TR(0x4b6464);
u8 U[4];
w4(U+0,u32(0x83070a37ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6469:{NFSU2_TR(0x4b6469);
__builtin_memmove((R+4),(R+28),4);
}
B4b646b:{NFSU2_TR(0x4b646b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6470ull));
TAIL_STATIC(0x51f670u,51f);
}
B4b6470:L4b6470:{c.instructions+=6;NFSU2_TR(0x4b6470);
u8 U[4];
w4(U+0,u32(0x7918e8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6476:{NFSU2_TR(0x4b6476);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b6478:{NFSU2_TR(0x4b6478);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6479:{NFSU2_TR(0x4b6479);
__builtin_memmove((R+4),(R+24),4);
}
B4b647b:{NFSU2_TR(0x4b647b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b647f:{NFSU2_TR(0x4b647f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6482ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b6482:L4b6482:{c.instructions+=1;NFSU2_TR(0x4b6482);
{goto L4b64d7;}
}
B4b6484:L4b6484:{c.instructions+=6;NFSU2_TR(0x4b6484);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b6486:{NFSU2_TR(0x4b6486);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b6488:{NFSU2_TR(0x4b6488);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6489:{NFSU2_TR(0x4b6489);
__builtin_memmove((R+4),(R+24),4);
}
B4b648b:{NFSU2_TR(0x4b648b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b648f:{NFSU2_TR(0x4b648f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6492ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b6492:L4b6492:{c.instructions+=1;NFSU2_TR(0x4b6492);
{goto L4b64d7;}
}
B4b6494:L4b6494:{c.instructions+=1;NFSU2_TR(0x4b6494);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6499ull));
TAIL_STATIC(0x575620u,575);
}
B4b6499:L4b6499:{c.instructions+=6;NFSU2_TR(0x4b6499);
__builtin_memmove((R+28),(R+0),4);
}
B4b649b:{NFSU2_TR(0x4b649b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b649e:{NFSU2_TR(0x4b649e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b64a2:{NFSU2_TR(0x4b64a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b64a4:{NFSU2_TR(0x4b64a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b64ac:{NFSU2_TR(0x4b64ac);
if(r1(R+518)){{goto L4b64c9;}}
}
B4b64ae:L4b64ae:{c.instructions+=5;NFSU2_TR(0x4b64ae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b64b0:{NFSU2_TR(0x4b64b0);
u8 U[4];
w4(U+0,u32(0x7d347e05ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b64b5:{NFSU2_TR(0x4b64b5);
u8 U[4];
w4(U+0,u32(0x83070a37ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b64ba:{NFSU2_TR(0x4b64ba);
__builtin_memmove((R+4),(R+28),4);
}
B4b64bc:{NFSU2_TR(0x4b64bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b64c1ull));
TAIL_STATIC(0x51f670u,51f);
}
B4b64c1:L4b64c1:{c.instructions+=2;NFSU2_TR(0x4b64c1);
u8 U[4];
w4(U+0,u32(0x7918e8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b64c7:{NFSU2_TR(0x4b64c7);
{goto L4b64cb;}
}
B4b64c9:L4b64c9:{c.instructions+=1;NFSU2_TR(0x4b64c9);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b64cb:L4b64cb:{c.instructions+=5;NFSU2_TR(0x4b64cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b64cd:{NFSU2_TR(0x4b64cd);
__builtin_memmove((R+4),(R+24),4);
}
B4b64cf:{NFSU2_TR(0x4b64cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b64d0:{NFSU2_TR(0x4b64d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b64d4:{NFSU2_TR(0x4b64d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b64d7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b64d7:L4b64d7:{c.instructions+=5;NFSU2_TR(0x4b64d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b64da:{NFSU2_TR(0x4b64da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b64dd:{NFSU2_TR(0x4b64dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b64e0:{NFSU2_TR(0x4b64e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b64e1:{NFSU2_TR(0x4b64e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b64e6ull));
TAIL_STATIC(0x50b8a0u,50b);
}
B4b64e6:L4b64e6:{c.instructions+=4;NFSU2_TR(0x4b64e6);
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
B4b64e9:{NFSU2_TR(0x4b64e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b64ea:{NFSU2_TR(0x4b64ea);
__builtin_memmove((R+4),(R+28),4);
}
B4b64ec:{NFSU2_TR(0x4b64ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b64efull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b64ef:L4b64ef:{c.instructions+=3;NFSU2_TR(0x4b64ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b64f1:{NFSU2_TR(0x4b64f1);
__builtin_memmove((R+4),(R+24),4);
}
B4b64f3:{NFSU2_TR(0x4b64f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b64f6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b64f6:L4b64f6:{c.instructions+=7;NFSU2_TR(0x4b64f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b64fa:{NFSU2_TR(0x4b64fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b64fb:{NFSU2_TR(0x4b64fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b64fc:{NFSU2_TR(0x4b64fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b64fd:{NFSU2_TR(0x4b64fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6504:{NFSU2_TR(0x4b6504);
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
B4b6507:{NFSU2_TR(0x4b6507);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b6510:L4b6510:{c.instructions+=14;NFSU2_TR(0x4b6510);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6512:{NFSU2_TR(0x4b6512);
u8 U[4];
w4(U+0,u32(0x77335cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6517:{NFSU2_TR(0x4b6517);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b651d:{NFSU2_TR(0x4b651d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b651e:{NFSU2_TR(0x4b651e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6525:{NFSU2_TR(0x4b6525);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6526:{NFSU2_TR(0x4b6526);
__builtin_memmove((R+0),gp(0x8764d0),4);
}
B4b652b:{NFSU2_TR(0x4b652b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b652c:{NFSU2_TR(0x4b652c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b652d:{NFSU2_TR(0x4b652d);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B4b6530:{NFSU2_TR(0x4b6530);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6532:{NFSU2_TR(0x4b6532);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6533:{NFSU2_TR(0x4b6533);
__builtin_memmove((R+24),(R+4),4);
}
B4b6535:{NFSU2_TR(0x4b6535);
if(r1(R+518)){{goto L4b661a;}}
}
B4b653b:L4b653b:{c.instructions+=3;NFSU2_TR(0x4b653b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b653c:{NFSU2_TR(0x4b653c);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6541:{NFSU2_TR(0x4b6541);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6546ull));
TAIL_STATIC(0x575620u,575);
}
B4b6546:L4b6546:{c.instructions+=6;NFSU2_TR(0x4b6546);
__builtin_memmove((R+12),(R+0),4);
}
B4b6548:{NFSU2_TR(0x4b6548);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b654b:{NFSU2_TR(0x4b654b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b654f:{NFSU2_TR(0x4b654f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6551:{NFSU2_TR(0x4b6551);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6559:{NFSU2_TR(0x4b6559);
if(r1(R+518)){{goto L4b6588;}}
}
B4b655b:L4b655b:{c.instructions+=11;NFSU2_TR(0x4b655b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b655d:{NFSU2_TR(0x4b655d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6563:{NFSU2_TR(0x4b6563);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6564:{NFSU2_TR(0x4b6564);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b656a:{NFSU2_TR(0x4b656a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b656b:{NFSU2_TR(0x4b656b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6571:{NFSU2_TR(0x4b6571);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6572:{NFSU2_TR(0x4b6572);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6578:{NFSU2_TR(0x4b6578);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6579:{NFSU2_TR(0x4b6579);
__builtin_memmove((R+4),(R+12),4);
}
B4b657b:{NFSU2_TR(0x4b657b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6580ull));
TAIL_STATIC(0x51e840u,51e);
}
B4b6580:L4b6580:{c.instructions+=2;NFSU2_TR(0x4b6580);
u8 U[4];
w4(U+0,u32(0x7920e0ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4b6586:{NFSU2_TR(0x4b6586);
{goto L4b658a;}
}
B4b6588:L4b6588:{c.instructions+=1;NFSU2_TR(0x4b6588);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4b658a:L4b658a:{c.instructions+=5;NFSU2_TR(0x4b658a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b658c:{NFSU2_TR(0x4b658c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b658d:{NFSU2_TR(0x4b658d);
__builtin_memmove((R+4),(R+24),4);
}
B4b658f:{NFSU2_TR(0x4b658f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6593:{NFSU2_TR(0x4b6593);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6598ull));
TAIL_STATIC(0x54f410u,54f);
}
B4b6598:L4b6598:{c.instructions+=2;NFSU2_TR(0x4b6598);
u8 U[4];
w4(U+0,u32(0x7d3930e7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b659d:{NFSU2_TR(0x4b659d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b65a2ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b65a2:L4b65a2:{c.instructions+=3;NFSU2_TR(0x4b65a2);
u8 U[4];
w4(U+0,u32(0x5eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b65a4:{NFSU2_TR(0x4b65a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b65a5:{NFSU2_TR(0x4b65a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b65aaull));
TAIL_STATIC(0x43ddf0u,43d);
}
B4b65aa:L4b65aa:{c.instructions+=3;NFSU2_TR(0x4b65aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b65ad:{NFSU2_TR(0x4b65ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b65af:{NFSU2_TR(0x4b65af);
if(r1(R+518)){{goto L4b6619;}}
}
B4b65b1:L4b65b1:{c.instructions+=4;NFSU2_TR(0x4b65b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b65b4:{NFSU2_TR(0x4b65b4);
u8 U[4];
w4(U+0,u32(0x4335c04eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b65b9:{NFSU2_TR(0x4b65b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b65ba:{NFSU2_TR(0x4b65ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b65bfull));
TAIL_STATIC(0x5379c0u,537);
}
B4b65bf:L4b65bf:{c.instructions+=3;NFSU2_TR(0x4b65bf);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b65c1:{NFSU2_TR(0x4b65c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b65c4:{NFSU2_TR(0x4b65c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b65c9ull));
TAIL_STATIC(0x575620u,575);
}
B4b65c9:L4b65c9:{c.instructions+=6;NFSU2_TR(0x4b65c9);
__builtin_memmove((R+28),(R+0),4);
}
B4b65cb:{NFSU2_TR(0x4b65cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b65ce:{NFSU2_TR(0x4b65ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b65d2:{NFSU2_TR(0x4b65d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b65d4:{NFSU2_TR(0x4b65d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b65dc:{NFSU2_TR(0x4b65dc);
if(r1(R+518)){{goto L4b65fd;}}
}
B4b65de:L4b65de:{c.instructions+=7;NFSU2_TR(0x4b65de);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b65e0:{NFSU2_TR(0x4b65e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b65e6:{NFSU2_TR(0x4b65e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b65e7:{NFSU2_TR(0x4b65e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b65ed:{NFSU2_TR(0x4b65ed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b65ee:{NFSU2_TR(0x4b65ee);
__builtin_memmove((R+4),(R+28),4);
}
B4b65f0:{NFSU2_TR(0x4b65f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b65f5ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4b65f5:L4b65f5:{c.instructions+=2;NFSU2_TR(0x4b65f5);
u8 U[4];
w4(U+0,u32(0x790bd8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b65fb:{NFSU2_TR(0x4b65fb);
{goto L4b65ff;}
}
B4b65fd:L4b65fd:{c.instructions+=1;NFSU2_TR(0x4b65fd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b65ff:L4b65ff:{c.instructions+=4;NFSU2_TR(0x4b65ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6600:{NFSU2_TR(0x4b6600);
__builtin_memmove((R+4),(R+24),4);
}
B4b6602:{NFSU2_TR(0x4b6602);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6606:{NFSU2_TR(0x4b6606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b660bull));
TAIL_STATIC(0x54ee40u,54e);
}
B4b660b:L4b660b:{c.instructions+=2;NFSU2_TR(0x4b660b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
w4(U+4,u32(0xc37c0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6612:{NFSU2_TR(0x4b6612);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
w4(U+4,u32(0xc1d00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6619:L4b6619:{c.instructions+=1;NFSU2_TR(0x4b6619);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b661a:L4b661a:{c.instructions+=3;NFSU2_TR(0x4b661a);
__builtin_memmove((R+0),gp(0x8764d4),4);
}
B4b661f:{NFSU2_TR(0x4b661f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6621:{NFSU2_TR(0x4b6621);
if(r1(R+518)){{goto L4b667c;}}
}
B4b6623:L4b6623:{c.instructions+=2;NFSU2_TR(0x4b6623);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6625:{NFSU2_TR(0x4b6625);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b662aull));
TAIL_STATIC(0x575620u,575);
}
B4b662a:L4b662a:{c.instructions+=6;NFSU2_TR(0x4b662a);
__builtin_memmove((R+28),(R+0),4);
}
B4b662c:{NFSU2_TR(0x4b662c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b662f:{NFSU2_TR(0x4b662f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6633:{NFSU2_TR(0x4b6633);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6635:{NFSU2_TR(0x4b6635);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b663d:{NFSU2_TR(0x4b663d);
if(r1(R+518)){{goto L4b666c;}}
}
B4b663f:L4b663f:{c.instructions+=11;NFSU2_TR(0x4b663f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6641:{NFSU2_TR(0x4b6641);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6647:{NFSU2_TR(0x4b6647);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6648:{NFSU2_TR(0x4b6648);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b664e:{NFSU2_TR(0x4b664e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b664f:{NFSU2_TR(0x4b664f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6655:{NFSU2_TR(0x4b6655);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6656:{NFSU2_TR(0x4b6656);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b665c:{NFSU2_TR(0x4b665c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b665d:{NFSU2_TR(0x4b665d);
__builtin_memmove((R+4),(R+28),4);
}
B4b665f:{NFSU2_TR(0x4b665f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6664ull));
TAIL_STATIC(0x51e230u,51e);
}
B4b6664:L4b6664:{c.instructions+=2;NFSU2_TR(0x4b6664);
u8 U[4];
w4(U+0,u32(0x792130ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b666a:{NFSU2_TR(0x4b666a);
{goto L4b666e;}
}
B4b666c:L4b666c:{c.instructions+=1;NFSU2_TR(0x4b666c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b666e:L4b666e:{c.instructions+=5;NFSU2_TR(0x4b666e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6670:{NFSU2_TR(0x4b6670);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6671:{NFSU2_TR(0x4b6671);
__builtin_memmove((R+4),(R+24),4);
}
B4b6673:{NFSU2_TR(0x4b6673);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6677:{NFSU2_TR(0x4b6677);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b667cull));
TAIL_STATIC(0x54ef30u,54e);
}
B4b667c:L4b667c:{c.instructions+=3;NFSU2_TR(0x4b667c);
__builtin_memmove((R+0),gp(0x8764d8),4);
}
B4b6681:{NFSU2_TR(0x4b6681);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6683:{NFSU2_TR(0x4b6683);
if(r1(R+518)){{goto L4b66e1;}}
}
B4b6685:L4b6685:{c.instructions+=2;NFSU2_TR(0x4b6685);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b668a:{NFSU2_TR(0x4b668a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b668full));
TAIL_STATIC(0x575620u,575);
}
B4b668f:L4b668f:{c.instructions+=6;NFSU2_TR(0x4b668f);
__builtin_memmove((R+28),(R+0),4);
}
B4b6691:{NFSU2_TR(0x4b6691);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b6694:{NFSU2_TR(0x4b6694);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6698:{NFSU2_TR(0x4b6698);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b669a:{NFSU2_TR(0x4b669a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b66a2:{NFSU2_TR(0x4b66a2);
if(r1(R+518)){{goto L4b66d1;}}
}
B4b66a4:L4b66a4:{c.instructions+=11;NFSU2_TR(0x4b66a4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b66a6:{NFSU2_TR(0x4b66a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b66ac:{NFSU2_TR(0x4b66ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b66ad:{NFSU2_TR(0x4b66ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b66b3:{NFSU2_TR(0x4b66b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b66b4:{NFSU2_TR(0x4b66b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b66ba:{NFSU2_TR(0x4b66ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b66bb:{NFSU2_TR(0x4b66bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b66c1:{NFSU2_TR(0x4b66c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b66c2:{NFSU2_TR(0x4b66c2);
__builtin_memmove((R+4),(R+28),4);
}
B4b66c4:{NFSU2_TR(0x4b66c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b66c9ull));
TAIL_STATIC(0x51e840u,51e);
}
B4b66c9:L4b66c9:{c.instructions+=2;NFSU2_TR(0x4b66c9);
u8 U[4];
w4(U+0,u32(0x792178ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b66cf:{NFSU2_TR(0x4b66cf);
{goto L4b66d3;}
}
B4b66d1:L4b66d1:{c.instructions+=1;NFSU2_TR(0x4b66d1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b66d3:L4b66d3:{c.instructions+=5;NFSU2_TR(0x4b66d3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b66d5:{NFSU2_TR(0x4b66d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b66d6:{NFSU2_TR(0x4b66d6);
__builtin_memmove((R+4),(R+24),4);
}
B4b66d8:{NFSU2_TR(0x4b66d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b66dc:{NFSU2_TR(0x4b66dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b66e1ull));
TAIL_STATIC(0x54f410u,54f);
}
B4b66e1:L4b66e1:{c.instructions+=3;NFSU2_TR(0x4b66e1);
__builtin_memmove((R+0),gp(0x8764dc),4);
}
B4b66e6:{NFSU2_TR(0x4b66e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b66e8:{NFSU2_TR(0x4b66e8);
if(r1(R+518)){{goto L4b6743;}}
}
B4b66ea:L4b66ea:{c.instructions+=2;NFSU2_TR(0x4b66ea);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b66ec:{NFSU2_TR(0x4b66ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b66f1ull));
TAIL_STATIC(0x575620u,575);
}
B4b66f1:L4b66f1:{c.instructions+=6;NFSU2_TR(0x4b66f1);
__builtin_memmove((R+28),(R+0),4);
}
B4b66f3:{NFSU2_TR(0x4b66f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b66f6:{NFSU2_TR(0x4b66f6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b66fa:{NFSU2_TR(0x4b66fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b66fc:{NFSU2_TR(0x4b66fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6704:{NFSU2_TR(0x4b6704);
if(r1(R+518)){{goto L4b6733;}}
}
B4b6706:L4b6706:{c.instructions+=11;NFSU2_TR(0x4b6706);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6708:{NFSU2_TR(0x4b6708);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b670e:{NFSU2_TR(0x4b670e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b670f:{NFSU2_TR(0x4b670f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6715:{NFSU2_TR(0x4b6715);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6716:{NFSU2_TR(0x4b6716);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b671c:{NFSU2_TR(0x4b671c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b671d:{NFSU2_TR(0x4b671d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6723:{NFSU2_TR(0x4b6723);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6724:{NFSU2_TR(0x4b6724);
__builtin_memmove((R+4),(R+28),4);
}
B4b6726:{NFSU2_TR(0x4b6726);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b672bull));
TAIL_STATIC(0x51e230u,51e);
}
B4b672b:L4b672b:{c.instructions+=2;NFSU2_TR(0x4b672b);
u8 U[4];
w4(U+0,u32(0x7921c8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6731:{NFSU2_TR(0x4b6731);
{goto L4b6735;}
}
B4b6733:L4b6733:{c.instructions+=1;NFSU2_TR(0x4b6733);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b6735:L4b6735:{c.instructions+=5;NFSU2_TR(0x4b6735);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6737:{NFSU2_TR(0x4b6737);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6738:{NFSU2_TR(0x4b6738);
__builtin_memmove((R+4),(R+24),4);
}
B4b673a:{NFSU2_TR(0x4b673a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b673e:{NFSU2_TR(0x4b673e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6743ull));
TAIL_STATIC(0x54ef30u,54e);
}
B4b6743:L4b6743:{c.instructions+=3;NFSU2_TR(0x4b6743);
__builtin_memmove((R+0),gp(0x876510),4);
}
B4b6748:{NFSU2_TR(0x4b6748);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b674a:{NFSU2_TR(0x4b674a);
if(r1(R+518)){{goto L4b67a5;}}
}
B4b674c:L4b674c:{c.instructions+=2;NFSU2_TR(0x4b674c);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b674e:{NFSU2_TR(0x4b674e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6753ull));
TAIL_STATIC(0x575620u,575);
}
B4b6753:L4b6753:{c.instructions+=6;NFSU2_TR(0x4b6753);
__builtin_memmove((R+28),(R+0),4);
}
B4b6755:{NFSU2_TR(0x4b6755);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b6758:{NFSU2_TR(0x4b6758);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b675c:{NFSU2_TR(0x4b675c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b675e:{NFSU2_TR(0x4b675e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6766:{NFSU2_TR(0x4b6766);
if(r1(R+518)){{goto L4b6795;}}
}
B4b6768:L4b6768:{c.instructions+=11;NFSU2_TR(0x4b6768);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b676a:{NFSU2_TR(0x4b676a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6770:{NFSU2_TR(0x4b6770);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6771:{NFSU2_TR(0x4b6771);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b6777:{NFSU2_TR(0x4b6777);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6778:{NFSU2_TR(0x4b6778);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b677e:{NFSU2_TR(0x4b677e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b677f:{NFSU2_TR(0x4b677f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6785:{NFSU2_TR(0x4b6785);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6786:{NFSU2_TR(0x4b6786);
__builtin_memmove((R+4),(R+28),4);
}
B4b6788:{NFSU2_TR(0x4b6788);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b678dull));
TAIL_STATIC(0x51e230u,51e);
}
B4b678d:L4b678d:{c.instructions+=2;NFSU2_TR(0x4b678d);
u8 U[4];
w4(U+0,u32(0x792210ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6793:{NFSU2_TR(0x4b6793);
{goto L4b6797;}
}
B4b6795:L4b6795:{c.instructions+=1;NFSU2_TR(0x4b6795);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b6797:L4b6797:{c.instructions+=5;NFSU2_TR(0x4b6797);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6799:{NFSU2_TR(0x4b6799);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b679a:{NFSU2_TR(0x4b679a);
__builtin_memmove((R+4),(R+24),4);
}
B4b679c:{NFSU2_TR(0x4b679c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b67a0:{NFSU2_TR(0x4b67a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b67a5ull));
TAIL_STATIC(0x54ef30u,54e);
}
B4b67a5:L4b67a5:{c.instructions+=3;NFSU2_TR(0x4b67a5);
__builtin_memmove((R+0),gp(0x8764e8),4);
}
B4b67aa:{NFSU2_TR(0x4b67aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b67ac:{NFSU2_TR(0x4b67ac);
if(r1(R+518)){{goto L4b6807;}}
}
B4b67ae:L4b67ae:{c.instructions+=2;NFSU2_TR(0x4b67ae);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b67b0:{NFSU2_TR(0x4b67b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b67b5ull));
TAIL_STATIC(0x575620u,575);
}
B4b67b5:L4b67b5:{c.instructions+=6;NFSU2_TR(0x4b67b5);
__builtin_memmove((R+28),(R+0),4);
}
B4b67b7:{NFSU2_TR(0x4b67b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b67ba:{NFSU2_TR(0x4b67ba);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b67be:{NFSU2_TR(0x4b67be);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b67c0:{NFSU2_TR(0x4b67c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b67c8:{NFSU2_TR(0x4b67c8);
if(r1(R+518)){{goto L4b67f7;}}
}
B4b67ca:L4b67ca:{c.instructions+=11;NFSU2_TR(0x4b67ca);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b67cc:{NFSU2_TR(0x4b67cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b67d2:{NFSU2_TR(0x4b67d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b67d3:{NFSU2_TR(0x4b67d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b67d9:{NFSU2_TR(0x4b67d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b67da:{NFSU2_TR(0x4b67da);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b67e0:{NFSU2_TR(0x4b67e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b67e1:{NFSU2_TR(0x4b67e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b67e7:{NFSU2_TR(0x4b67e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b67e8:{NFSU2_TR(0x4b67e8);
__builtin_memmove((R+4),(R+28),4);
}
B4b67ea:{NFSU2_TR(0x4b67ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b67efull));
TAIL_STATIC(0x51e230u,51e);
}
B4b67ef:L4b67ef:{c.instructions+=2;NFSU2_TR(0x4b67ef);
u8 U[4];
w4(U+0,u32(0x792258ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b67f5:{NFSU2_TR(0x4b67f5);
{goto L4b67f9;}
}
B4b67f7:L4b67f7:{c.instructions+=1;NFSU2_TR(0x4b67f7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b67f9:L4b67f9:{c.instructions+=5;NFSU2_TR(0x4b67f9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b67fb:{NFSU2_TR(0x4b67fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b67fc:{NFSU2_TR(0x4b67fc);
__builtin_memmove((R+4),(R+24),4);
}
B4b67fe:{NFSU2_TR(0x4b67fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6802:{NFSU2_TR(0x4b6802);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6807ull));
TAIL_STATIC(0x54ef30u,54e);
}
B4b6807:L4b6807:{c.instructions+=3;NFSU2_TR(0x4b6807);
__builtin_memmove((R+0),gp(0x87650c),4);
}
B4b680c:{NFSU2_TR(0x4b680c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b680e:{NFSU2_TR(0x4b680e);
if(r1(R+518)){{goto L4b686c;}}
}
B4b6810:L4b6810:{c.instructions+=2;NFSU2_TR(0x4b6810);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6815:{NFSU2_TR(0x4b6815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b681aull));
TAIL_STATIC(0x575620u,575);
}
B4b681a:L4b681a:{c.instructions+=6;NFSU2_TR(0x4b681a);
__builtin_memmove((R+28),(R+0),4);
}
B4b681c:{NFSU2_TR(0x4b681c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b681f:{NFSU2_TR(0x4b681f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6823:{NFSU2_TR(0x4b6823);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6825:{NFSU2_TR(0x4b6825);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b682d:{NFSU2_TR(0x4b682d);
if(r1(R+518)){{goto L4b685c;}}
}
B4b682f:L4b682f:{c.instructions+=11;NFSU2_TR(0x4b682f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6831:{NFSU2_TR(0x4b6831);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6837:{NFSU2_TR(0x4b6837);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6838:{NFSU2_TR(0x4b6838);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b683e:{NFSU2_TR(0x4b683e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b683f:{NFSU2_TR(0x4b683f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b6845:{NFSU2_TR(0x4b6845);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6846:{NFSU2_TR(0x4b6846);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b684c:{NFSU2_TR(0x4b684c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b684d:{NFSU2_TR(0x4b684d);
__builtin_memmove((R+4),(R+28),4);
}
B4b684f:{NFSU2_TR(0x4b684f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6854ull));
TAIL_STATIC(0x51e840u,51e);
}
B4b6854:L4b6854:{c.instructions+=2;NFSU2_TR(0x4b6854);
u8 U[4];
w4(U+0,u32(0x7922a0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b685a:{NFSU2_TR(0x4b685a);
{goto L4b685e;}
}
B4b685c:L4b685c:{c.instructions+=1;NFSU2_TR(0x4b685c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b685e:L4b685e:{c.instructions+=5;NFSU2_TR(0x4b685e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6860:{NFSU2_TR(0x4b6860);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6861:{NFSU2_TR(0x4b6861);
__builtin_memmove((R+4),(R+24),4);
}
B4b6863:{NFSU2_TR(0x4b6863);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6867:{NFSU2_TR(0x4b6867);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b686cull));
TAIL_STATIC(0x54f410u,54f);
}
B4b686c:L4b686c:{c.instructions+=3;NFSU2_TR(0x4b686c);
__builtin_memmove((R+0),gp(0x8764ec),4);
}
B4b6871:{NFSU2_TR(0x4b6871);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6873:{NFSU2_TR(0x4b6873);
if(r1(R+518)){{goto L4b68d1;}}
}
B4b6875:L4b6875:{c.instructions+=2;NFSU2_TR(0x4b6875);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b687a:{NFSU2_TR(0x4b687a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b687full));
TAIL_STATIC(0x575620u,575);
}
B4b687f:L4b687f:{c.instructions+=6;NFSU2_TR(0x4b687f);
__builtin_memmove((R+28),(R+0),4);
}
B4b6881:{NFSU2_TR(0x4b6881);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b6884:{NFSU2_TR(0x4b6884);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6888:{NFSU2_TR(0x4b6888);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b688a:{NFSU2_TR(0x4b688a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6892:{NFSU2_TR(0x4b6892);
if(r1(R+518)){{goto L4b68c1;}}
}
B4b6894:L4b6894:{c.instructions+=11;NFSU2_TR(0x4b6894);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6896:{NFSU2_TR(0x4b6896);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b689c:{NFSU2_TR(0x4b689c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b689d:{NFSU2_TR(0x4b689d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b68a3:{NFSU2_TR(0x4b68a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b68a4:{NFSU2_TR(0x4b68a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b68aa:{NFSU2_TR(0x4b68aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b68ab:{NFSU2_TR(0x4b68ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b68b1:{NFSU2_TR(0x4b68b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b68b2:{NFSU2_TR(0x4b68b2);
__builtin_memmove((R+4),(R+28),4);
}
B4b68b4:{NFSU2_TR(0x4b68b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b68b9ull));
TAIL_STATIC(0x51e840u,51e);
}
B4b68b9:L4b68b9:{c.instructions+=2;NFSU2_TR(0x4b68b9);
u8 U[4];
w4(U+0,u32(0x7922f0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b68bf:{NFSU2_TR(0x4b68bf);
{goto L4b68c3;}
}
B4b68c1:L4b68c1:{c.instructions+=1;NFSU2_TR(0x4b68c1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b68c3:L4b68c3:{c.instructions+=5;NFSU2_TR(0x4b68c3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b68c5:{NFSU2_TR(0x4b68c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b68c6:{NFSU2_TR(0x4b68c6);
__builtin_memmove((R+4),(R+24),4);
}
B4b68c8:{NFSU2_TR(0x4b68c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b68cc:{NFSU2_TR(0x4b68cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b68d1ull));
TAIL_STATIC(0x54f410u,54f);
}
B4b68d1:L4b68d1:{c.instructions+=3;NFSU2_TR(0x4b68d1);
__builtin_memmove((R+0),gp(0x8764f8),4);
}
B4b68d6:{NFSU2_TR(0x4b68d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b68d8:{NFSU2_TR(0x4b68d8);
if(r1(R+518)){{goto L4b6933;}}
}
B4b68da:L4b68da:{c.instructions+=2;NFSU2_TR(0x4b68da);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b68dc:{NFSU2_TR(0x4b68dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b68e1ull));
TAIL_STATIC(0x575620u,575);
}
B4b68e1:L4b68e1:{c.instructions+=6;NFSU2_TR(0x4b68e1);
__builtin_memmove((R+28),(R+0),4);
}
B4b68e3:{NFSU2_TR(0x4b68e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b68e6:{NFSU2_TR(0x4b68e6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b68ea:{NFSU2_TR(0x4b68ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b68ec:{NFSU2_TR(0x4b68ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b68f4:{NFSU2_TR(0x4b68f4);
if(r1(R+518)){{goto L4b6923;}}
}
B4b68f6:L4b68f6:{c.instructions+=11;NFSU2_TR(0x4b68f6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b68f8:{NFSU2_TR(0x4b68f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b68fe:{NFSU2_TR(0x4b68fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b68ff:{NFSU2_TR(0x4b68ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6905:{NFSU2_TR(0x4b6905);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6906:{NFSU2_TR(0x4b6906);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b690c:{NFSU2_TR(0x4b690c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b690d:{NFSU2_TR(0x4b690d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b6913:{NFSU2_TR(0x4b6913);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6914:{NFSU2_TR(0x4b6914);
__builtin_memmove((R+4),(R+28),4);
}
B4b6916:{NFSU2_TR(0x4b6916);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b691bull));
TAIL_STATIC(0x51e230u,51e);
}
B4b691b:L4b691b:{c.instructions+=2;NFSU2_TR(0x4b691b);
u8 U[4];
w4(U+0,u32(0x792340ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6921:{NFSU2_TR(0x4b6921);
{goto L4b6925;}
}
B4b6923:L4b6923:{c.instructions+=1;NFSU2_TR(0x4b6923);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b6925:L4b6925:{c.instructions+=5;NFSU2_TR(0x4b6925);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6927:{NFSU2_TR(0x4b6927);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6928:{NFSU2_TR(0x4b6928);
__builtin_memmove((R+4),(R+24),4);
}
B4b692a:{NFSU2_TR(0x4b692a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b692e:{NFSU2_TR(0x4b692e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6933ull));
TAIL_STATIC(0x54ef30u,54e);
}
B4b6933:L4b6933:{c.instructions+=3;NFSU2_TR(0x4b6933);
__builtin_memmove((R+0),gp(0x8764fc),4);
}
B4b6938:{NFSU2_TR(0x4b6938);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b693a:{NFSU2_TR(0x4b693a);
if(r1(R+518)){{goto L4b6995;}}
}
B4b693c:L4b693c:{c.instructions+=2;NFSU2_TR(0x4b693c);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b693e:{NFSU2_TR(0x4b693e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6943ull));
TAIL_STATIC(0x575620u,575);
}
B4b6943:L4b6943:{c.instructions+=6;NFSU2_TR(0x4b6943);
__builtin_memmove((R+28),(R+0),4);
}
B4b6945:{NFSU2_TR(0x4b6945);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b6948:{NFSU2_TR(0x4b6948);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b694c:{NFSU2_TR(0x4b694c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b694e:{NFSU2_TR(0x4b694e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6956:{NFSU2_TR(0x4b6956);
if(r1(R+518)){{goto L4b6985;}}
}
B4b6958:L4b6958:{c.instructions+=11;NFSU2_TR(0x4b6958);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b695a:{NFSU2_TR(0x4b695a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6960:{NFSU2_TR(0x4b6960);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6961:{NFSU2_TR(0x4b6961);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6967:{NFSU2_TR(0x4b6967);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6968:{NFSU2_TR(0x4b6968);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b696e:{NFSU2_TR(0x4b696e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b696f:{NFSU2_TR(0x4b696f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6975:{NFSU2_TR(0x4b6975);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6976:{NFSU2_TR(0x4b6976);
__builtin_memmove((R+4),(R+28),4);
}
B4b6978:{NFSU2_TR(0x4b6978);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b697dull));
TAIL_STATIC(0x51e230u,51e);
}
B4b697d:L4b697d:{c.instructions+=2;NFSU2_TR(0x4b697d);
u8 U[4];
w4(U+0,u32(0x792388ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6983:{NFSU2_TR(0x4b6983);
{goto L4b6987;}
}
B4b6985:L4b6985:{c.instructions+=1;NFSU2_TR(0x4b6985);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b6987:L4b6987:{c.instructions+=5;NFSU2_TR(0x4b6987);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6989:{NFSU2_TR(0x4b6989);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b698a:{NFSU2_TR(0x4b698a);
__builtin_memmove((R+4),(R+24),4);
}
B4b698c:{NFSU2_TR(0x4b698c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6990:{NFSU2_TR(0x4b6990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6995ull));
TAIL_STATIC(0x54ef30u,54e);
}
B4b6995:L4b6995:{c.instructions+=3;NFSU2_TR(0x4b6995);
__builtin_memmove((R+0),gp(0x876504),4);
}
B4b699a:{NFSU2_TR(0x4b699a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b699c:{NFSU2_TR(0x4b699c);
if(r1(R+518)){{goto L4b69f7;}}
}
B4b699e:L4b699e:{c.instructions+=2;NFSU2_TR(0x4b699e);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b69a0:{NFSU2_TR(0x4b69a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b69a5ull));
TAIL_STATIC(0x575620u,575);
}
B4b69a5:L4b69a5:{c.instructions+=6;NFSU2_TR(0x4b69a5);
__builtin_memmove((R+28),(R+0),4);
}
B4b69a7:{NFSU2_TR(0x4b69a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b69aa:{NFSU2_TR(0x4b69aa);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b69ae:{NFSU2_TR(0x4b69ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b69b0:{NFSU2_TR(0x4b69b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b69b8:{NFSU2_TR(0x4b69b8);
if(r1(R+518)){{goto L4b69e7;}}
}
B4b69ba:L4b69ba:{c.instructions+=11;NFSU2_TR(0x4b69ba);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b69bc:{NFSU2_TR(0x4b69bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b69c2:{NFSU2_TR(0x4b69c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b69c3:{NFSU2_TR(0x4b69c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b69c9:{NFSU2_TR(0x4b69c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b69ca:{NFSU2_TR(0x4b69ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b69d0:{NFSU2_TR(0x4b69d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b69d1:{NFSU2_TR(0x4b69d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b69d7:{NFSU2_TR(0x4b69d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b69d8:{NFSU2_TR(0x4b69d8);
__builtin_memmove((R+4),(R+28),4);
}
B4b69da:{NFSU2_TR(0x4b69da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b69dfull));
TAIL_STATIC(0x51e230u,51e);
}
B4b69df:L4b69df:{c.instructions+=2;NFSU2_TR(0x4b69df);
u8 U[4];
w4(U+0,u32(0x7923d0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b69e5:{NFSU2_TR(0x4b69e5);
{goto L4b69e9;}
}
B4b69e7:L4b69e7:{c.instructions+=1;NFSU2_TR(0x4b69e7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b69e9:L4b69e9:{c.instructions+=5;NFSU2_TR(0x4b69e9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b69eb:{NFSU2_TR(0x4b69eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b69ec:{NFSU2_TR(0x4b69ec);
__builtin_memmove((R+4),(R+24),4);
}
B4b69ee:{NFSU2_TR(0x4b69ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b69f2:{NFSU2_TR(0x4b69f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b69f7ull));
TAIL_STATIC(0x54ef30u,54e);
}
B4b69f7:L4b69f7:{c.instructions+=3;NFSU2_TR(0x4b69f7);
__builtin_memmove((R+0),gp(0x8764f4),4);
}
B4b69fc:{NFSU2_TR(0x4b69fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b69fe:{NFSU2_TR(0x4b69fe);
if(r1(R+518)){{goto L4b6a59;}}
}
B4b6a00:L4b6a00:{c.instructions+=2;NFSU2_TR(0x4b6a00);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6a02:{NFSU2_TR(0x4b6a02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6a07ull));
TAIL_STATIC(0x575620u,575);
}
B4b6a07:L4b6a07:{c.instructions+=6;NFSU2_TR(0x4b6a07);
__builtin_memmove((R+28),(R+0),4);
}
B4b6a09:{NFSU2_TR(0x4b6a09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b6a0c:{NFSU2_TR(0x4b6a0c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6a10:{NFSU2_TR(0x4b6a10);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6a12:{NFSU2_TR(0x4b6a12);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6a1a:{NFSU2_TR(0x4b6a1a);
if(r1(R+518)){{goto L4b6a49;}}
}
B4b6a1c:L4b6a1c:{c.instructions+=11;NFSU2_TR(0x4b6a1c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6a1e:{NFSU2_TR(0x4b6a1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b6a24:{NFSU2_TR(0x4b6a24);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6a25:{NFSU2_TR(0x4b6a25);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6a2b:{NFSU2_TR(0x4b6a2b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6a2c:{NFSU2_TR(0x4b6a2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6a32:{NFSU2_TR(0x4b6a32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6a33:{NFSU2_TR(0x4b6a33);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b6a39:{NFSU2_TR(0x4b6a39);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6a3a:{NFSU2_TR(0x4b6a3a);
__builtin_memmove((R+4),(R+28),4);
}
B4b6a3c:{NFSU2_TR(0x4b6a3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6a41ull));
TAIL_STATIC(0x51e230u,51e);
}
B4b6a41:L4b6a41:{c.instructions+=2;NFSU2_TR(0x4b6a41);
u8 U[4];
w4(U+0,u32(0x792418ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6a47:{NFSU2_TR(0x4b6a47);
{goto L4b6a4b;}
}
B4b6a49:L4b6a49:{c.instructions+=1;NFSU2_TR(0x4b6a49);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b6a4b:L4b6a4b:{c.instructions+=5;NFSU2_TR(0x4b6a4b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6a4d:{NFSU2_TR(0x4b6a4d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6a4e:{NFSU2_TR(0x4b6a4e);
__builtin_memmove((R+4),(R+24),4);
}
B4b6a50:{NFSU2_TR(0x4b6a50);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6a54:{NFSU2_TR(0x4b6a54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6a59ull));
TAIL_STATIC(0x54ef30u,54e);
}
B4b6a59:L4b6a59:{c.instructions+=3;NFSU2_TR(0x4b6a59);
__builtin_memmove((R+0),gp(0x8764f0),4);
}
B4b6a5e:{NFSU2_TR(0x4b6a5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6a60:{NFSU2_TR(0x4b6a60);
if(r1(R+518)){{goto L4b6abb;}}
}
B4b6a62:L4b6a62:{c.instructions+=2;NFSU2_TR(0x4b6a62);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6a64:{NFSU2_TR(0x4b6a64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6a69ull));
TAIL_STATIC(0x575620u,575);
}
B4b6a69:L4b6a69:{c.instructions+=6;NFSU2_TR(0x4b6a69);
__builtin_memmove((R+28),(R+0),4);
}
B4b6a6b:{NFSU2_TR(0x4b6a6b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b6a6e:{NFSU2_TR(0x4b6a6e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6a72:{NFSU2_TR(0x4b6a72);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6a74:{NFSU2_TR(0x4b6a74);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xdull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6a7c:{NFSU2_TR(0x4b6a7c);
if(r1(R+518)){{goto L4b6aab;}}
}
B4b6a7e:L4b6a7e:{c.instructions+=11;NFSU2_TR(0x4b6a7e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6a80:{NFSU2_TR(0x4b6a80);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6a86:{NFSU2_TR(0x4b6a86);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6a87:{NFSU2_TR(0x4b6a87);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6a8d:{NFSU2_TR(0x4b6a8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6a8e:{NFSU2_TR(0x4b6a8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b6a94:{NFSU2_TR(0x4b6a94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6a95:{NFSU2_TR(0x4b6a95);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6a9b:{NFSU2_TR(0x4b6a9b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6a9c:{NFSU2_TR(0x4b6a9c);
__builtin_memmove((R+4),(R+28),4);
}
B4b6a9e:{NFSU2_TR(0x4b6a9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6aa3ull));
TAIL_STATIC(0x51e230u,51e);
}
B4b6aa3:L4b6aa3:{c.instructions+=2;NFSU2_TR(0x4b6aa3);
u8 U[4];
w4(U+0,u32(0x792460ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6aa9:{NFSU2_TR(0x4b6aa9);
{goto L4b6aad;}
}
B4b6aab:L4b6aab:{c.instructions+=1;NFSU2_TR(0x4b6aab);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b6aad:L4b6aad:{c.instructions+=5;NFSU2_TR(0x4b6aad);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6aaf:{NFSU2_TR(0x4b6aaf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6ab0:{NFSU2_TR(0x4b6ab0);
__builtin_memmove((R+4),(R+24),4);
}
B4b6ab2:{NFSU2_TR(0x4b6ab2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6ab6:{NFSU2_TR(0x4b6ab6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6abbull));
TAIL_STATIC(0x54ef30u,54e);
}
B4b6abb:L4b6abb:{c.instructions+=3;NFSU2_TR(0x4b6abb);
__builtin_memmove((R+0),gp(0x876508),4);
}
B4b6ac0:{NFSU2_TR(0x4b6ac0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6ac2:{NFSU2_TR(0x4b6ac2);
if(r1(R+518)){{goto L4b6b1d;}}
}
B4b6ac4:L4b6ac4:{c.instructions+=2;NFSU2_TR(0x4b6ac4);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6ac6:{NFSU2_TR(0x4b6ac6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6acbull));
TAIL_STATIC(0x575620u,575);
}
B4b6acb:L4b6acb:{c.instructions+=6;NFSU2_TR(0x4b6acb);
__builtin_memmove((R+28),(R+0),4);
}
B4b6acd:{NFSU2_TR(0x4b6acd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b6ad0:{NFSU2_TR(0x4b6ad0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6ad4:{NFSU2_TR(0x4b6ad4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6ad6:{NFSU2_TR(0x4b6ad6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xeull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6ade:{NFSU2_TR(0x4b6ade);
if(r1(R+518)){{goto L4b6b0d;}}
}
B4b6ae0:L4b6ae0:{c.instructions+=11;NFSU2_TR(0x4b6ae0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6ae2:{NFSU2_TR(0x4b6ae2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6ae8:{NFSU2_TR(0x4b6ae8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6ae9:{NFSU2_TR(0x4b6ae9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b6aef:{NFSU2_TR(0x4b6aef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6af0:{NFSU2_TR(0x4b6af0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6af6:{NFSU2_TR(0x4b6af6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6af7:{NFSU2_TR(0x4b6af7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6afd:{NFSU2_TR(0x4b6afd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6afe:{NFSU2_TR(0x4b6afe);
__builtin_memmove((R+4),(R+28),4);
}
B4b6b00:{NFSU2_TR(0x4b6b00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6b05ull));
TAIL_STATIC(0x51e230u,51e);
}
B4b6b05:L4b6b05:{c.instructions+=2;NFSU2_TR(0x4b6b05);
u8 U[4];
w4(U+0,u32(0x7924f8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6b0b:{NFSU2_TR(0x4b6b0b);
{goto L4b6b0f;}
}
B4b6b0d:L4b6b0d:{c.instructions+=1;NFSU2_TR(0x4b6b0d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b6b0f:L4b6b0f:{c.instructions+=5;NFSU2_TR(0x4b6b0f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6b11:{NFSU2_TR(0x4b6b11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6b12:{NFSU2_TR(0x4b6b12);
__builtin_memmove((R+4),(R+24),4);
}
B4b6b14:{NFSU2_TR(0x4b6b14);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6b18:{NFSU2_TR(0x4b6b18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6b1dull));
TAIL_STATIC(0x54ef30u,54e);
}
B4b6b1d:L4b6b1d:{c.instructions+=3;NFSU2_TR(0x4b6b1d);
__builtin_memmove((R+0),gp(0x876520),4);
}
B4b6b22:{NFSU2_TR(0x4b6b22);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6b24:{NFSU2_TR(0x4b6b24);
if(r1(R+518)){{goto L4b6b82;}}
}
B4b6b26:L4b6b26:{c.instructions+=2;NFSU2_TR(0x4b6b26);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6b2b:{NFSU2_TR(0x4b6b2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6b30ull));
TAIL_STATIC(0x575620u,575);
}
B4b6b30:L4b6b30:{c.instructions+=6;NFSU2_TR(0x4b6b30);
__builtin_memmove((R+28),(R+0),4);
}
B4b6b32:{NFSU2_TR(0x4b6b32);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b6b35:{NFSU2_TR(0x4b6b35);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6b39:{NFSU2_TR(0x4b6b39);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6b3b:{NFSU2_TR(0x4b6b3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6b43:{NFSU2_TR(0x4b6b43);
if(r1(R+518)){{goto L4b6b72;}}
}
B4b6b45:L4b6b45:{c.instructions+=11;NFSU2_TR(0x4b6b45);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6b47:{NFSU2_TR(0x4b6b47);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b6b4d:{NFSU2_TR(0x4b6b4d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6b4e:{NFSU2_TR(0x4b6b4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6b54:{NFSU2_TR(0x4b6b54);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6b55:{NFSU2_TR(0x4b6b55);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6b5b:{NFSU2_TR(0x4b6b5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6b5c:{NFSU2_TR(0x4b6b5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b6b62:{NFSU2_TR(0x4b6b62);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6b63:{NFSU2_TR(0x4b6b63);
__builtin_memmove((R+4),(R+28),4);
}
B4b6b65:{NFSU2_TR(0x4b6b65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6b6aull));
TAIL_STATIC(0x51e840u,51e);
}
B4b6b6a:L4b6b6a:{c.instructions+=2;NFSU2_TR(0x4b6b6a);
u8 U[4];
w4(U+0,u32(0x7924a8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6b70:{NFSU2_TR(0x4b6b70);
{goto L4b6b74;}
}
B4b6b72:L4b6b72:{c.instructions+=1;NFSU2_TR(0x4b6b72);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b6b74:L4b6b74:{c.instructions+=5;NFSU2_TR(0x4b6b74);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6b76:{NFSU2_TR(0x4b6b76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6b77:{NFSU2_TR(0x4b6b77);
__builtin_memmove((R+4),(R+24),4);
}
B4b6b79:{NFSU2_TR(0x4b6b79);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6b7d:{NFSU2_TR(0x4b6b7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6b82ull));
TAIL_STATIC(0x54f410u,54f);
}
B4b6b82:L4b6b82:{c.instructions+=3;NFSU2_TR(0x4b6b82);
__builtin_memmove((R+0),gp(0x87651c),4);
}
B4b6b87:{NFSU2_TR(0x4b6b87);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6b89:{NFSU2_TR(0x4b6b89);
if(r1(R+518)){{goto L4b6be4;}}
}
B4b6b8b:L4b6b8b:{c.instructions+=2;NFSU2_TR(0x4b6b8b);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6b8d:{NFSU2_TR(0x4b6b8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6b92ull));
TAIL_STATIC(0x575620u,575);
}
B4b6b92:L4b6b92:{c.instructions+=6;NFSU2_TR(0x4b6b92);
__builtin_memmove((R+28),(R+0),4);
}
B4b6b94:{NFSU2_TR(0x4b6b94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b6b97:{NFSU2_TR(0x4b6b97);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6b9b:{NFSU2_TR(0x4b6b9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6b9d:{NFSU2_TR(0x4b6b9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6ba5:{NFSU2_TR(0x4b6ba5);
if(r1(R+518)){{goto L4b6bd4;}}
}
B4b6ba7:L4b6ba7:{c.instructions+=11;NFSU2_TR(0x4b6ba7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6ba9:{NFSU2_TR(0x4b6ba9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6baf:{NFSU2_TR(0x4b6baf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6bb0:{NFSU2_TR(0x4b6bb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6bb6:{NFSU2_TR(0x4b6bb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6bb7:{NFSU2_TR(0x4b6bb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b6bbd:{NFSU2_TR(0x4b6bbd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6bbe:{NFSU2_TR(0x4b6bbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6bc4:{NFSU2_TR(0x4b6bc4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6bc5:{NFSU2_TR(0x4b6bc5);
__builtin_memmove((R+4),(R+28),4);
}
B4b6bc7:{NFSU2_TR(0x4b6bc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6bccull));
TAIL_STATIC(0x51e230u,51e);
}
B4b6bcc:L4b6bcc:{c.instructions+=2;NFSU2_TR(0x4b6bcc);
u8 U[4];
w4(U+0,u32(0x792540ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6bd2:{NFSU2_TR(0x4b6bd2);
{goto L4b6bd6;}
}
B4b6bd4:L4b6bd4:{c.instructions+=1;NFSU2_TR(0x4b6bd4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b6bd6:L4b6bd6:{c.instructions+=5;NFSU2_TR(0x4b6bd6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6bd8:{NFSU2_TR(0x4b6bd8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6bd9:{NFSU2_TR(0x4b6bd9);
__builtin_memmove((R+4),(R+24),4);
}
B4b6bdb:{NFSU2_TR(0x4b6bdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6bdf:{NFSU2_TR(0x4b6bdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6be4ull));
TAIL_STATIC(0x54ef30u,54e);
}
B4b6be4:L4b6be4:{c.instructions+=3;NFSU2_TR(0x4b6be4);
__builtin_memmove((R+0),gp(0x876524),4);
}
B4b6be9:{NFSU2_TR(0x4b6be9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6beb:{NFSU2_TR(0x4b6beb);
if(r1(R+518)){{goto L4b6c46;}}
}
B4b6bed:L4b6bed:{c.instructions+=2;NFSU2_TR(0x4b6bed);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6bef:{NFSU2_TR(0x4b6bef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6bf4ull));
TAIL_STATIC(0x575620u,575);
}
B4b6bf4:L4b6bf4:{c.instructions+=6;NFSU2_TR(0x4b6bf4);
__builtin_memmove((R+28),(R+0),4);
}
B4b6bf6:{NFSU2_TR(0x4b6bf6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b6bf9:{NFSU2_TR(0x4b6bf9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6bfd:{NFSU2_TR(0x4b6bfd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6bff:{NFSU2_TR(0x4b6bff);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x11ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6c07:{NFSU2_TR(0x4b6c07);
if(r1(R+518)){{goto L4b6c36;}}
}
B4b6c09:L4b6c09:{c.instructions+=11;NFSU2_TR(0x4b6c09);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6c0b:{NFSU2_TR(0x4b6c0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6c11:{NFSU2_TR(0x4b6c11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6c12:{NFSU2_TR(0x4b6c12);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b6c18:{NFSU2_TR(0x4b6c18);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6c19:{NFSU2_TR(0x4b6c19);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6c1f:{NFSU2_TR(0x4b6c1f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6c20:{NFSU2_TR(0x4b6c20);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6c26:{NFSU2_TR(0x4b6c26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6c27:{NFSU2_TR(0x4b6c27);
__builtin_memmove((R+4),(R+28),4);
}
B4b6c29:{NFSU2_TR(0x4b6c29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6c2eull));
TAIL_STATIC(0x51e230u,51e);
}
B4b6c2e:L4b6c2e:{c.instructions+=2;NFSU2_TR(0x4b6c2e);
u8 U[4];
w4(U+0,u32(0x792588ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6c34:{NFSU2_TR(0x4b6c34);
{goto L4b6c38;}
}
B4b6c36:L4b6c36:{c.instructions+=1;NFSU2_TR(0x4b6c36);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b6c38:L4b6c38:{c.instructions+=5;NFSU2_TR(0x4b6c38);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6c3a:{NFSU2_TR(0x4b6c3a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6c3b:{NFSU2_TR(0x4b6c3b);
__builtin_memmove((R+4),(R+24),4);
}
B4b6c3d:{NFSU2_TR(0x4b6c3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6c41:{NFSU2_TR(0x4b6c41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6c46ull));
TAIL_STATIC(0x54ef30u,54e);
}
B4b6c46:L4b6c46:{c.instructions+=3;NFSU2_TR(0x4b6c46);
__builtin_memmove((R+0),gp(0x876514),4);
}
B4b6c4b:{NFSU2_TR(0x4b6c4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6c4d:{NFSU2_TR(0x4b6c4d);
if(r1(R+518)){{goto L4b6ca8;}}
}
B4b6c4f:L4b6c4f:{c.instructions+=2;NFSU2_TR(0x4b6c4f);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6c51:{NFSU2_TR(0x4b6c51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6c56ull));
TAIL_STATIC(0x575620u,575);
}
B4b6c56:L4b6c56:{c.instructions+=6;NFSU2_TR(0x4b6c56);
__builtin_memmove((R+28),(R+0),4);
}
B4b6c58:{NFSU2_TR(0x4b6c58);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b6c5b:{NFSU2_TR(0x4b6c5b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6c5f:{NFSU2_TR(0x4b6c5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6c61:{NFSU2_TR(0x4b6c61);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x12ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6c69:{NFSU2_TR(0x4b6c69);
if(r1(R+518)){{goto L4b6c98;}}
}
B4b6c6b:L4b6c6b:{c.instructions+=11;NFSU2_TR(0x4b6c6b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6c6d:{NFSU2_TR(0x4b6c6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b6c73:{NFSU2_TR(0x4b6c73);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6c74:{NFSU2_TR(0x4b6c74);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6c7a:{NFSU2_TR(0x4b6c7a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6c7b:{NFSU2_TR(0x4b6c7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6c81:{NFSU2_TR(0x4b6c81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6c82:{NFSU2_TR(0x4b6c82);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b6c88:{NFSU2_TR(0x4b6c88);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6c89:{NFSU2_TR(0x4b6c89);
__builtin_memmove((R+4),(R+28),4);
}
B4b6c8b:{NFSU2_TR(0x4b6c8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6c90ull));
TAIL_STATIC(0x51e230u,51e);
}
B4b6c90:L4b6c90:{c.instructions+=2;NFSU2_TR(0x4b6c90);
u8 U[4];
w4(U+0,u32(0x7925d0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6c96:{NFSU2_TR(0x4b6c96);
{goto L4b6c9a;}
}
B4b6c98:L4b6c98:{c.instructions+=1;NFSU2_TR(0x4b6c98);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b6c9a:L4b6c9a:{c.instructions+=5;NFSU2_TR(0x4b6c9a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6c9c:{NFSU2_TR(0x4b6c9c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6c9d:{NFSU2_TR(0x4b6c9d);
__builtin_memmove((R+4),(R+24),4);
}
B4b6c9f:{NFSU2_TR(0x4b6c9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6ca3:{NFSU2_TR(0x4b6ca3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6ca8ull));
TAIL_STATIC(0x54ef30u,54e);
}
B4b6ca8:L4b6ca8:{c.instructions+=3;NFSU2_TR(0x4b6ca8);
__builtin_memmove((R+0),gp(0x876518),4);
}
B4b6cad:{NFSU2_TR(0x4b6cad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6caf:{NFSU2_TR(0x4b6caf);
if(r1(R+518)){{goto L4b6d0a;}}
}
B4b6cb1:L4b6cb1:{c.instructions+=2;NFSU2_TR(0x4b6cb1);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6cb3:{NFSU2_TR(0x4b6cb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6cb8ull));
TAIL_STATIC(0x575620u,575);
}
B4b6cb8:L4b6cb8:{c.instructions+=6;NFSU2_TR(0x4b6cb8);
__builtin_memmove((R+28),(R+0),4);
}
B4b6cba:{NFSU2_TR(0x4b6cba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b6cbd:{NFSU2_TR(0x4b6cbd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6cc1:{NFSU2_TR(0x4b6cc1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6cc3:{NFSU2_TR(0x4b6cc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x13ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6ccb:{NFSU2_TR(0x4b6ccb);
if(r1(R+518)){{goto L4b6cfa;}}
}
B4b6ccd:L4b6ccd:{c.instructions+=11;NFSU2_TR(0x4b6ccd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6ccf:{NFSU2_TR(0x4b6ccf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6cd5:{NFSU2_TR(0x4b6cd5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6cd6:{NFSU2_TR(0x4b6cd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6cdc:{NFSU2_TR(0x4b6cdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6cdd:{NFSU2_TR(0x4b6cdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b6ce3:{NFSU2_TR(0x4b6ce3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6ce4:{NFSU2_TR(0x4b6ce4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6cea:{NFSU2_TR(0x4b6cea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6ceb:{NFSU2_TR(0x4b6ceb);
__builtin_memmove((R+4),(R+28),4);
}
B4b6ced:{NFSU2_TR(0x4b6ced);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6cf2ull));
TAIL_STATIC(0x51e230u,51e);
}
B4b6cf2:L4b6cf2:{c.instructions+=2;NFSU2_TR(0x4b6cf2);
u8 U[4];
w4(U+0,u32(0x792618ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6cf8:{NFSU2_TR(0x4b6cf8);
{goto L4b6cfc;}
}
B4b6cfa:L4b6cfa:{c.instructions+=1;NFSU2_TR(0x4b6cfa);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b6cfc:L4b6cfc:{c.instructions+=5;NFSU2_TR(0x4b6cfc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6cfe:{NFSU2_TR(0x4b6cfe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6cff:{NFSU2_TR(0x4b6cff);
__builtin_memmove((R+4),(R+24),4);
}
B4b6d01:{NFSU2_TR(0x4b6d01);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6d05:{NFSU2_TR(0x4b6d05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6d0aull));
TAIL_STATIC(0x54ef30u,54e);
}
B4b6d0a:L4b6d0a:{c.instructions+=3;NFSU2_TR(0x4b6d0a);
__builtin_memmove((R+0),gp(0x876528),4);
}
B4b6d0f:{NFSU2_TR(0x4b6d0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6d11:{NFSU2_TR(0x4b6d11);
if(r1(R+518)){{goto L4b6d6c;}}
}
B4b6d13:L4b6d13:{c.instructions+=2;NFSU2_TR(0x4b6d13);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6d15:{NFSU2_TR(0x4b6d15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6d1aull));
TAIL_STATIC(0x575620u,575);
}
B4b6d1a:L4b6d1a:{c.instructions+=6;NFSU2_TR(0x4b6d1a);
__builtin_memmove((R+28),(R+0),4);
}
B4b6d1c:{NFSU2_TR(0x4b6d1c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b6d1f:{NFSU2_TR(0x4b6d1f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6d23:{NFSU2_TR(0x4b6d23);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6d25:{NFSU2_TR(0x4b6d25);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6d2d:{NFSU2_TR(0x4b6d2d);
if(r1(R+518)){{goto L4b6d5c;}}
}
B4b6d2f:L4b6d2f:{c.instructions+=11;NFSU2_TR(0x4b6d2f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6d31:{NFSU2_TR(0x4b6d31);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6d37:{NFSU2_TR(0x4b6d37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6d38:{NFSU2_TR(0x4b6d38);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b6d3e:{NFSU2_TR(0x4b6d3e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6d3f:{NFSU2_TR(0x4b6d3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6d45:{NFSU2_TR(0x4b6d45);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6d46:{NFSU2_TR(0x4b6d46);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6d4c:{NFSU2_TR(0x4b6d4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6d4d:{NFSU2_TR(0x4b6d4d);
__builtin_memmove((R+4),(R+28),4);
}
B4b6d4f:{NFSU2_TR(0x4b6d4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6d54ull));
TAIL_STATIC(0x51e230u,51e);
}
B4b6d54:L4b6d54:{c.instructions+=2;NFSU2_TR(0x4b6d54);
u8 U[4];
w4(U+0,u32(0x792660ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6d5a:{NFSU2_TR(0x4b6d5a);
{goto L4b6d5e;}
}
B4b6d5c:L4b6d5c:{c.instructions+=1;NFSU2_TR(0x4b6d5c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b6d5e:L4b6d5e:{c.instructions+=5;NFSU2_TR(0x4b6d5e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6d60:{NFSU2_TR(0x4b6d60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6d61:{NFSU2_TR(0x4b6d61);
__builtin_memmove((R+4),(R+24),4);
}
B4b6d63:{NFSU2_TR(0x4b6d63);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6d67:{NFSU2_TR(0x4b6d67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6d6cull));
TAIL_STATIC(0x54ef30u,54e);
}
B4b6d6c:L4b6d6c:{c.instructions+=3;NFSU2_TR(0x4b6d6c);
__builtin_memmove((R+0),gp(0x876530),4);
}
B4b6d71:{NFSU2_TR(0x4b6d71);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6d73:{NFSU2_TR(0x4b6d73);
if(r1(R+518)){{goto L4b6dd1;}}
}
B4b6d75:L4b6d75:{c.instructions+=2;NFSU2_TR(0x4b6d75);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6d7a:{NFSU2_TR(0x4b6d7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6d7full));
TAIL_STATIC(0x575620u,575);
}
B4b6d7f:L4b6d7f:{c.instructions+=6;NFSU2_TR(0x4b6d7f);
__builtin_memmove((R+28),(R+0),4);
}
B4b6d81:{NFSU2_TR(0x4b6d81);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b6d84:{NFSU2_TR(0x4b6d84);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6d88:{NFSU2_TR(0x4b6d88);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6d8a:{NFSU2_TR(0x4b6d8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x15ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6d92:{NFSU2_TR(0x4b6d92);
if(r1(R+518)){{goto L4b6dc1;}}
}
B4b6d94:L4b6d94:{c.instructions+=11;NFSU2_TR(0x4b6d94);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6d96:{NFSU2_TR(0x4b6d96);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b6d9c:{NFSU2_TR(0x4b6d9c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6d9d:{NFSU2_TR(0x4b6d9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6da3:{NFSU2_TR(0x4b6da3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6da4:{NFSU2_TR(0x4b6da4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6daa:{NFSU2_TR(0x4b6daa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6dab:{NFSU2_TR(0x4b6dab);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b6db1:{NFSU2_TR(0x4b6db1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6db2:{NFSU2_TR(0x4b6db2);
__builtin_memmove((R+4),(R+28),4);
}
B4b6db4:{NFSU2_TR(0x4b6db4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6db9ull));
TAIL_STATIC(0x51e840u,51e);
}
B4b6db9:L4b6db9:{c.instructions+=2;NFSU2_TR(0x4b6db9);
u8 U[4];
w4(U+0,u32(0x791fc8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6dbf:{NFSU2_TR(0x4b6dbf);
{goto L4b6dc3;}
}
B4b6dc1:L4b6dc1:{c.instructions+=1;NFSU2_TR(0x4b6dc1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b6dc3:L4b6dc3:{c.instructions+=5;NFSU2_TR(0x4b6dc3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6dc5:{NFSU2_TR(0x4b6dc5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6dc6:{NFSU2_TR(0x4b6dc6);
__builtin_memmove((R+4),(R+24),4);
}
B4b6dc8:{NFSU2_TR(0x4b6dc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6dcc:{NFSU2_TR(0x4b6dcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6dd1ull));
TAIL_STATIC(0x54f410u,54f);
}
B4b6dd1:L4b6dd1:{c.instructions+=2;NFSU2_TR(0x4b6dd1);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6dd3:{NFSU2_TR(0x4b6dd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6dd8ull));
TAIL_STATIC(0x575620u,575);
}
B4b6dd8:L4b6dd8:{c.instructions+=6;NFSU2_TR(0x4b6dd8);
__builtin_memmove((R+28),(R+0),4);
}
B4b6dda:{NFSU2_TR(0x4b6dda);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b6ddd:{NFSU2_TR(0x4b6ddd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6de1:{NFSU2_TR(0x4b6de1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6de3:{NFSU2_TR(0x4b6de3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x16ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6deb:{NFSU2_TR(0x4b6deb);
if(r1(R+518)){{goto L4b6e1a;}}
}
B4b6ded:L4b6ded:{c.instructions+=11;NFSU2_TR(0x4b6ded);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6def:{NFSU2_TR(0x4b6def);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6df5:{NFSU2_TR(0x4b6df5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6df6:{NFSU2_TR(0x4b6df6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6dfc:{NFSU2_TR(0x4b6dfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6dfd:{NFSU2_TR(0x4b6dfd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b6e03:{NFSU2_TR(0x4b6e03);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6e04:{NFSU2_TR(0x4b6e04);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6e0a:{NFSU2_TR(0x4b6e0a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6e0b:{NFSU2_TR(0x4b6e0b);
__builtin_memmove((R+4),(R+28),4);
}
B4b6e0d:{NFSU2_TR(0x4b6e0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6e12ull));
TAIL_STATIC(0x51e230u,51e);
}
B4b6e12:L4b6e12:{c.instructions+=2;NFSU2_TR(0x4b6e12);
u8 U[4];
w4(U+0,u32(0x792018ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6e18:{NFSU2_TR(0x4b6e18);
{goto L4b6e1c;}
}
B4b6e1a:L4b6e1a:{c.instructions+=1;NFSU2_TR(0x4b6e1a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b6e1c:L4b6e1c:{c.instructions+=5;NFSU2_TR(0x4b6e1c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6e1e:{NFSU2_TR(0x4b6e1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6e1f:{NFSU2_TR(0x4b6e1f);
__builtin_memmove((R+4),(R+24),4);
}
B4b6e21:{NFSU2_TR(0x4b6e21);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6e25:{NFSU2_TR(0x4b6e25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6e2aull));
TAIL_STATIC(0x54ef30u,54e);
}
B4b6e2a:L4b6e2a:{c.instructions+=2;NFSU2_TR(0x4b6e2a);
u8 U[4];
w4(U+0,u32(0x793fc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6e2f:{NFSU2_TR(0x4b6e2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6e34ull));
TAIL_STATIC(0x505450u,505);
}
B4b6e34:L4b6e34:{c.instructions+=3;NFSU2_TR(0x4b6e34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6e35:{NFSU2_TR(0x4b6e35);
u8 U[4];
w4(U+0,u32(0x78fa8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6e3a:{NFSU2_TR(0x4b6e3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6e3full));
TAIL_STATIC(0x5379c0u,537);
}
B4b6e3f:L4b6e3f:{c.instructions+=2;NFSU2_TR(0x4b6e3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6e40:{NFSU2_TR(0x4b6e40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6e45ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b6e45:L4b6e45:{c.instructions+=8;NFSU2_TR(0x4b6e45);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b6e49:{NFSU2_TR(0x4b6e49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4b6e4c:{NFSU2_TR(0x4b6e4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b6e4d:{NFSU2_TR(0x4b6e4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b6e4e:{NFSU2_TR(0x4b6e4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b6e4f:{NFSU2_TR(0x4b6e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6e56:{NFSU2_TR(0x4b6e56);
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
B4b6e59:{NFSU2_TR(0x4b6e59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b6e60:L4b6e60:{c.instructions+=12;NFSU2_TR(0x4b6e60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6e62:{NFSU2_TR(0x4b6e62);
u8 U[4];
w4(U+0,u32(0x773410ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6e67:{NFSU2_TR(0x4b6e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b6e6d:{NFSU2_TR(0x4b6e6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6e6e:{NFSU2_TR(0x4b6e6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6e75:{NFSU2_TR(0x4b6e75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6e76:{NFSU2_TR(0x4b6e76);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6e77:{NFSU2_TR(0x4b6e77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6e78:{NFSU2_TR(0x4b6e78);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6e79:{NFSU2_TR(0x4b6e79);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6e7e:{NFSU2_TR(0x4b6e7e);
__builtin_memmove((R+24),(R+4),4);
}
B4b6e80:{NFSU2_TR(0x4b6e80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6e85ull));
TAIL_STATIC(0x575620u,575);
}
B4b6e85:L4b6e85:{c.instructions+=6;NFSU2_TR(0x4b6e85);
__builtin_memmove((R+28),(R+0),4);
}
B4b6e87:{NFSU2_TR(0x4b6e87);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b6e8a:{NFSU2_TR(0x4b6e8a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6e8e:{NFSU2_TR(0x4b6e8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6e90:{NFSU2_TR(0x4b6e90);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6e98:{NFSU2_TR(0x4b6e98);
if(r1(R+518)){{goto L4b6ec7;}}
}
B4b6e9a:L4b6e9a:{c.instructions+=11;NFSU2_TR(0x4b6e9a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6e9c:{NFSU2_TR(0x4b6e9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6ea2:{NFSU2_TR(0x4b6ea2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6ea3:{NFSU2_TR(0x4b6ea3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b6ea9:{NFSU2_TR(0x4b6ea9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6eaa:{NFSU2_TR(0x4b6eaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6eb0:{NFSU2_TR(0x4b6eb0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6eb1:{NFSU2_TR(0x4b6eb1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6eb7:{NFSU2_TR(0x4b6eb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6eb8:{NFSU2_TR(0x4b6eb8);
__builtin_memmove((R+4),(R+28),4);
}
B4b6eba:{NFSU2_TR(0x4b6eba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6ebfull));
TAIL_STATIC(0x51e840u,51e);
}
B4b6ebf:L4b6ebf:{c.instructions+=2;NFSU2_TR(0x4b6ebf);
u8 U[4];
w4(U+0,u32(0x7918f8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6ec5:{NFSU2_TR(0x4b6ec5);
{goto L4b6ec9;}
}
B4b6ec7:L4b6ec7:{c.instructions+=1;NFSU2_TR(0x4b6ec7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b6ec9:L4b6ec9:{c.instructions+=6;NFSU2_TR(0x4b6ec9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6ecb:{NFSU2_TR(0x4b6ecb);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B4b6ece:{NFSU2_TR(0x4b6ece);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6ecf:{NFSU2_TR(0x4b6ecf);
__builtin_memmove((R+4),(R+24),4);
}
B4b6ed1:{NFSU2_TR(0x4b6ed1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6ed5:{NFSU2_TR(0x4b6ed5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6edaull));
TAIL_STATIC(0x54f410u,54f);
}
B4b6eda:L4b6eda:{c.instructions+=2;NFSU2_TR(0x4b6eda);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6edf:{NFSU2_TR(0x4b6edf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6ee4ull));
TAIL_STATIC(0x575620u,575);
}
B4b6ee4:L4b6ee4:{c.instructions+=6;NFSU2_TR(0x4b6ee4);
__builtin_memmove((R+28),(R+0),4);
}
B4b6ee6:{NFSU2_TR(0x4b6ee6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b6ee9:{NFSU2_TR(0x4b6ee9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6eed:{NFSU2_TR(0x4b6eed);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6eef:{NFSU2_TR(0x4b6eef);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6ef7:{NFSU2_TR(0x4b6ef7);
if(r1(R+518)){{goto L4b6f26;}}
}
B4b6ef9:L4b6ef9:{c.instructions+=11;NFSU2_TR(0x4b6ef9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6efb:{NFSU2_TR(0x4b6efb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b6f01:{NFSU2_TR(0x4b6f01);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6f02:{NFSU2_TR(0x4b6f02);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6f08:{NFSU2_TR(0x4b6f08);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6f09:{NFSU2_TR(0x4b6f09);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6f0f:{NFSU2_TR(0x4b6f0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6f10:{NFSU2_TR(0x4b6f10);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b6f16:{NFSU2_TR(0x4b6f16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6f17:{NFSU2_TR(0x4b6f17);
__builtin_memmove((R+4),(R+28),4);
}
B4b6f19:{NFSU2_TR(0x4b6f19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6f1eull));
TAIL_STATIC(0x51e840u,51e);
}
B4b6f1e:L4b6f1e:{c.instructions+=2;NFSU2_TR(0x4b6f1e);
u8 U[4];
w4(U+0,u32(0x791a88ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6f24:{NFSU2_TR(0x4b6f24);
{goto L4b6f28;}
}
B4b6f26:L4b6f26:{c.instructions+=1;NFSU2_TR(0x4b6f26);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b6f28:L4b6f28:{c.instructions+=5;NFSU2_TR(0x4b6f28);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6f2a:{NFSU2_TR(0x4b6f2a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6f2b:{NFSU2_TR(0x4b6f2b);
__builtin_memmove((R+4),(R+24),4);
}
B4b6f2d:{NFSU2_TR(0x4b6f2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6f31:{NFSU2_TR(0x4b6f31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6f36ull));
TAIL_STATIC(0x54f410u,54f);
}
B4b6f36:L4b6f36:{c.instructions+=2;NFSU2_TR(0x4b6f36);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6f3b:{NFSU2_TR(0x4b6f3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6f40ull));
TAIL_STATIC(0x575620u,575);
}
B4b6f40:L4b6f40:{c.instructions+=6;NFSU2_TR(0x4b6f40);
__builtin_memmove((R+28),(R+0),4);
}
B4b6f42:{NFSU2_TR(0x4b6f42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b6f45:{NFSU2_TR(0x4b6f45);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6f49:{NFSU2_TR(0x4b6f49);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6f4b:{NFSU2_TR(0x4b6f4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6f53:{NFSU2_TR(0x4b6f53);
if(r1(R+518)){{goto L4b6f82;}}
}
B4b6f55:L4b6f55:{c.instructions+=11;NFSU2_TR(0x4b6f55);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6f57:{NFSU2_TR(0x4b6f57);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6f5d:{NFSU2_TR(0x4b6f5d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6f5e:{NFSU2_TR(0x4b6f5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6f64:{NFSU2_TR(0x4b6f64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6f65:{NFSU2_TR(0x4b6f65);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b6f6b:{NFSU2_TR(0x4b6f6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6f6c:{NFSU2_TR(0x4b6f6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6f72:{NFSU2_TR(0x4b6f72);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6f73:{NFSU2_TR(0x4b6f73);
__builtin_memmove((R+4),(R+28),4);
}
B4b6f75:{NFSU2_TR(0x4b6f75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6f7aull));
TAIL_STATIC(0x51e840u,51e);
}
B4b6f7a:L4b6f7a:{c.instructions+=2;NFSU2_TR(0x4b6f7a);
u8 U[4];
w4(U+0,u32(0x791ad8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6f80:{NFSU2_TR(0x4b6f80);
{goto L4b6f84;}
}
B4b6f82:L4b6f82:{c.instructions+=1;NFSU2_TR(0x4b6f82);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b6f84:L4b6f84:{c.instructions+=5;NFSU2_TR(0x4b6f84);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6f86:{NFSU2_TR(0x4b6f86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6f87:{NFSU2_TR(0x4b6f87);
__builtin_memmove((R+4),(R+24),4);
}
B4b6f89:{NFSU2_TR(0x4b6f89);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6f8d:{NFSU2_TR(0x4b6f8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6f92ull));
TAIL_STATIC(0x54f410u,54f);
}
B4b6f92:L4b6f92:{c.instructions+=2;NFSU2_TR(0x4b6f92);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6f97:{NFSU2_TR(0x4b6f97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6f9cull));
TAIL_STATIC(0x575620u,575);
}
B4b6f9c:L4b6f9c:{c.instructions+=6;NFSU2_TR(0x4b6f9c);
__builtin_memmove((R+28),(R+0),4);
}
B4b6f9e:{NFSU2_TR(0x4b6f9e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b6fa1:{NFSU2_TR(0x4b6fa1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6fa5:{NFSU2_TR(0x4b6fa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b6fa7:{NFSU2_TR(0x4b6fa7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b6faf:{NFSU2_TR(0x4b6faf);
if(r1(R+518)){{goto L4b6fde;}}
}
B4b6fb1:L4b6fb1:{c.instructions+=11;NFSU2_TR(0x4b6fb1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6fb3:{NFSU2_TR(0x4b6fb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6fb9:{NFSU2_TR(0x4b6fb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6fba:{NFSU2_TR(0x4b6fba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b6fc0:{NFSU2_TR(0x4b6fc0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6fc1:{NFSU2_TR(0x4b6fc1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b6fc7:{NFSU2_TR(0x4b6fc7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6fc8:{NFSU2_TR(0x4b6fc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b6fce:{NFSU2_TR(0x4b6fce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6fcf:{NFSU2_TR(0x4b6fcf);
__builtin_memmove((R+4),(R+28),4);
}
B4b6fd1:{NFSU2_TR(0x4b6fd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6fd6ull));
TAIL_STATIC(0x51e840u,51e);
}
B4b6fd6:L4b6fd6:{c.instructions+=2;NFSU2_TR(0x4b6fd6);
u8 U[4];
w4(U+0,u32(0x791a38ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b6fdc:{NFSU2_TR(0x4b6fdc);
{goto L4b6fe0;}
}
B4b6fde:L4b6fde:{c.instructions+=1;NFSU2_TR(0x4b6fde);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b6fe0:L4b6fe0:{c.instructions+=5;NFSU2_TR(0x4b6fe0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6fe2:{NFSU2_TR(0x4b6fe2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6fe3:{NFSU2_TR(0x4b6fe3);
__builtin_memmove((R+4),(R+24),4);
}
B4b6fe5:{NFSU2_TR(0x4b6fe5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b6fe9:{NFSU2_TR(0x4b6fe9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6feeull));
TAIL_STATIC(0x54f410u,54f);
}
B4b6fee:L4b6fee:{c.instructions+=2;NFSU2_TR(0x4b6fee);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b6ff3:{NFSU2_TR(0x4b6ff3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6ff8ull));
TAIL_STATIC(0x575620u,575);
}
B4b6ff8:L4b6ff8:{c.instructions+=3;NFSU2_TR(0x4b6ff8);
__builtin_memmove((R+28),(R+0),4);
}
B4b6ffa:{NFSU2_TR(0x4b6ffa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b6ffd:{NFSU2_TR(0x4b6ffd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x4b7001u,4b7);
}
XIT:NFSU2_TR_EXIT(0x4b6,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
