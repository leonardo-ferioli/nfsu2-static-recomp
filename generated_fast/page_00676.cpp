#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_671(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_675(u8* __restrict R,Cpu& c);
u32 body_677(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x676,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x676,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_676(u8* __restrict R,Cpu& c);
u32 page_676(Cpu& c){return body_676(c.regs.data(),c);}
__attribute__((noinline)) u32 body_676(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x676003:goto L676003;
case 0x676006:c.instructions+=2;goto B676006;
case 0x676009:c.instructions+=1;goto B676009;
case 0x67600e:goto L67600e;
case 0x676010:c.instructions+=3;goto B676010;
case 0x676013:c.instructions+=2;goto B676013;
case 0x676016:c.instructions+=1;goto B676016;
case 0x67601c:goto L67601c;
case 0x67601f:c.instructions+=20;goto B67601f;
case 0x676022:c.instructions+=19;goto B676022;
case 0x676025:c.instructions+=18;goto B676025;
case 0x676028:c.instructions+=17;goto B676028;
case 0x67602b:c.instructions+=16;goto B67602b;
case 0x67602e:c.instructions+=15;goto B67602e;
case 0x676031:c.instructions+=14;goto B676031;
case 0x676034:c.instructions+=13;goto B676034;
case 0x676036:c.instructions+=12;goto B676036;
case 0x676039:c.instructions+=11;goto B676039;
case 0x67603c:c.instructions+=10;goto B67603c;
case 0x67603f:c.instructions+=9;goto B67603f;
case 0x676042:c.instructions+=8;goto B676042;
case 0x676045:c.instructions+=7;goto B676045;
case 0x676048:c.instructions+=6;goto B676048;
case 0x67604b:c.instructions+=5;goto B67604b;
case 0x67604d:c.instructions+=4;goto B67604d;
case 0x676050:c.instructions+=3;goto B676050;
case 0x676052:c.instructions+=2;goto B676052;
case 0x676054:c.instructions+=1;goto B676054;
case 0x676056:goto L676056;
case 0x676059:c.instructions+=2;goto B676059;
case 0x67605c:c.instructions+=1;goto B67605c;
case 0x67605e:goto L67605e;
case 0x676060:c.instructions+=1;goto B676060;
case 0x676062:goto L676062;
case 0x676065:c.instructions+=1;goto B676065;
case 0x676068:goto L676068;
case 0x676069:c.instructions+=3;goto B676069;
case 0x67606c:c.instructions+=2;goto B67606c;
case 0x67606f:c.instructions+=1;goto B67606f;
case 0x676071:goto L676071;
case 0x676073:goto L676073;
case 0x676077:c.instructions+=2;goto B676077;
case 0x67607b:c.instructions+=1;goto B67607b;
case 0x67607d:goto L67607d;
case 0x676080:c.instructions+=18;goto B676080;
case 0x676083:c.instructions+=17;goto B676083;
case 0x676086:c.instructions+=16;goto B676086;
case 0x676089:c.instructions+=15;goto B676089;
case 0x67608c:c.instructions+=14;goto B67608c;
case 0x67608f:c.instructions+=13;goto B67608f;
case 0x676092:c.instructions+=12;goto B676092;
case 0x676095:c.instructions+=11;goto B676095;
case 0x676098:c.instructions+=10;goto B676098;
case 0x67609b:c.instructions+=9;goto B67609b;
case 0x67609e:c.instructions+=8;goto B67609e;
case 0x6760a1:c.instructions+=7;goto B6760a1;
case 0x6760a4:c.instructions+=6;goto B6760a4;
case 0x6760a7:c.instructions+=5;goto B6760a7;
case 0x6760aa:c.instructions+=4;goto B6760aa;
case 0x6760ac:c.instructions+=3;goto B6760ac;
case 0x6760ae:c.instructions+=2;goto B6760ae;
case 0x6760b0:c.instructions+=1;goto B6760b0;
case 0x6760b2:goto L6760b2;
case 0x6760b5:c.instructions+=2;goto B6760b5;
case 0x6760b8:c.instructions+=1;goto B6760b8;
case 0x6760ba:goto L6760ba;
case 0x6760bc:c.instructions+=1;goto B6760bc;
case 0x6760be:goto L6760be;
case 0x6760c1:c.instructions+=1;goto B6760c1;
case 0x6760c4:goto L6760c4;
case 0x6760c7:c.instructions+=3;goto B6760c7;
case 0x6760ca:c.instructions+=2;goto B6760ca;
case 0x6760cd:c.instructions+=1;goto B6760cd;
case 0x6760cf:goto L6760cf;
case 0x6760d2:c.instructions+=9;goto B6760d2;
case 0x6760d5:c.instructions+=8;goto B6760d5;
case 0x6760d8:c.instructions+=7;goto B6760d8;
case 0x6760db:c.instructions+=6;goto B6760db;
case 0x6760dd:c.instructions+=5;goto B6760dd;
case 0x6760de:c.instructions+=4;goto B6760de;
case 0x6760df:c.instructions+=3;goto B6760df;
case 0x6760e0:c.instructions+=2;goto B6760e0;
case 0x6760e1:c.instructions+=1;goto B6760e1;
case 0x6760e4:goto L6760e4;
case 0x6760e6:c.instructions+=11;goto B6760e6;
case 0x6760e7:c.instructions+=10;goto B6760e7;
case 0x6760e9:c.instructions+=9;goto B6760e9;
case 0x6760ea:c.instructions+=8;goto B6760ea;
case 0x6760eb:c.instructions+=7;goto B6760eb;
case 0x6760ee:c.instructions+=6;goto B6760ee;
case 0x6760f0:c.instructions+=5;goto B6760f0;
case 0x6760f1:c.instructions+=4;goto B6760f1;
case 0x6760f4:c.instructions+=3;goto B6760f4;
case 0x6760f5:c.instructions+=2;goto B6760f5;
case 0x6760f7:c.instructions+=1;goto B6760f7;
case 0x6760fc:goto L6760fc;
case 0x6760fe:c.instructions+=3;goto B6760fe;
case 0x676100:c.instructions+=2;goto B676100;
case 0x676101:c.instructions+=1;goto B676101;
case 0x676103:goto L676103;
case 0x676108:c.instructions+=1;goto B676108;
case 0x67610a:goto L67610a;
case 0x67610b:c.instructions+=3;goto B67610b;
case 0x67610e:c.instructions+=2;goto B67610e;
case 0x676110:c.instructions+=1;goto B676110;
case 0x676115:goto L676115;
case 0x676117:c.instructions+=1;goto B676117;
case 0x676119:goto L676119;
case 0x67611c:c.instructions+=3;goto B67611c;
case 0x67611e:c.instructions+=2;goto B67611e;
case 0x676120:c.instructions+=1;goto B676120;
case 0x676123:goto L676123;
case 0x676126:c.instructions+=8;goto B676126;
case 0x676129:c.instructions+=7;goto B676129;
case 0x67612c:c.instructions+=6;goto B67612c;
case 0x67612f:c.instructions+=5;goto B67612f;
case 0x676131:c.instructions+=4;goto B676131;
case 0x676133:c.instructions+=3;goto B676133;
case 0x676136:c.instructions+=2;goto B676136;
case 0x676139:c.instructions+=1;goto B676139;
case 0x67613b:goto L67613b;
case 0x67613c:c.instructions+=1;goto B67613c;
case 0x676141:goto L676141;
case 0x676142:c.instructions+=1;goto B676142;
case 0x676144:goto L676144;
case 0x676145:c.instructions+=4;goto B676145;
case 0x676146:c.instructions+=3;goto B676146;
case 0x676147:c.instructions+=2;goto B676147;
case 0x676148:c.instructions+=1;goto B676148;
case 0x67614b:goto L67614b;
case 0x67614d:c.instructions+=12;goto B67614d;
case 0x67614e:c.instructions+=11;goto B67614e;
case 0x676150:c.instructions+=10;goto B676150;
case 0x676153:c.instructions+=9;goto B676153;
case 0x676154:c.instructions+=8;goto B676154;
case 0x676155:c.instructions+=7;goto B676155;
case 0x676156:c.instructions+=6;goto B676156;
case 0x676158:c.instructions+=5;goto B676158;
case 0x67615b:c.instructions+=4;goto B67615b;
case 0x67615e:c.instructions+=3;goto B67615e;
case 0x676161:c.instructions+=2;goto B676161;
case 0x676164:c.instructions+=1;goto B676164;
case 0x676166:goto L676166;
case 0x676169:c.instructions+=1;goto B676169;
case 0x67616b:goto L67616b;
case 0x67616e:c.instructions+=2;goto B67616e;
case 0x676170:c.instructions+=1;goto B676170;
case 0x676172:goto L676172;
case 0x676175:c.instructions+=3;goto B676175;
case 0x676178:c.instructions+=2;goto B676178;
case 0x67617b:c.instructions+=1;goto B67617b;
case 0x676182:goto L676182;
case 0x676185:c.instructions+=1;goto B676185;
case 0x676187:goto L676187;
case 0x67618a:c.instructions+=2;goto B67618a;
case 0x67618c:c.instructions+=1;goto B67618c;
case 0x67618e:goto L67618e;
case 0x676194:c.instructions+=1;goto B676194;
case 0x676196:goto L676196;
case 0x676199:c.instructions+=10;goto B676199;
case 0x67619c:c.instructions+=9;goto B67619c;
case 0x67619d:c.instructions+=8;goto B67619d;
case 0x6761a0:c.instructions+=7;goto B6761a0;
case 0x6761a3:c.instructions+=6;goto B6761a3;
case 0x6761a6:c.instructions+=5;goto B6761a6;
case 0x6761a9:c.instructions+=4;goto B6761a9;
case 0x6761ac:c.instructions+=3;goto B6761ac;
case 0x6761af:c.instructions+=2;goto B6761af;
case 0x6761b2:c.instructions+=1;goto B6761b2;
case 0x6761b7:goto L6761b7;
case 0x6761b9:c.instructions+=1;goto B6761b9;
case 0x6761bb:goto L6761bb;
case 0x6761be:c.instructions+=2;goto B6761be;
case 0x6761c0:c.instructions+=1;goto B6761c0;
case 0x6761c2:goto L6761c2;
case 0x6761c5:c.instructions+=1;goto B6761c5;
case 0x6761c7:goto L6761c7;
case 0x6761c9:goto L6761c9;
case 0x6761ca:c.instructions+=4;goto B6761ca;
case 0x6761cb:c.instructions+=3;goto B6761cb;
case 0x6761cc:c.instructions+=2;goto B6761cc;
case 0x6761cd:c.instructions+=1;goto B6761cd;
case 0x6761d0:goto L6761d0;
case 0x6761d3:goto L6761d3;
case 0x6761d6:c.instructions+=4;goto B6761d6;
case 0x6761da:c.instructions+=3;goto B6761da;
case 0x6761dd:c.instructions+=2;goto B6761dd;
case 0x6761e0:c.instructions+=1;goto B6761e0;
case 0x6761e2:goto L6761e2;
case 0x6761e5:c.instructions+=4;goto B6761e5;
case 0x6761e8:c.instructions+=3;goto B6761e8;
case 0x6761ea:c.instructions+=2;goto B6761ea;
case 0x6761ed:c.instructions+=1;goto B6761ed;
case 0x6761ef:goto L6761ef;
case 0x6761f2:c.instructions+=4;goto B6761f2;
case 0x6761f3:c.instructions+=3;goto B6761f3;
case 0x6761f5:c.instructions+=2;goto B6761f5;
case 0x6761f8:c.instructions+=1;goto B6761f8;
case 0x6761fd:goto L6761fd;
case 0x6761ff:c.instructions+=1;goto B6761ff;
case 0x676201:goto L676201;
case 0x676204:c.instructions+=3;goto B676204;
case 0x676207:c.instructions+=2;goto B676207;
case 0x67620a:c.instructions+=1;goto B67620a;
case 0x67620c:goto L67620c;
case 0x67620f:c.instructions+=1;goto B67620f;
case 0x676211:goto L676211;
case 0x676216:c.instructions+=2;goto B676216;
case 0x676219:c.instructions+=1;goto B676219;
case 0x67621b:goto L67621b;
case 0x67621d:c.instructions+=1;goto B67621d;
case 0x67621f:goto L67621f;
case 0x676222:goto L676222;
case 0x676225:c.instructions+=4;goto B676225;
case 0x676227:c.instructions+=3;goto B676227;
case 0x67622a:c.instructions+=2;goto B67622a;
case 0x67622d:c.instructions+=1;goto B67622d;
case 0x67622f:goto L67622f;
case 0x676231:c.instructions+=1;goto B676231;
case 0x676233:goto L676233;
case 0x676236:c.instructions+=1;goto B676236;
case 0x676238:goto L676238;
case 0x67623b:c.instructions+=1;goto B67623b;
case 0x67623e:goto L67623e;
case 0x676241:c.instructions+=1;goto B676241;
case 0x676247:goto L676247;
case 0x67624a:c.instructions+=4;goto B67624a;
case 0x67624d:c.instructions+=3;goto B67624d;
case 0x676250:c.instructions+=2;goto B676250;
case 0x676253:c.instructions+=1;goto B676253;
case 0x676255:goto L676255;
case 0x676258:c.instructions+=2;goto B676258;
case 0x67625b:c.instructions+=1;goto B67625b;
case 0x67625d:goto L67625d;
case 0x67625f:goto L67625f;
case 0x676261:c.instructions+=1;goto B676261;
case 0x676267:goto L676267;
case 0x676268:c.instructions+=1;goto B676268;
case 0x67626d:goto L67626d;
case 0x676270:c.instructions+=3;goto B676270;
case 0x676273:c.instructions+=2;goto B676273;
case 0x676276:c.instructions+=1;goto B676276;
case 0x676278:goto L676278;
case 0x67627b:c.instructions+=1;goto B67627b;
case 0x67627e:goto L67627e;
case 0x676280:c.instructions+=1;goto B676280;
case 0x676286:goto L676286;
case 0x676289:c.instructions+=2;goto B676289;
case 0x67628c:c.instructions+=1;goto B67628c;
case 0x67628e:goto L67628e;
case 0x676291:c.instructions+=5;goto B676291;
case 0x676296:c.instructions+=4;goto B676296;
case 0x676298:c.instructions+=3;goto B676298;
case 0x67629a:c.instructions+=2;goto B67629a;
case 0x67629d:c.instructions+=1;goto B67629d;
case 0x6762a3:goto L6762a3;
case 0x6762a5:c.instructions+=1;goto B6762a5;
case 0x6762ab:goto L6762ab;
case 0x6762b0:c.instructions+=2;goto B6762b0;
case 0x6762b2:c.instructions+=1;goto B6762b2;
case 0x6762b4:goto L6762b4;
case 0x6762b7:c.instructions+=3;goto B6762b7;
case 0x6762ba:c.instructions+=2;goto B6762ba;
case 0x6762bd:c.instructions+=1;goto B6762bd;
case 0x6762bf:goto L6762bf;
case 0x6762c4:c.instructions+=1;goto B6762c4;
case 0x6762c7:goto L6762c7;
case 0x6762ca:c.instructions+=2;goto B6762ca;
case 0x6762cc:c.instructions+=1;goto B6762cc;
case 0x6762d2:goto L6762d2;
case 0x6762d5:c.instructions+=3;goto B6762d5;
case 0x6762d8:c.instructions+=2;goto B6762d8;
case 0x6762dc:c.instructions+=1;goto B6762dc;
case 0x6762e2:goto L6762e2;
case 0x6762e7:c.instructions+=2;goto B6762e7;
case 0x6762ea:c.instructions+=1;goto B6762ea;
case 0x6762ef:goto L6762ef;
case 0x6762f1:c.instructions+=1;goto B6762f1;
case 0x6762f4:goto L6762f4;
case 0x6762f6:c.instructions+=3;goto B6762f6;
case 0x6762f7:c.instructions+=2;goto B6762f7;
case 0x6762f9:c.instructions+=1;goto B6762f9;
case 0x6762fb:goto L6762fb;
case 0x6762fd:c.instructions+=4;goto B6762fd;
case 0x6762ff:c.instructions+=3;goto B6762ff;
case 0x676302:c.instructions+=2;goto B676302;
case 0x676305:c.instructions+=1;goto B676305;
case 0x676308:goto L676308;
case 0x67630a:c.instructions+=3;goto B67630a;
case 0x67630b:c.instructions+=2;goto B67630b;
case 0x67630d:c.instructions+=1;goto B67630d;
case 0x67630f:goto L67630f;
case 0x676311:c.instructions+=7;goto B676311;
case 0x676314:c.instructions+=6;goto B676314;
case 0x676318:c.instructions+=5;goto B676318;
case 0x67631a:c.instructions+=4;goto B67631a;
case 0x67631b:c.instructions+=3;goto B67631b;
case 0x67631e:c.instructions+=2;goto B67631e;
case 0x676320:c.instructions+=1;goto B676320;
case 0x676325:goto L676325;
case 0x676327:c.instructions+=1;goto B676327;
case 0x676329:goto L676329;
case 0x67632b:c.instructions+=4;goto B67632b;
case 0x67632d:c.instructions+=3;goto B67632d;
case 0x67632f:c.instructions+=2;goto B67632f;
case 0x676332:c.instructions+=1;goto B676332;
case 0x676334:goto L676334;
case 0x676336:goto L676336;
case 0x676338:c.instructions+=1;goto B676338;
case 0x67633b:goto L67633b;
case 0x67633d:goto L67633d;
case 0x676340:c.instructions+=8;goto B676340;
case 0x676343:c.instructions+=7;goto B676343;
case 0x676346:c.instructions+=6;goto B676346;
case 0x676349:c.instructions+=5;goto B676349;
case 0x67634c:c.instructions+=4;goto B67634c;
case 0x676350:c.instructions+=3;goto B676350;
case 0x676353:c.instructions+=2;goto B676353;
case 0x676355:c.instructions+=1;goto B676355;
case 0x676358:goto L676358;
case 0x67635a:goto L67635a;
case 0x67635c:c.instructions+=1;goto B67635c;
case 0x67635f:goto L67635f;
case 0x676361:goto L676361;
case 0x676363:c.instructions+=4;goto B676363;
case 0x676366:c.instructions+=3;goto B676366;
case 0x676368:c.instructions+=2;goto B676368;
case 0x67636d:c.instructions+=1;goto B67636d;
case 0x67636f:goto L67636f;
case 0x676376:goto L676376;
case 0x676378:c.instructions+=2;goto B676378;
case 0x67637b:c.instructions+=1;goto B67637b;
case 0x676381:goto L676381;
case 0x676386:goto L676386;
case 0x67638b:c.instructions+=1;goto B67638b;
case 0x676390:goto L676390;
case 0x676395:c.instructions+=1;goto B676395;
case 0x67639a:goto L67639a;
case 0x67639c:c.instructions+=15;goto B67639c;
case 0x67639d:c.instructions+=14;goto B67639d;
case 0x67639f:c.instructions+=13;goto B67639f;
case 0x6763a5:c.instructions+=12;goto B6763a5;
case 0x6763a6:c.instructions+=11;goto B6763a6;
case 0x6763a7:c.instructions+=10;goto B6763a7;
case 0x6763a9:c.instructions+=9;goto B6763a9;
case 0x6763ab:c.instructions+=8;goto B6763ab;
case 0x6763ae:c.instructions+=7;goto B6763ae;
case 0x6763af:c.instructions+=6;goto B6763af;
case 0x6763b1:c.instructions+=5;goto B6763b1;
case 0x6763b3:c.instructions+=4;goto B6763b3;
case 0x6763b4:c.instructions+=3;goto B6763b4;
case 0x6763b7:c.instructions+=2;goto B6763b7;
case 0x6763ba:c.instructions+=1;goto B6763ba;
case 0x6763bc:goto L6763bc;
case 0x6763bf:c.instructions+=1;goto B6763bf;
case 0x6763c1:goto L6763c1;
case 0x6763c4:c.instructions+=1;goto B6763c4;
case 0x6763c6:goto L6763c6;
case 0x6763c7:c.instructions+=2;goto B6763c7;
case 0x6763c9:c.instructions+=1;goto B6763c9;
case 0x6763cb:goto L6763cb;
case 0x6763cd:goto L6763cd;
case 0x6763d0:goto L6763d0;
case 0x6763d3:c.instructions+=3;goto B6763d3;
case 0x6763d6:c.instructions+=2;goto B6763d6;
case 0x6763d9:c.instructions+=1;goto B6763d9;
case 0x6763db:goto L6763db;
case 0x6763de:c.instructions+=2;goto B6763de;
case 0x6763e3:c.instructions+=1;goto B6763e3;
case 0x6763e5:goto L6763e5;
case 0x6763e7:c.instructions+=9;goto B6763e7;
case 0x6763e8:c.instructions+=8;goto B6763e8;
case 0x6763eb:c.instructions+=7;goto B6763eb;
case 0x6763ed:c.instructions+=6;goto B6763ed;
case 0x6763f0:c.instructions+=5;goto B6763f0;
case 0x6763f6:c.instructions+=4;goto B6763f6;
case 0x6763f7:c.instructions+=3;goto B6763f7;
case 0x6763fa:c.instructions+=2;goto B6763fa;
case 0x6763fc:c.instructions+=1;goto B6763fc;
case 0x676401:goto L676401;
case 0x676403:c.instructions+=2;goto B676403;
case 0x676406:c.instructions+=1;goto B676406;
case 0x67640c:goto L67640c;
case 0x67640f:goto L67640f;
case 0x676412:c.instructions+=1;goto B676412;
case 0x676418:goto L676418;
case 0x67641a:c.instructions+=9;goto B67641a;
case 0x67641b:c.instructions+=8;goto B67641b;
case 0x67641e:c.instructions+=7;goto B67641e;
case 0x676420:c.instructions+=6;goto B676420;
case 0x676423:c.instructions+=5;goto B676423;
case 0x676429:c.instructions+=4;goto B676429;
case 0x67642a:c.instructions+=3;goto B67642a;
case 0x67642d:c.instructions+=2;goto B67642d;
case 0x67642f:c.instructions+=1;goto B67642f;
case 0x676434:goto L676434;
case 0x676436:c.instructions+=2;goto B676436;
case 0x676439:c.instructions+=1;goto B676439;
case 0x67643f:goto L67643f;
case 0x676444:goto L676444;
case 0x676447:c.instructions+=1;goto B676447;
case 0x67644d:goto L67644d;
case 0x676450:c.instructions+=1;goto B676450;
case 0x676456:goto L676456;
case 0x676459:c.instructions+=8;goto B676459;
case 0x67645f:c.instructions+=7;goto B67645f;
case 0x676460:c.instructions+=6;goto B676460;
case 0x676461:c.instructions+=5;goto B676461;
case 0x676464:c.instructions+=4;goto B676464;
case 0x676465:c.instructions+=3;goto B676465;
case 0x676466:c.instructions+=2;goto B676466;
case 0x676469:c.instructions+=1;goto B676469;
case 0x67646e:goto L67646e;
case 0x676474:c.instructions+=9;goto B676474;
case 0x676477:c.instructions+=8;goto B676477;
case 0x676478:c.instructions+=7;goto B676478;
case 0x676479:c.instructions+=6;goto B676479;
case 0x67647c:c.instructions+=5;goto B67647c;
case 0x67647d:c.instructions+=4;goto B67647d;
case 0x67647e:c.instructions+=3;goto B67647e;
case 0x676481:c.instructions+=2;goto B676481;
case 0x676484:c.instructions+=1;goto B676484;
case 0x676489:goto L676489;
case 0x67648f:c.instructions+=9;goto B67648f;
case 0x676492:c.instructions+=8;goto B676492;
case 0x676493:c.instructions+=7;goto B676493;
case 0x676494:c.instructions+=6;goto B676494;
case 0x676497:c.instructions+=5;goto B676497;
case 0x676498:c.instructions+=4;goto B676498;
case 0x676499:c.instructions+=3;goto B676499;
case 0x67649c:c.instructions+=2;goto B67649c;
case 0x67649f:c.instructions+=1;goto B67649f;
case 0x6764a4:goto L6764a4;
case 0x6764aa:c.instructions+=9;goto B6764aa;
case 0x6764ad:c.instructions+=8;goto B6764ad;
case 0x6764ae:c.instructions+=7;goto B6764ae;
case 0x6764af:c.instructions+=6;goto B6764af;
case 0x6764b2:c.instructions+=5;goto B6764b2;
case 0x6764b3:c.instructions+=4;goto B6764b3;
case 0x6764b4:c.instructions+=3;goto B6764b4;
case 0x6764b7:c.instructions+=2;goto B6764b7;
case 0x6764ba:c.instructions+=1;goto B6764ba;
case 0x6764bf:goto L6764bf;
case 0x6764c2:c.instructions+=6;goto B6764c2;
case 0x6764c5:c.instructions+=5;goto B6764c5;
case 0x6764cb:c.instructions+=4;goto B6764cb;
case 0x6764cc:c.instructions+=3;goto B6764cc;
case 0x6764ce:c.instructions+=2;goto B6764ce;
case 0x6764d0:c.instructions+=1;goto B6764d0;
case 0x6764d5:goto L6764d5;
case 0x6764d7:c.instructions+=2;goto B6764d7;
case 0x6764da:c.instructions+=1;goto B6764da;
case 0x6764e0:goto L6764e0;
case 0x6764e6:c.instructions+=4;goto B6764e6;
case 0x6764ec:c.instructions+=3;goto B6764ec;
case 0x6764ee:c.instructions+=2;goto B6764ee;
case 0x6764f1:c.instructions+=1;goto B6764f1;
case 0x6764f3:goto L6764f3;
case 0x6764f9:c.instructions+=4;goto B6764f9;
case 0x6764ff:c.instructions+=3;goto B6764ff;
case 0x676501:c.instructions+=2;goto B676501;
case 0x676504:c.instructions+=1;goto B676504;
case 0x676506:goto L676506;
case 0x676508:c.instructions+=2;goto B676508;
case 0x67650b:c.instructions+=1;goto B67650b;
case 0x676510:goto L676510;
case 0x676513:c.instructions+=17;goto B676513;
case 0x676516:c.instructions+=16;goto B676516;
case 0x676517:c.instructions+=15;goto B676517;
case 0x676518:c.instructions+=14;goto B676518;
case 0x676519:c.instructions+=13;goto B676519;
case 0x67651a:c.instructions+=12;goto B67651a;
case 0x67651b:c.instructions+=11;goto B67651b;
case 0x67651c:c.instructions+=10;goto B67651c;
case 0x67651f:c.instructions+=9;goto B67651f;
case 0x676520:c.instructions+=8;goto B676520;
case 0x676523:c.instructions+=7;goto B676523;
case 0x676526:c.instructions+=6;goto B676526;
case 0x676527:c.instructions+=5;goto B676527;
case 0x67652c:c.instructions+=4;goto B67652c;
case 0x67652d:c.instructions+=3;goto B67652d;
case 0x676530:c.instructions+=2;goto B676530;
case 0x676532:c.instructions+=1;goto B676532;
case 0x676537:goto L676537;
case 0x676539:c.instructions+=2;goto B676539;
case 0x67653c:c.instructions+=1;goto B67653c;
case 0x676542:goto L676542;
case 0x676543:c.instructions+=10;goto B676543;
case 0x676546:c.instructions+=9;goto B676546;
case 0x676547:c.instructions+=8;goto B676547;
case 0x67654a:c.instructions+=7;goto B67654a;
case 0x67654b:c.instructions+=6;goto B67654b;
case 0x67654e:c.instructions+=5;goto B67654e;
case 0x67654f:c.instructions+=4;goto B67654f;
case 0x676554:c.instructions+=3;goto B676554;
case 0x676557:c.instructions+=2;goto B676557;
case 0x676559:c.instructions+=1;goto B676559;
case 0x67655e:goto L67655e;
case 0x676560:c.instructions+=2;goto B676560;
case 0x676563:c.instructions+=1;goto B676563;
case 0x676569:goto L676569;
case 0x67656b:c.instructions+=9;goto B67656b;
case 0x67656c:c.instructions+=8;goto B67656c;
case 0x67656f:c.instructions+=7;goto B67656f;
case 0x676570:c.instructions+=6;goto B676570;
case 0x676573:c.instructions+=5;goto B676573;
case 0x676574:c.instructions+=4;goto B676574;
case 0x676579:c.instructions+=3;goto B676579;
case 0x67657c:c.instructions+=2;goto B67657c;
case 0x67657e:c.instructions+=1;goto B67657e;
case 0x676583:goto L676583;
case 0x676585:c.instructions+=2;goto B676585;
case 0x676588:c.instructions+=1;goto B676588;
case 0x67658e:goto L67658e;
case 0x676590:c.instructions+=10;goto B676590;
case 0x676593:c.instructions+=9;goto B676593;
case 0x676594:c.instructions+=8;goto B676594;
case 0x676597:c.instructions+=7;goto B676597;
case 0x676598:c.instructions+=6;goto B676598;
case 0x67659b:c.instructions+=5;goto B67659b;
case 0x67659c:c.instructions+=4;goto B67659c;
case 0x67659d:c.instructions+=3;goto B67659d;
case 0x6765a0:c.instructions+=2;goto B6765a0;
case 0x6765a2:c.instructions+=1;goto B6765a2;
case 0x6765a7:goto L6765a7;
case 0x6765a9:c.instructions+=2;goto B6765a9;
case 0x6765ac:c.instructions+=1;goto B6765ac;
case 0x6765b2:goto L6765b2;
case 0x6765b3:c.instructions+=10;goto B6765b3;
case 0x6765b6:c.instructions+=9;goto B6765b6;
case 0x6765b7:c.instructions+=8;goto B6765b7;
case 0x6765ba:c.instructions+=7;goto B6765ba;
case 0x6765bb:c.instructions+=6;goto B6765bb;
case 0x6765be:c.instructions+=5;goto B6765be;
case 0x6765bf:c.instructions+=4;goto B6765bf;
case 0x6765c4:c.instructions+=3;goto B6765c4;
case 0x6765c7:c.instructions+=2;goto B6765c7;
case 0x6765c9:c.instructions+=1;goto B6765c9;
case 0x6765ce:goto L6765ce;
case 0x6765d0:c.instructions+=2;goto B6765d0;
case 0x6765d3:c.instructions+=1;goto B6765d3;
case 0x6765d9:goto L6765d9;
case 0x6765dc:c.instructions+=21;goto B6765dc;
case 0x6765e2:c.instructions+=20;goto B6765e2;
case 0x6765e3:c.instructions+=19;goto B6765e3;
case 0x6765e4:c.instructions+=18;goto B6765e4;
case 0x6765e5:c.instructions+=17;goto B6765e5;
case 0x6765e6:c.instructions+=16;goto B6765e6;
case 0x6765e9:c.instructions+=15;goto B6765e9;
case 0x6765ef:c.instructions+=14;goto B6765ef;
case 0x6765f0:c.instructions+=13;goto B6765f0;
case 0x6765f1:c.instructions+=12;goto B6765f1;
case 0x6765f2:c.instructions+=11;goto B6765f2;
case 0x6765f4:c.instructions+=10;goto B6765f4;
case 0x6765f5:c.instructions+=9;goto B6765f5;
case 0x6765f6:c.instructions+=8;goto B6765f6;
case 0x6765fc:c.instructions+=7;goto B6765fc;
case 0x6765fd:c.instructions+=6;goto B6765fd;
case 0x676603:c.instructions+=5;goto B676603;
case 0x676604:c.instructions+=4;goto B676604;
case 0x676609:c.instructions+=3;goto B676609;
case 0x67660c:c.instructions+=2;goto B67660c;
case 0x67660e:c.instructions+=1;goto B67660e;
case 0x676613:goto L676613;
case 0x676615:c.instructions+=2;goto B676615;
case 0x676618:c.instructions+=1;goto B676618;
case 0x67661e:goto L67661e;
case 0x676621:c.instructions+=2;goto B676621;
case 0x676623:c.instructions+=1;goto B676623;
case 0x676625:goto L676625;
case 0x676628:c.instructions+=2;goto B676628;
case 0x67662a:c.instructions+=1;goto B67662a;
case 0x67662c:goto L67662c;
case 0x676632:goto L676632;
case 0x676634:goto L676634;
case 0x676637:c.instructions+=2;goto B676637;
case 0x676639:c.instructions+=1;goto B676639;
case 0x67663f:goto L67663f;
case 0x676642:c.instructions+=2;goto B676642;
case 0x676644:c.instructions+=1;goto B676644;
case 0x67664a:goto L67664a;
case 0x676650:goto L676650;
case 0x676652:goto L676652;
case 0x676657:goto L676657;
case 0x67665a:c.instructions+=19;goto B67665a;
case 0x676660:c.instructions+=18;goto B676660;
case 0x676663:c.instructions+=17;goto B676663;
case 0x676665:c.instructions+=16;goto B676665;
case 0x676667:c.instructions+=15;goto B676667;
case 0x676669:c.instructions+=14;goto B676669;
case 0x67666b:c.instructions+=13;goto B67666b;
case 0x67666d:c.instructions+=12;goto B67666d;
case 0x67666f:c.instructions+=11;goto B67666f;
case 0x676672:c.instructions+=10;goto B676672;
case 0x676673:c.instructions+=9;goto B676673;
case 0x676674:c.instructions+=8;goto B676674;
case 0x676677:c.instructions+=7;goto B676677;
case 0x676678:c.instructions+=6;goto B676678;
case 0x676679:c.instructions+=5;goto B676679;
case 0x67667c:c.instructions+=4;goto B67667c;
case 0x676682:c.instructions+=3;goto B676682;
case 0x676684:c.instructions+=2;goto B676684;
case 0x676687:c.instructions+=1;goto B676687;
case 0x67668c:goto L67668c;
case 0x676692:c.instructions+=9;goto B676692;
case 0x676695:c.instructions+=8;goto B676695;
case 0x676696:c.instructions+=7;goto B676696;
case 0x676697:c.instructions+=6;goto B676697;
case 0x67669a:c.instructions+=5;goto B67669a;
case 0x67669b:c.instructions+=4;goto B67669b;
case 0x67669c:c.instructions+=3;goto B67669c;
case 0x67669f:c.instructions+=2;goto B67669f;
case 0x6766a2:c.instructions+=1;goto B6766a2;
case 0x6766a7:goto L6766a7;
case 0x6766ad:c.instructions+=9;goto B6766ad;
case 0x6766b0:c.instructions+=8;goto B6766b0;
case 0x6766b1:c.instructions+=7;goto B6766b1;
case 0x6766b2:c.instructions+=6;goto B6766b2;
case 0x6766b5:c.instructions+=5;goto B6766b5;
case 0x6766b6:c.instructions+=4;goto B6766b6;
case 0x6766b7:c.instructions+=3;goto B6766b7;
case 0x6766ba:c.instructions+=2;goto B6766ba;
case 0x6766c0:c.instructions+=1;goto B6766c0;
case 0x6766c5:goto L6766c5;
case 0x6766cb:c.instructions+=9;goto B6766cb;
case 0x6766ce:c.instructions+=8;goto B6766ce;
case 0x6766cf:c.instructions+=7;goto B6766cf;
case 0x6766d0:c.instructions+=6;goto B6766d0;
case 0x6766d3:c.instructions+=5;goto B6766d3;
case 0x6766d4:c.instructions+=4;goto B6766d4;
case 0x6766d5:c.instructions+=3;goto B6766d5;
case 0x6766d8:c.instructions+=2;goto B6766d8;
case 0x6766de:c.instructions+=1;goto B6766de;
case 0x6766e3:goto L6766e3;
case 0x6766e9:c.instructions+=9;goto B6766e9;
case 0x6766ec:c.instructions+=8;goto B6766ec;
case 0x6766ed:c.instructions+=7;goto B6766ed;
case 0x6766ee:c.instructions+=6;goto B6766ee;
case 0x6766f1:c.instructions+=5;goto B6766f1;
case 0x6766f2:c.instructions+=4;goto B6766f2;
case 0x6766f3:c.instructions+=3;goto B6766f3;
case 0x6766f6:c.instructions+=2;goto B6766f6;
case 0x6766fc:c.instructions+=1;goto B6766fc;
case 0x676701:goto L676701;
case 0x676707:c.instructions+=9;goto B676707;
case 0x67670a:c.instructions+=8;goto B67670a;
case 0x67670b:c.instructions+=7;goto B67670b;
case 0x67670c:c.instructions+=6;goto B67670c;
case 0x67670f:c.instructions+=5;goto B67670f;
case 0x676710:c.instructions+=4;goto B676710;
case 0x676711:c.instructions+=3;goto B676711;
case 0x676714:c.instructions+=2;goto B676714;
case 0x67671a:c.instructions+=1;goto B67671a;
case 0x67671f:goto L67671f;
case 0x676725:c.instructions+=9;goto B676725;
case 0x676728:c.instructions+=8;goto B676728;
case 0x676729:c.instructions+=7;goto B676729;
case 0x67672a:c.instructions+=6;goto B67672a;
case 0x67672d:c.instructions+=5;goto B67672d;
case 0x67672e:c.instructions+=4;goto B67672e;
case 0x67672f:c.instructions+=3;goto B67672f;
case 0x676732:c.instructions+=2;goto B676732;
case 0x676738:c.instructions+=1;goto B676738;
case 0x67673d:goto L67673d;
case 0x676743:c.instructions+=9;goto B676743;
case 0x676746:c.instructions+=8;goto B676746;
case 0x67674c:c.instructions+=7;goto B67674c;
case 0x67674d:c.instructions+=6;goto B67674d;
case 0x67674e:c.instructions+=5;goto B67674e;
case 0x676751:c.instructions+=4;goto B676751;
case 0x676752:c.instructions+=3;goto B676752;
case 0x676753:c.instructions+=2;goto B676753;
case 0x676756:c.instructions+=1;goto B676756;
case 0x67675b:goto L67675b;
case 0x676761:c.instructions+=9;goto B676761;
case 0x676764:c.instructions+=8;goto B676764;
case 0x676765:c.instructions+=7;goto B676765;
case 0x676766:c.instructions+=6;goto B676766;
case 0x676769:c.instructions+=5;goto B676769;
case 0x67676a:c.instructions+=4;goto B67676a;
case 0x67676b:c.instructions+=3;goto B67676b;
case 0x67676e:c.instructions+=2;goto B67676e;
case 0x676774:c.instructions+=1;goto B676774;
case 0x676779:goto L676779;
case 0x67677f:c.instructions+=9;goto B67677f;
case 0x676782:c.instructions+=8;goto B676782;
case 0x676783:c.instructions+=7;goto B676783;
case 0x676784:c.instructions+=6;goto B676784;
case 0x676787:c.instructions+=5;goto B676787;
case 0x676788:c.instructions+=4;goto B676788;
case 0x676789:c.instructions+=3;goto B676789;
case 0x67678c:c.instructions+=2;goto B67678c;
case 0x676792:c.instructions+=1;goto B676792;
case 0x676797:goto L676797;
case 0x67679d:c.instructions+=4;goto B67679d;
case 0x6767a0:c.instructions+=3;goto B6767a0;
case 0x6767a3:c.instructions+=2;goto B6767a3;
case 0x6767a4:c.instructions+=1;goto B6767a4;
case 0x6767a9:goto L6767a9;
case 0x6767ab:c.instructions+=3;goto B6767ab;
case 0x6767ac:c.instructions+=2;goto B6767ac;
case 0x6767af:c.instructions+=1;goto B6767af;
case 0x6767b1:goto L6767b1;
case 0x6767b8:c.instructions+=1;goto B6767b8;
case 0x6767bd:goto L6767bd;
case 0x6767c0:c.instructions+=2;goto B6767c0;
case 0x6767c2:c.instructions+=1;goto B6767c2;
case 0x6767c5:goto L6767c5;
case 0x6767cc:c.instructions+=4;goto B6767cc;
case 0x6767cd:c.instructions+=3;goto B6767cd;
case 0x6767cf:c.instructions+=2;goto B6767cf;
case 0x6767d2:c.instructions+=1;goto B6767d2;
case 0x6767d4:goto L6767d4;
case 0x6767d6:goto L6767d6;
case 0x6767d9:c.instructions+=3;goto B6767d9;
case 0x6767db:c.instructions+=2;goto B6767db;
case 0x6767e2:c.instructions+=1;goto B6767e2;
case 0x6767e7:goto L6767e7;
case 0x6767e9:c.instructions+=2;goto B6767e9;
case 0x6767ec:c.instructions+=1;goto B6767ec;
case 0x6767f2:goto L6767f2;
case 0x6767f3:c.instructions+=2;goto B6767f3;
case 0x6767f6:c.instructions+=1;goto B6767f6;
case 0x6767f8:goto L6767f8;
case 0x6767fb:c.instructions+=2;goto B6767fb;
case 0x6767fe:c.instructions+=1;goto B6767fe;
case 0x676804:goto L676804;
case 0x676807:c.instructions+=49;goto B676807;
case 0x676809:c.instructions+=48;goto B676809;
case 0x67680c:c.instructions+=47;goto B67680c;
case 0x67680e:c.instructions+=46;goto B67680e;
case 0x676811:c.instructions+=45;goto B676811;
case 0x676813:c.instructions+=44;goto B676813;
case 0x676816:c.instructions+=43;goto B676816;
case 0x676819:c.instructions+=42;goto B676819;
case 0x67681c:c.instructions+=41;goto B67681c;
case 0x67681f:c.instructions+=40;goto B67681f;
case 0x676822:c.instructions+=39;goto B676822;
case 0x676824:c.instructions+=38;goto B676824;
case 0x676826:c.instructions+=37;goto B676826;
case 0x676829:c.instructions+=36;goto B676829;
case 0x67682c:c.instructions+=35;goto B67682c;
case 0x67682e:c.instructions+=34;goto B67682e;
case 0x676834:c.instructions+=33;goto B676834;
case 0x676837:c.instructions+=32;goto B676837;
case 0x676839:c.instructions+=31;goto B676839;
case 0x67683f:c.instructions+=30;goto B67683f;
case 0x676842:c.instructions+=29;goto B676842;
case 0x676844:c.instructions+=28;goto B676844;
case 0x67684a:c.instructions+=27;goto B67684a;
case 0x67684d:c.instructions+=26;goto B67684d;
case 0x67684f:c.instructions+=25;goto B67684f;
case 0x676855:c.instructions+=24;goto B676855;
case 0x676858:c.instructions+=23;goto B676858;
case 0x67685a:c.instructions+=22;goto B67685a;
case 0x676860:c.instructions+=21;goto B676860;
case 0x676863:c.instructions+=20;goto B676863;
case 0x676865:c.instructions+=19;goto B676865;
case 0x67686b:c.instructions+=18;goto B67686b;
case 0x67686e:c.instructions+=17;goto B67686e;
case 0x676870:c.instructions+=16;goto B676870;
case 0x676876:c.instructions+=15;goto B676876;
case 0x676879:c.instructions+=14;goto B676879;
case 0x67687b:c.instructions+=13;goto B67687b;
case 0x676881:c.instructions+=12;goto B676881;
case 0x676884:c.instructions+=11;goto B676884;
case 0x676886:c.instructions+=10;goto B676886;
case 0x67688c:c.instructions+=9;goto B67688c;
case 0x67688f:c.instructions+=8;goto B67688f;
case 0x676891:c.instructions+=7;goto B676891;
case 0x676897:c.instructions+=6;goto B676897;
case 0x67689a:c.instructions+=5;goto B67689a;
case 0x67689c:c.instructions+=4;goto B67689c;
case 0x67689f:c.instructions+=3;goto B67689f;
case 0x6768a2:c.instructions+=2;goto B6768a2;
case 0x6768a4:c.instructions+=1;goto B6768a4;
case 0x6768aa:goto L6768aa;
case 0x6768ad:c.instructions+=1;goto B6768ad;
case 0x6768af:goto L6768af;
case 0x6768b2:c.instructions+=2;goto B6768b2;
case 0x6768b5:c.instructions+=1;goto B6768b5;
case 0x6768b7:goto L6768b7;
case 0x6768ba:c.instructions+=2;goto B6768ba;
case 0x6768bd:c.instructions+=1;goto B6768bd;
case 0x6768c0:goto L6768c0;
case 0x6768c3:c.instructions+=6;goto B6768c3;
case 0x6768c9:c.instructions+=5;goto B6768c9;
case 0x6768cb:c.instructions+=4;goto B6768cb;
case 0x6768ce:c.instructions+=3;goto B6768ce;
case 0x6768d1:c.instructions+=2;goto B6768d1;
case 0x6768d7:c.instructions+=1;goto B6768d7;
case 0x6768d9:goto L6768d9;
case 0x6768df:goto L6768df;
case 0x6768e2:c.instructions+=27;goto B6768e2;
case 0x6768e8:c.instructions+=26;goto B6768e8;
case 0x6768eb:c.instructions+=25;goto B6768eb;
case 0x6768f1:c.instructions+=24;goto B6768f1;
case 0x6768f7:c.instructions+=23;goto B6768f7;
case 0x6768fa:c.instructions+=22;goto B6768fa;
case 0x676900:c.instructions+=21;goto B676900;
case 0x676906:c.instructions+=20;goto B676906;
case 0x676909:c.instructions+=19;goto B676909;
case 0x67690f:c.instructions+=18;goto B67690f;
case 0x676915:c.instructions+=17;goto B676915;
case 0x676918:c.instructions+=16;goto B676918;
case 0x67691e:c.instructions+=15;goto B67691e;
case 0x676924:c.instructions+=14;goto B676924;
case 0x676927:c.instructions+=13;goto B676927;
case 0x67692d:c.instructions+=12;goto B67692d;
case 0x676933:c.instructions+=11;goto B676933;
case 0x676936:c.instructions+=10;goto B676936;
case 0x67693c:c.instructions+=9;goto B67693c;
case 0x676942:c.instructions+=8;goto B676942;
case 0x676945:c.instructions+=7;goto B676945;
case 0x67694b:c.instructions+=6;goto B67694b;
case 0x676951:c.instructions+=5;goto B676951;
case 0x676954:c.instructions+=4;goto B676954;
case 0x676957:c.instructions+=3;goto B676957;
case 0x67695d:c.instructions+=2;goto B67695d;
case 0x676960:c.instructions+=1;goto B676960;
case 0x676962:goto L676962;
case 0x676965:c.instructions+=2;goto B676965;
case 0x676968:c.instructions+=1;goto B676968;
case 0x67696a:goto L67696a;
case 0x67696d:c.instructions+=1;goto B67696d;
case 0x67696f:goto L67696f;
case 0x676975:c.instructions+=7;goto B676975;
case 0x676978:c.instructions+=6;goto B676978;
case 0x67697c:c.instructions+=5;goto B67697c;
case 0x67697f:c.instructions+=4;goto B67697f;
case 0x676982:c.instructions+=3;goto B676982;
case 0x676985:c.instructions+=2;goto B676985;
case 0x676988:c.instructions+=1;goto B676988;
case 0x67698e:goto L67698e;
case 0x676991:c.instructions+=12;goto B676991;
case 0x676992:c.instructions+=11;goto B676992;
case 0x676995:c.instructions+=10;goto B676995;
case 0x67699a:c.instructions+=9;goto B67699a;
case 0x67699d:c.instructions+=8;goto B67699d;
case 0x6769a0:c.instructions+=7;goto B6769a0;
case 0x6769a6:c.instructions+=6;goto B6769a6;
case 0x6769ac:c.instructions+=5;goto B6769ac;
case 0x6769af:c.instructions+=4;goto B6769af;
case 0x6769b1:c.instructions+=3;goto B6769b1;
case 0x6769b4:c.instructions+=2;goto B6769b4;
case 0x6769b7:c.instructions+=1;goto B6769b7;
case 0x6769bc:goto L6769bc;
case 0x6769be:c.instructions+=2;goto B6769be;
case 0x6769c1:c.instructions+=1;goto B6769c1;
case 0x6769c7:goto L6769c7;
case 0x6769ca:c.instructions+=10;goto B6769ca;
case 0x6769cb:c.instructions+=9;goto B6769cb;
case 0x6769ce:c.instructions+=8;goto B6769ce;
case 0x6769d3:c.instructions+=7;goto B6769d3;
case 0x6769d9:c.instructions+=6;goto B6769d9;
case 0x6769db:c.instructions+=5;goto B6769db;
case 0x6769e1:c.instructions+=4;goto B6769e1;
case 0x6769e4:c.instructions+=3;goto B6769e4;
case 0x6769e5:c.instructions+=2;goto B6769e5;
case 0x6769e8:c.instructions+=1;goto B6769e8;
case 0x6769ed:goto L6769ed;
case 0x6769ef:c.instructions+=2;goto B6769ef;
case 0x6769f2:c.instructions+=1;goto B6769f2;
case 0x6769f8:goto L6769f8;
case 0x6769fb:c.instructions+=9;goto B6769fb;
case 0x6769fd:c.instructions+=8;goto B6769fd;
case 0x6769fe:c.instructions+=7;goto B6769fe;
case 0x676a04:c.instructions+=6;goto B676a04;
case 0x676a09:c.instructions+=5;goto B676a09;
case 0x676a0f:c.instructions+=4;goto B676a0f;
case 0x676a11:c.instructions+=3;goto B676a11;
case 0x676a12:c.instructions+=2;goto B676a12;
case 0x676a15:c.instructions+=1;goto B676a15;
case 0x676a1a:goto L676a1a;
case 0x676a1c:c.instructions+=2;goto B676a1c;
case 0x676a1f:c.instructions+=1;goto B676a1f;
case 0x676a25:goto L676a25;
case 0x676a27:c.instructions+=7;goto B676a27;
case 0x676a2a:c.instructions+=6;goto B676a2a;
case 0x676a2c:c.instructions+=5;goto B676a2c;
case 0x676a32:c.instructions+=4;goto B676a32;
case 0x676a38:c.instructions+=3;goto B676a38;
case 0x676a3b:c.instructions+=2;goto B676a3b;
case 0x676a3e:c.instructions+=1;goto B676a3e;
case 0x676a43:goto L676a43;
case 0x676a45:c.instructions+=2;goto B676a45;
case 0x676a48:c.instructions+=1;goto B676a48;
case 0x676a4e:goto L676a4e;
case 0x676a4f:c.instructions+=7;goto B676a4f;
case 0x676a52:c.instructions+=6;goto B676a52;
case 0x676a54:c.instructions+=5;goto B676a54;
case 0x676a5a:c.instructions+=4;goto B676a5a;
case 0x676a60:c.instructions+=3;goto B676a60;
case 0x676a63:c.instructions+=2;goto B676a63;
case 0x676a66:c.instructions+=1;goto B676a66;
case 0x676a6b:goto L676a6b;
case 0x676a6d:c.instructions+=2;goto B676a6d;
case 0x676a70:c.instructions+=1;goto B676a70;
case 0x676a76:goto L676a76;
case 0x676a78:c.instructions+=7;goto B676a78;
case 0x676a7e:c.instructions+=6;goto B676a7e;
case 0x676a80:c.instructions+=5;goto B676a80;
case 0x676a86:c.instructions+=4;goto B676a86;
case 0x676a8c:c.instructions+=3;goto B676a8c;
case 0x676a8f:c.instructions+=2;goto B676a8f;
case 0x676a92:c.instructions+=1;goto B676a92;
case 0x676a97:goto L676a97;
case 0x676a99:c.instructions+=2;goto B676a99;
case 0x676a9c:c.instructions+=1;goto B676a9c;
case 0x676aa2:goto L676aa2;
case 0x676aa3:c.instructions+=7;goto B676aa3;
case 0x676aa6:c.instructions+=6;goto B676aa6;
case 0x676aa8:c.instructions+=5;goto B676aa8;
case 0x676aae:c.instructions+=4;goto B676aae;
case 0x676ab1:c.instructions+=3;goto B676ab1;
case 0x676ab4:c.instructions+=2;goto B676ab4;
case 0x676ab7:c.instructions+=1;goto B676ab7;
case 0x676abc:goto L676abc;
case 0x676abe:c.instructions+=2;goto B676abe;
case 0x676ac1:c.instructions+=1;goto B676ac1;
case 0x676ac7:goto L676ac7;
case 0x676ac8:c.instructions+=7;goto B676ac8;
case 0x676acb:c.instructions+=6;goto B676acb;
case 0x676acd:c.instructions+=5;goto B676acd;
case 0x676ad0:c.instructions+=4;goto B676ad0;
case 0x676ad3:c.instructions+=3;goto B676ad3;
case 0x676ad6:c.instructions+=2;goto B676ad6;
case 0x676ad9:c.instructions+=1;goto B676ad9;
case 0x676ade:goto L676ade;
case 0x676ae0:c.instructions+=2;goto B676ae0;
case 0x676ae3:c.instructions+=1;goto B676ae3;
case 0x676ae9:goto L676ae9;
case 0x676aea:c.instructions+=7;goto B676aea;
case 0x676aed:c.instructions+=6;goto B676aed;
case 0x676aef:c.instructions+=5;goto B676aef;
case 0x676af5:c.instructions+=4;goto B676af5;
case 0x676af8:c.instructions+=3;goto B676af8;
case 0x676afb:c.instructions+=2;goto B676afb;
case 0x676afe:c.instructions+=1;goto B676afe;
case 0x676b03:goto L676b03;
case 0x676b05:c.instructions+=2;goto B676b05;
case 0x676b08:c.instructions+=1;goto B676b08;
case 0x676b0e:goto L676b0e;
case 0x676b0f:c.instructions+=7;goto B676b0f;
case 0x676b12:c.instructions+=6;goto B676b12;
case 0x676b14:c.instructions+=5;goto B676b14;
case 0x676b17:c.instructions+=4;goto B676b17;
case 0x676b1a:c.instructions+=3;goto B676b1a;
case 0x676b1d:c.instructions+=2;goto B676b1d;
case 0x676b20:c.instructions+=1;goto B676b20;
case 0x676b25:goto L676b25;
case 0x676b27:c.instructions+=2;goto B676b27;
case 0x676b2a:c.instructions+=1;goto B676b2a;
case 0x676b30:goto L676b30;
case 0x676b31:c.instructions+=7;goto B676b31;
case 0x676b34:c.instructions+=6;goto B676b34;
case 0x676b36:c.instructions+=5;goto B676b36;
case 0x676b3c:c.instructions+=4;goto B676b3c;
case 0x676b3f:c.instructions+=3;goto B676b3f;
case 0x676b42:c.instructions+=2;goto B676b42;
case 0x676b45:c.instructions+=1;goto B676b45;
case 0x676b4a:goto L676b4a;
case 0x676b4c:c.instructions+=2;goto B676b4c;
case 0x676b4f:c.instructions+=1;goto B676b4f;
case 0x676b55:goto L676b55;
case 0x676b56:c.instructions+=7;goto B676b56;
case 0x676b59:c.instructions+=6;goto B676b59;
case 0x676b5b:c.instructions+=5;goto B676b5b;
case 0x676b5e:c.instructions+=4;goto B676b5e;
case 0x676b61:c.instructions+=3;goto B676b61;
case 0x676b64:c.instructions+=2;goto B676b64;
case 0x676b67:c.instructions+=1;goto B676b67;
case 0x676b6c:goto L676b6c;
case 0x676b6e:c.instructions+=2;goto B676b6e;
case 0x676b71:c.instructions+=1;goto B676b71;
case 0x676b77:goto L676b77;
case 0x676b78:c.instructions+=7;goto B676b78;
case 0x676b7b:c.instructions+=6;goto B676b7b;
case 0x676b7d:c.instructions+=5;goto B676b7d;
case 0x676b83:c.instructions+=4;goto B676b83;
case 0x676b86:c.instructions+=3;goto B676b86;
case 0x676b89:c.instructions+=2;goto B676b89;
case 0x676b8c:c.instructions+=1;goto B676b8c;
case 0x676b91:goto L676b91;
case 0x676b93:c.instructions+=2;goto B676b93;
case 0x676b96:c.instructions+=1;goto B676b96;
case 0x676b9c:goto L676b9c;
case 0x676b9d:c.instructions+=7;goto B676b9d;
case 0x676ba0:c.instructions+=6;goto B676ba0;
case 0x676ba2:c.instructions+=5;goto B676ba2;
case 0x676ba5:c.instructions+=4;goto B676ba5;
case 0x676ba8:c.instructions+=3;goto B676ba8;
case 0x676bab:c.instructions+=2;goto B676bab;
case 0x676bae:c.instructions+=1;goto B676bae;
case 0x676bb3:goto L676bb3;
case 0x676bb5:c.instructions+=2;goto B676bb5;
case 0x676bb8:c.instructions+=1;goto B676bb8;
case 0x676bba:goto L676bba;
case 0x676bbb:c.instructions+=7;goto B676bbb;
case 0x676bbe:c.instructions+=6;goto B676bbe;
case 0x676bc0:c.instructions+=5;goto B676bc0;
case 0x676bc6:c.instructions+=4;goto B676bc6;
case 0x676bc9:c.instructions+=3;goto B676bc9;
case 0x676bcc:c.instructions+=2;goto B676bcc;
case 0x676bcf:c.instructions+=1;goto B676bcf;
case 0x676bd4:goto L676bd4;
case 0x676bd6:c.instructions+=2;goto B676bd6;
case 0x676bd9:c.instructions+=1;goto B676bd9;
case 0x676bdb:goto L676bdb;
case 0x676bdd:c.instructions+=7;goto B676bdd;
case 0x676be0:c.instructions+=6;goto B676be0;
case 0x676be2:c.instructions+=5;goto B676be2;
case 0x676be5:c.instructions+=4;goto B676be5;
case 0x676be8:c.instructions+=3;goto B676be8;
case 0x676beb:c.instructions+=2;goto B676beb;
case 0x676bee:c.instructions+=1;goto B676bee;
case 0x676bf3:goto L676bf3;
case 0x676bf5:c.instructions+=2;goto B676bf5;
case 0x676bf8:c.instructions+=1;goto B676bf8;
case 0x676bfa:goto L676bfa;
case 0x676bfd:c.instructions+=6;goto B676bfd;
case 0x676bff:c.instructions+=5;goto B676bff;
case 0x676c02:c.instructions+=4;goto B676c02;
case 0x676c05:c.instructions+=3;goto B676c05;
case 0x676c07:c.instructions+=2;goto B676c07;
case 0x676c09:c.instructions+=1;goto B676c09;
case 0x676c0c:goto L676c0c;
case 0x676c0e:goto L676c0e;
case 0x676c10:c.instructions+=2;goto B676c10;
case 0x676c13:c.instructions+=1;goto B676c13;
case 0x676c16:goto L676c16;
case 0x676c18:goto L676c18;
case 0x676c1e:c.instructions+=2;goto B676c1e;
case 0x676c21:c.instructions+=1;goto B676c21;
case 0x676c24:goto L676c24;
case 0x676c26:goto L676c26;
case 0x676c29:goto L676c29;
case 0x676c2c:c.instructions+=1;goto B676c2c;
case 0x676c31:goto L676c31;
case 0x676c34:c.instructions+=6;goto B676c34;
case 0x676c35:c.instructions+=5;goto B676c35;
case 0x676c36:c.instructions+=4;goto B676c36;
case 0x676c37:c.instructions+=3;goto B676c37;
case 0x676c38:c.instructions+=2;goto B676c38;
case 0x676c39:c.instructions+=1;goto B676c39;
case 0x676c3c:goto L676c3c;
case 0x676c3e:c.instructions+=12;goto B676c3e;
case 0x676c3f:c.instructions+=11;goto B676c3f;
case 0x676c41:c.instructions+=10;goto B676c41;
case 0x676c47:c.instructions+=9;goto B676c47;
case 0x676c48:c.instructions+=8;goto B676c48;
case 0x676c49:c.instructions+=7;goto B676c49;
case 0x676c4b:c.instructions+=6;goto B676c4b;
case 0x676c4e:c.instructions+=5;goto B676c4e;
case 0x676c50:c.instructions+=4;goto B676c50;
case 0x676c54:c.instructions+=3;goto B676c54;
case 0x676c55:c.instructions+=2;goto B676c55;
case 0x676c58:c.instructions+=1;goto B676c58;
case 0x676c5a:goto L676c5a;
case 0x676c5d:c.instructions+=1;goto B676c5d;
case 0x676c5f:goto L676c5f;
case 0x676c62:c.instructions+=9;goto B676c62;
case 0x676c63:c.instructions+=8;goto B676c63;
case 0x676c64:c.instructions+=7;goto B676c64;
case 0x676c67:c.instructions+=6;goto B676c67;
case 0x676c6c:c.instructions+=5;goto B676c6c;
case 0x676c6f:c.instructions+=4;goto B676c6f;
case 0x676c74:c.instructions+=3;goto B676c74;
case 0x676c75:c.instructions+=2;goto B676c75;
case 0x676c78:c.instructions+=1;goto B676c78;
case 0x676c7d:goto L676c7d;
case 0x676c7f:c.instructions+=2;goto B676c7f;
case 0x676c81:c.instructions+=1;goto B676c81;
case 0x676c83:goto L676c83;
case 0x676c86:c.instructions+=1;goto B676c86;
case 0x676c88:goto L676c88;
case 0x676c8b:c.instructions+=10;goto B676c8b;
case 0x676c8d:c.instructions+=9;goto B676c8d;
case 0x676c8e:c.instructions+=8;goto B676c8e;
case 0x676c91:c.instructions+=7;goto B676c91;
case 0x676c96:c.instructions+=6;goto B676c96;
case 0x676c9b:c.instructions+=5;goto B676c9b;
case 0x676c9e:c.instructions+=4;goto B676c9e;
case 0x676ca0:c.instructions+=3;goto B676ca0;
case 0x676ca1:c.instructions+=2;goto B676ca1;
case 0x676ca4:c.instructions+=1;goto B676ca4;
case 0x676ca9:goto L676ca9;
case 0x676cab:c.instructions+=2;goto B676cab;
case 0x676cad:c.instructions+=1;goto B676cad;
case 0x676caf:goto L676caf;
case 0x676cb1:goto L676cb1;
case 0x676cb4:c.instructions+=1;goto B676cb4;
case 0x676cb9:goto L676cb9;
case 0x676cba:c.instructions+=6;goto B676cba;
case 0x676cbc:c.instructions+=5;goto B676cbc;
case 0x676cbd:c.instructions+=4;goto B676cbd;
case 0x676cbe:c.instructions+=3;goto B676cbe;
case 0x676cbf:c.instructions+=2;goto B676cbf;
case 0x676cc0:c.instructions+=1;goto B676cc0;
case 0x676cc3:goto L676cc3;
case 0x676cc6:c.instructions+=8;goto B676cc6;
case 0x676ccc:c.instructions+=7;goto B676ccc;
case 0x676ccd:c.instructions+=6;goto B676ccd;
case 0x676cce:c.instructions+=5;goto B676cce;
case 0x676cd1:c.instructions+=4;goto B676cd1;
case 0x676cd2:c.instructions+=3;goto B676cd2;
case 0x676cd3:c.instructions+=2;goto B676cd3;
case 0x676cd6:c.instructions+=1;goto B676cd6;
case 0x676cdb:goto L676cdb;
case 0x676ce1:c.instructions+=9;goto B676ce1;
case 0x676ce4:c.instructions+=8;goto B676ce4;
case 0x676ce5:c.instructions+=7;goto B676ce5;
case 0x676ce6:c.instructions+=6;goto B676ce6;
case 0x676ce9:c.instructions+=5;goto B676ce9;
case 0x676cea:c.instructions+=4;goto B676cea;
case 0x676ceb:c.instructions+=3;goto B676ceb;
case 0x676cee:c.instructions+=2;goto B676cee;
case 0x676cf1:c.instructions+=1;goto B676cf1;
case 0x676cf6:goto L676cf6;
case 0x676cfc:c.instructions+=9;goto B676cfc;
case 0x676cff:c.instructions+=8;goto B676cff;
case 0x676d00:c.instructions+=7;goto B676d00;
case 0x676d01:c.instructions+=6;goto B676d01;
case 0x676d04:c.instructions+=5;goto B676d04;
case 0x676d05:c.instructions+=4;goto B676d05;
case 0x676d06:c.instructions+=3;goto B676d06;
case 0x676d09:c.instructions+=2;goto B676d09;
case 0x676d0c:c.instructions+=1;goto B676d0c;
case 0x676d11:goto L676d11;
case 0x676d17:c.instructions+=9;goto B676d17;
case 0x676d1a:c.instructions+=8;goto B676d1a;
case 0x676d1b:c.instructions+=7;goto B676d1b;
case 0x676d1c:c.instructions+=6;goto B676d1c;
case 0x676d1f:c.instructions+=5;goto B676d1f;
case 0x676d20:c.instructions+=4;goto B676d20;
case 0x676d21:c.instructions+=3;goto B676d21;
case 0x676d24:c.instructions+=2;goto B676d24;
case 0x676d2a:c.instructions+=1;goto B676d2a;
case 0x676d2f:goto L676d2f;
case 0x676d35:c.instructions+=9;goto B676d35;
case 0x676d38:c.instructions+=8;goto B676d38;
case 0x676d39:c.instructions+=7;goto B676d39;
case 0x676d3a:c.instructions+=6;goto B676d3a;
case 0x676d3d:c.instructions+=5;goto B676d3d;
case 0x676d3e:c.instructions+=4;goto B676d3e;
case 0x676d3f:c.instructions+=3;goto B676d3f;
case 0x676d42:c.instructions+=2;goto B676d42;
case 0x676d48:c.instructions+=1;goto B676d48;
case 0x676d4d:goto L676d4d;
case 0x676d53:c.instructions+=9;goto B676d53;
case 0x676d56:c.instructions+=8;goto B676d56;
case 0x676d57:c.instructions+=7;goto B676d57;
case 0x676d58:c.instructions+=6;goto B676d58;
case 0x676d5b:c.instructions+=5;goto B676d5b;
case 0x676d5c:c.instructions+=4;goto B676d5c;
case 0x676d5d:c.instructions+=3;goto B676d5d;
case 0x676d60:c.instructions+=2;goto B676d60;
case 0x676d66:c.instructions+=1;goto B676d66;
case 0x676d6b:goto L676d6b;
case 0x676d71:c.instructions+=9;goto B676d71;
case 0x676d74:c.instructions+=8;goto B676d74;
case 0x676d75:c.instructions+=7;goto B676d75;
case 0x676d76:c.instructions+=6;goto B676d76;
case 0x676d79:c.instructions+=5;goto B676d79;
case 0x676d7a:c.instructions+=4;goto B676d7a;
case 0x676d7b:c.instructions+=3;goto B676d7b;
case 0x676d7e:c.instructions+=2;goto B676d7e;
case 0x676d84:c.instructions+=1;goto B676d84;
case 0x676d89:goto L676d89;
case 0x676d8c:c.instructions+=5;goto B676d8c;
case 0x676d92:c.instructions+=4;goto B676d92;
case 0x676d94:c.instructions+=3;goto B676d94;
case 0x676d97:c.instructions+=2;goto B676d97;
case 0x676d98:c.instructions+=1;goto B676d98;
case 0x676d9d:goto L676d9d;
case 0x676d9f:c.instructions+=3;goto B676d9f;
case 0x676da0:c.instructions+=2;goto B676da0;
case 0x676da3:c.instructions+=1;goto B676da3;
case 0x676da5:goto L676da5;
case 0x676daa:c.instructions+=1;goto B676daa;
case 0x676daf:goto L676daf;
case 0x676db1:c.instructions+=2;goto B676db1;
case 0x676db3:c.instructions+=1;goto B676db3;
case 0x676db6:goto L676db6;
case 0x676dba:c.instructions+=4;goto B676dba;
case 0x676dbb:c.instructions+=3;goto B676dbb;
case 0x676dbd:c.instructions+=2;goto B676dbd;
case 0x676dc0:c.instructions+=1;goto B676dc0;
case 0x676dc2:goto L676dc2;
case 0x676dc4:goto L676dc4;
case 0x676dc7:c.instructions+=3;goto B676dc7;
case 0x676dc9:c.instructions+=2;goto B676dc9;
case 0x676dcd:c.instructions+=1;goto B676dcd;
case 0x676dd2:goto L676dd2;
case 0x676dd4:c.instructions+=2;goto B676dd4;
case 0x676dd6:c.instructions+=1;goto B676dd6;
case 0x676ddc:goto L676ddc;
case 0x676ddd:c.instructions+=2;goto B676ddd;
case 0x676de0:c.instructions+=1;goto B676de0;
case 0x676de2:goto L676de2;
case 0x676de5:c.instructions+=1;goto B676de5;
case 0x676deb:goto L676deb;
case 0x676dee:c.instructions+=22;goto B676dee;
case 0x676df1:c.instructions+=21;goto B676df1;
case 0x676df3:c.instructions+=20;goto B676df3;
case 0x676df6:c.instructions+=19;goto B676df6;
case 0x676dfc:c.instructions+=18;goto B676dfc;
case 0x676dff:c.instructions+=17;goto B676dff;
case 0x676e01:c.instructions+=16;goto B676e01;
case 0x676e07:c.instructions+=15;goto B676e07;
case 0x676e0a:c.instructions+=14;goto B676e0a;
case 0x676e0c:c.instructions+=13;goto B676e0c;
case 0x676e12:c.instructions+=12;goto B676e12;
case 0x676e15:c.instructions+=11;goto B676e15;
case 0x676e17:c.instructions+=10;goto B676e17;
case 0x676e1d:c.instructions+=9;goto B676e1d;
case 0x676e20:c.instructions+=8;goto B676e20;
case 0x676e22:c.instructions+=7;goto B676e22;
case 0x676e28:c.instructions+=6;goto B676e28;
case 0x676e2b:c.instructions+=5;goto B676e2b;
case 0x676e2d:c.instructions+=4;goto B676e2d;
case 0x676e2f:c.instructions+=3;goto B676e2f;
case 0x676e35:c.instructions+=2;goto B676e35;
case 0x676e38:c.instructions+=1;goto B676e38;
case 0x676e3b:goto L676e3b;
case 0x676e3e:c.instructions+=24;goto B676e3e;
case 0x676e44:c.instructions+=23;goto B676e44;
case 0x676e47:c.instructions+=22;goto B676e47;
case 0x676e4a:c.instructions+=21;goto B676e4a;
case 0x676e4c:c.instructions+=20;goto B676e4c;
case 0x676e4f:c.instructions+=19;goto B676e4f;
case 0x676e52:c.instructions+=18;goto B676e52;
case 0x676e58:c.instructions+=17;goto B676e58;
case 0x676e5e:c.instructions+=16;goto B676e5e;
case 0x676e61:c.instructions+=15;goto B676e61;
case 0x676e67:c.instructions+=14;goto B676e67;
case 0x676e6d:c.instructions+=13;goto B676e6d;
case 0x676e70:c.instructions+=12;goto B676e70;
case 0x676e76:c.instructions+=11;goto B676e76;
case 0x676e7c:c.instructions+=10;goto B676e7c;
case 0x676e7f:c.instructions+=9;goto B676e7f;
case 0x676e85:c.instructions+=8;goto B676e85;
case 0x676e8b:c.instructions+=7;goto B676e8b;
case 0x676e8e:c.instructions+=6;goto B676e8e;
case 0x676e94:c.instructions+=5;goto B676e94;
case 0x676e9a:c.instructions+=4;goto B676e9a;
case 0x676e9d:c.instructions+=3;goto B676e9d;
case 0x676ea0:c.instructions+=2;goto B676ea0;
case 0x676ea3:c.instructions+=1;goto B676ea3;
case 0x676ea5:goto L676ea5;
case 0x676ea8:c.instructions+=12;goto B676ea8;
case 0x676ea9:c.instructions+=11;goto B676ea9;
case 0x676eaa:c.instructions+=10;goto B676eaa;
case 0x676ead:c.instructions+=9;goto B676ead;
case 0x676eb2:c.instructions+=8;goto B676eb2;
case 0x676eb5:c.instructions+=7;goto B676eb5;
case 0x676eb8:c.instructions+=6;goto B676eb8;
case 0x676ebe:c.instructions+=5;goto B676ebe;
case 0x676ec1:c.instructions+=4;goto B676ec1;
case 0x676ec3:c.instructions+=3;goto B676ec3;
case 0x676ec6:c.instructions+=2;goto B676ec6;
case 0x676ec9:c.instructions+=1;goto B676ec9;
case 0x676ece:goto L676ece;
case 0x676ed0:c.instructions+=2;goto B676ed0;
case 0x676ed2:c.instructions+=1;goto B676ed2;
case 0x676ed8:goto L676ed8;
case 0x676edb:c.instructions+=9;goto B676edb;
case 0x676edd:c.instructions+=8;goto B676edd;
case 0x676ee0:c.instructions+=7;goto B676ee0;
case 0x676ee5:c.instructions+=6;goto B676ee5;
case 0x676ee8:c.instructions+=5;goto B676ee8;
case 0x676eea:c.instructions+=4;goto B676eea;
case 0x676eed:c.instructions+=3;goto B676eed;
case 0x676eee:c.instructions+=2;goto B676eee;
case 0x676ef1:c.instructions+=1;goto B676ef1;
case 0x676ef6:goto L676ef6;
case 0x676ef8:c.instructions+=2;goto B676ef8;
case 0x676efa:c.instructions+=1;goto B676efa;
case 0x676f00:goto L676f00;
case 0x676f02:c.instructions+=7;goto B676f02;
case 0x676f03:c.instructions+=6;goto B676f03;
case 0x676f06:c.instructions+=5;goto B676f06;
case 0x676f08:c.instructions+=4;goto B676f08;
case 0x676f0b:c.instructions+=3;goto B676f0b;
case 0x676f0e:c.instructions+=2;goto B676f0e;
case 0x676f11:c.instructions+=1;goto B676f11;
case 0x676f16:goto L676f16;
case 0x676f18:c.instructions+=2;goto B676f18;
case 0x676f1a:c.instructions+=1;goto B676f1a;
case 0x676f20:goto L676f20;
case 0x676f23:c.instructions+=10;goto B676f23;
case 0x676f24:c.instructions+=9;goto B676f24;
case 0x676f27:c.instructions+=8;goto B676f27;
case 0x676f2c:c.instructions+=7;goto B676f2c;
case 0x676f2f:c.instructions+=6;goto B676f2f;
case 0x676f31:c.instructions+=5;goto B676f31;
case 0x676f34:c.instructions+=4;goto B676f34;
case 0x676f37:c.instructions+=3;goto B676f37;
case 0x676f38:c.instructions+=2;goto B676f38;
case 0x676f3b:c.instructions+=1;goto B676f3b;
case 0x676f40:goto L676f40;
case 0x676f42:c.instructions+=2;goto B676f42;
case 0x676f44:c.instructions+=1;goto B676f44;
case 0x676f4a:goto L676f4a;
case 0x676f4d:c.instructions+=9;goto B676f4d;
case 0x676f4f:c.instructions+=8;goto B676f4f;
case 0x676f50:c.instructions+=7;goto B676f50;
case 0x676f53:c.instructions+=6;goto B676f53;
case 0x676f58:c.instructions+=5;goto B676f58;
case 0x676f5b:c.instructions+=4;goto B676f5b;
case 0x676f5d:c.instructions+=3;goto B676f5d;
case 0x676f5e:c.instructions+=2;goto B676f5e;
case 0x676f61:c.instructions+=1;goto B676f61;
case 0x676f66:goto L676f66;
case 0x676f68:c.instructions+=2;goto B676f68;
case 0x676f6a:c.instructions+=1;goto B676f6a;
case 0x676f70:goto L676f70;
case 0x676f73:c.instructions+=9;goto B676f73;
case 0x676f75:c.instructions+=8;goto B676f75;
case 0x676f76:c.instructions+=7;goto B676f76;
case 0x676f79:c.instructions+=6;goto B676f79;
case 0x676f7e:c.instructions+=5;goto B676f7e;
case 0x676f81:c.instructions+=4;goto B676f81;
case 0x676f83:c.instructions+=3;goto B676f83;
case 0x676f84:c.instructions+=2;goto B676f84;
case 0x676f87:c.instructions+=1;goto B676f87;
case 0x676f8c:goto L676f8c;
case 0x676f8e:c.instructions+=2;goto B676f8e;
case 0x676f90:c.instructions+=1;goto B676f90;
case 0x676f96:goto L676f96;
case 0x676f99:c.instructions+=10;goto B676f99;
case 0x676f9a:c.instructions+=9;goto B676f9a;
case 0x676f9d:c.instructions+=8;goto B676f9d;
case 0x676fa2:c.instructions+=7;goto B676fa2;
case 0x676fa5:c.instructions+=6;goto B676fa5;
case 0x676fa7:c.instructions+=5;goto B676fa7;
case 0x676faa:c.instructions+=4;goto B676faa;
case 0x676fad:c.instructions+=3;goto B676fad;
case 0x676fae:c.instructions+=2;goto B676fae;
case 0x676fb1:c.instructions+=1;goto B676fb1;
case 0x676fb6:goto L676fb6;
case 0x676fb8:c.instructions+=2;goto B676fb8;
case 0x676fba:c.instructions+=1;goto B676fba;
case 0x676fc0:goto L676fc0;
case 0x676fc1:c.instructions+=7;goto B676fc1;
case 0x676fc4:c.instructions+=6;goto B676fc4;
case 0x676fc6:c.instructions+=5;goto B676fc6;
case 0x676fc9:c.instructions+=4;goto B676fc9;
case 0x676fcc:c.instructions+=3;goto B676fcc;
case 0x676fcf:c.instructions+=2;goto B676fcf;
case 0x676fd2:c.instructions+=1;goto B676fd2;
case 0x676fd7:goto L676fd7;
case 0x676fd9:c.instructions+=2;goto B676fd9;
case 0x676fdb:c.instructions+=1;goto B676fdb;
case 0x676fe1:goto L676fe1;
case 0x676fe2:c.instructions+=7;goto B676fe2;
case 0x676fe5:c.instructions+=6;goto B676fe5;
case 0x676fe7:c.instructions+=5;goto B676fe7;
case 0x676fea:c.instructions+=4;goto B676fea;
case 0x676fed:c.instructions+=3;goto B676fed;
case 0x676ff0:c.instructions+=2;goto B676ff0;
case 0x676ff3:c.instructions+=1;goto B676ff3;
case 0x676ff8:goto L676ff8;
case 0x676ffa:c.instructions+=2;goto B676ffa;
case 0x676ffc:c.instructions+=1;goto B676ffc;
default:missing_instruction(c.pc);}
B676003:L676003:{c.instructions+=3;NFSU2_TR(0x676003);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676006:{NFSU2_TR(0x676006);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x2ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B676009:{NFSU2_TR(0x676009);
{goto L6760cf;}
}
B67600e:L67600e:{c.instructions+=4;NFSU2_TR(0x67600e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B676010:{NFSU2_TR(0x676010);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B676013:{NFSU2_TR(0x676013);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676016:{NFSU2_TR(0x676016);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6760cf;}}
}
B67601c:L67601c:{c.instructions+=21;NFSU2_TR(0x67601c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67601f:{NFSU2_TR(0x67601f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676022:{NFSU2_TR(0x676022);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676025:{NFSU2_TR(0x676025);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B676028:{NFSU2_TR(0x676028);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B67602b:{NFSU2_TR(0x67602b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67602e:{NFSU2_TR(0x67602e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676031:{NFSU2_TR(0x676031);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676034:{NFSU2_TR(0x676034);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B676036:{NFSU2_TR(0x676036);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B676039:{NFSU2_TR(0x676039);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B67603c:{NFSU2_TR(0x67603c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67603f:{NFSU2_TR(0x67603f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B676042:{NFSU2_TR(0x676042);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B676045:{NFSU2_TR(0x676045);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B676048:{NFSU2_TR(0x676048);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B67604b:{NFSU2_TR(0x67604b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67604d:{NFSU2_TR(0x67604d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676050:{NFSU2_TR(0x676050);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+0))));
}
B676052:{NFSU2_TR(0x676052);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B676054:{NFSU2_TR(0x676054);
if(r1(R+518)){{goto L67605e;}}
}
B676056:L676056:{c.instructions+=3;NFSU2_TR(0x676056);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676059:{NFSU2_TR(0x676059);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x17ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B67605c:{NFSU2_TR(0x67605c);
{goto L676068;}
}
B67605e:L67605e:{c.instructions+=2;NFSU2_TR(0x67605e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B676060:{NFSU2_TR(0x676060);
if(r1(R+518)){{goto L676068;}}
}
B676062:L676062:{c.instructions+=2;NFSU2_TR(0x676062);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676065:{NFSU2_TR(0x676065);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x2ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B676068:L676068:{c.instructions+=4;NFSU2_TR(0x676068);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B676069:{NFSU2_TR(0x676069);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B67606c:{NFSU2_TR(0x67606c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67606f:{NFSU2_TR(0x67606f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67601cu);}goto L67601c;}}
}
B676071:L676071:{c.instructions+=1;NFSU2_TR(0x676071);
{goto L6760cf;}
}
B676073:L676073:{c.instructions+=3;NFSU2_TR(0x676073);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B676077:{NFSU2_TR(0x676077);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67607b:{NFSU2_TR(0x67607b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6760cf;}}
}
B67607d:L67607d:{c.instructions+=19;NFSU2_TR(0x67607d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676080:{NFSU2_TR(0x676080);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676083:{NFSU2_TR(0x676083);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676086:{NFSU2_TR(0x676086);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676089:{NFSU2_TR(0x676089);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67608c:{NFSU2_TR(0x67608c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B67608f:{NFSU2_TR(0x67608f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B676092:{NFSU2_TR(0x676092);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B676095:{NFSU2_TR(0x676095);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B676098:{NFSU2_TR(0x676098);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67609b:{NFSU2_TR(0x67609b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67609e:{NFSU2_TR(0x67609e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6760a1:{NFSU2_TR(0x6760a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6760a4:{NFSU2_TR(0x6760a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6760a7:{NFSU2_TR(0x6760a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6760aa:{NFSU2_TR(0x6760aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6760ac:{NFSU2_TR(0x6760ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+0))));
}
B6760ae:{NFSU2_TR(0x6760ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6760b0:{NFSU2_TR(0x6760b0);
if(r1(R+518)){{goto L6760ba;}}
}
B6760b2:L6760b2:{c.instructions+=3;NFSU2_TR(0x6760b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6760b5:{NFSU2_TR(0x6760b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x17ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6760b8:{NFSU2_TR(0x6760b8);
{goto L6760c4;}
}
B6760ba:L6760ba:{c.instructions+=2;NFSU2_TR(0x6760ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6760bc:{NFSU2_TR(0x6760bc);
if(r1(R+518)){{goto L6760c4;}}
}
B6760be:L6760be:{c.instructions+=2;NFSU2_TR(0x6760be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6760c1:{NFSU2_TR(0x6760c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x2ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6760c4:L6760c4:{c.instructions+=4;NFSU2_TR(0x6760c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6760c7:{NFSU2_TR(0x6760c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6760ca:{NFSU2_TR(0x6760ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6760cd:{NFSU2_TR(0x6760cd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67607du);}goto L67607d;}}
}
B6760cf:L6760cf:{c.instructions+=10;NFSU2_TR(0x6760cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6760d2:{NFSU2_TR(0x6760d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6760d5:{NFSU2_TR(0x6760d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6760d8:{NFSU2_TR(0x6760d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6760db:{NFSU2_TR(0x6760db);
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
B6760dd:{NFSU2_TR(0x6760dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6760de:{NFSU2_TR(0x6760de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6760df:{NFSU2_TR(0x6760df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6760e0:{NFSU2_TR(0x6760e0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6760e1:{NFSU2_TR(0x6760e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6760e4:L6760e4:{c.instructions+=12;NFSU2_TR(0x6760e4);
__builtin_memmove((R+28),(R+28),4);
}
B6760e6:{NFSU2_TR(0x6760e6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6760e7:{NFSU2_TR(0x6760e7);
__builtin_memmove((R+20),(R+16),4);
}
B6760e9:{NFSU2_TR(0x6760e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6760ea:{NFSU2_TR(0x6760ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6760eb:{NFSU2_TR(0x6760eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6760ee:{NFSU2_TR(0x6760ee);
__builtin_memmove((R+0),(R+24),4);
}
B6760f0:{NFSU2_TR(0x6760f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6760f1:{NFSU2_TR(0x6760f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6760f4:{NFSU2_TR(0x6760f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6760f5:{NFSU2_TR(0x6760f5);
__builtin_memmove((R+28),(R+4),4);
}
B6760f7:{NFSU2_TR(0x6760f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6760fcull));
TAIL_STATIC(0x575620u,575);
}
B6760fc:L6760fc:{c.instructions+=4;NFSU2_TR(0x6760fc);
__builtin_memmove((R+12),(R+0),4);
}
B6760fe:{NFSU2_TR(0x6760fe);
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
B676100:{NFSU2_TR(0x676100);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B676101:{NFSU2_TR(0x676101);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67610a;}}
}
B676103:L676103:{c.instructions+=2;NFSU2_TR(0x676103);
w4(R+0,u32(0x8007000eull));
}
B676108:{NFSU2_TR(0x676108);
{goto L676144;}
}
B67610a:L67610a:{c.instructions+=4;NFSU2_TR(0x67610a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67610b:{NFSU2_TR(0x67610b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67610e:{NFSU2_TR(0x67610e);
__builtin_memmove((R+4),(R+28),4);
}
B676110:{NFSU2_TR(0x676110);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676115ull));
TAIL_STATIC(0x6753b9u,675);
}
B676115:L676115:{c.instructions+=2;NFSU2_TR(0x676115);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B676117:{NFSU2_TR(0x676117);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67613b;}}
}
B676119:L676119:{c.instructions+=4;NFSU2_TR(0x676119);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67611c:{NFSU2_TR(0x67611c);
__builtin_memmove((R+4),(R+12),4);
}
B67611e:{NFSU2_TR(0x67611e);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B676120:{NFSU2_TR(0x676120);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676123:L676123:{c.instructions+=9;NFSU2_TR(0x676123);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B676126:{NFSU2_TR(0x676126);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B676129:{NFSU2_TR(0x676129);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67612c:{NFSU2_TR(0x67612c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B67612f:{NFSU2_TR(0x67612f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B676131:{NFSU2_TR(0x676131);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+24))));
s4(u32(r4(R+0)),r4(U+0));
}
B676133:{NFSU2_TR(0x676133);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B676136:{NFSU2_TR(0x676136);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B676139:{NFSU2_TR(0x676139);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676123u);}goto L676123;}}
}
B67613b:L67613b:{c.instructions+=2;NFSU2_TR(0x67613b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67613c:{NFSU2_TR(0x67613c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676141ull));
TAIL_STATIC(0x575630u,575);
}
B676141:L676141:{c.instructions+=2;NFSU2_TR(0x676141);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B676142:{NFSU2_TR(0x676142);
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
B676144:L676144:{c.instructions+=5;NFSU2_TR(0x676144);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B676145:{NFSU2_TR(0x676145);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B676146:{NFSU2_TR(0x676146);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B676147:{NFSU2_TR(0x676147);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B676148:{NFSU2_TR(0x676148);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67614b:L67614b:{c.instructions+=13;NFSU2_TR(0x67614b);
__builtin_memmove((R+28),(R+28),4);
}
B67614d:{NFSU2_TR(0x67614d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67614e:{NFSU2_TR(0x67614e);
__builtin_memmove((R+20),(R+16),4);
}
B676150:{NFSU2_TR(0x676150);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B676153:{NFSU2_TR(0x676153);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676154:{NFSU2_TR(0x676154);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676155:{NFSU2_TR(0x676155);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676156:{NFSU2_TR(0x676156);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B676158:{NFSU2_TR(0x676158);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67615b:{NFSU2_TR(0x67615b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67615e:{NFSU2_TR(0x67615e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676161:{NFSU2_TR(0x676161);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676164:{NFSU2_TR(0x676164);
if(r1(R+518)){{goto L6761bb;}}
}
B676166:L676166:{c.instructions+=2;NFSU2_TR(0x676166);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B676169:{NFSU2_TR(0x676169);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L676182;}}
}
B67616b:L67616b:{c.instructions+=3;NFSU2_TR(0x67616b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67616e:{NFSU2_TR(0x67616e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B676170:{NFSU2_TR(0x676170);
if(r1(R+518)){{goto L676182;}}
}
B676172:L676172:{c.instructions+=4;NFSU2_TR(0x676172);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676175:{NFSU2_TR(0x676175);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B676178:{NFSU2_TR(0x676178);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67617b:{NFSU2_TR(0x67617b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B676182:L676182:{c.instructions+=2;NFSU2_TR(0x676182);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B676185:{NFSU2_TR(0x676185);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L676196;}}
}
B676187:L676187:{c.instructions+=3;NFSU2_TR(0x676187);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67618a:{NFSU2_TR(0x67618a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67618c:{NFSU2_TR(0x67618c);
if(r1(R+518)){{goto L676196;}}
}
B67618e:L67618e:{c.instructions+=2;NFSU2_TR(0x67618e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B676194:{NFSU2_TR(0x676194);
if(r1(R+518)){{goto L6761d3;}}
}
B676196:L676196:{c.instructions+=11;NFSU2_TR(0x676196);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676199:{NFSU2_TR(0x676199);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67619c:{NFSU2_TR(0x67619c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67619d:{NFSU2_TR(0x67619d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6761a0:{NFSU2_TR(0x6761a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6761a3:{NFSU2_TR(0x6761a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6761a6:{NFSU2_TR(0x6761a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6761a9:{NFSU2_TR(0x6761a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6761ac:{NFSU2_TR(0x6761ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6761af:{NFSU2_TR(0x6761af);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6761b2:{NFSU2_TR(0x6761b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6761b7ull));
TAIL_STATIC(0x675526u,675);
}
B6761b7:L6761b7:{c.instructions+=2;NFSU2_TR(0x6761b7);
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
B6761b9:{NFSU2_TR(0x6761b9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6761c9;}}
}
B6761bb:L6761bb:{c.instructions+=3;NFSU2_TR(0x6761bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6761be:{NFSU2_TR(0x6761be);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6761c0:{NFSU2_TR(0x6761c0);
if(r1(R+518)){{goto L6761c7;}}
}
B6761c2:L6761c2:{c.instructions+=2;NFSU2_TR(0x6761c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6761c5:{NFSU2_TR(0x6761c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6761c7:L6761c7:{c.instructions+=1;NFSU2_TR(0x6761c7);
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
B6761c9:L6761c9:{c.instructions+=5;NFSU2_TR(0x6761c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6761ca:{NFSU2_TR(0x6761ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6761cb:{NFSU2_TR(0x6761cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6761cc:{NFSU2_TR(0x6761cc);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6761cd:{NFSU2_TR(0x6761cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6761d0:L6761d0:{c.instructions+=1;NFSU2_TR(0x6761d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6761d3:L6761d3:{c.instructions+=5;NFSU2_TR(0x6761d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6761d6:{NFSU2_TR(0x6761d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6761da:{NFSU2_TR(0x6761da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6761dd:{NFSU2_TR(0x6761dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6761e0:{NFSU2_TR(0x6761e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L676222;}}
}
B6761e2:L6761e2:{c.instructions+=5;NFSU2_TR(0x6761e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6761e5:{NFSU2_TR(0x6761e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6761e8:{NFSU2_TR(0x6761e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6761ea:{NFSU2_TR(0x6761ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6761ed:{NFSU2_TR(0x6761ed);
if(r1(R+518)){{goto L67621f;}}
}
B6761ef:L6761ef:{c.instructions+=5;NFSU2_TR(0x6761ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6761f2:{NFSU2_TR(0x6761f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6761f3:{NFSU2_TR(0x6761f3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6761f5:{NFSU2_TR(0x6761f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6761f8:{NFSU2_TR(0x6761f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6761fdull));
TAIL_STATIC(0x672277u,672);
}
B6761fd:L6761fd:{c.instructions+=2;NFSU2_TR(0x6761fd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6761ff:{NFSU2_TR(0x6761ff);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676222;}}
}
B676201:L676201:{c.instructions+=4;NFSU2_TR(0x676201);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676204:{NFSU2_TR(0x676204);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676207:{NFSU2_TR(0x676207);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67620a:{NFSU2_TR(0x67620a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L676211;}}
}
B67620c:L67620c:{c.instructions+=2;NFSU2_TR(0x67620c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67620f:{NFSU2_TR(0x67620f);
{goto L676222;}
}
B676211:L676211:{c.instructions+=3;NFSU2_TR(0x676211);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffff0000ull))));
}
B676216:{NFSU2_TR(0x676216);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B676219:{NFSU2_TR(0x676219);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L676222;}}
}
B67621b:L67621b:{c.instructions+=2;NFSU2_TR(0x67621b);
__builtin_memmove((R+28),(R+12),4);
}
B67621d:{NFSU2_TR(0x67621d);
{goto L676222;}
}
B67621f:L67621f:{c.instructions+=1;NFSU2_TR(0x67621f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676222:L676222:{c.instructions+=5;NFSU2_TR(0x676222);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676225:{NFSU2_TR(0x676225);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B676227:{NFSU2_TR(0x676227);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67622a:{NFSU2_TR(0x67622a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67622d:{NFSU2_TR(0x67622d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L676247;}}
}
B67622f:L67622f:{c.instructions+=2;NFSU2_TR(0x67622f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B676231:{NFSU2_TR(0x676231);
if(r1(R+518)){{goto L676238;}}
}
B676233:L676233:{c.instructions+=2;NFSU2_TR(0x676233);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676236:{NFSU2_TR(0x676236);
{goto L67623e;}
}
B676238:L676238:{c.instructions+=2;NFSU2_TR(0x676238);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67623b:{NFSU2_TR(0x67623b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67623e:L67623e:{c.instructions+=2;NFSU2_TR(0x67623e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B676241:{NFSU2_TR(0x676241);
if(r1(R+518)){{goto L676376;}}
}
B676247:L676247:{c.instructions+=5;NFSU2_TR(0x676247);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67624a:{NFSU2_TR(0x67624a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67624d:{NFSU2_TR(0x67624d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676250:{NFSU2_TR(0x676250);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B676253:{NFSU2_TR(0x676253);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L67625d;}}
}
B676255:L676255:{c.instructions+=3;NFSU2_TR(0x676255);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676258:{NFSU2_TR(0x676258);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B67625b:{NFSU2_TR(0x67625b);
{goto L67625f;}
}
B67625d:L67625d:{c.instructions+=1;NFSU2_TR(0x67625d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67625f:L67625f:{c.instructions+=2;NFSU2_TR(0x67625f);
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
B676261:{NFSU2_TR(0x676261);
if(r1(R+518)){{goto L676386;}}
}
B676267:L676267:{c.instructions+=2;NFSU2_TR(0x676267);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676268:{NFSU2_TR(0x676268);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67626dull));
TAIL_STATIC(0x699cf0u,699);
}
B67626d:L67626d:{c.instructions+=4;NFSU2_TR(0x67626d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676270:{NFSU2_TR(0x676270);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B676273:{NFSU2_TR(0x676273);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676276:{NFSU2_TR(0x676276);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L67627e;}}
}
B676278:L676278:{c.instructions+=2;NFSU2_TR(0x676278);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67627b:{NFSU2_TR(0x67627b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B67627e:L67627e:{c.instructions+=2;NFSU2_TR(0x67627e);
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
B676280:{NFSU2_TR(0x676280);
if(r1(R+518)){{goto L676390;}}
}
B676286:L676286:{c.instructions+=3;NFSU2_TR(0x676286);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676289:{NFSU2_TR(0x676289);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B67628c:{NFSU2_TR(0x67628c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6762ef;}}
}
B67628e:L67628e:{c.instructions+=6;NFSU2_TR(0x67628e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676291:{NFSU2_TR(0x676291);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x840ull))));
}
B676296:{NFSU2_TR(0x676296);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B676298:{NFSU2_TR(0x676298);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B67629a:{NFSU2_TR(0x67629a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67629d:{NFSU2_TR(0x67629d);
if(r1(R+518)){{goto L67636f;}}
}
B6762a3:L6762a3:{c.instructions+=2;NFSU2_TR(0x6762a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6762a5:{NFSU2_TR(0x6762a5);
if(r1(R+519)){{goto L67636f;}}
}
B6762ab:L6762ab:{c.instructions+=3;NFSU2_TR(0x6762ab);
w4(R+4,u32(0x200ull));
}
B6762b0:{NFSU2_TR(0x6762b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6762b2:{NFSU2_TR(0x6762b2);
if(r1(R+518)){{goto L6762c7;}}
}
B6762b4:L6762b4:{c.instructions+=4;NFSU2_TR(0x6762b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6762b7:{NFSU2_TR(0x6762b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6762ba:{NFSU2_TR(0x6762ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6762bd:{NFSU2_TR(0x6762bd);
if(r1(R+518)){{goto L6762c7;}}
}
B6762bf:L6762bf:{c.instructions+=2;NFSU2_TR(0x6762bf);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400ull))));
}
B6762c4:{NFSU2_TR(0x6762c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6762c7:L6762c7:{c.instructions+=3;NFSU2_TR(0x6762c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6762ca:{NFSU2_TR(0x6762ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6762cc:{NFSU2_TR(0x6762cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67636f;}}
}
B6762d2:L6762d2:{c.instructions+=4;NFSU2_TR(0x6762d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6762d5:{NFSU2_TR(0x6762d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6762d8:{NFSU2_TR(0x6762d8);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x71ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6762dc:{NFSU2_TR(0x6762dc);
if(r1(R+518)){{goto L67636f;}}
}
B6762e2:L6762e2:{c.instructions+=3;NFSU2_TR(0x6762e2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x100400ull))));
}
B6762e7:{NFSU2_TR(0x6762e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6762ea:{NFSU2_TR(0x6762ea);
{goto L67636f;}
}
B6762ef:L6762ef:{c.instructions+=2;NFSU2_TR(0x6762ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6762f1:{NFSU2_TR(0x6762f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6762f4:L6762f4:{c.instructions+=4;NFSU2_TR(0x6762f4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6762f6:{NFSU2_TR(0x6762f6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6762f7:{NFSU2_TR(0x6762f7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6762f9:{NFSU2_TR(0x6762f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6762f4u);}goto L6762f4;}}
}
B6762fb:L6762fb:{c.instructions+=5;NFSU2_TR(0x6762fb);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6762fd:{NFSU2_TR(0x6762fd);
__builtin_memmove((R+24),(R+0),4);
}
B6762ff:{NFSU2_TR(0x6762ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676302:{NFSU2_TR(0x676302);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676305:{NFSU2_TR(0x676305);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B676308:L676308:{c.instructions+=4;NFSU2_TR(0x676308);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B67630a:{NFSU2_TR(0x67630a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B67630b:{NFSU2_TR(0x67630b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B67630d:{NFSU2_TR(0x67630d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676308u);}goto L676308;}}
}
B67630f:L67630f:{c.instructions+=8;NFSU2_TR(0x67630f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B676311:{NFSU2_TR(0x676311);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676314:{NFSU2_TR(0x676314);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B676318:{NFSU2_TR(0x676318);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67631a:{NFSU2_TR(0x67631a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67631b:{NFSU2_TR(0x67631b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67631e:{NFSU2_TR(0x67631e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B676320:{NFSU2_TR(0x676320);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676325ull));
TAIL_STATIC(0x671ccbu,671);
}
B676325:L676325:{c.instructions+=2;NFSU2_TR(0x676325);
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
B676327:{NFSU2_TR(0x676327);
if(r1(R+518)){{goto L676390;}}
}
B676329:L676329:{c.instructions+=5;NFSU2_TR(0x676329);
__builtin_memmove((R+4),(R+24),4);
}
B67632b:{NFSU2_TR(0x67632b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B67632d:{NFSU2_TR(0x67632d);
__builtin_memmove((R+8),(R+4),4);
}
B67632f:{NFSU2_TR(0x67632f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B676332:{NFSU2_TR(0x676332);
__builtin_memmove((R+28),(R+0),4);
}
B676334:L676334:{c.instructions+=1;NFSU2_TR(0x676334);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L676336;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676334u);}goto L676334;}
}
B676336:L676336:{c.instructions+=2;NFSU2_TR(0x676336);
__builtin_memmove((R+4),(R+8),4);
}
B676338:{NFSU2_TR(0x676338);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B67633b:L67633b:{c.instructions+=1;NFSU2_TR(0x67633b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L67633d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67633bu);}goto L67633b;}
}
B67633d:L67633d:{c.instructions+=9;NFSU2_TR(0x67633d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676340:{NFSU2_TR(0x676340);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B676343:{NFSU2_TR(0x676343);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B676346:{NFSU2_TR(0x676346);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676349:{NFSU2_TR(0x676349);
u8 U[1];
w1(U+0,u8(0x3bull));
s1(u32(r4(R+8)),r1(U+0));
}
B67634c:{NFSU2_TR(0x67634c);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(U+4,u8(0x20ull));
s1(u32(r4(U+0)),r1(U+4));
}
B676350:{NFSU2_TR(0x676350);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((R+28),(U+0),4);
}
B676353:{NFSU2_TR(0x676353);
__builtin_memmove((R+8),(R+4),4);
}
B676355:{NFSU2_TR(0x676355);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B676358:L676358:{c.instructions+=1;NFSU2_TR(0x676358);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L67635a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676358u);}goto L676358;}
}
B67635a:L67635a:{c.instructions+=2;NFSU2_TR(0x67635a);
__builtin_memmove((R+4),(R+8),4);
}
B67635c:{NFSU2_TR(0x67635c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B67635f:L67635f:{c.instructions+=1;NFSU2_TR(0x67635f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L676361;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67635fu);}goto L67635f;}
}
B676361:L676361:{c.instructions+=5;NFSU2_TR(0x676361);
__builtin_memmove((R+4),(R+8),4);
}
B676363:{NFSU2_TR(0x676363);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676366:{NFSU2_TR(0x676366);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B676368:{NFSU2_TR(0x676368);
u8 U[13];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B67636d:{NFSU2_TR(0x67636d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B67636f:L67636f:{c.instructions+=1;NFSU2_TR(0x67636f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B676376:L676376:{c.instructions+=3;NFSU2_TR(0x676376);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B676378:{NFSU2_TR(0x676378);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67637b:{NFSU2_TR(0x67637b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6761d0u);}goto L6761d0;}}
}
B676381:L676381:{c.instructions+=1;NFSU2_TR(0x676381);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676196u);}goto L676196;}
}
B676386:L676386:{c.instructions+=2;NFSU2_TR(0x676386);
w4(R+0,u32(0x80004005ull));
}
B67638b:{NFSU2_TR(0x67638b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6761c9u);}goto L6761c9;}
}
B676390:L676390:{c.instructions+=2;NFSU2_TR(0x676390);
w4(R+0,u32(0x8007000eull));
}
B676395:{NFSU2_TR(0x676395);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6761c9u);}goto L6761c9;}
}
B67639a:L67639a:{c.instructions+=16;NFSU2_TR(0x67639a);
__builtin_memmove((R+28),(R+28),4);
}
B67639c:{NFSU2_TR(0x67639c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67639d:{NFSU2_TR(0x67639d);
__builtin_memmove((R+20),(R+16),4);
}
B67639f:{NFSU2_TR(0x67639f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x11cull))));
}
B6763a5:{NFSU2_TR(0x6763a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6763a6:{NFSU2_TR(0x6763a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6763a7:{NFSU2_TR(0x6763a7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6763a9:{NFSU2_TR(0x6763a9);
__builtin_memmove((R+24),(R+4),4);
}
B6763ab:{NFSU2_TR(0x6763ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6763ae:{NFSU2_TR(0x6763ae);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6763af:{NFSU2_TR(0x6763af);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6763b1:{NFSU2_TR(0x6763b1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6763b3:{NFSU2_TR(0x6763b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6763b4:{NFSU2_TR(0x6763b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6763b7:{NFSU2_TR(0x6763b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6763ba:{NFSU2_TR(0x6763ba);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6763d0;}}
}
B6763bc:L6763bc:{c.instructions+=2;NFSU2_TR(0x6763bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6763bf:{NFSU2_TR(0x6763bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6763c1:L6763c1:{c.instructions+=2;NFSU2_TR(0x6763c1);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6763c4:{NFSU2_TR(0x6763c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6763cd;}}
}
B6763c6:L6763c6:{c.instructions+=3;NFSU2_TR(0x6763c6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6763c7:{NFSU2_TR(0x6763c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6763c9:{NFSU2_TR(0x6763c9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6763c1u);}goto L6763c1;}}
}
B6763cb:L6763cb:{c.instructions+=1;NFSU2_TR(0x6763cb);
{goto L6763d0;}
}
B6763cd:L6763cd:{c.instructions+=1;NFSU2_TR(0x6763cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6763d0:L6763d0:{c.instructions+=4;NFSU2_TR(0x6763d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6763d3:{NFSU2_TR(0x6763d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6763d6:{NFSU2_TR(0x6763d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6763d9:{NFSU2_TR(0x6763d9);
if(r1(R+518)){{goto L676444;}}
}
B6763db:L6763db:{c.instructions+=3;NFSU2_TR(0x6763db);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6763de:{NFSU2_TR(0x6763de);
w4(R+28,u32(0xfffffull));
}
B6763e3:{NFSU2_TR(0x6763e3);
if(r1(R+518)){{goto L67640f;}}
}
B6763e5:L6763e5:{c.instructions+=10;NFSU2_TR(0x6763e5);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6763e7:{NFSU2_TR(0x6763e7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6763e8:{NFSU2_TR(0x6763e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6763eb:{NFSU2_TR(0x6763eb);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B6763ed:{NFSU2_TR(0x6763ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6763f0:{NFSU2_TR(0x6763f0);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x10800000ull))));
}
B6763f6:{NFSU2_TR(0x6763f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6763f7:{NFSU2_TR(0x6763f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6763fa:{NFSU2_TR(0x6763fa);
__builtin_memmove((R+4),(R+24),4);
}
B6763fc:{NFSU2_TR(0x6763fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676401ull));
TAIL_STATIC(0x6758ceu,675);
}
B676401:L676401:{c.instructions+=3;NFSU2_TR(0x676401);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676403:{NFSU2_TR(0x676403);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676406:{NFSU2_TR(0x676406);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B67640c:L67640c:{c.instructions+=1;NFSU2_TR(0x67640c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67640f:L67640f:{c.instructions+=2;NFSU2_TR(0x67640f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B676412:{NFSU2_TR(0x676412);
if(r1(R+518)){{goto L676c26;}}
}
B676418:L676418:{c.instructions+=10;NFSU2_TR(0x676418);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67641a:{NFSU2_TR(0x67641a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67641b:{NFSU2_TR(0x67641b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67641e:{NFSU2_TR(0x67641e);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B676420:{NFSU2_TR(0x676420);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676423:{NFSU2_TR(0x676423);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x10900000ull))));
}
B676429:{NFSU2_TR(0x676429);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67642a:{NFSU2_TR(0x67642a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67642d:{NFSU2_TR(0x67642d);
__builtin_memmove((R+4),(R+24),4);
}
B67642f:{NFSU2_TR(0x67642f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676434ull));
TAIL_STATIC(0x6758ceu,675);
}
B676434:L676434:{c.instructions+=3;NFSU2_TR(0x676434);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676436:{NFSU2_TR(0x676436);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676439:{NFSU2_TR(0x676439);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B67643f:L67643f:{c.instructions+=1;NFSU2_TR(0x67643f);
{goto L676c26;}
}
B676444:L676444:{c.instructions+=2;NFSU2_TR(0x676444);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B676447:{NFSU2_TR(0x676447);
if(r1(R+518)){{goto L676657;}}
}
B67644d:L67644d:{c.instructions+=2;NFSU2_TR(0x67644d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B676450:{NFSU2_TR(0x676450);
if(r1(R+518)){{goto L676657;}}
}
B676456:L676456:{c.instructions+=9;NFSU2_TR(0x676456);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676459:{NFSU2_TR(0x676459);
{u32 ea_=u32(u32(8091944u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67645f:{NFSU2_TR(0x67645f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676460:{NFSU2_TR(0x676460);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676461:{NFSU2_TR(0x676461);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B676464:{NFSU2_TR(0x676464);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676465:{NFSU2_TR(0x676465);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676466:{NFSU2_TR(0x676466);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676469:{NFSU2_TR(0x676469);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67646eull));
TAIL_STATIC(0x699c39u,699);
}
B67646e:L67646e:{c.instructions+=10;NFSU2_TR(0x67646e);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B676474:{NFSU2_TR(0x676474);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676477:{NFSU2_TR(0x676477);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676478:{NFSU2_TR(0x676478);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676479:{NFSU2_TR(0x676479);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67647c:{NFSU2_TR(0x67647c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67647d:{NFSU2_TR(0x67647d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67647e:{NFSU2_TR(0x67647e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676481:{NFSU2_TR(0x676481);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676484:{NFSU2_TR(0x676484);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676489ull));
TAIL_STATIC(0x699c39u,699);
}
B676489:L676489:{c.instructions+=10;NFSU2_TR(0x676489);
{u32 ea_=u32(u32(8091936u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67648f:{NFSU2_TR(0x67648f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676492:{NFSU2_TR(0x676492);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676493:{NFSU2_TR(0x676493);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676494:{NFSU2_TR(0x676494);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B676497:{NFSU2_TR(0x676497);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676498:{NFSU2_TR(0x676498);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676499:{NFSU2_TR(0x676499);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67649c:{NFSU2_TR(0x67649c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67649f:{NFSU2_TR(0x67649f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6764a4ull));
TAIL_STATIC(0x699c39u,699);
}
B6764a4:L6764a4:{c.instructions+=10;NFSU2_TR(0x6764a4);
{u32 ea_=u32(u32(8091784u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6764aa:{NFSU2_TR(0x6764aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6764ad:{NFSU2_TR(0x6764ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6764ae:{NFSU2_TR(0x6764ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6764af:{NFSU2_TR(0x6764af);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6764b2:{NFSU2_TR(0x6764b2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6764b3:{NFSU2_TR(0x6764b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6764b4:{NFSU2_TR(0x6764b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6764b7:{NFSU2_TR(0x6764b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6764ba:{NFSU2_TR(0x6764ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6764bfull));
TAIL_STATIC(0x699c39u,699);
}
B6764bf:L6764bf:{c.instructions+=7;NFSU2_TR(0x6764bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6764c2:{NFSU2_TR(0x6764c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6764c5:{NFSU2_TR(0x6764c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6764cb:{NFSU2_TR(0x6764cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6764cc:{NFSU2_TR(0x6764cc);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6764ce:{NFSU2_TR(0x6764ce);
__builtin_memmove((R+4),(R+24),4);
}
B6764d0:{NFSU2_TR(0x6764d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6764d5ull));
TAIL_STATIC(0x673e90u,673);
}
B6764d5:L6764d5:{c.instructions+=3;NFSU2_TR(0x6764d5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6764d7:{NFSU2_TR(0x6764d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6764da:{NFSU2_TR(0x6764da);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B6764e0:L6764e0:{c.instructions+=5;NFSU2_TR(0x6764e0);
{u32 ea_=u32(r4(R+20)+u32(4294967028u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6764e6:{NFSU2_TR(0x6764e6);
{u32 ea_=u32(u32(8091784u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6764ec:{NFSU2_TR(0x6764ec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6764ee:{NFSU2_TR(0x6764ee);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6764f1:{NFSU2_TR(0x6764f1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L676510;}}
}
B6764f3:L6764f3:{c.instructions+=5;NFSU2_TR(0x6764f3);
{u32 ea_=u32(r4(R+20)+u32(4294967036u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6764f9:{NFSU2_TR(0x6764f9);
{u32 ea_=u32(u32(8091776u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6764ff:{NFSU2_TR(0x6764ff);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B676501:{NFSU2_TR(0x676501);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B676504:{NFSU2_TR(0x676504);
if(r1(R+518)){{goto L676510;}}
}
B676506:L676506:{c.instructions+=3;NFSU2_TR(0x676506);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B676508:{NFSU2_TR(0x676508);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67650b:{NFSU2_TR(0x67650b);
{goto L6765d9;}
}
B676510:L676510:{c.instructions+=18;NFSU2_TR(0x676510);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B676513:{NFSU2_TR(0x676513);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B676516:{NFSU2_TR(0x676516);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B676517:{NFSU2_TR(0x676517);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B676518:{NFSU2_TR(0x676518);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B676519:{NFSU2_TR(0x676519);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B67651a:{NFSU2_TR(0x67651a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67651b:{NFSU2_TR(0x67651b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B67651c:{NFSU2_TR(0x67651c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67651f:{NFSU2_TR(0x67651f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676520:{NFSU2_TR(0x676520);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676523:{NFSU2_TR(0x676523);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B676526:{NFSU2_TR(0x676526);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676527:{NFSU2_TR(0x676527);
w4(R+28,u32(0x20500001ull));
}
B67652c:{NFSU2_TR(0x67652c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67652d:{NFSU2_TR(0x67652d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676530:{NFSU2_TR(0x676530);
__builtin_memmove((R+4),(R+24),4);
}
B676532:{NFSU2_TR(0x676532);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676537ull));
TAIL_STATIC(0x6758ceu,675);
}
B676537:L676537:{c.instructions+=3;NFSU2_TR(0x676537);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676539:{NFSU2_TR(0x676539);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67653c:{NFSU2_TR(0x67653c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B676542:L676542:{c.instructions+=11;NFSU2_TR(0x676542);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676543:{NFSU2_TR(0x676543);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B676546:{NFSU2_TR(0x676546);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676547:{NFSU2_TR(0x676547);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67654a:{NFSU2_TR(0x67654a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67654b:{NFSU2_TR(0x67654b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67654e:{NFSU2_TR(0x67654e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67654f:{NFSU2_TR(0x67654f);
u8 U[4];
w4(U+0,u32(0x20400001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676554:{NFSU2_TR(0x676554);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676557:{NFSU2_TR(0x676557);
__builtin_memmove((R+4),(R+24),4);
}
B676559:{NFSU2_TR(0x676559);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67655eull));
TAIL_STATIC(0x6758ceu,675);
}
B67655e:L67655e:{c.instructions+=3;NFSU2_TR(0x67655e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676560:{NFSU2_TR(0x676560);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676563:{NFSU2_TR(0x676563);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B676569:L676569:{c.instructions+=10;NFSU2_TR(0x676569);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67656b:{NFSU2_TR(0x67656b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67656c:{NFSU2_TR(0x67656c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67656f:{NFSU2_TR(0x67656f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676570:{NFSU2_TR(0x676570);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B676573:{NFSU2_TR(0x676573);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676574:{NFSU2_TR(0x676574);
u8 U[4];
w4(U+0,u32(0x10400001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676579:{NFSU2_TR(0x676579);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67657c:{NFSU2_TR(0x67657c);
__builtin_memmove((R+4),(R+24),4);
}
B67657e:{NFSU2_TR(0x67657e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676583ull));
TAIL_STATIC(0x6758ceu,675);
}
B676583:L676583:{c.instructions+=3;NFSU2_TR(0x676583);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676585:{NFSU2_TR(0x676585);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676588:{NFSU2_TR(0x676588);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B67658e:L67658e:{c.instructions+=11;NFSU2_TR(0x67658e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676590:{NFSU2_TR(0x676590);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B676593:{NFSU2_TR(0x676593);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676594:{NFSU2_TR(0x676594);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B676597:{NFSU2_TR(0x676597);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676598:{NFSU2_TR(0x676598);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67659b:{NFSU2_TR(0x67659b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67659c:{NFSU2_TR(0x67659c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67659d:{NFSU2_TR(0x67659d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6765a0:{NFSU2_TR(0x6765a0);
__builtin_memmove((R+4),(R+24),4);
}
B6765a2:{NFSU2_TR(0x6765a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6765a7ull));
TAIL_STATIC(0x6758ceu,675);
}
B6765a7:L6765a7:{c.instructions+=3;NFSU2_TR(0x6765a7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6765a9:{NFSU2_TR(0x6765a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6765ac:{NFSU2_TR(0x6765ac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B6765b2:L6765b2:{c.instructions+=11;NFSU2_TR(0x6765b2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6765b3:{NFSU2_TR(0x6765b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6765b6:{NFSU2_TR(0x6765b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6765b7:{NFSU2_TR(0x6765b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6765ba:{NFSU2_TR(0x6765ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6765bb:{NFSU2_TR(0x6765bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6765be:{NFSU2_TR(0x6765be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6765bf:{NFSU2_TR(0x6765bf);
u8 U[4];
w4(U+0,u32(0x20400001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6765c4:{NFSU2_TR(0x6765c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6765c7:{NFSU2_TR(0x6765c7);
__builtin_memmove((R+4),(R+24),4);
}
B6765c9:{NFSU2_TR(0x6765c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6765ceull));
TAIL_STATIC(0x6758ceu,675);
}
B6765ce:L6765ce:{c.instructions+=3;NFSU2_TR(0x6765ce);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6765d0:{NFSU2_TR(0x6765d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6765d3:{NFSU2_TR(0x6765d3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B6765d9:L6765d9:{c.instructions+=22;NFSU2_TR(0x6765d9);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6765dc:{NFSU2_TR(0x6765dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6765e2:{NFSU2_TR(0x6765e2);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6765e3:{NFSU2_TR(0x6765e3);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6765e4:{NFSU2_TR(0x6765e4);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6765e5:{NFSU2_TR(0x6765e5);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6765e6:{NFSU2_TR(0x6765e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6765e9:{NFSU2_TR(0x6765e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6765ef:{NFSU2_TR(0x6765ef);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6765f0:{NFSU2_TR(0x6765f0);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6765f1:{NFSU2_TR(0x6765f1);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6765f2:{NFSU2_TR(0x6765f2);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6765f4:{NFSU2_TR(0x6765f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6765f5:{NFSU2_TR(0x6765f5);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6765f6:{NFSU2_TR(0x6765f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6765fc:{NFSU2_TR(0x6765fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6765fd:{NFSU2_TR(0x6765fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((R+0),(U+0),4);
}
B676603:{NFSU2_TR(0x676603);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676604:{NFSU2_TR(0x676604);
u8 U[4];
w4(U+0,u32(0x50300004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676609:{NFSU2_TR(0x676609);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67660c:{NFSU2_TR(0x67660c);
__builtin_memmove((R+4),(R+24),4);
}
B67660e:{NFSU2_TR(0x67660e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676613ull));
TAIL_STATIC(0x6758ceu,675);
}
B676613:L676613:{c.instructions+=3;NFSU2_TR(0x676613);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676615:{NFSU2_TR(0x676615);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676618:{NFSU2_TR(0x676618);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B67661e:L67661e:{c.instructions+=3;NFSU2_TR(0x67661e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B676621:{NFSU2_TR(0x676621);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B676623:{NFSU2_TR(0x676623);
if(r1(R+518)){{goto L676634;}}
}
B676625:L676625:{c.instructions+=3;NFSU2_TR(0x676625);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676628:{NFSU2_TR(0x676628);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67662a:{NFSU2_TR(0x67662a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L676634;}}
}
B67662c:L67662c:{c.instructions+=1;NFSU2_TR(0x67662c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676632:L676632:{c.instructions+=1;NFSU2_TR(0x676632);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L676634;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676632u);}goto L676632;}
}
B676634:L676634:{c.instructions+=3;NFSU2_TR(0x676634);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B676637:{NFSU2_TR(0x676637);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B676639:{NFSU2_TR(0x676639);
if(r1(R+518)){{goto L676c26;}}
}
B67663f:L67663f:{c.instructions+=3;NFSU2_TR(0x67663f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676642:{NFSU2_TR(0x676642);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B676644:{NFSU2_TR(0x676644);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L676c26;}}
}
B67664a:L67664a:{c.instructions+=1;NFSU2_TR(0x67664a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676650:L676650:{c.instructions+=1;NFSU2_TR(0x676650);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L676652;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676650u);}goto L676650;}
}
B676652:L676652:{c.instructions+=1;NFSU2_TR(0x676652);
{goto L676c26;}
}
B676657:L676657:{c.instructions+=20;NFSU2_TR(0x676657);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67665a:{NFSU2_TR(0x67665a);
{u32 ea_=u32(u32(8091944u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B676660:{NFSU2_TR(0x676660);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676663:{NFSU2_TR(0x676663);
w1(R+512,u8((r4(R+28))!=(u32(0x0ull))));
w4(R+28,u32(0-u32(r4(R+28))));
}
B676665:{NFSU2_TR(0x676665);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(R+28))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B676667:{NFSU2_TR(0x676667);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+4))));
}
B676669:{NFSU2_TR(0x676669);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B67666b:{NFSU2_TR(0x67666b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B67666d:{NFSU2_TR(0x67666d);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B67666f:{NFSU2_TR(0x67666f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676672:{NFSU2_TR(0x676672);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676673:{NFSU2_TR(0x676673);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676674:{NFSU2_TR(0x676674);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B676677:{NFSU2_TR(0x676677);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676678:{NFSU2_TR(0x676678);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676679:{NFSU2_TR(0x676679);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67667c:{NFSU2_TR(0x67667c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676682:{NFSU2_TR(0x676682);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B676684:{NFSU2_TR(0x676684);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676687:{NFSU2_TR(0x676687);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67668cull));
TAIL_STATIC(0x699c39u,699);
}
B67668c:L67668c:{c.instructions+=10;NFSU2_TR(0x67668c);
{u32 ea_=u32(u32(7909408u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B676692:{NFSU2_TR(0x676692);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676695:{NFSU2_TR(0x676695);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676696:{NFSU2_TR(0x676696);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676697:{NFSU2_TR(0x676697);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67669a:{NFSU2_TR(0x67669a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67669b:{NFSU2_TR(0x67669b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67669c:{NFSU2_TR(0x67669c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67669f:{NFSU2_TR(0x67669f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6766a2:{NFSU2_TR(0x6766a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6766a7ull));
TAIL_STATIC(0x699c39u,699);
}
B6766a7:L6766a7:{c.instructions+=10;NFSU2_TR(0x6766a7);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6766ad:{NFSU2_TR(0x6766ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6766b0:{NFSU2_TR(0x6766b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6766b1:{NFSU2_TR(0x6766b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6766b2:{NFSU2_TR(0x6766b2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6766b5:{NFSU2_TR(0x6766b5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6766b6:{NFSU2_TR(0x6766b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6766b7:{NFSU2_TR(0x6766b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6766ba:{NFSU2_TR(0x6766ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6766c0:{NFSU2_TR(0x6766c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6766c5ull));
TAIL_STATIC(0x699c39u,699);
}
B6766c5:L6766c5:{c.instructions+=10;NFSU2_TR(0x6766c5);
{u32 ea_=u32(u32(8091936u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6766cb:{NFSU2_TR(0x6766cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6766ce:{NFSU2_TR(0x6766ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6766cf:{NFSU2_TR(0x6766cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6766d0:{NFSU2_TR(0x6766d0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6766d3:{NFSU2_TR(0x6766d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6766d4:{NFSU2_TR(0x6766d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6766d5:{NFSU2_TR(0x6766d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6766d8:{NFSU2_TR(0x6766d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6766de:{NFSU2_TR(0x6766de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6766e3ull));
TAIL_STATIC(0x699c39u,699);
}
B6766e3:L6766e3:{c.instructions+=10;NFSU2_TR(0x6766e3);
{u32 ea_=u32(u32(8091784u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6766e9:{NFSU2_TR(0x6766e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6766ec:{NFSU2_TR(0x6766ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6766ed:{NFSU2_TR(0x6766ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6766ee:{NFSU2_TR(0x6766ee);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6766f1:{NFSU2_TR(0x6766f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6766f2:{NFSU2_TR(0x6766f2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6766f3:{NFSU2_TR(0x6766f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6766f6:{NFSU2_TR(0x6766f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6766fc:{NFSU2_TR(0x6766fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676701ull));
TAIL_STATIC(0x699c39u,699);
}
B676701:L676701:{c.instructions+=10;NFSU2_TR(0x676701);
{u32 ea_=u32(u32(8091928u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B676707:{NFSU2_TR(0x676707);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67670a:{NFSU2_TR(0x67670a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67670b:{NFSU2_TR(0x67670b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67670c:{NFSU2_TR(0x67670c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67670f:{NFSU2_TR(0x67670f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676710:{NFSU2_TR(0x676710);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676711:{NFSU2_TR(0x676711);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676714:{NFSU2_TR(0x676714);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67671a:{NFSU2_TR(0x67671a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67671full));
TAIL_STATIC(0x699c39u,699);
}
B67671f:L67671f:{c.instructions+=10;NFSU2_TR(0x67671f);
{u32 ea_=u32(u32(8091920u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B676725:{NFSU2_TR(0x676725);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676728:{NFSU2_TR(0x676728);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676729:{NFSU2_TR(0x676729);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67672a:{NFSU2_TR(0x67672a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67672d:{NFSU2_TR(0x67672d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67672e:{NFSU2_TR(0x67672e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67672f:{NFSU2_TR(0x67672f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676732:{NFSU2_TR(0x676732);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676738:{NFSU2_TR(0x676738);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67673dull));
TAIL_STATIC(0x699c39u,699);
}
B67673d:L67673d:{c.instructions+=10;NFSU2_TR(0x67673d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676743:{NFSU2_TR(0x676743);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676746:{NFSU2_TR(0x676746);
{u32 ea_=u32(u32(8091912u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67674c:{NFSU2_TR(0x67674c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67674d:{NFSU2_TR(0x67674d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67674e:{NFSU2_TR(0x67674e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B676751:{NFSU2_TR(0x676751);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676752:{NFSU2_TR(0x676752);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676753:{NFSU2_TR(0x676753);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676756:{NFSU2_TR(0x676756);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67675bull));
TAIL_STATIC(0x699c39u,699);
}
B67675b:L67675b:{c.instructions+=10;NFSU2_TR(0x67675b);
{u32 ea_=u32(u32(8091904u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B676761:{NFSU2_TR(0x676761);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676764:{NFSU2_TR(0x676764);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676765:{NFSU2_TR(0x676765);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676766:{NFSU2_TR(0x676766);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B676769:{NFSU2_TR(0x676769);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67676a:{NFSU2_TR(0x67676a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67676b:{NFSU2_TR(0x67676b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67676e:{NFSU2_TR(0x67676e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676774:{NFSU2_TR(0x676774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676779ull));
TAIL_STATIC(0x699c39u,699);
}
B676779:L676779:{c.instructions+=10;NFSU2_TR(0x676779);
{u32 ea_=u32(u32(8091896u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67677f:{NFSU2_TR(0x67677f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676782:{NFSU2_TR(0x676782);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676783:{NFSU2_TR(0x676783);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676784:{NFSU2_TR(0x676784);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B676787:{NFSU2_TR(0x676787);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676788:{NFSU2_TR(0x676788);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676789:{NFSU2_TR(0x676789);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67678c:{NFSU2_TR(0x67678c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676792:{NFSU2_TR(0x676792);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676797ull));
TAIL_STATIC(0x699c39u,699);
}
B676797:L676797:{c.instructions+=5;NFSU2_TR(0x676797);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67679d:{NFSU2_TR(0x67679d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6767a0:{NFSU2_TR(0x6767a0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x6cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6767a3:{NFSU2_TR(0x6767a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6767a4:{NFSU2_TR(0x6767a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6767a9ull));
TAIL_STATIC(0x575620u,575);
}
B6767a9:L6767a9:{c.instructions+=4;NFSU2_TR(0x6767a9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6767ab:{NFSU2_TR(0x6767ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6767ac:{NFSU2_TR(0x6767ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6767af:{NFSU2_TR(0x6767af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6767bd;}}
}
B6767b1:L6767b1:{c.instructions+=2;NFSU2_TR(0x6767b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6767b8:{NFSU2_TR(0x6767b8);
{goto L676c29;}
}
B6767bd:L6767bd:{c.instructions+=3;NFSU2_TR(0x6767bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6767c0:{NFSU2_TR(0x6767c0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6767c2:{NFSU2_TR(0x6767c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6767c5:L6767c5:{c.instructions+=5;NFSU2_TR(0x6767c5);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff68ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6767cc:{NFSU2_TR(0x6767cc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6767cd:{NFSU2_TR(0x6767cd);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6767cf:{NFSU2_TR(0x6767cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x1bull))));
}
B6767d2:{NFSU2_TR(0x6767d2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6767c5u);}goto L6767c5;}}
}
B6767d4:L6767d4:{c.instructions+=1;NFSU2_TR(0x6767d4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6767d6:L6767d6:{c.instructions+=4;NFSU2_TR(0x6767d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6767d9:{NFSU2_TR(0x6767d9);
__builtin_memmove((R+4),(R+24),4);
}
B6767db:{NFSU2_TR(0x6767db);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffff68ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B6767e2:{NFSU2_TR(0x6767e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6767e7ull));
TAIL_STATIC(0x673b2cu,673);
}
B6767e7:L6767e7:{c.instructions+=3;NFSU2_TR(0x6767e7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6767e9:{NFSU2_TR(0x6767e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6767ec:{NFSU2_TR(0x6767ec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B6767f2:L6767f2:{c.instructions+=3;NFSU2_TR(0x6767f2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6767f3:{NFSU2_TR(0x6767f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0xfull))));
}
B6767f6:{NFSU2_TR(0x6767f6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6767d6u);}goto L6767d6;}}
}
B6767f8:L6767f8:{c.instructions+=3;NFSU2_TR(0x6767f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6767fb:{NFSU2_TR(0x6767fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6767fe:{NFSU2_TR(0x6767fe);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67698e;}}
}
B676804:L676804:{c.instructions+=50;NFSU2_TR(0x676804);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676807:{NFSU2_TR(0x676807);
__builtin_memmove((R+4),(R+28),4);
}
B676809:{NFSU2_TR(0x676809);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B67680c:{NFSU2_TR(0x67680c);
__builtin_memmove((R+8),(R+4),4);
}
B67680e:{NFSU2_TR(0x67680e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676811:{NFSU2_TR(0x676811);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B676813:{NFSU2_TR(0x676813);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676816:{NFSU2_TR(0x676816);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676819:{NFSU2_TR(0x676819);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67681c:{NFSU2_TR(0x67681c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B67681f:{NFSU2_TR(0x67681f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676822:{NFSU2_TR(0x676822);
__builtin_memmove((R+4),(R+0),4);
}
B676824:{NFSU2_TR(0x676824);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B676826:{NFSU2_TR(0x676826);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676829:{NFSU2_TR(0x676829);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67682c:{NFSU2_TR(0x67682c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B67682e:{NFSU2_TR(0x67682e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676834:{NFSU2_TR(0x676834);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676837:{NFSU2_TR(0x676837);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B676839:{NFSU2_TR(0x676839);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67683f:{NFSU2_TR(0x67683f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676842:{NFSU2_TR(0x676842);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B676844:{NFSU2_TR(0x676844);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67684a:{NFSU2_TR(0x67684a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67684d:{NFSU2_TR(0x67684d);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B67684f:{NFSU2_TR(0x67684f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676855:{NFSU2_TR(0x676855);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676858:{NFSU2_TR(0x676858);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B67685a:{NFSU2_TR(0x67685a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676860:{NFSU2_TR(0x676860);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676863:{NFSU2_TR(0x676863);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B676865:{NFSU2_TR(0x676865);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67686b:{NFSU2_TR(0x67686b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67686e:{NFSU2_TR(0x67686e);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B676870:{NFSU2_TR(0x676870);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676876:{NFSU2_TR(0x676876);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676879:{NFSU2_TR(0x676879);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B67687b:{NFSU2_TR(0x67687b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676881:{NFSU2_TR(0x676881);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676884:{NFSU2_TR(0x676884);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B676886:{NFSU2_TR(0x676886);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67688c:{NFSU2_TR(0x67688c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67688f:{NFSU2_TR(0x67688f);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B676891:{NFSU2_TR(0x676891);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676897:{NFSU2_TR(0x676897);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67689a:{NFSU2_TR(0x67689a);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B67689c:{NFSU2_TR(0x67689c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67689f:{NFSU2_TR(0x67689f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6768a2:{NFSU2_TR(0x6768a2);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B6768a4:{NFSU2_TR(0x6768a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6768aa:L6768aa:{c.instructions+=2;NFSU2_TR(0x6768aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6768ad:{NFSU2_TR(0x6768ad);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6768b7;}}
}
B6768af:L6768af:{c.instructions+=3;NFSU2_TR(0x6768af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6768b2:{NFSU2_TR(0x6768b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6768b5:{NFSU2_TR(0x6768b5);
{goto L6768c0;}
}
B6768b7:L6768b7:{c.instructions+=3;NFSU2_TR(0x6768b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6768ba:{NFSU2_TR(0x6768ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6768bd:{NFSU2_TR(0x6768bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6768c0:L6768c0:{c.instructions+=7;NFSU2_TR(0x6768c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6768c3:{NFSU2_TR(0x6768c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6768c9:{NFSU2_TR(0x6768c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6768cb:{NFSU2_TR(0x6768cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6768ce:{NFSU2_TR(0x6768ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6768d1:{NFSU2_TR(0x6768d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6768d7:{NFSU2_TR(0x6768d7);
if(r1(R+512)){{goto L6768df;}}
}
B6768d9:L6768d9:{c.instructions+=1;NFSU2_TR(0x6768d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6768df:L6768df:{c.instructions+=28;NFSU2_TR(0x6768df);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6768e2:{NFSU2_TR(0x6768e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6768e8:{NFSU2_TR(0x6768e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6768eb:{NFSU2_TR(0x6768eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6768f1:{NFSU2_TR(0x6768f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6768f7:{NFSU2_TR(0x6768f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6768fa:{NFSU2_TR(0x6768fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676900:{NFSU2_TR(0x676900);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676906:{NFSU2_TR(0x676906);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B676909:{NFSU2_TR(0x676909);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67690f:{NFSU2_TR(0x67690f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676915:{NFSU2_TR(0x676915);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B676918:{NFSU2_TR(0x676918);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67691e:{NFSU2_TR(0x67691e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676924:{NFSU2_TR(0x676924);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B676927:{NFSU2_TR(0x676927);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67692d:{NFSU2_TR(0x67692d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676933:{NFSU2_TR(0x676933);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B676936:{NFSU2_TR(0x676936);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67693c:{NFSU2_TR(0x67693c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676942:{NFSU2_TR(0x676942);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B676945:{NFSU2_TR(0x676945);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67694b:{NFSU2_TR(0x67694b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676951:{NFSU2_TR(0x676951);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B676954:{NFSU2_TR(0x676954);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676957:{NFSU2_TR(0x676957);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67695d:{NFSU2_TR(0x67695d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B676960:{NFSU2_TR(0x676960);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L67696a;}}
}
B676962:L676962:{c.instructions+=3;NFSU2_TR(0x676962);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676965:{NFSU2_TR(0x676965);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B676968:{NFSU2_TR(0x676968);
{goto L67696f;}
}
B67696a:L67696a:{c.instructions+=2;NFSU2_TR(0x67696a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67696d:{NFSU2_TR(0x67696d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B67696f:L67696f:{c.instructions+=8;NFSU2_TR(0x67696f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676975:{NFSU2_TR(0x676975);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B676978:{NFSU2_TR(0x676978);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67697c:{NFSU2_TR(0x67697c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B67697f:{NFSU2_TR(0x67697f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676982:{NFSU2_TR(0x676982);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B676985:{NFSU2_TR(0x676985);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B676988:{NFSU2_TR(0x676988);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6768aau);}goto L6768aa;}}
}
B67698e:L67698e:{c.instructions+=13;NFSU2_TR(0x67698e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676991:{NFSU2_TR(0x676991);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676992:{NFSU2_TR(0x676992);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676995:{NFSU2_TR(0x676995);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67699a:{NFSU2_TR(0x67699a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67699d:{NFSU2_TR(0x67699d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6769a0:{NFSU2_TR(0x6769a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6769a6:{NFSU2_TR(0x6769a6);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0x2050ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B6769ac:{NFSU2_TR(0x6769ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6769af:{NFSU2_TR(0x6769af);
__builtin_memmove((R+4),(R+24),4);
}
B6769b1:{NFSU2_TR(0x6769b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6769b4:{NFSU2_TR(0x6769b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6769b7:{NFSU2_TR(0x6769b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6769bcull));
TAIL_STATIC(0x6758ceu,675);
}
B6769bc:L6769bc:{c.instructions+=3;NFSU2_TR(0x6769bc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6769be:{NFSU2_TR(0x6769be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6769c1:{NFSU2_TR(0x6769c1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B6769c7:L6769c7:{c.instructions+=11;NFSU2_TR(0x6769c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6769ca:{NFSU2_TR(0x6769ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6769cb:{NFSU2_TR(0x6769cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6769ce:{NFSU2_TR(0x6769ce);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B6769d3:{NFSU2_TR(0x6769d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6769d9:{NFSU2_TR(0x6769d9);
__builtin_memmove((R+4),(R+24),4);
}
B6769db:{NFSU2_TR(0x6769db);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6769e1:{NFSU2_TR(0x6769e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6769e4:{NFSU2_TR(0x6769e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6769e5:{NFSU2_TR(0x6769e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6769e8:{NFSU2_TR(0x6769e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6769edull));
TAIL_STATIC(0x6758ceu,675);
}
B6769ed:L6769ed:{c.instructions+=3;NFSU2_TR(0x6769ed);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6769ef:{NFSU2_TR(0x6769ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6769f2:{NFSU2_TR(0x6769f2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B6769f8:L6769f8:{c.instructions+=10;NFSU2_TR(0x6769f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6769fb:{NFSU2_TR(0x6769fb);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6769fd:{NFSU2_TR(0x6769fd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6769fe:{NFSU2_TR(0x6769fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676a04:{NFSU2_TR(0x676a04);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10400000ull))));
}
B676a09:{NFSU2_TR(0x676a09);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676a0f:{NFSU2_TR(0x676a0f);
__builtin_memmove((R+4),(R+24),4);
}
B676a11:{NFSU2_TR(0x676a11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676a12:{NFSU2_TR(0x676a12);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676a15:{NFSU2_TR(0x676a15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676a1aull));
TAIL_STATIC(0x6758ceu,675);
}
B676a1a:L676a1a:{c.instructions+=3;NFSU2_TR(0x676a1a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676a1c:{NFSU2_TR(0x676a1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676a1f:{NFSU2_TR(0x676a1f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B676a25:L676a25:{c.instructions+=8;NFSU2_TR(0x676a25);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676a27:{NFSU2_TR(0x676a27);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676a2a:{NFSU2_TR(0x676a2a);
__builtin_memmove((R+4),(R+24),4);
}
B676a2c:{NFSU2_TR(0x676a2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676a32:{NFSU2_TR(0x676a32);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676a38:{NFSU2_TR(0x676a38);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676a3b:{NFSU2_TR(0x676a3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676a3e:{NFSU2_TR(0x676a3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676a43ull));
TAIL_STATIC(0x6758ceu,675);
}
B676a43:L676a43:{c.instructions+=3;NFSU2_TR(0x676a43);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676a45:{NFSU2_TR(0x676a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676a48:{NFSU2_TR(0x676a48);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B676a4e:L676a4e:{c.instructions+=8;NFSU2_TR(0x676a4e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676a4f:{NFSU2_TR(0x676a4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676a52:{NFSU2_TR(0x676a52);
__builtin_memmove((R+4),(R+24),4);
}
B676a54:{NFSU2_TR(0x676a54);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676a5a:{NFSU2_TR(0x676a5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676a60:{NFSU2_TR(0x676a60);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676a63:{NFSU2_TR(0x676a63);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676a66:{NFSU2_TR(0x676a66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676a6bull));
TAIL_STATIC(0x6758ceu,675);
}
B676a6b:L676a6b:{c.instructions+=3;NFSU2_TR(0x676a6b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676a6d:{NFSU2_TR(0x676a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676a70:{NFSU2_TR(0x676a70);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B676a76:L676a76:{c.instructions+=8;NFSU2_TR(0x676a76);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676a78:{NFSU2_TR(0x676a78);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676a7e:{NFSU2_TR(0x676a7e);
__builtin_memmove((R+4),(R+24),4);
}
B676a80:{NFSU2_TR(0x676a80);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676a86:{NFSU2_TR(0x676a86);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676a8c:{NFSU2_TR(0x676a8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676a8f:{NFSU2_TR(0x676a8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676a92:{NFSU2_TR(0x676a92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676a97ull));
TAIL_STATIC(0x6758ceu,675);
}
B676a97:L676a97:{c.instructions+=3;NFSU2_TR(0x676a97);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676a99:{NFSU2_TR(0x676a99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676a9c:{NFSU2_TR(0x676a9c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B676aa2:L676aa2:{c.instructions+=8;NFSU2_TR(0x676aa2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676aa3:{NFSU2_TR(0x676aa3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676aa6:{NFSU2_TR(0x676aa6);
__builtin_memmove((R+4),(R+24),4);
}
B676aa8:{NFSU2_TR(0x676aa8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676aae:{NFSU2_TR(0x676aae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676ab1:{NFSU2_TR(0x676ab1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676ab4:{NFSU2_TR(0x676ab4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676ab7:{NFSU2_TR(0x676ab7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676abcull));
TAIL_STATIC(0x6758ceu,675);
}
B676abc:L676abc:{c.instructions+=3;NFSU2_TR(0x676abc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676abe:{NFSU2_TR(0x676abe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676ac1:{NFSU2_TR(0x676ac1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B676ac7:L676ac7:{c.instructions+=8;NFSU2_TR(0x676ac7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676ac8:{NFSU2_TR(0x676ac8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676acb:{NFSU2_TR(0x676acb);
__builtin_memmove((R+4),(R+24),4);
}
B676acd:{NFSU2_TR(0x676acd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676ad0:{NFSU2_TR(0x676ad0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676ad3:{NFSU2_TR(0x676ad3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676ad6:{NFSU2_TR(0x676ad6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676ad9:{NFSU2_TR(0x676ad9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676adeull));
TAIL_STATIC(0x6758ceu,675);
}
B676ade:L676ade:{c.instructions+=3;NFSU2_TR(0x676ade);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676ae0:{NFSU2_TR(0x676ae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676ae3:{NFSU2_TR(0x676ae3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B676ae9:L676ae9:{c.instructions+=8;NFSU2_TR(0x676ae9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676aea:{NFSU2_TR(0x676aea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676aed:{NFSU2_TR(0x676aed);
__builtin_memmove((R+4),(R+24),4);
}
B676aef:{NFSU2_TR(0x676aef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676af5:{NFSU2_TR(0x676af5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676af8:{NFSU2_TR(0x676af8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676afb:{NFSU2_TR(0x676afb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676afe:{NFSU2_TR(0x676afe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676b03ull));
TAIL_STATIC(0x6758ceu,675);
}
B676b03:L676b03:{c.instructions+=3;NFSU2_TR(0x676b03);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676b05:{NFSU2_TR(0x676b05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676b08:{NFSU2_TR(0x676b08);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B676b0e:L676b0e:{c.instructions+=8;NFSU2_TR(0x676b0e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676b0f:{NFSU2_TR(0x676b0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676b12:{NFSU2_TR(0x676b12);
__builtin_memmove((R+4),(R+24),4);
}
B676b14:{NFSU2_TR(0x676b14);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676b17:{NFSU2_TR(0x676b17);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676b1a:{NFSU2_TR(0x676b1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676b1d:{NFSU2_TR(0x676b1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676b20:{NFSU2_TR(0x676b20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676b25ull));
TAIL_STATIC(0x6758ceu,675);
}
B676b25:L676b25:{c.instructions+=3;NFSU2_TR(0x676b25);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676b27:{NFSU2_TR(0x676b27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676b2a:{NFSU2_TR(0x676b2a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B676b30:L676b30:{c.instructions+=8;NFSU2_TR(0x676b30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676b31:{NFSU2_TR(0x676b31);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676b34:{NFSU2_TR(0x676b34);
__builtin_memmove((R+4),(R+24),4);
}
B676b36:{NFSU2_TR(0x676b36);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676b3c:{NFSU2_TR(0x676b3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676b3f:{NFSU2_TR(0x676b3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676b42:{NFSU2_TR(0x676b42);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676b45:{NFSU2_TR(0x676b45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676b4aull));
TAIL_STATIC(0x6758ceu,675);
}
B676b4a:L676b4a:{c.instructions+=3;NFSU2_TR(0x676b4a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676b4c:{NFSU2_TR(0x676b4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676b4f:{NFSU2_TR(0x676b4f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B676b55:L676b55:{c.instructions+=8;NFSU2_TR(0x676b55);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676b56:{NFSU2_TR(0x676b56);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676b59:{NFSU2_TR(0x676b59);
__builtin_memmove((R+4),(R+24),4);
}
B676b5b:{NFSU2_TR(0x676b5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676b5e:{NFSU2_TR(0x676b5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676b61:{NFSU2_TR(0x676b61);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676b64:{NFSU2_TR(0x676b64);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676b67:{NFSU2_TR(0x676b67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676b6cull));
TAIL_STATIC(0x6758ceu,675);
}
B676b6c:L676b6c:{c.instructions+=3;NFSU2_TR(0x676b6c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676b6e:{NFSU2_TR(0x676b6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676b71:{NFSU2_TR(0x676b71);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B676b77:L676b77:{c.instructions+=8;NFSU2_TR(0x676b77);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676b78:{NFSU2_TR(0x676b78);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676b7b:{NFSU2_TR(0x676b7b);
__builtin_memmove((R+4),(R+24),4);
}
B676b7d:{NFSU2_TR(0x676b7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676b83:{NFSU2_TR(0x676b83);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676b86:{NFSU2_TR(0x676b86);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676b89:{NFSU2_TR(0x676b89);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676b8c:{NFSU2_TR(0x676b8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676b91ull));
TAIL_STATIC(0x6758ceu,675);
}
B676b91:L676b91:{c.instructions+=3;NFSU2_TR(0x676b91);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676b93:{NFSU2_TR(0x676b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676b96:{NFSU2_TR(0x676b96);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B676b9c:L676b9c:{c.instructions+=8;NFSU2_TR(0x676b9c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676b9d:{NFSU2_TR(0x676b9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676ba0:{NFSU2_TR(0x676ba0);
__builtin_memmove((R+4),(R+24),4);
}
B676ba2:{NFSU2_TR(0x676ba2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676ba5:{NFSU2_TR(0x676ba5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676ba8:{NFSU2_TR(0x676ba8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676bab:{NFSU2_TR(0x676bab);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676bae:{NFSU2_TR(0x676bae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676bb3ull));
TAIL_STATIC(0x6758ceu,675);
}
B676bb3:L676bb3:{c.instructions+=3;NFSU2_TR(0x676bb3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676bb5:{NFSU2_TR(0x676bb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676bb8:{NFSU2_TR(0x676bb8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B676bba:L676bba:{c.instructions+=8;NFSU2_TR(0x676bba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676bbb:{NFSU2_TR(0x676bbb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676bbe:{NFSU2_TR(0x676bbe);
__builtin_memmove((R+4),(R+24),4);
}
B676bc0:{NFSU2_TR(0x676bc0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676bc6:{NFSU2_TR(0x676bc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676bc9:{NFSU2_TR(0x676bc9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676bcc:{NFSU2_TR(0x676bcc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676bcf:{NFSU2_TR(0x676bcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676bd4ull));
TAIL_STATIC(0x6758ceu,675);
}
B676bd4:L676bd4:{c.instructions+=3;NFSU2_TR(0x676bd4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676bd6:{NFSU2_TR(0x676bd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676bd9:{NFSU2_TR(0x676bd9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B676bdb:L676bdb:{c.instructions+=8;NFSU2_TR(0x676bdb);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676bdd:{NFSU2_TR(0x676bdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676be0:{NFSU2_TR(0x676be0);
__builtin_memmove((R+4),(R+24),4);
}
B676be2:{NFSU2_TR(0x676be2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676be5:{NFSU2_TR(0x676be5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676be8:{NFSU2_TR(0x676be8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676beb:{NFSU2_TR(0x676beb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676bee:{NFSU2_TR(0x676bee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676bf3ull));
TAIL_STATIC(0x6758ceu,675);
}
B676bf3:L676bf3:{c.instructions+=3;NFSU2_TR(0x676bf3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676bf5:{NFSU2_TR(0x676bf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676bf8:{NFSU2_TR(0x676bf8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676c29;}}
}
B676bfa:L676bfa:{c.instructions+=7;NFSU2_TR(0x676bfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B676bfd:{NFSU2_TR(0x676bfd);
__builtin_memmove((R+0),(R+28),4);
}
B676bff:{NFSU2_TR(0x676bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B676c02:{NFSU2_TR(0x676c02);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B676c05:{NFSU2_TR(0x676c05);
__builtin_memmove((R+4),(R+0),4);
}
B676c07:{NFSU2_TR(0x676c07);
__builtin_memmove((R+8),(R+4),4);
}
B676c09:{NFSU2_TR(0x676c09);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B676c0c:L676c0c:{c.instructions+=1;NFSU2_TR(0x676c0c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L676c0e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676c0cu);}goto L676c0c;}
}
B676c0e:L676c0e:{c.instructions+=3;NFSU2_TR(0x676c0e);
__builtin_memmove((R+4),(R+8),4);
}
B676c10:{NFSU2_TR(0x676c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676c13:{NFSU2_TR(0x676c13);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B676c16:L676c16:{c.instructions+=1;NFSU2_TR(0x676c16);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L676c18;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676c16u);}goto L676c16;}
}
B676c18:L676c18:{c.instructions+=3;NFSU2_TR(0x676c18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676c1e:{NFSU2_TR(0x676c1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B676c21:{NFSU2_TR(0x676c21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B676c24:L676c24:{c.instructions+=1;NFSU2_TR(0x676c24);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L676c26;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676c24u);}goto L676c24;}
}
B676c26:L676c26:{c.instructions+=1;NFSU2_TR(0x676c26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676c29:L676c29:{c.instructions+=2;NFSU2_TR(0x676c29);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676c2c:{NFSU2_TR(0x676c2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676c31ull));
TAIL_STATIC(0x575630u,575);
}
B676c31:L676c31:{c.instructions+=7;NFSU2_TR(0x676c31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676c34:{NFSU2_TR(0x676c34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B676c35:{NFSU2_TR(0x676c35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B676c36:{NFSU2_TR(0x676c36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B676c37:{NFSU2_TR(0x676c37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B676c38:{NFSU2_TR(0x676c38);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B676c39:{NFSU2_TR(0x676c39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B676c3c:L676c3c:{c.instructions+=13;NFSU2_TR(0x676c3c);
__builtin_memmove((R+28),(R+28),4);
}
B676c3e:{NFSU2_TR(0x676c3e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676c3f:{NFSU2_TR(0x676c3f);
__builtin_memmove((R+20),(R+16),4);
}
B676c41:{NFSU2_TR(0x676c41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xacull))));
}
B676c47:{NFSU2_TR(0x676c47);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676c48:{NFSU2_TR(0x676c48);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676c49:{NFSU2_TR(0x676c49);
__builtin_memmove((R+24),(R+4),4);
}
B676c4b:{NFSU2_TR(0x676c4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676c4e:{NFSU2_TR(0x676c4e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B676c50:{NFSU2_TR(0x676c50);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B676c54:{NFSU2_TR(0x676c54);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676c55:{NFSU2_TR(0x676c55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676c58:{NFSU2_TR(0x676c58);
if(r1(R+518)){{goto L676cc3;}}
}
B676c5a:L676c5a:{c.instructions+=2;NFSU2_TR(0x676c5a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B676c5d:{NFSU2_TR(0x676c5d);
if(r1(R+518)){{goto L676c83;}}
}
B676c5f:L676c5f:{c.instructions+=10;NFSU2_TR(0x676c5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676c62:{NFSU2_TR(0x676c62);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676c63:{NFSU2_TR(0x676c63);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676c64:{NFSU2_TR(0x676c64);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676c67:{NFSU2_TR(0x676c67);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B676c6c:{NFSU2_TR(0x676c6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676c6f:{NFSU2_TR(0x676c6f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10a00000ull))));
}
B676c74:{NFSU2_TR(0x676c74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676c75:{NFSU2_TR(0x676c75);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676c78:{NFSU2_TR(0x676c78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676c7dull));
TAIL_STATIC(0x6758ceu,675);
}
B676c7d:L676c7d:{c.instructions+=3;NFSU2_TR(0x676c7d);
__builtin_memmove((R+28),(R+0),4);
}
B676c7f:{NFSU2_TR(0x676c7f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676c81:{NFSU2_TR(0x676c81);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676cb1;}}
}
B676c83:L676c83:{c.instructions+=2;NFSU2_TR(0x676c83);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B676c86:{NFSU2_TR(0x676c86);
if(r1(R+518)){{goto L676caf;}}
}
B676c88:L676c88:{c.instructions+=11;NFSU2_TR(0x676c88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676c8b:{NFSU2_TR(0x676c8b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676c8d:{NFSU2_TR(0x676c8d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676c8e:{NFSU2_TR(0x676c8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676c91:{NFSU2_TR(0x676c91);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B676c96:{NFSU2_TR(0x676c96);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10b00000ull))));
}
B676c9b:{NFSU2_TR(0x676c9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676c9e:{NFSU2_TR(0x676c9e);
__builtin_memmove((R+4),(R+24),4);
}
B676ca0:{NFSU2_TR(0x676ca0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676ca1:{NFSU2_TR(0x676ca1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676ca4:{NFSU2_TR(0x676ca4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676ca9ull));
TAIL_STATIC(0x6758ceu,675);
}
B676ca9:L676ca9:{c.instructions+=3;NFSU2_TR(0x676ca9);
__builtin_memmove((R+28),(R+0),4);
}
B676cab:{NFSU2_TR(0x676cab);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676cad:{NFSU2_TR(0x676cad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L676cb1;}}
}
B676caf:L676caf:{c.instructions+=1;NFSU2_TR(0x676caf);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B676cb1:L676cb1:{c.instructions+=2;NFSU2_TR(0x676cb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676cb4:{NFSU2_TR(0x676cb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676cb9ull));
TAIL_STATIC(0x575630u,575);
}
B676cb9:L676cb9:{c.instructions+=7;NFSU2_TR(0x676cb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B676cba:{NFSU2_TR(0x676cba);
__builtin_memmove((R+0),(R+28),4);
}
B676cbc:{NFSU2_TR(0x676cbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B676cbd:{NFSU2_TR(0x676cbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B676cbe:{NFSU2_TR(0x676cbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B676cbf:{NFSU2_TR(0x676cbf);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B676cc0:{NFSU2_TR(0x676cc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B676cc3:L676cc3:{c.instructions+=9;NFSU2_TR(0x676cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676cc6:{NFSU2_TR(0x676cc6);
{u32 ea_=u32(u32(8091984u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B676ccc:{NFSU2_TR(0x676ccc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676ccd:{NFSU2_TR(0x676ccd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676cce:{NFSU2_TR(0x676cce);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B676cd1:{NFSU2_TR(0x676cd1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676cd2:{NFSU2_TR(0x676cd2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676cd3:{NFSU2_TR(0x676cd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676cd6:{NFSU2_TR(0x676cd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676cdbull));
TAIL_STATIC(0x699c39u,699);
}
B676cdb:L676cdb:{c.instructions+=10;NFSU2_TR(0x676cdb);
{u32 ea_=u32(u32(8091976u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B676ce1:{NFSU2_TR(0x676ce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676ce4:{NFSU2_TR(0x676ce4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676ce5:{NFSU2_TR(0x676ce5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676ce6:{NFSU2_TR(0x676ce6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B676ce9:{NFSU2_TR(0x676ce9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676cea:{NFSU2_TR(0x676cea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676ceb:{NFSU2_TR(0x676ceb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676cee:{NFSU2_TR(0x676cee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676cf1:{NFSU2_TR(0x676cf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676cf6ull));
TAIL_STATIC(0x699c39u,699);
}
B676cf6:L676cf6:{c.instructions+=10;NFSU2_TR(0x676cf6);
{u32 ea_=u32(u32(8091968u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B676cfc:{NFSU2_TR(0x676cfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676cff:{NFSU2_TR(0x676cff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676d00:{NFSU2_TR(0x676d00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676d01:{NFSU2_TR(0x676d01);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B676d04:{NFSU2_TR(0x676d04);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676d05:{NFSU2_TR(0x676d05);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676d06:{NFSU2_TR(0x676d06);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676d09:{NFSU2_TR(0x676d09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676d0c:{NFSU2_TR(0x676d0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676d11ull));
TAIL_STATIC(0x699c39u,699);
}
B676d11:L676d11:{c.instructions+=10;NFSU2_TR(0x676d11);
{u32 ea_=u32(u32(8091960u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B676d17:{NFSU2_TR(0x676d17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676d1a:{NFSU2_TR(0x676d1a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676d1b:{NFSU2_TR(0x676d1b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676d1c:{NFSU2_TR(0x676d1c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B676d1f:{NFSU2_TR(0x676d1f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676d20:{NFSU2_TR(0x676d20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676d21:{NFSU2_TR(0x676d21);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676d24:{NFSU2_TR(0x676d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676d2a:{NFSU2_TR(0x676d2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676d2full));
TAIL_STATIC(0x699c39u,699);
}
B676d2f:L676d2f:{c.instructions+=10;NFSU2_TR(0x676d2f);
{u32 ea_=u32(u32(8091952u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B676d35:{NFSU2_TR(0x676d35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676d38:{NFSU2_TR(0x676d38);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676d39:{NFSU2_TR(0x676d39);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676d3a:{NFSU2_TR(0x676d3a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B676d3d:{NFSU2_TR(0x676d3d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676d3e:{NFSU2_TR(0x676d3e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676d3f:{NFSU2_TR(0x676d3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676d42:{NFSU2_TR(0x676d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676d48:{NFSU2_TR(0x676d48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676d4dull));
TAIL_STATIC(0x699c39u,699);
}
B676d4d:L676d4d:{c.instructions+=10;NFSU2_TR(0x676d4d);
{u32 ea_=u32(u32(8091776u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B676d53:{NFSU2_TR(0x676d53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676d56:{NFSU2_TR(0x676d56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676d57:{NFSU2_TR(0x676d57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676d58:{NFSU2_TR(0x676d58);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B676d5b:{NFSU2_TR(0x676d5b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676d5c:{NFSU2_TR(0x676d5c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676d5d:{NFSU2_TR(0x676d5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676d60:{NFSU2_TR(0x676d60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676d66:{NFSU2_TR(0x676d66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676d6bull));
TAIL_STATIC(0x699c39u,699);
}
B676d6b:L676d6b:{c.instructions+=10;NFSU2_TR(0x676d6b);
{u32 ea_=u32(u32(8091792u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B676d71:{NFSU2_TR(0x676d71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676d74:{NFSU2_TR(0x676d74);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676d75:{NFSU2_TR(0x676d75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676d76:{NFSU2_TR(0x676d76);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B676d79:{NFSU2_TR(0x676d79);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676d7a:{NFSU2_TR(0x676d7a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676d7b:{NFSU2_TR(0x676d7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676d7e:{NFSU2_TR(0x676d7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676d84:{NFSU2_TR(0x676d84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676d89ull));
TAIL_STATIC(0x699c39u,699);
}
B676d89:L676d89:{c.instructions+=6;NFSU2_TR(0x676d89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B676d8c:{NFSU2_TR(0x676d8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676d92:{NFSU2_TR(0x676d92);
__builtin_memmove((R+0),(R+28),4);
}
B676d94:{NFSU2_TR(0x676d94);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x70ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B676d97:{NFSU2_TR(0x676d97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676d98:{NFSU2_TR(0x676d98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676d9dull));
TAIL_STATIC(0x575620u,575);
}
B676d9d:L676d9d:{c.instructions+=4;NFSU2_TR(0x676d9d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B676d9f:{NFSU2_TR(0x676d9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B676da0:{NFSU2_TR(0x676da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676da3:{NFSU2_TR(0x676da3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L676daf;}}
}
B676da5:L676da5:{c.instructions+=2;NFSU2_TR(0x676da5);
w4(R+28,u32(0x8007000eull));
}
B676daa:{NFSU2_TR(0x676daa);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676cb1u);}goto L676cb1;}
}
B676daf:L676daf:{c.instructions+=3;NFSU2_TR(0x676daf);
__builtin_memmove((R+8),(R+28),4);
}
B676db1:{NFSU2_TR(0x676db1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B676db3:{NFSU2_TR(0x676db3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B676db6:L676db6:{c.instructions+=5;NFSU2_TR(0x676db6);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B676dba:{NFSU2_TR(0x676dba);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B676dbb:{NFSU2_TR(0x676dbb);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B676dbd:{NFSU2_TR(0x676dbd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x1cull))));
}
B676dc0:{NFSU2_TR(0x676dc0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676db6u);}goto L676db6;}}
}
B676dc2:L676dc2:{c.instructions+=1;NFSU2_TR(0x676dc2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B676dc4:L676dc4:{c.instructions+=4;NFSU2_TR(0x676dc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676dc7:{NFSU2_TR(0x676dc7);
__builtin_memmove((R+4),(R+24),4);
}
B676dc9:{NFSU2_TR(0x676dc9);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B676dcd:{NFSU2_TR(0x676dcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676dd2ull));
TAIL_STATIC(0x673b2cu,673);
}
B676dd2:L676dd2:{c.instructions+=3;NFSU2_TR(0x676dd2);
__builtin_memmove((R+28),(R+0),4);
}
B676dd4:{NFSU2_TR(0x676dd4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676dd6:{NFSU2_TR(0x676dd6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676cb1u);}goto L676cb1;}}
}
B676ddc:L676ddc:{c.instructions+=3;NFSU2_TR(0x676ddc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B676ddd:{NFSU2_TR(0x676ddd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x14ull))));
}
B676de0:{NFSU2_TR(0x676de0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676dc4u);}goto L676dc4;}}
}
B676de2:L676de2:{c.instructions+=2;NFSU2_TR(0x676de2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B676de5:{NFSU2_TR(0x676de5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L676ea5;}}
}
B676deb:L676deb:{c.instructions+=23;NFSU2_TR(0x676deb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676dee:{NFSU2_TR(0x676dee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676df1:{NFSU2_TR(0x676df1);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B676df3:{NFSU2_TR(0x676df3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B676df6:{NFSU2_TR(0x676df6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676dfc:{NFSU2_TR(0x676dfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676dff:{NFSU2_TR(0x676dff);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B676e01:{NFSU2_TR(0x676e01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676e07:{NFSU2_TR(0x676e07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676e0a:{NFSU2_TR(0x676e0a);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B676e0c:{NFSU2_TR(0x676e0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676e12:{NFSU2_TR(0x676e12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676e15:{NFSU2_TR(0x676e15);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B676e17:{NFSU2_TR(0x676e17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676e1d:{NFSU2_TR(0x676e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676e20:{NFSU2_TR(0x676e20);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B676e22:{NFSU2_TR(0x676e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676e28:{NFSU2_TR(0x676e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676e2b:{NFSU2_TR(0x676e2b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B676e2d:{NFSU2_TR(0x676e2d);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B676e2f:{NFSU2_TR(0x676e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676e35:{NFSU2_TR(0x676e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676e38:{NFSU2_TR(0x676e38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676e3b:L676e3b:{c.instructions+=25;NFSU2_TR(0x676e3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676e3e:{NFSU2_TR(0x676e3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B676e44:{NFSU2_TR(0x676e44);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B676e47:{NFSU2_TR(0x676e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676e4a:{NFSU2_TR(0x676e4a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B676e4c:{NFSU2_TR(0x676e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676e4f:{NFSU2_TR(0x676e4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B676e52:{NFSU2_TR(0x676e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676e58:{NFSU2_TR(0x676e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B676e5e:{NFSU2_TR(0x676e5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B676e61:{NFSU2_TR(0x676e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676e67:{NFSU2_TR(0x676e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B676e6d:{NFSU2_TR(0x676e6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B676e70:{NFSU2_TR(0x676e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676e76:{NFSU2_TR(0x676e76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B676e7c:{NFSU2_TR(0x676e7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B676e7f:{NFSU2_TR(0x676e7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676e85:{NFSU2_TR(0x676e85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B676e8b:{NFSU2_TR(0x676e8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B676e8e:{NFSU2_TR(0x676e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B676e94:{NFSU2_TR(0x676e94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B676e9a:{NFSU2_TR(0x676e9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B676e9d:{NFSU2_TR(0x676e9d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B676ea0:{NFSU2_TR(0x676ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B676ea3:{NFSU2_TR(0x676ea3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676e3bu);}goto L676e3b;}}
}
B676ea5:L676ea5:{c.instructions+=13;NFSU2_TR(0x676ea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676ea8:{NFSU2_TR(0x676ea8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676ea9:{NFSU2_TR(0x676ea9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676eaa:{NFSU2_TR(0x676eaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676ead:{NFSU2_TR(0x676ead);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B676eb2:{NFSU2_TR(0x676eb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676eb5:{NFSU2_TR(0x676eb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676eb8:{NFSU2_TR(0x676eb8);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0x1010ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B676ebe:{NFSU2_TR(0x676ebe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676ec1:{NFSU2_TR(0x676ec1);
__builtin_memmove((R+4),(R+24),4);
}
B676ec3:{NFSU2_TR(0x676ec3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676ec6:{NFSU2_TR(0x676ec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676ec9:{NFSU2_TR(0x676ec9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676eceull));
TAIL_STATIC(0x6758ceu,675);
}
B676ece:L676ece:{c.instructions+=3;NFSU2_TR(0x676ece);
__builtin_memmove((R+28),(R+0),4);
}
B676ed0:{NFSU2_TR(0x676ed0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676ed2:{NFSU2_TR(0x676ed2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676cb1u);}goto L676cb1;}}
}
B676ed8:L676ed8:{c.instructions+=10;NFSU2_TR(0x676ed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676edb:{NFSU2_TR(0x676edb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676edd:{NFSU2_TR(0x676edd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676ee0:{NFSU2_TR(0x676ee0);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20100000ull))));
}
B676ee5:{NFSU2_TR(0x676ee5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676ee8:{NFSU2_TR(0x676ee8);
__builtin_memmove((R+4),(R+24),4);
}
B676eea:{NFSU2_TR(0x676eea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676eed:{NFSU2_TR(0x676eed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676eee:{NFSU2_TR(0x676eee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676ef1:{NFSU2_TR(0x676ef1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676ef6ull));
TAIL_STATIC(0x6758ceu,675);
}
B676ef6:L676ef6:{c.instructions+=3;NFSU2_TR(0x676ef6);
__builtin_memmove((R+28),(R+0),4);
}
B676ef8:{NFSU2_TR(0x676ef8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676efa:{NFSU2_TR(0x676efa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676cb1u);}goto L676cb1;}}
}
B676f00:L676f00:{c.instructions+=8;NFSU2_TR(0x676f00);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676f02:{NFSU2_TR(0x676f02);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676f03:{NFSU2_TR(0x676f03);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676f06:{NFSU2_TR(0x676f06);
__builtin_memmove((R+4),(R+24),4);
}
B676f08:{NFSU2_TR(0x676f08);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676f0b:{NFSU2_TR(0x676f0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676f0e:{NFSU2_TR(0x676f0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676f11:{NFSU2_TR(0x676f11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676f16ull));
TAIL_STATIC(0x6758ceu,675);
}
B676f16:L676f16:{c.instructions+=3;NFSU2_TR(0x676f16);
__builtin_memmove((R+28),(R+0),4);
}
B676f18:{NFSU2_TR(0x676f18);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676f1a:{NFSU2_TR(0x676f1a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676cb1u);}goto L676cb1;}}
}
B676f20:L676f20:{c.instructions+=11;NFSU2_TR(0x676f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676f23:{NFSU2_TR(0x676f23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676f24:{NFSU2_TR(0x676f24);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676f27:{NFSU2_TR(0x676f27);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B676f2c:{NFSU2_TR(0x676f2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676f2f:{NFSU2_TR(0x676f2f);
__builtin_memmove((R+4),(R+24),4);
}
B676f31:{NFSU2_TR(0x676f31);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676f34:{NFSU2_TR(0x676f34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676f37:{NFSU2_TR(0x676f37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676f38:{NFSU2_TR(0x676f38);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676f3b:{NFSU2_TR(0x676f3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676f40ull));
TAIL_STATIC(0x6758ceu,675);
}
B676f40:L676f40:{c.instructions+=3;NFSU2_TR(0x676f40);
__builtin_memmove((R+28),(R+0),4);
}
B676f42:{NFSU2_TR(0x676f42);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676f44:{NFSU2_TR(0x676f44);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676cb1u);}goto L676cb1;}}
}
B676f4a:L676f4a:{c.instructions+=10;NFSU2_TR(0x676f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676f4d:{NFSU2_TR(0x676f4d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676f4f:{NFSU2_TR(0x676f4f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676f50:{NFSU2_TR(0x676f50);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676f53:{NFSU2_TR(0x676f53);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10700000ull))));
}
B676f58:{NFSU2_TR(0x676f58);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676f5b:{NFSU2_TR(0x676f5b);
__builtin_memmove((R+4),(R+24),4);
}
B676f5d:{NFSU2_TR(0x676f5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676f5e:{NFSU2_TR(0x676f5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676f61:{NFSU2_TR(0x676f61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676f66ull));
TAIL_STATIC(0x6758ceu,675);
}
B676f66:L676f66:{c.instructions+=3;NFSU2_TR(0x676f66);
__builtin_memmove((R+28),(R+0),4);
}
B676f68:{NFSU2_TR(0x676f68);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676f6a:{NFSU2_TR(0x676f6a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676cb1u);}goto L676cb1;}}
}
B676f70:L676f70:{c.instructions+=10;NFSU2_TR(0x676f70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676f73:{NFSU2_TR(0x676f73);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676f75:{NFSU2_TR(0x676f75);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676f76:{NFSU2_TR(0x676f76);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676f79:{NFSU2_TR(0x676f79);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10300000ull))));
}
B676f7e:{NFSU2_TR(0x676f7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676f81:{NFSU2_TR(0x676f81);
__builtin_memmove((R+4),(R+24),4);
}
B676f83:{NFSU2_TR(0x676f83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676f84:{NFSU2_TR(0x676f84);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676f87:{NFSU2_TR(0x676f87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676f8cull));
TAIL_STATIC(0x6758ceu,675);
}
B676f8c:L676f8c:{c.instructions+=3;NFSU2_TR(0x676f8c);
__builtin_memmove((R+28),(R+0),4);
}
B676f8e:{NFSU2_TR(0x676f8e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676f90:{NFSU2_TR(0x676f90);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676cb1u);}goto L676cb1;}}
}
B676f96:L676f96:{c.instructions+=11;NFSU2_TR(0x676f96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B676f99:{NFSU2_TR(0x676f99);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676f9a:{NFSU2_TR(0x676f9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676f9d:{NFSU2_TR(0x676f9d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B676fa2:{NFSU2_TR(0x676fa2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676fa5:{NFSU2_TR(0x676fa5);
__builtin_memmove((R+4),(R+24),4);
}
B676fa7:{NFSU2_TR(0x676fa7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676faa:{NFSU2_TR(0x676faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B676fad:{NFSU2_TR(0x676fad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676fae:{NFSU2_TR(0x676fae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676fb1:{NFSU2_TR(0x676fb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676fb6ull));
TAIL_STATIC(0x6758ceu,675);
}
B676fb6:L676fb6:{c.instructions+=3;NFSU2_TR(0x676fb6);
__builtin_memmove((R+28),(R+0),4);
}
B676fb8:{NFSU2_TR(0x676fb8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676fba:{NFSU2_TR(0x676fba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676cb1u);}goto L676cb1;}}
}
B676fc0:L676fc0:{c.instructions+=8;NFSU2_TR(0x676fc0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676fc1:{NFSU2_TR(0x676fc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676fc4:{NFSU2_TR(0x676fc4);
__builtin_memmove((R+4),(R+24),4);
}
B676fc6:{NFSU2_TR(0x676fc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676fc9:{NFSU2_TR(0x676fc9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676fcc:{NFSU2_TR(0x676fcc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676fcf:{NFSU2_TR(0x676fcf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676fd2:{NFSU2_TR(0x676fd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676fd7ull));
TAIL_STATIC(0x6758ceu,675);
}
B676fd7:L676fd7:{c.instructions+=3;NFSU2_TR(0x676fd7);
__builtin_memmove((R+28),(R+0),4);
}
B676fd9:{NFSU2_TR(0x676fd9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676fdb:{NFSU2_TR(0x676fdb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676cb1u);}goto L676cb1;}}
}
B676fe1:L676fe1:{c.instructions+=8;NFSU2_TR(0x676fe1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B676fe2:{NFSU2_TR(0x676fe2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676fe5:{NFSU2_TR(0x676fe5);
__builtin_memmove((R+4),(R+24),4);
}
B676fe7:{NFSU2_TR(0x676fe7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676fea:{NFSU2_TR(0x676fea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676fed:{NFSU2_TR(0x676fed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676ff0:{NFSU2_TR(0x676ff0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B676ff3:{NFSU2_TR(0x676ff3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x676ff8ull));
TAIL_STATIC(0x6758ceu,675);
}
B676ff8:L676ff8:{c.instructions+=3;NFSU2_TR(0x676ff8);
__builtin_memmove((R+28),(R+0),4);
}
B676ffa:{NFSU2_TR(0x676ffa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B676ffc:{NFSU2_TR(0x676ffc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x676cb1u);}goto L676cb1;}}
TAIL_STATIC(0x677002u,677);
}
XIT:NFSU2_TR_EXIT(0x676,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
