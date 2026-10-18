#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4b9(u8* __restrict R,Cpu& c);
u32 body_4ba(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4cf(u8* __restrict R,Cpu& c);
u32 body_4d1(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_588(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58b(u8* __restrict R,Cpu& c);
u32 body_58e(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_590(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_73f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4d0,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4d0,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4d0(u8* __restrict R,Cpu& c);
u32 page_4d0(Cpu& c){return body_4d0(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4d0(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4d0001:goto L4d0001;
case 0x4d0007:goto L4d0007;
case 0x4d0009:c.instructions+=2;goto B4d0009;
case 0x4d000e:c.instructions+=1;goto B4d000e;
case 0x4d0013:goto L4d0013;
case 0x4d0015:c.instructions+=8;goto B4d0015;
case 0x4d001c:c.instructions+=7;goto B4d001c;
case 0x4d0023:c.instructions+=6;goto B4d0023;
case 0x4d0024:c.instructions+=5;goto B4d0024;
case 0x4d0025:c.instructions+=4;goto B4d0025;
case 0x4d0026:c.instructions+=3;goto B4d0026;
case 0x4d0028:c.instructions+=2;goto B4d0028;
case 0x4d0029:c.instructions+=1;goto B4d0029;
case 0x4d002c:goto L4d002c;
case 0x4d0031:c.instructions+=1;goto B4d0031;
case 0x4d0036:goto L4d0036;
case 0x4d0039:c.instructions+=1;goto B4d0039;
case 0x4d003f:goto L4d003f;
case 0x4d0044:c.instructions+=1;goto B4d0044;
case 0x4d0049:goto L4d0049;
case 0x4d004c:c.instructions+=1;goto B4d004c;
case 0x4d0052:goto L4d0052;
case 0x4d0057:goto L4d0057;
case 0x4d0059:c.instructions+=7;goto B4d0059;
case 0x4d005c:c.instructions+=6;goto B4d005c;
case 0x4d0061:c.instructions+=5;goto B4d0061;
case 0x4d0063:c.instructions+=4;goto B4d0063;
case 0x4d0064:c.instructions+=3;goto B4d0064;
case 0x4d0065:c.instructions+=2;goto B4d0065;
case 0x4d006a:c.instructions+=1;goto B4d006a;
case 0x4d006f:goto L4d006f;
case 0x4d0070:c.instructions+=2;goto B4d0070;
case 0x4d0075:c.instructions+=1;goto B4d0075;
case 0x4d007a:goto L4d007a;
case 0x4d007b:c.instructions+=2;goto B4d007b;
case 0x4d007d:c.instructions+=1;goto B4d007d;
case 0x4d0082:goto L4d0082;
case 0x4d0084:c.instructions+=1;goto B4d0084;
case 0x4d008a:goto L4d008a;
case 0x4d008c:c.instructions+=2;goto B4d008c;
case 0x4d0091:c.instructions+=1;goto B4d0091;
case 0x4d0096:goto L4d0096;
case 0x4d0098:c.instructions+=8;goto B4d0098;
case 0x4d009f:c.instructions+=7;goto B4d009f;
case 0x4d00a6:c.instructions+=6;goto B4d00a6;
case 0x4d00a7:c.instructions+=5;goto B4d00a7;
case 0x4d00a8:c.instructions+=4;goto B4d00a8;
case 0x4d00a9:c.instructions+=3;goto B4d00a9;
case 0x4d00ab:c.instructions+=2;goto B4d00ab;
case 0x4d00ac:c.instructions+=1;goto B4d00ac;
case 0x4d00af:goto L4d00af;
case 0x4d00b4:c.instructions+=1;goto B4d00b4;
case 0x4d00b9:goto L4d00b9;
case 0x4d00bc:c.instructions+=1;goto B4d00bc;
case 0x4d00c2:goto L4d00c2;
case 0x4d00c7:goto L4d00c7;
case 0x4d00c8:c.instructions+=4;goto B4d00c8;
case 0x4d00cd:c.instructions+=3;goto B4d00cd;
case 0x4d00d2:c.instructions+=2;goto B4d00d2;
case 0x4d00d4:c.instructions+=1;goto B4d00d4;
case 0x4d00d9:goto L4d00d9;
case 0x4d00da:c.instructions+=2;goto B4d00da;
case 0x4d00dc:c.instructions+=1;goto B4d00dc;
case 0x4d00e1:goto L4d00e1;
case 0x4d00e3:c.instructions+=1;goto B4d00e3;
case 0x4d00e9:goto L4d00e9;
case 0x4d00eb:c.instructions+=2;goto B4d00eb;
case 0x4d00f0:c.instructions+=1;goto B4d00f0;
case 0x4d00f5:goto L4d00f5;
case 0x4d00f7:c.instructions+=8;goto B4d00f7;
case 0x4d00fe:c.instructions+=7;goto B4d00fe;
case 0x4d0105:c.instructions+=6;goto B4d0105;
case 0x4d0106:c.instructions+=5;goto B4d0106;
case 0x4d0107:c.instructions+=4;goto B4d0107;
case 0x4d0108:c.instructions+=3;goto B4d0108;
case 0x4d010a:c.instructions+=2;goto B4d010a;
case 0x4d010b:c.instructions+=1;goto B4d010b;
case 0x4d010e:goto L4d010e;
case 0x4d0118:c.instructions+=1;goto B4d0118;
case 0x4d011e:goto L4d011e;
case 0x4d0123:c.instructions+=1;goto B4d0123;
case 0x4d0128:goto L4d0128;
case 0x4d012a:c.instructions+=1;goto B4d012a;
case 0x4d0130:goto L4d0130;
case 0x4d0135:goto L4d0135;
case 0x4d0137:c.instructions+=3;goto B4d0137;
case 0x4d013d:c.instructions+=2;goto B4d013d;
case 0x4d013f:c.instructions+=1;goto B4d013f;
case 0x4d0145:goto L4d0145;
case 0x4d0147:c.instructions+=1;goto B4d0147;
case 0x4d014c:goto L4d014c;
case 0x4d014e:c.instructions+=2;goto B4d014e;
case 0x4d0153:c.instructions+=1;goto B4d0153;
case 0x4d0158:goto L4d0158;
case 0x4d015d:c.instructions+=3;goto B4d015d;
case 0x4d015f:c.instructions+=2;goto B4d015f;
case 0x4d0164:c.instructions+=1;goto B4d0164;
case 0x4d0168:goto L4d0168;
case 0x4d016a:goto L4d016a;
case 0x4d016c:c.instructions+=4;goto B4d016c;
case 0x4d0171:c.instructions+=3;goto B4d0171;
case 0x4d0176:c.instructions+=2;goto B4d0176;
case 0x4d0177:c.instructions+=1;goto B4d0177;
case 0x4d017c:goto L4d017c;
case 0x4d017f:c.instructions+=5;goto B4d017f;
case 0x4d0180:c.instructions+=4;goto B4d0180;
case 0x4d0184:c.instructions+=3;goto B4d0184;
case 0x4d0189:c.instructions+=2;goto B4d0189;
case 0x4d018a:c.instructions+=1;goto B4d018a;
case 0x4d018f:goto L4d018f;
case 0x4d0194:goto L4d0194;
case 0x4d019a:c.instructions+=7;goto B4d019a;
case 0x4d019c:c.instructions+=6;goto B4d019c;
case 0x4d01a0:c.instructions+=5;goto B4d01a0;
case 0x4d01a1:c.instructions+=4;goto B4d01a1;
case 0x4d01a3:c.instructions+=3;goto B4d01a3;
case 0x4d01a5:c.instructions+=2;goto B4d01a5;
case 0x4d01a6:c.instructions+=1;goto B4d01a6;
case 0x4d01ab:goto L4d01ab;
case 0x4d01ae:c.instructions+=9;goto B4d01ae;
case 0x4d01b0:c.instructions+=8;goto B4d01b0;
case 0x4d01b7:c.instructions+=7;goto B4d01b7;
case 0x4d01be:c.instructions+=6;goto B4d01be;
case 0x4d01bf:c.instructions+=5;goto B4d01bf;
case 0x4d01c0:c.instructions+=4;goto B4d01c0;
case 0x4d01c1:c.instructions+=3;goto B4d01c1;
case 0x4d01c3:c.instructions+=2;goto B4d01c3;
case 0x4d01c4:c.instructions+=1;goto B4d01c4;
case 0x4d01c7:goto L4d01c7;
case 0x4d01c8:c.instructions+=3;goto B4d01c8;
case 0x4d01cd:c.instructions+=2;goto B4d01cd;
case 0x4d01d2:c.instructions+=1;goto B4d01d2;
case 0x4d01d7:goto L4d01d7;
case 0x4d01d8:c.instructions+=2;goto B4d01d8;
case 0x4d01dd:c.instructions+=1;goto B4d01dd;
case 0x4d01e2:goto L4d01e2;
case 0x4d01e3:c.instructions+=2;goto B4d01e3;
case 0x4d01e5:c.instructions+=1;goto B4d01e5;
case 0x4d01ea:goto L4d01ea;
case 0x4d01ec:c.instructions+=2;goto B4d01ec;
case 0x4d01f1:c.instructions+=1;goto B4d01f1;
case 0x4d01f6:goto L4d01f6;
case 0x4d01f8:c.instructions+=8;goto B4d01f8;
case 0x4d01ff:c.instructions+=7;goto B4d01ff;
case 0x4d0206:c.instructions+=6;goto B4d0206;
case 0x4d0207:c.instructions+=5;goto B4d0207;
case 0x4d0208:c.instructions+=4;goto B4d0208;
case 0x4d0209:c.instructions+=3;goto B4d0209;
case 0x4d020b:c.instructions+=2;goto B4d020b;
case 0x4d020c:c.instructions+=1;goto B4d020c;
case 0x4d020f:goto L4d020f;
case 0x4d0211:c.instructions+=2;goto B4d0211;
case 0x4d0216:c.instructions+=1;goto B4d0216;
case 0x4d021b:goto L4d021b;
case 0x4d021d:c.instructions+=8;goto B4d021d;
case 0x4d0224:c.instructions+=7;goto B4d0224;
case 0x4d022b:c.instructions+=6;goto B4d022b;
case 0x4d022c:c.instructions+=5;goto B4d022c;
case 0x4d022d:c.instructions+=4;goto B4d022d;
case 0x4d022e:c.instructions+=3;goto B4d022e;
case 0x4d0230:c.instructions+=2;goto B4d0230;
case 0x4d0231:c.instructions+=1;goto B4d0231;
case 0x4d0234:goto L4d0234;
case 0x4d023b:c.instructions+=1;goto B4d023b;
case 0x4d0240:goto L4d0240;
case 0x4d0242:c.instructions+=5;goto B4d0242;
case 0x4d0249:c.instructions+=4;goto B4d0249;
case 0x4d024b:c.instructions+=3;goto B4d024b;
case 0x4d024c:c.instructions+=2;goto B4d024c;
case 0x4d0257:c.instructions+=1;goto B4d0257;
case 0x4d025c:goto L4d025c;
case 0x4d025e:c.instructions+=1;goto B4d025e;
case 0x4d0263:goto L4d0263;
case 0x4d0264:c.instructions+=2;goto B4d0264;
case 0x4d0269:c.instructions+=1;goto B4d0269;
case 0x4d026e:goto L4d026e;
case 0x4d0270:c.instructions+=1;goto B4d0270;
case 0x4d0275:goto L4d0275;
case 0x4d0277:c.instructions+=2;goto B4d0277;
case 0x4d0279:c.instructions+=1;goto B4d0279;
case 0x4d027b:goto L4d027b;
case 0x4d027d:c.instructions+=1;goto B4d027d;
case 0x4d027f:goto L4d027f;
case 0x4d0281:goto L4d0281;
case 0x4d0288:c.instructions+=2;goto B4d0288;
case 0x4d0293:c.instructions+=1;goto B4d0293;
case 0x4d0298:goto L4d0298;
case 0x4d029a:c.instructions+=8;goto B4d029a;
case 0x4d02a1:c.instructions+=7;goto B4d02a1;
case 0x4d02a8:c.instructions+=6;goto B4d02a8;
case 0x4d02a9:c.instructions+=5;goto B4d02a9;
case 0x4d02aa:c.instructions+=4;goto B4d02aa;
case 0x4d02ab:c.instructions+=3;goto B4d02ab;
case 0x4d02ad:c.instructions+=2;goto B4d02ad;
case 0x4d02ae:c.instructions+=1;goto B4d02ae;
case 0x4d02b1:goto L4d02b1;
case 0x4d02b3:goto L4d02b3;
case 0x4d02b8:c.instructions+=1;goto B4d02b8;
case 0x4d02bd:goto L4d02bd;
case 0x4d02c4:c.instructions+=2;goto B4d02c4;
case 0x4d02cf:c.instructions+=1;goto B4d02cf;
case 0x4d02d4:goto L4d02d4;
case 0x4d02d6:c.instructions+=8;goto B4d02d6;
case 0x4d02dd:c.instructions+=7;goto B4d02dd;
case 0x4d02e4:c.instructions+=6;goto B4d02e4;
case 0x4d02e5:c.instructions+=5;goto B4d02e5;
case 0x4d02e6:c.instructions+=4;goto B4d02e6;
case 0x4d02e7:c.instructions+=3;goto B4d02e7;
case 0x4d02e9:c.instructions+=2;goto B4d02e9;
case 0x4d02ea:c.instructions+=1;goto B4d02ea;
case 0x4d02ed:goto L4d02ed;
case 0x4d02f2:c.instructions+=8;goto B4d02f2;
case 0x4d02f9:c.instructions+=7;goto B4d02f9;
case 0x4d0300:c.instructions+=6;goto B4d0300;
case 0x4d0301:c.instructions+=5;goto B4d0301;
case 0x4d0302:c.instructions+=4;goto B4d0302;
case 0x4d0303:c.instructions+=3;goto B4d0303;
case 0x4d0305:c.instructions+=2;goto B4d0305;
case 0x4d0306:c.instructions+=1;goto B4d0306;
case 0x4d0309:goto L4d0309;
case 0x4d030c:goto L4d030c;
case 0x4d0313:c.instructions+=7;goto B4d0313;
case 0x4d0314:c.instructions+=6;goto B4d0314;
case 0x4d0315:c.instructions+=5;goto B4d0315;
case 0x4d031c:c.instructions+=4;goto B4d031c;
case 0x4d031d:c.instructions+=3;goto B4d031d;
case 0x4d031f:c.instructions+=2;goto B4d031f;
case 0x4d0320:c.instructions+=1;goto B4d0320;
case 0x4d0350:goto L4d0350;
case 0x4d0351:c.instructions+=4;goto B4d0351;
case 0x4d0355:c.instructions+=3;goto B4d0355;
case 0x4d0358:c.instructions+=2;goto B4d0358;
case 0x4d035a:c.instructions+=1;goto B4d035a;
case 0x4d035c:goto L4d035c;
case 0x4d035d:c.instructions+=3;goto B4d035d;
case 0x4d0361:c.instructions+=2;goto B4d0361;
case 0x4d0363:c.instructions+=1;goto B4d0363;
case 0x4d0368:goto L4d0368;
case 0x4d036b:c.instructions+=6;goto B4d036b;
case 0x4d036e:c.instructions+=5;goto B4d036e;
case 0x4d0371:c.instructions+=4;goto B4d0371;
case 0x4d0374:c.instructions+=3;goto B4d0374;
case 0x4d0375:c.instructions+=2;goto B4d0375;
case 0x4d0376:c.instructions+=1;goto B4d0376;
case 0x4d0377:goto L4d0377;
case 0x4d0379:c.instructions+=2;goto B4d0379;
case 0x4d037e:c.instructions+=1;goto B4d037e;
case 0x4d0383:goto L4d0383;
case 0x4d0384:c.instructions+=1;goto B4d0384;
case 0x4d0390:goto L4d0390;
case 0x4d0392:c.instructions+=7;goto B4d0392;
case 0x4d0397:c.instructions+=6;goto B4d0397;
case 0x4d039d:c.instructions+=5;goto B4d039d;
case 0x4d039e:c.instructions+=4;goto B4d039e;
case 0x4d03a5:c.instructions+=3;goto B4d03a5;
case 0x4d03a6:c.instructions+=2;goto B4d03a6;
case 0x4d03a8:c.instructions+=1;goto B4d03a8;
case 0x4d03ad:goto L4d03ad;
case 0x4d03b0:c.instructions+=4;goto B4d03b0;
case 0x4d03b4:c.instructions+=3;goto B4d03b4;
case 0x4d03b6:c.instructions+=2;goto B4d03b6;
case 0x4d03be:c.instructions+=1;goto B4d03be;
case 0x4d03c0:goto L4d03c0;
case 0x4d03c4:c.instructions+=3;goto B4d03c4;
case 0x4d03c5:c.instructions+=2;goto B4d03c5;
case 0x4d03c7:c.instructions+=1;goto B4d03c7;
case 0x4d03cc:goto L4d03cc;
case 0x4d03d0:c.instructions+=3;goto B4d03d0;
case 0x4d03d7:c.instructions+=2;goto B4d03d7;
case 0x4d03da:c.instructions+=1;goto B4d03da;
case 0x4d03db:goto L4d03db;
case 0x4d03df:c.instructions+=4;goto B4d03df;
case 0x4d03e1:c.instructions+=3;goto B4d03e1;
case 0x4d03e8:c.instructions+=2;goto B4d03e8;
case 0x4d03eb:c.instructions+=1;goto B4d03eb;
case 0x4d03f0:goto L4d03f0;
case 0x4d03f2:c.instructions+=7;goto B4d03f2;
case 0x4d03f7:c.instructions+=6;goto B4d03f7;
case 0x4d03fd:c.instructions+=5;goto B4d03fd;
case 0x4d03fe:c.instructions+=4;goto B4d03fe;
case 0x4d0405:c.instructions+=3;goto B4d0405;
case 0x4d0406:c.instructions+=2;goto B4d0406;
case 0x4d0408:c.instructions+=1;goto B4d0408;
case 0x4d040d:goto L4d040d;
case 0x4d0410:c.instructions+=4;goto B4d0410;
case 0x4d0414:c.instructions+=3;goto B4d0414;
case 0x4d0416:c.instructions+=2;goto B4d0416;
case 0x4d041e:c.instructions+=1;goto B4d041e;
case 0x4d0420:goto L4d0420;
case 0x4d0424:c.instructions+=3;goto B4d0424;
case 0x4d0425:c.instructions+=2;goto B4d0425;
case 0x4d0427:c.instructions+=1;goto B4d0427;
case 0x4d042c:goto L4d042c;
case 0x4d0430:c.instructions+=3;goto B4d0430;
case 0x4d0437:c.instructions+=2;goto B4d0437;
case 0x4d043a:c.instructions+=1;goto B4d043a;
case 0x4d043b:goto L4d043b;
case 0x4d043f:c.instructions+=4;goto B4d043f;
case 0x4d0441:c.instructions+=3;goto B4d0441;
case 0x4d0448:c.instructions+=2;goto B4d0448;
case 0x4d044b:c.instructions+=1;goto B4d044b;
case 0x4d0450:goto L4d0450;
case 0x4d0451:c.instructions+=2;goto B4d0451;
case 0x4d0453:c.instructions+=1;goto B4d0453;
case 0x4d0458:goto L4d0458;
case 0x4d045d:c.instructions+=1;goto B4d045d;
case 0x4d045f:goto L4d045f;
case 0x4d0460:c.instructions+=1;goto B4d0460;
case 0x4d0465:goto L4d0465;
case 0x4d0468:goto L4d0468;
case 0x4d046a:c.instructions+=2;goto B4d046a;
case 0x4d046b:c.instructions+=1;goto B4d046b;
case 0x4d0470:goto L4d0470;
case 0x4d0478:c.instructions+=3;goto B4d0478;
case 0x4d0479:c.instructions+=2;goto B4d0479;
case 0x4d047b:c.instructions+=1;goto B4d047b;
case 0x4d047d:goto L4d047d;
case 0x4d0481:c.instructions+=3;goto B4d0481;
case 0x4d0484:c.instructions+=2;goto B4d0484;
case 0x4d0489:c.instructions+=1;goto B4d0489;
case 0x4d048b:goto L4d048b;
case 0x4d0490:c.instructions+=1;goto B4d0490;
case 0x4d0492:goto L4d0492;
case 0x4d0497:c.instructions+=1;goto B4d0497;
case 0x4d0499:goto L4d0499;
case 0x4d049c:c.instructions+=5;goto B4d049c;
case 0x4d049f:c.instructions+=4;goto B4d049f;
case 0x4d04a0:c.instructions+=3;goto B4d04a0;
case 0x4d04a2:c.instructions+=2;goto B4d04a2;
case 0x4d04a3:c.instructions+=1;goto B4d04a3;
case 0x4d04a8:goto L4d04a8;
case 0x4d04ab:c.instructions+=3;goto B4d04ab;
case 0x4d04ad:c.instructions+=2;goto B4d04ad;
case 0x4d04af:c.instructions+=1;goto B4d04af;
case 0x4d04b4:goto L4d04b4;
case 0x4d04b5:c.instructions+=1;goto B4d04b5;
case 0x4d04b8:goto L4d04b8;
case 0x4d04bb:c.instructions+=5;goto B4d04bb;
case 0x4d04be:c.instructions+=4;goto B4d04be;
case 0x4d04bf:c.instructions+=3;goto B4d04bf;
case 0x4d04c1:c.instructions+=2;goto B4d04c1;
case 0x4d04c2:c.instructions+=1;goto B4d04c2;
case 0x4d04c7:goto L4d04c7;
case 0x4d04ca:c.instructions+=3;goto B4d04ca;
case 0x4d04cc:c.instructions+=2;goto B4d04cc;
case 0x4d04ce:c.instructions+=1;goto B4d04ce;
case 0x4d04d3:goto L4d04d3;
case 0x4d04d4:c.instructions+=1;goto B4d04d4;
case 0x4d04d7:goto L4d04d7;
case 0x4d04da:c.instructions+=5;goto B4d04da;
case 0x4d04dd:c.instructions+=4;goto B4d04dd;
case 0x4d04de:c.instructions+=3;goto B4d04de;
case 0x4d04e0:c.instructions+=2;goto B4d04e0;
case 0x4d04e1:c.instructions+=1;goto B4d04e1;
case 0x4d04e6:goto L4d04e6;
case 0x4d04e9:c.instructions+=3;goto B4d04e9;
case 0x4d04eb:c.instructions+=2;goto B4d04eb;
case 0x4d04ed:c.instructions+=1;goto B4d04ed;
case 0x4d04f2:goto L4d04f2;
case 0x4d04f3:c.instructions+=1;goto B4d04f3;
case 0x4d0500:goto L4d0500;
case 0x4d0502:c.instructions+=14;goto B4d0502;
case 0x4d0507:c.instructions+=13;goto B4d0507;
case 0x4d050d:c.instructions+=12;goto B4d050d;
case 0x4d050e:c.instructions+=11;goto B4d050e;
case 0x4d0515:c.instructions+=10;goto B4d0515;
case 0x4d0518:c.instructions+=9;goto B4d0518;
case 0x4d051c:c.instructions+=8;goto B4d051c;
case 0x4d051d:c.instructions+=7;goto B4d051d;
case 0x4d051e:c.instructions+=6;goto B4d051e;
case 0x4d051f:c.instructions+=5;goto B4d051f;
case 0x4d0520:c.instructions+=4;goto B4d0520;
case 0x4d0522:c.instructions+=3;goto B4d0522;
case 0x4d0523:c.instructions+=2;goto B4d0523;
case 0x4d0527:c.instructions+=1;goto B4d0527;
case 0x4d052c:goto L4d052c;
case 0x4d052e:c.instructions+=9;goto B4d052e;
case 0x4d0534:c.instructions+=8;goto B4d0534;
case 0x4d053a:c.instructions+=7;goto B4d053a;
case 0x4d0540:c.instructions+=6;goto B4d0540;
case 0x4d0546:c.instructions+=5;goto B4d0546;
case 0x4d054c:c.instructions+=4;goto B4d054c;
case 0x4d0552:c.instructions+=3;goto B4d0552;
case 0x4d0554:c.instructions+=2;goto B4d0554;
case 0x4d0559:c.instructions+=1;goto B4d0559;
case 0x4d055b:goto L4d055b;
case 0x4d055d:goto L4d055d;
case 0x4d0562:c.instructions+=3;goto B4d0562;
case 0x4d0566:c.instructions+=2;goto B4d0566;
case 0x4d0568:c.instructions+=1;goto B4d0568;
case 0x4d056d:goto L4d056d;
case 0x4d056f:c.instructions+=5;goto B4d056f;
case 0x4d0572:c.instructions+=4;goto B4d0572;
case 0x4d0576:c.instructions+=3;goto B4d0576;
case 0x4d0578:c.instructions+=2;goto B4d0578;
case 0x4d057d:c.instructions+=1;goto B4d057d;
case 0x4d057f:goto L4d057f;
case 0x4d0581:c.instructions+=13;goto B4d0581;
case 0x4d0583:c.instructions+=12;goto B4d0583;
case 0x4d0584:c.instructions+=11;goto B4d0584;
case 0x4d058a:c.instructions+=10;goto B4d058a;
case 0x4d058b:c.instructions+=9;goto B4d058b;
case 0x4d0591:c.instructions+=8;goto B4d0591;
case 0x4d0592:c.instructions+=7;goto B4d0592;
case 0x4d0598:c.instructions+=6;goto B4d0598;
case 0x4d0599:c.instructions+=5;goto B4d0599;
case 0x4d059f:c.instructions+=4;goto B4d059f;
case 0x4d05a0:c.instructions+=3;goto B4d05a0;
case 0x4d05a2:c.instructions+=2;goto B4d05a2;
case 0x4d05a4:c.instructions+=1;goto B4d05a4;
case 0x4d05a9:goto L4d05a9;
case 0x4d05af:c.instructions+=2;goto B4d05af;
case 0x4d05b5:c.instructions+=1;goto B4d05b5;
case 0x4d05b7:goto L4d05b7;
case 0x4d05b9:goto L4d05b9;
case 0x4d05ba:c.instructions+=3;goto B4d05ba;
case 0x4d05bc:c.instructions+=2;goto B4d05bc;
case 0x4d05c0:c.instructions+=1;goto B4d05c0;
case 0x4d05c5:goto L4d05c5;
case 0x4d05c6:c.instructions+=3;goto B4d05c6;
case 0x4d05c8:c.instructions+=2;goto B4d05c8;
case 0x4d05ce:c.instructions+=1;goto B4d05ce;
case 0x4d05d3:goto L4d05d3;
case 0x4d05d8:c.instructions+=2;goto B4d05d8;
case 0x4d05de:c.instructions+=1;goto B4d05de;
case 0x4d05e3:goto L4d05e3;
case 0x4d05e9:c.instructions+=3;goto B4d05e9;
case 0x4d05ec:c.instructions+=2;goto B4d05ec;
case 0x4d05ed:c.instructions+=1;goto B4d05ed;
case 0x4d05f2:goto L4d05f2;
case 0x4d05f6:c.instructions+=5;goto B4d05f6;
case 0x4d05f9:c.instructions+=4;goto B4d05f9;
case 0x4d05fa:c.instructions+=3;goto B4d05fa;
case 0x4d05fc:c.instructions+=2;goto B4d05fc;
case 0x4d0602:c.instructions+=1;goto B4d0602;
case 0x4d0607:goto L4d0607;
case 0x4d060b:c.instructions+=8;goto B4d060b;
case 0x4d060c:c.instructions+=7;goto B4d060c;
case 0x4d060e:c.instructions+=6;goto B4d060e;
case 0x4d060f:c.instructions+=5;goto B4d060f;
case 0x4d0610:c.instructions+=4;goto B4d0610;
case 0x4d0611:c.instructions+=3;goto B4d0611;
case 0x4d0618:c.instructions+=2;goto B4d0618;
case 0x4d061b:c.instructions+=1;goto B4d061b;
case 0x4d0620:goto L4d0620;
case 0x4d0622:c.instructions+=13;goto B4d0622;
case 0x4d0627:c.instructions+=12;goto B4d0627;
case 0x4d062d:c.instructions+=11;goto B4d062d;
case 0x4d062e:c.instructions+=10;goto B4d062e;
case 0x4d0635:c.instructions+=9;goto B4d0635;
case 0x4d0636:c.instructions+=8;goto B4d0636;
case 0x4d0637:c.instructions+=7;goto B4d0637;
case 0x4d0639:c.instructions+=6;goto B4d0639;
case 0x4d063d:c.instructions+=5;goto B4d063d;
case 0x4d0643:c.instructions+=4;goto B4d0643;
case 0x4d0649:c.instructions+=3;goto B4d0649;
case 0x4d064b:c.instructions+=2;goto B4d064b;
case 0x4d0653:c.instructions+=1;goto B4d0653;
case 0x4d0655:goto L4d0655;
case 0x4d0656:c.instructions+=1;goto B4d0656;
case 0x4d065b:goto L4d065b;
case 0x4d065e:c.instructions+=1;goto B4d065e;
case 0x4d0668:goto L4d0668;
case 0x4d066a:c.instructions+=2;goto B4d066a;
case 0x4d0672:c.instructions+=1;goto B4d0672;
case 0x4d0677:goto L4d0677;
case 0x4d067b:c.instructions+=4;goto B4d067b;
case 0x4d067c:c.instructions+=3;goto B4d067c;
case 0x4d0683:c.instructions+=2;goto B4d0683;
case 0x4d0686:c.instructions+=1;goto B4d0686;
case 0x4d0690:goto L4d0690;
case 0x4d0692:c.instructions+=13;goto B4d0692;
case 0x4d0697:c.instructions+=12;goto B4d0697;
case 0x4d069d:c.instructions+=11;goto B4d069d;
case 0x4d069e:c.instructions+=10;goto B4d069e;
case 0x4d06a5:c.instructions+=9;goto B4d06a5;
case 0x4d06a6:c.instructions+=8;goto B4d06a6;
case 0x4d06aa:c.instructions+=7;goto B4d06aa;
case 0x4d06ab:c.instructions+=6;goto B4d06ab;
case 0x4d06ac:c.instructions+=5;goto B4d06ac;
case 0x4d06ad:c.instructions+=4;goto B4d06ad;
case 0x4d06af:c.instructions+=3;goto B4d06af;
case 0x4d06b0:c.instructions+=2;goto B4d06b0;
case 0x4d06b4:c.instructions+=1;goto B4d06b4;
case 0x4d06b9:goto L4d06b9;
case 0x4d06bb:c.instructions+=18;goto B4d06bb;
case 0x4d06c1:c.instructions+=17;goto B4d06c1;
case 0x4d06c7:c.instructions+=16;goto B4d06c7;
case 0x4d06cd:c.instructions+=15;goto B4d06cd;
case 0x4d06d3:c.instructions+=14;goto B4d06d3;
case 0x4d06d9:c.instructions+=13;goto B4d06d9;
case 0x4d06dd:c.instructions+=12;goto B4d06dd;
case 0x4d06df:c.instructions+=11;goto B4d06df;
case 0x4d06e2:c.instructions+=10;goto B4d06e2;
case 0x4d06e5:c.instructions+=9;goto B4d06e5;
case 0x4d06e8:c.instructions+=8;goto B4d06e8;
case 0x4d06eb:c.instructions+=7;goto B4d06eb;
case 0x4d06ee:c.instructions+=6;goto B4d06ee;
case 0x4d06f1:c.instructions+=5;goto B4d06f1;
case 0x4d06f4:c.instructions+=4;goto B4d06f4;
case 0x4d06f7:c.instructions+=3;goto B4d06f7;
case 0x4d06fa:c.instructions+=2;goto B4d06fa;
case 0x4d06ff:c.instructions+=1;goto B4d06ff;
case 0x4d0704:goto L4d0704;
case 0x4d0706:c.instructions+=1;goto B4d0706;
case 0x4d0708:goto L4d0708;
case 0x4d0709:c.instructions+=3;goto B4d0709;
case 0x4d070c:c.instructions+=2;goto B4d070c;
case 0x4d0711:c.instructions+=1;goto B4d0711;
case 0x4d0716:goto L4d0716;
case 0x4d0717:c.instructions+=2;goto B4d0717;
case 0x4d0718:c.instructions+=1;goto B4d0718;
case 0x4d071d:goto L4d071d;
case 0x4d071e:c.instructions+=1;goto B4d071e;
case 0x4d0723:goto L4d0723;
case 0x4d0726:c.instructions+=1;goto B4d0726;
case 0x4d0727:goto L4d0727;
case 0x4d0729:c.instructions+=2;goto B4d0729;
case 0x4d0733:c.instructions+=1;goto B4d0733;
case 0x4d0738:goto L4d0738;
case 0x4d073f:c.instructions+=1;goto B4d073f;
case 0x4d0741:goto L4d0741;
case 0x4d0742:c.instructions+=1;goto B4d0742;
case 0x4d0747:goto L4d0747;
case 0x4d074a:c.instructions+=3;goto B4d074a;
case 0x4d074b:c.instructions+=2;goto B4d074b;
case 0x4d0750:c.instructions+=1;goto B4d0750;
case 0x4d0755:goto L4d0755;
case 0x4d0757:c.instructions+=2;goto B4d0757;
case 0x4d075c:c.instructions+=1;goto B4d075c;
case 0x4d0761:goto L4d0761;
case 0x4d0766:c.instructions+=2;goto B4d0766;
case 0x4d076c:c.instructions+=1;goto B4d076c;
case 0x4d076e:goto L4d076e;
case 0x4d0774:c.instructions+=1;goto B4d0774;
case 0x4d0776:goto L4d0776;
case 0x4d077b:c.instructions+=1;goto B4d077b;
case 0x4d0780:goto L4d0780;
case 0x4d0781:c.instructions+=3;goto B4d0781;
case 0x4d0782:c.instructions+=2;goto B4d0782;
case 0x4d0783:c.instructions+=1;goto B4d0783;
case 0x4d0788:goto L4d0788;
case 0x4d078f:c.instructions+=2;goto B4d078f;
case 0x4d0794:c.instructions+=1;goto B4d0794;
case 0x4d0797:goto L4d0797;
case 0x4d079d:c.instructions+=12;goto B4d079d;
case 0x4d07a3:c.instructions+=11;goto B4d07a3;
case 0x4d07a9:c.instructions+=10;goto B4d07a9;
case 0x4d07af:c.instructions+=9;goto B4d07af;
case 0x4d07b3:c.instructions+=8;goto B4d07b3;
case 0x4d07b5:c.instructions+=7;goto B4d07b5;
case 0x4d07b6:c.instructions+=6;goto B4d07b6;
case 0x4d07bc:c.instructions+=5;goto B4d07bc;
case 0x4d07bd:c.instructions+=4;goto B4d07bd;
case 0x4d07be:c.instructions+=3;goto B4d07be;
case 0x4d07c5:c.instructions+=2;goto B4d07c5;
case 0x4d07c8:c.instructions+=1;goto B4d07c8;
case 0x4d07d0:goto L4d07d0;
case 0x4d07d2:c.instructions+=13;goto B4d07d2;
case 0x4d07d7:c.instructions+=12;goto B4d07d7;
case 0x4d07dd:c.instructions+=11;goto B4d07dd;
case 0x4d07de:c.instructions+=10;goto B4d07de;
case 0x4d07e5:c.instructions+=9;goto B4d07e5;
case 0x4d07e6:c.instructions+=8;goto B4d07e6;
case 0x4d07e7:c.instructions+=7;goto B4d07e7;
case 0x4d07e9:c.instructions+=6;goto B4d07e9;
case 0x4d07ed:c.instructions+=5;goto B4d07ed;
case 0x4d07f3:c.instructions+=4;goto B4d07f3;
case 0x4d07f9:c.instructions+=3;goto B4d07f9;
case 0x4d07fb:c.instructions+=2;goto B4d07fb;
case 0x4d0803:c.instructions+=1;goto B4d0803;
case 0x4d0805:goto L4d0805;
case 0x4d0806:c.instructions+=1;goto B4d0806;
case 0x4d080b:goto L4d080b;
case 0x4d080e:c.instructions+=1;goto B4d080e;
case 0x4d0818:goto L4d0818;
case 0x4d081e:c.instructions+=3;goto B4d081e;
case 0x4d0820:c.instructions+=2;goto B4d0820;
case 0x4d0825:c.instructions+=1;goto B4d0825;
case 0x4d0827:goto L4d0827;
case 0x4d0828:c.instructions+=1;goto B4d0828;
case 0x4d082d:goto L4d082d;
case 0x4d0830:c.instructions+=1;goto B4d0830;
case 0x4d083a:goto L4d083a;
case 0x4d083c:c.instructions+=2;goto B4d083c;
case 0x4d0844:c.instructions+=1;goto B4d0844;
case 0x4d0849:goto L4d0849;
case 0x4d084d:c.instructions+=4;goto B4d084d;
case 0x4d084e:c.instructions+=3;goto B4d084e;
case 0x4d0855:c.instructions+=2;goto B4d0855;
case 0x4d0858:c.instructions+=1;goto B4d0858;
case 0x4d0860:goto L4d0860;
case 0x4d0862:c.instructions+=11;goto B4d0862;
case 0x4d0867:c.instructions+=10;goto B4d0867;
case 0x4d086d:c.instructions+=9;goto B4d086d;
case 0x4d086e:c.instructions+=8;goto B4d086e;
case 0x4d0875:c.instructions+=7;goto B4d0875;
case 0x4d0876:c.instructions+=6;goto B4d0876;
case 0x4d087a:c.instructions+=5;goto B4d087a;
case 0x4d087b:c.instructions+=4;goto B4d087b;
case 0x4d087d:c.instructions+=3;goto B4d087d;
case 0x4d087e:c.instructions+=2;goto B4d087e;
case 0x4d0882:c.instructions+=1;goto B4d0882;
case 0x4d0887:goto L4d0887;
case 0x4d0889:c.instructions+=18;goto B4d0889;
case 0x4d088f:c.instructions+=17;goto B4d088f;
case 0x4d0895:c.instructions+=16;goto B4d0895;
case 0x4d0899:c.instructions+=15;goto B4d0899;
case 0x4d089f:c.instructions+=14;goto B4d089f;
case 0x4d08a5:c.instructions+=13;goto B4d08a5;
case 0x4d08ab:c.instructions+=12;goto B4d08ab;
case 0x4d08b1:c.instructions+=11;goto B4d08b1;
case 0x4d08b7:c.instructions+=10;goto B4d08b7;
case 0x4d08bd:c.instructions+=9;goto B4d08bd;
case 0x4d08c3:c.instructions+=8;goto B4d08c3;
case 0x4d08c9:c.instructions+=7;goto B4d08c9;
case 0x4d08cf:c.instructions+=6;goto B4d08cf;
case 0x4d08d5:c.instructions+=5;goto B4d08d5;
case 0x4d08d7:c.instructions+=4;goto B4d08d7;
case 0x4d08dc:c.instructions+=3;goto B4d08dc;
case 0x4d08e2:c.instructions+=2;goto B4d08e2;
case 0x4d08e8:c.instructions+=1;goto B4d08e8;
case 0x4d08ed:goto L4d08ed;
case 0x4d08f1:c.instructions+=5;goto B4d08f1;
case 0x4d08f3:c.instructions+=4;goto B4d08f3;
case 0x4d08f4:c.instructions+=3;goto B4d08f4;
case 0x4d08fb:c.instructions+=2;goto B4d08fb;
case 0x4d08fe:c.instructions+=1;goto B4d08fe;
case 0x4d0910:goto L4d0910;
case 0x4d0912:c.instructions+=13;goto B4d0912;
case 0x4d0917:c.instructions+=12;goto B4d0917;
case 0x4d091d:c.instructions+=11;goto B4d091d;
case 0x4d091e:c.instructions+=10;goto B4d091e;
case 0x4d0925:c.instructions+=9;goto B4d0925;
case 0x4d0926:c.instructions+=8;goto B4d0926;
case 0x4d0927:c.instructions+=7;goto B4d0927;
case 0x4d0929:c.instructions+=6;goto B4d0929;
case 0x4d092d:c.instructions+=5;goto B4d092d;
case 0x4d0933:c.instructions+=4;goto B4d0933;
case 0x4d0939:c.instructions+=3;goto B4d0939;
case 0x4d093b:c.instructions+=2;goto B4d093b;
case 0x4d0943:c.instructions+=1;goto B4d0943;
case 0x4d0945:goto L4d0945;
case 0x4d0946:c.instructions+=1;goto B4d0946;
case 0x4d094b:goto L4d094b;
case 0x4d094e:c.instructions+=1;goto B4d094e;
case 0x4d0958:goto L4d0958;
case 0x4d095e:c.instructions+=3;goto B4d095e;
case 0x4d0960:c.instructions+=2;goto B4d0960;
case 0x4d0965:c.instructions+=1;goto B4d0965;
case 0x4d0967:goto L4d0967;
case 0x4d0968:c.instructions+=1;goto B4d0968;
case 0x4d096d:goto L4d096d;
case 0x4d0970:c.instructions+=1;goto B4d0970;
case 0x4d097a:goto L4d097a;
case 0x4d097c:c.instructions+=2;goto B4d097c;
case 0x4d0984:c.instructions+=1;goto B4d0984;
case 0x4d0989:goto L4d0989;
case 0x4d098d:c.instructions+=4;goto B4d098d;
case 0x4d098e:c.instructions+=3;goto B4d098e;
case 0x4d0995:c.instructions+=2;goto B4d0995;
case 0x4d0998:c.instructions+=1;goto B4d0998;
case 0x4d09a0:goto L4d09a0;
case 0x4d09a2:c.instructions+=14;goto B4d09a2;
case 0x4d09a7:c.instructions+=13;goto B4d09a7;
case 0x4d09ad:c.instructions+=12;goto B4d09ad;
case 0x4d09ae:c.instructions+=11;goto B4d09ae;
case 0x4d09b5:c.instructions+=10;goto B4d09b5;
case 0x4d09b6:c.instructions+=9;goto B4d09b6;
case 0x4d09ba:c.instructions+=8;goto B4d09ba;
case 0x4d09bb:c.instructions+=7;goto B4d09bb;
case 0x4d09bc:c.instructions+=6;goto B4d09bc;
case 0x4d09bd:c.instructions+=5;goto B4d09bd;
case 0x4d09be:c.instructions+=4;goto B4d09be;
case 0x4d09c0:c.instructions+=3;goto B4d09c0;
case 0x4d09c1:c.instructions+=2;goto B4d09c1;
case 0x4d09c5:c.instructions+=1;goto B4d09c5;
case 0x4d09ca:goto L4d09ca;
case 0x4d09cc:c.instructions+=18;goto B4d09cc;
case 0x4d09d2:c.instructions+=17;goto B4d09d2;
case 0x4d09d8:c.instructions+=16;goto B4d09d8;
case 0x4d09dc:c.instructions+=15;goto B4d09dc;
case 0x4d09e2:c.instructions+=14;goto B4d09e2;
case 0x4d09e8:c.instructions+=13;goto B4d09e8;
case 0x4d09ee:c.instructions+=12;goto B4d09ee;
case 0x4d09f4:c.instructions+=11;goto B4d09f4;
case 0x4d09fa:c.instructions+=10;goto B4d09fa;
case 0x4d0a00:c.instructions+=9;goto B4d0a00;
case 0x4d0a06:c.instructions+=8;goto B4d0a06;
case 0x4d0a0c:c.instructions+=7;goto B4d0a0c;
case 0x4d0a12:c.instructions+=6;goto B4d0a12;
case 0x4d0a18:c.instructions+=5;goto B4d0a18;
case 0x4d0a1d:c.instructions+=4;goto B4d0a1d;
case 0x4d0a1f:c.instructions+=3;goto B4d0a1f;
case 0x4d0a24:c.instructions+=2;goto B4d0a24;
case 0x4d0a28:c.instructions+=1;goto B4d0a28;
case 0x4d0a2a:goto L4d0a2a;
case 0x4d0a2f:c.instructions+=2;goto B4d0a2f;
case 0x4d0a31:c.instructions+=1;goto B4d0a31;
case 0x4d0a33:goto L4d0a33;
case 0x4d0a39:c.instructions+=2;goto B4d0a39;
case 0x4d0a3c:c.instructions+=1;goto B4d0a3c;
case 0x4d0a41:goto L4d0a41;
case 0x4d0a47:c.instructions+=4;goto B4d0a47;
case 0x4d0a4c:c.instructions+=3;goto B4d0a4c;
case 0x4d0a53:c.instructions+=2;goto B4d0a53;
case 0x4d0a56:c.instructions+=1;goto B4d0a56;
case 0x4d0a5b:goto L4d0a5b;
case 0x4d0a5d:c.instructions+=5;goto B4d0a5d;
case 0x4d0a60:c.instructions+=4;goto B4d0a60;
case 0x4d0a64:c.instructions+=3;goto B4d0a64;
case 0x4d0a66:c.instructions+=2;goto B4d0a66;
case 0x4d0a6b:c.instructions+=1;goto B4d0a6b;
case 0x4d0a6d:goto L4d0a6d;
case 0x4d0a6e:c.instructions+=13;goto B4d0a6e;
case 0x4d0a70:c.instructions+=12;goto B4d0a70;
case 0x4d0a71:c.instructions+=11;goto B4d0a71;
case 0x4d0a77:c.instructions+=10;goto B4d0a77;
case 0x4d0a78:c.instructions+=9;goto B4d0a78;
case 0x4d0a7e:c.instructions+=8;goto B4d0a7e;
case 0x4d0a7f:c.instructions+=7;goto B4d0a7f;
case 0x4d0a85:c.instructions+=6;goto B4d0a85;
case 0x4d0a86:c.instructions+=5;goto B4d0a86;
case 0x4d0a8c:c.instructions+=4;goto B4d0a8c;
case 0x4d0a8d:c.instructions+=3;goto B4d0a8d;
case 0x4d0a8f:c.instructions+=2;goto B4d0a8f;
case 0x4d0a91:c.instructions+=1;goto B4d0a91;
case 0x4d0a96:goto L4d0a96;
case 0x4d0a9c:c.instructions+=3;goto B4d0a9c;
case 0x4d0aa2:c.instructions+=2;goto B4d0aa2;
case 0x4d0aa5:c.instructions+=1;goto B4d0aa5;
case 0x4d0aa7:goto L4d0aa7;
case 0x4d0aa9:goto L4d0aa9;
case 0x4d0aaa:c.instructions+=3;goto B4d0aaa;
case 0x4d0aac:c.instructions+=2;goto B4d0aac;
case 0x4d0ab0:c.instructions+=1;goto B4d0ab0;
case 0x4d0ab5:goto L4d0ab5;
case 0x4d0abb:c.instructions+=4;goto B4d0abb;
case 0x4d0ac1:c.instructions+=3;goto B4d0ac1;
case 0x4d0ac6:c.instructions+=2;goto B4d0ac6;
case 0x4d0ac9:c.instructions+=1;goto B4d0ac9;
case 0x4d0ace:goto L4d0ace;
case 0x4d0ad0:c.instructions+=5;goto B4d0ad0;
case 0x4d0ad3:c.instructions+=4;goto B4d0ad3;
case 0x4d0ad7:c.instructions+=3;goto B4d0ad7;
case 0x4d0ad9:c.instructions+=2;goto B4d0ad9;
case 0x4d0ade:c.instructions+=1;goto B4d0ade;
case 0x4d0ae0:goto L4d0ae0;
case 0x4d0ae1:c.instructions+=13;goto B4d0ae1;
case 0x4d0ae3:c.instructions+=12;goto B4d0ae3;
case 0x4d0ae4:c.instructions+=11;goto B4d0ae4;
case 0x4d0aea:c.instructions+=10;goto B4d0aea;
case 0x4d0aeb:c.instructions+=9;goto B4d0aeb;
case 0x4d0af1:c.instructions+=8;goto B4d0af1;
case 0x4d0af2:c.instructions+=7;goto B4d0af2;
case 0x4d0af8:c.instructions+=6;goto B4d0af8;
case 0x4d0af9:c.instructions+=5;goto B4d0af9;
case 0x4d0aff:c.instructions+=4;goto B4d0aff;
case 0x4d0b00:c.instructions+=3;goto B4d0b00;
case 0x4d0b02:c.instructions+=2;goto B4d0b02;
case 0x4d0b04:c.instructions+=1;goto B4d0b04;
case 0x4d0b09:goto L4d0b09;
case 0x4d0b0f:c.instructions+=3;goto B4d0b0f;
case 0x4d0b15:c.instructions+=2;goto B4d0b15;
case 0x4d0b18:c.instructions+=1;goto B4d0b18;
case 0x4d0b1a:goto L4d0b1a;
case 0x4d0b1c:goto L4d0b1c;
case 0x4d0b1d:c.instructions+=3;goto B4d0b1d;
case 0x4d0b1f:c.instructions+=2;goto B4d0b1f;
case 0x4d0b23:c.instructions+=1;goto B4d0b23;
case 0x4d0b28:goto L4d0b28;
case 0x4d0b2e:c.instructions+=4;goto B4d0b2e;
case 0x4d0b34:c.instructions+=3;goto B4d0b34;
case 0x4d0b39:c.instructions+=2;goto B4d0b39;
case 0x4d0b3c:c.instructions+=1;goto B4d0b3c;
case 0x4d0b41:goto L4d0b41;
case 0x4d0b43:c.instructions+=5;goto B4d0b43;
case 0x4d0b46:c.instructions+=4;goto B4d0b46;
case 0x4d0b4a:c.instructions+=3;goto B4d0b4a;
case 0x4d0b4c:c.instructions+=2;goto B4d0b4c;
case 0x4d0b51:c.instructions+=1;goto B4d0b51;
case 0x4d0b53:goto L4d0b53;
case 0x4d0b54:c.instructions+=13;goto B4d0b54;
case 0x4d0b56:c.instructions+=12;goto B4d0b56;
case 0x4d0b57:c.instructions+=11;goto B4d0b57;
case 0x4d0b5d:c.instructions+=10;goto B4d0b5d;
case 0x4d0b5e:c.instructions+=9;goto B4d0b5e;
case 0x4d0b64:c.instructions+=8;goto B4d0b64;
case 0x4d0b65:c.instructions+=7;goto B4d0b65;
case 0x4d0b6b:c.instructions+=6;goto B4d0b6b;
case 0x4d0b6c:c.instructions+=5;goto B4d0b6c;
case 0x4d0b72:c.instructions+=4;goto B4d0b72;
case 0x4d0b73:c.instructions+=3;goto B4d0b73;
case 0x4d0b75:c.instructions+=2;goto B4d0b75;
case 0x4d0b77:c.instructions+=1;goto B4d0b77;
case 0x4d0b7c:goto L4d0b7c;
case 0x4d0b81:c.instructions+=3;goto B4d0b81;
case 0x4d0b87:c.instructions+=2;goto B4d0b87;
case 0x4d0b8a:c.instructions+=1;goto B4d0b8a;
case 0x4d0b8c:goto L4d0b8c;
case 0x4d0b8e:goto L4d0b8e;
case 0x4d0b8f:c.instructions+=3;goto B4d0b8f;
case 0x4d0b91:c.instructions+=2;goto B4d0b91;
case 0x4d0b95:c.instructions+=1;goto B4d0b95;
case 0x4d0b9a:goto L4d0b9a;
case 0x4d0ba0:c.instructions+=4;goto B4d0ba0;
case 0x4d0ba6:c.instructions+=3;goto B4d0ba6;
case 0x4d0bab:c.instructions+=2;goto B4d0bab;
case 0x4d0bb1:c.instructions+=1;goto B4d0bb1;
case 0x4d0bb6:goto L4d0bb6;
case 0x4d0bb8:c.instructions+=5;goto B4d0bb8;
case 0x4d0bbb:c.instructions+=4;goto B4d0bbb;
case 0x4d0bbf:c.instructions+=3;goto B4d0bbf;
case 0x4d0bc1:c.instructions+=2;goto B4d0bc1;
case 0x4d0bc6:c.instructions+=1;goto B4d0bc6;
case 0x4d0bc8:goto L4d0bc8;
case 0x4d0bc9:c.instructions+=13;goto B4d0bc9;
case 0x4d0bcb:c.instructions+=12;goto B4d0bcb;
case 0x4d0bcc:c.instructions+=11;goto B4d0bcc;
case 0x4d0bd2:c.instructions+=10;goto B4d0bd2;
case 0x4d0bd3:c.instructions+=9;goto B4d0bd3;
case 0x4d0bd9:c.instructions+=8;goto B4d0bd9;
case 0x4d0bda:c.instructions+=7;goto B4d0bda;
case 0x4d0be0:c.instructions+=6;goto B4d0be0;
case 0x4d0be1:c.instructions+=5;goto B4d0be1;
case 0x4d0be7:c.instructions+=4;goto B4d0be7;
case 0x4d0be8:c.instructions+=3;goto B4d0be8;
case 0x4d0bea:c.instructions+=2;goto B4d0bea;
case 0x4d0bec:c.instructions+=1;goto B4d0bec;
case 0x4d0bf1:goto L4d0bf1;
case 0x4d0bf7:c.instructions+=3;goto B4d0bf7;
case 0x4d0bfd:c.instructions+=2;goto B4d0bfd;
case 0x4d0c00:c.instructions+=1;goto B4d0c00;
case 0x4d0c02:goto L4d0c02;
case 0x4d0c04:goto L4d0c04;
case 0x4d0c05:c.instructions+=3;goto B4d0c05;
case 0x4d0c07:c.instructions+=2;goto B4d0c07;
case 0x4d0c0b:c.instructions+=1;goto B4d0c0b;
case 0x4d0c10:goto L4d0c10;
case 0x4d0c12:c.instructions+=2;goto B4d0c12;
case 0x4d0c18:c.instructions+=1;goto B4d0c18;
case 0x4d0c1d:goto L4d0c1d;
case 0x4d0c20:c.instructions+=4;goto B4d0c20;
case 0x4d0c24:c.instructions+=3;goto B4d0c24;
case 0x4d0c26:c.instructions+=2;goto B4d0c26;
case 0x4d0c2b:c.instructions+=1;goto B4d0c2b;
case 0x4d0c2d:goto L4d0c2d;
case 0x4d0c2e:c.instructions+=10;goto B4d0c2e;
case 0x4d0c34:c.instructions+=9;goto B4d0c34;
case 0x4d0c35:c.instructions+=8;goto B4d0c35;
case 0x4d0c3b:c.instructions+=7;goto B4d0c3b;
case 0x4d0c3c:c.instructions+=6;goto B4d0c3c;
case 0x4d0c42:c.instructions+=5;goto B4d0c42;
case 0x4d0c43:c.instructions+=4;goto B4d0c43;
case 0x4d0c49:c.instructions+=3;goto B4d0c49;
case 0x4d0c4a:c.instructions+=2;goto B4d0c4a;
case 0x4d0c4c:c.instructions+=1;goto B4d0c4c;
case 0x4d0c51:goto L4d0c51;
case 0x4d0c53:goto L4d0c53;
case 0x4d0c55:goto L4d0c55;
case 0x4d0c56:c.instructions+=3;goto B4d0c56;
case 0x4d0c58:c.instructions+=2;goto B4d0c58;
case 0x4d0c5c:c.instructions+=1;goto B4d0c5c;
case 0x4d0c61:goto L4d0c61;
case 0x4d0c62:c.instructions+=3;goto B4d0c62;
case 0x4d0c64:c.instructions+=2;goto B4d0c64;
case 0x4d0c6a:c.instructions+=1;goto B4d0c6a;
case 0x4d0c6f:goto L4d0c6f;
case 0x4d0c71:c.instructions+=2;goto B4d0c71;
case 0x4d0c77:c.instructions+=1;goto B4d0c77;
case 0x4d0c7c:goto L4d0c7c;
case 0x4d0c7e:c.instructions+=5;goto B4d0c7e;
case 0x4d0c81:c.instructions+=4;goto B4d0c81;
case 0x4d0c85:c.instructions+=3;goto B4d0c85;
case 0x4d0c87:c.instructions+=2;goto B4d0c87;
case 0x4d0c8c:c.instructions+=1;goto B4d0c8c;
case 0x4d0c8e:goto L4d0c8e;
case 0x4d0c8f:c.instructions+=10;goto B4d0c8f;
case 0x4d0c95:c.instructions+=9;goto B4d0c95;
case 0x4d0c96:c.instructions+=8;goto B4d0c96;
case 0x4d0c9c:c.instructions+=7;goto B4d0c9c;
case 0x4d0c9d:c.instructions+=6;goto B4d0c9d;
case 0x4d0ca3:c.instructions+=5;goto B4d0ca3;
case 0x4d0ca4:c.instructions+=4;goto B4d0ca4;
case 0x4d0caa:c.instructions+=3;goto B4d0caa;
case 0x4d0cab:c.instructions+=2;goto B4d0cab;
case 0x4d0cad:c.instructions+=1;goto B4d0cad;
case 0x4d0cb2:goto L4d0cb2;
case 0x4d0cb8:c.instructions+=3;goto B4d0cb8;
case 0x4d0cbe:c.instructions+=2;goto B4d0cbe;
case 0x4d0cc1:c.instructions+=1;goto B4d0cc1;
case 0x4d0cc3:goto L4d0cc3;
case 0x4d0cc5:goto L4d0cc5;
case 0x4d0cc6:c.instructions+=4;goto B4d0cc6;
case 0x4d0cc7:c.instructions+=3;goto B4d0cc7;
case 0x4d0cc9:c.instructions+=2;goto B4d0cc9;
case 0x4d0ccd:c.instructions+=1;goto B4d0ccd;
case 0x4d0cd2:goto L4d0cd2;
case 0x4d0cd4:c.instructions+=1;goto B4d0cd4;
case 0x4d0cd9:goto L4d0cd9;
case 0x4d0cdb:c.instructions+=5;goto B4d0cdb;
case 0x4d0cde:c.instructions+=4;goto B4d0cde;
case 0x4d0ce2:c.instructions+=3;goto B4d0ce2;
case 0x4d0ce4:c.instructions+=2;goto B4d0ce4;
case 0x4d0ce9:c.instructions+=1;goto B4d0ce9;
case 0x4d0ceb:goto L4d0ceb;
case 0x4d0ced:c.instructions+=6;goto B4d0ced;
case 0x4d0cf3:c.instructions+=5;goto B4d0cf3;
case 0x4d0cf4:c.instructions+=4;goto B4d0cf4;
case 0x4d0cfa:c.instructions+=3;goto B4d0cfa;
case 0x4d0cfb:c.instructions+=2;goto B4d0cfb;
case 0x4d0cfd:c.instructions+=1;goto B4d0cfd;
case 0x4d0d02:goto L4d0d02;
case 0x4d0d08:c.instructions+=1;goto B4d0d08;
case 0x4d0d0a:goto L4d0d0a;
case 0x4d0d0c:goto L4d0d0c;
case 0x4d0d0d:c.instructions+=3;goto B4d0d0d;
case 0x4d0d0f:c.instructions+=2;goto B4d0d0f;
case 0x4d0d13:c.instructions+=1;goto B4d0d13;
case 0x4d0d18:goto L4d0d18;
case 0x4d0d1a:c.instructions+=1;goto B4d0d1a;
case 0x4d0d1f:goto L4d0d1f;
case 0x4d0d21:c.instructions+=5;goto B4d0d21;
case 0x4d0d24:c.instructions+=4;goto B4d0d24;
case 0x4d0d28:c.instructions+=3;goto B4d0d28;
case 0x4d0d2a:c.instructions+=2;goto B4d0d2a;
case 0x4d0d2f:c.instructions+=1;goto B4d0d2f;
case 0x4d0d31:goto L4d0d31;
case 0x4d0d33:c.instructions+=6;goto B4d0d33;
case 0x4d0d39:c.instructions+=5;goto B4d0d39;
case 0x4d0d3a:c.instructions+=4;goto B4d0d3a;
case 0x4d0d40:c.instructions+=3;goto B4d0d40;
case 0x4d0d41:c.instructions+=2;goto B4d0d41;
case 0x4d0d43:c.instructions+=1;goto B4d0d43;
case 0x4d0d48:goto L4d0d48;
case 0x4d0d4e:c.instructions+=1;goto B4d0d4e;
case 0x4d0d50:goto L4d0d50;
case 0x4d0d52:goto L4d0d52;
case 0x4d0d53:c.instructions+=3;goto B4d0d53;
case 0x4d0d55:c.instructions+=2;goto B4d0d55;
case 0x4d0d59:c.instructions+=1;goto B4d0d59;
case 0x4d0d5e:goto L4d0d5e;
case 0x4d0d60:c.instructions+=1;goto B4d0d60;
case 0x4d0d65:goto L4d0d65;
case 0x4d0d67:c.instructions+=6;goto B4d0d67;
case 0x4d0d6a:c.instructions+=5;goto B4d0d6a;
case 0x4d0d6e:c.instructions+=4;goto B4d0d6e;
case 0x4d0d70:c.instructions+=3;goto B4d0d70;
case 0x4d0d75:c.instructions+=2;goto B4d0d75;
case 0x4d0d7a:c.instructions+=1;goto B4d0d7a;
case 0x4d0d7c:goto L4d0d7c;
case 0x4d0d7d:c.instructions+=10;goto B4d0d7d;
case 0x4d0d83:c.instructions+=9;goto B4d0d83;
case 0x4d0d84:c.instructions+=8;goto B4d0d84;
case 0x4d0d8a:c.instructions+=7;goto B4d0d8a;
case 0x4d0d8b:c.instructions+=6;goto B4d0d8b;
case 0x4d0d91:c.instructions+=5;goto B4d0d91;
case 0x4d0d92:c.instructions+=4;goto B4d0d92;
case 0x4d0d98:c.instructions+=3;goto B4d0d98;
case 0x4d0d99:c.instructions+=2;goto B4d0d99;
case 0x4d0d9b:c.instructions+=1;goto B4d0d9b;
case 0x4d0da0:goto L4d0da0;
case 0x4d0da6:c.instructions+=3;goto B4d0da6;
case 0x4d0dad:c.instructions+=2;goto B4d0dad;
case 0x4d0db0:c.instructions+=1;goto B4d0db0;
case 0x4d0db2:goto L4d0db2;
case 0x4d0db4:goto L4d0db4;
case 0x4d0db5:c.instructions+=4;goto B4d0db5;
case 0x4d0db6:c.instructions+=3;goto B4d0db6;
case 0x4d0db8:c.instructions+=2;goto B4d0db8;
case 0x4d0dbc:c.instructions+=1;goto B4d0dbc;
case 0x4d0dc1:goto L4d0dc1;
case 0x4d0dc3:c.instructions+=2;goto B4d0dc3;
case 0x4d0dc9:c.instructions+=1;goto B4d0dc9;
case 0x4d0dce:goto L4d0dce;
case 0x4d0dd0:c.instructions+=5;goto B4d0dd0;
case 0x4d0dd3:c.instructions+=4;goto B4d0dd3;
case 0x4d0dd7:c.instructions+=3;goto B4d0dd7;
case 0x4d0dd9:c.instructions+=2;goto B4d0dd9;
case 0x4d0dde:c.instructions+=1;goto B4d0dde;
case 0x4d0de0:goto L4d0de0;
case 0x4d0de2:c.instructions+=6;goto B4d0de2;
case 0x4d0de8:c.instructions+=5;goto B4d0de8;
case 0x4d0de9:c.instructions+=4;goto B4d0de9;
case 0x4d0def:c.instructions+=3;goto B4d0def;
case 0x4d0df0:c.instructions+=2;goto B4d0df0;
case 0x4d0df2:c.instructions+=1;goto B4d0df2;
case 0x4d0df7:goto L4d0df7;
case 0x4d0dfd:c.instructions+=1;goto B4d0dfd;
case 0x4d0dff:goto L4d0dff;
case 0x4d0e01:goto L4d0e01;
case 0x4d0e02:c.instructions+=3;goto B4d0e02;
case 0x4d0e04:c.instructions+=2;goto B4d0e04;
case 0x4d0e08:c.instructions+=1;goto B4d0e08;
case 0x4d0e0d:goto L4d0e0d;
case 0x4d0e0f:c.instructions+=1;goto B4d0e0f;
case 0x4d0e14:goto L4d0e14;
case 0x4d0e16:c.instructions+=5;goto B4d0e16;
case 0x4d0e19:c.instructions+=4;goto B4d0e19;
case 0x4d0e1d:c.instructions+=3;goto B4d0e1d;
case 0x4d0e1f:c.instructions+=2;goto B4d0e1f;
case 0x4d0e24:c.instructions+=1;goto B4d0e24;
case 0x4d0e26:goto L4d0e26;
case 0x4d0e28:c.instructions+=6;goto B4d0e28;
case 0x4d0e2e:c.instructions+=5;goto B4d0e2e;
case 0x4d0e2f:c.instructions+=4;goto B4d0e2f;
case 0x4d0e35:c.instructions+=3;goto B4d0e35;
case 0x4d0e36:c.instructions+=2;goto B4d0e36;
case 0x4d0e38:c.instructions+=1;goto B4d0e38;
case 0x4d0e3d:goto L4d0e3d;
case 0x4d0e43:c.instructions+=1;goto B4d0e43;
case 0x4d0e45:goto L4d0e45;
case 0x4d0e47:goto L4d0e47;
case 0x4d0e48:c.instructions+=3;goto B4d0e48;
case 0x4d0e4a:c.instructions+=2;goto B4d0e4a;
case 0x4d0e4e:c.instructions+=1;goto B4d0e4e;
case 0x4d0e53:goto L4d0e53;
case 0x4d0e55:c.instructions+=1;goto B4d0e55;
case 0x4d0e5a:goto L4d0e5a;
case 0x4d0e5c:c.instructions+=5;goto B4d0e5c;
case 0x4d0e5f:c.instructions+=4;goto B4d0e5f;
case 0x4d0e63:c.instructions+=3;goto B4d0e63;
case 0x4d0e65:c.instructions+=2;goto B4d0e65;
case 0x4d0e6a:c.instructions+=1;goto B4d0e6a;
case 0x4d0e6c:goto L4d0e6c;
case 0x4d0e6d:c.instructions+=10;goto B4d0e6d;
case 0x4d0e73:c.instructions+=9;goto B4d0e73;
case 0x4d0e74:c.instructions+=8;goto B4d0e74;
case 0x4d0e7a:c.instructions+=7;goto B4d0e7a;
case 0x4d0e7b:c.instructions+=6;goto B4d0e7b;
case 0x4d0e81:c.instructions+=5;goto B4d0e81;
case 0x4d0e82:c.instructions+=4;goto B4d0e82;
case 0x4d0e88:c.instructions+=3;goto B4d0e88;
case 0x4d0e89:c.instructions+=2;goto B4d0e89;
case 0x4d0e8b:c.instructions+=1;goto B4d0e8b;
case 0x4d0e90:goto L4d0e90;
case 0x4d0e96:c.instructions+=3;goto B4d0e96;
case 0x4d0e9d:c.instructions+=2;goto B4d0e9d;
case 0x4d0ea0:c.instructions+=1;goto B4d0ea0;
case 0x4d0ea2:goto L4d0ea2;
case 0x4d0ea4:goto L4d0ea4;
case 0x4d0ea5:c.instructions+=4;goto B4d0ea5;
case 0x4d0ea6:c.instructions+=3;goto B4d0ea6;
case 0x4d0ea8:c.instructions+=2;goto B4d0ea8;
case 0x4d0eac:c.instructions+=1;goto B4d0eac;
case 0x4d0eb1:goto L4d0eb1;
case 0x4d0eb7:c.instructions+=4;goto B4d0eb7;
case 0x4d0ebd:c.instructions+=3;goto B4d0ebd;
case 0x4d0ebe:c.instructions+=2;goto B4d0ebe;
case 0x4d0ec0:c.instructions+=1;goto B4d0ec0;
case 0x4d0ec5:goto L4d0ec5;
case 0x4d0eca:c.instructions+=2;goto B4d0eca;
case 0x4d0ed0:c.instructions+=1;goto B4d0ed0;
case 0x4d0ed5:goto L4d0ed5;
case 0x4d0edb:c.instructions+=3;goto B4d0edb;
case 0x4d0ede:c.instructions+=2;goto B4d0ede;
case 0x4d0edf:c.instructions+=1;goto B4d0edf;
case 0x4d0ee4:goto L4d0ee4;
case 0x4d0eea:c.instructions+=3;goto B4d0eea;
case 0x4d0eeb:c.instructions+=2;goto B4d0eeb;
case 0x4d0eed:c.instructions+=1;goto B4d0eed;
case 0x4d0ef2:goto L4d0ef2;
case 0x4d0ef7:c.instructions+=2;goto B4d0ef7;
case 0x4d0efd:c.instructions+=1;goto B4d0efd;
case 0x4d0f02:goto L4d0f02;
case 0x4d0f08:c.instructions+=3;goto B4d0f08;
case 0x4d0f0b:c.instructions+=2;goto B4d0f0b;
case 0x4d0f0c:c.instructions+=1;goto B4d0f0c;
case 0x4d0f11:goto L4d0f11;
case 0x4d0f17:c.instructions+=3;goto B4d0f17;
case 0x4d0f18:c.instructions+=2;goto B4d0f18;
case 0x4d0f1a:c.instructions+=1;goto B4d0f1a;
case 0x4d0f1f:goto L4d0f1f;
case 0x4d0f24:c.instructions+=2;goto B4d0f24;
case 0x4d0f2a:c.instructions+=1;goto B4d0f2a;
case 0x4d0f2f:goto L4d0f2f;
case 0x4d0f35:c.instructions+=3;goto B4d0f35;
case 0x4d0f38:c.instructions+=2;goto B4d0f38;
case 0x4d0f39:c.instructions+=1;goto B4d0f39;
case 0x4d0f3e:goto L4d0f3e;
case 0x4d0f44:c.instructions+=3;goto B4d0f44;
case 0x4d0f45:c.instructions+=2;goto B4d0f45;
case 0x4d0f47:c.instructions+=1;goto B4d0f47;
case 0x4d0f4c:goto L4d0f4c;
case 0x4d0f51:c.instructions+=2;goto B4d0f51;
case 0x4d0f57:c.instructions+=1;goto B4d0f57;
case 0x4d0f5c:goto L4d0f5c;
case 0x4d0f62:c.instructions+=3;goto B4d0f62;
case 0x4d0f65:c.instructions+=2;goto B4d0f65;
case 0x4d0f66:c.instructions+=1;goto B4d0f66;
case 0x4d0f6b:goto L4d0f6b;
case 0x4d0f6c:c.instructions+=4;goto B4d0f6c;
case 0x4d0f6e:c.instructions+=3;goto B4d0f6e;
case 0x4d0f75:c.instructions+=2;goto B4d0f75;
case 0x4d0f7f:c.instructions+=1;goto B4d0f7f;
case 0x4d0f84:goto L4d0f84;
case 0x4d0f89:goto L4d0f89;
case 0x4d0f8a:c.instructions+=1;goto B4d0f8a;
case 0x4d0f8f:goto L4d0f8f;
case 0x4d0f92:c.instructions+=2;goto B4d0f92;
case 0x4d0f94:c.instructions+=1;goto B4d0f94;
case 0x4d0f96:goto L4d0f96;
case 0x4d0f99:c.instructions+=4;goto B4d0f99;
case 0x4d0f9b:c.instructions+=3;goto B4d0f9b;
case 0x4d0fa0:c.instructions+=2;goto B4d0fa0;
case 0x4d0fa1:c.instructions+=1;goto B4d0fa1;
case 0x4d0fa6:goto L4d0fa6;
case 0x4d0fa7:c.instructions+=1;goto B4d0fa7;
case 0x4d0fac:goto L4d0fac;
case 0x4d0faf:goto L4d0faf;
case 0x4d0fb5:c.instructions+=1;goto B4d0fb5;
case 0x4d0fba:goto L4d0fba;
case 0x4d0fbd:c.instructions+=5;goto B4d0fbd;
case 0x4d0fc0:c.instructions+=4;goto B4d0fc0;
case 0x4d0fc1:c.instructions+=3;goto B4d0fc1;
case 0x4d0fc7:c.instructions+=2;goto B4d0fc7;
case 0x4d0fc8:c.instructions+=1;goto B4d0fc8;
case 0x4d0fcd:goto L4d0fcd;
case 0x4d0fd1:c.instructions+=8;goto B4d0fd1;
case 0x4d0fd2:c.instructions+=7;goto B4d0fd2;
case 0x4d0fd4:c.instructions+=6;goto B4d0fd4;
case 0x4d0fd5:c.instructions+=5;goto B4d0fd5;
case 0x4d0fd6:c.instructions+=4;goto B4d0fd6;
case 0x4d0fd7:c.instructions+=3;goto B4d0fd7;
case 0x4d0fde:c.instructions+=2;goto B4d0fde;
case 0x4d0fe1:c.instructions+=1;goto B4d0fe1;
case 0x4d0ff0:goto L4d0ff0;
case 0x4d0ff2:c.instructions+=4;goto B4d0ff2;
case 0x4d0ff7:c.instructions+=3;goto B4d0ff7;
case 0x4d0ffd:c.instructions+=2;goto B4d0ffd;
case 0x4d0ffe:c.instructions+=1;goto B4d0ffe;
default:missing_instruction(c.pc);}
B4d0001:L4d0001:{c.instructions+=1;NFSU2_TR(0x4d0001);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4d0309;}}
}
B4d0007:L4d0007:{c.instructions+=3;NFSU2_TR(0x4d0007);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0009:{NFSU2_TR(0x4d0009);
w4(R+4,u32(0x850080ull));
}
B4d000e:{NFSU2_TR(0x4d000e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0013ull));
TAIL_STATIC(0x5031b0u,503);
}
B4d0013:L4d0013:{c.instructions+=9;NFSU2_TR(0x4d0013);
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
B4d0015:{NFSU2_TR(0x4d0015);
u8 U[8];
w4(U+0,u32(u32(u32(0x1dcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d001c:{NFSU2_TR(0x4d001c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0023:{NFSU2_TR(0x4d0023);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d0024:{NFSU2_TR(0x4d0024);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d0025:{NFSU2_TR(0x4d0025);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d0026:{NFSU2_TR(0x4d0026);
__builtin_memmove((R+16),(R+20),4);
}
B4d0028:{NFSU2_TR(0x4d0028);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d0029:{NFSU2_TR(0x4d0029);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d002c:L4d002c:{c.instructions+=2;NFSU2_TR(0x4d002c);
w4(R+4,u32(0x850080ull));
}
B4d0031:{NFSU2_TR(0x4d0031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0036ull));
TAIL_STATIC(0x5031d0u,503);
}
B4d0036:L4d0036:{c.instructions+=2;NFSU2_TR(0x4d0036);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4d0039:{NFSU2_TR(0x4d0039);
if(r1(R+518)){{goto L4d0309;}}
}
B4d003f:L4d003f:{c.instructions+=2;NFSU2_TR(0x4d003f);
w4(R+4,u32(0x850080ull));
}
B4d0044:{NFSU2_TR(0x4d0044);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0049ull));
TAIL_STATIC(0x503210u,503);
}
B4d0049:L4d0049:{c.instructions+=2;NFSU2_TR(0x4d0049);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4d004c:{NFSU2_TR(0x4d004c);
if(r1(R+518)){{goto L4d0309;}}
}
B4d0052:L4d0052:{c.instructions+=1;NFSU2_TR(0x4d0052);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0057ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4d0057:L4d0057:{c.instructions+=8;NFSU2_TR(0x4d0057);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4d0059:{NFSU2_TR(0x4d0059);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4d005c:{NFSU2_TR(0x4d005c);
w4(R+4,u32(0x850080ull));
}
B4d0061:{NFSU2_TR(0x4d0061);
__builtin_memmove((R+28),(R+0),4);
}
B4d0063:{NFSU2_TR(0x4d0063);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0064:{NFSU2_TR(0x4d0064);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0065:{NFSU2_TR(0x4d0065);
u8 U[4];
w4(U+0,u32(0x4b9110ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d006a:{NFSU2_TR(0x4d006a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d006full));
TAIL_STATIC(0x503210u,503);
}
B4d006f:L4d006f:{c.instructions+=3;NFSU2_TR(0x4d006f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0070:{NFSU2_TR(0x4d0070);
w4(R+4,u32(0x850080ull));
}
B4d0075:{NFSU2_TR(0x4d0075);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d007aull));
TAIL_STATIC(0x5031d0u,503);
}
B4d007a:L4d007a:{c.instructions+=3;NFSU2_TR(0x4d007a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d007b:{NFSU2_TR(0x4d007b);
__builtin_memmove((R+4),(R+28),4);
}
B4d007d:{NFSU2_TR(0x4d007d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0082ull));
TAIL_STATIC(0x588770u,588);
}
B4d0082:L4d0082:{c.instructions+=2;NFSU2_TR(0x4d0082);
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
B4d0084:{NFSU2_TR(0x4d0084);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4d030c;}}
}
B4d008a:L4d008a:{c.instructions+=3;NFSU2_TR(0x4d008a);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d008c:{NFSU2_TR(0x4d008c);
w4(R+4,u32(0x850080ull));
}
B4d0091:{NFSU2_TR(0x4d0091);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0096ull));
TAIL_STATIC(0x5031b0u,503);
}
B4d0096:L4d0096:{c.instructions+=9;NFSU2_TR(0x4d0096);
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
B4d0098:{NFSU2_TR(0x4d0098);
u8 U[8];
w4(U+0,u32(u32(u32(0x1dcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d009f:{NFSU2_TR(0x4d009f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d00a6:{NFSU2_TR(0x4d00a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d00a7:{NFSU2_TR(0x4d00a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d00a8:{NFSU2_TR(0x4d00a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d00a9:{NFSU2_TR(0x4d00a9);
__builtin_memmove((R+16),(R+20),4);
}
B4d00ab:{NFSU2_TR(0x4d00ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d00ac:{NFSU2_TR(0x4d00ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d00af:L4d00af:{c.instructions+=2;NFSU2_TR(0x4d00af);
w4(R+4,u32(0x850080ull));
}
B4d00b4:{NFSU2_TR(0x4d00b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d00b9ull));
TAIL_STATIC(0x5031f0u,503);
}
B4d00b9:L4d00b9:{c.instructions+=2;NFSU2_TR(0x4d00b9);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4d00bc:{NFSU2_TR(0x4d00bc);
if(r1(R+518)){{goto L4d0309;}}
}
B4d00c2:L4d00c2:{c.instructions+=1;NFSU2_TR(0x4d00c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d00c7ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4d00c7:L4d00c7:{c.instructions+=5;NFSU2_TR(0x4d00c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d00c8:{NFSU2_TR(0x4d00c8);
u8 U[4];
w4(U+0,u32(0x4b9220ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d00cd:{NFSU2_TR(0x4d00cd);
w4(R+4,u32(0x850080ull));
}
B4d00d2:{NFSU2_TR(0x4d00d2);
__builtin_memmove((R+28),(R+0),4);
}
B4d00d4:{NFSU2_TR(0x4d00d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d00d9ull));
TAIL_STATIC(0x5031f0u,503);
}
B4d00d9:L4d00d9:{c.instructions+=3;NFSU2_TR(0x4d00d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d00da:{NFSU2_TR(0x4d00da);
__builtin_memmove((R+4),(R+28),4);
}
B4d00dc:{NFSU2_TR(0x4d00dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d00e1ull));
TAIL_STATIC(0x588b00u,588);
}
B4d00e1:L4d00e1:{c.instructions+=2;NFSU2_TR(0x4d00e1);
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
B4d00e3:{NFSU2_TR(0x4d00e3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4d030c;}}
}
B4d00e9:L4d00e9:{c.instructions+=3;NFSU2_TR(0x4d00e9);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d00eb:{NFSU2_TR(0x4d00eb);
w4(R+4,u32(0x850080ull));
}
B4d00f0:{NFSU2_TR(0x4d00f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d00f5ull));
TAIL_STATIC(0x5031b0u,503);
}
B4d00f5:L4d00f5:{c.instructions+=9;NFSU2_TR(0x4d00f5);
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
B4d00f7:{NFSU2_TR(0x4d00f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1dcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d00fe:{NFSU2_TR(0x4d00fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0105:{NFSU2_TR(0x4d0105);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d0106:{NFSU2_TR(0x4d0106);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d0107:{NFSU2_TR(0x4d0107);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d0108:{NFSU2_TR(0x4d0108);
__builtin_memmove((R+16),(R+20),4);
}
B4d010a:{NFSU2_TR(0x4d010a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d010b:{NFSU2_TR(0x4d010b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d010e:L4d010e:{c.instructions+=2;NFSU2_TR(0x4d010e);
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
B4d0118:{NFSU2_TR(0x4d0118);
if(r1(R+518)){{goto L4d020f;}}
}
B4d011e:L4d011e:{c.instructions+=2;NFSU2_TR(0x4d011e);
w4(R+4,u32(0x89cf48ull));
}
B4d0123:{NFSU2_TR(0x4d0123);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0128ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4d0128:L4d0128:{c.instructions+=2;NFSU2_TR(0x4d0128);
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
B4d012a:{NFSU2_TR(0x4d012a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d020f;}}
}
B4d0130:L4d0130:{c.instructions+=1;NFSU2_TR(0x4d0130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0135ull));
TAIL_STATIC(0x582b60u,582);
}
B4d0135:L4d0135:{c.instructions+=4;NFSU2_TR(0x4d0135);
__builtin_memmove((R+28),(R+0),4);
}
B4d0137:{NFSU2_TR(0x4d0137);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d013d:{NFSU2_TR(0x4d013d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d013f:{NFSU2_TR(0x4d013f);
if(r1(R+518)){{goto L4d01c7;}}
}
B4d0145:L4d0145:{c.instructions+=2;NFSU2_TR(0x4d0145);
__builtin_memmove((R+4),(R+28),4);
}
B4d0147:{NFSU2_TR(0x4d0147);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d014cull));
TAIL_STATIC(0x5908a0u,590);
}
B4d014c:L4d014c:{c.instructions+=3;NFSU2_TR(0x4d014c);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d014e:{NFSU2_TR(0x4d014e);
w4(R+4,u32(0x850080ull));
}
B4d0153:{NFSU2_TR(0x4d0153);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0158ull));
TAIL_STATIC(0x5031b0u,503);
}
B4d0158:L4d0158:{c.instructions+=4;NFSU2_TR(0x4d0158);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d015d:{NFSU2_TR(0x4d015d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d015f:{NFSU2_TR(0x4d015f);
w4(R+4,u32(0x1full));
}
B4d0164:{NFSU2_TR(0x4d0164);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4d0168:L4d0168:{c.instructions+=1;NFSU2_TR(0x4d0168);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4d016a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d0168u);}goto L4d0168;}
}
B4d016a:L4d016a:{c.instructions+=5;NFSU2_TR(0x4d016a);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4d016c:{NFSU2_TR(0x4d016c);
u8 U[4];
w4(U+0,u32(0x794d2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0171:{NFSU2_TR(0x4d0171);
u8 U[4];
w4(U+0,u32(0x679fd4e9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0176:{NFSU2_TR(0x4d0176);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4d0177:{NFSU2_TR(0x4d0177);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d017cull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d017c:L4d017c:{c.instructions+=6;NFSU2_TR(0x4d017c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d017f:{NFSU2_TR(0x4d017f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0180:{NFSU2_TR(0x4d0180);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d0184:{NFSU2_TR(0x4d0184);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0189:{NFSU2_TR(0x4d0189);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d018a:{NFSU2_TR(0x4d018a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d018full));
TAIL_STATIC(0x50c960u,50c);
}
B4d018f:L4d018f:{c.instructions+=1;NFSU2_TR(0x4d018f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0194ull));
TAIL_STATIC(0x582b60u,582);
}
B4d0194:L4d0194:{c.instructions+=8;NFSU2_TR(0x4d0194);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d019a:{NFSU2_TR(0x4d019a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d019c:{NFSU2_TR(0x4d019c);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d01a0:{NFSU2_TR(0x4d01a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d01a1:{NFSU2_TR(0x4d01a1);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d01a3:{NFSU2_TR(0x4d01a3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d01a5:{NFSU2_TR(0x4d01a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d01a6:{NFSU2_TR(0x4d01a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d01abull));
TAIL_STATIC(0x73f180u,73f);
}
B4d01ab:L4d01ab:{c.instructions+=10;NFSU2_TR(0x4d01ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4d01ae:{NFSU2_TR(0x4d01ae);
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
B4d01b0:{NFSU2_TR(0x4d01b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1dcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d01b7:{NFSU2_TR(0x4d01b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d01be:{NFSU2_TR(0x4d01be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d01bf:{NFSU2_TR(0x4d01bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d01c0:{NFSU2_TR(0x4d01c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d01c1:{NFSU2_TR(0x4d01c1);
__builtin_memmove((R+16),(R+20),4);
}
B4d01c3:{NFSU2_TR(0x4d01c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d01c4:{NFSU2_TR(0x4d01c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d01c7:L4d01c7:{c.instructions+=4;NFSU2_TR(0x4d01c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d01c8:{NFSU2_TR(0x4d01c8);
u8 U[4];
w4(U+0,u32(0x4b9030ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d01cd:{NFSU2_TR(0x4d01cd);
w4(R+4,u32(0x850080ull));
}
B4d01d2:{NFSU2_TR(0x4d01d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d01d7ull));
TAIL_STATIC(0x503210u,503);
}
B4d01d7:L4d01d7:{c.instructions+=3;NFSU2_TR(0x4d01d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d01d8:{NFSU2_TR(0x4d01d8);
w4(R+4,u32(0x850080ull));
}
B4d01dd:{NFSU2_TR(0x4d01dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d01e2ull));
TAIL_STATIC(0x5031f0u,503);
}
B4d01e2:L4d01e2:{c.instructions+=3;NFSU2_TR(0x4d01e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d01e3:{NFSU2_TR(0x4d01e3);
__builtin_memmove((R+4),(R+28),4);
}
B4d01e5:{NFSU2_TR(0x4d01e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d01eaull));
TAIL_STATIC(0x5909e0u,590);
}
B4d01ea:L4d01ea:{c.instructions+=3;NFSU2_TR(0x4d01ea);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d01ec:{NFSU2_TR(0x4d01ec);
w4(R+4,u32(0x850080ull));
}
B4d01f1:{NFSU2_TR(0x4d01f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d01f6ull));
TAIL_STATIC(0x5031b0u,503);
}
B4d01f6:L4d01f6:{c.instructions+=9;NFSU2_TR(0x4d01f6);
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
B4d01f8:{NFSU2_TR(0x4d01f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1dcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d01ff:{NFSU2_TR(0x4d01ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0206:{NFSU2_TR(0x4d0206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d0207:{NFSU2_TR(0x4d0207);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d0208:{NFSU2_TR(0x4d0208);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d0209:{NFSU2_TR(0x4d0209);
__builtin_memmove((R+16),(R+20),4);
}
B4d020b:{NFSU2_TR(0x4d020b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d020c:{NFSU2_TR(0x4d020c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d020f:L4d020f:{c.instructions+=3;NFSU2_TR(0x4d020f);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0211:{NFSU2_TR(0x4d0211);
w4(R+4,u32(0x850080ull));
}
B4d0216:{NFSU2_TR(0x4d0216);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d021bull));
TAIL_STATIC(0x5031b0u,503);
}
B4d021b:L4d021b:{c.instructions+=9;NFSU2_TR(0x4d021b);
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
B4d021d:{NFSU2_TR(0x4d021d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1dcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d0224:{NFSU2_TR(0x4d0224);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d022b:{NFSU2_TR(0x4d022b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d022c:{NFSU2_TR(0x4d022c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d022d:{NFSU2_TR(0x4d022d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d022e:{NFSU2_TR(0x4d022e);
__builtin_memmove((R+16),(R+20),4);
}
B4d0230:{NFSU2_TR(0x4d0230);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d0231:{NFSU2_TR(0x4d0231);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d0234:L4d0234:{c.instructions+=2;NFSU2_TR(0x4d0234);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d023b:{NFSU2_TR(0x4d023b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0240ull));
TAIL_STATIC(0x4ae7f0u,4ae);
}
B4d0240:L4d0240:{c.instructions+=6;NFSU2_TR(0x4d0240);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0242:{NFSU2_TR(0x4d0242);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d0249:{NFSU2_TR(0x4d0249);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d024b:{NFSU2_TR(0x4d024b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d024c:{NFSU2_TR(0x4d024c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d0257:{NFSU2_TR(0x4d0257);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d025cull));
TAIL_STATIC(0x58b9a0u,58b);
}
B4d025c:L4d025c:{c.instructions+=2;NFSU2_TR(0x4d025c);
__builtin_memmove((R+4),(R+0),4);
}
B4d025e:{NFSU2_TR(0x4d025e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0263ull));
TAIL_STATIC(0x58e850u,58e);
}
B4d0263:L4d0263:{c.instructions+=3;NFSU2_TR(0x4d0263);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0264:{NFSU2_TR(0x4d0264);
u8 U[4];
w4(U+0,u32(0x49d890ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0269:{NFSU2_TR(0x4d0269);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d026eull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4d026e:L4d026e:{c.instructions+=2;NFSU2_TR(0x4d026e);
__builtin_memmove((R+4),(R+0),4);
}
B4d0270:{NFSU2_TR(0x4d0270);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0275ull));
TAIL_STATIC(0x588b70u,588);
}
B4d0275:L4d0275:{c.instructions+=3;NFSU2_TR(0x4d0275);
__builtin_memmove((R+24),(R+0),4);
}
B4d0277:{NFSU2_TR(0x4d0277);
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
B4d0279:{NFSU2_TR(0x4d0279);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d027f;}}
}
B4d027b:L4d027b:{c.instructions+=2;NFSU2_TR(0x4d027b);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d027d:{NFSU2_TR(0x4d027d);
{goto L4d02b3;}
}
B4d027f:L4d027f:{c.instructions+=1;NFSU2_TR(0x4d027f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4d02b1;}}
}
B4d0281:L4d0281:{c.instructions+=3;NFSU2_TR(0x4d0281);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d0288:{NFSU2_TR(0x4d0288);
u8 U[8];
w4(U+0,u32(u32(u32(0x1e4ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d0293:{NFSU2_TR(0x4d0293);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0298ull));
TAIL_STATIC(0x4cbaf0u,4cb);
}
B4d0298:L4d0298:{c.instructions+=9;NFSU2_TR(0x4d0298);
__builtin_memmove((R+0),(R+24),4);
}
B4d029a:{NFSU2_TR(0x4d029a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1dcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d02a1:{NFSU2_TR(0x4d02a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d02a8:{NFSU2_TR(0x4d02a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d02a9:{NFSU2_TR(0x4d02a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d02aa:{NFSU2_TR(0x4d02aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d02ab:{NFSU2_TR(0x4d02ab);
__builtin_memmove((R+16),(R+20),4);
}
B4d02ad:{NFSU2_TR(0x4d02ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d02ae:{NFSU2_TR(0x4d02ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d02b1:L4d02b1:{c.instructions+=1;NFSU2_TR(0x4d02b1);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d02b3:L4d02b3:{c.instructions+=2;NFSU2_TR(0x4d02b3);
w4(R+4,u32(0x850080ull));
}
B4d02b8:{NFSU2_TR(0x4d02b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d02bdull));
TAIL_STATIC(0x5031b0u,503);
}
B4d02bd:L4d02bd:{c.instructions+=3;NFSU2_TR(0x4d02bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d02c4:{NFSU2_TR(0x4d02c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1e4ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d02cf:{NFSU2_TR(0x4d02cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d02d4ull));
TAIL_STATIC(0x4cbaf0u,4cb);
}
B4d02d4:L4d02d4:{c.instructions+=9;NFSU2_TR(0x4d02d4);
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
B4d02d6:{NFSU2_TR(0x4d02d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1dcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d02dd:{NFSU2_TR(0x4d02dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d02e4:{NFSU2_TR(0x4d02e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d02e5:{NFSU2_TR(0x4d02e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d02e6:{NFSU2_TR(0x4d02e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d02e7:{NFSU2_TR(0x4d02e7);
__builtin_memmove((R+16),(R+20),4);
}
B4d02e9:{NFSU2_TR(0x4d02e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d02ea:{NFSU2_TR(0x4d02ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d02ed:L4d02ed:{c.instructions+=9;NFSU2_TR(0x4d02ed);
w4(R+0,u32(0x1ull));
}
B4d02f2:{NFSU2_TR(0x4d02f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1dcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d02f9:{NFSU2_TR(0x4d02f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0300:{NFSU2_TR(0x4d0300);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d0301:{NFSU2_TR(0x4d0301);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d0302:{NFSU2_TR(0x4d0302);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d0303:{NFSU2_TR(0x4d0303);
__builtin_memmove((R+16),(R+20),4);
}
B4d0305:{NFSU2_TR(0x4d0305);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d0306:{NFSU2_TR(0x4d0306);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d0309:L4d0309:{c.instructions+=1;NFSU2_TR(0x4d0309);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d030c:L4d030c:{c.instructions+=8;NFSU2_TR(0x4d030c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1dcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d0313:{NFSU2_TR(0x4d0313);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d0314:{NFSU2_TR(0x4d0314);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d0315:{NFSU2_TR(0x4d0315);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d031c:{NFSU2_TR(0x4d031c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d031d:{NFSU2_TR(0x4d031d);
__builtin_memmove((R+16),(R+20),4);
}
B4d031f:{NFSU2_TR(0x4d031f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d0320:{NFSU2_TR(0x4d0320);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d0350:L4d0350:{c.instructions+=5;NFSU2_TR(0x4d0350);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0351:{NFSU2_TR(0x4d0351);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d0355:{NFSU2_TR(0x4d0355);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d0358:{NFSU2_TR(0x4d0358);
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
B4d035a:{NFSU2_TR(0x4d035a);
if(r1(R+518)){{goto L4d0377;}}
}
B4d035c:L4d035c:{c.instructions+=4;NFSU2_TR(0x4d035c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d035d:{NFSU2_TR(0x4d035d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4d0361:{NFSU2_TR(0x4d0361);
__builtin_memmove((R+4),(R+24),4);
}
B4d0363:{NFSU2_TR(0x4d0363);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0368ull));
TAIL_STATIC(0x4cfe90u,4cf);
}
B4d0368:L4d0368:{c.instructions+=7;NFSU2_TR(0x4d0368);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d036b:{NFSU2_TR(0x4d036b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d036e:{NFSU2_TR(0x4d036e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d0371:{NFSU2_TR(0x4d0371);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0374:{NFSU2_TR(0x4d0374);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d0375:{NFSU2_TR(0x4d0375);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d0376:{NFSU2_TR(0x4d0376);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d0377:L4d0377:{c.instructions+=3;NFSU2_TR(0x4d0377);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0379:{NFSU2_TR(0x4d0379);
w4(R+4,u32(0x850080ull));
}
B4d037e:{NFSU2_TR(0x4d037e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0383ull));
TAIL_STATIC(0x5031b0u,503);
}
B4d0383:L4d0383:{c.instructions+=2;NFSU2_TR(0x4d0383);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d0384:{NFSU2_TR(0x4d0384);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d0390:L4d0390:{c.instructions+=8;NFSU2_TR(0x4d0390);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0392:{NFSU2_TR(0x4d0392);
u8 U[4];
w4(U+0,u32(0x774594ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0397:{NFSU2_TR(0x4d0397);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d039d:{NFSU2_TR(0x4d039d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d039e:{NFSU2_TR(0x4d039e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d03a5:{NFSU2_TR(0x4d03a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d03a6:{NFSU2_TR(0x4d03a6);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d03a8:{NFSU2_TR(0x4d03a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d03adull));
TAIL_STATIC(0x575620u,575);
}
B4d03ad:L4d03ad:{c.instructions+=5;NFSU2_TR(0x4d03ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d03b0:{NFSU2_TR(0x4d03b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4d03b4:{NFSU2_TR(0x4d03b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d03b6:{NFSU2_TR(0x4d03b6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d03be:{NFSU2_TR(0x4d03be);
if(r1(R+518)){{goto L4d03db;}}
}
B4d03c0:L4d03c0:{c.instructions+=4;NFSU2_TR(0x4d03c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d03c4:{NFSU2_TR(0x4d03c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d03c5:{NFSU2_TR(0x4d03c5);
__builtin_memmove((R+4),(R+0),4);
}
B4d03c7:{NFSU2_TR(0x4d03c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d03ccull));
TAIL_STATIC(0x4b9430u,4b9);
}
B4d03cc:L4d03cc:{c.instructions+=4;NFSU2_TR(0x4d03cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d03d0:{NFSU2_TR(0x4d03d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d03d7:{NFSU2_TR(0x4d03d7);
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
B4d03da:{NFSU2_TR(0x4d03da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d03db:L4d03db:{c.instructions+=5;NFSU2_TR(0x4d03db);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d03df:{NFSU2_TR(0x4d03df);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d03e1:{NFSU2_TR(0x4d03e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d03e8:{NFSU2_TR(0x4d03e8);
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
B4d03eb:{NFSU2_TR(0x4d03eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d03f0:L4d03f0:{c.instructions+=8;NFSU2_TR(0x4d03f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d03f2:{NFSU2_TR(0x4d03f2);
u8 U[4];
w4(U+0,u32(0x7745b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d03f7:{NFSU2_TR(0x4d03f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d03fd:{NFSU2_TR(0x4d03fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d03fe:{NFSU2_TR(0x4d03fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0405:{NFSU2_TR(0x4d0405);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0406:{NFSU2_TR(0x4d0406);
u8 U[4];
w4(U+0,u32(0x70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0408:{NFSU2_TR(0x4d0408);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d040dull));
TAIL_STATIC(0x575620u,575);
}
B4d040d:L4d040d:{c.instructions+=5;NFSU2_TR(0x4d040d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d0410:{NFSU2_TR(0x4d0410);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4d0414:{NFSU2_TR(0x4d0414);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d0416:{NFSU2_TR(0x4d0416);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d041e:{NFSU2_TR(0x4d041e);
if(r1(R+518)){{goto L4d043b;}}
}
B4d0420:L4d0420:{c.instructions+=4;NFSU2_TR(0x4d0420);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d0424:{NFSU2_TR(0x4d0424);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0425:{NFSU2_TR(0x4d0425);
__builtin_memmove((R+4),(R+0),4);
}
B4d0427:{NFSU2_TR(0x4d0427);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d042cull));
TAIL_STATIC(0x4b9290u,4b9);
}
B4d042c:L4d042c:{c.instructions+=4;NFSU2_TR(0x4d042c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d0430:{NFSU2_TR(0x4d0430);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0437:{NFSU2_TR(0x4d0437);
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
B4d043a:{NFSU2_TR(0x4d043a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d043b:L4d043b:{c.instructions+=5;NFSU2_TR(0x4d043b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d043f:{NFSU2_TR(0x4d043f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d0441:{NFSU2_TR(0x4d0441);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0448:{NFSU2_TR(0x4d0448);
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
B4d044b:{NFSU2_TR(0x4d044b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d0450:L4d0450:{c.instructions+=3;NFSU2_TR(0x4d0450);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0451:{NFSU2_TR(0x4d0451);
__builtin_memmove((R+24),(R+4),4);
}
B4d0453:{NFSU2_TR(0x4d0453);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0458ull));
TAIL_STATIC(0x4b9330u,4b9);
}
B4d0458:L4d0458:{c.instructions+=2;NFSU2_TR(0x4d0458);
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
B4d045d:{NFSU2_TR(0x4d045d);
if(r1(R+518)){{goto L4d0468;}}
}
B4d045f:L4d045f:{c.instructions+=2;NFSU2_TR(0x4d045f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0460:{NFSU2_TR(0x4d0460);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0465ull));
TAIL_STATIC(0x575630u,575);
}
B4d0465:L4d0465:{c.instructions+=1;NFSU2_TR(0x4d0465);
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
B4d0468:L4d0468:{c.instructions+=3;NFSU2_TR(0x4d0468);
__builtin_memmove((R+0),(R+24),4);
}
B4d046a:{NFSU2_TR(0x4d046a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d046b:{NFSU2_TR(0x4d046b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d0470:L4d0470:{c.instructions+=4;NFSU2_TR(0x4d0470);
u8 U[22];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4d0478:{NFSU2_TR(0x4d0478);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0479:{NFSU2_TR(0x4d0479);
__builtin_memmove((R+24),(R+4),4);
}
B4d047b:{NFSU2_TR(0x4d047b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d04f2;}}
}
B4d047d:L4d047d:{c.instructions+=4;NFSU2_TR(0x4d047d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d0481:{NFSU2_TR(0x4d0481);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d0484:{NFSU2_TR(0x4d0484);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb8a7c6ccull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d0489:{NFSU2_TR(0x4d0489);
if(r1(R+518)){{goto L4d04d7;}}
}
B4d048b:L4d048b:{c.instructions+=2;NFSU2_TR(0x4d048b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb8a7c6cdull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d0490:{NFSU2_TR(0x4d0490);
if(r1(R+518)){{goto L4d04b8;}}
}
B4d0492:L4d0492:{c.instructions+=2;NFSU2_TR(0x4d0492);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb8a7c6ceull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb8a7c6ceull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb8a7c6ceull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d0497:{NFSU2_TR(0x4d0497);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d04f2;}}
}
B4d0499:L4d0499:{c.instructions+=6;NFSU2_TR(0x4d0499);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d049c:{NFSU2_TR(0x4d049c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d049f:{NFSU2_TR(0x4d049f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d04a0:{NFSU2_TR(0x4d04a0);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d04a2:{NFSU2_TR(0x4d04a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d04a3:{NFSU2_TR(0x4d04a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d04a8ull));
TAIL_STATIC(0x50d150u,50d);
}
B4d04a8:L4d04a8:{c.instructions+=4;NFSU2_TR(0x4d04a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d04ab:{NFSU2_TR(0x4d04ab);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d04ad:{NFSU2_TR(0x4d04ad);
__builtin_memmove((R+4),(R+24),4);
}
B4d04af:{NFSU2_TR(0x4d04af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d04b4ull));
TAIL_STATIC(0x4b95c0u,4b9);
}
B4d04b4:L4d04b4:{c.instructions+=2;NFSU2_TR(0x4d04b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d04b5:{NFSU2_TR(0x4d04b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d04b8:L4d04b8:{c.instructions+=6;NFSU2_TR(0x4d04b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d04bb:{NFSU2_TR(0x4d04bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d04be:{NFSU2_TR(0x4d04be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d04bf:{NFSU2_TR(0x4d04bf);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d04c1:{NFSU2_TR(0x4d04c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d04c2:{NFSU2_TR(0x4d04c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d04c7ull));
TAIL_STATIC(0x50d150u,50d);
}
B4d04c7:L4d04c7:{c.instructions+=4;NFSU2_TR(0x4d04c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d04ca:{NFSU2_TR(0x4d04ca);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d04cc:{NFSU2_TR(0x4d04cc);
__builtin_memmove((R+4),(R+24),4);
}
B4d04ce:{NFSU2_TR(0x4d04ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d04d3ull));
TAIL_STATIC(0x4b95c0u,4b9);
}
B4d04d3:L4d04d3:{c.instructions+=2;NFSU2_TR(0x4d04d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d04d4:{NFSU2_TR(0x4d04d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d04d7:L4d04d7:{c.instructions+=6;NFSU2_TR(0x4d04d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d04da:{NFSU2_TR(0x4d04da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d04dd:{NFSU2_TR(0x4d04dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d04de:{NFSU2_TR(0x4d04de);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d04e0:{NFSU2_TR(0x4d04e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d04e1:{NFSU2_TR(0x4d04e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d04e6ull));
TAIL_STATIC(0x50d150u,50d);
}
B4d04e6:L4d04e6:{c.instructions+=4;NFSU2_TR(0x4d04e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d04e9:{NFSU2_TR(0x4d04e9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d04eb:{NFSU2_TR(0x4d04eb);
__builtin_memmove((R+4),(R+24),4);
}
B4d04ed:{NFSU2_TR(0x4d04ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d04f2ull));
TAIL_STATIC(0x4b95c0u,4b9);
}
B4d04f2:L4d04f2:{c.instructions+=2;NFSU2_TR(0x4d04f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d04f3:{NFSU2_TR(0x4d04f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d0500:L4d0500:{c.instructions+=15;NFSU2_TR(0x4d0500);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0502:{NFSU2_TR(0x4d0502);
u8 U[4];
w4(U+0,u32(0x7745dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0507:{NFSU2_TR(0x4d0507);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d050d:{NFSU2_TR(0x4d050d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d050e:{NFSU2_TR(0x4d050e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0515:{NFSU2_TR(0x4d0515);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4d0518:{NFSU2_TR(0x4d0518);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d051c:{NFSU2_TR(0x4d051c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d051d:{NFSU2_TR(0x4d051d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d051e:{NFSU2_TR(0x4d051e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d051f:{NFSU2_TR(0x4d051f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0520:{NFSU2_TR(0x4d0520);
__builtin_memmove((R+24),(R+4),4);
}
B4d0522:{NFSU2_TR(0x4d0522);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0523:{NFSU2_TR(0x4d0523);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0527:{NFSU2_TR(0x4d0527);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d052cull));
TAIL_STATIC(0x552780u,552);
}
B4d052c:L4d052c:{c.instructions+=10;NFSU2_TR(0x4d052c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4d052e:{NFSU2_TR(0x4d052e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d0534:{NFSU2_TR(0x4d0534);
u8 U[4];
w4(U+0,u32(0x795ea8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d053a:{NFSU2_TR(0x4d053a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0540:{NFSU2_TR(0x4d0540);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0546:{NFSU2_TR(0x4d0546);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18aull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d054c:{NFSU2_TR(0x4d054c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0552:{NFSU2_TR(0x4d0552);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d0554:{NFSU2_TR(0x4d0554);
w4(R+4,u32(0xcull));
}
B4d0559:{NFSU2_TR(0x4d0559);
__builtin_memmove((R+28),(R+20),4);
}
B4d055b:L4d055b:{c.instructions+=1;NFSU2_TR(0x4d055b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4d055d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d055bu);}goto L4d055b;}
}
B4d055d:L4d055d:{c.instructions+=4;NFSU2_TR(0x4d055d);
u8 U[4];
w4(U+0,u32(0x258ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0562:{NFSU2_TR(0x4d0562);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0566:{NFSU2_TR(0x4d0566);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4d0568:{NFSU2_TR(0x4d0568);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d056dull));
TAIL_STATIC(0x575620u,575);
}
B4d056d:L4d056d:{c.instructions+=6;NFSU2_TR(0x4d056d);
__builtin_memmove((R+28),(R+0),4);
}
B4d056f:{NFSU2_TR(0x4d056f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d0572:{NFSU2_TR(0x4d0572);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0576:{NFSU2_TR(0x4d0576);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d0578:{NFSU2_TR(0x4d0578);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d057d:{NFSU2_TR(0x4d057d);
if(r1(R+518)){{goto L4d05b7;}}
}
B4d057f:L4d057f:{c.instructions+=14;NFSU2_TR(0x4d057f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0581:{NFSU2_TR(0x4d0581);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0583:{NFSU2_TR(0x4d0583);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0584:{NFSU2_TR(0x4d0584);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d058a:{NFSU2_TR(0x4d058a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d058b:{NFSU2_TR(0x4d058b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4d0591:{NFSU2_TR(0x4d0591);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0592:{NFSU2_TR(0x4d0592);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d0598:{NFSU2_TR(0x4d0598);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0599:{NFSU2_TR(0x4d0599);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d059f:{NFSU2_TR(0x4d059f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d05a0:{NFSU2_TR(0x4d05a0);
u8 U[4];
w4(U+0,u32(0x32ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d05a2:{NFSU2_TR(0x4d05a2);
__builtin_memmove((R+4),(R+28),4);
}
B4d05a4:{NFSU2_TR(0x4d05a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d05a9ull));
TAIL_STATIC(0x51e9e0u,51e);
}
B4d05a9:L4d05a9:{c.instructions+=3;NFSU2_TR(0x4d05a9);
u8 U[4];
w4(U+0,u32(0x7946d0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4d05af:{NFSU2_TR(0x4d05af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x254ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d05b5:{NFSU2_TR(0x4d05b5);
{goto L4d05b9;}
}
B4d05b7:L4d05b7:{c.instructions+=1;NFSU2_TR(0x4d05b7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d05b9:L4d05b9:{c.instructions+=4;NFSU2_TR(0x4d05b9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d05ba:{NFSU2_TR(0x4d05ba);
__builtin_memmove((R+4),(R+24),4);
}
B4d05bc:{NFSU2_TR(0x4d05bc);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d05c0:{NFSU2_TR(0x4d05c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d05c5ull));
TAIL_STATIC(0x54f820u,54f);
}
B4d05c5:L4d05c5:{c.instructions+=4;NFSU2_TR(0x4d05c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d05c6:{NFSU2_TR(0x4d05c6);
__builtin_memmove((R+4),(R+24),4);
}
B4d05c8:{NFSU2_TR(0x4d05c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d05ce:{NFSU2_TR(0x4d05ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d05d3ull));
TAIL_STATIC(0x51fe70u,51f);
}
B4d05d3:L4d05d3:{c.instructions+=3;NFSU2_TR(0x4d05d3);
u8 U[4];
w4(U+0,u32(0xbedf2b09ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d05d8:{NFSU2_TR(0x4d05d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d05de:{NFSU2_TR(0x4d05de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d05e3ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d05e3:L4d05e3:{c.instructions+=4;NFSU2_TR(0x4d05e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d05e9:{NFSU2_TR(0x4d05e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d05ec:{NFSU2_TR(0x4d05ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d05ed:{NFSU2_TR(0x4d05ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d05f2ull));
TAIL_STATIC(0x50d7e0u,50d);
}
B4d05f2:L4d05f2:{c.instructions+=6;NFSU2_TR(0x4d05f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d05f6:{NFSU2_TR(0x4d05f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d05f9:{NFSU2_TR(0x4d05f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d05fa:{NFSU2_TR(0x4d05fa);
__builtin_memmove((R+4),(R+24),4);
}
B4d05fc:{NFSU2_TR(0x4d05fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xafull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d0602:{NFSU2_TR(0x4d0602);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0607ull));
TAIL_STATIC(0x539650u,539);
}
B4d0607:L4d0607:{c.instructions+=9;NFSU2_TR(0x4d0607);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d060b:{NFSU2_TR(0x4d060b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d060c:{NFSU2_TR(0x4d060c);
__builtin_memmove((R+0),(R+24),4);
}
B4d060e:{NFSU2_TR(0x4d060e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d060f:{NFSU2_TR(0x4d060f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d0610:{NFSU2_TR(0x4d0610);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d0611:{NFSU2_TR(0x4d0611);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0618:{NFSU2_TR(0x4d0618);
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
B4d061b:{NFSU2_TR(0x4d061b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d0620:L4d0620:{c.instructions+=14;NFSU2_TR(0x4d0620);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0622:{NFSU2_TR(0x4d0622);
u8 U[4];
w4(U+0,u32(0x776e28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0627:{NFSU2_TR(0x4d0627);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d062d:{NFSU2_TR(0x4d062d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d062e:{NFSU2_TR(0x4d062e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0635:{NFSU2_TR(0x4d0635);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0636:{NFSU2_TR(0x4d0636);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0637:{NFSU2_TR(0x4d0637);
__builtin_memmove((R+24),(R+4),4);
}
B4d0639:{NFSU2_TR(0x4d0639);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d063d:{NFSU2_TR(0x4d063d);
u8 U[4];
w4(U+0,u32(0x795ea8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d0643:{NFSU2_TR(0x4d0643);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d0649:{NFSU2_TR(0x4d0649);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d064b:{NFSU2_TR(0x4d064b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d0653:{NFSU2_TR(0x4d0653);
if(r1(R+518)){{goto L4d0668;}}
}
B4d0655:L4d0655:{c.instructions+=2;NFSU2_TR(0x4d0655);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0656:{NFSU2_TR(0x4d0656);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d065bull));
TAIL_STATIC(0x540a60u,540);
}
B4d065b:L4d065b:{c.instructions+=2;NFSU2_TR(0x4d065b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d065e:{NFSU2_TR(0x4d065e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d0668:L4d0668:{c.instructions+=3;NFSU2_TR(0x4d0668);
__builtin_memmove((R+4),(R+24),4);
}
B4d066a:{NFSU2_TR(0x4d066a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d0672:{NFSU2_TR(0x4d0672);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0677ull));
TAIL_STATIC(0x4cbc30u,4cb);
}
B4d0677:L4d0677:{c.instructions+=5;NFSU2_TR(0x4d0677);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d067b:{NFSU2_TR(0x4d067b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d067c:{NFSU2_TR(0x4d067c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0683:{NFSU2_TR(0x4d0683);
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
B4d0686:{NFSU2_TR(0x4d0686);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d0690:L4d0690:{c.instructions+=14;NFSU2_TR(0x4d0690);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0692:{NFSU2_TR(0x4d0692);
u8 U[4];
w4(U+0,u32(0x774606ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0697:{NFSU2_TR(0x4d0697);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d069d:{NFSU2_TR(0x4d069d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d069e:{NFSU2_TR(0x4d069e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d06a5:{NFSU2_TR(0x4d06a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d06a6:{NFSU2_TR(0x4d06a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d06aa:{NFSU2_TR(0x4d06aa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d06ab:{NFSU2_TR(0x4d06ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d06ac:{NFSU2_TR(0x4d06ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d06ad:{NFSU2_TR(0x4d06ad);
__builtin_memmove((R+28),(R+4),4);
}
B4d06af:{NFSU2_TR(0x4d06af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d06b0:{NFSU2_TR(0x4d06b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d06b4:{NFSU2_TR(0x4d06b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d06b9ull));
TAIL_STATIC(0x552780u,552);
}
B4d06b9:L4d06b9:{c.instructions+=19;NFSU2_TR(0x4d06b9);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d06bb:{NFSU2_TR(0x4d06bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x154ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d06c1:{NFSU2_TR(0x4d06c1);
u8 U[4];
w4(U+0,u32(0x795ed4ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4d06c7:{NFSU2_TR(0x4d06c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d06cd:{NFSU2_TR(0x4d06cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d06d3:{NFSU2_TR(0x4d06d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x151ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d06d9:{NFSU2_TR(0x4d06d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d06dd:{NFSU2_TR(0x4d06dd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4d06df:{NFSU2_TR(0x4d06df);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d06e2:{NFSU2_TR(0x4d06e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d06e5:{NFSU2_TR(0x4d06e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d06e8:{NFSU2_TR(0x4d06e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d06eb:{NFSU2_TR(0x4d06eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d06ee:{NFSU2_TR(0x4d06ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d06f1:{NFSU2_TR(0x4d06f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d06f4:{NFSU2_TR(0x4d06f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d06f7:{NFSU2_TR(0x4d06f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d06fa:{NFSU2_TR(0x4d06fa);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d06ff:{NFSU2_TR(0x4d06ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0704ull));
TAIL_STATIC(0x570a30u,570);
}
B4d0704:L4d0704:{c.instructions+=2;NFSU2_TR(0x4d0704);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d0706:{NFSU2_TR(0x4d0706);
if(r1(R+518)){{goto L4d0727;}}
}
B4d0708:L4d0708:{c.instructions+=4;NFSU2_TR(0x4d0708);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0709:{NFSU2_TR(0x4d0709);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4d070c:{NFSU2_TR(0x4d070c);
u8 U[4];
w4(U+0,u32(0x795ebcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0711:{NFSU2_TR(0x4d0711);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0716ull));
TAIL_STATIC(0x505450u,505);
}
B4d0716:L4d0716:{c.instructions+=3;NFSU2_TR(0x4d0716);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0717:{NFSU2_TR(0x4d0717);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0718:{NFSU2_TR(0x4d0718);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d071dull));
TAIL_STATIC(0x5379c0u,537);
}
B4d071d:L4d071d:{c.instructions+=2;NFSU2_TR(0x4d071d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d071e:{NFSU2_TR(0x4d071e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0723ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4d0723:L4d0723:{c.instructions+=2;NFSU2_TR(0x4d0723);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d0726:{NFSU2_TR(0x4d0726);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d0727:L4d0727:{c.instructions+=3;NFSU2_TR(0x4d0727);
__builtin_memmove((R+4),(R+28),4);
}
B4d0729:{NFSU2_TR(0x4d0729);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x134ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d0733:{NFSU2_TR(0x4d0733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0738ull));
TAIL_STATIC(0x4b9d20u,4b9);
}
B4d0738:L4d0738:{c.instructions+=2;NFSU2_TR(0x4d0738);
u8 U[8];
__builtin_memmove((U+0),gp(0x8500d0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d073f:{NFSU2_TR(0x4d073f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4d0761;}}
}
B4d0741:L4d0741:{c.instructions+=2;NFSU2_TR(0x4d0741);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0742:{NFSU2_TR(0x4d0742);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0747ull));
TAIL_STATIC(0x58fd50u,58f);
}
B4d0747:L4d0747:{c.instructions+=4;NFSU2_TR(0x4d0747);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d074a:{NFSU2_TR(0x4d074a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d074b:{NFSU2_TR(0x4d074b);
w4(R+4,u32(0x89cf48ull));
}
B4d0750:{NFSU2_TR(0x4d0750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0755ull));
TAIL_STATIC(0x5fe2b0u,5fe);
}
B4d0755:L4d0755:{c.instructions+=3;NFSU2_TR(0x4d0755);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0757:{NFSU2_TR(0x4d0757);
w4(R+4,u32(0x850080ull));
}
B4d075c:{NFSU2_TR(0x4d075c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0761ull));
TAIL_STATIC(0x5031b0u,503);
}
B4d0761:L4d0761:{c.instructions+=3;NFSU2_TR(0x4d0761);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4d0766:{NFSU2_TR(0x4d0766);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d076c:{NFSU2_TR(0x4d076c);
if(r1(R+518)){{goto L4d0797;}}
}
B4d076e:L4d076e:{c.instructions+=2;NFSU2_TR(0x4d076e);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x151ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d0774:{NFSU2_TR(0x4d0774);
if(r1(R+518)){{goto L4d0797;}}
}
B4d0776:L4d0776:{c.instructions+=2;NFSU2_TR(0x4d0776);
u8 U[4];
w4(U+0,u32(0x144849c1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d077b:{NFSU2_TR(0x4d077b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0780ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d0780:L4d0780:{c.instructions+=4;NFSU2_TR(0x4d0780);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0781:{NFSU2_TR(0x4d0781);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0782:{NFSU2_TR(0x4d0782);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0783:{NFSU2_TR(0x4d0783);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0788ull));
TAIL_STATIC(0x4cfcb0u,4cf);
}
B4d0788:L4d0788:{c.instructions+=3;NFSU2_TR(0x4d0788);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x160ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d078f:{NFSU2_TR(0x4d078f);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4d0794:{NFSU2_TR(0x4d0794);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d0797:L4d0797:{c.instructions+=13;NFSU2_TR(0x4d0797);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d079d:{NFSU2_TR(0x4d079d);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4d07a3:{NFSU2_TR(0x4d07a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d07a9:{NFSU2_TR(0x4d07a9);
__builtin_memmove((R+8),gp(0x836370),4);
}
B4d07af:{NFSU2_TR(0x4d07af);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d07b3:{NFSU2_TR(0x4d07b3);
__builtin_memmove((R+0),(R+28),4);
}
B4d07b5:{NFSU2_TR(0x4d07b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d07b6:{NFSU2_TR(0x4d07b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x151ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d07bc:{NFSU2_TR(0x4d07bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d07bd:{NFSU2_TR(0x4d07bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d07be:{NFSU2_TR(0x4d07be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d07c5:{NFSU2_TR(0x4d07c5);
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
B4d07c8:{NFSU2_TR(0x4d07c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d07d0:L4d07d0:{c.instructions+=14;NFSU2_TR(0x4d07d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d07d2:{NFSU2_TR(0x4d07d2);
u8 U[4];
w4(U+0,u32(0x774606ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d07d7:{NFSU2_TR(0x4d07d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d07dd:{NFSU2_TR(0x4d07dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d07de:{NFSU2_TR(0x4d07de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d07e5:{NFSU2_TR(0x4d07e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d07e6:{NFSU2_TR(0x4d07e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d07e7:{NFSU2_TR(0x4d07e7);
__builtin_memmove((R+24),(R+4),4);
}
B4d07e9:{NFSU2_TR(0x4d07e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d07ed:{NFSU2_TR(0x4d07ed);
u8 U[4];
w4(U+0,u32(0x795ed4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d07f3:{NFSU2_TR(0x4d07f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d07f9:{NFSU2_TR(0x4d07f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d07fb:{NFSU2_TR(0x4d07fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d0803:{NFSU2_TR(0x4d0803);
if(r1(R+518)){{goto L4d0818;}}
}
B4d0805:L4d0805:{c.instructions+=2;NFSU2_TR(0x4d0805);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0806:{NFSU2_TR(0x4d0806);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d080bull));
TAIL_STATIC(0x540a60u,540);
}
B4d080b:L4d080b:{c.instructions+=2;NFSU2_TR(0x4d080b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d080e:{NFSU2_TR(0x4d080e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d0818:L4d0818:{c.instructions+=4;NFSU2_TR(0x4d0818);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d081e:{NFSU2_TR(0x4d081e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d0820:{NFSU2_TR(0x4d0820);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d0825:{NFSU2_TR(0x4d0825);
if(r1(R+518)){{goto L4d083a;}}
}
B4d0827:L4d0827:{c.instructions+=2;NFSU2_TR(0x4d0827);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0828:{NFSU2_TR(0x4d0828);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d082dull));
TAIL_STATIC(0x540a60u,540);
}
B4d082d:L4d082d:{c.instructions+=2;NFSU2_TR(0x4d082d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d0830:{NFSU2_TR(0x4d0830);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d083a:L4d083a:{c.instructions+=3;NFSU2_TR(0x4d083a);
__builtin_memmove((R+4),(R+24),4);
}
B4d083c:{NFSU2_TR(0x4d083c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d0844:{NFSU2_TR(0x4d0844);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0849ull));
TAIL_STATIC(0x4cbc30u,4cb);
}
B4d0849:L4d0849:{c.instructions+=5;NFSU2_TR(0x4d0849);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d084d:{NFSU2_TR(0x4d084d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d084e:{NFSU2_TR(0x4d084e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0855:{NFSU2_TR(0x4d0855);
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
B4d0858:{NFSU2_TR(0x4d0858);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d0860:L4d0860:{c.instructions+=12;NFSU2_TR(0x4d0860);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0862:{NFSU2_TR(0x4d0862);
u8 U[4];
w4(U+0,u32(0x774626ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0867:{NFSU2_TR(0x4d0867);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d086d:{NFSU2_TR(0x4d086d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d086e:{NFSU2_TR(0x4d086e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0875:{NFSU2_TR(0x4d0875);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0876:{NFSU2_TR(0x4d0876);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d087a:{NFSU2_TR(0x4d087a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d087b:{NFSU2_TR(0x4d087b);
__builtin_memmove((R+24),(R+4),4);
}
B4d087d:{NFSU2_TR(0x4d087d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d087e:{NFSU2_TR(0x4d087e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0882:{NFSU2_TR(0x4d0882);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0887ull));
TAIL_STATIC(0x552780u,552);
}
B4d0887:L4d0887:{c.instructions+=19;NFSU2_TR(0x4d0887);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d0889:{NFSU2_TR(0x4d0889);
u8 U[4];
w4(U+0,u32(0x795ee8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d088f:{NFSU2_TR(0x4d088f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0895:{NFSU2_TR(0x4d0895);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0899:{NFSU2_TR(0x4d0899);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d089f:{NFSU2_TR(0x4d089f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d08a5:{NFSU2_TR(0x4d08a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d08ab:{NFSU2_TR(0x4d08ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d08b1:{NFSU2_TR(0x4d08b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d08b7:{NFSU2_TR(0x4d08b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d08bd:{NFSU2_TR(0x4d08bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d08c3:{NFSU2_TR(0x4d08c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d08c9:{NFSU2_TR(0x4d08c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d08cf:{NFSU2_TR(0x4d08cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d08d5:{NFSU2_TR(0x4d08d5);
__builtin_memmove((R+4),(R+24),4);
}
B4d08d7:{NFSU2_TR(0x4d08d7);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d08dc:{NFSU2_TR(0x4d08dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d08e2:{NFSU2_TR(0x4d08e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d08e8:{NFSU2_TR(0x4d08e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d08edull));
TAIL_STATIC(0x4ba030u,4ba);
}
B4d08ed:L4d08ed:{c.instructions+=6;NFSU2_TR(0x4d08ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d08f1:{NFSU2_TR(0x4d08f1);
__builtin_memmove((R+0),(R+24),4);
}
B4d08f3:{NFSU2_TR(0x4d08f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d08f4:{NFSU2_TR(0x4d08f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d08fb:{NFSU2_TR(0x4d08fb);
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
B4d08fe:{NFSU2_TR(0x4d08fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d0910:L4d0910:{c.instructions+=14;NFSU2_TR(0x4d0910);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0912:{NFSU2_TR(0x4d0912);
u8 U[4];
w4(U+0,u32(0x774626ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0917:{NFSU2_TR(0x4d0917);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d091d:{NFSU2_TR(0x4d091d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d091e:{NFSU2_TR(0x4d091e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0925:{NFSU2_TR(0x4d0925);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0926:{NFSU2_TR(0x4d0926);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0927:{NFSU2_TR(0x4d0927);
__builtin_memmove((R+24),(R+4),4);
}
B4d0929:{NFSU2_TR(0x4d0929);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d092d:{NFSU2_TR(0x4d092d);
u8 U[4];
w4(U+0,u32(0x795ee8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d0933:{NFSU2_TR(0x4d0933);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d0939:{NFSU2_TR(0x4d0939);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d093b:{NFSU2_TR(0x4d093b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d0943:{NFSU2_TR(0x4d0943);
if(r1(R+518)){{goto L4d0958;}}
}
B4d0945:L4d0945:{c.instructions+=2;NFSU2_TR(0x4d0945);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0946:{NFSU2_TR(0x4d0946);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d094bull));
TAIL_STATIC(0x540a60u,540);
}
B4d094b:L4d094b:{c.instructions+=2;NFSU2_TR(0x4d094b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d094e:{NFSU2_TR(0x4d094e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d0958:L4d0958:{c.instructions+=4;NFSU2_TR(0x4d0958);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d095e:{NFSU2_TR(0x4d095e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d0960:{NFSU2_TR(0x4d0960);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d0965:{NFSU2_TR(0x4d0965);
if(r1(R+518)){{goto L4d097a;}}
}
B4d0967:L4d0967:{c.instructions+=2;NFSU2_TR(0x4d0967);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0968:{NFSU2_TR(0x4d0968);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d096dull));
TAIL_STATIC(0x540a60u,540);
}
B4d096d:L4d096d:{c.instructions+=2;NFSU2_TR(0x4d096d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d0970:{NFSU2_TR(0x4d0970);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d097a:L4d097a:{c.instructions+=3;NFSU2_TR(0x4d097a);
__builtin_memmove((R+4),(R+24),4);
}
B4d097c:{NFSU2_TR(0x4d097c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d0984:{NFSU2_TR(0x4d0984);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0989ull));
TAIL_STATIC(0x4cbc30u,4cb);
}
B4d0989:L4d0989:{c.instructions+=5;NFSU2_TR(0x4d0989);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d098d:{NFSU2_TR(0x4d098d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d098e:{NFSU2_TR(0x4d098e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0995:{NFSU2_TR(0x4d0995);
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
B4d0998:{NFSU2_TR(0x4d0998);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d09a0:L4d09a0:{c.instructions+=15;NFSU2_TR(0x4d09a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d09a2:{NFSU2_TR(0x4d09a2);
u8 U[4];
w4(U+0,u32(0x774736ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d09a7:{NFSU2_TR(0x4d09a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d09ad:{NFSU2_TR(0x4d09ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d09ae:{NFSU2_TR(0x4d09ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d09b5:{NFSU2_TR(0x4d09b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d09b6:{NFSU2_TR(0x4d09b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d09ba:{NFSU2_TR(0x4d09ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d09bb:{NFSU2_TR(0x4d09bb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d09bc:{NFSU2_TR(0x4d09bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d09bd:{NFSU2_TR(0x4d09bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d09be:{NFSU2_TR(0x4d09be);
__builtin_memmove((R+24),(R+4),4);
}
B4d09c0:{NFSU2_TR(0x4d09c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d09c1:{NFSU2_TR(0x4d09c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d09c5:{NFSU2_TR(0x4d09c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d09caull));
TAIL_STATIC(0x552780u,552);
}
B4d09ca:L4d09ca:{c.instructions+=19;NFSU2_TR(0x4d09ca);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d09cc:{NFSU2_TR(0x4d09cc);
u8 U[4];
w4(U+0,u32(0x795f94ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d09d2:{NFSU2_TR(0x4d09d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d09d8:{NFSU2_TR(0x4d09d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d09dc:{NFSU2_TR(0x4d09dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d09e2:{NFSU2_TR(0x4d09e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d09e8:{NFSU2_TR(0x4d09e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d09ee:{NFSU2_TR(0x4d09ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d09f4:{NFSU2_TR(0x4d09f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x195ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d09fa:{NFSU2_TR(0x4d09fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x196ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d0a00:{NFSU2_TR(0x4d0a00);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x197ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d0a06:{NFSU2_TR(0x4d0a06);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d0a0c:{NFSU2_TR(0x4d0a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0a12:{NFSU2_TR(0x4d0a12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0a18:{NFSU2_TR(0x4d0a18);
__builtin_memmove((R+0),gp(0x836374),1);
}
B4d0a1d:{NFSU2_TR(0x4d0a1d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d0a1f:{NFSU2_TR(0x4d0a1f);
w4(R+12,u32(0x1ull));
}
B4d0a24:{NFSU2_TR(0x4d0a24);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d0a28:{NFSU2_TR(0x4d0a28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d0a41;}}
}
B4d0a2a:L4d0a2a:{c.instructions+=3;NFSU2_TR(0x4d0a2a);
__builtin_memmove((R+0),gp(0x836375),1);
}
B4d0a2f:{NFSU2_TR(0x4d0a2f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d0a31:{NFSU2_TR(0x4d0a31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d0a41;}}
}
B4d0a33:L4d0a33:{c.instructions+=3;NFSU2_TR(0x4d0a33);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4d0a39:{NFSU2_TR(0x4d0a39);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B4d0a3c:{NFSU2_TR(0x4d0a3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0a41ull));
TAIL_STATIC(0x495990u,495);
}
B4d0a41:L4d0a41:{c.instructions+=5;NFSU2_TR(0x4d0a41);
__builtin_memmove((R+20),gp(0x836370),4);
}
B4d0a47:{NFSU2_TR(0x4d0a47);
u8 U[4];
w4(U+0,u32(0x254ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0a4c:{NFSU2_TR(0x4d0a4c);
s1(0x836375,u8(0x0ull));
}
B4d0a53:{NFSU2_TR(0x4d0a53);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x8ull))));
}
B4d0a56:{NFSU2_TR(0x4d0a56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0a5bull));
TAIL_STATIC(0x575620u,575);
}
B4d0a5b:L4d0a5b:{c.instructions+=6;NFSU2_TR(0x4d0a5b);
__builtin_memmove((R+28),(R+0),4);
}
B4d0a5d:{NFSU2_TR(0x4d0a5d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d0a60:{NFSU2_TR(0x4d0a60);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0a64:{NFSU2_TR(0x4d0a64);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d0a66:{NFSU2_TR(0x4d0a66);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d0a6b:{NFSU2_TR(0x4d0a6b);
if(r1(R+518)){{goto L4d0aa7;}}
}
B4d0a6d:L4d0a6d:{c.instructions+=14;NFSU2_TR(0x4d0a6d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0a6e:{NFSU2_TR(0x4d0a6e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0a70:{NFSU2_TR(0x4d0a70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0a71:{NFSU2_TR(0x4d0a71);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d0a77:{NFSU2_TR(0x4d0a77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0a78:{NFSU2_TR(0x4d0a78);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4d0a7e:{NFSU2_TR(0x4d0a7e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0a7f:{NFSU2_TR(0x4d0a7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d0a85:{NFSU2_TR(0x4d0a85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0a86:{NFSU2_TR(0x4d0a86);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d0a8c:{NFSU2_TR(0x4d0a8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0a8d:{NFSU2_TR(0x4d0a8d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0a8f:{NFSU2_TR(0x4d0a8f);
__builtin_memmove((R+4),(R+28),4);
}
B4d0a91:{NFSU2_TR(0x4d0a91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0a96ull));
TAIL_STATIC(0x51e9e0u,51e);
}
B4d0a96:L4d0a96:{c.instructions+=4;NFSU2_TR(0x4d0a96);
__builtin_memmove((R+8),gp(0x78dfa4),4);
}
B4d0a9c:{NFSU2_TR(0x4d0a9c);
u8 U[4];
w4(U+0,u32(0x794898ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4d0aa2:{NFSU2_TR(0x4d0aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0aa5:{NFSU2_TR(0x4d0aa5);
{goto L4d0aa9;}
}
B4d0aa7:L4d0aa7:{c.instructions+=1;NFSU2_TR(0x4d0aa7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d0aa9:L4d0aa9:{c.instructions+=4;NFSU2_TR(0x4d0aa9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0aaa:{NFSU2_TR(0x4d0aaa);
__builtin_memmove((R+4),(R+24),4);
}
B4d0aac:{NFSU2_TR(0x4d0aac);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d0ab0:{NFSU2_TR(0x4d0ab0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0ab5ull));
TAIL_STATIC(0x54f820u,54f);
}
B4d0ab5:L4d0ab5:{c.instructions+=5;NFSU2_TR(0x4d0ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0abb:{NFSU2_TR(0x4d0abb);
__builtin_memmove((R+20),gp(0x836370),4);
}
B4d0ac1:{NFSU2_TR(0x4d0ac1);
u8 U[4];
w4(U+0,u32(0x254ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0ac6:{NFSU2_TR(0x4d0ac6);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x48ull))));
}
B4d0ac9:{NFSU2_TR(0x4d0ac9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0aceull));
TAIL_STATIC(0x575620u,575);
}
B4d0ace:L4d0ace:{c.instructions+=6;NFSU2_TR(0x4d0ace);
__builtin_memmove((R+28),(R+0),4);
}
B4d0ad0:{NFSU2_TR(0x4d0ad0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d0ad3:{NFSU2_TR(0x4d0ad3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0ad7:{NFSU2_TR(0x4d0ad7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d0ad9:{NFSU2_TR(0x4d0ad9);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d0ade:{NFSU2_TR(0x4d0ade);
if(r1(R+518)){{goto L4d0b1a;}}
}
B4d0ae0:L4d0ae0:{c.instructions+=14;NFSU2_TR(0x4d0ae0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0ae1:{NFSU2_TR(0x4d0ae1);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0ae3:{NFSU2_TR(0x4d0ae3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0ae4:{NFSU2_TR(0x4d0ae4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d0aea:{NFSU2_TR(0x4d0aea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0aeb:{NFSU2_TR(0x4d0aeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d0af1:{NFSU2_TR(0x4d0af1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0af2:{NFSU2_TR(0x4d0af2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4d0af8:{NFSU2_TR(0x4d0af8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0af9:{NFSU2_TR(0x4d0af9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d0aff:{NFSU2_TR(0x4d0aff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0b00:{NFSU2_TR(0x4d0b00);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0b02:{NFSU2_TR(0x4d0b02);
__builtin_memmove((R+4),(R+28),4);
}
B4d0b04:{NFSU2_TR(0x4d0b04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0b09ull));
TAIL_STATIC(0x51e9e0u,51e);
}
B4d0b09:L4d0b09:{c.instructions+=4;NFSU2_TR(0x4d0b09);
__builtin_memmove((R+4),gp(0x78dfa4),4);
}
B4d0b0f:{NFSU2_TR(0x4d0b0f);
u8 U[4];
w4(U+0,u32(0x7948d8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4d0b15:{NFSU2_TR(0x4d0b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0b18:{NFSU2_TR(0x4d0b18);
{goto L4d0b1c;}
}
B4d0b1a:L4d0b1a:{c.instructions+=1;NFSU2_TR(0x4d0b1a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d0b1c:L4d0b1c:{c.instructions+=4;NFSU2_TR(0x4d0b1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0b1d:{NFSU2_TR(0x4d0b1d);
__builtin_memmove((R+4),(R+24),4);
}
B4d0b1f:{NFSU2_TR(0x4d0b1f);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d0b23:{NFSU2_TR(0x4d0b23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0b28ull));
TAIL_STATIC(0x54f820u,54f);
}
B4d0b28:L4d0b28:{c.instructions+=5;NFSU2_TR(0x4d0b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0b2e:{NFSU2_TR(0x4d0b2e);
__builtin_memmove((R+20),gp(0x836370),4);
}
B4d0b34:{NFSU2_TR(0x4d0b34);
u8 U[4];
w4(U+0,u32(0x254ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0b39:{NFSU2_TR(0x4d0b39);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x68ull))));
}
B4d0b3c:{NFSU2_TR(0x4d0b3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0b41ull));
TAIL_STATIC(0x575620u,575);
}
B4d0b41:L4d0b41:{c.instructions+=6;NFSU2_TR(0x4d0b41);
__builtin_memmove((R+28),(R+0),4);
}
B4d0b43:{NFSU2_TR(0x4d0b43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d0b46:{NFSU2_TR(0x4d0b46);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0b4a:{NFSU2_TR(0x4d0b4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d0b4c:{NFSU2_TR(0x4d0b4c);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d0b51:{NFSU2_TR(0x4d0b51);
if(r1(R+518)){{goto L4d0b8c;}}
}
B4d0b53:L4d0b53:{c.instructions+=14;NFSU2_TR(0x4d0b53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0b54:{NFSU2_TR(0x4d0b54);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0b56:{NFSU2_TR(0x4d0b56);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0b57:{NFSU2_TR(0x4d0b57);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4d0b5d:{NFSU2_TR(0x4d0b5d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0b5e:{NFSU2_TR(0x4d0b5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d0b64:{NFSU2_TR(0x4d0b64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0b65:{NFSU2_TR(0x4d0b65);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d0b6b:{NFSU2_TR(0x4d0b6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0b6c:{NFSU2_TR(0x4d0b6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4d0b72:{NFSU2_TR(0x4d0b72);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0b73:{NFSU2_TR(0x4d0b73);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0b75:{NFSU2_TR(0x4d0b75);
__builtin_memmove((R+4),(R+28),4);
}
B4d0b77:{NFSU2_TR(0x4d0b77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0b7cull));
TAIL_STATIC(0x51e9e0u,51e);
}
B4d0b7c:L4d0b7c:{c.instructions+=4;NFSU2_TR(0x4d0b7c);
__builtin_memmove((R+0),gp(0x78dfa4),4);
}
B4d0b81:{NFSU2_TR(0x4d0b81);
u8 U[4];
w4(U+0,u32(0x794918ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4d0b87:{NFSU2_TR(0x4d0b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0b8a:{NFSU2_TR(0x4d0b8a);
{goto L4d0b8e;}
}
B4d0b8c:L4d0b8c:{c.instructions+=1;NFSU2_TR(0x4d0b8c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d0b8e:L4d0b8e:{c.instructions+=4;NFSU2_TR(0x4d0b8e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0b8f:{NFSU2_TR(0x4d0b8f);
__builtin_memmove((R+4),(R+24),4);
}
B4d0b91:{NFSU2_TR(0x4d0b91);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d0b95:{NFSU2_TR(0x4d0b95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0b9aull));
TAIL_STATIC(0x54f820u,54f);
}
B4d0b9a:L4d0b9a:{c.instructions+=5;NFSU2_TR(0x4d0b9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0ba0:{NFSU2_TR(0x4d0ba0);
__builtin_memmove((R+20),gp(0x836370),4);
}
B4d0ba6:{NFSU2_TR(0x4d0ba6);
u8 U[4];
w4(U+0,u32(0x254ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0bab:{NFSU2_TR(0x4d0bab);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x88ull))));
}
B4d0bb1:{NFSU2_TR(0x4d0bb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0bb6ull));
TAIL_STATIC(0x575620u,575);
}
B4d0bb6:L4d0bb6:{c.instructions+=6;NFSU2_TR(0x4d0bb6);
__builtin_memmove((R+28),(R+0),4);
}
B4d0bb8:{NFSU2_TR(0x4d0bb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d0bbb:{NFSU2_TR(0x4d0bbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0bbf:{NFSU2_TR(0x4d0bbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d0bc1:{NFSU2_TR(0x4d0bc1);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d0bc6:{NFSU2_TR(0x4d0bc6);
if(r1(R+518)){{goto L4d0c02;}}
}
B4d0bc8:L4d0bc8:{c.instructions+=14;NFSU2_TR(0x4d0bc8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0bc9:{NFSU2_TR(0x4d0bc9);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0bcb:{NFSU2_TR(0x4d0bcb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0bcc:{NFSU2_TR(0x4d0bcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d0bd2:{NFSU2_TR(0x4d0bd2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0bd3:{NFSU2_TR(0x4d0bd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4d0bd9:{NFSU2_TR(0x4d0bd9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0bda:{NFSU2_TR(0x4d0bda);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d0be0:{NFSU2_TR(0x4d0be0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0be1:{NFSU2_TR(0x4d0be1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d0be7:{NFSU2_TR(0x4d0be7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0be8:{NFSU2_TR(0x4d0be8);
u8 U[4];
w4(U+0,u32(0x32ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0bea:{NFSU2_TR(0x4d0bea);
__builtin_memmove((R+4),(R+28),4);
}
B4d0bec:{NFSU2_TR(0x4d0bec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0bf1ull));
TAIL_STATIC(0x51e9e0u,51e);
}
B4d0bf1:L4d0bf1:{c.instructions+=4;NFSU2_TR(0x4d0bf1);
__builtin_memmove((R+8),gp(0x78dfa4),4);
}
B4d0bf7:{NFSU2_TR(0x4d0bf7);
u8 U[4];
w4(U+0,u32(0x794688ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4d0bfd:{NFSU2_TR(0x4d0bfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0c00:{NFSU2_TR(0x4d0c00);
{goto L4d0c04;}
}
B4d0c02:L4d0c02:{c.instructions+=1;NFSU2_TR(0x4d0c02);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d0c04:L4d0c04:{c.instructions+=4;NFSU2_TR(0x4d0c04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0c05:{NFSU2_TR(0x4d0c05);
__builtin_memmove((R+4),(R+24),4);
}
B4d0c07:{NFSU2_TR(0x4d0c07);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d0c0b:{NFSU2_TR(0x4d0c0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0c10ull));
TAIL_STATIC(0x54f820u,54f);
}
B4d0c10:L4d0c10:{c.instructions+=3;NFSU2_TR(0x4d0c10);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0c12:{NFSU2_TR(0x4d0c12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0c18:{NFSU2_TR(0x4d0c18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0c1dull));
TAIL_STATIC(0x575620u,575);
}
B4d0c1d:L4d0c1d:{c.instructions+=5;NFSU2_TR(0x4d0c1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d0c20:{NFSU2_TR(0x4d0c20);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0c24:{NFSU2_TR(0x4d0c24);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d0c26:{NFSU2_TR(0x4d0c26);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x6ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d0c2b:{NFSU2_TR(0x4d0c2b);
if(r1(R+518)){{goto L4d0c53;}}
}
B4d0c2d:L4d0c2d:{c.instructions+=11;NFSU2_TR(0x4d0c2d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0c2e:{NFSU2_TR(0x4d0c2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d0c34:{NFSU2_TR(0x4d0c34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0c35:{NFSU2_TR(0x4d0c35);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4d0c3b:{NFSU2_TR(0x4d0c3b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0c3c:{NFSU2_TR(0x4d0c3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d0c42:{NFSU2_TR(0x4d0c42);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0c43:{NFSU2_TR(0x4d0c43);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4d0c49:{NFSU2_TR(0x4d0c49);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0c4a:{NFSU2_TR(0x4d0c4a);
__builtin_memmove((R+4),(R+0),4);
}
B4d0c4c:{NFSU2_TR(0x4d0c4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0c51ull));
TAIL_STATIC(0x4ba2c0u,4ba);
}
B4d0c51:L4d0c51:{c.instructions+=1;NFSU2_TR(0x4d0c51);
{goto L4d0c55;}
}
B4d0c53:L4d0c53:{c.instructions+=1;NFSU2_TR(0x4d0c53);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d0c55:L4d0c55:{c.instructions+=4;NFSU2_TR(0x4d0c55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0c56:{NFSU2_TR(0x4d0c56);
__builtin_memmove((R+4),(R+24),4);
}
B4d0c58:{NFSU2_TR(0x4d0c58);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d0c5c:{NFSU2_TR(0x4d0c5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0c61ull));
TAIL_STATIC(0x54f820u,54f);
}
B4d0c61:L4d0c61:{c.instructions+=4;NFSU2_TR(0x4d0c61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0c62:{NFSU2_TR(0x4d0c62);
__builtin_memmove((R+4),(R+24),4);
}
B4d0c64:{NFSU2_TR(0x4d0c64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0c6a:{NFSU2_TR(0x4d0c6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0c6full));
TAIL_STATIC(0x51fe70u,51f);
}
B4d0c6f:L4d0c6f:{c.instructions+=3;NFSU2_TR(0x4d0c6f);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0c71:{NFSU2_TR(0x4d0c71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0c77:{NFSU2_TR(0x4d0c77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0c7cull));
TAIL_STATIC(0x575620u,575);
}
B4d0c7c:L4d0c7c:{c.instructions+=6;NFSU2_TR(0x4d0c7c);
__builtin_memmove((R+28),(R+0),4);
}
B4d0c7e:{NFSU2_TR(0x4d0c7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d0c81:{NFSU2_TR(0x4d0c81);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0c85:{NFSU2_TR(0x4d0c85);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d0c87:{NFSU2_TR(0x4d0c87);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x7ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d0c8c:{NFSU2_TR(0x4d0c8c);
if(r1(R+518)){{goto L4d0cc3;}}
}
B4d0c8e:L4d0c8e:{c.instructions+=11;NFSU2_TR(0x4d0c8e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0c8f:{NFSU2_TR(0x4d0c8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d0c95:{NFSU2_TR(0x4d0c95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0c96:{NFSU2_TR(0x4d0c96);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d0c9c:{NFSU2_TR(0x4d0c9c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0c9d:{NFSU2_TR(0x4d0c9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4d0ca3:{NFSU2_TR(0x4d0ca3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0ca4:{NFSU2_TR(0x4d0ca4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d0caa:{NFSU2_TR(0x4d0caa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0cab:{NFSU2_TR(0x4d0cab);
__builtin_memmove((R+4),(R+28),4);
}
B4d0cad:{NFSU2_TR(0x4d0cad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0cb2ull));
TAIL_STATIC(0x51e230u,51e);
}
B4d0cb2:L4d0cb2:{c.instructions+=4;NFSU2_TR(0x4d0cb2);
__builtin_memmove((R+4),gp(0x78dfa4),4);
}
B4d0cb8:{NFSU2_TR(0x4d0cb8);
u8 U[4];
w4(U+0,u32(0x7949e0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4d0cbe:{NFSU2_TR(0x4d0cbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0cc1:{NFSU2_TR(0x4d0cc1);
{goto L4d0cc5;}
}
B4d0cc3:L4d0cc3:{c.instructions+=1;NFSU2_TR(0x4d0cc3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d0cc5:L4d0cc5:{c.instructions+=5;NFSU2_TR(0x4d0cc5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0cc6:{NFSU2_TR(0x4d0cc6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0cc7:{NFSU2_TR(0x4d0cc7);
__builtin_memmove((R+4),(R+24),4);
}
B4d0cc9:{NFSU2_TR(0x4d0cc9);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d0ccd:{NFSU2_TR(0x4d0ccd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0cd2ull));
TAIL_STATIC(0x54f170u,54f);
}
B4d0cd2:L4d0cd2:{c.instructions+=2;NFSU2_TR(0x4d0cd2);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0cd4:{NFSU2_TR(0x4d0cd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0cd9ull));
TAIL_STATIC(0x575620u,575);
}
B4d0cd9:L4d0cd9:{c.instructions+=6;NFSU2_TR(0x4d0cd9);
__builtin_memmove((R+28),(R+0),4);
}
B4d0cdb:{NFSU2_TR(0x4d0cdb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d0cde:{NFSU2_TR(0x4d0cde);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0ce2:{NFSU2_TR(0x4d0ce2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d0ce4:{NFSU2_TR(0x4d0ce4);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x8ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d0ce9:{NFSU2_TR(0x4d0ce9);
if(r1(R+518)){{goto L4d0d0a;}}
}
B4d0ceb:L4d0ceb:{c.instructions+=7;NFSU2_TR(0x4d0ceb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0ced:{NFSU2_TR(0x4d0ced);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4d0cf3:{NFSU2_TR(0x4d0cf3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0cf4:{NFSU2_TR(0x4d0cf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d0cfa:{NFSU2_TR(0x4d0cfa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0cfb:{NFSU2_TR(0x4d0cfb);
__builtin_memmove((R+4),(R+28),4);
}
B4d0cfd:{NFSU2_TR(0x4d0cfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0d02ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4d0d02:L4d0d02:{c.instructions+=2;NFSU2_TR(0x4d0d02);
u8 U[4];
w4(U+0,u32(0x790bd8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4d0d08:{NFSU2_TR(0x4d0d08);
{goto L4d0d0c;}
}
B4d0d0a:L4d0d0a:{c.instructions+=1;NFSU2_TR(0x4d0d0a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d0d0c:L4d0d0c:{c.instructions+=4;NFSU2_TR(0x4d0d0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0d0d:{NFSU2_TR(0x4d0d0d);
__builtin_memmove((R+4),(R+24),4);
}
B4d0d0f:{NFSU2_TR(0x4d0d0f);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d0d13:{NFSU2_TR(0x4d0d13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0d18ull));
TAIL_STATIC(0x54ee40u,54e);
}
B4d0d18:L4d0d18:{c.instructions+=2;NFSU2_TR(0x4d0d18);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0d1a:{NFSU2_TR(0x4d0d1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0d1full));
TAIL_STATIC(0x575620u,575);
}
B4d0d1f:L4d0d1f:{c.instructions+=6;NFSU2_TR(0x4d0d1f);
__builtin_memmove((R+28),(R+0),4);
}
B4d0d21:{NFSU2_TR(0x4d0d21);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d0d24:{NFSU2_TR(0x4d0d24);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0d28:{NFSU2_TR(0x4d0d28);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d0d2a:{NFSU2_TR(0x4d0d2a);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x9ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d0d2f:{NFSU2_TR(0x4d0d2f);
if(r1(R+518)){{goto L4d0d50;}}
}
B4d0d31:L4d0d31:{c.instructions+=7;NFSU2_TR(0x4d0d31);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0d33:{NFSU2_TR(0x4d0d33);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d0d39:{NFSU2_TR(0x4d0d39);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0d3a:{NFSU2_TR(0x4d0d3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4d0d40:{NFSU2_TR(0x4d0d40);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0d41:{NFSU2_TR(0x4d0d41);
__builtin_memmove((R+4),(R+28),4);
}
B4d0d43:{NFSU2_TR(0x4d0d43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0d48ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4d0d48:L4d0d48:{c.instructions+=2;NFSU2_TR(0x4d0d48);
u8 U[4];
w4(U+0,u32(0x790bd8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4d0d4e:{NFSU2_TR(0x4d0d4e);
{goto L4d0d52;}
}
B4d0d50:L4d0d50:{c.instructions+=1;NFSU2_TR(0x4d0d50);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d0d52:L4d0d52:{c.instructions+=4;NFSU2_TR(0x4d0d52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0d53:{NFSU2_TR(0x4d0d53);
__builtin_memmove((R+4),(R+24),4);
}
B4d0d55:{NFSU2_TR(0x4d0d55);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d0d59:{NFSU2_TR(0x4d0d59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0d5eull));
TAIL_STATIC(0x54ee40u,54e);
}
B4d0d5e:L4d0d5e:{c.instructions+=2;NFSU2_TR(0x4d0d5e);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0d60:{NFSU2_TR(0x4d0d60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0d65ull));
TAIL_STATIC(0x575620u,575);
}
B4d0d65:L4d0d65:{c.instructions+=7;NFSU2_TR(0x4d0d65);
__builtin_memmove((R+28),(R+0),4);
}
B4d0d67:{NFSU2_TR(0x4d0d67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d0d6a:{NFSU2_TR(0x4d0d6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0d6e:{NFSU2_TR(0x4d0d6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d0d70:{NFSU2_TR(0x4d0d70);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0xaull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d0d75:{NFSU2_TR(0x4d0d75);
w4(R+20,u32(0x420c0000ull));
}
B4d0d7a:{NFSU2_TR(0x4d0d7a);
if(r1(R+518)){{goto L4d0db2;}}
}
B4d0d7c:L4d0d7c:{c.instructions+=11;NFSU2_TR(0x4d0d7c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0d7d:{NFSU2_TR(0x4d0d7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d0d83:{NFSU2_TR(0x4d0d83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0d84:{NFSU2_TR(0x4d0d84);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d0d8a:{NFSU2_TR(0x4d0d8a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0d8b:{NFSU2_TR(0x4d0d8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4d0d91:{NFSU2_TR(0x4d0d91);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0d92:{NFSU2_TR(0x4d0d92);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d0d98:{NFSU2_TR(0x4d0d98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0d99:{NFSU2_TR(0x4d0d99);
__builtin_memmove((R+4),(R+28),4);
}
B4d0d9b:{NFSU2_TR(0x4d0d9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0da0ull));
TAIL_STATIC(0x51e230u,51e);
}
B4d0da0:L4d0da0:{c.instructions+=4;NFSU2_TR(0x4d0da0);
u8 U[4];
w4(U+0,u32(0x794a28ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4d0da6:{NFSU2_TR(0x4d0da6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
w4(U+4,u32(0xc37e0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d0dad:{NFSU2_TR(0x4d0dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0db0:{NFSU2_TR(0x4d0db0);
{goto L4d0db4;}
}
B4d0db2:L4d0db2:{c.instructions+=1;NFSU2_TR(0x4d0db2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d0db4:L4d0db4:{c.instructions+=5;NFSU2_TR(0x4d0db4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0db5:{NFSU2_TR(0x4d0db5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0db6:{NFSU2_TR(0x4d0db6);
__builtin_memmove((R+4),(R+24),4);
}
B4d0db8:{NFSU2_TR(0x4d0db8);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d0dbc:{NFSU2_TR(0x4d0dbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0dc1ull));
TAIL_STATIC(0x54f170u,54f);
}
B4d0dc1:L4d0dc1:{c.instructions+=3;NFSU2_TR(0x4d0dc1);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0dc3:{NFSU2_TR(0x4d0dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0dc9:{NFSU2_TR(0x4d0dc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0dceull));
TAIL_STATIC(0x575620u,575);
}
B4d0dce:L4d0dce:{c.instructions+=6;NFSU2_TR(0x4d0dce);
__builtin_memmove((R+28),(R+0),4);
}
B4d0dd0:{NFSU2_TR(0x4d0dd0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d0dd3:{NFSU2_TR(0x4d0dd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0dd7:{NFSU2_TR(0x4d0dd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d0dd9:{NFSU2_TR(0x4d0dd9);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0xbull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d0dde:{NFSU2_TR(0x4d0dde);
if(r1(R+518)){{goto L4d0dff;}}
}
B4d0de0:L4d0de0:{c.instructions+=7;NFSU2_TR(0x4d0de0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0de2:{NFSU2_TR(0x4d0de2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d0de8:{NFSU2_TR(0x4d0de8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0de9:{NFSU2_TR(0x4d0de9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4d0def:{NFSU2_TR(0x4d0def);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0df0:{NFSU2_TR(0x4d0df0);
__builtin_memmove((R+4),(R+28),4);
}
B4d0df2:{NFSU2_TR(0x4d0df2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0df7ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4d0df7:L4d0df7:{c.instructions+=2;NFSU2_TR(0x4d0df7);
u8 U[4];
w4(U+0,u32(0x790bd8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4d0dfd:{NFSU2_TR(0x4d0dfd);
{goto L4d0e01;}
}
B4d0dff:L4d0dff:{c.instructions+=1;NFSU2_TR(0x4d0dff);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d0e01:L4d0e01:{c.instructions+=4;NFSU2_TR(0x4d0e01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0e02:{NFSU2_TR(0x4d0e02);
__builtin_memmove((R+4),(R+24),4);
}
B4d0e04:{NFSU2_TR(0x4d0e04);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d0e08:{NFSU2_TR(0x4d0e08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0e0dull));
TAIL_STATIC(0x54ee40u,54e);
}
B4d0e0d:L4d0e0d:{c.instructions+=2;NFSU2_TR(0x4d0e0d);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0e0f:{NFSU2_TR(0x4d0e0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0e14ull));
TAIL_STATIC(0x575620u,575);
}
B4d0e14:L4d0e14:{c.instructions+=6;NFSU2_TR(0x4d0e14);
__builtin_memmove((R+28),(R+0),4);
}
B4d0e16:{NFSU2_TR(0x4d0e16);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d0e19:{NFSU2_TR(0x4d0e19);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0e1d:{NFSU2_TR(0x4d0e1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d0e1f:{NFSU2_TR(0x4d0e1f);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0xcull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d0e24:{NFSU2_TR(0x4d0e24);
if(r1(R+518)){{goto L4d0e45;}}
}
B4d0e26:L4d0e26:{c.instructions+=7;NFSU2_TR(0x4d0e26);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0e28:{NFSU2_TR(0x4d0e28);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d0e2e:{NFSU2_TR(0x4d0e2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0e2f:{NFSU2_TR(0x4d0e2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d0e35:{NFSU2_TR(0x4d0e35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0e36:{NFSU2_TR(0x4d0e36);
__builtin_memmove((R+4),(R+28),4);
}
B4d0e38:{NFSU2_TR(0x4d0e38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0e3dull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4d0e3d:L4d0e3d:{c.instructions+=2;NFSU2_TR(0x4d0e3d);
u8 U[4];
w4(U+0,u32(0x790bd8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4d0e43:{NFSU2_TR(0x4d0e43);
{goto L4d0e47;}
}
B4d0e45:L4d0e45:{c.instructions+=1;NFSU2_TR(0x4d0e45);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d0e47:L4d0e47:{c.instructions+=4;NFSU2_TR(0x4d0e47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0e48:{NFSU2_TR(0x4d0e48);
__builtin_memmove((R+4),(R+24),4);
}
B4d0e4a:{NFSU2_TR(0x4d0e4a);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d0e4e:{NFSU2_TR(0x4d0e4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0e53ull));
TAIL_STATIC(0x54ee40u,54e);
}
B4d0e53:L4d0e53:{c.instructions+=2;NFSU2_TR(0x4d0e53);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0e55:{NFSU2_TR(0x4d0e55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0e5aull));
TAIL_STATIC(0x575620u,575);
}
B4d0e5a:L4d0e5a:{c.instructions+=6;NFSU2_TR(0x4d0e5a);
__builtin_memmove((R+28),(R+0),4);
}
B4d0e5c:{NFSU2_TR(0x4d0e5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d0e5f:{NFSU2_TR(0x4d0e5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0e63:{NFSU2_TR(0x4d0e63);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d0e65:{NFSU2_TR(0x4d0e65);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0xdull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d0e6a:{NFSU2_TR(0x4d0e6a);
if(r1(R+518)){{goto L4d0ea2;}}
}
B4d0e6c:L4d0e6c:{c.instructions+=11;NFSU2_TR(0x4d0e6c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0e6d:{NFSU2_TR(0x4d0e6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4d0e73:{NFSU2_TR(0x4d0e73);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0e74:{NFSU2_TR(0x4d0e74);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d0e7a:{NFSU2_TR(0x4d0e7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0e7b:{NFSU2_TR(0x4d0e7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d0e81:{NFSU2_TR(0x4d0e81);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0e82:{NFSU2_TR(0x4d0e82);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4d0e88:{NFSU2_TR(0x4d0e88);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0e89:{NFSU2_TR(0x4d0e89);
__builtin_memmove((R+4),(R+28),4);
}
B4d0e8b:{NFSU2_TR(0x4d0e8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0e90ull));
TAIL_STATIC(0x51e230u,51e);
}
B4d0e90:L4d0e90:{c.instructions+=4;NFSU2_TR(0x4d0e90);
u8 U[4];
w4(U+0,u32(0x794a70ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4d0e96:{NFSU2_TR(0x4d0e96);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
w4(U+4,u32(0xc37e0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d0e9d:{NFSU2_TR(0x4d0e9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0ea0:{NFSU2_TR(0x4d0ea0);
{goto L4d0ea4;}
}
B4d0ea2:L4d0ea2:{c.instructions+=1;NFSU2_TR(0x4d0ea2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d0ea4:L4d0ea4:{c.instructions+=5;NFSU2_TR(0x4d0ea4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0ea5:{NFSU2_TR(0x4d0ea5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0ea6:{NFSU2_TR(0x4d0ea6);
__builtin_memmove((R+4),(R+24),4);
}
B4d0ea8:{NFSU2_TR(0x4d0ea8);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d0eac:{NFSU2_TR(0x4d0eac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0eb1ull));
TAIL_STATIC(0x54f170u,54f);
}
B4d0eb1:L4d0eb1:{c.instructions+=5;NFSU2_TR(0x4d0eb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0eb7:{NFSU2_TR(0x4d0eb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d0ebd:{NFSU2_TR(0x4d0ebd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0ebe:{NFSU2_TR(0x4d0ebe);
__builtin_memmove((R+4),(R+24),4);
}
B4d0ec0:{NFSU2_TR(0x4d0ec0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0ec5ull));
TAIL_STATIC(0x51fe70u,51f);
}
B4d0ec5:L4d0ec5:{c.instructions+=3;NFSU2_TR(0x4d0ec5);
u8 U[4];
w4(U+0,u32(0xb32f2b49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0eca:{NFSU2_TR(0x4d0eca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0ed0:{NFSU2_TR(0x4d0ed0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0ed5ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d0ed5:L4d0ed5:{c.instructions+=4;NFSU2_TR(0x4d0ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d0edb:{NFSU2_TR(0x4d0edb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d0ede:{NFSU2_TR(0x4d0ede);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0edf:{NFSU2_TR(0x4d0edf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0ee4ull));
TAIL_STATIC(0x50d7e0u,50d);
}
B4d0ee4:L4d0ee4:{c.instructions+=4;NFSU2_TR(0x4d0ee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d0eea:{NFSU2_TR(0x4d0eea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0eeb:{NFSU2_TR(0x4d0eeb);
__builtin_memmove((R+4),(R+24),4);
}
B4d0eed:{NFSU2_TR(0x4d0eed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0ef2ull));
TAIL_STATIC(0x51fe70u,51f);
}
B4d0ef2:L4d0ef2:{c.instructions+=3;NFSU2_TR(0x4d0ef2);
u8 U[4];
w4(U+0,u32(0x332c0b6full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0ef7:{NFSU2_TR(0x4d0ef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0efd:{NFSU2_TR(0x4d0efd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0f02ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d0f02:L4d0f02:{c.instructions+=4;NFSU2_TR(0x4d0f02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d0f08:{NFSU2_TR(0x4d0f08);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d0f0b:{NFSU2_TR(0x4d0f0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0f0c:{NFSU2_TR(0x4d0f0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0f11ull));
TAIL_STATIC(0x50d7e0u,50d);
}
B4d0f11:L4d0f11:{c.instructions+=4;NFSU2_TR(0x4d0f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d0f17:{NFSU2_TR(0x4d0f17);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0f18:{NFSU2_TR(0x4d0f18);
__builtin_memmove((R+4),(R+24),4);
}
B4d0f1a:{NFSU2_TR(0x4d0f1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0f1full));
TAIL_STATIC(0x51fe70u,51f);
}
B4d0f1f:L4d0f1f:{c.instructions+=3;NFSU2_TR(0x4d0f1f);
u8 U[4];
w4(U+0,u32(0x9e275bfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0f24:{NFSU2_TR(0x4d0f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0f2a:{NFSU2_TR(0x4d0f2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0f2full));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d0f2f:L4d0f2f:{c.instructions+=4;NFSU2_TR(0x4d0f2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d0f35:{NFSU2_TR(0x4d0f35);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d0f38:{NFSU2_TR(0x4d0f38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0f39:{NFSU2_TR(0x4d0f39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0f3eull));
TAIL_STATIC(0x50d7e0u,50d);
}
B4d0f3e:L4d0f3e:{c.instructions+=4;NFSU2_TR(0x4d0f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d0f44:{NFSU2_TR(0x4d0f44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0f45:{NFSU2_TR(0x4d0f45);
__builtin_memmove((R+4),(R+24),4);
}
B4d0f47:{NFSU2_TR(0x4d0f47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0f4cull));
TAIL_STATIC(0x51fe70u,51f);
}
B4d0f4c:L4d0f4c:{c.instructions+=3;NFSU2_TR(0x4d0f4c);
u8 U[4];
w4(U+0,u32(0xbedf2b09ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0f51:{NFSU2_TR(0x4d0f51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0f57:{NFSU2_TR(0x4d0f57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0f5cull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d0f5c:L4d0f5c:{c.instructions+=4;NFSU2_TR(0x4d0f5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d0f62:{NFSU2_TR(0x4d0f62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d0f65:{NFSU2_TR(0x4d0f65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0f66:{NFSU2_TR(0x4d0f66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0f6bull));
TAIL_STATIC(0x50d7e0u,50d);
}
B4d0f6b:L4d0f6b:{c.instructions+=5;NFSU2_TR(0x4d0f6b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0f6c:{NFSU2_TR(0x4d0f6c);
__builtin_memmove((R+4),(R+24),4);
}
B4d0f6e:{NFSU2_TR(0x4d0f6e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d0f75:{NFSU2_TR(0x4d0f75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d0f7f:{NFSU2_TR(0x4d0f7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0f84ull));
TAIL_STATIC(0x539650u,539);
}
B4d0f84:L4d0f84:{c.instructions+=1;NFSU2_TR(0x4d0f84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0f89ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4d0f89:L4d0f89:{c.instructions+=2;NFSU2_TR(0x4d0f89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0f8a:{NFSU2_TR(0x4d0f8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0f8full));
TAIL_STATIC(0x52cf60u,52c);
}
B4d0f8f:L4d0f8f:{c.instructions+=3;NFSU2_TR(0x4d0f8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d0f92:{NFSU2_TR(0x4d0f92);
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
B4d0f94:{NFSU2_TR(0x4d0f94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d0faf;}}
}
B4d0f96:L4d0f96:{c.instructions+=5;NFSU2_TR(0x4d0f96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d0f99:{NFSU2_TR(0x4d0f99);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0f9b:{NFSU2_TR(0x4d0f9b);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0fa0:{NFSU2_TR(0x4d0fa0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0fa1:{NFSU2_TR(0x4d0fa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0fa6ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4d0fa6:L4d0fa6:{c.instructions+=2;NFSU2_TR(0x4d0fa6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0fa7:{NFSU2_TR(0x4d0fa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0facull));
TAIL_STATIC(0x555f10u,555);
}
B4d0fac:L4d0fac:{c.instructions+=1;NFSU2_TR(0x4d0fac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d0faf:L4d0faf:{c.instructions+=2;NFSU2_TR(0x4d0faf);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4d0fb5:{NFSU2_TR(0x4d0fb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0fbaull));
TAIL_STATIC(0x54e6a0u,54e);
}
B4d0fba:L4d0fba:{c.instructions+=6;NFSU2_TR(0x4d0fba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d0fbd:{NFSU2_TR(0x4d0fbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d0fc0:{NFSU2_TR(0x4d0fc0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0fc1:{NFSU2_TR(0x4d0fc1);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4d0fc7:{NFSU2_TR(0x4d0fc7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0fc8:{NFSU2_TR(0x4d0fc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d0fcdull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4d0fcd:L4d0fcd:{c.instructions+=9;NFSU2_TR(0x4d0fcd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d0fd1:{NFSU2_TR(0x4d0fd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d0fd2:{NFSU2_TR(0x4d0fd2);
__builtin_memmove((R+0),(R+24),4);
}
B4d0fd4:{NFSU2_TR(0x4d0fd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d0fd5:{NFSU2_TR(0x4d0fd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d0fd6:{NFSU2_TR(0x4d0fd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d0fd7:{NFSU2_TR(0x4d0fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d0fde:{NFSU2_TR(0x4d0fde);
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
B4d0fe1:{NFSU2_TR(0x4d0fe1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d0ff0:L4d0ff0:{c.instructions+=5;NFSU2_TR(0x4d0ff0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0ff2:{NFSU2_TR(0x4d0ff2);
u8 U[4];
w4(U+0,u32(0x774756ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0ff7:{NFSU2_TR(0x4d0ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d0ffd:{NFSU2_TR(0x4d0ffd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d0ffe:{NFSU2_TR(0x4d0ffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x4d1005u,4d1);
}
XIT:NFSU2_TR_EXIT(0x4d0,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
