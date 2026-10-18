#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_4a7(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_5a6(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4a6,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4a6,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4a6(u8* __restrict R,Cpu& c);
u32 page_4a6(Cpu& c){return body_4a6(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4a6(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4a6000:goto L4a6000;
case 0x4a6005:goto L4a6005;
case 0x4a6008:c.instructions+=4;goto B4a6008;
case 0x4a600d:c.instructions+=3;goto B4a600d;
case 0x4a6012:c.instructions+=2;goto B4a6012;
case 0x4a6013:c.instructions+=1;goto B4a6013;
case 0x4a6018:goto L4a6018;
case 0x4a601b:c.instructions+=3;goto B4a601b;
case 0x4a601c:c.instructions+=2;goto B4a601c;
case 0x4a601f:c.instructions+=1;goto B4a601f;
case 0x4a6030:goto L4a6030;
case 0x4a6033:c.instructions+=27;goto B4a6033;
case 0x4a6038:c.instructions+=26;goto B4a6038;
case 0x4a6039:c.instructions+=25;goto B4a6039;
case 0x4a603a:c.instructions+=24;goto B4a603a;
case 0x4a603b:c.instructions+=23;goto B4a603b;
case 0x4a603d:c.instructions+=22;goto B4a603d;
case 0x4a603f:c.instructions+=21;goto B4a603f;
case 0x4a6041:c.instructions+=20;goto B4a6041;
case 0x4a6045:c.instructions+=19;goto B4a6045;
case 0x4a6046:c.instructions+=18;goto B4a6046;
case 0x4a604a:c.instructions+=17;goto B4a604a;
case 0x4a6054:c.instructions+=16;goto B4a6054;
case 0x4a6059:c.instructions+=15;goto B4a6059;
case 0x4a605d:c.instructions+=14;goto B4a605d;
case 0x4a605f:c.instructions+=13;goto B4a605f;
case 0x4a6061:c.instructions+=12;goto B4a6061;
case 0x4a6063:c.instructions+=11;goto B4a6063;
case 0x4a6067:c.instructions+=10;goto B4a6067;
case 0x4a606b:c.instructions+=9;goto B4a606b;
case 0x4a606f:c.instructions+=8;goto B4a606f;
case 0x4a6077:c.instructions+=7;goto B4a6077;
case 0x4a607b:c.instructions+=6;goto B4a607b;
case 0x4a607f:c.instructions+=5;goto B4a607f;
case 0x4a6083:c.instructions+=4;goto B4a6083;
case 0x4a6087:c.instructions+=3;goto B4a6087;
case 0x4a608b:c.instructions+=2;goto B4a608b;
case 0x4a608f:c.instructions+=1;goto B4a608f;
case 0x4a6091:goto L4a6091;
case 0x4a6097:c.instructions+=2;goto B4a6097;
case 0x4a609d:c.instructions+=1;goto B4a609d;
case 0x4a609f:goto L4a609f;
case 0x4a60a2:c.instructions+=2;goto B4a60a2;
case 0x4a60a4:c.instructions+=1;goto B4a60a4;
case 0x4a60a6:goto L4a60a6;
case 0x4a60ab:c.instructions+=1;goto B4a60ab;
case 0x4a60b0:goto L4a60b0;
case 0x4a60b2:c.instructions+=1;goto B4a60b2;
case 0x4a60b4:goto L4a60b4;
case 0x4a60b7:c.instructions+=3;goto B4a60b7;
case 0x4a60ba:c.instructions+=2;goto B4a60ba;
case 0x4a60bd:c.instructions+=1;goto B4a60bd;
case 0x4a60c1:goto L4a60c1;
case 0x4a60c7:c.instructions+=3;goto B4a60c7;
case 0x4a60c9:c.instructions+=2;goto B4a60c9;
case 0x4a60cd:c.instructions+=1;goto B4a60cd;
case 0x4a60cf:goto L4a60cf;
case 0x4a60d2:c.instructions+=1;goto B4a60d2;
case 0x4a60d4:goto L4a60d4;
case 0x4a60d7:c.instructions+=1;goto B4a60d7;
case 0x4a60d9:goto L4a60d9;
case 0x4a60de:c.instructions+=1;goto B4a60de;
case 0x4a60e6:goto L4a60e6;
case 0x4a60ec:c.instructions+=1;goto B4a60ec;
case 0x4a60ee:goto L4a60ee;
case 0x4a60f0:goto L4a60f0;
case 0x4a60f2:c.instructions+=1;goto B4a60f2;
case 0x4a60f8:goto L4a60f8;
case 0x4a60fb:c.instructions+=1;goto B4a60fb;
case 0x4a6101:goto L4a6101;
case 0x4a6107:c.instructions+=3;goto B4a6107;
case 0x4a610d:c.instructions+=2;goto B4a610d;
case 0x4a610f:c.instructions+=1;goto B4a610f;
case 0x4a6115:goto L4a6115;
case 0x4a6118:c.instructions+=2;goto B4a6118;
case 0x4a611a:c.instructions+=1;goto B4a611a;
case 0x4a6120:goto L4a6120;
case 0x4a6122:c.instructions+=4;goto B4a6122;
case 0x4a6128:c.instructions+=3;goto B4a6128;
case 0x4a612e:c.instructions+=2;goto B4a612e;
case 0x4a6130:c.instructions+=1;goto B4a6130;
case 0x4a6132:goto L4a6132;
case 0x4a6138:c.instructions+=12;goto B4a6138;
case 0x4a613e:c.instructions+=11;goto B4a613e;
case 0x4a6142:c.instructions+=10;goto B4a6142;
case 0x4a6146:c.instructions+=9;goto B4a6146;
case 0x4a614a:c.instructions+=8;goto B4a614a;
case 0x4a614e:c.instructions+=7;goto B4a614e;
case 0x4a6154:c.instructions+=6;goto B4a6154;
case 0x4a6158:c.instructions+=5;goto B4a6158;
case 0x4a6159:c.instructions+=4;goto B4a6159;
case 0x4a615b:c.instructions+=3;goto B4a615b;
case 0x4a615d:c.instructions+=2;goto B4a615d;
case 0x4a6163:c.instructions+=1;goto B4a6163;
case 0x4a6168:goto L4a6168;
case 0x4a616e:c.instructions+=3;goto B4a616e;
case 0x4a6170:c.instructions+=2;goto B4a6170;
case 0x4a6173:c.instructions+=1;goto B4a6173;
case 0x4a6175:goto L4a6175;
case 0x4a6179:c.instructions+=14;goto B4a6179;
case 0x4a617f:c.instructions+=13;goto B4a617f;
case 0x4a6183:c.instructions+=12;goto B4a6183;
case 0x4a6189:c.instructions+=11;goto B4a6189;
case 0x4a618b:c.instructions+=10;goto B4a618b;
case 0x4a618f:c.instructions+=9;goto B4a618f;
case 0x4a6193:c.instructions+=8;goto B4a6193;
case 0x4a6195:c.instructions+=7;goto B4a6195;
case 0x4a6199:c.instructions+=6;goto B4a6199;
case 0x4a619d:c.instructions+=5;goto B4a619d;
case 0x4a61a1:c.instructions+=4;goto B4a61a1;
case 0x4a61a3:c.instructions+=3;goto B4a61a3;
case 0x4a61a7:c.instructions+=2;goto B4a61a7;
case 0x4a61ab:c.instructions+=1;goto B4a61ab;
case 0x4a61af:goto L4a61af;
case 0x4a61b3:c.instructions+=2;goto B4a61b3;
case 0x4a61b5:c.instructions+=1;goto B4a61b5;
case 0x4a61b7:goto L4a61b7;
case 0x4a61b9:c.instructions+=2;goto B4a61b9;
case 0x4a61bf:c.instructions+=1;goto B4a61bf;
case 0x4a61c0:goto L4a61c0;
case 0x4a61c2:c.instructions+=4;goto B4a61c2;
case 0x4a61c6:c.instructions+=3;goto B4a61c6;
case 0x4a61c8:c.instructions+=2;goto B4a61c8;
case 0x4a61cb:c.instructions+=1;goto B4a61cb;
case 0x4a61d1:goto L4a61d1;
case 0x4a61d2:c.instructions+=3;goto B4a61d2;
case 0x4a61d5:c.instructions+=2;goto B4a61d5;
case 0x4a61d8:c.instructions+=1;goto B4a61d8;
case 0x4a61da:goto L4a61da;
case 0x4a61dc:c.instructions+=1;goto B4a61dc;
case 0x4a61e2:goto L4a61e2;
case 0x4a61e5:c.instructions+=1;goto B4a61e5;
case 0x4a61eb:goto L4a61eb;
case 0x4a61f1:c.instructions+=7;goto B4a61f1;
case 0x4a61f7:c.instructions+=6;goto B4a61f7;
case 0x4a61fb:c.instructions+=5;goto B4a61fb;
case 0x4a61fd:c.instructions+=4;goto B4a61fd;
case 0x4a6201:c.instructions+=3;goto B4a6201;
case 0x4a6204:c.instructions+=2;goto B4a6204;
case 0x4a6206:c.instructions+=1;goto B4a6206;
case 0x4a6210:goto L4a6210;
case 0x4a6216:c.instructions+=1;goto B4a6216;
case 0x4a6218:goto L4a6218;
case 0x4a621b:c.instructions+=2;goto B4a621b;
case 0x4a621d:c.instructions+=1;goto B4a621d;
case 0x4a621f:goto L4a621f;
case 0x4a6223:c.instructions+=6;goto B4a6223;
case 0x4a6229:c.instructions+=5;goto B4a6229;
case 0x4a622a:c.instructions+=4;goto B4a622a;
case 0x4a622c:c.instructions+=3;goto B4a622c;
case 0x4a622f:c.instructions+=2;goto B4a622f;
case 0x4a6232:c.instructions+=1;goto B4a6232;
case 0x4a6237:goto L4a6237;
case 0x4a623b:c.instructions+=7;goto B4a623b;
case 0x4a623f:c.instructions+=6;goto B4a623f;
case 0x4a6242:c.instructions+=5;goto B4a6242;
case 0x4a6245:c.instructions+=4;goto B4a6245;
case 0x4a6248:c.instructions+=3;goto B4a6248;
case 0x4a624b:c.instructions+=2;goto B4a624b;
case 0x4a624d:c.instructions+=1;goto B4a624d;
case 0x4a624f:goto L4a624f;
case 0x4a6250:c.instructions+=3;goto B4a6250;
case 0x4a6253:c.instructions+=2;goto B4a6253;
case 0x4a6256:c.instructions+=1;goto B4a6256;
case 0x4a6258:goto L4a6258;
case 0x4a625b:c.instructions+=2;goto B4a625b;
case 0x4a625d:c.instructions+=1;goto B4a625d;
case 0x4a625f:goto L4a625f;
case 0x4a6261:c.instructions+=4;goto B4a6261;
case 0x4a6267:c.instructions+=3;goto B4a6267;
case 0x4a6269:c.instructions+=2;goto B4a6269;
case 0x4a626c:c.instructions+=1;goto B4a626c;
case 0x4a626e:goto L4a626e;
case 0x4a6274:c.instructions+=1;goto B4a6274;
case 0x4a6276:goto L4a6276;
case 0x4a6279:c.instructions+=1;goto B4a6279;
case 0x4a627b:goto L4a627b;
case 0x4a6281:c.instructions+=2;goto B4a6281;
case 0x4a6285:c.instructions+=1;goto B4a6285;
case 0x4a628a:goto L4a628a;
case 0x4a628f:c.instructions+=4;goto B4a628f;
case 0x4a6295:c.instructions+=3;goto B4a6295;
case 0x4a629b:c.instructions+=2;goto B4a629b;
case 0x4a629f:c.instructions+=1;goto B4a629f;
case 0x4a62a4:goto L4a62a4;
case 0x4a62aa:goto L4a62aa;
case 0x4a62ad:c.instructions+=8;goto B4a62ad;
case 0x4a62b0:c.instructions+=7;goto B4a62b0;
case 0x4a62b2:c.instructions+=6;goto B4a62b2;
case 0x4a62b6:c.instructions+=5;goto B4a62b6;
case 0x4a62ba:c.instructions+=4;goto B4a62ba;
case 0x4a62bc:c.instructions+=3;goto B4a62bc;
case 0x4a62be:c.instructions+=2;goto B4a62be;
case 0x4a62c1:c.instructions+=1;goto B4a62c1;
case 0x4a62c3:goto L4a62c3;
case 0x4a62c5:c.instructions+=1;goto B4a62c5;
case 0x4a62c9:goto L4a62c9;
case 0x4a62cd:c.instructions+=4;goto B4a62cd;
case 0x4a62cf:c.instructions+=3;goto B4a62cf;
case 0x4a62d1:c.instructions+=2;goto B4a62d1;
case 0x4a62d4:c.instructions+=1;goto B4a62d4;
case 0x4a62d6:goto L4a62d6;
case 0x4a62d8:c.instructions+=1;goto B4a62d8;
case 0x4a62dc:goto L4a62dc;
case 0x4a62de:c.instructions+=4;goto B4a62de;
case 0x4a62e1:c.instructions+=3;goto B4a62e1;
case 0x4a62e4:c.instructions+=2;goto B4a62e4;
case 0x4a62e7:c.instructions+=1;goto B4a62e7;
case 0x4a62ed:goto L4a62ed;
case 0x4a62f0:c.instructions+=16;goto B4a62f0;
case 0x4a62f3:c.instructions+=15;goto B4a62f3;
case 0x4a62f7:c.instructions+=14;goto B4a62f7;
case 0x4a62fa:c.instructions+=13;goto B4a62fa;
case 0x4a62fe:c.instructions+=12;goto B4a62fe;
case 0x4a6302:c.instructions+=11;goto B4a6302;
case 0x4a6308:c.instructions+=10;goto B4a6308;
case 0x4a630e:c.instructions+=9;goto B4a630e;
case 0x4a6310:c.instructions+=8;goto B4a6310;
case 0x4a6313:c.instructions+=7;goto B4a6313;
case 0x4a6317:c.instructions+=6;goto B4a6317;
case 0x4a631d:c.instructions+=5;goto B4a631d;
case 0x4a6323:c.instructions+=4;goto B4a6323;
case 0x4a6329:c.instructions+=3;goto B4a6329;
case 0x4a632b:c.instructions+=2;goto B4a632b;
case 0x4a632e:c.instructions+=1;goto B4a632e;
case 0x4a6330:goto L4a6330;
case 0x4a633a:goto L4a633a;
case 0x4a633e:c.instructions+=2;goto B4a633e;
case 0x4a6344:c.instructions+=1;goto B4a6344;
case 0x4a6346:goto L4a6346;
case 0x4a6350:goto L4a6350;
case 0x4a6354:c.instructions+=10;goto B4a6354;
case 0x4a6358:c.instructions+=9;goto B4a6358;
case 0x4a635c:c.instructions+=8;goto B4a635c;
case 0x4a6360:c.instructions+=7;goto B4a6360;
case 0x4a6366:c.instructions+=6;goto B4a6366;
case 0x4a6368:c.instructions+=5;goto B4a6368;
case 0x4a636a:c.instructions+=4;goto B4a636a;
case 0x4a6370:c.instructions+=3;goto B4a6370;
case 0x4a6372:c.instructions+=2;goto B4a6372;
case 0x4a6375:c.instructions+=1;goto B4a6375;
case 0x4a6377:goto L4a6377;
case 0x4a6379:c.instructions+=1;goto B4a6379;
case 0x4a637f:goto L4a637f;
case 0x4a6383:c.instructions+=13;goto B4a6383;
case 0x4a6387:c.instructions+=12;goto B4a6387;
case 0x4a638b:c.instructions+=11;goto B4a638b;
case 0x4a638f:c.instructions+=10;goto B4a638f;
case 0x4a6393:c.instructions+=9;goto B4a6393;
case 0x4a6397:c.instructions+=8;goto B4a6397;
case 0x4a639b:c.instructions+=7;goto B4a639b;
case 0x4a63a1:c.instructions+=6;goto B4a63a1;
case 0x4a63a3:c.instructions+=5;goto B4a63a3;
case 0x4a63a5:c.instructions+=4;goto B4a63a5;
case 0x4a63ab:c.instructions+=3;goto B4a63ab;
case 0x4a63ad:c.instructions+=2;goto B4a63ad;
case 0x4a63b0:c.instructions+=1;goto B4a63b0;
case 0x4a63b2:goto L4a63b2;
case 0x4a63b4:c.instructions+=1;goto B4a63b4;
case 0x4a63ba:goto L4a63ba;
case 0x4a63be:c.instructions+=9;goto B4a63be;
case 0x4a63c2:c.instructions+=8;goto B4a63c2;
case 0x4a63c6:c.instructions+=7;goto B4a63c6;
case 0x4a63c8:c.instructions+=6;goto B4a63c8;
case 0x4a63ce:c.instructions+=5;goto B4a63ce;
case 0x4a63d0:c.instructions+=4;goto B4a63d0;
case 0x4a63d6:c.instructions+=3;goto B4a63d6;
case 0x4a63d8:c.instructions+=2;goto B4a63d8;
case 0x4a63db:c.instructions+=1;goto B4a63db;
case 0x4a63dd:goto L4a63dd;
case 0x4a63df:c.instructions+=1;goto B4a63df;
case 0x4a63e5:goto L4a63e5;
case 0x4a63e9:c.instructions+=9;goto B4a63e9;
case 0x4a63ed:c.instructions+=8;goto B4a63ed;
case 0x4a63f1:c.instructions+=7;goto B4a63f1;
case 0x4a63f3:c.instructions+=6;goto B4a63f3;
case 0x4a63f9:c.instructions+=5;goto B4a63f9;
case 0x4a63fb:c.instructions+=4;goto B4a63fb;
case 0x4a6401:c.instructions+=3;goto B4a6401;
case 0x4a6403:c.instructions+=2;goto B4a6403;
case 0x4a6406:c.instructions+=1;goto B4a6406;
case 0x4a6408:goto L4a6408;
case 0x4a640a:c.instructions+=1;goto B4a640a;
case 0x4a6410:goto L4a6410;
case 0x4a6414:c.instructions+=7;goto B4a6414;
case 0x4a6418:c.instructions+=6;goto B4a6418;
case 0x4a641c:c.instructions+=5;goto B4a641c;
case 0x4a6420:c.instructions+=4;goto B4a6420;
case 0x4a6424:c.instructions+=3;goto B4a6424;
case 0x4a6426:c.instructions+=2;goto B4a6426;
case 0x4a6429:c.instructions+=1;goto B4a6429;
case 0x4a642b:goto L4a642b;
case 0x4a642f:c.instructions+=2;goto B4a642f;
case 0x4a6433:c.instructions+=1;goto B4a6433;
case 0x4a6435:goto L4a6435;
case 0x4a6439:c.instructions+=1;goto B4a6439;
case 0x4a643d:goto L4a643d;
case 0x4a6441:c.instructions+=4;goto B4a6441;
case 0x4a6445:c.instructions+=3;goto B4a6445;
case 0x4a6447:c.instructions+=2;goto B4a6447;
case 0x4a644a:c.instructions+=1;goto B4a644a;
case 0x4a644c:goto L4a644c;
case 0x4a6450:c.instructions+=1;goto B4a6450;
case 0x4a6452:goto L4a6452;
case 0x4a6456:goto L4a6456;
case 0x4a645a:c.instructions+=3;goto B4a645a;
case 0x4a645c:c.instructions+=2;goto B4a645c;
case 0x4a645f:c.instructions+=1;goto B4a645f;
case 0x4a6461:goto L4a6461;
case 0x4a6463:c.instructions+=1;goto B4a6463;
case 0x4a6467:goto L4a6467;
case 0x4a646b:c.instructions+=11;goto B4a646b;
case 0x4a6471:c.instructions+=10;goto B4a6471;
case 0x4a6477:c.instructions+=9;goto B4a6477;
case 0x4a6479:c.instructions+=8;goto B4a6479;
case 0x4a647d:c.instructions+=7;goto B4a647d;
case 0x4a6483:c.instructions+=6;goto B4a6483;
case 0x4a6489:c.instructions+=5;goto B4a6489;
case 0x4a648f:c.instructions+=4;goto B4a648f;
case 0x4a6494:c.instructions+=3;goto B4a6494;
case 0x4a6498:c.instructions+=2;goto B4a6498;
case 0x4a649c:c.instructions+=1;goto B4a649c;
case 0x4a64a0:goto L4a64a0;
case 0x4a64a2:c.instructions+=8;goto B4a64a2;
case 0x4a64a4:c.instructions+=7;goto B4a64a4;
case 0x4a64a8:c.instructions+=6;goto B4a64a8;
case 0x4a64ac:c.instructions+=5;goto B4a64ac;
case 0x4a64ae:c.instructions+=4;goto B4a64ae;
case 0x4a64b2:c.instructions+=3;goto B4a64b2;
case 0x4a64b4:c.instructions+=2;goto B4a64b4;
case 0x4a64b7:c.instructions+=1;goto B4a64b7;
case 0x4a64b9:goto L4a64b9;
case 0x4a64bd:c.instructions+=2;goto B4a64bd;
case 0x4a64bf:c.instructions+=1;goto B4a64bf;
case 0x4a64c1:goto L4a64c1;
case 0x4a64c3:c.instructions+=5;goto B4a64c3;
case 0x4a64c7:c.instructions+=4;goto B4a64c7;
case 0x4a64c9:c.instructions+=3;goto B4a64c9;
case 0x4a64cb:c.instructions+=2;goto B4a64cb;
case 0x4a64ce:c.instructions+=1;goto B4a64ce;
case 0x4a64d0:goto L4a64d0;
case 0x4a64d4:c.instructions+=1;goto B4a64d4;
case 0x4a64d6:goto L4a64d6;
case 0x4a64da:c.instructions+=3;goto B4a64da;
case 0x4a64dc:c.instructions+=2;goto B4a64dc;
case 0x4a64df:c.instructions+=1;goto B4a64df;
case 0x4a64e1:goto L4a64e1;
case 0x4a64e5:c.instructions+=1;goto B4a64e5;
case 0x4a64e7:goto L4a64e7;
case 0x4a64e9:goto L4a64e9;
case 0x4a64ef:goto L4a64ef;
case 0x4a64f2:c.instructions+=2;goto B4a64f2;
case 0x4a64f4:c.instructions+=1;goto B4a64f4;
case 0x4a64fa:goto L4a64fa;
case 0x4a64fc:c.instructions+=4;goto B4a64fc;
case 0x4a6500:c.instructions+=3;goto B4a6500;
case 0x4a6502:c.instructions+=2;goto B4a6502;
case 0x4a6505:c.instructions+=1;goto B4a6505;
case 0x4a6507:goto L4a6507;
case 0x4a650a:c.instructions+=3;goto B4a650a;
case 0x4a650c:c.instructions+=2;goto B4a650c;
case 0x4a650e:c.instructions+=1;goto B4a650e;
case 0x4a6510:goto L4a6510;
case 0x4a6512:c.instructions+=2;goto B4a6512;
case 0x4a6518:c.instructions+=1;goto B4a6518;
case 0x4a651a:goto L4a651a;
case 0x4a651b:c.instructions+=2;goto B4a651b;
case 0x4a651e:c.instructions+=1;goto B4a651e;
case 0x4a651f:goto L4a651f;
case 0x4a6521:goto L4a6521;
case 0x4a6523:c.instructions+=5;goto B4a6523;
case 0x4a6524:c.instructions+=4;goto B4a6524;
case 0x4a6526:c.instructions+=3;goto B4a6526;
case 0x4a6528:c.instructions+=2;goto B4a6528;
case 0x4a652a:c.instructions+=1;goto B4a652a;
case 0x4a652c:goto L4a652c;
case 0x4a652e:c.instructions+=1;goto B4a652e;
case 0x4a6533:goto L4a6533;
case 0x4a653a:c.instructions+=1;goto B4a653a;
case 0x4a653f:goto L4a653f;
case 0x4a6541:c.instructions+=1;goto B4a6541;
case 0x4a6546:goto L4a6546;
case 0x4a654d:c.instructions+=1;goto B4a654d;
case 0x4a6552:goto L4a6552;
case 0x4a6554:c.instructions+=4;goto B4a6554;
case 0x4a655a:c.instructions+=3;goto B4a655a;
case 0x4a655c:c.instructions+=2;goto B4a655c;
case 0x4a655f:c.instructions+=1;goto B4a655f;
case 0x4a6561:goto L4a6561;
case 0x4a6563:c.instructions+=2;goto B4a6563;
case 0x4a656a:c.instructions+=1;goto B4a656a;
case 0x4a656f:goto L4a656f;
case 0x4a6573:c.instructions+=5;goto B4a6573;
case 0x4a6577:c.instructions+=4;goto B4a6577;
case 0x4a6579:c.instructions+=3;goto B4a6579;
case 0x4a657b:c.instructions+=2;goto B4a657b;
case 0x4a657e:c.instructions+=1;goto B4a657e;
case 0x4a6580:goto L4a6580;
case 0x4a6585:c.instructions+=1;goto B4a6585;
case 0x4a658a:goto L4a658a;
case 0x4a658c:c.instructions+=4;goto B4a658c;
case 0x4a6590:c.instructions+=3;goto B4a6590;
case 0x4a6592:c.instructions+=2;goto B4a6592;
case 0x4a6595:c.instructions+=1;goto B4a6595;
case 0x4a6597:goto L4a6597;
case 0x4a659a:c.instructions+=2;goto B4a659a;
case 0x4a659c:c.instructions+=1;goto B4a659c;
case 0x4a659e:goto L4a659e;
case 0x4a65a2:c.instructions+=2;goto B4a65a2;
case 0x4a65a5:c.instructions+=1;goto B4a65a5;
case 0x4a65a7:goto L4a65a7;
case 0x4a65a9:c.instructions+=2;goto B4a65a9;
case 0x4a65ae:c.instructions+=1;goto B4a65ae;
case 0x4a65b0:goto L4a65b0;
case 0x4a65b1:c.instructions+=2;goto B4a65b1;
case 0x4a65b4:c.instructions+=1;goto B4a65b4;
case 0x4a65b5:goto L4a65b5;
case 0x4a65b7:goto L4a65b7;
case 0x4a65b9:c.instructions+=1;goto B4a65b9;
case 0x4a65bb:goto L4a65bb;
case 0x4a65be:c.instructions+=3;goto B4a65be;
case 0x4a65c3:c.instructions+=2;goto B4a65c3;
case 0x4a65c5:c.instructions+=1;goto B4a65c5;
case 0x4a65c7:goto L4a65c7;
case 0x4a65cb:c.instructions+=2;goto B4a65cb;
case 0x4a65ce:c.instructions+=1;goto B4a65ce;
case 0x4a65d0:goto L4a65d0;
case 0x4a65d2:c.instructions+=2;goto B4a65d2;
case 0x4a65d7:c.instructions+=1;goto B4a65d7;
case 0x4a65d9:goto L4a65d9;
case 0x4a65da:c.instructions+=2;goto B4a65da;
case 0x4a65dd:c.instructions+=1;goto B4a65dd;
case 0x4a65de:goto L4a65de;
case 0x4a65e0:goto L4a65e0;
case 0x4a65e2:c.instructions+=1;goto B4a65e2;
case 0x4a65e4:goto L4a65e4;
case 0x4a65e6:c.instructions+=1;goto B4a65e6;
case 0x4a65e8:goto L4a65e8;
case 0x4a65ea:c.instructions+=2;goto B4a65ea;
case 0x4a65f0:c.instructions+=1;goto B4a65f0;
case 0x4a65f2:goto L4a65f2;
case 0x4a65f3:c.instructions+=2;goto B4a65f3;
case 0x4a65f6:c.instructions+=1;goto B4a65f6;
case 0x4a65f7:goto L4a65f7;
case 0x4a65f9:goto L4a65f9;
case 0x4a65fb:c.instructions+=1;goto B4a65fb;
case 0x4a65fd:goto L4a65fd;
case 0x4a65ff:c.instructions+=1;goto B4a65ff;
case 0x4a6601:goto L4a6601;
case 0x4a6603:c.instructions+=2;goto B4a6603;
case 0x4a6609:c.instructions+=1;goto B4a6609;
case 0x4a660b:goto L4a660b;
case 0x4a660c:c.instructions+=2;goto B4a660c;
case 0x4a660f:c.instructions+=1;goto B4a660f;
case 0x4a6610:goto L4a6610;
case 0x4a6612:goto L4a6612;
case 0x4a6614:goto L4a6614;
case 0x4a6619:goto L4a6619;
case 0x4a661d:c.instructions+=2;goto B4a661d;
case 0x4a6620:c.instructions+=1;goto B4a6620;
case 0x4a6626:goto L4a6626;
case 0x4a6627:c.instructions+=3;goto B4a6627;
case 0x4a662a:c.instructions+=2;goto B4a662a;
case 0x4a662d:c.instructions+=1;goto B4a662d;
case 0x4a6633:goto L4a6633;
case 0x4a6639:c.instructions+=15;goto B4a6639;
case 0x4a663d:c.instructions+=14;goto B4a663d;
case 0x4a663f:c.instructions+=13;goto B4a663f;
case 0x4a6640:c.instructions+=12;goto B4a6640;
case 0x4a6641:c.instructions+=11;goto B4a6641;
case 0x4a6642:c.instructions+=10;goto B4a6642;
case 0x4a6648:c.instructions+=9;goto B4a6648;
case 0x4a664e:c.instructions+=8;goto B4a664e;
case 0x4a664f:c.instructions+=7;goto B4a664f;
case 0x4a6655:c.instructions+=6;goto B4a6655;
case 0x4a665b:c.instructions+=5;goto B4a665b;
case 0x4a665d:c.instructions+=4;goto B4a665d;
case 0x4a6661:c.instructions+=3;goto B4a6661;
case 0x4a6667:c.instructions+=2;goto B4a6667;
case 0x4a666a:c.instructions+=1;goto B4a666a;
case 0x4a6670:goto L4a6670;
case 0x4a6671:c.instructions+=10;goto B4a6671;
case 0x4a6673:c.instructions+=9;goto B4a6673;
case 0x4a6676:c.instructions+=8;goto B4a6676;
case 0x4a667c:c.instructions+=7;goto B4a667c;
case 0x4a667d:c.instructions+=6;goto B4a667d;
case 0x4a6680:c.instructions+=5;goto B4a6680;
case 0x4a6684:c.instructions+=4;goto B4a6684;
case 0x4a6685:c.instructions+=3;goto B4a6685;
case 0x4a6686:c.instructions+=2;goto B4a6686;
case 0x4a668a:c.instructions+=1;goto B4a668a;
case 0x4a668c:goto L4a668c;
case 0x4a6696:c.instructions+=6;goto B4a6696;
case 0x4a6697:c.instructions+=5;goto B4a6697;
case 0x4a6698:c.instructions+=4;goto B4a6698;
case 0x4a6699:c.instructions+=3;goto B4a6699;
case 0x4a669b:c.instructions+=2;goto B4a669b;
case 0x4a669c:c.instructions+=1;goto B4a669c;
case 0x4a669f:goto L4a669f;
case 0x4a66a1:c.instructions+=2;goto B4a66a1;
case 0x4a66a4:c.instructions+=1;goto B4a66a4;
case 0x4a66a9:goto L4a66a9;
case 0x4a66ab:c.instructions+=51;goto B4a66ab;
case 0x4a66ad:c.instructions+=50;goto B4a66ad;
case 0x4a66b0:c.instructions+=49;goto B4a66b0;
case 0x4a66b3:c.instructions+=48;goto B4a66b3;
case 0x4a66b5:c.instructions+=47;goto B4a66b5;
case 0x4a66bc:c.instructions+=46;goto B4a66bc;
case 0x4a66bf:c.instructions+=45;goto B4a66bf;
case 0x4a66c2:c.instructions+=44;goto B4a66c2;
case 0x4a66c8:c.instructions+=43;goto B4a66c8;
case 0x4a66cb:c.instructions+=42;goto B4a66cb;
case 0x4a66d1:c.instructions+=41;goto B4a66d1;
case 0x4a66d7:c.instructions+=40;goto B4a66d7;
case 0x4a66dd:c.instructions+=39;goto B4a66dd;
case 0x4a66e3:c.instructions+=38;goto B4a66e3;
case 0x4a66e7:c.instructions+=37;goto B4a66e7;
case 0x4a66f2:c.instructions+=36;goto B4a66f2;
case 0x4a66f6:c.instructions+=35;goto B4a66f6;
case 0x4a66fd:c.instructions+=34;goto B4a66fd;
case 0x4a6703:c.instructions+=33;goto B4a6703;
case 0x4a670a:c.instructions+=32;goto B4a670a;
case 0x4a6710:c.instructions+=31;goto B4a6710;
case 0x4a6717:c.instructions+=30;goto B4a6717;
case 0x4a671e:c.instructions+=29;goto B4a671e;
case 0x4a6729:c.instructions+=28;goto B4a6729;
case 0x4a6730:c.instructions+=27;goto B4a6730;
case 0x4a6737:c.instructions+=26;goto B4a6737;
case 0x4a673e:c.instructions+=25;goto B4a673e;
case 0x4a6745:c.instructions+=24;goto B4a6745;
case 0x4a6750:c.instructions+=23;goto B4a6750;
case 0x4a6757:c.instructions+=22;goto B4a6757;
case 0x4a675e:c.instructions+=21;goto B4a675e;
case 0x4a6765:c.instructions+=20;goto B4a6765;
case 0x4a676c:c.instructions+=19;goto B4a676c;
case 0x4a6777:c.instructions+=18;goto B4a6777;
case 0x4a677b:c.instructions+=17;goto B4a677b;
case 0x4a6786:c.instructions+=16;goto B4a6786;
case 0x4a678d:c.instructions+=15;goto B4a678d;
case 0x4a6794:c.instructions+=14;goto B4a6794;
case 0x4a679b:c.instructions+=13;goto B4a679b;
case 0x4a67a2:c.instructions+=12;goto B4a67a2;
case 0x4a67ad:c.instructions+=11;goto B4a67ad;
case 0x4a67b4:c.instructions+=10;goto B4a67b4;
case 0x4a67bb:c.instructions+=9;goto B4a67bb;
case 0x4a67c2:c.instructions+=8;goto B4a67c2;
case 0x4a67c9:c.instructions+=7;goto B4a67c9;
case 0x4a67d4:c.instructions+=6;goto B4a67d4;
case 0x4a67db:c.instructions+=5;goto B4a67db;
case 0x4a67e2:c.instructions+=4;goto B4a67e2;
case 0x4a67e9:c.instructions+=3;goto B4a67e9;
case 0x4a67f0:c.instructions+=2;goto B4a67f0;
case 0x4a67fb:c.instructions+=1;goto B4a67fb;
case 0x4a6800:goto L4a6800;
case 0x4a6802:c.instructions+=13;goto B4a6802;
case 0x4a6807:c.instructions+=12;goto B4a6807;
case 0x4a6809:c.instructions+=11;goto B4a6809;
case 0x4a680b:c.instructions+=10;goto B4a680b;
case 0x4a680e:c.instructions+=9;goto B4a680e;
case 0x4a6810:c.instructions+=8;goto B4a6810;
case 0x4a6813:c.instructions+=7;goto B4a6813;
case 0x4a6815:c.instructions+=6;goto B4a6815;
case 0x4a6816:c.instructions+=5;goto B4a6816;
case 0x4a681d:c.instructions+=4;goto B4a681d;
case 0x4a681e:c.instructions+=3;goto B4a681e;
case 0x4a6825:c.instructions+=2;goto B4a6825;
case 0x4a6826:c.instructions+=1;goto B4a6826;
case 0x4a682b:goto L4a682b;
case 0x4a682e:c.instructions+=39;goto B4a682e;
case 0x4a6835:c.instructions+=38;goto B4a6835;
case 0x4a6839:c.instructions+=37;goto B4a6839;
case 0x4a683d:c.instructions+=36;goto B4a683d;
case 0x4a6844:c.instructions+=35;goto B4a6844;
case 0x4a6846:c.instructions+=34;goto B4a6846;
case 0x4a684d:c.instructions+=33;goto B4a684d;
case 0x4a6851:c.instructions+=32;goto B4a6851;
case 0x4a6853:c.instructions+=31;goto B4a6853;
case 0x4a685a:c.instructions+=30;goto B4a685a;
case 0x4a6861:c.instructions+=29;goto B4a6861;
case 0x4a6865:c.instructions+=28;goto B4a6865;
case 0x4a6869:c.instructions+=27;goto B4a6869;
case 0x4a6870:c.instructions+=26;goto B4a6870;
case 0x4a6874:c.instructions+=25;goto B4a6874;
case 0x4a6876:c.instructions+=24;goto B4a6876;
case 0x4a687d:c.instructions+=23;goto B4a687d;
case 0x4a6881:c.instructions+=22;goto B4a6881;
case 0x4a6883:c.instructions+=21;goto B4a6883;
case 0x4a688a:c.instructions+=20;goto B4a688a;
case 0x4a6891:c.instructions+=19;goto B4a6891;
case 0x4a6895:c.instructions+=18;goto B4a6895;
case 0x4a689c:c.instructions+=17;goto B4a689c;
case 0x4a68a0:c.instructions+=16;goto B4a68a0;
case 0x4a68a2:c.instructions+=15;goto B4a68a2;
case 0x4a68a9:c.instructions+=14;goto B4a68a9;
case 0x4a68ad:c.instructions+=13;goto B4a68ad;
case 0x4a68af:c.instructions+=12;goto B4a68af;
case 0x4a68b6:c.instructions+=11;goto B4a68b6;
case 0x4a68bd:c.instructions+=10;goto B4a68bd;
case 0x4a68c4:c.instructions+=9;goto B4a68c4;
case 0x4a68c6:c.instructions+=8;goto B4a68c6;
case 0x4a68ca:c.instructions+=7;goto B4a68ca;
case 0x4a68ce:c.instructions+=6;goto B4a68ce;
case 0x4a68d2:c.instructions+=5;goto B4a68d2;
case 0x4a68d8:c.instructions+=4;goto B4a68d8;
case 0x4a68de:c.instructions+=3;goto B4a68de;
case 0x4a68e0:c.instructions+=2;goto B4a68e0;
case 0x4a68e3:c.instructions+=1;goto B4a68e3;
case 0x4a68e5:goto L4a68e5;
case 0x4a68f0:goto L4a68f0;
case 0x4a68f6:c.instructions+=4;goto B4a68f6;
case 0x4a68fc:c.instructions+=3;goto B4a68fc;
case 0x4a68fe:c.instructions+=2;goto B4a68fe;
case 0x4a6901:c.instructions+=1;goto B4a6901;
case 0x4a6903:goto L4a6903;
case 0x4a6909:c.instructions+=3;goto B4a6909;
case 0x4a690b:c.instructions+=2;goto B4a690b;
case 0x4a690e:c.instructions+=1;goto B4a690e;
case 0x4a6910:goto L4a6910;
case 0x4a6916:c.instructions+=4;goto B4a6916;
case 0x4a691c:c.instructions+=3;goto B4a691c;
case 0x4a691e:c.instructions+=2;goto B4a691e;
case 0x4a6921:c.instructions+=1;goto B4a6921;
case 0x4a6923:goto L4a6923;
case 0x4a6929:c.instructions+=17;goto B4a6929;
case 0x4a6931:c.instructions+=16;goto B4a6931;
case 0x4a6939:c.instructions+=15;goto B4a6939;
case 0x4a6941:c.instructions+=14;goto B4a6941;
case 0x4a6949:c.instructions+=13;goto B4a6949;
case 0x4a6951:c.instructions+=12;goto B4a6951;
case 0x4a6959:c.instructions+=11;goto B4a6959;
case 0x4a6961:c.instructions+=10;goto B4a6961;
case 0x4a6969:c.instructions+=9;goto B4a6969;
case 0x4a6971:c.instructions+=8;goto B4a6971;
case 0x4a6979:c.instructions+=7;goto B4a6979;
case 0x4a6981:c.instructions+=6;goto B4a6981;
case 0x4a6989:c.instructions+=5;goto B4a6989;
case 0x4a6991:c.instructions+=4;goto B4a6991;
case 0x4a6999:c.instructions+=3;goto B4a6999;
case 0x4a69a1:c.instructions+=2;goto B4a69a1;
case 0x4a69a9:c.instructions+=1;goto B4a69a9;
case 0x4a69ae:goto L4a69ae;
case 0x4a69b0:c.instructions+=13;goto B4a69b0;
case 0x4a69b5:c.instructions+=12;goto B4a69b5;
case 0x4a69b7:c.instructions+=11;goto B4a69b7;
case 0x4a69b9:c.instructions+=10;goto B4a69b9;
case 0x4a69bc:c.instructions+=9;goto B4a69bc;
case 0x4a69be:c.instructions+=8;goto B4a69be;
case 0x4a69c1:c.instructions+=7;goto B4a69c1;
case 0x4a69c3:c.instructions+=6;goto B4a69c3;
case 0x4a69c4:c.instructions+=5;goto B4a69c4;
case 0x4a69c8:c.instructions+=4;goto B4a69c8;
case 0x4a69c9:c.instructions+=3;goto B4a69c9;
case 0x4a69cd:c.instructions+=2;goto B4a69cd;
case 0x4a69ce:c.instructions+=1;goto B4a69ce;
case 0x4a69d3:goto L4a69d3;
case 0x4a69d7:c.instructions+=13;goto B4a69d7;
case 0x4a69db:c.instructions+=12;goto B4a69db;
case 0x4a69df:c.instructions+=11;goto B4a69df;
case 0x4a69e2:c.instructions+=10;goto B4a69e2;
case 0x4a69e7:c.instructions+=9;goto B4a69e7;
case 0x4a69e9:c.instructions+=8;goto B4a69e9;
case 0x4a69ed:c.instructions+=7;goto B4a69ed;
case 0x4a69ef:c.instructions+=6;goto B4a69ef;
case 0x4a69f6:c.instructions+=5;goto B4a69f6;
case 0x4a69f7:c.instructions+=4;goto B4a69f7;
case 0x4a69fe:c.instructions+=3;goto B4a69fe;
case 0x4a6a05:c.instructions+=2;goto B4a6a05;
case 0x4a6a10:c.instructions+=1;goto B4a6a10;
case 0x4a6a15:goto L4a6a15;
case 0x4a6a19:c.instructions+=177;goto B4a6a19;
case 0x4a6a20:c.instructions+=176;goto B4a6a20;
case 0x4a6a23:c.instructions+=175;goto B4a6a23;
case 0x4a6a27:c.instructions+=174;goto B4a6a27;
case 0x4a6a2b:c.instructions+=173;goto B4a6a2b;
case 0x4a6a2e:c.instructions+=172;goto B4a6a2e;
case 0x4a6a30:c.instructions+=171;goto B4a6a30;
case 0x4a6a34:c.instructions+=170;goto B4a6a34;
case 0x4a6a37:c.instructions+=169;goto B4a6a37;
case 0x4a6a39:c.instructions+=168;goto B4a6a39;
case 0x4a6a3d:c.instructions+=167;goto B4a6a3d;
case 0x4a6a41:c.instructions+=166;goto B4a6a41;
case 0x4a6a44:c.instructions+=165;goto B4a6a44;
case 0x4a6a48:c.instructions+=164;goto B4a6a48;
case 0x4a6a4b:c.instructions+=163;goto B4a6a4b;
case 0x4a6a4d:c.instructions+=162;goto B4a6a4d;
case 0x4a6a51:c.instructions+=161;goto B4a6a51;
case 0x4a6a54:c.instructions+=160;goto B4a6a54;
case 0x4a6a56:c.instructions+=159;goto B4a6a56;
case 0x4a6a5a:c.instructions+=158;goto B4a6a5a;
case 0x4a6a5c:c.instructions+=157;goto B4a6a5c;
case 0x4a6a63:c.instructions+=156;goto B4a6a63;
case 0x4a6a6a:c.instructions+=155;goto B4a6a6a;
case 0x4a6a6d:c.instructions+=154;goto B4a6a6d;
case 0x4a6a6f:c.instructions+=153;goto B4a6a6f;
case 0x4a6a75:c.instructions+=152;goto B4a6a75;
case 0x4a6a7b:c.instructions+=151;goto B4a6a7b;
case 0x4a6a7d:c.instructions+=150;goto B4a6a7d;
case 0x4a6a81:c.instructions+=149;goto B4a6a81;
case 0x4a6a88:c.instructions+=148;goto B4a6a88;
case 0x4a6a8c:c.instructions+=147;goto B4a6a8c;
case 0x4a6a8f:c.instructions+=146;goto B4a6a8f;
case 0x4a6a93:c.instructions+=145;goto B4a6a93;
case 0x4a6a96:c.instructions+=144;goto B4a6a96;
case 0x4a6a98:c.instructions+=143;goto B4a6a98;
case 0x4a6a9c:c.instructions+=142;goto B4a6a9c;
case 0x4a6a9f:c.instructions+=141;goto B4a6a9f;
case 0x4a6aa1:c.instructions+=140;goto B4a6aa1;
case 0x4a6aa5:c.instructions+=139;goto B4a6aa5;
case 0x4a6aa9:c.instructions+=138;goto B4a6aa9;
case 0x4a6aac:c.instructions+=137;goto B4a6aac;
case 0x4a6ab0:c.instructions+=136;goto B4a6ab0;
case 0x4a6ab3:c.instructions+=135;goto B4a6ab3;
case 0x4a6ab5:c.instructions+=134;goto B4a6ab5;
case 0x4a6ab9:c.instructions+=133;goto B4a6ab9;
case 0x4a6abc:c.instructions+=132;goto B4a6abc;
case 0x4a6abe:c.instructions+=131;goto B4a6abe;
case 0x4a6ac2:c.instructions+=130;goto B4a6ac2;
case 0x4a6ac4:c.instructions+=129;goto B4a6ac4;
case 0x4a6acb:c.instructions+=128;goto B4a6acb;
case 0x4a6ad2:c.instructions+=127;goto B4a6ad2;
case 0x4a6ad5:c.instructions+=126;goto B4a6ad5;
case 0x4a6ad8:c.instructions+=125;goto B4a6ad8;
case 0x4a6ada:c.instructions+=124;goto B4a6ada;
case 0x4a6ade:c.instructions+=123;goto B4a6ade;
case 0x4a6ae4:c.instructions+=122;goto B4a6ae4;
case 0x4a6aea:c.instructions+=121;goto B4a6aea;
case 0x4a6af1:c.instructions+=120;goto B4a6af1;
case 0x4a6af3:c.instructions+=119;goto B4a6af3;
case 0x4a6af5:c.instructions+=118;goto B4a6af5;
case 0x4a6af7:c.instructions+=117;goto B4a6af7;
case 0x4a6afb:c.instructions+=116;goto B4a6afb;
case 0x4a6afe:c.instructions+=115;goto B4a6afe;
case 0x4a6b02:c.instructions+=114;goto B4a6b02;
case 0x4a6b05:c.instructions+=113;goto B4a6b05;
case 0x4a6b07:c.instructions+=112;goto B4a6b07;
case 0x4a6b0b:c.instructions+=111;goto B4a6b0b;
case 0x4a6b0e:c.instructions+=110;goto B4a6b0e;
case 0x4a6b10:c.instructions+=109;goto B4a6b10;
case 0x4a6b14:c.instructions+=108;goto B4a6b14;
case 0x4a6b18:c.instructions+=107;goto B4a6b18;
case 0x4a6b1b:c.instructions+=106;goto B4a6b1b;
case 0x4a6b1f:c.instructions+=105;goto B4a6b1f;
case 0x4a6b22:c.instructions+=104;goto B4a6b22;
case 0x4a6b24:c.instructions+=103;goto B4a6b24;
case 0x4a6b28:c.instructions+=102;goto B4a6b28;
case 0x4a6b2b:c.instructions+=101;goto B4a6b2b;
case 0x4a6b2d:c.instructions+=100;goto B4a6b2d;
case 0x4a6b31:c.instructions+=99;goto B4a6b31;
case 0x4a6b33:c.instructions+=98;goto B4a6b33;
case 0x4a6b3a:c.instructions+=97;goto B4a6b3a;
case 0x4a6b41:c.instructions+=96;goto B4a6b41;
case 0x4a6b47:c.instructions+=95;goto B4a6b47;
case 0x4a6b4a:c.instructions+=94;goto B4a6b4a;
case 0x4a6b4e:c.instructions+=93;goto B4a6b4e;
case 0x4a6b52:c.instructions+=92;goto B4a6b52;
case 0x4a6b58:c.instructions+=91;goto B4a6b58;
case 0x4a6b5e:c.instructions+=90;goto B4a6b5e;
case 0x4a6b65:c.instructions+=89;goto B4a6b65;
case 0x4a6b67:c.instructions+=88;goto B4a6b67;
case 0x4a6b6b:c.instructions+=87;goto B4a6b6b;
case 0x4a6b71:c.instructions+=86;goto B4a6b71;
case 0x4a6b75:c.instructions+=85;goto B4a6b75;
case 0x4a6b7b:c.instructions+=84;goto B4a6b7b;
case 0x4a6b7d:c.instructions+=83;goto B4a6b7d;
case 0x4a6b81:c.instructions+=82;goto B4a6b81;
case 0x4a6b87:c.instructions+=81;goto B4a6b87;
case 0x4a6b89:c.instructions+=80;goto B4a6b89;
case 0x4a6b8d:c.instructions+=79;goto B4a6b8d;
case 0x4a6b91:c.instructions+=78;goto B4a6b91;
case 0x4a6b97:c.instructions+=77;goto B4a6b97;
case 0x4a6b9b:c.instructions+=76;goto B4a6b9b;
case 0x4a6ba1:c.instructions+=75;goto B4a6ba1;
case 0x4a6ba3:c.instructions+=74;goto B4a6ba3;
case 0x4a6ba7:c.instructions+=73;goto B4a6ba7;
case 0x4a6bad:c.instructions+=72;goto B4a6bad;
case 0x4a6baf:c.instructions+=71;goto B4a6baf;
case 0x4a6bb3:c.instructions+=70;goto B4a6bb3;
case 0x4a6bb5:c.instructions+=69;goto B4a6bb5;
case 0x4a6bbc:c.instructions+=68;goto B4a6bbc;
case 0x4a6bc3:c.instructions+=67;goto B4a6bc3;
case 0x4a6bc9:c.instructions+=66;goto B4a6bc9;
case 0x4a6bcf:c.instructions+=65;goto B4a6bcf;
case 0x4a6bd6:c.instructions+=64;goto B4a6bd6;
case 0x4a6bd7:c.instructions+=63;goto B4a6bd7;
case 0x4a6bdb:c.instructions+=62;goto B4a6bdb;
case 0x4a6bdf:c.instructions+=61;goto B4a6bdf;
case 0x4a6be5:c.instructions+=60;goto B4a6be5;
case 0x4a6beb:c.instructions+=59;goto B4a6beb;
case 0x4a6bf2:c.instructions+=58;goto B4a6bf2;
case 0x4a6bf4:c.instructions+=57;goto B4a6bf4;
case 0x4a6bf8:c.instructions+=56;goto B4a6bf8;
case 0x4a6bfa:c.instructions+=55;goto B4a6bfa;
case 0x4a6c01:c.instructions+=54;goto B4a6c01;
case 0x4a6c08:c.instructions+=53;goto B4a6c08;
case 0x4a6c0f:c.instructions+=52;goto B4a6c0f;
case 0x4a6c16:c.instructions+=51;goto B4a6c16;
case 0x4a6c1d:c.instructions+=50;goto B4a6c1d;
case 0x4a6c24:c.instructions+=49;goto B4a6c24;
case 0x4a6c2b:c.instructions+=48;goto B4a6c2b;
case 0x4a6c32:c.instructions+=47;goto B4a6c32;
case 0x4a6c39:c.instructions+=46;goto B4a6c39;
case 0x4a6c40:c.instructions+=45;goto B4a6c40;
case 0x4a6c47:c.instructions+=44;goto B4a6c47;
case 0x4a6c4e:c.instructions+=43;goto B4a6c4e;
case 0x4a6c55:c.instructions+=42;goto B4a6c55;
case 0x4a6c5c:c.instructions+=41;goto B4a6c5c;
case 0x4a6c63:c.instructions+=40;goto B4a6c63;
case 0x4a6c6a:c.instructions+=39;goto B4a6c6a;
case 0x4a6c71:c.instructions+=38;goto B4a6c71;
case 0x4a6c78:c.instructions+=37;goto B4a6c78;
case 0x4a6c7f:c.instructions+=36;goto B4a6c7f;
case 0x4a6c86:c.instructions+=35;goto B4a6c86;
case 0x4a6c8d:c.instructions+=34;goto B4a6c8d;
case 0x4a6c94:c.instructions+=33;goto B4a6c94;
case 0x4a6c9b:c.instructions+=32;goto B4a6c9b;
case 0x4a6ca2:c.instructions+=31;goto B4a6ca2;
case 0x4a6ca9:c.instructions+=30;goto B4a6ca9;
case 0x4a6cb0:c.instructions+=29;goto B4a6cb0;
case 0x4a6cb7:c.instructions+=28;goto B4a6cb7;
case 0x4a6cbe:c.instructions+=27;goto B4a6cbe;
case 0x4a6cc5:c.instructions+=26;goto B4a6cc5;
case 0x4a6ccc:c.instructions+=25;goto B4a6ccc;
case 0x4a6cd3:c.instructions+=24;goto B4a6cd3;
case 0x4a6cda:c.instructions+=23;goto B4a6cda;
case 0x4a6ce1:c.instructions+=22;goto B4a6ce1;
case 0x4a6ce3:c.instructions+=21;goto B4a6ce3;
case 0x4a6cea:c.instructions+=20;goto B4a6cea;
case 0x4a6cf1:c.instructions+=19;goto B4a6cf1;
case 0x4a6cf3:c.instructions+=18;goto B4a6cf3;
case 0x4a6cfa:c.instructions+=17;goto B4a6cfa;
case 0x4a6cfc:c.instructions+=16;goto B4a6cfc;
case 0x4a6cfe:c.instructions+=15;goto B4a6cfe;
case 0x4a6d05:c.instructions+=14;goto B4a6d05;
case 0x4a6d0c:c.instructions+=13;goto B4a6d0c;
case 0x4a6d13:c.instructions+=12;goto B4a6d13;
case 0x4a6d1a:c.instructions+=11;goto B4a6d1a;
case 0x4a6d21:c.instructions+=10;goto B4a6d21;
case 0x4a6d28:c.instructions+=9;goto B4a6d28;
case 0x4a6d2f:c.instructions+=8;goto B4a6d2f;
case 0x4a6d36:c.instructions+=7;goto B4a6d36;
case 0x4a6d3d:c.instructions+=6;goto B4a6d3d;
case 0x4a6d44:c.instructions+=5;goto B4a6d44;
case 0x4a6d4b:c.instructions+=4;goto B4a6d4b;
case 0x4a6d52:c.instructions+=3;goto B4a6d52;
case 0x4a6d59:c.instructions+=2;goto B4a6d59;
case 0x4a6d5a:c.instructions+=1;goto B4a6d5a;
case 0x4a6d5f:goto L4a6d5f;
case 0x4a6d66:c.instructions+=4;goto B4a6d66;
case 0x4a6d67:c.instructions+=3;goto B4a6d67;
case 0x4a6d6e:c.instructions+=2;goto B4a6d6e;
case 0x4a6d6f:c.instructions+=1;goto B4a6d6f;
case 0x4a6d74:goto L4a6d74;
case 0x4a6d7b:c.instructions+=6;goto B4a6d7b;
case 0x4a6d7c:c.instructions+=5;goto B4a6d7c;
case 0x4a6d83:c.instructions+=4;goto B4a6d83;
case 0x4a6d84:c.instructions+=3;goto B4a6d84;
case 0x4a6d8b:c.instructions+=2;goto B4a6d8b;
case 0x4a6d8c:c.instructions+=1;goto B4a6d8c;
case 0x4a6d91:goto L4a6d91;
case 0x4a6d95:c.instructions+=36;goto B4a6d95;
case 0x4a6d9b:c.instructions+=35;goto B4a6d9b;
case 0x4a6da2:c.instructions+=34;goto B4a6da2;
case 0x4a6da9:c.instructions+=33;goto B4a6da9;
case 0x4a6db0:c.instructions+=32;goto B4a6db0;
case 0x4a6db2:c.instructions+=31;goto B4a6db2;
case 0x4a6db9:c.instructions+=30;goto B4a6db9;
case 0x4a6dbb:c.instructions+=29;goto B4a6dbb;
case 0x4a6dbd:c.instructions+=28;goto B4a6dbd;
case 0x4a6dc4:c.instructions+=27;goto B4a6dc4;
case 0x4a6dc6:c.instructions+=26;goto B4a6dc6;
case 0x4a6dcd:c.instructions+=25;goto B4a6dcd;
case 0x4a6dd4:c.instructions+=24;goto B4a6dd4;
case 0x4a6ddb:c.instructions+=23;goto B4a6ddb;
case 0x4a6de2:c.instructions+=22;goto B4a6de2;
case 0x4a6de9:c.instructions+=21;goto B4a6de9;
case 0x4a6df0:c.instructions+=20;goto B4a6df0;
case 0x4a6df7:c.instructions+=19;goto B4a6df7;
case 0x4a6dfe:c.instructions+=18;goto B4a6dfe;
case 0x4a6e05:c.instructions+=17;goto B4a6e05;
case 0x4a6e0c:c.instructions+=16;goto B4a6e0c;
case 0x4a6e13:c.instructions+=15;goto B4a6e13;
case 0x4a6e1a:c.instructions+=14;goto B4a6e1a;
case 0x4a6e21:c.instructions+=13;goto B4a6e21;
case 0x4a6e28:c.instructions+=12;goto B4a6e28;
case 0x4a6e29:c.instructions+=11;goto B4a6e29;
case 0x4a6e2f:c.instructions+=10;goto B4a6e2f;
case 0x4a6e30:c.instructions+=9;goto B4a6e30;
case 0x4a6e3b:c.instructions+=8;goto B4a6e3b;
case 0x4a6e46:c.instructions+=7;goto B4a6e46;
case 0x4a6e4d:c.instructions+=6;goto B4a6e4d;
case 0x4a6e58:c.instructions+=5;goto B4a6e58;
case 0x4a6e5c:c.instructions+=4;goto B4a6e5c;
case 0x4a6e62:c.instructions+=3;goto B4a6e62;
case 0x4a6e64:c.instructions+=2;goto B4a6e64;
case 0x4a6e68:c.instructions+=1;goto B4a6e68;
case 0x4a6e6d:goto L4a6e6d;
case 0x4a6e71:c.instructions+=9;goto B4a6e71;
case 0x4a6e75:c.instructions+=8;goto B4a6e75;
case 0x4a6e79:c.instructions+=7;goto B4a6e79;
case 0x4a6e7f:c.instructions+=6;goto B4a6e7f;
case 0x4a6e85:c.instructions+=5;goto B4a6e85;
case 0x4a6e8b:c.instructions+=4;goto B4a6e8b;
case 0x4a6e91:c.instructions+=3;goto B4a6e91;
case 0x4a6e97:c.instructions+=2;goto B4a6e97;
case 0x4a6e9a:c.instructions+=1;goto B4a6e9a;
case 0x4a6e9f:goto L4a6e9f;
case 0x4a6ea6:c.instructions+=49;goto B4a6ea6;
case 0x4a6ea8:c.instructions+=48;goto B4a6ea8;
case 0x4a6ead:c.instructions+=47;goto B4a6ead;
case 0x4a6eaf:c.instructions+=46;goto B4a6eaf;
case 0x4a6eb1:c.instructions+=45;goto B4a6eb1;
case 0x4a6eb5:c.instructions+=44;goto B4a6eb5;
case 0x4a6eb8:c.instructions+=43;goto B4a6eb8;
case 0x4a6eba:c.instructions+=42;goto B4a6eba;
case 0x4a6ebd:c.instructions+=41;goto B4a6ebd;
case 0x4a6ebf:c.instructions+=40;goto B4a6ebf;
case 0x4a6ec3:c.instructions+=39;goto B4a6ec3;
case 0x4a6ec7:c.instructions+=38;goto B4a6ec7;
case 0x4a6ec9:c.instructions+=37;goto B4a6ec9;
case 0x4a6ed0:c.instructions+=36;goto B4a6ed0;
case 0x4a6ed3:c.instructions+=35;goto B4a6ed3;
case 0x4a6ed8:c.instructions+=34;goto B4a6ed8;
case 0x4a6edf:c.instructions+=33;goto B4a6edf;
case 0x4a6ee6:c.instructions+=32;goto B4a6ee6;
case 0x4a6eed:c.instructions+=31;goto B4a6eed;
case 0x4a6ef4:c.instructions+=30;goto B4a6ef4;
case 0x4a6efb:c.instructions+=29;goto B4a6efb;
case 0x4a6f02:c.instructions+=28;goto B4a6f02;
case 0x4a6f09:c.instructions+=27;goto B4a6f09;
case 0x4a6f10:c.instructions+=26;goto B4a6f10;
case 0x4a6f17:c.instructions+=25;goto B4a6f17;
case 0x4a6f1e:c.instructions+=24;goto B4a6f1e;
case 0x4a6f25:c.instructions+=23;goto B4a6f25;
case 0x4a6f2c:c.instructions+=22;goto B4a6f2c;
case 0x4a6f33:c.instructions+=21;goto B4a6f33;
case 0x4a6f3a:c.instructions+=20;goto B4a6f3a;
case 0x4a6f41:c.instructions+=19;goto B4a6f41;
case 0x4a6f48:c.instructions+=18;goto B4a6f48;
case 0x4a6f4f:c.instructions+=17;goto B4a6f4f;
case 0x4a6f51:c.instructions+=16;goto B4a6f51;
case 0x4a6f58:c.instructions+=15;goto B4a6f58;
case 0x4a6f5f:c.instructions+=14;goto B4a6f5f;
case 0x4a6f66:c.instructions+=13;goto B4a6f66;
case 0x4a6f6d:c.instructions+=12;goto B4a6f6d;
case 0x4a6f74:c.instructions+=11;goto B4a6f74;
case 0x4a6f7b:c.instructions+=10;goto B4a6f7b;
case 0x4a6f82:c.instructions+=9;goto B4a6f82;
case 0x4a6f89:c.instructions+=8;goto B4a6f89;
case 0x4a6f90:c.instructions+=7;goto B4a6f90;
case 0x4a6f97:c.instructions+=6;goto B4a6f97;
case 0x4a6f9e:c.instructions+=5;goto B4a6f9e;
case 0x4a6fa5:c.instructions+=4;goto B4a6fa5;
case 0x4a6fac:c.instructions+=3;goto B4a6fac;
case 0x4a6fb3:c.instructions+=2;goto B4a6fb3;
case 0x4a6fba:c.instructions+=1;goto B4a6fba;
case 0x4a6fbc:goto L4a6fbc;
case 0x4a6fc0:c.instructions+=4;goto B4a6fc0;
case 0x4a6fc1:c.instructions+=3;goto B4a6fc1;
case 0x4a6fc2:c.instructions+=2;goto B4a6fc2;
case 0x4a6fc3:c.instructions+=1;goto B4a6fc3;
case 0x4a6fc8:goto L4a6fc8;
case 0x4a6fcc:c.instructions+=5;goto B4a6fcc;
case 0x4a6fcd:c.instructions+=4;goto B4a6fcd;
case 0x4a6fd4:c.instructions+=3;goto B4a6fd4;
case 0x4a6fd5:c.instructions+=2;goto B4a6fd5;
case 0x4a6fd6:c.instructions+=1;goto B4a6fd6;
case 0x4a6fdb:goto L4a6fdb;
case 0x4a6fde:c.instructions+=1;goto B4a6fde;
case 0x4a6fe3:goto L4a6fe3;
case 0x4a6fe6:c.instructions+=7;goto B4a6fe6;
case 0x4a6fe9:c.instructions+=6;goto B4a6fe9;
case 0x4a6feb:c.instructions+=5;goto B4a6feb;
case 0x4a6ff2:c.instructions+=4;goto B4a6ff2;
case 0x4a6ff6:c.instructions+=3;goto B4a6ff6;
case 0x4a6ff8:c.instructions+=2;goto B4a6ff8;
case 0x4a6fff:c.instructions+=1;goto B4a6fff;
default:missing_instruction(c.pc);}
B4a6000:L4a6000:{c.instructions+=1;NFSU2_TR(0x4a6000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a6005ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a6005:L4a6005:{c.instructions+=5;NFSU2_TR(0x4a6005);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a6008:{NFSU2_TR(0x4a6008);
u8 U[4];
w4(U+0,u32(0x790660ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a600d:{NFSU2_TR(0x4a600d);
u8 U[4];
w4(U+0,u32(0xd719922full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6012:{NFSU2_TR(0x4a6012);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6013:{NFSU2_TR(0x4a6013);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a6018ull));
TAIL_STATIC(0x537b80u,537);
}
B4a6018:L4a6018:{c.instructions+=4;NFSU2_TR(0x4a6018);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4a601b:{NFSU2_TR(0x4a601b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a601c:{NFSU2_TR(0x4a601c);
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
B4a601f:{NFSU2_TR(0x4a601f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a6030:L4a6030:{c.instructions+=28;NFSU2_TR(0x4a6030);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x50ull))));
}
B4a6033:{NFSU2_TR(0x4a6033);
__builtin_memmove((R+0),gp(0x78e014),4);
}
B4a6038:{NFSU2_TR(0x4a6038);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6039:{NFSU2_TR(0x4a6039);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a603a:{NFSU2_TR(0x4a603a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a603b:{NFSU2_TR(0x4a603b);
__builtin_memmove((R+24),(R+4),4);
}
B4a603d:{NFSU2_TR(0x4a603d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4a603f:{NFSU2_TR(0x4a603f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4a6041:{NFSU2_TR(0x4a6041);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6045:{NFSU2_TR(0x4a6045);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6046:{NFSU2_TR(0x4a6046);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a604a:{NFSU2_TR(0x4a604a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
w4(U+4,u32(0x41200000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6054:{NFSU2_TR(0x4a6054);
__builtin_memmove((R+0),gp(0x8363f8),4);
}
B4a6059:{NFSU2_TR(0x4a6059);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a605d:{NFSU2_TR(0x4a605d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4a605f:{NFSU2_TR(0x4a605f);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4a6061:{NFSU2_TR(0x4a6061);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a6063:{NFSU2_TR(0x4a6063);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6067:{NFSU2_TR(0x4a6067);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a606b:{NFSU2_TR(0x4a606b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a606f:{NFSU2_TR(0x4a606f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3dcccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6077:{NFSU2_TR(0x4a6077);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a607b:{NFSU2_TR(0x4a607b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a607f:{NFSU2_TR(0x4a607f);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6083:{NFSU2_TR(0x4a6083);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6087:{NFSU2_TR(0x4a6087);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a608b:{NFSU2_TR(0x4a608b);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a608f:{NFSU2_TR(0x4a608f);
if(r1(R+518)){{goto L4a60c1;}}
}
B4a6091:L4a6091:{c.instructions+=3;NFSU2_TR(0x4a6091);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a6097:{NFSU2_TR(0x4a6097);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4a609d:{NFSU2_TR(0x4a609d);
if(r1(R+518)){{goto L4a60c1;}}
}
B4a609f:L4a609f:{c.instructions+=3;NFSU2_TR(0x4a609f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a60a2:{NFSU2_TR(0x4a60a2);
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
B4a60a4:{NFSU2_TR(0x4a60a4);
if(r1(R+518)){{goto L4a60c1;}}
}
B4a60a6:L4a60a6:{c.instructions+=2;NFSU2_TR(0x4a60a6);
u8 U[4];
w4(U+0,u32(0xa1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a60ab:{NFSU2_TR(0x4a60ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a60b0ull));
TAIL_STATIC(0x6102f0u,610);
}
B4a60b0:L4a60b0:{c.instructions+=2;NFSU2_TR(0x4a60b0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a60b2:{NFSU2_TR(0x4a60b2);
if(r1(R+518)){{goto L4a60c1;}}
}
B4a60b4:L4a60b4:{c.instructions+=4;NFSU2_TR(0x4a60b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4a60b7:{NFSU2_TR(0x4a60b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r4(U+0))));
}
B4a60ba:{NFSU2_TR(0x4a60ba);
w4(R+20,u32(s32(s8(r1(R+8)))));
}
B4a60bd:{NFSU2_TR(0x4a60bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a60c1:L4a60c1:{c.instructions+=4;NFSU2_TR(0x4a60c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a60c7:{NFSU2_TR(0x4a60c7);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a60c9:{NFSU2_TR(0x4a60c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a60cd:{NFSU2_TR(0x4a60cd);
if(r1(R+518)){{goto L4a60ee;}}
}
B4a60cf:L4a60cf:{c.instructions+=2;NFSU2_TR(0x4a60cf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a60d2:{NFSU2_TR(0x4a60d2);
if(r1(R+518)){{goto L4a60d9;}}
}
B4a60d4:L4a60d4:{c.instructions+=2;NFSU2_TR(0x4a60d4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a60d7:{NFSU2_TR(0x4a60d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a60e6;}}
}
B4a60d9:L4a60d9:{c.instructions+=2;NFSU2_TR(0x4a60d9);
w4(R+12,u32(0x3ull));
}
B4a60de:{NFSU2_TR(0x4a60de);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a60e6:L4a60e6:{c.instructions+=2;NFSU2_TR(0x4a60e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a60ec:{NFSU2_TR(0x4a60ec);
{goto L4a60f0;}
}
B4a60ee:L4a60ee:{c.instructions+=1;NFSU2_TR(0x4a60ee);
__builtin_memmove((R+12),(R+20),4);
}
B4a60f0:L4a60f0:{c.instructions+=2;NFSU2_TR(0x4a60f0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a60f2:{NFSU2_TR(0x4a60f2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4a61af;}}
}
B4a60f8:L4a60f8:{c.instructions+=2;NFSU2_TR(0x4a60f8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a60fb:{NFSU2_TR(0x4a60fb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4a61af;}}
}
B4a6101:L4a6101:{c.instructions+=4;NFSU2_TR(0x4a6101);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a6107:{NFSU2_TR(0x4a6107);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a610d:{NFSU2_TR(0x4a610d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a610f:{NFSU2_TR(0x4a610f);
if(r1(R+518)){{goto L4a61af;}}
}
B4a6115:L4a6115:{c.instructions+=3;NFSU2_TR(0x4a6115);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B4a6118:{NFSU2_TR(0x4a6118);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a611a:{NFSU2_TR(0x4a611a);
if(r1(R+518)){{goto L4a61af;}}
}
B4a6120:L4a6120:{c.instructions+=5;NFSU2_TR(0x4a6120);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4a6122:{NFSU2_TR(0x4a6122);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B4a6128:{NFSU2_TR(0x4a6128);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B4a612e:{NFSU2_TR(0x4a612e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B4a6130:{NFSU2_TR(0x4a6130);
if(r1(R+518)){{goto L4a61af;}}
}
B4a6132:L4a6132:{c.instructions+=13;NFSU2_TR(0x4a6132);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x114ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B4a6138:{NFSU2_TR(0x4a6138);
{u32 ea_=u32(r4(R+12)+u32(8349812u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a613e:{NFSU2_TR(0x4a613e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4a6142:{NFSU2_TR(0x4a6142);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4a6146:{NFSU2_TR(0x4a6146);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4a614a:{NFSU2_TR(0x4a614a);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a614e:{NFSU2_TR(0x4a614e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7f6864ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a6154:{NFSU2_TR(0x4a6154);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a6158:{NFSU2_TR(0x4a6158);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6159:{NFSU2_TR(0x4a6159);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a615b:{NFSU2_TR(0x4a615b);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a615d:{NFSU2_TR(0x4a615d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2f0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a6163:{NFSU2_TR(0x4a6163);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a6168ull));
TAIL_STATIC(0x5a6580u,5a6);
}
B4a6168:L4a6168:{c.instructions+=4;NFSU2_TR(0x4a6168);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a616e:{NFSU2_TR(0x4a616e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a6170:{NFSU2_TR(0x4a6170);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a6173:{NFSU2_TR(0x4a6173);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4a61af;}}
}
B4a6175:L4a6175:{c.instructions+=15;NFSU2_TR(0x4a6175);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6179:{NFSU2_TR(0x4a6179);
{u32 ea_=u32(r4(R+28)+u32(1812u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a617f:{NFSU2_TR(0x4a617f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6183:{NFSU2_TR(0x4a6183);
{u32 ea_=u32(r4(R+28)+u32(1816u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6189:{NFSU2_TR(0x4a6189);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4a618b:{NFSU2_TR(0x4a618b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a618f:{NFSU2_TR(0x4a618f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6193:{NFSU2_TR(0x4a6193);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4a6195:{NFSU2_TR(0x4a6195);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6199:{NFSU2_TR(0x4a6199);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a619d:{NFSU2_TR(0x4a619d);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a61a1:{NFSU2_TR(0x4a61a1);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B4a61a3:{NFSU2_TR(0x4a61a3);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a61a7:{NFSU2_TR(0x4a61a7);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a61ab:{NFSU2_TR(0x4a61ab);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a61af:L4a61af:{c.instructions+=3;NFSU2_TR(0x4a61af);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a61b3:{NFSU2_TR(0x4a61b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a61b5:{NFSU2_TR(0x4a61b5);
if(r1(R+518)){{goto L4a61da;}}
}
B4a61b7:L4a61b7:{c.instructions+=3;NFSU2_TR(0x4a61b7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4a61b9:{NFSU2_TR(0x4a61b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4a61bf:{NFSU2_TR(0x4a61bf);
}
B4a61c0:L4a61c0:{c.instructions+=5;NFSU2_TR(0x4a61c0);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a61c2:{NFSU2_TR(0x4a61c2);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a61c6:{NFSU2_TR(0x4a61c6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a61c8:{NFSU2_TR(0x4a61c8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a61cb:{NFSU2_TR(0x4a61cb);
if(r1(R+514)){{goto L4a6276;}}
}
B4a61d1:L4a61d1:{c.instructions+=4;NFSU2_TR(0x4a61d1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4a61d2:{NFSU2_TR(0x4a61d2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B4a61d5:{NFSU2_TR(0x4a61d5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a61d8:{NFSU2_TR(0x4a61d8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a61c0u);}goto L4a61c0;}}
}
B4a61da:L4a61da:{c.instructions+=2;NFSU2_TR(0x4a61da);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a61dc:{NFSU2_TR(0x4a61dc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4a6346;}}
}
B4a61e2:L4a61e2:{c.instructions+=2;NFSU2_TR(0x4a61e2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a61e5:{NFSU2_TR(0x4a61e5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4a6346;}}
}
B4a61eb:L4a61eb:{c.instructions+=8;NFSU2_TR(0x4a61eb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(u32(0x114ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B4a61f1:{NFSU2_TR(0x4a61f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7f6864ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4a61f7:{NFSU2_TR(0x4a61f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a61fb:{NFSU2_TR(0x4a61fb);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4a61fd:{NFSU2_TR(0x4a61fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4a6201:{NFSU2_TR(0x4a6201);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a6204:{NFSU2_TR(0x4a6204);
__builtin_memmove((R+4),(R+0),4);
}
B4a6206:{NFSU2_TR(0x4a6206);
{goto L4a6210;}
}
B4a6210:L4a6210:{c.instructions+=2;NFSU2_TR(0x4a6210);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4a6216:{NFSU2_TR(0x4a6216);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4a6218:L4a6218:{c.instructions+=3;NFSU2_TR(0x4a6218);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a621b:{NFSU2_TR(0x4a621b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a621d:{NFSU2_TR(0x4a621d);
if(r1(R+518)){{goto L4a624f;}}
}
B4a621f:L4a621f:{c.instructions+=7;NFSU2_TR(0x4a621f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a6223:{NFSU2_TR(0x4a6223);
{u32 ea_=u32(r4(R+8)+u32(384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6229:{NFSU2_TR(0x4a6229);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a622a:{NFSU2_TR(0x4a622a);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a622c:{NFSU2_TR(0x4a622c);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a622f:{NFSU2_TR(0x4a622f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6232:{NFSU2_TR(0x4a6232);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a6237ull));
TAIL_STATIC(0x43c350u,43c);
}
B4a6237:L4a6237:{c.instructions+=8;NFSU2_TR(0x4a6237);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a623b:{NFSU2_TR(0x4a623b);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4a623f:{NFSU2_TR(0x4a623f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4a6242:{NFSU2_TR(0x4a6242);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6245:{NFSU2_TR(0x4a6245);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a6248:{NFSU2_TR(0x4a6248);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a624b:{NFSU2_TR(0x4a624b);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a624d:{NFSU2_TR(0x4a624d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a624f:L4a624f:{c.instructions+=4;NFSU2_TR(0x4a624f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4a6250:{NFSU2_TR(0x4a6250);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B4a6253:{NFSU2_TR(0x4a6253);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a6256:{NFSU2_TR(0x4a6256);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a6218u);}goto L4a6218;}}
}
B4a6258:L4a6258:{c.instructions+=3;NFSU2_TR(0x4a6258);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a625b:{NFSU2_TR(0x4a625b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a625d:{NFSU2_TR(0x4a625d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a62aa;}}
}
B4a625f:L4a625f:{c.instructions+=5;NFSU2_TR(0x4a625f);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6261:{NFSU2_TR(0x4a6261);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a6267:{NFSU2_TR(0x4a6267);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a6269:{NFSU2_TR(0x4a6269);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a626c:{NFSU2_TR(0x4a626c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a62a4;}}
}
B4a626e:L4a626e:{c.instructions+=2;NFSU2_TR(0x4a626e);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4a6274:{NFSU2_TR(0x4a6274);
{goto L4a62aa;}
}
B4a6276:L4a6276:{c.instructions+=2;NFSU2_TR(0x4a6276);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a6279:{NFSU2_TR(0x4a6279);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a628a;}}
}
B4a627b:L4a627b:{c.instructions+=3;NFSU2_TR(0x4a627b);
__builtin_memmove((R+8),gp(0x78e018),4);
}
B4a6281:{NFSU2_TR(0x4a6281);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6285:{NFSU2_TR(0x4a6285);
{goto L4a6350;}
}
B4a628a:L4a628a:{c.instructions+=5;NFSU2_TR(0x4a628a);
__builtin_memmove((R+0),gp(0x78e024),4);
}
B4a628f:{NFSU2_TR(0x4a628f);
__builtin_memmove((R+4),gp(0x78e01c),4);
}
B4a6295:{NFSU2_TR(0x4a6295);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a629b:{NFSU2_TR(0x4a629b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a629f:{NFSU2_TR(0x4a629f);
{goto L4a6350;}
}
B4a62a4:L4a62a4:{c.instructions+=1;NFSU2_TR(0x4a62a4);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4a62aa:L4a62aa:{c.instructions+=9;NFSU2_TR(0x4a62aa);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a62ad:{NFSU2_TR(0x4a62ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a62b0:{NFSU2_TR(0x4a62b0);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a62b2:{NFSU2_TR(0x4a62b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a62b6:{NFSU2_TR(0x4a62b6);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4a62ba:{NFSU2_TR(0x4a62ba);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4a62bc:{NFSU2_TR(0x4a62bc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a62be:{NFSU2_TR(0x4a62be);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a62c1:{NFSU2_TR(0x4a62c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a62c9;}}
}
B4a62c3:L4a62c3:{c.instructions+=2;NFSU2_TR(0x4a62c3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a62c5:{NFSU2_TR(0x4a62c5);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a62c9:L4a62c9:{c.instructions+=5;NFSU2_TR(0x4a62c9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a62cd:{NFSU2_TR(0x4a62cd);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4a62cf:{NFSU2_TR(0x4a62cf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a62d1:{NFSU2_TR(0x4a62d1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a62d4:{NFSU2_TR(0x4a62d4);
if(r1(R+514)){{goto L4a62dc;}}
}
B4a62d6:L4a62d6:{c.instructions+=2;NFSU2_TR(0x4a62d6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a62d8:{NFSU2_TR(0x4a62d8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a62dc:L4a62dc:{c.instructions+=5;NFSU2_TR(0x4a62dc);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a62de:{NFSU2_TR(0x4a62de);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x3ull))));
}
B4a62e1:{NFSU2_TR(0x4a62e1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4a62e4:{NFSU2_TR(0x4a62e4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a62e7:{NFSU2_TR(0x4a62e7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a6210u);}goto L4a6210;}}
}
B4a62ed:L4a62ed:{c.instructions+=17;NFSU2_TR(0x4a62ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a62f0:{NFSU2_TR(0x4a62f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a62f3:{NFSU2_TR(0x4a62f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a62f7:{NFSU2_TR(0x4a62f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a62fa:{NFSU2_TR(0x4a62fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a62fe:{NFSU2_TR(0x4a62fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a6302:{NFSU2_TR(0x4a6302);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x178ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6308:{NFSU2_TR(0x4a6308);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a630e:{NFSU2_TR(0x4a630e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6310:{NFSU2_TR(0x4a6310);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a6313:{NFSU2_TR(0x4a6313);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6317:{NFSU2_TR(0x4a6317);
{u32 ea_=u32(r4(R+8)+u32(384u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a631d:{NFSU2_TR(0x4a631d);
{u32 ea_=u32(r4(R+8)+u32(384u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4a6323:{NFSU2_TR(0x4a6323);
{u32 ea_=u32(u32(7921696u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a6329:{NFSU2_TR(0x4a6329);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a632b:{NFSU2_TR(0x4a632b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a632e:{NFSU2_TR(0x4a632e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a633a;}}
}
B4a6330:L4a6330:{c.instructions+=1;NFSU2_TR(0x4a6330);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x180ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a633a:L4a633a:{c.instructions+=3;NFSU2_TR(0x4a633a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a633e:{NFSU2_TR(0x4a633e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6344:{NFSU2_TR(0x4a6344);
{goto L4a6350;}
}
B4a6346:L4a6346:{c.instructions+=1;NFSU2_TR(0x4a6346);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6350:L4a6350:{c.instructions+=11;NFSU2_TR(0x4a6350);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6354:{NFSU2_TR(0x4a6354);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6358:{NFSU2_TR(0x4a6358);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a635c:{NFSU2_TR(0x4a635c);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6360:{NFSU2_TR(0x4a6360);
{u32 ea_=u32(u32(7921680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6366:{NFSU2_TR(0x4a6366);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4a6368:{NFSU2_TR(0x4a6368);
__asm__ volatile(".byte 0xd8,0xea":::"memory");
}
B4a636a:{NFSU2_TR(0x4a636a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4a6370:{NFSU2_TR(0x4a6370);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a6372:{NFSU2_TR(0x4a6372);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a6375:{NFSU2_TR(0x4a6375);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4a637f;}}
}
B4a6377:L4a6377:{c.instructions+=2;NFSU2_TR(0x4a6377);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a6379:{NFSU2_TR(0x4a6379);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a637f:L4a637f:{c.instructions+=14;NFSU2_TR(0x4a637f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6383:{NFSU2_TR(0x4a6383);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6387:{NFSU2_TR(0x4a6387);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a638b:{NFSU2_TR(0x4a638b);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a638f:{NFSU2_TR(0x4a638f);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6393:{NFSU2_TR(0x4a6393);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6397:{NFSU2_TR(0x4a6397);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a639b:{NFSU2_TR(0x4a639b);
{u32 ea_=u32(u32(7921680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a63a1:{NFSU2_TR(0x4a63a1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4a63a3:{NFSU2_TR(0x4a63a3);
__asm__ volatile(".byte 0xd8,0xea":::"memory");
}
B4a63a5:{NFSU2_TR(0x4a63a5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4a63ab:{NFSU2_TR(0x4a63ab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a63ad:{NFSU2_TR(0x4a63ad);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a63b0:{NFSU2_TR(0x4a63b0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4a63ba;}}
}
B4a63b2:L4a63b2:{c.instructions+=2;NFSU2_TR(0x4a63b2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a63b4:{NFSU2_TR(0x4a63b4);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a63ba:L4a63ba:{c.instructions+=10;NFSU2_TR(0x4a63ba);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a63be:{NFSU2_TR(0x4a63be);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a63c2:{NFSU2_TR(0x4a63c2);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a63c6:{NFSU2_TR(0x4a63c6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4a63c8:{NFSU2_TR(0x4a63c8);
{u32 ea_=u32(u32(7921680u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a63ce:{NFSU2_TR(0x4a63ce);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4a63d0:{NFSU2_TR(0x4a63d0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4a63d6:{NFSU2_TR(0x4a63d6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a63d8:{NFSU2_TR(0x4a63d8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a63db:{NFSU2_TR(0x4a63db);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4a63e5;}}
}
B4a63dd:L4a63dd:{c.instructions+=2;NFSU2_TR(0x4a63dd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a63df:{NFSU2_TR(0x4a63df);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a63e5:L4a63e5:{c.instructions+=10;NFSU2_TR(0x4a63e5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a63e9:{NFSU2_TR(0x4a63e9);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a63ed:{NFSU2_TR(0x4a63ed);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a63f1:{NFSU2_TR(0x4a63f1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4a63f3:{NFSU2_TR(0x4a63f3);
{u32 ea_=u32(u32(7921680u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a63f9:{NFSU2_TR(0x4a63f9);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4a63fb:{NFSU2_TR(0x4a63fb);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4a6401:{NFSU2_TR(0x4a6401);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a6403:{NFSU2_TR(0x4a6403);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a6406:{NFSU2_TR(0x4a6406);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4a6410;}}
}
B4a6408:L4a6408:{c.instructions+=2;NFSU2_TR(0x4a6408);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a640a:{NFSU2_TR(0x4a640a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6410:L4a6410:{c.instructions+=8;NFSU2_TR(0x4a6410);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6414:{NFSU2_TR(0x4a6414);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6418:{NFSU2_TR(0x4a6418);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a641c:{NFSU2_TR(0x4a641c);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6420:{NFSU2_TR(0x4a6420);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a6424:{NFSU2_TR(0x4a6424);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a6426:{NFSU2_TR(0x4a6426);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a6429:{NFSU2_TR(0x4a6429);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a6435;}}
}
B4a642b:L4a642b:{c.instructions+=3;NFSU2_TR(0x4a642b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a642f:{NFSU2_TR(0x4a642f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6433:{NFSU2_TR(0x4a6433);
{goto L4a643d;}
}
B4a6435:L4a6435:{c.instructions+=2;NFSU2_TR(0x4a6435);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a6439:{NFSU2_TR(0x4a6439);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a643d:L4a643d:{c.instructions+=5;NFSU2_TR(0x4a643d);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6441:{NFSU2_TR(0x4a6441);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a6445:{NFSU2_TR(0x4a6445);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a6447:{NFSU2_TR(0x4a6447);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a644a:{NFSU2_TR(0x4a644a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a6452;}}
}
B4a644c:L4a644c:{c.instructions+=2;NFSU2_TR(0x4a644c);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6450:{NFSU2_TR(0x4a6450);
{goto L4a6456;}
}
B4a6452:L4a6452:{c.instructions+=1;NFSU2_TR(0x4a6452);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6456:L4a6456:{c.instructions+=4;NFSU2_TR(0x4a6456);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4a645a:{NFSU2_TR(0x4a645a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a645c:{NFSU2_TR(0x4a645c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a645f:{NFSU2_TR(0x4a645f);
if(r1(R+518)){{goto L4a6467;}}
}
B4a6461:L4a6461:{c.instructions+=2;NFSU2_TR(0x4a6461);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a6463:{NFSU2_TR(0x4a6463);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6467:L4a6467:{c.instructions+=12;NFSU2_TR(0x4a6467);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a646b:{NFSU2_TR(0x4a646b);
{u32 ea_=u32(r4(R+8)+u32(376u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6471:{NFSU2_TR(0x4a6471);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x184ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a6477:{NFSU2_TR(0x4a6477);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4a6479:{NFSU2_TR(0x4a6479);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a647d:{NFSU2_TR(0x4a647d);
{u32 ea_=u32(r4(R+8)+u32(376u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6483:{NFSU2_TR(0x4a6483);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4a6489:{NFSU2_TR(0x4a6489);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a648f:{NFSU2_TR(0x4a648f);
w4(R+20,u32(0x2ull));
}
B4a6494:{NFSU2_TR(0x4a6494);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6498:{NFSU2_TR(0x4a6498);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a649c:{NFSU2_TR(0x4a649c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a64a0:L4a64a0:{c.instructions+=9;NFSU2_TR(0x4a64a0);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a64a2:{NFSU2_TR(0x4a64a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4a64a4:{NFSU2_TR(0x4a64a4);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a64a8:{NFSU2_TR(0x4a64a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a64ac:{NFSU2_TR(0x4a64ac);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4a64ae:{NFSU2_TR(0x4a64ae);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a64b2:{NFSU2_TR(0x4a64b2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a64b4:{NFSU2_TR(0x4a64b4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a64b7:{NFSU2_TR(0x4a64b7);
if(r1(R+514)){{goto L4a64c1;}}
}
B4a64b9:L4a64b9:{c.instructions+=3;NFSU2_TR(0x4a64b9);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4a64bd:{NFSU2_TR(0x4a64bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4a64bf:{NFSU2_TR(0x4a64bf);
{goto L4a64e9;}
}
B4a64c1:L4a64c1:{c.instructions+=6;NFSU2_TR(0x4a64c1);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a64c3:{NFSU2_TR(0x4a64c3);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a64c7:{NFSU2_TR(0x4a64c7);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a64c9:{NFSU2_TR(0x4a64c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a64cb:{NFSU2_TR(0x4a64cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a64ce:{NFSU2_TR(0x4a64ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a64d6;}}
}
B4a64d0:L4a64d0:{c.instructions+=2;NFSU2_TR(0x4a64d0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a64d4:{NFSU2_TR(0x4a64d4);
{goto L4a64e7;}
}
B4a64d6:L4a64d6:{c.instructions+=4;NFSU2_TR(0x4a64d6);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a64da:{NFSU2_TR(0x4a64da);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a64dc:{NFSU2_TR(0x4a64dc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a64df:{NFSU2_TR(0x4a64df);
if(r1(R+514)){{goto L4a64ef;}}
}
B4a64e1:L4a64e1:{c.instructions+=2;NFSU2_TR(0x4a64e1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a64e5:{NFSU2_TR(0x4a64e5);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a64e7:L4a64e7:{c.instructions+=1;NFSU2_TR(0x4a64e7);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a64e9:L4a64e9:{c.instructions+=1;NFSU2_TR(0x4a64e9);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4a64ef:L4a64ef:{c.instructions+=3;NFSU2_TR(0x4a64ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a64f2:{NFSU2_TR(0x4a64f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a64f4:{NFSU2_TR(0x4a64f4);
if(r1(R+518)){{goto L4a6626;}}
}
B4a64fa:L4a64fa:{c.instructions+=5;NFSU2_TR(0x4a64fa);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a64fc:{NFSU2_TR(0x4a64fc);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a6500:{NFSU2_TR(0x4a6500);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a6502:{NFSU2_TR(0x4a6502);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a6505:{NFSU2_TR(0x4a6505);
if(r1(R+514)){{goto L4a6552;}}
}
B4a6507:L4a6507:{c.instructions+=4;NFSU2_TR(0x4a6507);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a650a:{NFSU2_TR(0x4a650a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4a650c:{NFSU2_TR(0x4a650c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a650e:{NFSU2_TR(0x4a650e);
if(r1(R+518)){{goto L4a6546;}}
}
B4a6510:L4a6510:{c.instructions+=3;NFSU2_TR(0x4a6510);
__builtin_memmove((R+8),(R+12),4);
}
B4a6512:{NFSU2_TR(0x4a6512);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B4a6518:{NFSU2_TR(0x4a6518);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4a651f;}}
}
B4a651a:L4a651a:{c.instructions+=3;NFSU2_TR(0x4a651a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4a651b:{NFSU2_TR(0x4a651b);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffffeull))));
}
B4a651e:{NFSU2_TR(0x4a651e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B4a651f:L4a651f:{c.instructions+=1;NFSU2_TR(0x4a651f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a6546;}}
}
B4a6521:L4a6521:{c.instructions+=6;NFSU2_TR(0x4a6521);
__builtin_memmove((R+0),(R+12),4);
}
B4a6523:{NFSU2_TR(0x4a6523);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B4a6524:{NFSU2_TR(0x4a6524);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B4a6526:{NFSU2_TR(0x4a6526);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B4a6528:{NFSU2_TR(0x4a6528);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a652a:{NFSU2_TR(0x4a652a);
if(r1(R+518)){{goto L4a653f;}}
}
B4a652c:L4a652c:{c.instructions+=2;NFSU2_TR(0x4a652c);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a652e:{NFSU2_TR(0x4a652e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a6533ull));
TAIL_STATIC(0x458520u,458);
}
B4a6533:L4a6533:{c.instructions+=2;NFSU2_TR(0x4a6533);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a653a:{NFSU2_TR(0x4a653a);
{goto L4a6619;}
}
B4a653f:L4a653f:{c.instructions+=2;NFSU2_TR(0x4a653f);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6541:{NFSU2_TR(0x4a6541);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a6546ull));
TAIL_STATIC(0x458520u,458);
}
B4a6546:L4a6546:{c.instructions+=2;NFSU2_TR(0x4a6546);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a654d:{NFSU2_TR(0x4a654d);
{goto L4a6619;}
}
B4a6552:L4a6552:{c.instructions+=5;NFSU2_TR(0x4a6552);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6554:{NFSU2_TR(0x4a6554);
{u32 ea_=u32(r4(R+8)+u32(376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a655a:{NFSU2_TR(0x4a655a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a655c:{NFSU2_TR(0x4a655c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a655f:{NFSU2_TR(0x4a655f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a656f;}}
}
B4a6561:L4a6561:{c.instructions+=3;NFSU2_TR(0x4a6561);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4a6563:{NFSU2_TR(0x4a6563);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a656a:{NFSU2_TR(0x4a656a);
{goto L4a6619;}
}
B4a656f:L4a656f:{c.instructions+=6;NFSU2_TR(0x4a656f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6573:{NFSU2_TR(0x4a6573);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6577:{NFSU2_TR(0x4a6577);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a6579:{NFSU2_TR(0x4a6579);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a657b:{NFSU2_TR(0x4a657b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a657e:{NFSU2_TR(0x4a657e);
if(r1(R+514)){{goto L4a658a;}}
}
B4a6580:L4a6580:{c.instructions+=2;NFSU2_TR(0x4a6580);
w4(R+28,u32(0x1ull));
}
B4a6585:{NFSU2_TR(0x4a6585);
{goto L4a6619;}
}
B4a658a:L4a658a:{c.instructions+=5;NFSU2_TR(0x4a658a);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a658c:{NFSU2_TR(0x4a658c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a6590:{NFSU2_TR(0x4a6590);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a6592:{NFSU2_TR(0x4a6592);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a6595:{NFSU2_TR(0x4a6595);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a65bb;}}
}
B4a6597:L4a6597:{c.instructions+=3;NFSU2_TR(0x4a6597);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4a659a:{NFSU2_TR(0x4a659a);
__builtin_memmove((R+28),(R+20),4);
}
B4a659c:{NFSU2_TR(0x4a659c);
if(r1(R+518)){{goto L4a6619;}}
}
B4a659e:L4a659e:{c.instructions+=3;NFSU2_TR(0x4a659e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a65a2:{NFSU2_TR(0x4a65a2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a65a5:{NFSU2_TR(0x4a65a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a65e4;}}
}
B4a65a7:L4a65a7:{c.instructions+=3;NFSU2_TR(0x4a65a7);
__builtin_memmove((R+0),(R+12),4);
}
B4a65a9:{NFSU2_TR(0x4a65a9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4a65ae:{NFSU2_TR(0x4a65ae);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4a65b5;}}
}
B4a65b0:L4a65b0:{c.instructions+=3;NFSU2_TR(0x4a65b0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4a65b1:{NFSU2_TR(0x4a65b1);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xfffffffeull))));
}
B4a65b4:{NFSU2_TR(0x4a65b4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4a65b5:L4a65b5:{c.instructions+=1;NFSU2_TR(0x4a65b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a6619;}}
}
B4a65b7:L4a65b7:{c.instructions+=2;NFSU2_TR(0x4a65b7);
u8 U[4];
w4(U+0,u32(0x59ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a65b9:{NFSU2_TR(0x4a65b9);
{goto L4a6614;}
}
B4a65bb:L4a65bb:{c.instructions+=4;NFSU2_TR(0x4a65bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a65be:{NFSU2_TR(0x4a65be);
w4(R+28,u32(0x3ull));
}
B4a65c3:{NFSU2_TR(0x4a65c3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a65c5:{NFSU2_TR(0x4a65c5);
if(r1(R+518)){{goto L4a6619;}}
}
B4a65c7:L4a65c7:{c.instructions+=3;NFSU2_TR(0x4a65c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a65cb:{NFSU2_TR(0x4a65cb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a65ce:{NFSU2_TR(0x4a65ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a65fd;}}
}
B4a65d0:L4a65d0:{c.instructions+=3;NFSU2_TR(0x4a65d0);
__builtin_memmove((R+0),(R+12),4);
}
B4a65d2:{NFSU2_TR(0x4a65d2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4a65d7:{NFSU2_TR(0x4a65d7);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4a65de;}}
}
B4a65d9:L4a65d9:{c.instructions+=3;NFSU2_TR(0x4a65d9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4a65da:{NFSU2_TR(0x4a65da);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xfffffffeull))));
}
B4a65dd:{NFSU2_TR(0x4a65dd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4a65de:L4a65de:{c.instructions+=1;NFSU2_TR(0x4a65de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a6619;}}
}
B4a65e0:L4a65e0:{c.instructions+=2;NFSU2_TR(0x4a65e0);
u8 U[4];
w4(U+0,u32(0x5aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a65e2:{NFSU2_TR(0x4a65e2);
{goto L4a6614;}
}
B4a65e4:L4a65e4:{c.instructions+=2;NFSU2_TR(0x4a65e4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a65e6:{NFSU2_TR(0x4a65e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a6619;}}
}
B4a65e8:L4a65e8:{c.instructions+=3;NFSU2_TR(0x4a65e8);
__builtin_memmove((R+8),(R+12),4);
}
B4a65ea:{NFSU2_TR(0x4a65ea);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B4a65f0:{NFSU2_TR(0x4a65f0);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4a65f7;}}
}
B4a65f2:L4a65f2:{c.instructions+=3;NFSU2_TR(0x4a65f2);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4a65f3:{NFSU2_TR(0x4a65f3);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffffeull))));
}
B4a65f6:{NFSU2_TR(0x4a65f6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B4a65f7:L4a65f7:{c.instructions+=1;NFSU2_TR(0x4a65f7);
if(r1(R+518)){{goto L4a6619;}}
}
B4a65f9:L4a65f9:{c.instructions+=2;NFSU2_TR(0x4a65f9);
u8 U[4];
w4(U+0,u32(0x5bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a65fb:{NFSU2_TR(0x4a65fb);
{goto L4a6614;}
}
B4a65fd:L4a65fd:{c.instructions+=2;NFSU2_TR(0x4a65fd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a65ff:{NFSU2_TR(0x4a65ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a6619;}}
}
B4a6601:L4a6601:{c.instructions+=3;NFSU2_TR(0x4a6601);
__builtin_memmove((R+8),(R+12),4);
}
B4a6603:{NFSU2_TR(0x4a6603);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B4a6609:{NFSU2_TR(0x4a6609);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4a6610;}}
}
B4a660b:L4a660b:{c.instructions+=3;NFSU2_TR(0x4a660b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4a660c:{NFSU2_TR(0x4a660c);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffffeull))));
}
B4a660f:{NFSU2_TR(0x4a660f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B4a6610:L4a6610:{c.instructions+=1;NFSU2_TR(0x4a6610);
if(r1(R+518)){{goto L4a6619;}}
}
B4a6612:L4a6612:{c.instructions+=1;NFSU2_TR(0x4a6612);
u8 U[4];
w4(U+0,u32(0x5dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6614:L4a6614:{c.instructions+=1;NFSU2_TR(0x4a6614);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a6619ull));
TAIL_STATIC(0x458520u,458);
}
B4a6619:L4a6619:{c.instructions+=3;NFSU2_TR(0x4a6619);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a661d:{NFSU2_TR(0x4a661d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6620:{NFSU2_TR(0x4a6620);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4a6626:L4a6626:{c.instructions+=4;NFSU2_TR(0x4a6626);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4a6627:{NFSU2_TR(0x4a6627);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B4a662a:{NFSU2_TR(0x4a662a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a662d:{NFSU2_TR(0x4a662d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a64a0u);}goto L4a64a0;}}
}
B4a6633:L4a6633:{c.instructions+=16;NFSU2_TR(0x4a6633);
{u32 ea_=u32(r4(R+8)+u32(392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6639:{NFSU2_TR(0x4a6639);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a663d:{NFSU2_TR(0x4a663d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a663f:{NFSU2_TR(0x4a663f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a6640:{NFSU2_TR(0x4a6640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a6641:{NFSU2_TR(0x4a6641);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a6642:{NFSU2_TR(0x4a6642);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6648:{NFSU2_TR(0x4a6648);
{u32 ea_=u32(r4(R+8)+u32(400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a664e:{NFSU2_TR(0x4a664e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a664f:{NFSU2_TR(0x4a664f);
{u32 ea_=u32(r4(R+8)+u32(396u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6655:{NFSU2_TR(0x4a6655);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a665b:{NFSU2_TR(0x4a665b);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4a665d:{NFSU2_TR(0x4a665d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6661:{NFSU2_TR(0x4a6661);
{u32 ea_=u32(r4(R+8)+u32(380u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6667:{NFSU2_TR(0x4a6667);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x50ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a666a:{NFSU2_TR(0x4a666a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a6670:L4a6670:{c.instructions+=11;NFSU2_TR(0x4a6670);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6671:{NFSU2_TR(0x4a6671);
__builtin_memmove((R+20),(R+16),4);
}
B4a6673:{NFSU2_TR(0x4a6673);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4a6676:{NFSU2_TR(0x4a6676);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3b4ull))));
}
B4a667c:{NFSU2_TR(0x4a667c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a667d:{NFSU2_TR(0x4a667d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a6680:{NFSU2_TR(0x4a6680);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
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
B4a6684:{NFSU2_TR(0x4a6684);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6685:{NFSU2_TR(0x4a6685);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6686:{NFSU2_TR(0x4a6686);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a668a:{NFSU2_TR(0x4a668a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a669f;}}
}
B4a668c:L4a668c:{c.instructions+=7;NFSU2_TR(0x4a668c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb64ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6696:{NFSU2_TR(0x4a6696);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a6697:{NFSU2_TR(0x4a6697);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a6698:{NFSU2_TR(0x4a6698);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a6699:{NFSU2_TR(0x4a6699);
__builtin_memmove((R+16),(R+20),4);
}
B4a669b:{NFSU2_TR(0x4a669b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a669c:{NFSU2_TR(0x4a669c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a669f:L4a669f:{c.instructions+=3;NFSU2_TR(0x4a669f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a66a1:{NFSU2_TR(0x4a66a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a66a4:{NFSU2_TR(0x4a66a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a66a9ull));
TAIL_STATIC(0x5b5350u,5b5);
}
B4a66a9:L4a66a9:{c.instructions+=52;NFSU2_TR(0x4a66a9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4a66ab:{NFSU2_TR(0x4a66ab);
__builtin_memmove((R+24),(R+0),4);
}
B4a66ad:{NFSU2_TR(0x4a66ad);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a66b0:{NFSU2_TR(0x4a66b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4a66b3:{NFSU2_TR(0x4a66b3);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a66b5:{NFSU2_TR(0x4a66b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a66bc:{NFSU2_TR(0x4a66bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a66bf:{NFSU2_TR(0x4a66bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4a66c2:{NFSU2_TR(0x4a66c2);
{u32 ea_=u32(u32(8340904u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a66c8:{NFSU2_TR(0x4a66c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4a66cb:{NFSU2_TR(0x4a66cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a66d1:{NFSU2_TR(0x4a66d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a66d7:{NFSU2_TR(0x4a66d7);
{u32 ea_=u32(r4(R+0)+u32(8340912u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a66dd:{NFSU2_TR(0x4a66dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7f45acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a66e3:{NFSU2_TR(0x4a66e3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a66e7:{NFSU2_TR(0x4a66e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a66f2:{NFSU2_TR(0x4a66f2);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a66f6:{NFSU2_TR(0x4a66f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a66fd:{NFSU2_TR(0x4a66fd);
{u32 ea_=u32(u32(8610800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6703:{NFSU2_TR(0x4a6703);
u8 U[8];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a670a:{NFSU2_TR(0x4a670a);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6710:{NFSU2_TR(0x4a6710);
u8 U[8];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6717:{NFSU2_TR(0x4a6717);
u8 U[8];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a671e:{NFSU2_TR(0x4a671e);
u8 U[8];
w4(U+0,u32(u32(u32(0x154ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6729:{NFSU2_TR(0x4a6729);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6730:{NFSU2_TR(0x4a6730);
u8 U[8];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6737:{NFSU2_TR(0x4a6737);
u8 U[8];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a673e:{NFSU2_TR(0x4a673e);
u8 U[8];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6745:{NFSU2_TR(0x4a6745);
u8 U[8];
w4(U+0,u32(u32(u32(0x168ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6750:{NFSU2_TR(0x4a6750);
u8 U[8];
w4(U+0,u32(u32(u32(0x16cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6757:{NFSU2_TR(0x4a6757);
u8 U[8];
w4(U+0,u32(u32(u32(0x170ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a675e:{NFSU2_TR(0x4a675e);
u8 U[8];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6765:{NFSU2_TR(0x4a6765);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a676c:{NFSU2_TR(0x4a676c);
u8 U[8];
w4(U+0,u32(u32(u32(0x17cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6777:{NFSU2_TR(0x4a6777);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a677b:{NFSU2_TR(0x4a677b);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6786:{NFSU2_TR(0x4a6786);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a678d:{NFSU2_TR(0x4a678d);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6794:{NFSU2_TR(0x4a6794);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a679b:{NFSU2_TR(0x4a679b);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a67a2:{NFSU2_TR(0x4a67a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a67ad:{NFSU2_TR(0x4a67ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a67b4:{NFSU2_TR(0x4a67b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a67bb:{NFSU2_TR(0x4a67bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a67c2:{NFSU2_TR(0x4a67c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a67c9:{NFSU2_TR(0x4a67c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a67d4:{NFSU2_TR(0x4a67d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a67db:{NFSU2_TR(0x4a67db);
u8 U[8];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a67e2:{NFSU2_TR(0x4a67e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a67e9:{NFSU2_TR(0x4a67e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a67f0:{NFSU2_TR(0x4a67f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a67fb:{NFSU2_TR(0x4a67fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a6800ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4a6800:L4a6800:{c.instructions+=14;NFSU2_TR(0x4a6800);
__builtin_memmove((R+4),(R+0),4);
}
B4a6802:{NFSU2_TR(0x4a6802);
w4(R+0,u32(0xb60b60b7ull));
}
B4a6807:{NFSU2_TR(0x4a6807);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B4a6809:{NFSU2_TR(0x4a6809);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4a680b:{NFSU2_TR(0x4a680b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B4a680e:{NFSU2_TR(0x4a680e);
__builtin_memmove((R+0),(R+8),4);
}
B4a6810:{NFSU2_TR(0x4a6810);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B4a6813:{NFSU2_TR(0x4a6813);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B4a6815:{NFSU2_TR(0x4a6815);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6816:{NFSU2_TR(0x4a6816);
u8 U[4];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a681d:{NFSU2_TR(0x4a681d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a681e:{NFSU2_TR(0x4a681e);
u8 U[4];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a6825:{NFSU2_TR(0x4a6825);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6826:{NFSU2_TR(0x4a6826);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a682bull));
TAIL_STATIC(0x5bae60u,5ba);
}
B4a682b:L4a682b:{c.instructions+=40;NFSU2_TR(0x4a682b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a682e:{NFSU2_TR(0x4a682e);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6835:{NFSU2_TR(0x4a6835);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6839:{NFSU2_TR(0x4a6839);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a683d:{NFSU2_TR(0x4a683d);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6844:{NFSU2_TR(0x4a6844);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6846:{NFSU2_TR(0x4a6846);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a684d:{NFSU2_TR(0x4a684d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6851:{NFSU2_TR(0x4a6851);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6853:{NFSU2_TR(0x4a6853);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a685a:{NFSU2_TR(0x4a685a);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6861:{NFSU2_TR(0x4a6861);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6865:{NFSU2_TR(0x4a6865);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a6869:{NFSU2_TR(0x4a6869);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6870:{NFSU2_TR(0x4a6870);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6874:{NFSU2_TR(0x4a6874);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6876:{NFSU2_TR(0x4a6876);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a687d:{NFSU2_TR(0x4a687d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6881:{NFSU2_TR(0x4a6881);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6883:{NFSU2_TR(0x4a6883);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a688a:{NFSU2_TR(0x4a688a);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6891:{NFSU2_TR(0x4a6891);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6895:{NFSU2_TR(0x4a6895);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a689c:{NFSU2_TR(0x4a689c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a68a0:{NFSU2_TR(0x4a68a0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a68a2:{NFSU2_TR(0x4a68a2);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a68a9:{NFSU2_TR(0x4a68a9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a68ad:{NFSU2_TR(0x4a68ad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a68af:{NFSU2_TR(0x4a68af);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a68b6:{NFSU2_TR(0x4a68b6);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a68bd:{NFSU2_TR(0x4a68bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a68c4:{NFSU2_TR(0x4a68c4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4a68c6:{NFSU2_TR(0x4a68c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a68ca:{NFSU2_TR(0x4a68ca);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a68ce:{NFSU2_TR(0x4a68ce);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a68d2:{NFSU2_TR(0x4a68d2);
{u32 ea_=u32(r4(R+4)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a68d8:{NFSU2_TR(0x4a68d8);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4a68de:{NFSU2_TR(0x4a68de);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a68e0:{NFSU2_TR(0x4a68e0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a68e3:{NFSU2_TR(0x4a68e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a6903;}}
}
B4a68e5:L4a68e5:{c.instructions+=1;NFSU2_TR(0x4a68e5);
{goto L4a68f0;}
}
B4a68f0:L4a68f0:{c.instructions+=5;NFSU2_TR(0x4a68f0);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a68f6:{NFSU2_TR(0x4a68f6);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4a68fc:{NFSU2_TR(0x4a68fc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a68fe:{NFSU2_TR(0x4a68fe);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a6901:{NFSU2_TR(0x4a6901);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a68f0u);}goto L4a68f0;}}
}
B4a6903:L4a6903:{c.instructions+=4;NFSU2_TR(0x4a6903);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4a6909:{NFSU2_TR(0x4a6909);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a690b:{NFSU2_TR(0x4a690b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a690e:{NFSU2_TR(0x4a690e);
if(r1(R+514)){{goto L4a6923;}}
}
B4a6910:L4a6910:{c.instructions+=5;NFSU2_TR(0x4a6910);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6916:{NFSU2_TR(0x4a6916);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4a691c:{NFSU2_TR(0x4a691c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a691e:{NFSU2_TR(0x4a691e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a6921:{NFSU2_TR(0x4a6921);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a6910u);}goto L4a6910;}}
}
B4a6923:L4a6923:{c.instructions+=18;NFSU2_TR(0x4a6923);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6929:{NFSU2_TR(0x4a6929);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6931:{NFSU2_TR(0x4a6931);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6939:{NFSU2_TR(0x4a6939);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6941:{NFSU2_TR(0x4a6941);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6949:{NFSU2_TR(0x4a6949);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6951:{NFSU2_TR(0x4a6951);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6959:{NFSU2_TR(0x4a6959);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6961:{NFSU2_TR(0x4a6961);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6969:{NFSU2_TR(0x4a6969);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6971:{NFSU2_TR(0x4a6971);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6979:{NFSU2_TR(0x4a6979);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6981:{NFSU2_TR(0x4a6981);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6989:{NFSU2_TR(0x4a6989);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6991:{NFSU2_TR(0x4a6991);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6999:{NFSU2_TR(0x4a6999);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a69a1:{NFSU2_TR(0x4a69a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a69a9:{NFSU2_TR(0x4a69a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a69aeull));
TAIL_STATIC(0x75bed4u,75b);
}
B4a69ae:L4a69ae:{c.instructions+=14;NFSU2_TR(0x4a69ae);
__builtin_memmove((R+4),(R+0),4);
}
B4a69b0:{NFSU2_TR(0x4a69b0);
w4(R+0,u32(0xb60b60b7ull));
}
B4a69b5:{NFSU2_TR(0x4a69b5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B4a69b7:{NFSU2_TR(0x4a69b7);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4a69b9:{NFSU2_TR(0x4a69b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B4a69bc:{NFSU2_TR(0x4a69bc);
__builtin_memmove((R+0),(R+8),4);
}
B4a69be:{NFSU2_TR(0x4a69be);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B4a69c1:{NFSU2_TR(0x4a69c1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B4a69c3:{NFSU2_TR(0x4a69c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a69c4:{NFSU2_TR(0x4a69c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a69c8:{NFSU2_TR(0x4a69c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a69c9:{NFSU2_TR(0x4a69c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a69cd:{NFSU2_TR(0x4a69cd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a69ce:{NFSU2_TR(0x4a69ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a69d3ull));
TAIL_STATIC(0x5bae60u,5ba);
}
B4a69d3:L4a69d3:{c.instructions+=14;NFSU2_TR(0x4a69d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a69d7:{NFSU2_TR(0x4a69d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a69db:{NFSU2_TR(0x4a69db);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a69df:{NFSU2_TR(0x4a69df);
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a69e2:{NFSU2_TR(0x4a69e2);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a69e7:{NFSU2_TR(0x4a69e7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a69e9:{NFSU2_TR(0x4a69e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a69ed:{NFSU2_TR(0x4a69ed);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a69ef:{NFSU2_TR(0x4a69ef);
u8 U[4];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a69f6:{NFSU2_TR(0x4a69f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a69f7:{NFSU2_TR(0x4a69f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a69fe:{NFSU2_TR(0x4a69fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6a05:{NFSU2_TR(0x4a6a05);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6a10:{NFSU2_TR(0x4a6a10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a6a15ull));
TAIL_STATIC(0x401650u,401);
}
B4a6a15:L4a6a15:{c.instructions+=178;NFSU2_TR(0x4a6a15);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6a19:{NFSU2_TR(0x4a6a19);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a6a20:{NFSU2_TR(0x4a6a20);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6a23:{NFSU2_TR(0x4a6a23);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a6a27:{NFSU2_TR(0x4a6a27);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6a2b:{NFSU2_TR(0x4a6a2b);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6a2e:{NFSU2_TR(0x4a6a2e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6a30:{NFSU2_TR(0x4a6a30);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6a34:{NFSU2_TR(0x4a6a34);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6a37:{NFSU2_TR(0x4a6a37);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6a39:{NFSU2_TR(0x4a6a39);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6a3d:{NFSU2_TR(0x4a6a3d);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6a41:{NFSU2_TR(0x4a6a41);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6a44:{NFSU2_TR(0x4a6a44);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6a48:{NFSU2_TR(0x4a6a48);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6a4b:{NFSU2_TR(0x4a6a4b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6a4d:{NFSU2_TR(0x4a6a4d);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6a51:{NFSU2_TR(0x4a6a51);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6a54:{NFSU2_TR(0x4a6a54);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6a56:{NFSU2_TR(0x4a6a56);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6a5a:{NFSU2_TR(0x4a6a5a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4a6a5c:{NFSU2_TR(0x4a6a5c);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6a63:{NFSU2_TR(0x4a6a63);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6a6a:{NFSU2_TR(0x4a6a6a);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6a6d:{NFSU2_TR(0x4a6a6d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6a6f:{NFSU2_TR(0x4a6a6f);
{u32 ea_=u32(u32(8340904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6a75:{NFSU2_TR(0x4a6a75);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x184ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a6a7b:{NFSU2_TR(0x4a6a7b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6a7d:{NFSU2_TR(0x4a6a7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6a81:{NFSU2_TR(0x4a6a81);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4a6a88:{NFSU2_TR(0x4a6a88);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6a8c:{NFSU2_TR(0x4a6a8c);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6a8f:{NFSU2_TR(0x4a6a8f);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6a93:{NFSU2_TR(0x4a6a93);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6a96:{NFSU2_TR(0x4a6a96);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6a98:{NFSU2_TR(0x4a6a98);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6a9c:{NFSU2_TR(0x4a6a9c);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6a9f:{NFSU2_TR(0x4a6a9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6aa1:{NFSU2_TR(0x4a6aa1);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6aa5:{NFSU2_TR(0x4a6aa5);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6aa9:{NFSU2_TR(0x4a6aa9);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6aac:{NFSU2_TR(0x4a6aac);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6ab0:{NFSU2_TR(0x4a6ab0);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6ab3:{NFSU2_TR(0x4a6ab3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6ab5:{NFSU2_TR(0x4a6ab5);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6ab9:{NFSU2_TR(0x4a6ab9);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6abc:{NFSU2_TR(0x4a6abc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6abe:{NFSU2_TR(0x4a6abe);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6ac2:{NFSU2_TR(0x4a6ac2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4a6ac4:{NFSU2_TR(0x4a6ac4);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6acb:{NFSU2_TR(0x4a6acb);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6ad2:{NFSU2_TR(0x4a6ad2);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6ad5:{NFSU2_TR(0x4a6ad5);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6ad8:{NFSU2_TR(0x4a6ad8);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B4a6ada:{NFSU2_TR(0x4a6ada);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6ade:{NFSU2_TR(0x4a6ade);
{u32 ea_=u32(u32(8340904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6ae4:{NFSU2_TR(0x4a6ae4);
{u32 ea_=u32(r4(R+0)+u32(392u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6aea:{NFSU2_TR(0x4a6aea);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4a6af1:{NFSU2_TR(0x4a6af1);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B4a6af3:{NFSU2_TR(0x4a6af3);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B4a6af5:{NFSU2_TR(0x4a6af5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a6af7:{NFSU2_TR(0x4a6af7);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6afb:{NFSU2_TR(0x4a6afb);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6afe:{NFSU2_TR(0x4a6afe);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b02:{NFSU2_TR(0x4a6b02);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6b05:{NFSU2_TR(0x4a6b05);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6b07:{NFSU2_TR(0x4a6b07);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b0b:{NFSU2_TR(0x4a6b0b);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6b0e:{NFSU2_TR(0x4a6b0e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6b10:{NFSU2_TR(0x4a6b10);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6b14:{NFSU2_TR(0x4a6b14);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b18:{NFSU2_TR(0x4a6b18);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6b1b:{NFSU2_TR(0x4a6b1b);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b1f:{NFSU2_TR(0x4a6b1f);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6b22:{NFSU2_TR(0x4a6b22);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6b24:{NFSU2_TR(0x4a6b24);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b28:{NFSU2_TR(0x4a6b28);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6b2b:{NFSU2_TR(0x4a6b2b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6b2d:{NFSU2_TR(0x4a6b2d);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6b31:{NFSU2_TR(0x4a6b31);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4a6b33:{NFSU2_TR(0x4a6b33);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6b3a:{NFSU2_TR(0x4a6b3a);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6b41:{NFSU2_TR(0x4a6b41);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b47:{NFSU2_TR(0x4a6b47);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6b4a:{NFSU2_TR(0x4a6b4a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6b4e:{NFSU2_TR(0x4a6b4e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6b52:{NFSU2_TR(0x4a6b52);
{u32 ea_=u32(u32(8340904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b58:{NFSU2_TR(0x4a6b58);
{u32 ea_=u32(r4(R+0)+u32(396u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6b5e:{NFSU2_TR(0x4a6b5e);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4a6b65:{NFSU2_TR(0x4a6b65);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6b67:{NFSU2_TR(0x4a6b67);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b6b:{NFSU2_TR(0x4a6b6b);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6b71:{NFSU2_TR(0x4a6b71);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b75:{NFSU2_TR(0x4a6b75);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6b7b:{NFSU2_TR(0x4a6b7b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6b7d:{NFSU2_TR(0x4a6b7d);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b81:{NFSU2_TR(0x4a6b81);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6b87:{NFSU2_TR(0x4a6b87);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6b89:{NFSU2_TR(0x4a6b89);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6b8d:{NFSU2_TR(0x4a6b8d);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b91:{NFSU2_TR(0x4a6b91);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6b97:{NFSU2_TR(0x4a6b97);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b9b:{NFSU2_TR(0x4a6b9b);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6ba1:{NFSU2_TR(0x4a6ba1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6ba3:{NFSU2_TR(0x4a6ba3);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6ba7:{NFSU2_TR(0x4a6ba7);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6bad:{NFSU2_TR(0x4a6bad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6baf:{NFSU2_TR(0x4a6baf);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6bb3:{NFSU2_TR(0x4a6bb3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4a6bb5:{NFSU2_TR(0x4a6bb5);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6bbc:{NFSU2_TR(0x4a6bbc);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6bc3:{NFSU2_TR(0x4a6bc3);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6bc9:{NFSU2_TR(0x4a6bc9);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6bcf:{NFSU2_TR(0x4a6bcf);
u8 U[4];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a6bd6:{NFSU2_TR(0x4a6bd6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6bd7:{NFSU2_TR(0x4a6bd7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6bdb:{NFSU2_TR(0x4a6bdb);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6bdf:{NFSU2_TR(0x4a6bdf);
{u32 ea_=u32(u32(8340904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6be5:{NFSU2_TR(0x4a6be5);
{u32 ea_=u32(r4(R+0)+u32(400u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6beb:{NFSU2_TR(0x4a6beb);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4a6bf2:{NFSU2_TR(0x4a6bf2);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B4a6bf4:{NFSU2_TR(0x4a6bf4);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6bf8:{NFSU2_TR(0x4a6bf8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a6bfa:{NFSU2_TR(0x4a6bfa);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6c01:{NFSU2_TR(0x4a6c01);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6c08:{NFSU2_TR(0x4a6c08);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6c0f:{NFSU2_TR(0x4a6c0f);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6c16:{NFSU2_TR(0x4a6c16);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6c1d:{NFSU2_TR(0x4a6c1d);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6c24:{NFSU2_TR(0x4a6c24);
{u32 ea_=u32(r4(R+16)+u32(444u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6c2b:{NFSU2_TR(0x4a6c2b);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6c32:{NFSU2_TR(0x4a6c32);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6c39:{NFSU2_TR(0x4a6c39);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6c40:{NFSU2_TR(0x4a6c40);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6c47:{NFSU2_TR(0x4a6c47);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6c4e:{NFSU2_TR(0x4a6c4e);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6c55:{NFSU2_TR(0x4a6c55);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6c5c:{NFSU2_TR(0x4a6c5c);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6c63:{NFSU2_TR(0x4a6c63);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6c6a:{NFSU2_TR(0x4a6c6a);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6c71:{NFSU2_TR(0x4a6c71);
{u32 ea_=u32(r4(R+16)+u32(388u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6c78:{NFSU2_TR(0x4a6c78);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6c7f:{NFSU2_TR(0x4a6c7f);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6c86:{NFSU2_TR(0x4a6c86);
{u32 ea_=u32(r4(R+16)+u32(392u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6c8d:{NFSU2_TR(0x4a6c8d);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6c94:{NFSU2_TR(0x4a6c94);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6c9b:{NFSU2_TR(0x4a6c9b);
{u32 ea_=u32(r4(R+16)+u32(396u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6ca2:{NFSU2_TR(0x4a6ca2);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6ca9:{NFSU2_TR(0x4a6ca9);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6cb0:{NFSU2_TR(0x4a6cb0);
{u32 ea_=u32(r4(R+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6cb7:{NFSU2_TR(0x4a6cb7);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6cbe:{NFSU2_TR(0x4a6cbe);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6cc5:{NFSU2_TR(0x4a6cc5);
{u32 ea_=u32(r4(R+16)+u32(408u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6ccc:{NFSU2_TR(0x4a6ccc);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6cd3:{NFSU2_TR(0x4a6cd3);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6cda:{NFSU2_TR(0x4a6cda);
{u32 ea_=u32(r4(R+16)+u32(412u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6ce1:{NFSU2_TR(0x4a6ce1);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B4a6ce3:{NFSU2_TR(0x4a6ce3);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6cea:{NFSU2_TR(0x4a6cea);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6cf1:{NFSU2_TR(0x4a6cf1);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B4a6cf3:{NFSU2_TR(0x4a6cf3);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6cfa:{NFSU2_TR(0x4a6cfa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a6cfc:{NFSU2_TR(0x4a6cfc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a6cfe:{NFSU2_TR(0x4a6cfe);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6d05:{NFSU2_TR(0x4a6d05);
{u32 ea_=u32(r4(R+16)+u32(444u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6d0c:{NFSU2_TR(0x4a6d0c);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6d13:{NFSU2_TR(0x4a6d13);
{u32 ea_=u32(r4(R+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6d1a:{NFSU2_TR(0x4a6d1a);
{u32 ea_=u32(r4(R+16)+u32(388u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6d21:{NFSU2_TR(0x4a6d21);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6d28:{NFSU2_TR(0x4a6d28);
{u32 ea_=u32(r4(R+16)+u32(408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6d2f:{NFSU2_TR(0x4a6d2f);
{u32 ea_=u32(r4(R+16)+u32(392u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6d36:{NFSU2_TR(0x4a6d36);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6d3d:{NFSU2_TR(0x4a6d3d);
{u32 ea_=u32(r4(R+16)+u32(412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6d44:{NFSU2_TR(0x4a6d44);
{u32 ea_=u32(r4(R+16)+u32(396u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6d4b:{NFSU2_TR(0x4a6d4b);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6d52:{NFSU2_TR(0x4a6d52);
u8 U[4];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a6d59:{NFSU2_TR(0x4a6d59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6d5a:{NFSU2_TR(0x4a6d5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a6d5full));
TAIL_STATIC(0x43cf10u,43c);
}
B4a6d5f:L4a6d5f:{c.instructions+=5;NFSU2_TR(0x4a6d5f);
u8 U[4];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a6d66:{NFSU2_TR(0x4a6d66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6d67:{NFSU2_TR(0x4a6d67);
u8 U[4];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a6d6e:{NFSU2_TR(0x4a6d6e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6d6f:{NFSU2_TR(0x4a6d6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a6d74ull));
TAIL_STATIC(0x43cf10u,43c);
}
B4a6d74:L4a6d74:{c.instructions+=7;NFSU2_TR(0x4a6d74);
u8 U[4];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a6d7b:{NFSU2_TR(0x4a6d7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6d7c:{NFSU2_TR(0x4a6d7c);
u8 U[4];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a6d83:{NFSU2_TR(0x4a6d83);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6d84:{NFSU2_TR(0x4a6d84);
u8 U[4];
w4(U+0,u32(u32(u32(0x1b8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a6d8b:{NFSU2_TR(0x4a6d8b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6d8c:{NFSU2_TR(0x4a6d8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a6d91ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B4a6d91:L4a6d91:{c.instructions+=37;NFSU2_TR(0x4a6d91);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6d95:{NFSU2_TR(0x4a6d95);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6d9b:{NFSU2_TR(0x4a6d9b);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a6da2:{NFSU2_TR(0x4a6da2);
{u32 ea_=u32(r4(R+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6da9:{NFSU2_TR(0x4a6da9);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a6db0:{NFSU2_TR(0x4a6db0);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4a6db2:{NFSU2_TR(0x4a6db2);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a6db9:{NFSU2_TR(0x4a6db9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4a6dbb:{NFSU2_TR(0x4a6dbb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4a6dbd:{NFSU2_TR(0x4a6dbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6dc4:{NFSU2_TR(0x4a6dc4);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B4a6dc6:{NFSU2_TR(0x4a6dc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a6dcd:{NFSU2_TR(0x4a6dcd);
u8 U[8];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6dd4:{NFSU2_TR(0x4a6dd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a6ddb:{NFSU2_TR(0x4a6ddb);
u8 U[8];
w4(U+0,u32(u32(u32(0x16cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6de2:{NFSU2_TR(0x4a6de2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1bcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a6de9:{NFSU2_TR(0x4a6de9);
u8 U[8];
w4(U+0,u32(u32(u32(0x170ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6df0:{NFSU2_TR(0x4a6df0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1c0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a6df7:{NFSU2_TR(0x4a6df7);
u8 U[8];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6dfe:{NFSU2_TR(0x4a6dfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a6e05:{NFSU2_TR(0x4a6e05);
u8 U[8];
w4(U+0,u32(u32(u32(0x17cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6e0c:{NFSU2_TR(0x4a6e0c);
u8 U[4];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a6e13:{NFSU2_TR(0x4a6e13);
u8 U[8];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6e1a:{NFSU2_TR(0x4a6e1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6e21:{NFSU2_TR(0x4a6e21);
u8 U[8];
w4(U+0,u32(u32(u32(0x1c4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a6e28:{NFSU2_TR(0x4a6e28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6e29:{NFSU2_TR(0x4a6e29);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x920ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a6e2f:{NFSU2_TR(0x4a6e2f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6e30:{NFSU2_TR(0x4a6e30);
u8 U[8];
w4(U+0,u32(u32(u32(0x170ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6e3b:{NFSU2_TR(0x4a6e3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6e46:{NFSU2_TR(0x4a6e46);
u8 U[8];
w4(U+0,u32(u32(u32(0x18cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6e4d:{NFSU2_TR(0x4a6e4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6e58:{NFSU2_TR(0x4a6e58);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6e5c:{NFSU2_TR(0x4a6e5c);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6e62:{NFSU2_TR(0x4a6e62);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6e64:{NFSU2_TR(0x4a6e64);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6e68:{NFSU2_TR(0x4a6e68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a6e6dull));
TAIL_STATIC(0x4012b0u,401);
}
B4a6e6d:L4a6e6d:{c.instructions+=10;NFSU2_TR(0x4a6e6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a6e71:{NFSU2_TR(0x4a6e71);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a6e75:{NFSU2_TR(0x4a6e75);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a6e79:{NFSU2_TR(0x4a6e79);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x910ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6e7f:{NFSU2_TR(0x4a6e7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x914ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6e85:{NFSU2_TR(0x4a6e85);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x918ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6e8b:{NFSU2_TR(0x4a6e8b);
{u32 ea_=u32(u32(8340900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6e91:{NFSU2_TR(0x4a6e91);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6e97:{NFSU2_TR(0x4a6e97);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4a6e9a:{NFSU2_TR(0x4a6e9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a6e9full));
TAIL_STATIC(0x75bed4u,75b);
}
B4a6e9f:L4a6e9f:{c.instructions+=50;NFSU2_TR(0x4a6e9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a6ea6:{NFSU2_TR(0x4a6ea6);
__builtin_memmove((R+4),(R+0),4);
}
B4a6ea8:{NFSU2_TR(0x4a6ea8);
w4(R+0,u32(0xb60b60b7ull));
}
B4a6ead:{NFSU2_TR(0x4a6ead);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B4a6eaf:{NFSU2_TR(0x4a6eaf);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4a6eb1:{NFSU2_TR(0x4a6eb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a6eb5:{NFSU2_TR(0x4a6eb5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B4a6eb8:{NFSU2_TR(0x4a6eb8);
__builtin_memmove((R+0),(R+8),4);
}
B4a6eba:{NFSU2_TR(0x4a6eba);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B4a6ebd:{NFSU2_TR(0x4a6ebd);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B4a6ebf:{NFSU2_TR(0x4a6ebf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6ec3:{NFSU2_TR(0x4a6ec3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6ec7:{NFSU2_TR(0x4a6ec7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4a6ec9:{NFSU2_TR(0x4a6ec9);
__builtin_memmove((R+16),(R+16),4);
}
B4a6ed0:{NFSU2_TR(0x4a6ed0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a6ed3:{NFSU2_TR(0x4a6ed3);
w4(R+4,u32(0x3f800000ull));
}
B4a6ed8:{NFSU2_TR(0x4a6ed8);
u8 U[12];
w4(U+0,u32(u32(u32(0x2c0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4a6edf:{NFSU2_TR(0x4a6edf);
u8 U[16];
w4(U+0,u32(u32(u32(0x1c0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6ee6:{NFSU2_TR(0x4a6ee6);
u8 U[16];
w4(U+0,u32(u32(u32(0x1c4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6eed:{NFSU2_TR(0x4a6eed);
u8 U[16];
w4(U+0,u32(u32(u32(0x1c8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6ef4:{NFSU2_TR(0x4a6ef4);
u8 U[16];
w4(U+0,u32(u32(u32(0x1ccull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6efb:{NFSU2_TR(0x4a6efb);
u8 U[16];
w4(U+0,u32(u32(u32(0x1d0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f02:{NFSU2_TR(0x4a6f02);
u8 U[16];
w4(U+0,u32(u32(u32(0x1d4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f09:{NFSU2_TR(0x4a6f09);
u8 U[16];
w4(U+0,u32(u32(u32(0x1d8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f10:{NFSU2_TR(0x4a6f10);
u8 U[16];
w4(U+0,u32(u32(u32(0x1dcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f17:{NFSU2_TR(0x4a6f17);
u8 U[16];
w4(U+0,u32(u32(u32(0x1e0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f1e:{NFSU2_TR(0x4a6f1e);
u8 U[16];
w4(U+0,u32(u32(u32(0x1e4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f25:{NFSU2_TR(0x4a6f25);
u8 U[16];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f2c:{NFSU2_TR(0x4a6f2c);
u8 U[16];
w4(U+0,u32(u32(u32(0x1ecull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f33:{NFSU2_TR(0x4a6f33);
u8 U[16];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f3a:{NFSU2_TR(0x4a6f3a);
u8 U[16];
w4(U+0,u32(u32(u32(0x1f4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f41:{NFSU2_TR(0x4a6f41);
u8 U[16];
w4(U+0,u32(u32(u32(0x1f8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f48:{NFSU2_TR(0x4a6f48);
u8 U[16];
w4(U+0,u32(u32(u32(0x1fcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f4f:{NFSU2_TR(0x4a6f4f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4a6f51:{NFSU2_TR(0x4a6f51);
u8 U[16];
w4(U+0,u32(u32(u32(0x2c4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f58:{NFSU2_TR(0x4a6f58);
u8 U[16];
w4(U+0,u32(u32(u32(0x2c8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f5f:{NFSU2_TR(0x4a6f5f);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ccull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f66:{NFSU2_TR(0x4a6f66);
u8 U[16];
w4(U+0,u32(u32(u32(0x2d0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f6d:{NFSU2_TR(0x4a6f6d);
u8 U[16];
w4(U+0,u32(u32(u32(0x2d4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f74:{NFSU2_TR(0x4a6f74);
u8 U[16];
w4(U+0,u32(u32(u32(0x2d8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f7b:{NFSU2_TR(0x4a6f7b);
u8 U[16];
w4(U+0,u32(u32(u32(0x2dcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f82:{NFSU2_TR(0x4a6f82);
u8 U[16];
w4(U+0,u32(u32(u32(0x2e0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f89:{NFSU2_TR(0x4a6f89);
u8 U[16];
w4(U+0,u32(u32(u32(0x2e4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f90:{NFSU2_TR(0x4a6f90);
u8 U[16];
w4(U+0,u32(u32(u32(0x2e8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f97:{NFSU2_TR(0x4a6f97);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ecull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f9e:{NFSU2_TR(0x4a6f9e);
u8 U[16];
w4(U+0,u32(u32(u32(0x2f0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6fa5:{NFSU2_TR(0x4a6fa5);
u8 U[16];
w4(U+0,u32(u32(u32(0x2f4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6fac:{NFSU2_TR(0x4a6fac);
u8 U[16];
w4(U+0,u32(u32(u32(0x2f8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6fb3:{NFSU2_TR(0x4a6fb3);
u8 U[16];
w4(U+0,u32(u32(u32(0x2fcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6fba:{NFSU2_TR(0x4a6fba);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4a6fe3;}}
}
B4a6fbc:L4a6fbc:{c.instructions+=5;NFSU2_TR(0x4a6fbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a6fc0:{NFSU2_TR(0x4a6fc0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6fc1:{NFSU2_TR(0x4a6fc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6fc2:{NFSU2_TR(0x4a6fc2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6fc3:{NFSU2_TR(0x4a6fc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a6fc8ull));
TAIL_STATIC(0x5bae60u,5ba);
}
B4a6fc8:L4a6fc8:{c.instructions+=6;NFSU2_TR(0x4a6fc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a6fcc:{NFSU2_TR(0x4a6fcc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6fcd:{NFSU2_TR(0x4a6fcd);
u8 U[12];
w4(U+0,u32(u32(u32(0x1d0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4a6fd4:{NFSU2_TR(0x4a6fd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6fd5:{NFSU2_TR(0x4a6fd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a6fd6:{NFSU2_TR(0x4a6fd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a6fdbull));
TAIL_STATIC(0x5bae60u,5ba);
}
B4a6fdb:L4a6fdb:{c.instructions+=2;NFSU2_TR(0x4a6fdb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4a6fde:{NFSU2_TR(0x4a6fde);
w4(R+4,u32(0x3f800000ull));
}
B4a6fe3:L4a6fe3:{c.instructions+=8;NFSU2_TR(0x4a6fe3);
{u32 ea_=u32(r4(R+12)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6fe6:{NFSU2_TR(0x4a6fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a6fe9:{NFSU2_TR(0x4a6fe9);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6feb:{NFSU2_TR(0x4a6feb);
u8 U[16];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6ff2:{NFSU2_TR(0x4a6ff2);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a6ff6:{NFSU2_TR(0x4a6ff6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4a6ff8:{NFSU2_TR(0x4a6ff8);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(500u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6fff:{NFSU2_TR(0x4a6fff);
u8 U[16];
w4(U+0,u32(u32(u32(0x1fcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
TAIL_STATIC(0x4a7006u,4a7);
}
XIT:NFSU2_TR_EXIT(0x4a6,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
