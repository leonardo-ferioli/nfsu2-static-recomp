#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_675(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69b(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_69f(u8* __restrict R,Cpu& c);
u32 body_6a1(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6a0,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6a0,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6a0(u8* __restrict R,Cpu& c);
u32 page_6a0(Cpu& c){return body_6a0(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6a0(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6a0002:goto L6a0002;
case 0x6a0005:c.instructions+=5;goto B6a0005;
case 0x6a0008:c.instructions+=4;goto B6a0008;
case 0x6a000b:c.instructions+=3;goto B6a000b;
case 0x6a000e:c.instructions+=2;goto B6a000e;
case 0x6a0011:c.instructions+=1;goto B6a0011;
case 0x6a0017:goto L6a0017;
case 0x6a001a:c.instructions+=7;goto B6a001a;
case 0x6a0021:c.instructions+=6;goto B6a0021;
case 0x6a0024:c.instructions+=5;goto B6a0024;
case 0x6a0027:c.instructions+=4;goto B6a0027;
case 0x6a002a:c.instructions+=3;goto B6a002a;
case 0x6a002d:c.instructions+=2;goto B6a002d;
case 0x6a0030:c.instructions+=1;goto B6a0030;
case 0x6a0036:goto L6a0036;
case 0x6a003a:c.instructions+=3;goto B6a003a;
case 0x6a003d:c.instructions+=2;goto B6a003d;
case 0x6a0040:c.instructions+=1;goto B6a0040;
case 0x6a0046:goto L6a0046;
case 0x6a004a:c.instructions+=1;goto B6a004a;
case 0x6a004c:goto L6a004c;
case 0x6a004e:c.instructions+=2;goto B6a004e;
case 0x6a0051:c.instructions+=1;goto B6a0051;
case 0x6a0053:goto L6a0053;
case 0x6a0056:goto L6a0056;
case 0x6a0059:c.instructions+=1;goto B6a0059;
case 0x6a005b:goto L6a005b;
case 0x6a005e:c.instructions+=4;goto B6a005e;
case 0x6a0061:c.instructions+=3;goto B6a0061;
case 0x6a0064:c.instructions+=2;goto B6a0064;
case 0x6a0067:c.instructions+=1;goto B6a0067;
case 0x6a006a:goto L6a006a;
case 0x6a006d:c.instructions+=3;goto B6a006d;
case 0x6a0070:c.instructions+=2;goto B6a0070;
case 0x6a0073:c.instructions+=1;goto B6a0073;
case 0x6a0075:goto L6a0075;
case 0x6a0076:c.instructions+=2;goto B6a0076;
case 0x6a0079:c.instructions+=1;goto B6a0079;
case 0x6a007b:goto L6a007b;
case 0x6a007d:c.instructions+=1;goto B6a007d;
case 0x6a0082:goto L6a0082;
case 0x6a0085:c.instructions+=2;goto B6a0085;
case 0x6a0087:c.instructions+=1;goto B6a0087;
case 0x6a008c:goto L6a008c;
case 0x6a008e:c.instructions+=6;goto B6a008e;
case 0x6a0091:c.instructions+=5;goto B6a0091;
case 0x6a0092:c.instructions+=4;goto B6a0092;
case 0x6a0095:c.instructions+=3;goto B6a0095;
case 0x6a0097:c.instructions+=2;goto B6a0097;
case 0x6a009a:c.instructions+=1;goto B6a009a;
case 0x6a009f:goto L6a009f;
case 0x6a00a0:c.instructions+=5;goto B6a00a0;
case 0x6a00a1:c.instructions+=4;goto B6a00a1;
case 0x6a00a3:c.instructions+=3;goto B6a00a3;
case 0x6a00a4:c.instructions+=2;goto B6a00a4;
case 0x6a00a5:c.instructions+=1;goto B6a00a5;
case 0x6a00a6:goto L6a00a6;
case 0x6a00a8:c.instructions+=14;goto B6a00a8;
case 0x6a00a9:c.instructions+=13;goto B6a00a9;
case 0x6a00ab:c.instructions+=12;goto B6a00ab;
case 0x6a00ae:c.instructions+=11;goto B6a00ae;
case 0x6a00af:c.instructions+=10;goto B6a00af;
case 0x6a00b1:c.instructions+=9;goto B6a00b1;
case 0x6a00b2:c.instructions+=8;goto B6a00b2;
case 0x6a00b4:c.instructions+=7;goto B6a00b4;
case 0x6a00b7:c.instructions+=6;goto B6a00b7;
case 0x6a00b8:c.instructions+=5;goto B6a00b8;
case 0x6a00bb:c.instructions+=4;goto B6a00bb;
case 0x6a00be:c.instructions+=3;goto B6a00be;
case 0x6a00c1:c.instructions+=2;goto B6a00c1;
case 0x6a00c4:c.instructions+=1;goto B6a00c4;
case 0x6a00ca:goto L6a00ca;
case 0x6a00cc:goto L6a00cc;
case 0x6a00ce:goto L6a00ce;
case 0x6a00d1:c.instructions+=5;goto B6a00d1;
case 0x6a00d4:c.instructions+=4;goto B6a00d4;
case 0x6a00d7:c.instructions+=3;goto B6a00d7;
case 0x6a00da:c.instructions+=2;goto B6a00da;
case 0x6a00dd:c.instructions+=1;goto B6a00dd;
case 0x6a00e3:goto L6a00e3;
case 0x6a00e6:c.instructions+=2;goto B6a00e6;
case 0x6a00e9:c.instructions+=1;goto B6a00e9;
case 0x6a00ef:goto L6a00ef;
case 0x6a00f2:c.instructions+=1;goto B6a00f2;
case 0x6a00f4:goto L6a00f4;
case 0x6a00f6:c.instructions+=1;goto B6a00f6;
case 0x6a00fb:goto L6a00fb;
case 0x6a0102:goto L6a0102;
case 0x6a0104:c.instructions+=6;goto B6a0104;
case 0x6a0107:c.instructions+=5;goto B6a0107;
case 0x6a010a:c.instructions+=4;goto B6a010a;
case 0x6a010d:c.instructions+=3;goto B6a010d;
case 0x6a0110:c.instructions+=2;goto B6a0110;
case 0x6a0113:c.instructions+=1;goto B6a0113;
case 0x6a0115:goto L6a0115;
case 0x6a0118:c.instructions+=5;goto B6a0118;
case 0x6a011b:c.instructions+=4;goto B6a011b;
case 0x6a011d:c.instructions+=3;goto B6a011d;
case 0x6a0123:c.instructions+=2;goto B6a0123;
case 0x6a0129:c.instructions+=1;goto B6a0129;
case 0x6a012b:goto L6a012b;
case 0x6a012f:c.instructions+=2;goto B6a012f;
case 0x6a0133:c.instructions+=1;goto B6a0133;
case 0x6a0135:goto L6a0135;
case 0x6a0138:goto L6a0138;
case 0x6a013a:c.instructions+=1;goto B6a013a;
case 0x6a013c:goto L6a013c;
case 0x6a013f:c.instructions+=4;goto B6a013f;
case 0x6a0142:c.instructions+=3;goto B6a0142;
case 0x6a0145:c.instructions+=2;goto B6a0145;
case 0x6a0148:c.instructions+=1;goto B6a0148;
case 0x6a014a:goto L6a014a;
case 0x6a014d:c.instructions+=2;goto B6a014d;
case 0x6a0150:c.instructions+=1;goto B6a0150;
case 0x6a0153:goto L6a0153;
case 0x6a0157:c.instructions+=5;goto B6a0157;
case 0x6a0159:c.instructions+=4;goto B6a0159;
case 0x6a015c:c.instructions+=3;goto B6a015c;
case 0x6a015f:c.instructions+=2;goto B6a015f;
case 0x6a0162:c.instructions+=1;goto B6a0162;
case 0x6a0164:goto L6a0164;
case 0x6a0166:c.instructions+=1;goto B6a0166;
case 0x6a0168:goto L6a0168;
case 0x6a016e:goto L6a016e;
case 0x6a0171:c.instructions+=6;goto B6a0171;
case 0x6a0174:c.instructions+=5;goto B6a0174;
case 0x6a0177:c.instructions+=4;goto B6a0177;
case 0x6a017a:c.instructions+=3;goto B6a017a;
case 0x6a017d:c.instructions+=2;goto B6a017d;
case 0x6a0180:c.instructions+=1;goto B6a0180;
case 0x6a0186:goto L6a0186;
case 0x6a018a:c.instructions+=1;goto B6a018a;
case 0x6a0190:goto L6a0190;
case 0x6a0193:c.instructions+=2;goto B6a0193;
case 0x6a0196:c.instructions+=1;goto B6a0196;
case 0x6a019b:goto L6a019b;
case 0x6a019e:c.instructions+=5;goto B6a019e;
case 0x6a01a2:c.instructions+=4;goto B6a01a2;
case 0x6a01a4:c.instructions+=3;goto B6a01a4;
case 0x6a01a7:c.instructions+=2;goto B6a01a7;
case 0x6a01a9:c.instructions+=1;goto B6a01a9;
case 0x6a01ab:goto L6a01ab;
case 0x6a01ae:c.instructions+=1;goto B6a01ae;
case 0x6a01b1:goto L6a01b1;
case 0x6a01b4:c.instructions+=2;goto B6a01b4;
case 0x6a01b7:c.instructions+=1;goto B6a01b7;
case 0x6a01b9:goto L6a01b9;
case 0x6a01bc:c.instructions+=4;goto B6a01bc;
case 0x6a01be:c.instructions+=3;goto B6a01be;
case 0x6a01c1:c.instructions+=2;goto B6a01c1;
case 0x6a01c4:c.instructions+=1;goto B6a01c4;
case 0x6a01c6:goto L6a01c6;
case 0x6a01ca:c.instructions+=1;goto B6a01ca;
case 0x6a01cc:goto L6a01cc;
case 0x6a01cf:c.instructions+=1;goto B6a01cf;
case 0x6a01d1:goto L6a01d1;
case 0x6a01d4:c.instructions+=2;goto B6a01d4;
case 0x6a01d7:c.instructions+=1;goto B6a01d7;
case 0x6a01d9:goto L6a01d9;
case 0x6a01dc:c.instructions+=2;goto B6a01dc;
case 0x6a01df:c.instructions+=1;goto B6a01df;
case 0x6a01e1:goto L6a01e1;
case 0x6a01e4:c.instructions+=2;goto B6a01e4;
case 0x6a01e7:c.instructions+=1;goto B6a01e7;
case 0x6a01e9:goto L6a01e9;
case 0x6a01ec:c.instructions+=3;goto B6a01ec;
case 0x6a01f0:c.instructions+=2;goto B6a01f0;
case 0x6a01f3:c.instructions+=1;goto B6a01f3;
case 0x6a01f5:goto L6a01f5;
case 0x6a01f7:goto L6a01f7;
case 0x6a01fb:c.instructions+=1;goto B6a01fb;
case 0x6a01fd:goto L6a01fd;
case 0x6a01ff:c.instructions+=1;goto B6a01ff;
case 0x6a0204:goto L6a0204;
case 0x6a020b:goto L6a020b;
case 0x6a020e:c.instructions+=1;goto B6a020e;
case 0x6a0211:goto L6a0211;
case 0x6a0214:c.instructions+=2;goto B6a0214;
case 0x6a0217:c.instructions+=1;goto B6a0217;
case 0x6a021d:goto L6a021d;
case 0x6a0221:c.instructions+=6;goto B6a0221;
case 0x6a0224:c.instructions+=5;goto B6a0224;
case 0x6a0227:c.instructions+=4;goto B6a0227;
case 0x6a022a:c.instructions+=3;goto B6a022a;
case 0x6a022d:c.instructions+=2;goto B6a022d;
case 0x6a0230:c.instructions+=1;goto B6a0230;
case 0x6a0236:goto L6a0236;
case 0x6a023b:c.instructions+=4;goto B6a023b;
case 0x6a0240:c.instructions+=3;goto B6a0240;
case 0x6a0243:c.instructions+=2;goto B6a0243;
case 0x6a0244:c.instructions+=1;goto B6a0244;
case 0x6a0249:goto L6a0249;
case 0x6a024c:c.instructions+=2;goto B6a024c;
case 0x6a0251:c.instructions+=1;goto B6a0251;
case 0x6a0256:goto L6a0256;
case 0x6a0259:c.instructions+=1;goto B6a0259;
case 0x6a025f:goto L6a025f;
case 0x6a0262:c.instructions+=2;goto B6a0262;
case 0x6a0265:c.instructions+=1;goto B6a0265;
case 0x6a026b:goto L6a026b;
case 0x6a026e:c.instructions+=5;goto B6a026e;
case 0x6a0271:c.instructions+=4;goto B6a0271;
case 0x6a0273:c.instructions+=3;goto B6a0273;
case 0x6a0279:c.instructions+=2;goto B6a0279;
case 0x6a027f:c.instructions+=1;goto B6a027f;
case 0x6a0285:goto L6a0285;
case 0x6a0288:c.instructions+=3;goto B6a0288;
case 0x6a028a:c.instructions+=2;goto B6a028a;
case 0x6a028c:c.instructions+=1;goto B6a028c;
case 0x6a028e:goto L6a028e;
case 0x6a0291:goto L6a0291;
case 0x6a0293:c.instructions+=1;goto B6a0293;
case 0x6a0295:goto L6a0295;
case 0x6a0296:c.instructions+=3;goto B6a0296;
case 0x6a0299:c.instructions+=2;goto B6a0299;
case 0x6a029b:c.instructions+=1;goto B6a029b;
case 0x6a029d:goto L6a029d;
case 0x6a02a0:c.instructions+=12;goto B6a02a0;
case 0x6a02a3:c.instructions+=11;goto B6a02a3;
case 0x6a02a6:c.instructions+=10;goto B6a02a6;
case 0x6a02a8:c.instructions+=9;goto B6a02a8;
case 0x6a02ab:c.instructions+=8;goto B6a02ab;
case 0x6a02ae:c.instructions+=7;goto B6a02ae;
case 0x6a02b1:c.instructions+=6;goto B6a02b1;
case 0x6a02b4:c.instructions+=5;goto B6a02b4;
case 0x6a02b7:c.instructions+=4;goto B6a02b7;
case 0x6a02ba:c.instructions+=3;goto B6a02ba;
case 0x6a02be:c.instructions+=2;goto B6a02be;
case 0x6a02c1:c.instructions+=1;goto B6a02c1;
case 0x6a02c3:goto L6a02c3;
case 0x6a02c7:c.instructions+=1;goto B6a02c7;
case 0x6a02c9:goto L6a02c9;
case 0x6a02cb:c.instructions+=2;goto B6a02cb;
case 0x6a02ce:c.instructions+=1;goto B6a02ce;
case 0x6a02d0:goto L6a02d0;
case 0x6a02d3:c.instructions+=1;goto B6a02d3;
case 0x6a02d5:goto L6a02d5;
case 0x6a02d8:c.instructions+=1;goto B6a02d8;
case 0x6a02da:goto L6a02da;
case 0x6a02dd:c.instructions+=2;goto B6a02dd;
case 0x6a02e0:c.instructions+=1;goto B6a02e0;
case 0x6a02e5:goto L6a02e5;
case 0x6a02e8:c.instructions+=2;goto B6a02e8;
case 0x6a02ea:c.instructions+=1;goto B6a02ea;
case 0x6a02ec:goto L6a02ec;
case 0x6a02ef:c.instructions+=3;goto B6a02ef;
case 0x6a02f2:c.instructions+=2;goto B6a02f2;
case 0x6a02f6:c.instructions+=1;goto B6a02f6;
case 0x6a02fc:goto L6a02fc;
case 0x6a0300:c.instructions+=1;goto B6a0300;
case 0x6a0302:goto L6a0302;
case 0x6a0304:c.instructions+=2;goto B6a0304;
case 0x6a0306:c.instructions+=1;goto B6a0306;
case 0x6a0308:goto L6a0308;
case 0x6a030b:c.instructions+=1;goto B6a030b;
case 0x6a030d:goto L6a030d;
case 0x6a030f:c.instructions+=1;goto B6a030f;
case 0x6a0311:goto L6a0311;
case 0x6a0314:c.instructions+=2;goto B6a0314;
case 0x6a0317:c.instructions+=1;goto B6a0317;
case 0x6a031c:goto L6a031c;
case 0x6a031f:c.instructions+=1;goto B6a031f;
case 0x6a0322:goto L6a0322;
case 0x6a0325:c.instructions+=6;goto B6a0325;
case 0x6a0327:c.instructions+=5;goto B6a0327;
case 0x6a032a:c.instructions+=4;goto B6a032a;
case 0x6a032c:c.instructions+=3;goto B6a032c;
case 0x6a032e:c.instructions+=2;goto B6a032e;
case 0x6a0331:c.instructions+=1;goto B6a0331;
case 0x6a0333:goto L6a0333;
case 0x6a0336:c.instructions+=1;goto B6a0336;
case 0x6a0338:goto L6a0338;
case 0x6a033b:c.instructions+=3;goto B6a033b;
case 0x6a033e:c.instructions+=2;goto B6a033e;
case 0x6a0341:c.instructions+=1;goto B6a0341;
case 0x6a0343:goto L6a0343;
case 0x6a0346:c.instructions+=2;goto B6a0346;
case 0x6a0349:c.instructions+=1;goto B6a0349;
case 0x6a034c:goto L6a034c;
case 0x6a034d:c.instructions+=2;goto B6a034d;
case 0x6a0350:c.instructions+=1;goto B6a0350;
case 0x6a0352:goto L6a0352;
case 0x6a0354:goto L6a0354;
case 0x6a0357:c.instructions+=1;goto B6a0357;
case 0x6a0359:goto L6a0359;
case 0x6a035c:c.instructions+=3;goto B6a035c;
case 0x6a035f:c.instructions+=2;goto B6a035f;
case 0x6a0362:c.instructions+=1;goto B6a0362;
case 0x6a0364:goto L6a0364;
case 0x6a0367:c.instructions+=2;goto B6a0367;
case 0x6a036a:c.instructions+=1;goto B6a036a;
case 0x6a036d:goto L6a036d;
case 0x6a036e:c.instructions+=2;goto B6a036e;
case 0x6a0371:c.instructions+=1;goto B6a0371;
case 0x6a0373:goto L6a0373;
case 0x6a0375:goto L6a0375;
case 0x6a037c:goto L6a037c;
case 0x6a037f:c.instructions+=3;goto B6a037f;
case 0x6a0382:c.instructions+=2;goto B6a0382;
case 0x6a0385:c.instructions+=1;goto B6a0385;
case 0x6a038b:goto L6a038b;
case 0x6a038f:c.instructions+=1;goto B6a038f;
case 0x6a0391:goto L6a0391;
case 0x6a0393:c.instructions+=2;goto B6a0393;
case 0x6a0394:c.instructions+=1;goto B6a0394;
case 0x6a0396:goto L6a0396;
case 0x6a039a:c.instructions+=1;goto B6a039a;
case 0x6a039c:goto L6a039c;
case 0x6a039e:c.instructions+=1;goto B6a039e;
case 0x6a03a3:goto L6a03a3;
case 0x6a03a5:goto L6a03a5;
case 0x6a03a6:c.instructions+=4;goto B6a03a6;
case 0x6a03a7:c.instructions+=3;goto B6a03a7;
case 0x6a03a8:c.instructions+=2;goto B6a03a8;
case 0x6a03a9:c.instructions+=1;goto B6a03a9;
case 0x6a03aa:goto L6a03aa;
case 0x6a03ac:c.instructions+=9;goto B6a03ac;
case 0x6a03ad:c.instructions+=8;goto B6a03ad;
case 0x6a03af:c.instructions+=7;goto B6a03af;
case 0x6a03b2:c.instructions+=6;goto B6a03b2;
case 0x6a03b3:c.instructions+=5;goto B6a03b3;
case 0x6a03b4:c.instructions+=4;goto B6a03b4;
case 0x6a03b6:c.instructions+=3;goto B6a03b6;
case 0x6a03b7:c.instructions+=2;goto B6a03b7;
case 0x6a03ba:c.instructions+=1;goto B6a03ba;
case 0x6a03bf:goto L6a03bf;
case 0x6a03c3:c.instructions+=6;goto B6a03c3;
case 0x6a03c7:c.instructions+=5;goto B6a03c7;
case 0x6a03c9:c.instructions+=4;goto B6a03c9;
case 0x6a03cc:c.instructions+=3;goto B6a03cc;
case 0x6a03cf:c.instructions+=2;goto B6a03cf;
case 0x6a03d2:c.instructions+=1;goto B6a03d2;
case 0x6a03d8:goto L6a03d8;
case 0x6a03db:c.instructions+=5;goto B6a03db;
case 0x6a03de:c.instructions+=4;goto B6a03de;
case 0x6a03e1:c.instructions+=3;goto B6a03e1;
case 0x6a03e3:c.instructions+=2;goto B6a03e3;
case 0x6a03e9:c.instructions+=1;goto B6a03e9;
case 0x6a03ef:goto L6a03ef;
case 0x6a03f1:c.instructions+=3;goto B6a03f1;
case 0x6a03f6:c.instructions+=2;goto B6a03f6;
case 0x6a03fb:c.instructions+=1;goto B6a03fb;
case 0x6a0401:goto L6a0401;
case 0x6a0406:c.instructions+=1;goto B6a0406;
case 0x6a040c:goto L6a040c;
case 0x6a040f:c.instructions+=7;goto B6a040f;
case 0x6a0415:c.instructions+=6;goto B6a0415;
case 0x6a0417:c.instructions+=5;goto B6a0417;
case 0x6a0419:c.instructions+=4;goto B6a0419;
case 0x6a041c:c.instructions+=3;goto B6a041c;
case 0x6a041e:c.instructions+=2;goto B6a041e;
case 0x6a0421:c.instructions+=1;goto B6a0421;
case 0x6a0427:goto L6a0427;
case 0x6a042a:c.instructions+=4;goto B6a042a;
case 0x6a042c:c.instructions+=3;goto B6a042c;
case 0x6a042f:c.instructions+=2;goto B6a042f;
case 0x6a0432:c.instructions+=1;goto B6a0432;
case 0x6a0438:goto L6a0438;
case 0x6a043c:c.instructions+=13;goto B6a043c;
case 0x6a043f:c.instructions+=12;goto B6a043f;
case 0x6a0442:c.instructions+=11;goto B6a0442;
case 0x6a0445:c.instructions+=10;goto B6a0445;
case 0x6a0447:c.instructions+=9;goto B6a0447;
case 0x6a044a:c.instructions+=8;goto B6a044a;
case 0x6a044d:c.instructions+=7;goto B6a044d;
case 0x6a0450:c.instructions+=6;goto B6a0450;
case 0x6a0453:c.instructions+=5;goto B6a0453;
case 0x6a0456:c.instructions+=4;goto B6a0456;
case 0x6a0459:c.instructions+=3;goto B6a0459;
case 0x6a045c:c.instructions+=2;goto B6a045c;
case 0x6a045f:c.instructions+=1;goto B6a045f;
case 0x6a0465:goto L6a0465;
case 0x6a0468:c.instructions+=3;goto B6a0468;
case 0x6a046b:c.instructions+=2;goto B6a046b;
case 0x6a046e:c.instructions+=1;goto B6a046e;
case 0x6a0473:goto L6a0473;
case 0x6a0476:c.instructions+=9;goto B6a0476;
case 0x6a047a:c.instructions+=8;goto B6a047a;
case 0x6a047c:c.instructions+=7;goto B6a047c;
case 0x6a047f:c.instructions+=6;goto B6a047f;
case 0x6a0482:c.instructions+=5;goto B6a0482;
case 0x6a0485:c.instructions+=4;goto B6a0485;
case 0x6a0488:c.instructions+=3;goto B6a0488;
case 0x6a048b:c.instructions+=2;goto B6a048b;
case 0x6a048f:c.instructions+=1;goto B6a048f;
case 0x6a0491:goto L6a0491;
case 0x6a0494:c.instructions+=1;goto B6a0494;
case 0x6a0497:goto L6a0497;
case 0x6a049a:c.instructions+=2;goto B6a049a;
case 0x6a049c:c.instructions+=1;goto B6a049c;
case 0x6a049e:goto L6a049e;
case 0x6a04a1:c.instructions+=4;goto B6a04a1;
case 0x6a04a4:c.instructions+=3;goto B6a04a4;
case 0x6a04a8:c.instructions+=2;goto B6a04a8;
case 0x6a04ab:c.instructions+=1;goto B6a04ab;
case 0x6a04ad:goto L6a04ad;
case 0x6a04b1:c.instructions+=3;goto B6a04b1;
case 0x6a04b4:c.instructions+=2;goto B6a04b4;
case 0x6a04b7:c.instructions+=1;goto B6a04b7;
case 0x6a04b9:goto L6a04b9;
case 0x6a04bc:c.instructions+=3;goto B6a04bc;
case 0x6a04be:c.instructions+=2;goto B6a04be;
case 0x6a04c1:c.instructions+=1;goto B6a04c1;
case 0x6a04c6:goto L6a04c6;
case 0x6a04c8:c.instructions+=1;goto B6a04c8;
case 0x6a04ca:goto L6a04ca;
case 0x6a04cd:c.instructions+=2;goto B6a04cd;
case 0x6a04d4:c.instructions+=1;goto B6a04d4;
case 0x6a04d6:goto L6a04d6;
case 0x6a04d9:c.instructions+=3;goto B6a04d9;
case 0x6a04dc:c.instructions+=2;goto B6a04dc;
case 0x6a04de:c.instructions+=1;goto B6a04de;
case 0x6a04e3:goto L6a04e3;
case 0x6a04e5:c.instructions+=1;goto B6a04e5;
case 0x6a04e7:goto L6a04e7;
case 0x6a04ea:c.instructions+=4;goto B6a04ea;
case 0x6a04ed:c.instructions+=3;goto B6a04ed;
case 0x6a04f0:c.instructions+=2;goto B6a04f0;
case 0x6a04f3:c.instructions+=1;goto B6a04f3;
case 0x6a04f6:goto L6a04f6;
case 0x6a04f9:c.instructions+=1;goto B6a04f9;
case 0x6a04ff:goto L6a04ff;
case 0x6a0501:goto L6a0501;
case 0x6a0504:c.instructions+=1;goto B6a0504;
case 0x6a0508:goto L6a0508;
case 0x6a050b:goto L6a050b;
case 0x6a050e:c.instructions+=3;goto B6a050e;
case 0x6a0511:c.instructions+=2;goto B6a0511;
case 0x6a0514:c.instructions+=1;goto B6a0514;
case 0x6a051a:goto L6a051a;
case 0x6a051c:goto L6a051c;
case 0x6a051f:c.instructions+=2;goto B6a051f;
case 0x6a0522:c.instructions+=1;goto B6a0522;
case 0x6a0528:goto L6a0528;
case 0x6a052a:c.instructions+=1;goto B6a052a;
case 0x6a0530:goto L6a0530;
case 0x6a0534:c.instructions+=13;goto B6a0534;
case 0x6a0537:c.instructions+=12;goto B6a0537;
case 0x6a053a:c.instructions+=11;goto B6a053a;
case 0x6a053c:c.instructions+=10;goto B6a053c;
case 0x6a053f:c.instructions+=9;goto B6a053f;
case 0x6a0542:c.instructions+=8;goto B6a0542;
case 0x6a0545:c.instructions+=7;goto B6a0545;
case 0x6a0548:c.instructions+=6;goto B6a0548;
case 0x6a054b:c.instructions+=5;goto B6a054b;
case 0x6a054f:c.instructions+=4;goto B6a054f;
case 0x6a0552:c.instructions+=3;goto B6a0552;
case 0x6a0555:c.instructions+=2;goto B6a0555;
case 0x6a0558:c.instructions+=1;goto B6a0558;
case 0x6a055a:goto L6a055a;
case 0x6a055e:c.instructions+=1;goto B6a055e;
case 0x6a0560:goto L6a0560;
case 0x6a0563:c.instructions+=5;goto B6a0563;
case 0x6a0569:c.instructions+=4;goto B6a0569;
case 0x6a056b:c.instructions+=3;goto B6a056b;
case 0x6a056d:c.instructions+=2;goto B6a056d;
case 0x6a0570:c.instructions+=1;goto B6a0570;
case 0x6a0572:goto L6a0572;
case 0x6a0575:c.instructions+=2;goto B6a0575;
case 0x6a0578:c.instructions+=1;goto B6a0578;
case 0x6a057a:goto L6a057a;
case 0x6a057b:c.instructions+=8;goto B6a057b;
case 0x6a057d:c.instructions+=7;goto B6a057d;
case 0x6a057e:c.instructions+=6;goto B6a057e;
case 0x6a0581:c.instructions+=5;goto B6a0581;
case 0x6a0583:c.instructions+=4;goto B6a0583;
case 0x6a0585:c.instructions+=3;goto B6a0585;
case 0x6a0588:c.instructions+=2;goto B6a0588;
case 0x6a058a:c.instructions+=1;goto B6a058a;
case 0x6a058f:goto L6a058f;
case 0x6a0592:c.instructions+=1;goto B6a0592;
case 0x6a0594:goto L6a0594;
case 0x6a0598:c.instructions+=1;goto B6a0598;
case 0x6a059a:goto L6a059a;
case 0x6a059d:c.instructions+=5;goto B6a059d;
case 0x6a05a3:c.instructions+=4;goto B6a05a3;
case 0x6a05a5:c.instructions+=3;goto B6a05a5;
case 0x6a05a7:c.instructions+=2;goto B6a05a7;
case 0x6a05aa:c.instructions+=1;goto B6a05aa;
case 0x6a05ac:goto L6a05ac;
case 0x6a05af:c.instructions+=2;goto B6a05af;
case 0x6a05b2:c.instructions+=1;goto B6a05b2;
case 0x6a05b4:goto L6a05b4;
case 0x6a05b5:c.instructions+=8;goto B6a05b5;
case 0x6a05b7:c.instructions+=7;goto B6a05b7;
case 0x6a05b8:c.instructions+=6;goto B6a05b8;
case 0x6a05bb:c.instructions+=5;goto B6a05bb;
case 0x6a05bd:c.instructions+=4;goto B6a05bd;
case 0x6a05bf:c.instructions+=3;goto B6a05bf;
case 0x6a05c2:c.instructions+=2;goto B6a05c2;
case 0x6a05c4:c.instructions+=1;goto B6a05c4;
case 0x6a05c9:goto L6a05c9;
case 0x6a05cc:goto L6a05cc;
case 0x6a05cf:c.instructions+=5;goto B6a05cf;
case 0x6a05d3:c.instructions+=4;goto B6a05d3;
case 0x6a05d6:c.instructions+=3;goto B6a05d6;
case 0x6a05d8:c.instructions+=2;goto B6a05d8;
case 0x6a05db:c.instructions+=1;goto B6a05db;
case 0x6a05e2:goto L6a05e2;
case 0x6a05e5:c.instructions+=3;goto B6a05e5;
case 0x6a05e6:c.instructions+=2;goto B6a05e6;
case 0x6a05e8:c.instructions+=1;goto B6a05e8;
case 0x6a05ee:goto L6a05ee;
case 0x6a05f0:goto L6a05f0;
case 0x6a05f3:c.instructions+=3;goto B6a05f3;
case 0x6a05f6:c.instructions+=2;goto B6a05f6;
case 0x6a05f9:c.instructions+=1;goto B6a05f9;
case 0x6a05ff:goto L6a05ff;
case 0x6a0602:c.instructions+=3;goto B6a0602;
case 0x6a0605:c.instructions+=2;goto B6a0605;
case 0x6a0608:c.instructions+=1;goto B6a0608;
case 0x6a060e:goto L6a060e;
case 0x6a0610:c.instructions+=2;goto B6a0610;
case 0x6a0613:c.instructions+=1;goto B6a0613;
case 0x6a0618:goto L6a0618;
case 0x6a061b:c.instructions+=2;goto B6a061b;
case 0x6a061e:c.instructions+=1;goto B6a061e;
case 0x6a0624:goto L6a0624;
case 0x6a0627:c.instructions+=4;goto B6a0627;
case 0x6a062a:c.instructions+=3;goto B6a062a;
case 0x6a062d:c.instructions+=2;goto B6a062d;
case 0x6a0633:c.instructions+=1;goto B6a0633;
case 0x6a0639:goto L6a0639;
case 0x6a063d:c.instructions+=2;goto B6a063d;
case 0x6a0641:c.instructions+=1;goto B6a0641;
case 0x6a0643:goto L6a0643;
case 0x6a0646:c.instructions+=8;goto B6a0646;
case 0x6a0649:c.instructions+=7;goto B6a0649;
case 0x6a064c:c.instructions+=6;goto B6a064c;
case 0x6a064f:c.instructions+=5;goto B6a064f;
case 0x6a0652:c.instructions+=4;goto B6a0652;
case 0x6a0655:c.instructions+=3;goto B6a0655;
case 0x6a0658:c.instructions+=2;goto B6a0658;
case 0x6a065b:c.instructions+=1;goto B6a065b;
case 0x6a065d:goto L6a065d;
case 0x6a065f:c.instructions+=5;goto B6a065f;
case 0x6a0662:c.instructions+=4;goto B6a0662;
case 0x6a0665:c.instructions+=3;goto B6a0665;
case 0x6a0668:c.instructions+=2;goto B6a0668;
case 0x6a066b:c.instructions+=1;goto B6a066b;
case 0x6a066d:goto L6a066d;
case 0x6a0671:c.instructions+=5;goto B6a0671;
case 0x6a0674:c.instructions+=4;goto B6a0674;
case 0x6a067a:c.instructions+=3;goto B6a067a;
case 0x6a067c:c.instructions+=2;goto B6a067c;
case 0x6a067e:c.instructions+=1;goto B6a067e;
case 0x6a0684:goto L6a0684;
case 0x6a0687:c.instructions+=1;goto B6a0687;
case 0x6a068d:goto L6a068d;
case 0x6a0691:c.instructions+=1;goto B6a0691;
case 0x6a0694:goto L6a0694;
case 0x6a069b:goto L6a069b;
case 0x6a069e:c.instructions+=1;goto B6a069e;
case 0x6a06a0:goto L6a06a0;
case 0x6a06a3:c.instructions+=6;goto B6a06a3;
case 0x6a06a6:c.instructions+=5;goto B6a06a6;
case 0x6a06a9:c.instructions+=4;goto B6a06a9;
case 0x6a06ac:c.instructions+=3;goto B6a06ac;
case 0x6a06af:c.instructions+=2;goto B6a06af;
case 0x6a06b2:c.instructions+=1;goto B6a06b2;
case 0x6a06b4:goto L6a06b4;
case 0x6a06b6:c.instructions+=4;goto B6a06b6;
case 0x6a06b8:c.instructions+=3;goto B6a06b8;
case 0x6a06bd:c.instructions+=2;goto B6a06bd;
case 0x6a06c2:c.instructions+=1;goto B6a06c2;
case 0x6a06c8:goto L6a06c8;
case 0x6a06cd:c.instructions+=1;goto B6a06cd;
case 0x6a06d3:goto L6a06d3;
case 0x6a06d8:c.instructions+=1;goto B6a06d8;
case 0x6a06de:goto L6a06de;
case 0x6a06e3:c.instructions+=1;goto B6a06e3;
case 0x6a06e9:goto L6a06e9;
case 0x6a06eb:c.instructions+=3;goto B6a06eb;
case 0x6a06f0:c.instructions+=2;goto B6a06f0;
case 0x6a06f5:c.instructions+=1;goto B6a06f5;
case 0x6a06fb:goto L6a06fb;
case 0x6a0700:c.instructions+=1;goto B6a0700;
case 0x6a0706:goto L6a0706;
case 0x6a0709:c.instructions+=9;goto B6a0709;
case 0x6a070f:c.instructions+=8;goto B6a070f;
case 0x6a0711:c.instructions+=7;goto B6a0711;
case 0x6a0713:c.instructions+=6;goto B6a0713;
case 0x6a0715:c.instructions+=5;goto B6a0715;
case 0x6a0718:c.instructions+=4;goto B6a0718;
case 0x6a071b:c.instructions+=3;goto B6a071b;
case 0x6a071e:c.instructions+=2;goto B6a071e;
case 0x6a0721:c.instructions+=1;goto B6a0721;
case 0x6a0723:goto L6a0723;
case 0x6a0726:c.instructions+=6;goto B6a0726;
case 0x6a0729:c.instructions+=5;goto B6a0729;
case 0x6a072c:c.instructions+=4;goto B6a072c;
case 0x6a072f:c.instructions+=3;goto B6a072f;
case 0x6a0732:c.instructions+=2;goto B6a0732;
case 0x6a0736:c.instructions+=1;goto B6a0736;
case 0x6a0738:goto L6a0738;
case 0x6a073c:c.instructions+=1;goto B6a073c;
case 0x6a073e:goto L6a073e;
case 0x6a0741:c.instructions+=4;goto B6a0741;
case 0x6a0745:c.instructions+=3;goto B6a0745;
case 0x6a0747:c.instructions+=2;goto B6a0747;
case 0x6a074a:c.instructions+=1;goto B6a074a;
case 0x6a074c:goto L6a074c;
case 0x6a074f:c.instructions+=11;goto B6a074f;
case 0x6a0753:c.instructions+=10;goto B6a0753;
case 0x6a0756:c.instructions+=9;goto B6a0756;
case 0x6a0759:c.instructions+=8;goto B6a0759;
case 0x6a075b:c.instructions+=7;goto B6a075b;
case 0x6a075e:c.instructions+=6;goto B6a075e;
case 0x6a0760:c.instructions+=5;goto B6a0760;
case 0x6a0763:c.instructions+=4;goto B6a0763;
case 0x6a0766:c.instructions+=3;goto B6a0766;
case 0x6a0769:c.instructions+=2;goto B6a0769;
case 0x6a076c:c.instructions+=1;goto B6a076c;
case 0x6a076e:goto L6a076e;
case 0x6a076f:c.instructions+=1;goto B6a076f;
case 0x6a0772:goto L6a0772;
case 0x6a0775:c.instructions+=3;goto B6a0775;
case 0x6a0778:c.instructions+=2;goto B6a0778;
case 0x6a077b:c.instructions+=1;goto B6a077b;
case 0x6a077d:goto L6a077d;
case 0x6a0780:c.instructions+=2;goto B6a0780;
case 0x6a0783:c.instructions+=1;goto B6a0783;
case 0x6a0789:goto L6a0789;
case 0x6a078d:c.instructions+=2;goto B6a078d;
case 0x6a078f:c.instructions+=1;goto B6a078f;
case 0x6a0791:goto L6a0791;
case 0x6a0795:c.instructions+=2;goto B6a0795;
case 0x6a0798:c.instructions+=1;goto B6a0798;
case 0x6a079b:goto L6a079b;
case 0x6a079e:c.instructions+=8;goto B6a079e;
case 0x6a07a2:c.instructions+=7;goto B6a07a2;
case 0x6a07a5:c.instructions+=6;goto B6a07a5;
case 0x6a07a8:c.instructions+=5;goto B6a07a8;
case 0x6a07ab:c.instructions+=4;goto B6a07ab;
case 0x6a07ad:c.instructions+=3;goto B6a07ad;
case 0x6a07b0:c.instructions+=2;goto B6a07b0;
case 0x6a07b2:c.instructions+=1;goto B6a07b2;
case 0x6a07b5:goto L6a07b5;
case 0x6a07b7:goto L6a07b7;
case 0x6a07b9:c.instructions+=2;goto B6a07b9;
case 0x6a07bc:c.instructions+=1;goto B6a07bc;
case 0x6a07bf:goto L6a07bf;
case 0x6a07c1:goto L6a07c1;
case 0x6a07c3:c.instructions+=3;goto B6a07c3;
case 0x6a07c6:c.instructions+=2;goto B6a07c6;
case 0x6a07c9:c.instructions+=1;goto B6a07c9;
case 0x6a07cb:goto L6a07cb;
case 0x6a07ce:c.instructions+=2;goto B6a07ce;
case 0x6a07d0:c.instructions+=1;goto B6a07d0;
case 0x6a07d2:goto L6a07d2;
case 0x6a07d4:c.instructions+=4;goto B6a07d4;
case 0x6a07d6:c.instructions+=3;goto B6a07d6;
case 0x6a07dc:c.instructions+=2;goto B6a07dc;
case 0x6a07de:c.instructions+=1;goto B6a07de;
case 0x6a07e0:goto L6a07e0;
case 0x6a07e3:c.instructions+=1;goto B6a07e3;
case 0x6a07e9:goto L6a07e9;
case 0x6a07ec:c.instructions+=6;goto B6a07ec;
case 0x6a07ef:c.instructions+=5;goto B6a07ef;
case 0x6a07f2:c.instructions+=4;goto B6a07f2;
case 0x6a07f5:c.instructions+=3;goto B6a07f5;
case 0x6a07f8:c.instructions+=2;goto B6a07f8;
case 0x6a07fb:c.instructions+=1;goto B6a07fb;
case 0x6a0800:goto L6a0800;
case 0x6a0802:goto L6a0802;
case 0x6a0805:c.instructions+=5;goto B6a0805;
case 0x6a0808:c.instructions+=4;goto B6a0808;
case 0x6a080a:c.instructions+=3;goto B6a080a;
case 0x6a080d:c.instructions+=2;goto B6a080d;
case 0x6a0810:c.instructions+=1;goto B6a0810;
case 0x6a0815:goto L6a0815;
case 0x6a0818:c.instructions+=2;goto B6a0818;
case 0x6a081a:c.instructions+=1;goto B6a081a;
case 0x6a0820:goto L6a0820;
case 0x6a0824:c.instructions+=2;goto B6a0824;
case 0x6a0826:c.instructions+=1;goto B6a0826;
case 0x6a0828:goto L6a0828;
case 0x6a082b:c.instructions+=2;goto B6a082b;
case 0x6a082e:c.instructions+=1;goto B6a082e;
case 0x6a0830:goto L6a0830;
case 0x6a0832:c.instructions+=3;goto B6a0832;
case 0x6a0835:c.instructions+=2;goto B6a0835;
case 0x6a0839:c.instructions+=1;goto B6a0839;
case 0x6a083b:goto L6a083b;
case 0x6a083f:c.instructions+=1;goto B6a083f;
case 0x6a0841:goto L6a0841;
case 0x6a0844:goto L6a0844;
case 0x6a0847:c.instructions+=2;goto B6a0847;
case 0x6a0848:c.instructions+=1;goto B6a0848;
case 0x6a084a:goto L6a084a;
case 0x6a084e:c.instructions+=1;goto B6a084e;
case 0x6a0854:goto L6a0854;
case 0x6a0856:c.instructions+=3;goto B6a0856;
case 0x6a0859:c.instructions+=2;goto B6a0859;
case 0x6a085c:c.instructions+=1;goto B6a085c;
case 0x6a0861:goto L6a0861;
case 0x6a0864:c.instructions+=9;goto B6a0864;
case 0x6a086a:c.instructions+=8;goto B6a086a;
case 0x6a086c:c.instructions+=7;goto B6a086c;
case 0x6a086e:c.instructions+=6;goto B6a086e;
case 0x6a0870:c.instructions+=5;goto B6a0870;
case 0x6a0873:c.instructions+=4;goto B6a0873;
case 0x6a0876:c.instructions+=3;goto B6a0876;
case 0x6a0879:c.instructions+=2;goto B6a0879;
case 0x6a087c:c.instructions+=1;goto B6a087c;
case 0x6a0882:goto L6a0882;
case 0x6a0885:c.instructions+=8;goto B6a0885;
case 0x6a0888:c.instructions+=7;goto B6a0888;
case 0x6a088b:c.instructions+=6;goto B6a088b;
case 0x6a088e:c.instructions+=5;goto B6a088e;
case 0x6a0891:c.instructions+=4;goto B6a0891;
case 0x6a0894:c.instructions+=3;goto B6a0894;
case 0x6a0897:c.instructions+=2;goto B6a0897;
case 0x6a089b:c.instructions+=1;goto B6a089b;
case 0x6a089d:goto L6a089d;
case 0x6a08a1:c.instructions+=1;goto B6a08a1;
case 0x6a08a7:goto L6a08a7;
case 0x6a08aa:c.instructions+=9;goto B6a08aa;
case 0x6a08ad:c.instructions+=8;goto B6a08ad;
case 0x6a08b0:c.instructions+=7;goto B6a08b0;
case 0x6a08b3:c.instructions+=6;goto B6a08b3;
case 0x6a08b6:c.instructions+=5;goto B6a08b6;
case 0x6a08b9:c.instructions+=4;goto B6a08b9;
case 0x6a08bc:c.instructions+=3;goto B6a08bc;
case 0x6a08bf:c.instructions+=2;goto B6a08bf;
case 0x6a08c3:c.instructions+=1;goto B6a08c3;
case 0x6a08c5:goto L6a08c5;
case 0x6a08c9:c.instructions+=1;goto B6a08c9;
case 0x6a08cb:goto L6a08cb;
case 0x6a08ce:c.instructions+=4;goto B6a08ce;
case 0x6a08d4:c.instructions+=3;goto B6a08d4;
case 0x6a08d7:c.instructions+=2;goto B6a08d7;
case 0x6a08da:c.instructions+=1;goto B6a08da;
case 0x6a08dc:goto L6a08dc;
case 0x6a08df:c.instructions+=2;goto B6a08df;
case 0x6a08e3:c.instructions+=1;goto B6a08e3;
case 0x6a08e5:goto L6a08e5;
case 0x6a08e9:c.instructions+=1;goto B6a08e9;
case 0x6a08eb:goto L6a08eb;
case 0x6a08f1:c.instructions+=3;goto B6a08f1;
case 0x6a08f4:c.instructions+=2;goto B6a08f4;
case 0x6a08f7:c.instructions+=1;goto B6a08f7;
case 0x6a08fa:goto L6a08fa;
case 0x6a0901:c.instructions+=1;goto B6a0901;
case 0x6a0903:goto L6a0903;
case 0x6a0906:c.instructions+=6;goto B6a0906;
case 0x6a0909:c.instructions+=5;goto B6a0909;
case 0x6a090c:c.instructions+=4;goto B6a090c;
case 0x6a0910:c.instructions+=3;goto B6a0910;
case 0x6a0914:c.instructions+=2;goto B6a0914;
case 0x6a0917:c.instructions+=1;goto B6a0917;
case 0x6a0919:goto L6a0919;
case 0x6a091c:c.instructions+=11;goto B6a091c;
case 0x6a0920:c.instructions+=10;goto B6a0920;
case 0x6a0923:c.instructions+=9;goto B6a0923;
case 0x6a0926:c.instructions+=8;goto B6a0926;
case 0x6a0928:c.instructions+=7;goto B6a0928;
case 0x6a092b:c.instructions+=6;goto B6a092b;
case 0x6a092d:c.instructions+=5;goto B6a092d;
case 0x6a0930:c.instructions+=4;goto B6a0930;
case 0x6a0933:c.instructions+=3;goto B6a0933;
case 0x6a0936:c.instructions+=2;goto B6a0936;
case 0x6a0939:c.instructions+=1;goto B6a0939;
case 0x6a093b:goto L6a093b;
case 0x6a093c:c.instructions+=1;goto B6a093c;
case 0x6a093f:goto L6a093f;
case 0x6a0942:c.instructions+=3;goto B6a0942;
case 0x6a0945:c.instructions+=2;goto B6a0945;
case 0x6a0948:c.instructions+=1;goto B6a0948;
case 0x6a094e:goto L6a094e;
case 0x6a0951:c.instructions+=2;goto B6a0951;
case 0x6a0954:c.instructions+=1;goto B6a0954;
case 0x6a095a:goto L6a095a;
case 0x6a095d:c.instructions+=3;goto B6a095d;
case 0x6a0961:c.instructions+=2;goto B6a0961;
case 0x6a0963:c.instructions+=1;goto B6a0963;
case 0x6a0965:goto L6a0965;
case 0x6a0969:c.instructions+=2;goto B6a0969;
case 0x6a096c:c.instructions+=1;goto B6a096c;
case 0x6a096f:goto L6a096f;
case 0x6a0972:c.instructions+=9;goto B6a0972;
case 0x6a0976:c.instructions+=8;goto B6a0976;
case 0x6a0979:c.instructions+=7;goto B6a0979;
case 0x6a097c:c.instructions+=6;goto B6a097c;
case 0x6a097f:c.instructions+=5;goto B6a097f;
case 0x6a0981:c.instructions+=4;goto B6a0981;
case 0x6a0984:c.instructions+=3;goto B6a0984;
case 0x6a0986:c.instructions+=2;goto B6a0986;
case 0x6a0989:c.instructions+=1;goto B6a0989;
case 0x6a098c:goto L6a098c;
case 0x6a098e:goto L6a098e;
case 0x6a0990:c.instructions+=3;goto B6a0990;
case 0x6a0993:c.instructions+=2;goto B6a0993;
case 0x6a0996:c.instructions+=1;goto B6a0996;
case 0x6a0999:goto L6a0999;
case 0x6a099b:goto L6a099b;
case 0x6a099d:goto L6a099d;
case 0x6a09a0:c.instructions+=2;goto B6a09a0;
case 0x6a09a2:c.instructions+=1;goto B6a09a2;
case 0x6a09a4:goto L6a09a4;
case 0x6a09a6:c.instructions+=4;goto B6a09a6;
case 0x6a09a8:c.instructions+=3;goto B6a09a8;
case 0x6a09ad:c.instructions+=2;goto B6a09ad;
case 0x6a09af:c.instructions+=1;goto B6a09af;
case 0x6a09b1:goto L6a09b1;
case 0x6a09b3:goto L6a09b3;
case 0x6a09b6:c.instructions+=4;goto B6a09b6;
case 0x6a09b9:c.instructions+=3;goto B6a09b9;
case 0x6a09bc:c.instructions+=2;goto B6a09bc;
case 0x6a09bf:c.instructions+=1;goto B6a09bf;
case 0x6a09c4:goto L6a09c4;
case 0x6a09c6:c.instructions+=4;goto B6a09c6;
case 0x6a09c9:c.instructions+=3;goto B6a09c9;
case 0x6a09cc:c.instructions+=2;goto B6a09cc;
case 0x6a09cf:c.instructions+=1;goto B6a09cf;
case 0x6a09d5:goto L6a09d5;
case 0x6a09d8:c.instructions+=16;goto B6a09d8;
case 0x6a09db:c.instructions+=15;goto B6a09db;
case 0x6a09de:c.instructions+=14;goto B6a09de;
case 0x6a09e1:c.instructions+=13;goto B6a09e1;
case 0x6a09e4:c.instructions+=12;goto B6a09e4;
case 0x6a09e7:c.instructions+=11;goto B6a09e7;
case 0x6a09ea:c.instructions+=10;goto B6a09ea;
case 0x6a09ed:c.instructions+=9;goto B6a09ed;
case 0x6a09f0:c.instructions+=8;goto B6a09f0;
case 0x6a09f3:c.instructions+=7;goto B6a09f3;
case 0x6a09f6:c.instructions+=6;goto B6a09f6;
case 0x6a09f9:c.instructions+=5;goto B6a09f9;
case 0x6a09fc:c.instructions+=4;goto B6a09fc;
case 0x6a09ff:c.instructions+=3;goto B6a09ff;
case 0x6a0a03:c.instructions+=2;goto B6a0a03;
case 0x6a0a06:c.instructions+=1;goto B6a0a06;
case 0x6a0a08:goto L6a0a08;
case 0x6a0a0c:c.instructions+=1;goto B6a0a0c;
case 0x6a0a0e:goto L6a0a0e;
case 0x6a0a11:c.instructions+=7;goto B6a0a11;
case 0x6a0a14:c.instructions+=6;goto B6a0a14;
case 0x6a0a17:c.instructions+=5;goto B6a0a17;
case 0x6a0a1d:c.instructions+=4;goto B6a0a1d;
case 0x6a0a1f:c.instructions+=3;goto B6a0a1f;
case 0x6a0a21:c.instructions+=2;goto B6a0a21;
case 0x6a0a24:c.instructions+=1;goto B6a0a24;
case 0x6a0a26:goto L6a0a26;
case 0x6a0a28:c.instructions+=1;goto B6a0a28;
case 0x6a0a2a:goto L6a0a2a;
case 0x6a0a2c:goto L6a0a2c;
case 0x6a0a2f:c.instructions+=1;goto B6a0a2f;
case 0x6a0a31:goto L6a0a31;
case 0x6a0a33:c.instructions+=2;goto B6a0a33;
case 0x6a0a35:c.instructions+=1;goto B6a0a35;
case 0x6a0a37:goto L6a0a37;
case 0x6a0a39:c.instructions+=1;goto B6a0a39;
case 0x6a0a3b:goto L6a0a3b;
case 0x6a0a3e:c.instructions+=2;goto B6a0a3e;
case 0x6a0a41:c.instructions+=1;goto B6a0a41;
case 0x6a0a43:goto L6a0a43;
case 0x6a0a46:c.instructions+=1;goto B6a0a46;
case 0x6a0a49:goto L6a0a49;
case 0x6a0a4c:c.instructions+=1;goto B6a0a4c;
case 0x6a0a4e:goto L6a0a4e;
case 0x6a0a51:c.instructions+=9;goto B6a0a51;
case 0x6a0a54:c.instructions+=8;goto B6a0a54;
case 0x6a0a57:c.instructions+=7;goto B6a0a57;
case 0x6a0a5a:c.instructions+=6;goto B6a0a5a;
case 0x6a0a5d:c.instructions+=5;goto B6a0a5d;
case 0x6a0a60:c.instructions+=4;goto B6a0a60;
case 0x6a0a63:c.instructions+=3;goto B6a0a63;
case 0x6a0a66:c.instructions+=2;goto B6a0a66;
case 0x6a0a67:c.instructions+=1;goto B6a0a67;
case 0x6a0a6a:goto L6a0a6a;
case 0x6a0a6d:c.instructions+=3;goto B6a0a6d;
case 0x6a0a70:c.instructions+=2;goto B6a0a70;
case 0x6a0a73:c.instructions+=1;goto B6a0a73;
case 0x6a0a79:goto L6a0a79;
case 0x6a0a7c:goto L6a0a7c;
case 0x6a0a7e:goto L6a0a7e;
case 0x6a0a80:c.instructions+=8;goto B6a0a80;
case 0x6a0a86:c.instructions+=7;goto B6a0a86;
case 0x6a0a88:c.instructions+=6;goto B6a0a88;
case 0x6a0a8e:c.instructions+=5;goto B6a0a8e;
case 0x6a0a90:c.instructions+=4;goto B6a0a90;
case 0x6a0a92:c.instructions+=3;goto B6a0a92;
case 0x6a0a94:c.instructions+=2;goto B6a0a94;
case 0x6a0a97:c.instructions+=1;goto B6a0a97;
case 0x6a0a9a:goto L6a0a9a;
case 0x6a0a9c:goto L6a0a9c;
case 0x6a0aa3:goto L6a0aa3;
case 0x6a0aa6:c.instructions+=3;goto B6a0aa6;
case 0x6a0aa9:c.instructions+=2;goto B6a0aa9;
case 0x6a0aac:c.instructions+=1;goto B6a0aac;
case 0x6a0ab2:goto L6a0ab2;
case 0x6a0ab6:c.instructions+=1;goto B6a0ab6;
case 0x6a0ab8:goto L6a0ab8;
case 0x6a0aba:c.instructions+=1;goto B6a0aba;
case 0x6a0abf:goto L6a0abf;
case 0x6a0ac1:c.instructions+=7;goto B6a0ac1;
case 0x6a0ac4:c.instructions+=6;goto B6a0ac4;
case 0x6a0ac5:c.instructions+=5;goto B6a0ac5;
case 0x6a0ac6:c.instructions+=4;goto B6a0ac6;
case 0x6a0ac9:c.instructions+=3;goto B6a0ac9;
case 0x6a0aca:c.instructions+=2;goto B6a0aca;
case 0x6a0acb:c.instructions+=1;goto B6a0acb;
case 0x6a0acc:goto L6a0acc;
case 0x6a0ace:c.instructions+=7;goto B6a0ace;
case 0x6a0acf:c.instructions+=6;goto B6a0acf;
case 0x6a0ad1:c.instructions+=5;goto B6a0ad1;
case 0x6a0ad4:c.instructions+=4;goto B6a0ad4;
case 0x6a0ad5:c.instructions+=3;goto B6a0ad5;
case 0x6a0ad7:c.instructions+=2;goto B6a0ad7;
case 0x6a0adb:c.instructions+=1;goto B6a0adb;
case 0x6a0ae1:goto L6a0ae1;
case 0x6a0ae5:c.instructions+=1;goto B6a0ae5;
case 0x6a0aea:goto L6a0aea;
case 0x6a0aed:c.instructions+=2;goto B6a0aed;
case 0x6a0aef:c.instructions+=1;goto B6a0aef;
case 0x6a0af5:goto L6a0af5;
case 0x6a0af6:c.instructions+=1;goto B6a0af6;
case 0x6a0af7:goto L6a0af7;
case 0x6a0afa:c.instructions+=7;goto B6a0afa;
case 0x6a0afb:c.instructions+=6;goto B6a0afb;
case 0x6a0afe:c.instructions+=5;goto B6a0afe;
case 0x6a0b01:c.instructions+=4;goto B6a0b01;
case 0x6a0b03:c.instructions+=3;goto B6a0b03;
case 0x6a0b08:c.instructions+=2;goto B6a0b08;
case 0x6a0b0d:c.instructions+=1;goto B6a0b0d;
case 0x6a0b0f:goto L6a0b0f;
case 0x6a0b14:c.instructions+=1;goto B6a0b14;
case 0x6a0b1a:goto L6a0b1a;
case 0x6a0b1e:c.instructions+=2;goto B6a0b1e;
case 0x6a0b22:c.instructions+=1;goto B6a0b22;
case 0x6a0b24:goto L6a0b24;
case 0x6a0b27:c.instructions+=2;goto B6a0b27;
case 0x6a0b2a:c.instructions+=1;goto B6a0b2a;
case 0x6a0b2d:goto L6a0b2d;
case 0x6a0b2f:c.instructions+=5;goto B6a0b2f;
case 0x6a0b32:c.instructions+=4;goto B6a0b32;
case 0x6a0b35:c.instructions+=3;goto B6a0b35;
case 0x6a0b38:c.instructions+=2;goto B6a0b38;
case 0x6a0b3c:c.instructions+=1;goto B6a0b3c;
case 0x6a0b3e:goto L6a0b3e;
case 0x6a0b41:c.instructions+=4;goto B6a0b41;
case 0x6a0b44:c.instructions+=3;goto B6a0b44;
case 0x6a0b47:c.instructions+=2;goto B6a0b47;
case 0x6a0b4a:c.instructions+=1;goto B6a0b4a;
case 0x6a0b4c:goto L6a0b4c;
case 0x6a0b4f:c.instructions+=2;goto B6a0b4f;
case 0x6a0b52:c.instructions+=1;goto B6a0b52;
case 0x6a0b58:goto L6a0b58;
case 0x6a0b5c:c.instructions+=2;goto B6a0b5c;
case 0x6a0b60:c.instructions+=1;goto B6a0b60;
case 0x6a0b62:goto L6a0b62;
case 0x6a0b65:c.instructions+=2;goto B6a0b65;
case 0x6a0b68:c.instructions+=1;goto B6a0b68;
case 0x6a0b6b:goto L6a0b6b;
case 0x6a0b6d:c.instructions+=5;goto B6a0b6d;
case 0x6a0b70:c.instructions+=4;goto B6a0b70;
case 0x6a0b73:c.instructions+=3;goto B6a0b73;
case 0x6a0b76:c.instructions+=2;goto B6a0b76;
case 0x6a0b7a:c.instructions+=1;goto B6a0b7a;
case 0x6a0b7c:goto L6a0b7c;
case 0x6a0b7f:c.instructions+=4;goto B6a0b7f;
case 0x6a0b82:c.instructions+=3;goto B6a0b82;
case 0x6a0b85:c.instructions+=2;goto B6a0b85;
case 0x6a0b88:c.instructions+=1;goto B6a0b88;
case 0x6a0b8a:goto L6a0b8a;
case 0x6a0b8d:c.instructions+=2;goto B6a0b8d;
case 0x6a0b90:c.instructions+=1;goto B6a0b90;
case 0x6a0b96:goto L6a0b96;
case 0x6a0b98:c.instructions+=8;goto B6a0b98;
case 0x6a0b9e:c.instructions+=7;goto B6a0b9e;
case 0x6a0ba0:c.instructions+=6;goto B6a0ba0;
case 0x6a0ba2:c.instructions+=5;goto B6a0ba2;
case 0x6a0ba6:c.instructions+=4;goto B6a0ba6;
case 0x6a0ba9:c.instructions+=3;goto B6a0ba9;
case 0x6a0bab:c.instructions+=2;goto B6a0bab;
case 0x6a0bae:c.instructions+=1;goto B6a0bae;
case 0x6a0bb4:goto L6a0bb4;
case 0x6a0bb8:goto L6a0bb8;
case 0x6a0bbc:c.instructions+=2;goto B6a0bbc;
case 0x6a0bbe:c.instructions+=1;goto B6a0bbe;
case 0x6a0bc4:goto L6a0bc4;
case 0x6a0bc7:c.instructions+=1;goto B6a0bc7;
case 0x6a0bca:goto L6a0bca;
case 0x6a0bcd:c.instructions+=9;goto B6a0bcd;
case 0x6a0bd0:c.instructions+=8;goto B6a0bd0;
case 0x6a0bd3:c.instructions+=7;goto B6a0bd3;
case 0x6a0bd6:c.instructions+=6;goto B6a0bd6;
case 0x6a0bd9:c.instructions+=5;goto B6a0bd9;
case 0x6a0bdc:c.instructions+=4;goto B6a0bdc;
case 0x6a0bdf:c.instructions+=3;goto B6a0bdf;
case 0x6a0be2:c.instructions+=2;goto B6a0be2;
case 0x6a0be4:c.instructions+=1;goto B6a0be4;
case 0x6a0be9:goto L6a0be9;
case 0x6a0bed:c.instructions+=4;goto B6a0bed;
case 0x6a0bf0:c.instructions+=3;goto B6a0bf0;
case 0x6a0bf3:c.instructions+=2;goto B6a0bf3;
case 0x6a0bf5:c.instructions+=1;goto B6a0bf5;
case 0x6a0bf7:goto L6a0bf7;
case 0x6a0bfa:c.instructions+=2;goto B6a0bfa;
case 0x6a0bfd:c.instructions+=1;goto B6a0bfd;
case 0x6a0c00:goto L6a0c00;
case 0x6a0c02:c.instructions+=3;goto B6a0c02;
case 0x6a0c05:c.instructions+=2;goto B6a0c05;
case 0x6a0c09:c.instructions+=1;goto B6a0c09;
case 0x6a0c0b:goto L6a0c0b;
case 0x6a0c0e:c.instructions+=2;goto B6a0c0e;
case 0x6a0c11:c.instructions+=1;goto B6a0c11;
case 0x6a0c13:goto L6a0c13;
case 0x6a0c17:c.instructions+=1;goto B6a0c17;
case 0x6a0c19:goto L6a0c19;
case 0x6a0c1c:c.instructions+=6;goto B6a0c1c;
case 0x6a0c1f:c.instructions+=5;goto B6a0c1f;
case 0x6a0c22:c.instructions+=4;goto B6a0c22;
case 0x6a0c25:c.instructions+=3;goto B6a0c25;
case 0x6a0c28:c.instructions+=2;goto B6a0c28;
case 0x6a0c2b:c.instructions+=1;goto B6a0c2b;
case 0x6a0c2d:goto L6a0c2d;
case 0x6a0c30:c.instructions+=5;goto B6a0c30;
case 0x6a0c33:c.instructions+=4;goto B6a0c33;
case 0x6a0c36:c.instructions+=3;goto B6a0c36;
case 0x6a0c39:c.instructions+=2;goto B6a0c39;
case 0x6a0c3c:c.instructions+=1;goto B6a0c3c;
case 0x6a0c3e:goto L6a0c3e;
case 0x6a0c41:c.instructions+=1;goto B6a0c41;
case 0x6a0c43:goto L6a0c43;
case 0x6a0c46:c.instructions+=4;goto B6a0c46;
case 0x6a0c49:c.instructions+=3;goto B6a0c49;
case 0x6a0c4d:c.instructions+=2;goto B6a0c4d;
case 0x6a0c50:c.instructions+=1;goto B6a0c50;
case 0x6a0c56:goto L6a0c56;
case 0x6a0c59:c.instructions+=2;goto B6a0c59;
case 0x6a0c5c:c.instructions+=1;goto B6a0c5c;
case 0x6a0c5e:goto L6a0c5e;
case 0x6a0c61:goto L6a0c61;
case 0x6a0c64:c.instructions+=6;goto B6a0c64;
case 0x6a0c66:c.instructions+=5;goto B6a0c66;
case 0x6a0c69:c.instructions+=4;goto B6a0c69;
case 0x6a0c6c:c.instructions+=3;goto B6a0c6c;
case 0x6a0c6f:c.instructions+=2;goto B6a0c6f;
case 0x6a0c72:c.instructions+=1;goto B6a0c72;
case 0x6a0c78:goto L6a0c78;
case 0x6a0c7b:c.instructions+=2;goto B6a0c7b;
case 0x6a0c7e:c.instructions+=1;goto B6a0c7e;
case 0x6a0c84:goto L6a0c84;
case 0x6a0c88:c.instructions+=2;goto B6a0c88;
case 0x6a0c8c:c.instructions+=1;goto B6a0c8c;
case 0x6a0c92:goto L6a0c92;
case 0x6a0c95:c.instructions+=8;goto B6a0c95;
case 0x6a0c98:c.instructions+=7;goto B6a0c98;
case 0x6a0c9b:c.instructions+=6;goto B6a0c9b;
case 0x6a0c9e:c.instructions+=5;goto B6a0c9e;
case 0x6a0ca1:c.instructions+=4;goto B6a0ca1;
case 0x6a0ca4:c.instructions+=3;goto B6a0ca4;
case 0x6a0ca7:c.instructions+=2;goto B6a0ca7;
case 0x6a0ca9:c.instructions+=1;goto B6a0ca9;
case 0x6a0caf:goto L6a0caf;
case 0x6a0cb2:c.instructions+=1;goto B6a0cb2;
case 0x6a0cb5:goto L6a0cb5;
case 0x6a0cb8:c.instructions+=15;goto B6a0cb8;
case 0x6a0cbb:c.instructions+=14;goto B6a0cbb;
case 0x6a0cbe:c.instructions+=13;goto B6a0cbe;
case 0x6a0cc1:c.instructions+=12;goto B6a0cc1;
case 0x6a0cc4:c.instructions+=11;goto B6a0cc4;
case 0x6a0cc6:c.instructions+=10;goto B6a0cc6;
case 0x6a0cc8:c.instructions+=9;goto B6a0cc8;
case 0x6a0cce:c.instructions+=8;goto B6a0cce;
case 0x6a0cd1:c.instructions+=7;goto B6a0cd1;
case 0x6a0cd3:c.instructions+=6;goto B6a0cd3;
case 0x6a0cd9:c.instructions+=5;goto B6a0cd9;
case 0x6a0cdf:c.instructions+=4;goto B6a0cdf;
case 0x6a0ce2:c.instructions+=3;goto B6a0ce2;
case 0x6a0ce5:c.instructions+=2;goto B6a0ce5;
case 0x6a0ce7:c.instructions+=1;goto B6a0ce7;
case 0x6a0ce9:goto L6a0ce9;
case 0x6a0cec:goto L6a0cec;
case 0x6a0cef:c.instructions+=12;goto B6a0cef;
case 0x6a0cf1:c.instructions+=11;goto B6a0cf1;
case 0x6a0cf5:c.instructions+=10;goto B6a0cf5;
case 0x6a0cf7:c.instructions+=9;goto B6a0cf7;
case 0x6a0cfa:c.instructions+=8;goto B6a0cfa;
case 0x6a0cfd:c.instructions+=7;goto B6a0cfd;
case 0x6a0d00:c.instructions+=6;goto B6a0d00;
case 0x6a0d03:c.instructions+=5;goto B6a0d03;
case 0x6a0d06:c.instructions+=4;goto B6a0d06;
case 0x6a0d09:c.instructions+=3;goto B6a0d09;
case 0x6a0d0c:c.instructions+=2;goto B6a0d0c;
case 0x6a0d0f:c.instructions+=1;goto B6a0d0f;
case 0x6a0d11:goto L6a0d11;
case 0x6a0d14:c.instructions+=3;goto B6a0d14;
case 0x6a0d17:c.instructions+=2;goto B6a0d17;
case 0x6a0d1a:c.instructions+=1;goto B6a0d1a;
case 0x6a0d1d:goto L6a0d1d;
case 0x6a0d20:c.instructions+=10;goto B6a0d20;
case 0x6a0d23:c.instructions+=9;goto B6a0d23;
case 0x6a0d26:c.instructions+=8;goto B6a0d26;
case 0x6a0d29:c.instructions+=7;goto B6a0d29;
case 0x6a0d2c:c.instructions+=6;goto B6a0d2c;
case 0x6a0d2f:c.instructions+=5;goto B6a0d2f;
case 0x6a0d32:c.instructions+=4;goto B6a0d32;
case 0x6a0d35:c.instructions+=3;goto B6a0d35;
case 0x6a0d38:c.instructions+=2;goto B6a0d38;
case 0x6a0d3b:c.instructions+=1;goto B6a0d3b;
case 0x6a0d41:goto L6a0d41;
case 0x6a0d44:c.instructions+=5;goto B6a0d44;
case 0x6a0d47:c.instructions+=4;goto B6a0d47;
case 0x6a0d4a:c.instructions+=3;goto B6a0d4a;
case 0x6a0d4d:c.instructions+=2;goto B6a0d4d;
case 0x6a0d50:c.instructions+=1;goto B6a0d50;
case 0x6a0d56:goto L6a0d56;
case 0x6a0d58:c.instructions+=4;goto B6a0d58;
case 0x6a0d5f:c.instructions+=3;goto B6a0d5f;
case 0x6a0d61:c.instructions+=2;goto B6a0d61;
case 0x6a0d64:c.instructions+=1;goto B6a0d64;
case 0x6a0d67:goto L6a0d67;
case 0x6a0d6a:c.instructions+=2;goto B6a0d6a;
case 0x6a0d6c:c.instructions+=1;goto B6a0d6c;
case 0x6a0d72:goto L6a0d72;
case 0x6a0d76:c.instructions+=3;goto B6a0d76;
case 0x6a0d77:c.instructions+=2;goto B6a0d77;
case 0x6a0d78:c.instructions+=1;goto B6a0d78;
case 0x6a0d7a:goto L6a0d7a;
case 0x6a0d7c:c.instructions+=2;goto B6a0d7c;
case 0x6a0d7d:c.instructions+=1;goto B6a0d7d;
case 0x6a0d7f:goto L6a0d7f;
case 0x6a0d81:goto L6a0d81;
case 0x6a0d82:c.instructions+=2;goto B6a0d82;
case 0x6a0d83:c.instructions+=1;goto B6a0d83;
case 0x6a0d84:goto L6a0d84;
case 0x6a0d86:c.instructions+=10;goto B6a0d86;
case 0x6a0d87:c.instructions+=9;goto B6a0d87;
case 0x6a0d89:c.instructions+=8;goto B6a0d89;
case 0x6a0d8a:c.instructions+=7;goto B6a0d8a;
case 0x6a0d8b:c.instructions+=6;goto B6a0d8b;
case 0x6a0d8c:c.instructions+=5;goto B6a0d8c;
case 0x6a0d8e:c.instructions+=4;goto B6a0d8e;
case 0x6a0d8f:c.instructions+=3;goto B6a0d8f;
case 0x6a0d91:c.instructions+=2;goto B6a0d91;
case 0x6a0d94:c.instructions+=1;goto B6a0d94;
case 0x6a0d99:goto L6a0d99;
case 0x6a0d9b:c.instructions+=2;goto B6a0d9b;
case 0x6a0d9e:c.instructions+=1;goto B6a0d9e;
case 0x6a0da0:goto L6a0da0;
case 0x6a0da3:c.instructions+=4;goto B6a0da3;
case 0x6a0da6:c.instructions+=3;goto B6a0da6;
case 0x6a0da9:c.instructions+=2;goto B6a0da9;
case 0x6a0dac:c.instructions+=1;goto B6a0dac;
case 0x6a0dae:goto L6a0dae;
case 0x6a0db2:c.instructions+=1;goto B6a0db2;
case 0x6a0db4:goto L6a0db4;
case 0x6a0db9:c.instructions+=2;goto B6a0db9;
case 0x6a0dbc:c.instructions+=1;goto B6a0dbc;
case 0x6a0dc3:goto L6a0dc3;
case 0x6a0dc4:c.instructions+=2;goto B6a0dc4;
case 0x6a0dc7:c.instructions+=1;goto B6a0dc7;
case 0x6a0dc9:goto L6a0dc9;
case 0x6a0dcb:c.instructions+=3;goto B6a0dcb;
case 0x6a0dcd:c.instructions+=2;goto B6a0dcd;
case 0x6a0dd0:c.instructions+=1;goto B6a0dd0;
case 0x6a0dd2:goto L6a0dd2;
case 0x6a0dd5:c.instructions+=7;goto B6a0dd5;
case 0x6a0dd8:c.instructions+=6;goto B6a0dd8;
case 0x6a0ddb:c.instructions+=5;goto B6a0ddb;
case 0x6a0dde:c.instructions+=4;goto B6a0dde;
case 0x6a0de1:c.instructions+=3;goto B6a0de1;
case 0x6a0de4:c.instructions+=2;goto B6a0de4;
case 0x6a0de7:c.instructions+=1;goto B6a0de7;
case 0x6a0de9:goto L6a0de9;
case 0x6a0dec:c.instructions+=1;goto B6a0dec;
case 0x6a0dee:goto L6a0dee;
case 0x6a0df5:goto L6a0df5;
case 0x6a0df9:c.instructions+=1;goto B6a0df9;
case 0x6a0dfb:goto L6a0dfb;
case 0x6a0dff:c.instructions+=1;goto B6a0dff;
case 0x6a0e01:goto L6a0e01;
case 0x6a0e05:c.instructions+=1;goto B6a0e05;
case 0x6a0e07:goto L6a0e07;
case 0x6a0e0a:c.instructions+=1;goto B6a0e0a;
case 0x6a0e0b:goto L6a0e0b;
case 0x6a0e0c:c.instructions+=2;goto B6a0e0c;
case 0x6a0e0f:c.instructions+=1;goto B6a0e0f;
case 0x6a0e11:goto L6a0e11;
case 0x6a0e13:goto L6a0e13;
case 0x6a0e16:c.instructions+=1;goto B6a0e16;
case 0x6a0e18:goto L6a0e18;
case 0x6a0e1a:c.instructions+=3;goto B6a0e1a;
case 0x6a0e1d:c.instructions+=2;goto B6a0e1d;
case 0x6a0e20:c.instructions+=1;goto B6a0e20;
case 0x6a0e22:goto L6a0e22;
case 0x6a0e24:c.instructions+=1;goto B6a0e24;
case 0x6a0e29:goto L6a0e29;
case 0x6a0e2b:c.instructions+=2;goto B6a0e2b;
case 0x6a0e2e:c.instructions+=1;goto B6a0e2e;
case 0x6a0e30:goto L6a0e30;
case 0x6a0e33:c.instructions+=3;goto B6a0e33;
case 0x6a0e36:c.instructions+=2;goto B6a0e36;
case 0x6a0e3a:c.instructions+=1;goto B6a0e3a;
case 0x6a0e3c:goto L6a0e3c;
case 0x6a0e40:c.instructions+=1;goto B6a0e40;
case 0x6a0e42:goto L6a0e42;
case 0x6a0e44:c.instructions+=1;goto B6a0e44;
case 0x6a0e49:goto L6a0e49;
case 0x6a0e4b:goto L6a0e4b;
case 0x6a0e4e:c.instructions+=1;goto B6a0e4e;
case 0x6a0e4f:goto L6a0e4f;
case 0x6a0e50:c.instructions+=2;goto B6a0e50;
case 0x6a0e53:c.instructions+=1;goto B6a0e53;
case 0x6a0e55:goto L6a0e55;
case 0x6a0e58:c.instructions+=7;goto B6a0e58;
case 0x6a0e5b:c.instructions+=6;goto B6a0e5b;
case 0x6a0e5d:c.instructions+=5;goto B6a0e5d;
case 0x6a0e60:c.instructions+=4;goto B6a0e60;
case 0x6a0e63:c.instructions+=3;goto B6a0e63;
case 0x6a0e65:c.instructions+=2;goto B6a0e65;
case 0x6a0e68:c.instructions+=1;goto B6a0e68;
case 0x6a0e6a:goto L6a0e6a;
case 0x6a0e6c:goto L6a0e6c;
case 0x6a0e6e:c.instructions+=1;goto B6a0e6e;
case 0x6a0e71:goto L6a0e71;
case 0x6a0e73:goto L6a0e73;
case 0x6a0e76:c.instructions+=1;goto B6a0e76;
case 0x6a0e78:goto L6a0e78;
case 0x6a0e79:c.instructions+=4;goto B6a0e79;
case 0x6a0e7a:c.instructions+=3;goto B6a0e7a;
case 0x6a0e7b:c.instructions+=2;goto B6a0e7b;
case 0x6a0e7c:c.instructions+=1;goto B6a0e7c;
case 0x6a0e7d:goto L6a0e7d;
case 0x6a0e7f:c.instructions+=8;goto B6a0e7f;
case 0x6a0e80:c.instructions+=7;goto B6a0e80;
case 0x6a0e82:c.instructions+=6;goto B6a0e82;
case 0x6a0e85:c.instructions+=5;goto B6a0e85;
case 0x6a0e86:c.instructions+=4;goto B6a0e86;
case 0x6a0e87:c.instructions+=3;goto B6a0e87;
case 0x6a0e88:c.instructions+=2;goto B6a0e88;
case 0x6a0e8a:c.instructions+=1;goto B6a0e8a;
case 0x6a0e8f:goto L6a0e8f;
case 0x6a0e91:c.instructions+=2;goto B6a0e91;
case 0x6a0e94:c.instructions+=1;goto B6a0e94;
case 0x6a0e96:goto L6a0e96;
case 0x6a0e99:c.instructions+=9;goto B6a0e99;
case 0x6a0e9c:c.instructions+=8;goto B6a0e9c;
case 0x6a0e9f:c.instructions+=7;goto B6a0e9f;
case 0x6a0ea2:c.instructions+=6;goto B6a0ea2;
case 0x6a0ea5:c.instructions+=5;goto B6a0ea5;
case 0x6a0ea8:c.instructions+=4;goto B6a0ea8;
case 0x6a0eab:c.instructions+=3;goto B6a0eab;
case 0x6a0eae:c.instructions+=2;goto B6a0eae;
case 0x6a0eb0:c.instructions+=1;goto B6a0eb0;
case 0x6a0eb2:goto L6a0eb2;
case 0x6a0eb5:c.instructions+=1;goto B6a0eb5;
case 0x6a0eb7:goto L6a0eb7;
case 0x6a0eba:c.instructions+=1;goto B6a0eba;
case 0x6a0ebc:goto L6a0ebc;
case 0x6a0ec0:c.instructions+=1;goto B6a0ec0;
case 0x6a0ec2:goto L6a0ec2;
case 0x6a0ec5:goto L6a0ec5;
case 0x6a0ec6:c.instructions+=2;goto B6a0ec6;
case 0x6a0ec9:c.instructions+=1;goto B6a0ec9;
case 0x6a0ecb:goto L6a0ecb;
case 0x6a0ecf:c.instructions+=2;goto B6a0ecf;
case 0x6a0ed3:c.instructions+=1;goto B6a0ed3;
case 0x6a0ed9:goto L6a0ed9;
case 0x6a0edc:c.instructions+=6;goto B6a0edc;
case 0x6a0edf:c.instructions+=5;goto B6a0edf;
case 0x6a0ee2:c.instructions+=4;goto B6a0ee2;
case 0x6a0ee4:c.instructions+=3;goto B6a0ee4;
case 0x6a0ee6:c.instructions+=2;goto B6a0ee6;
case 0x6a0eec:c.instructions+=1;goto B6a0eec;
case 0x6a0ef2:goto L6a0ef2;
case 0x6a0ef8:c.instructions+=1;goto B6a0ef8;
case 0x6a0efe:goto L6a0efe;
case 0x6a0f04:c.instructions+=1;goto B6a0f04;
case 0x6a0f0a:goto L6a0f0a;
case 0x6a0f10:c.instructions+=1;goto B6a0f10;
case 0x6a0f16:goto L6a0f16;
case 0x6a0f1b:c.instructions+=2;goto B6a0f1b;
case 0x6a0f20:c.instructions+=1;goto B6a0f20;
case 0x6a0f26:goto L6a0f26;
case 0x6a0f2c:c.instructions+=1;goto B6a0f2c;
case 0x6a0f32:goto L6a0f32;
case 0x6a0f38:c.instructions+=1;goto B6a0f38;
case 0x6a0f3e:goto L6a0f3e;
case 0x6a0f44:c.instructions+=1;goto B6a0f44;
case 0x6a0f4a:goto L6a0f4a;
case 0x6a0f4c:c.instructions+=2;goto B6a0f4c;
case 0x6a0f4f:c.instructions+=1;goto B6a0f4f;
case 0x6a0f51:goto L6a0f51;
case 0x6a0f54:c.instructions+=8;goto B6a0f54;
case 0x6a0f57:c.instructions+=7;goto B6a0f57;
case 0x6a0f5a:c.instructions+=6;goto B6a0f5a;
case 0x6a0f5d:c.instructions+=5;goto B6a0f5d;
case 0x6a0f60:c.instructions+=4;goto B6a0f60;
case 0x6a0f63:c.instructions+=3;goto B6a0f63;
case 0x6a0f66:c.instructions+=2;goto B6a0f66;
case 0x6a0f6a:c.instructions+=1;goto B6a0f6a;
case 0x6a0f6c:goto L6a0f6c;
case 0x6a0f6f:c.instructions+=2;goto B6a0f6f;
case 0x6a0f71:c.instructions+=1;goto B6a0f71;
case 0x6a0f76:goto L6a0f76;
case 0x6a0f78:c.instructions+=1;goto B6a0f78;
case 0x6a0f7a:goto L6a0f7a;
case 0x6a0f7d:c.instructions+=4;goto B6a0f7d;
case 0x6a0f80:c.instructions+=3;goto B6a0f80;
case 0x6a0f83:c.instructions+=2;goto B6a0f83;
case 0x6a0f86:c.instructions+=1;goto B6a0f86;
case 0x6a0f89:goto L6a0f89;
case 0x6a0f8a:c.instructions+=2;goto B6a0f8a;
case 0x6a0f8d:c.instructions+=1;goto B6a0f8d;
case 0x6a0f8f:goto L6a0f8f;
case 0x6a0f91:c.instructions+=4;goto B6a0f91;
case 0x6a0f93:c.instructions+=3;goto B6a0f93;
case 0x6a0f98:c.instructions+=2;goto B6a0f98;
case 0x6a0f9d:c.instructions+=1;goto B6a0f9d;
case 0x6a0fa3:goto L6a0fa3;
case 0x6a0fa8:c.instructions+=1;goto B6a0fa8;
case 0x6a0faa:goto L6a0faa;
case 0x6a0fad:c.instructions+=8;goto B6a0fad;
case 0x6a0fb3:c.instructions+=7;goto B6a0fb3;
case 0x6a0fb5:c.instructions+=6;goto B6a0fb5;
case 0x6a0fb7:c.instructions+=5;goto B6a0fb7;
case 0x6a0fbb:c.instructions+=4;goto B6a0fbb;
case 0x6a0fbe:c.instructions+=3;goto B6a0fbe;
case 0x6a0fc1:c.instructions+=2;goto B6a0fc1;
case 0x6a0fc3:c.instructions+=1;goto B6a0fc3;
case 0x6a0fc9:goto L6a0fc9;
case 0x6a0fcd:c.instructions+=2;goto B6a0fcd;
case 0x6a0fd1:c.instructions+=1;goto B6a0fd1;
case 0x6a0fd3:goto L6a0fd3;
case 0x6a0fd6:c.instructions+=5;goto B6a0fd6;
case 0x6a0fd9:c.instructions+=4;goto B6a0fd9;
case 0x6a0fdc:c.instructions+=3;goto B6a0fdc;
case 0x6a0fdf:c.instructions+=2;goto B6a0fdf;
case 0x6a0fe2:c.instructions+=1;goto B6a0fe2;
case 0x6a0fe4:goto L6a0fe4;
case 0x6a0fe6:c.instructions+=2;goto B6a0fe6;
case 0x6a0fe8:c.instructions+=1;goto B6a0fe8;
case 0x6a0fed:goto L6a0fed;
case 0x6a0fef:c.instructions+=1;goto B6a0fef;
case 0x6a0ff1:goto L6a0ff1;
case 0x6a0ff4:c.instructions+=4;goto B6a0ff4;
case 0x6a0ff7:c.instructions+=3;goto B6a0ff7;
case 0x6a0ffa:c.instructions+=2;goto B6a0ffa;
case 0x6a0ffd:c.instructions+=1;goto B6a0ffd;
case 0x6a0fff:goto L6a0fff;
default:missing_instruction(c.pc);}
B6a0002:L6a0002:{c.instructions+=6;NFSU2_TR(0x6a0002);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a0005:{NFSU2_TR(0x6a0005);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0008:{NFSU2_TR(0x6a0008);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a000b:{NFSU2_TR(0x6a000b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a000e:{NFSU2_TR(0x6a000e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a0011:{NFSU2_TR(0x6a0011);
if(r1(R+512)){TAIL_STATIC(0x69ff8bu,69f);}
}
B6a0017:L6a0017:{c.instructions+=8;NFSU2_TR(0x6a0017);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6a001a:{NFSU2_TR(0x6a001a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0021:{NFSU2_TR(0x6a0021);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0024:{NFSU2_TR(0x6a0024);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a0027:{NFSU2_TR(0x6a0027);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a002a:{NFSU2_TR(0x6a002a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a002d:{NFSU2_TR(0x6a002d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a0030:{NFSU2_TR(0x6a0030);
if(r1(R+512)){TAIL_STATIC(0x69fdfdu,69f);}
}
B6a0036:L6a0036:{c.instructions+=4;NFSU2_TR(0x6a0036);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a003a:{NFSU2_TR(0x6a003a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a003d:{NFSU2_TR(0x6a003d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a0040:{NFSU2_TR(0x6a0040);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x69fdcfu,69f);}
}
B6a0046:L6a0046:{c.instructions+=2;NFSU2_TR(0x6a0046);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a004a:{NFSU2_TR(0x6a004a);
if(r1(R+518)){{goto L6a008c;}}
}
B6a004c:L6a004c:{c.instructions+=3;NFSU2_TR(0x6a004c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a004e:{NFSU2_TR(0x6a004e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0051:{NFSU2_TR(0x6a0051);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a007b;}}
}
B6a0053:L6a0053:{c.instructions+=1;NFSU2_TR(0x6a0053);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0056:L6a0056:{c.instructions+=2;NFSU2_TR(0x6a0056);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a0059:{NFSU2_TR(0x6a0059);
{goto L6a006a;}
}
B6a005b:L6a005b:{c.instructions+=5;NFSU2_TR(0x6a005b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a005e:{NFSU2_TR(0x6a005e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a0061:{NFSU2_TR(0x6a0061);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0064:{NFSU2_TR(0x6a0064);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0067:{NFSU2_TR(0x6a0067);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a006a:L6a006a:{c.instructions+=4;NFSU2_TR(0x6a006a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a006d:{NFSU2_TR(0x6a006d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a0070:{NFSU2_TR(0x6a0070);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0073:{NFSU2_TR(0x6a0073);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a005bu);}goto L6a005b;}}
}
B6a0075:L6a0075:{c.instructions+=3;NFSU2_TR(0x6a0075);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6a0076:{NFSU2_TR(0x6a0076);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6a0079:{NFSU2_TR(0x6a0079);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0056u);}goto L6a0056;}}
}
B6a007b:L6a007b:{c.instructions+=2;NFSU2_TR(0x6a007b);
__builtin_memmove((R+4),(R+24),4);
}
B6a007d:{NFSU2_TR(0x6a007d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a0082ull));
TAIL_STATIC(0x69e7c4u,69e);
}
B6a0082:L6a0082:{c.instructions+=3;NFSU2_TR(0x6a0082);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0085:{NFSU2_TR(0x6a0085);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a0087:{NFSU2_TR(0x6a0087);
TAIL_STATIC(0x69fc27u,69f);
}
B6a008c:L6a008c:{c.instructions+=7;NFSU2_TR(0x6a008c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a008e:{NFSU2_TR(0x6a008e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0091:{NFSU2_TR(0x6a0091);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a0092:{NFSU2_TR(0x6a0092);
__builtin_memmove((R+0),(R+518),1);
}
B6a0095:{NFSU2_TR(0x6a0095);
__builtin_memmove((R+24),(R+0),4);
}
B6a0097:{NFSU2_TR(0x6a0097);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a009a:{NFSU2_TR(0x6a009a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a009full));
TAIL_STATIC(0x575630u,575);
}
B6a009f:L6a009f:{c.instructions+=6;NFSU2_TR(0x6a009f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a00a0:{NFSU2_TR(0x6a00a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a00a1:{NFSU2_TR(0x6a00a1);
__builtin_memmove((R+0),(R+24),4);
}
B6a00a3:{NFSU2_TR(0x6a00a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a00a4:{NFSU2_TR(0x6a00a4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6a00a5:{NFSU2_TR(0x6a00a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a00a6:L6a00a6:{c.instructions+=15;NFSU2_TR(0x6a00a6);
__builtin_memmove((R+28),(R+28),4);
}
B6a00a8:{NFSU2_TR(0x6a00a8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a00a9:{NFSU2_TR(0x6a00a9);
__builtin_memmove((R+20),(R+16),4);
}
B6a00ab:{NFSU2_TR(0x6a00ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B6a00ae:{NFSU2_TR(0x6a00ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a00af:{NFSU2_TR(0x6a00af);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a00b1:{NFSU2_TR(0x6a00b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a00b2:{NFSU2_TR(0x6a00b2);
__builtin_memmove((R+24),(R+4),4);
}
B6a00b4:{NFSU2_TR(0x6a00b4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a00b7:{NFSU2_TR(0x6a00b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a00b8:{NFSU2_TR(0x6a00b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a00bb:{NFSU2_TR(0x6a00bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a00be:{NFSU2_TR(0x6a00be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a00c1:{NFSU2_TR(0x6a00c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a00c4:{NFSU2_TR(0x6a00c4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a0391;}}
}
B6a00ca:L6a00ca:{c.instructions+=1;NFSU2_TR(0x6a00ca);
{goto L6a00ce;}
}
B6a00cc:L6a00cc:{c.instructions+=1;NFSU2_TR(0x6a00cc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a00ce:L6a00ce:{c.instructions+=6;NFSU2_TR(0x6a00ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a00d1:{NFSU2_TR(0x6a00d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a00d4:{NFSU2_TR(0x6a00d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a00d7:{NFSU2_TR(0x6a00d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a00da:{NFSU2_TR(0x6a00da);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a00dd:{NFSU2_TR(0x6a00dd);
if(r1(R+518)){{goto L6a037c;}}
}
B6a00e3:L6a00e3:{c.instructions+=3;NFSU2_TR(0x6a00e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a00e6:{NFSU2_TR(0x6a00e6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a00e9:{NFSU2_TR(0x6a00e9);
if(r1(R+518)){{goto L6a037c;}}
}
B6a00ef:L6a00ef:{c.instructions+=2;NFSU2_TR(0x6a00ef);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a00f2:{NFSU2_TR(0x6a00f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0102;}}
}
B6a00f4:L6a00f4:{c.instructions+=2;NFSU2_TR(0x6a00f4);
__builtin_memmove((R+4),(R+24),4);
}
B6a00f6:{NFSU2_TR(0x6a00f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a00fbull));
TAIL_STATIC(0x69e219u,69e);
}
B6a00fb:L6a00fb:{c.instructions+=1;NFSU2_TR(0x6a00fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0102:L6a0102:{c.instructions+=7;NFSU2_TR(0x6a0102);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a0104:{NFSU2_TR(0x6a0104);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0107:{NFSU2_TR(0x6a0107);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a010a:{NFSU2_TR(0x6a010a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a010d:{NFSU2_TR(0x6a010d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a0110:{NFSU2_TR(0x6a0110);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0113:{NFSU2_TR(0x6a0113);
if(r1(R+518)){{goto L6a0153;}}
}
B6a0115:L6a0115:{c.instructions+=6;NFSU2_TR(0x6a0115);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0118:{NFSU2_TR(0x6a0118);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a011b:{NFSU2_TR(0x6a011b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a011d:{NFSU2_TR(0x6a011d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6a0123:{NFSU2_TR(0x6a0123);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a0129:{NFSU2_TR(0x6a0129);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0153;}}
}
B6a012b:L6a012b:{c.instructions+=3;NFSU2_TR(0x6a012b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a012f:{NFSU2_TR(0x6a012f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0133:{NFSU2_TR(0x6a0133);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a014a;}}
}
B6a0135:L6a0135:{c.instructions+=1;NFSU2_TR(0x6a0135);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0138:L6a0138:{c.instructions+=2;NFSU2_TR(0x6a0138);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a013a:{NFSU2_TR(0x6a013a);
if(r1(R+518)){{goto L6a014a;}}
}
B6a013c:L6a013c:{c.instructions+=5;NFSU2_TR(0x6a013c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a013f:{NFSU2_TR(0x6a013f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a0142:{NFSU2_TR(0x6a0142);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6a0145:{NFSU2_TR(0x6a0145);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6a0148:{NFSU2_TR(0x6a0148);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0138u);}goto L6a0138;}}
}
B6a014a:L6a014a:{c.instructions+=3;NFSU2_TR(0x6a014a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a014d:{NFSU2_TR(0x6a014d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0150:{NFSU2_TR(0x6a0150);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6a0153:L6a0153:{c.instructions+=6;NFSU2_TR(0x6a0153);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a0157:{NFSU2_TR(0x6a0157);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a0159:{NFSU2_TR(0x6a0159);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a015c:{NFSU2_TR(0x6a015c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a015f:{NFSU2_TR(0x6a015f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0162:{NFSU2_TR(0x6a0162);
if(r1(R+518)){{goto L6a0168;}}
}
B6a0164:L6a0164:{c.instructions+=2;NFSU2_TR(0x6a0164);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a0166:{NFSU2_TR(0x6a0166);
{goto L6a016e;}
}
B6a0168:L6a0168:{c.instructions+=1;NFSU2_TR(0x6a0168);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a016e:L6a016e:{c.instructions+=7;NFSU2_TR(0x6a016e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0171:{NFSU2_TR(0x6a0171);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a0174:{NFSU2_TR(0x6a0174);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a0177:{NFSU2_TR(0x6a0177);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a017a:{NFSU2_TR(0x6a017a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a017d:{NFSU2_TR(0x6a017d);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a0180:{NFSU2_TR(0x6a0180);
if(r1(R+518)){{goto L6a0256;}}
}
B6a0186:L6a0186:{c.instructions+=2;NFSU2_TR(0x6a0186);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a018a:{NFSU2_TR(0x6a018a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0256;}}
}
B6a0190:L6a0190:{c.instructions+=3;NFSU2_TR(0x6a0190);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a0193:{NFSU2_TR(0x6a0193);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B6a0196:{NFSU2_TR(0x6a0196);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a019bull));
TAIL_STATIC(0x75dd28u,75d);
}
B6a019b:L6a019b:{c.instructions+=6;NFSU2_TR(0x6a019b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a019e:{NFSU2_TR(0x6a019e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a01a2:{NFSU2_TR(0x6a01a2);
__builtin_memmove((R+28),(R+0),4);
}
B6a01a4:{NFSU2_TR(0x6a01a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B6a01a7:{NFSU2_TR(0x6a01a7);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a01a9:{NFSU2_TR(0x6a01a9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a0211;}}
}
B6a01ab:L6a01ab:{c.instructions+=2;NFSU2_TR(0x6a01ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a01ae:{NFSU2_TR(0x6a01ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a01b1:L6a01b1:{c.instructions+=3;NFSU2_TR(0x6a01b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a01b4:{NFSU2_TR(0x6a01b4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a01b7:{NFSU2_TR(0x6a01b7);
if(r1(R+518)){{goto L6a01e9;}}
}
B6a01b9:L6a01b9:{c.instructions+=5;NFSU2_TR(0x6a01b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a01bc:{NFSU2_TR(0x6a01bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a01be:{NFSU2_TR(0x6a01be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a01c1:{NFSU2_TR(0x6a01c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a01c4:{NFSU2_TR(0x6a01c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a01e9;}}
}
B6a01c6:L6a01c6:{c.instructions+=2;NFSU2_TR(0x6a01c6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a01ca:{NFSU2_TR(0x6a01ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a01e9;}}
}
B6a01cc:L6a01cc:{c.instructions+=2;NFSU2_TR(0x6a01cc);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a01cf:{NFSU2_TR(0x6a01cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a01e9;}}
}
B6a01d1:L6a01d1:{c.instructions+=3;NFSU2_TR(0x6a01d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a01d4:{NFSU2_TR(0x6a01d4);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a01d7:{NFSU2_TR(0x6a01d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a01e9;}}
}
B6a01d9:L6a01d9:{c.instructions+=3;NFSU2_TR(0x6a01d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a01dc:{NFSU2_TR(0x6a01dc);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a01df:{NFSU2_TR(0x6a01df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a01e9;}}
}
B6a01e1:L6a01e1:{c.instructions+=3;NFSU2_TR(0x6a01e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a01e4:{NFSU2_TR(0x6a01e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a01e7:{NFSU2_TR(0x6a01e7);
if(r1(R+518)){{goto L6a01f7;}}
}
B6a01e9:L6a01e9:{c.instructions+=4;NFSU2_TR(0x6a01e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a01ec:{NFSU2_TR(0x6a01ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a01f0:{NFSU2_TR(0x6a01f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B6a01f3:{NFSU2_TR(0x6a01f3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a01b1u);}goto L6a01b1;}}
}
B6a01f5:L6a01f5:{c.instructions+=1;NFSU2_TR(0x6a01f5);
{goto L6a0211;}
}
B6a01f7:L6a01f7:{c.instructions+=2;NFSU2_TR(0x6a01f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a01fb:{NFSU2_TR(0x6a01fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a020b;}}
}
B6a01fd:L6a01fd:{c.instructions+=2;NFSU2_TR(0x6a01fd);
__builtin_memmove((R+4),(R+24),4);
}
B6a01ff:{NFSU2_TR(0x6a01ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a0204ull));
TAIL_STATIC(0x69e7abu,69e);
}
B6a0204:L6a0204:{c.instructions+=1;NFSU2_TR(0x6a0204);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a020b:L6a020b:{c.instructions+=2;NFSU2_TR(0x6a020b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a020e:{NFSU2_TR(0x6a020e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0211:L6a0211:{c.instructions+=3;NFSU2_TR(0x6a0211);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0214:{NFSU2_TR(0x6a0214);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0217:{NFSU2_TR(0x6a0217);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0375;}}
}
B6a021d:L6a021d:{c.instructions+=7;NFSU2_TR(0x6a021d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0221:{NFSU2_TR(0x6a0221);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0224:{NFSU2_TR(0x6a0224);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0227:{NFSU2_TR(0x6a0227);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a022a:{NFSU2_TR(0x6a022a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a022d:{NFSU2_TR(0x6a022d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6a0230:{NFSU2_TR(0x6a0230);
if(r1(R+512)){{goto L6a0375;}}
}
B6a0236:L6a0236:{c.instructions+=5;NFSU2_TR(0x6a0236);
u8 U[4];
w4(U+0,u32(0x7b43e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a023b:{NFSU2_TR(0x6a023b);
u8 U[4];
w4(U+0,u32(0xfa7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a0240:{NFSU2_TR(0x6a0240);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a0243:{NFSU2_TR(0x6a0243);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a0244:{NFSU2_TR(0x6a0244);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a0249ull));
TAIL_STATIC(0x69e936u,69e);
}
B6a0249:L6a0249:{c.instructions+=3;NFSU2_TR(0x6a0249);
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
B6a024c:{NFSU2_TR(0x6a024c);
w4(R+0,u32(0x80004005ull));
}
B6a0251:{NFSU2_TR(0x6a0251);
{goto L6a03a5;}
}
B6a0256:L6a0256:{c.instructions+=2;NFSU2_TR(0x6a0256);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a0259:{NFSU2_TR(0x6a0259);
if(r1(R+518)){{goto L6a037c;}}
}
B6a025f:L6a025f:{c.instructions+=3;NFSU2_TR(0x6a025f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0262:{NFSU2_TR(0x6a0262);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a0265:{NFSU2_TR(0x6a0265);
if(r1(R+518)){{goto L6a037c;}}
}
B6a026b:L6a026b:{c.instructions+=6;NFSU2_TR(0x6a026b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a026e:{NFSU2_TR(0x6a026e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a0271:{NFSU2_TR(0x6a0271);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a0273:{NFSU2_TR(0x6a0273);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6a0279:{NFSU2_TR(0x6a0279);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a027f:{NFSU2_TR(0x6a027f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a037c;}}
}
B6a0285:L6a0285:{c.instructions+=4;NFSU2_TR(0x6a0285);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a0288:{NFSU2_TR(0x6a0288);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a028a:{NFSU2_TR(0x6a028a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a028c:{NFSU2_TR(0x6a028c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a029d;}}
}
B6a028e:L6a028e:{c.instructions+=1;NFSU2_TR(0x6a028e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0291:L6a0291:{c.instructions+=2;NFSU2_TR(0x6a0291);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a0293:{NFSU2_TR(0x6a0293);
if(r1(R+518)){{goto L6a029d;}}
}
B6a0295:L6a0295:{c.instructions+=4;NFSU2_TR(0x6a0295);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6a0296:{NFSU2_TR(0x6a0296);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6a0299:{NFSU2_TR(0x6a0299);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B6a029b:{NFSU2_TR(0x6a029b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0291u);}goto L6a0291;}}
}
B6a029d:L6a029d:{c.instructions+=13;NFSU2_TR(0x6a029d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a02a0:{NFSU2_TR(0x6a02a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a02a3:{NFSU2_TR(0x6a02a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a02a6:{NFSU2_TR(0x6a02a6);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B6a02a8:{NFSU2_TR(0x6a02a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a02ab:{NFSU2_TR(0x6a02ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a02ae:{NFSU2_TR(0x6a02ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a02b1:{NFSU2_TR(0x6a02b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a02b4:{NFSU2_TR(0x6a02b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a02b7:{NFSU2_TR(0x6a02b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a02ba:{NFSU2_TR(0x6a02ba);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a02be:{NFSU2_TR(0x6a02be);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a02c1:{NFSU2_TR(0x6a02c1);
if(r1(R+518)){{goto L6a02ec;}}
}
B6a02c3:L6a02c3:{c.instructions+=2;NFSU2_TR(0x6a02c3);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a02c7:{NFSU2_TR(0x6a02c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a02ec;}}
}
B6a02c9:L6a02c9:{c.instructions+=3;NFSU2_TR(0x6a02c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a02cb:{NFSU2_TR(0x6a02cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a02ce:{NFSU2_TR(0x6a02ce);
if(r1(R+518)){{goto L6a02ec;}}
}
B6a02d0:L6a02d0:{c.instructions+=2;NFSU2_TR(0x6a02d0);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a02d3:{NFSU2_TR(0x6a02d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a02da;}}
}
B6a02d5:L6a02d5:{c.instructions+=2;NFSU2_TR(0x6a02d5);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6a02d8:{NFSU2_TR(0x6a02d8);
if(r1(R+518)){{goto L6a02ec;}}
}
B6a02da:L6a02da:{c.instructions+=3;NFSU2_TR(0x6a02da);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a02dd:{NFSU2_TR(0x6a02dd);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B6a02e0:{NFSU2_TR(0x6a02e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a02e5ull));
TAIL_STATIC(0x75dd28u,75d);
}
B6a02e5:L6a02e5:{c.instructions+=3;NFSU2_TR(0x6a02e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a02e8:{NFSU2_TR(0x6a02e8);
__builtin_memmove((R+0),(R+28),4);
}
B6a02ea:{NFSU2_TR(0x6a02ea);
{goto L6a0322;}
}
B6a02ec:L6a02ec:{c.instructions+=4;NFSU2_TR(0x6a02ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a02ef:{NFSU2_TR(0x6a02ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a02f2:{NFSU2_TR(0x6a02f2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a02f6:{NFSU2_TR(0x6a02f6);
if(r1(R+518)){{goto L6a037c;}}
}
B6a02fc:L6a02fc:{c.instructions+=2;NFSU2_TR(0x6a02fc);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0300:{NFSU2_TR(0x6a0300);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a037c;}}
}
B6a0302:L6a0302:{c.instructions+=3;NFSU2_TR(0x6a0302);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a0304:{NFSU2_TR(0x6a0304);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a0306:{NFSU2_TR(0x6a0306);
if(r1(R+518)){{goto L6a037c;}}
}
B6a0308:L6a0308:{c.instructions+=2;NFSU2_TR(0x6a0308);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6a030b:{NFSU2_TR(0x6a030b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0311;}}
}
B6a030d:L6a030d:{c.instructions+=2;NFSU2_TR(0x6a030d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a030f:{NFSU2_TR(0x6a030f);
if(r1(R+518)){{goto L6a037c;}}
}
B6a0311:L6a0311:{c.instructions+=3;NFSU2_TR(0x6a0311);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a0314:{NFSU2_TR(0x6a0314);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B6a0317:{NFSU2_TR(0x6a0317);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a031cull));
TAIL_STATIC(0x75dd28u,75d);
}
B6a031c:L6a031c:{c.instructions+=2;NFSU2_TR(0x6a031c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a031f:{NFSU2_TR(0x6a031f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0322:L6a0322:{c.instructions+=7;NFSU2_TR(0x6a0322);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a0325:{NFSU2_TR(0x6a0325);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a0327:{NFSU2_TR(0x6a0327);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a032a:{NFSU2_TR(0x6a032a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a032c:{NFSU2_TR(0x6a032c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a032e:{NFSU2_TR(0x6a032e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0331:{NFSU2_TR(0x6a0331);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0354;}}
}
B6a0333:L6a0333:{c.instructions+=2;NFSU2_TR(0x6a0333);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0336:{NFSU2_TR(0x6a0336);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a0375;}}
}
B6a0338:L6a0338:{c.instructions+=4;NFSU2_TR(0x6a0338);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a033b:{NFSU2_TR(0x6a033b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a033e:{NFSU2_TR(0x6a033e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0341:{NFSU2_TR(0x6a0341);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a034c;}}
}
B6a0343:L6a0343:{c.instructions+=3;NFSU2_TR(0x6a0343);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a0346:{NFSU2_TR(0x6a0346);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0349:{NFSU2_TR(0x6a0349);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a034c:L6a034c:{c.instructions+=3;NFSU2_TR(0x6a034c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a034d:{NFSU2_TR(0x6a034d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6a0350:{NFSU2_TR(0x6a0350);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0338u);}goto L6a0338;}}
}
B6a0352:L6a0352:{c.instructions+=1;NFSU2_TR(0x6a0352);
{goto L6a0375;}
}
B6a0354:L6a0354:{c.instructions+=2;NFSU2_TR(0x6a0354);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0357:{NFSU2_TR(0x6a0357);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a0373;}}
}
B6a0359:L6a0359:{c.instructions+=4;NFSU2_TR(0x6a0359);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a035c:{NFSU2_TR(0x6a035c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a035f:{NFSU2_TR(0x6a035f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0362:{NFSU2_TR(0x6a0362);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a036d;}}
}
B6a0364:L6a0364:{c.instructions+=3;NFSU2_TR(0x6a0364);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0367:{NFSU2_TR(0x6a0367);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a036a:{NFSU2_TR(0x6a036a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a036d:L6a036d:{c.instructions+=3;NFSU2_TR(0x6a036d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a036e:{NFSU2_TR(0x6a036e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6a0371:{NFSU2_TR(0x6a0371);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0359u);}goto L6a0359;}}
}
B6a0373:L6a0373:{c.instructions+=1;NFSU2_TR(0x6a0373);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6a0375:L6a0375:{c.instructions+=1;NFSU2_TR(0x6a0375);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a037c:L6a037c:{c.instructions+=4;NFSU2_TR(0x6a037c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a037f:{NFSU2_TR(0x6a037f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0382:{NFSU2_TR(0x6a0382);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a0385:{NFSU2_TR(0x6a0385);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a00ccu);}goto L6a00cc;}}
}
B6a038b:L6a038b:{c.instructions+=2;NFSU2_TR(0x6a038b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a038f:{NFSU2_TR(0x6a038f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0396;}}
}
B6a0391:L6a0391:{c.instructions+=3;NFSU2_TR(0x6a0391);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a0393:{NFSU2_TR(0x6a0393);
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
B6a0394:{NFSU2_TR(0x6a0394);
{goto L6a03a5;}
}
B6a0396:L6a0396:{c.instructions+=2;NFSU2_TR(0x6a0396);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a039a:{NFSU2_TR(0x6a039a);
if(r1(R+518)){{goto L6a03a3;}}
}
B6a039c:L6a039c:{c.instructions+=2;NFSU2_TR(0x6a039c);
__builtin_memmove((R+4),(R+24),4);
}
B6a039e:{NFSU2_TR(0x6a039e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a03a3ull));
TAIL_STATIC(0x69e7c4u,69e);
}
B6a03a3:L6a03a3:{c.instructions+=1;NFSU2_TR(0x6a03a3);
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
B6a03a5:L6a03a5:{c.instructions+=5;NFSU2_TR(0x6a03a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a03a6:{NFSU2_TR(0x6a03a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a03a7:{NFSU2_TR(0x6a03a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a03a8:{NFSU2_TR(0x6a03a8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6a03a9:{NFSU2_TR(0x6a03a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a03aa:L6a03aa:{c.instructions+=10;NFSU2_TR(0x6a03aa);
__builtin_memmove((R+28),(R+28),4);
}
B6a03ac:{NFSU2_TR(0x6a03ac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a03ad:{NFSU2_TR(0x6a03ad);
__builtin_memmove((R+20),(R+16),4);
}
B6a03af:{NFSU2_TR(0x6a03af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B6a03b2:{NFSU2_TR(0x6a03b2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a03b3:{NFSU2_TR(0x6a03b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a03b4:{NFSU2_TR(0x6a03b4);
__builtin_memmove((R+24),(R+4),4);
}
B6a03b6:{NFSU2_TR(0x6a03b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a03b7:{NFSU2_TR(0x6a03b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a03ba:{NFSU2_TR(0x6a03ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a03bfull));
TAIL_STATIC(0x69e219u,69e);
}
B6a03bf:L6a03bf:{c.instructions+=7;NFSU2_TR(0x6a03bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a03c3:{NFSU2_TR(0x6a03c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a03c7:{NFSU2_TR(0x6a03c7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a03c9:{NFSU2_TR(0x6a03c9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a03cc:{NFSU2_TR(0x6a03cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a03cf:{NFSU2_TR(0x6a03cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a03d2:{NFSU2_TR(0x6a03d2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a060e;}}
}
B6a03d8:L6a03d8:{c.instructions+=6;NFSU2_TR(0x6a03d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a03db:{NFSU2_TR(0x6a03db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a03de:{NFSU2_TR(0x6a03de);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a03e1:{NFSU2_TR(0x6a03e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a03e3:{NFSU2_TR(0x6a03e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a03e9:{NFSU2_TR(0x6a03e9);
if(r1(R+518)){{goto L6a05ff;}}
}
B6a03ef:L6a03ef:{c.instructions+=4;NFSU2_TR(0x6a03ef);
__builtin_memmove((R+0),(R+4),4);
}
B6a03f1:{NFSU2_TR(0x6a03f1);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
}
B6a03f6:{NFSU2_TR(0x6a03f6);
w1(R+512,u8((r4(R+0))<(u32(0x10000000ull))));
}
B6a03fb:{NFSU2_TR(0x6a03fb);
if(r1(R+512)){{goto L6a05ff;}}
}
B6a0401:L6a0401:{c.instructions+=2;NFSU2_TR(0x6a0401);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x40000000ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a0406:{NFSU2_TR(0x6a0406);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6a05ff;}}
}
B6a040c:L6a040c:{c.instructions+=8;NFSU2_TR(0x6a040c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a040f:{NFSU2_TR(0x6a040f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6a0415:{NFSU2_TR(0x6a0415);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a0417:{NFSU2_TR(0x6a0417);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a0417);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a0417);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6a0419:{NFSU2_TR(0x6a0419);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a041c:{NFSU2_TR(0x6a041c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a041e:{NFSU2_TR(0x6a041e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0421:{NFSU2_TR(0x6a0421);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a05ff;}}
}
B6a0427:L6a0427:{c.instructions+=5;NFSU2_TR(0x6a0427);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a042a:{NFSU2_TR(0x6a042a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a042c:{NFSU2_TR(0x6a042c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a042f:{NFSU2_TR(0x6a042f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0432:{NFSU2_TR(0x6a0432);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a051c;}}
}
B6a0438:L6a0438:{c.instructions+=14;NFSU2_TR(0x6a0438);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6a043c:{NFSU2_TR(0x6a043c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a043f:{NFSU2_TR(0x6a043f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0442:{NFSU2_TR(0x6a0442);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a0445:{NFSU2_TR(0x6a0445);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6a0447:{NFSU2_TR(0x6a0447);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a044a:{NFSU2_TR(0x6a044a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a044d:{NFSU2_TR(0x6a044d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a0450:{NFSU2_TR(0x6a0450);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a0453:{NFSU2_TR(0x6a0453);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a0456:{NFSU2_TR(0x6a0456);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6a0459:{NFSU2_TR(0x6a0459);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a045c:{NFSU2_TR(0x6a045c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a045f:{NFSU2_TR(0x6a045f);
if(r1(R+518)){{goto L6a050b;}}
}
B6a0465:L6a0465:{c.instructions+=4;NFSU2_TR(0x6a0465);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0468:{NFSU2_TR(0x6a0468);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a046b:{NFSU2_TR(0x6a046b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a046e:{NFSU2_TR(0x6a046e);
{goto L6a04f6;}
}
B6a0473:L6a0473:{c.instructions+=10;NFSU2_TR(0x6a0473);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0476:{NFSU2_TR(0x6a0476);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a047a:{NFSU2_TR(0x6a047a);
__builtin_memmove((R+28),(R+4),4);
}
B6a047c:{NFSU2_TR(0x6a047c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6a047f:{NFSU2_TR(0x6a047f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a0482:{NFSU2_TR(0x6a0482);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0485:{NFSU2_TR(0x6a0485);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0488:{NFSU2_TR(0x6a0488);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a048b:{NFSU2_TR(0x6a048b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a048f:{NFSU2_TR(0x6a048f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a04ad;}}
}
B6a0491:L6a0491:{c.instructions+=2;NFSU2_TR(0x6a0491);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0494:{NFSU2_TR(0x6a0494);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0497:L6a0497:{c.instructions+=3;NFSU2_TR(0x6a0497);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a049a:{NFSU2_TR(0x6a049a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a049c:{NFSU2_TR(0x6a049c);
if(r1(R+518)){{goto L6a04ad;}}
}
B6a049e:L6a049e:{c.instructions+=5;NFSU2_TR(0x6a049e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a04a1:{NFSU2_TR(0x6a04a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a04a4:{NFSU2_TR(0x6a04a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a04a8:{NFSU2_TR(0x6a04a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6a04ab:{NFSU2_TR(0x6a04ab);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0497u);}goto L6a0497;}}
}
B6a04ad:L6a04ad:{c.instructions+=4;NFSU2_TR(0x6a04ad);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a04b1:{NFSU2_TR(0x6a04b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a04b4:{NFSU2_TR(0x6a04b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a04b7:{NFSU2_TR(0x6a04b7);
if(r1(R+518)){{goto L6a04d6;}}
}
B6a04b9:L6a04b9:{c.instructions+=4;NFSU2_TR(0x6a04b9);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6a04bc:{NFSU2_TR(0x6a04bc);
__builtin_memmove((R+4),(R+24),4);
}
B6a04be:{NFSU2_TR(0x6a04be);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a04c1:{NFSU2_TR(0x6a04c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a04c6ull));
TAIL_STATIC(0x69b2fdu,69b);
}
B6a04c6:L6a04c6:{c.instructions+=2;NFSU2_TR(0x6a04c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a04c8:{NFSU2_TR(0x6a04c8);
if(r1(R+518)){{goto L6a04e7;}}
}
B6a04ca:L6a04ca:{c.instructions+=3;NFSU2_TR(0x6a04ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a04cd:{NFSU2_TR(0x6a04cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a04d4:{NFSU2_TR(0x6a04d4);
{goto L6a0508;}
}
B6a04d6:L6a04d6:{c.instructions+=4;NFSU2_TR(0x6a04d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a04d9:{NFSU2_TR(0x6a04d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6a04dc:{NFSU2_TR(0x6a04dc);
__builtin_memmove((R+4),(R+24),4);
}
B6a04de:{NFSU2_TR(0x6a04de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a04e3ull));
TAIL_STATIC(0x69b2fdu,69b);
}
B6a04e3:L6a04e3:{c.instructions+=2;NFSU2_TR(0x6a04e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a04e5:{NFSU2_TR(0x6a04e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0501;}}
}
B6a04e7:L6a04e7:{c.instructions+=5;NFSU2_TR(0x6a04e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a04ea:{NFSU2_TR(0x6a04ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a04ed:{NFSU2_TR(0x6a04ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a04f0:{NFSU2_TR(0x6a04f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a04f3:{NFSU2_TR(0x6a04f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a04f6:L6a04f6:{c.instructions+=2;NFSU2_TR(0x6a04f6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a04f9:{NFSU2_TR(0x6a04f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0473u);}goto L6a0473;}}
}
B6a04ff:L6a04ff:{c.instructions+=1;NFSU2_TR(0x6a04ff);
{goto L6a050b;}
}
B6a0501:L6a0501:{c.instructions+=2;NFSU2_TR(0x6a0501);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0504:{NFSU2_TR(0x6a0504);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0508:L6a0508:{c.instructions+=1;NFSU2_TR(0x6a0508);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a050b:L6a050b:{c.instructions+=4;NFSU2_TR(0x6a050b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a050e:{NFSU2_TR(0x6a050e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0511:{NFSU2_TR(0x6a0511);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6a0514:{NFSU2_TR(0x6a0514);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0438u);}goto L6a0438;}}
}
B6a051a:L6a051a:{c.instructions+=1;NFSU2_TR(0x6a051a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a051c:L6a051c:{c.instructions+=3;NFSU2_TR(0x6a051c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a051f:{NFSU2_TR(0x6a051f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0522:{NFSU2_TR(0x6a0522);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a05f0;}}
}
B6a0528:L6a0528:{c.instructions+=2;NFSU2_TR(0x6a0528);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a052a:{NFSU2_TR(0x6a052a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a05ee;}}
}
B6a0530:L6a0530:{c.instructions+=14;NFSU2_TR(0x6a0530);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6a0534:{NFSU2_TR(0x6a0534);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0537:{NFSU2_TR(0x6a0537);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a053a:{NFSU2_TR(0x6a053a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6a053c:{NFSU2_TR(0x6a053c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a053f:{NFSU2_TR(0x6a053f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0542:{NFSU2_TR(0x6a0542);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a0545:{NFSU2_TR(0x6a0545);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a0548:{NFSU2_TR(0x6a0548);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a054b:{NFSU2_TR(0x6a054b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a054f:{NFSU2_TR(0x6a054f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0552:{NFSU2_TR(0x6a0552);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0555:{NFSU2_TR(0x6a0555);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a0558:{NFSU2_TR(0x6a0558);
if(r1(R+518)){{goto L6a0594;}}
}
B6a055a:L6a055a:{c.instructions+=2;NFSU2_TR(0x6a055a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a055e:{NFSU2_TR(0x6a055e);
if(r1(R+518)){{goto L6a0572;}}
}
B6a0560:L6a0560:{c.instructions+=6;NFSU2_TR(0x6a0560);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a0563:{NFSU2_TR(0x6a0563);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a0569:{NFSU2_TR(0x6a0569);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a056b:{NFSU2_TR(0x6a056b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a056d:{NFSU2_TR(0x6a056d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a0570:{NFSU2_TR(0x6a0570);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a05e2;}}
}
B6a0572:L6a0572:{c.instructions+=3;NFSU2_TR(0x6a0572);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0575:{NFSU2_TR(0x6a0575);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a0578:{NFSU2_TR(0x6a0578);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a05cc;}}
}
B6a057a:L6a057a:{c.instructions+=9;NFSU2_TR(0x6a057a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a057b:{NFSU2_TR(0x6a057b);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6a057d:{NFSU2_TR(0x6a057d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a057e:{NFSU2_TR(0x6a057e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a0581:{NFSU2_TR(0x6a0581);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a0583:{NFSU2_TR(0x6a0583);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a0585:{NFSU2_TR(0x6a0585);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a0588:{NFSU2_TR(0x6a0588);
__builtin_memmove((R+4),(R+24),4);
}
B6a058a:{NFSU2_TR(0x6a058a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a058full));
TAIL_STATIC(0x699c39u,699);
}
B6a058f:L6a058f:{c.instructions+=2;NFSU2_TR(0x6a058f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0592:{NFSU2_TR(0x6a0592);
{goto L6a05cc;}
}
B6a0594:L6a0594:{c.instructions+=2;NFSU2_TR(0x6a0594);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a0598:{NFSU2_TR(0x6a0598);
if(r1(R+518)){{goto L6a05ac;}}
}
B6a059a:L6a059a:{c.instructions+=6;NFSU2_TR(0x6a059a);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a059d:{NFSU2_TR(0x6a059d);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a05a3:{NFSU2_TR(0x6a05a3);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a05a5:{NFSU2_TR(0x6a05a5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a05a7:{NFSU2_TR(0x6a05a7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a05aa:{NFSU2_TR(0x6a05aa);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a05e2;}}
}
B6a05ac:L6a05ac:{c.instructions+=3;NFSU2_TR(0x6a05ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a05af:{NFSU2_TR(0x6a05af);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a05b2:{NFSU2_TR(0x6a05b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a05cc;}}
}
B6a05b4:L6a05b4:{c.instructions+=9;NFSU2_TR(0x6a05b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a05b5:{NFSU2_TR(0x6a05b5);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a05b7:{NFSU2_TR(0x6a05b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a05b8:{NFSU2_TR(0x6a05b8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a05bb:{NFSU2_TR(0x6a05bb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a05bd:{NFSU2_TR(0x6a05bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a05bf:{NFSU2_TR(0x6a05bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a05c2:{NFSU2_TR(0x6a05c2);
__builtin_memmove((R+4),(R+24),4);
}
B6a05c4:{NFSU2_TR(0x6a05c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a05c9ull));
TAIL_STATIC(0x699c39u,699);
}
B6a05c9:L6a05c9:{c.instructions+=1;NFSU2_TR(0x6a05c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a05cc:L6a05cc:{c.instructions+=6;NFSU2_TR(0x6a05cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a05cf:{NFSU2_TR(0x6a05cf);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B6a05d3:{NFSU2_TR(0x6a05d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a05d6:{NFSU2_TR(0x6a05d6);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6a05d8:{NFSU2_TR(0x6a05d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a05db:{NFSU2_TR(0x6a05db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a05e2:L6a05e2:{c.instructions+=4;NFSU2_TR(0x6a05e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a05e5:{NFSU2_TR(0x6a05e5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6a05e6:{NFSU2_TR(0x6a05e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B6a05e8:{NFSU2_TR(0x6a05e8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0530u);}goto L6a0530;}}
}
B6a05ee:L6a05ee:{c.instructions+=1;NFSU2_TR(0x6a05ee);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a05f0:L6a05f0:{c.instructions+=4;NFSU2_TR(0x6a05f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a05f3:{NFSU2_TR(0x6a05f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a05f6:{NFSU2_TR(0x6a05f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a05f9:{NFSU2_TR(0x6a05f9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0427u);}goto L6a0427;}}
}
B6a05ff:L6a05ff:{c.instructions+=4;NFSU2_TR(0x6a05ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0602:{NFSU2_TR(0x6a0602);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0605:{NFSU2_TR(0x6a0605);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a0608:{NFSU2_TR(0x6a0608);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a03d8u);}goto L6a03d8;}}
}
B6a060e:L6a060e:{c.instructions+=3;NFSU2_TR(0x6a060e);
__builtin_memmove((R+4),(R+24),4);
}
B6a0610:{NFSU2_TR(0x6a0610);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0613:{NFSU2_TR(0x6a0613);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a0618ull));
TAIL_STATIC(0x69e7abu,69e);
}
B6a0618:L6a0618:{c.instructions+=3;NFSU2_TR(0x6a0618);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a061b:{NFSU2_TR(0x6a061b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a061e:{NFSU2_TR(0x6a061e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a0abf;}}
}
B6a0624:L6a0624:{c.instructions+=5;NFSU2_TR(0x6a0624);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0627:{NFSU2_TR(0x6a0627);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a062a:{NFSU2_TR(0x6a062a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a062d:{NFSU2_TR(0x6a062d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6a0633:{NFSU2_TR(0x6a0633);
if(r1(R+518)){{goto L6a0aa3;}}
}
B6a0639:L6a0639:{c.instructions+=3;NFSU2_TR(0x6a0639);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a063d:{NFSU2_TR(0x6a063d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0641:{NFSU2_TR(0x6a0641);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a06b4;}}
}
B6a0643:L6a0643:{c.instructions+=9;NFSU2_TR(0x6a0643);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0646:{NFSU2_TR(0x6a0646);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0649:{NFSU2_TR(0x6a0649);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a064c:{NFSU2_TR(0x6a064c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a064f:{NFSU2_TR(0x6a064f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a0652:{NFSU2_TR(0x6a0652);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a0655:{NFSU2_TR(0x6a0655);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0658:{NFSU2_TR(0x6a0658);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a065b:{NFSU2_TR(0x6a065b);
{goto L6a069b;}
}
B6a065d:L6a065d:{c.instructions+=6;NFSU2_TR(0x6a065d);
__builtin_memmove((R+28),(R+0),4);
}
B6a065f:{NFSU2_TR(0x6a065f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6a0662:{NFSU2_TR(0x6a0662);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0665:{NFSU2_TR(0x6a0665);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a0668:{NFSU2_TR(0x6a0668);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6a066b:{NFSU2_TR(0x6a066b);
if(r1(R+518)){{goto L6a06a0;}}
}
B6a066d:L6a066d:{c.instructions+=6;NFSU2_TR(0x6a066d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0671:{NFSU2_TR(0x6a0671);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a0674:{NFSU2_TR(0x6a0674);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a067a:{NFSU2_TR(0x6a067a);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a067c:{NFSU2_TR(0x6a067c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a067e:{NFSU2_TR(0x6a067e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a07e0;}}
}
B6a0684:L6a0684:{c.instructions+=2;NFSU2_TR(0x6a0684);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a0687:{NFSU2_TR(0x6a0687);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a07e9;}}
}
B6a068d:L6a068d:{c.instructions+=2;NFSU2_TR(0x6a068d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0691:{NFSU2_TR(0x6a0691);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6a0694:L6a0694:{c.instructions+=1;NFSU2_TR(0x6a0694);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a069b:L6a069b:{c.instructions+=2;NFSU2_TR(0x6a069b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a069e:{NFSU2_TR(0x6a069e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a065du);}goto L6a065d;}}
}
B6a06a0:L6a06a0:{c.instructions+=7;NFSU2_TR(0x6a06a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a06a3:{NFSU2_TR(0x6a06a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a06a6:{NFSU2_TR(0x6a06a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a06a9:{NFSU2_TR(0x6a06a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a06ac:{NFSU2_TR(0x6a06ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a06af:{NFSU2_TR(0x6a06af);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a06b2:{NFSU2_TR(0x6a06b2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0643u);}goto L6a0643;}}
}
B6a06b4:L6a06b4:{c.instructions+=5;NFSU2_TR(0x6a06b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a06b6:{NFSU2_TR(0x6a06b6);
__builtin_memmove((R+0),(R+4),4);
}
B6a06b8:{NFSU2_TR(0x6a06b8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a06bd:{NFSU2_TR(0x6a06bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10f00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a06c2:{NFSU2_TR(0x6a06c2);
if(r1(R+518)){{goto L6a09c4;}}
}
B6a06c8:L6a06c8:{c.instructions+=2;NFSU2_TR(0x6a06c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a06cd:{NFSU2_TR(0x6a06cd);
if(r1(R+518)){{goto L6a09c4;}}
}
B6a06d3:L6a06d3:{c.instructions+=2;NFSU2_TR(0x6a06d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a06d8:{NFSU2_TR(0x6a06d8);
if(r1(R+518)){{goto L6a0861;}}
}
B6a06de:L6a06de:{c.instructions+=2;NFSU2_TR(0x6a06de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a06e3:{NFSU2_TR(0x6a06e3);
if(r1(R+518)){{goto L6a0861;}}
}
B6a06e9:L6a06e9:{c.instructions+=4;NFSU2_TR(0x6a06e9);
__builtin_memmove((R+0),(R+4),4);
}
B6a06eb:{NFSU2_TR(0x6a06eb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
}
B6a06f0:{NFSU2_TR(0x6a06f0);
w1(R+512,u8((r4(R+0))<(u32(0x10000000ull))));
}
B6a06f5:{NFSU2_TR(0x6a06f5);
if(r1(R+512)){{goto L6a0815;}}
}
B6a06fb:L6a06fb:{c.instructions+=2;NFSU2_TR(0x6a06fb);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x40000000ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a0700:{NFSU2_TR(0x6a0700);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6a0815;}}
}
B6a0706:L6a0706:{c.instructions+=10;NFSU2_TR(0x6a0706);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0709:{NFSU2_TR(0x6a0709);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6a070f:{NFSU2_TR(0x6a070f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a0711:{NFSU2_TR(0x6a0711);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a0711);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a0711);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6a0713:{NFSU2_TR(0x6a0713);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a0715:{NFSU2_TR(0x6a0715);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0718:{NFSU2_TR(0x6a0718);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a071b:{NFSU2_TR(0x6a071b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a071e:{NFSU2_TR(0x6a071e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0721:{NFSU2_TR(0x6a0721);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a077d;}}
}
B6a0723:L6a0723:{c.instructions+=7;NFSU2_TR(0x6a0723);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0726:{NFSU2_TR(0x6a0726);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0729:{NFSU2_TR(0x6a0729);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a072c:{NFSU2_TR(0x6a072c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a072f:{NFSU2_TR(0x6a072f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a0732:{NFSU2_TR(0x6a0732);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0736:{NFSU2_TR(0x6a0736);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a073e;}}
}
B6a0738:L6a0738:{c.instructions+=2;NFSU2_TR(0x6a0738);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a073c:{NFSU2_TR(0x6a073c);
if(r1(R+518)){{goto L6a0772;}}
}
B6a073e:L6a073e:{c.instructions+=5;NFSU2_TR(0x6a073e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a0741:{NFSU2_TR(0x6a0741);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0745:{NFSU2_TR(0x6a0745);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a0747:{NFSU2_TR(0x6a0747);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a074a:{NFSU2_TR(0x6a074a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a076e;}}
}
B6a074c:L6a074c:{c.instructions+=12;NFSU2_TR(0x6a074c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a074f:{NFSU2_TR(0x6a074f);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B6a0753:{NFSU2_TR(0x6a0753);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0756:{NFSU2_TR(0x6a0756);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0759:{NFSU2_TR(0x6a0759);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6a075b:{NFSU2_TR(0x6a075b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a075e:{NFSU2_TR(0x6a075e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6a0760:{NFSU2_TR(0x6a0760);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0763:{NFSU2_TR(0x6a0763);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a0766:{NFSU2_TR(0x6a0766);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0769:{NFSU2_TR(0x6a0769);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6a076c:{NFSU2_TR(0x6a076c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a074cu);}goto L6a074c;}}
}
B6a076e:L6a076e:{c.instructions+=2;NFSU2_TR(0x6a076e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6a076f:{NFSU2_TR(0x6a076f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0772:L6a0772:{c.instructions+=4;NFSU2_TR(0x6a0772);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0775:{NFSU2_TR(0x6a0775);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0778:{NFSU2_TR(0x6a0778);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a077b:{NFSU2_TR(0x6a077b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0723u);}goto L6a0723;}}
}
B6a077d:L6a077d:{c.instructions+=3;NFSU2_TR(0x6a077d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0780:{NFSU2_TR(0x6a0780);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0783:{NFSU2_TR(0x6a0783);
if(r1(R+518)){{goto L6a0aa3;}}
}
B6a0789:L6a0789:{c.instructions+=3;NFSU2_TR(0x6a0789);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a078d:{NFSU2_TR(0x6a078d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a078f:{NFSU2_TR(0x6a078f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a07cb;}}
}
B6a0791:L6a0791:{c.instructions+=3;NFSU2_TR(0x6a0791);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0795:{NFSU2_TR(0x6a0795);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a0798:{NFSU2_TR(0x6a0798);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a079b:L6a079b:{c.instructions+=9;NFSU2_TR(0x6a079b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a079e:{NFSU2_TR(0x6a079e);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w8(U+8,u64(s64(s32(r4(R+24)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+24,u32(r8(U+24)));
}
B6a07a2:{NFSU2_TR(0x6a07a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a07a5:{NFSU2_TR(0x6a07a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a07a8:{NFSU2_TR(0x6a07a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a07ab:{NFSU2_TR(0x6a07ab);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B6a07ad:{NFSU2_TR(0x6a07ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6a07b0:{NFSU2_TR(0x6a07b0);
__builtin_memmove((R+8),(R+4),4);
}
B6a07b2:{NFSU2_TR(0x6a07b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6a07b5:L6a07b5:{c.instructions+=1;NFSU2_TR(0x6a07b5);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6a07b7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a07b5u);}goto L6a07b5;}
}
B6a07b7:L6a07b7:{c.instructions+=3;NFSU2_TR(0x6a07b7);
__builtin_memmove((R+4),(R+8),4);
}
B6a07b9:{NFSU2_TR(0x6a07b9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6a07bc:{NFSU2_TR(0x6a07bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a07bf:L6a07bf:{c.instructions+=1;NFSU2_TR(0x6a07bf);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6a07c1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a07bfu);}goto L6a07bf;}
}
B6a07c1:L6a07c1:{c.instructions+=4;NFSU2_TR(0x6a07c1);
__builtin_memmove((R+4),(R+8),4);
}
B6a07c3:{NFSU2_TR(0x6a07c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a07c6:{NFSU2_TR(0x6a07c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6a07c9:{NFSU2_TR(0x6a07c9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a079bu);}goto L6a079b;}}
}
B6a07cb:L6a07cb:{c.instructions+=3;NFSU2_TR(0x6a07cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a07ce:{NFSU2_TR(0x6a07ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a07d0:{NFSU2_TR(0x6a07d0);
if(r1(R+518)){{goto L6a0800;}}
}
B6a07d2:L6a07d2:{c.instructions+=5;NFSU2_TR(0x6a07d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a07d4:{NFSU2_TR(0x6a07d4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B6a07d6:{NFSU2_TR(0x6a07d6);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B6a07dc:{NFSU2_TR(0x6a07dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(U+0))));
}
B6a07de:{NFSU2_TR(0x6a07de);
{goto L6a0802;}
}
B6a07e0:L6a07e0:{c.instructions+=2;NFSU2_TR(0x6a07e0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a07e3:{NFSU2_TR(0x6a07e3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a068du);}goto L6a068d;}}
}
B6a07e9:L6a07e9:{c.instructions+=7;NFSU2_TR(0x6a07e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a07ec:{NFSU2_TR(0x6a07ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a07ef:{NFSU2_TR(0x6a07ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a07f2:{NFSU2_TR(0x6a07f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a07f5:{NFSU2_TR(0x6a07f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a07f8:{NFSU2_TR(0x6a07f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a07fb:{NFSU2_TR(0x6a07fb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0694u);}goto L6a0694;}
}
B6a0800:L6a0800:{c.instructions+=1;NFSU2_TR(0x6a0800);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a0802:L6a0802:{c.instructions+=6;NFSU2_TR(0x6a0802);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a0805:{NFSU2_TR(0x6a0805);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6a0808:{NFSU2_TR(0x6a0808);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6a080a:{NFSU2_TR(0x6a080a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a080d:{NFSU2_TR(0x6a080d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0810:{NFSU2_TR(0x6a0810);
{goto L6a0a9c;}
}
B6a0815:L6a0815:{c.instructions+=3;NFSU2_TR(0x6a0815);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0818:{NFSU2_TR(0x6a0818);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a081a:{NFSU2_TR(0x6a081a);
if(r1(R+518)){{goto L6a0aa3;}}
}
B6a0820:L6a0820:{c.instructions+=3;NFSU2_TR(0x6a0820);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0824:{NFSU2_TR(0x6a0824);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a0826:{NFSU2_TR(0x6a0826);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a0854;}}
}
B6a0828:L6a0828:{c.instructions+=3;NFSU2_TR(0x6a0828);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a082b:{NFSU2_TR(0x6a082b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a082e:{NFSU2_TR(0x6a082e);
__builtin_memmove((R+28),(R+0),4);
}
B6a0830:L6a0830:{c.instructions+=4;NFSU2_TR(0x6a0830);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a0832:{NFSU2_TR(0x6a0832);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a0835:{NFSU2_TR(0x6a0835);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0839:{NFSU2_TR(0x6a0839);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0841;}}
}
B6a083b:L6a083b:{c.instructions+=2;NFSU2_TR(0x6a083b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a083f:{NFSU2_TR(0x6a083f);
if(r1(R+518)){{goto L6a0844;}}
}
B6a0841:L6a0841:{c.instructions+=1;NFSU2_TR(0x6a0841);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0844:L6a0844:{c.instructions+=3;NFSU2_TR(0x6a0844);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6a0847:{NFSU2_TR(0x6a0847);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6a0848:{NFSU2_TR(0x6a0848);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0830u);}goto L6a0830;}}
}
B6a084a:L6a084a:{c.instructions+=2;NFSU2_TR(0x6a084a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a084e:{NFSU2_TR(0x6a084e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0aa3;}}
}
B6a0854:L6a0854:{c.instructions+=4;NFSU2_TR(0x6a0854);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a0856:{NFSU2_TR(0x6a0856);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0859:{NFSU2_TR(0x6a0859);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a085c:{NFSU2_TR(0x6a085c);
{goto L6a0a9a;}
}
B6a0861:L6a0861:{c.instructions+=10;NFSU2_TR(0x6a0861);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0864:{NFSU2_TR(0x6a0864);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6a086a:{NFSU2_TR(0x6a086a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a086c:{NFSU2_TR(0x6a086c);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a086c);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a086c);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6a086e:{NFSU2_TR(0x6a086e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a0870:{NFSU2_TR(0x6a0870);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0873:{NFSU2_TR(0x6a0873);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0876:{NFSU2_TR(0x6a0876);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0879:{NFSU2_TR(0x6a0879);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a087c:{NFSU2_TR(0x6a087c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a094e;}}
}
B6a0882:L6a0882:{c.instructions+=9;NFSU2_TR(0x6a0882);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a0885:{NFSU2_TR(0x6a0885);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0888:{NFSU2_TR(0x6a0888);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a088b:{NFSU2_TR(0x6a088b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6a088e:{NFSU2_TR(0x6a088e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a0891:{NFSU2_TR(0x6a0891);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0894:{NFSU2_TR(0x6a0894);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a0897:{NFSU2_TR(0x6a0897);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a089b:{NFSU2_TR(0x6a089b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a08a7;}}
}
B6a089d:L6a089d:{c.instructions+=2;NFSU2_TR(0x6a089d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a08a1:{NFSU2_TR(0x6a08a1);
if(r1(R+518)){{goto L6a093f;}}
}
B6a08a7:L6a08a7:{c.instructions+=10;NFSU2_TR(0x6a08a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a08aa:{NFSU2_TR(0x6a08aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a08ad:{NFSU2_TR(0x6a08ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a08b0:{NFSU2_TR(0x6a08b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a08b3:{NFSU2_TR(0x6a08b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B6a08b6:{NFSU2_TR(0x6a08b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a08b9:{NFSU2_TR(0x6a08b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a08bc:{NFSU2_TR(0x6a08bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a08bf:{NFSU2_TR(0x6a08bf);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a08c3:{NFSU2_TR(0x6a08c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a08dc;}}
}
B6a08c5:L6a08c5:{c.instructions+=2;NFSU2_TR(0x6a08c5);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a08c9:{NFSU2_TR(0x6a08c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a08dc;}}
}
B6a08cb:L6a08cb:{c.instructions+=5;NFSU2_TR(0x6a08cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a08ce:{NFSU2_TR(0x6a08ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a08d4:{NFSU2_TR(0x6a08d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a08d7:{NFSU2_TR(0x6a08d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a08da:{NFSU2_TR(0x6a08da);
{goto L6a08fa;}
}
B6a08dc:L6a08dc:{c.instructions+=3;NFSU2_TR(0x6a08dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a08df:{NFSU2_TR(0x6a08df);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a08e3:{NFSU2_TR(0x6a08e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0903;}}
}
B6a08e5:L6a08e5:{c.instructions+=2;NFSU2_TR(0x6a08e5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a08e9:{NFSU2_TR(0x6a08e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0903;}}
}
B6a08eb:L6a08eb:{c.instructions+=4;NFSU2_TR(0x6a08eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a08f1:{NFSU2_TR(0x6a08f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a08f4:{NFSU2_TR(0x6a08f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a08f7:{NFSU2_TR(0x6a08f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a08fa:L6a08fa:{c.instructions+=2;NFSU2_TR(0x6a08fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0901:{NFSU2_TR(0x6a0901);
{goto L6a093f;}
}
B6a0903:L6a0903:{c.instructions+=7;NFSU2_TR(0x6a0903);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0906:{NFSU2_TR(0x6a0906);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0909:{NFSU2_TR(0x6a0909);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a090c:{NFSU2_TR(0x6a090c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0910:{NFSU2_TR(0x6a0910);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0914:{NFSU2_TR(0x6a0914);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a0917:{NFSU2_TR(0x6a0917);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a093b;}}
}
B6a0919:L6a0919:{c.instructions+=12;NFSU2_TR(0x6a0919);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a091c:{NFSU2_TR(0x6a091c);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B6a0920:{NFSU2_TR(0x6a0920);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0923:{NFSU2_TR(0x6a0923);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a0926:{NFSU2_TR(0x6a0926);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B6a0928:{NFSU2_TR(0x6a0928);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a092b:{NFSU2_TR(0x6a092b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6a092d:{NFSU2_TR(0x6a092d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0930:{NFSU2_TR(0x6a0930);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a0933:{NFSU2_TR(0x6a0933);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0936:{NFSU2_TR(0x6a0936);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a0939:{NFSU2_TR(0x6a0939);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0919u);}goto L6a0919;}}
}
B6a093b:L6a093b:{c.instructions+=2;NFSU2_TR(0x6a093b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a093c:{NFSU2_TR(0x6a093c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a093f:L6a093f:{c.instructions+=4;NFSU2_TR(0x6a093f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0942:{NFSU2_TR(0x6a0942);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0945:{NFSU2_TR(0x6a0945);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a0948:{NFSU2_TR(0x6a0948);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0882u);}goto L6a0882;}}
}
B6a094e:L6a094e:{c.instructions+=3;NFSU2_TR(0x6a094e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0951:{NFSU2_TR(0x6a0951);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0954:{NFSU2_TR(0x6a0954);
if(r1(R+518)){{goto L6a0aa3;}}
}
B6a095a:L6a095a:{c.instructions+=4;NFSU2_TR(0x6a095a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a095d:{NFSU2_TR(0x6a095d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0961:{NFSU2_TR(0x6a0961);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a0963:{NFSU2_TR(0x6a0963);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a099d;}}
}
B6a0965:L6a0965:{c.instructions+=3;NFSU2_TR(0x6a0965);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0969:{NFSU2_TR(0x6a0969);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a096c:{NFSU2_TR(0x6a096c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a096f:L6a096f:{c.instructions+=10;NFSU2_TR(0x6a096f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a0972:{NFSU2_TR(0x6a0972);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w8(U+8,u64(s64(s32(r4(R+24)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+24,u32(r8(U+24)));
}
B6a0976:{NFSU2_TR(0x6a0976);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0979:{NFSU2_TR(0x6a0979);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a097c:{NFSU2_TR(0x6a097c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a097f:{NFSU2_TR(0x6a097f);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B6a0981:{NFSU2_TR(0x6a0981);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6a0984:{NFSU2_TR(0x6a0984);
__builtin_memmove((R+0),(R+4),4);
}
B6a0986:{NFSU2_TR(0x6a0986);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0989:{NFSU2_TR(0x6a0989);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6a098c:L6a098c:{c.instructions+=1;NFSU2_TR(0x6a098c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6a098e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a098cu);}goto L6a098c;}
}
B6a098e:L6a098e:{c.instructions+=4;NFSU2_TR(0x6a098e);
__builtin_memmove((R+4),(R+0),4);
}
B6a0990:{NFSU2_TR(0x6a0990);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6a0993:{NFSU2_TR(0x6a0993);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0996:{NFSU2_TR(0x6a0996);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6a0999:L6a0999:{c.instructions+=1;NFSU2_TR(0x6a0999);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6a099b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0999u);}goto L6a0999;}
}
B6a099b:L6a099b:{c.instructions+=1;NFSU2_TR(0x6a099b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a096fu);}goto L6a096f;}}
}
B6a099d:L6a099d:{c.instructions+=3;NFSU2_TR(0x6a099d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a09a0:{NFSU2_TR(0x6a09a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a09a2:{NFSU2_TR(0x6a09a2);
if(r1(R+518)){{goto L6a09b1;}}
}
B6a09a4:L6a09a4:{c.instructions+=5;NFSU2_TR(0x6a09a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a09a6:{NFSU2_TR(0x6a09a6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B6a09a8:{NFSU2_TR(0x6a09a8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6a09ad:{NFSU2_TR(0x6a09ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+0))));
}
B6a09af:{NFSU2_TR(0x6a09af);
{goto L6a09b3;}
}
B6a09b1:L6a09b1:{c.instructions+=1;NFSU2_TR(0x6a09b1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a09b3:L6a09b3:{c.instructions+=5;NFSU2_TR(0x6a09b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a09b6:{NFSU2_TR(0x6a09b6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6a09b9:{NFSU2_TR(0x6a09b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a09bc:{NFSU2_TR(0x6a09bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a09bf:{NFSU2_TR(0x6a09bf);
{goto L6a0a9a;}
}
B6a09c4:L6a09c4:{c.instructions+=5;NFSU2_TR(0x6a09c4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a09c6:{NFSU2_TR(0x6a09c6);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a09c9:{NFSU2_TR(0x6a09c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a09cc:{NFSU2_TR(0x6a09cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a09cf:{NFSU2_TR(0x6a09cf);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a0a7c;}}
}
B6a09d5:L6a09d5:{c.instructions+=17;NFSU2_TR(0x6a09d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a09d8:{NFSU2_TR(0x6a09d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a09db:{NFSU2_TR(0x6a09db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a09de:{NFSU2_TR(0x6a09de);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a09e1:{NFSU2_TR(0x6a09e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a09e4:{NFSU2_TR(0x6a09e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a09e7:{NFSU2_TR(0x6a09e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a09ea:{NFSU2_TR(0x6a09ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a09ed:{NFSU2_TR(0x6a09ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a09f0:{NFSU2_TR(0x6a09f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a09f3:{NFSU2_TR(0x6a09f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a09f6:{NFSU2_TR(0x6a09f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a09f9:{NFSU2_TR(0x6a09f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a09fc:{NFSU2_TR(0x6a09fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a09ff:{NFSU2_TR(0x6a09ff);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a0a03:{NFSU2_TR(0x6a0a03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0a06:{NFSU2_TR(0x6a0a06);
if(r1(R+518)){{goto L6a0a31;}}
}
B6a0a08:L6a0a08:{c.instructions+=2;NFSU2_TR(0x6a0a08);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0a0c:{NFSU2_TR(0x6a0a0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0a31;}}
}
B6a0a0e:L6a0a0e:{c.instructions+=8;NFSU2_TR(0x6a0a0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0a11:{NFSU2_TR(0x6a0a11);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w1(U+0,u8(u32(r1(U+0))|u32(u8(0x80ull))));
s1(u32(r4(R+8)),r1(U+0));
}
B6a0a14:{NFSU2_TR(0x6a0a14);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a0a17:{NFSU2_TR(0x6a0a17);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a0a1d:{NFSU2_TR(0x6a0a1d);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a0a1f:{NFSU2_TR(0x6a0a1f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a0a21:{NFSU2_TR(0x6a0a21);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a0a24:{NFSU2_TR(0x6a0a24);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a0a2a;}}
}
B6a0a26:L6a0a26:{c.instructions+=2;NFSU2_TR(0x6a0a26);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6a0a28:{NFSU2_TR(0x6a0a28);
{goto L6a0a2c;}
}
B6a0a2a:L6a0a2a:{c.instructions+=1;NFSU2_TR(0x6a0a2a);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a0a2c:L6a0a2c:{c.instructions+=2;NFSU2_TR(0x6a0a2c);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a0a2f:{NFSU2_TR(0x6a0a2f);
{goto L6a0a49;}
}
B6a0a31:L6a0a31:{c.instructions+=3;NFSU2_TR(0x6a0a31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a0a33:{NFSU2_TR(0x6a0a33);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a0a35:{NFSU2_TR(0x6a0a35);
if(r1(R+518)){{goto L6a0a43;}}
}
B6a0a37:L6a0a37:{c.instructions+=2;NFSU2_TR(0x6a0a37);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a0a39:{NFSU2_TR(0x6a0a39);
if(r1(R+518)){{goto L6a0a43;}}
}
B6a0a3b:L6a0a3b:{c.instructions+=3;NFSU2_TR(0x6a0a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0a3e:{NFSU2_TR(0x6a0a3e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w1(U+0,u8(u32(r1(U+0))|u32(u8(0x80ull))));
s1(u32(r4(R+8)),r1(U+0));
}
B6a0a41:{NFSU2_TR(0x6a0a41);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0a2au);}goto L6a0a2a;}
}
B6a0a43:L6a0a43:{c.instructions+=2;NFSU2_TR(0x6a0a43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0a46:{NFSU2_TR(0x6a0a46);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w1(U+0,u8(u32(r1(U+0))&u32(u8(0x7full))));
s1(u32(r4(R+8)),r1(U+0));
}
B6a0a49:L6a0a49:{c.instructions+=2;NFSU2_TR(0x6a0a49);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6a0a4c:{NFSU2_TR(0x6a0a4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0a6a;}}
}
B6a0a4e:L6a0a4e:{c.instructions+=10;NFSU2_TR(0x6a0a4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0a51:{NFSU2_TR(0x6a0a51);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a0a54:{NFSU2_TR(0x6a0a54);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6a0a57:{NFSU2_TR(0x6a0a57);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a0a5a:{NFSU2_TR(0x6a0a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0a5d:{NFSU2_TR(0x6a0a5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a0a60:{NFSU2_TR(0x6a0a60);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a0a63:{NFSU2_TR(0x6a0a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a0a66:{NFSU2_TR(0x6a0a66);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6a0a67:{NFSU2_TR(0x6a0a67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0a6a:L6a0a6a:{c.instructions+=4;NFSU2_TR(0x6a0a6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0a6d:{NFSU2_TR(0x6a0a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0a70:{NFSU2_TR(0x6a0a70);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a0a73:{NFSU2_TR(0x6a0a73);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a09d5u);}goto L6a09d5;}}
}
B6a0a79:L6a0a79:{c.instructions+=1;NFSU2_TR(0x6a0a79);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0a7c:L6a0a7c:{c.instructions+=1;NFSU2_TR(0x6a0a7c);
if(r1(R+518)){{goto L6a0aa3;}}
}
B6a0a7e:L6a0a7e:{c.instructions+=9;NFSU2_TR(0x6a0a7e);
__builtin_memmove((R+4),(R+28),4);
}
B6a0a80:{NFSU2_TR(0x6a0a80);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6a0a86:{NFSU2_TR(0x6a0a86);
__builtin_memmove((R+0),(R+28),4);
}
B6a0a88:{NFSU2_TR(0x6a0a88);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x10f00000ull))));
}
B6a0a8e:{NFSU2_TR(0x6a0a8e);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6a0a90:{NFSU2_TR(0x6a0a90);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6a0a92:{NFSU2_TR(0x6a0a92);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B6a0a94:{NFSU2_TR(0x6a0a94);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0a97:{NFSU2_TR(0x6a0a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0a9a:L6a0a9a:{c.instructions+=1;NFSU2_TR(0x6a0a9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6a0a9c:L6a0a9c:{c.instructions+=1;NFSU2_TR(0x6a0a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0aa3:L6a0aa3:{c.instructions+=4;NFSU2_TR(0x6a0aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0aa6:{NFSU2_TR(0x6a0aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0aa9:{NFSU2_TR(0x6a0aa9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a0aac:{NFSU2_TR(0x6a0aac);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0624u);}goto L6a0624;}}
}
B6a0ab2:L6a0ab2:{c.instructions+=2;NFSU2_TR(0x6a0ab2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0ab6:{NFSU2_TR(0x6a0ab6);
if(r1(R+518)){{goto L6a0abf;}}
}
B6a0ab8:L6a0ab8:{c.instructions+=2;NFSU2_TR(0x6a0ab8);
__builtin_memmove((R+4),(R+24),4);
}
B6a0aba:{NFSU2_TR(0x6a0aba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a0abfull));
TAIL_STATIC(0x69e7c4u,69e);
}
B6a0abf:L6a0abf:{c.instructions+=8;NFSU2_TR(0x6a0abf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a0ac1:{NFSU2_TR(0x6a0ac1);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B6a0ac4:{NFSU2_TR(0x6a0ac4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a0ac5:{NFSU2_TR(0x6a0ac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a0ac6:{NFSU2_TR(0x6a0ac6);
__builtin_memmove((R+0),(R+518),1);
}
B6a0ac9:{NFSU2_TR(0x6a0ac9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a0aca:{NFSU2_TR(0x6a0aca);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6a0acb:{NFSU2_TR(0x6a0acb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a0acc:L6a0acc:{c.instructions+=8;NFSU2_TR(0x6a0acc);
__builtin_memmove((R+28),(R+28),4);
}
B6a0ace:{NFSU2_TR(0x6a0ace);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a0acf:{NFSU2_TR(0x6a0acf);
__builtin_memmove((R+20),(R+16),4);
}
B6a0ad1:{NFSU2_TR(0x6a0ad1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B6a0ad4:{NFSU2_TR(0x6a0ad4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a0ad5:{NFSU2_TR(0x6a0ad5);
__builtin_memmove((R+28),(R+4),4);
}
B6a0ad7:{NFSU2_TR(0x6a0ad7);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a0adb:{NFSU2_TR(0x6a0adb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0d7a;}}
}
B6a0ae1:L6a0ae1:{c.instructions+=2;NFSU2_TR(0x6a0ae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0ae5:{NFSU2_TR(0x6a0ae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a0aeaull));
TAIL_STATIC(0x69e219u,69e);
}
B6a0aea:L6a0aea:{c.instructions+=3;NFSU2_TR(0x6a0aea);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0aed:{NFSU2_TR(0x6a0aed);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a0aef:{NFSU2_TR(0x6a0aef);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a0d7a;}}
}
B6a0af5:L6a0af5:{c.instructions+=2;NFSU2_TR(0x6a0af5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a0af6:{NFSU2_TR(0x6a0af6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a0af7:L6a0af7:{c.instructions+=8;NFSU2_TR(0x6a0af7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0afa:{NFSU2_TR(0x6a0afa);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6a0afb:{NFSU2_TR(0x6a0afb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a0afe:{NFSU2_TR(0x6a0afe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0b01:{NFSU2_TR(0x6a0b01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a0b03:{NFSU2_TR(0x6a0b03);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a0b08:{NFSU2_TR(0x6a0b08);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a0b0d:{NFSU2_TR(0x6a0b0d);
if(r1(R+518)){{goto L6a0b1a;}}
}
B6a0b0f:L6a0b0f:{c.instructions+=2;NFSU2_TR(0x6a0b0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a0b14:{NFSU2_TR(0x6a0b14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0d67;}}
}
B6a0b1a:L6a0b1a:{c.instructions+=3;NFSU2_TR(0x6a0b1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0b1e:{NFSU2_TR(0x6a0b1e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0b22:{NFSU2_TR(0x6a0b22);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a0b4c;}}
}
B6a0b24:L6a0b24:{c.instructions+=3;NFSU2_TR(0x6a0b24);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0b27:{NFSU2_TR(0x6a0b27);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0b2a:{NFSU2_TR(0x6a0b2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0b2d:L6a0b2d:{c.instructions+=6;NFSU2_TR(0x6a0b2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a0b2f:{NFSU2_TR(0x6a0b2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a0b32:{NFSU2_TR(0x6a0b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a0b35:{NFSU2_TR(0x6a0b35);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a0b38:{NFSU2_TR(0x6a0b38);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a0b3c:{NFSU2_TR(0x6a0b3c);
if(r1(R+518)){{goto L6a0b4c;}}
}
B6a0b3e:L6a0b3e:{c.instructions+=5;NFSU2_TR(0x6a0b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0b41:{NFSU2_TR(0x6a0b41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a0b44:{NFSU2_TR(0x6a0b44);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6a0b47:{NFSU2_TR(0x6a0b47);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6a0b4a:{NFSU2_TR(0x6a0b4a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0b2du);}goto L6a0b2d;}}
}
B6a0b4c:L6a0b4c:{c.instructions+=3;NFSU2_TR(0x6a0b4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0b4f:{NFSU2_TR(0x6a0b4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a0b52:{NFSU2_TR(0x6a0b52);
if(r1(R+512)){{goto L6a0d67;}}
}
B6a0b58:L6a0b58:{c.instructions+=3;NFSU2_TR(0x6a0b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0b5c:{NFSU2_TR(0x6a0b5c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0b60:{NFSU2_TR(0x6a0b60);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a0b8a;}}
}
B6a0b62:L6a0b62:{c.instructions+=3;NFSU2_TR(0x6a0b62);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a0b65:{NFSU2_TR(0x6a0b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0b68:{NFSU2_TR(0x6a0b68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0b6b:L6a0b6b:{c.instructions+=6;NFSU2_TR(0x6a0b6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a0b6d:{NFSU2_TR(0x6a0b6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a0b70:{NFSU2_TR(0x6a0b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0b73:{NFSU2_TR(0x6a0b73);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a0b76:{NFSU2_TR(0x6a0b76);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a0b7a:{NFSU2_TR(0x6a0b7a);
if(r1(R+518)){{goto L6a0b8a;}}
}
B6a0b7c:L6a0b7c:{c.instructions+=5;NFSU2_TR(0x6a0b7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0b7f:{NFSU2_TR(0x6a0b7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0b82:{NFSU2_TR(0x6a0b82);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6a0b85:{NFSU2_TR(0x6a0b85);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a0b88:{NFSU2_TR(0x6a0b88);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0b6bu);}goto L6a0b6b;}}
}
B6a0b8a:L6a0b8a:{c.instructions+=3;NFSU2_TR(0x6a0b8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0b8d:{NFSU2_TR(0x6a0b8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6a0b90:{NFSU2_TR(0x6a0b90);
if(r1(R+512)){{goto L6a0d67;}}
}
B6a0b96:L6a0b96:{c.instructions+=9;NFSU2_TR(0x6a0b96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a0b98:{NFSU2_TR(0x6a0b98);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6a0b9e:{NFSU2_TR(0x6a0b9e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a0ba0:{NFSU2_TR(0x6a0ba0);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a0ba0);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a0ba0);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6a0ba2:{NFSU2_TR(0x6a0ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0ba6:{NFSU2_TR(0x6a0ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0ba9:{NFSU2_TR(0x6a0ba9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a0bab:{NFSU2_TR(0x6a0bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0bae:{NFSU2_TR(0x6a0bae);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a0c84;}}
}
B6a0bb4:L6a0bb4:{c.instructions+=1;NFSU2_TR(0x6a0bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0bb8:L6a0bb8:{c.instructions+=3;NFSU2_TR(0x6a0bb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0bbc:{NFSU2_TR(0x6a0bbc);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a0bbe:{NFSU2_TR(0x6a0bbe);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a0c61;}}
}
B6a0bc4:L6a0bc4:{c.instructions+=2;NFSU2_TR(0x6a0bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0bc7:{NFSU2_TR(0x6a0bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0bca:L6a0bca:{c.instructions+=10;NFSU2_TR(0x6a0bca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0bcd:{NFSU2_TR(0x6a0bcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0bd0:{NFSU2_TR(0x6a0bd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a0bd3:{NFSU2_TR(0x6a0bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0bd6:{NFSU2_TR(0x6a0bd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a0bd9:{NFSU2_TR(0x6a0bd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0bdc:{NFSU2_TR(0x6a0bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0bdf:{NFSU2_TR(0x6a0bdf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a0be2:{NFSU2_TR(0x6a0be2);
__builtin_memmove((R+4),(R+12),4);
}
B6a0be4:{NFSU2_TR(0x6a0be4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a0be9ull));
TAIL_STATIC(0x698f0fu,698);
}
B6a0be9:L6a0be9:{c.instructions+=5;NFSU2_TR(0x6a0be9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0bed:{NFSU2_TR(0x6a0bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0bf0:{NFSU2_TR(0x6a0bf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0bf3:{NFSU2_TR(0x6a0bf3);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a0bf5:{NFSU2_TR(0x6a0bf5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a0c3e;}}
}
B6a0bf7:L6a0bf7:{c.instructions+=3;NFSU2_TR(0x6a0bf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a0bfa:{NFSU2_TR(0x6a0bfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0bfd:{NFSU2_TR(0x6a0bfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0c00:L6a0c00:{c.instructions+=4;NFSU2_TR(0x6a0c00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a0c02:{NFSU2_TR(0x6a0c02);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a0c05:{NFSU2_TR(0x6a0c05);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0c09:{NFSU2_TR(0x6a0c09);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6a0c3e;}}
}
B6a0c0b:L6a0c0b:{c.instructions+=3;NFSU2_TR(0x6a0c0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a0c0e:{NFSU2_TR(0x6a0c0e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0c11:{NFSU2_TR(0x6a0c11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0c3e;}}
}
B6a0c13:L6a0c13:{c.instructions+=2;NFSU2_TR(0x6a0c13);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0c17:{NFSU2_TR(0x6a0c17);
if(r1(R+518)){{goto L6a0c2d;}}
}
B6a0c19:L6a0c19:{c.instructions+=7;NFSU2_TR(0x6a0c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a0c1c:{NFSU2_TR(0x6a0c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0c1f:{NFSU2_TR(0x6a0c1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a0c22:{NFSU2_TR(0x6a0c22);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a0c25:{NFSU2_TR(0x6a0c25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a0c28:{NFSU2_TR(0x6a0c28);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0c2b:{NFSU2_TR(0x6a0c2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0c3e;}}
}
B6a0c2d:L6a0c2d:{c.instructions+=6;NFSU2_TR(0x6a0c2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a0c30:{NFSU2_TR(0x6a0c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0c33:{NFSU2_TR(0x6a0c33);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6a0c36:{NFSU2_TR(0x6a0c36);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6a0c39:{NFSU2_TR(0x6a0c39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0c3c:{NFSU2_TR(0x6a0c3c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0c00u);}goto L6a0c00;}}
}
B6a0c3e:L6a0c3e:{c.instructions+=2;NFSU2_TR(0x6a0c3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6a0c41:{NFSU2_TR(0x6a0c41);
if(r1(R+512)){{goto L6a0c56;}}
}
B6a0c43:L6a0c43:{c.instructions+=5;NFSU2_TR(0x6a0c43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0c46:{NFSU2_TR(0x6a0c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0c49:{NFSU2_TR(0x6a0c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0c4d:{NFSU2_TR(0x6a0c4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a0c50:{NFSU2_TR(0x6a0c50);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0bcau);}goto L6a0bca;}}
}
B6a0c56:L6a0c56:{c.instructions+=3;NFSU2_TR(0x6a0c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0c59:{NFSU2_TR(0x6a0c59);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a0c5c:{NFSU2_TR(0x6a0c5c);
if(r1(R+512)){{goto L6a0c78;}}
}
B6a0c5e:L6a0c5e:{c.instructions+=1;NFSU2_TR(0x6a0c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0c61:L6a0c61:{c.instructions+=7;NFSU2_TR(0x6a0c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0c64:{NFSU2_TR(0x6a0c64);
__builtin_memmove((R+0),(R+4),4);
}
B6a0c66:{NFSU2_TR(0x6a0c66);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a0c69:{NFSU2_TR(0x6a0c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0c6c:{NFSU2_TR(0x6a0c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0c6f:{NFSU2_TR(0x6a0c6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a0c72:{NFSU2_TR(0x6a0c72);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0bb8u);}goto L6a0bb8;}}
}
B6a0c78:L6a0c78:{c.instructions+=3;NFSU2_TR(0x6a0c78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0c7b:{NFSU2_TR(0x6a0c7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a0c7e:{NFSU2_TR(0x6a0c7e);
if(r1(R+512)){{goto L6a0d67;}}
}
B6a0c84:L6a0c84:{c.instructions+=3;NFSU2_TR(0x6a0c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0c88:{NFSU2_TR(0x6a0c88);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0c8c:{NFSU2_TR(0x6a0c8c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a0d56;}}
}
B6a0c92:L6a0c92:{c.instructions+=9;NFSU2_TR(0x6a0c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0c95:{NFSU2_TR(0x6a0c95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0c98:{NFSU2_TR(0x6a0c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0c9b:{NFSU2_TR(0x6a0c9b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a0c9e:{NFSU2_TR(0x6a0c9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a0ca1:{NFSU2_TR(0x6a0ca1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a0ca4:{NFSU2_TR(0x6a0ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0ca7:{NFSU2_TR(0x6a0ca7);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a0ca9:{NFSU2_TR(0x6a0ca9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a0d41;}}
}
B6a0caf:L6a0caf:{c.instructions+=2;NFSU2_TR(0x6a0caf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0cb2:{NFSU2_TR(0x6a0cb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0cb5:L6a0cb5:{c.instructions+=16;NFSU2_TR(0x6a0cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0cb8:{NFSU2_TR(0x6a0cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0cbb:{NFSU2_TR(0x6a0cbb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a0cbe:{NFSU2_TR(0x6a0cbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0cc1:{NFSU2_TR(0x6a0cc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a0cc4:{NFSU2_TR(0x6a0cc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a0cc6:{NFSU2_TR(0x6a0cc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a0cc8:{NFSU2_TR(0x6a0cc8);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xe000000ull))));
}
B6a0cce:{NFSU2_TR(0x6a0cce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0cd1:{NFSU2_TR(0x6a0cd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a0cd3:{NFSU2_TR(0x6a0cd3);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xf1ffffffull))));
}
B6a0cd9:{NFSU2_TR(0x6a0cd9);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xe000000ull))));
}
B6a0cdf:{NFSU2_TR(0x6a0cdf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0ce2:{NFSU2_TR(0x6a0ce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0ce5:{NFSU2_TR(0x6a0ce5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a0ce7:{NFSU2_TR(0x6a0ce7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6a0cec;}}
}
B6a0ce9:L6a0ce9:{c.instructions+=1;NFSU2_TR(0x6a0ce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0cec:L6a0cec:{c.instructions+=13;NFSU2_TR(0x6a0cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a0cef:{NFSU2_TR(0x6a0cef);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+8))));
}
B6a0cf1:{NFSU2_TR(0x6a0cf1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0cf5:{NFSU2_TR(0x6a0cf5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a0cf7:{NFSU2_TR(0x6a0cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0cfa:{NFSU2_TR(0x6a0cfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0cfd:{NFSU2_TR(0x6a0cfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0d00:{NFSU2_TR(0x6a0d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0d03:{NFSU2_TR(0x6a0d03);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0d06:{NFSU2_TR(0x6a0d06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0d09:{NFSU2_TR(0x6a0d09);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0d0c:{NFSU2_TR(0x6a0d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0d0f:{NFSU2_TR(0x6a0d0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0d1d;}}
}
B6a0d11:L6a0d11:{c.instructions+=4;NFSU2_TR(0x6a0d11);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0d14:{NFSU2_TR(0x6a0d14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0d17:{NFSU2_TR(0x6a0d17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0d1a:{NFSU2_TR(0x6a0d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0d1d:L6a0d1d:{c.instructions+=11;NFSU2_TR(0x6a0d1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0d20:{NFSU2_TR(0x6a0d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0d23:{NFSU2_TR(0x6a0d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0d26:{NFSU2_TR(0x6a0d26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0d29:{NFSU2_TR(0x6a0d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0d2c:{NFSU2_TR(0x6a0d2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0d2f:{NFSU2_TR(0x6a0d2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0d32:{NFSU2_TR(0x6a0d32);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a0d35:{NFSU2_TR(0x6a0d35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0d38:{NFSU2_TR(0x6a0d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a0d3b:{NFSU2_TR(0x6a0d3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0cb5u);}goto L6a0cb5;}}
}
B6a0d41:L6a0d41:{c.instructions+=6;NFSU2_TR(0x6a0d41);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0d44:{NFSU2_TR(0x6a0d44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0d47:{NFSU2_TR(0x6a0d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0d4a:{NFSU2_TR(0x6a0d4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0d4d:{NFSU2_TR(0x6a0d4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a0d50:{NFSU2_TR(0x6a0d50);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0c92u);}goto L6a0c92;}}
}
B6a0d56:L6a0d56:{c.instructions+=5;NFSU2_TR(0x6a0d56);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a0d58:{NFSU2_TR(0x6a0d58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0d5f:{NFSU2_TR(0x6a0d5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6a0d61:{NFSU2_TR(0x6a0d61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0d64:{NFSU2_TR(0x6a0d64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0d67:L6a0d67:{c.instructions+=3;NFSU2_TR(0x6a0d67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0d6a:{NFSU2_TR(0x6a0d6a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a0d6c:{NFSU2_TR(0x6a0d6c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0af7u);}goto L6a0af7;}}
}
B6a0d72:L6a0d72:{c.instructions+=4;NFSU2_TR(0x6a0d72);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0d76:{NFSU2_TR(0x6a0d76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a0d77:{NFSU2_TR(0x6a0d77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a0d78:{NFSU2_TR(0x6a0d78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0d7f;}}
}
B6a0d7a:L6a0d7a:{c.instructions+=3;NFSU2_TR(0x6a0d7a);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a0d7c:{NFSU2_TR(0x6a0d7c);
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
B6a0d7d:{NFSU2_TR(0x6a0d7d);
{goto L6a0d81;}
}
B6a0d7f:L6a0d7f:{c.instructions+=1;NFSU2_TR(0x6a0d7f);
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
B6a0d81:L6a0d81:{c.instructions+=3;NFSU2_TR(0x6a0d81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a0d82:{NFSU2_TR(0x6a0d82);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6a0d83:{NFSU2_TR(0x6a0d83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a0d84:L6a0d84:{c.instructions+=11;NFSU2_TR(0x6a0d84);
__builtin_memmove((R+28),(R+28),4);
}
B6a0d86:{NFSU2_TR(0x6a0d86);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a0d87:{NFSU2_TR(0x6a0d87);
__builtin_memmove((R+20),(R+16),4);
}
B6a0d89:{NFSU2_TR(0x6a0d89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a0d8a:{NFSU2_TR(0x6a0d8a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a0d8b:{NFSU2_TR(0x6a0d8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a0d8c:{NFSU2_TR(0x6a0d8c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6a0d8e:{NFSU2_TR(0x6a0d8e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a0d8f:{NFSU2_TR(0x6a0d8f);
__builtin_memmove((R+24),(R+4),4);
}
B6a0d91:{NFSU2_TR(0x6a0d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0d94:{NFSU2_TR(0x6a0d94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a0d99ull));
TAIL_STATIC(0x69e219u,69e);
}
B6a0d99:L6a0d99:{c.instructions+=3;NFSU2_TR(0x6a0d99);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a0d9b:{NFSU2_TR(0x6a0d9b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0d9e:{NFSU2_TR(0x6a0d9e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a0dc9;}}
}
B6a0da0:L6a0da0:{c.instructions+=5;NFSU2_TR(0x6a0da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0da3:{NFSU2_TR(0x6a0da3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a0da6:{NFSU2_TR(0x6a0da6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0da9:{NFSU2_TR(0x6a0da9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a0dac:{NFSU2_TR(0x6a0dac);
if(r1(R+518)){{goto L6a0dc3;}}
}
B6a0dae:L6a0dae:{c.instructions+=2;NFSU2_TR(0x6a0dae);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0db2:{NFSU2_TR(0x6a0db2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0dc3;}}
}
B6a0db4:L6a0db4:{c.instructions+=3;NFSU2_TR(0x6a0db4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffbffull))));
}
B6a0db9:{NFSU2_TR(0x6a0db9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0dbc:{NFSU2_TR(0x6a0dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0dc3:L6a0dc3:{c.instructions+=3;NFSU2_TR(0x6a0dc3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a0dc4:{NFSU2_TR(0x6a0dc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6a0dc7:{NFSU2_TR(0x6a0dc7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0da0u);}goto L6a0da0;}}
}
B6a0dc9:L6a0dc9:{c.instructions+=4;NFSU2_TR(0x6a0dc9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a0dcb:{NFSU2_TR(0x6a0dcb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a0dcd:{NFSU2_TR(0x6a0dcd);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0dd0:{NFSU2_TR(0x6a0dd0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a0e13;}}
}
B6a0dd2:L6a0dd2:{c.instructions+=8;NFSU2_TR(0x6a0dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0dd5:{NFSU2_TR(0x6a0dd5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a0dd8:{NFSU2_TR(0x6a0dd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0ddb:{NFSU2_TR(0x6a0ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a0dde:{NFSU2_TR(0x6a0dde);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a0de1:{NFSU2_TR(0x6a0de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0de4:{NFSU2_TR(0x6a0de4);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a0de7:{NFSU2_TR(0x6a0de7);
if(r1(R+518)){{goto L6a0df5;}}
}
B6a0de9:L6a0de9:{c.instructions+=2;NFSU2_TR(0x6a0de9);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a0dec:{NFSU2_TR(0x6a0dec);
if(r1(R+518)){{goto L6a0df5;}}
}
B6a0dee:L6a0dee:{c.instructions+=1;NFSU2_TR(0x6a0dee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0df5:L6a0df5:{c.instructions+=2;NFSU2_TR(0x6a0df5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0df9:{NFSU2_TR(0x6a0df9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0e07;}}
}
B6a0dfb:L6a0dfb:{c.instructions+=2;NFSU2_TR(0x6a0dfb);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0dff:{NFSU2_TR(0x6a0dff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0e07;}}
}
B6a0e01:L6a0e01:{c.instructions+=2;NFSU2_TR(0x6a0e01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0e05:{NFSU2_TR(0x6a0e05);
{goto L6a0e0b;}
}
B6a0e07:L6a0e07:{c.instructions+=2;NFSU2_TR(0x6a0e07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0e0a:{NFSU2_TR(0x6a0e0a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6a0e0b:L6a0e0b:{c.instructions+=3;NFSU2_TR(0x6a0e0b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a0e0c:{NFSU2_TR(0x6a0e0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6a0e0f:{NFSU2_TR(0x6a0e0f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0dd2u);}goto L6a0dd2;}}
}
B6a0e11:L6a0e11:{c.instructions+=1;NFSU2_TR(0x6a0e11);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6a0e13:L6a0e13:{c.instructions+=2;NFSU2_TR(0x6a0e13);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0e16:{NFSU2_TR(0x6a0e16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0e22;}}
}
B6a0e18:L6a0e18:{c.instructions+=4;NFSU2_TR(0x6a0e18);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a0e1a:{NFSU2_TR(0x6a0e1a);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6a0e1d:{NFSU2_TR(0x6a0e1d);
__builtin_memmove((R+0),(R+518),1);
}
B6a0e20:{NFSU2_TR(0x6a0e20);
{goto L6a0e78;}
}
B6a0e22:L6a0e22:{c.instructions+=2;NFSU2_TR(0x6a0e22);
__builtin_memmove((R+4),(R+24),4);
}
B6a0e24:{NFSU2_TR(0x6a0e24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a0e29ull));
TAIL_STATIC(0x69e7c4u,69e);
}
B6a0e29:L6a0e29:{c.instructions+=3;NFSU2_TR(0x6a0e29);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a0e2b:{NFSU2_TR(0x6a0e2b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0e2e:{NFSU2_TR(0x6a0e2e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a0e55;}}
}
B6a0e30:L6a0e30:{c.instructions+=4;NFSU2_TR(0x6a0e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0e33:{NFSU2_TR(0x6a0e33);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a0e36:{NFSU2_TR(0x6a0e36);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0e3a:{NFSU2_TR(0x6a0e3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0e4b;}}
}
B6a0e3c:L6a0e3c:{c.instructions+=2;NFSU2_TR(0x6a0e3c);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
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
B6a0e40:{NFSU2_TR(0x6a0e40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0e4b;}}
}
B6a0e42:L6a0e42:{c.instructions+=2;NFSU2_TR(0x6a0e42);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a0e44:{NFSU2_TR(0x6a0e44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a0e49ull));
TAIL_STATIC(0x6750fbu,675);
}
B6a0e49:L6a0e49:{c.instructions+=1;NFSU2_TR(0x6a0e49);
{goto L6a0e4f;}
}
B6a0e4b:L6a0e4b:{c.instructions+=2;NFSU2_TR(0x6a0e4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a0e4e:{NFSU2_TR(0x6a0e4e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6a0e4f:L6a0e4f:{c.instructions+=3;NFSU2_TR(0x6a0e4f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6a0e50:{NFSU2_TR(0x6a0e50);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6a0e53:{NFSU2_TR(0x6a0e53);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0e30u);}goto L6a0e30;}}
}
B6a0e55:L6a0e55:{c.instructions+=8;NFSU2_TR(0x6a0e55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0e58:{NFSU2_TR(0x6a0e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0e5b:{NFSU2_TR(0x6a0e5b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B6a0e5d:{NFSU2_TR(0x6a0e5d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a0e60:{NFSU2_TR(0x6a0e60);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6a0e63:{NFSU2_TR(0x6a0e63);
__builtin_memmove((R+8),(R+4),4);
}
B6a0e65:{NFSU2_TR(0x6a0e65);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6a0e68:{NFSU2_TR(0x6a0e68);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a0e6a:L6a0e6a:{c.instructions+=1;NFSU2_TR(0x6a0e6a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6a0e6c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0e6au);}goto L6a0e6a;}
}
B6a0e6c:L6a0e6c:{c.instructions+=2;NFSU2_TR(0x6a0e6c);
__builtin_memmove((R+4),(R+8),4);
}
B6a0e6e:{NFSU2_TR(0x6a0e6e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6a0e71:L6a0e71:{c.instructions+=1;NFSU2_TR(0x6a0e71);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6a0e73;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0e71u);}goto L6a0e71;}
}
B6a0e73:L6a0e73:{c.instructions+=2;NFSU2_TR(0x6a0e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0e76:{NFSU2_TR(0x6a0e76);
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
B6a0e78:L6a0e78:{c.instructions+=5;NFSU2_TR(0x6a0e78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a0e79:{NFSU2_TR(0x6a0e79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a0e7a:{NFSU2_TR(0x6a0e7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a0e7b:{NFSU2_TR(0x6a0e7b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6a0e7c:{NFSU2_TR(0x6a0e7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a0e7d:L6a0e7d:{c.instructions+=9;NFSU2_TR(0x6a0e7d);
__builtin_memmove((R+28),(R+28),4);
}
B6a0e7f:{NFSU2_TR(0x6a0e7f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a0e80:{NFSU2_TR(0x6a0e80);
__builtin_memmove((R+20),(R+16),4);
}
B6a0e82:{NFSU2_TR(0x6a0e82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6a0e85:{NFSU2_TR(0x6a0e85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a0e86:{NFSU2_TR(0x6a0e86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a0e87:{NFSU2_TR(0x6a0e87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a0e88:{NFSU2_TR(0x6a0e88);
__builtin_memmove((R+28),(R+4),4);
}
B6a0e8a:{NFSU2_TR(0x6a0e8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a0e8full));
TAIL_STATIC(0x69e219u,69e);
}
B6a0e8f:L6a0e8f:{c.instructions+=3;NFSU2_TR(0x6a0e8f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6a0e91:{NFSU2_TR(0x6a0e91);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0e94:{NFSU2_TR(0x6a0e94);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a0ecb;}}
}
B6a0e96:L6a0e96:{c.instructions+=10;NFSU2_TR(0x6a0e96);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0e99:{NFSU2_TR(0x6a0e99);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a0e9c:{NFSU2_TR(0x6a0e9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0e9f:{NFSU2_TR(0x6a0e9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0ea2:{NFSU2_TR(0x6a0ea2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a0ea5:{NFSU2_TR(0x6a0ea5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xffffffdfull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6a0ea8:{NFSU2_TR(0x6a0ea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0eab:{NFSU2_TR(0x6a0eab);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a0eae:{NFSU2_TR(0x6a0eae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a0eb0:{NFSU2_TR(0x6a0eb0);
if(r1(R+518)){{goto L6a0ebc;}}
}
B6a0eb2:L6a0eb2:{c.instructions+=2;NFSU2_TR(0x6a0eb2);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a0eb5:{NFSU2_TR(0x6a0eb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a0ebc;}}
}
B6a0eb7:L6a0eb7:{c.instructions+=2;NFSU2_TR(0x6a0eb7);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x20ull))));
}
B6a0eba:{NFSU2_TR(0x6a0eba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a0ebc:L6a0ebc:{c.instructions+=2;NFSU2_TR(0x6a0ebc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a0ec0:{NFSU2_TR(0x6a0ec0);
if(r1(R+518)){{goto L6a0ec5;}}
}
B6a0ec2:L6a0ec2:{c.instructions+=1;NFSU2_TR(0x6a0ec2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x20ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6a0ec5:L6a0ec5:{c.instructions+=3;NFSU2_TR(0x6a0ec5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6a0ec6:{NFSU2_TR(0x6a0ec6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6a0ec9:{NFSU2_TR(0x6a0ec9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0e96u);}goto L6a0e96;}}
}
B6a0ecb:L6a0ecb:{c.instructions+=3;NFSU2_TR(0x6a0ecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0ecf:{NFSU2_TR(0x6a0ecf);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0ed3:{NFSU2_TR(0x6a0ed3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a10b7u,6a1);}
}
B6a0ed9:L6a0ed9:{c.instructions+=7;NFSU2_TR(0x6a0ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0edc:{NFSU2_TR(0x6a0edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0edf:{NFSU2_TR(0x6a0edf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a0ee2:{NFSU2_TR(0x6a0ee2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a0ee4:{NFSU2_TR(0x6a0ee4);
__builtin_memmove((R+4),(R+0),4);
}
B6a0ee6:{NFSU2_TR(0x6a0ee6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6a0eec:{NFSU2_TR(0x6a0eec);
if(r1(R+518)){TAIL_STATIC(0x6a10a8u,6a1);}
}
B6a0ef2:L6a0ef2:{c.instructions+=2;NFSU2_TR(0x6a0ef2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a0ef8:{NFSU2_TR(0x6a0ef8);
if(r1(R+518)){TAIL_STATIC(0x6a108cu,6a1);}
}
B6a0efe:L6a0efe:{c.instructions+=2;NFSU2_TR(0x6a0efe);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a0f04:{NFSU2_TR(0x6a0f04);
if(r1(R+518)){TAIL_STATIC(0x6a108cu,6a1);}
}
B6a0f0a:L6a0f0a:{c.instructions+=2;NFSU2_TR(0x6a0f0a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11200000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a0f10:{NFSU2_TR(0x6a0f10);
if(r1(R+518)){TAIL_STATIC(0x6a108cu,6a1);}
}
B6a0f16:L6a0f16:{c.instructions+=3;NFSU2_TR(0x6a0f16);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
}
B6a0f1b:{NFSU2_TR(0x6a0f1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a0f20:{NFSU2_TR(0x6a0f20);
if(r1(R+518)){TAIL_STATIC(0x6a108cu,6a1);}
}
B6a0f26:L6a0f26:{c.instructions+=2;NFSU2_TR(0x6a0f26);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10f00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a0f2c:{NFSU2_TR(0x6a0f2c);
if(r1(R+518)){TAIL_STATIC(0x6a106eu,6a1);}
}
B6a0f32:L6a0f32:{c.instructions+=2;NFSU2_TR(0x6a0f32);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a0f38:{NFSU2_TR(0x6a0f38);
if(r1(R+518)){TAIL_STATIC(0x6a106eu,6a1);}
}
B6a0f3e:L6a0f3e:{c.instructions+=2;NFSU2_TR(0x6a0f3e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a0f44:{NFSU2_TR(0x6a0f44);
if(r1(R+518)){TAIL_STATIC(0x6a106eu,6a1);}
}
B6a0f4a:L6a0f4a:{c.instructions+=3;NFSU2_TR(0x6a0f4a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6a0f4c:{NFSU2_TR(0x6a0f4c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0f4f:{NFSU2_TR(0x6a0f4f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a0f8f;}}
}
B6a0f51:L6a0f51:{c.instructions+=9;NFSU2_TR(0x6a0f51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0f54:{NFSU2_TR(0x6a0f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0f57:{NFSU2_TR(0x6a0f57);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a0f5a:{NFSU2_TR(0x6a0f5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a0f5d:{NFSU2_TR(0x6a0f5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0f60:{NFSU2_TR(0x6a0f60);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a0f63:{NFSU2_TR(0x6a0f63);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a0f66:{NFSU2_TR(0x6a0f66);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a0f6a:{NFSU2_TR(0x6a0f6a);
if(r1(R+518)){{goto L6a0f89;}}
}
B6a0f6c:L6a0f6c:{c.instructions+=3;NFSU2_TR(0x6a0f6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a0f6f:{NFSU2_TR(0x6a0f6f);
__builtin_memmove((R+4),(R+28),4);
}
B6a0f71:{NFSU2_TR(0x6a0f71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a0f76ull));
TAIL_STATIC(0x69a7adu,69a);
}
B6a0f76:L6a0f76:{c.instructions+=2;NFSU2_TR(0x6a0f76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a0f78:{NFSU2_TR(0x6a0f78);
if(r1(R+518)){{goto L6a0f89;}}
}
B6a0f7a:L6a0f7a:{c.instructions+=5;NFSU2_TR(0x6a0f7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0f7d:{NFSU2_TR(0x6a0f7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a0f80:{NFSU2_TR(0x6a0f80);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a0f83:{NFSU2_TR(0x6a0f83);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a0f86:{NFSU2_TR(0x6a0f86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x20ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6a0f89:L6a0f89:{c.instructions+=3;NFSU2_TR(0x6a0f89);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6a0f8a:{NFSU2_TR(0x6a0f8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6a0f8d:{NFSU2_TR(0x6a0f8d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0f51u);}goto L6a0f51;}}
}
B6a0f8f:L6a0f8f:{c.instructions+=5;NFSU2_TR(0x6a0f8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a0f91:{NFSU2_TR(0x6a0f91);
__builtin_memmove((R+0),(R+4),4);
}
B6a0f93:{NFSU2_TR(0x6a0f93);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
}
B6a0f98:{NFSU2_TR(0x6a0f98);
w1(R+512,u8((r4(R+0))<(u32(0x10000000ull))));
}
B6a0f9d:{NFSU2_TR(0x6a0f9d);
if(r1(R+512)){TAIL_STATIC(0x6a1026u,6a1);}
}
B6a0fa3:L6a0fa3:{c.instructions+=2;NFSU2_TR(0x6a0fa3);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x40000000ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a0fa8:{NFSU2_TR(0x6a0fa8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6a1026u,6a1);}
}
B6a0faa:L6a0faa:{c.instructions+=9;NFSU2_TR(0x6a0faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0fad:{NFSU2_TR(0x6a0fad);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6a0fb3:{NFSU2_TR(0x6a0fb3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a0fb5:{NFSU2_TR(0x6a0fb5);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a0fb5);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a0fb5);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6a0fb7:{NFSU2_TR(0x6a0fb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0fbb:{NFSU2_TR(0x6a0fbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0fbe:{NFSU2_TR(0x6a0fbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0fc1:{NFSU2_TR(0x6a0fc1);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a0fc3:{NFSU2_TR(0x6a0fc3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a10a8u,6a1);}
}
B6a0fc9:L6a0fc9:{c.instructions+=3;NFSU2_TR(0x6a0fc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0fcd:{NFSU2_TR(0x6a0fcd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a0fd1:{NFSU2_TR(0x6a0fd1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a1016u,6a1);}
}
B6a0fd3:L6a0fd3:{c.instructions+=6;NFSU2_TR(0x6a0fd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a0fd6:{NFSU2_TR(0x6a0fd6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a0fd9:{NFSU2_TR(0x6a0fd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a0fdc:{NFSU2_TR(0x6a0fdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0fdf:{NFSU2_TR(0x6a0fdf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a0fe2:{NFSU2_TR(0x6a0fe2);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B6a0fe4:L6a0fe4:{c.instructions+=3;NFSU2_TR(0x6a0fe4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6a0fe6:{NFSU2_TR(0x6a0fe6);
__builtin_memmove((R+4),(R+28),4);
}
B6a0fe8:{NFSU2_TR(0x6a0fe8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a0fedull));
TAIL_STATIC(0x69a7adu,69a);
}
B6a0fed:L6a0fed:{c.instructions+=2;NFSU2_TR(0x6a0fed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a0fef:{NFSU2_TR(0x6a0fef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a1001u,6a1);}
}
B6a0ff1:L6a0ff1:{c.instructions+=5;NFSU2_TR(0x6a0ff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a0ff4:{NFSU2_TR(0x6a0ff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a0ff7:{NFSU2_TR(0x6a0ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B6a0ffa:{NFSU2_TR(0x6a0ffa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a0ffd:{NFSU2_TR(0x6a0ffd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a0fe4u);}goto L6a0fe4;}}
}
B6a0fff:L6a0fff:{c.instructions+=1;NFSU2_TR(0x6a0fff);
TAIL_STATIC(0x6a1016u,6a1);
}
XIT:NFSU2_TR_EXIT(0x6a0,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
