#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6ac(u8* __restrict R,Cpu& c);
u32 body_6c1(u8* __restrict R,Cpu& c);
u32 body_6c2(u8* __restrict R,Cpu& c);
u32 body_6cb(u8* __restrict R,Cpu& c);
u32 body_6cc(u8* __restrict R,Cpu& c);
u32 body_6cd(u8* __restrict R,Cpu& c);
u32 body_6cf(u8* __restrict R,Cpu& c);
u32 body_6d1(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6d0,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6d0,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6d0(u8* __restrict R,Cpu& c);
u32 page_6d0(Cpu& c){return body_6d0(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6d0(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6d0002:goto L6d0002;
case 0x6d0003:c.instructions+=3;goto B6d0003;
case 0x6d0006:c.instructions+=2;goto B6d0006;
case 0x6d0009:c.instructions+=1;goto B6d0009;
case 0x6d000f:goto L6d000f;
case 0x6d0012:c.instructions+=2;goto B6d0012;
case 0x6d0014:c.instructions+=1;goto B6d0014;
case 0x6d001a:goto L6d001a;
case 0x6d001c:c.instructions+=2;goto B6d001c;
case 0x6d001f:c.instructions+=1;goto B6d001f;
case 0x6d0025:goto L6d0025;
case 0x6d0028:c.instructions+=3;goto B6d0028;
case 0x6d002b:c.instructions+=2;goto B6d002b;
case 0x6d002c:c.instructions+=1;goto B6d002c;
case 0x6d0031:goto L6d0031;
case 0x6d0033:c.instructions+=3;goto B6d0033;
case 0x6d0034:c.instructions+=2;goto B6d0034;
case 0x6d0037:c.instructions+=1;goto B6d0037;
case 0x6d003d:goto L6d003d;
case 0x6d0040:c.instructions+=4;goto B6d0040;
case 0x6d0042:c.instructions+=3;goto B6d0042;
case 0x6d0044:c.instructions+=2;goto B6d0044;
case 0x6d0047:c.instructions+=1;goto B6d0047;
case 0x6d0049:goto L6d0049;
case 0x6d004b:goto L6d004b;
case 0x6d004d:c.instructions+=1;goto B6d004d;
case 0x6d0050:goto L6d0050;
case 0x6d0052:goto L6d0052;
case 0x6d0055:c.instructions+=6;goto B6d0055;
case 0x6d0056:c.instructions+=5;goto B6d0056;
case 0x6d0058:c.instructions+=4;goto B6d0058;
case 0x6d0059:c.instructions+=3;goto B6d0059;
case 0x6d005c:c.instructions+=2;goto B6d005c;
case 0x6d005f:c.instructions+=1;goto B6d005f;
case 0x6d0064:goto L6d0064;
case 0x6d0066:c.instructions+=2;goto B6d0066;
case 0x6d0068:c.instructions+=1;goto B6d0068;
case 0x6d006e:goto L6d006e;
case 0x6d0072:c.instructions+=3;goto B6d0072;
case 0x6d0076:c.instructions+=2;goto B6d0076;
case 0x6d0079:c.instructions+=1;goto B6d0079;
case 0x6d007f:goto L6d007f;
case 0x6d0082:c.instructions+=4;goto B6d0082;
case 0x6d0085:c.instructions+=3;goto B6d0085;
case 0x6d0088:c.instructions+=2;goto B6d0088;
case 0x6d008b:c.instructions+=1;goto B6d008b;
case 0x6d008e:goto L6d008e;
case 0x6d0091:c.instructions+=14;goto B6d0091;
case 0x6d0093:c.instructions+=13;goto B6d0093;
case 0x6d0096:c.instructions+=12;goto B6d0096;
case 0x6d0099:c.instructions+=11;goto B6d0099;
case 0x6d009c:c.instructions+=10;goto B6d009c;
case 0x6d009f:c.instructions+=9;goto B6d009f;
case 0x6d00a2:c.instructions+=8;goto B6d00a2;
case 0x6d00a5:c.instructions+=7;goto B6d00a5;
case 0x6d00a8:c.instructions+=6;goto B6d00a8;
case 0x6d00ab:c.instructions+=5;goto B6d00ab;
case 0x6d00b2:c.instructions+=4;goto B6d00b2;
case 0x6d00b5:c.instructions+=3;goto B6d00b5;
case 0x6d00b8:c.instructions+=2;goto B6d00b8;
case 0x6d00bb:c.instructions+=1;goto B6d00bb;
case 0x6d00bd:goto L6d00bd;
case 0x6d00c0:c.instructions+=5;goto B6d00c0;
case 0x6d00c1:c.instructions+=4;goto B6d00c1;
case 0x6d00c3:c.instructions+=3;goto B6d00c3;
case 0x6d00c5:c.instructions+=2;goto B6d00c5;
case 0x6d00c6:c.instructions+=1;goto B6d00c6;
case 0x6d00c8:goto L6d00c8;
case 0x6d00cb:c.instructions+=3;goto B6d00cb;
case 0x6d00ce:c.instructions+=2;goto B6d00ce;
case 0x6d00d3:c.instructions+=1;goto B6d00d3;
case 0x6d00d5:goto L6d00d5;
case 0x6d00da:c.instructions+=1;goto B6d00da;
case 0x6d00dc:goto L6d00dc;
case 0x6d00e2:c.instructions+=1;goto B6d00e2;
case 0x6d00e4:goto L6d00e4;
case 0x6d00e9:c.instructions+=1;goto B6d00e9;
case 0x6d00eb:goto L6d00eb;
case 0x6d00ed:c.instructions+=1;goto B6d00ed;
case 0x6d00ef:goto L6d00ef;
case 0x6d00f4:goto L6d00f4;
case 0x6d00f5:c.instructions+=5;goto B6d00f5;
case 0x6d00f6:c.instructions+=4;goto B6d00f6;
case 0x6d00fc:c.instructions+=3;goto B6d00fc;
case 0x6d0101:c.instructions+=2;goto B6d0101;
case 0x6d0102:c.instructions+=1;goto B6d0102;
case 0x6d0107:goto L6d0107;
case 0x6d010a:c.instructions+=7;goto B6d010a;
case 0x6d010d:c.instructions+=6;goto B6d010d;
case 0x6d010e:c.instructions+=5;goto B6d010e;
case 0x6d0110:c.instructions+=4;goto B6d0110;
case 0x6d0112:c.instructions+=3;goto B6d0112;
case 0x6d0118:c.instructions+=2;goto B6d0118;
case 0x6d011c:c.instructions+=1;goto B6d011c;
case 0x6d011d:goto L6d011d;
case 0x6d0120:c.instructions+=1;goto B6d0120;
case 0x6d0125:goto L6d0125;
case 0x6d0127:c.instructions+=2;goto B6d0127;
case 0x6d0129:c.instructions+=1;goto B6d0129;
case 0x6d012f:goto L6d012f;
case 0x6d0131:c.instructions+=5;goto B6d0131;
case 0x6d0133:c.instructions+=4;goto B6d0133;
case 0x6d0136:c.instructions+=3;goto B6d0136;
case 0x6d0137:c.instructions+=2;goto B6d0137;
case 0x6d013a:c.instructions+=1;goto B6d013a;
case 0x6d013c:goto L6d013c;
case 0x6d013f:c.instructions+=7;goto B6d013f;
case 0x6d0142:c.instructions+=6;goto B6d0142;
case 0x6d0144:c.instructions+=5;goto B6d0144;
case 0x6d0147:c.instructions+=4;goto B6d0147;
case 0x6d014a:c.instructions+=3;goto B6d014a;
case 0x6d014d:c.instructions+=2;goto B6d014d;
case 0x6d0150:c.instructions+=1;goto B6d0150;
case 0x6d0153:goto L6d0153;
case 0x6d0155:c.instructions+=3;goto B6d0155;
case 0x6d0158:c.instructions+=2;goto B6d0158;
case 0x6d015b:c.instructions+=1;goto B6d015b;
case 0x6d015d:goto L6d015d;
case 0x6d015f:c.instructions+=7;goto B6d015f;
case 0x6d0162:c.instructions+=6;goto B6d0162;
case 0x6d0165:c.instructions+=5;goto B6d0165;
case 0x6d0168:c.instructions+=4;goto B6d0168;
case 0x6d016b:c.instructions+=3;goto B6d016b;
case 0x6d016e:c.instructions+=2;goto B6d016e;
case 0x6d0171:c.instructions+=1;goto B6d0171;
case 0x6d0173:goto L6d0173;
case 0x6d0175:c.instructions+=13;goto B6d0175;
case 0x6d0178:c.instructions+=12;goto B6d0178;
case 0x6d017b:c.instructions+=11;goto B6d017b;
case 0x6d017e:c.instructions+=10;goto B6d017e;
case 0x6d0181:c.instructions+=9;goto B6d0181;
case 0x6d0184:c.instructions+=8;goto B6d0184;
case 0x6d0187:c.instructions+=7;goto B6d0187;
case 0x6d0189:c.instructions+=6;goto B6d0189;
case 0x6d018c:c.instructions+=5;goto B6d018c;
case 0x6d018f:c.instructions+=4;goto B6d018f;
case 0x6d0192:c.instructions+=3;goto B6d0192;
case 0x6d0194:c.instructions+=2;goto B6d0194;
case 0x6d0196:c.instructions+=1;goto B6d0196;
case 0x6d0198:goto L6d0198;
case 0x6d019b:c.instructions+=7;goto B6d019b;
case 0x6d019e:c.instructions+=6;goto B6d019e;
case 0x6d019f:c.instructions+=5;goto B6d019f;
case 0x6d01a2:c.instructions+=4;goto B6d01a2;
case 0x6d01a5:c.instructions+=3;goto B6d01a5;
case 0x6d01a8:c.instructions+=2;goto B6d01a8;
case 0x6d01ab:c.instructions+=1;goto B6d01ab;
case 0x6d01ad:goto L6d01ad;
case 0x6d01b0:c.instructions+=3;goto B6d01b0;
case 0x6d01b3:c.instructions+=2;goto B6d01b3;
case 0x6d01b5:c.instructions+=1;goto B6d01b5;
case 0x6d01b7:goto L6d01b7;
case 0x6d01b9:c.instructions+=2;goto B6d01b9;
case 0x6d01ba:c.instructions+=1;goto B6d01ba;
case 0x6d01bc:goto L6d01bc;
case 0x6d01bf:c.instructions+=1;goto B6d01bf;
case 0x6d01c1:goto L6d01c1;
case 0x6d01c3:c.instructions+=1;goto B6d01c3;
case 0x6d01c5:goto L6d01c5;
case 0x6d01ca:c.instructions+=4;goto B6d01ca;
case 0x6d01cc:c.instructions+=3;goto B6d01cc;
case 0x6d01ce:c.instructions+=2;goto B6d01ce;
case 0x6d01cf:c.instructions+=1;goto B6d01cf;
case 0x6d01d0:goto L6d01d0;
case 0x6d01d3:c.instructions+=13;goto B6d01d3;
case 0x6d01d6:c.instructions+=12;goto B6d01d6;
case 0x6d01d8:c.instructions+=11;goto B6d01d8;
case 0x6d01db:c.instructions+=10;goto B6d01db;
case 0x6d01de:c.instructions+=9;goto B6d01de;
case 0x6d01e2:c.instructions+=8;goto B6d01e2;
case 0x6d01e5:c.instructions+=7;goto B6d01e5;
case 0x6d01e8:c.instructions+=6;goto B6d01e8;
case 0x6d01ec:c.instructions+=5;goto B6d01ec;
case 0x6d01ef:c.instructions+=4;goto B6d01ef;
case 0x6d01f3:c.instructions+=3;goto B6d01f3;
case 0x6d01f6:c.instructions+=2;goto B6d01f6;
case 0x6d01f8:c.instructions+=1;goto B6d01f8;
case 0x6d01fa:goto L6d01fa;
case 0x6d01fd:c.instructions+=11;goto B6d01fd;
case 0x6d01fe:c.instructions+=10;goto B6d01fe;
case 0x6d0200:c.instructions+=9;goto B6d0200;
case 0x6d0203:c.instructions+=8;goto B6d0203;
case 0x6d0206:c.instructions+=7;goto B6d0206;
case 0x6d020c:c.instructions+=6;goto B6d020c;
case 0x6d020d:c.instructions+=5;goto B6d020d;
case 0x6d020f:c.instructions+=4;goto B6d020f;
case 0x6d0210:c.instructions+=3;goto B6d0210;
case 0x6d0213:c.instructions+=2;goto B6d0213;
case 0x6d0214:c.instructions+=1;goto B6d0214;
case 0x6d0219:goto L6d0219;
case 0x6d021b:c.instructions+=2;goto B6d021b;
case 0x6d021d:c.instructions+=1;goto B6d021d;
case 0x6d0223:goto L6d0223;
case 0x6d0226:c.instructions+=2;goto B6d0226;
case 0x6d022a:c.instructions+=1;goto B6d022a;
case 0x6d022c:goto L6d022c;
case 0x6d022f:c.instructions+=5;goto B6d022f;
case 0x6d0231:c.instructions+=4;goto B6d0231;
case 0x6d0234:c.instructions+=3;goto B6d0234;
case 0x6d0235:c.instructions+=2;goto B6d0235;
case 0x6d0238:c.instructions+=1;goto B6d0238;
case 0x6d023e:goto L6d023e;
case 0x6d0240:c.instructions+=2;goto B6d0240;
case 0x6d0242:c.instructions+=1;goto B6d0242;
case 0x6d0248:goto L6d0248;
case 0x6d024b:c.instructions+=3;goto B6d024b;
case 0x6d024e:c.instructions+=2;goto B6d024e;
case 0x6d0250:c.instructions+=1;goto B6d0250;
case 0x6d0256:goto L6d0256;
case 0x6d0259:c.instructions+=2;goto B6d0259;
case 0x6d025d:c.instructions+=1;goto B6d025d;
case 0x6d0263:goto L6d0263;
case 0x6d0266:c.instructions+=6;goto B6d0266;
case 0x6d0269:c.instructions+=5;goto B6d0269;
case 0x6d026b:c.instructions+=4;goto B6d026b;
case 0x6d026e:c.instructions+=3;goto B6d026e;
case 0x6d026f:c.instructions+=2;goto B6d026f;
case 0x6d0272:c.instructions+=1;goto B6d0272;
case 0x6d0277:goto L6d0277;
case 0x6d0279:c.instructions+=3;goto B6d0279;
case 0x6d027a:c.instructions+=2;goto B6d027a;
case 0x6d027d:c.instructions+=1;goto B6d027d;
case 0x6d0283:goto L6d0283;
case 0x6d0286:c.instructions+=5;goto B6d0286;
case 0x6d0289:c.instructions+=4;goto B6d0289;
case 0x6d028b:c.instructions+=3;goto B6d028b;
case 0x6d028e:c.instructions+=2;goto B6d028e;
case 0x6d0290:c.instructions+=1;goto B6d0290;
case 0x6d0292:goto L6d0292;
case 0x6d0294:goto L6d0294;
case 0x6d0296:c.instructions+=2;goto B6d0296;
case 0x6d0299:c.instructions+=1;goto B6d0299;
case 0x6d029c:goto L6d029c;
case 0x6d029e:goto L6d029e;
case 0x6d02a0:goto L6d02a0;
case 0x6d02a3:goto L6d02a3;
case 0x6d02a9:c.instructions+=3;goto B6d02a9;
case 0x6d02ac:c.instructions+=2;goto B6d02ac;
case 0x6d02ad:c.instructions+=1;goto B6d02ad;
case 0x6d02af:goto L6d02af;
case 0x6d02b2:c.instructions+=3;goto B6d02b2;
case 0x6d02b6:c.instructions+=2;goto B6d02b6;
case 0x6d02ba:c.instructions+=1;goto B6d02ba;
case 0x6d02bc:goto L6d02bc;
case 0x6d02bf:c.instructions+=5;goto B6d02bf;
case 0x6d02c2:c.instructions+=4;goto B6d02c2;
case 0x6d02c5:c.instructions+=3;goto B6d02c5;
case 0x6d02c8:c.instructions+=2;goto B6d02c8;
case 0x6d02ca:c.instructions+=1;goto B6d02ca;
case 0x6d02cc:goto L6d02cc;
case 0x6d02ce:c.instructions+=2;goto B6d02ce;
case 0x6d02d1:c.instructions+=1;goto B6d02d1;
case 0x6d02d3:goto L6d02d3;
case 0x6d02d4:c.instructions+=1;goto B6d02d4;
case 0x6d02d6:goto L6d02d6;
case 0x6d02d7:c.instructions+=1;goto B6d02d7;
case 0x6d02d9:goto L6d02d9;
case 0x6d02da:c.instructions+=1;goto B6d02da;
case 0x6d02dc:goto L6d02dc;
case 0x6d02df:c.instructions+=1;goto B6d02df;
case 0x6d02e4:goto L6d02e4;
case 0x6d02e7:c.instructions+=2;goto B6d02e7;
case 0x6d02ea:c.instructions+=1;goto B6d02ea;
case 0x6d02ec:goto L6d02ec;
case 0x6d02ef:c.instructions+=2;goto B6d02ef;
case 0x6d02f2:c.instructions+=1;goto B6d02f2;
case 0x6d02f4:goto L6d02f4;
case 0x6d02f6:c.instructions+=3;goto B6d02f6;
case 0x6d02f9:c.instructions+=2;goto B6d02f9;
case 0x6d02fc:c.instructions+=1;goto B6d02fc;
case 0x6d02ff:goto L6d02ff;
case 0x6d0302:c.instructions+=3;goto B6d0302;
case 0x6d0305:c.instructions+=2;goto B6d0305;
case 0x6d0308:c.instructions+=1;goto B6d0308;
case 0x6d030a:goto L6d030a;
case 0x6d030d:c.instructions+=7;goto B6d030d;
case 0x6d0310:c.instructions+=6;goto B6d0310;
case 0x6d0311:c.instructions+=5;goto B6d0311;
case 0x6d0313:c.instructions+=4;goto B6d0313;
case 0x6d0316:c.instructions+=3;goto B6d0316;
case 0x6d0319:c.instructions+=2;goto B6d0319;
case 0x6d031a:c.instructions+=1;goto B6d031a;
case 0x6d031f:goto L6d031f;
case 0x6d0321:c.instructions+=2;goto B6d0321;
case 0x6d0323:c.instructions+=1;goto B6d0323;
case 0x6d0329:goto L6d0329;
case 0x6d032d:c.instructions+=1;goto B6d032d;
case 0x6d0332:goto L6d0332;
case 0x6d0336:c.instructions+=1;goto B6d0336;
case 0x6d033c:goto L6d033c;
case 0x6d033f:c.instructions+=6;goto B6d033f;
case 0x6d0342:c.instructions+=5;goto B6d0342;
case 0x6d0344:c.instructions+=4;goto B6d0344;
case 0x6d0347:c.instructions+=3;goto B6d0347;
case 0x6d0348:c.instructions+=2;goto B6d0348;
case 0x6d034b:c.instructions+=1;goto B6d034b;
case 0x6d0350:goto L6d0350;
case 0x6d0352:c.instructions+=3;goto B6d0352;
case 0x6d0353:c.instructions+=2;goto B6d0353;
case 0x6d0356:c.instructions+=1;goto B6d0356;
case 0x6d035c:goto L6d035c;
case 0x6d035f:c.instructions+=4;goto B6d035f;
case 0x6d0361:c.instructions+=3;goto B6d0361;
case 0x6d0364:c.instructions+=2;goto B6d0364;
case 0x6d0366:c.instructions+=1;goto B6d0366;
case 0x6d0368:goto L6d0368;
case 0x6d036a:goto L6d036a;
case 0x6d036c:c.instructions+=1;goto B6d036c;
case 0x6d036f:goto L6d036f;
case 0x6d0371:goto L6d0371;
case 0x6d0374:c.instructions+=3;goto B6d0374;
case 0x6d0376:c.instructions+=2;goto B6d0376;
case 0x6d0379:c.instructions+=1;goto B6d0379;
case 0x6d037b:goto L6d037b;
case 0x6d037e:c.instructions+=5;goto B6d037e;
case 0x6d0380:c.instructions+=4;goto B6d0380;
case 0x6d0383:c.instructions+=3;goto B6d0383;
case 0x6d0386:c.instructions+=2;goto B6d0386;
case 0x6d0388:c.instructions+=1;goto B6d0388;
case 0x6d038a:goto L6d038a;
case 0x6d038c:c.instructions+=2;goto B6d038c;
case 0x6d038f:c.instructions+=1;goto B6d038f;
case 0x6d0391:goto L6d0391;
case 0x6d0392:c.instructions+=1;goto B6d0392;
case 0x6d0394:goto L6d0394;
case 0x6d0395:c.instructions+=1;goto B6d0395;
case 0x6d0397:goto L6d0397;
case 0x6d0398:c.instructions+=1;goto B6d0398;
case 0x6d039a:goto L6d039a;
case 0x6d039d:c.instructions+=1;goto B6d039d;
case 0x6d039f:goto L6d039f;
case 0x6d03a2:c.instructions+=4;goto B6d03a2;
case 0x6d03a4:c.instructions+=3;goto B6d03a4;
case 0x6d03a7:c.instructions+=2;goto B6d03a7;
case 0x6d03aa:c.instructions+=1;goto B6d03aa;
case 0x6d03ac:goto L6d03ac;
case 0x6d03b2:c.instructions+=1;goto B6d03b2;
case 0x6d03b4:goto L6d03b4;
case 0x6d03b7:c.instructions+=1;goto B6d03b7;
case 0x6d03b9:goto L6d03b9;
case 0x6d03bd:c.instructions+=1;goto B6d03bd;
case 0x6d03bf:goto L6d03bf;
case 0x6d03c1:c.instructions+=1;goto B6d03c1;
case 0x6d03c3:goto L6d03c3;
case 0x6d03c5:goto L6d03c5;
case 0x6d03c8:goto L6d03c8;
case 0x6d03c9:c.instructions+=2;goto B6d03c9;
case 0x6d03cc:c.instructions+=1;goto B6d03cc;
case 0x6d03ce:goto L6d03ce;
case 0x6d03d1:c.instructions+=7;goto B6d03d1;
case 0x6d03d4:c.instructions+=6;goto B6d03d4;
case 0x6d03d5:c.instructions+=5;goto B6d03d5;
case 0x6d03d7:c.instructions+=4;goto B6d03d7;
case 0x6d03da:c.instructions+=3;goto B6d03da;
case 0x6d03dd:c.instructions+=2;goto B6d03dd;
case 0x6d03de:c.instructions+=1;goto B6d03de;
case 0x6d03e3:goto L6d03e3;
case 0x6d03e5:c.instructions+=2;goto B6d03e5;
case 0x6d03e7:c.instructions+=1;goto B6d03e7;
case 0x6d03ed:goto L6d03ed;
case 0x6d03f1:c.instructions+=1;goto B6d03f1;
case 0x6d03f6:goto L6d03f6;
case 0x6d03f9:c.instructions+=1;goto B6d03f9;
case 0x6d03ff:goto L6d03ff;
case 0x6d0402:c.instructions+=5;goto B6d0402;
case 0x6d0404:c.instructions+=4;goto B6d0404;
case 0x6d0407:c.instructions+=3;goto B6d0407;
case 0x6d0408:c.instructions+=2;goto B6d0408;
case 0x6d040b:c.instructions+=1;goto B6d040b;
case 0x6d0410:goto L6d0410;
case 0x6d0412:c.instructions+=3;goto B6d0412;
case 0x6d0413:c.instructions+=2;goto B6d0413;
case 0x6d0416:c.instructions+=1;goto B6d0416;
case 0x6d041c:goto L6d041c;
case 0x6d041e:c.instructions+=5;goto B6d041e;
case 0x6d0421:c.instructions+=4;goto B6d0421;
case 0x6d0423:c.instructions+=3;goto B6d0423;
case 0x6d0426:c.instructions+=2;goto B6d0426;
case 0x6d0428:c.instructions+=1;goto B6d0428;
case 0x6d042a:goto L6d042a;
case 0x6d042c:goto L6d042c;
case 0x6d042e:c.instructions+=1;goto B6d042e;
case 0x6d0431:goto L6d0431;
case 0x6d0433:goto L6d0433;
case 0x6d0436:c.instructions+=4;goto B6d0436;
case 0x6d0438:c.instructions+=3;goto B6d0438;
case 0x6d043b:c.instructions+=2;goto B6d043b;
case 0x6d043e:c.instructions+=1;goto B6d043e;
case 0x6d0440:goto L6d0440;
case 0x6d0443:c.instructions+=5;goto B6d0443;
case 0x6d0446:c.instructions+=4;goto B6d0446;
case 0x6d0449:c.instructions+=3;goto B6d0449;
case 0x6d044c:c.instructions+=2;goto B6d044c;
case 0x6d044e:c.instructions+=1;goto B6d044e;
case 0x6d0450:goto L6d0450;
case 0x6d0452:c.instructions+=2;goto B6d0452;
case 0x6d0454:c.instructions+=1;goto B6d0454;
case 0x6d0456:goto L6d0456;
case 0x6d0457:c.instructions+=1;goto B6d0457;
case 0x6d0459:goto L6d0459;
case 0x6d045a:c.instructions+=1;goto B6d045a;
case 0x6d045c:goto L6d045c;
case 0x6d045d:c.instructions+=1;goto B6d045d;
case 0x6d045f:goto L6d045f;
case 0x6d0465:c.instructions+=5;goto B6d0465;
case 0x6d0468:c.instructions+=4;goto B6d0468;
case 0x6d046a:c.instructions+=3;goto B6d046a;
case 0x6d046c:c.instructions+=2;goto B6d046c;
case 0x6d046f:c.instructions+=1;goto B6d046f;
case 0x6d0471:goto L6d0471;
case 0x6d0473:c.instructions+=2;goto B6d0473;
case 0x6d0474:c.instructions+=1;goto B6d0474;
case 0x6d0476:goto L6d0476;
case 0x6d0478:goto L6d0478;
case 0x6d047b:c.instructions+=1;goto B6d047b;
case 0x6d047d:goto L6d047d;
case 0x6d047f:c.instructions+=3;goto B6d047f;
case 0x6d0482:c.instructions+=2;goto B6d0482;
case 0x6d0485:c.instructions+=1;goto B6d0485;
case 0x6d0488:goto L6d0488;
case 0x6d048b:c.instructions+=3;goto B6d048b;
case 0x6d048e:c.instructions+=2;goto B6d048e;
case 0x6d0491:c.instructions+=1;goto B6d0491;
case 0x6d0493:goto L6d0493;
case 0x6d0496:c.instructions+=7;goto B6d0496;
case 0x6d0499:c.instructions+=6;goto B6d0499;
case 0x6d049a:c.instructions+=5;goto B6d049a;
case 0x6d049c:c.instructions+=4;goto B6d049c;
case 0x6d049f:c.instructions+=3;goto B6d049f;
case 0x6d04a2:c.instructions+=2;goto B6d04a2;
case 0x6d04a3:c.instructions+=1;goto B6d04a3;
case 0x6d04a8:goto L6d04a8;
case 0x6d04aa:c.instructions+=2;goto B6d04aa;
case 0x6d04ac:c.instructions+=1;goto B6d04ac;
case 0x6d04b2:goto L6d04b2;
case 0x6d04b6:goto L6d04b6;
case 0x6d04b9:c.instructions+=1;goto B6d04b9;
case 0x6d04bc:goto L6d04bc;
case 0x6d04bf:c.instructions+=7;goto B6d04bf;
case 0x6d04c2:c.instructions+=6;goto B6d04c2;
case 0x6d04c5:c.instructions+=5;goto B6d04c5;
case 0x6d04c8:c.instructions+=4;goto B6d04c8;
case 0x6d04cb:c.instructions+=3;goto B6d04cb;
case 0x6d04ce:c.instructions+=2;goto B6d04ce;
case 0x6d04d1:c.instructions+=1;goto B6d04d1;
case 0x6d04d7:goto L6d04d7;
case 0x6d04da:c.instructions+=6;goto B6d04da;
case 0x6d04dd:c.instructions+=5;goto B6d04dd;
case 0x6d04e0:c.instructions+=4;goto B6d04e0;
case 0x6d04e2:c.instructions+=3;goto B6d04e2;
case 0x6d04e5:c.instructions+=2;goto B6d04e5;
case 0x6d04e6:c.instructions+=1;goto B6d04e6;
case 0x6d04ec:goto L6d04ec;
case 0x6d04ee:c.instructions+=2;goto B6d04ee;
case 0x6d04f0:c.instructions+=1;goto B6d04f0;
case 0x6d04f6:goto L6d04f6;
case 0x6d04f9:c.instructions+=10;goto B6d04f9;
case 0x6d04fb:c.instructions+=9;goto B6d04fb;
case 0x6d04fe:c.instructions+=8;goto B6d04fe;
case 0x6d04ff:c.instructions+=7;goto B6d04ff;
case 0x6d0500:c.instructions+=6;goto B6d0500;
case 0x6d0501:c.instructions+=5;goto B6d0501;
case 0x6d0504:c.instructions+=4;goto B6d0504;
case 0x6d0505:c.instructions+=3;goto B6d0505;
case 0x6d0507:c.instructions+=2;goto B6d0507;
case 0x6d050d:c.instructions+=1;goto B6d050d;
case 0x6d0512:goto L6d0512;
case 0x6d0514:c.instructions+=2;goto B6d0514;
case 0x6d0516:c.instructions+=1;goto B6d0516;
case 0x6d051c:goto L6d051c;
case 0x6d051f:c.instructions+=6;goto B6d051f;
case 0x6d0520:c.instructions+=5;goto B6d0520;
case 0x6d0522:c.instructions+=4;goto B6d0522;
case 0x6d0524:c.instructions+=3;goto B6d0524;
case 0x6d0527:c.instructions+=2;goto B6d0527;
case 0x6d052a:c.instructions+=1;goto B6d052a;
case 0x6d052f:goto L6d052f;
case 0x6d0531:c.instructions+=2;goto B6d0531;
case 0x6d0533:c.instructions+=1;goto B6d0533;
case 0x6d0539:goto L6d0539;
case 0x6d053c:c.instructions+=6;goto B6d053c;
case 0x6d053d:c.instructions+=5;goto B6d053d;
case 0x6d053f:c.instructions+=4;goto B6d053f;
case 0x6d0541:c.instructions+=3;goto B6d0541;
case 0x6d0546:c.instructions+=2;goto B6d0546;
case 0x6d0549:c.instructions+=1;goto B6d0549;
case 0x6d054e:goto L6d054e;
case 0x6d0550:c.instructions+=2;goto B6d0550;
case 0x6d0552:c.instructions+=1;goto B6d0552;
case 0x6d0558:goto L6d0558;
case 0x6d055b:c.instructions+=1;goto B6d055b;
case 0x6d0560:goto L6d0560;
case 0x6d0562:c.instructions+=2;goto B6d0562;
case 0x6d0568:c.instructions+=1;goto B6d0568;
case 0x6d056a:goto L6d056a;
case 0x6d056b:c.instructions+=2;goto B6d056b;
case 0x6d056d:c.instructions+=1;goto B6d056d;
case 0x6d0572:goto L6d0572;
case 0x6d0574:c.instructions+=2;goto B6d0574;
case 0x6d0576:c.instructions+=1;goto B6d0576;
case 0x6d0578:goto L6d0578;
case 0x6d057e:c.instructions+=8;goto B6d057e;
case 0x6d0584:c.instructions+=7;goto B6d0584;
case 0x6d058b:c.instructions+=6;goto B6d058b;
case 0x6d058c:c.instructions+=5;goto B6d058c;
case 0x6d058f:c.instructions+=4;goto B6d058f;
case 0x6d0590:c.instructions+=3;goto B6d0590;
case 0x6d0594:c.instructions+=2;goto B6d0594;
case 0x6d0595:c.instructions+=1;goto B6d0595;
case 0x6d059a:goto L6d059a;
case 0x6d05a0:c.instructions+=6;goto B6d05a0;
case 0x6d05a3:c.instructions+=5;goto B6d05a3;
case 0x6d05a4:c.instructions+=4;goto B6d05a4;
case 0x6d05a7:c.instructions+=3;goto B6d05a7;
case 0x6d05a8:c.instructions+=2;goto B6d05a8;
case 0x6d05ab:c.instructions+=1;goto B6d05ab;
case 0x6d05b0:goto L6d05b0;
case 0x6d05b2:c.instructions+=2;goto B6d05b2;
case 0x6d05b4:c.instructions+=1;goto B6d05b4;
case 0x6d05b6:goto L6d05b6;
case 0x6d05bc:c.instructions+=5;goto B6d05bc;
case 0x6d05c2:c.instructions+=4;goto B6d05c2;
case 0x6d05c8:c.instructions+=3;goto B6d05c8;
case 0x6d05ce:c.instructions+=2;goto B6d05ce;
case 0x6d05d0:c.instructions+=1;goto B6d05d0;
case 0x6d05d2:goto L6d05d2;
case 0x6d05d7:c.instructions+=1;goto B6d05d7;
case 0x6d05d9:goto L6d05d9;
case 0x6d05de:c.instructions+=4;goto B6d05de;
case 0x6d05e3:c.instructions+=3;goto B6d05e3;
case 0x6d05e5:c.instructions+=2;goto B6d05e5;
case 0x6d05e6:c.instructions+=1;goto B6d05e6;
case 0x6d05eb:goto L6d05eb;
case 0x6d05ee:c.instructions+=1;goto B6d05ee;
case 0x6d05f3:goto L6d05f3;
case 0x6d05f6:c.instructions+=1;goto B6d05f6;
case 0x6d05fb:goto L6d05fb;
case 0x6d05fe:c.instructions+=1;goto B6d05fe;
case 0x6d0603:goto L6d0603;
case 0x6d0606:c.instructions+=1;goto B6d0606;
case 0x6d060b:goto L6d060b;
case 0x6d060e:c.instructions+=1;goto B6d060e;
case 0x6d0613:goto L6d0613;
case 0x6d0616:c.instructions+=1;goto B6d0616;
case 0x6d061b:goto L6d061b;
case 0x6d061e:c.instructions+=1;goto B6d061e;
case 0x6d0623:goto L6d0623;
case 0x6d0626:c.instructions+=2;goto B6d0626;
case 0x6d0629:c.instructions+=1;goto B6d0629;
case 0x6d062e:goto L6d062e;
case 0x6d062f:c.instructions+=5;goto B6d062f;
case 0x6d0631:c.instructions+=4;goto B6d0631;
case 0x6d0632:c.instructions+=3;goto B6d0632;
case 0x6d0633:c.instructions+=2;goto B6d0633;
case 0x6d0634:c.instructions+=1;goto B6d0634;
case 0x6d0635:goto L6d0635;
case 0x6d0637:c.instructions+=10;goto B6d0637;
case 0x6d0638:c.instructions+=9;goto B6d0638;
case 0x6d063a:c.instructions+=8;goto B6d063a;
case 0x6d063d:c.instructions+=7;goto B6d063d;
case 0x6d063e:c.instructions+=6;goto B6d063e;
case 0x6d063f:c.instructions+=5;goto B6d063f;
case 0x6d0640:c.instructions+=4;goto B6d0640;
case 0x6d0642:c.instructions+=3;goto B6d0642;
case 0x6d0647:c.instructions+=2;goto B6d0647;
case 0x6d064a:c.instructions+=1;goto B6d064a;
case 0x6d064f:goto L6d064f;
case 0x6d0651:c.instructions+=5;goto B6d0651;
case 0x6d0652:c.instructions+=4;goto B6d0652;
case 0x6d0654:c.instructions+=3;goto B6d0654;
case 0x6d0656:c.instructions+=2;goto B6d0656;
case 0x6d0658:c.instructions+=1;goto B6d0658;
case 0x6d065b:goto L6d065b;
case 0x6d065d:goto L6d065d;
case 0x6d065e:c.instructions+=14;goto B6d065e;
case 0x6d065f:c.instructions+=13;goto B6d065f;
case 0x6d0661:c.instructions+=12;goto B6d0661;
case 0x6d0662:c.instructions+=11;goto B6d0662;
case 0x6d0665:c.instructions+=10;goto B6d0665;
case 0x6d0668:c.instructions+=9;goto B6d0668;
case 0x6d0669:c.instructions+=8;goto B6d0669;
case 0x6d066c:c.instructions+=7;goto B6d066c;
case 0x6d066f:c.instructions+=6;goto B6d066f;
case 0x6d0672:c.instructions+=5;goto B6d0672;
case 0x6d0675:c.instructions+=4;goto B6d0675;
case 0x6d0678:c.instructions+=3;goto B6d0678;
case 0x6d067b:c.instructions+=2;goto B6d067b;
case 0x6d067e:c.instructions+=1;goto B6d067e;
case 0x6d0683:goto L6d0683;
case 0x6d0685:c.instructions+=2;goto B6d0685;
case 0x6d0688:c.instructions+=1;goto B6d0688;
case 0x6d068e:goto L6d068e;
case 0x6d0694:c.instructions+=3;goto B6d0694;
case 0x6d0696:c.instructions+=2;goto B6d0696;
case 0x6d0699:c.instructions+=1;goto B6d0699;
case 0x6d069f:goto L6d069f;
case 0x6d06a2:c.instructions+=2;goto B6d06a2;
case 0x6d06a3:c.instructions+=1;goto B6d06a3;
case 0x6d06a8:goto L6d06a8;
case 0x6d06aa:c.instructions+=4;goto B6d06aa;
case 0x6d06ac:c.instructions+=3;goto B6d06ac;
case 0x6d06ad:c.instructions+=2;goto B6d06ad;
case 0x6d06b0:c.instructions+=1;goto B6d06b0;
case 0x6d06b6:goto L6d06b6;
case 0x6d06b9:c.instructions+=1;goto B6d06b9;
case 0x6d06bb:goto L6d06bb;
case 0x6d06bd:goto L6d06bd;
case 0x6d06c0:c.instructions+=3;goto B6d06c0;
case 0x6d06c3:c.instructions+=2;goto B6d06c3;
case 0x6d06c4:c.instructions+=1;goto B6d06c4;
case 0x6d06c9:goto L6d06c9;
case 0x6d06cb:c.instructions+=3;goto B6d06cb;
case 0x6d06cc:c.instructions+=2;goto B6d06cc;
case 0x6d06cf:c.instructions+=1;goto B6d06cf;
case 0x6d06d5:goto L6d06d5;
case 0x6d06d8:c.instructions+=6;goto B6d06d8;
case 0x6d06db:c.instructions+=5;goto B6d06db;
case 0x6d06de:c.instructions+=4;goto B6d06de;
case 0x6d06e1:c.instructions+=3;goto B6d06e1;
case 0x6d06e3:c.instructions+=2;goto B6d06e3;
case 0x6d06e6:c.instructions+=1;goto B6d06e6;
case 0x6d06e8:goto L6d06e8;
case 0x6d06ea:goto L6d06ea;
case 0x6d06ec:c.instructions+=1;goto B6d06ec;
case 0x6d06ef:goto L6d06ef;
case 0x6d06f1:goto L6d06f1;
case 0x6d06f4:c.instructions+=3;goto B6d06f4;
case 0x6d06f7:c.instructions+=2;goto B6d06f7;
case 0x6d06f8:c.instructions+=1;goto B6d06f8;
case 0x6d06fd:goto L6d06fd;
case 0x6d06ff:c.instructions+=3;goto B6d06ff;
case 0x6d0700:c.instructions+=2;goto B6d0700;
case 0x6d0703:c.instructions+=1;goto B6d0703;
case 0x6d0709:goto L6d0709;
case 0x6d070c:c.instructions+=5;goto B6d070c;
case 0x6d070f:c.instructions+=4;goto B6d070f;
case 0x6d0712:c.instructions+=3;goto B6d0712;
case 0x6d0714:c.instructions+=2;goto B6d0714;
case 0x6d0717:c.instructions+=1;goto B6d0717;
case 0x6d0719:goto L6d0719;
case 0x6d071b:goto L6d071b;
case 0x6d071d:c.instructions+=1;goto B6d071d;
case 0x6d0720:goto L6d0720;
case 0x6d0722:goto L6d0722;
case 0x6d0725:c.instructions+=2;goto B6d0725;
case 0x6d0728:c.instructions+=1;goto B6d0728;
case 0x6d072e:goto L6d072e;
case 0x6d0731:c.instructions+=1;goto B6d0731;
case 0x6d0734:goto L6d0734;
case 0x6d0739:c.instructions+=7;goto B6d0739;
case 0x6d073e:c.instructions+=6;goto B6d073e;
case 0x6d0744:c.instructions+=5;goto B6d0744;
case 0x6d0748:c.instructions+=4;goto B6d0748;
case 0x6d074b:c.instructions+=3;goto B6d074b;
case 0x6d074e:c.instructions+=2;goto B6d074e;
case 0x6d0751:c.instructions+=1;goto B6d0751;
case 0x6d0758:goto L6d0758;
case 0x6d075e:c.instructions+=3;goto B6d075e;
case 0x6d0761:c.instructions+=2;goto B6d0761;
case 0x6d0764:c.instructions+=1;goto B6d0764;
case 0x6d0766:goto L6d0766;
case 0x6d0769:c.instructions+=5;goto B6d0769;
case 0x6d076c:c.instructions+=4;goto B6d076c;
case 0x6d0770:c.instructions+=3;goto B6d0770;
case 0x6d0773:c.instructions+=2;goto B6d0773;
case 0x6d0776:c.instructions+=1;goto B6d0776;
case 0x6d0778:goto L6d0778;
case 0x6d077e:c.instructions+=6;goto B6d077e;
case 0x6d0781:c.instructions+=5;goto B6d0781;
case 0x6d0784:c.instructions+=4;goto B6d0784;
case 0x6d0787:c.instructions+=3;goto B6d0787;
case 0x6d078a:c.instructions+=2;goto B6d078a;
case 0x6d078d:c.instructions+=1;goto B6d078d;
case 0x6d0790:goto L6d0790;
case 0x6d0793:c.instructions+=3;goto B6d0793;
case 0x6d0796:c.instructions+=2;goto B6d0796;
case 0x6d0799:c.instructions+=1;goto B6d0799;
case 0x6d079b:goto L6d079b;
case 0x6d07a1:c.instructions+=3;goto B6d07a1;
case 0x6d07a4:c.instructions+=2;goto B6d07a4;
case 0x6d07a6:c.instructions+=1;goto B6d07a6;
case 0x6d07a8:goto L6d07a8;
case 0x6d07ac:c.instructions+=6;goto B6d07ac;
case 0x6d07b0:c.instructions+=5;goto B6d07b0;
case 0x6d07b6:c.instructions+=4;goto B6d07b6;
case 0x6d07b9:c.instructions+=3;goto B6d07b9;
case 0x6d07bc:c.instructions+=2;goto B6d07bc;
case 0x6d07be:c.instructions+=1;goto B6d07be;
case 0x6d07c0:goto L6d07c0;
case 0x6d07c3:c.instructions+=6;goto B6d07c3;
case 0x6d07c4:c.instructions+=5;goto B6d07c4;
case 0x6d07c6:c.instructions+=4;goto B6d07c6;
case 0x6d07c8:c.instructions+=3;goto B6d07c8;
case 0x6d07c9:c.instructions+=2;goto B6d07c9;
case 0x6d07cc:c.instructions+=1;goto B6d07cc;
case 0x6d07d1:goto L6d07d1;
case 0x6d07d3:c.instructions+=1;goto B6d07d3;
case 0x6d07d9:goto L6d07d9;
case 0x6d07dc:c.instructions+=4;goto B6d07dc;
case 0x6d07de:c.instructions+=3;goto B6d07de;
case 0x6d07e1:c.instructions+=2;goto B6d07e1;
case 0x6d07e4:c.instructions+=1;goto B6d07e4;
case 0x6d07e6:goto L6d07e6;
case 0x6d07e9:c.instructions+=2;goto B6d07e9;
case 0x6d07ec:c.instructions+=1;goto B6d07ec;
case 0x6d07ee:goto L6d07ee;
case 0x6d07ef:c.instructions+=3;goto B6d07ef;
case 0x6d07f2:c.instructions+=2;goto B6d07f2;
case 0x6d07f5:c.instructions+=1;goto B6d07f5;
case 0x6d07f7:goto L6d07f7;
case 0x6d07fa:c.instructions+=2;goto B6d07fa;
case 0x6d07fc:c.instructions+=1;goto B6d07fc;
case 0x6d07fe:goto L6d07fe;
case 0x6d0801:c.instructions+=3;goto B6d0801;
case 0x6d0804:c.instructions+=2;goto B6d0804;
case 0x6d0807:c.instructions+=1;goto B6d0807;
case 0x6d080a:goto L6d080a;
case 0x6d080d:goto L6d080d;
case 0x6d0810:c.instructions+=5;goto B6d0810;
case 0x6d0813:c.instructions+=4;goto B6d0813;
case 0x6d0816:c.instructions+=3;goto B6d0816;
case 0x6d0819:c.instructions+=2;goto B6d0819;
case 0x6d081c:c.instructions+=1;goto B6d081c;
case 0x6d0822:goto L6d0822;
case 0x6d0824:goto L6d0824;
case 0x6d0827:c.instructions+=2;goto B6d0827;
case 0x6d0829:c.instructions+=1;goto B6d0829;
case 0x6d082b:goto L6d082b;
case 0x6d082e:c.instructions+=7;goto B6d082e;
case 0x6d082f:c.instructions+=6;goto B6d082f;
case 0x6d0831:c.instructions+=5;goto B6d0831;
case 0x6d0834:c.instructions+=4;goto B6d0834;
case 0x6d0835:c.instructions+=3;goto B6d0835;
case 0x6d0838:c.instructions+=2;goto B6d0838;
case 0x6d083b:c.instructions+=1;goto B6d083b;
case 0x6d0840:goto L6d0840;
case 0x6d0842:c.instructions+=2;goto B6d0842;
case 0x6d0845:c.instructions+=1;goto B6d0845;
case 0x6d084b:goto L6d084b;
case 0x6d084e:c.instructions+=6;goto B6d084e;
case 0x6d084f:c.instructions+=5;goto B6d084f;
case 0x6d0851:c.instructions+=4;goto B6d0851;
case 0x6d0854:c.instructions+=3;goto B6d0854;
case 0x6d0857:c.instructions+=2;goto B6d0857;
case 0x6d085a:c.instructions+=1;goto B6d085a;
case 0x6d085f:goto L6d085f;
case 0x6d0861:c.instructions+=2;goto B6d0861;
case 0x6d0864:c.instructions+=1;goto B6d0864;
case 0x6d086a:goto L6d086a;
case 0x6d086d:c.instructions+=1;goto B6d086d;
case 0x6d0873:goto L6d0873;
case 0x6d0876:c.instructions+=5;goto B6d0876;
case 0x6d0877:c.instructions+=4;goto B6d0877;
case 0x6d087a:c.instructions+=3;goto B6d087a;
case 0x6d087b:c.instructions+=2;goto B6d087b;
case 0x6d0880:c.instructions+=1;goto B6d0880;
case 0x6d0885:goto L6d0885;
case 0x6d0887:c.instructions+=5;goto B6d0887;
case 0x6d0888:c.instructions+=4;goto B6d0888;
case 0x6d088b:c.instructions+=3;goto B6d088b;
case 0x6d088e:c.instructions+=2;goto B6d088e;
case 0x6d0890:c.instructions+=1;goto B6d0890;
case 0x6d0892:goto L6d0892;
case 0x6d0895:goto L6d0895;
case 0x6d0899:c.instructions+=6;goto B6d0899;
case 0x6d089c:c.instructions+=5;goto B6d089c;
case 0x6d089f:c.instructions+=4;goto B6d089f;
case 0x6d08a2:c.instructions+=3;goto B6d08a2;
case 0x6d08a5:c.instructions+=2;goto B6d08a5;
case 0x6d08a8:c.instructions+=1;goto B6d08a8;
case 0x6d08aa:goto L6d08aa;
case 0x6d08ad:goto L6d08ad;
case 0x6d08ae:c.instructions+=2;goto B6d08ae;
case 0x6d08b1:c.instructions+=1;goto B6d08b1;
case 0x6d08b3:goto L6d08b3;
case 0x6d08b6:goto L6d08b6;
case 0x6d08b9:c.instructions+=3;goto B6d08b9;
case 0x6d08bc:c.instructions+=2;goto B6d08bc;
case 0x6d08bd:c.instructions+=1;goto B6d08bd;
case 0x6d08c2:goto L6d08c2;
case 0x6d08c4:c.instructions+=3;goto B6d08c4;
case 0x6d08c5:c.instructions+=2;goto B6d08c5;
case 0x6d08c8:c.instructions+=1;goto B6d08c8;
case 0x6d08ce:goto L6d08ce;
case 0x6d08d1:c.instructions+=7;goto B6d08d1;
case 0x6d08d4:c.instructions+=6;goto B6d08d4;
case 0x6d08d7:c.instructions+=5;goto B6d08d7;
case 0x6d08da:c.instructions+=4;goto B6d08da;
case 0x6d08dc:c.instructions+=3;goto B6d08dc;
case 0x6d08de:c.instructions+=2;goto B6d08de;
case 0x6d08e1:c.instructions+=1;goto B6d08e1;
case 0x6d08e3:goto L6d08e3;
case 0x6d08e5:goto L6d08e5;
case 0x6d08e7:c.instructions+=1;goto B6d08e7;
case 0x6d08ea:goto L6d08ea;
case 0x6d08ec:goto L6d08ec;
case 0x6d08ee:c.instructions+=5;goto B6d08ee;
case 0x6d08f1:c.instructions+=4;goto B6d08f1;
case 0x6d08f4:c.instructions+=3;goto B6d08f4;
case 0x6d08f7:c.instructions+=2;goto B6d08f7;
case 0x6d08fa:c.instructions+=1;goto B6d08fa;
case 0x6d0900:goto L6d0900;
case 0x6d0903:c.instructions+=1;goto B6d0903;
case 0x6d0906:goto L6d0906;
case 0x6d0909:c.instructions+=11;goto B6d0909;
case 0x6d090c:c.instructions+=10;goto B6d090c;
case 0x6d090f:c.instructions+=9;goto B6d090f;
case 0x6d0912:c.instructions+=8;goto B6d0912;
case 0x6d0914:c.instructions+=7;goto B6d0914;
case 0x6d0917:c.instructions+=6;goto B6d0917;
case 0x6d091a:c.instructions+=5;goto B6d091a;
case 0x6d091d:c.instructions+=4;goto B6d091d;
case 0x6d091f:c.instructions+=3;goto B6d091f;
case 0x6d0922:c.instructions+=2;goto B6d0922;
case 0x6d0925:c.instructions+=1;goto B6d0925;
case 0x6d0927:goto L6d0927;
case 0x6d092a:c.instructions+=6;goto B6d092a;
case 0x6d092b:c.instructions+=5;goto B6d092b;
case 0x6d092d:c.instructions+=4;goto B6d092d;
case 0x6d092f:c.instructions+=3;goto B6d092f;
case 0x6d0930:c.instructions+=2;goto B6d0930;
case 0x6d0933:c.instructions+=1;goto B6d0933;
case 0x6d0938:goto L6d0938;
case 0x6d093a:c.instructions+=2;goto B6d093a;
case 0x6d093d:c.instructions+=1;goto B6d093d;
case 0x6d0943:goto L6d0943;
case 0x6d0946:goto L6d0946;
case 0x6d0949:c.instructions+=3;goto B6d0949;
case 0x6d094c:c.instructions+=2;goto B6d094c;
case 0x6d094e:c.instructions+=1;goto B6d094e;
case 0x6d0950:goto L6d0950;
case 0x6d0953:c.instructions+=6;goto B6d0953;
case 0x6d0954:c.instructions+=5;goto B6d0954;
case 0x6d0956:c.instructions+=4;goto B6d0956;
case 0x6d0958:c.instructions+=3;goto B6d0958;
case 0x6d0959:c.instructions+=2;goto B6d0959;
case 0x6d095c:c.instructions+=1;goto B6d095c;
case 0x6d0961:goto L6d0961;
case 0x6d0963:c.instructions+=2;goto B6d0963;
case 0x6d0966:c.instructions+=1;goto B6d0966;
case 0x6d096c:goto L6d096c;
case 0x6d096f:goto L6d096f;
case 0x6d0972:c.instructions+=2;goto B6d0972;
case 0x6d0975:c.instructions+=1;goto B6d0975;
case 0x6d0977:goto L6d0977;
case 0x6d097a:c.instructions+=1;goto B6d097a;
case 0x6d097c:goto L6d097c;
case 0x6d097e:c.instructions+=13;goto B6d097e;
case 0x6d0981:c.instructions+=12;goto B6d0981;
case 0x6d0984:c.instructions+=11;goto B6d0984;
case 0x6d0985:c.instructions+=10;goto B6d0985;
case 0x6d0988:c.instructions+=9;goto B6d0988;
case 0x6d098b:c.instructions+=8;goto B6d098b;
case 0x6d098e:c.instructions+=7;goto B6d098e;
case 0x6d0993:c.instructions+=6;goto B6d0993;
case 0x6d0994:c.instructions+=5;goto B6d0994;
case 0x6d0996:c.instructions+=4;goto B6d0996;
case 0x6d0999:c.instructions+=3;goto B6d0999;
case 0x6d099c:c.instructions+=2;goto B6d099c;
case 0x6d099d:c.instructions+=1;goto B6d099d;
case 0x6d09a2:goto L6d09a2;
case 0x6d09a4:c.instructions+=2;goto B6d09a4;
case 0x6d09a7:c.instructions+=1;goto B6d09a7;
case 0x6d09ad:goto L6d09ad;
case 0x6d09b0:c.instructions+=3;goto B6d09b0;
case 0x6d09b3:c.instructions+=2;goto B6d09b3;
case 0x6d09b6:c.instructions+=1;goto B6d09b6;
case 0x6d09b8:goto L6d09b8;
case 0x6d09bb:c.instructions+=6;goto B6d09bb;
case 0x6d09be:c.instructions+=5;goto B6d09be;
case 0x6d09c1:c.instructions+=4;goto B6d09c1;
case 0x6d09c4:c.instructions+=3;goto B6d09c4;
case 0x6d09c7:c.instructions+=2;goto B6d09c7;
case 0x6d09ca:c.instructions+=1;goto B6d09ca;
case 0x6d09cc:goto L6d09cc;
case 0x6d09cf:c.instructions+=2;goto B6d09cf;
case 0x6d09d2:c.instructions+=1;goto B6d09d2;
case 0x6d09d4:goto L6d09d4;
case 0x6d09d7:c.instructions+=5;goto B6d09d7;
case 0x6d09da:c.instructions+=4;goto B6d09da;
case 0x6d09dd:c.instructions+=3;goto B6d09dd;
case 0x6d09e0:c.instructions+=2;goto B6d09e0;
case 0x6d09e3:c.instructions+=1;goto B6d09e3;
case 0x6d09e5:goto L6d09e5;
case 0x6d09e8:c.instructions+=2;goto B6d09e8;
case 0x6d09eb:c.instructions+=1;goto B6d09eb;
case 0x6d09ed:goto L6d09ed;
case 0x6d09f0:goto L6d09f0;
case 0x6d09f3:c.instructions+=2;goto B6d09f3;
case 0x6d09f6:c.instructions+=1;goto B6d09f6;
case 0x6d09f8:goto L6d09f8;
case 0x6d09fb:c.instructions+=3;goto B6d09fb;
case 0x6d09fd:c.instructions+=2;goto B6d09fd;
case 0x6d0a00:c.instructions+=1;goto B6d0a00;
case 0x6d0a02:goto L6d0a02;
case 0x6d0a04:c.instructions+=4;goto B6d0a04;
case 0x6d0a07:c.instructions+=3;goto B6d0a07;
case 0x6d0a0a:c.instructions+=2;goto B6d0a0a;
case 0x6d0a0b:c.instructions+=1;goto B6d0a0b;
case 0x6d0a10:goto L6d0a10;
case 0x6d0a12:c.instructions+=3;goto B6d0a12;
case 0x6d0a13:c.instructions+=2;goto B6d0a13;
case 0x6d0a16:c.instructions+=1;goto B6d0a16;
case 0x6d0a1c:goto L6d0a1c;
case 0x6d0a1e:c.instructions+=7;goto B6d0a1e;
case 0x6d0a21:c.instructions+=6;goto B6d0a21;
case 0x6d0a24:c.instructions+=5;goto B6d0a24;
case 0x6d0a27:c.instructions+=4;goto B6d0a27;
case 0x6d0a2a:c.instructions+=3;goto B6d0a2a;
case 0x6d0a2c:c.instructions+=2;goto B6d0a2c;
case 0x6d0a2f:c.instructions+=1;goto B6d0a2f;
case 0x6d0a31:goto L6d0a31;
case 0x6d0a33:goto L6d0a33;
case 0x6d0a35:c.instructions+=1;goto B6d0a35;
case 0x6d0a38:goto L6d0a38;
case 0x6d0a3a:goto L6d0a3a;
case 0x6d0a3d:c.instructions+=4;goto B6d0a3d;
case 0x6d0a40:c.instructions+=3;goto B6d0a40;
case 0x6d0a43:c.instructions+=2;goto B6d0a43;
case 0x6d0a46:c.instructions+=1;goto B6d0a46;
case 0x6d0a4c:goto L6d0a4c;
case 0x6d0a4f:c.instructions+=7;goto B6d0a4f;
case 0x6d0a52:c.instructions+=6;goto B6d0a52;
case 0x6d0a55:c.instructions+=5;goto B6d0a55;
case 0x6d0a58:c.instructions+=4;goto B6d0a58;
case 0x6d0a5b:c.instructions+=3;goto B6d0a5b;
case 0x6d0a5e:c.instructions+=2;goto B6d0a5e;
case 0x6d0a61:c.instructions+=1;goto B6d0a61;
case 0x6d0a63:goto L6d0a63;
case 0x6d0a66:c.instructions+=13;goto B6d0a66;
case 0x6d0a68:c.instructions+=12;goto B6d0a68;
case 0x6d0a6b:c.instructions+=11;goto B6d0a6b;
case 0x6d0a6e:c.instructions+=10;goto B6d0a6e;
case 0x6d0a71:c.instructions+=9;goto B6d0a71;
case 0x6d0a74:c.instructions+=8;goto B6d0a74;
case 0x6d0a76:c.instructions+=7;goto B6d0a76;
case 0x6d0a79:c.instructions+=6;goto B6d0a79;
case 0x6d0a7c:c.instructions+=5;goto B6d0a7c;
case 0x6d0a80:c.instructions+=4;goto B6d0a80;
case 0x6d0a81:c.instructions+=3;goto B6d0a81;
case 0x6d0a82:c.instructions+=2;goto B6d0a82;
case 0x6d0a85:c.instructions+=1;goto B6d0a85;
case 0x6d0a87:goto L6d0a87;
case 0x6d0a8a:c.instructions+=8;goto B6d0a8a;
case 0x6d0a8d:c.instructions+=7;goto B6d0a8d;
case 0x6d0a90:c.instructions+=6;goto B6d0a90;
case 0x6d0a93:c.instructions+=5;goto B6d0a93;
case 0x6d0a96:c.instructions+=4;goto B6d0a96;
case 0x6d0a98:c.instructions+=3;goto B6d0a98;
case 0x6d0a9b:c.instructions+=2;goto B6d0a9b;
case 0x6d0a9e:c.instructions+=1;goto B6d0a9e;
case 0x6d0aa0:goto L6d0aa0;
case 0x6d0aa3:c.instructions+=2;goto B6d0aa3;
case 0x6d0aa6:c.instructions+=1;goto B6d0aa6;
case 0x6d0aa8:goto L6d0aa8;
case 0x6d0aab:c.instructions+=11;goto B6d0aab;
case 0x6d0aad:c.instructions+=10;goto B6d0aad;
case 0x6d0ab0:c.instructions+=9;goto B6d0ab0;
case 0x6d0ab3:c.instructions+=8;goto B6d0ab3;
case 0x6d0ab5:c.instructions+=7;goto B6d0ab5;
case 0x6d0ab9:c.instructions+=6;goto B6d0ab9;
case 0x6d0abc:c.instructions+=5;goto B6d0abc;
case 0x6d0abf:c.instructions+=4;goto B6d0abf;
case 0x6d0ac4:c.instructions+=3;goto B6d0ac4;
case 0x6d0ac7:c.instructions+=2;goto B6d0ac7;
case 0x6d0ac8:c.instructions+=1;goto B6d0ac8;
case 0x6d0acb:goto L6d0acb;
case 0x6d0ace:c.instructions+=1;goto B6d0ace;
case 0x6d0ad0:goto L6d0ad0;
case 0x6d0ad3:c.instructions+=3;goto B6d0ad3;
case 0x6d0ad5:c.instructions+=2;goto B6d0ad5;
case 0x6d0ad8:c.instructions+=1;goto B6d0ad8;
case 0x6d0ade:goto L6d0ade;
case 0x6d0ae1:c.instructions+=6;goto B6d0ae1;
case 0x6d0ae2:c.instructions+=5;goto B6d0ae2;
case 0x6d0ae4:c.instructions+=4;goto B6d0ae4;
case 0x6d0ae7:c.instructions+=3;goto B6d0ae7;
case 0x6d0aea:c.instructions+=2;goto B6d0aea;
case 0x6d0aed:c.instructions+=1;goto B6d0aed;
case 0x6d0af2:goto L6d0af2;
case 0x6d0af4:c.instructions+=2;goto B6d0af4;
case 0x6d0af7:c.instructions+=1;goto B6d0af7;
case 0x6d0afd:goto L6d0afd;
case 0x6d0b01:c.instructions+=5;goto B6d0b01;
case 0x6d0b04:c.instructions+=4;goto B6d0b04;
case 0x6d0b07:c.instructions+=3;goto B6d0b07;
case 0x6d0b0a:c.instructions+=2;goto B6d0b0a;
case 0x6d0b0d:c.instructions+=1;goto B6d0b0d;
case 0x6d0b13:goto L6d0b13;
case 0x6d0b16:goto L6d0b16;
case 0x6d0b19:c.instructions+=6;goto B6d0b19;
case 0x6d0b1a:c.instructions+=5;goto B6d0b1a;
case 0x6d0b1c:c.instructions+=4;goto B6d0b1c;
case 0x6d0b1d:c.instructions+=3;goto B6d0b1d;
case 0x6d0b20:c.instructions+=2;goto B6d0b20;
case 0x6d0b23:c.instructions+=1;goto B6d0b23;
case 0x6d0b28:goto L6d0b28;
case 0x6d0b2a:c.instructions+=2;goto B6d0b2a;
case 0x6d0b2d:c.instructions+=1;goto B6d0b2d;
case 0x6d0b33:goto L6d0b33;
case 0x6d0b35:goto L6d0b35;
case 0x6d0b3b:c.instructions+=2;goto B6d0b3b;
case 0x6d0b3d:c.instructions+=1;goto B6d0b3d;
case 0x6d0b3f:goto L6d0b3f;
case 0x6d0b42:c.instructions+=6;goto B6d0b42;
case 0x6d0b43:c.instructions+=5;goto B6d0b43;
case 0x6d0b45:c.instructions+=4;goto B6d0b45;
case 0x6d0b47:c.instructions+=3;goto B6d0b47;
case 0x6d0b48:c.instructions+=2;goto B6d0b48;
case 0x6d0b4b:c.instructions+=1;goto B6d0b4b;
case 0x6d0b50:goto L6d0b50;
case 0x6d0b52:c.instructions+=2;goto B6d0b52;
case 0x6d0b55:c.instructions+=1;goto B6d0b55;
case 0x6d0b5b:goto L6d0b5b;
case 0x6d0b61:c.instructions+=2;goto B6d0b61;
case 0x6d0b63:c.instructions+=1;goto B6d0b63;
case 0x6d0b65:goto L6d0b65;
case 0x6d0b68:c.instructions+=6;goto B6d0b68;
case 0x6d0b69:c.instructions+=5;goto B6d0b69;
case 0x6d0b6b:c.instructions+=4;goto B6d0b6b;
case 0x6d0b71:c.instructions+=3;goto B6d0b71;
case 0x6d0b74:c.instructions+=2;goto B6d0b74;
case 0x6d0b75:c.instructions+=1;goto B6d0b75;
case 0x6d0b7a:goto L6d0b7a;
case 0x6d0b7c:c.instructions+=1;goto B6d0b7c;
case 0x6d0b82:goto L6d0b82;
case 0x6d0b83:c.instructions+=5;goto B6d0b83;
case 0x6d0b85:c.instructions+=4;goto B6d0b85;
case 0x6d0b87:c.instructions+=3;goto B6d0b87;
case 0x6d0b8c:c.instructions+=2;goto B6d0b8c;
case 0x6d0b8f:c.instructions+=1;goto B6d0b8f;
case 0x6d0b94:goto L6d0b94;
case 0x6d0b96:c.instructions+=1;goto B6d0b96;
case 0x6d0b9c:goto L6d0b9c;
case 0x6d0b9f:c.instructions+=6;goto B6d0b9f;
case 0x6d0ba0:c.instructions+=5;goto B6d0ba0;
case 0x6d0ba2:c.instructions+=4;goto B6d0ba2;
case 0x6d0ba4:c.instructions+=3;goto B6d0ba4;
case 0x6d0ba9:c.instructions+=2;goto B6d0ba9;
case 0x6d0bac:c.instructions+=1;goto B6d0bac;
case 0x6d0bb1:goto L6d0bb1;
case 0x6d0bb3:c.instructions+=1;goto B6d0bb3;
case 0x6d0bb9:goto L6d0bb9;
case 0x6d0bbc:c.instructions+=1;goto B6d0bbc;
case 0x6d0bc1:goto L6d0bc1;
case 0x6d0bc3:c.instructions+=2;goto B6d0bc3;
case 0x6d0bc9:c.instructions+=1;goto B6d0bc9;
case 0x6d0bcf:goto L6d0bcf;
case 0x6d0bd0:c.instructions+=2;goto B6d0bd0;
case 0x6d0bd2:c.instructions+=1;goto B6d0bd2;
case 0x6d0bd7:goto L6d0bd7;
case 0x6d0bd9:c.instructions+=2;goto B6d0bd9;
case 0x6d0bdc:c.instructions+=1;goto B6d0bdc;
case 0x6d0be2:goto L6d0be2;
case 0x6d0be8:c.instructions+=8;goto B6d0be8;
case 0x6d0bee:c.instructions+=7;goto B6d0bee;
case 0x6d0bf5:c.instructions+=6;goto B6d0bf5;
case 0x6d0bf6:c.instructions+=5;goto B6d0bf6;
case 0x6d0bf9:c.instructions+=4;goto B6d0bf9;
case 0x6d0bfa:c.instructions+=3;goto B6d0bfa;
case 0x6d0bfe:c.instructions+=2;goto B6d0bfe;
case 0x6d0bff:c.instructions+=1;goto B6d0bff;
case 0x6d0c04:goto L6d0c04;
case 0x6d0c07:c.instructions+=3;goto B6d0c07;
case 0x6d0c09:c.instructions+=2;goto B6d0c09;
case 0x6d0c0c:c.instructions+=1;goto B6d0c0c;
case 0x6d0c0e:goto L6d0c0e;
case 0x6d0c11:c.instructions+=1;goto B6d0c11;
case 0x6d0c14:goto L6d0c14;
case 0x6d0c1a:c.instructions+=7;goto B6d0c1a;
case 0x6d0c1c:c.instructions+=6;goto B6d0c1c;
case 0x6d0c1f:c.instructions+=5;goto B6d0c1f;
case 0x6d0c21:c.instructions+=4;goto B6d0c21;
case 0x6d0c22:c.instructions+=3;goto B6d0c22;
case 0x6d0c25:c.instructions+=2;goto B6d0c25;
case 0x6d0c28:c.instructions+=1;goto B6d0c28;
case 0x6d0c2a:goto L6d0c2a;
case 0x6d0c30:c.instructions+=5;goto B6d0c30;
case 0x6d0c31:c.instructions+=4;goto B6d0c31;
case 0x6d0c34:c.instructions+=3;goto B6d0c34;
case 0x6d0c35:c.instructions+=2;goto B6d0c35;
case 0x6d0c38:c.instructions+=1;goto B6d0c38;
case 0x6d0c3d:goto L6d0c3d;
case 0x6d0c3f:c.instructions+=2;goto B6d0c3f;
case 0x6d0c42:c.instructions+=1;goto B6d0c42;
case 0x6d0c44:goto L6d0c44;
case 0x6d0c4a:c.instructions+=4;goto B6d0c4a;
case 0x6d0c50:c.instructions+=3;goto B6d0c50;
case 0x6d0c56:c.instructions+=2;goto B6d0c56;
case 0x6d0c5c:c.instructions+=1;goto B6d0c5c;
case 0x6d0c5e:goto L6d0c5e;
case 0x6d0c65:c.instructions+=1;goto B6d0c65;
case 0x6d0c67:goto L6d0c67;
case 0x6d0c6c:c.instructions+=4;goto B6d0c6c;
case 0x6d0c71:c.instructions+=3;goto B6d0c71;
case 0x6d0c72:c.instructions+=2;goto B6d0c72;
case 0x6d0c73:c.instructions+=1;goto B6d0c73;
case 0x6d0c78:goto L6d0c78;
case 0x6d0c7b:goto L6d0c7b;
case 0x6d0c7e:goto L6d0c7e;
case 0x6d0c81:c.instructions+=1;goto B6d0c81;
case 0x6d0c86:goto L6d0c86;
case 0x6d0c89:c.instructions+=1;goto B6d0c89;
case 0x6d0c8e:goto L6d0c8e;
case 0x6d0c91:c.instructions+=1;goto B6d0c91;
case 0x6d0c96:goto L6d0c96;
case 0x6d0c99:c.instructions+=1;goto B6d0c99;
case 0x6d0c9e:goto L6d0c9e;
case 0x6d0ca1:c.instructions+=1;goto B6d0ca1;
case 0x6d0ca6:goto L6d0ca6;
case 0x6d0ca9:c.instructions+=2;goto B6d0ca9;
case 0x6d0cac:c.instructions+=1;goto B6d0cac;
case 0x6d0cb1:goto L6d0cb1;
case 0x6d0cb4:c.instructions+=5;goto B6d0cb4;
case 0x6d0cb5:c.instructions+=4;goto B6d0cb5;
case 0x6d0cb6:c.instructions+=3;goto B6d0cb6;
case 0x6d0cb7:c.instructions+=2;goto B6d0cb7;
case 0x6d0cb8:c.instructions+=1;goto B6d0cb8;
case 0x6d0cb9:goto L6d0cb9;
case 0x6d0cbb:c.instructions+=13;goto B6d0cbb;
case 0x6d0cbc:c.instructions+=12;goto B6d0cbc;
case 0x6d0cbe:c.instructions+=11;goto B6d0cbe;
case 0x6d0cc1:c.instructions+=10;goto B6d0cc1;
case 0x6d0cc3:c.instructions+=9;goto B6d0cc3;
case 0x6d0cc9:c.instructions+=8;goto B6d0cc9;
case 0x6d0ccc:c.instructions+=7;goto B6d0ccc;
case 0x6d0cd2:c.instructions+=6;goto B6d0cd2;
case 0x6d0cd5:c.instructions+=5;goto B6d0cd5;
case 0x6d0cdb:c.instructions+=4;goto B6d0cdb;
case 0x6d0cdc:c.instructions+=3;goto B6d0cdc;
case 0x6d0cdf:c.instructions+=2;goto B6d0cdf;
case 0x6d0ce2:c.instructions+=1;goto B6d0ce2;
case 0x6d0ce4:goto L6d0ce4;
case 0x6d0ce8:c.instructions+=2;goto B6d0ce8;
case 0x6d0cea:c.instructions+=1;goto B6d0cea;
case 0x6d0cec:goto L6d0cec;
case 0x6d0cef:c.instructions+=3;goto B6d0cef;
case 0x6d0cf0:c.instructions+=2;goto B6d0cf0;
case 0x6d0cf2:c.instructions+=1;goto B6d0cf2;
case 0x6d0cf7:goto L6d0cf7;
case 0x6d0cfb:c.instructions+=1;goto B6d0cfb;
case 0x6d0cfd:goto L6d0cfd;
case 0x6d0cfe:c.instructions+=2;goto B6d0cfe;
case 0x6d0d01:c.instructions+=1;goto B6d0d01;
case 0x6d0d03:goto L6d0d03;
case 0x6d0d04:c.instructions+=2;goto B6d0d04;
case 0x6d0d05:c.instructions+=1;goto B6d0d05;
case 0x6d0d08:goto L6d0d08;
case 0x6d0d0a:c.instructions+=5;goto B6d0d0a;
case 0x6d0d0b:c.instructions+=4;goto B6d0d0b;
case 0x6d0d0d:c.instructions+=3;goto B6d0d0d;
case 0x6d0d0e:c.instructions+=2;goto B6d0d0e;
case 0x6d0d10:c.instructions+=1;goto B6d0d10;
case 0x6d0d15:goto L6d0d15;
case 0x6d0d19:c.instructions+=1;goto B6d0d19;
case 0x6d0d1b:goto L6d0d1b;
case 0x6d0d1c:c.instructions+=1;goto B6d0d1c;
case 0x6d0d21:goto L6d0d21;
case 0x6d0d22:goto L6d0d22;
case 0x6d0d24:c.instructions+=3;goto B6d0d24;
case 0x6d0d25:c.instructions+=2;goto B6d0d25;
case 0x6d0d26:c.instructions+=1;goto B6d0d26;
case 0x6d0d29:goto L6d0d29;
case 0x6d0d2b:c.instructions+=24;goto B6d0d2b;
case 0x6d0d2c:c.instructions+=23;goto B6d0d2c;
case 0x6d0d2e:c.instructions+=22;goto B6d0d2e;
case 0x6d0d31:c.instructions+=21;goto B6d0d31;
case 0x6d0d32:c.instructions+=20;goto B6d0d32;
case 0x6d0d33:c.instructions+=19;goto B6d0d33;
case 0x6d0d35:c.instructions+=18;goto B6d0d35;
case 0x6d0d36:c.instructions+=17;goto B6d0d36;
case 0x6d0d39:c.instructions+=16;goto B6d0d39;
case 0x6d0d3b:c.instructions+=15;goto B6d0d3b;
case 0x6d0d41:c.instructions+=14;goto B6d0d41;
case 0x6d0d44:c.instructions+=13;goto B6d0d44;
case 0x6d0d47:c.instructions+=12;goto B6d0d47;
case 0x6d0d4a:c.instructions+=11;goto B6d0d4a;
case 0x6d0d4d:c.instructions+=10;goto B6d0d4d;
case 0x6d0d50:c.instructions+=9;goto B6d0d50;
case 0x6d0d53:c.instructions+=8;goto B6d0d53;
case 0x6d0d56:c.instructions+=7;goto B6d0d56;
case 0x6d0d59:c.instructions+=6;goto B6d0d59;
case 0x6d0d5c:c.instructions+=5;goto B6d0d5c;
case 0x6d0d5f:c.instructions+=4;goto B6d0d5f;
case 0x6d0d62:c.instructions+=3;goto B6d0d62;
case 0x6d0d65:c.instructions+=2;goto B6d0d65;
case 0x6d0d68:c.instructions+=1;goto B6d0d68;
case 0x6d0d6d:goto L6d0d6d;
case 0x6d0d6f:c.instructions+=2;goto B6d0d6f;
case 0x6d0d71:c.instructions+=1;goto B6d0d71;
case 0x6d0d77:goto L6d0d77;
case 0x6d0d79:c.instructions+=5;goto B6d0d79;
case 0x6d0d7b:c.instructions+=4;goto B6d0d7b;
case 0x6d0d80:c.instructions+=3;goto B6d0d80;
case 0x6d0d85:c.instructions+=2;goto B6d0d85;
case 0x6d0d87:c.instructions+=1;goto B6d0d87;
case 0x6d0d8c:goto L6d0d8c;
case 0x6d0d8f:c.instructions+=2;goto B6d0d8f;
case 0x6d0d95:c.instructions+=1;goto B6d0d95;
case 0x6d0d97:goto L6d0d97;
case 0x6d0d9c:c.instructions+=1;goto B6d0d9c;
case 0x6d0da1:goto L6d0da1;
case 0x6d0da3:c.instructions+=2;goto B6d0da3;
case 0x6d0da5:c.instructions+=1;goto B6d0da5;
case 0x6d0dab:goto L6d0dab;
case 0x6d0dad:c.instructions+=1;goto B6d0dad;
case 0x6d0db3:goto L6d0db3;
case 0x6d0db9:c.instructions+=7;goto B6d0db9;
case 0x6d0dbb:c.instructions+=6;goto B6d0dbb;
case 0x6d0dc1:c.instructions+=5;goto B6d0dc1;
case 0x6d0dc7:c.instructions+=4;goto B6d0dc7;
case 0x6d0dcd:c.instructions+=3;goto B6d0dcd;
case 0x6d0dd3:c.instructions+=2;goto B6d0dd3;
case 0x6d0dd9:c.instructions+=1;goto B6d0dd9;
case 0x6d0ddb:goto L6d0ddb;
case 0x6d0ddd:c.instructions+=2;goto B6d0ddd;
case 0x6d0dde:c.instructions+=1;goto B6d0dde;
case 0x6d0de1:goto L6d0de1;
case 0x6d0de7:goto L6d0de7;
case 0x6d0dee:c.instructions+=1;goto B6d0dee;
case 0x6d0df0:goto L6d0df0;
case 0x6d0df5:c.instructions+=2;goto B6d0df5;
case 0x6d0df6:c.instructions+=1;goto B6d0df6;
case 0x6d0dfc:goto L6d0dfc;
case 0x6d0dfe:c.instructions+=1;goto B6d0dfe;
case 0x6d0e00:goto L6d0e00;
case 0x6d0e01:c.instructions+=1;goto B6d0e01;
case 0x6d0e07:goto L6d0e07;
case 0x6d0e09:c.instructions+=1;goto B6d0e09;
case 0x6d0e0b:goto L6d0e0b;
case 0x6d0e10:c.instructions+=2;goto B6d0e10;
case 0x6d0e11:c.instructions+=1;goto B6d0e11;
case 0x6d0e17:goto L6d0e17;
case 0x6d0e19:c.instructions+=1;goto B6d0e19;
case 0x6d0e1b:goto L6d0e1b;
case 0x6d0e1d:goto L6d0e1d;
case 0x6d0e1f:c.instructions+=2;goto B6d0e1f;
case 0x6d0e25:c.instructions+=1;goto B6d0e25;
case 0x6d0e27:goto L6d0e27;
case 0x6d0e29:c.instructions+=5;goto B6d0e29;
case 0x6d0e2b:c.instructions+=4;goto B6d0e2b;
case 0x6d0e2c:c.instructions+=3;goto B6d0e2c;
case 0x6d0e31:c.instructions+=2;goto B6d0e31;
case 0x6d0e32:c.instructions+=1;goto B6d0e32;
case 0x6d0e35:goto L6d0e35;
case 0x6d0e37:c.instructions+=2;goto B6d0e37;
case 0x6d0e39:c.instructions+=1;goto B6d0e39;
case 0x6d0e3f:goto L6d0e3f;
case 0x6d0e46:c.instructions+=1;goto B6d0e46;
case 0x6d0e48:goto L6d0e48;
case 0x6d0e4b:c.instructions+=4;goto B6d0e4b;
case 0x6d0e4e:c.instructions+=3;goto B6d0e4e;
case 0x6d0e51:c.instructions+=2;goto B6d0e51;
case 0x6d0e52:c.instructions+=1;goto B6d0e52;
case 0x6d0e57:goto L6d0e57;
case 0x6d0e59:c.instructions+=3;goto B6d0e59;
case 0x6d0e5a:c.instructions+=2;goto B6d0e5a;
case 0x6d0e60:c.instructions+=1;goto B6d0e60;
case 0x6d0e66:goto L6d0e66;
case 0x6d0e69:c.instructions+=3;goto B6d0e69;
case 0x6d0e6b:c.instructions+=2;goto B6d0e6b;
case 0x6d0e71:c.instructions+=1;goto B6d0e71;
case 0x6d0e77:goto L6d0e77;
case 0x6d0e7e:c.instructions+=4;goto B6d0e7e;
case 0x6d0e80:c.instructions+=3;goto B6d0e80;
case 0x6d0e83:c.instructions+=2;goto B6d0e83;
case 0x6d0e89:c.instructions+=1;goto B6d0e89;
case 0x6d0e8b:goto L6d0e8b;
case 0x6d0e8e:c.instructions+=5;goto B6d0e8e;
case 0x6d0e91:c.instructions+=4;goto B6d0e91;
case 0x6d0e92:c.instructions+=3;goto B6d0e92;
case 0x6d0e95:c.instructions+=2;goto B6d0e95;
case 0x6d0e98:c.instructions+=1;goto B6d0e98;
case 0x6d0e9a:goto L6d0e9a;
case 0x6d0e9d:c.instructions+=3;goto B6d0e9d;
case 0x6d0ea0:c.instructions+=2;goto B6d0ea0;
case 0x6d0ea3:c.instructions+=1;goto B6d0ea3;
case 0x6d0ea5:goto L6d0ea5;
case 0x6d0ea8:c.instructions+=8;goto B6d0ea8;
case 0x6d0eab:c.instructions+=7;goto B6d0eab;
case 0x6d0eae:c.instructions+=6;goto B6d0eae;
case 0x6d0eb1:c.instructions+=5;goto B6d0eb1;
case 0x6d0eb4:c.instructions+=4;goto B6d0eb4;
case 0x6d0eb7:c.instructions+=3;goto B6d0eb7;
case 0x6d0eba:c.instructions+=2;goto B6d0eba;
case 0x6d0ebd:c.instructions+=1;goto B6d0ebd;
case 0x6d0ebf:goto L6d0ebf;
case 0x6d0ec2:c.instructions+=1;goto B6d0ec2;
case 0x6d0ec4:goto L6d0ec4;
case 0x6d0ec7:c.instructions+=1;goto B6d0ec7;
case 0x6d0ec9:goto L6d0ec9;
case 0x6d0ecb:c.instructions+=4;goto B6d0ecb;
case 0x6d0ecc:c.instructions+=3;goto B6d0ecc;
case 0x6d0ecd:c.instructions+=2;goto B6d0ecd;
case 0x6d0ecf:c.instructions+=1;goto B6d0ecf;
case 0x6d0ed2:goto L6d0ed2;
case 0x6d0ed6:c.instructions+=1;goto B6d0ed6;
case 0x6d0ed8:goto L6d0ed8;
case 0x6d0edb:goto L6d0edb;
case 0x6d0ede:c.instructions+=3;goto B6d0ede;
case 0x6d0ee1:c.instructions+=2;goto B6d0ee1;
case 0x6d0ee4:c.instructions+=1;goto B6d0ee4;
case 0x6d0ee6:goto L6d0ee6;
case 0x6d0ee9:c.instructions+=2;goto B6d0ee9;
case 0x6d0eec:c.instructions+=1;goto B6d0eec;
case 0x6d0eee:goto L6d0eee;
case 0x6d0ef1:c.instructions+=4;goto B6d0ef1;
case 0x6d0ef2:c.instructions+=3;goto B6d0ef2;
case 0x6d0ef3:c.instructions+=2;goto B6d0ef3;
case 0x6d0ef9:c.instructions+=1;goto B6d0ef9;
case 0x6d0efe:goto L6d0efe;
case 0x6d0f00:c.instructions+=1;goto B6d0f00;
case 0x6d0f06:goto L6d0f06;
case 0x6d0f09:c.instructions+=2;goto B6d0f09;
case 0x6d0f0b:c.instructions+=1;goto B6d0f0b;
case 0x6d0f0d:goto L6d0f0d;
case 0x6d0f0e:c.instructions+=6;goto B6d0f0e;
case 0x6d0f11:c.instructions+=5;goto B6d0f11;
case 0x6d0f16:c.instructions+=4;goto B6d0f16;
case 0x6d0f1b:c.instructions+=3;goto B6d0f1b;
case 0x6d0f1c:c.instructions+=2;goto B6d0f1c;
case 0x6d0f1d:c.instructions+=1;goto B6d0f1d;
case 0x6d0f22:goto L6d0f22;
case 0x6d0f25:c.instructions+=1;goto B6d0f25;
case 0x6d0f2a:goto L6d0f2a;
case 0x6d0f2d:c.instructions+=5;goto B6d0f2d;
case 0x6d0f32:c.instructions+=4;goto B6d0f32;
case 0x6d0f37:c.instructions+=3;goto B6d0f37;
case 0x6d0f38:c.instructions+=2;goto B6d0f38;
case 0x6d0f39:c.instructions+=1;goto B6d0f39;
case 0x6d0f3e:goto L6d0f3e;
case 0x6d0f41:c.instructions+=1;goto B6d0f41;
case 0x6d0f46:goto L6d0f46;
case 0x6d0f4c:c.instructions+=4;goto B6d0f4c;
case 0x6d0f51:c.instructions+=3;goto B6d0f51;
case 0x6d0f53:c.instructions+=2;goto B6d0f53;
case 0x6d0f59:c.instructions+=1;goto B6d0f59;
case 0x6d0f5b:goto L6d0f5b;
case 0x6d0f5d:c.instructions+=6;goto B6d0f5d;
case 0x6d0f62:c.instructions+=5;goto B6d0f62;
case 0x6d0f64:c.instructions+=4;goto B6d0f64;
case 0x6d0f67:c.instructions+=3;goto B6d0f67;
case 0x6d0f69:c.instructions+=2;goto B6d0f69;
case 0x6d0f6f:c.instructions+=1;goto B6d0f6f;
case 0x6d0f74:goto L6d0f74;
case 0x6d0f76:c.instructions+=2;goto B6d0f76;
case 0x6d0f78:c.instructions+=1;goto B6d0f78;
case 0x6d0f7e:goto L6d0f7e;
case 0x6d0f83:goto L6d0f83;
case 0x6d0f89:c.instructions+=3;goto B6d0f89;
case 0x6d0f8b:c.instructions+=2;goto B6d0f8b;
case 0x6d0f8d:c.instructions+=1;goto B6d0f8d;
case 0x6d0f8f:goto L6d0f8f;
case 0x6d0f91:c.instructions+=6;goto B6d0f91;
case 0x6d0f92:c.instructions+=5;goto B6d0f92;
case 0x6d0f97:c.instructions+=4;goto B6d0f97;
case 0x6d0f9a:c.instructions+=3;goto B6d0f9a;
case 0x6d0f9c:c.instructions+=2;goto B6d0f9c;
case 0x6d0f9e:c.instructions+=1;goto B6d0f9e;
case 0x6d0fa3:goto L6d0fa3;
case 0x6d0fa5:c.instructions+=2;goto B6d0fa5;
case 0x6d0fa7:c.instructions+=1;goto B6d0fa7;
case 0x6d0fad:goto L6d0fad;
case 0x6d0fb0:c.instructions+=1;goto B6d0fb0;
case 0x6d0fb2:goto L6d0fb2;
case 0x6d0fb5:c.instructions+=6;goto B6d0fb5;
case 0x6d0fb8:c.instructions+=5;goto B6d0fb8;
case 0x6d0fbb:c.instructions+=4;goto B6d0fbb;
case 0x6d0fbd:c.instructions+=3;goto B6d0fbd;
case 0x6d0fc0:c.instructions+=2;goto B6d0fc0;
case 0x6d0fc6:c.instructions+=1;goto B6d0fc6;
case 0x6d0fc8:goto L6d0fc8;
case 0x6d0fcb:c.instructions+=3;goto B6d0fcb;
case 0x6d0fcc:c.instructions+=2;goto B6d0fcc;
case 0x6d0fcf:c.instructions+=1;goto B6d0fcf;
case 0x6d0fd1:goto L6d0fd1;
case 0x6d0fd4:c.instructions+=1;goto B6d0fd4;
case 0x6d0fd6:goto L6d0fd6;
case 0x6d0fdc:c.instructions+=1;goto B6d0fdc;
case 0x6d0fde:goto L6d0fde;
case 0x6d0fe1:c.instructions+=3;goto B6d0fe1;
case 0x6d0fe2:c.instructions+=2;goto B6d0fe2;
case 0x6d0fe5:c.instructions+=1;goto B6d0fe5;
case 0x6d0fe7:goto L6d0fe7;
case 0x6d0fea:c.instructions+=1;goto B6d0fea;
case 0x6d0fec:goto L6d0fec;
case 0x6d0ff2:c.instructions+=1;goto B6d0ff2;
case 0x6d0ff4:goto L6d0ff4;
case 0x6d0ff7:c.instructions+=3;goto B6d0ff7;
case 0x6d0ff8:c.instructions+=2;goto B6d0ff8;
case 0x6d0ffb:c.instructions+=1;goto B6d0ffb;
case 0x6d0ffd:goto L6d0ffd;
default:missing_instruction(c.pc);}
B6d0002:L6d0002:{c.instructions+=4;NFSU2_TR(0x6d0002);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6d0003:{NFSU2_TR(0x6d0003);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6d0006:{NFSU2_TR(0x6d0006);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0009:{NFSU2_TR(0x6d0009);
if(r1(R+512)){TAIL_STATIC(0x6cff68u,6cf);}
}
B6d000f:L6d000f:{c.instructions+=3;NFSU2_TR(0x6d000f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0012:{NFSU2_TR(0x6d0012);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d0014:{NFSU2_TR(0x6d0014);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d001aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d001a:L6d001a:{c.instructions+=3;NFSU2_TR(0x6d001a);
__builtin_memmove((R+12),(R+0),4);
}
B6d001c:{NFSU2_TR(0x6d001c);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+12),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+12),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6d001f:{NFSU2_TR(0x6d001f);
if(r1(R+518)){{goto L6d04d7;}}
}
B6d0025:L6d0025:{c.instructions+=4;NFSU2_TR(0x6d0025);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6d0028:{NFSU2_TR(0x6d0028);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6d002b:{NFSU2_TR(0x6d002b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d002c:{NFSU2_TR(0x6d002c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0031ull));
TAIL_STATIC(0x575620u,575);
}
B6d0031:L6d0031:{c.instructions+=4;NFSU2_TR(0x6d0031);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d0033:{NFSU2_TR(0x6d0033);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0034:{NFSU2_TR(0x6d0034);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0037:{NFSU2_TR(0x6d0037);
if(r1(R+518)){{goto L6d05d2;}}
}
B6d003d:L6d003d:{c.instructions+=5;NFSU2_TR(0x6d003d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d0040:{NFSU2_TR(0x6d0040);
__builtin_memmove((R+4),(R+24),4);
}
B6d0042:{NFSU2_TR(0x6d0042);
__builtin_memmove((R+8),(R+4),4);
}
B6d0044:{NFSU2_TR(0x6d0044);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6d0047:{NFSU2_TR(0x6d0047);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d0049:L6d0049:{c.instructions+=1;NFSU2_TR(0x6d0049);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d004b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d0049u);}goto L6d0049;}
}
B6d004b:L6d004b:{c.instructions+=2;NFSU2_TR(0x6d004b);
__builtin_memmove((R+4),(R+8),4);
}
B6d004d:{NFSU2_TR(0x6d004d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6d0050:L6d0050:{c.instructions+=1;NFSU2_TR(0x6d0050);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6d0052;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d0050u);}goto L6d0050;}
}
B6d0052:L6d0052:{c.instructions+=7;NFSU2_TR(0x6d0052);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d0055:{NFSU2_TR(0x6d0055);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0056:{NFSU2_TR(0x6d0056);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0058:{NFSU2_TR(0x6d0058);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0059:{NFSU2_TR(0x6d0059);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d005c:{NFSU2_TR(0x6d005c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d005f:{NFSU2_TR(0x6d005f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0064ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6d0064:L6d0064:{c.instructions+=3;NFSU2_TR(0x6d0064);
__builtin_memmove((R+24),(R+0),4);
}
B6d0066:{NFSU2_TR(0x6d0066);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d0068:{NFSU2_TR(0x6d0068);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d05f3;}}
}
B6d006e:L6d006e:{c.instructions+=4;NFSU2_TR(0x6d006e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d0072:{NFSU2_TR(0x6d0072);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6d0076:{NFSU2_TR(0x6d0076);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0079:{NFSU2_TR(0x6d0079);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d04d7;}}
}
B6d007f:L6d007f:{c.instructions+=5;NFSU2_TR(0x6d007f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d0082:{NFSU2_TR(0x6d0082);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d0085:{NFSU2_TR(0x6d0085);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6d0088:{NFSU2_TR(0x6d0088);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d008b:{NFSU2_TR(0x6d008b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d008e:L6d008e:{c.instructions+=15;NFSU2_TR(0x6d008e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0091:{NFSU2_TR(0x6d0091);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d0093:{NFSU2_TR(0x6d0093);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d0096:{NFSU2_TR(0x6d0096);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0099:{NFSU2_TR(0x6d0099);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d009c:{NFSU2_TR(0x6d009c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d009f:{NFSU2_TR(0x6d009f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d00a2:{NFSU2_TR(0x6d00a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d00a5:{NFSU2_TR(0x6d00a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d00a8:{NFSU2_TR(0x6d00a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d00ab:{NFSU2_TR(0x6d00ab);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d00b2:{NFSU2_TR(0x6d00b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d00b5:{NFSU2_TR(0x6d00b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d00b8:{NFSU2_TR(0x6d00b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d00bb:{NFSU2_TR(0x6d00bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d00c8;}}
}
B6d00bd:L6d00bd:{c.instructions+=6;NFSU2_TR(0x6d00bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d00c0:{NFSU2_TR(0x6d00c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d00c1:{NFSU2_TR(0x6d00c1);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d00c3:{NFSU2_TR(0x6d00c3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d00c5:{NFSU2_TR(0x6d00c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d00c6:{NFSU2_TR(0x6d00c6);
{goto L6d011d;}
}
B6d00c8:L6d00c8:{c.instructions+=4;NFSU2_TR(0x6d00c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d00cb:{NFSU2_TR(0x6d00cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d00ce:{NFSU2_TR(0x6d00ce);
w4(R+0,u32(0x7bf75cull));
}
B6d00d3:{NFSU2_TR(0x6d00d3);
if(r1(R+518)){{goto L6d00dc;}}
}
B6d00d5:L6d00d5:{c.instructions+=2;NFSU2_TR(0x6d00d5);
w4(R+0,u32(0x7bf754ull));
}
B6d00da:{NFSU2_TR(0x6d00da);
{goto L6d00f4;}
}
B6d00dc:L6d00dc:{c.instructions+=2;NFSU2_TR(0x6d00dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x40000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d00e2:{NFSU2_TR(0x6d00e2);
if(r1(R+518)){{goto L6d00eb;}}
}
B6d00e4:L6d00e4:{c.instructions+=2;NFSU2_TR(0x6d00e4);
w4(R+0,u32(0x7bf74cull));
}
B6d00e9:{NFSU2_TR(0x6d00e9);
{goto L6d00f4;}
}
B6d00eb:L6d00eb:{c.instructions+=2;NFSU2_TR(0x6d00eb);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6d00ed:{NFSU2_TR(0x6d00ed);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6d00f4;}}
}
B6d00ef:L6d00ef:{c.instructions+=1;NFSU2_TR(0x6d00ef);
w4(R+0,u32(0x7bf744ull));
}
B6d00f4:L6d00f4:{c.instructions+=6;NFSU2_TR(0x6d00f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d00f5:{NFSU2_TR(0x6d00f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d00f6:{NFSU2_TR(0x6d00f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d00fc:{NFSU2_TR(0x6d00fc);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0101:{NFSU2_TR(0x6d0101);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0102:{NFSU2_TR(0x6d0102);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0107ull));
TAIL_STATIC(0x75e081u,75e);
}
B6d0107:L6d0107:{c.instructions+=8;NFSU2_TR(0x6d0107);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6d010a:{NFSU2_TR(0x6d010a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d010d:{NFSU2_TR(0x6d010d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d010e:{NFSU2_TR(0x6d010e);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0110:{NFSU2_TR(0x6d0110);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0112:{NFSU2_TR(0x6d0112);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d0118:{NFSU2_TR(0x6d0118);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff82ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6d011c:{NFSU2_TR(0x6d011c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d011d:L6d011d:{c.instructions+=2;NFSU2_TR(0x6d011d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0120:{NFSU2_TR(0x6d0120);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0125ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6d0125:L6d0125:{c.instructions+=3;NFSU2_TR(0x6d0125);
__builtin_memmove((R+24),(R+0),4);
}
B6d0127:{NFSU2_TR(0x6d0127);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d0129:{NFSU2_TR(0x6d0129);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d05f3;}}
}
B6d012f:L6d012f:{c.instructions+=6;NFSU2_TR(0x6d012f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d0131:{NFSU2_TR(0x6d0131);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6d0133:{NFSU2_TR(0x6d0133);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0136:{NFSU2_TR(0x6d0136);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6d0137:{NFSU2_TR(0x6d0137);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6d013a:{NFSU2_TR(0x6d013a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6d01ad;}}
}
B6d013c:L6d013c:{c.instructions+=8;NFSU2_TR(0x6d013c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d013f:{NFSU2_TR(0x6d013f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d0142:{NFSU2_TR(0x6d0142);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6d0144:{NFSU2_TR(0x6d0144);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d0147:{NFSU2_TR(0x6d0147);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6d014a:{NFSU2_TR(0x6d014a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d014d:{NFSU2_TR(0x6d014d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0150:{NFSU2_TR(0x6d0150);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0153:L6d0153:{c.instructions+=4;NFSU2_TR(0x6d0153);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d0155:{NFSU2_TR(0x6d0155);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0158:{NFSU2_TR(0x6d0158);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d015b:{NFSU2_TR(0x6d015b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d01ad;}}
}
B6d015d:L6d015d:{c.instructions+=8;NFSU2_TR(0x6d015d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d015f:{NFSU2_TR(0x6d015f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d0162:{NFSU2_TR(0x6d0162);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6d0165:{NFSU2_TR(0x6d0165);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d0168:{NFSU2_TR(0x6d0168);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d016b:{NFSU2_TR(0x6d016b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d016e:{NFSU2_TR(0x6d016e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d0171:{NFSU2_TR(0x6d0171);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d01ad;}}
}
B6d0173:L6d0173:{c.instructions+=14;NFSU2_TR(0x6d0173);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d0175:{NFSU2_TR(0x6d0175);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6d0178:{NFSU2_TR(0x6d0178);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d017b:{NFSU2_TR(0x6d017b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d017e:{NFSU2_TR(0x6d017e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d0181:{NFSU2_TR(0x6d0181);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0184:{NFSU2_TR(0x6d0184);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B6d0187:{NFSU2_TR(0x6d0187);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6d0189:{NFSU2_TR(0x6d0189);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d018c:{NFSU2_TR(0x6d018c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d018f:{NFSU2_TR(0x6d018f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B6d0192:{NFSU2_TR(0x6d0192);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B6d0194:{NFSU2_TR(0x6d0194);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d0196:{NFSU2_TR(0x6d0196);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d01ad;}}
}
B6d0198:L6d0198:{c.instructions+=8;NFSU2_TR(0x6d0198);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d019b:{NFSU2_TR(0x6d019b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6d019e:{NFSU2_TR(0x6d019e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6d019f:{NFSU2_TR(0x6d019f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d01a2:{NFSU2_TR(0x6d01a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d01a5:{NFSU2_TR(0x6d01a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6d01a8:{NFSU2_TR(0x6d01a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d01ab:{NFSU2_TR(0x6d01ab);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d0153u);}goto L6d0153;}}
}
B6d01ad:L6d01ad:{c.instructions+=4;NFSU2_TR(0x6d01ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d01b0:{NFSU2_TR(0x6d01b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d01b3:{NFSU2_TR(0x6d01b3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6d01b5:{NFSU2_TR(0x6d01b5);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6d01bc;}}
}
B6d01b7:L6d01b7:{c.instructions+=3;NFSU2_TR(0x6d01b7);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d01b9:{NFSU2_TR(0x6d01b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d01ba:{NFSU2_TR(0x6d01ba);
{goto L6d01d0;}
}
B6d01bc:L6d01bc:{c.instructions+=2;NFSU2_TR(0x6d01bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d01bf:{NFSU2_TR(0x6d01bf);
if(r1(R+518)){{goto L6d01c5;}}
}
B6d01c1:L6d01c1:{c.instructions+=2;NFSU2_TR(0x6d01c1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d01c3:{NFSU2_TR(0x6d01c3);
{goto L6d01d0;}
}
B6d01c5:L6d01c5:{c.instructions+=5;NFSU2_TR(0x6d01c5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x40000ull))));
}
B6d01ca:{NFSU2_TR(0x6d01ca);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6d01cc:{NFSU2_TR(0x6d01cc);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6d01ce:{NFSU2_TR(0x6d01ce);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d01cf:{NFSU2_TR(0x6d01cf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d01d0:L6d01d0:{c.instructions+=14;NFSU2_TR(0x6d01d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d01d3:{NFSU2_TR(0x6d01d3);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+12)),r2(U+0));
}
B6d01d6:{NFSU2_TR(0x6d01d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d01d8:{NFSU2_TR(0x6d01d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d01db:{NFSU2_TR(0x6d01db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d01de:{NFSU2_TR(0x6d01de);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6d01e2:{NFSU2_TR(0x6d01e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B6d01e5:{NFSU2_TR(0x6d01e5);
w2(R+0,u16(u32(r2(R+0))-u32(r2(R+24))));
}
B6d01e8:{NFSU2_TR(0x6d01e8);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6d01ec:{NFSU2_TR(0x6d01ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d01ef:{NFSU2_TR(0x6d01ef);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6d01f3:{NFSU2_TR(0x6d01f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d01f6:{NFSU2_TR(0x6d01f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d01f8:{NFSU2_TR(0x6d01f8);
if(r1(R+518)){{goto L6d0223;}}
}
B6d01fa:L6d01fa:{c.instructions+=12;NFSU2_TR(0x6d01fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6d01fd:{NFSU2_TR(0x6d01fd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d01fe:{NFSU2_TR(0x6d01fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d0200:{NFSU2_TR(0x6d0200);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d0203:{NFSU2_TR(0x6d0203);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0206:{NFSU2_TR(0x6d0206);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xe00000ull))));
}
B6d020c:{NFSU2_TR(0x6d020c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d020d:{NFSU2_TR(0x6d020d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d020f:{NFSU2_TR(0x6d020f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0210:{NFSU2_TR(0x6d0210);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d0213:{NFSU2_TR(0x6d0213);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0214:{NFSU2_TR(0x6d0214);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0219ull));
TAIL_STATIC(0x6cbe4cu,6cb);
}
B6d0219:L6d0219:{c.instructions+=3;NFSU2_TR(0x6d0219);
__builtin_memmove((R+24),(R+0),4);
}
B6d021b:{NFSU2_TR(0x6d021b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d021d:{NFSU2_TR(0x6d021d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d05f3;}}
}
B6d0223:L6d0223:{c.instructions+=3;NFSU2_TR(0x6d0223);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0226:{NFSU2_TR(0x6d0226);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6d022a:{NFSU2_TR(0x6d022a);
if(r1(R+518)){{goto L6d0248;}}
}
B6d022c:L6d022c:{c.instructions+=6;NFSU2_TR(0x6d022c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d022f:{NFSU2_TR(0x6d022f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d0231:{NFSU2_TR(0x6d0231);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d0234:{NFSU2_TR(0x6d0234);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0235:{NFSU2_TR(0x6d0235);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0238:{NFSU2_TR(0x6d0238);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d023eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d023e:L6d023e:{c.instructions+=3;NFSU2_TR(0x6d023e);
__builtin_memmove((R+24),(R+0),4);
}
B6d0240:{NFSU2_TR(0x6d0240);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d0242:{NFSU2_TR(0x6d0242);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d05f3;}}
}
B6d0248:L6d0248:{c.instructions+=4;NFSU2_TR(0x6d0248);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d024b:{NFSU2_TR(0x6d024b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d024e:{NFSU2_TR(0x6d024e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d0250:{NFSU2_TR(0x6d0250);
if(r1(R+518)){{goto L6d04bc;}}
}
B6d0256:L6d0256:{c.instructions+=3;NFSU2_TR(0x6d0256);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+8),(U+0),2);
}
B6d0259:{NFSU2_TR(0x6d0259);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x1ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B6d025d:{NFSU2_TR(0x6d025d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d0332;}}
}
B6d0263:L6d0263:{c.instructions+=7;NFSU2_TR(0x6d0263);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d0266:{NFSU2_TR(0x6d0266);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffffcull))));
}
B6d0269:{NFSU2_TR(0x6d0269);
__builtin_memmove((R+0),(R+24),4);
}
B6d026b:{NFSU2_TR(0x6d026b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d026e:{NFSU2_TR(0x6d026e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d026f:{NFSU2_TR(0x6d026f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0272:{NFSU2_TR(0x6d0272);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0277ull));
TAIL_STATIC(0x575620u,575);
}
B6d0277:L6d0277:{c.instructions+=4;NFSU2_TR(0x6d0277);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d0279:{NFSU2_TR(0x6d0279);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d027a:{NFSU2_TR(0x6d027a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d027d:{NFSU2_TR(0x6d027d);
if(r1(R+518)){{goto L6d05d2;}}
}
B6d0283:L6d0283:{c.instructions+=6;NFSU2_TR(0x6d0283);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0286:{NFSU2_TR(0x6d0286);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d0289:{NFSU2_TR(0x6d0289);
__builtin_memmove((R+8),(R+4),4);
}
B6d028b:{NFSU2_TR(0x6d028b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6d028e:{NFSU2_TR(0x6d028e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d0290:{NFSU2_TR(0x6d0290);
__builtin_memmove((R+28),(R+12),4);
}
B6d0292:L6d0292:{c.instructions+=1;NFSU2_TR(0x6d0292);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d0294;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d0292u);}goto L6d0292;}
}
B6d0294:L6d0294:{c.instructions+=3;NFSU2_TR(0x6d0294);
__builtin_memmove((R+4),(R+8),4);
}
B6d0296:{NFSU2_TR(0x6d0296);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6d0299:{NFSU2_TR(0x6d0299);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B6d029c:L6d029c:{c.instructions+=1;NFSU2_TR(0x6d029c);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6d029e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d029cu);}goto L6d029c;}
}
B6d029e:L6d029e:{c.instructions+=1;NFSU2_TR(0x6d029e);
if(r1(R+518)){{goto L6d02af;}}
}
B6d02a0:L6d02a0:{c.instructions+=1;NFSU2_TR(0x6d02a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d02a3:L6d02a3:{c.instructions+=4;NFSU2_TR(0x6d02a3);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6d02a9:{NFSU2_TR(0x6d02a9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6d02ac:{NFSU2_TR(0x6d02ac);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6d02ad:{NFSU2_TR(0x6d02ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d02a3u);}goto L6d02a3;}}
}
B6d02af:L6d02af:{c.instructions+=4;NFSU2_TR(0x6d02af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d02b2:{NFSU2_TR(0x6d02b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d02b6:{NFSU2_TR(0x6d02b6);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d02ba:{NFSU2_TR(0x6d02ba);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d030a;}}
}
B6d02bc:L6d02bc:{c.instructions+=6;NFSU2_TR(0x6d02bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d02bf:{NFSU2_TR(0x6d02bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d02c2:{NFSU2_TR(0x6d02c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6d02c5:{NFSU2_TR(0x6d02c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d02c8:{NFSU2_TR(0x6d02c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d02ca:{NFSU2_TR(0x6d02ca);
if(r1(R+518)){{goto L6d02ff;}}
}
B6d02cc:L6d02cc:{c.instructions+=3;NFSU2_TR(0x6d02cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d02ce:{NFSU2_TR(0x6d02ce);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6d02d1:{NFSU2_TR(0x6d02d1);
if(r1(R+518)){{goto L6d02f4;}}
}
B6d02d3:L6d02d3:{c.instructions+=2;NFSU2_TR(0x6d02d3);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6d02d4:{NFSU2_TR(0x6d02d4);
if(r1(R+518)){{goto L6d02ec;}}
}
B6d02d6:L6d02d6:{c.instructions+=2;NFSU2_TR(0x6d02d6);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6d02d7:{NFSU2_TR(0x6d02d7);
if(r1(R+518)){{goto L6d02ec;}}
}
B6d02d9:L6d02d9:{c.instructions+=2;NFSU2_TR(0x6d02d9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6d02da:{NFSU2_TR(0x6d02da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d02ff;}}
}
B6d02dc:L6d02dc:{c.instructions+=2;NFSU2_TR(0x6d02dc);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6d02df:{NFSU2_TR(0x6d02df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d02e4ull));
TAIL_STATIC(0x75dd28u,75d);
}
B6d02e4:L6d02e4:{c.instructions+=3;NFSU2_TR(0x6d02e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d02e7:{NFSU2_TR(0x6d02e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d02ea:{NFSU2_TR(0x6d02ea);
{goto L6d02ff;}
}
B6d02ec:L6d02ec:{c.instructions+=3;NFSU2_TR(0x6d02ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d02ef:{NFSU2_TR(0x6d02ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d02f2:{NFSU2_TR(0x6d02f2);
{goto L6d02ff;}
}
B6d02f4:L6d02f4:{c.instructions+=4;NFSU2_TR(0x6d02f4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d02f6:{NFSU2_TR(0x6d02f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d02f9:{NFSU2_TR(0x6d02f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B6d02fc:{NFSU2_TR(0x6d02fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d02ff:L6d02ff:{c.instructions+=4;NFSU2_TR(0x6d02ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d0302:{NFSU2_TR(0x6d0302);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0305:{NFSU2_TR(0x6d0305);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d0308:{NFSU2_TR(0x6d0308);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d02bcu);}goto L6d02bc;}}
}
B6d030a:L6d030a:{c.instructions+=8;NFSU2_TR(0x6d030a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d030d:{NFSU2_TR(0x6d030d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6d0310:{NFSU2_TR(0x6d0310);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0311:{NFSU2_TR(0x6d0311);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0313:{NFSU2_TR(0x6d0313);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0316:{NFSU2_TR(0x6d0316);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0319:{NFSU2_TR(0x6d0319);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d031a:{NFSU2_TR(0x6d031a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d031full));
TAIL_STATIC(0x6c140eu,6c1);
}
B6d031f:L6d031f:{c.instructions+=3;NFSU2_TR(0x6d031f);
__builtin_memmove((R+24),(R+0),4);
}
B6d0321:{NFSU2_TR(0x6d0321);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d0323:{NFSU2_TR(0x6d0323);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d05f3;}}
}
B6d0329:L6d0329:{c.instructions+=2;NFSU2_TR(0x6d0329);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d032d:{NFSU2_TR(0x6d032d);
{goto L6d04b6;}
}
B6d0332:L6d0332:{c.instructions+=2;NFSU2_TR(0x6d0332);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x2ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B6d0336:{NFSU2_TR(0x6d0336);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d03f6;}}
}
B6d033c:L6d033c:{c.instructions+=7;NFSU2_TR(0x6d033c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B6d033f:{NFSU2_TR(0x6d033f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B6d0342:{NFSU2_TR(0x6d0342);
__builtin_memmove((R+24),(R+0),4);
}
B6d0344:{NFSU2_TR(0x6d0344);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6d0347:{NFSU2_TR(0x6d0347);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0348:{NFSU2_TR(0x6d0348);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d034b:{NFSU2_TR(0x6d034b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0350ull));
TAIL_STATIC(0x575620u,575);
}
B6d0350:L6d0350:{c.instructions+=4;NFSU2_TR(0x6d0350);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d0352:{NFSU2_TR(0x6d0352);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0353:{NFSU2_TR(0x6d0353);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0356:{NFSU2_TR(0x6d0356);
if(r1(R+518)){{goto L6d05d2;}}
}
B6d035c:L6d035c:{c.instructions+=5;NFSU2_TR(0x6d035c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d035f:{NFSU2_TR(0x6d035f);
__builtin_memmove((R+4),(R+24),4);
}
B6d0361:{NFSU2_TR(0x6d0361);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6d0364:{NFSU2_TR(0x6d0364);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d0366:{NFSU2_TR(0x6d0366);
__builtin_memmove((R+28),(R+8),4);
}
B6d0368:L6d0368:{c.instructions+=1;NFSU2_TR(0x6d0368);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d036a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d0368u);}goto L6d0368;}
}
B6d036a:L6d036a:{c.instructions+=2;NFSU2_TR(0x6d036a);
__builtin_memmove((R+4),(R+24),4);
}
B6d036c:{NFSU2_TR(0x6d036c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6d036f:L6d036f:{c.instructions+=1;NFSU2_TR(0x6d036f);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6d0371;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d036fu);}goto L6d036f;}
}
B6d0371:L6d0371:{c.instructions+=4;NFSU2_TR(0x6d0371);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d0374:{NFSU2_TR(0x6d0374);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6d0376:{NFSU2_TR(0x6d0376);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d0379:{NFSU2_TR(0x6d0379);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d03ce;}}
}
B6d037b:L6d037b:{c.instructions+=6;NFSU2_TR(0x6d037b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d037e:{NFSU2_TR(0x6d037e);
__builtin_memmove((R+4),(R+12),4);
}
B6d0380:{NFSU2_TR(0x6d0380);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6d0383:{NFSU2_TR(0x6d0383);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d0386:{NFSU2_TR(0x6d0386);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d0388:{NFSU2_TR(0x6d0388);
if(r1(R+518)){{goto L6d03c8;}}
}
B6d038a:L6d038a:{c.instructions+=3;NFSU2_TR(0x6d038a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6d038c:{NFSU2_TR(0x6d038c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6d038f:{NFSU2_TR(0x6d038f);
if(r1(R+518)){{goto L6d03b9;}}
}
B6d0391:L6d0391:{c.instructions+=2;NFSU2_TR(0x6d0391);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6d0392:{NFSU2_TR(0x6d0392);
if(r1(R+518)){{goto L6d03b4;}}
}
B6d0394:L6d0394:{c.instructions+=2;NFSU2_TR(0x6d0394);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6d0395:{NFSU2_TR(0x6d0395);
if(r1(R+518)){{goto L6d039f;}}
}
B6d0397:L6d0397:{c.instructions+=2;NFSU2_TR(0x6d0397);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6d0398:{NFSU2_TR(0x6d0398);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d03c8;}}
}
B6d039a:L6d039a:{c.instructions+=2;NFSU2_TR(0x6d039a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6d039d:{NFSU2_TR(0x6d039d);
{goto L6d03c5;}
}
B6d039f:L6d039f:{c.instructions+=5;NFSU2_TR(0x6d039f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d03a2:{NFSU2_TR(0x6d03a2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d03a4:{NFSU2_TR(0x6d03a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d03a7:{NFSU2_TR(0x6d03a7);
{u32 ea_=u32(r4(R+20)+u32(4294967212u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6d03aa:{NFSU2_TR(0x6d03aa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d03c5;}}
}
B6d03ac:L6d03ac:{c.instructions+=2;NFSU2_TR(0x6d03ac);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6d03b2:{NFSU2_TR(0x6d03b2);
{goto L6d03c5;}
}
B6d03b4:L6d03b4:{c.instructions+=2;NFSU2_TR(0x6d03b4);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6d03b7:{NFSU2_TR(0x6d03b7);
{goto L6d03c5;}
}
B6d03b9:L6d03b9:{c.instructions+=2;NFSU2_TR(0x6d03b9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d03bd:{NFSU2_TR(0x6d03bd);
if(r1(R+518)){{goto L6d03c3;}}
}
B6d03bf:L6d03bf:{c.instructions+=2;NFSU2_TR(0x6d03bf);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6d03c1:{NFSU2_TR(0x6d03c1);
{goto L6d03c5;}
}
B6d03c3:L6d03c3:{c.instructions+=1;NFSU2_TR(0x6d03c3);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6d03c5:L6d03c5:{c.instructions+=1;NFSU2_TR(0x6d03c5);
{u32 ea_=u32(r4(R+8)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6d03c8:L6d03c8:{c.instructions+=3;NFSU2_TR(0x6d03c8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6d03c9:{NFSU2_TR(0x6d03c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6d03cc:{NFSU2_TR(0x6d03cc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d037bu);}goto L6d037b;}}
}
B6d03ce:L6d03ce:{c.instructions+=8;NFSU2_TR(0x6d03ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d03d1:{NFSU2_TR(0x6d03d1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6d03d4:{NFSU2_TR(0x6d03d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d03d5:{NFSU2_TR(0x6d03d5);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d03d7:{NFSU2_TR(0x6d03d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d03da:{NFSU2_TR(0x6d03da);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d03dd:{NFSU2_TR(0x6d03dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d03de:{NFSU2_TR(0x6d03de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d03e3ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6d03e3:L6d03e3:{c.instructions+=3;NFSU2_TR(0x6d03e3);
__builtin_memmove((R+24),(R+0),4);
}
B6d03e5:{NFSU2_TR(0x6d03e5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d03e7:{NFSU2_TR(0x6d03e7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d05f3;}}
}
B6d03ed:L6d03ed:{c.instructions+=2;NFSU2_TR(0x6d03ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d03f1:{NFSU2_TR(0x6d03f1);
{goto L6d04b6;}
}
B6d03f6:L6d03f6:{c.instructions+=2;NFSU2_TR(0x6d03f6);
u8 U[2];
w2(U+0,u16(u32(r2(R+8))&u32(r2(R+8))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6d03f9:{NFSU2_TR(0x6d03f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d04bc;}}
}
B6d03ff:L6d03ff:{c.instructions+=6;NFSU2_TR(0x6d03ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0402:{NFSU2_TR(0x6d0402);
__builtin_memmove((R+24),(R+0),4);
}
B6d0404:{NFSU2_TR(0x6d0404);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6d0407:{NFSU2_TR(0x6d0407);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0408:{NFSU2_TR(0x6d0408);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d040b:{NFSU2_TR(0x6d040b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0410ull));
TAIL_STATIC(0x575620u,575);
}
B6d0410:L6d0410:{c.instructions+=4;NFSU2_TR(0x6d0410);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d0412:{NFSU2_TR(0x6d0412);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0413:{NFSU2_TR(0x6d0413);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0416:{NFSU2_TR(0x6d0416);
if(r1(R+518)){{goto L6d05d2;}}
}
B6d041c:L6d041c:{c.instructions+=6;NFSU2_TR(0x6d041c);
__builtin_memmove((R+4),(R+24),4);
}
B6d041e:{NFSU2_TR(0x6d041e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d0421:{NFSU2_TR(0x6d0421);
__builtin_memmove((R+8),(R+4),4);
}
B6d0423:{NFSU2_TR(0x6d0423);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6d0426:{NFSU2_TR(0x6d0426);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d0428:{NFSU2_TR(0x6d0428);
__builtin_memmove((R+28),(R+24),4);
}
B6d042a:L6d042a:{c.instructions+=1;NFSU2_TR(0x6d042a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d042c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d042au);}goto L6d042a;}
}
B6d042c:L6d042c:{c.instructions+=2;NFSU2_TR(0x6d042c);
__builtin_memmove((R+4),(R+8),4);
}
B6d042e:{NFSU2_TR(0x6d042e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6d0431:L6d0431:{c.instructions+=1;NFSU2_TR(0x6d0431);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6d0433;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d0431u);}goto L6d0431;}
}
B6d0433:L6d0433:{c.instructions+=5;NFSU2_TR(0x6d0433);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d0436:{NFSU2_TR(0x6d0436);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6d0438:{NFSU2_TR(0x6d0438);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d043b:{NFSU2_TR(0x6d043b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d043e:{NFSU2_TR(0x6d043e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d0493;}}
}
B6d0440:L6d0440:{c.instructions+=6;NFSU2_TR(0x6d0440);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0443:{NFSU2_TR(0x6d0443);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0446:{NFSU2_TR(0x6d0446);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6d0449:{NFSU2_TR(0x6d0449);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d044c:{NFSU2_TR(0x6d044c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d044e:{NFSU2_TR(0x6d044e);
if(r1(R+518)){{goto L6d0488;}}
}
B6d0450:L6d0450:{c.instructions+=3;NFSU2_TR(0x6d0450);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d0452:{NFSU2_TR(0x6d0452);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6d0454:{NFSU2_TR(0x6d0454);
if(r1(R+518)){{goto L6d047d;}}
}
B6d0456:L6d0456:{c.instructions+=2;NFSU2_TR(0x6d0456);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6d0457:{NFSU2_TR(0x6d0457);
if(r1(R+518)){{goto L6d047d;}}
}
B6d0459:L6d0459:{c.instructions+=2;NFSU2_TR(0x6d0459);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6d045a:{NFSU2_TR(0x6d045a);
if(r1(R+518)){{goto L6d047d;}}
}
B6d045c:L6d045c:{c.instructions+=2;NFSU2_TR(0x6d045c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6d045d:{NFSU2_TR(0x6d045d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d0488;}}
}
B6d045f:L6d045f:{c.instructions+=6;NFSU2_TR(0x6d045f);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6d0465:{NFSU2_TR(0x6d0465);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6d0468:{NFSU2_TR(0x6d0468);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6d046a:{NFSU2_TR(0x6d046a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6d046c:{NFSU2_TR(0x6d046c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6d046f:{NFSU2_TR(0x6d046f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6d0476;}}
}
B6d0471:L6d0471:{c.instructions+=3;NFSU2_TR(0x6d0471);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d0473:{NFSU2_TR(0x6d0473);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d0474:{NFSU2_TR(0x6d0474);
{goto L6d0478;}
}
B6d0476:L6d0476:{c.instructions+=1;NFSU2_TR(0x6d0476);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d0478:L6d0478:{c.instructions+=2;NFSU2_TR(0x6d0478);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d047b:{NFSU2_TR(0x6d047b);
{goto L6d0488;}
}
B6d047d:L6d047d:{c.instructions+=4;NFSU2_TR(0x6d047d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6d047f:{NFSU2_TR(0x6d047f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d0482:{NFSU2_TR(0x6d0482);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B6d0485:{NFSU2_TR(0x6d0485);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d0488:L6d0488:{c.instructions+=4;NFSU2_TR(0x6d0488);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d048b:{NFSU2_TR(0x6d048b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d048e:{NFSU2_TR(0x6d048e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d0491:{NFSU2_TR(0x6d0491);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d0440u);}goto L6d0440;}}
}
B6d0493:L6d0493:{c.instructions+=8;NFSU2_TR(0x6d0493);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0496:{NFSU2_TR(0x6d0496);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6d0499:{NFSU2_TR(0x6d0499);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d049a:{NFSU2_TR(0x6d049a);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d049c:{NFSU2_TR(0x6d049c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d049f:{NFSU2_TR(0x6d049f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d04a2:{NFSU2_TR(0x6d04a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d04a3:{NFSU2_TR(0x6d04a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d04a8ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6d04a8:L6d04a8:{c.instructions+=3;NFSU2_TR(0x6d04a8);
__builtin_memmove((R+24),(R+0),4);
}
B6d04aa:{NFSU2_TR(0x6d04aa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d04ac:{NFSU2_TR(0x6d04ac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d05f3;}}
}
B6d04b2:L6d04b2:{c.instructions+=1;NFSU2_TR(0x6d04b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d04b6:L6d04b6:{c.instructions+=2;NFSU2_TR(0x6d04b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d04b9:{NFSU2_TR(0x6d04b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d04bc:L6d04bc:{c.instructions+=8;NFSU2_TR(0x6d04bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d04bf:{NFSU2_TR(0x6d04bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d04c2:{NFSU2_TR(0x6d04c2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6d04c5:{NFSU2_TR(0x6d04c5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x14ull))));
}
B6d04c8:{NFSU2_TR(0x6d04c8);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6d04cb:{NFSU2_TR(0x6d04cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d04ce:{NFSU2_TR(0x6d04ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d04d1:{NFSU2_TR(0x6d04d1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d008eu);}goto L6d008e;}}
}
B6d04d7:L6d04d7:{c.instructions+=7;NFSU2_TR(0x6d04d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d04da:{NFSU2_TR(0x6d04da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d04dd:{NFSU2_TR(0x6d04dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d04e0:{NFSU2_TR(0x6d04e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d04e2:{NFSU2_TR(0x6d04e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6d04e5:{NFSU2_TR(0x6d04e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d04e6:{NFSU2_TR(0x6d04e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d04ecull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d04ec:L6d04ec:{c.instructions+=3;NFSU2_TR(0x6d04ec);
__builtin_memmove((R+24),(R+0),4);
}
B6d04ee:{NFSU2_TR(0x6d04ee);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d04f0:{NFSU2_TR(0x6d04f0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d05f3;}}
}
B6d04f6:L6d04f6:{c.instructions+=11;NFSU2_TR(0x6d04f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d04f9:{NFSU2_TR(0x6d04f9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d04fb:{NFSU2_TR(0x6d04fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d04fe:{NFSU2_TR(0x6d04fe);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6d04ff:{NFSU2_TR(0x6d04ff);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6d0500:{NFSU2_TR(0x6d0500);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6d0501:{NFSU2_TR(0x6d0501);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d0504:{NFSU2_TR(0x6d0504);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0505:{NFSU2_TR(0x6d0505);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0507:{NFSU2_TR(0x6d0507);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d050d:{NFSU2_TR(0x6d050d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0512ull));
TAIL_STATIC(0x672315u,672);
}
B6d0512:L6d0512:{c.instructions+=3;NFSU2_TR(0x6d0512);
__builtin_memmove((R+24),(R+0),4);
}
B6d0514:{NFSU2_TR(0x6d0514);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d0516:{NFSU2_TR(0x6d0516);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d05f3;}}
}
B6d051c:L6d051c:{c.instructions+=7;NFSU2_TR(0x6d051c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d051f:{NFSU2_TR(0x6d051f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0520:{NFSU2_TR(0x6d0520);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0522:{NFSU2_TR(0x6d0522);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0524:{NFSU2_TR(0x6d0524);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0527:{NFSU2_TR(0x6d0527);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d052a:{NFSU2_TR(0x6d052a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d052full));
TAIL_STATIC(0x6c140eu,6c1);
}
B6d052f:L6d052f:{c.instructions+=3;NFSU2_TR(0x6d052f);
__builtin_memmove((R+24),(R+0),4);
}
B6d0531:{NFSU2_TR(0x6d0531);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d0533:{NFSU2_TR(0x6d0533);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d05f3;}}
}
B6d0539:L6d0539:{c.instructions+=7;NFSU2_TR(0x6d0539);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d053c:{NFSU2_TR(0x6d053c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d053d:{NFSU2_TR(0x6d053d);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d053f:{NFSU2_TR(0x6d053f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0541:{NFSU2_TR(0x6d0541);
u8 U[4];
w4(U+0,u32(0x7bf710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0546:{NFSU2_TR(0x6d0546);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0549:{NFSU2_TR(0x6d0549);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d054eull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6d054e:L6d054e:{c.instructions+=3;NFSU2_TR(0x6d054e);
__builtin_memmove((R+24),(R+0),4);
}
B6d0550:{NFSU2_TR(0x6d0550);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d0552:{NFSU2_TR(0x6d0552);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d05f3;}}
}
B6d0558:L6d0558:{c.instructions+=2;NFSU2_TR(0x6d0558);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d055b:{NFSU2_TR(0x6d055b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0560ull));
TAIL_STATIC(0x6c1547u,6c1);
}
B6d0560:L6d0560:{c.instructions+=3;NFSU2_TR(0x6d0560);
__builtin_memmove((R+28),(R+0),4);
}
B6d0562:{NFSU2_TR(0x6d0562);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x8000ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d0568:{NFSU2_TR(0x6d0568);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6d05d9;}}
}
B6d056a:L6d056a:{c.instructions+=3;NFSU2_TR(0x6d056a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d056b:{NFSU2_TR(0x6d056b);
__builtin_memmove((R+4),(R+12),4);
}
B6d056d:{NFSU2_TR(0x6d056d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0572ull));
TAIL_STATIC(0x6cc145u,6cc);
}
B6d0572:L6d0572:{c.instructions+=3;NFSU2_TR(0x6d0572);
__builtin_memmove((R+24),(R+0),4);
}
B6d0574:{NFSU2_TR(0x6d0574);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d0576:{NFSU2_TR(0x6d0576);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d05f3;}}
}
B6d0578:L6d0578:{c.instructions+=9;NFSU2_TR(0x6d0578);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d057e:{NFSU2_TR(0x6d057e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0584:{NFSU2_TR(0x6d0584);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0xfffffffcull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6d058b:{NFSU2_TR(0x6d058b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d058c:{NFSU2_TR(0x6d058c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d058f:{NFSU2_TR(0x6d058f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0590:{NFSU2_TR(0x6d0590);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6d0594:{NFSU2_TR(0x6d0594);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0595:{NFSU2_TR(0x6d0595);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d059aull));
TAIL_STATIC(0x75cfd0u,75c);
}
B6d059a:L6d059a:{c.instructions+=7;NFSU2_TR(0x6d059a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d05a0:{NFSU2_TR(0x6d05a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6d05a3:{NFSU2_TR(0x6d05a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d05a4:{NFSU2_TR(0x6d05a4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6d05a7:{NFSU2_TR(0x6d05a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d05a8:{NFSU2_TR(0x6d05a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d05ab:{NFSU2_TR(0x6d05ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d05b0ull));
TAIL_STATIC(0x6c1553u,6c1);
}
B6d05b0:L6d05b0:{c.instructions+=3;NFSU2_TR(0x6d05b0);
__builtin_memmove((R+24),(R+0),4);
}
B6d05b2:{NFSU2_TR(0x6d05b2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d05b4:{NFSU2_TR(0x6d05b4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d05f3;}}
}
B6d05b6:L6d05b6:{c.instructions+=6;NFSU2_TR(0x6d05b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d05bc:{NFSU2_TR(0x6d05bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d05c2:{NFSU2_TR(0x6d05c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d05c8:{NFSU2_TR(0x6d05c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d05ce:{NFSU2_TR(0x6d05ce);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6d05d0:{NFSU2_TR(0x6d05d0);
{goto L6d05f3;}
}
B6d05d2:L6d05d2:{c.instructions+=2;NFSU2_TR(0x6d05d2);
w4(R+24,u32(0x8007000eull));
}
B6d05d7:{NFSU2_TR(0x6d05d7);
{goto L6d05f3;}
}
B6d05d9:L6d05d9:{c.instructions+=5;NFSU2_TR(0x6d05d9);
u8 U[4];
w4(U+0,u32(0x7bf6dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d05de:{NFSU2_TR(0x6d05de);
u8 U[4];
w4(U+0,u32(0x11c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d05e3:{NFSU2_TR(0x6d05e3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d05e5:{NFSU2_TR(0x6d05e5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d05e6:{NFSU2_TR(0x6d05e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d05ebull));
TAIL_STATIC(0x69e936u,69e);
}
B6d05eb:L6d05eb:{c.instructions+=2;NFSU2_TR(0x6d05eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6d05ee:{NFSU2_TR(0x6d05ee);
w4(R+24,u32(0x80004005ull));
}
B6d05f3:L6d05f3:{c.instructions+=2;NFSU2_TR(0x6d05f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d05f6:{NFSU2_TR(0x6d05f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d05fbull));
TAIL_STATIC(0x575630u,575);
}
B6d05fb:L6d05fb:{c.instructions+=2;NFSU2_TR(0x6d05fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d05fe:{NFSU2_TR(0x6d05fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0603ull));
TAIL_STATIC(0x575630u,575);
}
B6d0603:L6d0603:{c.instructions+=2;NFSU2_TR(0x6d0603);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0606:{NFSU2_TR(0x6d0606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d060bull));
TAIL_STATIC(0x575630u,575);
}
B6d060b:L6d060b:{c.instructions+=2;NFSU2_TR(0x6d060b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d060e:{NFSU2_TR(0x6d060e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0613ull));
TAIL_STATIC(0x575630u,575);
}
B6d0613:L6d0613:{c.instructions+=2;NFSU2_TR(0x6d0613);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0616:{NFSU2_TR(0x6d0616);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d061bull));
TAIL_STATIC(0x575630u,575);
}
B6d061b:L6d061b:{c.instructions+=2;NFSU2_TR(0x6d061b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d061e:{NFSU2_TR(0x6d061e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0623ull));
TAIL_STATIC(0x575630u,575);
}
B6d0623:L6d0623:{c.instructions+=3;NFSU2_TR(0x6d0623);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6d0626:{NFSU2_TR(0x6d0626);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0629:{NFSU2_TR(0x6d0629);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d062eull));
TAIL_STATIC(0x6c13d6u,6c1);
}
B6d062e:L6d062e:{c.instructions+=6;NFSU2_TR(0x6d062e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d062f:{NFSU2_TR(0x6d062f);
__builtin_memmove((R+0),(R+24),4);
}
B6d0631:{NFSU2_TR(0x6d0631);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d0632:{NFSU2_TR(0x6d0632);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d0633:{NFSU2_TR(0x6d0633);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d0634:{NFSU2_TR(0x6d0634);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d0635:L6d0635:{c.instructions+=11;NFSU2_TR(0x6d0635);
__builtin_memmove((R+28),(R+28),4);
}
B6d0637:{NFSU2_TR(0x6d0637);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0638:{NFSU2_TR(0x6d0638);
__builtin_memmove((R+20),(R+16),4);
}
B6d063a:{NFSU2_TR(0x6d063a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x6cull))));
}
B6d063d:{NFSU2_TR(0x6d063d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d063e:{NFSU2_TR(0x6d063e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d063f:{NFSU2_TR(0x6d063f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0640:{NFSU2_TR(0x6d0640);
__builtin_memmove((R+12),(R+4),4);
}
B6d0642:{NFSU2_TR(0x6d0642);
u8 U[4];
w4(U+0,u32(0x47554244ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0647:{NFSU2_TR(0x6d0647);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d064a:{NFSU2_TR(0x6d064a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d064full));
TAIL_STATIC(0x6c13b9u,6c1);
}
B6d064f:L6d064f:{c.instructions+=6;NFSU2_TR(0x6d064f);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0651:{NFSU2_TR(0x6d0651);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0652:{NFSU2_TR(0x6d0652);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0654:{NFSU2_TR(0x6d0654);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6d0656:{NFSU2_TR(0x6d0656);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d0658:{NFSU2_TR(0x6d0658);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d065b:L6d065b:{c.instructions+=1;NFSU2_TR(0x6d065b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d065d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d065bu);}goto L6d065b;}
}
B6d065d:L6d065d:{c.instructions+=15;NFSU2_TR(0x6d065d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d065e:{NFSU2_TR(0x6d065e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d065f:{NFSU2_TR(0x6d065f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0661:{NFSU2_TR(0x6d0661);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0662:{NFSU2_TR(0x6d0662);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0665:{NFSU2_TR(0x6d0665);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d0668:{NFSU2_TR(0x6d0668);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0669:{NFSU2_TR(0x6d0669);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d066c:{NFSU2_TR(0x6d066c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d066f:{NFSU2_TR(0x6d066f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0672:{NFSU2_TR(0x6d0672);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0675:{NFSU2_TR(0x6d0675);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0678:{NFSU2_TR(0x6d0678);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d067b:{NFSU2_TR(0x6d067b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d067e:{NFSU2_TR(0x6d067e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0683ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6d0683:L6d0683:{c.instructions+=3;NFSU2_TR(0x6d0683);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d0685:{NFSU2_TR(0x6d0685);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0688:{NFSU2_TR(0x6d0688);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d0c7e;}}
}
B6d068e:L6d068e:{c.instructions+=4;NFSU2_TR(0x6d068e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0694:{NFSU2_TR(0x6d0694);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d0696:{NFSU2_TR(0x6d0696);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0699:{NFSU2_TR(0x6d0699);
if(r1(R+518)){{goto L6d0b35;}}
}
B6d069f:L6d069f:{c.instructions+=3;NFSU2_TR(0x6d069f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d06a2:{NFSU2_TR(0x6d06a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d06a3:{NFSU2_TR(0x6d06a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d06a8ull));
TAIL_STATIC(0x575620u,575);
}
B6d06a8:L6d06a8:{c.instructions+=5;NFSU2_TR(0x6d06a8);
__builtin_memmove((R+28),(R+0),4);
}
B6d06aa:{NFSU2_TR(0x6d06aa);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d06ac:{NFSU2_TR(0x6d06ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d06ad:{NFSU2_TR(0x6d06ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d06b0:{NFSU2_TR(0x6d06b0);
if(r1(R+518)){{goto L6d0c5e;}}
}
B6d06b6:L6d06b6:{c.instructions+=2;NFSU2_TR(0x6d06b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d06b9:{NFSU2_TR(0x6d06b9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d06bb:L6d06bb:{c.instructions+=1;NFSU2_TR(0x6d06bb);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d06bd;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d06bbu);}goto L6d06bb;}
}
B6d06bd:L6d06bd:{c.instructions+=4;NFSU2_TR(0x6d06bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d06c0:{NFSU2_TR(0x6d06c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d06c3:{NFSU2_TR(0x6d06c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d06c4:{NFSU2_TR(0x6d06c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d06c9ull));
TAIL_STATIC(0x575620u,575);
}
B6d06c9:L6d06c9:{c.instructions+=4;NFSU2_TR(0x6d06c9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d06cb:{NFSU2_TR(0x6d06cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d06cc:{NFSU2_TR(0x6d06cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d06cf:{NFSU2_TR(0x6d06cf);
if(r1(R+518)){{goto L6d0c5e;}}
}
B6d06d5:L6d06d5:{c.instructions+=7;NFSU2_TR(0x6d06d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d06d8:{NFSU2_TR(0x6d06d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d06db:{NFSU2_TR(0x6d06db);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6d06de:{NFSU2_TR(0x6d06de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d06e1:{NFSU2_TR(0x6d06e1);
__builtin_memmove((R+8),(R+4),4);
}
B6d06e3:{NFSU2_TR(0x6d06e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6d06e6:{NFSU2_TR(0x6d06e6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d06e8:L6d06e8:{c.instructions+=1;NFSU2_TR(0x6d06e8);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d06ea;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d06e8u);}goto L6d06e8;}
}
B6d06ea:L6d06ea:{c.instructions+=2;NFSU2_TR(0x6d06ea);
__builtin_memmove((R+4),(R+8),4);
}
B6d06ec:{NFSU2_TR(0x6d06ec);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6d06ef:L6d06ef:{c.instructions+=1;NFSU2_TR(0x6d06ef);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6d06f1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d06efu);}goto L6d06ef;}
}
B6d06f1:L6d06f1:{c.instructions+=4;NFSU2_TR(0x6d06f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d06f4:{NFSU2_TR(0x6d06f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d06f7:{NFSU2_TR(0x6d06f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d06f8:{NFSU2_TR(0x6d06f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d06fdull));
TAIL_STATIC(0x575620u,575);
}
B6d06fd:L6d06fd:{c.instructions+=4;NFSU2_TR(0x6d06fd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d06ff:{NFSU2_TR(0x6d06ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0700:{NFSU2_TR(0x6d0700);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0703:{NFSU2_TR(0x6d0703);
if(r1(R+518)){{goto L6d0c5e;}}
}
B6d0709:L6d0709:{c.instructions+=6;NFSU2_TR(0x6d0709);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d070c:{NFSU2_TR(0x6d070c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d070f:{NFSU2_TR(0x6d070f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6d0712:{NFSU2_TR(0x6d0712);
__builtin_memmove((R+8),(R+4),4);
}
B6d0714:{NFSU2_TR(0x6d0714);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6d0717:{NFSU2_TR(0x6d0717);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d0719:L6d0719:{c.instructions+=1;NFSU2_TR(0x6d0719);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d071b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d0719u);}goto L6d0719;}
}
B6d071b:L6d071b:{c.instructions+=2;NFSU2_TR(0x6d071b);
__builtin_memmove((R+4),(R+8),4);
}
B6d071d:{NFSU2_TR(0x6d071d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6d0720:L6d0720:{c.instructions+=1;NFSU2_TR(0x6d0720);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6d0722;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d0720u);}goto L6d0720;}
}
B6d0722:L6d0722:{c.instructions+=3;NFSU2_TR(0x6d0722);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d0725:{NFSU2_TR(0x6d0725);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0728:{NFSU2_TR(0x6d0728);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d0824;}}
}
B6d072e:L6d072e:{c.instructions+=2;NFSU2_TR(0x6d072e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d0731:{NFSU2_TR(0x6d0731);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B6d0734:L6d0734:{c.instructions+=8;NFSU2_TR(0x6d0734);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w2(U+0,u16(u32(r2(U+0))|u32(u16(0xffffull))));
s2(u32(r4(R+28)),r2(U+0));
}
B6d0739:{NFSU2_TR(0x6d0739);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B6d073e:{NFSU2_TR(0x6d073e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0744:{NFSU2_TR(0x6d0744);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6d0748:{NFSU2_TR(0x6d0748);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d074b:{NFSU2_TR(0x6d074b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d074e:{NFSU2_TR(0x6d074e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0751:{NFSU2_TR(0x6d0751);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d0758:L6d0758:{c.instructions+=4;NFSU2_TR(0x6d0758);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d075e:{NFSU2_TR(0x6d075e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d0761:{NFSU2_TR(0x6d0761);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d0764:{NFSU2_TR(0x6d0764);
if(r1(R+518)){{goto L6d0790;}}
}
B6d0766:L6d0766:{c.instructions+=6;NFSU2_TR(0x6d0766);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d0769:{NFSU2_TR(0x6d0769);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d076c:{NFSU2_TR(0x6d076c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d0770:{NFSU2_TR(0x6d0770);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d0773:{NFSU2_TR(0x6d0773);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0776:{NFSU2_TR(0x6d0776);
if(r1(R+518)){{goto L6d0790;}}
}
B6d0778:L6d0778:{c.instructions+=7;NFSU2_TR(0x6d0778);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d077e:{NFSU2_TR(0x6d077e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d0781:{NFSU2_TR(0x6d0781);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0784:{NFSU2_TR(0x6d0784);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d0787:{NFSU2_TR(0x6d0787);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d078a:{NFSU2_TR(0x6d078a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d078d:{NFSU2_TR(0x6d078d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0790:L6d0790:{c.instructions+=4;NFSU2_TR(0x6d0790);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6d0793:{NFSU2_TR(0x6d0793);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d0796:{NFSU2_TR(0x6d0796);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0799:{NFSU2_TR(0x6d0799);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d0758u);}goto L6d0758;}}
}
B6d079b:L6d079b:{c.instructions+=4;NFSU2_TR(0x6d079b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d07a1:{NFSU2_TR(0x6d07a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d07a4:{NFSU2_TR(0x6d07a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d07a6:{NFSU2_TR(0x6d07a6);
if(r1(R+518)){{goto L6d080d;}}
}
B6d07a8:L6d07a8:{c.instructions+=7;NFSU2_TR(0x6d07a8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6d07ac:{NFSU2_TR(0x6d07ac);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6d07b0:{NFSU2_TR(0x6d07b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d07b6:{NFSU2_TR(0x6d07b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d07b9:{NFSU2_TR(0x6d07b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d07bc:{NFSU2_TR(0x6d07bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d07be:{NFSU2_TR(0x6d07be);
if(r1(R+518)){{goto L6d080d;}}
}
B6d07c0:L6d07c0:{c.instructions+=7;NFSU2_TR(0x6d07c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d07c3:{NFSU2_TR(0x6d07c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d07c4:{NFSU2_TR(0x6d07c4);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d07c6:{NFSU2_TR(0x6d07c6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d07c8:{NFSU2_TR(0x6d07c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d07c9:{NFSU2_TR(0x6d07c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d07cc:{NFSU2_TR(0x6d07cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d07d1ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6d07d1:L6d07d1:{c.instructions+=2;NFSU2_TR(0x6d07d1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d07d3:{NFSU2_TR(0x6d07d3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d0c7e;}}
}
B6d07d9:L6d07d9:{c.instructions+=5;NFSU2_TR(0x6d07d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d07dc:{NFSU2_TR(0x6d07dc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d07de:{NFSU2_TR(0x6d07de);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d07e1:{NFSU2_TR(0x6d07e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d07e4:{NFSU2_TR(0x6d07e4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d07f7;}}
}
B6d07e6:L6d07e6:{c.instructions+=3;NFSU2_TR(0x6d07e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d07e9:{NFSU2_TR(0x6d07e9);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6d07ec:{NFSU2_TR(0x6d07ec);
if(r1(R+518)){{goto L6d07f7;}}
}
B6d07ee:L6d07ee:{c.instructions+=4;NFSU2_TR(0x6d07ee);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d07ef:{NFSU2_TR(0x6d07ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d07f2:{NFSU2_TR(0x6d07f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d07f5:{NFSU2_TR(0x6d07f5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d07e6u);}goto L6d07e6;}}
}
B6d07f7:L6d07f7:{c.instructions+=3;NFSU2_TR(0x6d07f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d07fa:{NFSU2_TR(0x6d07fa);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d07fc:{NFSU2_TR(0x6d07fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d080a;}}
}
B6d07fe:L6d07fe:{c.instructions+=4;NFSU2_TR(0x6d07fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0801:{NFSU2_TR(0x6d0801);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d0804:{NFSU2_TR(0x6d0804);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d0807:{NFSU2_TR(0x6d0807);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d080a:L6d080a:{c.instructions+=1;NFSU2_TR(0x6d080a);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+28)),r2(U+0));
}
B6d080d:L6d080d:{c.instructions+=6;NFSU2_TR(0x6d080d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d0810:{NFSU2_TR(0x6d0810);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0813:{NFSU2_TR(0x6d0813);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B6d0816:{NFSU2_TR(0x6d0816);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B6d0819:{NFSU2_TR(0x6d0819);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d081c:{NFSU2_TR(0x6d081c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d0734u);}goto L6d0734;}}
}
B6d0822:L6d0822:{c.instructions+=1;NFSU2_TR(0x6d0822);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6d0824:L6d0824:{c.instructions+=3;NFSU2_TR(0x6d0824);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0827:{NFSU2_TR(0x6d0827);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d0829:{NFSU2_TR(0x6d0829);
if(r1(R+518)){{goto L6d084b;}}
}
B6d082b:L6d082b:{c.instructions+=8;NFSU2_TR(0x6d082b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d082e:{NFSU2_TR(0x6d082e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d082f:{NFSU2_TR(0x6d082f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0831:{NFSU2_TR(0x6d0831);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d0834:{NFSU2_TR(0x6d0834);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0835:{NFSU2_TR(0x6d0835);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0838:{NFSU2_TR(0x6d0838);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d083b:{NFSU2_TR(0x6d083b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0840ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6d0840:L6d0840:{c.instructions+=3;NFSU2_TR(0x6d0840);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d0842:{NFSU2_TR(0x6d0842);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0845:{NFSU2_TR(0x6d0845);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d0c7e;}}
}
B6d084b:L6d084b:{c.instructions+=7;NFSU2_TR(0x6d084b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d084e:{NFSU2_TR(0x6d084e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d084f:{NFSU2_TR(0x6d084f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0851:{NFSU2_TR(0x6d0851);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0854:{NFSU2_TR(0x6d0854);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0857:{NFSU2_TR(0x6d0857);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d085a:{NFSU2_TR(0x6d085a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d085full));
TAIL_STATIC(0x6c140eu,6c1);
}
B6d085f:L6d085f:{c.instructions+=3;NFSU2_TR(0x6d085f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d0861:{NFSU2_TR(0x6d0861);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0864:{NFSU2_TR(0x6d0864);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d0c7e;}}
}
B6d086a:L6d086a:{c.instructions+=2;NFSU2_TR(0x6d086a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d086d:{NFSU2_TR(0x6d086d);
if(r1(R+518)){{goto L6d0b35;}}
}
B6d0873:L6d0873:{c.instructions+=6;NFSU2_TR(0x6d0873);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d0876:{NFSU2_TR(0x6d0876);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0877:{NFSU2_TR(0x6d0877);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d087a:{NFSU2_TR(0x6d087a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d087b:{NFSU2_TR(0x6d087b);
u8 U[4];
w4(U+0,u32(0x6c18aeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0880:{NFSU2_TR(0x6d0880);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0885ull));
TAIL_STATIC(0x69a41du,69a);
}
B6d0885:L6d0885:{c.instructions+=6;NFSU2_TR(0x6d0885);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d0887:{NFSU2_TR(0x6d0887);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d0888:{NFSU2_TR(0x6d0888);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d088b:{NFSU2_TR(0x6d088b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d088e:{NFSU2_TR(0x6d088e);
__builtin_memmove((R+4),(R+0),4);
}
B6d0890:{NFSU2_TR(0x6d0890);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d08b6;}}
}
B6d0892:L6d0892:{c.instructions+=1;NFSU2_TR(0x6d0892);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0895:L6d0895:{c.instructions+=7;NFSU2_TR(0x6d0895);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6d0899:{NFSU2_TR(0x6d0899);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d089c:{NFSU2_TR(0x6d089c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d089f:{NFSU2_TR(0x6d089f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d08a2:{NFSU2_TR(0x6d08a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d08a5:{NFSU2_TR(0x6d08a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d08a8:{NFSU2_TR(0x6d08a8);
if(r1(R+518)){{goto L6d08ad;}}
}
B6d08aa:L6d08aa:{c.instructions+=1;NFSU2_TR(0x6d08aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d08ad:L6d08ad:{c.instructions+=3;NFSU2_TR(0x6d08ad);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6d08ae:{NFSU2_TR(0x6d08ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6d08b1:{NFSU2_TR(0x6d08b1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d0895u);}goto L6d0895;}}
}
B6d08b3:L6d08b3:{c.instructions+=1;NFSU2_TR(0x6d08b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d08b6:L6d08b6:{c.instructions+=4;NFSU2_TR(0x6d08b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d08b9:{NFSU2_TR(0x6d08b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d08bc:{NFSU2_TR(0x6d08bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d08bd:{NFSU2_TR(0x6d08bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d08c2ull));
TAIL_STATIC(0x575620u,575);
}
B6d08c2:L6d08c2:{c.instructions+=4;NFSU2_TR(0x6d08c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d08c4:{NFSU2_TR(0x6d08c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d08c5:{NFSU2_TR(0x6d08c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d08c8:{NFSU2_TR(0x6d08c8);
if(r1(R+518)){{goto L6d0c5e;}}
}
B6d08ce:L6d08ce:{c.instructions+=8;NFSU2_TR(0x6d08ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d08d1:{NFSU2_TR(0x6d08d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d08d4:{NFSU2_TR(0x6d08d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6d08d7:{NFSU2_TR(0x6d08d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6d08da:{NFSU2_TR(0x6d08da);
__builtin_memmove((R+4),(R+8),4);
}
B6d08dc:{NFSU2_TR(0x6d08dc);
__builtin_memmove((R+24),(R+4),4);
}
B6d08de:{NFSU2_TR(0x6d08de);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6d08e1:{NFSU2_TR(0x6d08e1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d08e3:L6d08e3:{c.instructions+=1;NFSU2_TR(0x6d08e3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d08e5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d08e3u);}goto L6d08e3;}
}
B6d08e5:L6d08e5:{c.instructions+=2;NFSU2_TR(0x6d08e5);
__builtin_memmove((R+4),(R+24),4);
}
B6d08e7:{NFSU2_TR(0x6d08e7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6d08ea:L6d08ea:{c.instructions+=1;NFSU2_TR(0x6d08ea);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6d08ec;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d08eau);}goto L6d08ea;}
}
B6d08ec:L6d08ec:{c.instructions+=6;NFSU2_TR(0x6d08ec);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d08ee:{NFSU2_TR(0x6d08ee);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d08f1:{NFSU2_TR(0x6d08f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d08f4:{NFSU2_TR(0x6d08f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d08f7:{NFSU2_TR(0x6d08f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d08fa:{NFSU2_TR(0x6d08fa);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d0b16;}}
}
B6d0900:L6d0900:{c.instructions+=2;NFSU2_TR(0x6d0900);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d0903:{NFSU2_TR(0x6d0903);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B6d0906:L6d0906:{c.instructions+=12;NFSU2_TR(0x6d0906);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0909:{NFSU2_TR(0x6d0909);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d090c:{NFSU2_TR(0x6d090c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d090f:{NFSU2_TR(0x6d090f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d0912:{NFSU2_TR(0x6d0912);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d0914:{NFSU2_TR(0x6d0914);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d0917:{NFSU2_TR(0x6d0917);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d091a:{NFSU2_TR(0x6d091a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d091d:{NFSU2_TR(0x6d091d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d091f:{NFSU2_TR(0x6d091f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0922:{NFSU2_TR(0x6d0922);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0925:{NFSU2_TR(0x6d0925);
if(r1(R+518)){{goto L6d0946;}}
}
B6d0927:L6d0927:{c.instructions+=7;NFSU2_TR(0x6d0927);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d092a:{NFSU2_TR(0x6d092a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d092b:{NFSU2_TR(0x6d092b);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d092d:{NFSU2_TR(0x6d092d);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d092f:{NFSU2_TR(0x6d092f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0930:{NFSU2_TR(0x6d0930);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0933:{NFSU2_TR(0x6d0933);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0938ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6d0938:L6d0938:{c.instructions+=3;NFSU2_TR(0x6d0938);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d093a:{NFSU2_TR(0x6d093a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d093d:{NFSU2_TR(0x6d093d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d0c7e;}}
}
B6d0943:L6d0943:{c.instructions+=1;NFSU2_TR(0x6d0943);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0946:L6d0946:{c.instructions+=4;NFSU2_TR(0x6d0946);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0949:{NFSU2_TR(0x6d0949);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d094c:{NFSU2_TR(0x6d094c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d094e:{NFSU2_TR(0x6d094e);
if(r1(R+518)){{goto L6d096f;}}
}
B6d0950:L6d0950:{c.instructions+=7;NFSU2_TR(0x6d0950);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d0953:{NFSU2_TR(0x6d0953);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0954:{NFSU2_TR(0x6d0954);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0956:{NFSU2_TR(0x6d0956);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0958:{NFSU2_TR(0x6d0958);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0959:{NFSU2_TR(0x6d0959);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d095c:{NFSU2_TR(0x6d095c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0961ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6d0961:L6d0961:{c.instructions+=3;NFSU2_TR(0x6d0961);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d0963:{NFSU2_TR(0x6d0963);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0966:{NFSU2_TR(0x6d0966);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d0c7e;}}
}
B6d096c:L6d096c:{c.instructions+=1;NFSU2_TR(0x6d096c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d096f:L6d096f:{c.instructions+=3;NFSU2_TR(0x6d096f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0972:{NFSU2_TR(0x6d0972);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d0975:{NFSU2_TR(0x6d0975);
if(r1(R+518)){{goto L6d097c;}}
}
B6d0977:L6d0977:{c.instructions+=2;NFSU2_TR(0x6d0977);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d097a:{NFSU2_TR(0x6d097a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d09ad;}}
}
B6d097c:L6d097c:{c.instructions+=14;NFSU2_TR(0x6d097c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d097e:{NFSU2_TR(0x6d097e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0981:{NFSU2_TR(0x6d0981);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B6d0984:{NFSU2_TR(0x6d0984);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0985:{NFSU2_TR(0x6d0985);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d0988:{NFSU2_TR(0x6d0988);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d098b:{NFSU2_TR(0x6d098b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d098e:{NFSU2_TR(0x6d098e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xe00000ull))));
}
B6d0993:{NFSU2_TR(0x6d0993);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0994:{NFSU2_TR(0x6d0994);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0996:{NFSU2_TR(0x6d0996);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0999:{NFSU2_TR(0x6d0999);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d099c:{NFSU2_TR(0x6d099c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d099d:{NFSU2_TR(0x6d099d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d09a2ull));
TAIL_STATIC(0x6cbe4cu,6cb);
}
B6d09a2:L6d09a2:{c.instructions+=3;NFSU2_TR(0x6d09a2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d09a4:{NFSU2_TR(0x6d09a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d09a7:{NFSU2_TR(0x6d09a7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d0c7e;}}
}
B6d09ad:L6d09ad:{c.instructions+=4;NFSU2_TR(0x6d09ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d09b0:{NFSU2_TR(0x6d09b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d09b3:{NFSU2_TR(0x6d09b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d09b6:{NFSU2_TR(0x6d09b6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6d0a02;}}
}
B6d09b8:L6d09b8:{c.instructions+=7;NFSU2_TR(0x6d09b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d09bb:{NFSU2_TR(0x6d09bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d09be:{NFSU2_TR(0x6d09be);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d09c1:{NFSU2_TR(0x6d09c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d09c4:{NFSU2_TR(0x6d09c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d09c7:{NFSU2_TR(0x6d09c7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d09ca:{NFSU2_TR(0x6d09ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d0a02;}}
}
B6d09cc:L6d09cc:{c.instructions+=3;NFSU2_TR(0x6d09cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d09cf:{NFSU2_TR(0x6d09cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d09d2:{NFSU2_TR(0x6d09d2);
{goto L6d09f0;}
}
B6d09d4:L6d09d4:{c.instructions+=6;NFSU2_TR(0x6d09d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d09d7:{NFSU2_TR(0x6d09d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d09da:{NFSU2_TR(0x6d09da);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d09dd:{NFSU2_TR(0x6d09dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d09e0:{NFSU2_TR(0x6d09e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d09e3:{NFSU2_TR(0x6d09e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d09f8;}}
}
B6d09e5:L6d09e5:{c.instructions+=3;NFSU2_TR(0x6d09e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d09e8:{NFSU2_TR(0x6d09e8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d09eb:{NFSU2_TR(0x6d09eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d09f8;}}
}
B6d09ed:L6d09ed:{c.instructions+=1;NFSU2_TR(0x6d09ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d09f0:L6d09f0:{c.instructions+=3;NFSU2_TR(0x6d09f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d09f3:{NFSU2_TR(0x6d09f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d09f6:{NFSU2_TR(0x6d09f6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d09d4u);}goto L6d09d4;}}
}
B6d09f8:L6d09f8:{c.instructions+=4;NFSU2_TR(0x6d09f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d09fb:{NFSU2_TR(0x6d09fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B6d09fd:{NFSU2_TR(0x6d09fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6d0a00:{NFSU2_TR(0x6d0a00);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d09b8u);}goto L6d09b8;}}
}
B6d0a02:L6d0a02:{c.instructions+=5;NFSU2_TR(0x6d0a02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d0a04:{NFSU2_TR(0x6d0a04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d0a07:{NFSU2_TR(0x6d0a07);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d0a0a:{NFSU2_TR(0x6d0a0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0a0b:{NFSU2_TR(0x6d0a0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0a10ull));
TAIL_STATIC(0x575620u,575);
}
B6d0a10:L6d0a10:{c.instructions+=4;NFSU2_TR(0x6d0a10);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d0a12:{NFSU2_TR(0x6d0a12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0a13:{NFSU2_TR(0x6d0a13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0a16:{NFSU2_TR(0x6d0a16);
if(r1(R+518)){{goto L6d0c5e;}}
}
B6d0a1c:L6d0a1c:{c.instructions+=8;NFSU2_TR(0x6d0a1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d0a1e:{NFSU2_TR(0x6d0a1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d0a21:{NFSU2_TR(0x6d0a21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6d0a24:{NFSU2_TR(0x6d0a24);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6d0a27:{NFSU2_TR(0x6d0a27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0a2a:{NFSU2_TR(0x6d0a2a);
__builtin_memmove((R+8),(R+4),4);
}
B6d0a2c:{NFSU2_TR(0x6d0a2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6d0a2f:{NFSU2_TR(0x6d0a2f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d0a31:L6d0a31:{c.instructions+=1;NFSU2_TR(0x6d0a31);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d0a33;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d0a31u);}goto L6d0a31;}
}
B6d0a33:L6d0a33:{c.instructions+=2;NFSU2_TR(0x6d0a33);
__builtin_memmove((R+4),(R+8),4);
}
B6d0a35:{NFSU2_TR(0x6d0a35);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6d0a38:L6d0a38:{c.instructions+=1;NFSU2_TR(0x6d0a38);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6d0a3a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d0a38u);}goto L6d0a38;}
}
B6d0a3a:L6d0a3a:{c.instructions+=5;NFSU2_TR(0x6d0a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0a3d:{NFSU2_TR(0x6d0a3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B6d0a40:{NFSU2_TR(0x6d0a40);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d0a43:{NFSU2_TR(0x6d0a43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0a46:{NFSU2_TR(0x6d0a46);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6d0ade;}}
}
B6d0a4c:L6d0a4c:{c.instructions+=8;NFSU2_TR(0x6d0a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0a4f:{NFSU2_TR(0x6d0a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0a52:{NFSU2_TR(0x6d0a52);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d0a55:{NFSU2_TR(0x6d0a55);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0a58:{NFSU2_TR(0x6d0a58);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d0a5b:{NFSU2_TR(0x6d0a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0a5e:{NFSU2_TR(0x6d0a5e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d0a61:{NFSU2_TR(0x6d0a61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d0ade;}}
}
B6d0a63:L6d0a63:{c.instructions+=14;NFSU2_TR(0x6d0a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0a66:{NFSU2_TR(0x6d0a66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d0a68:{NFSU2_TR(0x6d0a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d0a6b:{NFSU2_TR(0x6d0a6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d0a6e:{NFSU2_TR(0x6d0a6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d0a71:{NFSU2_TR(0x6d0a71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0a74:{NFSU2_TR(0x6d0a74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d0a76:{NFSU2_TR(0x6d0a76);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6d0a79:{NFSU2_TR(0x6d0a79);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6d0a7c:{NFSU2_TR(0x6d0a7c);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6d0a80:{NFSU2_TR(0x6d0a80);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6d0a81:{NFSU2_TR(0x6d0a81);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6d0a82:{NFSU2_TR(0x6d0a82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0a85:{NFSU2_TR(0x6d0a85);
{goto L6d0acb;}
}
B6d0a87:L6d0a87:{c.instructions+=9;NFSU2_TR(0x6d0a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0a8a:{NFSU2_TR(0x6d0a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d0a8d:{NFSU2_TR(0x6d0a8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6d0a90:{NFSU2_TR(0x6d0a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0a93:{NFSU2_TR(0x6d0a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0a96:{NFSU2_TR(0x6d0a96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d0a98:{NFSU2_TR(0x6d0a98);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d0a9b:{NFSU2_TR(0x6d0a9b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d0a9e:{NFSU2_TR(0x6d0a9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d0ad0;}}
}
B6d0aa0:L6d0aa0:{c.instructions+=3;NFSU2_TR(0x6d0aa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d0aa3:{NFSU2_TR(0x6d0aa3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d0aa6:{NFSU2_TR(0x6d0aa6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d0ad0;}}
}
B6d0aa8:L6d0aa8:{c.instructions+=12;NFSU2_TR(0x6d0aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0aab:{NFSU2_TR(0x6d0aab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d0aad:{NFSU2_TR(0x6d0aad);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d0ab0:{NFSU2_TR(0x6d0ab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d0ab3:{NFSU2_TR(0x6d0ab3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d0ab5:{NFSU2_TR(0x6d0ab5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6d0ab9:{NFSU2_TR(0x6d0ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6d0abc:{NFSU2_TR(0x6d0abc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6d0abf:{NFSU2_TR(0x6d0abf);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B6d0ac4:{NFSU2_TR(0x6d0ac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0ac7:{NFSU2_TR(0x6d0ac7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d0ac8:{NFSU2_TR(0x6d0ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0acb:L6d0acb:{c.instructions+=2;NFSU2_TR(0x6d0acb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d0ace:{NFSU2_TR(0x6d0ace);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d0a87u);}goto L6d0a87;}}
}
B6d0ad0:L6d0ad0:{c.instructions+=4;NFSU2_TR(0x6d0ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0ad3:{NFSU2_TR(0x6d0ad3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B6d0ad5:{NFSU2_TR(0x6d0ad5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6d0ad8:{NFSU2_TR(0x6d0ad8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d0a4cu);}goto L6d0a4c;}}
}
B6d0ade:L6d0ade:{c.instructions+=7;NFSU2_TR(0x6d0ade);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d0ae1:{NFSU2_TR(0x6d0ae1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0ae2:{NFSU2_TR(0x6d0ae2);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0ae4:{NFSU2_TR(0x6d0ae4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0ae7:{NFSU2_TR(0x6d0ae7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0aea:{NFSU2_TR(0x6d0aea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0aed:{NFSU2_TR(0x6d0aed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0af2ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6d0af2:L6d0af2:{c.instructions+=3;NFSU2_TR(0x6d0af2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d0af4:{NFSU2_TR(0x6d0af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0af7:{NFSU2_TR(0x6d0af7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d0c7e;}}
}
B6d0afd:L6d0afd:{c.instructions+=6;NFSU2_TR(0x6d0afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d0b01:{NFSU2_TR(0x6d0b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d0b04:{NFSU2_TR(0x6d0b04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0b07:{NFSU2_TR(0x6d0b07);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B6d0b0a:{NFSU2_TR(0x6d0b0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d0b0d:{NFSU2_TR(0x6d0b0d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d0906u);}goto L6d0906;}}
}
B6d0b13:L6d0b13:{c.instructions+=1;NFSU2_TR(0x6d0b13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d0b16:L6d0b16:{c.instructions+=7;NFSU2_TR(0x6d0b16);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d0b19:{NFSU2_TR(0x6d0b19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0b1a:{NFSU2_TR(0x6d0b1a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0b1c:{NFSU2_TR(0x6d0b1c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0b1d:{NFSU2_TR(0x6d0b1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0b20:{NFSU2_TR(0x6d0b20);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0b23:{NFSU2_TR(0x6d0b23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0b28ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6d0b28:L6d0b28:{c.instructions+=3;NFSU2_TR(0x6d0b28);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d0b2a:{NFSU2_TR(0x6d0b2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0b2d:{NFSU2_TR(0x6d0b2d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d0c7e;}}
}
B6d0b33:L6d0b33:{c.instructions+=1;NFSU2_TR(0x6d0b33);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6d0b35:L6d0b35:{c.instructions+=3;NFSU2_TR(0x6d0b35);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0b3b:{NFSU2_TR(0x6d0b3b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d0b3d:{NFSU2_TR(0x6d0b3d);
if(r1(R+518)){{goto L6d0b5b;}}
}
B6d0b3f:L6d0b3f:{c.instructions+=7;NFSU2_TR(0x6d0b3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0b42:{NFSU2_TR(0x6d0b42);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0b43:{NFSU2_TR(0x6d0b43);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0b45:{NFSU2_TR(0x6d0b45);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0b47:{NFSU2_TR(0x6d0b47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0b48:{NFSU2_TR(0x6d0b48);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0b4b:{NFSU2_TR(0x6d0b4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0b50ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6d0b50:L6d0b50:{c.instructions+=3;NFSU2_TR(0x6d0b50);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d0b52:{NFSU2_TR(0x6d0b52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0b55:{NFSU2_TR(0x6d0b55);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d0c7e;}}
}
B6d0b5b:L6d0b5b:{c.instructions+=3;NFSU2_TR(0x6d0b5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0b61:{NFSU2_TR(0x6d0b61);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d0b63:{NFSU2_TR(0x6d0b63);
if(r1(R+518)){{goto L6d0b9c;}}
}
B6d0b65:L6d0b65:{c.instructions+=7;NFSU2_TR(0x6d0b65);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0b68:{NFSU2_TR(0x6d0b68);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0b69:{NFSU2_TR(0x6d0b69);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0b6b:{NFSU2_TR(0x6d0b6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0b71:{NFSU2_TR(0x6d0b71);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0b74:{NFSU2_TR(0x6d0b74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0b75:{NFSU2_TR(0x6d0b75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0b7aull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6d0b7a:L6d0b7a:{c.instructions+=2;NFSU2_TR(0x6d0b7a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d0b7c:{NFSU2_TR(0x6d0b7c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d0c7e;}}
}
B6d0b82:L6d0b82:{c.instructions+=6;NFSU2_TR(0x6d0b82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0b83:{NFSU2_TR(0x6d0b83);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0b85:{NFSU2_TR(0x6d0b85);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0b87:{NFSU2_TR(0x6d0b87);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0b8c:{NFSU2_TR(0x6d0b8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0b8f:{NFSU2_TR(0x6d0b8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0b94ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6d0b94:L6d0b94:{c.instructions+=2;NFSU2_TR(0x6d0b94);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d0b96:{NFSU2_TR(0x6d0b96);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d0c7e;}}
}
B6d0b9c:L6d0b9c:{c.instructions+=7;NFSU2_TR(0x6d0b9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d0b9f:{NFSU2_TR(0x6d0b9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0ba0:{NFSU2_TR(0x6d0ba0);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0ba2:{NFSU2_TR(0x6d0ba2);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0ba4:{NFSU2_TR(0x6d0ba4);
u8 U[4];
w4(U+0,u32(0x7bf710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0ba9:{NFSU2_TR(0x6d0ba9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0bac:{NFSU2_TR(0x6d0bac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0bb1ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6d0bb1:L6d0bb1:{c.instructions+=2;NFSU2_TR(0x6d0bb1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d0bb3:{NFSU2_TR(0x6d0bb3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d0c7e;}}
}
B6d0bb9:L6d0bb9:{c.instructions+=2;NFSU2_TR(0x6d0bb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0bbc:{NFSU2_TR(0x6d0bbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0bc1ull));
TAIL_STATIC(0x6c1547u,6c1);
}
B6d0bc1:L6d0bc1:{c.instructions+=3;NFSU2_TR(0x6d0bc1);
__builtin_memmove((R+28),(R+0),4);
}
B6d0bc3:{NFSU2_TR(0x6d0bc3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x8000ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d0bc9:{NFSU2_TR(0x6d0bc9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6d0c67;}}
}
B6d0bcf:L6d0bcf:{c.instructions+=3;NFSU2_TR(0x6d0bcf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0bd0:{NFSU2_TR(0x6d0bd0);
__builtin_memmove((R+4),(R+12),4);
}
B6d0bd2:{NFSU2_TR(0x6d0bd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0bd7ull));
TAIL_STATIC(0x6cc145u,6cc);
}
B6d0bd7:L6d0bd7:{c.instructions+=3;NFSU2_TR(0x6d0bd7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d0bd9:{NFSU2_TR(0x6d0bd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0bdc:{NFSU2_TR(0x6d0bdc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d0c7e;}}
}
B6d0be2:L6d0be2:{c.instructions+=9;NFSU2_TR(0x6d0be2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0be8:{NFSU2_TR(0x6d0be8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0bee:{NFSU2_TR(0x6d0bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0xfffffffcull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6d0bf5:{NFSU2_TR(0x6d0bf5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0bf6:{NFSU2_TR(0x6d0bf6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0bf9:{NFSU2_TR(0x6d0bf9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0bfa:{NFSU2_TR(0x6d0bfa);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6d0bfe:{NFSU2_TR(0x6d0bfe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0bff:{NFSU2_TR(0x6d0bff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0c04ull));
TAIL_STATIC(0x75cfd0u,75c);
}
B6d0c04:L6d0c04:{c.instructions+=4;NFSU2_TR(0x6d0c04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6d0c07:{NFSU2_TR(0x6d0c07);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d0c09:{NFSU2_TR(0x6d0c09);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d0c0c:{NFSU2_TR(0x6d0c0c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d0c2a;}}
}
B6d0c0e:L6d0c0e:{c.instructions+=2;NFSU2_TR(0x6d0c0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0c11:{NFSU2_TR(0x6d0c11);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6d0c14:L6d0c14:{c.instructions+=8;NFSU2_TR(0x6d0c14);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d0c1a:{NFSU2_TR(0x6d0c1a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B6d0c1c:{NFSU2_TR(0x6d0c1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6d0c1f:{NFSU2_TR(0x6d0c1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+0)),r4(U+0));
}
B6d0c21:{NFSU2_TR(0x6d0c21);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6d0c22:{NFSU2_TR(0x6d0c22);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6d0c25:{NFSU2_TR(0x6d0c25);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6d0c28:{NFSU2_TR(0x6d0c28);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d0c14u);}goto L6d0c14;}}
}
B6d0c2a:L6d0c2a:{c.instructions+=6;NFSU2_TR(0x6d0c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0c30:{NFSU2_TR(0x6d0c30);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0c31:{NFSU2_TR(0x6d0c31);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6d0c34:{NFSU2_TR(0x6d0c34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0c35:{NFSU2_TR(0x6d0c35);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0c38:{NFSU2_TR(0x6d0c38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0c3dull));
TAIL_STATIC(0x6c1553u,6c1);
}
B6d0c3d:L6d0c3d:{c.instructions+=3;NFSU2_TR(0x6d0c3d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d0c3f:{NFSU2_TR(0x6d0c3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0c42:{NFSU2_TR(0x6d0c42);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d0c7e;}}
}
B6d0c44:L6d0c44:{c.instructions+=5;NFSU2_TR(0x6d0c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d0c4a:{NFSU2_TR(0x6d0c4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0c50:{NFSU2_TR(0x6d0c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d0c56:{NFSU2_TR(0x6d0c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0c5c:{NFSU2_TR(0x6d0c5c);
{goto L6d0c7b;}
}
B6d0c5e:L6d0c5e:{c.instructions+=2;NFSU2_TR(0x6d0c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d0c65:{NFSU2_TR(0x6d0c65);
{goto L6d0c7e;}
}
B6d0c67:L6d0c67:{c.instructions+=5;NFSU2_TR(0x6d0c67);
u8 U[4];
w4(U+0,u32(0x7ba264ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0c6c:{NFSU2_TR(0x6d0c6c);
u8 U[4];
w4(U+0,u32(0x11c3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0c71:{NFSU2_TR(0x6d0c71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0c72:{NFSU2_TR(0x6d0c72);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0c73:{NFSU2_TR(0x6d0c73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0c78ull));
TAIL_STATIC(0x69e9bbu,69e);
}
B6d0c78:L6d0c78:{c.instructions+=1;NFSU2_TR(0x6d0c78);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6d0c7b:L6d0c7b:{c.instructions+=1;NFSU2_TR(0x6d0c7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0c7e:L6d0c7e:{c.instructions+=2;NFSU2_TR(0x6d0c7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0c81:{NFSU2_TR(0x6d0c81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0c86ull));
TAIL_STATIC(0x575630u,575);
}
B6d0c86:L6d0c86:{c.instructions+=2;NFSU2_TR(0x6d0c86);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0c89:{NFSU2_TR(0x6d0c89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0c8eull));
TAIL_STATIC(0x575630u,575);
}
B6d0c8e:L6d0c8e:{c.instructions+=2;NFSU2_TR(0x6d0c8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0c91:{NFSU2_TR(0x6d0c91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0c96ull));
TAIL_STATIC(0x575630u,575);
}
B6d0c96:L6d0c96:{c.instructions+=2;NFSU2_TR(0x6d0c96);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0c99:{NFSU2_TR(0x6d0c99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0c9eull));
TAIL_STATIC(0x575630u,575);
}
B6d0c9e:L6d0c9e:{c.instructions+=2;NFSU2_TR(0x6d0c9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0ca1:{NFSU2_TR(0x6d0ca1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0ca6ull));
TAIL_STATIC(0x575630u,575);
}
B6d0ca6:L6d0ca6:{c.instructions+=3;NFSU2_TR(0x6d0ca6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6d0ca9:{NFSU2_TR(0x6d0ca9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0cac:{NFSU2_TR(0x6d0cac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0cb1ull));
TAIL_STATIC(0x6c13d6u,6c1);
}
B6d0cb1:L6d0cb1:{c.instructions+=6;NFSU2_TR(0x6d0cb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0cb4:{NFSU2_TR(0x6d0cb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d0cb5:{NFSU2_TR(0x6d0cb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d0cb6:{NFSU2_TR(0x6d0cb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d0cb7:{NFSU2_TR(0x6d0cb7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d0cb8:{NFSU2_TR(0x6d0cb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d0cb9:L6d0cb9:{c.instructions+=14;NFSU2_TR(0x6d0cb9);
__builtin_memmove((R+28),(R+28),4);
}
B6d0cbb:{NFSU2_TR(0x6d0cbb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0cbc:{NFSU2_TR(0x6d0cbc);
__builtin_memmove((R+20),(R+16),4);
}
B6d0cbe:{NFSU2_TR(0x6d0cbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6d0cc1:{NFSU2_TR(0x6d0cc1);
__builtin_memmove((R+8),(R+4),4);
}
B6d0cc3:{NFSU2_TR(0x6d0cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0cc9:{NFSU2_TR(0x6d0cc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0ccc:{NFSU2_TR(0x6d0ccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0cd2:{NFSU2_TR(0x6d0cd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0cd5:{NFSU2_TR(0x6d0cd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0cdb:{NFSU2_TR(0x6d0cdb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0cdc:{NFSU2_TR(0x6d0cdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0cdf:{NFSU2_TR(0x6d0cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0ce2:{NFSU2_TR(0x6d0ce2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6d0ce4:L6d0ce4:{c.instructions+=3;NFSU2_TR(0x6d0ce4);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6d0ce8:{NFSU2_TR(0x6d0ce8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d0cea:{NFSU2_TR(0x6d0cea);
if(r1(R+518)){{goto L6d0cfd;}}
}
B6d0cec:L6d0cec:{c.instructions+=4;NFSU2_TR(0x6d0cec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0cef:{NFSU2_TR(0x6d0cef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0cf0:{NFSU2_TR(0x6d0cf0);
__builtin_memmove((R+4),(R+8),4);
}
B6d0cf2:{NFSU2_TR(0x6d0cf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0cf7ull));
TAIL_STATIC(0x6cd141u,6cd);
}
B6d0cf7:L6d0cf7:{c.instructions+=2;NFSU2_TR(0x6d0cf7);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B6d0cfb:{NFSU2_TR(0x6d0cfb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d0d03;}}
}
B6d0cfd:L6d0cfd:{c.instructions+=3;NFSU2_TR(0x6d0cfd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6d0cfe:{NFSU2_TR(0x6d0cfe);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d0d01:{NFSU2_TR(0x6d0d01);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d0ce4u);}goto L6d0ce4;}}
}
B6d0d03:L6d0d03:{c.instructions+=3;NFSU2_TR(0x6d0d03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d0d04:{NFSU2_TR(0x6d0d04);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d0d05:{NFSU2_TR(0x6d0d05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d0d08:L6d0d08:{c.instructions+=6;NFSU2_TR(0x6d0d08);
__builtin_memmove((R+28),(R+28),4);
}
B6d0d0a:{NFSU2_TR(0x6d0d0a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0d0b:{NFSU2_TR(0x6d0d0b);
__builtin_memmove((R+20),(R+16),4);
}
B6d0d0d:{NFSU2_TR(0x6d0d0d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0d0e:{NFSU2_TR(0x6d0d0e);
__builtin_memmove((R+24),(R+4),4);
}
B6d0d10:{NFSU2_TR(0x6d0d10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0d15ull));
TAIL_STATIC(0x6cd245u,6cd);
}
B6d0d15:L6d0d15:{c.instructions+=2;NFSU2_TR(0x6d0d15);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B6d0d19:{NFSU2_TR(0x6d0d19);
if(r1(R+518)){{goto L6d0d22;}}
}
B6d0d1b:L6d0d1b:{c.instructions+=2;NFSU2_TR(0x6d0d1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0d1c:{NFSU2_TR(0x6d0d1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0d21ull));
TAIL_STATIC(0x575630u,575);
}
B6d0d21:L6d0d21:{c.instructions+=1;NFSU2_TR(0x6d0d21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0d22:L6d0d22:{c.instructions+=4;NFSU2_TR(0x6d0d22);
__builtin_memmove((R+0),(R+24),4);
}
B6d0d24:{NFSU2_TR(0x6d0d24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d0d25:{NFSU2_TR(0x6d0d25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d0d26:{NFSU2_TR(0x6d0d26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d0d29:L6d0d29:{c.instructions+=25;NFSU2_TR(0x6d0d29);
__builtin_memmove((R+28),(R+28),4);
}
B6d0d2b:{NFSU2_TR(0x6d0d2b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0d2c:{NFSU2_TR(0x6d0d2c);
__builtin_memmove((R+20),(R+16),4);
}
B6d0d2e:{NFSU2_TR(0x6d0d2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B6d0d31:{NFSU2_TR(0x6d0d31);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0d32:{NFSU2_TR(0x6d0d32);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0d33:{NFSU2_TR(0x6d0d33);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6d0d35:{NFSU2_TR(0x6d0d35);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0d36:{NFSU2_TR(0x6d0d36);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0d39:{NFSU2_TR(0x6d0d39);
__builtin_memmove((R+12),(R+4),4);
}
B6d0d3b:{NFSU2_TR(0x6d0d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0d41:{NFSU2_TR(0x6d0d41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0d44:{NFSU2_TR(0x6d0d44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0d47:{NFSU2_TR(0x6d0d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0d4a:{NFSU2_TR(0x6d0d4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0d4d:{NFSU2_TR(0x6d0d4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0d50:{NFSU2_TR(0x6d0d50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0d53:{NFSU2_TR(0x6d0d53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0d56:{NFSU2_TR(0x6d0d56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0d59:{NFSU2_TR(0x6d0d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0d5c:{NFSU2_TR(0x6d0d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0d5f:{NFSU2_TR(0x6d0d5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0d62:{NFSU2_TR(0x6d0d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0d65:{NFSU2_TR(0x6d0d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0d68:{NFSU2_TR(0x6d0d68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0d6dull));
TAIL_STATIC(0x6acbbbu,6ac);
}
B6d0d6d:L6d0d6d:{c.instructions+=3;NFSU2_TR(0x6d0d6d);
__builtin_memmove((R+28),(R+0),4);
}
B6d0d6f:{NFSU2_TR(0x6d0d6f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d0d71:{NFSU2_TR(0x6d0d71);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6d1839u,6d1);}
}
B6d0d77:L6d0d77:{c.instructions+=6;NFSU2_TR(0x6d0d77);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0d79:{NFSU2_TR(0x6d0d79);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0d7b:{NFSU2_TR(0x6d0d7b);
u8 U[4];
w4(U+0,u32(0x40311ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0d80:{NFSU2_TR(0x6d0d80);
u8 U[4];
w4(U+0,u32(0x7b3ac8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0d85:{NFSU2_TR(0x6d0d85);
__builtin_memmove((R+4),(R+12),4);
}
B6d0d87:{NFSU2_TR(0x6d0d87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0d8cull));
TAIL_STATIC(0x699be0u,699);
}
B6d0d8c:L6d0d8c:{c.instructions+=3;NFSU2_TR(0x6d0d8c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d0d8f:{NFSU2_TR(0x6d0d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0d95:{NFSU2_TR(0x6d0d95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d0da1;}}
}
B6d0d97:L6d0d97:{c.instructions+=2;NFSU2_TR(0x6d0d97);
w4(R+28,u32(0x8007000eull));
}
B6d0d9c:{NFSU2_TR(0x6d0d9c);
TAIL_STATIC(0x6d1839u,6d1);
}
B6d0da1:L6d0da1:{c.instructions+=3;NFSU2_TR(0x6d0da1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d0da3:{NFSU2_TR(0x6d0da3);
__builtin_memmove((R+4),(R+12),4);
}
B6d0da5:{NFSU2_TR(0x6d0da5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0dabull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d0dab:L6d0dab:{c.instructions+=2;NFSU2_TR(0x6d0dab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d0dad:{NFSU2_TR(0x6d0dad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6d16e5u,6d1);}
}
B6d0db3:L6d0db3:{c.instructions+=8;NFSU2_TR(0x6d0db3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0db9:{NFSU2_TR(0x6d0db9);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6d0dbb:{NFSU2_TR(0x6d0dbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0dc1:{NFSU2_TR(0x6d0dc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0dc7:{NFSU2_TR(0x6d0dc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0dcd:{NFSU2_TR(0x6d0dcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0dd3:{NFSU2_TR(0x6d0dd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0dd9:{NFSU2_TR(0x6d0dd9);
if(r1(R+518)){{goto L6d0de7;}}
}
B6d0ddb:L6d0ddb:{c.instructions+=3;NFSU2_TR(0x6d0ddb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d0ddd:{NFSU2_TR(0x6d0ddd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0dde:{NFSU2_TR(0x6d0dde);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0de1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d0de1:L6d0de1:{c.instructions+=1;NFSU2_TR(0x6d0de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0de7:L6d0de7:{c.instructions+=2;NFSU2_TR(0x6d0de7);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
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
B6d0dee:{NFSU2_TR(0x6d0dee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d0e3f;}}
}
B6d0df0:L6d0df0:{c.instructions+=3;NFSU2_TR(0x6d0df0);
w4(R+28,u32(0x7b72a4ull));
}
B6d0df5:{NFSU2_TR(0x6d0df5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0df6:{NFSU2_TR(0x6d0df6);
u8 U[4];
__builtin_memmove((U+0),gp(0x783138),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0dfcull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d0dfc:L6d0dfc:{c.instructions+=2;NFSU2_TR(0x6d0dfc);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6d0dfe:{NFSU2_TR(0x6d0dfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d0e0b;}}
}
B6d0e00:L6d0e00:{c.instructions+=2;NFSU2_TR(0x6d0e00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0e01:{NFSU2_TR(0x6d0e01);
u8 U[4];
__builtin_memmove((U+0),gp(0x783198),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0e07ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d0e07:L6d0e07:{c.instructions+=2;NFSU2_TR(0x6d0e07);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6d0e09:{NFSU2_TR(0x6d0e09);
if(r1(R+518)){{goto L6d0e3f;}}
}
B6d0e0b:L6d0e0b:{c.instructions+=3;NFSU2_TR(0x6d0e0b);
u8 U[4];
w4(U+0,u32(0x7ba85cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0e10:{NFSU2_TR(0x6d0e10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0e11:{NFSU2_TR(0x6d0e11);
u8 U[4];
__builtin_memmove((U+0),gp(0x783194),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0e17ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d0e17:L6d0e17:{c.instructions+=2;NFSU2_TR(0x6d0e17);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6d0e19:{NFSU2_TR(0x6d0e19);
if(r1(R+518)){{goto L6d0e3f;}}
}
B6d0e1b:L6d0e1b:{c.instructions+=1;NFSU2_TR(0x6d0e1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0e1dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d0e1d:L6d0e1d:{c.instructions+=3;NFSU2_TR(0x6d0e1d);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6d0e1f:{NFSU2_TR(0x6d0e1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0e25:{NFSU2_TR(0x6d0e25);
if(r1(R+518)){{goto L6d0e3f;}}
}
B6d0e27:L6d0e27:{c.instructions+=6;NFSU2_TR(0x6d0e27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d0e29:{NFSU2_TR(0x6d0e29);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0e2b:{NFSU2_TR(0x6d0e2b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0e2c:{NFSU2_TR(0x6d0e2c);
u8 U[4];
w4(U+0,u32(0x6ccd8bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0e31:{NFSU2_TR(0x6d0e31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0e32:{NFSU2_TR(0x6d0e32);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0e35ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d0e35:L6d0e35:{c.instructions+=3;NFSU2_TR(0x6d0e35);
__builtin_memmove((R+28),(R+0),4);
}
B6d0e37:{NFSU2_TR(0x6d0e37);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d0e39:{NFSU2_TR(0x6d0e39);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6d1839u,6d1);}
}
B6d0e3f:L6d0e3f:{c.instructions+=2;NFSU2_TR(0x6d0e3f);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6d0e46:{NFSU2_TR(0x6d0e46);
if(r1(R+518)){{goto L6d0e77;}}
}
B6d0e48:L6d0e48:{c.instructions+=5;NFSU2_TR(0x6d0e48);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0e4b:{NFSU2_TR(0x6d0e4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d0e4e:{NFSU2_TR(0x6d0e4e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d0e51:{NFSU2_TR(0x6d0e51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0e52:{NFSU2_TR(0x6d0e52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0e57ull));
TAIL_STATIC(0x575620u,575);
}
B6d0e57:L6d0e57:{c.instructions+=4;NFSU2_TR(0x6d0e57);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d0e59:{NFSU2_TR(0x6d0e59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d0e5a:{NFSU2_TR(0x6d0e5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0e60:{NFSU2_TR(0x6d0e60);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d0d97u);}goto L6d0d97;}}
}
B6d0e66:L6d0e66:{c.instructions+=4;NFSU2_TR(0x6d0e66);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0e69:{NFSU2_TR(0x6d0e69);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B6d0e6b:{NFSU2_TR(0x6d0e6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0e71:{NFSU2_TR(0x6d0e71);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0e77:L6d0e77:{c.instructions+=5;NFSU2_TR(0x6d0e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d0e7e:{NFSU2_TR(0x6d0e7e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d0e80:{NFSU2_TR(0x6d0e80);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d0e83:{NFSU2_TR(0x6d0e83);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0e89:{NFSU2_TR(0x6d0e89);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d0e9a;}}
}
B6d0e8b:L6d0e8b:{c.instructions+=6;NFSU2_TR(0x6d0e8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0e8e:{NFSU2_TR(0x6d0e8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d0e91:{NFSU2_TR(0x6d0e91);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d0e92:{NFSU2_TR(0x6d0e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0e95:{NFSU2_TR(0x6d0e95);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d0e98:{NFSU2_TR(0x6d0e98);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d0e8bu);}goto L6d0e8b;}}
}
B6d0e9a:L6d0e9a:{c.instructions+=4;NFSU2_TR(0x6d0e9a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d0e9d:{NFSU2_TR(0x6d0e9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0ea0:{NFSU2_TR(0x6d0ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0ea3:{NFSU2_TR(0x6d0ea3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d0ee6;}}
}
B6d0ea5:L6d0ea5:{c.instructions+=9;NFSU2_TR(0x6d0ea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0ea8:{NFSU2_TR(0x6d0ea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0eab:{NFSU2_TR(0x6d0eab);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d0eae:{NFSU2_TR(0x6d0eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0eb1:{NFSU2_TR(0x6d0eb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d0eb4:{NFSU2_TR(0x6d0eb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d0eb7:{NFSU2_TR(0x6d0eb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0eba:{NFSU2_TR(0x6d0eba);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d0ebd:{NFSU2_TR(0x6d0ebd);
if(r1(R+518)){{goto L6d0ec4;}}
}
B6d0ebf:L6d0ebf:{c.instructions+=2;NFSU2_TR(0x6d0ebf);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+5))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6d0ec2:{NFSU2_TR(0x6d0ec2);
if(r1(R+518)){{goto L6d0ec9;}}
}
B6d0ec4:L6d0ec4:{c.instructions+=2;NFSU2_TR(0x6d0ec4);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6d0ec7:{NFSU2_TR(0x6d0ec7);
if(r1(R+518)){{goto L6d0ed2;}}
}
B6d0ec9:L6d0ec9:{c.instructions+=5;NFSU2_TR(0x6d0ec9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d0ecb:{NFSU2_TR(0x6d0ecb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0ecc:{NFSU2_TR(0x6d0ecc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0ecd:{NFSU2_TR(0x6d0ecd);
__builtin_memmove((R+4),(R+12),4);
}
B6d0ecf:{NFSU2_TR(0x6d0ecf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0ed2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d0ed2:L6d0ed2:{c.instructions+=2;NFSU2_TR(0x6d0ed2);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6d0ed6:{NFSU2_TR(0x6d0ed6);
if(r1(R+518)){{goto L6d0edb;}}
}
B6d0ed8:L6d0ed8:{c.instructions+=1;NFSU2_TR(0x6d0ed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d0edb:L6d0edb:{c.instructions+=4;NFSU2_TR(0x6d0edb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d0ede:{NFSU2_TR(0x6d0ede);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0ee1:{NFSU2_TR(0x6d0ee1);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d0ee4:{NFSU2_TR(0x6d0ee4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d0ea5u);}goto L6d0ea5;}}
}
B6d0ee6:L6d0ee6:{c.instructions+=3;NFSU2_TR(0x6d0ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0ee9:{NFSU2_TR(0x6d0ee9);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d0eec:{NFSU2_TR(0x6d0eec);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d0f46;}}
}
B6d0eee:L6d0eee:{c.instructions+=5;NFSU2_TR(0x6d0eee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d0ef1:{NFSU2_TR(0x6d0ef1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0ef2:{NFSU2_TR(0x6d0ef2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0ef3:{NFSU2_TR(0x6d0ef3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0ef9:{NFSU2_TR(0x6d0ef9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0efeull));
TAIL_STATIC(0x672315u,672);
}
B6d0efe:L6d0efe:{c.instructions+=2;NFSU2_TR(0x6d0efe);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d0f00:{NFSU2_TR(0x6d0f00);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6d16e5u,6d1);}
}
B6d0f06:L6d0f06:{c.instructions+=3;NFSU2_TR(0x6d0f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0f09:{NFSU2_TR(0x6d0f09);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d0f0b:{NFSU2_TR(0x6d0f0b);
if(r1(R+518)){{goto L6d0f2a;}}
}
B6d0f0d:L6d0f0d:{c.instructions+=7;NFSU2_TR(0x6d0f0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0f0e:{NFSU2_TR(0x6d0f0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0f11:{NFSU2_TR(0x6d0f11);
u8 U[4];
w4(U+0,u32(0x7bf880ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0f16:{NFSU2_TR(0x6d0f16);
u8 U[4];
w4(U+0,u32(0x119eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0f1b:{NFSU2_TR(0x6d0f1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0f1c:{NFSU2_TR(0x6d0f1c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0f1d:{NFSU2_TR(0x6d0f1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0f22ull));
TAIL_STATIC(0x69e936u,69e);
}
B6d0f22:L6d0f22:{c.instructions+=2;NFSU2_TR(0x6d0f22);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6d0f25:{NFSU2_TR(0x6d0f25);
TAIL_STATIC(0x6d16e5u,6d1);
}
B6d0f2a:L6d0f2a:{c.instructions+=6;NFSU2_TR(0x6d0f2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0f2d:{NFSU2_TR(0x6d0f2d);
u8 U[4];
w4(U+0,u32(0x7bf850ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0f32:{NFSU2_TR(0x6d0f32);
u8 U[4];
w4(U+0,u32(0x11c1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0f37:{NFSU2_TR(0x6d0f37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0f38:{NFSU2_TR(0x6d0f38);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0f39:{NFSU2_TR(0x6d0f39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0f3eull));
TAIL_STATIC(0x69e936u,69e);
}
B6d0f3e:L6d0f3e:{c.instructions+=2;NFSU2_TR(0x6d0f3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6d0f41:{NFSU2_TR(0x6d0f41);
TAIL_STATIC(0x6d16e5u,6d1);
}
B6d0f46:L6d0f46:{c.instructions+=5;NFSU2_TR(0x6d0f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0f4c:{NFSU2_TR(0x6d0f4c);
w4(R+0,u32(0xffff0000ull));
}
B6d0f51:{NFSU2_TR(0x6d0f51);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B6d0f53:{NFSU2_TR(0x6d0f53);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffe0000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d0f59:{NFSU2_TR(0x6d0f59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d0f83;}}
}
B6d0f5b:L6d0f5b:{c.instructions+=7;NFSU2_TR(0x6d0f5b);
u8 U[4];
w4(U+0,u32(0x76ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0f5d:{NFSU2_TR(0x6d0f5d);
u8 U[4];
w4(U+0,u32(0x204ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0f62:{NFSU2_TR(0x6d0f62);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0f64:{NFSU2_TR(0x6d0f64);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0f67:{NFSU2_TR(0x6d0f67);
__builtin_memmove((R+4),(R+12),4);
}
B6d0f69:{NFSU2_TR(0x6d0f69);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0f6f:{NFSU2_TR(0x6d0f6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0f74ull));
TAIL_STATIC(0x6c2350u,6c2);
}
B6d0f74:L6d0f74:{c.instructions+=3;NFSU2_TR(0x6d0f74);
__builtin_memmove((R+28),(R+0),4);
}
B6d0f76:{NFSU2_TR(0x6d0f76);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d0f78:{NFSU2_TR(0x6d0f78);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6d1839u,6d1);}
}
B6d0f7e:L6d0f7e:{c.instructions+=1;NFSU2_TR(0x6d0f7e);
w4(R+0,u32(0xffff0000ull));
}
B6d0f83:L6d0f83:{c.instructions+=4;NFSU2_TR(0x6d0f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0f89:{NFSU2_TR(0x6d0f89);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B6d0f8b:{NFSU2_TR(0x6d0f8b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d0f8d:{NFSU2_TR(0x6d0f8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d0fad;}}
}
B6d0f8f:L6d0f8f:{c.instructions+=7;NFSU2_TR(0x6d0f8f);
u8 U[4];
w4(U+0,u32(0x73ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0f91:{NFSU2_TR(0x6d0f91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0f92:{NFSU2_TR(0x6d0f92);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0f97:{NFSU2_TR(0x6d0f97);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d0f9a:{NFSU2_TR(0x6d0f9a);
__builtin_memmove((R+4),(R+12),4);
}
B6d0f9c:{NFSU2_TR(0x6d0f9c);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d0f9e:{NFSU2_TR(0x6d0f9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d0fa3ull));
TAIL_STATIC(0x6c2350u,6c2);
}
B6d0fa3:L6d0fa3:{c.instructions+=3;NFSU2_TR(0x6d0fa3);
__builtin_memmove((R+28),(R+0),4);
}
B6d0fa5:{NFSU2_TR(0x6d0fa5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d0fa7:{NFSU2_TR(0x6d0fa7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6d1839u,6d1);}
}
B6d0fad:L6d0fad:{c.instructions+=2;NFSU2_TR(0x6d0fad);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d0fb0:{NFSU2_TR(0x6d0fb0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6d1022u,6d1);}
}
B6d0fb2:L6d0fb2:{c.instructions+=7;NFSU2_TR(0x6d0fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d0fb5:{NFSU2_TR(0x6d0fb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d0fb8:{NFSU2_TR(0x6d0fb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0fbb:{NFSU2_TR(0x6d0fbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d0fbd:{NFSU2_TR(0x6d0fbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d0fc0:{NFSU2_TR(0x6d0fc0);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d0fc6:{NFSU2_TR(0x6d0fc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d0fd6;}}
}
B6d0fc8:L6d0fc8:{c.instructions+=4;NFSU2_TR(0x6d0fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d0fcb:{NFSU2_TR(0x6d0fcb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6d0fcc:{NFSU2_TR(0x6d0fcc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d0fcf:{NFSU2_TR(0x6d0fcf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d0fd6;}}
}
B6d0fd1:L6d0fd1:{c.instructions+=2;NFSU2_TR(0x6d0fd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0fd4:{NFSU2_TR(0x6d0fd4);
TAIL_STATIC(0x6d101au,6d1);
}
B6d0fd6:L6d0fd6:{c.instructions+=2;NFSU2_TR(0x6d0fd6);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d0fdc:{NFSU2_TR(0x6d0fdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d0fec;}}
}
B6d0fde:L6d0fde:{c.instructions+=4;NFSU2_TR(0x6d0fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d0fe1:{NFSU2_TR(0x6d0fe1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6d0fe2:{NFSU2_TR(0x6d0fe2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d0fe5:{NFSU2_TR(0x6d0fe5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d0fec;}}
}
B6d0fe7:L6d0fe7:{c.instructions+=2;NFSU2_TR(0x6d0fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d0fea:{NFSU2_TR(0x6d0fea);
TAIL_STATIC(0x6d101au,6d1);
}
B6d0fec:L6d0fec:{c.instructions+=2;NFSU2_TR(0x6d0fec);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d0ff2:{NFSU2_TR(0x6d0ff2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6d1002u,6d1);}
}
B6d0ff4:L6d0ff4:{c.instructions+=4;NFSU2_TR(0x6d0ff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d0ff7:{NFSU2_TR(0x6d0ff7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6d0ff8:{NFSU2_TR(0x6d0ff8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d0ffb:{NFSU2_TR(0x6d0ffb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6d1002u,6d1);}
}
B6d0ffd:L6d0ffd:{c.instructions+=1;NFSU2_TR(0x6d0ffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x6d1000u,6d1);
}
XIT:NFSU2_TR_EXIT(0x6d0,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
