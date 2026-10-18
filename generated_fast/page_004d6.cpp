#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_498(u8* __restrict R,Cpu& c);
u32 body_4a2(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4be(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4cd(u8* __restrict R,Cpu& c);
u32 body_4d5(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_58b(u8* __restrict R,Cpu& c);
u32 body_743(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4d6,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4d6,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4d6(u8* __restrict R,Cpu& c);
u32 page_4d6(Cpu& c){return body_4d6(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4d6(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4d6000:goto L4d6000;
case 0x4d6005:goto L4d6005;
case 0x4d6007:c.instructions+=3;goto B4d6007;
case 0x4d600a:c.instructions+=2;goto B4d600a;
case 0x4d600c:c.instructions+=1;goto B4d600c;
case 0x4d600e:goto L4d600e;
case 0x4d6011:c.instructions+=6;goto B4d6011;
case 0x4d6013:c.instructions+=5;goto B4d6013;
case 0x4d6016:c.instructions+=4;goto B4d6016;
case 0x4d6019:c.instructions+=3;goto B4d6019;
case 0x4d601d:c.instructions+=2;goto B4d601d;
case 0x4d6023:c.instructions+=1;goto B4d6023;
case 0x4d6025:goto L4d6025;
case 0x4d6027:c.instructions+=4;goto B4d6027;
case 0x4d6029:c.instructions+=3;goto B4d6029;
case 0x4d602e:c.instructions+=2;goto B4d602e;
case 0x4d6030:c.instructions+=1;goto B4d6030;
case 0x4d6035:goto L4d6035;
case 0x4d6037:c.instructions+=4;goto B4d6037;
case 0x4d6039:c.instructions+=3;goto B4d6039;
case 0x4d603e:c.instructions+=2;goto B4d603e;
case 0x4d6040:c.instructions+=1;goto B4d6040;
case 0x4d6045:goto L4d6045;
case 0x4d6049:c.instructions+=3;goto B4d6049;
case 0x4d604a:c.instructions+=2;goto B4d604a;
case 0x4d604c:c.instructions+=1;goto B4d604c;
case 0x4d6051:goto L4d6051;
case 0x4d6052:c.instructions+=2;goto B4d6052;
case 0x4d6054:c.instructions+=1;goto B4d6054;
case 0x4d6059:goto L4d6059;
case 0x4d605a:c.instructions+=2;goto B4d605a;
case 0x4d605d:c.instructions+=1;goto B4d605d;
case 0x4d605f:goto L4d605f;
case 0x4d6061:c.instructions+=3;goto B4d6061;
case 0x4d6067:c.instructions+=2;goto B4d6067;
case 0x4d6069:c.instructions+=1;goto B4d6069;
case 0x4d606b:goto L4d606b;
case 0x4d606d:c.instructions+=2;goto B4d606d;
case 0x4d606f:c.instructions+=1;goto B4d606f;
case 0x4d6074:goto L4d6074;
case 0x4d6077:c.instructions+=2;goto B4d6077;
case 0x4d6079:c.instructions+=1;goto B4d6079;
case 0x4d607b:goto L4d607b;
case 0x4d607e:c.instructions+=3;goto B4d607e;
case 0x4d6083:c.instructions+=2;goto B4d6083;
case 0x4d6084:c.instructions+=1;goto B4d6084;
case 0x4d6089:goto L4d6089;
case 0x4d608c:c.instructions+=3;goto B4d608c;
case 0x4d608d:c.instructions+=2;goto B4d608d;
case 0x4d608f:c.instructions+=1;goto B4d608f;
case 0x4d6094:goto L4d6094;
case 0x4d609a:c.instructions+=5;goto B4d609a;
case 0x4d609b:c.instructions+=4;goto B4d609b;
case 0x4d609c:c.instructions+=3;goto B4d609c;
case 0x4d609e:c.instructions+=2;goto B4d609e;
case 0x4d60a4:c.instructions+=1;goto B4d60a4;
case 0x4d60a9:goto L4d60a9;
case 0x4d60ab:c.instructions+=2;goto B4d60ab;
case 0x4d60ad:c.instructions+=1;goto B4d60ad;
case 0x4d60b2:goto L4d60b2;
case 0x4d60b3:c.instructions+=5;goto B4d60b3;
case 0x4d60b4:c.instructions+=4;goto B4d60b4;
case 0x4d60b5:c.instructions+=3;goto B4d60b5;
case 0x4d60b6:c.instructions+=2;goto B4d60b6;
case 0x4d60b9:c.instructions+=1;goto B4d60b9;
case 0x4d60c0:goto L4d60c0;
case 0x4d60c4:c.instructions+=4;goto B4d60c4;
case 0x4d60c9:c.instructions+=3;goto B4d60c9;
case 0x4d60ca:c.instructions+=2;goto B4d60ca;
case 0x4d60cc:c.instructions+=1;goto B4d60cc;
case 0x4d60d2:goto L4d60d2;
case 0x4d60d4:goto L4d60d4;
case 0x4d60d9:c.instructions+=1;goto B4d60d9;
case 0x4d60db:goto L4d60db;
case 0x4d60e0:c.instructions+=1;goto B4d60e0;
case 0x4d60e6:goto L4d60e6;
case 0x4d60e9:c.instructions+=4;goto B4d60e9;
case 0x4d60ee:c.instructions+=3;goto B4d60ee;
case 0x4d60f3:c.instructions+=2;goto B4d60f3;
case 0x4d60f4:c.instructions+=1;goto B4d60f4;
case 0x4d60f9:goto L4d60f9;
case 0x4d60fc:c.instructions+=2;goto B4d60fc;
case 0x4d60fe:c.instructions+=1;goto B4d60fe;
case 0x4d6104:goto L4d6104;
case 0x4d6107:c.instructions+=5;goto B4d6107;
case 0x4d6109:c.instructions+=4;goto B4d6109;
case 0x4d610e:c.instructions+=3;goto B4d610e;
case 0x4d6113:c.instructions+=2;goto B4d6113;
case 0x4d6114:c.instructions+=1;goto B4d6114;
case 0x4d6119:goto L4d6119;
case 0x4d611c:c.instructions+=2;goto B4d611c;
case 0x4d611d:c.instructions+=1;goto B4d611d;
case 0x4d6120:goto L4d6120;
case 0x4d6122:c.instructions+=2;goto B4d6122;
case 0x4d6129:c.instructions+=1;goto B4d6129;
case 0x4d612e:goto L4d612e;
case 0x4d6134:c.instructions+=5;goto B4d6134;
case 0x4d6136:c.instructions+=4;goto B4d6136;
case 0x4d613b:c.instructions+=3;goto B4d613b;
case 0x4d6140:c.instructions+=2;goto B4d6140;
case 0x4d6141:c.instructions+=1;goto B4d6141;
case 0x4d6146:goto L4d6146;
case 0x4d6149:c.instructions+=2;goto B4d6149;
case 0x4d614a:c.instructions+=1;goto B4d614a;
case 0x4d614d:goto L4d614d;
case 0x4d6150:c.instructions+=1;goto B4d6150;
case 0x4d6155:goto L4d6155;
case 0x4d615b:c.instructions+=2;goto B4d615b;
case 0x4d615d:c.instructions+=1;goto B4d615d;
case 0x4d615f:goto L4d615f;
case 0x4d6164:c.instructions+=1;goto B4d6164;
case 0x4d6166:goto L4d6166;
case 0x4d616c:c.instructions+=8;goto B4d616c;
case 0x4d616e:c.instructions+=7;goto B4d616e;
case 0x4d6172:c.instructions+=6;goto B4d6172;
case 0x4d6176:c.instructions+=5;goto B4d6176;
case 0x4d617c:c.instructions+=4;goto B4d617c;
case 0x4d6182:c.instructions+=3;goto B4d6182;
case 0x4d6184:c.instructions+=2;goto B4d6184;
case 0x4d6187:c.instructions+=1;goto B4d6187;
case 0x4d6189:goto L4d6189;
case 0x4d618c:c.instructions+=3;goto B4d618c;
case 0x4d618d:c.instructions+=2;goto B4d618d;
case 0x4d6193:c.instructions+=1;goto B4d6193;
case 0x4d6198:goto L4d6198;
case 0x4d61a2:c.instructions+=1;goto B4d61a2;
case 0x4d61a4:goto L4d61a4;
case 0x4d61aa:c.instructions+=1;goto B4d61aa;
case 0x4d61af:goto L4d61af;
case 0x4d61b5:c.instructions+=2;goto B4d61b5;
case 0x4d61b7:c.instructions+=1;goto B4d61b7;
case 0x4d61b9:goto L4d61b9;
case 0x4d61bc:c.instructions+=2;goto B4d61bc;
case 0x4d61bd:c.instructions+=1;goto B4d61bd;
case 0x4d61c2:goto L4d61c2;
case 0x4d61c9:c.instructions+=4;goto B4d61c9;
case 0x4d61cf:c.instructions+=3;goto B4d61cf;
case 0x4d61d0:c.instructions+=2;goto B4d61d0;
case 0x4d61d2:c.instructions+=1;goto B4d61d2;
case 0x4d61d7:goto L4d61d7;
case 0x4d61da:goto L4d61da;
case 0x4d61dc:c.instructions+=1;goto B4d61dc;
case 0x4d61e1:goto L4d61e1;
case 0x4d61e2:c.instructions+=1;goto B4d61e2;
case 0x4d61e5:goto L4d61e5;
case 0x4d61ea:c.instructions+=1;goto B4d61ea;
case 0x4d61ec:goto L4d61ec;
case 0x4d61f1:c.instructions+=5;goto B4d61f1;
case 0x4d61f3:c.instructions+=4;goto B4d61f3;
case 0x4d61f8:c.instructions+=3;goto B4d61f8;
case 0x4d61fd:c.instructions+=2;goto B4d61fd;
case 0x4d61fe:c.instructions+=1;goto B4d61fe;
case 0x4d6203:goto L4d6203;
case 0x4d620a:c.instructions+=1;goto B4d620a;
case 0x4d620d:goto L4d620d;
case 0x4d620e:c.instructions+=1;goto B4d620e;
case 0x4d6220:goto L4d6220;
case 0x4d6222:c.instructions+=13;goto B4d6222;
case 0x4d6227:c.instructions+=12;goto B4d6227;
case 0x4d622d:c.instructions+=11;goto B4d622d;
case 0x4d622e:c.instructions+=10;goto B4d622e;
case 0x4d6235:c.instructions+=9;goto B4d6235;
case 0x4d6236:c.instructions+=8;goto B4d6236;
case 0x4d6237:c.instructions+=7;goto B4d6237;
case 0x4d6239:c.instructions+=6;goto B4d6239;
case 0x4d623d:c.instructions+=5;goto B4d623d;
case 0x4d6243:c.instructions+=4;goto B4d6243;
case 0x4d6246:c.instructions+=3;goto B4d6246;
case 0x4d6248:c.instructions+=2;goto B4d6248;
case 0x4d6250:c.instructions+=1;goto B4d6250;
case 0x4d6252:goto L4d6252;
case 0x4d6253:c.instructions+=1;goto B4d6253;
case 0x4d6258:goto L4d6258;
case 0x4d625b:c.instructions+=1;goto B4d625b;
case 0x4d6262:goto L4d6262;
case 0x4d6265:c.instructions+=2;goto B4d6265;
case 0x4d626a:c.instructions+=1;goto B4d626a;
case 0x4d626f:goto L4d626f;
case 0x4d6271:c.instructions+=2;goto B4d6271;
case 0x4d6279:c.instructions+=1;goto B4d6279;
case 0x4d627e:goto L4d627e;
case 0x4d6282:c.instructions+=4;goto B4d6282;
case 0x4d6283:c.instructions+=3;goto B4d6283;
case 0x4d628a:c.instructions+=2;goto B4d628a;
case 0x4d628d:c.instructions+=1;goto B4d628d;
case 0x4d6290:goto L4d6290;
case 0x4d6294:c.instructions+=5;goto B4d6294;
case 0x4d6295:c.instructions+=4;goto B4d6295;
case 0x4d6297:c.instructions+=3;goto B4d6297;
case 0x4d629a:c.instructions+=2;goto B4d629a;
case 0x4d629c:c.instructions+=1;goto B4d629c;
case 0x4d629e:goto L4d629e;
case 0x4d62a3:c.instructions+=1;goto B4d62a3;
case 0x4d62a5:goto L4d62a5;
case 0x4d62a7:goto L4d62a7;
case 0x4d62ac:c.instructions+=1;goto B4d62ac;
case 0x4d62ae:goto L4d62ae;
case 0x4d62b3:c.instructions+=1;goto B4d62b3;
case 0x4d62b5:goto L4d62b5;
case 0x4d62b6:c.instructions+=1;goto B4d62b6;
case 0x4d62b9:goto L4d62b9;
case 0x4d62be:c.instructions+=1;goto B4d62be;
case 0x4d62c4:goto L4d62c4;
case 0x4d62c9:c.instructions+=1;goto B4d62c9;
case 0x4d62cf:goto L4d62cf;
case 0x4d62d5:goto L4d62d5;
case 0x4d62da:c.instructions+=1;goto B4d62da;
case 0x4d62e0:goto L4d62e0;
case 0x4d62e2:goto L4d62e2;
case 0x4d62e7:c.instructions+=1;goto B4d62e7;
case 0x4d62ed:goto L4d62ed;
case 0x4d62f2:c.instructions+=1;goto B4d62f2;
case 0x4d62f8:goto L4d62f8;
case 0x4d62fb:c.instructions+=5;goto B4d62fb;
case 0x4d62fd:c.instructions+=4;goto B4d62fd;
case 0x4d6302:c.instructions+=3;goto B4d6302;
case 0x4d6307:c.instructions+=2;goto B4d6307;
case 0x4d6308:c.instructions+=1;goto B4d6308;
case 0x4d630d:goto L4d630d;
case 0x4d6310:c.instructions+=2;goto B4d6310;
case 0x4d6311:c.instructions+=1;goto B4d6311;
case 0x4d6314:goto L4d6314;
case 0x4d6316:c.instructions+=4;goto B4d6316;
case 0x4d631b:c.instructions+=3;goto B4d631b;
case 0x4d6320:c.instructions+=2;goto B4d6320;
case 0x4d6325:c.instructions+=1;goto B4d6325;
case 0x4d632a:goto L4d632a;
case 0x4d632c:c.instructions+=4;goto B4d632c;
case 0x4d6331:c.instructions+=3;goto B4d6331;
case 0x4d6336:c.instructions+=2;goto B4d6336;
case 0x4d633b:c.instructions+=1;goto B4d633b;
case 0x4d6340:goto L4d6340;
case 0x4d6342:c.instructions+=4;goto B4d6342;
case 0x4d6347:c.instructions+=3;goto B4d6347;
case 0x4d634c:c.instructions+=2;goto B4d634c;
case 0x4d6351:c.instructions+=1;goto B4d6351;
case 0x4d6356:goto L4d6356;
case 0x4d635b:c.instructions+=2;goto B4d635b;
case 0x4d6360:c.instructions+=1;goto B4d6360;
case 0x4d6365:goto L4d6365;
case 0x4d6368:c.instructions+=2;goto B4d6368;
case 0x4d636a:c.instructions+=1;goto B4d636a;
case 0x4d6370:goto L4d6370;
case 0x4d6372:c.instructions+=4;goto B4d6372;
case 0x4d6377:c.instructions+=3;goto B4d6377;
case 0x4d637c:c.instructions+=2;goto B4d637c;
case 0x4d6381:c.instructions+=1;goto B4d6381;
case 0x4d6386:goto L4d6386;
case 0x4d6389:c.instructions+=2;goto B4d6389;
case 0x4d638a:c.instructions+=1;goto B4d638a;
case 0x4d638d:goto L4d638d;
case 0x4d6392:c.instructions+=1;goto B4d6392;
case 0x4d6394:goto L4d6394;
case 0x4d6399:c.instructions+=1;goto B4d6399;
case 0x4d639f:goto L4d639f;
case 0x4d63a1:c.instructions+=2;goto B4d63a1;
case 0x4d63a3:c.instructions+=1;goto B4d63a3;
case 0x4d63a8:goto L4d63a8;
case 0x4d63a9:c.instructions+=1;goto B4d63a9;
case 0x4d63ac:goto L4d63ac;
case 0x4d63ae:c.instructions+=1;goto B4d63ae;
case 0x4d63b4:goto L4d63b4;
case 0x4d63b6:c.instructions+=1;goto B4d63b6;
case 0x4d63bb:goto L4d63bb;
case 0x4d63bf:c.instructions+=2;goto B4d63bf;
case 0x4d63c0:c.instructions+=1;goto B4d63c0;
case 0x4d63c3:goto L4d63c3;
case 0x4d63c6:c.instructions+=6;goto B4d63c6;
case 0x4d63c8:c.instructions+=5;goto B4d63c8;
case 0x4d63cd:c.instructions+=4;goto B4d63cd;
case 0x4d63d2:c.instructions+=3;goto B4d63d2;
case 0x4d63d3:c.instructions+=2;goto B4d63d3;
case 0x4d63d7:c.instructions+=1;goto B4d63d7;
case 0x4d63dc:goto L4d63dc;
case 0x4d63df:c.instructions+=2;goto B4d63df;
case 0x4d63e0:c.instructions+=1;goto B4d63e0;
case 0x4d63e3:goto L4d63e3;
case 0x4d63e8:c.instructions+=1;goto B4d63e8;
case 0x4d63ee:goto L4d63ee;
case 0x4d63f0:goto L4d63f0;
case 0x4d63f5:c.instructions+=1;goto B4d63f5;
case 0x4d63f7:goto L4d63f7;
case 0x4d63fc:c.instructions+=1;goto B4d63fc;
case 0x4d6402:goto L4d6402;
case 0x4d6404:c.instructions+=1;goto B4d6404;
case 0x4d6409:goto L4d6409;
case 0x4d640a:c.instructions+=1;goto B4d640a;
case 0x4d640d:goto L4d640d;
case 0x4d640f:c.instructions+=2;goto B4d640f;
case 0x4d6411:c.instructions+=1;goto B4d6411;
case 0x4d6416:goto L4d6416;
case 0x4d6417:c.instructions+=1;goto B4d6417;
case 0x4d641a:goto L4d641a;
case 0x4d641f:goto L4d641f;
case 0x4d6421:c.instructions+=1;goto B4d6421;
case 0x4d6426:goto L4d6426;
case 0x4d642c:c.instructions+=2;goto B4d642c;
case 0x4d642e:c.instructions+=1;goto B4d642e;
case 0x4d6430:goto L4d6430;
case 0x4d6433:c.instructions+=2;goto B4d6433;
case 0x4d6434:c.instructions+=1;goto B4d6434;
case 0x4d6439:goto L4d6439;
case 0x4d643e:c.instructions+=3;goto B4d643e;
case 0x4d6443:c.instructions+=2;goto B4d6443;
case 0x4d644a:c.instructions+=1;goto B4d644a;
case 0x4d644f:goto L4d644f;
case 0x4d6452:c.instructions+=5;goto B4d6452;
case 0x4d6454:c.instructions+=4;goto B4d6454;
case 0x4d6456:c.instructions+=3;goto B4d6456;
case 0x4d645b:c.instructions+=2;goto B4d645b;
case 0x4d6460:c.instructions+=1;goto B4d6460;
case 0x4d6462:goto L4d6462;
case 0x4d6467:c.instructions+=1;goto B4d6467;
case 0x4d646c:goto L4d646c;
case 0x4d6471:c.instructions+=2;goto B4d6471;
case 0x4d6476:c.instructions+=1;goto B4d6476;
case 0x4d647b:goto L4d647b;
case 0x4d647e:c.instructions+=2;goto B4d647e;
case 0x4d647f:c.instructions+=1;goto B4d647f;
case 0x4d6482:goto L4d6482;
case 0x4d6487:c.instructions+=1;goto B4d6487;
case 0x4d648c:goto L4d648c;
case 0x4d648f:c.instructions+=2;goto B4d648f;
case 0x4d6490:c.instructions+=1;goto B4d6490;
case 0x4d6493:goto L4d6493;
case 0x4d6498:c.instructions+=1;goto B4d6498;
case 0x4d649a:goto L4d649a;
case 0x4d64a1:goto L4d64a1;
case 0x4d64a2:c.instructions+=1;goto B4d64a2;
case 0x4d64b0:goto L4d64b0;
case 0x4d64b3:c.instructions+=9;goto B4d64b3;
case 0x4d64b4:c.instructions+=8;goto B4d64b4;
case 0x4d64b5:c.instructions+=7;goto B4d64b5;
case 0x4d64b7:c.instructions+=6;goto B4d64b7;
case 0x4d64b8:c.instructions+=5;goto B4d64b8;
case 0x4d64bb:c.instructions+=4;goto B4d64bb;
case 0x4d64c3:c.instructions+=3;goto B4d64c3;
case 0x4d64cb:c.instructions+=2;goto B4d64cb;
case 0x4d64cc:c.instructions+=1;goto B4d64cc;
case 0x4d64d0:goto L4d64d0;
case 0x4d64d2:c.instructions+=1;goto B4d64d2;
case 0x4d64d7:goto L4d64d7;
case 0x4d64d9:c.instructions+=3;goto B4d64d9;
case 0x4d64dc:c.instructions+=2;goto B4d64dc;
case 0x4d64de:c.instructions+=1;goto B4d64de;
case 0x4d64e0:goto L4d64e0;
case 0x4d64e3:c.instructions+=12;goto B4d64e3;
case 0x4d64e9:c.instructions+=11;goto B4d64e9;
case 0x4d64eb:c.instructions+=10;goto B4d64eb;
case 0x4d64ee:c.instructions+=9;goto B4d64ee;
case 0x4d64f1:c.instructions+=8;goto B4d64f1;
case 0x4d64f4:c.instructions+=7;goto B4d64f4;
case 0x4d64f7:c.instructions+=6;goto B4d64f7;
case 0x4d64fa:c.instructions+=5;goto B4d64fa;
case 0x4d64fd:c.instructions+=4;goto B4d64fd;
case 0x4d6501:c.instructions+=3;goto B4d6501;
case 0x4d6508:c.instructions+=2;goto B4d6508;
case 0x4d650f:c.instructions+=1;goto B4d650f;
case 0x4d6511:goto L4d6511;
case 0x4d6515:c.instructions+=6;goto B4d6515;
case 0x4d6516:c.instructions+=5;goto B4d6516;
case 0x4d651b:c.instructions+=4;goto B4d651b;
case 0x4d651f:c.instructions+=3;goto B4d651f;
case 0x4d6521:c.instructions+=2;goto B4d6521;
case 0x4d6522:c.instructions+=1;goto B4d6522;
case 0x4d6527:goto L4d6527;
case 0x4d652a:c.instructions+=3;goto B4d652a;
case 0x4d652e:c.instructions+=2;goto B4d652e;
case 0x4d652f:c.instructions+=1;goto B4d652f;
case 0x4d6534:goto L4d6534;
case 0x4d6535:c.instructions+=2;goto B4d6535;
case 0x4d6536:c.instructions+=1;goto B4d6536;
case 0x4d653b:goto L4d653b;
case 0x4d653d:c.instructions+=2;goto B4d653d;
case 0x4d653f:c.instructions+=1;goto B4d653f;
case 0x4d6544:goto L4d6544;
case 0x4d6547:c.instructions+=2;goto B4d6547;
case 0x4d6549:c.instructions+=1;goto B4d6549;
case 0x4d654b:goto L4d654b;
case 0x4d6551:c.instructions+=3;goto B4d6551;
case 0x4d6554:c.instructions+=2;goto B4d6554;
case 0x4d6557:c.instructions+=1;goto B4d6557;
case 0x4d6559:goto L4d6559;
case 0x4d655b:goto L4d655b;
case 0x4d655e:c.instructions+=12;goto B4d655e;
case 0x4d6561:c.instructions+=11;goto B4d6561;
case 0x4d6563:c.instructions+=10;goto B4d6563;
case 0x4d6566:c.instructions+=9;goto B4d6566;
case 0x4d6568:c.instructions+=8;goto B4d6568;
case 0x4d656b:c.instructions+=7;goto B4d656b;
case 0x4d656f:c.instructions+=6;goto B4d656f;
case 0x4d6570:c.instructions+=5;goto B4d6570;
case 0x4d6575:c.instructions+=4;goto B4d6575;
case 0x4d6579:c.instructions+=3;goto B4d6579;
case 0x4d657b:c.instructions+=2;goto B4d657b;
case 0x4d657c:c.instructions+=1;goto B4d657c;
case 0x4d6581:goto L4d6581;
case 0x4d6584:c.instructions+=3;goto B4d6584;
case 0x4d6588:c.instructions+=2;goto B4d6588;
case 0x4d6589:c.instructions+=1;goto B4d6589;
case 0x4d658e:goto L4d658e;
case 0x4d658f:c.instructions+=2;goto B4d658f;
case 0x4d6590:c.instructions+=1;goto B4d6590;
case 0x4d6595:goto L4d6595;
case 0x4d6598:c.instructions+=4;goto B4d6598;
case 0x4d6599:c.instructions+=3;goto B4d6599;
case 0x4d659b:c.instructions+=2;goto B4d659b;
case 0x4d659e:c.instructions+=1;goto B4d659e;
case 0x4d65a3:goto L4d65a3;
case 0x4d65a7:c.instructions+=6;goto B4d65a7;
case 0x4d65ab:c.instructions+=5;goto B4d65ab;
case 0x4d65ac:c.instructions+=4;goto B4d65ac;
case 0x4d65ad:c.instructions+=3;goto B4d65ad;
case 0x4d65b1:c.instructions+=2;goto B4d65b1;
case 0x4d65b5:c.instructions+=1;goto B4d65b5;
case 0x4d65bb:goto L4d65bb;
case 0x4d65bd:c.instructions+=1;goto B4d65bd;
case 0x4d65c2:goto L4d65c2;
case 0x4d65c5:c.instructions+=2;goto B4d65c5;
case 0x4d65c7:c.instructions+=1;goto B4d65c7;
case 0x4d65c9:goto L4d65c9;
case 0x4d65cc:c.instructions+=6;goto B4d65cc;
case 0x4d65d2:c.instructions+=5;goto B4d65d2;
case 0x4d65d4:c.instructions+=4;goto B4d65d4;
case 0x4d65d7:c.instructions+=3;goto B4d65d7;
case 0x4d65db:c.instructions+=2;goto B4d65db;
case 0x4d65dd:c.instructions+=1;goto B4d65dd;
case 0x4d65df:goto L4d65df;
case 0x4d65e1:goto L4d65e1;
case 0x4d65e3:c.instructions+=3;goto B4d65e3;
case 0x4d65e5:c.instructions+=2;goto B4d65e5;
case 0x4d65ea:c.instructions+=1;goto B4d65ea;
case 0x4d65ef:goto L4d65ef;
case 0x4d65f2:c.instructions+=3;goto B4d65f2;
case 0x4d65f3:c.instructions+=2;goto B4d65f3;
case 0x4d65f5:c.instructions+=1;goto B4d65f5;
case 0x4d65fa:goto L4d65fa;
case 0x4d65fd:c.instructions+=2;goto B4d65fd;
case 0x4d6602:c.instructions+=1;goto B4d6602;
case 0x4d6607:goto L4d6607;
case 0x4d660a:c.instructions+=3;goto B4d660a;
case 0x4d660b:c.instructions+=2;goto B4d660b;
case 0x4d6610:c.instructions+=1;goto B4d6610;
case 0x4d6615:goto L4d6615;
case 0x4d6618:c.instructions+=3;goto B4d6618;
case 0x4d6619:c.instructions+=2;goto B4d6619;
case 0x4d661a:c.instructions+=1;goto B4d661a;
case 0x4d661f:goto L4d661f;
case 0x4d6622:c.instructions+=3;goto B4d6622;
case 0x4d6623:c.instructions+=2;goto B4d6623;
case 0x4d6625:c.instructions+=1;goto B4d6625;
case 0x4d662a:goto L4d662a;
case 0x4d662b:c.instructions+=2;goto B4d662b;
case 0x4d662d:c.instructions+=1;goto B4d662d;
case 0x4d6632:goto L4d6632;
case 0x4d6634:c.instructions+=1;goto B4d6634;
case 0x4d6639:goto L4d6639;
case 0x4d663c:c.instructions+=2;goto B4d663c;
case 0x4d663e:c.instructions+=1;goto B4d663e;
case 0x4d6640:goto L4d6640;
case 0x4d6643:c.instructions+=6;goto B4d6643;
case 0x4d6649:c.instructions+=5;goto B4d6649;
case 0x4d664b:c.instructions+=4;goto B4d664b;
case 0x4d664e:c.instructions+=3;goto B4d664e;
case 0x4d6652:c.instructions+=2;goto B4d6652;
case 0x4d6654:c.instructions+=1;goto B4d6654;
case 0x4d6656:goto L4d6656;
case 0x4d6658:goto L4d6658;
case 0x4d665a:c.instructions+=3;goto B4d665a;
case 0x4d665c:c.instructions+=2;goto B4d665c;
case 0x4d6661:c.instructions+=1;goto B4d6661;
case 0x4d6666:goto L4d6666;
case 0x4d6669:c.instructions+=3;goto B4d6669;
case 0x4d666a:c.instructions+=2;goto B4d666a;
case 0x4d666c:c.instructions+=1;goto B4d666c;
case 0x4d6671:goto L4d6671;
case 0x4d6674:c.instructions+=2;goto B4d6674;
case 0x4d6679:c.instructions+=1;goto B4d6679;
case 0x4d667e:goto L4d667e;
case 0x4d6681:c.instructions+=3;goto B4d6681;
case 0x4d6682:c.instructions+=2;goto B4d6682;
case 0x4d6687:c.instructions+=1;goto B4d6687;
case 0x4d668c:goto L4d668c;
case 0x4d668f:c.instructions+=3;goto B4d668f;
case 0x4d6690:c.instructions+=2;goto B4d6690;
case 0x4d6691:c.instructions+=1;goto B4d6691;
case 0x4d6696:goto L4d6696;
case 0x4d6699:c.instructions+=3;goto B4d6699;
case 0x4d669a:c.instructions+=2;goto B4d669a;
case 0x4d669c:c.instructions+=1;goto B4d669c;
case 0x4d66a1:goto L4d66a1;
case 0x4d66a2:c.instructions+=2;goto B4d66a2;
case 0x4d66a4:c.instructions+=1;goto B4d66a4;
case 0x4d66a9:goto L4d66a9;
case 0x4d66ab:c.instructions+=1;goto B4d66ab;
case 0x4d66b0:goto L4d66b0;
case 0x4d66b3:c.instructions+=2;goto B4d66b3;
case 0x4d66b5:c.instructions+=1;goto B4d66b5;
case 0x4d66b7:goto L4d66b7;
case 0x4d66ba:c.instructions+=6;goto B4d66ba;
case 0x4d66c0:c.instructions+=5;goto B4d66c0;
case 0x4d66c2:c.instructions+=4;goto B4d66c2;
case 0x4d66c5:c.instructions+=3;goto B4d66c5;
case 0x4d66c9:c.instructions+=2;goto B4d66c9;
case 0x4d66cb:c.instructions+=1;goto B4d66cb;
case 0x4d66cd:goto L4d66cd;
case 0x4d66cf:goto L4d66cf;
case 0x4d66d1:c.instructions+=3;goto B4d66d1;
case 0x4d66d3:c.instructions+=2;goto B4d66d3;
case 0x4d66d8:c.instructions+=1;goto B4d66d8;
case 0x4d66dd:goto L4d66dd;
case 0x4d66e0:c.instructions+=3;goto B4d66e0;
case 0x4d66e1:c.instructions+=2;goto B4d66e1;
case 0x4d66e3:c.instructions+=1;goto B4d66e3;
case 0x4d66e8:goto L4d66e8;
case 0x4d66eb:c.instructions+=2;goto B4d66eb;
case 0x4d66f0:c.instructions+=1;goto B4d66f0;
case 0x4d66f5:goto L4d66f5;
case 0x4d66f8:c.instructions+=3;goto B4d66f8;
case 0x4d66f9:c.instructions+=2;goto B4d66f9;
case 0x4d66fe:c.instructions+=1;goto B4d66fe;
case 0x4d6703:goto L4d6703;
case 0x4d6706:c.instructions+=3;goto B4d6706;
case 0x4d6707:c.instructions+=2;goto B4d6707;
case 0x4d6708:c.instructions+=1;goto B4d6708;
case 0x4d670d:goto L4d670d;
case 0x4d6710:c.instructions+=3;goto B4d6710;
case 0x4d6711:c.instructions+=2;goto B4d6711;
case 0x4d6713:c.instructions+=1;goto B4d6713;
case 0x4d6718:goto L4d6718;
case 0x4d6719:c.instructions+=2;goto B4d6719;
case 0x4d671b:c.instructions+=1;goto B4d671b;
case 0x4d6720:goto L4d6720;
case 0x4d6722:c.instructions+=1;goto B4d6722;
case 0x4d6727:goto L4d6727;
case 0x4d672a:c.instructions+=2;goto B4d672a;
case 0x4d672c:c.instructions+=1;goto B4d672c;
case 0x4d672e:goto L4d672e;
case 0x4d6731:c.instructions+=6;goto B4d6731;
case 0x4d6737:c.instructions+=5;goto B4d6737;
case 0x4d6739:c.instructions+=4;goto B4d6739;
case 0x4d673c:c.instructions+=3;goto B4d673c;
case 0x4d6740:c.instructions+=2;goto B4d6740;
case 0x4d6742:c.instructions+=1;goto B4d6742;
case 0x4d6744:goto L4d6744;
case 0x4d6746:goto L4d6746;
case 0x4d6748:c.instructions+=3;goto B4d6748;
case 0x4d674a:c.instructions+=2;goto B4d674a;
case 0x4d674f:c.instructions+=1;goto B4d674f;
case 0x4d6754:goto L4d6754;
case 0x4d6757:c.instructions+=3;goto B4d6757;
case 0x4d6758:c.instructions+=2;goto B4d6758;
case 0x4d675a:c.instructions+=1;goto B4d675a;
case 0x4d675f:goto L4d675f;
case 0x4d6762:c.instructions+=2;goto B4d6762;
case 0x4d6767:c.instructions+=1;goto B4d6767;
case 0x4d676c:goto L4d676c;
case 0x4d676f:c.instructions+=3;goto B4d676f;
case 0x4d6770:c.instructions+=2;goto B4d6770;
case 0x4d6775:c.instructions+=1;goto B4d6775;
case 0x4d677a:goto L4d677a;
case 0x4d677d:c.instructions+=3;goto B4d677d;
case 0x4d677e:c.instructions+=2;goto B4d677e;
case 0x4d677f:c.instructions+=1;goto B4d677f;
case 0x4d6784:goto L4d6784;
case 0x4d6787:c.instructions+=3;goto B4d6787;
case 0x4d6788:c.instructions+=2;goto B4d6788;
case 0x4d678a:c.instructions+=1;goto B4d678a;
case 0x4d678f:goto L4d678f;
case 0x4d6790:c.instructions+=2;goto B4d6790;
case 0x4d6792:c.instructions+=1;goto B4d6792;
case 0x4d6797:goto L4d6797;
case 0x4d6799:c.instructions+=1;goto B4d6799;
case 0x4d679e:goto L4d679e;
case 0x4d67a1:c.instructions+=2;goto B4d67a1;
case 0x4d67a3:c.instructions+=1;goto B4d67a3;
case 0x4d67a5:goto L4d67a5;
case 0x4d67a8:c.instructions+=6;goto B4d67a8;
case 0x4d67ae:c.instructions+=5;goto B4d67ae;
case 0x4d67b0:c.instructions+=4;goto B4d67b0;
case 0x4d67b3:c.instructions+=3;goto B4d67b3;
case 0x4d67b7:c.instructions+=2;goto B4d67b7;
case 0x4d67b9:c.instructions+=1;goto B4d67b9;
case 0x4d67bb:goto L4d67bb;
case 0x4d67bd:goto L4d67bd;
case 0x4d67bf:c.instructions+=3;goto B4d67bf;
case 0x4d67c1:c.instructions+=2;goto B4d67c1;
case 0x4d67c6:c.instructions+=1;goto B4d67c6;
case 0x4d67cb:goto L4d67cb;
case 0x4d67ce:c.instructions+=3;goto B4d67ce;
case 0x4d67cf:c.instructions+=2;goto B4d67cf;
case 0x4d67d1:c.instructions+=1;goto B4d67d1;
case 0x4d67d6:goto L4d67d6;
case 0x4d67d9:c.instructions+=2;goto B4d67d9;
case 0x4d67de:c.instructions+=1;goto B4d67de;
case 0x4d67e3:goto L4d67e3;
case 0x4d67e6:c.instructions+=4;goto B4d67e6;
case 0x4d67e7:c.instructions+=3;goto B4d67e7;
case 0x4d67ec:c.instructions+=2;goto B4d67ec;
case 0x4d67f1:c.instructions+=1;goto B4d67f1;
case 0x4d67f6:goto L4d67f6;
case 0x4d67f9:c.instructions+=3;goto B4d67f9;
case 0x4d67fa:c.instructions+=2;goto B4d67fa;
case 0x4d67fb:c.instructions+=1;goto B4d67fb;
case 0x4d6800:goto L4d6800;
case 0x4d6803:c.instructions+=3;goto B4d6803;
case 0x4d6804:c.instructions+=2;goto B4d6804;
case 0x4d6806:c.instructions+=1;goto B4d6806;
case 0x4d680b:goto L4d680b;
case 0x4d680c:c.instructions+=2;goto B4d680c;
case 0x4d680e:c.instructions+=1;goto B4d680e;
case 0x4d6813:goto L4d6813;
case 0x4d6815:c.instructions+=1;goto B4d6815;
case 0x4d681a:goto L4d681a;
case 0x4d681d:c.instructions+=2;goto B4d681d;
case 0x4d681f:c.instructions+=1;goto B4d681f;
case 0x4d6821:goto L4d6821;
case 0x4d6824:c.instructions+=6;goto B4d6824;
case 0x4d682a:c.instructions+=5;goto B4d682a;
case 0x4d682c:c.instructions+=4;goto B4d682c;
case 0x4d682f:c.instructions+=3;goto B4d682f;
case 0x4d6833:c.instructions+=2;goto B4d6833;
case 0x4d6835:c.instructions+=1;goto B4d6835;
case 0x4d6837:goto L4d6837;
case 0x4d6839:goto L4d6839;
case 0x4d683b:c.instructions+=3;goto B4d683b;
case 0x4d683d:c.instructions+=2;goto B4d683d;
case 0x4d6842:c.instructions+=1;goto B4d6842;
case 0x4d6847:goto L4d6847;
case 0x4d684a:c.instructions+=3;goto B4d684a;
case 0x4d684b:c.instructions+=2;goto B4d684b;
case 0x4d684d:c.instructions+=1;goto B4d684d;
case 0x4d6852:goto L4d6852;
case 0x4d6855:c.instructions+=2;goto B4d6855;
case 0x4d685a:c.instructions+=1;goto B4d685a;
case 0x4d685f:goto L4d685f;
case 0x4d6862:c.instructions+=3;goto B4d6862;
case 0x4d6863:c.instructions+=2;goto B4d6863;
case 0x4d6868:c.instructions+=1;goto B4d6868;
case 0x4d686d:goto L4d686d;
case 0x4d6870:c.instructions+=3;goto B4d6870;
case 0x4d6871:c.instructions+=2;goto B4d6871;
case 0x4d6872:c.instructions+=1;goto B4d6872;
case 0x4d6877:goto L4d6877;
case 0x4d687a:c.instructions+=3;goto B4d687a;
case 0x4d687b:c.instructions+=2;goto B4d687b;
case 0x4d687d:c.instructions+=1;goto B4d687d;
case 0x4d6882:goto L4d6882;
case 0x4d6883:c.instructions+=2;goto B4d6883;
case 0x4d6885:c.instructions+=1;goto B4d6885;
case 0x4d688a:goto L4d688a;
case 0x4d688c:c.instructions+=1;goto B4d688c;
case 0x4d6891:goto L4d6891;
case 0x4d6894:c.instructions+=2;goto B4d6894;
case 0x4d6896:c.instructions+=1;goto B4d6896;
case 0x4d6898:goto L4d6898;
case 0x4d689b:c.instructions+=6;goto B4d689b;
case 0x4d68a1:c.instructions+=5;goto B4d68a1;
case 0x4d68a3:c.instructions+=4;goto B4d68a3;
case 0x4d68a6:c.instructions+=3;goto B4d68a6;
case 0x4d68aa:c.instructions+=2;goto B4d68aa;
case 0x4d68ac:c.instructions+=1;goto B4d68ac;
case 0x4d68ae:goto L4d68ae;
case 0x4d68b0:goto L4d68b0;
case 0x4d68b2:c.instructions+=3;goto B4d68b2;
case 0x4d68b4:c.instructions+=2;goto B4d68b4;
case 0x4d68b9:c.instructions+=1;goto B4d68b9;
case 0x4d68be:goto L4d68be;
case 0x4d68c1:c.instructions+=3;goto B4d68c1;
case 0x4d68c2:c.instructions+=2;goto B4d68c2;
case 0x4d68c4:c.instructions+=1;goto B4d68c4;
case 0x4d68c9:goto L4d68c9;
case 0x4d68cc:c.instructions+=2;goto B4d68cc;
case 0x4d68d1:c.instructions+=1;goto B4d68d1;
case 0x4d68d6:goto L4d68d6;
case 0x4d68d9:c.instructions+=3;goto B4d68d9;
case 0x4d68da:c.instructions+=2;goto B4d68da;
case 0x4d68df:c.instructions+=1;goto B4d68df;
case 0x4d68e4:goto L4d68e4;
case 0x4d68e7:c.instructions+=3;goto B4d68e7;
case 0x4d68e8:c.instructions+=2;goto B4d68e8;
case 0x4d68e9:c.instructions+=1;goto B4d68e9;
case 0x4d68ee:goto L4d68ee;
case 0x4d68f1:c.instructions+=3;goto B4d68f1;
case 0x4d68f2:c.instructions+=2;goto B4d68f2;
case 0x4d68f4:c.instructions+=1;goto B4d68f4;
case 0x4d68f9:goto L4d68f9;
case 0x4d68fa:c.instructions+=2;goto B4d68fa;
case 0x4d68fc:c.instructions+=1;goto B4d68fc;
case 0x4d6901:goto L4d6901;
case 0x4d6904:c.instructions+=4;goto B4d6904;
case 0x4d6906:c.instructions+=3;goto B4d6906;
case 0x4d6907:c.instructions+=2;goto B4d6907;
case 0x4d6908:c.instructions+=1;goto B4d6908;
case 0x4d690a:goto L4d690a;
case 0x4d690d:c.instructions+=3;goto B4d690d;
case 0x4d6912:c.instructions+=2;goto B4d6912;
case 0x4d6913:c.instructions+=1;goto B4d6913;
case 0x4d6918:goto L4d6918;
case 0x4d691a:c.instructions+=2;goto B4d691a;
case 0x4d691c:c.instructions+=1;goto B4d691c;
case 0x4d6921:goto L4d6921;
case 0x4d6923:c.instructions+=4;goto B4d6923;
case 0x4d6925:c.instructions+=3;goto B4d6925;
case 0x4d6927:c.instructions+=2;goto B4d6927;
case 0x4d692d:c.instructions+=1;goto B4d692d;
case 0x4d6932:goto L4d6932;
case 0x4d6933:c.instructions+=3;goto B4d6933;
case 0x4d6934:c.instructions+=2;goto B4d6934;
case 0x4d6937:c.instructions+=1;goto B4d6937;
case 0x4d6940:goto L4d6940;
case 0x4d6942:c.instructions+=7;goto B4d6942;
case 0x4d6947:c.instructions+=6;goto B4d6947;
case 0x4d694d:c.instructions+=5;goto B4d694d;
case 0x4d694e:c.instructions+=4;goto B4d694e;
case 0x4d6955:c.instructions+=3;goto B4d6955;
case 0x4d6956:c.instructions+=2;goto B4d6956;
case 0x4d695b:c.instructions+=1;goto B4d695b;
case 0x4d6960:goto L4d6960;
case 0x4d6963:c.instructions+=4;goto B4d6963;
case 0x4d6967:c.instructions+=3;goto B4d6967;
case 0x4d6969:c.instructions+=2;goto B4d6969;
case 0x4d6971:c.instructions+=1;goto B4d6971;
case 0x4d6973:goto L4d6973;
case 0x4d6977:c.instructions+=3;goto B4d6977;
case 0x4d6978:c.instructions+=2;goto B4d6978;
case 0x4d697a:c.instructions+=1;goto B4d697a;
case 0x4d697f:goto L4d697f;
case 0x4d6983:c.instructions+=3;goto B4d6983;
case 0x4d698a:c.instructions+=2;goto B4d698a;
case 0x4d698d:c.instructions+=1;goto B4d698d;
case 0x4d698e:goto L4d698e;
case 0x4d6992:c.instructions+=4;goto B4d6992;
case 0x4d6994:c.instructions+=3;goto B4d6994;
case 0x4d699b:c.instructions+=2;goto B4d699b;
case 0x4d699e:c.instructions+=1;goto B4d699e;
case 0x4d69a0:goto L4d69a0;
case 0x4d69a1:c.instructions+=2;goto B4d69a1;
case 0x4d69a3:c.instructions+=1;goto B4d69a3;
case 0x4d69a8:goto L4d69a8;
case 0x4d69ad:c.instructions+=1;goto B4d69ad;
case 0x4d69af:goto L4d69af;
case 0x4d69b0:c.instructions+=1;goto B4d69b0;
case 0x4d69b5:goto L4d69b5;
case 0x4d69b8:goto L4d69b8;
case 0x4d69ba:c.instructions+=2;goto B4d69ba;
case 0x4d69bb:c.instructions+=1;goto B4d69bb;
case 0x4d69c0:goto L4d69c0;
case 0x4d69c2:c.instructions+=13;goto B4d69c2;
case 0x4d69c7:c.instructions+=12;goto B4d69c7;
case 0x4d69cd:c.instructions+=11;goto B4d69cd;
case 0x4d69ce:c.instructions+=10;goto B4d69ce;
case 0x4d69d5:c.instructions+=9;goto B4d69d5;
case 0x4d69d6:c.instructions+=8;goto B4d69d6;
case 0x4d69da:c.instructions+=7;goto B4d69da;
case 0x4d69db:c.instructions+=6;goto B4d69db;
case 0x4d69dc:c.instructions+=5;goto B4d69dc;
case 0x4d69dd:c.instructions+=4;goto B4d69dd;
case 0x4d69df:c.instructions+=3;goto B4d69df;
case 0x4d69e0:c.instructions+=2;goto B4d69e0;
case 0x4d69e4:c.instructions+=1;goto B4d69e4;
case 0x4d69e9:goto L4d69e9;
case 0x4d69eb:c.instructions+=5;goto B4d69eb;
case 0x4d69ee:c.instructions+=4;goto B4d69ee;
case 0x4d69f2:c.instructions+=3;goto B4d69f2;
case 0x4d69f8:c.instructions+=2;goto B4d69f8;
case 0x4d69fb:c.instructions+=1;goto B4d69fb;
case 0x4d6a00:goto L4d6a00;
case 0x4d6a06:c.instructions+=3;goto B4d6a06;
case 0x4d6a0b:c.instructions+=2;goto B4d6a0b;
case 0x4d6a11:c.instructions+=1;goto B4d6a11;
case 0x4d6a16:goto L4d6a16;
case 0x4d6a20:c.instructions+=7;goto B4d6a20;
case 0x4d6a26:c.instructions+=6;goto B4d6a26;
case 0x4d6a2c:c.instructions+=5;goto B4d6a2c;
case 0x4d6a32:c.instructions+=4;goto B4d6a32;
case 0x4d6a35:c.instructions+=3;goto B4d6a35;
case 0x4d6a3a:c.instructions+=2;goto B4d6a3a;
case 0x4d6a3f:c.instructions+=1;goto B4d6a3f;
case 0x4d6a44:goto L4d6a44;
case 0x4d6a45:c.instructions+=3;goto B4d6a45;
case 0x4d6a4a:c.instructions+=2;goto B4d6a4a;
case 0x4d6a4b:c.instructions+=1;goto B4d6a4b;
case 0x4d6a50:goto L4d6a50;
case 0x4d6a53:c.instructions+=5;goto B4d6a53;
case 0x4d6a56:c.instructions+=4;goto B4d6a56;
case 0x4d6a5b:c.instructions+=3;goto B4d6a5b;
case 0x4d6a60:c.instructions+=2;goto B4d6a60;
case 0x4d6a65:c.instructions+=1;goto B4d6a65;
case 0x4d6a6a:goto L4d6a6a;
case 0x4d6a6d:c.instructions+=3;goto B4d6a6d;
case 0x4d6a6e:c.instructions+=2;goto B4d6a6e;
case 0x4d6a6f:c.instructions+=1;goto B4d6a6f;
case 0x4d6a74:goto L4d6a74;
case 0x4d6a77:c.instructions+=2;goto B4d6a77;
case 0x4d6a79:c.instructions+=1;goto B4d6a79;
case 0x4d6a7e:goto L4d6a7e;
case 0x4d6a80:c.instructions+=1;goto B4d6a80;
case 0x4d6a82:goto L4d6a82;
case 0x4d6a85:c.instructions+=6;goto B4d6a85;
case 0x4d6a8a:c.instructions+=5;goto B4d6a8a;
case 0x4d6a8f:c.instructions+=4;goto B4d6a8f;
case 0x4d6a94:c.instructions+=3;goto B4d6a94;
case 0x4d6a99:c.instructions+=2;goto B4d6a99;
case 0x4d6a9a:c.instructions+=1;goto B4d6a9a;
case 0x4d6a9f:goto L4d6a9f;
case 0x4d6aa2:c.instructions+=1;goto B4d6aa2;
case 0x4d6aa5:goto L4d6aa5;
case 0x4d6aa7:c.instructions+=1;goto B4d6aa7;
case 0x4d6aac:goto L4d6aac;
case 0x4d6ab2:c.instructions+=2;goto B4d6ab2;
case 0x4d6ab5:c.instructions+=1;goto B4d6ab5;
case 0x4d6ab7:goto L4d6ab7;
case 0x4d6abd:c.instructions+=1;goto B4d6abd;
case 0x4d6abf:goto L4d6abf;
case 0x4d6ac4:goto L4d6ac4;
case 0x4d6aca:c.instructions+=2;goto B4d6aca;
case 0x4d6ad0:c.instructions+=1;goto B4d6ad0;
case 0x4d6ad5:goto L4d6ad5;
case 0x4d6ad8:c.instructions+=2;goto B4d6ad8;
case 0x4d6add:c.instructions+=1;goto B4d6add;
case 0x4d6ae2:goto L4d6ae2;
case 0x4d6ae3:c.instructions+=2;goto B4d6ae3;
case 0x4d6ae4:c.instructions+=1;goto B4d6ae4;
case 0x4d6ae9:goto L4d6ae9;
case 0x4d6aed:c.instructions+=9;goto B4d6aed;
case 0x4d6af0:c.instructions+=8;goto B4d6af0;
case 0x4d6af6:c.instructions+=7;goto B4d6af6;
case 0x4d6af7:c.instructions+=6;goto B4d6af7;
case 0x4d6af9:c.instructions+=5;goto B4d6af9;
case 0x4d6afa:c.instructions+=4;goto B4d6afa;
case 0x4d6afb:c.instructions+=3;goto B4d6afb;
case 0x4d6b02:c.instructions+=2;goto B4d6b02;
case 0x4d6b05:c.instructions+=1;goto B4d6b05;
case 0x4d6b10:goto L4d6b10;
case 0x4d6b12:c.instructions+=13;goto B4d6b12;
case 0x4d6b17:c.instructions+=12;goto B4d6b17;
case 0x4d6b1d:c.instructions+=11;goto B4d6b1d;
case 0x4d6b1e:c.instructions+=10;goto B4d6b1e;
case 0x4d6b25:c.instructions+=9;goto B4d6b25;
case 0x4d6b26:c.instructions+=8;goto B4d6b26;
case 0x4d6b27:c.instructions+=7;goto B4d6b27;
case 0x4d6b29:c.instructions+=6;goto B4d6b29;
case 0x4d6b2d:c.instructions+=5;goto B4d6b2d;
case 0x4d6b33:c.instructions+=4;goto B4d6b33;
case 0x4d6b36:c.instructions+=3;goto B4d6b36;
case 0x4d6b38:c.instructions+=2;goto B4d6b38;
case 0x4d6b40:c.instructions+=1;goto B4d6b40;
case 0x4d6b42:goto L4d6b42;
case 0x4d6b43:c.instructions+=1;goto B4d6b43;
case 0x4d6b48:goto L4d6b48;
case 0x4d6b4b:c.instructions+=1;goto B4d6b4b;
case 0x4d6b52:goto L4d6b52;
case 0x4d6b58:c.instructions+=2;goto B4d6b58;
case 0x4d6b5a:c.instructions+=1;goto B4d6b5a;
case 0x4d6b5c:goto L4d6b5c;
case 0x4d6b5d:c.instructions+=1;goto B4d6b5d;
case 0x4d6b62:goto L4d6b62;
case 0x4d6b64:c.instructions+=1;goto B4d6b64;
case 0x4d6b69:goto L4d6b69;
case 0x4d6b6f:c.instructions+=2;goto B4d6b6f;
case 0x4d6b71:c.instructions+=1;goto B4d6b71;
case 0x4d6b73:goto L4d6b73;
case 0x4d6b79:c.instructions+=1;goto B4d6b79;
case 0x4d6b7e:goto L4d6b7e;
case 0x4d6b84:c.instructions+=2;goto B4d6b84;
case 0x4d6b89:c.instructions+=1;goto B4d6b89;
case 0x4d6b8e:goto L4d6b8e;
case 0x4d6b90:c.instructions+=3;goto B4d6b90;
case 0x4d6b97:c.instructions+=2;goto B4d6b97;
case 0x4d6b9f:c.instructions+=1;goto B4d6b9f;
case 0x4d6ba4:goto L4d6ba4;
case 0x4d6ba8:c.instructions+=4;goto B4d6ba8;
case 0x4d6ba9:c.instructions+=3;goto B4d6ba9;
case 0x4d6bb0:c.instructions+=2;goto B4d6bb0;
case 0x4d6bb3:c.instructions+=1;goto B4d6bb3;
case 0x4d6bc0:goto L4d6bc0;
case 0x4d6bc2:c.instructions+=15;goto B4d6bc2;
case 0x4d6bc7:c.instructions+=14;goto B4d6bc7;
case 0x4d6bcd:c.instructions+=13;goto B4d6bcd;
case 0x4d6bce:c.instructions+=12;goto B4d6bce;
case 0x4d6bd5:c.instructions+=11;goto B4d6bd5;
case 0x4d6bd6:c.instructions+=10;goto B4d6bd6;
case 0x4d6bd7:c.instructions+=9;goto B4d6bd7;
case 0x4d6bd8:c.instructions+=8;goto B4d6bd8;
case 0x4d6bd9:c.instructions+=7;goto B4d6bd9;
case 0x4d6bdb:c.instructions+=6;goto B4d6bdb;
case 0x4d6bdf:c.instructions+=5;goto B4d6bdf;
case 0x4d6be5:c.instructions+=4;goto B4d6be5;
case 0x4d6be8:c.instructions+=3;goto B4d6be8;
case 0x4d6bea:c.instructions+=2;goto B4d6bea;
case 0x4d6bf2:c.instructions+=1;goto B4d6bf2;
case 0x4d6bf7:goto L4d6bf7;
case 0x4d6bfd:c.instructions+=2;goto B4d6bfd;
case 0x4d6bff:c.instructions+=1;goto B4d6bff;
case 0x4d6c01:goto L4d6c01;
case 0x4d6c02:c.instructions+=1;goto B4d6c02;
case 0x4d6c07:goto L4d6c07;
case 0x4d6c0a:goto L4d6c0a;
case 0x4d6c10:c.instructions+=2;goto B4d6c10;
case 0x4d6c12:c.instructions+=1;goto B4d6c12;
case 0x4d6c14:goto L4d6c14;
case 0x4d6c15:c.instructions+=1;goto B4d6c15;
case 0x4d6c1a:goto L4d6c1a;
case 0x4d6c1d:goto L4d6c1d;
case 0x4d6c22:c.instructions+=2;goto B4d6c22;
case 0x4d6c24:c.instructions+=1;goto B4d6c24;
case 0x4d6c26:goto L4d6c26;
case 0x4d6c2b:goto L4d6c2b;
case 0x4d6c31:c.instructions+=4;goto B4d6c31;
case 0x4d6c37:c.instructions+=3;goto B4d6c37;
case 0x4d6c39:c.instructions+=2;goto B4d6c39;
case 0x4d6c3e:c.instructions+=1;goto B4d6c3e;
case 0x4d6c40:goto L4d6c40;
case 0x4d6c42:c.instructions+=5;goto B4d6c42;
case 0x4d6c45:c.instructions+=4;goto B4d6c45;
case 0x4d6c47:c.instructions+=3;goto B4d6c47;
case 0x4d6c48:c.instructions+=2;goto B4d6c48;
case 0x4d6c4b:c.instructions+=1;goto B4d6c4b;
case 0x4d6c50:goto L4d6c50;
case 0x4d6c52:c.instructions+=3;goto B4d6c52;
case 0x4d6c55:c.instructions+=2;goto B4d6c55;
case 0x4d6c57:c.instructions+=1;goto B4d6c57;
case 0x4d6c59:goto L4d6c59;
case 0x4d6c5b:c.instructions+=2;goto B4d6c5b;
case 0x4d6c60:c.instructions+=1;goto B4d6c60;
case 0x4d6c65:goto L4d6c65;
case 0x4d6c67:c.instructions+=2;goto B4d6c67;
case 0x4d6c6f:c.instructions+=1;goto B4d6c6f;
case 0x4d6c74:goto L4d6c74;
case 0x4d6c78:c.instructions+=6;goto B4d6c78;
case 0x4d6c79:c.instructions+=5;goto B4d6c79;
case 0x4d6c7a:c.instructions+=4;goto B4d6c7a;
case 0x4d6c7b:c.instructions+=3;goto B4d6c7b;
case 0x4d6c82:c.instructions+=2;goto B4d6c82;
case 0x4d6c85:c.instructions+=1;goto B4d6c85;
case 0x4d6c90:goto L4d6c90;
case 0x4d6c92:c.instructions+=7;goto B4d6c92;
case 0x4d6c97:c.instructions+=6;goto B4d6c97;
case 0x4d6c9d:c.instructions+=5;goto B4d6c9d;
case 0x4d6c9e:c.instructions+=4;goto B4d6c9e;
case 0x4d6ca5:c.instructions+=3;goto B4d6ca5;
case 0x4d6ca6:c.instructions+=2;goto B4d6ca6;
case 0x4d6ca8:c.instructions+=1;goto B4d6ca8;
case 0x4d6cad:goto L4d6cad;
case 0x4d6cb0:c.instructions+=4;goto B4d6cb0;
case 0x4d6cb4:c.instructions+=3;goto B4d6cb4;
case 0x4d6cb6:c.instructions+=2;goto B4d6cb6;
case 0x4d6cbe:c.instructions+=1;goto B4d6cbe;
case 0x4d6cc0:goto L4d6cc0;
case 0x4d6cc4:c.instructions+=3;goto B4d6cc4;
case 0x4d6cc5:c.instructions+=2;goto B4d6cc5;
case 0x4d6cc7:c.instructions+=1;goto B4d6cc7;
case 0x4d6ccc:goto L4d6ccc;
case 0x4d6cd0:c.instructions+=3;goto B4d6cd0;
case 0x4d6cd7:c.instructions+=2;goto B4d6cd7;
case 0x4d6cda:c.instructions+=1;goto B4d6cda;
case 0x4d6cdb:goto L4d6cdb;
case 0x4d6cdf:c.instructions+=4;goto B4d6cdf;
case 0x4d6ce1:c.instructions+=3;goto B4d6ce1;
case 0x4d6ce8:c.instructions+=2;goto B4d6ce8;
case 0x4d6ceb:c.instructions+=1;goto B4d6ceb;
case 0x4d6cf0:goto L4d6cf0;
case 0x4d6cf1:c.instructions+=4;goto B4d6cf1;
case 0x4d6cf2:c.instructions+=3;goto B4d6cf2;
case 0x4d6cf4:c.instructions+=2;goto B4d6cf4;
case 0x4d6cf6:c.instructions+=1;goto B4d6cf6;
case 0x4d6cfb:goto L4d6cfb;
case 0x4d6cfd:c.instructions+=6;goto B4d6cfd;
case 0x4d6d01:c.instructions+=5;goto B4d6d01;
case 0x4d6d03:c.instructions+=4;goto B4d6d03;
case 0x4d6d04:c.instructions+=3;goto B4d6d04;
case 0x4d6d07:c.instructions+=2;goto B4d6d07;
case 0x4d6d08:c.instructions+=1;goto B4d6d08;
case 0x4d6d0d:goto L4d6d0d;
case 0x4d6d11:c.instructions+=5;goto B4d6d11;
case 0x4d6d12:c.instructions+=4;goto B4d6d12;
case 0x4d6d15:c.instructions+=3;goto B4d6d15;
case 0x4d6d16:c.instructions+=2;goto B4d6d16;
case 0x4d6d1a:c.instructions+=1;goto B4d6d1a;
case 0x4d6d1f:goto L4d6d1f;
case 0x4d6d23:c.instructions+=14;goto B4d6d23;
case 0x4d6d27:c.instructions+=13;goto B4d6d27;
case 0x4d6d2d:c.instructions+=12;goto B4d6d2d;
case 0x4d6d30:c.instructions+=11;goto B4d6d30;
case 0x4d6d33:c.instructions+=10;goto B4d6d33;
case 0x4d6d36:c.instructions+=9;goto B4d6d36;
case 0x4d6d38:c.instructions+=8;goto B4d6d38;
case 0x4d6d3b:c.instructions+=7;goto B4d6d3b;
case 0x4d6d3e:c.instructions+=6;goto B4d6d3e;
case 0x4d6d40:c.instructions+=5;goto B4d6d40;
case 0x4d6d41:c.instructions+=4;goto B4d6d41;
case 0x4d6d44:c.instructions+=3;goto B4d6d44;
case 0x4d6d46:c.instructions+=2;goto B4d6d46;
case 0x4d6d47:c.instructions+=1;goto B4d6d47;
case 0x4d6d50:goto L4d6d50;
case 0x4d6d52:c.instructions+=14;goto B4d6d52;
case 0x4d6d57:c.instructions+=13;goto B4d6d57;
case 0x4d6d5d:c.instructions+=12;goto B4d6d5d;
case 0x4d6d5e:c.instructions+=11;goto B4d6d5e;
case 0x4d6d65:c.instructions+=10;goto B4d6d65;
case 0x4d6d68:c.instructions+=9;goto B4d6d68;
case 0x4d6d6c:c.instructions+=8;goto B4d6d6c;
case 0x4d6d6d:c.instructions+=7;goto B4d6d6d;
case 0x4d6d6e:c.instructions+=6;goto B4d6d6e;
case 0x4d6d6f:c.instructions+=5;goto B4d6d6f;
case 0x4d6d70:c.instructions+=4;goto B4d6d70;
case 0x4d6d72:c.instructions+=3;goto B4d6d72;
case 0x4d6d73:c.instructions+=2;goto B4d6d73;
case 0x4d6d77:c.instructions+=1;goto B4d6d77;
case 0x4d6d7c:goto L4d6d7c;
case 0x4d6d7f:c.instructions+=12;goto B4d6d7f;
case 0x4d6d81:c.instructions+=11;goto B4d6d81;
case 0x4d6d83:c.instructions+=10;goto B4d6d83;
case 0x4d6d84:c.instructions+=9;goto B4d6d84;
case 0x4d6d85:c.instructions+=8;goto B4d6d85;
case 0x4d6d87:c.instructions+=7;goto B4d6d87;
case 0x4d6d8c:c.instructions+=6;goto B4d6d8c;
case 0x4d6d91:c.instructions+=5;goto B4d6d91;
case 0x4d6d94:c.instructions+=4;goto B4d6d94;
case 0x4d6d95:c.instructions+=3;goto B4d6d95;
case 0x4d6d99:c.instructions+=2;goto B4d6d99;
case 0x4d6d9f:c.instructions+=1;goto B4d6d9f;
case 0x4d6da4:goto L4d6da4;
case 0x4d6da7:c.instructions+=6;goto B4d6da7;
case 0x4d6dac:c.instructions+=5;goto B4d6dac;
case 0x4d6dad:c.instructions+=4;goto B4d6dad;
case 0x4d6db2:c.instructions+=3;goto B4d6db2;
case 0x4d6db8:c.instructions+=2;goto B4d6db8;
case 0x4d6dbf:c.instructions+=1;goto B4d6dbf;
case 0x4d6dc4:goto L4d6dc4;
case 0x4d6dc5:c.instructions+=1;goto B4d6dc5;
case 0x4d6dca:goto L4d6dca;
case 0x4d6dcd:c.instructions+=3;goto B4d6dcd;
case 0x4d6dd2:c.instructions+=2;goto B4d6dd2;
case 0x4d6dd3:c.instructions+=1;goto B4d6dd3;
case 0x4d6dd8:goto L4d6dd8;
case 0x4d6dd9:c.instructions+=1;goto B4d6dd9;
case 0x4d6dde:goto L4d6dde;
case 0x4d6de4:c.instructions+=5;goto B4d6de4;
case 0x4d6de7:c.instructions+=4;goto B4d6de7;
case 0x4d6dea:c.instructions+=3;goto B4d6dea;
case 0x4d6ded:c.instructions+=2;goto B4d6ded;
case 0x4d6df0:c.instructions+=1;goto B4d6df0;
case 0x4d6df2:goto L4d6df2;
case 0x4d6df9:c.instructions+=2;goto B4d6df9;
case 0x4d6dfe:c.instructions+=1;goto B4d6dfe;
case 0x4d6e00:goto L4d6e00;
case 0x4d6e07:c.instructions+=1;goto B4d6e07;
case 0x4d6e0c:goto L4d6e0c;
case 0x4d6e11:c.instructions+=2;goto B4d6e11;
case 0x4d6e12:c.instructions+=1;goto B4d6e12;
case 0x4d6e17:goto L4d6e17;
case 0x4d6e1a:c.instructions+=2;goto B4d6e1a;
case 0x4d6e1b:c.instructions+=1;goto B4d6e1b;
case 0x4d6e20:goto L4d6e20;
case 0x4d6e23:c.instructions+=3;goto B4d6e23;
case 0x4d6e26:c.instructions+=2;goto B4d6e26;
case 0x4d6e2b:c.instructions+=1;goto B4d6e2b;
case 0x4d6e30:goto L4d6e30;
case 0x4d6e31:c.instructions+=3;goto B4d6e31;
case 0x4d6e36:c.instructions+=2;goto B4d6e36;
case 0x4d6e37:c.instructions+=1;goto B4d6e37;
case 0x4d6e3c:goto L4d6e3c;
case 0x4d6e3f:c.instructions+=2;goto B4d6e3f;
case 0x4d6e44:c.instructions+=1;goto B4d6e44;
case 0x4d6e46:goto L4d6e46;
case 0x4d6e48:goto L4d6e48;
case 0x4d6e4a:c.instructions+=1;goto B4d6e4a;
case 0x4d6e4f:goto L4d6e4f;
case 0x4d6e52:c.instructions+=2;goto B4d6e52;
case 0x4d6e54:c.instructions+=1;goto B4d6e54;
case 0x4d6e56:goto L4d6e56;
case 0x4d6e59:c.instructions+=12;goto B4d6e59;
case 0x4d6e5f:c.instructions+=11;goto B4d6e5f;
case 0x4d6e61:c.instructions+=10;goto B4d6e61;
case 0x4d6e64:c.instructions+=9;goto B4d6e64;
case 0x4d6e67:c.instructions+=8;goto B4d6e67;
case 0x4d6e6a:c.instructions+=7;goto B4d6e6a;
case 0x4d6e6d:c.instructions+=6;goto B4d6e6d;
case 0x4d6e70:c.instructions+=5;goto B4d6e70;
case 0x4d6e73:c.instructions+=4;goto B4d6e73;
case 0x4d6e77:c.instructions+=3;goto B4d6e77;
case 0x4d6e7e:c.instructions+=2;goto B4d6e7e;
case 0x4d6e85:c.instructions+=1;goto B4d6e85;
case 0x4d6e87:goto L4d6e87;
case 0x4d6e88:c.instructions+=5;goto B4d6e88;
case 0x4d6e8d:c.instructions+=4;goto B4d6e8d;
case 0x4d6e91:c.instructions+=3;goto B4d6e91;
case 0x4d6e93:c.instructions+=2;goto B4d6e93;
case 0x4d6e94:c.instructions+=1;goto B4d6e94;
case 0x4d6e99:goto L4d6e99;
case 0x4d6e9c:c.instructions+=3;goto B4d6e9c;
case 0x4d6ea0:c.instructions+=2;goto B4d6ea0;
case 0x4d6ea1:c.instructions+=1;goto B4d6ea1;
case 0x4d6ea6:goto L4d6ea6;
case 0x4d6ea7:c.instructions+=2;goto B4d6ea7;
case 0x4d6ea8:c.instructions+=1;goto B4d6ea8;
case 0x4d6ead:goto L4d6ead;
case 0x4d6eaf:c.instructions+=2;goto B4d6eaf;
case 0x4d6eb1:c.instructions+=1;goto B4d6eb1;
case 0x4d6eb6:goto L4d6eb6;
case 0x4d6eb9:c.instructions+=2;goto B4d6eb9;
case 0x4d6ebb:c.instructions+=1;goto B4d6ebb;
case 0x4d6ebd:goto L4d6ebd;
case 0x4d6ec3:c.instructions+=3;goto B4d6ec3;
case 0x4d6ec6:c.instructions+=2;goto B4d6ec6;
case 0x4d6ec9:c.instructions+=1;goto B4d6ec9;
case 0x4d6ecb:goto L4d6ecb;
case 0x4d6ecd:goto L4d6ecd;
case 0x4d6ed0:c.instructions+=11;goto B4d6ed0;
case 0x4d6ed3:c.instructions+=10;goto B4d6ed3;
case 0x4d6ed5:c.instructions+=9;goto B4d6ed5;
case 0x4d6ed6:c.instructions+=8;goto B4d6ed6;
case 0x4d6ed9:c.instructions+=7;goto B4d6ed9;
case 0x4d6ede:c.instructions+=6;goto B4d6ede;
case 0x4d6ee1:c.instructions+=5;goto B4d6ee1;
case 0x4d6ee5:c.instructions+=4;goto B4d6ee5;
case 0x4d6ee7:c.instructions+=3;goto B4d6ee7;
case 0x4d6ee8:c.instructions+=2;goto B4d6ee8;
case 0x4d6eea:c.instructions+=1;goto B4d6eea;
case 0x4d6eef:goto L4d6eef;
case 0x4d6ef2:c.instructions+=4;goto B4d6ef2;
case 0x4d6ef6:c.instructions+=3;goto B4d6ef6;
case 0x4d6ef7:c.instructions+=2;goto B4d6ef7;
case 0x4d6efb:c.instructions+=1;goto B4d6efb;
case 0x4d6f00:goto L4d6f00;
case 0x4d6f04:c.instructions+=3;goto B4d6f04;
case 0x4d6f05:c.instructions+=2;goto B4d6f05;
case 0x4d6f06:c.instructions+=1;goto B4d6f06;
case 0x4d6f0b:goto L4d6f0b;
case 0x4d6f0d:c.instructions+=2;goto B4d6f0d;
case 0x4d6f11:c.instructions+=1;goto B4d6f11;
case 0x4d6f16:goto L4d6f16;
case 0x4d6f19:c.instructions+=2;goto B4d6f19;
case 0x4d6f1b:c.instructions+=1;goto B4d6f1b;
case 0x4d6f1d:goto L4d6f1d;
case 0x4d6f21:c.instructions+=4;goto B4d6f21;
case 0x4d6f27:c.instructions+=3;goto B4d6f27;
case 0x4d6f2a:c.instructions+=2;goto B4d6f2a;
case 0x4d6f2d:c.instructions+=1;goto B4d6f2d;
case 0x4d6f2f:goto L4d6f2f;
case 0x4d6f31:goto L4d6f31;
case 0x4d6f34:c.instructions+=10;goto B4d6f34;
case 0x4d6f36:c.instructions+=9;goto B4d6f36;
case 0x4d6f37:c.instructions+=8;goto B4d6f37;
case 0x4d6f3a:c.instructions+=7;goto B4d6f3a;
case 0x4d6f3f:c.instructions+=6;goto B4d6f3f;
case 0x4d6f42:c.instructions+=5;goto B4d6f42;
case 0x4d6f44:c.instructions+=4;goto B4d6f44;
case 0x4d6f48:c.instructions+=3;goto B4d6f48;
case 0x4d6f4a:c.instructions+=2;goto B4d6f4a;
case 0x4d6f4b:c.instructions+=1;goto B4d6f4b;
case 0x4d6f50:goto L4d6f50;
case 0x4d6f53:c.instructions+=3;goto B4d6f53;
case 0x4d6f57:c.instructions+=2;goto B4d6f57;
case 0x4d6f58:c.instructions+=1;goto B4d6f58;
case 0x4d6f5d:goto L4d6f5d;
case 0x4d6f5e:c.instructions+=2;goto B4d6f5e;
case 0x4d6f5f:c.instructions+=1;goto B4d6f5f;
case 0x4d6f64:goto L4d6f64;
case 0x4d6f67:c.instructions+=3;goto B4d6f67;
case 0x4d6f69:c.instructions+=2;goto B4d6f69;
case 0x4d6f6c:c.instructions+=1;goto B4d6f6c;
case 0x4d6f71:goto L4d6f71;
case 0x4d6f72:c.instructions+=2;goto B4d6f72;
case 0x4d6f75:c.instructions+=1;goto B4d6f75;
case 0x4d6f7a:goto L4d6f7a;
case 0x4d6f7b:c.instructions+=2;goto B4d6f7b;
case 0x4d6f7e:c.instructions+=1;goto B4d6f7e;
case 0x4d6f84:goto L4d6f84;
case 0x4d6f89:c.instructions+=11;goto B4d6f89;
case 0x4d6f8c:c.instructions+=10;goto B4d6f8c;
case 0x4d6f91:c.instructions+=9;goto B4d6f91;
case 0x4d6f93:c.instructions+=8;goto B4d6f93;
case 0x4d6f95:c.instructions+=7;goto B4d6f95;
case 0x4d6f97:c.instructions+=6;goto B4d6f97;
case 0x4d6f98:c.instructions+=5;goto B4d6f98;
case 0x4d6f9e:c.instructions+=4;goto B4d6f9e;
case 0x4d6fa5:c.instructions+=3;goto B4d6fa5;
case 0x4d6fa6:c.instructions+=2;goto B4d6fa6;
case 0x4d6fab:c.instructions+=1;goto B4d6fab;
case 0x4d6fb0:goto L4d6fb0;
case 0x4d6fb1:c.instructions+=2;goto B4d6fb1;
case 0x4d6fb2:c.instructions+=1;goto B4d6fb2;
case 0x4d6fb7:goto L4d6fb7;
case 0x4d6fba:c.instructions+=2;goto B4d6fba;
case 0x4d6fbb:c.instructions+=1;goto B4d6fbb;
case 0x4d6fc0:goto L4d6fc0;
case 0x4d6fc6:c.instructions+=7;goto B4d6fc6;
case 0x4d6fcd:c.instructions+=6;goto B4d6fcd;
case 0x4d6fd0:c.instructions+=5;goto B4d6fd0;
case 0x4d6fd3:c.instructions+=4;goto B4d6fd3;
case 0x4d6fd4:c.instructions+=3;goto B4d6fd4;
case 0x4d6fd9:c.instructions+=2;goto B4d6fd9;
case 0x4d6fda:c.instructions+=1;goto B4d6fda;
case 0x4d6fdf:goto L4d6fdf;
case 0x4d6fe2:c.instructions+=2;goto B4d6fe2;
case 0x4d6fe3:c.instructions+=1;goto B4d6fe3;
case 0x4d6fe8:goto L4d6fe8;
case 0x4d6fec:c.instructions+=9;goto B4d6fec;
case 0x4d6fef:c.instructions+=8;goto B4d6fef;
case 0x4d6ff0:c.instructions+=7;goto B4d6ff0;
case 0x4d6ff2:c.instructions+=6;goto B4d6ff2;
case 0x4d6ff3:c.instructions+=5;goto B4d6ff3;
case 0x4d6ff4:c.instructions+=4;goto B4d6ff4;
case 0x4d6ff5:c.instructions+=3;goto B4d6ff5;
case 0x4d6ffc:c.instructions+=2;goto B4d6ffc;
case 0x4d6fff:c.instructions+=1;goto B4d6fff;
default:missing_instruction(c.pc);}
B4d6000:L4d6000:{c.instructions+=1;NFSU2_TR(0x4d6000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6005ull));
TAIL_STATIC(0x575620u,575);
}
B4d6005:L4d6005:{c.instructions+=4;NFSU2_TR(0x4d6005);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d6007:{NFSU2_TR(0x4d6007);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4d600a:{NFSU2_TR(0x4d600a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d600c:{NFSU2_TR(0x4d600c);
if(r1(R+518)){{goto L4d6025;}}
}
B4d600e:L4d600e:{c.instructions+=7;NFSU2_TR(0x4d600e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d6011:{NFSU2_TR(0x4d6011);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d6013:{NFSU2_TR(0x4d6013);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6016:{NFSU2_TR(0x4d6016);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6019:{NFSU2_TR(0x4d6019);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d601d:{NFSU2_TR(0x4d601d);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d6023:{NFSU2_TR(0x4d6023);
__builtin_memmove((R+28),(R+0),4);
}
B4d6025:L4d6025:{c.instructions+=5;NFSU2_TR(0x4d6025);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6027:{NFSU2_TR(0x4d6027);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6029:{NFSU2_TR(0x4d6029);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d602e:{NFSU2_TR(0x4d602e);
__builtin_memmove((R+4),(R+28),4);
}
B4d6030:{NFSU2_TR(0x4d6030);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6035ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d6035:L4d6035:{c.instructions+=5;NFSU2_TR(0x4d6035);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6037:{NFSU2_TR(0x4d6037);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6039:{NFSU2_TR(0x4d6039);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d603e:{NFSU2_TR(0x4d603e);
__builtin_memmove((R+4),(R+28),4);
}
B4d6040:{NFSU2_TR(0x4d6040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6045ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d6045:L4d6045:{c.instructions+=4;NFSU2_TR(0x4d6045);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4d6049:{NFSU2_TR(0x4d6049);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d604a:{NFSU2_TR(0x4d604a);
__builtin_memmove((R+4),(R+12),4);
}
B4d604c:{NFSU2_TR(0x4d604c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6051ull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4d6051:L4d6051:{c.instructions+=3;NFSU2_TR(0x4d6051);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6052:{NFSU2_TR(0x4d6052);
__builtin_memmove((R+4),(R+12),4);
}
B4d6054:{NFSU2_TR(0x4d6054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6059ull));
TAIL_STATIC(0x5434d0u,543);
}
B4d6059:L4d6059:{c.instructions+=3;NFSU2_TR(0x4d6059);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4d605a:{NFSU2_TR(0x4d605a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4d605d:{NFSU2_TR(0x4d605d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x4d5fe3u,4d5);}
}
B4d605f:L4d605f:{c.instructions+=4;NFSU2_TR(0x4d605f);
__builtin_memmove((R+28),(R+12),4);
}
B4d6061:{NFSU2_TR(0x4d6061);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d6067:{NFSU2_TR(0x4d6067);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d6069:{NFSU2_TR(0x4d6069);
if(r1(R+518)){{goto L4d60a9;}}
}
B4d606b:L4d606b:{c.instructions+=3;NFSU2_TR(0x4d606b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d606d:{NFSU2_TR(0x4d606d);
__builtin_memmove((R+4),(R+28),4);
}
B4d606f:{NFSU2_TR(0x4d606f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6074ull));
TAIL_STATIC(0x543470u,543);
}
B4d6074:L4d6074:{c.instructions+=3;NFSU2_TR(0x4d6074);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d6077:{NFSU2_TR(0x4d6077);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d6079:{NFSU2_TR(0x4d6079);
if(r1(R+518)){{goto L4d6089;}}
}
B4d607b:L4d607b:{c.instructions+=4;NFSU2_TR(0x4d607b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d607e:{NFSU2_TR(0x4d607e);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6083:{NFSU2_TR(0x4d6083);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6084:{NFSU2_TR(0x4d6084);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6089ull));
TAIL_STATIC(0x51ee80u,51e);
}
B4d6089:L4d6089:{c.instructions+=4;NFSU2_TR(0x4d6089);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d608c:{NFSU2_TR(0x4d608c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d608d:{NFSU2_TR(0x4d608d);
__builtin_memmove((R+4),(R+28),4);
}
B4d608f:{NFSU2_TR(0x4d608f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6094ull));
TAIL_STATIC(0x51f440u,51f);
}
B4d6094:L4d6094:{c.instructions+=6;NFSU2_TR(0x4d6094);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d609a:{NFSU2_TR(0x4d609a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d609b:{NFSU2_TR(0x4d609b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d609c:{NFSU2_TR(0x4d609c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d609e:{NFSU2_TR(0x4d609e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d60a4:{NFSU2_TR(0x4d60a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d60a9ull));
TAIL_STATIC(0x538080u,538);
}
B4d60a9:L4d60a9:{c.instructions+=3;NFSU2_TR(0x4d60a9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d60ab:{NFSU2_TR(0x4d60ab);
__builtin_memmove((R+4),(R+28),4);
}
B4d60ad:{NFSU2_TR(0x4d60ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d60b2ull));
TAIL_STATIC(0x538500u,538);
}
B4d60b2:L4d60b2:{c.instructions+=6;NFSU2_TR(0x4d60b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d60b3:{NFSU2_TR(0x4d60b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d60b4:{NFSU2_TR(0x4d60b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d60b5:{NFSU2_TR(0x4d60b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d60b6:{NFSU2_TR(0x4d60b6);
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
B4d60b9:{NFSU2_TR(0x4d60b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d60c0:L4d60c0:{c.instructions+=5;NFSU2_TR(0x4d60c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d60c4:{NFSU2_TR(0x4d60c4);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d60c9:{NFSU2_TR(0x4d60c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d60ca:{NFSU2_TR(0x4d60ca);
__builtin_memmove((R+24),(R+4),4);
}
B4d60cc:{NFSU2_TR(0x4d60cc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4d61e5;}}
}
B4d60d2:L4d60d2:{c.instructions+=1;NFSU2_TR(0x4d60d2);
if(r1(R+518)){{goto L4d614d;}}
}
B4d60d4:L4d60d4:{c.instructions+=2;NFSU2_TR(0x4d60d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d60d9:{NFSU2_TR(0x4d60d9);
if(r1(R+518)){{goto L4d6120;}}
}
B4d60db:L4d60db:{c.instructions+=2;NFSU2_TR(0x4d60db);
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
B4d60e0:{NFSU2_TR(0x4d60e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d620d;}}
}
B4d60e6:L4d60e6:{c.instructions+=5;NFSU2_TR(0x4d60e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d60e9:{NFSU2_TR(0x4d60e9);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d60ee:{NFSU2_TR(0x4d60ee);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d60f3:{NFSU2_TR(0x4d60f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d60f4:{NFSU2_TR(0x4d60f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d60f9ull));
TAIL_STATIC(0x537d40u,537);
}
B4d60f9:L4d60f9:{c.instructions+=3;NFSU2_TR(0x4d60f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d60fc:{NFSU2_TR(0x4d60fc);
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
B4d60fe:{NFSU2_TR(0x4d60fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d620d;}}
}
B4d6104:L4d6104:{c.instructions+=6;NFSU2_TR(0x4d6104);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d6107:{NFSU2_TR(0x4d6107);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6109:{NFSU2_TR(0x4d6109);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d610e:{NFSU2_TR(0x4d610e);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6113:{NFSU2_TR(0x4d6113);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6114:{NFSU2_TR(0x4d6114);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6119ull));
TAIL_STATIC(0x537c60u,537);
}
B4d6119:L4d6119:{c.instructions+=3;NFSU2_TR(0x4d6119);
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
B4d611c:{NFSU2_TR(0x4d611c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d611d:{NFSU2_TR(0x4d611d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d6120:L4d6120:{c.instructions+=3;NFSU2_TR(0x4d6120);
__builtin_memmove((R+4),(R+24),4);
}
B4d6122:{NFSU2_TR(0x4d6122);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d6129:{NFSU2_TR(0x4d6129);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d612eull));
TAIL_STATIC(0x4be1d0u,4be);
}
B4d612e:L4d612e:{c.instructions+=6;NFSU2_TR(0x4d612e);
__builtin_memmove((R+4),gp(0x7f44fc),4);
}
B4d6134:{NFSU2_TR(0x4d6134);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6136:{NFSU2_TR(0x4d6136);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d613b:{NFSU2_TR(0x4d613b);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6140:{NFSU2_TR(0x4d6140);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6141:{NFSU2_TR(0x4d6141);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6146ull));
TAIL_STATIC(0x537c00u,537);
}
B4d6146:L4d6146:{c.instructions+=3;NFSU2_TR(0x4d6146);
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
B4d6149:{NFSU2_TR(0x4d6149);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d614a:{NFSU2_TR(0x4d614a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d614d:L4d614d:{c.instructions+=2;NFSU2_TR(0x4d614d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d6150:{NFSU2_TR(0x4d6150);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6155ull));
TAIL_STATIC(0x538760u,538);
}
B4d6155:L4d6155:{c.instructions+=3;NFSU2_TR(0x4d6155);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d615b:{NFSU2_TR(0x4d615b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d615d:{NFSU2_TR(0x4d615d);
if(r1(R+518)){{goto L4d61a4;}}
}
B4d615f:L4d615f:{c.instructions+=2;NFSU2_TR(0x4d615f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d6164:{NFSU2_TR(0x4d6164);
if(r1(R+518)){{goto L4d61a4;}}
}
B4d6166:L4d6166:{c.instructions+=9;NFSU2_TR(0x4d6166);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B4d616c:{NFSU2_TR(0x4d616c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B4d616e:{NFSU2_TR(0x4d616e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6172:{NFSU2_TR(0x4d6172);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4d6176:{NFSU2_TR(0x4d6176);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4d617c:{NFSU2_TR(0x4d617c);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4d6182:{NFSU2_TR(0x4d6182);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4d6184:{NFSU2_TR(0x4d6184);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d6187:{NFSU2_TR(0x4d6187);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d61af;}}
}
B4d6189:L4d6189:{c.instructions+=4;NFSU2_TR(0x4d6189);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d618c:{NFSU2_TR(0x4d618c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d618d:{NFSU2_TR(0x4d618d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d6193:{NFSU2_TR(0x4d6193);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6198ull));
TAIL_STATIC(0x498600u,498);
}
B4d6198:L4d6198:{c.instructions+=2;NFSU2_TR(0x4d6198);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d61a2:{NFSU2_TR(0x4d61a2);
{goto L4d61af;}
}
B4d61a4:L4d61a4:{c.instructions+=2;NFSU2_TR(0x4d61a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d61aa:{NFSU2_TR(0x4d61aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d61afull));
TAIL_STATIC(0x4cdd40u,4cd);
}
B4d61af:L4d61af:{c.instructions+=3;NFSU2_TR(0x4d61af);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4d61b5:{NFSU2_TR(0x4d61b5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d61b7:{NFSU2_TR(0x4d61b7);
if(r1(R+518)){{goto L4d61da;}}
}
B4d61b9:L4d61b9:{c.instructions+=3;NFSU2_TR(0x4d61b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d61bc:{NFSU2_TR(0x4d61bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d61bd:{NFSU2_TR(0x4d61bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d61c2ull));
TAIL_STATIC(0x5379a0u,537);
}
B4d61c2:L4d61c2:{c.instructions+=5;NFSU2_TR(0x4d61c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d61c9:{NFSU2_TR(0x4d61c9);
__builtin_memmove((R+8),gp(0x7f44fc),4);
}
B4d61cf:{NFSU2_TR(0x4d61cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d61d0:{NFSU2_TR(0x4d61d0);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d61d2:{NFSU2_TR(0x4d61d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d61d7ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4d61d7:L4d61d7:{c.instructions+=1;NFSU2_TR(0x4d61d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d61da:L4d61da:{c.instructions+=2;NFSU2_TR(0x4d61da);
__builtin_memmove((R+4),(R+24),4);
}
B4d61dc:{NFSU2_TR(0x4d61dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d61e1ull));
TAIL_STATIC(0x4be1d0u,4be);
}
B4d61e1:L4d61e1:{c.instructions+=2;NFSU2_TR(0x4d61e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d61e2:{NFSU2_TR(0x4d61e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d61e5:L4d61e5:{c.instructions+=2;NFSU2_TR(0x4d61e5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xe1fde1d1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d61ea:{NFSU2_TR(0x4d61ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d620d;}}
}
B4d61ec:L4d61ec:{c.instructions+=6;NFSU2_TR(0x4d61ec);
__builtin_memmove((R+0),gp(0x7f44fc),4);
}
B4d61f1:{NFSU2_TR(0x4d61f1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d61f3:{NFSU2_TR(0x4d61f3);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d61f8:{NFSU2_TR(0x4d61f8);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d61fd:{NFSU2_TR(0x4d61fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d61fe:{NFSU2_TR(0x4d61fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6203ull));
TAIL_STATIC(0x537c00u,537);
}
B4d6203:L4d6203:{c.instructions+=2;NFSU2_TR(0x4d6203);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d620a:{NFSU2_TR(0x4d620a);
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
B4d620d:L4d620d:{c.instructions+=2;NFSU2_TR(0x4d620d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d620e:{NFSU2_TR(0x4d620e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d6220:L4d6220:{c.instructions+=14;NFSU2_TR(0x4d6220);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6222:{NFSU2_TR(0x4d6222);
u8 U[4];
w4(U+0,u32(0x7749d3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6227:{NFSU2_TR(0x4d6227);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d622d:{NFSU2_TR(0x4d622d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d622e:{NFSU2_TR(0x4d622e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6235:{NFSU2_TR(0x4d6235);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6236:{NFSU2_TR(0x4d6236);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6237:{NFSU2_TR(0x4d6237);
__builtin_memmove((R+24),(R+4),4);
}
B4d6239:{NFSU2_TR(0x4d6239);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d623d:{NFSU2_TR(0x4d623d);
u8 U[4];
w4(U+0,u32(0x79636cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d6243:{NFSU2_TR(0x4d6243);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d6246:{NFSU2_TR(0x4d6246);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d6248:{NFSU2_TR(0x4d6248);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d6250:{NFSU2_TR(0x4d6250);
if(r1(R+518)){{goto L4d6262;}}
}
B4d6252:L4d6252:{c.instructions+=2;NFSU2_TR(0x4d6252);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6253:{NFSU2_TR(0x4d6253);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6258ull));
TAIL_STATIC(0x540a60u,540);
}
B4d6258:L4d6258:{c.instructions+=2;NFSU2_TR(0x4d6258);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d625b:{NFSU2_TR(0x4d625b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d6262:L4d6262:{c.instructions+=3;NFSU2_TR(0x4d6262);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d6265:{NFSU2_TR(0x4d6265);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d626a:{NFSU2_TR(0x4d626a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d626full));
TAIL_STATIC(0x4cbba0u,4cb);
}
B4d626f:L4d626f:{c.instructions+=3;NFSU2_TR(0x4d626f);
__builtin_memmove((R+4),(R+24),4);
}
B4d6271:{NFSU2_TR(0x4d6271);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d6279:{NFSU2_TR(0x4d6279);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d627eull));
TAIL_STATIC(0x510d40u,510);
}
B4d627e:L4d627e:{c.instructions+=5;NFSU2_TR(0x4d627e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d6282:{NFSU2_TR(0x4d6282);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d6283:{NFSU2_TR(0x4d6283);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d628a:{NFSU2_TR(0x4d628a);
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
B4d628d:{NFSU2_TR(0x4d628d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d6290:L4d6290:{c.instructions+=6;NFSU2_TR(0x4d6290);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d6294:{NFSU2_TR(0x4d6294);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6295:{NFSU2_TR(0x4d6295);
__builtin_memmove((R+24),(R+4),4);
}
B4d6297:{NFSU2_TR(0x4d6297);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4d629a:{NFSU2_TR(0x4d629a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d629c:{NFSU2_TR(0x4d629c);
if(r1(R+518)){{goto L4d62c4;}}
}
B4d629e:L4d629e:{c.instructions+=2;NFSU2_TR(0x4d629e);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d62a3:{NFSU2_TR(0x4d62a3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4d62b9;}}
}
B4d62a5:L4d62a5:{c.instructions+=1;NFSU2_TR(0x4d62a5);
if(r1(R+518)){{goto L4d62c4;}}
}
B4d62a7:L4d62a7:{c.instructions+=2;NFSU2_TR(0x4d62a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34dc1becull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d62ac:{NFSU2_TR(0x4d62ac);
if(r1(R+518)){{goto L4d62c4;}}
}
B4d62ae:L4d62ae:{c.instructions+=2;NFSU2_TR(0x4d62ae);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x35f8620bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x35f8620bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d62b3:{NFSU2_TR(0x4d62b3);
if(r1(R+518)){{goto L4d62c4;}}
}
B4d62b5:L4d62b5:{c.instructions+=2;NFSU2_TR(0x4d62b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d62b6:{NFSU2_TR(0x4d62b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d62b9:L4d62b9:{c.instructions+=2;NFSU2_TR(0x4d62b9);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xe1fde1d1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d62be:{NFSU2_TR(0x4d62be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d64a1;}}
}
B4d62c4:L4d62c4:{c.instructions+=2;NFSU2_TR(0x4d62c4);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d62c9:{NFSU2_TR(0x4d62c9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4d63e3;}}
}
B4d62cf:L4d62cf:{c.instructions+=1;NFSU2_TR(0x4d62cf);
if(r1(R+518)){{goto L4d63c3;}}
}
B4d62d5:L4d62d5:{c.instructions+=2;NFSU2_TR(0x4d62d5);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x35f8620bull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d62da:{NFSU2_TR(0x4d62da);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4d638d;}}
}
B4d62e0:L4d62e0:{c.instructions+=1;NFSU2_TR(0x4d62e0);
if(r1(R+518)){{goto L4d6314;}}
}
B4d62e2:L4d62e2:{c.instructions+=2;NFSU2_TR(0x4d62e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d62e7:{NFSU2_TR(0x4d62e7);
if(r1(R+518)){{goto L4d63ac;}}
}
B4d62ed:L4d62ed:{c.instructions+=2;NFSU2_TR(0x4d62ed);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x34dc1becull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x34dc1becull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x34dc1becull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d62f2:{NFSU2_TR(0x4d62f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d64a1;}}
}
B4d62f8:L4d62f8:{c.instructions+=6;NFSU2_TR(0x4d62f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d62fb:{NFSU2_TR(0x4d62fb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d62fd:{NFSU2_TR(0x4d62fd);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6302:{NFSU2_TR(0x4d6302);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6307:{NFSU2_TR(0x4d6307);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6308:{NFSU2_TR(0x4d6308);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d630dull));
TAIL_STATIC(0x537c00u,537);
}
B4d630d:L4d630d:{c.instructions+=3;NFSU2_TR(0x4d630d);
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
B4d6310:{NFSU2_TR(0x4d6310);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d6311:{NFSU2_TR(0x4d6311);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d6314:L4d6314:{c.instructions+=5;NFSU2_TR(0x4d6314);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6316:{NFSU2_TR(0x4d6316);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d631b:{NFSU2_TR(0x4d631b);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6320:{NFSU2_TR(0x4d6320);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6325:{NFSU2_TR(0x4d6325);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d632aull));
TAIL_STATIC(0x537c00u,537);
}
B4d632a:L4d632a:{c.instructions+=5;NFSU2_TR(0x4d632a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d632c:{NFSU2_TR(0x4d632c);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6331:{NFSU2_TR(0x4d6331);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6336:{NFSU2_TR(0x4d6336);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d633b:{NFSU2_TR(0x4d633b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6340ull));
TAIL_STATIC(0x537c00u,537);
}
B4d6340:L4d6340:{c.instructions+=5;NFSU2_TR(0x4d6340);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6342:{NFSU2_TR(0x4d6342);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6347:{NFSU2_TR(0x4d6347);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d634c:{NFSU2_TR(0x4d634c);
u8 U[4];
w4(U+0,u32(0x790210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6351:{NFSU2_TR(0x4d6351);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6356ull));
TAIL_STATIC(0x537c00u,537);
}
B4d6356:L4d6356:{c.instructions+=3;NFSU2_TR(0x4d6356);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d635b:{NFSU2_TR(0x4d635b);
u8 U[4];
w4(U+0,u32(0x8363a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6360:{NFSU2_TR(0x4d6360);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6365ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4d6365:L4d6365:{c.instructions+=3;NFSU2_TR(0x4d6365);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
}
B4d6368:{NFSU2_TR(0x4d6368);
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
B4d636a:{NFSU2_TR(0x4d636a);
if(r1(R+518)){{goto L4d64a1;}}
}
B4d6370:L4d6370:{c.instructions+=5;NFSU2_TR(0x4d6370);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6372:{NFSU2_TR(0x4d6372);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6377:{NFSU2_TR(0x4d6377);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d637c:{NFSU2_TR(0x4d637c);
u8 U[4];
w4(U+0,u32(0x8363a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6381:{NFSU2_TR(0x4d6381);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6386ull));
TAIL_STATIC(0x537c00u,537);
}
B4d6386:L4d6386:{c.instructions+=3;NFSU2_TR(0x4d6386);
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
B4d6389:{NFSU2_TR(0x4d6389);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d638a:{NFSU2_TR(0x4d638a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d638d:L4d638d:{c.instructions+=2;NFSU2_TR(0x4d638d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d6392:{NFSU2_TR(0x4d6392);
if(r1(R+518)){{goto L4d63ac;}}
}
B4d6394:L4d6394:{c.instructions+=2;NFSU2_TR(0x4d6394);
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
B4d6399:{NFSU2_TR(0x4d6399);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d64a1;}}
}
B4d639f:L4d639f:{c.instructions+=3;NFSU2_TR(0x4d639f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d63a1:{NFSU2_TR(0x4d63a1);
__builtin_memmove((R+4),(R+24),4);
}
B4d63a3:{NFSU2_TR(0x4d63a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d63a8ull));
TAIL_STATIC(0x4a24c0u,4a2);
}
B4d63a8:L4d63a8:{c.instructions+=2;NFSU2_TR(0x4d63a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d63a9:{NFSU2_TR(0x4d63a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d63ac:L4d63ac:{c.instructions+=2;NFSU2_TR(0x4d63ac);
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
B4d63ae:{NFSU2_TR(0x4d63ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d64a1;}}
}
B4d63b4:L4d63b4:{c.instructions+=2;NFSU2_TR(0x4d63b4);
__builtin_memmove((R+4),(R+24),4);
}
B4d63b6:{NFSU2_TR(0x4d63b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d63bbull));
TAIL_STATIC(0x4be220u,4be);
}
B4d63bb:L4d63bb:{c.instructions+=3;NFSU2_TR(0x4d63bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d63bf:{NFSU2_TR(0x4d63bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d63c0:{NFSU2_TR(0x4d63c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d63c3:L4d63c3:{c.instructions+=7;NFSU2_TR(0x4d63c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d63c6:{NFSU2_TR(0x4d63c6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d63c8:{NFSU2_TR(0x4d63c8);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d63cd:{NFSU2_TR(0x4d63cd);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d63d2:{NFSU2_TR(0x4d63d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d63d3:{NFSU2_TR(0x4d63d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d63d7:{NFSU2_TR(0x4d63d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d63dcull));
TAIL_STATIC(0x537c00u,537);
}
B4d63dc:L4d63dc:{c.instructions+=3;NFSU2_TR(0x4d63dc);
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
B4d63df:{NFSU2_TR(0x4d63df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d63e0:{NFSU2_TR(0x4d63e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d63e3:L4d63e3:{c.instructions+=2;NFSU2_TR(0x4d63e3);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d63e8:{NFSU2_TR(0x4d63e8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4d6493;}}
}
B4d63ee:L4d63ee:{c.instructions+=1;NFSU2_TR(0x4d63ee);
if(r1(R+518)){{goto L4d641a;}}
}
B4d63f0:L4d63f0:{c.instructions+=2;NFSU2_TR(0x4d63f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d63f5:{NFSU2_TR(0x4d63f5);
if(r1(R+518)){{goto L4d640d;}}
}
B4d63f7:L4d63f7:{c.instructions+=2;NFSU2_TR(0x4d63f7);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9803f6e2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9803f6e2ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d63fc:{NFSU2_TR(0x4d63fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d64a1;}}
}
B4d6402:L4d6402:{c.instructions+=2;NFSU2_TR(0x4d6402);
__builtin_memmove((R+4),(R+24),4);
}
B4d6404:{NFSU2_TR(0x4d6404);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6409ull));
TAIL_STATIC(0x4a25c0u,4a2);
}
B4d6409:L4d6409:{c.instructions+=2;NFSU2_TR(0x4d6409);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d640a:{NFSU2_TR(0x4d640a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d640d:L4d640d:{c.instructions+=3;NFSU2_TR(0x4d640d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d640f:{NFSU2_TR(0x4d640f);
__builtin_memmove((R+4),(R+24),4);
}
B4d6411:{NFSU2_TR(0x4d6411);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6416ull));
TAIL_STATIC(0x4a24c0u,4a2);
}
B4d6416:L4d6416:{c.instructions+=2;NFSU2_TR(0x4d6416);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d6417:{NFSU2_TR(0x4d6417);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d641a:L4d641a:{c.instructions+=1;NFSU2_TR(0x4d641a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d641full));
TAIL_STATIC(0x582b60u,582);
}
B4d641f:L4d641f:{c.instructions+=2;NFSU2_TR(0x4d641f);
__builtin_memmove((R+4),(R+0),4);
}
B4d6421:{NFSU2_TR(0x4d6421);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6426ull));
TAIL_STATIC(0x584f10u,584);
}
B4d6426:L4d6426:{c.instructions+=3;NFSU2_TR(0x4d6426);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4d642c:{NFSU2_TR(0x4d642c);
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
B4d642e:{NFSU2_TR(0x4d642e);
if(r1(R+518)){{goto L4d64a1;}}
}
B4d6430:L4d6430:{c.instructions+=3;NFSU2_TR(0x4d6430);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d6433:{NFSU2_TR(0x4d6433);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6434:{NFSU2_TR(0x4d6434);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6439ull));
TAIL_STATIC(0x5379a0u,537);
}
B4d6439:L4d6439:{c.instructions+=4;NFSU2_TR(0x4d6439);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d643e:{NFSU2_TR(0x4d643e);
u8 U[4];
w4(U+0,u32(0x8363a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6443:{NFSU2_TR(0x4d6443);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d644a:{NFSU2_TR(0x4d644a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d644full));
TAIL_STATIC(0x43dc30u,43d);
}
B4d644f:L4d644f:{c.instructions+=6;NFSU2_TR(0x4d644f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d6452:{NFSU2_TR(0x4d6452);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d6454:{NFSU2_TR(0x4d6454);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6456:{NFSU2_TR(0x4d6456);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d645b:{NFSU2_TR(0x4d645b);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6460:{NFSU2_TR(0x4d6460);
if(r1(R+518)){{goto L4d6482;}}
}
B4d6462:L4d6462:{c.instructions+=2;NFSU2_TR(0x4d6462);
u8 U[4];
w4(U+0,u32(0x8363a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6467:{NFSU2_TR(0x4d6467);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d646cull));
TAIL_STATIC(0x537c00u,537);
}
B4d646c:L4d646c:{c.instructions+=3;NFSU2_TR(0x4d646c);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6471:{NFSU2_TR(0x4d6471);
u8 U[4];
w4(U+0,u32(0x8363a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6476:{NFSU2_TR(0x4d6476);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d647bull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4d647b:L4d647b:{c.instructions+=3;NFSU2_TR(0x4d647b);
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
B4d647e:{NFSU2_TR(0x4d647e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d647f:{NFSU2_TR(0x4d647f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d6482:L4d6482:{c.instructions+=2;NFSU2_TR(0x4d6482);
u8 U[4];
w4(U+0,u32(0x790210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6487:{NFSU2_TR(0x4d6487);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d648cull));
TAIL_STATIC(0x537c00u,537);
}
B4d648c:L4d648c:{c.instructions+=3;NFSU2_TR(0x4d648c);
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
B4d648f:{NFSU2_TR(0x4d648f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d6490:{NFSU2_TR(0x4d6490);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d6493:L4d6493:{c.instructions+=2;NFSU2_TR(0x4d6493);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xe1fde1d1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d6498:{NFSU2_TR(0x4d6498);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d64a1;}}
}
B4d649a:L4d649a:{c.instructions+=1;NFSU2_TR(0x4d649a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d64a1:L4d64a1:{c.instructions+=2;NFSU2_TR(0x4d64a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d64a2:{NFSU2_TR(0x4d64a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d64b0:L4d64b0:{c.instructions+=10;NFSU2_TR(0x4d64b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B4d64b3:{NFSU2_TR(0x4d64b3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d64b4:{NFSU2_TR(0x4d64b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d64b5:{NFSU2_TR(0x4d64b5);
__builtin_memmove((R+20),(R+4),4);
}
B4d64b7:{NFSU2_TR(0x4d64b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d64b8:{NFSU2_TR(0x4d64b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d64bb:{NFSU2_TR(0x4d64bb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d64c3:{NFSU2_TR(0x4d64c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d64cb:{NFSU2_TR(0x4d64cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d64cc:{NFSU2_TR(0x4d64cc);
__builtin_memmove((R+16),(R+16),4);
}
B4d64d0:L4d64d0:{c.instructions+=2;NFSU2_TR(0x4d64d0);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d64d2:{NFSU2_TR(0x4d64d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d64d7ull));
TAIL_STATIC(0x575620u,575);
}
B4d64d7:L4d64d7:{c.instructions+=4;NFSU2_TR(0x4d64d7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d64d9:{NFSU2_TR(0x4d64d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d64dc:{NFSU2_TR(0x4d64dc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d64de:{NFSU2_TR(0x4d64de);
if(r1(R+518)){{goto L4d6511;}}
}
B4d64e0:L4d64e0:{c.instructions+=13;NFSU2_TR(0x4d64e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d64e3:{NFSU2_TR(0x4d64e3);
u8 U[4];
w4(U+0,u32(0x79b9d4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d64e9:{NFSU2_TR(0x4d64e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d64eb:{NFSU2_TR(0x4d64eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d64ee:{NFSU2_TR(0x4d64ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d64f1:{NFSU2_TR(0x4d64f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d64f4:{NFSU2_TR(0x4d64f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d64f7:{NFSU2_TR(0x4d64f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d64fa:{NFSU2_TR(0x4d64fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d64fd:{NFSU2_TR(0x4d64fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d6501:{NFSU2_TR(0x4d6501);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x78f228ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d6508:{NFSU2_TR(0x4d6508);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w4(U+4,u32(0x78f21cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d650f:{NFSU2_TR(0x4d650f);
__builtin_memmove((R+28),(R+0),4);
}
B4d6511:L4d6511:{c.instructions+=7;NFSU2_TR(0x4d6511);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d6515:{NFSU2_TR(0x4d6515);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6516:{NFSU2_TR(0x4d6516);
u8 U[4];
w4(U+0,u32(0x7963dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d651b:{NFSU2_TR(0x4d651b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d651f:{NFSU2_TR(0x4d651f);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6521:{NFSU2_TR(0x4d6521);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6522:{NFSU2_TR(0x4d6522);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6527ull));
TAIL_STATIC(0x50c960u,50c);
}
B4d6527:L4d6527:{c.instructions+=4;NFSU2_TR(0x4d6527);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4d652a:{NFSU2_TR(0x4d652a);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d652e:{NFSU2_TR(0x4d652e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d652f:{NFSU2_TR(0x4d652f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6534ull));
TAIL_STATIC(0x505450u,505);
}
B4d6534:L4d6534:{c.instructions+=3;NFSU2_TR(0x4d6534);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6535:{NFSU2_TR(0x4d6535);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6536:{NFSU2_TR(0x4d6536);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d653bull));
TAIL_STATIC(0x537a10u,537);
}
B4d653b:L4d653b:{c.instructions+=3;NFSU2_TR(0x4d653b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d653d:{NFSU2_TR(0x4d653d);
__builtin_memmove((R+12),(R+0),4);
}
B4d653f:{NFSU2_TR(0x4d653f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6544ull));
TAIL_STATIC(0x575620u,575);
}
B4d6544:L4d6544:{c.instructions+=3;NFSU2_TR(0x4d6544);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4d6547:{NFSU2_TR(0x4d6547);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d6549:{NFSU2_TR(0x4d6549);
if(r1(R+518)){{goto L4d6559;}}
}
B4d654b:L4d654b:{c.instructions+=4;NFSU2_TR(0x4d654b);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d6551:{NFSU2_TR(0x4d6551);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6554:{NFSU2_TR(0x4d6554);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4d6557:{NFSU2_TR(0x4d6557);
{goto L4d655b;}
}
B4d6559:L4d6559:{c.instructions+=1;NFSU2_TR(0x4d6559);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d655b:L4d655b:{c.instructions+=13;NFSU2_TR(0x4d655b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d655e:{NFSU2_TR(0x4d655e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d6561:{NFSU2_TR(0x4d6561);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4d6563:{NFSU2_TR(0x4d6563);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6566:{NFSU2_TR(0x4d6566);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4d6568:{NFSU2_TR(0x4d6568);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d656b:{NFSU2_TR(0x4d656b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d656f:{NFSU2_TR(0x4d656f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6570:{NFSU2_TR(0x4d6570);
u8 U[4];
w4(U+0,u32(0x79603cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6575:{NFSU2_TR(0x4d6575);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d6579:{NFSU2_TR(0x4d6579);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d657b:{NFSU2_TR(0x4d657b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d657c:{NFSU2_TR(0x4d657c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6581ull));
TAIL_STATIC(0x50c960u,50c);
}
B4d6581:L4d6581:{c.instructions+=4;NFSU2_TR(0x4d6581);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4d6584:{NFSU2_TR(0x4d6584);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d6588:{NFSU2_TR(0x4d6588);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6589:{NFSU2_TR(0x4d6589);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d658eull));
TAIL_STATIC(0x505450u,505);
}
B4d658e:L4d658e:{c.instructions+=3;NFSU2_TR(0x4d658e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d658f:{NFSU2_TR(0x4d658f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6590:{NFSU2_TR(0x4d6590);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6595ull));
TAIL_STATIC(0x5379c0u,537);
}
B4d6595:L4d6595:{c.instructions+=5;NFSU2_TR(0x4d6595);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4d6598:{NFSU2_TR(0x4d6598);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6599:{NFSU2_TR(0x4d6599);
__builtin_memmove((R+4),(R+24),4);
}
B4d659b:{NFSU2_TR(0x4d659b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d659e:{NFSU2_TR(0x4d659e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d65a3ull));
TAIL_STATIC(0x52e770u,52e);
}
B4d65a3:L4d65a3:{c.instructions+=7;NFSU2_TR(0x4d65a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d65a7:{NFSU2_TR(0x4d65a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d65ab:{NFSU2_TR(0x4d65ab);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4d65ac:{NFSU2_TR(0x4d65ac);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4d65ad:{NFSU2_TR(0x4d65ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d65b1:{NFSU2_TR(0x4d65b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d65b5:{NFSU2_TR(0x4d65b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d64d0u);}goto L4d64d0;}}
}
B4d65bb:L4d65bb:{c.instructions+=2;NFSU2_TR(0x4d65bb);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d65bd:{NFSU2_TR(0x4d65bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d65c2ull));
TAIL_STATIC(0x575620u,575);
}
B4d65c2:L4d65c2:{c.instructions+=3;NFSU2_TR(0x4d65c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d65c5:{NFSU2_TR(0x4d65c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d65c7:{NFSU2_TR(0x4d65c7);
if(r1(R+518)){{goto L4d65df;}}
}
B4d65c9:L4d65c9:{c.instructions+=7;NFSU2_TR(0x4d65c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d65cc:{NFSU2_TR(0x4d65cc);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d65d2:{NFSU2_TR(0x4d65d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d65d4:{NFSU2_TR(0x4d65d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d65d7:{NFSU2_TR(0x4d65d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d65db:{NFSU2_TR(0x4d65db);
__builtin_memmove((R+28),(R+0),4);
}
B4d65dd:{NFSU2_TR(0x4d65dd);
{goto L4d65e1;}
}
B4d65df:L4d65df:{c.instructions+=1;NFSU2_TR(0x4d65df);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d65e1:L4d65e1:{c.instructions+=4;NFSU2_TR(0x4d65e1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d65e3:{NFSU2_TR(0x4d65e3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d65e5:{NFSU2_TR(0x4d65e5);
u8 U[4];
w4(U+0,u32(0xc91d620full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d65ea:{NFSU2_TR(0x4d65ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d65efull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d65ef:L4d65ef:{c.instructions+=4;NFSU2_TR(0x4d65ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d65f2:{NFSU2_TR(0x4d65f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d65f3:{NFSU2_TR(0x4d65f3);
__builtin_memmove((R+4),(R+28),4);
}
B4d65f5:{NFSU2_TR(0x4d65f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d65faull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d65fa:L4d65fa:{c.instructions+=3;NFSU2_TR(0x4d65fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4d65fd:{NFSU2_TR(0x4d65fd);
u8 U[4];
w4(U+0,u32(0xc91d620full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6602:{NFSU2_TR(0x4d6602);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6607ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d6607:L4d6607:{c.instructions+=4;NFSU2_TR(0x4d6607);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d660a:{NFSU2_TR(0x4d660a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d660b:{NFSU2_TR(0x4d660b);
u8 U[4];
w4(U+0,u32(0x7963ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6610:{NFSU2_TR(0x4d6610);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6615ull));
TAIL_STATIC(0x50b990u,50b);
}
B4d6615:L4d6615:{c.instructions+=4;NFSU2_TR(0x4d6615);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d6618:{NFSU2_TR(0x4d6618);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6619:{NFSU2_TR(0x4d6619);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d661a:{NFSU2_TR(0x4d661a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d661full));
TAIL_STATIC(0x537b80u,537);
}
B4d661f:L4d661f:{c.instructions+=4;NFSU2_TR(0x4d661f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d6622:{NFSU2_TR(0x4d6622);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6623:{NFSU2_TR(0x4d6623);
__builtin_memmove((R+4),(R+24),4);
}
B4d6625:{NFSU2_TR(0x4d6625);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d662aull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4d662a:L4d662a:{c.instructions+=3;NFSU2_TR(0x4d662a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d662b:{NFSU2_TR(0x4d662b);
__builtin_memmove((R+4),(R+24),4);
}
B4d662d:{NFSU2_TR(0x4d662d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6632ull));
TAIL_STATIC(0x52ea50u,52e);
}
B4d6632:L4d6632:{c.instructions+=2;NFSU2_TR(0x4d6632);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6634:{NFSU2_TR(0x4d6634);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6639ull));
TAIL_STATIC(0x575620u,575);
}
B4d6639:L4d6639:{c.instructions+=3;NFSU2_TR(0x4d6639);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d663c:{NFSU2_TR(0x4d663c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d663e:{NFSU2_TR(0x4d663e);
if(r1(R+518)){{goto L4d6656;}}
}
B4d6640:L4d6640:{c.instructions+=7;NFSU2_TR(0x4d6640);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d6643:{NFSU2_TR(0x4d6643);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d6649:{NFSU2_TR(0x4d6649);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d664b:{NFSU2_TR(0x4d664b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d664e:{NFSU2_TR(0x4d664e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d6652:{NFSU2_TR(0x4d6652);
__builtin_memmove((R+28),(R+0),4);
}
B4d6654:{NFSU2_TR(0x4d6654);
{goto L4d6658;}
}
B4d6656:L4d6656:{c.instructions+=1;NFSU2_TR(0x4d6656);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d6658:L4d6658:{c.instructions+=4;NFSU2_TR(0x4d6658);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d665a:{NFSU2_TR(0x4d665a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d665c:{NFSU2_TR(0x4d665c);
u8 U[4];
w4(U+0,u32(0xa5b53f2bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6661:{NFSU2_TR(0x4d6661);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6666ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d6666:L4d6666:{c.instructions+=4;NFSU2_TR(0x4d6666);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d6669:{NFSU2_TR(0x4d6669);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d666a:{NFSU2_TR(0x4d666a);
__builtin_memmove((R+4),(R+28),4);
}
B4d666c:{NFSU2_TR(0x4d666c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6671ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d6671:L4d6671:{c.instructions+=3;NFSU2_TR(0x4d6671);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4d6674:{NFSU2_TR(0x4d6674);
u8 U[4];
w4(U+0,u32(0xa5b53f2bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6679:{NFSU2_TR(0x4d6679);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d667eull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d667e:L4d667e:{c.instructions+=4;NFSU2_TR(0x4d667e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d6681:{NFSU2_TR(0x4d6681);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6682:{NFSU2_TR(0x4d6682);
u8 U[4];
w4(U+0,u32(0x7963bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6687:{NFSU2_TR(0x4d6687);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d668cull));
TAIL_STATIC(0x50b990u,50b);
}
B4d668c:L4d668c:{c.instructions+=4;NFSU2_TR(0x4d668c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d668f:{NFSU2_TR(0x4d668f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6690:{NFSU2_TR(0x4d6690);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6691:{NFSU2_TR(0x4d6691);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6696ull));
TAIL_STATIC(0x537b80u,537);
}
B4d6696:L4d6696:{c.instructions+=4;NFSU2_TR(0x4d6696);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d6699:{NFSU2_TR(0x4d6699);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d669a:{NFSU2_TR(0x4d669a);
__builtin_memmove((R+4),(R+24),4);
}
B4d669c:{NFSU2_TR(0x4d669c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d66a1ull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4d66a1:L4d66a1:{c.instructions+=3;NFSU2_TR(0x4d66a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d66a2:{NFSU2_TR(0x4d66a2);
__builtin_memmove((R+4),(R+24),4);
}
B4d66a4:{NFSU2_TR(0x4d66a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d66a9ull));
TAIL_STATIC(0x52ea50u,52e);
}
B4d66a9:L4d66a9:{c.instructions+=2;NFSU2_TR(0x4d66a9);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d66ab:{NFSU2_TR(0x4d66ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d66b0ull));
TAIL_STATIC(0x575620u,575);
}
B4d66b0:L4d66b0:{c.instructions+=3;NFSU2_TR(0x4d66b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d66b3:{NFSU2_TR(0x4d66b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d66b5:{NFSU2_TR(0x4d66b5);
if(r1(R+518)){{goto L4d66cd;}}
}
B4d66b7:L4d66b7:{c.instructions+=7;NFSU2_TR(0x4d66b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d66ba:{NFSU2_TR(0x4d66ba);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d66c0:{NFSU2_TR(0x4d66c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d66c2:{NFSU2_TR(0x4d66c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d66c5:{NFSU2_TR(0x4d66c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d66c9:{NFSU2_TR(0x4d66c9);
__builtin_memmove((R+28),(R+0),4);
}
B4d66cb:{NFSU2_TR(0x4d66cb);
{goto L4d66cf;}
}
B4d66cd:L4d66cd:{c.instructions+=1;NFSU2_TR(0x4d66cd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d66cf:L4d66cf:{c.instructions+=4;NFSU2_TR(0x4d66cf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d66d1:{NFSU2_TR(0x4d66d1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d66d3:{NFSU2_TR(0x4d66d3);
u8 U[4];
w4(U+0,u32(0xa276384ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d66d8:{NFSU2_TR(0x4d66d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d66ddull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d66dd:L4d66dd:{c.instructions+=4;NFSU2_TR(0x4d66dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d66e0:{NFSU2_TR(0x4d66e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d66e1:{NFSU2_TR(0x4d66e1);
__builtin_memmove((R+4),(R+28),4);
}
B4d66e3:{NFSU2_TR(0x4d66e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d66e8ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d66e8:L4d66e8:{c.instructions+=3;NFSU2_TR(0x4d66e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4d66eb:{NFSU2_TR(0x4d66eb);
u8 U[4];
w4(U+0,u32(0xa276384ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d66f0:{NFSU2_TR(0x4d66f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d66f5ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d66f5:L4d66f5:{c.instructions+=4;NFSU2_TR(0x4d66f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d66f8:{NFSU2_TR(0x4d66f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d66f9:{NFSU2_TR(0x4d66f9);
u8 U[4];
w4(U+0,u32(0x7963acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d66fe:{NFSU2_TR(0x4d66fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6703ull));
TAIL_STATIC(0x50b990u,50b);
}
B4d6703:L4d6703:{c.instructions+=4;NFSU2_TR(0x4d6703);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d6706:{NFSU2_TR(0x4d6706);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6707:{NFSU2_TR(0x4d6707);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6708:{NFSU2_TR(0x4d6708);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d670dull));
TAIL_STATIC(0x537b80u,537);
}
B4d670d:L4d670d:{c.instructions+=4;NFSU2_TR(0x4d670d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d6710:{NFSU2_TR(0x4d6710);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6711:{NFSU2_TR(0x4d6711);
__builtin_memmove((R+4),(R+24),4);
}
B4d6713:{NFSU2_TR(0x4d6713);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6718ull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4d6718:L4d6718:{c.instructions+=3;NFSU2_TR(0x4d6718);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6719:{NFSU2_TR(0x4d6719);
__builtin_memmove((R+4),(R+24),4);
}
B4d671b:{NFSU2_TR(0x4d671b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6720ull));
TAIL_STATIC(0x52ea50u,52e);
}
B4d6720:L4d6720:{c.instructions+=2;NFSU2_TR(0x4d6720);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6722:{NFSU2_TR(0x4d6722);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6727ull));
TAIL_STATIC(0x575620u,575);
}
B4d6727:L4d6727:{c.instructions+=3;NFSU2_TR(0x4d6727);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d672a:{NFSU2_TR(0x4d672a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d672c:{NFSU2_TR(0x4d672c);
if(r1(R+518)){{goto L4d6744;}}
}
B4d672e:L4d672e:{c.instructions+=7;NFSU2_TR(0x4d672e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d6731:{NFSU2_TR(0x4d6731);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d6737:{NFSU2_TR(0x4d6737);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d6739:{NFSU2_TR(0x4d6739);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d673c:{NFSU2_TR(0x4d673c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d6740:{NFSU2_TR(0x4d6740);
__builtin_memmove((R+28),(R+0),4);
}
B4d6742:{NFSU2_TR(0x4d6742);
{goto L4d6746;}
}
B4d6744:L4d6744:{c.instructions+=1;NFSU2_TR(0x4d6744);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d6746:L4d6746:{c.instructions+=4;NFSU2_TR(0x4d6746);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6748:{NFSU2_TR(0x4d6748);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d674a:{NFSU2_TR(0x4d674a);
u8 U[4];
w4(U+0,u32(0xa0c5d893ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d674f:{NFSU2_TR(0x4d674f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6754ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d6754:L4d6754:{c.instructions+=4;NFSU2_TR(0x4d6754);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d6757:{NFSU2_TR(0x4d6757);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6758:{NFSU2_TR(0x4d6758);
__builtin_memmove((R+4),(R+28),4);
}
B4d675a:{NFSU2_TR(0x4d675a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d675full));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d675f:L4d675f:{c.instructions+=3;NFSU2_TR(0x4d675f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4d6762:{NFSU2_TR(0x4d6762);
u8 U[4];
w4(U+0,u32(0xa0c5d893ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6767:{NFSU2_TR(0x4d6767);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d676cull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d676c:L4d676c:{c.instructions+=4;NFSU2_TR(0x4d676c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d676f:{NFSU2_TR(0x4d676f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6770:{NFSU2_TR(0x4d6770);
u8 U[4];
w4(U+0,u32(0x79639cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6775:{NFSU2_TR(0x4d6775);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d677aull));
TAIL_STATIC(0x50b990u,50b);
}
B4d677a:L4d677a:{c.instructions+=4;NFSU2_TR(0x4d677a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d677d:{NFSU2_TR(0x4d677d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d677e:{NFSU2_TR(0x4d677e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d677f:{NFSU2_TR(0x4d677f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6784ull));
TAIL_STATIC(0x537b80u,537);
}
B4d6784:L4d6784:{c.instructions+=4;NFSU2_TR(0x4d6784);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d6787:{NFSU2_TR(0x4d6787);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6788:{NFSU2_TR(0x4d6788);
__builtin_memmove((R+4),(R+24),4);
}
B4d678a:{NFSU2_TR(0x4d678a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d678full));
TAIL_STATIC(0x51f2e0u,51f);
}
B4d678f:L4d678f:{c.instructions+=3;NFSU2_TR(0x4d678f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6790:{NFSU2_TR(0x4d6790);
__builtin_memmove((R+4),(R+24),4);
}
B4d6792:{NFSU2_TR(0x4d6792);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6797ull));
TAIL_STATIC(0x52ea50u,52e);
}
B4d6797:L4d6797:{c.instructions+=2;NFSU2_TR(0x4d6797);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6799:{NFSU2_TR(0x4d6799);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d679eull));
TAIL_STATIC(0x575620u,575);
}
B4d679e:L4d679e:{c.instructions+=3;NFSU2_TR(0x4d679e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d67a1:{NFSU2_TR(0x4d67a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d67a3:{NFSU2_TR(0x4d67a3);
if(r1(R+518)){{goto L4d67bb;}}
}
B4d67a5:L4d67a5:{c.instructions+=7;NFSU2_TR(0x4d67a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d67a8:{NFSU2_TR(0x4d67a8);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d67ae:{NFSU2_TR(0x4d67ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d67b0:{NFSU2_TR(0x4d67b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d67b3:{NFSU2_TR(0x4d67b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d67b7:{NFSU2_TR(0x4d67b7);
__builtin_memmove((R+28),(R+0),4);
}
B4d67b9:{NFSU2_TR(0x4d67b9);
{goto L4d67bd;}
}
B4d67bb:L4d67bb:{c.instructions+=1;NFSU2_TR(0x4d67bb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d67bd:L4d67bd:{c.instructions+=4;NFSU2_TR(0x4d67bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d67bf:{NFSU2_TR(0x4d67bf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d67c1:{NFSU2_TR(0x4d67c1);
u8 U[4];
w4(U+0,u32(0xdbff7776ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d67c6:{NFSU2_TR(0x4d67c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d67cbull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d67cb:L4d67cb:{c.instructions+=4;NFSU2_TR(0x4d67cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d67ce:{NFSU2_TR(0x4d67ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d67cf:{NFSU2_TR(0x4d67cf);
__builtin_memmove((R+4),(R+28),4);
}
B4d67d1:{NFSU2_TR(0x4d67d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d67d6ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d67d6:L4d67d6:{c.instructions+=3;NFSU2_TR(0x4d67d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4d67d9:{NFSU2_TR(0x4d67d9);
u8 U[4];
w4(U+0,u32(0xdbff7776ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d67de:{NFSU2_TR(0x4d67de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d67e3ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d67e3:L4d67e3:{c.instructions+=5;NFSU2_TR(0x4d67e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d67e6:{NFSU2_TR(0x4d67e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d67e7:{NFSU2_TR(0x4d67e7);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d67ec:{NFSU2_TR(0x4d67ec);
u8 U[4];
w4(U+0,u32(0x79638cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d67f1:{NFSU2_TR(0x4d67f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d67f6ull));
TAIL_STATIC(0x50b990u,50b);
}
B4d67f6:L4d67f6:{c.instructions+=4;NFSU2_TR(0x4d67f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d67f9:{NFSU2_TR(0x4d67f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d67fa:{NFSU2_TR(0x4d67fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d67fb:{NFSU2_TR(0x4d67fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6800ull));
TAIL_STATIC(0x537b80u,537);
}
B4d6800:L4d6800:{c.instructions+=4;NFSU2_TR(0x4d6800);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d6803:{NFSU2_TR(0x4d6803);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6804:{NFSU2_TR(0x4d6804);
__builtin_memmove((R+4),(R+24),4);
}
B4d6806:{NFSU2_TR(0x4d6806);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d680bull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4d680b:L4d680b:{c.instructions+=3;NFSU2_TR(0x4d680b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d680c:{NFSU2_TR(0x4d680c);
__builtin_memmove((R+4),(R+24),4);
}
B4d680e:{NFSU2_TR(0x4d680e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6813ull));
TAIL_STATIC(0x52ea50u,52e);
}
B4d6813:L4d6813:{c.instructions+=2;NFSU2_TR(0x4d6813);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6815:{NFSU2_TR(0x4d6815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d681aull));
TAIL_STATIC(0x575620u,575);
}
B4d681a:L4d681a:{c.instructions+=3;NFSU2_TR(0x4d681a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d681d:{NFSU2_TR(0x4d681d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d681f:{NFSU2_TR(0x4d681f);
if(r1(R+518)){{goto L4d6837;}}
}
B4d6821:L4d6821:{c.instructions+=7;NFSU2_TR(0x4d6821);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d6824:{NFSU2_TR(0x4d6824);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d682a:{NFSU2_TR(0x4d682a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d682c:{NFSU2_TR(0x4d682c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d682f:{NFSU2_TR(0x4d682f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d6833:{NFSU2_TR(0x4d6833);
__builtin_memmove((R+28),(R+0),4);
}
B4d6835:{NFSU2_TR(0x4d6835);
{goto L4d6839;}
}
B4d6837:L4d6837:{c.instructions+=1;NFSU2_TR(0x4d6837);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d6839:L4d6839:{c.instructions+=4;NFSU2_TR(0x4d6839);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d683b:{NFSU2_TR(0x4d683b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d683d:{NFSU2_TR(0x4d683d);
u8 U[4];
w4(U+0,u32(0x1c775494ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6842:{NFSU2_TR(0x4d6842);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6847ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d6847:L4d6847:{c.instructions+=4;NFSU2_TR(0x4d6847);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d684a:{NFSU2_TR(0x4d684a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d684b:{NFSU2_TR(0x4d684b);
__builtin_memmove((R+4),(R+28),4);
}
B4d684d:{NFSU2_TR(0x4d684d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6852ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d6852:L4d6852:{c.instructions+=3;NFSU2_TR(0x4d6852);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4d6855:{NFSU2_TR(0x4d6855);
u8 U[4];
w4(U+0,u32(0x1c775494ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d685a:{NFSU2_TR(0x4d685a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d685full));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d685f:L4d685f:{c.instructions+=4;NFSU2_TR(0x4d685f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d6862:{NFSU2_TR(0x4d6862);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6863:{NFSU2_TR(0x4d6863);
u8 U[4];
w4(U+0,u32(0x79637cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6868:{NFSU2_TR(0x4d6868);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d686dull));
TAIL_STATIC(0x50b990u,50b);
}
B4d686d:L4d686d:{c.instructions+=4;NFSU2_TR(0x4d686d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d6870:{NFSU2_TR(0x4d6870);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6871:{NFSU2_TR(0x4d6871);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6872:{NFSU2_TR(0x4d6872);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6877ull));
TAIL_STATIC(0x537b80u,537);
}
B4d6877:L4d6877:{c.instructions+=4;NFSU2_TR(0x4d6877);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d687a:{NFSU2_TR(0x4d687a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d687b:{NFSU2_TR(0x4d687b);
__builtin_memmove((R+4),(R+24),4);
}
B4d687d:{NFSU2_TR(0x4d687d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6882ull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4d6882:L4d6882:{c.instructions+=3;NFSU2_TR(0x4d6882);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6883:{NFSU2_TR(0x4d6883);
__builtin_memmove((R+4),(R+24),4);
}
B4d6885:{NFSU2_TR(0x4d6885);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d688aull));
TAIL_STATIC(0x52ea50u,52e);
}
B4d688a:L4d688a:{c.instructions+=2;NFSU2_TR(0x4d688a);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d688c:{NFSU2_TR(0x4d688c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6891ull));
TAIL_STATIC(0x575620u,575);
}
B4d6891:L4d6891:{c.instructions+=3;NFSU2_TR(0x4d6891);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d6894:{NFSU2_TR(0x4d6894);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d6896:{NFSU2_TR(0x4d6896);
if(r1(R+518)){{goto L4d68ae;}}
}
B4d6898:L4d6898:{c.instructions+=7;NFSU2_TR(0x4d6898);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d689b:{NFSU2_TR(0x4d689b);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d68a1:{NFSU2_TR(0x4d68a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d68a3:{NFSU2_TR(0x4d68a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d68a6:{NFSU2_TR(0x4d68a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d68aa:{NFSU2_TR(0x4d68aa);
__builtin_memmove((R+28),(R+0),4);
}
B4d68ac:{NFSU2_TR(0x4d68ac);
{goto L4d68b0;}
}
B4d68ae:L4d68ae:{c.instructions+=1;NFSU2_TR(0x4d68ae);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d68b0:L4d68b0:{c.instructions+=4;NFSU2_TR(0x4d68b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d68b2:{NFSU2_TR(0x4d68b2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d68b4:{NFSU2_TR(0x4d68b4);
u8 U[4];
w4(U+0,u32(0x17b2522ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d68b9:{NFSU2_TR(0x4d68b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d68beull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d68be:L4d68be:{c.instructions+=4;NFSU2_TR(0x4d68be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d68c1:{NFSU2_TR(0x4d68c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d68c2:{NFSU2_TR(0x4d68c2);
__builtin_memmove((R+4),(R+28),4);
}
B4d68c4:{NFSU2_TR(0x4d68c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d68c9ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d68c9:L4d68c9:{c.instructions+=3;NFSU2_TR(0x4d68c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4d68cc:{NFSU2_TR(0x4d68cc);
u8 U[4];
w4(U+0,u32(0x17b2522ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d68d1:{NFSU2_TR(0x4d68d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d68d6ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d68d6:L4d68d6:{c.instructions+=4;NFSU2_TR(0x4d68d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d68d9:{NFSU2_TR(0x4d68d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d68da:{NFSU2_TR(0x4d68da);
u8 U[4];
w4(U+0,u32(0x79637cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d68df:{NFSU2_TR(0x4d68df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d68e4ull));
TAIL_STATIC(0x50b990u,50b);
}
B4d68e4:L4d68e4:{c.instructions+=4;NFSU2_TR(0x4d68e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d68e7:{NFSU2_TR(0x4d68e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d68e8:{NFSU2_TR(0x4d68e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d68e9:{NFSU2_TR(0x4d68e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d68eeull));
TAIL_STATIC(0x537b80u,537);
}
B4d68ee:L4d68ee:{c.instructions+=4;NFSU2_TR(0x4d68ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d68f1:{NFSU2_TR(0x4d68f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d68f2:{NFSU2_TR(0x4d68f2);
__builtin_memmove((R+4),(R+24),4);
}
B4d68f4:{NFSU2_TR(0x4d68f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d68f9ull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4d68f9:L4d68f9:{c.instructions+=3;NFSU2_TR(0x4d68f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d68fa:{NFSU2_TR(0x4d68fa);
__builtin_memmove((R+4),(R+24),4);
}
B4d68fc:{NFSU2_TR(0x4d68fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6901ull));
TAIL_STATIC(0x52ea50u,52e);
}
B4d6901:L4d6901:{c.instructions+=5;NFSU2_TR(0x4d6901);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d6904:{NFSU2_TR(0x4d6904);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d6906:{NFSU2_TR(0x4d6906);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d6907:{NFSU2_TR(0x4d6907);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d6908:{NFSU2_TR(0x4d6908);
if(r1(R+518)){{goto L4d6918;}}
}
B4d690a:L4d690a:{c.instructions+=4;NFSU2_TR(0x4d690a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d690d:{NFSU2_TR(0x4d690d);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6912:{NFSU2_TR(0x4d6912);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6913:{NFSU2_TR(0x4d6913);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6918ull));
TAIL_STATIC(0x51ee80u,51e);
}
B4d6918:L4d6918:{c.instructions+=3;NFSU2_TR(0x4d6918);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d691a:{NFSU2_TR(0x4d691a);
__builtin_memmove((R+4),(R+24),4);
}
B4d691c:{NFSU2_TR(0x4d691c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6921ull));
TAIL_STATIC(0x538500u,538);
}
B4d6921:L4d6921:{c.instructions+=5;NFSU2_TR(0x4d6921);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6923:{NFSU2_TR(0x4d6923);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6925:{NFSU2_TR(0x4d6925);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6927:{NFSU2_TR(0x4d6927);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d692d:{NFSU2_TR(0x4d692d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6932ull));
TAIL_STATIC(0x538080u,538);
}
B4d6932:L4d6932:{c.instructions+=4;NFSU2_TR(0x4d6932);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d6933:{NFSU2_TR(0x4d6933);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d6934:{NFSU2_TR(0x4d6934);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d6937:{NFSU2_TR(0x4d6937);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d6940:L4d6940:{c.instructions+=8;NFSU2_TR(0x4d6940);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6942:{NFSU2_TR(0x4d6942);
u8 U[4];
w4(U+0,u32(0x774a14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6947:{NFSU2_TR(0x4d6947);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d694d:{NFSU2_TR(0x4d694d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d694e:{NFSU2_TR(0x4d694e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6955:{NFSU2_TR(0x4d6955);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6956:{NFSU2_TR(0x4d6956);
u8 U[4];
w4(U+0,u32(0x168ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d695b:{NFSU2_TR(0x4d695b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6960ull));
TAIL_STATIC(0x575620u,575);
}
B4d6960:L4d6960:{c.instructions+=5;NFSU2_TR(0x4d6960);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d6963:{NFSU2_TR(0x4d6963);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4d6967:{NFSU2_TR(0x4d6967);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d6969:{NFSU2_TR(0x4d6969);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d6971:{NFSU2_TR(0x4d6971);
if(r1(R+518)){{goto L4d698e;}}
}
B4d6973:L4d6973:{c.instructions+=4;NFSU2_TR(0x4d6973);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d6977:{NFSU2_TR(0x4d6977);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6978:{NFSU2_TR(0x4d6978);
__builtin_memmove((R+4),(R+0),4);
}
B4d697a:{NFSU2_TR(0x4d697a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d697full));
TAIL_STATIC(0x4be2c0u,4be);
}
B4d697f:L4d697f:{c.instructions+=4;NFSU2_TR(0x4d697f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d6983:{NFSU2_TR(0x4d6983);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d698a:{NFSU2_TR(0x4d698a);
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
B4d698d:{NFSU2_TR(0x4d698d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d698e:L4d698e:{c.instructions+=5;NFSU2_TR(0x4d698e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d6992:{NFSU2_TR(0x4d6992);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d6994:{NFSU2_TR(0x4d6994);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d699b:{NFSU2_TR(0x4d699b);
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
B4d699e:{NFSU2_TR(0x4d699e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d69a0:L4d69a0:{c.instructions+=3;NFSU2_TR(0x4d69a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d69a1:{NFSU2_TR(0x4d69a1);
__builtin_memmove((R+24),(R+4),4);
}
B4d69a3:{NFSU2_TR(0x4d69a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d69a8ull));
TAIL_STATIC(0x4be3a0u,4be);
}
B4d69a8:L4d69a8:{c.instructions+=2;NFSU2_TR(0x4d69a8);
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
B4d69ad:{NFSU2_TR(0x4d69ad);
if(r1(R+518)){{goto L4d69b8;}}
}
B4d69af:L4d69af:{c.instructions+=2;NFSU2_TR(0x4d69af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d69b0:{NFSU2_TR(0x4d69b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d69b5ull));
TAIL_STATIC(0x575630u,575);
}
B4d69b5:L4d69b5:{c.instructions+=1;NFSU2_TR(0x4d69b5);
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
B4d69b8:L4d69b8:{c.instructions+=3;NFSU2_TR(0x4d69b8);
__builtin_memmove((R+0),(R+24),4);
}
B4d69ba:{NFSU2_TR(0x4d69ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d69bb:{NFSU2_TR(0x4d69bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d69c0:L4d69c0:{c.instructions+=14;NFSU2_TR(0x4d69c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d69c2:{NFSU2_TR(0x4d69c2);
u8 U[4];
w4(U+0,u32(0x774a41ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d69c7:{NFSU2_TR(0x4d69c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d69cd:{NFSU2_TR(0x4d69cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d69ce:{NFSU2_TR(0x4d69ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d69d5:{NFSU2_TR(0x4d69d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d69d6:{NFSU2_TR(0x4d69d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d69da:{NFSU2_TR(0x4d69da);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d69db:{NFSU2_TR(0x4d69db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d69dc:{NFSU2_TR(0x4d69dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d69dd:{NFSU2_TR(0x4d69dd);
__builtin_memmove((R+24),(R+4),4);
}
B4d69df:{NFSU2_TR(0x4d69df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d69e0:{NFSU2_TR(0x4d69e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d69e4:{NFSU2_TR(0x4d69e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d69e9ull));
TAIL_STATIC(0x551de0u,551);
}
B4d69e9:L4d69e9:{c.instructions+=6;NFSU2_TR(0x4d69e9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4d69eb:{NFSU2_TR(0x4d69eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d69ee:{NFSU2_TR(0x4d69ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d69f2:{NFSU2_TR(0x4d69f2);
u8 U[4];
w4(U+0,u32(0x796410ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d69f8:{NFSU2_TR(0x4d69f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d69fb:{NFSU2_TR(0x4d69fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6a00ull));
TAIL_STATIC(0x4ff430u,4ff);
}
B4d6a00:L4d6a00:{c.instructions+=4;NFSU2_TR(0x4d6a00);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d6a06:{NFSU2_TR(0x4d6a06);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d6a0b:{NFSU2_TR(0x4d6a0b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d6a11:{NFSU2_TR(0x4d6a11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6a16ull));
TAIL_STATIC(0x4ae7f0u,4ae);
}
B4d6a16:L4d6a16:{c.instructions+=8;NFSU2_TR(0x4d6a16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d6a20:{NFSU2_TR(0x4d6a20);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d6a26:{NFSU2_TR(0x4d6a26);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d6a2c:{NFSU2_TR(0x4d6a2c);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B4d6a32:{NFSU2_TR(0x4d6a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d6a35:{NFSU2_TR(0x4d6a35);
u8 U[4];
w4(U+0,u32(0x53d8734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6a3a:{NFSU2_TR(0x4d6a3a);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d6a3f:{NFSU2_TR(0x4d6a3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6a44ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d6a44:L4d6a44:{c.instructions+=4;NFSU2_TR(0x4d6a44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6a45:{NFSU2_TR(0x4d6a45);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6a4a:{NFSU2_TR(0x4d6a4a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6a4b:{NFSU2_TR(0x4d6a4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6a50ull));
TAIL_STATIC(0x537b80u,537);
}
B4d6a50:L4d6a50:{c.instructions+=6;NFSU2_TR(0x4d6a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d6a53:{NFSU2_TR(0x4d6a53);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d6a56:{NFSU2_TR(0x4d6a56);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6a5b:{NFSU2_TR(0x4d6a5b);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6a60:{NFSU2_TR(0x4d6a60);
u8 U[4];
w4(U+0,u32(0x78f844ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6a65:{NFSU2_TR(0x4d6a65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6a6aull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4d6a6a:L4d6a6a:{c.instructions+=4;NFSU2_TR(0x4d6a6a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d6a6d:{NFSU2_TR(0x4d6a6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6a6e:{NFSU2_TR(0x4d6a6e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6a6f:{NFSU2_TR(0x4d6a6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6a74ull));
TAIL_STATIC(0x537b80u,537);
}
B4d6a74:L4d6a74:{c.instructions+=3;NFSU2_TR(0x4d6a74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d6a77:{NFSU2_TR(0x4d6a77);
__builtin_memmove((R+4),(R+24),4);
}
B4d6a79:{NFSU2_TR(0x4d6a79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6a7eull));
TAIL_STATIC(0x4be670u,4be);
}
B4d6a7e:L4d6a7e:{c.instructions+=2;NFSU2_TR(0x4d6a7e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d6a80:{NFSU2_TR(0x4d6a80);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4d6aa5;}}
}
B4d6a82:L4d6a82:{c.instructions+=7;NFSU2_TR(0x4d6a82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d6a85:{NFSU2_TR(0x4d6a85);
u8 U[4];
w4(U+0,u32(0xec3905c1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6a8a:{NFSU2_TR(0x4d6a8a);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6a8f:{NFSU2_TR(0x4d6a8f);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6a94:{NFSU2_TR(0x4d6a94);
u8 U[4];
w4(U+0,u32(0x7902c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6a99:{NFSU2_TR(0x4d6a99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6a9a:{NFSU2_TR(0x4d6a9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6a9full));
TAIL_STATIC(0x558610u,558);
}
B4d6a9f:L4d6a9f:{c.instructions+=2;NFSU2_TR(0x4d6a9f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4d6aa2:{NFSU2_TR(0x4d6aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6aa5:L4d6aa5:{c.instructions+=2;NFSU2_TR(0x4d6aa5);
__builtin_memmove((R+4),(R+24),4);
}
B4d6aa7:{NFSU2_TR(0x4d6aa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6aacull));
TAIL_STATIC(0x4a2db0u,4a2);
}
B4d6aac:L4d6aac:{c.instructions+=3;NFSU2_TR(0x4d6aac);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4d6ab2:{NFSU2_TR(0x4d6ab2);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d6ab5:{NFSU2_TR(0x4d6ab5);
if(r1(R+518)){{goto L4d6ac4;}}
}
B4d6ab7:L4d6ab7:{c.instructions+=2;NFSU2_TR(0x4d6ab7);
u8 U[2];
__builtin_memmove((U+0),gp(0x8384dc),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4d6abd:{NFSU2_TR(0x4d6abd);
if(r1(R+518)){{goto L4d6ac4;}}
}
B4d6abf:L4d6abf:{c.instructions+=1;NFSU2_TR(0x4d6abf);
w4(R+12,u32(0x1ull));
}
B4d6ac4:L4d6ac4:{c.instructions+=3;NFSU2_TR(0x4d6ac4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d6aca:{NFSU2_TR(0x4d6aca);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4d6ad0:{NFSU2_TR(0x4d6ad0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6ad5ull));
TAIL_STATIC(0x54e6b0u,54e);
}
B4d6ad5:L4d6ad5:{c.instructions+=3;NFSU2_TR(0x4d6ad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d6ad8:{NFSU2_TR(0x4d6ad8);
u8 U[4];
w4(U+0,u32(0x796404ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6add:{NFSU2_TR(0x4d6add);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6ae2ull));
TAIL_STATIC(0x505450u,505);
}
B4d6ae2:L4d6ae2:{c.instructions+=3;NFSU2_TR(0x4d6ae2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6ae3:{NFSU2_TR(0x4d6ae3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6ae4:{NFSU2_TR(0x4d6ae4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6ae9ull));
TAIL_STATIC(0x537a60u,537);
}
B4d6ae9:L4d6ae9:{c.instructions+=10;NFSU2_TR(0x4d6ae9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d6aed:{NFSU2_TR(0x4d6aed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d6af0:{NFSU2_TR(0x4d6af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6af6:{NFSU2_TR(0x4d6af6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d6af7:{NFSU2_TR(0x4d6af7);
__builtin_memmove((R+0),(R+24),4);
}
B4d6af9:{NFSU2_TR(0x4d6af9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d6afa:{NFSU2_TR(0x4d6afa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d6afb:{NFSU2_TR(0x4d6afb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6b02:{NFSU2_TR(0x4d6b02);
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
B4d6b05:{NFSU2_TR(0x4d6b05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d6b10:L4d6b10:{c.instructions+=14;NFSU2_TR(0x4d6b10);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6b12:{NFSU2_TR(0x4d6b12);
u8 U[4];
w4(U+0,u32(0x774a41ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6b17:{NFSU2_TR(0x4d6b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d6b1d:{NFSU2_TR(0x4d6b1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6b1e:{NFSU2_TR(0x4d6b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6b25:{NFSU2_TR(0x4d6b25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6b26:{NFSU2_TR(0x4d6b26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6b27:{NFSU2_TR(0x4d6b27);
__builtin_memmove((R+24),(R+4),4);
}
B4d6b29:{NFSU2_TR(0x4d6b29);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6b2d:{NFSU2_TR(0x4d6b2d);
u8 U[4];
w4(U+0,u32(0x796410ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d6b33:{NFSU2_TR(0x4d6b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d6b36:{NFSU2_TR(0x4d6b36);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d6b38:{NFSU2_TR(0x4d6b38);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d6b40:{NFSU2_TR(0x4d6b40);
if(r1(R+518)){{goto L4d6b52;}}
}
B4d6b42:L4d6b42:{c.instructions+=2;NFSU2_TR(0x4d6b42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6b43:{NFSU2_TR(0x4d6b43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6b48ull));
TAIL_STATIC(0x540a60u,540);
}
B4d6b48:L4d6b48:{c.instructions+=2;NFSU2_TR(0x4d6b48);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d6b4b:{NFSU2_TR(0x4d6b4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d6b52:L4d6b52:{c.instructions+=3;NFSU2_TR(0x4d6b52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d6b58:{NFSU2_TR(0x4d6b58);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d6b5a:{NFSU2_TR(0x4d6b5a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4d6b69;}}
}
B4d6b5c:L4d6b5c:{c.instructions+=2;NFSU2_TR(0x4d6b5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6b5d:{NFSU2_TR(0x4d6b5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6b62ull));
TAIL_STATIC(0x58b9a0u,58b);
}
B4d6b62:L4d6b62:{c.instructions+=2;NFSU2_TR(0x4d6b62);
__builtin_memmove((R+4),(R+0),4);
}
B4d6b64:{NFSU2_TR(0x4d6b64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6b69ull));
TAIL_STATIC(0x58bc40u,58b);
}
B4d6b69:L4d6b69:{c.instructions+=3;NFSU2_TR(0x4d6b69);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4d6b6f:{NFSU2_TR(0x4d6b6f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d6b71:{NFSU2_TR(0x4d6b71);
if(r1(R+518)){{goto L4d6b7e;}}
}
B4d6b73:L4d6b73:{c.instructions+=2;NFSU2_TR(0x4d6b73);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4d6b79:{NFSU2_TR(0x4d6b79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6b7eull));
TAIL_STATIC(0x54e6a0u,54e);
}
B4d6b7e:L4d6b7e:{c.instructions+=3;NFSU2_TR(0x4d6b7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d6b84:{NFSU2_TR(0x4d6b84);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d6b89:{NFSU2_TR(0x4d6b89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6b8eull));
TAIL_STATIC(0x4cbaf0u,4cb);
}
B4d6b8e:L4d6b8e:{c.instructions+=4;NFSU2_TR(0x4d6b8e);
__builtin_memmove((R+4),(R+24),4);
}
B4d6b90:{NFSU2_TR(0x4d6b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x78f544ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d6b97:{NFSU2_TR(0x4d6b97);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d6b9f:{NFSU2_TR(0x4d6b9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6ba4ull));
TAIL_STATIC(0x510d40u,510);
}
B4d6ba4:L4d6ba4:{c.instructions+=5;NFSU2_TR(0x4d6ba4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d6ba8:{NFSU2_TR(0x4d6ba8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d6ba9:{NFSU2_TR(0x4d6ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6bb0:{NFSU2_TR(0x4d6bb0);
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
B4d6bb3:{NFSU2_TR(0x4d6bb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d6bc0:L4d6bc0:{c.instructions+=16;NFSU2_TR(0x4d6bc0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6bc2:{NFSU2_TR(0x4d6bc2);
u8 U[4];
w4(U+0,u32(0x774a71ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6bc7:{NFSU2_TR(0x4d6bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d6bcd:{NFSU2_TR(0x4d6bcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6bce:{NFSU2_TR(0x4d6bce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6bd5:{NFSU2_TR(0x4d6bd5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6bd6:{NFSU2_TR(0x4d6bd6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6bd7:{NFSU2_TR(0x4d6bd7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6bd8:{NFSU2_TR(0x4d6bd8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6bd9:{NFSU2_TR(0x4d6bd9);
__builtin_memmove((R+28),(R+4),4);
}
B4d6bdb:{NFSU2_TR(0x4d6bdb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6bdf:{NFSU2_TR(0x4d6bdf);
u8 U[4];
w4(U+0,u32(0x796420ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4d6be5:{NFSU2_TR(0x4d6be5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d6be8:{NFSU2_TR(0x4d6be8);
__builtin_memmove((R+4),(R+12),4);
}
B4d6bea:{NFSU2_TR(0x4d6bea);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d6bf2:{NFSU2_TR(0x4d6bf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6bf7ull));
TAIL_STATIC(0x51f4e0u,51f);
}
B4d6bf7:L4d6bf7:{c.instructions+=3;NFSU2_TR(0x4d6bf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x904ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d6bfd:{NFSU2_TR(0x4d6bfd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d6bff:{NFSU2_TR(0x4d6bff);
if(r1(R+518)){{goto L4d6c0a;}}
}
B4d6c01:L4d6c01:{c.instructions+=2;NFSU2_TR(0x4d6c01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6c02:{NFSU2_TR(0x4d6c02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6c07ull));
TAIL_STATIC(0x540a60u,540);
}
B4d6c07:L4d6c07:{c.instructions+=1;NFSU2_TR(0x4d6c07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d6c0a:L4d6c0a:{c.instructions+=3;NFSU2_TR(0x4d6c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d6c10:{NFSU2_TR(0x4d6c10);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d6c12:{NFSU2_TR(0x4d6c12);
if(r1(R+518)){{goto L4d6c1d;}}
}
B4d6c14:L4d6c14:{c.instructions+=2;NFSU2_TR(0x4d6c14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6c15:{NFSU2_TR(0x4d6c15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6c1aull));
TAIL_STATIC(0x743b30u,743);
}
B4d6c1a:L4d6c1a:{c.instructions+=1;NFSU2_TR(0x4d6c1a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d6c1d:L4d6c1d:{c.instructions+=3;NFSU2_TR(0x4d6c1d);
__builtin_memmove((R+0),gp(0x8500d0),4);
}
B4d6c22:{NFSU2_TR(0x4d6c22);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d6c24:{NFSU2_TR(0x4d6c24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d6c2b;}}
}
B4d6c26:L4d6c26:{c.instructions+=1;NFSU2_TR(0x4d6c26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6c2bull));
TAIL_STATIC(0x5832b0u,583);
}
B4d6c2b:L4d6c2b:{c.instructions+=5;NFSU2_TR(0x4d6c2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x908ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d6c31:{NFSU2_TR(0x4d6c31);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x908ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d6c37:{NFSU2_TR(0x4d6c37);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d6c39:{NFSU2_TR(0x4d6c39);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d6c3e:{NFSU2_TR(0x4d6c3e);
if(r1(R+518)){{goto L4d6c59;}}
}
B4d6c40:L4d6c40:{c.instructions+=6;NFSU2_TR(0x4d6c40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4d6c42:{NFSU2_TR(0x4d6c42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d6c45:{NFSU2_TR(0x4d6c45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4d6c47:{NFSU2_TR(0x4d6c47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6c48:{NFSU2_TR(0x4d6c48);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6c4b:{NFSU2_TR(0x4d6c4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6c50ull));
TAIL_STATIC(0x575630u,575);
}
B4d6c50:L4d6c50:{c.instructions+=4;NFSU2_TR(0x4d6c50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4d6c52:{NFSU2_TR(0x4d6c52);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d6c55:{NFSU2_TR(0x4d6c55);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d6c57:{NFSU2_TR(0x4d6c57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d6c40u);}goto L4d6c40;}}
}
B4d6c59:L4d6c59:{c.instructions+=3;NFSU2_TR(0x4d6c59);
__builtin_memmove((R+4),(R+12),4);
}
B4d6c5b:{NFSU2_TR(0x4d6c5b);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d6c60:{NFSU2_TR(0x4d6c60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6c65ull));
TAIL_STATIC(0x4cbba0u,4cb);
}
B4d6c65:L4d6c65:{c.instructions+=3;NFSU2_TR(0x4d6c65);
__builtin_memmove((R+4),(R+28),4);
}
B4d6c67:{NFSU2_TR(0x4d6c67);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d6c6f:{NFSU2_TR(0x4d6c6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6c74ull));
TAIL_STATIC(0x510d40u,510);
}
B4d6c74:L4d6c74:{c.instructions+=7;NFSU2_TR(0x4d6c74);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d6c78:{NFSU2_TR(0x4d6c78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d6c79:{NFSU2_TR(0x4d6c79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d6c7a:{NFSU2_TR(0x4d6c7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d6c7b:{NFSU2_TR(0x4d6c7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6c82:{NFSU2_TR(0x4d6c82);
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
B4d6c85:{NFSU2_TR(0x4d6c85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d6c90:L4d6c90:{c.instructions+=8;NFSU2_TR(0x4d6c90);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6c92:{NFSU2_TR(0x4d6c92);
u8 U[4];
w4(U+0,u32(0x774a94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6c97:{NFSU2_TR(0x4d6c97);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d6c9d:{NFSU2_TR(0x4d6c9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6c9e:{NFSU2_TR(0x4d6c9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6ca5:{NFSU2_TR(0x4d6ca5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6ca6:{NFSU2_TR(0x4d6ca6);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6ca8:{NFSU2_TR(0x4d6ca8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6cadull));
TAIL_STATIC(0x575620u,575);
}
B4d6cad:L4d6cad:{c.instructions+=5;NFSU2_TR(0x4d6cad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d6cb0:{NFSU2_TR(0x4d6cb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4d6cb4:{NFSU2_TR(0x4d6cb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d6cb6:{NFSU2_TR(0x4d6cb6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d6cbe:{NFSU2_TR(0x4d6cbe);
if(r1(R+518)){{goto L4d6cdb;}}
}
B4d6cc0:L4d6cc0:{c.instructions+=4;NFSU2_TR(0x4d6cc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d6cc4:{NFSU2_TR(0x4d6cc4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6cc5:{NFSU2_TR(0x4d6cc5);
__builtin_memmove((R+4),(R+0),4);
}
B4d6cc7:{NFSU2_TR(0x4d6cc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6cccull));
TAIL_STATIC(0x4be960u,4be);
}
B4d6ccc:L4d6ccc:{c.instructions+=4;NFSU2_TR(0x4d6ccc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d6cd0:{NFSU2_TR(0x4d6cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6cd7:{NFSU2_TR(0x4d6cd7);
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
B4d6cda:{NFSU2_TR(0x4d6cda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d6cdb:L4d6cdb:{c.instructions+=5;NFSU2_TR(0x4d6cdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d6cdf:{NFSU2_TR(0x4d6cdf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d6ce1:{NFSU2_TR(0x4d6ce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6ce8:{NFSU2_TR(0x4d6ce8);
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
B4d6ceb:{NFSU2_TR(0x4d6ceb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d6cf0:L4d6cf0:{c.instructions+=5;NFSU2_TR(0x4d6cf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6cf1:{NFSU2_TR(0x4d6cf1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6cf2:{NFSU2_TR(0x4d6cf2);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6cf4:{NFSU2_TR(0x4d6cf4);
__builtin_memmove((R+28),(R+4),4);
}
B4d6cf6:{NFSU2_TR(0x4d6cf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6cfbull));
TAIL_STATIC(0x575620u,575);
}
B4d6cfb:L4d6cfb:{c.instructions+=7;NFSU2_TR(0x4d6cfb);
__builtin_memmove((R+24),(R+0),4);
}
B4d6cfd:{NFSU2_TR(0x4d6cfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d6d01:{NFSU2_TR(0x4d6d01);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6d03:{NFSU2_TR(0x4d6d03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6d04:{NFSU2_TR(0x4d6d04);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d6d07:{NFSU2_TR(0x4d6d07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6d08:{NFSU2_TR(0x4d6d08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6d0dull));
TAIL_STATIC(0x43dc00u,43d);
}
B4d6d0d:L4d6d0d:{c.instructions+=6;NFSU2_TR(0x4d6d0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d6d11:{NFSU2_TR(0x4d6d11);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6d12:{NFSU2_TR(0x4d6d12);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d6d15:{NFSU2_TR(0x4d6d15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6d16:{NFSU2_TR(0x4d6d16);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x27ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d6d1a:{NFSU2_TR(0x4d6d1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6d1full));
TAIL_STATIC(0x43dbd0u,43d);
}
B4d6d1f:L4d6d1f:{c.instructions+=15;NFSU2_TR(0x4d6d1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d6d23:{NFSU2_TR(0x4d6d23);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d6d27:{NFSU2_TR(0x4d6d27);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d6d2d:{NFSU2_TR(0x4d6d2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6d30:{NFSU2_TR(0x4d6d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6d33:{NFSU2_TR(0x4d6d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d6d36:{NFSU2_TR(0x4d6d36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d6d38:{NFSU2_TR(0x4d6d38);
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
B4d6d3b:{NFSU2_TR(0x4d6d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6d3e:{NFSU2_TR(0x4d6d3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4d6d40:{NFSU2_TR(0x4d6d40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d6d41:{NFSU2_TR(0x4d6d41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6d44:{NFSU2_TR(0x4d6d44);
w1(R+0,u8(0x1ull));
}
B4d6d46:{NFSU2_TR(0x4d6d46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d6d47:{NFSU2_TR(0x4d6d47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d6d50:L4d6d50:{c.instructions+=15;NFSU2_TR(0x4d6d50);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6d52:{NFSU2_TR(0x4d6d52);
u8 U[4];
w4(U+0,u32(0x774ab3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6d57:{NFSU2_TR(0x4d6d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d6d5d:{NFSU2_TR(0x4d6d5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6d5e:{NFSU2_TR(0x4d6d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6d65:{NFSU2_TR(0x4d6d65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B4d6d68:{NFSU2_TR(0x4d6d68);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d6d6c:{NFSU2_TR(0x4d6d6c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6d6d:{NFSU2_TR(0x4d6d6d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6d6e:{NFSU2_TR(0x4d6d6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6d6f:{NFSU2_TR(0x4d6d6f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6d70:{NFSU2_TR(0x4d6d70);
__builtin_memmove((R+24),(R+4),4);
}
B4d6d72:{NFSU2_TR(0x4d6d72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6d73:{NFSU2_TR(0x4d6d73);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6d77:{NFSU2_TR(0x4d6d77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6d7cull));
TAIL_STATIC(0x551de0u,551);
}
B4d6d7c:L4d6d7c:{c.instructions+=13;NFSU2_TR(0x4d6d7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d6d7f:{NFSU2_TR(0x4d6d7f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6d81:{NFSU2_TR(0x4d6d81);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4d6d83:{NFSU2_TR(0x4d6d83);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6d84:{NFSU2_TR(0x4d6d84);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6d85:{NFSU2_TR(0x4d6d85);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6d87:{NFSU2_TR(0x4d6d87);
u8 U[4];
w4(U+0,u32(0x796484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6d8c:{NFSU2_TR(0x4d6d8c);
u8 U[4];
w4(U+0,u32(0x796484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6d91:{NFSU2_TR(0x4d6d91);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d6d94:{NFSU2_TR(0x4d6d94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6d95:{NFSU2_TR(0x4d6d95);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6d99:{NFSU2_TR(0x4d6d99);
u8 U[4];
w4(U+0,u32(0x796474ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d6d9f:{NFSU2_TR(0x4d6d9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6da4ull));
TAIL_STATIC(0x542ca0u,542);
}
B4d6da4:L4d6da4:{c.instructions+=7;NFSU2_TR(0x4d6da4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d6da7:{NFSU2_TR(0x4d6da7);
u8 U[4];
w4(U+0,u32(0x44496a02ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6dac:{NFSU2_TR(0x4d6dac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6dad:{NFSU2_TR(0x4d6dad);
u8 U[5];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d6db2:{NFSU2_TR(0x4d6db2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6db8:{NFSU2_TR(0x4d6db8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d6dbf:{NFSU2_TR(0x4d6dbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6dc4ull));
TAIL_STATIC(0x5379c0u,537);
}
B4d6dc4:L4d6dc4:{c.instructions+=2;NFSU2_TR(0x4d6dc4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6dc5:{NFSU2_TR(0x4d6dc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6dcaull));
TAIL_STATIC(0x50ca00u,50c);
}
B4d6dca:L4d6dca:{c.instructions+=4;NFSU2_TR(0x4d6dca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d6dcd:{NFSU2_TR(0x4d6dcd);
u8 U[4];
w4(U+0,u32(0x44496a03ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6dd2:{NFSU2_TR(0x4d6dd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6dd3:{NFSU2_TR(0x4d6dd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6dd8ull));
TAIL_STATIC(0x5379c0u,537);
}
B4d6dd8:L4d6dd8:{c.instructions+=2;NFSU2_TR(0x4d6dd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6dd9:{NFSU2_TR(0x4d6dd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6ddeull));
TAIL_STATIC(0x50ca00u,50c);
}
B4d6dde:L4d6dde:{c.instructions+=6;NFSU2_TR(0x4d6dde);
__builtin_memmove((R+4),gp(0x836514),4);
}
B4d6de4:{NFSU2_TR(0x4d6de4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d6de7:{NFSU2_TR(0x4d6de7);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xf0ull))));
}
B4d6dea:{NFSU2_TR(0x4d6dea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4d6ded:{NFSU2_TR(0x4d6ded);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4d6df0:{NFSU2_TR(0x4d6df0);
if(r1(R+518)){{goto L4d6e00;}}
}
B4d6df2:L4d6df2:{c.instructions+=3;NFSU2_TR(0x4d6df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x424d7a17ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d6df9:{NFSU2_TR(0x4d6df9);
u8 U[4];
w4(U+0,u32(0x1335f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6dfe:{NFSU2_TR(0x4d6dfe);
{goto L4d6e0c;}
}
B4d6e00:L4d6e00:{c.instructions+=2;NFSU2_TR(0x4d6e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x4754130eull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d6e07:{NFSU2_TR(0x4d6e07);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6e0c:L4d6e0c:{c.instructions+=3;NFSU2_TR(0x4d6e0c);
u8 U[4];
w4(U+0,u32(0x1335f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6e11:{NFSU2_TR(0x4d6e11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6e12:{NFSU2_TR(0x4d6e12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6e17ull));
TAIL_STATIC(0x537a10u,537);
}
B4d6e17:L4d6e17:{c.instructions+=3;NFSU2_TR(0x4d6e17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d6e1a:{NFSU2_TR(0x4d6e1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6e1b:{NFSU2_TR(0x4d6e1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6e20ull));
TAIL_STATIC(0x50c900u,50c);
}
B4d6e20:L4d6e20:{c.instructions+=4;NFSU2_TR(0x4d6e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d6e23:{NFSU2_TR(0x4d6e23);
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
B4d6e26:{NFSU2_TR(0x4d6e26);
w4(R+4,u32(0x83a9e0ull));
}
B4d6e2b:{NFSU2_TR(0x4d6e2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6e30ull));
TAIL_STATIC(0x502fd0u,502);
}
B4d6e30:L4d6e30:{c.instructions+=4;NFSU2_TR(0x4d6e30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6e31:{NFSU2_TR(0x4d6e31);
u8 U[4];
w4(U+0,u32(0xeb406fecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6e36:{NFSU2_TR(0x4d6e36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6e37:{NFSU2_TR(0x4d6e37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6e3cull));
TAIL_STATIC(0x537b80u,537);
}
B4d6e3c:L4d6e3c:{c.instructions+=3;NFSU2_TR(0x4d6e3c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d6e3f:{NFSU2_TR(0x4d6e3f);
w4(R+12,u32(0x1ull));
}
B4d6e44:{NFSU2_TR(0x4d6e44);
{goto L4d6e48;}
}
B4d6e46:L4d6e46:{c.instructions+=1;NFSU2_TR(0x4d6e46);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4d6e48:L4d6e48:{c.instructions+=2;NFSU2_TR(0x4d6e48);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6e4a:{NFSU2_TR(0x4d6e4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6e4full));
TAIL_STATIC(0x575620u,575);
}
B4d6e4f:L4d6e4f:{c.instructions+=3;NFSU2_TR(0x4d6e4f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d6e52:{NFSU2_TR(0x4d6e52);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d6e54:{NFSU2_TR(0x4d6e54);
if(r1(R+518)){{goto L4d6e87;}}
}
B4d6e56:L4d6e56:{c.instructions+=13;NFSU2_TR(0x4d6e56);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d6e59:{NFSU2_TR(0x4d6e59);
u8 U[4];
w4(U+0,u32(0x79b9d4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d6e5f:{NFSU2_TR(0x4d6e5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d6e61:{NFSU2_TR(0x4d6e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6e64:{NFSU2_TR(0x4d6e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6e67:{NFSU2_TR(0x4d6e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6e6a:{NFSU2_TR(0x4d6e6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6e6d:{NFSU2_TR(0x4d6e6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6e70:{NFSU2_TR(0x4d6e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6e73:{NFSU2_TR(0x4d6e73);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d6e77:{NFSU2_TR(0x4d6e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x78f228ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d6e7e:{NFSU2_TR(0x4d6e7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w4(U+4,u32(0x78f21cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d6e85:{NFSU2_TR(0x4d6e85);
__builtin_memmove((R+20),(R+0),4);
}
B4d6e87:L4d6e87:{c.instructions+=6;NFSU2_TR(0x4d6e87);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6e88:{NFSU2_TR(0x4d6e88);
u8 U[4];
w4(U+0,u32(0x7963dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6e8d:{NFSU2_TR(0x4d6e8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d6e91:{NFSU2_TR(0x4d6e91);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6e93:{NFSU2_TR(0x4d6e93);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6e94:{NFSU2_TR(0x4d6e94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6e99ull));
TAIL_STATIC(0x50c960u,50c);
}
B4d6e99:L4d6e99:{c.instructions+=4;NFSU2_TR(0x4d6e99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d6e9c:{NFSU2_TR(0x4d6e9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d6ea0:{NFSU2_TR(0x4d6ea0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6ea1:{NFSU2_TR(0x4d6ea1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6ea6ull));
TAIL_STATIC(0x505450u,505);
}
B4d6ea6:L4d6ea6:{c.instructions+=3;NFSU2_TR(0x4d6ea6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6ea7:{NFSU2_TR(0x4d6ea7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6ea8:{NFSU2_TR(0x4d6ea8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6eadull));
TAIL_STATIC(0x537a10u,537);
}
B4d6ead:L4d6ead:{c.instructions+=3;NFSU2_TR(0x4d6ead);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6eaf:{NFSU2_TR(0x4d6eaf);
__builtin_memmove((R+28),(R+0),4);
}
B4d6eb1:{NFSU2_TR(0x4d6eb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6eb6ull));
TAIL_STATIC(0x575620u,575);
}
B4d6eb6:L4d6eb6:{c.instructions+=3;NFSU2_TR(0x4d6eb6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4d6eb9:{NFSU2_TR(0x4d6eb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d6ebb:{NFSU2_TR(0x4d6ebb);
if(r1(R+518)){{goto L4d6ecb;}}
}
B4d6ebd:L4d6ebd:{c.instructions+=4;NFSU2_TR(0x4d6ebd);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d6ec3:{NFSU2_TR(0x4d6ec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6ec6:{NFSU2_TR(0x4d6ec6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4d6ec9:{NFSU2_TR(0x4d6ec9);
{goto L4d6ecd;}
}
B4d6ecb:L4d6ecb:{c.instructions+=1;NFSU2_TR(0x4d6ecb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d6ecd:L4d6ecd:{c.instructions+=12;NFSU2_TR(0x4d6ecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d6ed0:{NFSU2_TR(0x4d6ed0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d6ed3:{NFSU2_TR(0x4d6ed3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d6ed5:{NFSU2_TR(0x4d6ed5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6ed6:{NFSU2_TR(0x4d6ed6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6ed9:{NFSU2_TR(0x4d6ed9);
u8 U[4];
w4(U+0,u32(0x796464ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6ede:{NFSU2_TR(0x4d6ede);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6ee1:{NFSU2_TR(0x4d6ee1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d6ee5:{NFSU2_TR(0x4d6ee5);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6ee7:{NFSU2_TR(0x4d6ee7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6ee8:{NFSU2_TR(0x4d6ee8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4d6eea:{NFSU2_TR(0x4d6eea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6eefull));
TAIL_STATIC(0x50c960u,50c);
}
B4d6eef:L4d6eef:{c.instructions+=5;NFSU2_TR(0x4d6eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d6ef2:{NFSU2_TR(0x4d6ef2);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d6ef6:{NFSU2_TR(0x4d6ef6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6ef7:{NFSU2_TR(0x4d6ef7);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6efb:{NFSU2_TR(0x4d6efb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6f00ull));
TAIL_STATIC(0x505450u,505);
}
B4d6f00:L4d6f00:{c.instructions+=4;NFSU2_TR(0x4d6f00);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d6f04:{NFSU2_TR(0x4d6f04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6f05:{NFSU2_TR(0x4d6f05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6f06:{NFSU2_TR(0x4d6f06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6f0bull));
TAIL_STATIC(0x537a10u,537);
}
B4d6f0b:L4d6f0b:{c.instructions+=3;NFSU2_TR(0x4d6f0b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6f0d:{NFSU2_TR(0x4d6f0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6f11:{NFSU2_TR(0x4d6f11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6f16ull));
TAIL_STATIC(0x575620u,575);
}
B4d6f16:L4d6f16:{c.instructions+=3;NFSU2_TR(0x4d6f16);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4d6f19:{NFSU2_TR(0x4d6f19);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d6f1b:{NFSU2_TR(0x4d6f1b);
if(r1(R+518)){{goto L4d6f2f;}}
}
B4d6f1d:L4d6f1d:{c.instructions+=5;NFSU2_TR(0x4d6f1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d6f21:{NFSU2_TR(0x4d6f21);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d6f27:{NFSU2_TR(0x4d6f27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6f2a:{NFSU2_TR(0x4d6f2a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4d6f2d:{NFSU2_TR(0x4d6f2d);
{goto L4d6f31;}
}
B4d6f2f:L4d6f2f:{c.instructions+=1;NFSU2_TR(0x4d6f2f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d6f31:L4d6f31:{c.instructions+=11;NFSU2_TR(0x4d6f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d6f34:{NFSU2_TR(0x4d6f34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d6f36:{NFSU2_TR(0x4d6f36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6f37:{NFSU2_TR(0x4d6f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6f3a:{NFSU2_TR(0x4d6f3a);
u8 U[4];
w4(U+0,u32(0x796450ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6f3f:{NFSU2_TR(0x4d6f3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6f42:{NFSU2_TR(0x4d6f42);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4d6f44:{NFSU2_TR(0x4d6f44);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d6f48:{NFSU2_TR(0x4d6f48);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6f4a:{NFSU2_TR(0x4d6f4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6f4b:{NFSU2_TR(0x4d6f4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6f50ull));
TAIL_STATIC(0x50c960u,50c);
}
B4d6f50:L4d6f50:{c.instructions+=4;NFSU2_TR(0x4d6f50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d6f53:{NFSU2_TR(0x4d6f53);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d6f57:{NFSU2_TR(0x4d6f57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6f58:{NFSU2_TR(0x4d6f58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6f5dull));
TAIL_STATIC(0x505450u,505);
}
B4d6f5d:L4d6f5d:{c.instructions+=3;NFSU2_TR(0x4d6f5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6f5e:{NFSU2_TR(0x4d6f5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6f5f:{NFSU2_TR(0x4d6f5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6f64ull));
TAIL_STATIC(0x5379c0u,537);
}
B4d6f64:L4d6f64:{c.instructions+=4;NFSU2_TR(0x4d6f64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4d6f67:{NFSU2_TR(0x4d6f67);
__builtin_memmove((R+4),(R+20),4);
}
B4d6f69:{NFSU2_TR(0x4d6f69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6f6c:{NFSU2_TR(0x4d6f6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6f71ull));
TAIL_STATIC(0x51f220u,51f);
}
B4d6f71:L4d6f71:{c.instructions+=3;NFSU2_TR(0x4d6f71);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6f72:{NFSU2_TR(0x4d6f72);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d6f75:{NFSU2_TR(0x4d6f75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6f7aull));
TAIL_STATIC(0x52e770u,52e);
}
B4d6f7a:L4d6f7a:{c.instructions+=3;NFSU2_TR(0x4d6f7a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4d6f7b:{NFSU2_TR(0x4d6f7b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d6f7e:{NFSU2_TR(0x4d6f7e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d6e46u);}goto L4d6e46;}}
}
B4d6f84:L4d6f84:{c.instructions+=12;NFSU2_TR(0x4d6f84);
__builtin_memmove((R+0),gp(0x836514),4);
}
B4d6f89:{NFSU2_TR(0x4d6f89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d6f8c:{NFSU2_TR(0x4d6f8c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0ull))));
}
B4d6f91:{NFSU2_TR(0x4d6f91);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
}
B4d6f93:{NFSU2_TR(0x4d6f93);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4d6f95:{NFSU2_TR(0x4d6f95);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4d6f97:{NFSU2_TR(0x4d6f97);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4d6f98:{NFSU2_TR(0x4d6f98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6f9e:{NFSU2_TR(0x4d6f9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f6cbcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4d6fa5:{NFSU2_TR(0x4d6fa5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6fa6:{NFSU2_TR(0x4d6fa6);
u8 U[4];
w4(U+0,u32(0x796440ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6fab:{NFSU2_TR(0x4d6fab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6fb0ull));
TAIL_STATIC(0x505450u,505);
}
B4d6fb0:L4d6fb0:{c.instructions+=3;NFSU2_TR(0x4d6fb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6fb1:{NFSU2_TR(0x4d6fb1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6fb2:{NFSU2_TR(0x4d6fb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6fb7ull));
TAIL_STATIC(0x537a10u,537);
}
B4d6fb7:L4d6fb7:{c.instructions+=3;NFSU2_TR(0x4d6fb7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d6fba:{NFSU2_TR(0x4d6fba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6fbb:{NFSU2_TR(0x4d6fbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6fc0ull));
TAIL_STATIC(0x50c900u,50c);
}
B4d6fc0:L4d6fc0:{c.instructions+=8;NFSU2_TR(0x4d6fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d6fc6:{NFSU2_TR(0x4d6fc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f6cbcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4d6fcd:{NFSU2_TR(0x4d6fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d6fd0:{NFSU2_TR(0x4d6fd0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d6fd3:{NFSU2_TR(0x4d6fd3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6fd4:{NFSU2_TR(0x4d6fd4);
u8 U[4];
w4(U+0,u32(0x426c7b4dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6fd9:{NFSU2_TR(0x4d6fd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6fda:{NFSU2_TR(0x4d6fda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6fdfull));
TAIL_STATIC(0x537a10u,537);
}
B4d6fdf:L4d6fdf:{c.instructions+=3;NFSU2_TR(0x4d6fdf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d6fe2:{NFSU2_TR(0x4d6fe2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d6fe3:{NFSU2_TR(0x4d6fe3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d6fe8ull));
TAIL_STATIC(0x50c900u,50c);
}
B4d6fe8:L4d6fe8:{c.instructions+=10;NFSU2_TR(0x4d6fe8);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d6fec:{NFSU2_TR(0x4d6fec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d6fef:{NFSU2_TR(0x4d6fef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d6ff0:{NFSU2_TR(0x4d6ff0);
__builtin_memmove((R+0),(R+24),4);
}
B4d6ff2:{NFSU2_TR(0x4d6ff2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d6ff3:{NFSU2_TR(0x4d6ff3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d6ff4:{NFSU2_TR(0x4d6ff4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d6ff5:{NFSU2_TR(0x4d6ff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d6ffc:{NFSU2_TR(0x4d6ffc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d6fff:{NFSU2_TR(0x4d6fff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x4d6,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
