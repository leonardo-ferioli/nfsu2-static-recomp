#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69d(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6a0(u8* __restrict R,Cpu& c);
u32 body_6a5(u8* __restrict R,Cpu& c);
u32 body_6a7(u8* __restrict R,Cpu& c);
u32 body_6c0(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6a6,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6a6,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6a6(u8* __restrict R,Cpu& c);
u32 page_6a6(Cpu& c){return body_6a6(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6a6(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6a6000:goto L6a6000;
case 0x6a6003:c.instructions+=1;goto B6a6003;
case 0x6a6005:goto L6a6005;
case 0x6a6008:goto L6a6008;
case 0x6a600b:c.instructions+=3;goto B6a600b;
case 0x6a600e:c.instructions+=2;goto B6a600e;
case 0x6a6011:c.instructions+=1;goto B6a6011;
case 0x6a6013:goto L6a6013;
case 0x6a6016:c.instructions+=2;goto B6a6016;
case 0x6a6019:c.instructions+=1;goto B6a6019;
case 0x6a601b:goto L6a601b;
case 0x6a601e:c.instructions+=1;goto B6a601e;
case 0x6a6020:goto L6a6020;
case 0x6a6023:c.instructions+=8;goto B6a6023;
case 0x6a6026:c.instructions+=7;goto B6a6026;
case 0x6a6029:c.instructions+=6;goto B6a6029;
case 0x6a602a:c.instructions+=5;goto B6a602a;
case 0x6a602d:c.instructions+=4;goto B6a602d;
case 0x6a602e:c.instructions+=3;goto B6a602e;
case 0x6a6031:c.instructions+=2;goto B6a6031;
case 0x6a6032:c.instructions+=1;goto B6a6032;
case 0x6a6037:goto L6a6037;
case 0x6a603a:c.instructions+=1;goto B6a603a;
case 0x6a603c:goto L6a603c;
case 0x6a603e:c.instructions+=9;goto B6a603e;
case 0x6a6041:c.instructions+=8;goto B6a6041;
case 0x6a6044:c.instructions+=7;goto B6a6044;
case 0x6a6047:c.instructions+=6;goto B6a6047;
case 0x6a6048:c.instructions+=5;goto B6a6048;
case 0x6a6049:c.instructions+=4;goto B6a6049;
case 0x6a604a:c.instructions+=3;goto B6a604a;
case 0x6a604d:c.instructions+=2;goto B6a604d;
case 0x6a604e:c.instructions+=1;goto B6a604e;
case 0x6a6050:goto L6a6050;
case 0x6a6053:c.instructions+=4;goto B6a6053;
case 0x6a6056:c.instructions+=3;goto B6a6056;
case 0x6a6059:c.instructions+=2;goto B6a6059;
case 0x6a605c:c.instructions+=1;goto B6a605c;
case 0x6a6062:goto L6a6062;
case 0x6a6064:goto L6a6064;
case 0x6a6067:c.instructions+=11;goto B6a6067;
case 0x6a606a:c.instructions+=10;goto B6a606a;
case 0x6a606b:c.instructions+=9;goto B6a606b;
case 0x6a606e:c.instructions+=8;goto B6a606e;
case 0x6a606f:c.instructions+=7;goto B6a606f;
case 0x6a6072:c.instructions+=6;goto B6a6072;
case 0x6a6075:c.instructions+=5;goto B6a6075;
case 0x6a6076:c.instructions+=4;goto B6a6076;
case 0x6a6077:c.instructions+=3;goto B6a6077;
case 0x6a6078:c.instructions+=2;goto B6a6078;
case 0x6a607b:c.instructions+=1;goto B6a607b;
case 0x6a6080:goto L6a6080;
case 0x6a6083:c.instructions+=1;goto B6a6083;
case 0x6a6085:goto L6a6085;
case 0x6a6088:goto L6a6088;
case 0x6a608c:c.instructions+=1;goto B6a608c;
case 0x6a608e:goto L6a608e;
case 0x6a6092:c.instructions+=1;goto B6a6092;
case 0x6a6094:goto L6a6094;
case 0x6a6097:c.instructions+=5;goto B6a6097;
case 0x6a609c:c.instructions+=4;goto B6a609c;
case 0x6a60a1:c.instructions+=3;goto B6a60a1;
case 0x6a60a4:c.instructions+=2;goto B6a60a4;
case 0x6a60a7:c.instructions+=1;goto B6a60a7;
case 0x6a60ac:goto L6a60ac;
case 0x6a60af:goto L6a60af;
case 0x6a60b4:c.instructions+=1;goto B6a60b4;
case 0x6a60b9:goto L6a60b9;
case 0x6a60bc:c.instructions+=6;goto B6a60bc;
case 0x6a60bf:c.instructions+=5;goto B6a60bf;
case 0x6a60c2:c.instructions+=4;goto B6a60c2;
case 0x6a60c5:c.instructions+=3;goto B6a60c5;
case 0x6a60c8:c.instructions+=2;goto B6a60c8;
case 0x6a60cf:c.instructions+=1;goto B6a60cf;
case 0x6a60d1:goto L6a60d1;
case 0x6a60d4:c.instructions+=2;goto B6a60d4;
case 0x6a60d6:c.instructions+=1;goto B6a60d6;
case 0x6a60d8:goto L6a60d8;
case 0x6a60db:c.instructions+=2;goto B6a60db;
case 0x6a60dd:c.instructions+=1;goto B6a60dd;
case 0x6a60df:goto L6a60df;
case 0x6a60e2:goto L6a60e2;
case 0x6a60e3:c.instructions+=2;goto B6a60e3;
case 0x6a60e5:c.instructions+=1;goto B6a60e5;
case 0x6a60e7:goto L6a60e7;
case 0x6a60e9:c.instructions+=1;goto B6a60e9;
case 0x6a60eb:goto L6a60eb;
case 0x6a60ee:c.instructions+=6;goto B6a60ee;
case 0x6a60f1:c.instructions+=5;goto B6a60f1;
case 0x6a60f3:c.instructions+=4;goto B6a60f3;
case 0x6a60f4:c.instructions+=3;goto B6a60f4;
case 0x6a60f7:c.instructions+=2;goto B6a60f7;
case 0x6a60fa:c.instructions+=1;goto B6a60fa;
case 0x6a60fc:goto L6a60fc;
case 0x6a60ff:c.instructions+=2;goto B6a60ff;
case 0x6a6102:c.instructions+=1;goto B6a6102;
case 0x6a6106:goto L6a6106;
case 0x6a610a:goto L6a610a;
case 0x6a610d:c.instructions+=8;goto B6a610d;
case 0x6a6110:c.instructions+=7;goto B6a6110;
case 0x6a6113:c.instructions+=6;goto B6a6113;
case 0x6a6116:c.instructions+=5;goto B6a6116;
case 0x6a6119:c.instructions+=4;goto B6a6119;
case 0x6a611c:c.instructions+=3;goto B6a611c;
case 0x6a611f:c.instructions+=2;goto B6a611f;
case 0x6a6122:c.instructions+=1;goto B6a6122;
case 0x6a6124:goto L6a6124;
case 0x6a6127:c.instructions+=8;goto B6a6127;
case 0x6a612b:c.instructions+=7;goto B6a612b;
case 0x6a612e:c.instructions+=6;goto B6a612e;
case 0x6a6131:c.instructions+=5;goto B6a6131;
case 0x6a6134:c.instructions+=4;goto B6a6134;
case 0x6a6137:c.instructions+=3;goto B6a6137;
case 0x6a613a:c.instructions+=2;goto B6a613a;
case 0x6a613d:c.instructions+=1;goto B6a613d;
case 0x6a613f:goto L6a613f;
case 0x6a6142:c.instructions+=4;goto B6a6142;
case 0x6a6145:c.instructions+=3;goto B6a6145;
case 0x6a6148:c.instructions+=2;goto B6a6148;
case 0x6a614b:c.instructions+=1;goto B6a614b;
case 0x6a614e:goto L6a614e;
case 0x6a6150:c.instructions+=6;goto B6a6150;
case 0x6a6153:c.instructions+=5;goto B6a6153;
case 0x6a6156:c.instructions+=4;goto B6a6156;
case 0x6a6159:c.instructions+=3;goto B6a6159;
case 0x6a615c:c.instructions+=2;goto B6a615c;
case 0x6a615f:c.instructions+=1;goto B6a615f;
case 0x6a6161:goto L6a6161;
case 0x6a6164:c.instructions+=5;goto B6a6164;
case 0x6a6167:c.instructions+=4;goto B6a6167;
case 0x6a616a:c.instructions+=3;goto B6a616a;
case 0x6a616d:c.instructions+=2;goto B6a616d;
case 0x6a6170:c.instructions+=1;goto B6a6170;
case 0x6a6172:goto L6a6172;
case 0x6a6175:goto L6a6175;
case 0x6a6178:c.instructions+=7;goto B6a6178;
case 0x6a617b:c.instructions+=6;goto B6a617b;
case 0x6a617e:c.instructions+=5;goto B6a617e;
case 0x6a6181:c.instructions+=4;goto B6a6181;
case 0x6a6183:c.instructions+=3;goto B6a6183;
case 0x6a6186:c.instructions+=2;goto B6a6186;
case 0x6a6189:c.instructions+=1;goto B6a6189;
case 0x6a618b:goto L6a618b;
case 0x6a618e:c.instructions+=2;goto B6a618e;
case 0x6a6192:c.instructions+=1;goto B6a6192;
case 0x6a6198:goto L6a6198;
case 0x6a619b:c.instructions+=2;goto B6a619b;
case 0x6a619e:c.instructions+=1;goto B6a619e;
case 0x6a61a0:goto L6a61a0;
case 0x6a61a3:c.instructions+=6;goto B6a61a3;
case 0x6a61a5:c.instructions+=5;goto B6a61a5;
case 0x6a61a7:c.instructions+=4;goto B6a61a7;
case 0x6a61a9:c.instructions+=3;goto B6a61a9;
case 0x6a61aa:c.instructions+=2;goto B6a61aa;
case 0x6a61ab:c.instructions+=1;goto B6a61ab;
case 0x6a61b0:goto L6a61b0;
case 0x6a61b2:c.instructions+=1;goto B6a61b2;
case 0x6a61b4:goto L6a61b4;
case 0x6a61b6:goto L6a61b6;
case 0x6a61b7:c.instructions+=4;goto B6a61b7;
case 0x6a61b8:c.instructions+=3;goto B6a61b8;
case 0x6a61b9:c.instructions+=2;goto B6a61b9;
case 0x6a61ba:c.instructions+=1;goto B6a61ba;
case 0x6a61bd:goto L6a61bd;
case 0x6a61bf:c.instructions+=8;goto B6a61bf;
case 0x6a61c0:c.instructions+=7;goto B6a61c0;
case 0x6a61c2:c.instructions+=6;goto B6a61c2;
case 0x6a61c5:c.instructions+=5;goto B6a61c5;
case 0x6a61c8:c.instructions+=4;goto B6a61c8;
case 0x6a61cb:c.instructions+=3;goto B6a61cb;
case 0x6a61ce:c.instructions+=2;goto B6a61ce;
case 0x6a61d1:c.instructions+=1;goto B6a61d1;
case 0x6a61d3:goto L6a61d3;
case 0x6a61d5:c.instructions+=5;goto B6a61d5;
case 0x6a61d7:c.instructions+=4;goto B6a61d7;
case 0x6a61d9:c.instructions+=3;goto B6a61d9;
case 0x6a61da:c.instructions+=2;goto B6a61da;
case 0x6a61dd:c.instructions+=1;goto B6a61dd;
case 0x6a61e2:goto L6a61e2;
case 0x6a61e4:c.instructions+=1;goto B6a61e4;
case 0x6a61e6:goto L6a61e6;
case 0x6a61e8:goto L6a61e8;
case 0x6a61e9:c.instructions+=1;goto B6a61e9;
case 0x6a61ec:goto L6a61ec;
case 0x6a61ee:c.instructions+=8;goto B6a61ee;
case 0x6a61ef:c.instructions+=7;goto B6a61ef;
case 0x6a61f1:c.instructions+=6;goto B6a61f1;
case 0x6a61f4:c.instructions+=5;goto B6a61f4;
case 0x6a61f5:c.instructions+=4;goto B6a61f5;
case 0x6a61f7:c.instructions+=3;goto B6a61f7;
case 0x6a61f8:c.instructions+=2;goto B6a61f8;
case 0x6a61fb:c.instructions+=1;goto B6a61fb;
case 0x6a6200:goto L6a6200;
case 0x6a6203:c.instructions+=2;goto B6a6203;
case 0x6a6205:c.instructions+=1;goto B6a6205;
case 0x6a6207:goto L6a6207;
case 0x6a620c:c.instructions+=1;goto B6a620c;
case 0x6a6211:goto L6a6211;
case 0x6a6214:c.instructions+=5;goto B6a6214;
case 0x6a6215:c.instructions+=4;goto B6a6215;
case 0x6a6217:c.instructions+=3;goto B6a6217;
case 0x6a6219:c.instructions+=2;goto B6a6219;
case 0x6a621a:c.instructions+=1;goto B6a621a;
case 0x6a621c:goto L6a621c;
case 0x6a621e:goto L6a621e;
case 0x6a6221:c.instructions+=11;goto B6a6221;
case 0x6a6224:c.instructions+=10;goto B6a6224;
case 0x6a6226:c.instructions+=9;goto B6a6226;
case 0x6a6229:c.instructions+=8;goto B6a6229;
case 0x6a622b:c.instructions+=7;goto B6a622b;
case 0x6a622e:c.instructions+=6;goto B6a622e;
case 0x6a6231:c.instructions+=5;goto B6a6231;
case 0x6a6233:c.instructions+=4;goto B6a6233;
case 0x6a6236:c.instructions+=3;goto B6a6236;
case 0x6a6239:c.instructions+=2;goto B6a6239;
case 0x6a623c:c.instructions+=1;goto B6a623c;
case 0x6a623e:goto L6a623e;
case 0x6a6241:c.instructions+=3;goto B6a6241;
case 0x6a6244:c.instructions+=2;goto B6a6244;
case 0x6a6247:c.instructions+=1;goto B6a6247;
case 0x6a6249:goto L6a6249;
case 0x6a624d:c.instructions+=1;goto B6a624d;
case 0x6a624f:goto L6a624f;
case 0x6a6252:c.instructions+=2;goto B6a6252;
case 0x6a6255:c.instructions+=1;goto B6a6255;
case 0x6a6257:goto L6a6257;
case 0x6a6258:c.instructions+=1;goto B6a6258;
case 0x6a625b:goto L6a625b;
case 0x6a625e:c.instructions+=2;goto B6a625e;
case 0x6a6261:c.instructions+=1;goto B6a6261;
case 0x6a6264:goto L6a6264;
case 0x6a6265:c.instructions+=2;goto B6a6265;
case 0x6a6268:c.instructions+=1;goto B6a6268;
case 0x6a626a:goto L6a626a;
case 0x6a626d:c.instructions+=3;goto B6a626d;
case 0x6a6270:c.instructions+=2;goto B6a6270;
case 0x6a6271:c.instructions+=1;goto B6a6271;
case 0x6a6276:goto L6a6276;
case 0x6a6278:c.instructions+=3;goto B6a6278;
case 0x6a6279:c.instructions+=2;goto B6a6279;
case 0x6a627c:c.instructions+=1;goto B6a627c;
case 0x6a6282:goto L6a6282;
case 0x6a6285:c.instructions+=3;goto B6a6285;
case 0x6a6288:c.instructions+=2;goto B6a6288;
case 0x6a6289:c.instructions+=1;goto B6a6289;
case 0x6a628e:goto L6a628e;
case 0x6a6290:c.instructions+=3;goto B6a6290;
case 0x6a6291:c.instructions+=2;goto B6a6291;
case 0x6a6294:c.instructions+=1;goto B6a6294;
case 0x6a629a:goto L6a629a;
case 0x6a629d:c.instructions+=3;goto B6a629d;
case 0x6a62a0:c.instructions+=2;goto B6a62a0;
case 0x6a62a1:c.instructions+=1;goto B6a62a1;
case 0x6a62a6:goto L6a62a6;
case 0x6a62a8:c.instructions+=3;goto B6a62a8;
case 0x6a62a9:c.instructions+=2;goto B6a62a9;
case 0x6a62ac:c.instructions+=1;goto B6a62ac;
case 0x6a62b2:goto L6a62b2;
case 0x6a62b5:c.instructions+=3;goto B6a62b5;
case 0x6a62b8:c.instructions+=2;goto B6a62b8;
case 0x6a62b9:c.instructions+=1;goto B6a62b9;
case 0x6a62be:goto L6a62be;
case 0x6a62c0:c.instructions+=3;goto B6a62c0;
case 0x6a62c1:c.instructions+=2;goto B6a62c1;
case 0x6a62c4:c.instructions+=1;goto B6a62c4;
case 0x6a62ca:goto L6a62ca;
case 0x6a62cd:c.instructions+=3;goto B6a62cd;
case 0x6a62d0:c.instructions+=2;goto B6a62d0;
case 0x6a62d1:c.instructions+=1;goto B6a62d1;
case 0x6a62d6:goto L6a62d6;
case 0x6a62d8:c.instructions+=3;goto B6a62d8;
case 0x6a62d9:c.instructions+=2;goto B6a62d9;
case 0x6a62dc:c.instructions+=1;goto B6a62dc;
case 0x6a62e2:goto L6a62e2;
case 0x6a62e5:c.instructions+=3;goto B6a62e5;
case 0x6a62e8:c.instructions+=2;goto B6a62e8;
case 0x6a62e9:c.instructions+=1;goto B6a62e9;
case 0x6a62ee:goto L6a62ee;
case 0x6a62f0:c.instructions+=3;goto B6a62f0;
case 0x6a62f1:c.instructions+=2;goto B6a62f1;
case 0x6a62f4:c.instructions+=1;goto B6a62f4;
case 0x6a62fa:goto L6a62fa;
case 0x6a62fd:c.instructions+=3;goto B6a62fd;
case 0x6a6300:c.instructions+=2;goto B6a6300;
case 0x6a6301:c.instructions+=1;goto B6a6301;
case 0x6a6306:goto L6a6306;
case 0x6a6308:c.instructions+=3;goto B6a6308;
case 0x6a6309:c.instructions+=2;goto B6a6309;
case 0x6a630c:c.instructions+=1;goto B6a630c;
case 0x6a6312:goto L6a6312;
case 0x6a6315:c.instructions+=3;goto B6a6315;
case 0x6a6318:c.instructions+=2;goto B6a6318;
case 0x6a6319:c.instructions+=1;goto B6a6319;
case 0x6a631e:goto L6a631e;
case 0x6a6320:c.instructions+=3;goto B6a6320;
case 0x6a6321:c.instructions+=2;goto B6a6321;
case 0x6a6324:c.instructions+=1;goto B6a6324;
case 0x6a632a:goto L6a632a;
case 0x6a632d:c.instructions+=3;goto B6a632d;
case 0x6a6330:c.instructions+=2;goto B6a6330;
case 0x6a6331:c.instructions+=1;goto B6a6331;
case 0x6a6336:goto L6a6336;
case 0x6a6338:c.instructions+=3;goto B6a6338;
case 0x6a6339:c.instructions+=2;goto B6a6339;
case 0x6a633c:c.instructions+=1;goto B6a633c;
case 0x6a6342:goto L6a6342;
case 0x6a6345:c.instructions+=3;goto B6a6345;
case 0x6a6348:c.instructions+=2;goto B6a6348;
case 0x6a6349:c.instructions+=1;goto B6a6349;
case 0x6a634e:goto L6a634e;
case 0x6a6350:c.instructions+=3;goto B6a6350;
case 0x6a6351:c.instructions+=2;goto B6a6351;
case 0x6a6354:c.instructions+=1;goto B6a6354;
case 0x6a635a:goto L6a635a;
case 0x6a635d:c.instructions+=3;goto B6a635d;
case 0x6a6360:c.instructions+=2;goto B6a6360;
case 0x6a6361:c.instructions+=1;goto B6a6361;
case 0x6a6366:goto L6a6366;
case 0x6a6368:c.instructions+=3;goto B6a6368;
case 0x6a6369:c.instructions+=2;goto B6a6369;
case 0x6a636c:c.instructions+=1;goto B6a636c;
case 0x6a6372:goto L6a6372;
case 0x6a6375:c.instructions+=3;goto B6a6375;
case 0x6a6378:c.instructions+=2;goto B6a6378;
case 0x6a6379:c.instructions+=1;goto B6a6379;
case 0x6a637e:goto L6a637e;
case 0x6a6380:c.instructions+=3;goto B6a6380;
case 0x6a6381:c.instructions+=2;goto B6a6381;
case 0x6a6384:c.instructions+=1;goto B6a6384;
case 0x6a638a:goto L6a638a;
case 0x6a638d:c.instructions+=3;goto B6a638d;
case 0x6a6390:c.instructions+=2;goto B6a6390;
case 0x6a6391:c.instructions+=1;goto B6a6391;
case 0x6a6396:goto L6a6396;
case 0x6a6398:c.instructions+=3;goto B6a6398;
case 0x6a6399:c.instructions+=2;goto B6a6399;
case 0x6a639c:c.instructions+=1;goto B6a639c;
case 0x6a63a2:goto L6a63a2;
case 0x6a63a6:goto L6a63a6;
case 0x6a63a9:c.instructions+=5;goto B6a63a9;
case 0x6a63ac:c.instructions+=4;goto B6a63ac;
case 0x6a63af:c.instructions+=3;goto B6a63af;
case 0x6a63b1:c.instructions+=2;goto B6a63b1;
case 0x6a63b4:c.instructions+=1;goto B6a63b4;
case 0x6a63b6:goto L6a63b6;
case 0x6a63b8:goto L6a63b8;
case 0x6a63ba:c.instructions+=1;goto B6a63ba;
case 0x6a63bd:goto L6a63bd;
case 0x6a63bf:goto L6a63bf;
case 0x6a63c1:c.instructions+=4;goto B6a63c1;
case 0x6a63c4:c.instructions+=3;goto B6a63c4;
case 0x6a63c7:c.instructions+=2;goto B6a63c7;
case 0x6a63ca:c.instructions+=1;goto B6a63ca;
case 0x6a63d0:goto L6a63d0;
case 0x6a63d3:c.instructions+=4;goto B6a63d3;
case 0x6a63d6:c.instructions+=3;goto B6a63d6;
case 0x6a63d9:c.instructions+=2;goto B6a63d9;
case 0x6a63dc:c.instructions+=1;goto B6a63dc;
case 0x6a63e1:goto L6a63e1;
case 0x6a63e3:c.instructions+=1;goto B6a63e3;
case 0x6a63e9:goto L6a63e9;
case 0x6a63ec:c.instructions+=7;goto B6a63ec;
case 0x6a63ef:c.instructions+=6;goto B6a63ef;
case 0x6a63f2:c.instructions+=5;goto B6a63f2;
case 0x6a63f4:c.instructions+=4;goto B6a63f4;
case 0x6a63f7:c.instructions+=3;goto B6a63f7;
case 0x6a63fa:c.instructions+=2;goto B6a63fa;
case 0x6a63fd:c.instructions+=1;goto B6a63fd;
case 0x6a6403:goto L6a6403;
case 0x6a6406:c.instructions+=8;goto B6a6406;
case 0x6a6408:c.instructions+=7;goto B6a6408;
case 0x6a640b:c.instructions+=6;goto B6a640b;
case 0x6a6411:c.instructions+=5;goto B6a6411;
case 0x6a6413:c.instructions+=4;goto B6a6413;
case 0x6a6415:c.instructions+=3;goto B6a6415;
case 0x6a6418:c.instructions+=2;goto B6a6418;
case 0x6a641a:c.instructions+=1;goto B6a641a;
case 0x6a6420:goto L6a6420;
case 0x6a6424:c.instructions+=1;goto B6a6424;
case 0x6a6427:goto L6a6427;
case 0x6a642a:c.instructions+=7;goto B6a642a;
case 0x6a642d:c.instructions+=6;goto B6a642d;
case 0x6a6430:c.instructions+=5;goto B6a6430;
case 0x6a6432:c.instructions+=4;goto B6a6432;
case 0x6a6435:c.instructions+=3;goto B6a6435;
case 0x6a6438:c.instructions+=2;goto B6a6438;
case 0x6a643b:c.instructions+=1;goto B6a643b;
case 0x6a643d:goto L6a643d;
case 0x6a6440:c.instructions+=4;goto B6a6440;
case 0x6a6443:c.instructions+=3;goto B6a6443;
case 0x6a6446:c.instructions+=2;goto B6a6446;
case 0x6a6449:c.instructions+=1;goto B6a6449;
case 0x6a644b:goto L6a644b;
case 0x6a644d:goto L6a644d;
case 0x6a6450:c.instructions+=6;goto B6a6450;
case 0x6a6453:c.instructions+=5;goto B6a6453;
case 0x6a6456:c.instructions+=4;goto B6a6456;
case 0x6a6459:c.instructions+=3;goto B6a6459;
case 0x6a645c:c.instructions+=2;goto B6a645c;
case 0x6a6460:c.instructions+=1;goto B6a6460;
case 0x6a6462:goto L6a6462;
case 0x6a6465:c.instructions+=2;goto B6a6465;
case 0x6a6468:c.instructions+=1;goto B6a6468;
case 0x6a646a:goto L6a646a;
case 0x6a646d:c.instructions+=3;goto B6a646d;
case 0x6a6470:c.instructions+=2;goto B6a6470;
case 0x6a6473:c.instructions+=1;goto B6a6473;
case 0x6a6475:goto L6a6475;
case 0x6a6477:goto L6a6477;
case 0x6a647a:c.instructions+=5;goto B6a647a;
case 0x6a647d:c.instructions+=4;goto B6a647d;
case 0x6a6480:c.instructions+=3;goto B6a6480;
case 0x6a6483:c.instructions+=2;goto B6a6483;
case 0x6a6486:c.instructions+=1;goto B6a6486;
case 0x6a6489:goto L6a6489;
case 0x6a648b:c.instructions+=2;goto B6a648b;
case 0x6a648e:c.instructions+=1;goto B6a648e;
case 0x6a6490:goto L6a6490;
case 0x6a6493:c.instructions+=3;goto B6a6493;
case 0x6a6496:c.instructions+=2;goto B6a6496;
case 0x6a6499:c.instructions+=1;goto B6a6499;
case 0x6a649b:goto L6a649b;
case 0x6a649d:goto L6a649d;
case 0x6a64a0:c.instructions+=3;goto B6a64a0;
case 0x6a64a3:c.instructions+=2;goto B6a64a3;
case 0x6a64a6:c.instructions+=1;goto B6a64a6;
case 0x6a64ac:goto L6a64ac;
case 0x6a64ae:c.instructions+=4;goto B6a64ae;
case 0x6a64b1:c.instructions+=3;goto B6a64b1;
case 0x6a64b4:c.instructions+=2;goto B6a64b4;
case 0x6a64b7:c.instructions+=1;goto B6a64b7;
case 0x6a64b9:goto L6a64b9;
case 0x6a64bc:c.instructions+=3;goto B6a64bc;
case 0x6a64bf:c.instructions+=2;goto B6a64bf;
case 0x6a64c2:c.instructions+=1;goto B6a64c2;
case 0x6a64c4:goto L6a64c4;
case 0x6a64c7:c.instructions+=3;goto B6a64c7;
case 0x6a64ca:c.instructions+=2;goto B6a64ca;
case 0x6a64cd:c.instructions+=1;goto B6a64cd;
case 0x6a64cf:goto L6a64cf;
case 0x6a64d1:goto L6a64d1;
case 0x6a64d4:c.instructions+=6;goto B6a64d4;
case 0x6a64d7:c.instructions+=5;goto B6a64d7;
case 0x6a64d9:c.instructions+=4;goto B6a64d9;
case 0x6a64da:c.instructions+=3;goto B6a64da;
case 0x6a64dc:c.instructions+=2;goto B6a64dc;
case 0x6a64df:c.instructions+=1;goto B6a64df;
case 0x6a64e1:goto L6a64e1;
case 0x6a64e4:c.instructions+=4;goto B6a64e4;
case 0x6a64e7:c.instructions+=3;goto B6a64e7;
case 0x6a64ea:c.instructions+=2;goto B6a64ea;
case 0x6a64ed:c.instructions+=1;goto B6a64ed;
case 0x6a64ef:goto L6a64ef;
case 0x6a64f2:c.instructions+=2;goto B6a64f2;
case 0x6a64f5:c.instructions+=1;goto B6a64f5;
case 0x6a64fb:goto L6a64fb;
case 0x6a64fd:goto L6a64fd;
case 0x6a6500:c.instructions+=2;goto B6a6500;
case 0x6a6503:c.instructions+=1;goto B6a6503;
case 0x6a6509:goto L6a6509;
case 0x6a650c:c.instructions+=9;goto B6a650c;
case 0x6a650f:c.instructions+=8;goto B6a650f;
case 0x6a6512:c.instructions+=7;goto B6a6512;
case 0x6a6515:c.instructions+=6;goto B6a6515;
case 0x6a6518:c.instructions+=5;goto B6a6518;
case 0x6a651b:c.instructions+=4;goto B6a651b;
case 0x6a651e:c.instructions+=3;goto B6a651e;
case 0x6a6521:c.instructions+=2;goto B6a6521;
case 0x6a6524:c.instructions+=1;goto B6a6524;
case 0x6a6526:goto L6a6526;
case 0x6a6529:c.instructions+=3;goto B6a6529;
case 0x6a652c:c.instructions+=2;goto B6a652c;
case 0x6a652f:c.instructions+=1;goto B6a652f;
case 0x6a6531:goto L6a6531;
case 0x6a6533:goto L6a6533;
case 0x6a6536:c.instructions+=8;goto B6a6536;
case 0x6a6539:c.instructions+=7;goto B6a6539;
case 0x6a653c:c.instructions+=6;goto B6a653c;
case 0x6a653f:c.instructions+=5;goto B6a653f;
case 0x6a6542:c.instructions+=4;goto B6a6542;
case 0x6a6545:c.instructions+=3;goto B6a6545;
case 0x6a6548:c.instructions+=2;goto B6a6548;
case 0x6a654a:c.instructions+=1;goto B6a654a;
case 0x6a654c:goto L6a654c;
case 0x6a6550:c.instructions+=1;goto B6a6550;
case 0x6a6552:goto L6a6552;
case 0x6a6556:c.instructions+=1;goto B6a6556;
case 0x6a6558:goto L6a6558;
case 0x6a655b:c.instructions+=12;goto B6a655b;
case 0x6a655e:c.instructions+=11;goto B6a655e;
case 0x6a6561:c.instructions+=10;goto B6a6561;
case 0x6a6564:c.instructions+=9;goto B6a6564;
case 0x6a6567:c.instructions+=8;goto B6a6567;
case 0x6a656a:c.instructions+=7;goto B6a656a;
case 0x6a656d:c.instructions+=6;goto B6a656d;
case 0x6a6570:c.instructions+=5;goto B6a6570;
case 0x6a6573:c.instructions+=4;goto B6a6573;
case 0x6a6576:c.instructions+=3;goto B6a6576;
case 0x6a6579:c.instructions+=2;goto B6a6579;
case 0x6a657c:c.instructions+=1;goto B6a657c;
case 0x6a657f:goto L6a657f;
case 0x6a6582:c.instructions+=6;goto B6a6582;
case 0x6a6585:c.instructions+=5;goto B6a6585;
case 0x6a6587:c.instructions+=4;goto B6a6587;
case 0x6a658a:c.instructions+=3;goto B6a658a;
case 0x6a658d:c.instructions+=2;goto B6a658d;
case 0x6a658f:c.instructions+=1;goto B6a658f;
case 0x6a6593:goto L6a6593;
case 0x6a6596:c.instructions+=4;goto B6a6596;
case 0x6a6599:c.instructions+=3;goto B6a6599;
case 0x6a659c:c.instructions+=2;goto B6a659c;
case 0x6a659f:c.instructions+=1;goto B6a659f;
case 0x6a65a5:goto L6a65a5;
case 0x6a65a8:c.instructions+=4;goto B6a65a8;
case 0x6a65ab:c.instructions+=3;goto B6a65ab;
case 0x6a65ae:c.instructions+=2;goto B6a65ae;
case 0x6a65b1:c.instructions+=1;goto B6a65b1;
case 0x6a65b7:goto L6a65b7;
case 0x6a65ba:c.instructions+=3;goto B6a65ba;
case 0x6a65bd:c.instructions+=2;goto B6a65bd;
case 0x6a65c0:c.instructions+=1;goto B6a65c0;
case 0x6a65c6:goto L6a65c6;
case 0x6a65ca:c.instructions+=1;goto B6a65ca;
case 0x6a65cc:goto L6a65cc;
case 0x6a65cf:c.instructions+=4;goto B6a65cf;
case 0x6a65d1:c.instructions+=3;goto B6a65d1;
case 0x6a65d3:c.instructions+=2;goto B6a65d3;
case 0x6a65d6:c.instructions+=1;goto B6a65d6;
case 0x6a65d8:goto L6a65d8;
case 0x6a65db:c.instructions+=8;goto B6a65db;
case 0x6a65de:c.instructions+=7;goto B6a65de;
case 0x6a65e1:c.instructions+=6;goto B6a65e1;
case 0x6a65e4:c.instructions+=5;goto B6a65e4;
case 0x6a65e7:c.instructions+=4;goto B6a65e7;
case 0x6a65e8:c.instructions+=3;goto B6a65e8;
case 0x6a65eb:c.instructions+=2;goto B6a65eb;
case 0x6a65ed:c.instructions+=1;goto B6a65ed;
case 0x6a65ef:goto L6a65ef;
case 0x6a65f2:c.instructions+=3;goto B6a65f2;
case 0x6a65f5:c.instructions+=2;goto B6a65f5;
case 0x6a65f6:c.instructions+=1;goto B6a65f6;
case 0x6a65fb:goto L6a65fb;
case 0x6a65fd:c.instructions+=3;goto B6a65fd;
case 0x6a65fe:c.instructions+=2;goto B6a65fe;
case 0x6a6601:c.instructions+=1;goto B6a6601;
case 0x6a6607:goto L6a6607;
case 0x6a660a:c.instructions+=2;goto B6a660a;
case 0x6a660e:c.instructions+=1;goto B6a660e;
case 0x6a6614:goto L6a6614;
case 0x6a6618:goto L6a6618;
case 0x6a661b:c.instructions+=5;goto B6a661b;
case 0x6a661e:c.instructions+=4;goto B6a661e;
case 0x6a6621:c.instructions+=3;goto B6a6621;
case 0x6a6623:c.instructions+=2;goto B6a6623;
case 0x6a6626:c.instructions+=1;goto B6a6626;
case 0x6a6628:goto L6a6628;
case 0x6a662a:goto L6a662a;
case 0x6a662c:c.instructions+=1;goto B6a662c;
case 0x6a662f:goto L6a662f;
case 0x6a6631:goto L6a6631;
case 0x6a6633:c.instructions+=4;goto B6a6633;
case 0x6a6636:c.instructions+=3;goto B6a6636;
case 0x6a6639:c.instructions+=2;goto B6a6639;
case 0x6a663c:c.instructions+=1;goto B6a663c;
case 0x6a6642:goto L6a6642;
case 0x6a6645:c.instructions+=4;goto B6a6645;
case 0x6a6648:c.instructions+=3;goto B6a6648;
case 0x6a664b:c.instructions+=2;goto B6a664b;
case 0x6a664e:c.instructions+=1;goto B6a664e;
case 0x6a6653:goto L6a6653;
case 0x6a6655:c.instructions+=1;goto B6a6655;
case 0x6a6657:goto L6a6657;
case 0x6a665b:c.instructions+=1;goto B6a665b;
case 0x6a6661:goto L6a6661;
case 0x6a6664:c.instructions+=7;goto B6a6664;
case 0x6a6667:c.instructions+=6;goto B6a6667;
case 0x6a6669:c.instructions+=5;goto B6a6669;
case 0x6a666c:c.instructions+=4;goto B6a666c;
case 0x6a666f:c.instructions+=3;goto B6a666f;
case 0x6a6672:c.instructions+=2;goto B6a6672;
case 0x6a6675:c.instructions+=1;goto B6a6675;
case 0x6a667b:goto L6a667b;
case 0x6a667e:c.instructions+=9;goto B6a667e;
case 0x6a6680:c.instructions+=8;goto B6a6680;
case 0x6a6683:c.instructions+=7;goto B6a6683;
case 0x6a6685:c.instructions+=6;goto B6a6685;
case 0x6a668b:c.instructions+=5;goto B6a668b;
case 0x6a668d:c.instructions+=4;goto B6a668d;
case 0x6a6690:c.instructions+=3;goto B6a6690;
case 0x6a6693:c.instructions+=2;goto B6a6693;
case 0x6a6695:c.instructions+=1;goto B6a6695;
case 0x6a669b:goto L6a669b;
case 0x6a669d:c.instructions+=4;goto B6a669d;
case 0x6a66a0:c.instructions+=3;goto B6a66a0;
case 0x6a66a3:c.instructions+=2;goto B6a66a3;
case 0x6a66a6:c.instructions+=1;goto B6a66a6;
case 0x6a66a9:goto L6a66a9;
case 0x6a66ac:c.instructions+=4;goto B6a66ac;
case 0x6a66af:c.instructions+=3;goto B6a66af;
case 0x6a66b2:c.instructions+=2;goto B6a66b2;
case 0x6a66b5:c.instructions+=1;goto B6a66b5;
case 0x6a66b7:goto L6a66b7;
case 0x6a66ba:c.instructions+=4;goto B6a66ba;
case 0x6a66bd:c.instructions+=3;goto B6a66bd;
case 0x6a66c0:c.instructions+=2;goto B6a66c0;
case 0x6a66c3:c.instructions+=1;goto B6a66c3;
case 0x6a66c5:goto L6a66c5;
case 0x6a66c7:goto L6a66c7;
case 0x6a66ca:c.instructions+=4;goto B6a66ca;
case 0x6a66cd:c.instructions+=3;goto B6a66cd;
case 0x6a66d0:c.instructions+=2;goto B6a66d0;
case 0x6a66d3:c.instructions+=1;goto B6a66d3;
case 0x6a66d5:goto L6a66d5;
case 0x6a66d8:c.instructions+=1;goto B6a66d8;
case 0x6a66da:goto L6a66da;
case 0x6a66de:c.instructions+=1;goto B6a66de;
case 0x6a66e0:goto L6a66e0;
case 0x6a66e3:c.instructions+=18;goto B6a66e3;
case 0x6a66e5:c.instructions+=17;goto B6a66e5;
case 0x6a66e8:c.instructions+=16;goto B6a66e8;
case 0x6a66eb:c.instructions+=15;goto B6a66eb;
case 0x6a66ee:c.instructions+=14;goto B6a66ee;
case 0x6a66f1:c.instructions+=13;goto B6a66f1;
case 0x6a66f4:c.instructions+=12;goto B6a66f4;
case 0x6a66f7:c.instructions+=11;goto B6a66f7;
case 0x6a66fa:c.instructions+=10;goto B6a66fa;
case 0x6a66fd:c.instructions+=9;goto B6a66fd;
case 0x6a6700:c.instructions+=8;goto B6a6700;
case 0x6a6703:c.instructions+=7;goto B6a6703;
case 0x6a6706:c.instructions+=6;goto B6a6706;
case 0x6a6709:c.instructions+=5;goto B6a6709;
case 0x6a670c:c.instructions+=4;goto B6a670c;
case 0x6a670f:c.instructions+=3;goto B6a670f;
case 0x6a6711:c.instructions+=2;goto B6a6711;
case 0x6a6714:c.instructions+=1;goto B6a6714;
case 0x6a6717:goto L6a6717;
case 0x6a671a:c.instructions+=7;goto B6a671a;
case 0x6a671d:c.instructions+=6;goto B6a671d;
case 0x6a671f:c.instructions+=5;goto B6a671f;
case 0x6a6722:c.instructions+=4;goto B6a6722;
case 0x6a6725:c.instructions+=3;goto B6a6725;
case 0x6a6728:c.instructions+=2;goto B6a6728;
case 0x6a672a:c.instructions+=1;goto B6a672a;
case 0x6a672e:goto L6a672e;
case 0x6a6731:c.instructions+=4;goto B6a6731;
case 0x6a6734:c.instructions+=3;goto B6a6734;
case 0x6a6737:c.instructions+=2;goto B6a6737;
case 0x6a673a:c.instructions+=1;goto B6a673a;
case 0x6a6740:goto L6a6740;
case 0x6a6743:c.instructions+=3;goto B6a6743;
case 0x6a6746:c.instructions+=2;goto B6a6746;
case 0x6a6749:c.instructions+=1;goto B6a6749;
case 0x6a674f:goto L6a674f;
case 0x6a6751:c.instructions+=2;goto B6a6751;
case 0x6a6754:c.instructions+=1;goto B6a6754;
case 0x6a6756:goto L6a6756;
case 0x6a6758:c.instructions+=2;goto B6a6758;
case 0x6a675b:c.instructions+=1;goto B6a675b;
case 0x6a675d:goto L6a675d;
case 0x6a6760:c.instructions+=6;goto B6a6760;
case 0x6a6763:c.instructions+=5;goto B6a6763;
case 0x6a6766:c.instructions+=4;goto B6a6766;
case 0x6a6769:c.instructions+=3;goto B6a6769;
case 0x6a676a:c.instructions+=2;goto B6a676a;
case 0x6a676d:c.instructions+=1;goto B6a676d;
case 0x6a676f:goto L6a676f;
case 0x6a6772:c.instructions+=3;goto B6a6772;
case 0x6a6775:c.instructions+=2;goto B6a6775;
case 0x6a6776:c.instructions+=1;goto B6a6776;
case 0x6a677b:goto L6a677b;
case 0x6a677d:c.instructions+=3;goto B6a677d;
case 0x6a677e:c.instructions+=2;goto B6a677e;
case 0x6a6781:c.instructions+=1;goto B6a6781;
case 0x6a6787:goto L6a6787;
case 0x6a678a:c.instructions+=2;goto B6a678a;
case 0x6a678e:c.instructions+=1;goto B6a678e;
case 0x6a6794:goto L6a6794;
case 0x6a6797:c.instructions+=6;goto B6a6797;
case 0x6a679a:c.instructions+=5;goto B6a679a;
case 0x6a679e:c.instructions+=4;goto B6a679e;
case 0x6a67a1:c.instructions+=3;goto B6a67a1;
case 0x6a67a3:c.instructions+=2;goto B6a67a3;
case 0x6a67a6:c.instructions+=1;goto B6a67a6;
case 0x6a67a8:goto L6a67a8;
case 0x6a67aa:goto L6a67aa;
case 0x6a67ac:c.instructions+=1;goto B6a67ac;
case 0x6a67af:goto L6a67af;
case 0x6a67b1:goto L6a67b1;
case 0x6a67b5:c.instructions+=1;goto B6a67b5;
case 0x6a67bb:goto L6a67bb;
case 0x6a67be:c.instructions+=4;goto B6a67be;
case 0x6a67c1:c.instructions+=3;goto B6a67c1;
case 0x6a67c4:c.instructions+=2;goto B6a67c4;
case 0x6a67ca:c.instructions+=1;goto B6a67ca;
case 0x6a67d0:goto L6a67d0;
case 0x6a67d4:c.instructions+=2;goto B6a67d4;
case 0x6a67d8:c.instructions+=1;goto B6a67d8;
case 0x6a67da:goto L6a67da;
case 0x6a67dd:c.instructions+=6;goto B6a67dd;
case 0x6a67e0:c.instructions+=5;goto B6a67e0;
case 0x6a67e3:c.instructions+=4;goto B6a67e3;
case 0x6a67e6:c.instructions+=3;goto B6a67e6;
case 0x6a67e8:c.instructions+=2;goto B6a67e8;
case 0x6a67e9:c.instructions+=1;goto B6a67e9;
case 0x6a67ee:goto L6a67ee;
case 0x6a67f1:c.instructions+=3;goto B6a67f1;
case 0x6a67f4:c.instructions+=2;goto B6a67f4;
case 0x6a67f7:c.instructions+=1;goto B6a67f7;
case 0x6a67f9:goto L6a67f9;
case 0x6a67fd:c.instructions+=2;goto B6a67fd;
case 0x6a6801:c.instructions+=1;goto B6a6801;
case 0x6a6803:goto L6a6803;
case 0x6a6806:c.instructions+=6;goto B6a6806;
case 0x6a6809:c.instructions+=5;goto B6a6809;
case 0x6a680c:c.instructions+=4;goto B6a680c;
case 0x6a680f:c.instructions+=3;goto B6a680f;
case 0x6a6811:c.instructions+=2;goto B6a6811;
case 0x6a6812:c.instructions+=1;goto B6a6812;
case 0x6a6817:goto L6a6817;
case 0x6a681a:c.instructions+=3;goto B6a681a;
case 0x6a681d:c.instructions+=2;goto B6a681d;
case 0x6a6820:c.instructions+=1;goto B6a6820;
case 0x6a6822:goto L6a6822;
case 0x6a6824:c.instructions+=1;goto B6a6824;
case 0x6a6829:goto L6a6829;
case 0x6a682b:c.instructions+=1;goto B6a682b;
case 0x6a682d:goto L6a682d;
case 0x6a6831:c.instructions+=2;goto B6a6831;
case 0x6a6835:c.instructions+=1;goto B6a6835;
case 0x6a6837:goto L6a6837;
case 0x6a683a:c.instructions+=6;goto B6a683a;
case 0x6a683d:c.instructions+=5;goto B6a683d;
case 0x6a6840:c.instructions+=4;goto B6a6840;
case 0x6a6843:c.instructions+=3;goto B6a6843;
case 0x6a6845:c.instructions+=2;goto B6a6845;
case 0x6a6846:c.instructions+=1;goto B6a6846;
case 0x6a684b:goto L6a684b;
case 0x6a684e:c.instructions+=3;goto B6a684e;
case 0x6a6851:c.instructions+=2;goto B6a6851;
case 0x6a6854:c.instructions+=1;goto B6a6854;
case 0x6a6856:goto L6a6856;
case 0x6a6859:c.instructions+=3;goto B6a6859;
case 0x6a685c:c.instructions+=2;goto B6a685c;
case 0x6a685f:c.instructions+=1;goto B6a685f;
case 0x6a6865:goto L6a6865;
case 0x6a6867:c.instructions+=3;goto B6a6867;
case 0x6a6869:c.instructions+=2;goto B6a6869;
case 0x6a686c:c.instructions+=1;goto B6a686c;
case 0x6a686e:goto L6a686e;
case 0x6a6871:c.instructions+=6;goto B6a6871;
case 0x6a6874:c.instructions+=5;goto B6a6874;
case 0x6a6877:c.instructions+=4;goto B6a6877;
case 0x6a687a:c.instructions+=3;goto B6a687a;
case 0x6a687b:c.instructions+=2;goto B6a687b;
case 0x6a687e:c.instructions+=1;goto B6a687e;
case 0x6a6880:goto L6a6880;
case 0x6a6882:c.instructions+=3;goto B6a6882;
case 0x6a6885:c.instructions+=2;goto B6a6885;
case 0x6a6886:c.instructions+=1;goto B6a6886;
case 0x6a688b:goto L6a688b;
case 0x6a688d:c.instructions+=3;goto B6a688d;
case 0x6a688e:c.instructions+=2;goto B6a688e;
case 0x6a6891:c.instructions+=1;goto B6a6891;
case 0x6a6893:goto L6a6893;
case 0x6a6896:c.instructions+=3;goto B6a6896;
case 0x6a6899:c.instructions+=2;goto B6a6899;
case 0x6a689a:c.instructions+=1;goto B6a689a;
case 0x6a689f:goto L6a689f;
case 0x6a68a1:c.instructions+=3;goto B6a68a1;
case 0x6a68a2:c.instructions+=2;goto B6a68a2;
case 0x6a68a5:c.instructions+=1;goto B6a68a5;
case 0x6a68a7:goto L6a68a7;
case 0x6a68a9:c.instructions+=1;goto B6a68a9;
case 0x6a68ab:goto L6a68ab;
case 0x6a68b0:goto L6a68b0;
case 0x6a68b1:goto L6a68b1;
case 0x6a68b2:c.instructions+=3;goto B6a68b2;
case 0x6a68b3:c.instructions+=2;goto B6a68b3;
case 0x6a68b4:c.instructions+=1;goto B6a68b4;
case 0x6a68b7:goto L6a68b7;
case 0x6a68b9:c.instructions+=15;goto B6a68b9;
case 0x6a68ba:c.instructions+=14;goto B6a68ba;
case 0x6a68bc:c.instructions+=13;goto B6a68bc;
case 0x6a68bf:c.instructions+=12;goto B6a68bf;
case 0x6a68c2:c.instructions+=11;goto B6a68c2;
case 0x6a68c3:c.instructions+=10;goto B6a68c3;
case 0x6a68c4:c.instructions+=9;goto B6a68c4;
case 0x6a68c7:c.instructions+=8;goto B6a68c7;
case 0x6a68c9:c.instructions+=7;goto B6a68c9;
case 0x6a68cb:c.instructions+=6;goto B6a68cb;
case 0x6a68d1:c.instructions+=5;goto B6a68d1;
case 0x6a68d4:c.instructions+=4;goto B6a68d4;
case 0x6a68d5:c.instructions+=3;goto B6a68d5;
case 0x6a68d8:c.instructions+=2;goto B6a68d8;
case 0x6a68db:c.instructions+=1;goto B6a68db;
case 0x6a68e0:goto L6a68e0;
case 0x6a68e2:c.instructions+=2;goto B6a68e2;
case 0x6a68e5:c.instructions+=1;goto B6a68e5;
case 0x6a68e7:goto L6a68e7;
case 0x6a68ea:c.instructions+=4;goto B6a68ea;
case 0x6a68ed:c.instructions+=3;goto B6a68ed;
case 0x6a68ef:c.instructions+=2;goto B6a68ef;
case 0x6a68f2:c.instructions+=1;goto B6a68f2;
case 0x6a68f4:goto L6a68f4;
case 0x6a68f8:c.instructions+=1;goto B6a68f8;
case 0x6a68fa:goto L6a68fa;
case 0x6a68fd:c.instructions+=2;goto B6a68fd;
case 0x6a6900:c.instructions+=1;goto B6a6900;
case 0x6a6902:goto L6a6902;
case 0x6a6903:c.instructions+=1;goto B6a6903;
case 0x6a6906:goto L6a6906;
case 0x6a6907:c.instructions+=2;goto B6a6907;
case 0x6a690a:c.instructions+=1;goto B6a690a;
case 0x6a690c:goto L6a690c;
case 0x6a690f:c.instructions+=5;goto B6a690f;
case 0x6a6912:c.instructions+=4;goto B6a6912;
case 0x6a6915:c.instructions+=3;goto B6a6915;
case 0x6a6917:c.instructions+=2;goto B6a6917;
case 0x6a691a:c.instructions+=1;goto B6a691a;
case 0x6a691d:goto L6a691d;
case 0x6a691f:goto L6a691f;
case 0x6a6921:c.instructions+=1;goto B6a6921;
case 0x6a6924:goto L6a6924;
case 0x6a6926:goto L6a6926;
case 0x6a6929:c.instructions+=5;goto B6a6929;
case 0x6a692c:c.instructions+=4;goto B6a692c;
case 0x6a692f:c.instructions+=3;goto B6a692f;
case 0x6a6931:c.instructions+=2;goto B6a6931;
case 0x6a6934:c.instructions+=1;goto B6a6934;
case 0x6a6937:goto L6a6937;
case 0x6a6939:goto L6a6939;
case 0x6a693b:c.instructions+=1;goto B6a693b;
case 0x6a693e:goto L6a693e;
case 0x6a6940:goto L6a6940;
case 0x6a6943:c.instructions+=5;goto B6a6943;
case 0x6a6946:c.instructions+=4;goto B6a6946;
case 0x6a6949:c.instructions+=3;goto B6a6949;
case 0x6a694b:c.instructions+=2;goto B6a694b;
case 0x6a694e:c.instructions+=1;goto B6a694e;
case 0x6a6951:goto L6a6951;
case 0x6a6953:goto L6a6953;
case 0x6a6955:c.instructions+=1;goto B6a6955;
case 0x6a6958:goto L6a6958;
case 0x6a695a:goto L6a695a;
case 0x6a695c:c.instructions+=2;goto B6a695c;
case 0x6a695f:c.instructions+=1;goto B6a695f;
case 0x6a6961:goto L6a6961;
case 0x6a6964:c.instructions+=5;goto B6a6964;
case 0x6a6967:c.instructions+=4;goto B6a6967;
case 0x6a696b:c.instructions+=3;goto B6a696b;
case 0x6a696d:c.instructions+=2;goto B6a696d;
case 0x6a6970:c.instructions+=1;goto B6a6970;
case 0x6a6972:goto L6a6972;
case 0x6a6976:c.instructions+=1;goto B6a6976;
case 0x6a6978:goto L6a6978;
case 0x6a697b:c.instructions+=4;goto B6a697b;
case 0x6a697e:c.instructions+=3;goto B6a697e;
case 0x6a6981:c.instructions+=2;goto B6a6981;
case 0x6a6984:c.instructions+=1;goto B6a6984;
case 0x6a6987:goto L6a6987;
case 0x6a6988:c.instructions+=2;goto B6a6988;
case 0x6a698b:c.instructions+=1;goto B6a698b;
case 0x6a698d:goto L6a698d;
case 0x6a6990:c.instructions+=5;goto B6a6990;
case 0x6a6993:c.instructions+=4;goto B6a6993;
case 0x6a6996:c.instructions+=3;goto B6a6996;
case 0x6a6998:c.instructions+=2;goto B6a6998;
case 0x6a699b:c.instructions+=1;goto B6a699b;
case 0x6a699d:goto L6a699d;
case 0x6a699f:goto L6a699f;
case 0x6a69a1:c.instructions+=1;goto B6a69a1;
case 0x6a69a4:goto L6a69a4;
case 0x6a69a6:goto L6a69a6;
case 0x6a69a8:c.instructions+=2;goto B6a69a8;
case 0x6a69ab:c.instructions+=1;goto B6a69ab;
case 0x6a69ad:goto L6a69ad;
case 0x6a69b0:goto L6a69b0;
case 0x6a69b3:c.instructions+=4;goto B6a69b3;
case 0x6a69b5:c.instructions+=3;goto B6a69b5;
case 0x6a69b7:c.instructions+=2;goto B6a69b7;
case 0x6a69ba:c.instructions+=1;goto B6a69ba;
case 0x6a69bb:goto L6a69bb;
case 0x6a69be:c.instructions+=1;goto B6a69be;
case 0x6a69c0:goto L6a69c0;
case 0x6a69c1:goto L6a69c1;
case 0x6a69c4:c.instructions+=2;goto B6a69c4;
case 0x6a69c5:c.instructions+=1;goto B6a69c5;
case 0x6a69c7:goto L6a69c7;
case 0x6a69ca:c.instructions+=5;goto B6a69ca;
case 0x6a69ce:c.instructions+=4;goto B6a69ce;
case 0x6a69d1:c.instructions+=3;goto B6a69d1;
case 0x6a69d2:c.instructions+=2;goto B6a69d2;
case 0x6a69d5:c.instructions+=1;goto B6a69d5;
case 0x6a69d7:goto L6a69d7;
case 0x6a69da:c.instructions+=6;goto B6a69da;
case 0x6a69dd:c.instructions+=5;goto B6a69dd;
case 0x6a69e1:c.instructions+=4;goto B6a69e1;
case 0x6a69e4:c.instructions+=3;goto B6a69e4;
case 0x6a69e6:c.instructions+=2;goto B6a69e6;
case 0x6a69e9:c.instructions+=1;goto B6a69e9;
case 0x6a69eb:goto L6a69eb;
case 0x6a69ed:goto L6a69ed;
case 0x6a69ef:c.instructions+=1;goto B6a69ef;
case 0x6a69f2:goto L6a69f2;
case 0x6a69f4:goto L6a69f4;
case 0x6a69f8:c.instructions+=1;goto B6a69f8;
case 0x6a69fe:goto L6a69fe;
case 0x6a6a01:c.instructions+=5;goto B6a6a01;
case 0x6a6a04:c.instructions+=4;goto B6a6a04;
case 0x6a6a07:c.instructions+=3;goto B6a6a07;
case 0x6a6a09:c.instructions+=2;goto B6a6a09;
case 0x6a6a0c:c.instructions+=1;goto B6a6a0c;
case 0x6a6a11:goto L6a6a11;
case 0x6a6a13:c.instructions+=1;goto B6a6a13;
case 0x6a6a19:goto L6a6a19;
case 0x6a6a1c:c.instructions+=7;goto B6a6a1c;
case 0x6a6a1f:c.instructions+=6;goto B6a6a1f;
case 0x6a6a21:c.instructions+=5;goto B6a6a21;
case 0x6a6a24:c.instructions+=4;goto B6a6a24;
case 0x6a6a26:c.instructions+=3;goto B6a6a26;
case 0x6a6a29:c.instructions+=2;goto B6a6a29;
case 0x6a6a2c:c.instructions+=1;goto B6a6a2c;
case 0x6a6a32:goto L6a6a32;
case 0x6a6a39:goto L6a6a39;
case 0x6a6a3b:c.instructions+=3;goto B6a6a3b;
case 0x6a6a3e:c.instructions+=2;goto B6a6a3e;
case 0x6a6a41:c.instructions+=1;goto B6a6a41;
case 0x6a6a47:goto L6a6a47;
case 0x6a6a4a:c.instructions+=3;goto B6a6a4a;
case 0x6a6a4d:c.instructions+=2;goto B6a6a4d;
case 0x6a6a50:c.instructions+=1;goto B6a6a50;
case 0x6a6a52:goto L6a6a52;
case 0x6a6a55:c.instructions+=4;goto B6a6a55;
case 0x6a6a58:c.instructions+=3;goto B6a6a58;
case 0x6a6a5b:c.instructions+=2;goto B6a6a5b;
case 0x6a6a5e:c.instructions+=1;goto B6a6a5e;
case 0x6a6a60:goto L6a6a60;
case 0x6a6a62:goto L6a6a62;
case 0x6a6a65:c.instructions+=6;goto B6a6a65;
case 0x6a6a68:c.instructions+=5;goto B6a6a68;
case 0x6a6a6b:c.instructions+=4;goto B6a6a6b;
case 0x6a6a6e:c.instructions+=3;goto B6a6a6e;
case 0x6a6a71:c.instructions+=2;goto B6a6a71;
case 0x6a6a75:c.instructions+=1;goto B6a6a75;
case 0x6a6a77:goto L6a6a77;
case 0x6a6a7a:c.instructions+=6;goto B6a6a7a;
case 0x6a6a7d:c.instructions+=5;goto B6a6a7d;
case 0x6a6a80:c.instructions+=4;goto B6a6a80;
case 0x6a6a83:c.instructions+=3;goto B6a6a83;
case 0x6a6a85:c.instructions+=2;goto B6a6a85;
case 0x6a6a88:c.instructions+=1;goto B6a6a88;
case 0x6a6a8b:goto L6a6a8b;
case 0x6a6a8d:c.instructions+=2;goto B6a6a8d;
case 0x6a6a90:c.instructions+=1;goto B6a6a90;
case 0x6a6a92:goto L6a6a92;
case 0x6a6a95:c.instructions+=8;goto B6a6a95;
case 0x6a6a98:c.instructions+=7;goto B6a6a98;
case 0x6a6a9b:c.instructions+=6;goto B6a6a9b;
case 0x6a6a9e:c.instructions+=5;goto B6a6a9e;
case 0x6a6aa1:c.instructions+=4;goto B6a6aa1;
case 0x6a6aa4:c.instructions+=3;goto B6a6aa4;
case 0x6a6aa7:c.instructions+=2;goto B6a6aa7;
case 0x6a6aa9:c.instructions+=1;goto B6a6aa9;
case 0x6a6aab:goto L6a6aab;
case 0x6a6aad:goto L6a6aad;
case 0x6a6ab0:c.instructions+=9;goto B6a6ab0;
case 0x6a6ab3:c.instructions+=8;goto B6a6ab3;
case 0x6a6ab6:c.instructions+=7;goto B6a6ab6;
case 0x6a6ab9:c.instructions+=6;goto B6a6ab9;
case 0x6a6abc:c.instructions+=5;goto B6a6abc;
case 0x6a6abf:c.instructions+=4;goto B6a6abf;
case 0x6a6ac2:c.instructions+=3;goto B6a6ac2;
case 0x6a6ac5:c.instructions+=2;goto B6a6ac5;
case 0x6a6ac7:c.instructions+=1;goto B6a6ac7;
case 0x6a6ac9:goto L6a6ac9;
case 0x6a6acb:goto L6a6acb;
case 0x6a6ace:c.instructions+=4;goto B6a6ace;
case 0x6a6ad1:c.instructions+=3;goto B6a6ad1;
case 0x6a6ad4:c.instructions+=2;goto B6a6ad4;
case 0x6a6ad7:c.instructions+=1;goto B6a6ad7;
case 0x6a6add:goto L6a6add;
case 0x6a6ae0:c.instructions+=1;goto B6a6ae0;
case 0x6a6ae6:goto L6a6ae6;
case 0x6a6ae9:c.instructions+=3;goto B6a6ae9;
case 0x6a6aec:c.instructions+=2;goto B6a6aec;
case 0x6a6aef:c.instructions+=1;goto B6a6aef;
case 0x6a6af5:goto L6a6af5;
case 0x6a6af8:c.instructions+=6;goto B6a6af8;
case 0x6a6afb:c.instructions+=5;goto B6a6afb;
case 0x6a6aff:c.instructions+=4;goto B6a6aff;
case 0x6a6b02:c.instructions+=3;goto B6a6b02;
case 0x6a6b04:c.instructions+=2;goto B6a6b04;
case 0x6a6b07:c.instructions+=1;goto B6a6b07;
case 0x6a6b09:goto L6a6b09;
case 0x6a6b0b:goto L6a6b0b;
case 0x6a6b0d:c.instructions+=1;goto B6a6b0d;
case 0x6a6b10:goto L6a6b10;
case 0x6a6b12:goto L6a6b12;
case 0x6a6b16:c.instructions+=1;goto B6a6b16;
case 0x6a6b1c:goto L6a6b1c;
case 0x6a6b1f:c.instructions+=4;goto B6a6b1f;
case 0x6a6b22:c.instructions+=3;goto B6a6b22;
case 0x6a6b25:c.instructions+=2;goto B6a6b25;
case 0x6a6b2b:c.instructions+=1;goto B6a6b2b;
case 0x6a6b31:goto L6a6b31;
case 0x6a6b35:c.instructions+=2;goto B6a6b35;
case 0x6a6b39:c.instructions+=1;goto B6a6b39;
case 0x6a6b3b:goto L6a6b3b;
case 0x6a6b3e:c.instructions+=6;goto B6a6b3e;
case 0x6a6b41:c.instructions+=5;goto B6a6b41;
case 0x6a6b44:c.instructions+=4;goto B6a6b44;
case 0x6a6b47:c.instructions+=3;goto B6a6b47;
case 0x6a6b49:c.instructions+=2;goto B6a6b49;
case 0x6a6b4a:c.instructions+=1;goto B6a6b4a;
case 0x6a6b4f:goto L6a6b4f;
case 0x6a6b52:c.instructions+=3;goto B6a6b52;
case 0x6a6b55:c.instructions+=2;goto B6a6b55;
case 0x6a6b58:c.instructions+=1;goto B6a6b58;
case 0x6a6b5a:goto L6a6b5a;
case 0x6a6b5e:c.instructions+=2;goto B6a6b5e;
case 0x6a6b62:c.instructions+=1;goto B6a6b62;
case 0x6a6b64:goto L6a6b64;
case 0x6a6b67:c.instructions+=6;goto B6a6b67;
case 0x6a6b6a:c.instructions+=5;goto B6a6b6a;
case 0x6a6b6d:c.instructions+=4;goto B6a6b6d;
case 0x6a6b70:c.instructions+=3;goto B6a6b70;
case 0x6a6b72:c.instructions+=2;goto B6a6b72;
case 0x6a6b73:c.instructions+=1;goto B6a6b73;
case 0x6a6b78:goto L6a6b78;
case 0x6a6b7b:c.instructions+=3;goto B6a6b7b;
case 0x6a6b7e:c.instructions+=2;goto B6a6b7e;
case 0x6a6b81:c.instructions+=1;goto B6a6b81;
case 0x6a6b83:goto L6a6b83;
case 0x6a6b85:c.instructions+=1;goto B6a6b85;
case 0x6a6b8a:goto L6a6b8a;
case 0x6a6b8c:c.instructions+=1;goto B6a6b8c;
case 0x6a6b8e:goto L6a6b8e;
case 0x6a6b92:c.instructions+=2;goto B6a6b92;
case 0x6a6b96:c.instructions+=1;goto B6a6b96;
case 0x6a6b98:goto L6a6b98;
case 0x6a6b9b:c.instructions+=6;goto B6a6b9b;
case 0x6a6b9e:c.instructions+=5;goto B6a6b9e;
case 0x6a6ba1:c.instructions+=4;goto B6a6ba1;
case 0x6a6ba4:c.instructions+=3;goto B6a6ba4;
case 0x6a6ba6:c.instructions+=2;goto B6a6ba6;
case 0x6a6ba7:c.instructions+=1;goto B6a6ba7;
case 0x6a6bac:goto L6a6bac;
case 0x6a6baf:c.instructions+=3;goto B6a6baf;
case 0x6a6bb2:c.instructions+=2;goto B6a6bb2;
case 0x6a6bb5:c.instructions+=1;goto B6a6bb5;
case 0x6a6bb7:goto L6a6bb7;
case 0x6a6bba:c.instructions+=3;goto B6a6bba;
case 0x6a6bbd:c.instructions+=2;goto B6a6bbd;
case 0x6a6bc0:c.instructions+=1;goto B6a6bc0;
case 0x6a6bc6:goto L6a6bc6;
case 0x6a6bc8:c.instructions+=3;goto B6a6bc8;
case 0x6a6bcb:c.instructions+=2;goto B6a6bcb;
case 0x6a6bce:c.instructions+=1;goto B6a6bce;
case 0x6a6bd4:goto L6a6bd4;
case 0x6a6bd7:c.instructions+=8;goto B6a6bd7;
case 0x6a6bda:c.instructions+=7;goto B6a6bda;
case 0x6a6bdd:c.instructions+=6;goto B6a6bdd;
case 0x6a6be0:c.instructions+=5;goto B6a6be0;
case 0x6a6be3:c.instructions+=4;goto B6a6be3;
case 0x6a6be6:c.instructions+=3;goto B6a6be6;
case 0x6a6be9:c.instructions+=2;goto B6a6be9;
case 0x6a6bec:c.instructions+=1;goto B6a6bec;
case 0x6a6bee:goto L6a6bee;
case 0x6a6bef:c.instructions+=4;goto B6a6bef;
case 0x6a6bf0:c.instructions+=3;goto B6a6bf0;
case 0x6a6bf1:c.instructions+=2;goto B6a6bf1;
case 0x6a6bf6:c.instructions+=1;goto B6a6bf6;
case 0x6a6bfb:goto L6a6bfb;
case 0x6a6bfd:c.instructions+=5;goto B6a6bfd;
case 0x6a6bfe:c.instructions+=4;goto B6a6bfe;
case 0x6a6c01:c.instructions+=3;goto B6a6c01;
case 0x6a6c04:c.instructions+=2;goto B6a6c04;
case 0x6a6c07:c.instructions+=1;goto B6a6c07;
case 0x6a6c09:goto L6a6c09;
case 0x6a6c0c:c.instructions+=5;goto B6a6c0c;
case 0x6a6c0f:c.instructions+=4;goto B6a6c0f;
case 0x6a6c13:c.instructions+=3;goto B6a6c13;
case 0x6a6c15:c.instructions+=2;goto B6a6c15;
case 0x6a6c18:c.instructions+=1;goto B6a6c18;
case 0x6a6c1d:goto L6a6c1d;
case 0x6a6c1f:c.instructions+=1;goto B6a6c1f;
case 0x6a6c21:goto L6a6c21;
case 0x6a6c24:c.instructions+=3;goto B6a6c24;
case 0x6a6c27:c.instructions+=2;goto B6a6c27;
case 0x6a6c2a:c.instructions+=1;goto B6a6c2a;
case 0x6a6c2d:goto L6a6c2d;
case 0x6a6c30:c.instructions+=4;goto B6a6c30;
case 0x6a6c31:c.instructions+=3;goto B6a6c31;
case 0x6a6c34:c.instructions+=2;goto B6a6c34;
case 0x6a6c37:c.instructions+=1;goto B6a6c37;
case 0x6a6c39:goto L6a6c39;
case 0x6a6c3c:c.instructions+=8;goto B6a6c3c;
case 0x6a6c3f:c.instructions+=7;goto B6a6c3f;
case 0x6a6c42:c.instructions+=6;goto B6a6c42;
case 0x6a6c43:c.instructions+=5;goto B6a6c43;
case 0x6a6c44:c.instructions+=4;goto B6a6c44;
case 0x6a6c45:c.instructions+=3;goto B6a6c45;
case 0x6a6c4a:c.instructions+=2;goto B6a6c4a;
case 0x6a6c4d:c.instructions+=1;goto B6a6c4d;
case 0x6a6c52:goto L6a6c52;
case 0x6a6c55:goto L6a6c55;
case 0x6a6c56:c.instructions+=3;goto B6a6c56;
case 0x6a6c59:c.instructions+=2;goto B6a6c59;
case 0x6a6c5c:c.instructions+=1;goto B6a6c5c;
case 0x6a6c62:goto L6a6c62;
case 0x6a6c65:c.instructions+=5;goto B6a6c65;
case 0x6a6c68:c.instructions+=4;goto B6a6c68;
case 0x6a6c6b:c.instructions+=3;goto B6a6c6b;
case 0x6a6c6d:c.instructions+=2;goto B6a6c6d;
case 0x6a6c70:c.instructions+=1;goto B6a6c70;
case 0x6a6c73:goto L6a6c73;
case 0x6a6c75:goto L6a6c75;
case 0x6a6c77:c.instructions+=1;goto B6a6c77;
case 0x6a6c7a:goto L6a6c7a;
case 0x6a6c7c:goto L6a6c7c;
case 0x6a6c7e:c.instructions+=2;goto B6a6c7e;
case 0x6a6c81:c.instructions+=1;goto B6a6c81;
case 0x6a6c83:goto L6a6c83;
case 0x6a6c86:c.instructions+=4;goto B6a6c86;
case 0x6a6c89:c.instructions+=3;goto B6a6c89;
case 0x6a6c8a:c.instructions+=2;goto B6a6c8a;
case 0x6a6c8d:c.instructions+=1;goto B6a6c8d;
case 0x6a6c8f:goto L6a6c8f;
case 0x6a6c92:c.instructions+=5;goto B6a6c92;
case 0x6a6c94:c.instructions+=4;goto B6a6c94;
case 0x6a6c98:c.instructions+=3;goto B6a6c98;
case 0x6a6c9b:c.instructions+=2;goto B6a6c9b;
case 0x6a6c9e:c.instructions+=1;goto B6a6c9e;
case 0x6a6ca3:goto L6a6ca3;
case 0x6a6ca6:c.instructions+=7;goto B6a6ca6;
case 0x6a6ca7:c.instructions+=6;goto B6a6ca7;
case 0x6a6caa:c.instructions+=5;goto B6a6caa;
case 0x6a6cac:c.instructions+=4;goto B6a6cac;
case 0x6a6cb2:c.instructions+=3;goto B6a6cb2;
case 0x6a6cb8:c.instructions+=2;goto B6a6cb8;
case 0x6a6cbb:c.instructions+=1;goto B6a6cbb;
case 0x6a6cc1:goto L6a6cc1;
case 0x6a6cc5:c.instructions+=2;goto B6a6cc5;
case 0x6a6cc9:c.instructions+=1;goto B6a6cc9;
case 0x6a6ccf:goto L6a6ccf;
case 0x6a6cd2:c.instructions+=5;goto B6a6cd2;
case 0x6a6cd5:c.instructions+=4;goto B6a6cd5;
case 0x6a6cd8:c.instructions+=3;goto B6a6cd8;
case 0x6a6cdb:c.instructions+=2;goto B6a6cdb;
case 0x6a6cde:c.instructions+=1;goto B6a6cde;
case 0x6a6ce0:goto L6a6ce0;
case 0x6a6ce3:c.instructions+=4;goto B6a6ce3;
case 0x6a6ce6:c.instructions+=3;goto B6a6ce6;
case 0x6a6ce9:c.instructions+=2;goto B6a6ce9;
case 0x6a6cec:c.instructions+=1;goto B6a6cec;
case 0x6a6cee:goto L6a6cee;
case 0x6a6cf0:goto L6a6cf0;
case 0x6a6cf2:c.instructions+=6;goto B6a6cf2;
case 0x6a6cf4:c.instructions+=5;goto B6a6cf4;
case 0x6a6cf6:c.instructions+=4;goto B6a6cf6;
case 0x6a6cf7:c.instructions+=3;goto B6a6cf7;
case 0x6a6cf8:c.instructions+=2;goto B6a6cf8;
case 0x6a6cfa:c.instructions+=1;goto B6a6cfa;
case 0x6a6cff:goto L6a6cff;
case 0x6a6d01:c.instructions+=1;goto B6a6d01;
case 0x6a6d07:goto L6a6d07;
case 0x6a6d0a:c.instructions+=13;goto B6a6d0a;
case 0x6a6d0d:c.instructions+=12;goto B6a6d0d;
case 0x6a6d10:c.instructions+=11;goto B6a6d10;
case 0x6a6d13:c.instructions+=10;goto B6a6d13;
case 0x6a6d16:c.instructions+=9;goto B6a6d16;
case 0x6a6d19:c.instructions+=8;goto B6a6d19;
case 0x6a6d1c:c.instructions+=7;goto B6a6d1c;
case 0x6a6d1f:c.instructions+=6;goto B6a6d1f;
case 0x6a6d22:c.instructions+=5;goto B6a6d22;
case 0x6a6d25:c.instructions+=4;goto B6a6d25;
case 0x6a6d29:c.instructions+=3;goto B6a6d29;
case 0x6a6d2b:c.instructions+=2;goto B6a6d2b;
case 0x6a6d2e:c.instructions+=1;goto B6a6d2e;
case 0x6a6d30:goto L6a6d30;
case 0x6a6d33:c.instructions+=1;goto B6a6d33;
case 0x6a6d36:goto L6a6d36;
case 0x6a6d38:c.instructions+=1;goto B6a6d38;
case 0x6a6d3a:goto L6a6d3a;
case 0x6a6d3d:c.instructions+=5;goto B6a6d3d;
case 0x6a6d40:c.instructions+=4;goto B6a6d40;
case 0x6a6d43:c.instructions+=3;goto B6a6d43;
case 0x6a6d46:c.instructions+=2;goto B6a6d46;
case 0x6a6d49:c.instructions+=1;goto B6a6d49;
case 0x6a6d4b:goto L6a6d4b;
case 0x6a6d4e:c.instructions+=14;goto B6a6d4e;
case 0x6a6d51:c.instructions+=13;goto B6a6d51;
case 0x6a6d54:c.instructions+=12;goto B6a6d54;
case 0x6a6d57:c.instructions+=11;goto B6a6d57;
case 0x6a6d59:c.instructions+=10;goto B6a6d59;
case 0x6a6d5c:c.instructions+=9;goto B6a6d5c;
case 0x6a6d5f:c.instructions+=8;goto B6a6d5f;
case 0x6a6d62:c.instructions+=7;goto B6a6d62;
case 0x6a6d65:c.instructions+=6;goto B6a6d65;
case 0x6a6d68:c.instructions+=5;goto B6a6d68;
case 0x6a6d6a:c.instructions+=4;goto B6a6d6a;
case 0x6a6d6d:c.instructions+=3;goto B6a6d6d;
case 0x6a6d6f:c.instructions+=2;goto B6a6d6f;
case 0x6a6d70:c.instructions+=1;goto B6a6d70;
case 0x6a6d75:goto L6a6d75;
case 0x6a6d77:c.instructions+=1;goto B6a6d77;
case 0x6a6d7d:goto L6a6d7d;
case 0x6a6d80:c.instructions+=11;goto B6a6d80;
case 0x6a6d83:c.instructions+=10;goto B6a6d83;
case 0x6a6d85:c.instructions+=9;goto B6a6d85;
case 0x6a6d88:c.instructions+=8;goto B6a6d88;
case 0x6a6d8b:c.instructions+=7;goto B6a6d8b;
case 0x6a6d8e:c.instructions+=6;goto B6a6d8e;
case 0x6a6d91:c.instructions+=5;goto B6a6d91;
case 0x6a6d93:c.instructions+=4;goto B6a6d93;
case 0x6a6d96:c.instructions+=3;goto B6a6d96;
case 0x6a6d98:c.instructions+=2;goto B6a6d98;
case 0x6a6d99:c.instructions+=1;goto B6a6d99;
case 0x6a6d9e:goto L6a6d9e;
case 0x6a6da0:c.instructions+=1;goto B6a6da0;
case 0x6a6da6:goto L6a6da6;
case 0x6a6da9:c.instructions+=3;goto B6a6da9;
case 0x6a6dac:c.instructions+=2;goto B6a6dac;
case 0x6a6daf:c.instructions+=1;goto B6a6daf;
case 0x6a6db5:goto L6a6db5;
case 0x6a6db8:goto L6a6db8;
case 0x6a6dba:c.instructions+=1;goto B6a6dba;
case 0x6a6dc0:goto L6a6dc0;
case 0x6a6dc7:goto L6a6dc7;
case 0x6a6dca:c.instructions+=5;goto B6a6dca;
case 0x6a6dcd:c.instructions+=4;goto B6a6dcd;
case 0x6a6dd0:c.instructions+=3;goto B6a6dd0;
case 0x6a6dd2:c.instructions+=2;goto B6a6dd2;
case 0x6a6dd5:c.instructions+=1;goto B6a6dd5;
case 0x6a6ddb:goto L6a6ddb;
case 0x6a6dde:c.instructions+=6;goto B6a6dde;
case 0x6a6de1:c.instructions+=5;goto B6a6de1;
case 0x6a6de4:c.instructions+=4;goto B6a6de4;
case 0x6a6de7:c.instructions+=3;goto B6a6de7;
case 0x6a6dea:c.instructions+=2;goto B6a6dea;
case 0x6a6df0:c.instructions+=1;goto B6a6df0;
case 0x6a6df6:goto L6a6df6;
case 0x6a6dfa:c.instructions+=2;goto B6a6dfa;
case 0x6a6dfe:c.instructions+=1;goto B6a6dfe;
case 0x6a6e00:goto L6a6e00;
case 0x6a6e03:c.instructions+=5;goto B6a6e03;
case 0x6a6e06:c.instructions+=4;goto B6a6e06;
case 0x6a6e09:c.instructions+=3;goto B6a6e09;
case 0x6a6e0b:c.instructions+=2;goto B6a6e0b;
case 0x6a6e0c:c.instructions+=1;goto B6a6e0c;
case 0x6a6e11:goto L6a6e11;
case 0x6a6e13:c.instructions+=1;goto B6a6e13;
case 0x6a6e19:goto L6a6e19;
case 0x6a6e1c:c.instructions+=3;goto B6a6e1c;
case 0x6a6e1f:c.instructions+=2;goto B6a6e1f;
case 0x6a6e22:c.instructions+=1;goto B6a6e22;
case 0x6a6e24:goto L6a6e24;
case 0x6a6e26:c.instructions+=9;goto B6a6e26;
case 0x6a6e29:c.instructions+=8;goto B6a6e29;
case 0x6a6e2f:c.instructions+=7;goto B6a6e2f;
case 0x6a6e31:c.instructions+=6;goto B6a6e31;
case 0x6a6e33:c.instructions+=5;goto B6a6e33;
case 0x6a6e37:c.instructions+=4;goto B6a6e37;
case 0x6a6e3b:c.instructions+=3;goto B6a6e3b;
case 0x6a6e3e:c.instructions+=2;goto B6a6e3e;
case 0x6a6e41:c.instructions+=1;goto B6a6e41;
case 0x6a6e47:goto L6a6e47;
case 0x6a6e49:goto L6a6e49;
case 0x6a6e4c:goto L6a6e4c;
case 0x6a6e50:c.instructions+=2;goto B6a6e50;
case 0x6a6e54:c.instructions+=1;goto B6a6e54;
case 0x6a6e56:goto L6a6e56;
case 0x6a6e5a:c.instructions+=1;goto B6a6e5a;
case 0x6a6e5c:goto L6a6e5c;
case 0x6a6e5f:c.instructions+=7;goto B6a6e5f;
case 0x6a6e61:c.instructions+=6;goto B6a6e61;
case 0x6a6e64:c.instructions+=5;goto B6a6e64;
case 0x6a6e67:c.instructions+=4;goto B6a6e67;
case 0x6a6e6a:c.instructions+=3;goto B6a6e6a;
case 0x6a6e6d:c.instructions+=2;goto B6a6e6d;
case 0x6a6e70:c.instructions+=1;goto B6a6e70;
case 0x6a6e73:goto L6a6e73;
case 0x6a6e75:c.instructions+=2;goto B6a6e75;
case 0x6a6e78:c.instructions+=1;goto B6a6e78;
case 0x6a6e7a:goto L6a6e7a;
case 0x6a6e7d:c.instructions+=3;goto B6a6e7d;
case 0x6a6e80:c.instructions+=2;goto B6a6e80;
case 0x6a6e83:c.instructions+=1;goto B6a6e83;
case 0x6a6e85:goto L6a6e85;
case 0x6a6e87:goto L6a6e87;
case 0x6a6e8a:c.instructions+=3;goto B6a6e8a;
case 0x6a6e8c:c.instructions+=2;goto B6a6e8c;
case 0x6a6e8f:c.instructions+=1;goto B6a6e8f;
case 0x6a6e91:goto L6a6e91;
case 0x6a6e94:c.instructions+=4;goto B6a6e94;
case 0x6a6e97:c.instructions+=3;goto B6a6e97;
case 0x6a6e9a:c.instructions+=2;goto B6a6e9a;
case 0x6a6e9d:c.instructions+=1;goto B6a6e9d;
case 0x6a6e9f:goto L6a6e9f;
case 0x6a6ea1:c.instructions+=1;goto B6a6ea1;
case 0x6a6ea3:goto L6a6ea3;
case 0x6a6ea6:c.instructions+=1;goto B6a6ea6;
case 0x6a6ea8:goto L6a6ea8;
case 0x6a6eab:goto L6a6eab;
case 0x6a6eae:c.instructions+=4;goto B6a6eae;
case 0x6a6eb1:c.instructions+=3;goto B6a6eb1;
case 0x6a6eb4:c.instructions+=2;goto B6a6eb4;
case 0x6a6eb7:c.instructions+=1;goto B6a6eb7;
case 0x6a6eb9:goto L6a6eb9;
case 0x6a6ebc:c.instructions+=4;goto B6a6ebc;
case 0x6a6ebf:c.instructions+=3;goto B6a6ebf;
case 0x6a6ec2:c.instructions+=2;goto B6a6ec2;
case 0x6a6ec5:c.instructions+=1;goto B6a6ec5;
case 0x6a6ec7:goto L6a6ec7;
case 0x6a6eca:c.instructions+=4;goto B6a6eca;
case 0x6a6ecd:c.instructions+=3;goto B6a6ecd;
case 0x6a6ed0:c.instructions+=2;goto B6a6ed0;
case 0x6a6ed3:c.instructions+=1;goto B6a6ed3;
case 0x6a6ed5:goto L6a6ed5;
case 0x6a6ed7:goto L6a6ed7;
case 0x6a6ed9:c.instructions+=6;goto B6a6ed9;
case 0x6a6edb:c.instructions+=5;goto B6a6edb;
case 0x6a6ede:c.instructions+=4;goto B6a6ede;
case 0x6a6ee0:c.instructions+=3;goto B6a6ee0;
case 0x6a6ee1:c.instructions+=2;goto B6a6ee1;
case 0x6a6ee2:c.instructions+=1;goto B6a6ee2;
case 0x6a6ee7:goto L6a6ee7;
case 0x6a6ee9:c.instructions+=1;goto B6a6ee9;
case 0x6a6eeb:goto L6a6eeb;
case 0x6a6eee:c.instructions+=3;goto B6a6eee;
case 0x6a6ef1:c.instructions+=2;goto B6a6ef1;
case 0x6a6ef4:c.instructions+=1;goto B6a6ef4;
case 0x6a6efa:goto L6a6efa;
case 0x6a6efe:c.instructions+=1;goto B6a6efe;
case 0x6a6f04:goto L6a6f04;
case 0x6a6f07:c.instructions+=1;goto B6a6f07;
case 0x6a6f0d:goto L6a6f0d;
case 0x6a6f11:c.instructions+=1;goto B6a6f11;
case 0x6a6f13:goto L6a6f13;
case 0x6a6f17:c.instructions+=2;goto B6a6f17;
case 0x6a6f1b:c.instructions+=1;goto B6a6f1b;
case 0x6a6f1d:goto L6a6f1d;
case 0x6a6f20:c.instructions+=5;goto B6a6f20;
case 0x6a6f23:c.instructions+=4;goto B6a6f23;
case 0x6a6f26:c.instructions+=3;goto B6a6f26;
case 0x6a6f28:c.instructions+=2;goto B6a6f28;
case 0x6a6f2b:c.instructions+=1;goto B6a6f2b;
case 0x6a6f2d:goto L6a6f2d;
case 0x6a6f30:c.instructions+=9;goto B6a6f30;
case 0x6a6f33:c.instructions+=8;goto B6a6f33;
case 0x6a6f36:c.instructions+=7;goto B6a6f36;
case 0x6a6f39:c.instructions+=6;goto B6a6f39;
case 0x6a6f3b:c.instructions+=5;goto B6a6f3b;
case 0x6a6f3e:c.instructions+=4;goto B6a6f3e;
case 0x6a6f41:c.instructions+=3;goto B6a6f41;
case 0x6a6f44:c.instructions+=2;goto B6a6f44;
case 0x6a6f47:c.instructions+=1;goto B6a6f47;
case 0x6a6f4a:goto L6a6f4a;
case 0x6a6f4d:c.instructions+=3;goto B6a6f4d;
case 0x6a6f50:c.instructions+=2;goto B6a6f50;
case 0x6a6f53:c.instructions+=1;goto B6a6f53;
case 0x6a6f55:goto L6a6f55;
case 0x6a6f57:c.instructions+=4;goto B6a6f57;
case 0x6a6f5a:c.instructions+=3;goto B6a6f5a;
case 0x6a6f5d:c.instructions+=2;goto B6a6f5d;
case 0x6a6f61:c.instructions+=1;goto B6a6f61;
case 0x6a6f63:goto L6a6f63;
case 0x6a6f64:c.instructions+=4;goto B6a6f64;
case 0x6a6f65:c.instructions+=3;goto B6a6f65;
case 0x6a6f66:c.instructions+=2;goto B6a6f66;
case 0x6a6f67:c.instructions+=1;goto B6a6f67;
case 0x6a6f6a:goto L6a6f6a;
case 0x6a6f6c:c.instructions+=10;goto B6a6f6c;
case 0x6a6f6d:c.instructions+=9;goto B6a6f6d;
case 0x6a6f6f:c.instructions+=8;goto B6a6f6f;
case 0x6a6f72:c.instructions+=7;goto B6a6f72;
case 0x6a6f73:c.instructions+=6;goto B6a6f73;
case 0x6a6f75:c.instructions+=5;goto B6a6f75;
case 0x6a6f7b:c.instructions+=4;goto B6a6f7b;
case 0x6a6f7c:c.instructions+=3;goto B6a6f7c;
case 0x6a6f81:c.instructions+=2;goto B6a6f81;
case 0x6a6f83:c.instructions+=1;goto B6a6f83;
case 0x6a6f85:goto L6a6f85;
case 0x6a6f87:c.instructions+=1;goto B6a6f87;
case 0x6a6f89:goto L6a6f89;
case 0x6a6f8b:c.instructions+=2;goto B6a6f8b;
case 0x6a6f8c:c.instructions+=1;goto B6a6f8c;
case 0x6a6f91:goto L6a6f91;
case 0x6a6f92:c.instructions+=2;goto B6a6f92;
case 0x6a6f94:c.instructions+=1;goto B6a6f94;
case 0x6a6f99:goto L6a6f99;
case 0x6a6f9b:c.instructions+=2;goto B6a6f9b;
case 0x6a6f9d:c.instructions+=1;goto B6a6f9d;
case 0x6a6fa3:goto L6a6fa3;
case 0x6a6fa8:c.instructions+=1;goto B6a6fa8;
case 0x6a6fad:goto L6a6fad;
case 0x6a6faf:c.instructions+=2;goto B6a6faf;
case 0x6a6fb0:c.instructions+=1;goto B6a6fb0;
case 0x6a6fb2:goto L6a6fb2;
case 0x6a6fb4:c.instructions+=1;goto B6a6fb4;
case 0x6a6fb9:goto L6a6fb9;
case 0x6a6fbb:goto L6a6fbb;
case 0x6a6fbd:goto L6a6fbd;
case 0x6a6fbf:c.instructions+=2;goto B6a6fbf;
case 0x6a6fc5:c.instructions+=1;goto B6a6fc5;
case 0x6a6fcb:goto L6a6fcb;
case 0x6a6fd1:c.instructions+=6;goto B6a6fd1;
case 0x6a6fd3:c.instructions+=5;goto B6a6fd3;
case 0x6a6fd4:c.instructions+=4;goto B6a6fd4;
case 0x6a6fd9:c.instructions+=3;goto B6a6fd9;
case 0x6a6fda:c.instructions+=2;goto B6a6fda;
case 0x6a6fdc:c.instructions+=1;goto B6a6fdc;
case 0x6a6fe1:goto L6a6fe1;
case 0x6a6fe3:c.instructions+=1;goto B6a6fe3;
case 0x6a6fe9:goto L6a6fe9;
case 0x6a6fef:c.instructions+=1;goto B6a6fef;
case 0x6a6ff4:goto L6a6ff4;
case 0x6a6ff6:c.instructions+=1;goto B6a6ff6;
case 0x6a6ffc:goto L6a6ffc;
case 0x6a6ffe:c.instructions+=1;goto B6a6ffe;
default:missing_instruction(c.pc);}
B6a6000:L6a6000:{c.instructions+=2;NFSU2_TR(0x6a6000);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a6003:{NFSU2_TR(0x6a6003);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6020;}}
}
B6a6005:L6a6005:{c.instructions+=1;NFSU2_TR(0x6a6005);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6008:L6a6008:{c.instructions+=4;NFSU2_TR(0x6a6008);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a600b:{NFSU2_TR(0x6a600b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a600e:{NFSU2_TR(0x6a600e);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+24))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6a6011:{NFSU2_TR(0x6a6011);
if(r1(R+518)){{goto L6a601b;}}
}
B6a6013:L6a6013:{c.instructions+=3;NFSU2_TR(0x6a6013);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6016:{NFSU2_TR(0x6a6016);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B6a6019:{NFSU2_TR(0x6a6019);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6008u);}goto L6a6008;}}
}
B6a601b:L6a601b:{c.instructions+=2;NFSU2_TR(0x6a601b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B6a601e:{NFSU2_TR(0x6a601e);
if(r1(R+512)){{goto L6a6050;}}
}
B6a6020:L6a6020:{c.instructions+=9;NFSU2_TR(0x6a6020);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a6023:{NFSU2_TR(0x6a6023);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6026:{NFSU2_TR(0x6a6026);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a6029:{NFSU2_TR(0x6a6029);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a602a:{NFSU2_TR(0x6a602a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a602d:{NFSU2_TR(0x6a602d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a602e:{NFSU2_TR(0x6a602e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a6031:{NFSU2_TR(0x6a6031);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6032:{NFSU2_TR(0x6a6032);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6037ull));
TAIL_STATIC(0x69daedu,69d);
}
B6a6037:L6a6037:{c.instructions+=2;NFSU2_TR(0x6a6037);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a603a:{NFSU2_TR(0x6a603a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a6050;}}
}
B6a603c:L6a603c:{c.instructions+=10;NFSU2_TR(0x6a603c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a603e:{NFSU2_TR(0x6a603e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6041:{NFSU2_TR(0x6a6041);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a6044:{NFSU2_TR(0x6a6044);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a6047:{NFSU2_TR(0x6a6047);
u8 U[40];
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
}
B6a6048:{NFSU2_TR(0x6a6048);
u8 U[40];
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
}
B6a6049:{NFSU2_TR(0x6a6049);
u8 U[40];
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
}
B6a604a:{NFSU2_TR(0x6a604a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a604d:{NFSU2_TR(0x6a604d);
u8 U[40];
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
}
B6a604e:{NFSU2_TR(0x6a604e);
if(r1(R+518)){{goto L6a6085;}}
}
B6a6050:L6a6050:{c.instructions+=5;NFSU2_TR(0x6a6050);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6053:{NFSU2_TR(0x6a6053);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6056:{NFSU2_TR(0x6a6056);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a6059:{NFSU2_TR(0x6a6059);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a605c:{NFSU2_TR(0x6a605c);
if(r1(R+512)){TAIL_STATIC(0x6a5f79u,6a5);}
}
B6a6062:L6a6062:{c.instructions+=1;NFSU2_TR(0x6a6062);
{goto L6a6088;}
}
B6a6064:L6a6064:{c.instructions+=12;NFSU2_TR(0x6a6064);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a6067:{NFSU2_TR(0x6a6067);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a606a:{NFSU2_TR(0x6a606a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a606b:{NFSU2_TR(0x6a606b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a606e:{NFSU2_TR(0x6a606e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a606f:{NFSU2_TR(0x6a606f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a6072:{NFSU2_TR(0x6a6072);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6075:{NFSU2_TR(0x6a6075);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6076:{NFSU2_TR(0x6a6076);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6077:{NFSU2_TR(0x6a6077);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6078:{NFSU2_TR(0x6a6078);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a607b:{NFSU2_TR(0x6a607b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6080ull));
TAIL_STATIC(0x69daedu,69d);
}
B6a6080:L6a6080:{c.instructions+=2;NFSU2_TR(0x6a6080);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6083:{NFSU2_TR(0x6a6083);
{goto L6a6088;}
}
B6a6085:L6a6085:{c.instructions+=1;NFSU2_TR(0x6a6085);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a6088:L6a6088:{c.instructions+=2;NFSU2_TR(0x6a6088);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a608c:{NFSU2_TR(0x6a608c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a60b9;}}
}
B6a608e:L6a608e:{c.instructions+=2;NFSU2_TR(0x6a608e);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6a6092:{NFSU2_TR(0x6a6092);
if(r1(R+518)){{goto L6a60af;}}
}
B6a6094:L6a6094:{c.instructions+=6;NFSU2_TR(0x6a6094);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6097:{NFSU2_TR(0x6a6097);
u8 U[4];
w4(U+0,u32(0x7bae68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a609c:{NFSU2_TR(0x6a609c);
u8 U[4];
w4(U+0,u32(0xfa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a60a1:{NFSU2_TR(0x6a60a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a60a4:{NFSU2_TR(0x6a60a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a60a7:{NFSU2_TR(0x6a60a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a60acull));
TAIL_STATIC(0x69e936u,69e);
}
B6a60ac:L6a60ac:{c.instructions+=1;NFSU2_TR(0x6a60ac);
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
B6a60af:L6a60af:{c.instructions+=2;NFSU2_TR(0x6a60af);
w4(R+0,u32(0x80004005ull));
}
B6a60b4:{NFSU2_TR(0x6a60b4);
{goto L6a61b6;}
}
B6a60b9:L6a60b9:{c.instructions+=7;NFSU2_TR(0x6a60b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a60bc:{NFSU2_TR(0x6a60bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a60bf:{NFSU2_TR(0x6a60bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a60c2:{NFSU2_TR(0x6a60c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a60c5:{NFSU2_TR(0x6a60c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a60c8:{NFSU2_TR(0x6a60c8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a60cf:{NFSU2_TR(0x6a60cf);
if(r1(R+518)){{goto L6a6106;}}
}
B6a60d1:L6a60d1:{c.instructions+=3;NFSU2_TR(0x6a60d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a60d4:{NFSU2_TR(0x6a60d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6a60d6:{NFSU2_TR(0x6a60d6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a6106;}}
}
B6a60d8:L6a60d8:{c.instructions+=3;NFSU2_TR(0x6a60d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a60db:{NFSU2_TR(0x6a60db);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a60dd:{NFSU2_TR(0x6a60dd);
{goto L6a60e2;}
}
B6a60df:L6a60df:{c.instructions+=1;NFSU2_TR(0x6a60df);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6a60e2:L6a60e2:{c.instructions+=3;NFSU2_TR(0x6a60e2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a60e3:{NFSU2_TR(0x6a60e3);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a60e5:{NFSU2_TR(0x6a60e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a60dfu);}goto L6a60df;}}
}
B6a60e7:L6a60e7:{c.instructions+=2;NFSU2_TR(0x6a60e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6a60e9:{NFSU2_TR(0x6a60e9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a60fc;}}
}
B6a60eb:L6a60eb:{c.instructions+=7;NFSU2_TR(0x6a60eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a60ee:{NFSU2_TR(0x6a60ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6a60f1:{NFSU2_TR(0x6a60f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6a60f3:{NFSU2_TR(0x6a60f3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a60f4:{NFSU2_TR(0x6a60f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a60f7:{NFSU2_TR(0x6a60f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a60fa:{NFSU2_TR(0x6a60fa);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a60ebu);}goto L6a60eb;}}
}
B6a60fc:L6a60fc:{c.instructions+=3;NFSU2_TR(0x6a60fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a60ff:{NFSU2_TR(0x6a60ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6102:{NFSU2_TR(0x6a6102);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6a6106:L6a6106:{c.instructions+=1;NFSU2_TR(0x6a6106);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a610a:L6a610a:{c.instructions+=9;NFSU2_TR(0x6a610a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a610d:{NFSU2_TR(0x6a610d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6110:{NFSU2_TR(0x6a6110);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a6113:{NFSU2_TR(0x6a6113);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6116:{NFSU2_TR(0x6a6116);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a6119:{NFSU2_TR(0x6a6119);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a611c:{NFSU2_TR(0x6a611c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a611f:{NFSU2_TR(0x6a611f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6122:{NFSU2_TR(0x6a6122);
if(r1(R+518)){{goto L6a618b;}}
}
B6a6124:L6a6124:{c.instructions+=9;NFSU2_TR(0x6a6124);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6127:{NFSU2_TR(0x6a6127);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6a612b:{NFSU2_TR(0x6a612b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a612e:{NFSU2_TR(0x6a612e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a6131:{NFSU2_TR(0x6a6131);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a6134:{NFSU2_TR(0x6a6134);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6137:{NFSU2_TR(0x6a6137);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a613a:{NFSU2_TR(0x6a613a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a613d:{NFSU2_TR(0x6a613d);
if(r1(R+518)){{goto L6a6175;}}
}
B6a613f:L6a613f:{c.instructions+=5;NFSU2_TR(0x6a613f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6142:{NFSU2_TR(0x6a6142);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6145:{NFSU2_TR(0x6a6145);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6148:{NFSU2_TR(0x6a6148);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a614b:{NFSU2_TR(0x6a614b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a614e:L6a614e:{c.instructions+=7;NFSU2_TR(0x6a614e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a6150:{NFSU2_TR(0x6a6150);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6153:{NFSU2_TR(0x6a6153);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6156:{NFSU2_TR(0x6a6156);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a6159:{NFSU2_TR(0x6a6159);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a615c:{NFSU2_TR(0x6a615c);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a615f:{NFSU2_TR(0x6a615f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6172;}}
}
B6a6161:L6a6161:{c.instructions+=6;NFSU2_TR(0x6a6161);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6164:{NFSU2_TR(0x6a6164);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6167:{NFSU2_TR(0x6a6167);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a616a:{NFSU2_TR(0x6a616a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B6a616d:{NFSU2_TR(0x6a616d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a6170:{NFSU2_TR(0x6a6170);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a614eu);}goto L6a614e;}}
}
B6a6172:L6a6172:{c.instructions+=1;NFSU2_TR(0x6a6172);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6175:L6a6175:{c.instructions+=8;NFSU2_TR(0x6a6175);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6178:{NFSU2_TR(0x6a6178);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a617b:{NFSU2_TR(0x6a617b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a617e:{NFSU2_TR(0x6a617e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a6181:{NFSU2_TR(0x6a6181);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6a6183:{NFSU2_TR(0x6a6183);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6186:{NFSU2_TR(0x6a6186);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6189:{NFSU2_TR(0x6a6189);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a618b:L6a618b:{c.instructions+=3;NFSU2_TR(0x6a618b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a618e:{NFSU2_TR(0x6a618e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B6a6192:{NFSU2_TR(0x6a6192);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a610au);}goto L6a610a;}}
}
B6a6198:L6a6198:{c.instructions+=3;NFSU2_TR(0x6a6198);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a619b:{NFSU2_TR(0x6a619b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a619e:{NFSU2_TR(0x6a619e);
if(r1(R+518)){{goto L6a61b4;}}
}
B6a61a0:L6a61a0:{c.instructions+=7;NFSU2_TR(0x6a61a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a61a3:{NFSU2_TR(0x6a61a3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a61a5:{NFSU2_TR(0x6a61a5);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a61a7:{NFSU2_TR(0x6a61a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a61a9:{NFSU2_TR(0x6a61a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a61aa:{NFSU2_TR(0x6a61aa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a61ab:{NFSU2_TR(0x6a61ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a61b0ull));
TAIL_STATIC(0x6a5ef5u,6a5);
}
B6a61b0:L6a61b0:{c.instructions+=2;NFSU2_TR(0x6a61b0);
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
B6a61b2:{NFSU2_TR(0x6a61b2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a61b6;}}
}
B6a61b4:L6a61b4:{c.instructions+=1;NFSU2_TR(0x6a61b4);
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
B6a61b6:L6a61b6:{c.instructions+=5;NFSU2_TR(0x6a61b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a61b7:{NFSU2_TR(0x6a61b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a61b8:{NFSU2_TR(0x6a61b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a61b9:{NFSU2_TR(0x6a61b9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6a61ba:{NFSU2_TR(0x6a61ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a61bd:L6a61bd:{c.instructions+=9;NFSU2_TR(0x6a61bd);
__builtin_memmove((R+28),(R+28),4);
}
B6a61bf:{NFSU2_TR(0x6a61bf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a61c0:{NFSU2_TR(0x6a61c0);
__builtin_memmove((R+20),(R+16),4);
}
B6a61c2:{NFSU2_TR(0x6a61c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a61c5:{NFSU2_TR(0x6a61c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a61c8:{NFSU2_TR(0x6a61c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a61cb:{NFSU2_TR(0x6a61cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a61ce:{NFSU2_TR(0x6a61ce);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a61d1:{NFSU2_TR(0x6a61d1);
if(r1(R+518)){{goto L6a61e6;}}
}
B6a61d3:L6a61d3:{c.instructions+=6;NFSU2_TR(0x6a61d3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a61d5:{NFSU2_TR(0x6a61d5);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a61d7:{NFSU2_TR(0x6a61d7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a61d9:{NFSU2_TR(0x6a61d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a61da:{NFSU2_TR(0x6a61da);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a61dd:{NFSU2_TR(0x6a61dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a61e2ull));
TAIL_STATIC(0x6a5ef5u,6a5);
}
B6a61e2:L6a61e2:{c.instructions+=2;NFSU2_TR(0x6a61e2);
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
B6a61e4:{NFSU2_TR(0x6a61e4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a61e8;}}
}
B6a61e6:L6a61e6:{c.instructions+=1;NFSU2_TR(0x6a61e6);
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
B6a61e8:L6a61e8:{c.instructions+=2;NFSU2_TR(0x6a61e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6a61e9:{NFSU2_TR(0x6a61e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a61ec:L6a61ec:{c.instructions+=9;NFSU2_TR(0x6a61ec);
__builtin_memmove((R+28),(R+28),4);
}
B6a61ee:{NFSU2_TR(0x6a61ee);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a61ef:{NFSU2_TR(0x6a61ef);
__builtin_memmove((R+20),(R+16),4);
}
B6a61f1:{NFSU2_TR(0x6a61f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B6a61f4:{NFSU2_TR(0x6a61f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a61f5:{NFSU2_TR(0x6a61f5);
__builtin_memmove((R+12),(R+4),4);
}
B6a61f7:{NFSU2_TR(0x6a61f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a61f8:{NFSU2_TR(0x6a61f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a61fb:{NFSU2_TR(0x6a61fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6200ull));
TAIL_STATIC(0x69e219u,69e);
}
B6a6200:L6a6200:{c.instructions+=3;NFSU2_TR(0x6a6200);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a6203:{NFSU2_TR(0x6a6203);
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
B6a6205:{NFSU2_TR(0x6a6205);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a6211;}}
}
B6a6207:L6a6207:{c.instructions+=2;NFSU2_TR(0x6a6207);
w4(R+0,u32(0x80004005ull));
}
B6a620c:{NFSU2_TR(0x6a620c);
{goto L6a68b1;}
}
B6a6211:L6a6211:{c.instructions+=6;NFSU2_TR(0x6a6211);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6214:{NFSU2_TR(0x6a6214);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6215:{NFSU2_TR(0x6a6215);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a6217:{NFSU2_TR(0x6a6217);
u8 U[4];
w4(U+0,u32(0x19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6219:{NFSU2_TR(0x6a6219);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a621a:{NFSU2_TR(0x6a621a);
__builtin_memmove((R+28),(R+24),4);
}
B6a621c:L6a621c:{c.instructions+=1;NFSU2_TR(0x6a621c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6a621e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a621cu);}goto L6a621c;}
}
B6a621e:L6a621e:{c.instructions+=12;NFSU2_TR(0x6a621e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6221:{NFSU2_TR(0x6a6221);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6224:{NFSU2_TR(0x6a6224);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6a6226:{NFSU2_TR(0x6a6226);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6229:{NFSU2_TR(0x6a6229);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B6a622b:{NFSU2_TR(0x6a622b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6a622e:{NFSU2_TR(0x6a622e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B6a6231:{NFSU2_TR(0x6a6231);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a6233:{NFSU2_TR(0x6a6233);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B6a6236:{NFSU2_TR(0x6a6236);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6239:{NFSU2_TR(0x6a6239);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a623c:{NFSU2_TR(0x6a623c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a626a;}}
}
B6a623e:L6a623e:{c.instructions+=4;NFSU2_TR(0x6a623e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6241:{NFSU2_TR(0x6a6241);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a6244:{NFSU2_TR(0x6a6244);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6247:{NFSU2_TR(0x6a6247);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a6264;}}
}
B6a6249:L6a6249:{c.instructions+=2;NFSU2_TR(0x6a6249);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a624d:{NFSU2_TR(0x6a624d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a6264;}}
}
B6a624f:L6a624f:{c.instructions+=3;NFSU2_TR(0x6a624f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6252:{NFSU2_TR(0x6a6252);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a6255:{NFSU2_TR(0x6a6255);
if(r1(R+512)){{goto L6a625b;}}
}
B6a6257:L6a6257:{c.instructions+=2;NFSU2_TR(0x6a6257);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a6258:{NFSU2_TR(0x6a6258);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a625b:L6a625b:{c.instructions+=3;NFSU2_TR(0x6a625b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a625e:{NFSU2_TR(0x6a625e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6261:{NFSU2_TR(0x6a6261);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6264:L6a6264:{c.instructions+=3;NFSU2_TR(0x6a6264);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6a6265:{NFSU2_TR(0x6a6265);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6a6268:{NFSU2_TR(0x6a6268);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a623eu);}goto L6a623e;}}
}
B6a626a:L6a626a:{c.instructions+=4;NFSU2_TR(0x6a626a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a626d:{NFSU2_TR(0x6a626d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a6270:{NFSU2_TR(0x6a6270);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6271:{NFSU2_TR(0x6a6271);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6276ull));
TAIL_STATIC(0x575620u,575);
}
B6a6276:L6a6276:{c.instructions+=4;NFSU2_TR(0x6a6276);
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
B6a6278:{NFSU2_TR(0x6a6278);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a6279:{NFSU2_TR(0x6a6279);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a627c:{NFSU2_TR(0x6a627c);
if(r1(R+518)){{goto L6a68ab;}}
}
B6a6282:L6a6282:{c.instructions+=4;NFSU2_TR(0x6a6282);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6285:{NFSU2_TR(0x6a6285);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a6288:{NFSU2_TR(0x6a6288);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6289:{NFSU2_TR(0x6a6289);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a628eull));
TAIL_STATIC(0x575620u,575);
}
B6a628e:L6a628e:{c.instructions+=4;NFSU2_TR(0x6a628e);
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
B6a6290:{NFSU2_TR(0x6a6290);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a6291:{NFSU2_TR(0x6a6291);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6294:{NFSU2_TR(0x6a6294);
if(r1(R+518)){{goto L6a68ab;}}
}
B6a629a:L6a629a:{c.instructions+=4;NFSU2_TR(0x6a629a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a629d:{NFSU2_TR(0x6a629d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a62a0:{NFSU2_TR(0x6a62a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a62a1:{NFSU2_TR(0x6a62a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a62a6ull));
TAIL_STATIC(0x575620u,575);
}
B6a62a6:L6a62a6:{c.instructions+=4;NFSU2_TR(0x6a62a6);
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
B6a62a8:{NFSU2_TR(0x6a62a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a62a9:{NFSU2_TR(0x6a62a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a62ac:{NFSU2_TR(0x6a62ac);
if(r1(R+518)){{goto L6a68ab;}}
}
B6a62b2:L6a62b2:{c.instructions+=4;NFSU2_TR(0x6a62b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a62b5:{NFSU2_TR(0x6a62b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a62b8:{NFSU2_TR(0x6a62b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a62b9:{NFSU2_TR(0x6a62b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a62beull));
TAIL_STATIC(0x575620u,575);
}
B6a62be:L6a62be:{c.instructions+=4;NFSU2_TR(0x6a62be);
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
B6a62c0:{NFSU2_TR(0x6a62c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a62c1:{NFSU2_TR(0x6a62c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a62c4:{NFSU2_TR(0x6a62c4);
if(r1(R+518)){{goto L6a68ab;}}
}
B6a62ca:L6a62ca:{c.instructions+=4;NFSU2_TR(0x6a62ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a62cd:{NFSU2_TR(0x6a62cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a62d0:{NFSU2_TR(0x6a62d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a62d1:{NFSU2_TR(0x6a62d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a62d6ull));
TAIL_STATIC(0x575620u,575);
}
B6a62d6:L6a62d6:{c.instructions+=4;NFSU2_TR(0x6a62d6);
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
B6a62d8:{NFSU2_TR(0x6a62d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a62d9:{NFSU2_TR(0x6a62d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a62dc:{NFSU2_TR(0x6a62dc);
if(r1(R+518)){{goto L6a68ab;}}
}
B6a62e2:L6a62e2:{c.instructions+=4;NFSU2_TR(0x6a62e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a62e5:{NFSU2_TR(0x6a62e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a62e8:{NFSU2_TR(0x6a62e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a62e9:{NFSU2_TR(0x6a62e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a62eeull));
TAIL_STATIC(0x575620u,575);
}
B6a62ee:L6a62ee:{c.instructions+=4;NFSU2_TR(0x6a62ee);
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
B6a62f0:{NFSU2_TR(0x6a62f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a62f1:{NFSU2_TR(0x6a62f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a62f4:{NFSU2_TR(0x6a62f4);
if(r1(R+518)){{goto L6a68ab;}}
}
B6a62fa:L6a62fa:{c.instructions+=4;NFSU2_TR(0x6a62fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a62fd:{NFSU2_TR(0x6a62fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a6300:{NFSU2_TR(0x6a6300);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6301:{NFSU2_TR(0x6a6301);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6306ull));
TAIL_STATIC(0x575620u,575);
}
B6a6306:L6a6306:{c.instructions+=4;NFSU2_TR(0x6a6306);
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
B6a6308:{NFSU2_TR(0x6a6308);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a6309:{NFSU2_TR(0x6a6309);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a630c:{NFSU2_TR(0x6a630c);
if(r1(R+518)){{goto L6a68ab;}}
}
B6a6312:L6a6312:{c.instructions+=4;NFSU2_TR(0x6a6312);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6315:{NFSU2_TR(0x6a6315);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a6318:{NFSU2_TR(0x6a6318);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6319:{NFSU2_TR(0x6a6319);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a631eull));
TAIL_STATIC(0x575620u,575);
}
B6a631e:L6a631e:{c.instructions+=4;NFSU2_TR(0x6a631e);
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
B6a6320:{NFSU2_TR(0x6a6320);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a6321:{NFSU2_TR(0x6a6321);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6324:{NFSU2_TR(0x6a6324);
if(r1(R+518)){{goto L6a68ab;}}
}
B6a632a:L6a632a:{c.instructions+=4;NFSU2_TR(0x6a632a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a632d:{NFSU2_TR(0x6a632d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a6330:{NFSU2_TR(0x6a6330);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6331:{NFSU2_TR(0x6a6331);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6336ull));
TAIL_STATIC(0x575620u,575);
}
B6a6336:L6a6336:{c.instructions+=4;NFSU2_TR(0x6a6336);
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
B6a6338:{NFSU2_TR(0x6a6338);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a6339:{NFSU2_TR(0x6a6339);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a633c:{NFSU2_TR(0x6a633c);
if(r1(R+518)){{goto L6a68ab;}}
}
B6a6342:L6a6342:{c.instructions+=4;NFSU2_TR(0x6a6342);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6345:{NFSU2_TR(0x6a6345);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a6348:{NFSU2_TR(0x6a6348);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6349:{NFSU2_TR(0x6a6349);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a634eull));
TAIL_STATIC(0x575620u,575);
}
B6a634e:L6a634e:{c.instructions+=4;NFSU2_TR(0x6a634e);
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
B6a6350:{NFSU2_TR(0x6a6350);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a6351:{NFSU2_TR(0x6a6351);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6354:{NFSU2_TR(0x6a6354);
if(r1(R+518)){{goto L6a68ab;}}
}
B6a635a:L6a635a:{c.instructions+=4;NFSU2_TR(0x6a635a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a635d:{NFSU2_TR(0x6a635d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a6360:{NFSU2_TR(0x6a6360);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6361:{NFSU2_TR(0x6a6361);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6366ull));
TAIL_STATIC(0x575620u,575);
}
B6a6366:L6a6366:{c.instructions+=4;NFSU2_TR(0x6a6366);
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
B6a6368:{NFSU2_TR(0x6a6368);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a6369:{NFSU2_TR(0x6a6369);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a636c:{NFSU2_TR(0x6a636c);
if(r1(R+518)){{goto L6a68ab;}}
}
B6a6372:L6a6372:{c.instructions+=4;NFSU2_TR(0x6a6372);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6375:{NFSU2_TR(0x6a6375);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a6378:{NFSU2_TR(0x6a6378);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6379:{NFSU2_TR(0x6a6379);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a637eull));
TAIL_STATIC(0x575620u,575);
}
B6a637e:L6a637e:{c.instructions+=4;NFSU2_TR(0x6a637e);
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
B6a6380:{NFSU2_TR(0x6a6380);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a6381:{NFSU2_TR(0x6a6381);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6384:{NFSU2_TR(0x6a6384);
if(r1(R+518)){{goto L6a68ab;}}
}
B6a638a:L6a638a:{c.instructions+=4;NFSU2_TR(0x6a638a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a638d:{NFSU2_TR(0x6a638d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a6390:{NFSU2_TR(0x6a6390);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6391:{NFSU2_TR(0x6a6391);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6396ull));
TAIL_STATIC(0x575620u,575);
}
B6a6396:L6a6396:{c.instructions+=4;NFSU2_TR(0x6a6396);
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
B6a6398:{NFSU2_TR(0x6a6398);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a6399:{NFSU2_TR(0x6a6399);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a639c:{NFSU2_TR(0x6a639c);
if(r1(R+518)){{goto L6a68ab;}}
}
B6a63a2:L6a63a2:{c.instructions+=1;NFSU2_TR(0x6a63a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a63a6:L6a63a6:{c.instructions+=6;NFSU2_TR(0x6a63a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a63a9:{NFSU2_TR(0x6a63a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a63ac:{NFSU2_TR(0x6a63ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a63af:{NFSU2_TR(0x6a63af);
__builtin_memmove((R+8),(R+4),4);
}
B6a63b1:{NFSU2_TR(0x6a63b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6a63b4:{NFSU2_TR(0x6a63b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a63b6:L6a63b6:{c.instructions+=1;NFSU2_TR(0x6a63b6);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6a63b8;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a63b6u);}goto L6a63b6;}
}
B6a63b8:L6a63b8:{c.instructions+=2;NFSU2_TR(0x6a63b8);
__builtin_memmove((R+4),(R+8),4);
}
B6a63ba:{NFSU2_TR(0x6a63ba);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6a63bd:L6a63bd:{c.instructions+=1;NFSU2_TR(0x6a63bd);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6a63bf;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a63bdu);}goto L6a63bd;}
}
B6a63bf:L6a63bf:{c.instructions+=5;NFSU2_TR(0x6a63bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a63c1:{NFSU2_TR(0x6a63c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a63c4:{NFSU2_TR(0x6a63c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a63c7:{NFSU2_TR(0x6a63c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a63ca:{NFSU2_TR(0x6a63ca);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a65c6;}}
}
B6a63d0:L6a63d0:{c.instructions+=5;NFSU2_TR(0x6a63d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a63d3:{NFSU2_TR(0x6a63d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a63d6:{NFSU2_TR(0x6a63d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a63d9:{NFSU2_TR(0x6a63d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a63dc:{NFSU2_TR(0x6a63dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a63e1ull));
TAIL_STATIC(0x698f9du,698);
}
B6a63e1:L6a63e1:{c.instructions+=2;NFSU2_TR(0x6a63e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a63e3:{NFSU2_TR(0x6a63e3);
if(r1(R+518)){{goto L6a65b7;}}
}
B6a63e9:L6a63e9:{c.instructions+=8;NFSU2_TR(0x6a63e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a63ec:{NFSU2_TR(0x6a63ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a63ef:{NFSU2_TR(0x6a63ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a63f2:{NFSU2_TR(0x6a63f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a63f4:{NFSU2_TR(0x6a63f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a63f7:{NFSU2_TR(0x6a63f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a63fa:{NFSU2_TR(0x6a63fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a63fd:{NFSU2_TR(0x6a63fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a65b7;}}
}
B6a6403:L6a6403:{c.instructions+=9;NFSU2_TR(0x6a6403);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6406:{NFSU2_TR(0x6a6406);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a6408:{NFSU2_TR(0x6a6408);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a640b:{NFSU2_TR(0x6a640b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6a6411:{NFSU2_TR(0x6a6411);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a6413:{NFSU2_TR(0x6a6413);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a6413);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a6413);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6a6415:{NFSU2_TR(0x6a6415);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6418:{NFSU2_TR(0x6a6418);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a641a:{NFSU2_TR(0x6a641a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a65b7;}}
}
B6a6420:L6a6420:{c.instructions+=2;NFSU2_TR(0x6a6420);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6424:{NFSU2_TR(0x6a6424);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6427:L6a6427:{c.instructions+=8;NFSU2_TR(0x6a6427);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a642a:{NFSU2_TR(0x6a642a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a642d:{NFSU2_TR(0x6a642d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B6a6430:{NFSU2_TR(0x6a6430);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a6432:{NFSU2_TR(0x6a6432);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a6435:{NFSU2_TR(0x6a6435);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6438:{NFSU2_TR(0x6a6438);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a643b:{NFSU2_TR(0x6a643b);
if(r1(R+518)){{goto L6a644b;}}
}
B6a643d:L6a643d:{c.instructions+=5;NFSU2_TR(0x6a643d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6440:{NFSU2_TR(0x6a6440);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a6443:{NFSU2_TR(0x6a6443);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6446:{NFSU2_TR(0x6a6446);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a6449:{NFSU2_TR(0x6a6449);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a644d;}}
}
B6a644b:L6a644b:{c.instructions+=1;NFSU2_TR(0x6a644b);
__builtin_memmove((R+4),(R+0),4);
}
B6a644d:L6a644d:{c.instructions+=7;NFSU2_TR(0x6a644d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6450:{NFSU2_TR(0x6a6450);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a6453:{NFSU2_TR(0x6a6453);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6456:{NFSU2_TR(0x6a6456);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6459:{NFSU2_TR(0x6a6459);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a645c:{NFSU2_TR(0x6a645c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a6460:{NFSU2_TR(0x6a6460);
if(r1(R+518)){{goto L6a6489;}}
}
B6a6462:L6a6462:{c.instructions+=3;NFSU2_TR(0x6a6462);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6465:{NFSU2_TR(0x6a6465);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a6468:{NFSU2_TR(0x6a6468);
if(r1(R+518)){{goto L6a6475;}}
}
B6a646a:L6a646a:{c.instructions+=4;NFSU2_TR(0x6a646a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a646d:{NFSU2_TR(0x6a646d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6470:{NFSU2_TR(0x6a6470);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a6473:{NFSU2_TR(0x6a6473);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a6477;}}
}
B6a6475:L6a6475:{c.instructions+=1;NFSU2_TR(0x6a6475);
__builtin_memmove((R+4),(R+8),4);
}
B6a6477:L6a6477:{c.instructions+=6;NFSU2_TR(0x6a6477);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a647a:{NFSU2_TR(0x6a647a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a647d:{NFSU2_TR(0x6a647d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6480:{NFSU2_TR(0x6a6480);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a6483:{NFSU2_TR(0x6a6483);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a6486:{NFSU2_TR(0x6a6486);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6489:L6a6489:{c.instructions+=3;NFSU2_TR(0x6a6489);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a648b:{NFSU2_TR(0x6a648b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a648e:{NFSU2_TR(0x6a648e);
if(r1(R+518)){{goto L6a649d;}}
}
B6a6490:L6a6490:{c.instructions+=4;NFSU2_TR(0x6a6490);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a6493:{NFSU2_TR(0x6a6493);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6496:{NFSU2_TR(0x6a6496);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a6499:{NFSU2_TR(0x6a6499);
if(r1(R+518)){{goto L6a649d;}}
}
B6a649b:L6a649b:{c.instructions+=1;NFSU2_TR(0x6a649b);
__builtin_memmove((R+4),(R+8),4);
}
B6a649d:L6a649d:{c.instructions+=4;NFSU2_TR(0x6a649d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a64a0:{NFSU2_TR(0x6a64a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a64a3:{NFSU2_TR(0x6a64a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a64a6:{NFSU2_TR(0x6a64a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a65a5;}}
}
B6a64ac:L6a64ac:{c.instructions+=5;NFSU2_TR(0x6a64ac);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a64ae:{NFSU2_TR(0x6a64ae);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a64b1:{NFSU2_TR(0x6a64b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a64b4:{NFSU2_TR(0x6a64b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a64b7:{NFSU2_TR(0x6a64b7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a64fd;}}
}
B6a64b9:L6a64b9:{c.instructions+=4;NFSU2_TR(0x6a64b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a64bc:{NFSU2_TR(0x6a64bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a64bf:{NFSU2_TR(0x6a64bf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a64c2:{NFSU2_TR(0x6a64c2);
if(r1(R+518)){{goto L6a64d1;}}
}
B6a64c4:L6a64c4:{c.instructions+=4;NFSU2_TR(0x6a64c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a64c7:{NFSU2_TR(0x6a64c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a64ca:{NFSU2_TR(0x6a64ca);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a64cd:{NFSU2_TR(0x6a64cd);
if(r1(R+518)){{goto L6a64d1;}}
}
B6a64cf:L6a64cf:{c.instructions+=1;NFSU2_TR(0x6a64cf);
__builtin_memmove((R+4),(R+8),4);
}
B6a64d1:L6a64d1:{c.instructions+=7;NFSU2_TR(0x6a64d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a64d4:{NFSU2_TR(0x6a64d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a64d7:{NFSU2_TR(0x6a64d7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a64d9:{NFSU2_TR(0x6a64d9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a64da:{NFSU2_TR(0x6a64da);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6a64dc:{NFSU2_TR(0x6a64dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a64df:{NFSU2_TR(0x6a64df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a64ef;}}
}
B6a64e1:L6a64e1:{c.instructions+=5;NFSU2_TR(0x6a64e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a64e4:{NFSU2_TR(0x6a64e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a64e7:{NFSU2_TR(0x6a64e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a64ea:{NFSU2_TR(0x6a64ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a64ed:{NFSU2_TR(0x6a64ed);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a64b9u);}goto L6a64b9;}}
}
B6a64ef:L6a64ef:{c.instructions+=3;NFSU2_TR(0x6a64ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a64f2:{NFSU2_TR(0x6a64f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6a64f5:{NFSU2_TR(0x6a64f5);
if(r1(R+512)){{goto L6a65a5;}}
}
B6a64fb:L6a64fb:{c.instructions+=1;NFSU2_TR(0x6a64fb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a64fd:L6a64fd:{c.instructions+=3;NFSU2_TR(0x6a64fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6500:{NFSU2_TR(0x6a6500);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6503:{NFSU2_TR(0x6a6503);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a65a5;}}
}
B6a6509:L6a6509:{c.instructions+=10;NFSU2_TR(0x6a6509);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a650c:{NFSU2_TR(0x6a650c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a650f:{NFSU2_TR(0x6a650f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6512:{NFSU2_TR(0x6a6512);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6515:{NFSU2_TR(0x6a6515);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a6518:{NFSU2_TR(0x6a6518);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a651b:{NFSU2_TR(0x6a651b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a651e:{NFSU2_TR(0x6a651e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a6521:{NFSU2_TR(0x6a6521);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a6524:{NFSU2_TR(0x6a6524);
if(r1(R+518)){{goto L6a6533;}}
}
B6a6526:L6a6526:{c.instructions+=4;NFSU2_TR(0x6a6526);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a6529:{NFSU2_TR(0x6a6529);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a652c:{NFSU2_TR(0x6a652c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a652f:{NFSU2_TR(0x6a652f);
if(r1(R+518)){{goto L6a6533;}}
}
B6a6531:L6a6531:{c.instructions+=1;NFSU2_TR(0x6a6531);
__builtin_memmove((R+28),(R+4),4);
}
B6a6533:L6a6533:{c.instructions+=9;NFSU2_TR(0x6a6533);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a6536:{NFSU2_TR(0x6a6536);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a6539:{NFSU2_TR(0x6a6539);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a653c:{NFSU2_TR(0x6a653c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6a653f:{NFSU2_TR(0x6a653f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a6542:{NFSU2_TR(0x6a6542);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6545:{NFSU2_TR(0x6a6545);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a6548:{NFSU2_TR(0x6a6548);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a654a:{NFSU2_TR(0x6a654a);
if(r1(R+518)){{goto L6a6593;}}
}
B6a654c:L6a654c:{c.instructions+=2;NFSU2_TR(0x6a654c);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6550:{NFSU2_TR(0x6a6550);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a6593;}}
}
B6a6552:L6a6552:{c.instructions+=2;NFSU2_TR(0x6a6552);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6556:{NFSU2_TR(0x6a6556);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a657f;}}
}
B6a6558:L6a6558:{c.instructions+=13;NFSU2_TR(0x6a6558);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a655b:{NFSU2_TR(0x6a655b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a655e:{NFSU2_TR(0x6a655e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a6561:{NFSU2_TR(0x6a6561);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+8))));
}
B6a6564:{NFSU2_TR(0x6a6564);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a6567:{NFSU2_TR(0x6a6567);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a656a:{NFSU2_TR(0x6a656a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a656d:{NFSU2_TR(0x6a656d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6570:{NFSU2_TR(0x6a6570);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a6573:{NFSU2_TR(0x6a6573);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a6576:{NFSU2_TR(0x6a6576);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+8))));
}
B6a6579:{NFSU2_TR(0x6a6579);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a657c:{NFSU2_TR(0x6a657c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a657f:L6a657f:{c.instructions+=7;NFSU2_TR(0x6a657f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6582:{NFSU2_TR(0x6a6582);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6a6585:{NFSU2_TR(0x6a6585);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6a6587:{NFSU2_TR(0x6a6587);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a658a:{NFSU2_TR(0x6a658a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a658d:{NFSU2_TR(0x6a658d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6a658f:{NFSU2_TR(0x6a658f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6593:L6a6593:{c.instructions+=5;NFSU2_TR(0x6a6593);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6596:{NFSU2_TR(0x6a6596);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6599:{NFSU2_TR(0x6a6599);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a659c:{NFSU2_TR(0x6a659c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a659f:{NFSU2_TR(0x6a659f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6509u);}goto L6a6509;}}
}
B6a65a5:L6a65a5:{c.instructions+=5;NFSU2_TR(0x6a65a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a65a8:{NFSU2_TR(0x6a65a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a65ab:{NFSU2_TR(0x6a65ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a65ae:{NFSU2_TR(0x6a65ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a65b1:{NFSU2_TR(0x6a65b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6427u);}goto L6a6427;}}
}
B6a65b7:L6a65b7:{c.instructions+=4;NFSU2_TR(0x6a65b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a65ba:{NFSU2_TR(0x6a65ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a65bd:{NFSU2_TR(0x6a65bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a65c0:{NFSU2_TR(0x6a65c0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a63d0u);}goto L6a63d0;}}
}
B6a65c6:L6a65c6:{c.instructions+=2;NFSU2_TR(0x6a65c6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a65ca:{NFSU2_TR(0x6a65ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a6607;}}
}
B6a65cc:L6a65cc:{c.instructions+=5;NFSU2_TR(0x6a65cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a65cf:{NFSU2_TR(0x6a65cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a65d1:{NFSU2_TR(0x6a65d1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6a65d3:{NFSU2_TR(0x6a65d3);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+8))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B6a65d6:{NFSU2_TR(0x6a65d6);
if(r1(R+518)){{goto L6a65ef;}}
}
B6a65d8:L6a65d8:{c.instructions+=9;NFSU2_TR(0x6a65d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a65db:{NFSU2_TR(0x6a65db);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a65de:{NFSU2_TR(0x6a65de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a65e1:{NFSU2_TR(0x6a65e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+8))));
}
B6a65e4:{NFSU2_TR(0x6a65e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a65e7:{NFSU2_TR(0x6a65e7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a65e8:{NFSU2_TR(0x6a65e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6a65eb:{NFSU2_TR(0x6a65eb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6a65ed:{NFSU2_TR(0x6a65ed);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a65d8u);}goto L6a65d8;}}
}
B6a65ef:L6a65ef:{c.instructions+=4;NFSU2_TR(0x6a65ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a65f2:{NFSU2_TR(0x6a65f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a65f5:{NFSU2_TR(0x6a65f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a65f6:{NFSU2_TR(0x6a65f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a65fbull));
TAIL_STATIC(0x575620u,575);
}
B6a65fb:L6a65fb:{c.instructions+=4;NFSU2_TR(0x6a65fb);
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
B6a65fd:{NFSU2_TR(0x6a65fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a65fe:{NFSU2_TR(0x6a65fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6601:{NFSU2_TR(0x6a6601);
if(r1(R+518)){{goto L6a68ab;}}
}
B6a6607:L6a6607:{c.instructions+=3;NFSU2_TR(0x6a6607);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a660a:{NFSU2_TR(0x6a660a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6a660e:{NFSU2_TR(0x6a660e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a63a6u);}goto L6a63a6;}}
}
B6a6614:L6a6614:{c.instructions+=1;NFSU2_TR(0x6a6614);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6618:L6a6618:{c.instructions+=6;NFSU2_TR(0x6a6618);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a661b:{NFSU2_TR(0x6a661b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a661e:{NFSU2_TR(0x6a661e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a6621:{NFSU2_TR(0x6a6621);
__builtin_memmove((R+8),(R+4),4);
}
B6a6623:{NFSU2_TR(0x6a6623);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6a6626:{NFSU2_TR(0x6a6626);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a6628:L6a6628:{c.instructions+=1;NFSU2_TR(0x6a6628);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6a662a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6628u);}goto L6a6628;}
}
B6a662a:L6a662a:{c.instructions+=2;NFSU2_TR(0x6a662a);
__builtin_memmove((R+4),(R+8),4);
}
B6a662c:{NFSU2_TR(0x6a662c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6a662f:L6a662f:{c.instructions+=1;NFSU2_TR(0x6a662f);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6a6631;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a662fu);}goto L6a662f;}
}
B6a6631:L6a6631:{c.instructions+=5;NFSU2_TR(0x6a6631);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a6633:{NFSU2_TR(0x6a6633);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6636:{NFSU2_TR(0x6a6636);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6639:{NFSU2_TR(0x6a6639);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a663c:{NFSU2_TR(0x6a663c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a674f;}}
}
B6a6642:L6a6642:{c.instructions+=5;NFSU2_TR(0x6a6642);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6645:{NFSU2_TR(0x6a6645);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6648:{NFSU2_TR(0x6a6648);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a664b:{NFSU2_TR(0x6a664b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a664e:{NFSU2_TR(0x6a664e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6653ull));
TAIL_STATIC(0x698fd5u,698);
}
B6a6653:L6a6653:{c.instructions+=2;NFSU2_TR(0x6a6653);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a6655:{NFSU2_TR(0x6a6655);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a6661;}}
}
B6a6657:L6a6657:{c.instructions+=2;NFSU2_TR(0x6a6657);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a665b:{NFSU2_TR(0x6a665b);
if(r1(R+518)){{goto L6a6740;}}
}
B6a6661:L6a6661:{c.instructions+=8;NFSU2_TR(0x6a6661);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6664:{NFSU2_TR(0x6a6664);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6667:{NFSU2_TR(0x6a6667);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a6669:{NFSU2_TR(0x6a6669);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a666c:{NFSU2_TR(0x6a666c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a666f:{NFSU2_TR(0x6a666f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6672:{NFSU2_TR(0x6a6672);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6675:{NFSU2_TR(0x6a6675);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a6740;}}
}
B6a667b:L6a667b:{c.instructions+=10;NFSU2_TR(0x6a667b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a667e:{NFSU2_TR(0x6a667e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a6680:{NFSU2_TR(0x6a6680);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6683:{NFSU2_TR(0x6a6683);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a6685:{NFSU2_TR(0x6a6685);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6a668b:{NFSU2_TR(0x6a668b);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a668b);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a668b);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6a668d:{NFSU2_TR(0x6a668d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6690:{NFSU2_TR(0x6a6690);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6693:{NFSU2_TR(0x6a6693);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a6695:{NFSU2_TR(0x6a6695);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6740;}}
}
B6a669b:L6a669b:{c.instructions+=5;NFSU2_TR(0x6a669b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a669d:{NFSU2_TR(0x6a669d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a66a0:{NFSU2_TR(0x6a66a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a66a3:{NFSU2_TR(0x6a66a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a66a6:{NFSU2_TR(0x6a66a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a66a9:L6a66a9:{c.instructions+=5;NFSU2_TR(0x6a66a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a66ac:{NFSU2_TR(0x6a66ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a66af:{NFSU2_TR(0x6a66af);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a66b2:{NFSU2_TR(0x6a66b2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a66b5:{NFSU2_TR(0x6a66b5);
if(r1(R+518)){{goto L6a66c7;}}
}
B6a66b7:L6a66b7:{c.instructions+=5;NFSU2_TR(0x6a66b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a66ba:{NFSU2_TR(0x6a66ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a66bd:{NFSU2_TR(0x6a66bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a66c0:{NFSU2_TR(0x6a66c0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a66c3:{NFSU2_TR(0x6a66c3);
if(r1(R+518)){{goto L6a66c7;}}
}
B6a66c5:L6a66c5:{c.instructions+=1;NFSU2_TR(0x6a66c5);
__builtin_memmove((R+0),(R+4),4);
}
B6a66c7:L6a66c7:{c.instructions+=5;NFSU2_TR(0x6a66c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a66ca:{NFSU2_TR(0x6a66ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a66cd:{NFSU2_TR(0x6a66cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a66d0:{NFSU2_TR(0x6a66d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a66d3:{NFSU2_TR(0x6a66d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a672e;}}
}
B6a66d5:L6a66d5:{c.instructions+=2;NFSU2_TR(0x6a66d5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a66d8:{NFSU2_TR(0x6a66d8);
if(r1(R+518)){{goto L6a672e;}}
}
B6a66da:L6a66da:{c.instructions+=2;NFSU2_TR(0x6a66da);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a66de:{NFSU2_TR(0x6a66de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a6717;}}
}
B6a66e0:L6a66e0:{c.instructions+=19;NFSU2_TR(0x6a66e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a66e3:{NFSU2_TR(0x6a66e3);
__builtin_memmove((R+4),(R+8),4);
}
B6a66e5:{NFSU2_TR(0x6a66e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a66e8:{NFSU2_TR(0x6a66e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a66eb:{NFSU2_TR(0x6a66eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a66ee:{NFSU2_TR(0x6a66ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+8))));
}
B6a66f1:{NFSU2_TR(0x6a66f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a66f4:{NFSU2_TR(0x6a66f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a66f7:{NFSU2_TR(0x6a66f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a66fa:{NFSU2_TR(0x6a66fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a66fd:{NFSU2_TR(0x6a66fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6700:{NFSU2_TR(0x6a6700);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a6703:{NFSU2_TR(0x6a6703);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a6706:{NFSU2_TR(0x6a6706);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a6709:{NFSU2_TR(0x6a6709);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+8))));
}
B6a670c:{NFSU2_TR(0x6a670c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a670f:{NFSU2_TR(0x6a670f);
__builtin_memmove((R+28),(R+8),4);
}
B6a6711:{NFSU2_TR(0x6a6711);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6714:{NFSU2_TR(0x6a6714);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a6717:L6a6717:{c.instructions+=8;NFSU2_TR(0x6a6717);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a671a:{NFSU2_TR(0x6a671a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6a671d:{NFSU2_TR(0x6a671d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6a671f:{NFSU2_TR(0x6a671f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6722:{NFSU2_TR(0x6a6722);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6725:{NFSU2_TR(0x6a6725);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a6728:{NFSU2_TR(0x6a6728);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6a672a:{NFSU2_TR(0x6a672a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a672e:L6a672e:{c.instructions+=5;NFSU2_TR(0x6a672e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a6731:{NFSU2_TR(0x6a6731);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B6a6734:{NFSU2_TR(0x6a6734);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a6737:{NFSU2_TR(0x6a6737);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a673a:{NFSU2_TR(0x6a673a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a66a9u);}goto L6a66a9;}}
}
B6a6740:L6a6740:{c.instructions+=4;NFSU2_TR(0x6a6740);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6743:{NFSU2_TR(0x6a6743);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6746:{NFSU2_TR(0x6a6746);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a6749:{NFSU2_TR(0x6a6749);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6642u);}goto L6a6642;}}
}
B6a674f:L6a674f:{c.instructions+=3;NFSU2_TR(0x6a674f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a6751:{NFSU2_TR(0x6a6751);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6754:{NFSU2_TR(0x6a6754);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a6787;}}
}
B6a6756:L6a6756:{c.instructions+=3;NFSU2_TR(0x6a6756);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a6758:{NFSU2_TR(0x6a6758);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a675b:{NFSU2_TR(0x6a675b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a676f;}}
}
B6a675d:L6a675d:{c.instructions+=7;NFSU2_TR(0x6a675d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6760:{NFSU2_TR(0x6a6760);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a6763:{NFSU2_TR(0x6a6763);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6766:{NFSU2_TR(0x6a6766);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+8))));
}
B6a6769:{NFSU2_TR(0x6a6769);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a676a:{NFSU2_TR(0x6a676a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a676d:{NFSU2_TR(0x6a676d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a675du);}goto L6a675d;}}
}
B6a676f:L6a676f:{c.instructions+=4;NFSU2_TR(0x6a676f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6772:{NFSU2_TR(0x6a6772);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a6775:{NFSU2_TR(0x6a6775);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6776:{NFSU2_TR(0x6a6776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a677bull));
TAIL_STATIC(0x575620u,575);
}
B6a677b:L6a677b:{c.instructions+=4;NFSU2_TR(0x6a677b);
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
B6a677d:{NFSU2_TR(0x6a677d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a677e:{NFSU2_TR(0x6a677e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6781:{NFSU2_TR(0x6a6781);
if(r1(R+518)){{goto L6a68ab;}}
}
B6a6787:L6a6787:{c.instructions+=3;NFSU2_TR(0x6a6787);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a678a:{NFSU2_TR(0x6a678a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6a678e:{NFSU2_TR(0x6a678e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6618u);}goto L6a6618;}}
}
B6a6794:L6a6794:{c.instructions+=7;NFSU2_TR(0x6a6794);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6797:{NFSU2_TR(0x6a6797);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a679a:{NFSU2_TR(0x6a679a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a679e:{NFSU2_TR(0x6a679e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a67a1:{NFSU2_TR(0x6a67a1);
__builtin_memmove((R+8),(R+4),4);
}
B6a67a3:{NFSU2_TR(0x6a67a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6a67a6:{NFSU2_TR(0x6a67a6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a67a8:L6a67a8:{c.instructions+=1;NFSU2_TR(0x6a67a8);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6a67aa;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a67a8u);}goto L6a67a8;}
}
B6a67aa:L6a67aa:{c.instructions+=2;NFSU2_TR(0x6a67aa);
__builtin_memmove((R+4),(R+8),4);
}
B6a67ac:{NFSU2_TR(0x6a67ac);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6a67af:L6a67af:{c.instructions+=1;NFSU2_TR(0x6a67af);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6a67b1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a67afu);}goto L6a67af;}
}
B6a67b1:L6a67b1:{c.instructions+=2;NFSU2_TR(0x6a67b1);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a67b5:{NFSU2_TR(0x6a67b5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6865;}}
}
B6a67bb:L6a67bb:{c.instructions+=5;NFSU2_TR(0x6a67bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a67be:{NFSU2_TR(0x6a67be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a67c1:{NFSU2_TR(0x6a67c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a67c4:{NFSU2_TR(0x6a67c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6a67ca:{NFSU2_TR(0x6a67ca);
if(r1(R+518)){{goto L6a6856;}}
}
B6a67d0:L6a67d0:{c.instructions+=3;NFSU2_TR(0x6a67d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a67d4:{NFSU2_TR(0x6a67d4);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a67d8:{NFSU2_TR(0x6a67d8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a67f9;}}
}
B6a67da:L6a67da:{c.instructions+=7;NFSU2_TR(0x6a67da);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a67dd:{NFSU2_TR(0x6a67dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a67e0:{NFSU2_TR(0x6a67e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a67e3:{NFSU2_TR(0x6a67e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6a67e6:{NFSU2_TR(0x6a67e6);
__builtin_memmove((R+4),(R+12),4);
}
B6a67e8:{NFSU2_TR(0x6a67e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a67e9:{NFSU2_TR(0x6a67e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a67eeull));
TAIL_STATIC(0x69dee6u,69d);
}
B6a67ee:L6a67ee:{c.instructions+=4;NFSU2_TR(0x6a67ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a67f1:{NFSU2_TR(0x6a67f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a67f4:{NFSU2_TR(0x6a67f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a67f7:{NFSU2_TR(0x6a67f7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a67dau);}goto L6a67da;}}
}
B6a67f9:L6a67f9:{c.instructions+=3;NFSU2_TR(0x6a67f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a67fd:{NFSU2_TR(0x6a67fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6801:{NFSU2_TR(0x6a6801);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6822;}}
}
B6a6803:L6a6803:{c.instructions+=7;NFSU2_TR(0x6a6803);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a6806:{NFSU2_TR(0x6a6806);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6809:{NFSU2_TR(0x6a6809);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a680c:{NFSU2_TR(0x6a680c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6a680f:{NFSU2_TR(0x6a680f);
__builtin_memmove((R+4),(R+12),4);
}
B6a6811:{NFSU2_TR(0x6a6811);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6812:{NFSU2_TR(0x6a6812);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6817ull));
TAIL_STATIC(0x69dd63u,69d);
}
B6a6817:L6a6817:{c.instructions+=4;NFSU2_TR(0x6a6817);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a681a:{NFSU2_TR(0x6a681a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a681d:{NFSU2_TR(0x6a681d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a6820:{NFSU2_TR(0x6a6820);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6803u);}goto L6a6803;}}
}
B6a6822:L6a6822:{c.instructions+=2;NFSU2_TR(0x6a6822);
__builtin_memmove((R+4),(R+28),4);
}
B6a6824:{NFSU2_TR(0x6a6824);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6829ull));
TAIL_STATIC(0x698f0fu,698);
}
B6a6829:L6a6829:{c.instructions+=2;NFSU2_TR(0x6a6829);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a682b:{NFSU2_TR(0x6a682b);
if(r1(R+518)){{goto L6a6856;}}
}
B6a682d:L6a682d:{c.instructions+=3;NFSU2_TR(0x6a682d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6831:{NFSU2_TR(0x6a6831);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6835:{NFSU2_TR(0x6a6835);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6856;}}
}
B6a6837:L6a6837:{c.instructions+=7;NFSU2_TR(0x6a6837);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a683a:{NFSU2_TR(0x6a683a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a683d:{NFSU2_TR(0x6a683d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6840:{NFSU2_TR(0x6a6840);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6a6843:{NFSU2_TR(0x6a6843);
__builtin_memmove((R+4),(R+12),4);
}
B6a6845:{NFSU2_TR(0x6a6845);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6846:{NFSU2_TR(0x6a6846);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a684bull));
TAIL_STATIC(0x69dd63u,69d);
}
B6a684b:L6a684b:{c.instructions+=4;NFSU2_TR(0x6a684b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a684e:{NFSU2_TR(0x6a684e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6851:{NFSU2_TR(0x6a6851);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a6854:{NFSU2_TR(0x6a6854);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6837u);}goto L6a6837;}}
}
B6a6856:L6a6856:{c.instructions+=4;NFSU2_TR(0x6a6856);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6859:{NFSU2_TR(0x6a6859);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a685c:{NFSU2_TR(0x6a685c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a685f:{NFSU2_TR(0x6a685f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a67bbu);}goto L6a67bb;}}
}
B6a6865:L6a6865:{c.instructions+=4;NFSU2_TR(0x6a6865);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a6867:{NFSU2_TR(0x6a6867);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a6869:{NFSU2_TR(0x6a6869);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a686c:{NFSU2_TR(0x6a686c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6880;}}
}
B6a686e:L6a686e:{c.instructions+=7;NFSU2_TR(0x6a686e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6871:{NFSU2_TR(0x6a6871);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a6874:{NFSU2_TR(0x6a6874);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6877:{NFSU2_TR(0x6a6877);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+8))));
}
B6a687a:{NFSU2_TR(0x6a687a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a687b:{NFSU2_TR(0x6a687b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a687e:{NFSU2_TR(0x6a687e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a686eu);}goto L6a686e;}}
}
B6a6880:L6a6880:{c.instructions+=4;NFSU2_TR(0x6a6880);
__builtin_memmove((R+0),(R+28),4);
}
B6a6882:{NFSU2_TR(0x6a6882);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a6885:{NFSU2_TR(0x6a6885);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6886:{NFSU2_TR(0x6a6886);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a688bull));
TAIL_STATIC(0x575620u,575);
}
B6a688b:L6a688b:{c.instructions+=4;NFSU2_TR(0x6a688b);
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
B6a688d:{NFSU2_TR(0x6a688d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a688e:{NFSU2_TR(0x6a688e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6891:{NFSU2_TR(0x6a6891);
if(r1(R+518)){{goto L6a68ab;}}
}
B6a6893:L6a6893:{c.instructions+=4;NFSU2_TR(0x6a6893);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a6896:{NFSU2_TR(0x6a6896);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a6899:{NFSU2_TR(0x6a6899);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a689a:{NFSU2_TR(0x6a689a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a689full));
TAIL_STATIC(0x575620u,575);
}
B6a689f:L6a689f:{c.instructions+=4;NFSU2_TR(0x6a689f);
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
B6a68a1:{NFSU2_TR(0x6a68a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a68a2:{NFSU2_TR(0x6a68a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a68a5:{NFSU2_TR(0x6a68a5);
if(r1(R+518)){{goto L6a68ab;}}
}
B6a68a7:L6a68a7:{c.instructions+=2;NFSU2_TR(0x6a68a7);
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
B6a68a9:{NFSU2_TR(0x6a68a9);
{goto L6a68b0;}
}
B6a68ab:L6a68ab:{c.instructions+=1;NFSU2_TR(0x6a68ab);
w4(R+0,u32(0x8007000eull));
}
B6a68b0:L6a68b0:{c.instructions+=1;NFSU2_TR(0x6a68b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a68b1:L6a68b1:{c.instructions+=4;NFSU2_TR(0x6a68b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a68b2:{NFSU2_TR(0x6a68b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a68b3:{NFSU2_TR(0x6a68b3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6a68b4:{NFSU2_TR(0x6a68b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a68b7:L6a68b7:{c.instructions+=16;NFSU2_TR(0x6a68b7);
__builtin_memmove((R+28),(R+28),4);
}
B6a68b9:{NFSU2_TR(0x6a68b9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a68ba:{NFSU2_TR(0x6a68ba);
__builtin_memmove((R+20),(R+16),4);
}
B6a68bc:{NFSU2_TR(0x6a68bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B6a68bf:{NFSU2_TR(0x6a68bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a68c2:{NFSU2_TR(0x6a68c2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a68c3:{NFSU2_TR(0x6a68c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a68c4:{NFSU2_TR(0x6a68c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a68c7:{NFSU2_TR(0x6a68c7);
__builtin_memmove((R+12),(R+4),4);
}
B6a68c9:{NFSU2_TR(0x6a68c9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B6a68cb:{NFSU2_TR(0x6a68cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a68d1:{NFSU2_TR(0x6a68d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B6a68d4:{NFSU2_TR(0x6a68d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a68d5:{NFSU2_TR(0x6a68d5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
}
B6a68d8:{NFSU2_TR(0x6a68d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a68db:{NFSU2_TR(0x6a68db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a68e0ull));
TAIL_STATIC(0x69e219u,69e);
}
B6a68e0:L6a68e0:{c.instructions+=3;NFSU2_TR(0x6a68e0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a68e2:{NFSU2_TR(0x6a68e2);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a68e5:{NFSU2_TR(0x6a68e5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a690c;}}
}
B6a68e7:L6a68e7:{c.instructions+=5;NFSU2_TR(0x6a68e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a68ea:{NFSU2_TR(0x6a68ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a68ed:{NFSU2_TR(0x6a68ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a68ef:{NFSU2_TR(0x6a68ef);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a68f2:{NFSU2_TR(0x6a68f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a6906;}}
}
B6a68f4:L6a68f4:{c.instructions+=2;NFSU2_TR(0x6a68f4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a68f8:{NFSU2_TR(0x6a68f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a6906;}}
}
B6a68fa:L6a68fa:{c.instructions+=3;NFSU2_TR(0x6a68fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a68fd:{NFSU2_TR(0x6a68fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6900:{NFSU2_TR(0x6a6900);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6a6906;}}
}
B6a6902:L6a6902:{c.instructions+=2;NFSU2_TR(0x6a6902);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a6903:{NFSU2_TR(0x6a6903);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6906:L6a6906:{c.instructions+=3;NFSU2_TR(0x6a6906);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a6907:{NFSU2_TR(0x6a6907);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a690a:{NFSU2_TR(0x6a690a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a68e7u);}goto L6a68e7;}}
}
B6a690c:L6a690c:{c.instructions+=6;NFSU2_TR(0x6a690c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a690f:{NFSU2_TR(0x6a690f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a6912:{NFSU2_TR(0x6a6912);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a6915:{NFSU2_TR(0x6a6915);
__builtin_memmove((R+8),(R+4),4);
}
B6a6917:{NFSU2_TR(0x6a6917);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6a691a:{NFSU2_TR(0x6a691a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6a691d:L6a691d:{c.instructions+=1;NFSU2_TR(0x6a691d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6a691f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a691du);}goto L6a691d;}
}
B6a691f:L6a691f:{c.instructions+=2;NFSU2_TR(0x6a691f);
__builtin_memmove((R+4),(R+8),4);
}
B6a6921:{NFSU2_TR(0x6a6921);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6a6924:L6a6924:{c.instructions+=1;NFSU2_TR(0x6a6924);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6a6926;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6924u);}goto L6a6924;}
}
B6a6926:L6a6926:{c.instructions+=6;NFSU2_TR(0x6a6926);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6929:{NFSU2_TR(0x6a6929);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a692c:{NFSU2_TR(0x6a692c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a692f:{NFSU2_TR(0x6a692f);
__builtin_memmove((R+8),(R+4),4);
}
B6a6931:{NFSU2_TR(0x6a6931);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6a6934:{NFSU2_TR(0x6a6934);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6a6937:L6a6937:{c.instructions+=1;NFSU2_TR(0x6a6937);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6a6939;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6937u);}goto L6a6937;}
}
B6a6939:L6a6939:{c.instructions+=2;NFSU2_TR(0x6a6939);
__builtin_memmove((R+4),(R+8),4);
}
B6a693b:{NFSU2_TR(0x6a693b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6a693e:L6a693e:{c.instructions+=1;NFSU2_TR(0x6a693e);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6a6940;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a693eu);}goto L6a693e;}
}
B6a6940:L6a6940:{c.instructions+=6;NFSU2_TR(0x6a6940);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6943:{NFSU2_TR(0x6a6943);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a6946:{NFSU2_TR(0x6a6946);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a6949:{NFSU2_TR(0x6a6949);
__builtin_memmove((R+8),(R+4),4);
}
B6a694b:{NFSU2_TR(0x6a694b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6a694e:{NFSU2_TR(0x6a694e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6a6951:L6a6951:{c.instructions+=1;NFSU2_TR(0x6a6951);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6a6953;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6951u);}goto L6a6951;}
}
B6a6953:L6a6953:{c.instructions+=2;NFSU2_TR(0x6a6953);
__builtin_memmove((R+4),(R+8),4);
}
B6a6955:{NFSU2_TR(0x6a6955);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6a6958:L6a6958:{c.instructions+=1;NFSU2_TR(0x6a6958);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6a695a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6958u);}goto L6a6958;}
}
B6a695a:L6a695a:{c.instructions+=3;NFSU2_TR(0x6a695a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a695c:{NFSU2_TR(0x6a695c);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a695f:{NFSU2_TR(0x6a695f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a698d;}}
}
B6a6961:L6a6961:{c.instructions+=6;NFSU2_TR(0x6a6961);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6964:{NFSU2_TR(0x6a6964);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a6967:{NFSU2_TR(0x6a6967);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a696b:{NFSU2_TR(0x6a696b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a696d:{NFSU2_TR(0x6a696d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6970:{NFSU2_TR(0x6a6970);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a6987;}}
}
B6a6972:L6a6972:{c.instructions+=2;NFSU2_TR(0x6a6972);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6976:{NFSU2_TR(0x6a6976);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a6987;}}
}
B6a6978:L6a6978:{c.instructions+=5;NFSU2_TR(0x6a6978);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a697b:{NFSU2_TR(0x6a697b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a697e:{NFSU2_TR(0x6a697e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a6981:{NFSU2_TR(0x6a6981);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6984:{NFSU2_TR(0x6a6984);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a6987:L6a6987:{c.instructions+=3;NFSU2_TR(0x6a6987);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a6988:{NFSU2_TR(0x6a6988);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a698b:{NFSU2_TR(0x6a698b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6961u);}goto L6a6961;}}
}
B6a698d:L6a698d:{c.instructions+=6;NFSU2_TR(0x6a698d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6990:{NFSU2_TR(0x6a6990);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a6993:{NFSU2_TR(0x6a6993);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a6996:{NFSU2_TR(0x6a6996);
__builtin_memmove((R+8),(R+4),4);
}
B6a6998:{NFSU2_TR(0x6a6998);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6a699b:{NFSU2_TR(0x6a699b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a699d:L6a699d:{c.instructions+=1;NFSU2_TR(0x6a699d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6a699f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a699du);}goto L6a699d;}
}
B6a699f:L6a699f:{c.instructions+=2;NFSU2_TR(0x6a699f);
__builtin_memmove((R+4),(R+8),4);
}
B6a69a1:{NFSU2_TR(0x6a69a1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6a69a4:L6a69a4:{c.instructions+=1;NFSU2_TR(0x6a69a4);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6a69a6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a69a4u);}goto L6a69a4;}
}
B6a69a6:L6a69a6:{c.instructions+=3;NFSU2_TR(0x6a69a6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a69a8:{NFSU2_TR(0x6a69a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a69ab:{NFSU2_TR(0x6a69ab);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a69d7;}}
}
B6a69ad:L6a69ad:{c.instructions+=1;NFSU2_TR(0x6a69ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a69b0:L6a69b0:{c.instructions+=5;NFSU2_TR(0x6a69b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a69b3:{NFSU2_TR(0x6a69b3);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a69b5:{NFSU2_TR(0x6a69b5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a69b7:{NFSU2_TR(0x6a69b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6a69ba:{NFSU2_TR(0x6a69ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a69bb:L6a69bb:{c.instructions+=2;NFSU2_TR(0x6a69bb);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a69be:{NFSU2_TR(0x6a69be);
if(r1(R+518)){{goto L6a69c1;}}
}
B6a69c0:L6a69c0:{c.instructions+=1;NFSU2_TR(0x6a69c0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a69c1:L6a69c1:{c.instructions+=3;NFSU2_TR(0x6a69c1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6a69c4:{NFSU2_TR(0x6a69c4);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6a69c5:{NFSU2_TR(0x6a69c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a69bbu);}goto L6a69bb;}}
}
B6a69c7:L6a69c7:{c.instructions+=6;NFSU2_TR(0x6a69c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a69ca:{NFSU2_TR(0x6a69ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a69ce:{NFSU2_TR(0x6a69ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a69d1:{NFSU2_TR(0x6a69d1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a69d2:{NFSU2_TR(0x6a69d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a69d5:{NFSU2_TR(0x6a69d5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a69b0u);}goto L6a69b0;}}
}
B6a69d7:L6a69d7:{c.instructions+=7;NFSU2_TR(0x6a69d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a69da:{NFSU2_TR(0x6a69da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a69dd:{NFSU2_TR(0x6a69dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a69e1:{NFSU2_TR(0x6a69e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a69e4:{NFSU2_TR(0x6a69e4);
__builtin_memmove((R+8),(R+4),4);
}
B6a69e6:{NFSU2_TR(0x6a69e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6a69e9:{NFSU2_TR(0x6a69e9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a69eb:L6a69eb:{c.instructions+=1;NFSU2_TR(0x6a69eb);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6a69ed;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a69ebu);}goto L6a69eb;}
}
B6a69ed:L6a69ed:{c.instructions+=2;NFSU2_TR(0x6a69ed);
__builtin_memmove((R+4),(R+8),4);
}
B6a69ef:{NFSU2_TR(0x6a69ef);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6a69f2:L6a69f2:{c.instructions+=1;NFSU2_TR(0x6a69f2);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6a69f4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a69f2u);}goto L6a69f2;}
}
B6a69f4:L6a69f4:{c.instructions+=2;NFSU2_TR(0x6a69f4);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a69f8:{NFSU2_TR(0x6a69f8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6af5;}}
}
B6a69fe:L6a69fe:{c.instructions+=6;NFSU2_TR(0x6a69fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6a01:{NFSU2_TR(0x6a6a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6a04:{NFSU2_TR(0x6a6a04);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a6a07:{NFSU2_TR(0x6a6a07);
__builtin_memmove((R+4),(R+28),4);
}
B6a6a09:{NFSU2_TR(0x6a6a09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6a0c:{NFSU2_TR(0x6a6a0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6a11ull));
TAIL_STATIC(0x698f9du,698);
}
B6a6a11:L6a6a11:{c.instructions+=2;NFSU2_TR(0x6a6a11);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a6a13:{NFSU2_TR(0x6a6a13);
if(r1(R+518)){{goto L6a6ae6;}}
}
B6a6a19:L6a6a19:{c.instructions+=8;NFSU2_TR(0x6a6a19);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6a1c:{NFSU2_TR(0x6a6a1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6a1f:{NFSU2_TR(0x6a6a1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a6a21:{NFSU2_TR(0x6a6a21);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a6a24:{NFSU2_TR(0x6a6a24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a6a26:{NFSU2_TR(0x6a6a26);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6a29:{NFSU2_TR(0x6a6a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6a2c:{NFSU2_TR(0x6a6a2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a6ae6;}}
}
B6a6a32:L6a6a32:{c.instructions+=1;NFSU2_TR(0x6a6a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6a39:L6a6a39:{c.instructions+=4;NFSU2_TR(0x6a6a39);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a6a3b:{NFSU2_TR(0x6a6a3b);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6a3e:{NFSU2_TR(0x6a6a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6a41:{NFSU2_TR(0x6a6a41);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6add;}}
}
B6a6a47:L6a6a47:{c.instructions+=4;NFSU2_TR(0x6a6a47);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6a4a:{NFSU2_TR(0x6a6a4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a6a4d:{NFSU2_TR(0x6a6a4d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a6a50:{NFSU2_TR(0x6a6a50);
if(r1(R+518)){{goto L6a6a62;}}
}
B6a6a52:L6a6a52:{c.instructions+=5;NFSU2_TR(0x6a6a52);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6a55:{NFSU2_TR(0x6a6a55);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a6a58:{NFSU2_TR(0x6a6a58);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6a5b:{NFSU2_TR(0x6a6a5b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a6a5e:{NFSU2_TR(0x6a6a5e);
if(r1(R+518)){{goto L6a6a62;}}
}
B6a6a60:L6a6a60:{c.instructions+=1;NFSU2_TR(0x6a6a60);
__builtin_memmove((R+0),(R+4),4);
}
B6a6a62:L6a6a62:{c.instructions+=7;NFSU2_TR(0x6a6a62);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6a65:{NFSU2_TR(0x6a6a65);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a6a68:{NFSU2_TR(0x6a6a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6a6b:{NFSU2_TR(0x6a6a6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6a6e:{NFSU2_TR(0x6a6a6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a6a71:{NFSU2_TR(0x6a6a71);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a6a75:{NFSU2_TR(0x6a6a75);
if(r1(R+518)){{goto L6a6a8b;}}
}
B6a6a77:L6a6a77:{c.instructions+=7;NFSU2_TR(0x6a6a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6a7a:{NFSU2_TR(0x6a6a7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6a7d:{NFSU2_TR(0x6a6a7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a6a80:{NFSU2_TR(0x6a6a80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6a83:{NFSU2_TR(0x6a6a83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a6a85:{NFSU2_TR(0x6a6a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6a88:{NFSU2_TR(0x6a6a88);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a6a8b:L6a6a8b:{c.instructions+=3;NFSU2_TR(0x6a6a8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a6a8d:{NFSU2_TR(0x6a6a8d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6a90:{NFSU2_TR(0x6a6a90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a6acb;}}
}
B6a6a92:L6a6a92:{c.instructions+=9;NFSU2_TR(0x6a6a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6a95:{NFSU2_TR(0x6a6a95);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6a98:{NFSU2_TR(0x6a6a98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a6a9b:{NFSU2_TR(0x6a6a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6a6a9e:{NFSU2_TR(0x6a6a9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6aa1:{NFSU2_TR(0x6a6aa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6aa4:{NFSU2_TR(0x6a6aa4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a6aa7:{NFSU2_TR(0x6a6aa7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+8))));
}
B6a6aa9:{NFSU2_TR(0x6a6aa9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a6aad;}}
}
B6a6aab:L6a6aab:{c.instructions+=1;NFSU2_TR(0x6a6aab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6a6aad:L6a6aad:{c.instructions+=10;NFSU2_TR(0x6a6aad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6ab0:{NFSU2_TR(0x6a6ab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6ab3:{NFSU2_TR(0x6a6ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6ab6:{NFSU2_TR(0x6a6ab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6ab9:{NFSU2_TR(0x6a6ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a6abc:{NFSU2_TR(0x6a6abc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6a6abf:{NFSU2_TR(0x6a6abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6ac2:{NFSU2_TR(0x6a6ac2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a6ac5:{NFSU2_TR(0x6a6ac5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+0))));
}
B6a6ac7:{NFSU2_TR(0x6a6ac7);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a6acb;}}
}
B6a6ac9:L6a6ac9:{c.instructions+=1;NFSU2_TR(0x6a6ac9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6a6acb:L6a6acb:{c.instructions+=5;NFSU2_TR(0x6a6acb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6ace:{NFSU2_TR(0x6a6ace);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6a6ad1:{NFSU2_TR(0x6a6ad1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a6ad4:{NFSU2_TR(0x6a6ad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6ad7:{NFSU2_TR(0x6a6ad7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6a47u);}goto L6a6a47;}}
}
B6a6add:L6a6add:{c.instructions+=2;NFSU2_TR(0x6a6add);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a6ae0:{NFSU2_TR(0x6a6ae0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6a39u);}goto L6a6a39;}}
}
B6a6ae6:L6a6ae6:{c.instructions+=4;NFSU2_TR(0x6a6ae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6ae9:{NFSU2_TR(0x6a6ae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6aec:{NFSU2_TR(0x6a6aec);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a6aef:{NFSU2_TR(0x6a6aef);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a69feu);}goto L6a69fe;}}
}
B6a6af5:L6a6af5:{c.instructions+=7;NFSU2_TR(0x6a6af5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6af8:{NFSU2_TR(0x6a6af8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a6afb:{NFSU2_TR(0x6a6afb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6aff:{NFSU2_TR(0x6a6aff);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a6b02:{NFSU2_TR(0x6a6b02);
__builtin_memmove((R+8),(R+4),4);
}
B6a6b04:{NFSU2_TR(0x6a6b04);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6a6b07:{NFSU2_TR(0x6a6b07);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a6b09:L6a6b09:{c.instructions+=1;NFSU2_TR(0x6a6b09);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6a6b0b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6b09u);}goto L6a6b09;}
}
B6a6b0b:L6a6b0b:{c.instructions+=2;NFSU2_TR(0x6a6b0b);
__builtin_memmove((R+4),(R+8),4);
}
B6a6b0d:{NFSU2_TR(0x6a6b0d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6a6b10:L6a6b10:{c.instructions+=1;NFSU2_TR(0x6a6b10);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6a6b12;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6b10u);}goto L6a6b10;}
}
B6a6b12:L6a6b12:{c.instructions+=2;NFSU2_TR(0x6a6b12);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6b16:{NFSU2_TR(0x6a6b16);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6bc6;}}
}
B6a6b1c:L6a6b1c:{c.instructions+=5;NFSU2_TR(0x6a6b1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6b1f:{NFSU2_TR(0x6a6b1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6b22:{NFSU2_TR(0x6a6b22);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a6b25:{NFSU2_TR(0x6a6b25);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6a6b2b:{NFSU2_TR(0x6a6b2b);
if(r1(R+518)){{goto L6a6bb7;}}
}
B6a6b31:L6a6b31:{c.instructions+=3;NFSU2_TR(0x6a6b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6b35:{NFSU2_TR(0x6a6b35);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6b39:{NFSU2_TR(0x6a6b39);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6b5a;}}
}
B6a6b3b:L6a6b3b:{c.instructions+=7;NFSU2_TR(0x6a6b3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a6b3e:{NFSU2_TR(0x6a6b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6b41:{NFSU2_TR(0x6a6b41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6b44:{NFSU2_TR(0x6a6b44);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6a6b47:{NFSU2_TR(0x6a6b47);
__builtin_memmove((R+4),(R+12),4);
}
B6a6b49:{NFSU2_TR(0x6a6b49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6b4a:{NFSU2_TR(0x6a6b4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6b4full));
TAIL_STATIC(0x69dee6u,69d);
}
B6a6b4f:L6a6b4f:{c.instructions+=4;NFSU2_TR(0x6a6b4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6b52:{NFSU2_TR(0x6a6b52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6b55:{NFSU2_TR(0x6a6b55);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a6b58:{NFSU2_TR(0x6a6b58);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6b3bu);}goto L6a6b3b;}}
}
B6a6b5a:L6a6b5a:{c.instructions+=3;NFSU2_TR(0x6a6b5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6b5e:{NFSU2_TR(0x6a6b5e);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6b62:{NFSU2_TR(0x6a6b62);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6b83;}}
}
B6a6b64:L6a6b64:{c.instructions+=7;NFSU2_TR(0x6a6b64);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a6b67:{NFSU2_TR(0x6a6b67);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6b6a:{NFSU2_TR(0x6a6b6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6b6d:{NFSU2_TR(0x6a6b6d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6a6b70:{NFSU2_TR(0x6a6b70);
__builtin_memmove((R+4),(R+12),4);
}
B6a6b72:{NFSU2_TR(0x6a6b72);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6b73:{NFSU2_TR(0x6a6b73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6b78ull));
TAIL_STATIC(0x69dd63u,69d);
}
B6a6b78:L6a6b78:{c.instructions+=4;NFSU2_TR(0x6a6b78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6b7b:{NFSU2_TR(0x6a6b7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6b7e:{NFSU2_TR(0x6a6b7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a6b81:{NFSU2_TR(0x6a6b81);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6b64u);}goto L6a6b64;}}
}
B6a6b83:L6a6b83:{c.instructions+=2;NFSU2_TR(0x6a6b83);
__builtin_memmove((R+4),(R+28),4);
}
B6a6b85:{NFSU2_TR(0x6a6b85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6b8aull));
TAIL_STATIC(0x698f0fu,698);
}
B6a6b8a:L6a6b8a:{c.instructions+=2;NFSU2_TR(0x6a6b8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a6b8c:{NFSU2_TR(0x6a6b8c);
if(r1(R+518)){{goto L6a6bb7;}}
}
B6a6b8e:L6a6b8e:{c.instructions+=3;NFSU2_TR(0x6a6b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6b92:{NFSU2_TR(0x6a6b92);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6b96:{NFSU2_TR(0x6a6b96);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6bb7;}}
}
B6a6b98:L6a6b98:{c.instructions+=7;NFSU2_TR(0x6a6b98);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a6b9b:{NFSU2_TR(0x6a6b9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6b9e:{NFSU2_TR(0x6a6b9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6ba1:{NFSU2_TR(0x6a6ba1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6a6ba4:{NFSU2_TR(0x6a6ba4);
__builtin_memmove((R+4),(R+12),4);
}
B6a6ba6:{NFSU2_TR(0x6a6ba6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6ba7:{NFSU2_TR(0x6a6ba7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6bacull));
TAIL_STATIC(0x69dd63u,69d);
}
B6a6bac:L6a6bac:{c.instructions+=4;NFSU2_TR(0x6a6bac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6baf:{NFSU2_TR(0x6a6baf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6bb2:{NFSU2_TR(0x6a6bb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a6bb5:{NFSU2_TR(0x6a6bb5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6b98u);}goto L6a6b98;}}
}
B6a6bb7:L6a6bb7:{c.instructions+=4;NFSU2_TR(0x6a6bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6bba:{NFSU2_TR(0x6a6bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6bbd:{NFSU2_TR(0x6a6bbd);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a6bc0:{NFSU2_TR(0x6a6bc0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6b1cu);}goto L6a6b1c;}}
}
B6a6bc6:L6a6bc6:{c.instructions+=4;NFSU2_TR(0x6a6bc6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a6bc8:{NFSU2_TR(0x6a6bc8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6bcb:{NFSU2_TR(0x6a6bcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6bce:{NFSU2_TR(0x6a6bce);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6c62;}}
}
B6a6bd4:L6a6bd4:{c.instructions+=9;NFSU2_TR(0x6a6bd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6bd7:{NFSU2_TR(0x6a6bd7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a6bda:{NFSU2_TR(0x6a6bda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6bdd:{NFSU2_TR(0x6a6bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6a6be0:{NFSU2_TR(0x6a6be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6be3:{NFSU2_TR(0x6a6be3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a6be6:{NFSU2_TR(0x6a6be6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a6be9:{NFSU2_TR(0x6a6be9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6bec:{NFSU2_TR(0x6a6bec);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6c55;}}
}
B6a6bee:L6a6bee:{c.instructions+=5;NFSU2_TR(0x6a6bee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6bef:{NFSU2_TR(0x6a6bef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6bf0:{NFSU2_TR(0x6a6bf0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6bf1:{NFSU2_TR(0x6a6bf1);
u8 U[4];
w4(U+0,u32(0x69a3ceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6bf6:{NFSU2_TR(0x6a6bf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6bfbull));
TAIL_STATIC(0x69a41du,69a);
}
B6a6bfb:L6a6bfb:{c.instructions+=6;NFSU2_TR(0x6a6bfb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a6bfd:{NFSU2_TR(0x6a6bfd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a6bfe:{NFSU2_TR(0x6a6bfe);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6c01:{NFSU2_TR(0x6a6c01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6c04:{NFSU2_TR(0x6a6c04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6c07:{NFSU2_TR(0x6a6c07);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6c39;}}
}
B6a6c09:L6a6c09:{c.instructions+=6;NFSU2_TR(0x6a6c09);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a6c0c:{NFSU2_TR(0x6a6c0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6c0f:{NFSU2_TR(0x6a6c0f);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6a6c13:{NFSU2_TR(0x6a6c13);
__builtin_memmove((R+0),(R+12),4);
}
B6a6c15:{NFSU2_TR(0x6a6c15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6c18:{NFSU2_TR(0x6a6c18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6c1dull));
TAIL_STATIC(0x69a355u,69a);
}
B6a6c1d:L6a6c1d:{c.instructions+=2;NFSU2_TR(0x6a6c1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a6c1f:{NFSU2_TR(0x6a6c1f);
if(r1(R+518)){{goto L6a6c2d;}}
}
B6a6c21:L6a6c21:{c.instructions+=4;NFSU2_TR(0x6a6c21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6c24:{NFSU2_TR(0x6a6c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6c27:{NFSU2_TR(0x6a6c27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6c2a:{NFSU2_TR(0x6a6c2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a6c2d:L6a6c2d:{c.instructions+=5;NFSU2_TR(0x6a6c2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6c30:{NFSU2_TR(0x6a6c30);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a6c31:{NFSU2_TR(0x6a6c31);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a6c34:{NFSU2_TR(0x6a6c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6c37:{NFSU2_TR(0x6a6c37);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6c09u);}goto L6a6c09;}}
}
B6a6c39:L6a6c39:{c.instructions+=9;NFSU2_TR(0x6a6c39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6c3c:{NFSU2_TR(0x6a6c3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6c3f:{NFSU2_TR(0x6a6c3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6c42:{NFSU2_TR(0x6a6c42);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6c43:{NFSU2_TR(0x6a6c43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6c44:{NFSU2_TR(0x6a6c44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6c45:{NFSU2_TR(0x6a6c45);
u8 U[4];
w4(U+0,u32(0x69a396ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6c4a:{NFSU2_TR(0x6a6c4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a6c4d:{NFSU2_TR(0x6a6c4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6c52ull));
TAIL_STATIC(0x69a41du,69a);
}
B6a6c52:L6a6c52:{c.instructions+=1;NFSU2_TR(0x6a6c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6c55:L6a6c55:{c.instructions+=4;NFSU2_TR(0x6a6c55);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a6c56:{NFSU2_TR(0x6a6c56);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a6c59:{NFSU2_TR(0x6a6c59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6c5c:{NFSU2_TR(0x6a6c5c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6bd4u);}goto L6a6bd4;}}
}
B6a6c62:L6a6c62:{c.instructions+=6;NFSU2_TR(0x6a6c62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6c65:{NFSU2_TR(0x6a6c65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a6c68:{NFSU2_TR(0x6a6c68);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a6c6b:{NFSU2_TR(0x6a6c6b);
__builtin_memmove((R+8),(R+4),4);
}
B6a6c6d:{NFSU2_TR(0x6a6c6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6a6c70:{NFSU2_TR(0x6a6c70);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6a6c73:L6a6c73:{c.instructions+=1;NFSU2_TR(0x6a6c73);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6a6c75;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6c73u);}goto L6a6c73;}
}
B6a6c75:L6a6c75:{c.instructions+=2;NFSU2_TR(0x6a6c75);
__builtin_memmove((R+4),(R+8),4);
}
B6a6c77:{NFSU2_TR(0x6a6c77);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6a6c7a:L6a6c7a:{c.instructions+=1;NFSU2_TR(0x6a6c7a);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6a6c7c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6c7au);}goto L6a6c7a;}
}
B6a6c7c:L6a6c7c:{c.instructions+=3;NFSU2_TR(0x6a6c7c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a6c7e:{NFSU2_TR(0x6a6c7e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6c81:{NFSU2_TR(0x6a6c81);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6c8f;}}
}
B6a6c83:L6a6c83:{c.instructions+=5;NFSU2_TR(0x6a6c83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6c86:{NFSU2_TR(0x6a6c86);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a6c89:{NFSU2_TR(0x6a6c89);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a6c8a:{NFSU2_TR(0x6a6c8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a6c8d:{NFSU2_TR(0x6a6c8d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6c83u);}goto L6a6c83;}}
}
B6a6c8f:L6a6c8f:{c.instructions+=6;NFSU2_TR(0x6a6c8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6c92:{NFSU2_TR(0x6a6c92);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B6a6c94:{NFSU2_TR(0x6a6c94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6c98:{NFSU2_TR(0x6a6c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6c9b:{NFSU2_TR(0x6a6c9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6c9e:{NFSU2_TR(0x6a6c9e);
{goto L6a6db8;}
}
B6a6ca3:L6a6ca3:{c.instructions+=8;NFSU2_TR(0x6a6ca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6ca6:{NFSU2_TR(0x6a6ca6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6a6ca7:{NFSU2_TR(0x6a6ca7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a6caa:{NFSU2_TR(0x6a6caa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a6cac:{NFSU2_TR(0x6a6cac);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6a6cb2:{NFSU2_TR(0x6a6cb2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20900000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a6cb8:{NFSU2_TR(0x6a6cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6cbb:{NFSU2_TR(0x6a6cbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a6db8;}}
}
B6a6cc1:L6a6cc1:{c.instructions+=3;NFSU2_TR(0x6a6cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6cc5:{NFSU2_TR(0x6a6cc5);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6cc9:{NFSU2_TR(0x6a6cc9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6db8;}}
}
B6a6ccf:L6a6ccf:{c.instructions+=6;NFSU2_TR(0x6a6ccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6cd2:{NFSU2_TR(0x6a6cd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6cd5:{NFSU2_TR(0x6a6cd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6cd8:{NFSU2_TR(0x6a6cd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a6cdb:{NFSU2_TR(0x6a6cdb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a6cde:{NFSU2_TR(0x6a6cde);
if(r1(R+518)){{goto L6a6cf0;}}
}
B6a6ce0:L6a6ce0:{c.instructions+=5;NFSU2_TR(0x6a6ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6ce3:{NFSU2_TR(0x6a6ce3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a6ce6:{NFSU2_TR(0x6a6ce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6ce9:{NFSU2_TR(0x6a6ce9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a6cec:{NFSU2_TR(0x6a6cec);
if(r1(R+518)){{goto L6a6cf0;}}
}
B6a6cee:L6a6cee:{c.instructions+=1;NFSU2_TR(0x6a6cee);
__builtin_memmove((R+0),(R+4),4);
}
B6a6cf0:L6a6cf0:{c.instructions+=7;NFSU2_TR(0x6a6cf0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6cf2:{NFSU2_TR(0x6a6cf2);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6cf4:{NFSU2_TR(0x6a6cf4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6cf6:{NFSU2_TR(0x6a6cf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6cf7:{NFSU2_TR(0x6a6cf7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6cf8:{NFSU2_TR(0x6a6cf8);
__builtin_memmove((R+4),(R+12),4);
}
B6a6cfa:{NFSU2_TR(0x6a6cfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6cffull));
TAIL_STATIC(0x6a5ef5u,6a5);
}
B6a6cff:L6a6cff:{c.instructions+=2;NFSU2_TR(0x6a6cff);
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
B6a6d01:{NFSU2_TR(0x6a6d01);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a6f63;}}
}
B6a6d07:L6a6d07:{c.instructions+=14;NFSU2_TR(0x6a6d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6d0a:{NFSU2_TR(0x6a6d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6a6d0d:{NFSU2_TR(0x6a6d0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6d10:{NFSU2_TR(0x6a6d10);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a6d13:{NFSU2_TR(0x6a6d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6d16:{NFSU2_TR(0x6a6d16);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a6d19:{NFSU2_TR(0x6a6d19);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6d1c:{NFSU2_TR(0x6a6d1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6d1f:{NFSU2_TR(0x6a6d1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a6d22:{NFSU2_TR(0x6a6d22);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6d25:{NFSU2_TR(0x6a6d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6d29:{NFSU2_TR(0x6a6d29);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a6d2b:{NFSU2_TR(0x6a6d2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6d2e:{NFSU2_TR(0x6a6d2e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6d4b;}}
}
B6a6d30:L6a6d30:{c.instructions+=2;NFSU2_TR(0x6a6d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6d33:{NFSU2_TR(0x6a6d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6d36:L6a6d36:{c.instructions+=2;NFSU2_TR(0x6a6d36);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a6d38:{NFSU2_TR(0x6a6d38);
if(r1(R+518)){{goto L6a6d4b;}}
}
B6a6d3a:L6a6d3a:{c.instructions+=6;NFSU2_TR(0x6a6d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6d3d:{NFSU2_TR(0x6a6d3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6d40:{NFSU2_TR(0x6a6d40);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6a6d43:{NFSU2_TR(0x6a6d43);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6a6d46:{NFSU2_TR(0x6a6d46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6d49:{NFSU2_TR(0x6a6d49);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6d36u);}goto L6a6d36;}}
}
B6a6d4b:L6a6d4b:{c.instructions+=15;NFSU2_TR(0x6a6d4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6d4e:{NFSU2_TR(0x6a6d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6d51:{NFSU2_TR(0x6a6d51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6d54:{NFSU2_TR(0x6a6d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6d57:{NFSU2_TR(0x6a6d57);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6d59:{NFSU2_TR(0x6a6d59);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a6d5c:{NFSU2_TR(0x6a6d5c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6a6d5f:{NFSU2_TR(0x6a6d5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6d62:{NFSU2_TR(0x6a6d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6d65:{NFSU2_TR(0x6a6d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6d68:{NFSU2_TR(0x6a6d68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6d6a:{NFSU2_TR(0x6a6d6a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6a6d6d:{NFSU2_TR(0x6a6d6d);
__builtin_memmove((R+4),(R+12),4);
}
B6a6d6f:{NFSU2_TR(0x6a6d6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6d70:{NFSU2_TR(0x6a6d70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6d75ull));
TAIL_STATIC(0x6a5ef5u,6a5);
}
B6a6d75:L6a6d75:{c.instructions+=2;NFSU2_TR(0x6a6d75);
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
B6a6d77:{NFSU2_TR(0x6a6d77);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a6f63;}}
}
B6a6d7d:L6a6d7d:{c.instructions+=12;NFSU2_TR(0x6a6d7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6d80:{NFSU2_TR(0x6a6d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6d83:{NFSU2_TR(0x6a6d83);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6d85:{NFSU2_TR(0x6a6d85);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6a6d88:{NFSU2_TR(0x6a6d88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6d8b:{NFSU2_TR(0x6a6d8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6d8e:{NFSU2_TR(0x6a6d8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6d91:{NFSU2_TR(0x6a6d91);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6d93:{NFSU2_TR(0x6a6d93);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6a6d96:{NFSU2_TR(0x6a6d96);
__builtin_memmove((R+4),(R+12),4);
}
B6a6d98:{NFSU2_TR(0x6a6d98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6d99:{NFSU2_TR(0x6a6d99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6d9eull));
TAIL_STATIC(0x6a5ef5u,6a5);
}
B6a6d9e:L6a6d9e:{c.instructions+=2;NFSU2_TR(0x6a6d9e);
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
B6a6da0:{NFSU2_TR(0x6a6da0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a6f63;}}
}
B6a6da6:L6a6da6:{c.instructions+=4;NFSU2_TR(0x6a6da6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6da9:{NFSU2_TR(0x6a6da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6dac:{NFSU2_TR(0x6a6dac);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a6daf:{NFSU2_TR(0x6a6daf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6ccfu);}goto L6a6ccf;}}
}
B6a6db5:L6a6db5:{c.instructions+=1;NFSU2_TR(0x6a6db5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6db8:L6a6db8:{c.instructions+=2;NFSU2_TR(0x6a6db8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a6dba:{NFSU2_TR(0x6a6dba);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6ca3u);}goto L6a6ca3;}}
}
B6a6dc0:L6a6dc0:{c.instructions+=1;NFSU2_TR(0x6a6dc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6dc7:L6a6dc7:{c.instructions+=6;NFSU2_TR(0x6a6dc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6dca:{NFSU2_TR(0x6a6dca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6dcd:{NFSU2_TR(0x6a6dcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6dd0:{NFSU2_TR(0x6a6dd0);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a6dd2:{NFSU2_TR(0x6a6dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6dd5:{NFSU2_TR(0x6a6dd5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6f04;}}
}
B6a6ddb:L6a6ddb:{c.instructions+=7;NFSU2_TR(0x6a6ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6dde:{NFSU2_TR(0x6a6dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6de1:{NFSU2_TR(0x6a6de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6de4:{NFSU2_TR(0x6a6de4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a6de7:{NFSU2_TR(0x6a6de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6dea:{NFSU2_TR(0x6a6dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6a6df0:{NFSU2_TR(0x6a6df0);
if(r1(R+518)){{goto L6a6efa;}}
}
B6a6df6:L6a6df6:{c.instructions+=3;NFSU2_TR(0x6a6df6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6dfa:{NFSU2_TR(0x6a6dfa);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6dfe:{NFSU2_TR(0x6a6dfe);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6e24;}}
}
B6a6e00:L6a6e00:{c.instructions+=6;NFSU2_TR(0x6a6e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6e03:{NFSU2_TR(0x6a6e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6e06:{NFSU2_TR(0x6a6e06);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6a6e09:{NFSU2_TR(0x6a6e09);
__builtin_memmove((R+4),(R+12),4);
}
B6a6e0b:{NFSU2_TR(0x6a6e0b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6e0c:{NFSU2_TR(0x6a6e0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6e11ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a61bdu);}goto L6a61bd;}
}
B6a6e11:L6a6e11:{c.instructions+=2;NFSU2_TR(0x6a6e11);
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
B6a6e13:{NFSU2_TR(0x6a6e13);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a6f63;}}
}
B6a6e19:L6a6e19:{c.instructions+=4;NFSU2_TR(0x6a6e19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6e1c:{NFSU2_TR(0x6a6e1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6e1f:{NFSU2_TR(0x6a6e1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a6e22:{NFSU2_TR(0x6a6e22);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6e00u);}goto L6a6e00;}}
}
B6a6e24:L6a6e24:{c.instructions+=10;NFSU2_TR(0x6a6e24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a6e26:{NFSU2_TR(0x6a6e26);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6e29:{NFSU2_TR(0x6a6e29);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6a6e2f:{NFSU2_TR(0x6a6e2f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a6e31:{NFSU2_TR(0x6a6e31);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a6e31);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a6e31);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6a6e33:{NFSU2_TR(0x6a6e33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6e37:{NFSU2_TR(0x6a6e37);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6e3b:{NFSU2_TR(0x6a6e3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6e3e:{NFSU2_TR(0x6a6e3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6e41:{NFSU2_TR(0x6a6e41);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6efa;}}
}
B6a6e47:L6a6e47:{c.instructions+=1;NFSU2_TR(0x6a6e47);
{goto L6a6e4c;}
}
B6a6e49:L6a6e49:{c.instructions+=1;NFSU2_TR(0x6a6e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6e4c:L6a6e4c:{c.instructions+=3;NFSU2_TR(0x6a6e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6e50:{NFSU2_TR(0x6a6e50);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a6e54:{NFSU2_TR(0x6a6e54);
if(r1(R+518)){{goto L6a6eb9;}}
}
B6a6e56:L6a6e56:{c.instructions+=2;NFSU2_TR(0x6a6e56);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6e5a:{NFSU2_TR(0x6a6e5a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6eb9;}}
}
B6a6e5c:L6a6e5c:{c.instructions+=8;NFSU2_TR(0x6a6e5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6e5f:{NFSU2_TR(0x6a6e5f);
__builtin_memmove((R+0),(R+4),4);
}
B6a6e61:{NFSU2_TR(0x6a6e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6e64:{NFSU2_TR(0x6a6e64);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a6e67:{NFSU2_TR(0x6a6e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6e6a:{NFSU2_TR(0x6a6e6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6e6d:{NFSU2_TR(0x6a6e6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6e70:{NFSU2_TR(0x6a6e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6e73:L6a6e73:{c.instructions+=3;NFSU2_TR(0x6a6e73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a6e75:{NFSU2_TR(0x6a6e75);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a6e78:{NFSU2_TR(0x6a6e78);
if(r1(R+518)){{goto L6a6e87;}}
}
B6a6e7a:L6a6e7a:{c.instructions+=4;NFSU2_TR(0x6a6e7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a6e7d:{NFSU2_TR(0x6a6e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6e80:{NFSU2_TR(0x6a6e80);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a6e83:{NFSU2_TR(0x6a6e83);
if(r1(R+518)){{goto L6a6e87;}}
}
B6a6e85:L6a6e85:{c.instructions+=1;NFSU2_TR(0x6a6e85);
__builtin_memmove((R+0),(R+4),4);
}
B6a6e87:L6a6e87:{c.instructions+=4;NFSU2_TR(0x6a6e87);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a6e8a:{NFSU2_TR(0x6a6e8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a6e8c:{NFSU2_TR(0x6a6e8c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6e8f:{NFSU2_TR(0x6a6e8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a6eab;}}
}
B6a6e91:L6a6e91:{c.instructions+=5;NFSU2_TR(0x6a6e91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6e94:{NFSU2_TR(0x6a6e94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6e97:{NFSU2_TR(0x6a6e97);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a6e9a:{NFSU2_TR(0x6a6e9a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a6e9d:{NFSU2_TR(0x6a6e9d);
if(r1(R+518)){{goto L6a6eab;}}
}
B6a6e9f:L6a6e9f:{c.instructions+=2;NFSU2_TR(0x6a6e9f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a6ea1:{NFSU2_TR(0x6a6ea1);
if(r1(R+518)){{goto L6a6ea8;}}
}
B6a6ea3:L6a6ea3:{c.instructions+=2;NFSU2_TR(0x6a6ea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6ea6:{NFSU2_TR(0x6a6ea6);
{goto L6a6eab;}
}
B6a6ea8:L6a6ea8:{c.instructions+=1;NFSU2_TR(0x6a6ea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6eab:L6a6eab:{c.instructions+=5;NFSU2_TR(0x6a6eab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6eae:{NFSU2_TR(0x6a6eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6a6eb1:{NFSU2_TR(0x6a6eb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a6eb4:{NFSU2_TR(0x6a6eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6eb7:{NFSU2_TR(0x6a6eb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6e73u);}goto L6a6e73;}}
}
B6a6eb9:L6a6eb9:{c.instructions+=5;NFSU2_TR(0x6a6eb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6ebc:{NFSU2_TR(0x6a6ebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6ebf:{NFSU2_TR(0x6a6ebf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a6ec2:{NFSU2_TR(0x6a6ec2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a6ec5:{NFSU2_TR(0x6a6ec5);
if(r1(R+518)){{goto L6a6ed7;}}
}
B6a6ec7:L6a6ec7:{c.instructions+=5;NFSU2_TR(0x6a6ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6eca:{NFSU2_TR(0x6a6eca);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a6ecd:{NFSU2_TR(0x6a6ecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6ed0:{NFSU2_TR(0x6a6ed0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a6ed3:{NFSU2_TR(0x6a6ed3);
if(r1(R+518)){{goto L6a6ed7;}}
}
B6a6ed5:L6a6ed5:{c.instructions+=1;NFSU2_TR(0x6a6ed5);
__builtin_memmove((R+0),(R+4),4);
}
B6a6ed7:L6a6ed7:{c.instructions+=7;NFSU2_TR(0x6a6ed7);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6ed9:{NFSU2_TR(0x6a6ed9);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6edb:{NFSU2_TR(0x6a6edb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a6ede:{NFSU2_TR(0x6a6ede);
__builtin_memmove((R+4),(R+12),4);
}
B6a6ee0:{NFSU2_TR(0x6a6ee0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6ee1:{NFSU2_TR(0x6a6ee1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6ee2:{NFSU2_TR(0x6a6ee2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6ee7ull));
TAIL_STATIC(0x6a5ef5u,6a5);
}
B6a6ee7:L6a6ee7:{c.instructions+=2;NFSU2_TR(0x6a6ee7);
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
B6a6ee9:{NFSU2_TR(0x6a6ee9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a6f63;}}
}
B6a6eeb:L6a6eeb:{c.instructions+=4;NFSU2_TR(0x6a6eeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6eee:{NFSU2_TR(0x6a6eee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6ef1:{NFSU2_TR(0x6a6ef1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a6ef4:{NFSU2_TR(0x6a6ef4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6e49u);}goto L6a6e49;}}
}
B6a6efa:L6a6efa:{c.instructions+=2;NFSU2_TR(0x6a6efa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6efe:{NFSU2_TR(0x6a6efe);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6ddbu);}goto L6a6ddb;}}
}
B6a6f04:L6a6f04:{c.instructions+=2;NFSU2_TR(0x6a6f04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a6f07:{NFSU2_TR(0x6a6f07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6dc7u);}goto L6a6dc7;}}
}
B6a6f0d:L6a6f0d:{c.instructions+=2;NFSU2_TR(0x6a6f0d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a6f11:{NFSU2_TR(0x6a6f11);
if(r1(R+518)){{goto L6a6f55;}}
}
B6a6f13:L6a6f13:{c.instructions+=3;NFSU2_TR(0x6a6f13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6f17:{NFSU2_TR(0x6a6f17);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6f1b:{NFSU2_TR(0x6a6f1b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a6f55;}}
}
B6a6f1d:L6a6f1d:{c.instructions+=6;NFSU2_TR(0x6a6f1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6f20:{NFSU2_TR(0x6a6f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6f23:{NFSU2_TR(0x6a6f23);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a6f26:{NFSU2_TR(0x6a6f26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a6f28:{NFSU2_TR(0x6a6f28);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a6f2b:{NFSU2_TR(0x6a6f2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a6f4a;}}
}
B6a6f2d:L6a6f2d:{c.instructions+=10;NFSU2_TR(0x6a6f2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6f30:{NFSU2_TR(0x6a6f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6f33:{NFSU2_TR(0x6a6f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a6f36:{NFSU2_TR(0x6a6f36);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a6f39:{NFSU2_TR(0x6a6f39);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6a6f3b:{NFSU2_TR(0x6a6f3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a6f3e:{NFSU2_TR(0x6a6f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6f41:{NFSU2_TR(0x6a6f41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a6f44:{NFSU2_TR(0x6a6f44);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a6f47:{NFSU2_TR(0x6a6f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6f4a:L6a6f4a:{c.instructions+=4;NFSU2_TR(0x6a6f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6f4d:{NFSU2_TR(0x6a6f4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6f50:{NFSU2_TR(0x6a6f50);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a6f53:{NFSU2_TR(0x6a6f53);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a6f1du);}goto L6a6f1d;}}
}
B6a6f55:L6a6f55:{c.instructions+=5;NFSU2_TR(0x6a6f55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a6f57:{NFSU2_TR(0x6a6f57);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6f5a:{NFSU2_TR(0x6a6f5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a6f5d:{NFSU2_TR(0x6a6f5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a6f61:{NFSU2_TR(0x6a6f61);
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
B6a6f63:L6a6f63:{c.instructions+=5;NFSU2_TR(0x6a6f63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a6f64:{NFSU2_TR(0x6a6f64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a6f65:{NFSU2_TR(0x6a6f65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a6f66:{NFSU2_TR(0x6a6f66);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6a6f67:{NFSU2_TR(0x6a6f67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a6f6a:L6a6f6a:{c.instructions+=11;NFSU2_TR(0x6a6f6a);
__builtin_memmove((R+28),(R+28),4);
}
B6a6f6c:{NFSU2_TR(0x6a6f6c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6f6d:{NFSU2_TR(0x6a6f6d);
__builtin_memmove((R+20),(R+16),4);
}
B6a6f6f:{NFSU2_TR(0x6a6f6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B6a6f72:{NFSU2_TR(0x6a6f72);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6f73:{NFSU2_TR(0x6a6f73);
__builtin_memmove((R+24),(R+4),4);
}
B6a6f75:{NFSU2_TR(0x6a6f75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a6f7b:{NFSU2_TR(0x6a6f7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6f7c:{NFSU2_TR(0x6a6f7c);
w4(R+28,u32(0x100ull));
}
B6a6f81:{NFSU2_TR(0x6a6f81);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a6f83:{NFSU2_TR(0x6a6f83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a6f89;}}
}
B6a6f85:L6a6f85:{c.instructions+=2;NFSU2_TR(0x6a6f85);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a6f87:{NFSU2_TR(0x6a6f87);
if(r1(R+518)){{goto L6a6f91;}}
}
B6a6f89:L6a6f89:{c.instructions+=3;NFSU2_TR(0x6a6f89);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a6f8b:{NFSU2_TR(0x6a6f8b);
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
B6a6f8c:{NFSU2_TR(0x6a6f8c);
TAIL_STATIC(0x6a7460u,6a7);
}
B6a6f91:L6a6f91:{c.instructions+=3;NFSU2_TR(0x6a6f91);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6f92:{NFSU2_TR(0x6a6f92);
__builtin_memmove((R+4),(R+24),4);
}
B6a6f94:{NFSU2_TR(0x6a6f94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6f99ull));
TAIL_STATIC(0x6a0e7du,6a0);
}
B6a6f99:L6a6f99:{c.instructions+=3;NFSU2_TR(0x6a6f99);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6a6f9b:{NFSU2_TR(0x6a6f9b);
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
B6a6f9d:{NFSU2_TR(0x6a6f9d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6a745fu,6a7);}
}
B6a6fa3:L6a6fa3:{c.instructions+=2;NFSU2_TR(0x6a6fa3);
u8 U[4];
w4(U+0,u32(0x1fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6fa8:{NFSU2_TR(0x6a6fa8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6fadull));
TAIL_STATIC(0x575620u,575);
}
B6a6fad:L6a6fad:{c.instructions+=3;NFSU2_TR(0x6a6fad);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a6faf:{NFSU2_TR(0x6a6faf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a6fb0:{NFSU2_TR(0x6a6fb0);
if(r1(R+518)){{goto L6a6fbb;}}
}
B6a6fb2:L6a6fb2:{c.instructions+=2;NFSU2_TR(0x6a6fb2);
__builtin_memmove((R+4),(R+0),4);
}
B6a6fb4:{NFSU2_TR(0x6a6fb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6fb9ull));
TAIL_STATIC(0x6c0359u,6c0);
}
B6a6fb9:L6a6fb9:{c.instructions+=1;NFSU2_TR(0x6a6fb9);
{goto L6a6fbd;}
}
B6a6fbb:L6a6fbb:{c.instructions+=1;NFSU2_TR(0x6a6fbb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a6fbd:L6a6fbd:{c.instructions+=3;NFSU2_TR(0x6a6fbd);
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
B6a6fbf:{NFSU2_TR(0x6a6fbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a6fc5:{NFSU2_TR(0x6a6fc5);
if(r1(R+518)){TAIL_STATIC(0x6a7464u,6a7);}
}
B6a6fcb:L6a6fcb:{c.instructions+=7;NFSU2_TR(0x6a6fcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6fd1:{NFSU2_TR(0x6a6fd1);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B6a6fd3:{NFSU2_TR(0x6a6fd3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6fd4:{NFSU2_TR(0x6a6fd4);
u8 U[4];
w4(U+0,u32(0x46580201ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6fd9:{NFSU2_TR(0x6a6fd9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a6fda:{NFSU2_TR(0x6a6fda);
__builtin_memmove((R+4),(R+0),4);
}
B6a6fdc:{NFSU2_TR(0x6a6fdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6fe1ull));
TAIL_STATIC(0x69ee55u,69e);
}
B6a6fe1:L6a6fe1:{c.instructions+=2;NFSU2_TR(0x6a6fe1);
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
B6a6fe3:{NFSU2_TR(0x6a6fe3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6a745fu,6a7);}
}
B6a6fe9:L6a6fe9:{c.instructions+=2;NFSU2_TR(0x6a6fe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a6fef:{NFSU2_TR(0x6a6fef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a6ff4ull));
TAIL_STATIC(0x69a7e8u,69a);
}
B6a6ff4:L6a6ff4:{c.instructions+=2;NFSU2_TR(0x6a6ff4);
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
B6a6ff6:{NFSU2_TR(0x6a6ff6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6a745fu,6a7);}
}
B6a6ffc:L6a6ffc:{c.instructions+=2;NFSU2_TR(0x6a6ffc);
__builtin_memmove((R+4),(R+24),4);
}
B6a6ffe:{NFSU2_TR(0x6a6ffe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a7003ull));
TAIL_STATIC(0x69a9f9u,69a);
}
XIT:NFSU2_TR_EXIT(0x6a6,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
