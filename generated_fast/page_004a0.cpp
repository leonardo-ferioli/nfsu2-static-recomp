#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_49d(u8* __restrict R,Cpu& c);
u32 body_49e(u8* __restrict R,Cpu& c);
u32 body_4a1(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_556(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_586(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_73e(u8* __restrict R,Cpu& c);
u32 body_740(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4a0,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4a0,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4a0(u8* __restrict R,Cpu& c);
u32 page_4a0(Cpu& c){return body_4a0(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4a0(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4a0000:goto L4a0000;
case 0x4a0005:c.instructions+=7;goto B4a0005;
case 0x4a0008:c.instructions+=6;goto B4a0008;
case 0x4a0009:c.instructions+=5;goto B4a0009;
case 0x4a000a:c.instructions+=4;goto B4a000a;
case 0x4a0010:c.instructions+=3;goto B4a0010;
case 0x4a0012:c.instructions+=2;goto B4a0012;
case 0x4a0014:c.instructions+=1;goto B4a0014;
case 0x4a0016:goto L4a0016;
case 0x4a0017:goto L4a0017;
case 0x4a001a:c.instructions+=3;goto B4a001a;
case 0x4a001f:c.instructions+=2;goto B4a001f;
case 0x4a0020:c.instructions+=1;goto B4a0020;
case 0x4a0025:goto L4a0025;
case 0x4a0028:c.instructions+=2;goto B4a0028;
case 0x4a002a:c.instructions+=1;goto B4a002a;
case 0x4a002c:goto L4a002c;
case 0x4a0031:c.instructions+=2;goto B4a0031;
case 0x4a0032:c.instructions+=1;goto B4a0032;
case 0x4a0037:goto L4a0037;
case 0x4a003a:c.instructions+=2;goto B4a003a;
case 0x4a003c:c.instructions+=1;goto B4a003c;
case 0x4a003e:goto L4a003e;
case 0x4a0043:c.instructions+=2;goto B4a0043;
case 0x4a0044:c.instructions+=1;goto B4a0044;
case 0x4a0049:goto L4a0049;
case 0x4a004c:c.instructions+=2;goto B4a004c;
case 0x4a004e:c.instructions+=1;goto B4a004e;
case 0x4a0050:goto L4a0050;
case 0x4a0055:c.instructions+=2;goto B4a0055;
case 0x4a0056:c.instructions+=1;goto B4a0056;
case 0x4a005b:goto L4a005b;
case 0x4a005e:c.instructions+=2;goto B4a005e;
case 0x4a0060:c.instructions+=1;goto B4a0060;
case 0x4a0062:goto L4a0062;
case 0x4a0065:c.instructions+=2;goto B4a0065;
case 0x4a0067:c.instructions+=1;goto B4a0067;
case 0x4a0069:goto L4a0069;
case 0x4a006b:c.instructions+=1;goto B4a006b;
case 0x4a006d:goto L4a006d;
case 0x4a0070:c.instructions+=2;goto B4a0070;
case 0x4a0072:c.instructions+=1;goto B4a0072;
case 0x4a0074:goto L4a0074;
case 0x4a0076:goto L4a0076;
case 0x4a0079:c.instructions+=2;goto B4a0079;
case 0x4a007b:c.instructions+=1;goto B4a007b;
case 0x4a007d:goto L4a007d;
case 0x4a007e:goto L4a007e;
case 0x4a0081:c.instructions+=3;goto B4a0081;
case 0x4a0082:c.instructions+=2;goto B4a0082;
case 0x4a0083:c.instructions+=1;goto B4a0083;
case 0x4a0090:goto L4a0090;
case 0x4a0095:c.instructions+=1;goto B4a0095;
case 0x4a009a:goto L4a009a;
case 0x4a009c:c.instructions+=2;goto B4a009c;
case 0x4a00a0:c.instructions+=1;goto B4a00a0;
case 0x4a00a2:goto L4a00a2;
case 0x4a00a6:c.instructions+=5;goto B4a00a6;
case 0x4a00aa:c.instructions+=4;goto B4a00aa;
case 0x4a00ab:c.instructions+=3;goto B4a00ab;
case 0x4a00ac:c.instructions+=2;goto B4a00ac;
case 0x4a00ad:c.instructions+=1;goto B4a00ad;
case 0x4a00b2:goto L4a00b2;
case 0x4a00b5:c.instructions+=1;goto B4a00b5;
case 0x4a00b6:goto L4a00b6;
case 0x4a00bb:c.instructions+=1;goto B4a00bb;
case 0x4a00bd:goto L4a00bd;
case 0x4a00be:c.instructions+=9;goto B4a00be;
case 0x4a00c2:c.instructions+=8;goto B4a00c2;
case 0x4a00c4:c.instructions+=7;goto B4a00c4;
case 0x4a00c9:c.instructions+=6;goto B4a00c9;
case 0x4a00ce:c.instructions+=5;goto B4a00ce;
case 0x4a00d3:c.instructions+=4;goto B4a00d3;
case 0x4a00d8:c.instructions+=3;goto B4a00d8;
case 0x4a00dd:c.instructions+=2;goto B4a00dd;
case 0x4a00de:c.instructions+=1;goto B4a00de;
case 0x4a00e3:goto L4a00e3;
case 0x4a00e6:c.instructions+=1;goto B4a00e6;
case 0x4a00e7:goto L4a00e7;
case 0x4a00eb:c.instructions+=5;goto B4a00eb;
case 0x4a00ef:c.instructions+=4;goto B4a00ef;
case 0x4a00f0:c.instructions+=3;goto B4a00f0;
case 0x4a00f1:c.instructions+=2;goto B4a00f1;
case 0x4a00f2:c.instructions+=1;goto B4a00f2;
case 0x4a00f7:goto L4a00f7;
case 0x4a00f8:c.instructions+=7;goto B4a00f8;
case 0x4a00fc:c.instructions+=6;goto B4a00fc;
case 0x4a0101:c.instructions+=5;goto B4a0101;
case 0x4a0106:c.instructions+=4;goto B4a0106;
case 0x4a010b:c.instructions+=3;goto B4a010b;
case 0x4a0110:c.instructions+=2;goto B4a0110;
case 0x4a0111:c.instructions+=1;goto B4a0111;
case 0x4a0116:goto L4a0116;
case 0x4a0119:c.instructions+=1;goto B4a0119;
case 0x4a0120:goto L4a0120;
case 0x4a0122:c.instructions+=3;goto B4a0122;
case 0x4a0127:c.instructions+=2;goto B4a0127;
case 0x4a0129:c.instructions+=1;goto B4a0129;
case 0x4a012e:goto L4a012e;
case 0x4a0131:c.instructions+=1;goto B4a0131;
case 0x4a0140:goto L4a0140;
case 0x4a0141:c.instructions+=4;goto B4a0141;
case 0x4a0143:c.instructions+=3;goto B4a0143;
case 0x4a014a:c.instructions+=2;goto B4a014a;
case 0x4a0151:c.instructions+=1;goto B4a0151;
case 0x4a0153:goto L4a0153;
case 0x4a0155:c.instructions+=1;goto B4a0155;
case 0x4a015a:goto L4a015a;
case 0x4a015d:c.instructions+=3;goto B4a015d;
case 0x4a015f:c.instructions+=2;goto B4a015f;
case 0x4a0164:c.instructions+=1;goto B4a0164;
case 0x4a0169:goto L4a0169;
case 0x4a0173:c.instructions+=1;goto B4a0173;
case 0x4a0175:goto L4a0175;
case 0x4a017a:c.instructions+=2;goto B4a017a;
case 0x4a017c:c.instructions+=1;goto B4a017c;
case 0x4a017e:goto L4a017e;
case 0x4a0183:c.instructions+=1;goto B4a0183;
case 0x4a0188:goto L4a0188;
case 0x4a018d:goto L4a018d;
case 0x4a018f:c.instructions+=2;goto B4a018f;
case 0x4a0194:c.instructions+=1;goto B4a0194;
case 0x4a0199:goto L4a0199;
case 0x4a019f:c.instructions+=2;goto B4a019f;
case 0x4a01a1:c.instructions+=1;goto B4a01a1;
case 0x4a01a3:goto L4a01a3;
case 0x4a01a5:c.instructions+=2;goto B4a01a5;
case 0x4a01a7:c.instructions+=1;goto B4a01a7;
case 0x4a01a9:goto L4a01a9;
case 0x4a01af:c.instructions+=3;goto B4a01af;
case 0x4a01b1:c.instructions+=2;goto B4a01b1;
case 0x4a01bb:c.instructions+=1;goto B4a01bb;
case 0x4a01bd:goto L4a01bd;
case 0x4a01bf:c.instructions+=2;goto B4a01bf;
case 0x4a01c1:c.instructions+=1;goto B4a01c1;
case 0x4a01c3:goto L4a01c3;
case 0x4a01c8:c.instructions+=2;goto B4a01c8;
case 0x4a01d2:c.instructions+=1;goto B4a01d2;
case 0x4a01d7:goto L4a01d7;
case 0x4a01da:c.instructions+=2;goto B4a01da;
case 0x4a01dc:c.instructions+=1;goto B4a01dc;
case 0x4a01de:goto L4a01de;
case 0x4a01e4:c.instructions+=4;goto B4a01e4;
case 0x4a01e6:c.instructions+=3;goto B4a01e6;
case 0x4a01e7:c.instructions+=2;goto B4a01e7;
case 0x4a01e8:c.instructions+=1;goto B4a01e8;
case 0x4a01ed:goto L4a01ed;
case 0x4a01f0:goto L4a01f0;
case 0x4a01f1:c.instructions+=1;goto B4a01f1;
case 0x4a0200:goto L4a0200;
case 0x4a0205:c.instructions+=1;goto B4a0205;
case 0x4a020a:goto L4a020a;
case 0x4a020c:c.instructions+=1;goto B4a020c;
case 0x4a020e:goto L4a020e;
case 0x4a0213:c.instructions+=1;goto B4a0213;
case 0x4a0215:goto L4a0215;
case 0x4a021a:goto L4a021a;
case 0x4a021f:goto L4a021f;
case 0x4a0222:c.instructions+=8;goto B4a0222;
case 0x4a0223:c.instructions+=7;goto B4a0223;
case 0x4a0227:c.instructions+=6;goto B4a0227;
case 0x4a022c:c.instructions+=5;goto B4a022c;
case 0x4a0231:c.instructions+=4;goto B4a0231;
case 0x4a0236:c.instructions+=3;goto B4a0236;
case 0x4a023b:c.instructions+=2;goto B4a023b;
case 0x4a023c:c.instructions+=1;goto B4a023c;
case 0x4a0241:goto L4a0241;
case 0x4a0244:c.instructions+=1;goto B4a0244;
case 0x4a0250:goto L4a0250;
case 0x4a0251:c.instructions+=4;goto B4a0251;
case 0x4a0253:c.instructions+=3;goto B4a0253;
case 0x4a0256:c.instructions+=2;goto B4a0256;
case 0x4a0258:c.instructions+=1;goto B4a0258;
case 0x4a025a:goto L4a025a;
case 0x4a025f:c.instructions+=2;goto B4a025f;
case 0x4a0260:c.instructions+=1;goto B4a0260;
case 0x4a0261:goto L4a0261;
case 0x4a0263:c.instructions+=2;goto B4a0263;
case 0x4a0266:c.instructions+=1;goto B4a0266;
case 0x4a0268:goto L4a0268;
case 0x4a026b:c.instructions+=1;goto B4a026b;
case 0x4a026d:goto L4a026d;
case 0x4a026f:c.instructions+=1;goto B4a026f;
case 0x4a0271:goto L4a0271;
case 0x4a0274:c.instructions+=1;goto B4a0274;
case 0x4a0276:goto L4a0276;
case 0x4a027b:c.instructions+=2;goto B4a027b;
case 0x4a027c:c.instructions+=1;goto B4a027c;
case 0x4a027d:goto L4a027d;
case 0x4a0281:c.instructions+=3;goto B4a0281;
case 0x4a0282:c.instructions+=2;goto B4a0282;
case 0x4a0283:c.instructions+=1;goto B4a0283;
case 0x4a0288:goto L4a0288;
case 0x4a028a:c.instructions+=3;goto B4a028a;
case 0x4a028d:c.instructions+=2;goto B4a028d;
case 0x4a028f:c.instructions+=1;goto B4a028f;
case 0x4a0291:goto L4a0291;
case 0x4a0295:c.instructions+=1;goto B4a0295;
case 0x4a0297:goto L4a0297;
case 0x4a0299:c.instructions+=1;goto B4a0299;
case 0x4a029e:goto L4a029e;
case 0x4a02a0:c.instructions+=1;goto B4a02a0;
case 0x4a02a2:goto L4a02a2;
case 0x4a02a5:c.instructions+=9;goto B4a02a5;
case 0x4a02a7:c.instructions+=8;goto B4a02a7;
case 0x4a02aa:c.instructions+=7;goto B4a02aa;
case 0x4a02ad:c.instructions+=6;goto B4a02ad;
case 0x4a02ae:c.instructions+=5;goto B4a02ae;
case 0x4a02af:c.instructions+=4;goto B4a02af;
case 0x4a02b0:c.instructions+=3;goto B4a02b0;
case 0x4a02b5:c.instructions+=2;goto B4a02b5;
case 0x4a02ba:c.instructions+=1;goto B4a02ba;
case 0x4a02bb:goto L4a02bb;
case 0x4a02bc:c.instructions+=3;goto B4a02bc;
case 0x4a02c1:c.instructions+=2;goto B4a02c1;
case 0x4a02c2:c.instructions+=1;goto B4a02c2;
case 0x4a02d0:goto L4a02d0;
case 0x4a02d3:c.instructions+=2;goto B4a02d3;
case 0x4a02d5:c.instructions+=1;goto B4a02d5;
case 0x4a02d7:goto L4a02d7;
case 0x4a02de:c.instructions+=1;goto B4a02de;
case 0x4a02e0:goto L4a02e0;
case 0x4a02e5:goto L4a02e5;
case 0x4a02e7:c.instructions+=1;goto B4a02e7;
case 0x4a02e9:goto L4a02e9;
case 0x4a02ef:c.instructions+=7;goto B4a02ef;
case 0x4a02f1:c.instructions+=6;goto B4a02f1;
case 0x4a02f4:c.instructions+=5;goto B4a02f4;
case 0x4a02f7:c.instructions+=4;goto B4a02f7;
case 0x4a02f8:c.instructions+=3;goto B4a02f8;
case 0x4a02fd:c.instructions+=2;goto B4a02fd;
case 0x4a0302:c.instructions+=1;goto B4a0302;
case 0x4a0303:goto L4a0303;
case 0x4a0307:c.instructions+=2;goto B4a0307;
case 0x4a030d:c.instructions+=1;goto B4a030d;
case 0x4a030f:goto L4a030f;
case 0x4a0314:c.instructions+=1;goto B4a0314;
case 0x4a0315:goto L4a0315;
case 0x4a0317:c.instructions+=2;goto B4a0317;
case 0x4a031a:c.instructions+=1;goto B4a031a;
case 0x4a031c:goto L4a031c;
case 0x4a031f:c.instructions+=1;goto B4a031f;
case 0x4a0321:goto L4a0321;
case 0x4a0323:c.instructions+=1;goto B4a0323;
case 0x4a0325:goto L4a0325;
case 0x4a0328:c.instructions+=1;goto B4a0328;
case 0x4a032a:goto L4a032a;
case 0x4a032f:c.instructions+=1;goto B4a032f;
case 0x4a0330:goto L4a0330;
case 0x4a0335:goto L4a0335;
case 0x4a0337:c.instructions+=1;goto B4a0337;
case 0x4a0339:goto L4a0339;
case 0x4a033e:c.instructions+=1;goto B4a033e;
case 0x4a033f:goto L4a033f;
case 0x4a0345:c.instructions+=5;goto B4a0345;
case 0x4a034b:c.instructions+=4;goto B4a034b;
case 0x4a034d:c.instructions+=3;goto B4a034d;
case 0x4a0350:c.instructions+=2;goto B4a0350;
case 0x4a0355:c.instructions+=1;goto B4a0355;
case 0x4a0357:goto L4a0357;
case 0x4a035c:goto L4a035c;
case 0x4a0360:goto L4a0360;
case 0x4a0363:c.instructions+=7;goto B4a0363;
case 0x4a0364:c.instructions+=6;goto B4a0364;
case 0x4a0365:c.instructions+=5;goto B4a0365;
case 0x4a0366:c.instructions+=4;goto B4a0366;
case 0x4a0367:c.instructions+=3;goto B4a0367;
case 0x4a0369:c.instructions+=2;goto B4a0369;
case 0x4a036e:c.instructions+=1;goto B4a036e;
case 0x4a0370:goto L4a0370;
case 0x4a0377:c.instructions+=2;goto B4a0377;
case 0x4a0379:c.instructions+=1;goto B4a0379;
case 0x4a037b:goto L4a037b;
case 0x4a037c:c.instructions+=2;goto B4a037c;
case 0x4a0381:c.instructions+=1;goto B4a0381;
case 0x4a0386:goto L4a0386;
case 0x4a0387:c.instructions+=6;goto B4a0387;
case 0x4a038c:c.instructions+=5;goto B4a038c;
case 0x4a038e:c.instructions+=4;goto B4a038e;
case 0x4a0392:c.instructions+=3;goto B4a0392;
case 0x4a0394:c.instructions+=2;goto B4a0394;
case 0x4a0395:c.instructions+=1;goto B4a0395;
case 0x4a039a:goto L4a039a;
case 0x4a039d:c.instructions+=2;goto B4a039d;
case 0x4a03a2:c.instructions+=1;goto B4a03a2;
case 0x4a03a7:goto L4a03a7;
case 0x4a03a9:c.instructions+=1;goto B4a03a9;
case 0x4a03ab:goto L4a03ab;
case 0x4a03ad:c.instructions+=1;goto B4a03ad;
case 0x4a03b2:goto L4a03b2;
case 0x4a03b4:goto L4a03b4;
case 0x4a03b6:c.instructions+=1;goto B4a03b6;
case 0x4a03bb:goto L4a03bb;
case 0x4a03be:c.instructions+=2;goto B4a03be;
case 0x4a03bf:c.instructions+=1;goto B4a03bf;
case 0x4a03c4:goto L4a03c4;
case 0x4a03c5:c.instructions+=4;goto B4a03c5;
case 0x4a03c9:c.instructions+=3;goto B4a03c9;
case 0x4a03ca:c.instructions+=2;goto B4a03ca;
case 0x4a03cb:c.instructions+=1;goto B4a03cb;
case 0x4a03d0:goto L4a03d0;
case 0x4a03d3:c.instructions+=1;goto B4a03d3;
case 0x4a03d4:goto L4a03d4;
case 0x4a03d5:c.instructions+=2;goto B4a03d5;
case 0x4a03d8:c.instructions+=1;goto B4a03d8;
case 0x4a03da:goto L4a03da;
case 0x4a03db:c.instructions+=5;goto B4a03db;
case 0x4a03dc:c.instructions+=4;goto B4a03dc;
case 0x4a03dd:c.instructions+=3;goto B4a03dd;
case 0x4a03de:c.instructions+=2;goto B4a03de;
case 0x4a03e1:c.instructions+=1;goto B4a03e1;
case 0x4a03f0:goto L4a03f0;
case 0x4a03f2:c.instructions+=13;goto B4a03f2;
case 0x4a03f7:c.instructions+=12;goto B4a03f7;
case 0x4a03fd:c.instructions+=11;goto B4a03fd;
case 0x4a03fe:c.instructions+=10;goto B4a03fe;
case 0x4a0405:c.instructions+=9;goto B4a0405;
case 0x4a0406:c.instructions+=8;goto B4a0406;
case 0x4a0407:c.instructions+=7;goto B4a0407;
case 0x4a0409:c.instructions+=6;goto B4a0409;
case 0x4a040d:c.instructions+=5;goto B4a040d;
case 0x4a0413:c.instructions+=4;goto B4a0413;
case 0x4a0416:c.instructions+=3;goto B4a0416;
case 0x4a0418:c.instructions+=2;goto B4a0418;
case 0x4a0420:c.instructions+=1;goto B4a0420;
case 0x4a0422:goto L4a0422;
case 0x4a0423:c.instructions+=1;goto B4a0423;
case 0x4a0428:goto L4a0428;
case 0x4a042b:c.instructions+=1;goto B4a042b;
case 0x4a0432:goto L4a0432;
case 0x4a0437:goto L4a0437;
case 0x4a0439:c.instructions+=1;goto B4a0439;
case 0x4a043e:goto L4a043e;
case 0x4a0440:c.instructions+=3;goto B4a0440;
case 0x4a0447:c.instructions+=2;goto B4a0447;
case 0x4a044f:c.instructions+=1;goto B4a044f;
case 0x4a0454:goto L4a0454;
case 0x4a0458:c.instructions+=4;goto B4a0458;
case 0x4a0459:c.instructions+=3;goto B4a0459;
case 0x4a0460:c.instructions+=2;goto B4a0460;
case 0x4a0463:c.instructions+=1;goto B4a0463;
case 0x4a0470:goto L4a0470;
case 0x4a0474:c.instructions+=4;goto B4a0474;
case 0x4a0479:c.instructions+=3;goto B4a0479;
case 0x4a047a:c.instructions+=2;goto B4a047a;
case 0x4a047c:c.instructions+=1;goto B4a047c;
case 0x4a047e:goto L4a047e;
case 0x4a0483:c.instructions+=1;goto B4a0483;
case 0x4a0485:goto L4a0485;
case 0x4a0488:c.instructions+=4;goto B4a0488;
case 0x4a048a:c.instructions+=3;goto B4a048a;
case 0x4a048f:c.instructions+=2;goto B4a048f;
case 0x4a0490:c.instructions+=1;goto B4a0490;
case 0x4a0495:goto L4a0495;
case 0x4a0498:c.instructions+=2;goto B4a0498;
case 0x4a0499:c.instructions+=1;goto B4a0499;
case 0x4a049c:goto L4a049c;
case 0x4a049f:c.instructions+=2;goto B4a049f;
case 0x4a04a0:c.instructions+=1;goto B4a04a0;
case 0x4a04a5:goto L4a04a5;
case 0x4a04a8:c.instructions+=5;goto B4a04a8;
case 0x4a04aa:c.instructions+=4;goto B4a04aa;
case 0x4a04af:c.instructions+=3;goto B4a04af;
case 0x4a04b0:c.instructions+=2;goto B4a04b0;
case 0x4a04b7:c.instructions+=1;goto B4a04b7;
case 0x4a04bc:goto L4a04bc;
case 0x4a04bf:goto L4a04bf;
case 0x4a04c0:c.instructions+=1;goto B4a04c0;
case 0x4a04d0:goto L4a04d0;
case 0x4a04d3:c.instructions+=5;goto B4a04d3;
case 0x4a04d5:c.instructions+=4;goto B4a04d5;
case 0x4a04d6:c.instructions+=3;goto B4a04d6;
case 0x4a04d8:c.instructions+=2;goto B4a04d8;
case 0x4a04dd:c.instructions+=1;goto B4a04dd;
case 0x4a04e1:goto L4a04e1;
case 0x4a04e3:goto L4a04e3;
case 0x4a04e6:c.instructions+=15;goto B4a04e6;
case 0x4a04ea:c.instructions+=14;goto B4a04ea;
case 0x4a04ed:c.instructions+=13;goto B4a04ed;
case 0x4a04ef:c.instructions+=12;goto B4a04ef;
case 0x4a04f1:c.instructions+=11;goto B4a04f1;
case 0x4a04f5:c.instructions+=10;goto B4a04f5;
case 0x4a04f6:c.instructions+=9;goto B4a04f6;
case 0x4a04fe:c.instructions+=8;goto B4a04fe;
case 0x4a0506:c.instructions+=7;goto B4a0506;
case 0x4a050e:c.instructions+=6;goto B4a050e;
case 0x4a0516:c.instructions+=5;goto B4a0516;
case 0x4a051e:c.instructions+=4;goto B4a051e;
case 0x4a0526:c.instructions+=3;goto B4a0526;
case 0x4a052e:c.instructions+=2;goto B4a052e;
case 0x4a0536:c.instructions+=1;goto B4a0536;
case 0x4a0539:goto L4a0539;
case 0x4a053a:c.instructions+=2;goto B4a053a;
case 0x4a053d:c.instructions+=1;goto B4a053d;
case 0x4a0540:goto L4a0540;
case 0x4a0541:c.instructions+=7;goto B4a0541;
case 0x4a0542:c.instructions+=6;goto B4a0542;
case 0x4a0543:c.instructions+=5;goto B4a0543;
case 0x4a0545:c.instructions+=4;goto B4a0545;
case 0x4a054b:c.instructions+=3;goto B4a054b;
case 0x4a054e:c.instructions+=2;goto B4a054e;
case 0x4a054f:c.instructions+=1;goto B4a054f;
case 0x4a0555:goto L4a0555;
case 0x4a0556:c.instructions+=1;goto B4a0556;
case 0x4a055c:goto L4a055c;
case 0x4a0560:c.instructions+=8;goto B4a0560;
case 0x4a0563:c.instructions+=7;goto B4a0563;
case 0x4a0567:c.instructions+=6;goto B4a0567;
case 0x4a056a:c.instructions+=5;goto B4a056a;
case 0x4a056b:c.instructions+=4;goto B4a056b;
case 0x4a0570:c.instructions+=3;goto B4a0570;
case 0x4a0571:c.instructions+=2;goto B4a0571;
case 0x4a0576:c.instructions+=1;goto B4a0576;
case 0x4a057b:goto L4a057b;
case 0x4a057e:c.instructions+=3;goto B4a057e;
case 0x4a057f:c.instructions+=2;goto B4a057f;
case 0x4a0580:c.instructions+=1;goto B4a0580;
case 0x4a0585:goto L4a0585;
case 0x4a0588:c.instructions+=7;goto B4a0588;
case 0x4a058b:c.instructions+=6;goto B4a058b;
case 0x4a058e:c.instructions+=5;goto B4a058e;
case 0x4a058f:c.instructions+=4;goto B4a058f;
case 0x4a0594:c.instructions+=3;goto B4a0594;
case 0x4a0595:c.instructions+=2;goto B4a0595;
case 0x4a059a:c.instructions+=1;goto B4a059a;
case 0x4a059f:goto L4a059f;
case 0x4a05a2:c.instructions+=3;goto B4a05a2;
case 0x4a05a3:c.instructions+=2;goto B4a05a3;
case 0x4a05a4:c.instructions+=1;goto B4a05a4;
case 0x4a05a9:goto L4a05a9;
case 0x4a05ac:c.instructions+=5;goto B4a05ac;
case 0x4a05af:c.instructions+=4;goto B4a05af;
case 0x4a05b2:c.instructions+=3;goto B4a05b2;
case 0x4a05b4:c.instructions+=2;goto B4a05b4;
case 0x4a05b8:c.instructions+=1;goto B4a05b8;
case 0x4a05ba:goto L4a05ba;
case 0x4a05bc:c.instructions+=1;goto B4a05bc;
case 0x4a05be:goto L4a05be;
case 0x4a05c0:c.instructions+=3;goto B4a05c0;
case 0x4a05c4:c.instructions+=2;goto B4a05c4;
case 0x4a05c8:c.instructions+=1;goto B4a05c8;
case 0x4a05ca:goto L4a05ca;
case 0x4a05d0:goto L4a05d0;
case 0x4a05d4:c.instructions+=3;goto B4a05d4;
case 0x4a05d6:c.instructions+=2;goto B4a05d6;
case 0x4a05dc:c.instructions+=1;goto B4a05dc;
case 0x4a05e1:goto L4a05e1;
case 0x4a05e4:c.instructions+=5;goto B4a05e4;
case 0x4a05e5:c.instructions+=4;goto B4a05e5;
case 0x4a05ea:c.instructions+=3;goto B4a05ea;
case 0x4a05eb:c.instructions+=2;goto B4a05eb;
case 0x4a05f0:c.instructions+=1;goto B4a05f0;
case 0x4a05f5:goto L4a05f5;
case 0x4a05f8:c.instructions+=3;goto B4a05f8;
case 0x4a05f9:c.instructions+=2;goto B4a05f9;
case 0x4a05fa:c.instructions+=1;goto B4a05fa;
case 0x4a05ff:goto L4a05ff;
case 0x4a0602:c.instructions+=5;goto B4a0602;
case 0x4a0604:c.instructions+=4;goto B4a0604;
case 0x4a060a:c.instructions+=3;goto B4a060a;
case 0x4a060c:c.instructions+=2;goto B4a060c;
case 0x4a060e:c.instructions+=1;goto B4a060e;
case 0x4a0613:goto L4a0613;
case 0x4a0615:c.instructions+=3;goto B4a0615;
case 0x4a0617:c.instructions+=2;goto B4a0617;
case 0x4a0619:c.instructions+=1;goto B4a0619;
case 0x4a061e:goto L4a061e;
case 0x4a061f:c.instructions+=4;goto B4a061f;
case 0x4a0620:c.instructions+=3;goto B4a0620;
case 0x4a0621:c.instructions+=2;goto B4a0621;
case 0x4a0622:c.instructions+=1;goto B4a0622;
case 0x4a0625:goto L4a0625;
case 0x4a0629:c.instructions+=10;goto B4a0629;
case 0x4a062c:c.instructions+=9;goto B4a062c;
case 0x4a062f:c.instructions+=8;goto B4a062f;
case 0x4a0633:c.instructions+=7;goto B4a0633;
case 0x4a0636:c.instructions+=6;goto B4a0636;
case 0x4a0638:c.instructions+=5;goto B4a0638;
case 0x4a0639:c.instructions+=4;goto B4a0639;
case 0x4a063e:c.instructions+=3;goto B4a063e;
case 0x4a063f:c.instructions+=2;goto B4a063f;
case 0x4a0644:c.instructions+=1;goto B4a0644;
case 0x4a0649:goto L4a0649;
case 0x4a064c:c.instructions+=3;goto B4a064c;
case 0x4a064d:c.instructions+=2;goto B4a064d;
case 0x4a064e:c.instructions+=1;goto B4a064e;
case 0x4a0653:goto L4a0653;
case 0x4a0656:c.instructions+=7;goto B4a0656;
case 0x4a0659:c.instructions+=6;goto B4a0659;
case 0x4a065c:c.instructions+=5;goto B4a065c;
case 0x4a065d:c.instructions+=4;goto B4a065d;
case 0x4a0662:c.instructions+=3;goto B4a0662;
case 0x4a0663:c.instructions+=2;goto B4a0663;
case 0x4a0668:c.instructions+=1;goto B4a0668;
case 0x4a066d:goto L4a066d;
case 0x4a0670:c.instructions+=3;goto B4a0670;
case 0x4a0671:c.instructions+=2;goto B4a0671;
case 0x4a0672:c.instructions+=1;goto B4a0672;
case 0x4a0677:goto L4a0677;
case 0x4a067a:c.instructions+=7;goto B4a067a;
case 0x4a067d:c.instructions+=6;goto B4a067d;
case 0x4a0680:c.instructions+=5;goto B4a0680;
case 0x4a0681:c.instructions+=4;goto B4a0681;
case 0x4a0686:c.instructions+=3;goto B4a0686;
case 0x4a0687:c.instructions+=2;goto B4a0687;
case 0x4a068c:c.instructions+=1;goto B4a068c;
case 0x4a0691:goto L4a0691;
case 0x4a0694:c.instructions+=3;goto B4a0694;
case 0x4a0695:c.instructions+=2;goto B4a0695;
case 0x4a0696:c.instructions+=1;goto B4a0696;
case 0x4a069b:goto L4a069b;
case 0x4a069e:c.instructions+=5;goto B4a069e;
case 0x4a06a0:c.instructions+=4;goto B4a06a0;
case 0x4a06a6:c.instructions+=3;goto B4a06a6;
case 0x4a06a8:c.instructions+=2;goto B4a06a8;
case 0x4a06aa:c.instructions+=1;goto B4a06aa;
case 0x4a06af:goto L4a06af;
case 0x4a06b1:c.instructions+=3;goto B4a06b1;
case 0x4a06b3:c.instructions+=2;goto B4a06b3;
case 0x4a06b5:c.instructions+=1;goto B4a06b5;
case 0x4a06ba:goto L4a06ba;
case 0x4a06bb:c.instructions+=4;goto B4a06bb;
case 0x4a06bc:c.instructions+=3;goto B4a06bc;
case 0x4a06bd:c.instructions+=2;goto B4a06bd;
case 0x4a06be:c.instructions+=1;goto B4a06be;
case 0x4a06d0:goto L4a06d0;
case 0x4a06d1:c.instructions+=5;goto B4a06d1;
case 0x4a06d3:c.instructions+=4;goto B4a06d3;
case 0x4a06d9:c.instructions+=3;goto B4a06d9;
case 0x4a06dc:c.instructions+=2;goto B4a06dc;
case 0x4a06dd:c.instructions+=1;goto B4a06dd;
case 0x4a06df:goto L4a06df;
case 0x4a06e0:c.instructions+=1;goto B4a06e0;
case 0x4a06e6:goto L4a06e6;
case 0x4a06e9:c.instructions+=2;goto B4a06e9;
case 0x4a06ee:c.instructions+=1;goto B4a06ee;
case 0x4a06f3:goto L4a06f3;
case 0x4a06f4:c.instructions+=3;goto B4a06f4;
case 0x4a06f9:c.instructions+=2;goto B4a06f9;
case 0x4a06fa:c.instructions+=1;goto B4a06fa;
case 0x4a06ff:goto L4a06ff;
case 0x4a0702:c.instructions+=2;goto B4a0702;
case 0x4a0707:c.instructions+=1;goto B4a0707;
case 0x4a070c:goto L4a070c;
case 0x4a070d:c.instructions+=3;goto B4a070d;
case 0x4a0712:c.instructions+=2;goto B4a0712;
case 0x4a0713:c.instructions+=1;goto B4a0713;
case 0x4a0718:goto L4a0718;
case 0x4a071b:c.instructions+=2;goto B4a071b;
case 0x4a0720:c.instructions+=1;goto B4a0720;
case 0x4a0725:goto L4a0725;
case 0x4a0726:c.instructions+=4;goto B4a0726;
case 0x4a072b:c.instructions+=3;goto B4a072b;
case 0x4a0730:c.instructions+=2;goto B4a0730;
case 0x4a0731:c.instructions+=1;goto B4a0731;
case 0x4a0736:goto L4a0736;
case 0x4a0739:c.instructions+=3;goto B4a0739;
case 0x4a073a:c.instructions+=2;goto B4a073a;
case 0x4a073b:c.instructions+=1;goto B4a073b;
case 0x4a073c:goto L4a073c;
case 0x4a073f:c.instructions+=2;goto B4a073f;
case 0x4a0744:c.instructions+=1;goto B4a0744;
case 0x4a0749:goto L4a0749;
case 0x4a074a:c.instructions+=3;goto B4a074a;
case 0x4a074f:c.instructions+=2;goto B4a074f;
case 0x4a0750:c.instructions+=1;goto B4a0750;
case 0x4a0755:goto L4a0755;
case 0x4a0758:c.instructions+=2;goto B4a0758;
case 0x4a075d:c.instructions+=1;goto B4a075d;
case 0x4a0762:goto L4a0762;
case 0x4a0763:c.instructions+=3;goto B4a0763;
case 0x4a0768:c.instructions+=2;goto B4a0768;
case 0x4a0769:c.instructions+=1;goto B4a0769;
case 0x4a076e:goto L4a076e;
case 0x4a0771:c.instructions+=2;goto B4a0771;
case 0x4a0776:c.instructions+=1;goto B4a0776;
case 0x4a077b:goto L4a077b;
case 0x4a077c:c.instructions+=3;goto B4a077c;
case 0x4a0781:c.instructions+=2;goto B4a0781;
case 0x4a0782:c.instructions+=1;goto B4a0782;
case 0x4a0787:goto L4a0787;
case 0x4a078a:goto L4a078a;
case 0x4a078b:c.instructions+=2;goto B4a078b;
case 0x4a078c:c.instructions+=1;goto B4a078c;
case 0x4a0790:goto L4a0790;
case 0x4a0793:c.instructions+=2;goto B4a0793;
case 0x4a0795:c.instructions+=1;goto B4a0795;
case 0x4a0797:goto L4a0797;
case 0x4a079c:c.instructions+=1;goto B4a079c;
case 0x4a07a1:goto L4a07a1;
case 0x4a07a4:c.instructions+=1;goto B4a07a4;
case 0x4a07a5:goto L4a07a5;
case 0x4a07a8:c.instructions+=1;goto B4a07a8;
case 0x4a07aa:goto L4a07aa;
case 0x4a07af:c.instructions+=1;goto B4a07af;
case 0x4a07b4:goto L4a07b4;
case 0x4a07b7:c.instructions+=1;goto B4a07b7;
case 0x4a07b8:goto L4a07b8;
case 0x4a07bb:c.instructions+=1;goto B4a07bb;
case 0x4a07bd:goto L4a07bd;
case 0x4a07c2:c.instructions+=1;goto B4a07c2;
case 0x4a07c7:goto L4a07c7;
case 0x4a07ca:c.instructions+=1;goto B4a07ca;
case 0x4a07cb:goto L4a07cb;
case 0x4a07ce:c.instructions+=1;goto B4a07ce;
case 0x4a07d0:goto L4a07d0;
case 0x4a07d5:c.instructions+=1;goto B4a07d5;
case 0x4a07da:goto L4a07da;
case 0x4a07dd:c.instructions+=1;goto B4a07dd;
case 0x4a07de:goto L4a07de;
case 0x4a07e1:c.instructions+=1;goto B4a07e1;
case 0x4a07e3:goto L4a07e3;
case 0x4a07e8:c.instructions+=1;goto B4a07e8;
case 0x4a07ed:goto L4a07ed;
case 0x4a07f0:c.instructions+=1;goto B4a07f0;
case 0x4a07f1:goto L4a07f1;
case 0x4a07f4:c.instructions+=1;goto B4a07f4;
case 0x4a07f6:goto L4a07f6;
case 0x4a07fb:c.instructions+=1;goto B4a07fb;
case 0x4a0800:goto L4a0800;
case 0x4a0803:c.instructions+=1;goto B4a0803;
case 0x4a0804:goto L4a0804;
case 0x4a0806:c.instructions+=1;goto B4a0806;
case 0x4a0810:goto L4a0810;
case 0x4a0812:c.instructions+=13;goto B4a0812;
case 0x4a0817:c.instructions+=12;goto B4a0817;
case 0x4a081d:c.instructions+=11;goto B4a081d;
case 0x4a081e:c.instructions+=10;goto B4a081e;
case 0x4a0825:c.instructions+=9;goto B4a0825;
case 0x4a0826:c.instructions+=8;goto B4a0826;
case 0x4a0827:c.instructions+=7;goto B4a0827;
case 0x4a0829:c.instructions+=6;goto B4a0829;
case 0x4a082d:c.instructions+=5;goto B4a082d;
case 0x4a0833:c.instructions+=4;goto B4a0833;
case 0x4a0836:c.instructions+=3;goto B4a0836;
case 0x4a0838:c.instructions+=2;goto B4a0838;
case 0x4a0840:c.instructions+=1;goto B4a0840;
case 0x4a0842:goto L4a0842;
case 0x4a0843:c.instructions+=1;goto B4a0843;
case 0x4a0848:goto L4a0848;
case 0x4a084b:c.instructions+=1;goto B4a084b;
case 0x4a0852:goto L4a0852;
case 0x4a0857:goto L4a0857;
case 0x4a0859:c.instructions+=1;goto B4a0859;
case 0x4a085e:goto L4a085e;
case 0x4a0863:goto L4a0863;
case 0x4a0865:c.instructions+=1;goto B4a0865;
case 0x4a086a:goto L4a086a;
case 0x4a086c:c.instructions+=2;goto B4a086c;
case 0x4a0874:c.instructions+=1;goto B4a0874;
case 0x4a0879:goto L4a0879;
case 0x4a087d:c.instructions+=4;goto B4a087d;
case 0x4a087e:c.instructions+=3;goto B4a087e;
case 0x4a0885:c.instructions+=2;goto B4a0885;
case 0x4a0888:c.instructions+=1;goto B4a0888;
case 0x4a0890:goto L4a0890;
case 0x4a0894:c.instructions+=2;goto B4a0894;
case 0x4a0895:c.instructions+=1;goto B4a0895;
case 0x4a089a:goto L4a089a;
case 0x4a089d:c.instructions+=2;goto B4a089d;
case 0x4a089f:c.instructions+=1;goto B4a089f;
case 0x4a08a1:goto L4a08a1;
case 0x4a08a6:c.instructions+=1;goto B4a08a6;
case 0x4a08ab:goto L4a08ab;
case 0x4a08ae:c.instructions+=1;goto B4a08ae;
case 0x4a08b1:goto L4a08b1;
case 0x4a08b4:c.instructions+=1;goto B4a08b4;
case 0x4a08b6:goto L4a08b6;
case 0x4a08bb:c.instructions+=1;goto B4a08bb;
case 0x4a08c0:goto L4a08c0;
case 0x4a08c3:c.instructions+=1;goto B4a08c3;
case 0x4a08c6:goto L4a08c6;
case 0x4a08c9:c.instructions+=1;goto B4a08c9;
case 0x4a08cb:goto L4a08cb;
case 0x4a08d0:c.instructions+=1;goto B4a08d0;
case 0x4a08d5:goto L4a08d5;
case 0x4a08d8:c.instructions+=1;goto B4a08d8;
case 0x4a08db:goto L4a08db;
case 0x4a08de:c.instructions+=1;goto B4a08de;
case 0x4a08e0:goto L4a08e0;
case 0x4a08e5:c.instructions+=1;goto B4a08e5;
case 0x4a08ea:goto L4a08ea;
case 0x4a08ed:c.instructions+=1;goto B4a08ed;
case 0x4a08f0:goto L4a08f0;
case 0x4a08f3:c.instructions+=1;goto B4a08f3;
case 0x4a08f5:goto L4a08f5;
case 0x4a08fa:c.instructions+=1;goto B4a08fa;
case 0x4a08ff:goto L4a08ff;
case 0x4a0902:c.instructions+=1;goto B4a0902;
case 0x4a0905:goto L4a0905;
case 0x4a0908:c.instructions+=1;goto B4a0908;
case 0x4a090a:goto L4a090a;
case 0x4a090f:c.instructions+=1;goto B4a090f;
case 0x4a0914:goto L4a0914;
case 0x4a0917:c.instructions+=1;goto B4a0917;
case 0x4a091a:goto L4a091a;
case 0x4a091c:c.instructions+=1;goto B4a091c;
case 0x4a0920:goto L4a0920;
case 0x4a0921:c.instructions+=6;goto B4a0921;
case 0x4a0922:c.instructions+=5;goto B4a0922;
case 0x4a0923:c.instructions+=4;goto B4a0923;
case 0x4a0925:c.instructions+=3;goto B4a0925;
case 0x4a0928:c.instructions+=2;goto B4a0928;
case 0x4a092d:c.instructions+=1;goto B4a092d;
case 0x4a0932:goto L4a0932;
case 0x4a0935:c.instructions+=4;goto B4a0935;
case 0x4a0936:c.instructions+=3;goto B4a0936;
case 0x4a093b:c.instructions+=2;goto B4a093b;
case 0x4a0940:c.instructions+=1;goto B4a0940;
case 0x4a0945:goto L4a0945;
case 0x4a0948:c.instructions+=3;goto B4a0948;
case 0x4a0949:c.instructions+=2;goto B4a0949;
case 0x4a094a:c.instructions+=1;goto B4a094a;
case 0x4a094f:goto L4a094f;
case 0x4a0952:c.instructions+=2;goto B4a0952;
case 0x4a0957:c.instructions+=1;goto B4a0957;
case 0x4a095c:goto L4a095c;
case 0x4a095f:c.instructions+=4;goto B4a095f;
case 0x4a0960:c.instructions+=3;goto B4a0960;
case 0x4a0965:c.instructions+=2;goto B4a0965;
case 0x4a096a:c.instructions+=1;goto B4a096a;
case 0x4a096f:goto L4a096f;
case 0x4a0972:c.instructions+=3;goto B4a0972;
case 0x4a0973:c.instructions+=2;goto B4a0973;
case 0x4a0974:c.instructions+=1;goto B4a0974;
case 0x4a0979:goto L4a0979;
case 0x4a097c:c.instructions+=2;goto B4a097c;
case 0x4a0981:c.instructions+=1;goto B4a0981;
case 0x4a0986:goto L4a0986;
case 0x4a0989:c.instructions+=4;goto B4a0989;
case 0x4a098a:c.instructions+=3;goto B4a098a;
case 0x4a098f:c.instructions+=2;goto B4a098f;
case 0x4a0994:c.instructions+=1;goto B4a0994;
case 0x4a0999:goto L4a0999;
case 0x4a099c:c.instructions+=3;goto B4a099c;
case 0x4a099d:c.instructions+=2;goto B4a099d;
case 0x4a099e:c.instructions+=1;goto B4a099e;
case 0x4a09a3:goto L4a09a3;
case 0x4a09a6:c.instructions+=2;goto B4a09a6;
case 0x4a09ab:c.instructions+=1;goto B4a09ab;
case 0x4a09b0:goto L4a09b0;
case 0x4a09b3:c.instructions+=4;goto B4a09b3;
case 0x4a09b4:c.instructions+=3;goto B4a09b4;
case 0x4a09b9:c.instructions+=2;goto B4a09b9;
case 0x4a09be:c.instructions+=1;goto B4a09be;
case 0x4a09c3:goto L4a09c3;
case 0x4a09c6:c.instructions+=3;goto B4a09c6;
case 0x4a09c7:c.instructions+=2;goto B4a09c7;
case 0x4a09c8:c.instructions+=1;goto B4a09c8;
case 0x4a09cd:goto L4a09cd;
case 0x4a09d0:c.instructions+=2;goto B4a09d0;
case 0x4a09d5:c.instructions+=1;goto B4a09d5;
case 0x4a09da:goto L4a09da;
case 0x4a09dd:c.instructions+=4;goto B4a09dd;
case 0x4a09de:c.instructions+=3;goto B4a09de;
case 0x4a09e3:c.instructions+=2;goto B4a09e3;
case 0x4a09e8:c.instructions+=1;goto B4a09e8;
case 0x4a09ed:goto L4a09ed;
case 0x4a09f0:c.instructions+=3;goto B4a09f0;
case 0x4a09f1:c.instructions+=2;goto B4a09f1;
case 0x4a09f2:c.instructions+=1;goto B4a09f2;
case 0x4a09f7:goto L4a09f7;
case 0x4a09fa:c.instructions+=2;goto B4a09fa;
case 0x4a09ff:c.instructions+=1;goto B4a09ff;
case 0x4a0a04:goto L4a0a04;
case 0x4a0a07:c.instructions+=4;goto B4a0a07;
case 0x4a0a08:c.instructions+=3;goto B4a0a08;
case 0x4a0a0d:c.instructions+=2;goto B4a0a0d;
case 0x4a0a12:c.instructions+=1;goto B4a0a12;
case 0x4a0a17:goto L4a0a17;
case 0x4a0a1a:c.instructions+=3;goto B4a0a1a;
case 0x4a0a1b:c.instructions+=2;goto B4a0a1b;
case 0x4a0a1c:c.instructions+=1;goto B4a0a1c;
case 0x4a0a21:goto L4a0a21;
case 0x4a0a24:c.instructions+=2;goto B4a0a24;
case 0x4a0a29:c.instructions+=1;goto B4a0a29;
case 0x4a0a2e:goto L4a0a2e;
case 0x4a0a31:c.instructions+=4;goto B4a0a31;
case 0x4a0a32:c.instructions+=3;goto B4a0a32;
case 0x4a0a37:c.instructions+=2;goto B4a0a37;
case 0x4a0a3c:c.instructions+=1;goto B4a0a3c;
case 0x4a0a41:goto L4a0a41;
case 0x4a0a44:c.instructions+=3;goto B4a0a44;
case 0x4a0a45:c.instructions+=2;goto B4a0a45;
case 0x4a0a46:c.instructions+=1;goto B4a0a46;
case 0x4a0a4b:goto L4a0a4b;
case 0x4a0a4e:c.instructions+=2;goto B4a0a4e;
case 0x4a0a53:c.instructions+=1;goto B4a0a53;
case 0x4a0a58:goto L4a0a58;
case 0x4a0a5b:c.instructions+=4;goto B4a0a5b;
case 0x4a0a5c:c.instructions+=3;goto B4a0a5c;
case 0x4a0a61:c.instructions+=2;goto B4a0a61;
case 0x4a0a66:c.instructions+=1;goto B4a0a66;
case 0x4a0a6b:goto L4a0a6b;
case 0x4a0a6e:c.instructions+=3;goto B4a0a6e;
case 0x4a0a6f:c.instructions+=2;goto B4a0a6f;
case 0x4a0a70:c.instructions+=1;goto B4a0a70;
case 0x4a0a75:goto L4a0a75;
case 0x4a0a78:c.instructions+=2;goto B4a0a78;
case 0x4a0a7d:c.instructions+=1;goto B4a0a7d;
case 0x4a0a82:goto L4a0a82;
case 0x4a0a85:c.instructions+=4;goto B4a0a85;
case 0x4a0a86:c.instructions+=3;goto B4a0a86;
case 0x4a0a8b:c.instructions+=2;goto B4a0a8b;
case 0x4a0a90:c.instructions+=1;goto B4a0a90;
case 0x4a0a95:goto L4a0a95;
case 0x4a0a98:c.instructions+=3;goto B4a0a98;
case 0x4a0a99:c.instructions+=2;goto B4a0a99;
case 0x4a0a9a:c.instructions+=1;goto B4a0a9a;
case 0x4a0a9f:goto L4a0a9f;
case 0x4a0aa2:c.instructions+=2;goto B4a0aa2;
case 0x4a0aa7:c.instructions+=1;goto B4a0aa7;
case 0x4a0aac:goto L4a0aac;
case 0x4a0aaf:c.instructions+=4;goto B4a0aaf;
case 0x4a0ab0:c.instructions+=3;goto B4a0ab0;
case 0x4a0ab5:c.instructions+=2;goto B4a0ab5;
case 0x4a0aba:c.instructions+=1;goto B4a0aba;
case 0x4a0abf:goto L4a0abf;
case 0x4a0ac2:c.instructions+=3;goto B4a0ac2;
case 0x4a0ac3:c.instructions+=2;goto B4a0ac3;
case 0x4a0ac4:c.instructions+=1;goto B4a0ac4;
case 0x4a0ac9:goto L4a0ac9;
case 0x4a0acc:c.instructions+=2;goto B4a0acc;
case 0x4a0ad1:c.instructions+=1;goto B4a0ad1;
case 0x4a0ad6:goto L4a0ad6;
case 0x4a0ad9:c.instructions+=4;goto B4a0ad9;
case 0x4a0ada:c.instructions+=3;goto B4a0ada;
case 0x4a0adf:c.instructions+=2;goto B4a0adf;
case 0x4a0ae4:c.instructions+=1;goto B4a0ae4;
case 0x4a0ae9:goto L4a0ae9;
case 0x4a0aec:c.instructions+=3;goto B4a0aec;
case 0x4a0aed:c.instructions+=2;goto B4a0aed;
case 0x4a0aee:c.instructions+=1;goto B4a0aee;
case 0x4a0af3:goto L4a0af3;
case 0x4a0af6:c.instructions+=2;goto B4a0af6;
case 0x4a0afb:c.instructions+=1;goto B4a0afb;
case 0x4a0b00:goto L4a0b00;
case 0x4a0b03:c.instructions+=4;goto B4a0b03;
case 0x4a0b04:c.instructions+=3;goto B4a0b04;
case 0x4a0b09:c.instructions+=2;goto B4a0b09;
case 0x4a0b0e:c.instructions+=1;goto B4a0b0e;
case 0x4a0b13:goto L4a0b13;
case 0x4a0b16:c.instructions+=3;goto B4a0b16;
case 0x4a0b17:c.instructions+=2;goto B4a0b17;
case 0x4a0b18:c.instructions+=1;goto B4a0b18;
case 0x4a0b1d:goto L4a0b1d;
case 0x4a0b20:c.instructions+=1;goto B4a0b20;
case 0x4a0b22:goto L4a0b22;
case 0x4a0b25:c.instructions+=5;goto B4a0b25;
case 0x4a0b2a:c.instructions+=4;goto B4a0b2a;
case 0x4a0b2f:c.instructions+=3;goto B4a0b2f;
case 0x4a0b30:c.instructions+=2;goto B4a0b30;
case 0x4a0b35:c.instructions+=1;goto B4a0b35;
case 0x4a0b3a:goto L4a0b3a;
case 0x4a0b3d:c.instructions+=3;goto B4a0b3d;
case 0x4a0b3e:c.instructions+=2;goto B4a0b3e;
case 0x4a0b3f:c.instructions+=1;goto B4a0b3f;
case 0x4a0b44:goto L4a0b44;
case 0x4a0b47:c.instructions+=6;goto B4a0b47;
case 0x4a0b4a:c.instructions+=5;goto B4a0b4a;
case 0x4a0b4c:c.instructions+=4;goto B4a0b4c;
case 0x4a0b51:c.instructions+=3;goto B4a0b51;
case 0x4a0b52:c.instructions+=2;goto B4a0b52;
case 0x4a0b57:c.instructions+=1;goto B4a0b57;
case 0x4a0b5c:goto L4a0b5c;
case 0x4a0b5f:c.instructions+=3;goto B4a0b5f;
case 0x4a0b60:c.instructions+=2;goto B4a0b60;
case 0x4a0b61:c.instructions+=1;goto B4a0b61;
case 0x4a0b66:goto L4a0b66;
case 0x4a0b69:c.instructions+=3;goto B4a0b69;
case 0x4a0b6a:c.instructions+=2;goto B4a0b6a;
case 0x4a0b6d:c.instructions+=1;goto B4a0b6d;
case 0x4a0b6f:goto L4a0b6f;
case 0x4a0b70:c.instructions+=3;goto B4a0b70;
case 0x4a0b71:c.instructions+=2;goto B4a0b71;
case 0x4a0b72:c.instructions+=1;goto B4a0b72;
case 0x4a0b80:goto L4a0b80;
case 0x4a0b83:c.instructions+=9;goto B4a0b83;
case 0x4a0b89:c.instructions+=8;goto B4a0b89;
case 0x4a0b91:c.instructions+=7;goto B4a0b91;
case 0x4a0b99:c.instructions+=6;goto B4a0b99;
case 0x4a0ba1:c.instructions+=5;goto B4a0ba1;
case 0x4a0ba9:c.instructions+=4;goto B4a0ba9;
case 0x4a0bb1:c.instructions+=3;goto B4a0bb1;
case 0x4a0bb9:c.instructions+=2;goto B4a0bb9;
case 0x4a0bc1:c.instructions+=1;goto B4a0bc1;
case 0x4a0bc3:goto L4a0bc3;
case 0x4a0bc7:c.instructions+=1;goto B4a0bc7;
case 0x4a0bc9:goto L4a0bc9;
case 0x4a0bca:c.instructions+=2;goto B4a0bca;
case 0x4a0bcd:c.instructions+=1;goto B4a0bcd;
case 0x4a0bcf:goto L4a0bcf;
case 0x4a0bd1:goto L4a0bd1;
case 0x4a0bd4:c.instructions+=1;goto B4a0bd4;
case 0x4a0bd6:goto L4a0bd6;
case 0x4a0bd8:goto L4a0bd8;
case 0x4a0bdc:c.instructions+=6;goto B4a0bdc;
case 0x4a0bde:c.instructions+=5;goto B4a0bde;
case 0x4a0bdf:c.instructions+=4;goto B4a0bdf;
case 0x4a0be4:c.instructions+=3;goto B4a0be4;
case 0x4a0be6:c.instructions+=2;goto B4a0be6;
case 0x4a0be8:c.instructions+=1;goto B4a0be8;
case 0x4a0bea:goto L4a0bea;
case 0x4a0bec:c.instructions+=4;goto B4a0bec;
case 0x4a0bf0:c.instructions+=3;goto B4a0bf0;
case 0x4a0bf6:c.instructions+=2;goto B4a0bf6;
case 0x4a0bf9:c.instructions+=1;goto B4a0bf9;
case 0x4a0bfc:goto L4a0bfc;
case 0x4a0c00:c.instructions+=3;goto B4a0c00;
case 0x4a0c05:c.instructions+=2;goto B4a0c05;
case 0x4a0c08:c.instructions+=1;goto B4a0c08;
case 0x4a0c10:goto L4a0c10;
case 0x4a0c14:c.instructions+=4;goto B4a0c14;
case 0x4a0c17:c.instructions+=3;goto B4a0c17;
case 0x4a0c1c:c.instructions+=2;goto B4a0c1c;
case 0x4a0c1d:c.instructions+=1;goto B4a0c1d;
case 0x4a0c22:goto L4a0c22;
case 0x4a0c25:c.instructions+=3;goto B4a0c25;
case 0x4a0c27:c.instructions+=2;goto B4a0c27;
case 0x4a0c2a:c.instructions+=1;goto B4a0c2a;
case 0x4a0c30:goto L4a0c30;
case 0x4a0c34:c.instructions+=12;goto B4a0c34;
case 0x4a0c38:c.instructions+=11;goto B4a0c38;
case 0x4a0c39:c.instructions+=10;goto B4a0c39;
case 0x4a0c3a:c.instructions+=9;goto B4a0c3a;
case 0x4a0c3e:c.instructions+=8;goto B4a0c3e;
case 0x4a0c40:c.instructions+=7;goto B4a0c40;
case 0x4a0c44:c.instructions+=6;goto B4a0c44;
case 0x4a0c45:c.instructions+=5;goto B4a0c45;
case 0x4a0c46:c.instructions+=4;goto B4a0c46;
case 0x4a0c47:c.instructions+=3;goto B4a0c47;
case 0x4a0c48:c.instructions+=2;goto B4a0c48;
case 0x4a0c4a:c.instructions+=1;goto B4a0c4a;
case 0x4a0c4f:goto L4a0c4f;
case 0x4a0c55:c.instructions+=1;goto B4a0c55;
case 0x4a0c57:goto L4a0c57;
case 0x4a0c59:goto L4a0c59;
case 0x4a0c5f:c.instructions+=1;goto B4a0c5f;
case 0x4a0c65:goto L4a0c65;
case 0x4a0c6b:c.instructions+=1;goto B4a0c6b;
case 0x4a0c6d:goto L4a0c6d;
case 0x4a0c72:c.instructions+=2;goto B4a0c72;
case 0x4a0c75:c.instructions+=1;goto B4a0c75;
case 0x4a0c77:goto L4a0c77;
case 0x4a0c7a:c.instructions+=1;goto B4a0c7a;
case 0x4a0c7c:goto L4a0c7c;
case 0x4a0c7f:c.instructions+=1;goto B4a0c7f;
case 0x4a0c81:goto L4a0c81;
case 0x4a0c88:goto L4a0c88;
case 0x4a0c8f:goto L4a0c8f;
case 0x4a0c92:c.instructions+=4;goto B4a0c92;
case 0x4a0c94:c.instructions+=3;goto B4a0c94;
case 0x4a0c99:c.instructions+=2;goto B4a0c99;
case 0x4a0c9a:c.instructions+=1;goto B4a0c9a;
case 0x4a0c9f:goto L4a0c9f;
case 0x4a0ca2:goto L4a0ca2;
case 0x4a0ca3:c.instructions+=2;goto B4a0ca3;
case 0x4a0ca4:c.instructions+=1;goto B4a0ca4;
case 0x4a0ca7:goto L4a0ca7;
case 0x4a0cad:c.instructions+=1;goto B4a0cad;
case 0x4a0caf:goto L4a0caf;
case 0x4a0cb5:c.instructions+=1;goto B4a0cb5;
case 0x4a0cb7:goto L4a0cb7;
case 0x4a0cbd:c.instructions+=2;goto B4a0cbd;
case 0x4a0cc0:c.instructions+=1;goto B4a0cc0;
case 0x4a0cc2:goto L4a0cc2;
case 0x4a0cc5:c.instructions+=1;goto B4a0cc5;
case 0x4a0cc7:goto L4a0cc7;
case 0x4a0cca:c.instructions+=1;goto B4a0cca;
case 0x4a0ccc:goto L4a0ccc;
case 0x4a0cd2:c.instructions+=3;goto B4a0cd2;
case 0x4a0cd3:c.instructions+=2;goto B4a0cd3;
case 0x4a0cd5:c.instructions+=1;goto B4a0cd5;
case 0x4a0cda:goto L4a0cda;
case 0x4a0cdd:c.instructions+=2;goto B4a0cdd;
case 0x4a0cdf:c.instructions+=1;goto B4a0cdf;
case 0x4a0ce1:goto L4a0ce1;
case 0x4a0ce7:c.instructions+=3;goto B4a0ce7;
case 0x4a0ce8:c.instructions+=2;goto B4a0ce8;
case 0x4a0cea:c.instructions+=1;goto B4a0cea;
case 0x4a0cef:goto L4a0cef;
case 0x4a0cf1:c.instructions+=2;goto B4a0cf1;
case 0x4a0cf3:c.instructions+=1;goto B4a0cf3;
case 0x4a0cf6:goto L4a0cf6;
case 0x4a0cf8:goto L4a0cf8;
case 0x4a0cfe:c.instructions+=3;goto B4a0cfe;
case 0x4a0cff:c.instructions+=2;goto B4a0cff;
case 0x4a0d01:c.instructions+=1;goto B4a0d01;
case 0x4a0d06:goto L4a0d06;
case 0x4a0d09:c.instructions+=2;goto B4a0d09;
case 0x4a0d0b:c.instructions+=1;goto B4a0d0b;
case 0x4a0d0d:goto L4a0d0d;
case 0x4a0d13:c.instructions+=3;goto B4a0d13;
case 0x4a0d14:c.instructions+=2;goto B4a0d14;
case 0x4a0d16:c.instructions+=1;goto B4a0d16;
case 0x4a0d1b:goto L4a0d1b;
case 0x4a0d1c:c.instructions+=2;goto B4a0d1c;
case 0x4a0d1e:c.instructions+=1;goto B4a0d1e;
case 0x4a0d23:goto L4a0d23;
case 0x4a0d25:c.instructions+=1;goto B4a0d25;
case 0x4a0d27:goto L4a0d27;
case 0x4a0d2e:c.instructions+=4;goto B4a0d2e;
case 0x4a0d34:c.instructions+=3;goto B4a0d34;
case 0x4a0d35:c.instructions+=2;goto B4a0d35;
case 0x4a0d37:c.instructions+=1;goto B4a0d37;
case 0x4a0d3c:goto L4a0d3c;
case 0x4a0d3e:c.instructions+=2;goto B4a0d3e;
case 0x4a0d40:c.instructions+=1;goto B4a0d40;
case 0x4a0d43:goto L4a0d43;
case 0x4a0d45:c.instructions+=1;goto B4a0d45;
case 0x4a0d4a:goto L4a0d4a;
case 0x4a0d54:c.instructions+=1;goto B4a0d54;
case 0x4a0d5a:goto L4a0d5a;
case 0x4a0d60:c.instructions+=3;goto B4a0d60;
case 0x4a0d62:c.instructions+=2;goto B4a0d62;
case 0x4a0d63:c.instructions+=1;goto B4a0d63;
case 0x4a0d68:goto L4a0d68;
case 0x4a0d6b:c.instructions+=2;goto B4a0d6b;
case 0x4a0d6e:c.instructions+=1;goto B4a0d6e;
case 0x4a0d70:goto L4a0d70;
case 0x4a0d72:c.instructions+=1;goto B4a0d72;
case 0x4a0d74:goto L4a0d74;
case 0x4a0d7a:c.instructions+=3;goto B4a0d7a;
case 0x4a0d7b:c.instructions+=2;goto B4a0d7b;
case 0x4a0d7d:c.instructions+=1;goto B4a0d7d;
case 0x4a0d82:goto L4a0d82;
case 0x4a0d83:c.instructions+=2;goto B4a0d83;
case 0x4a0d85:c.instructions+=1;goto B4a0d85;
case 0x4a0d8a:goto L4a0d8a;
case 0x4a0d8c:c.instructions+=1;goto B4a0d8c;
case 0x4a0d92:goto L4a0d92;
case 0x4a0d99:c.instructions+=4;goto B4a0d99;
case 0x4a0d9f:c.instructions+=3;goto B4a0d9f;
case 0x4a0da0:c.instructions+=2;goto B4a0da0;
case 0x4a0da2:c.instructions+=1;goto B4a0da2;
case 0x4a0da7:goto L4a0da7;
case 0x4a0da9:c.instructions+=2;goto B4a0da9;
case 0x4a0dab:c.instructions+=1;goto B4a0dab;
case 0x4a0dae:goto L4a0dae;
case 0x4a0db0:c.instructions+=1;goto B4a0db0;
case 0x4a0db5:goto L4a0db5;
case 0x4a0db6:c.instructions+=2;goto B4a0db6;
case 0x4a0db7:c.instructions+=1;goto B4a0db7;
case 0x4a0dba:goto L4a0dba;
case 0x4a0dbc:c.instructions+=1;goto B4a0dbc;
case 0x4a0dc2:goto L4a0dc2;
case 0x4a0dc8:c.instructions+=3;goto B4a0dc8;
case 0x4a0dc9:c.instructions+=2;goto B4a0dc9;
case 0x4a0dcb:c.instructions+=1;goto B4a0dcb;
case 0x4a0dd0:goto L4a0dd0;
case 0x4a0dd2:c.instructions+=2;goto B4a0dd2;
case 0x4a0dd4:c.instructions+=1;goto B4a0dd4;
case 0x4a0dd7:goto L4a0dd7;
case 0x4a0dd9:c.instructions+=1;goto B4a0dd9;
case 0x4a0dde:goto L4a0dde;
case 0x4a0ddf:c.instructions+=2;goto B4a0ddf;
case 0x4a0de0:c.instructions+=1;goto B4a0de0;
case 0x4a0df0:goto L4a0df0;
case 0x4a0df1:c.instructions+=4;goto B4a0df1;
case 0x4a0df3:c.instructions+=3;goto B4a0df3;
case 0x4a0df6:c.instructions+=2;goto B4a0df6;
case 0x4a0df8:c.instructions+=1;goto B4a0df8;
case 0x4a0dfa:goto L4a0dfa;
case 0x4a0dfb:c.instructions+=1;goto B4a0dfb;
case 0x4a0e00:goto L4a0e00;
case 0x4a0e03:c.instructions+=1;goto B4a0e03;
case 0x4a0e0a:goto L4a0e0a;
case 0x4a0e0e:c.instructions+=2;goto B4a0e0e;
case 0x4a0e10:c.instructions+=1;goto B4a0e10;
case 0x4a0e12:goto L4a0e12;
case 0x4a0e17:goto L4a0e17;
case 0x4a0e1d:c.instructions+=3;goto B4a0e1d;
case 0x4a0e1f:c.instructions+=2;goto B4a0e1f;
case 0x4a0e20:c.instructions+=1;goto B4a0e20;
case 0x4a0e25:goto L4a0e25;
case 0x4a0e28:c.instructions+=2;goto B4a0e28;
case 0x4a0e2a:c.instructions+=1;goto B4a0e2a;
case 0x4a0e2c:goto L4a0e2c;
case 0x4a0e2f:c.instructions+=5;goto B4a0e2f;
case 0x4a0e31:c.instructions+=4;goto B4a0e31;
case 0x4a0e36:c.instructions+=3;goto B4a0e36;
case 0x4a0e37:c.instructions+=2;goto B4a0e37;
case 0x4a0e3c:c.instructions+=1;goto B4a0e3c;
case 0x4a0e41:goto L4a0e41;
case 0x4a0e44:c.instructions+=2;goto B4a0e44;
case 0x4a0e45:c.instructions+=1;goto B4a0e45;
case 0x4a0e48:goto L4a0e48;
case 0x4a0e4b:c.instructions+=2;goto B4a0e4b;
case 0x4a0e50:c.instructions+=1;goto B4a0e50;
case 0x4a0e55:goto L4a0e55;
case 0x4a0e56:c.instructions+=6;goto B4a0e56;
case 0x4a0e58:c.instructions+=5;goto B4a0e58;
case 0x4a0e5a:c.instructions+=4;goto B4a0e5a;
case 0x4a0e5f:c.instructions+=3;goto B4a0e5f;
case 0x4a0e64:c.instructions+=2;goto B4a0e64;
case 0x4a0e65:c.instructions+=1;goto B4a0e65;
case 0x4a0e6a:goto L4a0e6a;
case 0x4a0e6d:c.instructions+=2;goto B4a0e6d;
case 0x4a0e6e:c.instructions+=1;goto B4a0e6e;
case 0x4a0e71:goto L4a0e71;
case 0x4a0e74:c.instructions+=3;goto B4a0e74;
case 0x4a0e75:c.instructions+=2;goto B4a0e75;
case 0x4a0e76:c.instructions+=1;goto B4a0e76;
case 0x4a0e7b:goto L4a0e7b;
case 0x4a0e7e:c.instructions+=2;goto B4a0e7e;
case 0x4a0e7f:c.instructions+=1;goto B4a0e7f;
case 0x4a0e90:goto L4a0e90;
case 0x4a0e91:c.instructions+=5;goto B4a0e91;
case 0x4a0e92:c.instructions+=4;goto B4a0e92;
case 0x4a0e93:c.instructions+=3;goto B4a0e93;
case 0x4a0e95:c.instructions+=2;goto B4a0e95;
case 0x4a0e9a:c.instructions+=1;goto B4a0e9a;
case 0x4a0ea0:goto L4a0ea0;
case 0x4a0ea3:c.instructions+=5;goto B4a0ea3;
case 0x4a0ea8:c.instructions+=4;goto B4a0ea8;
case 0x4a0ead:c.instructions+=3;goto B4a0ead;
case 0x4a0eae:c.instructions+=2;goto B4a0eae;
case 0x4a0eb3:c.instructions+=1;goto B4a0eb3;
case 0x4a0eb8:goto L4a0eb8;
case 0x4a0ebb:c.instructions+=3;goto B4a0ebb;
case 0x4a0ebc:c.instructions+=2;goto B4a0ebc;
case 0x4a0ebd:c.instructions+=1;goto B4a0ebd;
case 0x4a0ec2:goto L4a0ec2;
case 0x4a0ec5:c.instructions+=3;goto B4a0ec5;
case 0x4a0ec6:c.instructions+=2;goto B4a0ec6;
case 0x4a0ecb:c.instructions+=1;goto B4a0ecb;
case 0x4a0ed0:goto L4a0ed0;
case 0x4a0ed1:c.instructions+=2;goto B4a0ed1;
case 0x4a0ed2:c.instructions+=1;goto B4a0ed2;
case 0x4a0ed7:goto L4a0ed7;
case 0x4a0ed8:c.instructions+=1;goto B4a0ed8;
case 0x4a0edd:goto L4a0edd;
case 0x4a0ee0:c.instructions+=3;goto B4a0ee0;
case 0x4a0ee1:c.instructions+=2;goto B4a0ee1;
case 0x4a0ee4:c.instructions+=1;goto B4a0ee4;
case 0x4a0ee6:goto L4a0ee6;
case 0x4a0ee7:c.instructions+=3;goto B4a0ee7;
case 0x4a0ee8:c.instructions+=2;goto B4a0ee8;
case 0x4a0ee9:c.instructions+=1;goto B4a0ee9;
case 0x4a0ef0:goto L4a0ef0;
case 0x4a0ef4:c.instructions+=5;goto B4a0ef4;
case 0x4a0efa:c.instructions+=4;goto B4a0efa;
case 0x4a0efb:c.instructions+=3;goto B4a0efb;
case 0x4a0efc:c.instructions+=2;goto B4a0efc;
case 0x4a0efd:c.instructions+=1;goto B4a0efd;
case 0x4a0f02:goto L4a0f02;
case 0x4a0f04:c.instructions+=1;goto B4a0f04;
case 0x4a0f09:goto L4a0f09;
case 0x4a0f0a:c.instructions+=3;goto B4a0f0a;
case 0x4a0f0e:c.instructions+=2;goto B4a0f0e;
case 0x4a0f0f:c.instructions+=1;goto B4a0f0f;
case 0x4a0f14:goto L4a0f14;
case 0x4a0f16:c.instructions+=4;goto B4a0f16;
case 0x4a0f1d:c.instructions+=3;goto B4a0f1d;
case 0x4a0f20:c.instructions+=2;goto B4a0f20;
case 0x4a0f25:c.instructions+=1;goto B4a0f25;
case 0x4a0f27:goto L4a0f27;
case 0x4a0f29:goto L4a0f29;
case 0x4a0f2a:c.instructions+=3;goto B4a0f2a;
case 0x4a0f2b:c.instructions+=2;goto B4a0f2b;
case 0x4a0f31:c.instructions+=1;goto B4a0f31;
case 0x4a0f40:goto L4a0f40;
case 0x4a0f44:c.instructions+=5;goto B4a0f44;
case 0x4a0f4a:c.instructions+=4;goto B4a0f4a;
case 0x4a0f4b:c.instructions+=3;goto B4a0f4b;
case 0x4a0f4c:c.instructions+=2;goto B4a0f4c;
case 0x4a0f4d:c.instructions+=1;goto B4a0f4d;
case 0x4a0f52:goto L4a0f52;
case 0x4a0f54:c.instructions+=1;goto B4a0f54;
case 0x4a0f59:goto L4a0f59;
case 0x4a0f5a:c.instructions+=3;goto B4a0f5a;
case 0x4a0f5e:c.instructions+=2;goto B4a0f5e;
case 0x4a0f5f:c.instructions+=1;goto B4a0f5f;
case 0x4a0f64:goto L4a0f64;
case 0x4a0f66:c.instructions+=4;goto B4a0f66;
case 0x4a0f6d:c.instructions+=3;goto B4a0f6d;
case 0x4a0f70:c.instructions+=2;goto B4a0f70;
case 0x4a0f75:c.instructions+=1;goto B4a0f75;
case 0x4a0f77:goto L4a0f77;
case 0x4a0f79:goto L4a0f79;
case 0x4a0f7a:c.instructions+=3;goto B4a0f7a;
case 0x4a0f7b:c.instructions+=2;goto B4a0f7b;
case 0x4a0f81:c.instructions+=1;goto B4a0f81;
case 0x4a0f90:goto L4a0f90;
case 0x4a0f94:c.instructions+=7;goto B4a0f94;
case 0x4a0f9a:c.instructions+=6;goto B4a0f9a;
case 0x4a0f9c:c.instructions+=5;goto B4a0f9c;
case 0x4a0f9d:c.instructions+=4;goto B4a0f9d;
case 0x4a0f9e:c.instructions+=3;goto B4a0f9e;
case 0x4a0f9f:c.instructions+=2;goto B4a0f9f;
case 0x4a0fa1:c.instructions+=1;goto B4a0fa1;
case 0x4a0fa3:goto L4a0fa3;
case 0x4a0fa9:c.instructions+=2;goto B4a0fa9;
case 0x4a0fab:c.instructions+=1;goto B4a0fab;
case 0x4a0fb1:goto L4a0fb1;
case 0x4a0fb7:c.instructions+=3;goto B4a0fb7;
case 0x4a0fba:c.instructions+=2;goto B4a0fba;
case 0x4a0fbb:c.instructions+=1;goto B4a0fbb;
case 0x4a0fc0:goto L4a0fc0;
case 0x4a0fc2:c.instructions+=1;goto B4a0fc2;
case 0x4a0fc7:goto L4a0fc7;
case 0x4a0fc8:c.instructions+=3;goto B4a0fc8;
case 0x4a0fcc:c.instructions+=2;goto B4a0fcc;
case 0x4a0fcd:c.instructions+=1;goto B4a0fcd;
case 0x4a0fd2:goto L4a0fd2;
case 0x4a0fd4:c.instructions+=2;goto B4a0fd4;
case 0x4a0fd9:c.instructions+=1;goto B4a0fd9;
case 0x4a0fde:goto L4a0fde;
case 0x4a0fe0:goto L4a0fe0;
case 0x4a0fe5:goto L4a0fe5;
case 0x4a0feb:c.instructions+=4;goto B4a0feb;
case 0x4a0fed:c.instructions+=3;goto B4a0fed;
case 0x4a0ff2:c.instructions+=2;goto B4a0ff2;
case 0x4a0ff3:c.instructions+=1;goto B4a0ff3;
case 0x4a0ff8:goto L4a0ff8;
case 0x4a0ffb:c.instructions+=1;goto B4a0ffb;
case 0x4a0ffd:goto L4a0ffd;
default:missing_instruction(c.pc);}
B4a0000:L4a0000:{c.instructions+=8;NFSU2_TR(0x4a0000);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B4a0005:{NFSU2_TR(0x4a0005);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a0008:{NFSU2_TR(0x4a0008);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0009:{NFSU2_TR(0x4a0009);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a000a:{NFSU2_TR(0x4a000a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a0010:{NFSU2_TR(0x4a0010);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4a0012:{NFSU2_TR(0x4a0012);
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
B4a0014:{NFSU2_TR(0x4a0014);
if(r1(R+518)){{goto L4a007e;}}
}
B4a0016:L4a0016:{c.instructions+=1;NFSU2_TR(0x4a0016);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0017:L4a0017:{c.instructions+=4;NFSU2_TR(0x4a0017);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a001a:{NFSU2_TR(0x4a001a);
u8 U[4];
w4(U+0,u32(0x790024ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a001f:{NFSU2_TR(0x4a001f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0020:{NFSU2_TR(0x4a0020);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0025ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4a0025:L4a0025:{c.instructions+=3;NFSU2_TR(0x4a0025);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a0028:{NFSU2_TR(0x4a0028);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a002a:{NFSU2_TR(0x4a002a);
if(r1(R+518)){{goto L4a0076;}}
}
B4a002c:L4a002c:{c.instructions+=3;NFSU2_TR(0x4a002c);
u8 U[4];
w4(U+0,u32(0x790014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0031:{NFSU2_TR(0x4a0031);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0032:{NFSU2_TR(0x4a0032);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0037ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4a0037:L4a0037:{c.instructions+=3;NFSU2_TR(0x4a0037);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a003a:{NFSU2_TR(0x4a003a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a003c:{NFSU2_TR(0x4a003c);
if(r1(R+518)){{goto L4a0076;}}
}
B4a003e:L4a003e:{c.instructions+=3;NFSU2_TR(0x4a003e);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0043:{NFSU2_TR(0x4a0043);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0044:{NFSU2_TR(0x4a0044);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0049ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4a0049:L4a0049:{c.instructions+=3;NFSU2_TR(0x4a0049);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a004c:{NFSU2_TR(0x4a004c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a004e:{NFSU2_TR(0x4a004e);
if(r1(R+518)){{goto L4a0076;}}
}
B4a0050:L4a0050:{c.instructions+=3;NFSU2_TR(0x4a0050);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0055:{NFSU2_TR(0x4a0055);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0056:{NFSU2_TR(0x4a0056);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a005bull));
TAIL_STATIC(0x43dc30u,43d);
}
B4a005b:L4a005b:{c.instructions+=3;NFSU2_TR(0x4a005b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a005e:{NFSU2_TR(0x4a005e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a0060:{NFSU2_TR(0x4a0060);
if(r1(R+518)){{goto L4a0076;}}
}
B4a0062:L4a0062:{c.instructions+=3;NFSU2_TR(0x4a0062);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0065:{NFSU2_TR(0x4a0065);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a0067:{NFSU2_TR(0x4a0067);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a0074;}}
}
B4a0069:L4a0069:{c.instructions+=2;NFSU2_TR(0x4a0069);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a006b:{NFSU2_TR(0x4a006b);
if(r1(R+518)){{goto L4a0074;}}
}
B4a006d:L4a006d:{c.instructions+=3;NFSU2_TR(0x4a006d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0070:{NFSU2_TR(0x4a0070);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a0072:{NFSU2_TR(0x4a0072);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a0076;}}
}
B4a0074:L4a0074:{c.instructions+=1;NFSU2_TR(0x4a0074);
__builtin_memmove((R+12),(R+28),4);
}
B4a0076:L4a0076:{c.instructions+=3;NFSU2_TR(0x4a0076);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a0079:{NFSU2_TR(0x4a0079);
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
B4a007b:{NFSU2_TR(0x4a007b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a0017u);}goto L4a0017;}}
}
B4a007d:L4a007d:{c.instructions+=1;NFSU2_TR(0x4a007d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a007e:L4a007e:{c.instructions+=4;NFSU2_TR(0x4a007e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0081:{NFSU2_TR(0x4a0081);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a0082:{NFSU2_TR(0x4a0082);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a0083:{NFSU2_TR(0x4a0083);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0090:L4a0090:{c.instructions+=2;NFSU2_TR(0x4a0090);
w4(R+4,u32(0x89cf48ull));
}
B4a0095:{NFSU2_TR(0x4a0095);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a009aull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4a009a:L4a009a:{c.instructions+=3;NFSU2_TR(0x4a009a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a009c:{NFSU2_TR(0x4a009c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a00a0:{NFSU2_TR(0x4a00a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a00b6;}}
}
B4a00a2:L4a00a2:{c.instructions+=6;NFSU2_TR(0x4a00a2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a00a6:{NFSU2_TR(0x4a00a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a00aa:{NFSU2_TR(0x4a00aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a00ab:{NFSU2_TR(0x4a00ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a00ac:{NFSU2_TR(0x4a00ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a00ad:{NFSU2_TR(0x4a00ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a00b2ull));
TAIL_STATIC(0x49d8c0u,49d);
}
B4a00b2:L4a00b2:{c.instructions+=2;NFSU2_TR(0x4a00b2);
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
B4a00b5:{NFSU2_TR(0x4a00b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a00b6:L4a00b6:{c.instructions+=2;NFSU2_TR(0x4a00b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10073c4full))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a00bb:{NFSU2_TR(0x4a00bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a00e7;}}
}
B4a00bd:L4a00bd:{c.instructions+=10;NFSU2_TR(0x4a00bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a00be:{NFSU2_TR(0x4a00be);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a00c2:{NFSU2_TR(0x4a00c2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a00c4:{NFSU2_TR(0x4a00c4);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a00c9:{NFSU2_TR(0x4a00c9);
u8 U[4];
w4(U+0,u32(0xa8de4cd2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a00ce:{NFSU2_TR(0x4a00ce);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a00d3:{NFSU2_TR(0x4a00d3);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a00d8:{NFSU2_TR(0x4a00d8);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a00dd:{NFSU2_TR(0x4a00dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a00de:{NFSU2_TR(0x4a00de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a00e3ull));
TAIL_STATIC(0x558860u,558);
}
B4a00e3:L4a00e3:{c.instructions+=2;NFSU2_TR(0x4a00e3);
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
B4a00e6:{NFSU2_TR(0x4a00e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a00e7:L4a00e7:{c.instructions+=6;NFSU2_TR(0x4a00e7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a00eb:{NFSU2_TR(0x4a00eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a00ef:{NFSU2_TR(0x4a00ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a00f0:{NFSU2_TR(0x4a00f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a00f1:{NFSU2_TR(0x4a00f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a00f2:{NFSU2_TR(0x4a00f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a00f7ull));
TAIL_STATIC(0x49da40u,49d);
}
B4a00f7:L4a00f7:{c.instructions+=8;NFSU2_TR(0x4a00f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a00f8:{NFSU2_TR(0x4a00f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a00fc:{NFSU2_TR(0x4a00fc);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0101:{NFSU2_TR(0x4a0101);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0106:{NFSU2_TR(0x4a0106);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a010b:{NFSU2_TR(0x4a010b);
u8 U[4];
w4(U+0,u32(0x790038ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0110:{NFSU2_TR(0x4a0110);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0111:{NFSU2_TR(0x4a0111);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0116ull));
TAIL_STATIC(0x558570u,558);
}
B4a0116:L4a0116:{c.instructions+=2;NFSU2_TR(0x4a0116);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a0119:{NFSU2_TR(0x4a0119);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0120:L4a0120:{c.instructions+=4;NFSU2_TR(0x4a0120);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0122:{NFSU2_TR(0x4a0122);
u8 U[4];
w4(U+0,u32(0x78787878ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0127:{NFSU2_TR(0x4a0127);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0129:{NFSU2_TR(0x4a0129);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a012eull));
TAIL_STATIC(0x49d8c0u,49d);
}
B4a012e:L4a012e:{c.instructions+=2;NFSU2_TR(0x4a012e);
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
B4a0131:{NFSU2_TR(0x4a0131);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0140:L4a0140:{c.instructions+=5;NFSU2_TR(0x4a0140);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0141:{NFSU2_TR(0x4a0141);
__builtin_memmove((R+20),(R+16),4);
}
B4a0143:{NFSU2_TR(0x4a0143);
u8 U[8];
__builtin_memmove((U+0),gp(0x8500d0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a014a:{NFSU2_TR(0x4a014a);
s1(0x8362e0,u8(0x1ull));
}
B4a0151:{NFSU2_TR(0x4a0151);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4a0188;}}
}
B4a0153:L4a0153:{c.instructions+=2;NFSU2_TR(0x4a0153);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0155:{NFSU2_TR(0x4a0155);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a015aull));
TAIL_STATIC(0x58fd50u,58f);
}
B4a015a:L4a015a:{c.instructions+=4;NFSU2_TR(0x4a015a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a015d:{NFSU2_TR(0x4a015d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a015f:{NFSU2_TR(0x4a015f);
w4(R+4,u32(0x89cf48ull));
}
B4a0164:{NFSU2_TR(0x4a0164);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0169ull));
TAIL_STATIC(0x5fe2b0u,5fe);
}
B4a0169:L4a0169:{c.instructions+=2;NFSU2_TR(0x4a0169);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a0173:{NFSU2_TR(0x4a0173);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a0188;}}
}
B4a0175:L4a0175:{c.instructions+=3;NFSU2_TR(0x4a0175);
__builtin_memmove((R+0),gp(0x8500c7),1);
}
B4a017a:{NFSU2_TR(0x4a017a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a017c:{NFSU2_TR(0x4a017c);
if(r1(R+518)){{goto L4a0188;}}
}
B4a017e:L4a017e:{c.instructions+=2;NFSU2_TR(0x4a017e);
w4(R+4,u32(0x89cf48ull));
}
B4a0183:{NFSU2_TR(0x4a0183);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0188ull));
TAIL_STATIC(0x5f08f0u,5f0);
}
B4a0188:L4a0188:{c.instructions+=1;NFSU2_TR(0x4a0188);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a018dull));
TAIL_STATIC(0x5832b0u,583);
}
B4a018d:L4a018d:{c.instructions+=3;NFSU2_TR(0x4a018d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a018f:{NFSU2_TR(0x4a018f);
w4(R+4,u32(0x850080ull));
}
B4a0194:{NFSU2_TR(0x4a0194);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0199ull));
TAIL_STATIC(0x5031b0u,503);
}
B4a0199:L4a0199:{c.instructions+=3;NFSU2_TR(0x4a0199);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4a019f:{NFSU2_TR(0x4a019f);
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
B4a01a1:{NFSU2_TR(0x4a01a1);
if(r1(R+518)){{goto L4a01a9;}}
}
B4a01a3:L4a01a3:{c.instructions+=3;NFSU2_TR(0x4a01a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4a01a5:{NFSU2_TR(0x4a01a5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a01a7:{NFSU2_TR(0x4a01a7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a01a9ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4a01a9:L4a01a9:{c.instructions+=4;NFSU2_TR(0x4a01a9);
__builtin_memmove((R+4),gp(0x836340),4);
}
B4a01af:{NFSU2_TR(0x4a01af);
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
B4a01b1:{NFSU2_TR(0x4a01b1);
s4(0x836370,u32(0x0ull));
}
B4a01bb:{NFSU2_TR(0x4a01bb);
if(r1(R+518)){{goto L4a01c3;}}
}
B4a01bd:L4a01bd:{c.instructions+=3;NFSU2_TR(0x4a01bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4a01bf:{NFSU2_TR(0x4a01bf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a01c1:{NFSU2_TR(0x4a01c1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a01c3ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4a01c3:L4a01c3:{c.instructions+=3;NFSU2_TR(0x4a01c3);
w4(R+4,u32(0x838980ull));
}
B4a01c8:{NFSU2_TR(0x4a01c8);
s4(0x836340,u32(0x0ull));
}
B4a01d2:{NFSU2_TR(0x4a01d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a01d7ull));
TAIL_STATIC(0x54fd40u,54f);
}
B4a01d7:L4a01d7:{c.instructions+=3;NFSU2_TR(0x4a01d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a01da:{NFSU2_TR(0x4a01da);
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
B4a01dc:{NFSU2_TR(0x4a01dc);
if(r1(R+518)){{goto L4a01f0;}}
}
B4a01de:L4a01de:{c.instructions+=5;NFSU2_TR(0x4a01de);
__builtin_memmove((R+4),gp(0x7f44b0),4);
}
B4a01e4:{NFSU2_TR(0x4a01e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a01e6:{NFSU2_TR(0x4a01e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a01e7:{NFSU2_TR(0x4a01e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a01e8:{NFSU2_TR(0x4a01e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a01edull));
TAIL_STATIC(0x537980u,537);
}
B4a01ed:L4a01ed:{c.instructions+=1;NFSU2_TR(0x4a01ed);
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
B4a01f0:L4a01f0:{c.instructions+=2;NFSU2_TR(0x4a01f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a01f1:{NFSU2_TR(0x4a01f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0200:L4a0200:{c.instructions+=2;NFSU2_TR(0x4a0200);
w4(R+4,u32(0x89cf48ull));
}
B4a0205:{NFSU2_TR(0x4a0205);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a020aull));
TAIL_STATIC(0x5f0120u,5f0);
}
B4a020a:L4a020a:{c.instructions+=2;NFSU2_TR(0x4a020a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a020c:{NFSU2_TR(0x4a020c);
if(r1(R+518)){{goto L4a0215;}}
}
B4a020e:L4a020e:{c.instructions+=2;NFSU2_TR(0x4a020e);
u8 U[4];
w4(U+0,u32(0x1eb7bf0eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0213:{NFSU2_TR(0x4a0213);
{goto L4a021a;}
}
B4a0215:L4a0215:{c.instructions+=1;NFSU2_TR(0x4a0215);
u8 U[4];
w4(U+0,u32(0x4e7212d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a021a:L4a021a:{c.instructions+=1;NFSU2_TR(0x4a021a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a021full));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a021f:L4a021f:{c.instructions+=9;NFSU2_TR(0x4a021f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a0222:{NFSU2_TR(0x4a0222);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0223:{NFSU2_TR(0x4a0223);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0227:{NFSU2_TR(0x4a0227);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a022c:{NFSU2_TR(0x4a022c);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0231:{NFSU2_TR(0x4a0231);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0236:{NFSU2_TR(0x4a0236);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a023b:{NFSU2_TR(0x4a023b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a023c:{NFSU2_TR(0x4a023c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0241ull));
TAIL_STATIC(0x558540u,558);
}
B4a0241:L4a0241:{c.instructions+=2;NFSU2_TR(0x4a0241);
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
B4a0244:{NFSU2_TR(0x4a0244);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0250:L4a0250:{c.instructions+=5;NFSU2_TR(0x4a0250);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0251:{NFSU2_TR(0x4a0251);
__builtin_memmove((R+28),(R+0),4);
}
B4a0253:{NFSU2_TR(0x4a0253);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a0256:{NFSU2_TR(0x4a0256);
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
B4a0258:{NFSU2_TR(0x4a0258);
if(r1(R+518)){{goto L4a0261;}}
}
B4a025a:L4a025a:{c.instructions+=3;NFSU2_TR(0x4a025a);
w4(R+0,u32(0x847121ddull));
}
B4a025f:{NFSU2_TR(0x4a025f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a0260:{NFSU2_TR(0x4a0260);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0261:L4a0261:{c.instructions+=3;NFSU2_TR(0x4a0261);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4a0263:{NFSU2_TR(0x4a0263);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4a0266:{NFSU2_TR(0x4a0266);
if(r1(R+518)){{goto L4a0276;}}
}
B4a0268:L4a0268:{c.instructions+=2;NFSU2_TR(0x4a0268);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4a026b:{NFSU2_TR(0x4a026b);
if(r1(R+518)){{goto L4a0276;}}
}
B4a026d:L4a026d:{c.instructions+=2;NFSU2_TR(0x4a026d);
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
B4a026f:{NFSU2_TR(0x4a026f);
if(r1(R+518)){{goto L4a0276;}}
}
B4a0271:L4a0271:{c.instructions+=2;NFSU2_TR(0x4a0271);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a0274:{NFSU2_TR(0x4a0274);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a027d;}}
}
B4a0276:L4a0276:{c.instructions+=3;NFSU2_TR(0x4a0276);
w4(R+0,u32(0xa7db717full));
}
B4a027b:{NFSU2_TR(0x4a027b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a027c:{NFSU2_TR(0x4a027c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a027d:L4a027d:{c.instructions+=4;NFSU2_TR(0x4a027d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4a0281:{NFSU2_TR(0x4a0281);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0282:{NFSU2_TR(0x4a0282);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0283:{NFSU2_TR(0x4a0283);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0288ull));
TAIL_STATIC(0x583ac0u,583);
}
B4a0288:L4a0288:{c.instructions+=4;NFSU2_TR(0x4a0288);
__builtin_memmove((R+24),(R+0),4);
}
B4a028a:{NFSU2_TR(0x4a028a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a028d:{NFSU2_TR(0x4a028d);
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
B4a028f:{NFSU2_TR(0x4a028f);
if(r1(R+518)){{goto L4a02bb;}}
}
B4a0291:L4a0291:{c.instructions+=2;NFSU2_TR(0x4a0291);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
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
B4a0295:{NFSU2_TR(0x4a0295);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4a02bb;}}
}
B4a0297:L4a0297:{c.instructions+=2;NFSU2_TR(0x4a0297);
__builtin_memmove((R+4),(R+28),4);
}
B4a0299:{NFSU2_TR(0x4a0299);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a029eull));
TAIL_STATIC(0x5ef9e0u,5ef);
}
B4a029e:L4a029e:{c.instructions+=2;NFSU2_TR(0x4a029e);
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
B4a02a0:{NFSU2_TR(0x4a02a0);
if(r1(R+518)){{goto L4a02bb;}}
}
B4a02a2:L4a02a2:{c.instructions+=10;NFSU2_TR(0x4a02a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a02a5:{NFSU2_TR(0x4a02a5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a02a7:{NFSU2_TR(0x4a02a7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a02aa:{NFSU2_TR(0x4a02aa);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+0),(U+2),1);
}
B4a02ad:{NFSU2_TR(0x4a02ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a02ae:{NFSU2_TR(0x4a02ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a02af:{NFSU2_TR(0x4a02af);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4a02b0:{NFSU2_TR(0x4a02b0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x58f7c8deull))));
}
B4a02b5:{NFSU2_TR(0x4a02b5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x847121ddull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x847121ddull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x847121ddull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a02ba:{NFSU2_TR(0x4a02ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a02bb:L4a02bb:{c.instructions+=4;NFSU2_TR(0x4a02bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a02bc:{NFSU2_TR(0x4a02bc);
w4(R+0,u32(0xaeb6fd26ull));
}
B4a02c1:{NFSU2_TR(0x4a02c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a02c2:{NFSU2_TR(0x4a02c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a02d0:L4a02d0:{c.instructions+=3;NFSU2_TR(0x4a02d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a02d3:{NFSU2_TR(0x4a02d3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a02d5:{NFSU2_TR(0x4a02d5);
if(r1(R+518)){{goto L4a0303;}}
}
B4a02d7:L4a02d7:{c.instructions+=2;NFSU2_TR(0x4a02d7);
u8 U[14];
__builtin_memmove((U+6),gp(0x866a08),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a02de:{NFSU2_TR(0x4a02de);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4a0339;}}
}
B4a02e0:L4a02e0:{c.instructions+=1;NFSU2_TR(0x4a02e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a02e5ull));
TAIL_STATIC(0x5ef9e0u,5ef);
}
B4a02e5:L4a02e5:{c.instructions+=2;NFSU2_TR(0x4a02e5);
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
B4a02e7:{NFSU2_TR(0x4a02e7);
if(r1(R+518)){{goto L4a0339;}}
}
B4a02e9:L4a02e9:{c.instructions+=8;NFSU2_TR(0x4a02e9);
__builtin_memmove((R+8),gp(0x866a08),4);
}
B4a02ef:{NFSU2_TR(0x4a02ef);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a02f1:{NFSU2_TR(0x4a02f1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a02f4:{NFSU2_TR(0x4a02f4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+0),(U+2),1);
}
B4a02f7:{NFSU2_TR(0x4a02f7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4a02f8:{NFSU2_TR(0x4a02f8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x58f7c8deull))));
}
B4a02fd:{NFSU2_TR(0x4a02fd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x847121ddull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x847121ddull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x847121ddull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a0302:{NFSU2_TR(0x4a0302);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0303:L4a0303:{c.instructions+=3;NFSU2_TR(0x4a0303);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4a0307:{NFSU2_TR(0x4a0307);
u8 U[14];
__builtin_memmove((U+6),gp(0x7fbe5c),4);
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
B4a030d:{NFSU2_TR(0x4a030d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a0315;}}
}
B4a030f:L4a030f:{c.instructions+=2;NFSU2_TR(0x4a030f);
w4(R+0,u32(0x847121ddull));
}
B4a0314:{NFSU2_TR(0x4a0314);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0315:L4a0315:{c.instructions+=3;NFSU2_TR(0x4a0315);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4a0317:{NFSU2_TR(0x4a0317);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4a031a:{NFSU2_TR(0x4a031a);
if(r1(R+518)){{goto L4a032a;}}
}
B4a031c:L4a031c:{c.instructions+=2;NFSU2_TR(0x4a031c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4a031f:{NFSU2_TR(0x4a031f);
if(r1(R+518)){{goto L4a032a;}}
}
B4a0321:L4a0321:{c.instructions+=2;NFSU2_TR(0x4a0321);
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
B4a0323:{NFSU2_TR(0x4a0323);
if(r1(R+518)){{goto L4a032a;}}
}
B4a0325:L4a0325:{c.instructions+=2;NFSU2_TR(0x4a0325);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a0328:{NFSU2_TR(0x4a0328);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a0330;}}
}
B4a032a:L4a032a:{c.instructions+=2;NFSU2_TR(0x4a032a);
w4(R+0,u32(0xa7db717full));
}
B4a032f:{NFSU2_TR(0x4a032f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0330:L4a0330:{c.instructions+=1;NFSU2_TR(0x4a0330);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0335ull));
TAIL_STATIC(0x5ef9e0u,5ef);
}
B4a0335:L4a0335:{c.instructions+=2;NFSU2_TR(0x4a0335);
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
B4a0337:{NFSU2_TR(0x4a0337);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a033f;}}
}
B4a0339:L4a0339:{c.instructions+=2;NFSU2_TR(0x4a0339);
w4(R+0,u32(0xaeb6fd26ull));
}
B4a033e:{NFSU2_TR(0x4a033e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a033f:L4a033f:{c.instructions+=6;NFSU2_TR(0x4a033f);
{u32 ea_=u32(u32(9031532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a0345:{NFSU2_TR(0x4a0345);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a034b:{NFSU2_TR(0x4a034b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a034d:{NFSU2_TR(0x4a034d);
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
B4a0350:{NFSU2_TR(0x4a0350);
w4(R+0,u32(0x847121ddull));
}
B4a0355:{NFSU2_TR(0x4a0355);
if(r1(R+518)){{goto L4a035c;}}
}
B4a0357:L4a0357:{c.instructions+=1;NFSU2_TR(0x4a0357);
w4(R+0,u32(0xdd68eabbull));
}
B4a035c:L4a035c:{c.instructions+=1;NFSU2_TR(0x4a035c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0360:L4a0360:{c.instructions+=8;NFSU2_TR(0x4a0360);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B4a0363:{NFSU2_TR(0x4a0363);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0364:{NFSU2_TR(0x4a0364);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0365:{NFSU2_TR(0x4a0365);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0366:{NFSU2_TR(0x4a0366);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0367:{NFSU2_TR(0x4a0367);
__builtin_memmove((R+20),(R+4),4);
}
B4a0369:{NFSU2_TR(0x4a0369);
w4(R+12,u32(0x1ull));
}
B4a036e:{NFSU2_TR(0x4a036e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4a0370:L4a0370:{c.instructions+=3;NFSU2_TR(0x4a0370);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89cf50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4a0377:{NFSU2_TR(0x4a0377);
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
B4a0379:{NFSU2_TR(0x4a0379);
if(r1(R+518)){{goto L4a03d4;}}
}
B4a037b:L4a037b:{c.instructions+=3;NFSU2_TR(0x4a037b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a037c:{NFSU2_TR(0x4a037c);
w4(R+4,u32(0x89cf48ull));
}
B4a0381:{NFSU2_TR(0x4a0381);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0386ull));
TAIL_STATIC(0x5f0220u,5f0);
}
B4a0386:L4a0386:{c.instructions+=7;NFSU2_TR(0x4a0386);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0387:{NFSU2_TR(0x4a0387);
u8 U[4];
w4(U+0,u32(0x790050ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a038c:{NFSU2_TR(0x4a038c);
__builtin_memmove((R+24),(R+0),4);
}
B4a038e:{NFSU2_TR(0x4a038e);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a0392:{NFSU2_TR(0x4a0392);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0394:{NFSU2_TR(0x4a0394);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0395:{NFSU2_TR(0x4a0395);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a039aull));
TAIL_STATIC(0x50c960u,50c);
}
B4a039a:L4a039a:{c.instructions+=3;NFSU2_TR(0x4a039a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a039d:{NFSU2_TR(0x4a039d);
w4(R+4,u32(0x89cf48ull));
}
B4a03a2:{NFSU2_TR(0x4a03a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a03a7ull));
TAIL_STATIC(0x5f0120u,5f0);
}
B4a03a7:L4a03a7:{c.instructions+=2;NFSU2_TR(0x4a03a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a03a9:{NFSU2_TR(0x4a03a9);
if(r1(R+518)){{goto L4a03b4;}}
}
B4a03ab:L4a03ab:{c.instructions+=2;NFSU2_TR(0x4a03ab);
__builtin_memmove((R+0),(R+24),4);
}
B4a03ad:{NFSU2_TR(0x4a03ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a03b2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a0250u);}goto L4a0250;}
}
B4a03b2:L4a03b2:{c.instructions+=1;NFSU2_TR(0x4a03b2);
{goto L4a03bb;}
}
B4a03b4:L4a03b4:{c.instructions+=2;NFSU2_TR(0x4a03b4);
__builtin_memmove((R+4),(R+24),4);
}
B4a03b6:{NFSU2_TR(0x4a03b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a03bbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a02d0u);}goto L4a02d0;}
}
B4a03bb:L4a03bb:{c.instructions+=3;NFSU2_TR(0x4a03bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a03be:{NFSU2_TR(0x4a03be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a03bf:{NFSU2_TR(0x4a03bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a03c4ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a03c4:L4a03c4:{c.instructions+=5;NFSU2_TR(0x4a03c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a03c5:{NFSU2_TR(0x4a03c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a03c9:{NFSU2_TR(0x4a03c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a03ca:{NFSU2_TR(0x4a03ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a03cb:{NFSU2_TR(0x4a03cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a03d0ull));
TAIL_STATIC(0x542600u,542);
}
B4a03d0:L4a03d0:{c.instructions+=2;NFSU2_TR(0x4a03d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a03d3:{NFSU2_TR(0x4a03d3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4a03d4:L4a03d4:{c.instructions+=3;NFSU2_TR(0x4a03d4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4a03d5:{NFSU2_TR(0x4a03d5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a03d8:{NFSU2_TR(0x4a03d8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a0370u);}goto L4a0370;}}
}
B4a03da:L4a03da:{c.instructions+=6;NFSU2_TR(0x4a03da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a03db:{NFSU2_TR(0x4a03db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a03dc:{NFSU2_TR(0x4a03dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a03dd:{NFSU2_TR(0x4a03dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a03de:{NFSU2_TR(0x4a03de);
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
B4a03e1:{NFSU2_TR(0x4a03e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a03f0:L4a03f0:{c.instructions+=14;NFSU2_TR(0x4a03f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a03f2:{NFSU2_TR(0x4a03f2);
u8 U[4];
w4(U+0,u32(0x7729f3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a03f7:{NFSU2_TR(0x4a03f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a03fd:{NFSU2_TR(0x4a03fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a03fe:{NFSU2_TR(0x4a03fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a0405:{NFSU2_TR(0x4a0405);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0406:{NFSU2_TR(0x4a0406);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0407:{NFSU2_TR(0x4a0407);
__builtin_memmove((R+24),(R+4),4);
}
B4a0409:{NFSU2_TR(0x4a0409);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a040d:{NFSU2_TR(0x4a040d);
u8 U[4];
w4(U+0,u32(0x790060ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4a0413:{NFSU2_TR(0x4a0413);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0416:{NFSU2_TR(0x4a0416);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a0418:{NFSU2_TR(0x4a0418);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a0420:{NFSU2_TR(0x4a0420);
if(r1(R+518)){{goto L4a0432;}}
}
B4a0422:L4a0422:{c.instructions+=2;NFSU2_TR(0x4a0422);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0423:{NFSU2_TR(0x4a0423);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0428ull));
TAIL_STATIC(0x540a60u,540);
}
B4a0428:L4a0428:{c.instructions+=2;NFSU2_TR(0x4a0428);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a042b:{NFSU2_TR(0x4a042b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a0432:L4a0432:{c.instructions+=1;NFSU2_TR(0x4a0432);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0437ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4a0437:L4a0437:{c.instructions+=2;NFSU2_TR(0x4a0437);
__builtin_memmove((R+4),(R+0),4);
}
B4a0439:{NFSU2_TR(0x4a0439);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a043eull));
TAIL_STATIC(0x586950u,586);
}
B4a043e:L4a043e:{c.instructions+=4;NFSU2_TR(0x4a043e);
__builtin_memmove((R+4),(R+24),4);
}
B4a0440:{NFSU2_TR(0x4a0440);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x78f544ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a0447:{NFSU2_TR(0x4a0447);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a044f:{NFSU2_TR(0x4a044f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0454ull));
TAIL_STATIC(0x510d40u,510);
}
B4a0454:L4a0454:{c.instructions+=5;NFSU2_TR(0x4a0454);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a0458:{NFSU2_TR(0x4a0458);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a0459:{NFSU2_TR(0x4a0459);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a0460:{NFSU2_TR(0x4a0460);
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
B4a0463:{NFSU2_TR(0x4a0463);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0470:L4a0470:{c.instructions+=5;NFSU2_TR(0x4a0470);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0474:{NFSU2_TR(0x4a0474);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xca4ce1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a0479:{NFSU2_TR(0x4a0479);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a047a:{NFSU2_TR(0x4a047a);
__builtin_memmove((R+24),(R+4),4);
}
B4a047c:{NFSU2_TR(0x4a047c);
if(r1(R+518)){{goto L4a049c;}}
}
B4a047e:L4a047e:{c.instructions+=2;NFSU2_TR(0x4a047e);
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
B4a0483:{NFSU2_TR(0x4a0483);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a04bf;}}
}
B4a0485:L4a0485:{c.instructions+=5;NFSU2_TR(0x4a0485);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0488:{NFSU2_TR(0x4a0488);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a048a:{NFSU2_TR(0x4a048a);
u8 U[4];
w4(U+0,u32(0x790070ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a048f:{NFSU2_TR(0x4a048f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0490:{NFSU2_TR(0x4a0490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0495ull));
TAIL_STATIC(0x537980u,537);
}
B4a0495:L4a0495:{c.instructions+=3;NFSU2_TR(0x4a0495);
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
B4a0498:{NFSU2_TR(0x4a0498);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a0499:{NFSU2_TR(0x4a0499);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a049c:L4a049c:{c.instructions+=3;NFSU2_TR(0x4a049c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a049f:{NFSU2_TR(0x4a049f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a04a0:{NFSU2_TR(0x4a04a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a04a5ull));
TAIL_STATIC(0x540a60u,540);
}
B4a04a5:L4a04a5:{c.instructions+=6;NFSU2_TR(0x4a04a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a04a8:{NFSU2_TR(0x4a04a8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a04aa:{NFSU2_TR(0x4a04aa);
u8 U[4];
w4(U+0,u32(0x790070ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a04af:{NFSU2_TR(0x4a04af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a04b0:{NFSU2_TR(0x4a04b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a04b7:{NFSU2_TR(0x4a04b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a04bcull));
TAIL_STATIC(0x537980u,537);
}
B4a04bc:L4a04bc:{c.instructions+=1;NFSU2_TR(0x4a04bc);
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
B4a04bf:L4a04bf:{c.instructions+=2;NFSU2_TR(0x4a04bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a04c0:{NFSU2_TR(0x4a04c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a04d0:L4a04d0:{c.instructions+=6;NFSU2_TR(0x4a04d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B4a04d3:{NFSU2_TR(0x4a04d3);
__builtin_memmove((R+8),(R+4),4);
}
B4a04d5:{NFSU2_TR(0x4a04d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a04d6:{NFSU2_TR(0x4a04d6);
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
B4a04d8:{NFSU2_TR(0x4a04d8);
w4(R+4,u32(0xcull));
}
B4a04dd:{NFSU2_TR(0x4a04dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4a04e1:L4a04e1:{c.instructions+=1;NFSU2_TR(0x4a04e1);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4a04e3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a04e1u);}goto L4a04e1;}
}
B4a04e3:L4a04e3:{c.instructions+=16;NFSU2_TR(0x4a04e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a04e6:{NFSU2_TR(0x4a04e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a04ea:{NFSU2_TR(0x4a04ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a04ed:{NFSU2_TR(0x4a04ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4a04ef:{NFSU2_TR(0x4a04ef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a04f1:{NFSU2_TR(0x4a04f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a04f5:{NFSU2_TR(0x4a04f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a04f6:{NFSU2_TR(0x4a04f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x7900a8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a04fe:{NFSU2_TR(0x4a04fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x790098ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a0506:{NFSU2_TR(0x4a0506);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x790084ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a050e:{NFSU2_TR(0x4a050e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a0516:{NFSU2_TR(0x4a0516);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a051e:{NFSU2_TR(0x4a051e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a0526:{NFSU2_TR(0x4a0526);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a052e:{NFSU2_TR(0x4a052e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x42380000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a0536:{NFSU2_TR(0x4a0536);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0539ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a0539:L4a0539:{c.instructions+=3;NFSU2_TR(0x4a0539);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a053a:{NFSU2_TR(0x4a053a);
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
B4a053d:{NFSU2_TR(0x4a053d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0540:L4a0540:{c.instructions+=8;NFSU2_TR(0x4a0540);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0541:{NFSU2_TR(0x4a0541);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0542:{NFSU2_TR(0x4a0542);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0543:{NFSU2_TR(0x4a0543);
__builtin_memmove((R+24),(R+4),4);
}
B4a0545:{NFSU2_TR(0x4a0545);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a054b:{NFSU2_TR(0x4a054b);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4a054e:{NFSU2_TR(0x4a054e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a054f:{NFSU2_TR(0x4a054f);
if(r1(R+518)){{goto L4a0625;}}
}
B4a0555:L4a0555:{c.instructions+=2;NFSU2_TR(0x4a0555);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a0556:{NFSU2_TR(0x4a0556);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a06ba;}}
}
B4a055c:L4a055c:{c.instructions+=9;NFSU2_TR(0x4a055c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a0560:{NFSU2_TR(0x4a0560);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0563:{NFSU2_TR(0x4a0563);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a0567:{NFSU2_TR(0x4a0567);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a056a:{NFSU2_TR(0x4a056a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a056b:{NFSU2_TR(0x4a056b);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0570:{NFSU2_TR(0x4a0570);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0571:{NFSU2_TR(0x4a0571);
u8 U[4];
w4(U+0,u32(0x7900f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0576:{NFSU2_TR(0x4a0576);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a057bull));
TAIL_STATIC(0x50b990u,50b);
}
B4a057b:L4a057b:{c.instructions+=4;NFSU2_TR(0x4a057b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a057e:{NFSU2_TR(0x4a057e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a057f:{NFSU2_TR(0x4a057f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0580:{NFSU2_TR(0x4a0580);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0585ull));
TAIL_STATIC(0x537b80u,537);
}
B4a0585:L4a0585:{c.instructions+=8;NFSU2_TR(0x4a0585);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a0588:{NFSU2_TR(0x4a0588);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a058b:{NFSU2_TR(0x4a058b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a058e:{NFSU2_TR(0x4a058e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a058f:{NFSU2_TR(0x4a058f);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0594:{NFSU2_TR(0x4a0594);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0595:{NFSU2_TR(0x4a0595);
u8 U[4];
w4(U+0,u32(0x7900e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a059a:{NFSU2_TR(0x4a059a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a059full));
TAIL_STATIC(0x50b990u,50b);
}
B4a059f:L4a059f:{c.instructions+=4;NFSU2_TR(0x4a059f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a05a2:{NFSU2_TR(0x4a05a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a05a3:{NFSU2_TR(0x4a05a3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a05a4:{NFSU2_TR(0x4a05a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a05a9ull));
TAIL_STATIC(0x537b80u,537);
}
B4a05a9:L4a05a9:{c.instructions+=6;NFSU2_TR(0x4a05a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a05ac:{NFSU2_TR(0x4a05ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a05af:{NFSU2_TR(0x4a05af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a05b2:{NFSU2_TR(0x4a05b2);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B4a05b4:{NFSU2_TR(0x4a05b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a05b8:{NFSU2_TR(0x4a05b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a05be;}}
}
B4a05ba:L4a05ba:{c.instructions+=2;NFSU2_TR(0x4a05ba);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a05bc:{NFSU2_TR(0x4a05bc);
{goto L4a05e1;}
}
B4a05be:L4a05be:{c.instructions+=4;NFSU2_TR(0x4a05be);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4a05c0:{NFSU2_TR(0x4a05c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a05c4:{NFSU2_TR(0x4a05c4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4a05c8:{NFSU2_TR(0x4a05c8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4a05d0;}}
}
B4a05ca:L4a05ca:{c.instructions+=1;NFSU2_TR(0x4a05ca);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a05d0:L4a05d0:{c.instructions+=4;NFSU2_TR(0x4a05d0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4a05d4:{NFSU2_TR(0x4a05d4);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B4a05d6:{NFSU2_TR(0x4a05d6);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a05dc:{NFSU2_TR(0x4a05dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a05e1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4a05e1:L4a05e1:{c.instructions+=6;NFSU2_TR(0x4a05e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a05e4:{NFSU2_TR(0x4a05e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a05e5:{NFSU2_TR(0x4a05e5);
u8 U[4];
w4(U+0,u32(0x7900dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a05ea:{NFSU2_TR(0x4a05ea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a05eb:{NFSU2_TR(0x4a05eb);
u8 U[4];
w4(U+0,u32(0x7900ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a05f0:{NFSU2_TR(0x4a05f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a05f5ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a05f5:L4a05f5:{c.instructions+=4;NFSU2_TR(0x4a05f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a05f8:{NFSU2_TR(0x4a05f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a05f9:{NFSU2_TR(0x4a05f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a05fa:{NFSU2_TR(0x4a05fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a05ffull));
TAIL_STATIC(0x537b80u,537);
}
B4a05ff:L4a05ff:{c.instructions+=6;NFSU2_TR(0x4a05ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a0602:{NFSU2_TR(0x4a0602);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0604:{NFSU2_TR(0x4a0604);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
}
B4a060a:{NFSU2_TR(0x4a060a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a060c:{NFSU2_TR(0x4a060c);
__builtin_memmove((R+4),(R+24),4);
}
B4a060e:{NFSU2_TR(0x4a060e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0613ull));
TAIL_STATIC(0x50d820u,50d);
}
B4a0613:L4a0613:{c.instructions+=4;NFSU2_TR(0x4a0613);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0615:{NFSU2_TR(0x4a0615);
__builtin_memmove((R+4),(R+24),4);
}
B4a0617:{NFSU2_TR(0x4a0617);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0619:{NFSU2_TR(0x4a0619);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a061eull));
TAIL_STATIC(0x50d820u,50d);
}
B4a061e:L4a061e:{c.instructions+=5;NFSU2_TR(0x4a061e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a061f:{NFSU2_TR(0x4a061f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a0620:{NFSU2_TR(0x4a0620);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a0621:{NFSU2_TR(0x4a0621);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a0622:{NFSU2_TR(0x4a0622);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0625:L4a0625:{c.instructions+=11;NFSU2_TR(0x4a0625);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a0629:{NFSU2_TR(0x4a0629);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a062c:{NFSU2_TR(0x4a062c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a062f:{NFSU2_TR(0x4a062f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a0633:{NFSU2_TR(0x4a0633);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a0636:{NFSU2_TR(0x4a0636);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B4a0638:{NFSU2_TR(0x4a0638);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0639:{NFSU2_TR(0x4a0639);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a063e:{NFSU2_TR(0x4a063e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a063f:{NFSU2_TR(0x4a063f);
u8 U[4];
w4(U+0,u32(0x7900f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0644:{NFSU2_TR(0x4a0644);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0649ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a0649:L4a0649:{c.instructions+=4;NFSU2_TR(0x4a0649);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a064c:{NFSU2_TR(0x4a064c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a064d:{NFSU2_TR(0x4a064d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a064e:{NFSU2_TR(0x4a064e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0653ull));
TAIL_STATIC(0x537b80u,537);
}
B4a0653:L4a0653:{c.instructions+=8;NFSU2_TR(0x4a0653);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a0656:{NFSU2_TR(0x4a0656);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a0659:{NFSU2_TR(0x4a0659);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a065c:{NFSU2_TR(0x4a065c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a065d:{NFSU2_TR(0x4a065d);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0662:{NFSU2_TR(0x4a0662);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0663:{NFSU2_TR(0x4a0663);
u8 U[4];
w4(U+0,u32(0x7900e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0668:{NFSU2_TR(0x4a0668);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a066dull));
TAIL_STATIC(0x50b990u,50b);
}
B4a066d:L4a066d:{c.instructions+=4;NFSU2_TR(0x4a066d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a0670:{NFSU2_TR(0x4a0670);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0671:{NFSU2_TR(0x4a0671);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0672:{NFSU2_TR(0x4a0672);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0677ull));
TAIL_STATIC(0x537b80u,537);
}
B4a0677:L4a0677:{c.instructions+=8;NFSU2_TR(0x4a0677);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a067a:{NFSU2_TR(0x4a067a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a067d:{NFSU2_TR(0x4a067d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a0680:{NFSU2_TR(0x4a0680);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0681:{NFSU2_TR(0x4a0681);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0686:{NFSU2_TR(0x4a0686);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0687:{NFSU2_TR(0x4a0687);
u8 U[4];
w4(U+0,u32(0x7900bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a068c:{NFSU2_TR(0x4a068c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0691ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a0691:L4a0691:{c.instructions+=4;NFSU2_TR(0x4a0691);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a0694:{NFSU2_TR(0x4a0694);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0695:{NFSU2_TR(0x4a0695);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0696:{NFSU2_TR(0x4a0696);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a069bull));
TAIL_STATIC(0x537b80u,537);
}
B4a069b:L4a069b:{c.instructions+=6;NFSU2_TR(0x4a069b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a069e:{NFSU2_TR(0x4a069e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a06a0:{NFSU2_TR(0x4a06a0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
}
B4a06a6:{NFSU2_TR(0x4a06a6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a06a8:{NFSU2_TR(0x4a06a8);
__builtin_memmove((R+4),(R+24),4);
}
B4a06aa:{NFSU2_TR(0x4a06aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a06afull));
TAIL_STATIC(0x50d820u,50d);
}
B4a06af:L4a06af:{c.instructions+=4;NFSU2_TR(0x4a06af);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a06b1:{NFSU2_TR(0x4a06b1);
__builtin_memmove((R+4),(R+24),4);
}
B4a06b3:{NFSU2_TR(0x4a06b3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a06b5:{NFSU2_TR(0x4a06b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a06baull));
TAIL_STATIC(0x50d820u,50d);
}
B4a06ba:L4a06ba:{c.instructions+=5;NFSU2_TR(0x4a06ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a06bb:{NFSU2_TR(0x4a06bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a06bc:{NFSU2_TR(0x4a06bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a06bd:{NFSU2_TR(0x4a06bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a06be:{NFSU2_TR(0x4a06be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a06d0:L4a06d0:{c.instructions+=6;NFSU2_TR(0x4a06d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a06d1:{NFSU2_TR(0x4a06d1);
__builtin_memmove((R+24),(R+4),4);
}
B4a06d3:{NFSU2_TR(0x4a06d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a06d9:{NFSU2_TR(0x4a06d9);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4a06dc:{NFSU2_TR(0x4a06dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a06dd:{NFSU2_TR(0x4a06dd);
if(r1(R+518)){{goto L4a073c;}}
}
B4a06df:L4a06df:{c.instructions+=2;NFSU2_TR(0x4a06df);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a06e0:{NFSU2_TR(0x4a06e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a078a;}}
}
B4a06e6:L4a06e6:{c.instructions+=3;NFSU2_TR(0x4a06e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a06e9:{NFSU2_TR(0x4a06e9);
u8 U[4];
w4(U+0,u32(0xa1fa715full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a06ee:{NFSU2_TR(0x4a06ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a06f3ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a06f3:L4a06f3:{c.instructions+=4;NFSU2_TR(0x4a06f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a06f4:{NFSU2_TR(0x4a06f4);
u8 U[4];
w4(U+0,u32(0x790114ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a06f9:{NFSU2_TR(0x4a06f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a06fa:{NFSU2_TR(0x4a06fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a06ffull));
TAIL_STATIC(0x542600u,542);
}
B4a06ff:L4a06ff:{c.instructions+=3;NFSU2_TR(0x4a06ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a0702:{NFSU2_TR(0x4a0702);
u8 U[4];
w4(U+0,u32(0xf122e057ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0707:{NFSU2_TR(0x4a0707);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a070cull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a070c:L4a070c:{c.instructions+=4;NFSU2_TR(0x4a070c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a070d:{NFSU2_TR(0x4a070d);
u8 U[4];
w4(U+0,u32(0x79010cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0712:{NFSU2_TR(0x4a0712);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0713:{NFSU2_TR(0x4a0713);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0718ull));
TAIL_STATIC(0x542600u,542);
}
B4a0718:L4a0718:{c.instructions+=3;NFSU2_TR(0x4a0718);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a071b:{NFSU2_TR(0x4a071b);
u8 U[4];
w4(U+0,u32(0xe84e015cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0720:{NFSU2_TR(0x4a0720);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0725ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a0725:L4a0725:{c.instructions+=5;NFSU2_TR(0x4a0725);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0726:{NFSU2_TR(0x4a0726);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a072b:{NFSU2_TR(0x4a072b);
u8 U[4];
w4(U+0,u32(0x790104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0730:{NFSU2_TR(0x4a0730);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0731:{NFSU2_TR(0x4a0731);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0736ull));
TAIL_STATIC(0x542600u,542);
}
B4a0736:L4a0736:{c.instructions+=4;NFSU2_TR(0x4a0736);
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
B4a0739:{NFSU2_TR(0x4a0739);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a073a:{NFSU2_TR(0x4a073a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a073b:{NFSU2_TR(0x4a073b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a073c:L4a073c:{c.instructions+=3;NFSU2_TR(0x4a073c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a073f:{NFSU2_TR(0x4a073f);
u8 U[4];
w4(U+0,u32(0xff29e90full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0744:{NFSU2_TR(0x4a0744);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0749ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a0749:L4a0749:{c.instructions+=4;NFSU2_TR(0x4a0749);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a074a:{NFSU2_TR(0x4a074a);
u8 U[4];
w4(U+0,u32(0x790114ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a074f:{NFSU2_TR(0x4a074f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0750:{NFSU2_TR(0x4a0750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0755ull));
TAIL_STATIC(0x542600u,542);
}
B4a0755:L4a0755:{c.instructions+=3;NFSU2_TR(0x4a0755);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a0758:{NFSU2_TR(0x4a0758);
u8 U[4];
w4(U+0,u32(0xa1fa715full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a075d:{NFSU2_TR(0x4a075d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0762ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a0762:L4a0762:{c.instructions+=4;NFSU2_TR(0x4a0762);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0763:{NFSU2_TR(0x4a0763);
u8 U[4];
w4(U+0,u32(0x79010cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0768:{NFSU2_TR(0x4a0768);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0769:{NFSU2_TR(0x4a0769);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a076eull));
TAIL_STATIC(0x542600u,542);
}
B4a076e:L4a076e:{c.instructions+=3;NFSU2_TR(0x4a076e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a0771:{NFSU2_TR(0x4a0771);
u8 U[4];
w4(U+0,u32(0xf122e057ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0776:{NFSU2_TR(0x4a0776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a077bull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a077b:L4a077b:{c.instructions+=4;NFSU2_TR(0x4a077b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a077c:{NFSU2_TR(0x4a077c);
u8 U[4];
w4(U+0,u32(0x790104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0781:{NFSU2_TR(0x4a0781);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0782:{NFSU2_TR(0x4a0782);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0787ull));
TAIL_STATIC(0x542600u,542);
}
B4a0787:L4a0787:{c.instructions+=1;NFSU2_TR(0x4a0787);
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
B4a078a:L4a078a:{c.instructions+=3;NFSU2_TR(0x4a078a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a078b:{NFSU2_TR(0x4a078b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a078c:{NFSU2_TR(0x4a078c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0790:L4a0790:{c.instructions+=3;NFSU2_TR(0x4a0790);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0793:{NFSU2_TR(0x4a0793);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a0795:{NFSU2_TR(0x4a0795);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a07a5;}}
}
B4a0797:L4a0797:{c.instructions+=2;NFSU2_TR(0x4a0797);
u8 U[4];
w4(U+0,u32(0x93fdee74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a079c:{NFSU2_TR(0x4a079c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a07a1ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a07a1:L4a07a1:{c.instructions+=2;NFSU2_TR(0x4a07a1);
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
B4a07a4:{NFSU2_TR(0x4a07a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a07a5:L4a07a5:{c.instructions+=2;NFSU2_TR(0x4a07a5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a07a8:{NFSU2_TR(0x4a07a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a07b8;}}
}
B4a07aa:L4a07aa:{c.instructions+=2;NFSU2_TR(0x4a07aa);
u8 U[4];
w4(U+0,u32(0xdcb9f861ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a07af:{NFSU2_TR(0x4a07af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a07b4ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a07b4:L4a07b4:{c.instructions+=2;NFSU2_TR(0x4a07b4);
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
B4a07b7:{NFSU2_TR(0x4a07b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a07b8:L4a07b8:{c.instructions+=2;NFSU2_TR(0x4a07b8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a07bb:{NFSU2_TR(0x4a07bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a07cb;}}
}
B4a07bd:L4a07bd:{c.instructions+=2;NFSU2_TR(0x4a07bd);
u8 U[4];
w4(U+0,u32(0x35102edfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a07c2:{NFSU2_TR(0x4a07c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a07c7ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a07c7:L4a07c7:{c.instructions+=2;NFSU2_TR(0x4a07c7);
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
B4a07ca:{NFSU2_TR(0x4a07ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a07cb:L4a07cb:{c.instructions+=2;NFSU2_TR(0x4a07cb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a07ce:{NFSU2_TR(0x4a07ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a07de;}}
}
B4a07d0:L4a07d0:{c.instructions+=2;NFSU2_TR(0x4a07d0);
u8 U[4];
w4(U+0,u32(0xd7162cfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a07d5:{NFSU2_TR(0x4a07d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a07daull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a07da:L4a07da:{c.instructions+=2;NFSU2_TR(0x4a07da);
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
B4a07dd:{NFSU2_TR(0x4a07dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a07de:L4a07de:{c.instructions+=2;NFSU2_TR(0x4a07de);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a07e1:{NFSU2_TR(0x4a07e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a07f1;}}
}
B4a07e3:L4a07e3:{c.instructions+=2;NFSU2_TR(0x4a07e3);
u8 U[4];
w4(U+0,u32(0x30da61e1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a07e8:{NFSU2_TR(0x4a07e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a07edull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a07ed:L4a07ed:{c.instructions+=2;NFSU2_TR(0x4a07ed);
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
B4a07f0:{NFSU2_TR(0x4a07f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a07f1:L4a07f1:{c.instructions+=2;NFSU2_TR(0x4a07f1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a07f4:{NFSU2_TR(0x4a07f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a0804;}}
}
B4a07f6:L4a07f6:{c.instructions+=2;NFSU2_TR(0x4a07f6);
u8 U[4];
w4(U+0,u32(0x75f903f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a07fb:{NFSU2_TR(0x4a07fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0800ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a0800:L4a0800:{c.instructions+=2;NFSU2_TR(0x4a0800);
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
B4a0803:{NFSU2_TR(0x4a0803);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0804:L4a0804:{c.instructions+=2;NFSU2_TR(0x4a0804);
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
B4a0806:{NFSU2_TR(0x4a0806);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0810:L4a0810:{c.instructions+=14;NFSU2_TR(0x4a0810);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0812:{NFSU2_TR(0x4a0812);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0817:{NFSU2_TR(0x4a0817);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a081d:{NFSU2_TR(0x4a081d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a081e:{NFSU2_TR(0x4a081e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a0825:{NFSU2_TR(0x4a0825);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0826:{NFSU2_TR(0x4a0826);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0827:{NFSU2_TR(0x4a0827);
__builtin_memmove((R+24),(R+4),4);
}
B4a0829:{NFSU2_TR(0x4a0829);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a082d:{NFSU2_TR(0x4a082d);
u8 U[4];
w4(U+0,u32(0x79011cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4a0833:{NFSU2_TR(0x4a0833);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0836:{NFSU2_TR(0x4a0836);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a0838:{NFSU2_TR(0x4a0838);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a0840:{NFSU2_TR(0x4a0840);
if(r1(R+518)){{goto L4a0852;}}
}
B4a0842:L4a0842:{c.instructions+=2;NFSU2_TR(0x4a0842);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0843:{NFSU2_TR(0x4a0843);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0848ull));
TAIL_STATIC(0x540a60u,540);
}
B4a0848:L4a0848:{c.instructions+=2;NFSU2_TR(0x4a0848);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a084b:{NFSU2_TR(0x4a084b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a0852:L4a0852:{c.instructions+=1;NFSU2_TR(0x4a0852);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0857ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4a0857:L4a0857:{c.instructions+=2;NFSU2_TR(0x4a0857);
__builtin_memmove((R+4),(R+0),4);
}
B4a0859:{NFSU2_TR(0x4a0859);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a085eull));
TAIL_STATIC(0x586950u,586);
}
B4a085e:L4a085e:{c.instructions+=1;NFSU2_TR(0x4a085e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0863ull));
TAIL_STATIC(0x58f230u,58f);
}
B4a0863:L4a0863:{c.instructions+=2;NFSU2_TR(0x4a0863);
__builtin_memmove((R+4),(R+0),4);
}
B4a0865:{NFSU2_TR(0x4a0865);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a086aull));
TAIL_STATIC(0x582510u,582);
}
B4a086a:L4a086a:{c.instructions+=3;NFSU2_TR(0x4a086a);
__builtin_memmove((R+4),(R+24),4);
}
B4a086c:{NFSU2_TR(0x4a086c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a0874:{NFSU2_TR(0x4a0874);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0879ull));
TAIL_STATIC(0x510d40u,510);
}
B4a0879:L4a0879:{c.instructions+=5;NFSU2_TR(0x4a0879);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a087d:{NFSU2_TR(0x4a087d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a087e:{NFSU2_TR(0x4a087e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a0885:{NFSU2_TR(0x4a0885);
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
B4a0888:{NFSU2_TR(0x4a0888);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0890:L4a0890:{c.instructions+=3;NFSU2_TR(0x4a0890);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0894:{NFSU2_TR(0x4a0894);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0895:{NFSU2_TR(0x4a0895);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a089aull));
TAIL_STATIC(0x582530u,582);
}
B4a089a:L4a089a:{c.instructions+=3;NFSU2_TR(0x4a089a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a089d:{NFSU2_TR(0x4a089d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a089f:{NFSU2_TR(0x4a089f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a08b1;}}
}
B4a08a1:L4a08a1:{c.instructions+=2;NFSU2_TR(0x4a08a1);
u8 U[4];
w4(U+0,u32(0x719afe9eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a08a6:{NFSU2_TR(0x4a08a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a08abull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a08ab:L4a08ab:{c.instructions+=2;NFSU2_TR(0x4a08ab);
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
B4a08ae:{NFSU2_TR(0x4a08ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a08b1:L4a08b1:{c.instructions+=2;NFSU2_TR(0x4a08b1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a08b4:{NFSU2_TR(0x4a08b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a08c6;}}
}
B4a08b6:L4a08b6:{c.instructions+=2;NFSU2_TR(0x4a08b6);
u8 U[4];
w4(U+0,u32(0xf600c82bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a08bb:{NFSU2_TR(0x4a08bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a08c0ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a08c0:L4a08c0:{c.instructions+=2;NFSU2_TR(0x4a08c0);
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
B4a08c3:{NFSU2_TR(0x4a08c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a08c6:L4a08c6:{c.instructions+=2;NFSU2_TR(0x4a08c6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a08c9:{NFSU2_TR(0x4a08c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a08db;}}
}
B4a08cb:L4a08cb:{c.instructions+=2;NFSU2_TR(0x4a08cb);
u8 U[4];
w4(U+0,u32(0x36c5fae4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a08d0:{NFSU2_TR(0x4a08d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a08d5ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a08d5:L4a08d5:{c.instructions+=2;NFSU2_TR(0x4a08d5);
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
B4a08d8:{NFSU2_TR(0x4a08d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a08db:L4a08db:{c.instructions+=2;NFSU2_TR(0x4a08db);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a08de:{NFSU2_TR(0x4a08de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a08f0;}}
}
B4a08e0:L4a08e0:{c.instructions+=2;NFSU2_TR(0x4a08e0);
u8 U[4];
w4(U+0,u32(0xe8140569ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a08e5:{NFSU2_TR(0x4a08e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a08eaull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a08ea:L4a08ea:{c.instructions+=2;NFSU2_TR(0x4a08ea);
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
B4a08ed:{NFSU2_TR(0x4a08ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a08f0:L4a08f0:{c.instructions+=2;NFSU2_TR(0x4a08f0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a08f3:{NFSU2_TR(0x4a08f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a0905;}}
}
B4a08f5:L4a08f5:{c.instructions+=2;NFSU2_TR(0x4a08f5);
u8 U[4];
w4(U+0,u32(0xb24883aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a08fa:{NFSU2_TR(0x4a08fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a08ffull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a08ff:L4a08ff:{c.instructions+=2;NFSU2_TR(0x4a08ff);
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
B4a0902:{NFSU2_TR(0x4a0902);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0905:L4a0905:{c.instructions+=2;NFSU2_TR(0x4a0905);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a0908:{NFSU2_TR(0x4a0908);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a091a;}}
}
B4a090a:L4a090a:{c.instructions+=2;NFSU2_TR(0x4a090a);
u8 U[4];
w4(U+0,u32(0x8cb6e51eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a090f:{NFSU2_TR(0x4a090f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0914ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a0914:L4a0914:{c.instructions+=2;NFSU2_TR(0x4a0914);
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
B4a0917:{NFSU2_TR(0x4a0917);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a091a:L4a091a:{c.instructions+=2;NFSU2_TR(0x4a091a);
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
B4a091c:{NFSU2_TR(0x4a091c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0920:L4a0920:{c.instructions+=7;NFSU2_TR(0x4a0920);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0921:{NFSU2_TR(0x4a0921);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0922:{NFSU2_TR(0x4a0922);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0923:{NFSU2_TR(0x4a0923);
__builtin_memmove((R+24),(R+4),4);
}
B4a0925:{NFSU2_TR(0x4a0925);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a0928:{NFSU2_TR(0x4a0928);
u8 U[4];
w4(U+0,u32(0x719afe9eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a092d:{NFSU2_TR(0x4a092d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0932ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a0932:L4a0932:{c.instructions+=5;NFSU2_TR(0x4a0932);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a0935:{NFSU2_TR(0x4a0935);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0936:{NFSU2_TR(0x4a0936);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a093b:{NFSU2_TR(0x4a093b);
u8 U[4];
w4(U+0,u32(0x7901dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0940:{NFSU2_TR(0x4a0940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0945ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a0945:L4a0945:{c.instructions+=4;NFSU2_TR(0x4a0945);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a0948:{NFSU2_TR(0x4a0948);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0949:{NFSU2_TR(0x4a0949);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a094a:{NFSU2_TR(0x4a094a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a094full));
TAIL_STATIC(0x537b80u,537);
}
B4a094f:L4a094f:{c.instructions+=3;NFSU2_TR(0x4a094f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a0952:{NFSU2_TR(0x4a0952);
u8 U[4];
w4(U+0,u32(0xbc8bf7f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0957:{NFSU2_TR(0x4a0957);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a095cull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a095c:L4a095c:{c.instructions+=5;NFSU2_TR(0x4a095c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a095f:{NFSU2_TR(0x4a095f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0960:{NFSU2_TR(0x4a0960);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0965:{NFSU2_TR(0x4a0965);
u8 U[4];
w4(U+0,u32(0x7901d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a096a:{NFSU2_TR(0x4a096a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a096full));
TAIL_STATIC(0x50b990u,50b);
}
B4a096f:L4a096f:{c.instructions+=4;NFSU2_TR(0x4a096f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a0972:{NFSU2_TR(0x4a0972);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0973:{NFSU2_TR(0x4a0973);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0974:{NFSU2_TR(0x4a0974);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0979ull));
TAIL_STATIC(0x537b80u,537);
}
B4a0979:L4a0979:{c.instructions+=3;NFSU2_TR(0x4a0979);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a097c:{NFSU2_TR(0x4a097c);
u8 U[4];
w4(U+0,u32(0xf600c82bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0981:{NFSU2_TR(0x4a0981);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0986ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a0986:L4a0986:{c.instructions+=5;NFSU2_TR(0x4a0986);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a0989:{NFSU2_TR(0x4a0989);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a098a:{NFSU2_TR(0x4a098a);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a098f:{NFSU2_TR(0x4a098f);
u8 U[4];
w4(U+0,u32(0x7901c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0994:{NFSU2_TR(0x4a0994);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0999ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a0999:L4a0999:{c.instructions+=4;NFSU2_TR(0x4a0999);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a099c:{NFSU2_TR(0x4a099c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a099d:{NFSU2_TR(0x4a099d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a099e:{NFSU2_TR(0x4a099e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a09a3ull));
TAIL_STATIC(0x537b80u,537);
}
B4a09a3:L4a09a3:{c.instructions+=3;NFSU2_TR(0x4a09a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a09a6:{NFSU2_TR(0x4a09a6);
u8 U[4];
w4(U+0,u32(0xf18a58bdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a09ab:{NFSU2_TR(0x4a09ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a09b0ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a09b0:L4a09b0:{c.instructions+=5;NFSU2_TR(0x4a09b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a09b3:{NFSU2_TR(0x4a09b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a09b4:{NFSU2_TR(0x4a09b4);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a09b9:{NFSU2_TR(0x4a09b9);
u8 U[4];
w4(U+0,u32(0x7901b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a09be:{NFSU2_TR(0x4a09be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a09c3ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a09c3:L4a09c3:{c.instructions+=4;NFSU2_TR(0x4a09c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a09c6:{NFSU2_TR(0x4a09c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a09c7:{NFSU2_TR(0x4a09c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a09c8:{NFSU2_TR(0x4a09c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a09cdull));
TAIL_STATIC(0x537b80u,537);
}
B4a09cd:L4a09cd:{c.instructions+=3;NFSU2_TR(0x4a09cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a09d0:{NFSU2_TR(0x4a09d0);
u8 U[4];
w4(U+0,u32(0x36c5fae4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a09d5:{NFSU2_TR(0x4a09d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a09daull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a09da:L4a09da:{c.instructions+=5;NFSU2_TR(0x4a09da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a09dd:{NFSU2_TR(0x4a09dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a09de:{NFSU2_TR(0x4a09de);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a09e3:{NFSU2_TR(0x4a09e3);
u8 U[4];
w4(U+0,u32(0x7901acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a09e8:{NFSU2_TR(0x4a09e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a09edull));
TAIL_STATIC(0x50b990u,50b);
}
B4a09ed:L4a09ed:{c.instructions+=4;NFSU2_TR(0x4a09ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a09f0:{NFSU2_TR(0x4a09f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a09f1:{NFSU2_TR(0x4a09f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a09f2:{NFSU2_TR(0x4a09f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a09f7ull));
TAIL_STATIC(0x537b80u,537);
}
B4a09f7:L4a09f7:{c.instructions+=3;NFSU2_TR(0x4a09f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a09fa:{NFSU2_TR(0x4a09fa);
u8 U[4];
w4(U+0,u32(0x78671db6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a09ff:{NFSU2_TR(0x4a09ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0a04ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a0a04:L4a0a04:{c.instructions+=5;NFSU2_TR(0x4a0a04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a0a07:{NFSU2_TR(0x4a0a07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0a08:{NFSU2_TR(0x4a0a08);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0a0d:{NFSU2_TR(0x4a0a0d);
u8 U[4];
w4(U+0,u32(0x7901a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0a12:{NFSU2_TR(0x4a0a12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0a17ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a0a17:L4a0a17:{c.instructions+=4;NFSU2_TR(0x4a0a17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a0a1a:{NFSU2_TR(0x4a0a1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0a1b:{NFSU2_TR(0x4a0a1b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0a1c:{NFSU2_TR(0x4a0a1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0a21ull));
TAIL_STATIC(0x537b80u,537);
}
B4a0a21:L4a0a21:{c.instructions+=3;NFSU2_TR(0x4a0a21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a0a24:{NFSU2_TR(0x4a0a24);
u8 U[4];
w4(U+0,u32(0xe8140569ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0a29:{NFSU2_TR(0x4a0a29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0a2eull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a0a2e:L4a0a2e:{c.instructions+=5;NFSU2_TR(0x4a0a2e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a0a31:{NFSU2_TR(0x4a0a31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0a32:{NFSU2_TR(0x4a0a32);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0a37:{NFSU2_TR(0x4a0a37);
u8 U[4];
w4(U+0,u32(0x790194ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0a3c:{NFSU2_TR(0x4a0a3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0a41ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a0a41:L4a0a41:{c.instructions+=4;NFSU2_TR(0x4a0a41);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a0a44:{NFSU2_TR(0x4a0a44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0a45:{NFSU2_TR(0x4a0a45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0a46:{NFSU2_TR(0x4a0a46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0a4bull));
TAIL_STATIC(0x537b80u,537);
}
B4a0a4b:L4a0a4b:{c.instructions+=3;NFSU2_TR(0x4a0a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a0a4e:{NFSU2_TR(0x4a0a4e);
u8 U[4];
w4(U+0,u32(0xb561dd7bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0a53:{NFSU2_TR(0x4a0a53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0a58ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a0a58:L4a0a58:{c.instructions+=5;NFSU2_TR(0x4a0a58);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a0a5b:{NFSU2_TR(0x4a0a5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0a5c:{NFSU2_TR(0x4a0a5c);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0a61:{NFSU2_TR(0x4a0a61);
u8 U[4];
w4(U+0,u32(0x790188ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0a66:{NFSU2_TR(0x4a0a66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0a6bull));
TAIL_STATIC(0x50b990u,50b);
}
B4a0a6b:L4a0a6b:{c.instructions+=4;NFSU2_TR(0x4a0a6b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a0a6e:{NFSU2_TR(0x4a0a6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0a6f:{NFSU2_TR(0x4a0a6f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0a70:{NFSU2_TR(0x4a0a70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0a75ull));
TAIL_STATIC(0x537b80u,537);
}
B4a0a75:L4a0a75:{c.instructions+=3;NFSU2_TR(0x4a0a75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a0a78:{NFSU2_TR(0x4a0a78);
u8 U[4];
w4(U+0,u32(0xb24883aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0a7d:{NFSU2_TR(0x4a0a7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0a82ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a0a82:L4a0a82:{c.instructions+=5;NFSU2_TR(0x4a0a82);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a0a85:{NFSU2_TR(0x4a0a85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0a86:{NFSU2_TR(0x4a0a86);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0a8b:{NFSU2_TR(0x4a0a8b);
u8 U[4];
w4(U+0,u32(0x79017cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0a90:{NFSU2_TR(0x4a0a90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0a95ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a0a95:L4a0a95:{c.instructions+=4;NFSU2_TR(0x4a0a95);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a0a98:{NFSU2_TR(0x4a0a98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0a99:{NFSU2_TR(0x4a0a99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0a9a:{NFSU2_TR(0x4a0a9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0a9full));
TAIL_STATIC(0x537b80u,537);
}
B4a0a9f:L4a0a9f:{c.instructions+=3;NFSU2_TR(0x4a0a9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a0aa2:{NFSU2_TR(0x4a0aa2);
u8 U[4];
w4(U+0,u32(0xde9e588cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0aa7:{NFSU2_TR(0x4a0aa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0aacull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a0aac:L4a0aac:{c.instructions+=5;NFSU2_TR(0x4a0aac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a0aaf:{NFSU2_TR(0x4a0aaf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0ab0:{NFSU2_TR(0x4a0ab0);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0ab5:{NFSU2_TR(0x4a0ab5);
u8 U[4];
w4(U+0,u32(0x79016cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0aba:{NFSU2_TR(0x4a0aba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0abfull));
TAIL_STATIC(0x50b990u,50b);
}
B4a0abf:L4a0abf:{c.instructions+=4;NFSU2_TR(0x4a0abf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a0ac2:{NFSU2_TR(0x4a0ac2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0ac3:{NFSU2_TR(0x4a0ac3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0ac4:{NFSU2_TR(0x4a0ac4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0ac9ull));
TAIL_STATIC(0x537b80u,537);
}
B4a0ac9:L4a0ac9:{c.instructions+=3;NFSU2_TR(0x4a0ac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a0acc:{NFSU2_TR(0x4a0acc);
u8 U[4];
w4(U+0,u32(0x8cb6e51eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0ad1:{NFSU2_TR(0x4a0ad1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0ad6ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a0ad6:L4a0ad6:{c.instructions+=5;NFSU2_TR(0x4a0ad6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a0ad9:{NFSU2_TR(0x4a0ad9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0ada:{NFSU2_TR(0x4a0ada);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0adf:{NFSU2_TR(0x4a0adf);
u8 U[4];
w4(U+0,u32(0x79015cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0ae4:{NFSU2_TR(0x4a0ae4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0ae9ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a0ae9:L4a0ae9:{c.instructions+=4;NFSU2_TR(0x4a0ae9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a0aec:{NFSU2_TR(0x4a0aec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0aed:{NFSU2_TR(0x4a0aed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0aee:{NFSU2_TR(0x4a0aee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0af3ull));
TAIL_STATIC(0x537b80u,537);
}
B4a0af3:L4a0af3:{c.instructions+=3;NFSU2_TR(0x4a0af3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a0af6:{NFSU2_TR(0x4a0af6);
u8 U[4];
w4(U+0,u32(0xe3b7e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0afb:{NFSU2_TR(0x4a0afb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0b00ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a0b00:L4a0b00:{c.instructions+=5;NFSU2_TR(0x4a0b00);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a0b03:{NFSU2_TR(0x4a0b03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0b04:{NFSU2_TR(0x4a0b04);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0b09:{NFSU2_TR(0x4a0b09);
u8 U[4];
w4(U+0,u32(0x79014cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0b0e:{NFSU2_TR(0x4a0b0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0b13ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a0b13:L4a0b13:{c.instructions+=4;NFSU2_TR(0x4a0b13);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a0b16:{NFSU2_TR(0x4a0b16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0b17:{NFSU2_TR(0x4a0b17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0b18:{NFSU2_TR(0x4a0b18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0b1dull));
TAIL_STATIC(0x537b80u,537);
}
B4a0b1d:L4a0b1d:{c.instructions+=2;NFSU2_TR(0x4a0b1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a0b20:{NFSU2_TR(0x4a0b20);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4a0b22:L4a0b22:{c.instructions+=6;NFSU2_TR(0x4a0b22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a0b25:{NFSU2_TR(0x4a0b25);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0b2a:{NFSU2_TR(0x4a0b2a);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0b2f:{NFSU2_TR(0x4a0b2f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0b30:{NFSU2_TR(0x4a0b30);
u8 U[4];
w4(U+0,u32(0x79013cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0b35:{NFSU2_TR(0x4a0b35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0b3aull));
TAIL_STATIC(0x50b990u,50b);
}
B4a0b3a:L4a0b3a:{c.instructions+=4;NFSU2_TR(0x4a0b3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a0b3d:{NFSU2_TR(0x4a0b3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0b3e:{NFSU2_TR(0x4a0b3e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0b3f:{NFSU2_TR(0x4a0b3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0b44ull));
TAIL_STATIC(0x537b80u,537);
}
B4a0b44:L4a0b44:{c.instructions+=7;NFSU2_TR(0x4a0b44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a0b47:{NFSU2_TR(0x4a0b47);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a0b4a:{NFSU2_TR(0x4a0b4a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0b4c:{NFSU2_TR(0x4a0b4c);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0b51:{NFSU2_TR(0x4a0b51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0b52:{NFSU2_TR(0x4a0b52);
u8 U[4];
w4(U+0,u32(0x79012cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0b57:{NFSU2_TR(0x4a0b57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0b5cull));
TAIL_STATIC(0x50b990u,50b);
}
B4a0b5c:L4a0b5c:{c.instructions+=4;NFSU2_TR(0x4a0b5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a0b5f:{NFSU2_TR(0x4a0b5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0b60:{NFSU2_TR(0x4a0b60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0b61:{NFSU2_TR(0x4a0b61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0b66ull));
TAIL_STATIC(0x537b80u,537);
}
B4a0b66:L4a0b66:{c.instructions+=4;NFSU2_TR(0x4a0b66);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a0b69:{NFSU2_TR(0x4a0b69);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4a0b6a:{NFSU2_TR(0x4a0b6a);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xdull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a0b6d:{NFSU2_TR(0x4a0b6d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a0b22u);}goto L4a0b22;}}
}
B4a0b6f:L4a0b6f:{c.instructions+=4;NFSU2_TR(0x4a0b6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a0b70:{NFSU2_TR(0x4a0b70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a0b71:{NFSU2_TR(0x4a0b71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a0b72:{NFSU2_TR(0x4a0b72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0b80:L4a0b80:{c.instructions+=10;NFSU2_TR(0x4a0b80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B4a0b83:{NFSU2_TR(0x4a0b83);
__builtin_memmove((R+4),gp(0x850088),4);
}
B4a0b89:{NFSU2_TR(0x4a0b89);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0b91:{NFSU2_TR(0x4a0b91);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a0b99:{NFSU2_TR(0x4a0b99);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a0ba1:{NFSU2_TR(0x4a0ba1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a0ba9:{NFSU2_TR(0x4a0ba9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a0bb1:{NFSU2_TR(0x4a0bb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a0bb9:{NFSU2_TR(0x4a0bb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a0bc1:{NFSU2_TR(0x4a0bc1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a0bc3:L4a0bc3:{c.instructions+=2;NFSU2_TR(0x4a0bc3);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+16))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B4a0bc7:{NFSU2_TR(0x4a0bc7);
if(r1(R+518)){{goto L4a0bd1;}}
}
B4a0bc9:L4a0bc9:{c.instructions+=3;NFSU2_TR(0x4a0bc9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4a0bca:{NFSU2_TR(0x4a0bca);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a0bcd:{NFSU2_TR(0x4a0bcd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a0bc3u);}goto L4a0bc3;}}
}
B4a0bcf:L4a0bcf:{c.instructions+=1;NFSU2_TR(0x4a0bcf);
{goto L4a0bd6;}
}
B4a0bd1:L4a0bd1:{c.instructions+=2;NFSU2_TR(0x4a0bd1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a0bd4:{NFSU2_TR(0x4a0bd4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4a0bd8;}}
}
B4a0bd6:L4a0bd6:{c.instructions+=1;NFSU2_TR(0x4a0bd6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a0bd8:L4a0bd8:{c.instructions+=7;NFSU2_TR(0x4a0bd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a0bdc:{NFSU2_TR(0x4a0bdc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B4a0bde:{NFSU2_TR(0x4a0bde);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B4a0bdf:{NFSU2_TR(0x4a0bdf);
w4(R+4,u32(0x7ull));
}
B4a0be4:{NFSU2_TR(0x4a0be4);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x4a0be4);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x4a0be4);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B4a0be6:{NFSU2_TR(0x4a0be6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4a0be8:{NFSU2_TR(0x4a0be8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4a0bfc;}}
}
B4a0bea:L4a0bea:{c.instructions+=5;NFSU2_TR(0x4a0bea);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4a0bec:{NFSU2_TR(0x4a0bec);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+16))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4a0bf0:{NFSU2_TR(0x4a0bf0);
__builtin_memmove(gp(0x850088),(R+8),4);
}
B4a0bf6:{NFSU2_TR(0x4a0bf6);
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
B4a0bf9:{NFSU2_TR(0x4a0bf9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0bfc:L4a0bfc:{c.instructions+=4;NFSU2_TR(0x4a0bfc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+16))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4a0c00:{NFSU2_TR(0x4a0c00);
__builtin_memmove(gp(0x850088),(R+0),4);
}
B4a0c05:{NFSU2_TR(0x4a0c05);
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
B4a0c08:{NFSU2_TR(0x4a0c08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0c10:L4a0c10:{c.instructions+=5;NFSU2_TR(0x4a0c10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0c14:{NFSU2_TR(0x4a0c14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0c17:{NFSU2_TR(0x4a0c17);
u8 U[4];
w4(U+0,u32(0x78f570ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0c1c:{NFSU2_TR(0x4a0c1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0c1d:{NFSU2_TR(0x4a0c1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0c22ull));
TAIL_STATIC(0x51d040u,51d);
}
B4a0c22:L4a0c22:{c.instructions+=4;NFSU2_TR(0x4a0c22);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a0c25:{NFSU2_TR(0x4a0c25);
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
B4a0c27:{NFSU2_TR(0x4a0c27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4a0c2a:{NFSU2_TR(0x4a0c2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0c30:L4a0c30:{c.instructions+=13;NFSU2_TR(0x4a0c30);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0c34:{NFSU2_TR(0x4a0c34);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a0c38:{NFSU2_TR(0x4a0c38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0c39:{NFSU2_TR(0x4a0c39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0c3a:{NFSU2_TR(0x4a0c3a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a0c3e:{NFSU2_TR(0x4a0c3e);
__builtin_memmove((R+24),(R+4),4);
}
B4a0c40:{NFSU2_TR(0x4a0c40);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a0c44:{NFSU2_TR(0x4a0c44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0c45:{NFSU2_TR(0x4a0c45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0c46:{NFSU2_TR(0x4a0c46);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0c47:{NFSU2_TR(0x4a0c47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0c48:{NFSU2_TR(0x4a0c48);
__builtin_memmove((R+4),(R+24),4);
}
B4a0c4a:{NFSU2_TR(0x4a0c4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0c4full));
TAIL_STATIC(0x556020u,556);
}
B4a0c4f:L4a0c4f:{c.instructions+=2;NFSU2_TR(0x4a0c4f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x406415e3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a0c55:{NFSU2_TR(0x4a0c55);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4a0ca7;}}
}
B4a0c57:L4a0c57:{c.instructions+=1;NFSU2_TR(0x4a0c57);
if(r1(R+518)){{goto L4a0c6d;}}
}
B4a0c59:L4a0c59:{c.instructions+=2;NFSU2_TR(0x4a0c59);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x153e234ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a0c5f:{NFSU2_TR(0x4a0c5f);
if(r1(R+518)){{goto L4a0dae;}}
}
B4a0c65:L4a0c65:{c.instructions+=2;NFSU2_TR(0x4a0c65);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B4a0c6b:{NFSU2_TR(0x4a0c6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a0ca2;}}
}
B4a0c6d:L4a0c6d:{c.instructions+=3;NFSU2_TR(0x4a0c6d);
__builtin_memmove((R+0),gp(0x850088),4);
}
B4a0c72:{NFSU2_TR(0x4a0c72);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a0c75:{NFSU2_TR(0x4a0c75);
if(r1(R+518)){{goto L4a0c81;}}
}
B4a0c77:L4a0c77:{c.instructions+=2;NFSU2_TR(0x4a0c77);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a0c7a:{NFSU2_TR(0x4a0c7a);
if(r1(R+518)){{goto L4a0c81;}}
}
B4a0c7c:L4a0c7c:{c.instructions+=2;NFSU2_TR(0x4a0c7c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a0c7f:{NFSU2_TR(0x4a0c7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a0c88;}}
}
B4a0c81:L4a0c81:{c.instructions+=1;NFSU2_TR(0x4a0c81);
s1(0x850099,u8(0x0ull));
}
B4a0c88:L4a0c88:{c.instructions+=1;NFSU2_TR(0x4a0c88);
s1(0x8500c4,u8(0x1ull));
}
B4a0c8f:L4a0c8f:{c.instructions+=5;NFSU2_TR(0x4a0c8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0c92:{NFSU2_TR(0x4a0c92);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0c94:{NFSU2_TR(0x4a0c94);
u8 U[4];
w4(U+0,u32(0x78f320ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0c99:{NFSU2_TR(0x4a0c99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0c9a:{NFSU2_TR(0x4a0c9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0c9full));
TAIL_STATIC(0x537980u,537);
}
B4a0c9f:L4a0c9f:{c.instructions+=1;NFSU2_TR(0x4a0c9f);
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
B4a0ca2:L4a0ca2:{c.instructions+=3;NFSU2_TR(0x4a0ca2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a0ca3:{NFSU2_TR(0x4a0ca3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a0ca4:{NFSU2_TR(0x4a0ca4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0ca7:L4a0ca7:{c.instructions+=2;NFSU2_TR(0x4a0ca7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a0cad:{NFSU2_TR(0x4a0cad);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a0c8fu);}goto L4a0c8f;}}
}
B4a0caf:L4a0caf:{c.instructions+=2;NFSU2_TR(0x4a0caf);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc98356baull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a0cb5:{NFSU2_TR(0x4a0cb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a0ca2u);}goto L4a0ca2;}}
}
B4a0cb7:L4a0cb7:{c.instructions+=3;NFSU2_TR(0x4a0cb7);
__builtin_memmove((R+28),gp(0x850088),4);
}
B4a0cbd:{NFSU2_TR(0x4a0cbd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a0cc0:{NFSU2_TR(0x4a0cc0);
if(r1(R+518)){{goto L4a0cf8;}}
}
B4a0cc2:L4a0cc2:{c.instructions+=2;NFSU2_TR(0x4a0cc2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a0cc5:{NFSU2_TR(0x4a0cc5);
if(r1(R+518)){{goto L4a0cf8;}}
}
B4a0cc7:L4a0cc7:{c.instructions+=2;NFSU2_TR(0x4a0cc7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a0cca:{NFSU2_TR(0x4a0cca);
if(r1(R+518)){{goto L4a0cf8;}}
}
B4a0ccc:L4a0ccc:{c.instructions+=4;NFSU2_TR(0x4a0ccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a0cd2:{NFSU2_TR(0x4a0cd2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0cd3:{NFSU2_TR(0x4a0cd3);
__builtin_memmove((R+4),(R+24),4);
}
B4a0cd5:{NFSU2_TR(0x4a0cd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0cdaull));
TAIL_STATIC(0x51fe70u,51f);
}
B4a0cda:L4a0cda:{c.instructions+=3;NFSU2_TR(0x4a0cda);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4a0cdd:{NFSU2_TR(0x4a0cdd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a0cdf:{NFSU2_TR(0x4a0cdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a0d4a;}}
}
B4a0ce1:L4a0ce1:{c.instructions+=4;NFSU2_TR(0x4a0ce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a0ce7:{NFSU2_TR(0x4a0ce7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0ce8:{NFSU2_TR(0x4a0ce8);
__builtin_memmove((R+4),(R+24),4);
}
B4a0cea:{NFSU2_TR(0x4a0cea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0cefull));
TAIL_STATIC(0x51fe70u,51f);
}
B4a0cef:L4a0cef:{c.instructions+=3;NFSU2_TR(0x4a0cef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4a0cf1:{NFSU2_TR(0x4a0cf1);
__builtin_memmove((R+4),(R+0),4);
}
B4a0cf3:{NFSU2_TR(0x4a0cf3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0cf6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a0cf6:L4a0cf6:{c.instructions+=1;NFSU2_TR(0x4a0cf6);
{goto L4a0d43;}
}
B4a0cf8:L4a0cf8:{c.instructions+=4;NFSU2_TR(0x4a0cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0cfe:{NFSU2_TR(0x4a0cfe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0cff:{NFSU2_TR(0x4a0cff);
__builtin_memmove((R+4),(R+24),4);
}
B4a0d01:{NFSU2_TR(0x4a0d01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0d06ull));
TAIL_STATIC(0x51fe70u,51f);
}
B4a0d06:L4a0d06:{c.instructions+=3;NFSU2_TR(0x4a0d06);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4a0d09:{NFSU2_TR(0x4a0d09);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a0d0b:{NFSU2_TR(0x4a0d0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a0d27;}}
}
B4a0d0d:L4a0d0d:{c.instructions+=4;NFSU2_TR(0x4a0d0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a0d13:{NFSU2_TR(0x4a0d13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0d14:{NFSU2_TR(0x4a0d14);
__builtin_memmove((R+4),(R+24),4);
}
B4a0d16:{NFSU2_TR(0x4a0d16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0d1bull));
TAIL_STATIC(0x51fe70u,51f);
}
B4a0d1b:L4a0d1b:{c.instructions+=3;NFSU2_TR(0x4a0d1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0d1c:{NFSU2_TR(0x4a0d1c);
__builtin_memmove((R+4),(R+24),4);
}
B4a0d1e:{NFSU2_TR(0x4a0d1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0d23ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a0c10u);}goto L4a0c10;}
}
B4a0d23:L4a0d23:{c.instructions+=2;NFSU2_TR(0x4a0d23);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a0d25:{NFSU2_TR(0x4a0d25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a0d4a;}}
}
B4a0d27:L4a0d27:{c.instructions+=5;NFSU2_TR(0x4a0d27);
s1(0x850099,u8(0x0ull));
}
B4a0d2e:{NFSU2_TR(0x4a0d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a0d34:{NFSU2_TR(0x4a0d34);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0d35:{NFSU2_TR(0x4a0d35);
__builtin_memmove((R+4),(R+24),4);
}
B4a0d37:{NFSU2_TR(0x4a0d37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0d3cull));
TAIL_STATIC(0x51fe70u,51f);
}
B4a0d3c:L4a0d3c:{c.instructions+=3;NFSU2_TR(0x4a0d3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4a0d3e:{NFSU2_TR(0x4a0d3e);
__builtin_memmove((R+4),(R+0),4);
}
B4a0d40:{NFSU2_TR(0x4a0d40);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0d43ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a0d43:L4a0d43:{c.instructions+=2;NFSU2_TR(0x4a0d43);
__builtin_memmove((R+4),(R+24),4);
}
B4a0d45:{NFSU2_TR(0x4a0d45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0d4aull));
TAIL_STATIC(0x51ff40u,51f);
}
B4a0d4a:L4a0d4a:{c.instructions+=2;NFSU2_TR(0x4a0d4a);
u8 U[14];
__builtin_memmove((U+6),gp(0x850078),4);
w1(R+512,u8((r4(U+6))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x200ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a0d54:{NFSU2_TR(0x4a0d54);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a0ca2u);}goto L4a0ca2;}}
}
B4a0d5a:L4a0d5a:{c.instructions+=4;NFSU2_TR(0x4a0d5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0d60:{NFSU2_TR(0x4a0d60);
__builtin_memmove((R+4),(R+24),4);
}
B4a0d62:{NFSU2_TR(0x4a0d62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0d63:{NFSU2_TR(0x4a0d63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0d68ull));
TAIL_STATIC(0x51fe70u,51f);
}
B4a0d68:L4a0d68:{c.instructions+=3;NFSU2_TR(0x4a0d68);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a0d6b:{NFSU2_TR(0x4a0d6b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4a0d6e:{NFSU2_TR(0x4a0d6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a0dba;}}
}
B4a0d70:L4a0d70:{c.instructions+=2;NFSU2_TR(0x4a0d70);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a0d72:{NFSU2_TR(0x4a0d72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a0d92;}}
}
B4a0d74:L4a0d74:{c.instructions+=4;NFSU2_TR(0x4a0d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a0d7a:{NFSU2_TR(0x4a0d7a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0d7b:{NFSU2_TR(0x4a0d7b);
__builtin_memmove((R+4),(R+24),4);
}
B4a0d7d:{NFSU2_TR(0x4a0d7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0d82ull));
TAIL_STATIC(0x51fe70u,51f);
}
B4a0d82:L4a0d82:{c.instructions+=3;NFSU2_TR(0x4a0d82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0d83:{NFSU2_TR(0x4a0d83);
__builtin_memmove((R+4),(R+24),4);
}
B4a0d85:{NFSU2_TR(0x4a0d85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0d8aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a0c10u);}goto L4a0c10;}
}
B4a0d8a:L4a0d8a:{c.instructions+=2;NFSU2_TR(0x4a0d8a);
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
B4a0d8c:{NFSU2_TR(0x4a0d8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a0ca2u);}goto L4a0ca2;}}
}
B4a0d92:L4a0d92:{c.instructions+=5;NFSU2_TR(0x4a0d92);
s1(0x850098,u8(0x0ull));
}
B4a0d99:{NFSU2_TR(0x4a0d99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a0d9f:{NFSU2_TR(0x4a0d9f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0da0:{NFSU2_TR(0x4a0da0);
__builtin_memmove((R+4),(R+24),4);
}
B4a0da2:{NFSU2_TR(0x4a0da2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0da7ull));
TAIL_STATIC(0x51fe70u,51f);
}
B4a0da7:L4a0da7:{c.instructions+=3;NFSU2_TR(0x4a0da7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4a0da9:{NFSU2_TR(0x4a0da9);
__builtin_memmove((R+4),(R+0),4);
}
B4a0dab:{NFSU2_TR(0x4a0dab);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0daeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a0dae:L4a0dae:{c.instructions+=2;NFSU2_TR(0x4a0dae);
__builtin_memmove((R+4),(R+24),4);
}
B4a0db0:{NFSU2_TR(0x4a0db0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0db5ull));
TAIL_STATIC(0x51ff40u,51f);
}
B4a0db5:L4a0db5:{c.instructions+=3;NFSU2_TR(0x4a0db5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a0db6:{NFSU2_TR(0x4a0db6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a0db7:{NFSU2_TR(0x4a0db7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0dba:L4a0dba:{c.instructions+=2;NFSU2_TR(0x4a0dba);
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
B4a0dbc:{NFSU2_TR(0x4a0dbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a0ca2u);}goto L4a0ca2;}}
}
B4a0dc2:L4a0dc2:{c.instructions+=4;NFSU2_TR(0x4a0dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a0dc8:{NFSU2_TR(0x4a0dc8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0dc9:{NFSU2_TR(0x4a0dc9);
__builtin_memmove((R+4),(R+24),4);
}
B4a0dcb:{NFSU2_TR(0x4a0dcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0dd0ull));
TAIL_STATIC(0x51fe70u,51f);
}
B4a0dd0:L4a0dd0:{c.instructions+=3;NFSU2_TR(0x4a0dd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4a0dd2:{NFSU2_TR(0x4a0dd2);
__builtin_memmove((R+4),(R+0),4);
}
B4a0dd4:{NFSU2_TR(0x4a0dd4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0dd7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a0dd7:L4a0dd7:{c.instructions+=2;NFSU2_TR(0x4a0dd7);
__builtin_memmove((R+4),(R+24),4);
}
B4a0dd9:{NFSU2_TR(0x4a0dd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0ddeull));
TAIL_STATIC(0x51ff40u,51f);
}
B4a0dde:L4a0dde:{c.instructions+=3;NFSU2_TR(0x4a0dde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a0ddf:{NFSU2_TR(0x4a0ddf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a0de0:{NFSU2_TR(0x4a0de0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0df0:L4a0df0:{c.instructions+=5;NFSU2_TR(0x4a0df0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0df1:{NFSU2_TR(0x4a0df1);
__builtin_memmove((R+24),(R+4),4);
}
B4a0df3:{NFSU2_TR(0x4a0df3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0df6:{NFSU2_TR(0x4a0df6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a0df8:{NFSU2_TR(0x4a0df8);
if(r1(R+518)){{goto L4a0e0a;}}
}
B4a0dfa:L4a0dfa:{c.instructions+=2;NFSU2_TR(0x4a0dfa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0dfb:{NFSU2_TR(0x4a0dfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0e00ull));
TAIL_STATIC(0x540a60u,540);
}
B4a0e00:L4a0e00:{c.instructions+=2;NFSU2_TR(0x4a0e00);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a0e03:{NFSU2_TR(0x4a0e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a0e0a:L4a0e0a:{c.instructions+=3;NFSU2_TR(0x4a0e0a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0e0e:{NFSU2_TR(0x4a0e0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a0e10:{NFSU2_TR(0x4a0e10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a0e71;}}
}
B4a0e12:L4a0e12:{c.instructions+=1;NFSU2_TR(0x4a0e12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0e17ull));
TAIL_STATIC(0x582b60u,582);
}
B4a0e17:L4a0e17:{c.instructions+=4;NFSU2_TR(0x4a0e17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0e1d:{NFSU2_TR(0x4a0e1d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0e1f:{NFSU2_TR(0x4a0e1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0e20:{NFSU2_TR(0x4a0e20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0e25ull));
TAIL_STATIC(0x73ea30u,73e);
}
B4a0e25:L4a0e25:{c.instructions+=3;NFSU2_TR(0x4a0e25);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a0e28:{NFSU2_TR(0x4a0e28);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a0e2a:{NFSU2_TR(0x4a0e2a);
if(r1(R+518)){{goto L4a0e48;}}
}
B4a0e2c:L4a0e2c:{c.instructions+=6;NFSU2_TR(0x4a0e2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0e2f:{NFSU2_TR(0x4a0e2f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0e31:{NFSU2_TR(0x4a0e31);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0e36:{NFSU2_TR(0x4a0e36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0e37:{NFSU2_TR(0x4a0e37);
u8 U[4];
w4(U+0,u32(0x7901e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0e3c:{NFSU2_TR(0x4a0e3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0e41ull));
TAIL_STATIC(0x555eb0u,555);
}
B4a0e41:L4a0e41:{c.instructions+=3;NFSU2_TR(0x4a0e41);
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
B4a0e44:{NFSU2_TR(0x4a0e44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a0e45:{NFSU2_TR(0x4a0e45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0e48:L4a0e48:{c.instructions+=3;NFSU2_TR(0x4a0e48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a0e4b:{NFSU2_TR(0x4a0e4b);
u8 U[4];
w4(U+0,u32(0x8b207e1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0e50:{NFSU2_TR(0x4a0e50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0e55ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a0e55:L4a0e55:{c.instructions+=7;NFSU2_TR(0x4a0e55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0e56:{NFSU2_TR(0x4a0e56);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0e58:{NFSU2_TR(0x4a0e58);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0e5a:{NFSU2_TR(0x4a0e5a);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0e5f:{NFSU2_TR(0x4a0e5f);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0e64:{NFSU2_TR(0x4a0e64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0e65:{NFSU2_TR(0x4a0e65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0e6aull));
TAIL_STATIC(0x558540u,558);
}
B4a0e6a:L4a0e6a:{c.instructions+=3;NFSU2_TR(0x4a0e6a);
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
B4a0e6d:{NFSU2_TR(0x4a0e6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a0e6e:{NFSU2_TR(0x4a0e6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0e71:L4a0e71:{c.instructions+=4;NFSU2_TR(0x4a0e71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a0e74:{NFSU2_TR(0x4a0e74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0e75:{NFSU2_TR(0x4a0e75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0e76:{NFSU2_TR(0x4a0e76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0e7bull));
TAIL_STATIC(0x49e810u,49e);
}
B4a0e7b:L4a0e7b:{c.instructions+=3;NFSU2_TR(0x4a0e7b);
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
B4a0e7e:{NFSU2_TR(0x4a0e7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a0e7f:{NFSU2_TR(0x4a0e7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0e90:L4a0e90:{c.instructions+=6;NFSU2_TR(0x4a0e90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0e91:{NFSU2_TR(0x4a0e91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0e92:{NFSU2_TR(0x4a0e92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0e93:{NFSU2_TR(0x4a0e93);
__builtin_memmove((R+12),(R+4),4);
}
B4a0e95:{NFSU2_TR(0x4a0e95);
w4(R+24,u32(0x1ull));
}
B4a0e9a:{NFSU2_TR(0x4a0e9a);
__builtin_memmove((R+12),(R+12),4);
}
B4a0ea0:L4a0ea0:{c.instructions+=6;NFSU2_TR(0x4a0ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a0ea3:{NFSU2_TR(0x4a0ea3);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0ea8:{NFSU2_TR(0x4a0ea8);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0ead:{NFSU2_TR(0x4a0ead);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0eae:{NFSU2_TR(0x4a0eae);
u8 U[4];
w4(U+0,u32(0x790200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0eb3:{NFSU2_TR(0x4a0eb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0eb8ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a0eb8:L4a0eb8:{c.instructions+=4;NFSU2_TR(0x4a0eb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a0ebb:{NFSU2_TR(0x4a0ebb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0ebc:{NFSU2_TR(0x4a0ebc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0ebd:{NFSU2_TR(0x4a0ebd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0ec2ull));
TAIL_STATIC(0x537b80u,537);
}
B4a0ec2:L4a0ec2:{c.instructions+=4;NFSU2_TR(0x4a0ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a0ec5:{NFSU2_TR(0x4a0ec5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0ec6:{NFSU2_TR(0x4a0ec6);
u8 U[4];
w4(U+0,u32(0x78febcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0ecb:{NFSU2_TR(0x4a0ecb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0ed0ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a0ed0:L4a0ed0:{c.instructions+=3;NFSU2_TR(0x4a0ed0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0ed1:{NFSU2_TR(0x4a0ed1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0ed2:{NFSU2_TR(0x4a0ed2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0ed7ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a0ed7:L4a0ed7:{c.instructions+=2;NFSU2_TR(0x4a0ed7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0ed8:{NFSU2_TR(0x4a0ed8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0eddull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a0edd:L4a0edd:{c.instructions+=4;NFSU2_TR(0x4a0edd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4a0ee0:{NFSU2_TR(0x4a0ee0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4a0ee1:{NFSU2_TR(0x4a0ee1);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a0ee4:{NFSU2_TR(0x4a0ee4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a0ea0u);}goto L4a0ea0;}}
}
B4a0ee6:L4a0ee6:{c.instructions+=4;NFSU2_TR(0x4a0ee6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a0ee7:{NFSU2_TR(0x4a0ee7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a0ee8:{NFSU2_TR(0x4a0ee8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a0ee9:{NFSU2_TR(0x4a0ee9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0ef0:L4a0ef0:{c.instructions+=6;NFSU2_TR(0x4a0ef0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0ef4:{NFSU2_TR(0x4a0ef4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x27cull))));
}
B4a0efa:{NFSU2_TR(0x4a0efa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0efb:{NFSU2_TR(0x4a0efb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0efc:{NFSU2_TR(0x4a0efc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0efd:{NFSU2_TR(0x4a0efd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0f02ull));
TAIL_STATIC(0x582b60u,582);
}
B4a0f02:L4a0f02:{c.instructions+=2;NFSU2_TR(0x4a0f02);
__builtin_memmove((R+4),(R+0),4);
}
B4a0f04:{NFSU2_TR(0x4a0f04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0f09ull));
TAIL_STATIC(0x582b90u,582);
}
B4a0f09:L4a0f09:{c.instructions+=4;NFSU2_TR(0x4a0f09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0f0a:{NFSU2_TR(0x4a0f0a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a0f0e:{NFSU2_TR(0x4a0f0e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0f0f:{NFSU2_TR(0x4a0f0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0f14ull));
TAIL_STATIC(0x49e870u,49e);
}
B4a0f14:L4a0f14:{c.instructions+=5;NFSU2_TR(0x4a0f14);
__builtin_memmove((R+24),(R+0),4);
}
B4a0f16:{NFSU2_TR(0x4a0f16);
u8 U[8];
w4(U+0,u32(u32(u32(0x290ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0f1d:{NFSU2_TR(0x4a0f1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a0f20:{NFSU2_TR(0x4a0f20);
w4(R+4,u32(0x9full));
}
B4a0f25:{NFSU2_TR(0x4a0f25);
__builtin_memmove((R+28),(R+0),4);
}
B4a0f27:L4a0f27:{c.instructions+=1;NFSU2_TR(0x4a0f27);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4a0f29;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a0f27u);}goto L4a0f27;}
}
B4a0f29:L4a0f29:{c.instructions+=4;NFSU2_TR(0x4a0f29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a0f2a:{NFSU2_TR(0x4a0f2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a0f2b:{NFSU2_TR(0x4a0f2b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x27cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x27cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x27cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a0f31:{NFSU2_TR(0x4a0f31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0f40:L4a0f40:{c.instructions+=6;NFSU2_TR(0x4a0f40);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0f44:{NFSU2_TR(0x4a0f44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x27cull))));
}
B4a0f4a:{NFSU2_TR(0x4a0f4a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0f4b:{NFSU2_TR(0x4a0f4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0f4c:{NFSU2_TR(0x4a0f4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0f4d:{NFSU2_TR(0x4a0f4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0f52ull));
TAIL_STATIC(0x582b60u,582);
}
B4a0f52:L4a0f52:{c.instructions+=2;NFSU2_TR(0x4a0f52);
__builtin_memmove((R+4),(R+0),4);
}
B4a0f54:{NFSU2_TR(0x4a0f54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0f59ull));
TAIL_STATIC(0x582bb0u,582);
}
B4a0f59:L4a0f59:{c.instructions+=4;NFSU2_TR(0x4a0f59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0f5a:{NFSU2_TR(0x4a0f5a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a0f5e:{NFSU2_TR(0x4a0f5e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0f5f:{NFSU2_TR(0x4a0f5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0f64ull));
TAIL_STATIC(0x49e870u,49e);
}
B4a0f64:L4a0f64:{c.instructions+=5;NFSU2_TR(0x4a0f64);
__builtin_memmove((R+24),(R+0),4);
}
B4a0f66:{NFSU2_TR(0x4a0f66);
u8 U[8];
w4(U+0,u32(u32(u32(0x290ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0f6d:{NFSU2_TR(0x4a0f6d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a0f70:{NFSU2_TR(0x4a0f70);
w4(R+4,u32(0x9full));
}
B4a0f75:{NFSU2_TR(0x4a0f75);
__builtin_memmove((R+28),(R+0),4);
}
B4a0f77:L4a0f77:{c.instructions+=1;NFSU2_TR(0x4a0f77);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4a0f79;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a0f77u);}goto L4a0f77;}
}
B4a0f79:L4a0f79:{c.instructions+=4;NFSU2_TR(0x4a0f79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a0f7a:{NFSU2_TR(0x4a0f7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a0f7b:{NFSU2_TR(0x4a0f7b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x27cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x27cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x27cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a0f81:{NFSU2_TR(0x4a0f81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a0f90:L4a0f90:{c.instructions+=8;NFSU2_TR(0x4a0f90);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a0f94:{NFSU2_TR(0x4a0f94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x27cull))));
}
B4a0f9a:{NFSU2_TR(0x4a0f9a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a0f9c:{NFSU2_TR(0x4a0f9c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0f9d:{NFSU2_TR(0x4a0f9d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0f9e:{NFSU2_TR(0x4a0f9e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0f9f:{NFSU2_TR(0x4a0f9f);
__builtin_memmove((R+12),(R+4),4);
}
B4a0fa1:{NFSU2_TR(0x4a0fa1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a0ffd;}}
}
B4a0fa3:L4a0fa3:{c.instructions+=3;NFSU2_TR(0x4a0fa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0fa9:{NFSU2_TR(0x4a0fa9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a0fab:{NFSU2_TR(0x4a0fab);
if(r1(R+518)){TAIL_STATIC(0x4a1097u,4a1);}
}
B4a0fb1:L4a0fb1:{c.instructions+=4;NFSU2_TR(0x4a0fb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a0fb7:{NFSU2_TR(0x4a0fb7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B4a0fba:{NFSU2_TR(0x4a0fba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0fbb:{NFSU2_TR(0x4a0fbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0fc0ull));
TAIL_STATIC(0x582b60u,582);
}
B4a0fc0:L4a0fc0:{c.instructions+=2;NFSU2_TR(0x4a0fc0);
__builtin_memmove((R+4),(R+0),4);
}
B4a0fc2:{NFSU2_TR(0x4a0fc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0fc7ull));
TAIL_STATIC(0x582bb0u,582);
}
B4a0fc7:L4a0fc7:{c.instructions+=4;NFSU2_TR(0x4a0fc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0fc8:{NFSU2_TR(0x4a0fc8);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a0fcc:{NFSU2_TR(0x4a0fcc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0fcd:{NFSU2_TR(0x4a0fcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0fd2ull));
TAIL_STATIC(0x49e870u,49e);
}
B4a0fd2:L4a0fd2:{c.instructions+=3;NFSU2_TR(0x4a0fd2);
__builtin_memmove((R+24),(R+0),4);
}
B4a0fd4:{NFSU2_TR(0x4a0fd4);
w4(R+4,u32(0x9full));
}
B4a0fd9:{NFSU2_TR(0x4a0fd9);
w4(R+28,u32(0x835fb8ull));
}
B4a0fde:L4a0fde:{c.instructions+=1;NFSU2_TR(0x4a0fde);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4a0fe0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a0fdeu);}goto L4a0fde;}
}
B4a0fe0:L4a0fe0:{c.instructions+=1;NFSU2_TR(0x4a0fe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0fe5ull));
TAIL_STATIC(0x582b60u,582);
}
B4a0fe5:L4a0fe5:{c.instructions+=5;NFSU2_TR(0x4a0fe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a0feb:{NFSU2_TR(0x4a0feb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0fed:{NFSU2_TR(0x4a0fed);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0ff2:{NFSU2_TR(0x4a0ff2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a0ff3:{NFSU2_TR(0x4a0ff3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a0ff8ull));
TAIL_STATIC(0x740790u,740);
}
B4a0ff8:L4a0ff8:{c.instructions+=2;NFSU2_TR(0x4a0ff8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a0ffb:{NFSU2_TR(0x4a0ffb);
TAIL_STATIC(0x4a1066u,4a1);
}
B4a0ffd:L4a0ffd:{c.instructions+=1;NFSU2_TR(0x4a0ffd);
__builtin_memmove((R+8),gp(0x7f44b4),4);
TAIL_STATIC(0x4a1003u,4a1);
}
XIT:NFSU2_TR_EXIT(0x4a0,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
