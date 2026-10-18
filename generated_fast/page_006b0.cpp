#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6af(u8* __restrict R,Cpu& c);
u32 body_6b1(u8* __restrict R,Cpu& c);
u32 body_6cb(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6b0,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6b0,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6b0(u8* __restrict R,Cpu& c);
u32 page_6b0(Cpu& c){return body_6b0(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6b0(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6b0001:goto L6b0001;
case 0x6b0006:c.instructions+=1;goto B6b0006;
case 0x6b0008:goto L6b0008;
case 0x6b000a:c.instructions+=3;goto B6b000a;
case 0x6b000d:c.instructions+=2;goto B6b000d;
case 0x6b0010:c.instructions+=1;goto B6b0010;
case 0x6b0012:goto L6b0012;
case 0x6b0015:c.instructions+=4;goto B6b0015;
case 0x6b0018:c.instructions+=3;goto B6b0018;
case 0x6b001a:c.instructions+=2;goto B6b001a;
case 0x6b001d:c.instructions+=1;goto B6b001d;
case 0x6b001f:goto L6b001f;
case 0x6b0022:c.instructions+=3;goto B6b0022;
case 0x6b0024:c.instructions+=2;goto B6b0024;
case 0x6b0027:c.instructions+=1;goto B6b0027;
case 0x6b0029:goto L6b0029;
case 0x6b002c:c.instructions+=6;goto B6b002c;
case 0x6b002e:c.instructions+=5;goto B6b002e;
case 0x6b0031:c.instructions+=4;goto B6b0031;
case 0x6b0034:c.instructions+=3;goto B6b0034;
case 0x6b0037:c.instructions+=2;goto B6b0037;
case 0x6b003d:c.instructions+=1;goto B6b003d;
case 0x6b003f:goto L6b003f;
case 0x6b0043:c.instructions+=2;goto B6b0043;
case 0x6b0045:c.instructions+=1;goto B6b0045;
case 0x6b0047:goto L6b0047;
case 0x6b0049:goto L6b0049;
case 0x6b004c:goto L6b004c;
case 0x6b004e:c.instructions+=1;goto B6b004e;
case 0x6b0050:goto L6b0050;
case 0x6b0053:goto L6b0053;
case 0x6b0056:c.instructions+=6;goto B6b0056;
case 0x6b0059:c.instructions+=5;goto B6b0059;
case 0x6b005c:c.instructions+=4;goto B6b005c;
case 0x6b005f:c.instructions+=3;goto B6b005f;
case 0x6b0061:c.instructions+=2;goto B6b0061;
case 0x6b0064:c.instructions+=1;goto B6b0064;
case 0x6b0066:goto L6b0066;
case 0x6b0069:c.instructions+=2;goto B6b0069;
case 0x6b006c:c.instructions+=1;goto B6b006c;
case 0x6b006e:goto L6b006e;
case 0x6b0071:c.instructions+=2;goto B6b0071;
case 0x6b0074:c.instructions+=1;goto B6b0074;
case 0x6b0076:goto L6b0076;
case 0x6b0079:c.instructions+=3;goto B6b0079;
case 0x6b007c:c.instructions+=2;goto B6b007c;
case 0x6b007f:c.instructions+=1;goto B6b007f;
case 0x6b0081:goto L6b0081;
case 0x6b0084:c.instructions+=4;goto B6b0084;
case 0x6b0085:c.instructions+=3;goto B6b0085;
case 0x6b0088:c.instructions+=2;goto B6b0088;
case 0x6b008b:c.instructions+=1;goto B6b008b;
case 0x6b008d:goto L6b008d;
case 0x6b008f:c.instructions+=5;goto B6b008f;
case 0x6b0090:c.instructions+=4;goto B6b0090;
case 0x6b0091:c.instructions+=3;goto B6b0091;
case 0x6b0092:c.instructions+=2;goto B6b0092;
case 0x6b0093:c.instructions+=1;goto B6b0093;
case 0x6b0094:goto L6b0094;
case 0x6b0096:c.instructions+=9;goto B6b0096;
case 0x6b0097:c.instructions+=8;goto B6b0097;
case 0x6b0099:c.instructions+=7;goto B6b0099;
case 0x6b009a:c.instructions+=6;goto B6b009a;
case 0x6b009e:c.instructions+=5;goto B6b009e;
case 0x6b00a2:c.instructions+=4;goto B6b00a2;
case 0x6b00a3:c.instructions+=3;goto B6b00a3;
case 0x6b00a4:c.instructions+=2;goto B6b00a4;
case 0x6b00a5:c.instructions+=1;goto B6b00a5;
case 0x6b00a7:goto L6b00a7;
case 0x6b00aa:c.instructions+=2;goto B6b00aa;
case 0x6b00ad:c.instructions+=1;goto B6b00ad;
case 0x6b00b2:goto L6b00b2;
case 0x6b00b5:c.instructions+=4;goto B6b00b5;
case 0x6b00b7:c.instructions+=3;goto B6b00b7;
case 0x6b00b9:c.instructions+=2;goto B6b00b9;
case 0x6b00ba:c.instructions+=1;goto B6b00ba;
case 0x6b00bb:goto L6b00bb;
case 0x6b00be:c.instructions+=2;goto B6b00be;
case 0x6b00c0:c.instructions+=1;goto B6b00c0;
case 0x6b00c2:goto L6b00c2;
case 0x6b00c5:c.instructions+=1;goto B6b00c5;
case 0x6b00c7:goto L6b00c7;
case 0x6b00c9:goto L6b00c9;
case 0x6b00cc:c.instructions+=3;goto B6b00cc;
case 0x6b00cf:c.instructions+=2;goto B6b00cf;
case 0x6b00d0:c.instructions+=1;goto B6b00d0;
case 0x6b00d2:goto L6b00d2;
case 0x6b00d4:c.instructions+=1;goto B6b00d4;
case 0x6b00d6:goto L6b00d6;
case 0x6b00d9:c.instructions+=3;goto B6b00d9;
case 0x6b00dc:c.instructions+=2;goto B6b00dc;
case 0x6b00df:c.instructions+=1;goto B6b00df;
case 0x6b00e1:goto L6b00e1;
case 0x6b00e3:goto L6b00e3;
case 0x6b00e4:c.instructions+=4;goto B6b00e4;
case 0x6b00e5:c.instructions+=3;goto B6b00e5;
case 0x6b00e6:c.instructions+=2;goto B6b00e6;
case 0x6b00e7:c.instructions+=1;goto B6b00e7;
case 0x6b00ea:goto L6b00ea;
case 0x6b00ec:c.instructions+=2;goto B6b00ec;
case 0x6b00ed:c.instructions+=1;goto B6b00ed;
case 0x6b00ef:goto L6b00ef;
case 0x6b00f1:c.instructions+=20;goto B6b00f1;
case 0x6b00f2:c.instructions+=19;goto B6b00f2;
case 0x6b00f4:c.instructions+=18;goto B6b00f4;
case 0x6b00f7:c.instructions+=17;goto B6b00f7;
case 0x6b00fb:c.instructions+=16;goto B6b00fb;
case 0x6b00fc:c.instructions+=15;goto B6b00fc;
case 0x6b00fe:c.instructions+=14;goto B6b00fe;
case 0x6b00ff:c.instructions+=13;goto B6b00ff;
case 0x6b0100:c.instructions+=12;goto B6b0100;
case 0x6b0103:c.instructions+=11;goto B6b0103;
case 0x6b0104:c.instructions+=10;goto B6b0104;
case 0x6b0105:c.instructions+=9;goto B6b0105;
case 0x6b0106:c.instructions+=8;goto B6b0106;
case 0x6b0107:c.instructions+=7;goto B6b0107;
case 0x6b010a:c.instructions+=6;goto B6b010a;
case 0x6b010d:c.instructions+=5;goto B6b010d;
case 0x6b010f:c.instructions+=4;goto B6b010f;
case 0x6b0111:c.instructions+=3;goto B6b0111;
case 0x6b0112:c.instructions+=2;goto B6b0112;
case 0x6b0114:c.instructions+=1;goto B6b0114;
case 0x6b0116:goto L6b0116;
case 0x6b0119:c.instructions+=1;goto B6b0119;
case 0x6b011c:goto L6b011c;
case 0x6b011e:c.instructions+=4;goto B6b011e;
case 0x6b0121:c.instructions+=3;goto B6b0121;
case 0x6b0124:c.instructions+=2;goto B6b0124;
case 0x6b0127:c.instructions+=1;goto B6b0127;
case 0x6b0129:goto L6b0129;
case 0x6b012a:c.instructions+=4;goto B6b012a;
case 0x6b012d:c.instructions+=3;goto B6b012d;
case 0x6b012f:c.instructions+=2;goto B6b012f;
case 0x6b0133:c.instructions+=1;goto B6b0133;
case 0x6b0135:goto L6b0135;
case 0x6b0137:c.instructions+=2;goto B6b0137;
case 0x6b0139:c.instructions+=1;goto B6b0139;
case 0x6b013b:goto L6b013b;
case 0x6b0140:c.instructions+=1;goto B6b0140;
case 0x6b0142:goto L6b0142;
case 0x6b0144:c.instructions+=1;goto B6b0144;
case 0x6b0146:goto L6b0146;
case 0x6b0148:c.instructions+=1;goto B6b0148;
case 0x6b014a:goto L6b014a;
case 0x6b014c:goto L6b014c;
case 0x6b014d:c.instructions+=2;goto B6b014d;
case 0x6b0150:c.instructions+=1;goto B6b0150;
case 0x6b0152:goto L6b0152;
case 0x6b0154:c.instructions+=1;goto B6b0154;
case 0x6b0156:goto L6b0156;
case 0x6b0158:c.instructions+=1;goto B6b0158;
case 0x6b015a:goto L6b015a;
case 0x6b015d:goto L6b015d;
case 0x6b0160:goto L6b0160;
case 0x6b0161:c.instructions+=4;goto B6b0161;
case 0x6b0162:c.instructions+=3;goto B6b0162;
case 0x6b0163:c.instructions+=2;goto B6b0163;
case 0x6b0164:c.instructions+=1;goto B6b0164;
case 0x6b0167:goto L6b0167;
case 0x6b0169:c.instructions+=14;goto B6b0169;
case 0x6b016a:c.instructions+=13;goto B6b016a;
case 0x6b016c:c.instructions+=12;goto B6b016c;
case 0x6b0172:c.instructions+=11;goto B6b0172;
case 0x6b0176:c.instructions+=10;goto B6b0176;
case 0x6b017a:c.instructions+=9;goto B6b017a;
case 0x6b017b:c.instructions+=8;goto B6b017b;
case 0x6b017d:c.instructions+=7;goto B6b017d;
case 0x6b0183:c.instructions+=6;goto B6b0183;
case 0x6b0186:c.instructions+=5;goto B6b0186;
case 0x6b0187:c.instructions+=4;goto B6b0187;
case 0x6b0188:c.instructions+=3;goto B6b0188;
case 0x6b018b:c.instructions+=2;goto B6b018b;
case 0x6b018d:c.instructions+=1;goto B6b018d;
case 0x6b0192:goto L6b0192;
case 0x6b0198:c.instructions+=4;goto B6b0198;
case 0x6b019b:c.instructions+=3;goto B6b019b;
case 0x6b019d:c.instructions+=2;goto B6b019d;
case 0x6b01a0:c.instructions+=1;goto B6b01a0;
case 0x6b01a6:goto L6b01a6;
case 0x6b01a8:c.instructions+=2;goto B6b01a8;
case 0x6b01aa:c.instructions+=1;goto B6b01aa;
case 0x6b01b0:goto L6b01b0;
case 0x6b01b5:c.instructions+=8;goto B6b01b5;
case 0x6b01b8:c.instructions+=7;goto B6b01b8;
case 0x6b01bb:c.instructions+=6;goto B6b01bb;
case 0x6b01bd:c.instructions+=5;goto B6b01bd;
case 0x6b01c0:c.instructions+=4;goto B6b01c0;
case 0x6b01c4:c.instructions+=3;goto B6b01c4;
case 0x6b01c6:c.instructions+=2;goto B6b01c6;
case 0x6b01c9:c.instructions+=1;goto B6b01c9;
case 0x6b01cf:goto L6b01cf;
case 0x6b01d3:c.instructions+=2;goto B6b01d3;
case 0x6b01d9:c.instructions+=1;goto B6b01d9;
case 0x6b01dc:goto L6b01dc;
case 0x6b01df:c.instructions+=16;goto B6b01df;
case 0x6b01e2:c.instructions+=15;goto B6b01e2;
case 0x6b01e3:c.instructions+=14;goto B6b01e3;
case 0x6b01e4:c.instructions+=13;goto B6b01e4;
case 0x6b01e5:c.instructions+=12;goto B6b01e5;
case 0x6b01e6:c.instructions+=11;goto B6b01e6;
case 0x6b01e9:c.instructions+=10;goto B6b01e9;
case 0x6b01ef:c.instructions+=9;goto B6b01ef;
case 0x6b01f0:c.instructions+=8;goto B6b01f0;
case 0x6b01f1:c.instructions+=7;goto B6b01f1;
case 0x6b01f3:c.instructions+=6;goto B6b01f3;
case 0x6b01f6:c.instructions+=5;goto B6b01f6;
case 0x6b01f7:c.instructions+=4;goto B6b01f7;
case 0x6b01f8:c.instructions+=3;goto B6b01f8;
case 0x6b01fb:c.instructions+=2;goto B6b01fb;
case 0x6b01fe:c.instructions+=1;goto B6b01fe;
case 0x6b0204:goto L6b0204;
case 0x6b0206:c.instructions+=4;goto B6b0206;
case 0x6b020b:c.instructions+=3;goto B6b020b;
case 0x6b020e:c.instructions+=2;goto B6b020e;
case 0x6b0211:c.instructions+=1;goto B6b0211;
case 0x6b0214:goto L6b0214;
case 0x6b021b:c.instructions+=5;goto B6b021b;
case 0x6b021d:c.instructions+=4;goto B6b021d;
case 0x6b0220:c.instructions+=3;goto B6b0220;
case 0x6b0223:c.instructions+=2;goto B6b0223;
case 0x6b0226:c.instructions+=1;goto B6b0226;
case 0x6b0228:goto L6b0228;
case 0x6b022b:c.instructions+=2;goto B6b022b;
case 0x6b022e:c.instructions+=1;goto B6b022e;
case 0x6b0230:goto L6b0230;
case 0x6b0233:c.instructions+=3;goto B6b0233;
case 0x6b0236:c.instructions+=2;goto B6b0236;
case 0x6b0239:c.instructions+=1;goto B6b0239;
case 0x6b023c:goto L6b023c;
case 0x6b023f:c.instructions+=7;goto B6b023f;
case 0x6b0242:c.instructions+=6;goto B6b0242;
case 0x6b0245:c.instructions+=5;goto B6b0245;
case 0x6b0248:c.instructions+=4;goto B6b0248;
case 0x6b024c:c.instructions+=3;goto B6b024c;
case 0x6b024f:c.instructions+=2;goto B6b024f;
case 0x6b0252:c.instructions+=1;goto B6b0252;
case 0x6b0254:goto L6b0254;
case 0x6b025b:c.instructions+=1;goto B6b025b;
case 0x6b025d:goto L6b025d;
case 0x6b0260:c.instructions+=2;goto B6b0260;
case 0x6b0263:c.instructions+=1;goto B6b0263;
case 0x6b026a:goto L6b026a;
case 0x6b026d:c.instructions+=1;goto B6b026d;
case 0x6b026f:goto L6b026f;
case 0x6b0276:goto L6b0276;
case 0x6b027e:c.instructions+=6;goto B6b027e;
case 0x6b0281:c.instructions+=5;goto B6b0281;
case 0x6b0282:c.instructions+=4;goto B6b0282;
case 0x6b0285:c.instructions+=3;goto B6b0285;
case 0x6b0288:c.instructions+=2;goto B6b0288;
case 0x6b028b:c.instructions+=1;goto B6b028b;
case 0x6b028d:goto L6b028d;
case 0x6b0291:c.instructions+=1;goto B6b0291;
case 0x6b0293:goto L6b0293;
case 0x6b0295:c.instructions+=3;goto B6b0295;
case 0x6b0296:c.instructions+=2;goto B6b0296;
case 0x6b0299:c.instructions+=1;goto B6b0299;
case 0x6b029b:goto L6b029b;
case 0x6b02a2:c.instructions+=1;goto B6b02a2;
case 0x6b02a4:goto L6b02a4;
case 0x6b02a7:c.instructions+=1;goto B6b02a7;
case 0x6b02a9:goto L6b02a9;
case 0x6b02ac:c.instructions+=1;goto B6b02ac;
case 0x6b02ae:goto L6b02ae;
case 0x6b02b0:c.instructions+=2;goto B6b02b0;
case 0x6b02b6:c.instructions+=1;goto B6b02b6;
case 0x6b02b8:goto L6b02b8;
case 0x6b02c0:c.instructions+=1;goto B6b02c0;
case 0x6b02c2:goto L6b02c2;
case 0x6b02c4:goto L6b02c4;
case 0x6b02c7:c.instructions+=3;goto B6b02c7;
case 0x6b02ca:c.instructions+=2;goto B6b02ca;
case 0x6b02cd:c.instructions+=1;goto B6b02cd;
case 0x6b02cf:goto L6b02cf;
case 0x6b02d1:c.instructions+=1;goto B6b02d1;
case 0x6b02d7:goto L6b02d7;
case 0x6b02d9:c.instructions+=4;goto B6b02d9;
case 0x6b02df:c.instructions+=3;goto B6b02df;
case 0x6b02e0:c.instructions+=2;goto B6b02e0;
case 0x6b02e3:c.instructions+=1;goto B6b02e3;
case 0x6b02e8:goto L6b02e8;
case 0x6b02ea:c.instructions+=1;goto B6b02ea;
case 0x6b02f0:goto L6b02f0;
case 0x6b02f2:goto L6b02f2;
case 0x6b02f3:c.instructions+=8;goto B6b02f3;
case 0x6b02f5:c.instructions+=7;goto B6b02f5;
case 0x6b02f6:c.instructions+=6;goto B6b02f6;
case 0x6b02f9:c.instructions+=5;goto B6b02f9;
case 0x6b02fb:c.instructions+=4;goto B6b02fb;
case 0x6b02fd:c.instructions+=3;goto B6b02fd;
case 0x6b0303:c.instructions+=2;goto B6b0303;
case 0x6b0305:c.instructions+=1;goto B6b0305;
case 0x6b030a:goto L6b030a;
case 0x6b030d:c.instructions+=2;goto B6b030d;
case 0x6b0311:c.instructions+=1;goto B6b0311;
case 0x6b0317:goto L6b0317;
case 0x6b0318:c.instructions+=2;goto B6b0318;
case 0x6b031b:c.instructions+=1;goto B6b031b;
case 0x6b031d:goto L6b031d;
case 0x6b031f:c.instructions+=1;goto B6b031f;
case 0x6b0324:goto L6b0324;
case 0x6b0326:c.instructions+=2;goto B6b0326;
case 0x6b0328:c.instructions+=1;goto B6b0328;
case 0x6b032a:goto L6b032a;
case 0x6b032c:c.instructions+=1;goto B6b032c;
case 0x6b0331:goto L6b0331;
case 0x6b0334:c.instructions+=1;goto B6b0334;
case 0x6b0336:goto L6b0336;
case 0x6b0339:goto L6b0339;
case 0x6b033c:c.instructions+=1;goto B6b033c;
case 0x6b0342:goto L6b0342;
case 0x6b0345:c.instructions+=5;goto B6b0345;
case 0x6b0346:c.instructions+=4;goto B6b0346;
case 0x6b0348:c.instructions+=3;goto B6b0348;
case 0x6b034a:c.instructions+=2;goto B6b034a;
case 0x6b034f:c.instructions+=1;goto B6b034f;
case 0x6b0354:goto L6b0354;
case 0x6b0356:c.instructions+=2;goto B6b0356;
case 0x6b0358:c.instructions+=1;goto B6b0358;
case 0x6b035e:goto L6b035e;
case 0x6b0361:c.instructions+=2;goto B6b0361;
case 0x6b0362:c.instructions+=1;goto B6b0362;
case 0x6b0367:goto L6b0367;
case 0x6b0369:c.instructions+=2;goto B6b0369;
case 0x6b036b:c.instructions+=1;goto B6b036b;
case 0x6b0371:goto L6b0371;
case 0x6b0374:c.instructions+=9;goto B6b0374;
case 0x6b0377:c.instructions+=8;goto B6b0377;
case 0x6b037a:c.instructions+=7;goto B6b037a;
case 0x6b037d:c.instructions+=6;goto B6b037d;
case 0x6b0380:c.instructions+=5;goto B6b0380;
case 0x6b0383:c.instructions+=4;goto B6b0383;
case 0x6b0386:c.instructions+=3;goto B6b0386;
case 0x6b0388:c.instructions+=2;goto B6b0388;
case 0x6b038b:c.instructions+=1;goto B6b038b;
case 0x6b038d:goto L6b038d;
case 0x6b0390:goto L6b0390;
case 0x6b0393:c.instructions+=1;goto B6b0393;
case 0x6b0395:goto L6b0395;
case 0x6b039b:c.instructions+=1;goto B6b039b;
case 0x6b039d:goto L6b039d;
case 0x6b03a3:goto L6b03a3;
case 0x6b03a6:c.instructions+=9;goto B6b03a6;
case 0x6b03a7:c.instructions+=8;goto B6b03a7;
case 0x6b03a8:c.instructions+=7;goto B6b03a8;
case 0x6b03ab:c.instructions+=6;goto B6b03ab;
case 0x6b03ac:c.instructions+=5;goto B6b03ac;
case 0x6b03ae:c.instructions+=4;goto B6b03ae;
case 0x6b03b1:c.instructions+=3;goto B6b03b1;
case 0x6b03b5:c.instructions+=2;goto B6b03b5;
case 0x6b03b7:c.instructions+=1;goto B6b03b7;
case 0x6b03bc:goto L6b03bc;
case 0x6b03bf:c.instructions+=3;goto B6b03bf;
case 0x6b03c2:c.instructions+=2;goto B6b03c2;
case 0x6b03c6:c.instructions+=1;goto B6b03c6;
case 0x6b03cc:goto L6b03cc;
case 0x6b03cf:c.instructions+=5;goto B6b03cf;
case 0x6b03d2:c.instructions+=4;goto B6b03d2;
case 0x6b03d3:c.instructions+=3;goto B6b03d3;
case 0x6b03d5:c.instructions+=2;goto B6b03d5;
case 0x6b03d8:c.instructions+=1;goto B6b03d8;
case 0x6b03dd:goto L6b03dd;
case 0x6b03e0:c.instructions+=7;goto B6b03e0;
case 0x6b03e3:c.instructions+=6;goto B6b03e3;
case 0x6b03e6:c.instructions+=5;goto B6b03e6;
case 0x6b03e9:c.instructions+=4;goto B6b03e9;
case 0x6b03ec:c.instructions+=3;goto B6b03ec;
case 0x6b03ef:c.instructions+=2;goto B6b03ef;
case 0x6b03f2:c.instructions+=1;goto B6b03f2;
case 0x6b03f4:goto L6b03f4;
case 0x6b03f7:c.instructions+=2;goto B6b03f7;
case 0x6b03fa:c.instructions+=1;goto B6b03fa;
case 0x6b03fc:goto L6b03fc;
case 0x6b03ff:c.instructions+=1;goto B6b03ff;
case 0x6b0402:goto L6b0402;
case 0x6b0405:c.instructions+=2;goto B6b0405;
case 0x6b0409:c.instructions+=1;goto B6b0409;
case 0x6b040b:goto L6b040b;
case 0x6b040e:c.instructions+=17;goto B6b040e;
case 0x6b0411:c.instructions+=16;goto B6b0411;
case 0x6b0414:c.instructions+=15;goto B6b0414;
case 0x6b0417:c.instructions+=14;goto B6b0417;
case 0x6b0418:c.instructions+=13;goto B6b0418;
case 0x6b0419:c.instructions+=12;goto B6b0419;
case 0x6b041a:c.instructions+=11;goto B6b041a;
case 0x6b041d:c.instructions+=10;goto B6b041d;
case 0x6b0420:c.instructions+=9;goto B6b0420;
case 0x6b0422:c.instructions+=8;goto B6b0422;
case 0x6b0425:c.instructions+=7;goto B6b0425;
case 0x6b0426:c.instructions+=6;goto B6b0426;
case 0x6b0427:c.instructions+=5;goto B6b0427;
case 0x6b0428:c.instructions+=4;goto B6b0428;
case 0x6b042b:c.instructions+=3;goto B6b042b;
case 0x6b042e:c.instructions+=2;goto B6b042e;
case 0x6b042f:c.instructions+=1;goto B6b042f;
case 0x6b0431:goto L6b0431;
case 0x6b0434:goto L6b0434;
case 0x6b0437:c.instructions+=6;goto B6b0437;
case 0x6b043a:c.instructions+=5;goto B6b043a;
case 0x6b043d:c.instructions+=4;goto B6b043d;
case 0x6b0440:c.instructions+=3;goto B6b0440;
case 0x6b0443:c.instructions+=2;goto B6b0443;
case 0x6b0444:c.instructions+=1;goto B6b0444;
case 0x6b0446:goto L6b0446;
case 0x6b044c:c.instructions+=2;goto B6b044c;
case 0x6b0451:c.instructions+=1;goto B6b0451;
case 0x6b0457:goto L6b0457;
case 0x6b045a:c.instructions+=6;goto B6b045a;
case 0x6b0460:c.instructions+=5;goto B6b0460;
case 0x6b0463:c.instructions+=4;goto B6b0463;
case 0x6b0469:c.instructions+=3;goto B6b0469;
case 0x6b046a:c.instructions+=2;goto B6b046a;
case 0x6b046c:c.instructions+=1;goto B6b046c;
case 0x6b0471:goto L6b0471;
case 0x6b0473:c.instructions+=1;goto B6b0473;
case 0x6b0479:goto L6b0479;
case 0x6b047d:c.instructions+=1;goto B6b047d;
case 0x6b0480:goto L6b0480;
case 0x6b0483:c.instructions+=7;goto B6b0483;
case 0x6b0486:c.instructions+=6;goto B6b0486;
case 0x6b048a:c.instructions+=5;goto B6b048a;
case 0x6b048d:c.instructions+=4;goto B6b048d;
case 0x6b0490:c.instructions+=3;goto B6b0490;
case 0x6b0493:c.instructions+=2;goto B6b0493;
case 0x6b0496:c.instructions+=1;goto B6b0496;
case 0x6b049c:goto L6b049c;
case 0x6b049e:c.instructions+=1;goto B6b049e;
case 0x6b04a3:goto L6b04a3;
case 0x6b04a5:c.instructions+=1;goto B6b04a5;
case 0x6b04a7:goto L6b04a7;
case 0x6b04a9:c.instructions+=1;goto B6b04a9;
case 0x6b04ae:goto L6b04ae;
case 0x6b04b1:c.instructions+=1;goto B6b04b1;
case 0x6b04b3:goto L6b04b3;
case 0x6b04b7:goto L6b04b7;
case 0x6b04bb:c.instructions+=1;goto B6b04bb;
case 0x6b04bd:goto L6b04bd;
case 0x6b04c0:c.instructions+=2;goto B6b04c0;
case 0x6b04c2:c.instructions+=1;goto B6b04c2;
case 0x6b04c7:goto L6b04c7;
case 0x6b04c9:c.instructions+=1;goto B6b04c9;
case 0x6b04cb:goto L6b04cb;
case 0x6b04ce:c.instructions+=2;goto B6b04ce;
case 0x6b04cf:c.instructions+=1;goto B6b04cf;
case 0x6b04d4:goto L6b04d4;
case 0x6b04d6:c.instructions+=2;goto B6b04d6;
case 0x6b04d8:c.instructions+=1;goto B6b04d8;
case 0x6b04da:goto L6b04da;
case 0x6b04e0:c.instructions+=2;goto B6b04e0;
case 0x6b04e5:c.instructions+=1;goto B6b04e5;
case 0x6b04e7:goto L6b04e7;
case 0x6b04ed:c.instructions+=5;goto B6b04ed;
case 0x6b04f0:c.instructions+=4;goto B6b04f0;
case 0x6b04f4:c.instructions+=3;goto B6b04f4;
case 0x6b04f7:c.instructions+=2;goto B6b04f7;
case 0x6b04fd:c.instructions+=1;goto B6b04fd;
case 0x6b0500:goto L6b0500;
case 0x6b0503:c.instructions+=2;goto B6b0503;
case 0x6b0504:c.instructions+=1;goto B6b0504;
case 0x6b0507:goto L6b0507;
case 0x6b050a:c.instructions+=1;goto B6b050a;
case 0x6b0510:goto L6b0510;
case 0x6b0512:goto L6b0512;
case 0x6b0515:c.instructions+=2;goto B6b0515;
case 0x6b0517:c.instructions+=1;goto B6b0517;
case 0x6b0519:goto L6b0519;
case 0x6b051b:c.instructions+=1;goto B6b051b;
case 0x6b0520:goto L6b0520;
case 0x6b0523:c.instructions+=2;goto B6b0523;
case 0x6b0525:c.instructions+=1;goto B6b0525;
case 0x6b0527:goto L6b0527;
case 0x6b0529:c.instructions+=1;goto B6b0529;
case 0x6b052e:goto L6b052e;
case 0x6b0530:c.instructions+=5;goto B6b0530;
case 0x6b0531:c.instructions+=4;goto B6b0531;
case 0x6b0532:c.instructions+=3;goto B6b0532;
case 0x6b0533:c.instructions+=2;goto B6b0533;
case 0x6b0534:c.instructions+=1;goto B6b0534;
case 0x6b0535:goto L6b0535;
case 0x6b053a:c.instructions+=1;goto B6b053a;
case 0x6b053c:goto L6b053c;
case 0x6b053e:c.instructions+=10;goto B6b053e;
case 0x6b053f:c.instructions+=9;goto B6b053f;
case 0x6b0541:c.instructions+=8;goto B6b0541;
case 0x6b0544:c.instructions+=7;goto B6b0544;
case 0x6b0548:c.instructions+=6;goto B6b0548;
case 0x6b0549:c.instructions+=5;goto B6b0549;
case 0x6b054a:c.instructions+=4;goto B6b054a;
case 0x6b054c:c.instructions+=3;goto B6b054c;
case 0x6b0550:c.instructions+=2;goto B6b0550;
case 0x6b0551:c.instructions+=1;goto B6b0551;
case 0x6b0553:goto L6b0553;
case 0x6b0559:c.instructions+=2;goto B6b0559;
case 0x6b055c:c.instructions+=1;goto B6b055c;
case 0x6b055f:goto L6b055f;
case 0x6b0561:c.instructions+=2;goto B6b0561;
case 0x6b0564:c.instructions+=1;goto B6b0564;
case 0x6b0566:goto L6b0566;
case 0x6b0569:c.instructions+=2;goto B6b0569;
case 0x6b056c:c.instructions+=1;goto B6b056c;
case 0x6b056e:goto L6b056e;
case 0x6b056f:c.instructions+=1;goto B6b056f;
case 0x6b0572:goto L6b0572;
case 0x6b0575:c.instructions+=2;goto B6b0575;
case 0x6b0576:c.instructions+=1;goto B6b0576;
case 0x6b0578:goto L6b0578;
case 0x6b057e:c.instructions+=5;goto B6b057e;
case 0x6b0581:c.instructions+=4;goto B6b0581;
case 0x6b0583:c.instructions+=3;goto B6b0583;
case 0x6b0586:c.instructions+=2;goto B6b0586;
case 0x6b0589:c.instructions+=1;goto B6b0589;
case 0x6b058f:goto L6b058f;
case 0x6b0595:c.instructions+=4;goto B6b0595;
case 0x6b0598:c.instructions+=3;goto B6b0598;
case 0x6b059b:c.instructions+=2;goto B6b059b;
case 0x6b059d:c.instructions+=1;goto B6b059d;
case 0x6b05a3:goto L6b05a3;
case 0x6b05a5:c.instructions+=2;goto B6b05a5;
case 0x6b05a7:c.instructions+=1;goto B6b05a7;
case 0x6b05ad:goto L6b05ad;
case 0x6b05af:c.instructions+=5;goto B6b05af;
case 0x6b05b5:c.instructions+=4;goto B6b05b5;
case 0x6b05ba:c.instructions+=3;goto B6b05ba;
case 0x6b05bf:c.instructions+=2;goto B6b05bf;
case 0x6b05c2:c.instructions+=1;goto B6b05c2;
case 0x6b05c8:goto L6b05c8;
case 0x6b05cb:c.instructions+=8;goto B6b05cb;
case 0x6b05ce:c.instructions+=7;goto B6b05ce;
case 0x6b05d0:c.instructions+=6;goto B6b05d0;
case 0x6b05d3:c.instructions+=5;goto B6b05d3;
case 0x6b05d6:c.instructions+=4;goto B6b05d6;
case 0x6b05d9:c.instructions+=3;goto B6b05d9;
case 0x6b05dc:c.instructions+=2;goto B6b05dc;
case 0x6b05e0:c.instructions+=1;goto B6b05e0;
case 0x6b05e6:goto L6b05e6;
case 0x6b05e9:c.instructions+=6;goto B6b05e9;
case 0x6b05ec:c.instructions+=5;goto B6b05ec;
case 0x6b05ef:c.instructions+=4;goto B6b05ef;
case 0x6b05f2:c.instructions+=3;goto B6b05f2;
case 0x6b05f5:c.instructions+=2;goto B6b05f5;
case 0x6b05f9:c.instructions+=1;goto B6b05f9;
case 0x6b05ff:goto L6b05ff;
case 0x6b0602:c.instructions+=6;goto B6b0602;
case 0x6b0605:c.instructions+=5;goto B6b0605;
case 0x6b0608:c.instructions+=4;goto B6b0608;
case 0x6b060b:c.instructions+=3;goto B6b060b;
case 0x6b060e:c.instructions+=2;goto B6b060e;
case 0x6b0612:c.instructions+=1;goto B6b0612;
case 0x6b0618:goto L6b0618;
case 0x6b061a:c.instructions+=1;goto B6b061a;
case 0x6b061f:goto L6b061f;
case 0x6b0621:c.instructions+=1;goto B6b0621;
case 0x6b0623:goto L6b0623;
case 0x6b0625:c.instructions+=1;goto B6b0625;
case 0x6b062a:goto L6b062a;
case 0x6b062d:c.instructions+=1;goto B6b062d;
case 0x6b062f:goto L6b062f;
case 0x6b0633:goto L6b0633;
case 0x6b0636:c.instructions+=2;goto B6b0636;
case 0x6b0638:c.instructions+=1;goto B6b0638;
case 0x6b063e:goto L6b063e;
case 0x6b0640:c.instructions+=7;goto B6b0640;
case 0x6b0641:c.instructions+=6;goto B6b0641;
case 0x6b0643:c.instructions+=5;goto B6b0643;
case 0x6b0648:c.instructions+=4;goto B6b0648;
case 0x6b0649:c.instructions+=3;goto B6b0649;
case 0x6b064e:c.instructions+=2;goto B6b064e;
case 0x6b064f:c.instructions+=1;goto B6b064f;
case 0x6b0654:goto L6b0654;
case 0x6b0656:c.instructions+=2;goto B6b0656;
case 0x6b0659:c.instructions+=1;goto B6b0659;
case 0x6b065f:goto L6b065f;
case 0x6b0662:c.instructions+=2;goto B6b0662;
case 0x6b0663:c.instructions+=1;goto B6b0663;
case 0x6b0668:goto L6b0668;
case 0x6b066a:c.instructions+=2;goto B6b066a;
case 0x6b066d:c.instructions+=1;goto B6b066d;
case 0x6b0673:goto L6b0673;
case 0x6b0677:c.instructions+=2;goto B6b0677;
case 0x6b0679:c.instructions+=1;goto B6b0679;
case 0x6b067b:goto L6b067b;
case 0x6b067e:c.instructions+=19;goto B6b067e;
case 0x6b0680:c.instructions+=18;goto B6b0680;
case 0x6b0683:c.instructions+=17;goto B6b0683;
case 0x6b0686:c.instructions+=16;goto B6b0686;
case 0x6b0689:c.instructions+=15;goto B6b0689;
case 0x6b068c:c.instructions+=14;goto B6b068c;
case 0x6b068f:c.instructions+=13;goto B6b068f;
case 0x6b0692:c.instructions+=12;goto B6b0692;
case 0x6b0695:c.instructions+=11;goto B6b0695;
case 0x6b0698:c.instructions+=10;goto B6b0698;
case 0x6b069b:c.instructions+=9;goto B6b069b;
case 0x6b069c:c.instructions+=8;goto B6b069c;
case 0x6b069d:c.instructions+=7;goto B6b069d;
case 0x6b06a0:c.instructions+=6;goto B6b06a0;
case 0x6b06a3:c.instructions+=5;goto B6b06a3;
case 0x6b06a6:c.instructions+=4;goto B6b06a6;
case 0x6b06a8:c.instructions+=3;goto B6b06a8;
case 0x6b06ab:c.instructions+=2;goto B6b06ab;
case 0x6b06b1:c.instructions+=1;goto B6b06b1;
case 0x6b06b6:goto L6b06b6;
case 0x6b06b9:c.instructions+=9;goto B6b06b9;
case 0x6b06bc:c.instructions+=8;goto B6b06bc;
case 0x6b06bf:c.instructions+=7;goto B6b06bf;
case 0x6b06c2:c.instructions+=6;goto B6b06c2;
case 0x6b06c5:c.instructions+=5;goto B6b06c5;
case 0x6b06c8:c.instructions+=4;goto B6b06c8;
case 0x6b06cb:c.instructions+=3;goto B6b06cb;
case 0x6b06ce:c.instructions+=2;goto B6b06ce;
case 0x6b06d2:c.instructions+=1;goto B6b06d2;
case 0x6b06d8:goto L6b06d8;
case 0x6b06db:c.instructions+=3;goto B6b06db;
case 0x6b06de:c.instructions+=2;goto B6b06de;
case 0x6b06e1:c.instructions+=1;goto B6b06e1;
case 0x6b06e3:goto L6b06e3;
case 0x6b06e6:goto L6b06e6;
case 0x6b06e9:c.instructions+=2;goto B6b06e9;
case 0x6b06f3:c.instructions+=1;goto B6b06f3;
case 0x6b06f9:goto L6b06f9;
case 0x6b06fc:c.instructions+=2;goto B6b06fc;
case 0x6b06fe:c.instructions+=1;goto B6b06fe;
case 0x6b0703:goto L6b0703;
case 0x6b0705:c.instructions+=2;goto B6b0705;
case 0x6b0708:c.instructions+=1;goto B6b0708;
case 0x6b070e:goto L6b070e;
case 0x6b0714:c.instructions+=5;goto B6b0714;
case 0x6b071a:c.instructions+=4;goto B6b071a;
case 0x6b071d:c.instructions+=3;goto B6b071d;
case 0x6b0720:c.instructions+=2;goto B6b0720;
case 0x6b0726:c.instructions+=1;goto B6b0726;
case 0x6b0728:goto L6b0728;
case 0x6b072b:goto L6b072b;
case 0x6b072d:c.instructions+=3;goto B6b072d;
case 0x6b0732:c.instructions+=2;goto B6b0732;
case 0x6b0737:c.instructions+=1;goto B6b0737;
case 0x6b073d:goto L6b073d;
case 0x6b0743:c.instructions+=3;goto B6b0743;
case 0x6b0748:c.instructions+=2;goto B6b0748;
case 0x6b074d:c.instructions+=1;goto B6b074d;
case 0x6b0753:goto L6b0753;
case 0x6b0755:c.instructions+=3;goto B6b0755;
case 0x6b0756:c.instructions+=2;goto B6b0756;
case 0x6b0758:c.instructions+=1;goto B6b0758;
case 0x6b075a:goto L6b075a;
case 0x6b075d:c.instructions+=2;goto B6b075d;
case 0x6b075f:c.instructions+=1;goto B6b075f;
case 0x6b0762:goto L6b0762;
case 0x6b0764:c.instructions+=1;goto B6b0764;
case 0x6b076a:goto L6b076a;
case 0x6b076b:c.instructions+=3;goto B6b076b;
case 0x6b076e:c.instructions+=2;goto B6b076e;
case 0x6b0770:c.instructions+=1;goto B6b0770;
case 0x6b0772:goto L6b0772;
case 0x6b0774:c.instructions+=1;goto B6b0774;
case 0x6b0779:goto L6b0779;
case 0x6b077b:c.instructions+=1;goto B6b077b;
case 0x6b077d:goto L6b077d;
case 0x6b077f:c.instructions+=1;goto B6b077f;
case 0x6b0784:goto L6b0784;
case 0x6b0786:c.instructions+=1;goto B6b0786;
case 0x6b0788:goto L6b0788;
case 0x6b078a:goto L6b078a;
case 0x6b078c:c.instructions+=1;goto B6b078c;
case 0x6b0792:goto L6b0792;
case 0x6b0793:c.instructions+=2;goto B6b0793;
case 0x6b0795:c.instructions+=1;goto B6b0795;
case 0x6b079a:goto L6b079a;
case 0x6b079c:c.instructions+=3;goto B6b079c;
case 0x6b079f:c.instructions+=2;goto B6b079f;
case 0x6b07a1:c.instructions+=1;goto B6b07a1;
case 0x6b07a7:goto L6b07a7;
case 0x6b07a9:c.instructions+=4;goto B6b07a9;
case 0x6b07ab:c.instructions+=3;goto B6b07ab;
case 0x6b07ad:c.instructions+=2;goto B6b07ad;
case 0x6b07b2:c.instructions+=1;goto B6b07b2;
case 0x6b07b7:goto L6b07b7;
case 0x6b07b9:c.instructions+=2;goto B6b07b9;
case 0x6b07bc:c.instructions+=1;goto B6b07bc;
case 0x6b07c2:goto L6b07c2;
case 0x6b07c3:c.instructions+=2;goto B6b07c3;
case 0x6b07c5:c.instructions+=1;goto B6b07c5;
case 0x6b07ca:goto L6b07ca;
case 0x6b07cc:c.instructions+=2;goto B6b07cc;
case 0x6b07cf:c.instructions+=1;goto B6b07cf;
case 0x6b07d5:goto L6b07d5;
case 0x6b07d8:c.instructions+=12;goto B6b07d8;
case 0x6b07de:c.instructions+=11;goto B6b07de;
case 0x6b07e1:c.instructions+=10;goto B6b07e1;
case 0x6b07e3:c.instructions+=9;goto B6b07e3;
case 0x6b07e4:c.instructions+=8;goto B6b07e4;
case 0x6b07e5:c.instructions+=7;goto B6b07e5;
case 0x6b07e8:c.instructions+=6;goto B6b07e8;
case 0x6b07ea:c.instructions+=5;goto B6b07ea;
case 0x6b07ec:c.instructions+=4;goto B6b07ec;
case 0x6b07ee:c.instructions+=3;goto B6b07ee;
case 0x6b07f1:c.instructions+=2;goto B6b07f1;
case 0x6b07f3:c.instructions+=1;goto B6b07f3;
case 0x6b07f8:goto L6b07f8;
case 0x6b07fe:c.instructions+=10;goto B6b07fe;
case 0x6b0801:c.instructions+=9;goto B6b0801;
case 0x6b0802:c.instructions+=8;goto B6b0802;
case 0x6b0803:c.instructions+=7;goto B6b0803;
case 0x6b0806:c.instructions+=6;goto B6b0806;
case 0x6b0808:c.instructions+=5;goto B6b0808;
case 0x6b080b:c.instructions+=4;goto B6b080b;
case 0x6b080d:c.instructions+=3;goto B6b080d;
case 0x6b0810:c.instructions+=2;goto B6b0810;
case 0x6b0812:c.instructions+=1;goto B6b0812;
case 0x6b0817:goto L6b0817;
case 0x6b081a:c.instructions+=4;goto B6b081a;
case 0x6b081d:c.instructions+=3;goto B6b081d;
case 0x6b0820:c.instructions+=2;goto B6b0820;
case 0x6b0824:c.instructions+=1;goto B6b0824;
case 0x6b082a:goto L6b082a;
case 0x6b082e:c.instructions+=1;goto B6b082e;
case 0x6b0834:goto L6b0834;
case 0x6b0835:c.instructions+=8;goto B6b0835;
case 0x6b0837:c.instructions+=7;goto B6b0837;
case 0x6b0838:c.instructions+=6;goto B6b0838;
case 0x6b083b:c.instructions+=5;goto B6b083b;
case 0x6b083d:c.instructions+=4;goto B6b083d;
case 0x6b0840:c.instructions+=3;goto B6b0840;
case 0x6b0842:c.instructions+=2;goto B6b0842;
case 0x6b0848:c.instructions+=1;goto B6b0848;
case 0x6b084d:goto L6b084d;
case 0x6b0850:c.instructions+=4;goto B6b0850;
case 0x6b0852:c.instructions+=3;goto B6b0852;
case 0x6b0855:c.instructions+=2;goto B6b0855;
case 0x6b0858:c.instructions+=1;goto B6b0858;
case 0x6b085e:goto L6b085e;
case 0x6b0861:c.instructions+=4;goto B6b0861;
case 0x6b0863:c.instructions+=3;goto B6b0863;
case 0x6b0865:c.instructions+=2;goto B6b0865;
case 0x6b0868:c.instructions+=1;goto B6b0868;
case 0x6b086a:goto L6b086a;
case 0x6b086c:c.instructions+=4;goto B6b086c;
case 0x6b086f:c.instructions+=3;goto B6b086f;
case 0x6b0872:c.instructions+=2;goto B6b0872;
case 0x6b0875:c.instructions+=1;goto B6b0875;
case 0x6b0878:goto L6b0878;
case 0x6b087b:c.instructions+=22;goto B6b087b;
case 0x6b087d:c.instructions+=21;goto B6b087d;
case 0x6b0880:c.instructions+=20;goto B6b0880;
case 0x6b0883:c.instructions+=19;goto B6b0883;
case 0x6b0886:c.instructions+=18;goto B6b0886;
case 0x6b0889:c.instructions+=17;goto B6b0889;
case 0x6b088d:c.instructions+=16;goto B6b088d;
case 0x6b088f:c.instructions+=15;goto B6b088f;
case 0x6b0891:c.instructions+=14;goto B6b0891;
case 0x6b0894:c.instructions+=13;goto B6b0894;
case 0x6b0897:c.instructions+=12;goto B6b0897;
case 0x6b089a:c.instructions+=11;goto B6b089a;
case 0x6b089c:c.instructions+=10;goto B6b089c;
case 0x6b089f:c.instructions+=9;goto B6b089f;
case 0x6b08a2:c.instructions+=8;goto B6b08a2;
case 0x6b08a5:c.instructions+=7;goto B6b08a5;
case 0x6b08a8:c.instructions+=6;goto B6b08a8;
case 0x6b08a9:c.instructions+=5;goto B6b08a9;
case 0x6b08ac:c.instructions+=4;goto B6b08ac;
case 0x6b08af:c.instructions+=3;goto B6b08af;
case 0x6b08b2:c.instructions+=2;goto B6b08b2;
case 0x6b08b5:c.instructions+=1;goto B6b08b5;
case 0x6b08b7:goto L6b08b7;
case 0x6b08bd:c.instructions+=3;goto B6b08bd;
case 0x6b08c0:c.instructions+=2;goto B6b08c0;
case 0x6b08c5:c.instructions+=1;goto B6b08c5;
case 0x6b08cb:goto L6b08cb;
case 0x6b08d1:c.instructions+=7;goto B6b08d1;
case 0x6b08d4:c.instructions+=6;goto B6b08d4;
case 0x6b08d6:c.instructions+=5;goto B6b08d6;
case 0x6b08dc:c.instructions+=4;goto B6b08dc;
case 0x6b08de:c.instructions+=3;goto B6b08de;
case 0x6b08df:c.instructions+=2;goto B6b08df;
case 0x6b08e1:c.instructions+=1;goto B6b08e1;
case 0x6b08e4:goto L6b08e4;
case 0x6b08e6:c.instructions+=1;goto B6b08e6;
case 0x6b08ec:goto L6b08ec;
case 0x6b08ee:c.instructions+=1;goto B6b08ee;
case 0x6b08f3:goto L6b08f3;
case 0x6b08f5:c.instructions+=1;goto B6b08f5;
case 0x6b08f7:goto L6b08f7;
case 0x6b08f9:c.instructions+=1;goto B6b08f9;
case 0x6b08fe:goto L6b08fe;
case 0x6b0901:c.instructions+=1;goto B6b0901;
case 0x6b0903:goto L6b0903;
case 0x6b0907:goto L6b0907;
case 0x6b090a:c.instructions+=2;goto B6b090a;
case 0x6b090c:c.instructions+=1;goto B6b090c;
case 0x6b0911:goto L6b0911;
case 0x6b0913:c.instructions+=3;goto B6b0913;
case 0x6b0916:c.instructions+=2;goto B6b0916;
case 0x6b0919:c.instructions+=1;goto B6b0919;
case 0x6b091f:goto L6b091f;
case 0x6b0921:c.instructions+=1;goto B6b0921;
case 0x6b0927:goto L6b0927;
case 0x6b0929:c.instructions+=4;goto B6b0929;
case 0x6b092b:c.instructions+=3;goto B6b092b;
case 0x6b092d:c.instructions+=2;goto B6b092d;
case 0x6b0932:c.instructions+=1;goto B6b0932;
case 0x6b0937:goto L6b0937;
case 0x6b0939:c.instructions+=2;goto B6b0939;
case 0x6b093c:c.instructions+=1;goto B6b093c;
case 0x6b0942:goto L6b0942;
case 0x6b0945:c.instructions+=2;goto B6b0945;
case 0x6b0946:c.instructions+=1;goto B6b0946;
case 0x6b094b:goto L6b094b;
case 0x6b094d:c.instructions+=2;goto B6b094d;
case 0x6b0950:c.instructions+=1;goto B6b0950;
case 0x6b0956:goto L6b0956;
case 0x6b0959:c.instructions+=17;goto B6b0959;
case 0x6b095b:c.instructions+=16;goto B6b095b;
case 0x6b095d:c.instructions+=15;goto B6b095d;
case 0x6b0960:c.instructions+=14;goto B6b0960;
case 0x6b0963:c.instructions+=13;goto B6b0963;
case 0x6b0965:c.instructions+=12;goto B6b0965;
case 0x6b0968:c.instructions+=11;goto B6b0968;
case 0x6b096b:c.instructions+=10;goto B6b096b;
case 0x6b096e:c.instructions+=9;goto B6b096e;
case 0x6b096f:c.instructions+=8;goto B6b096f;
case 0x6b0970:c.instructions+=7;goto B6b0970;
case 0x6b0973:c.instructions+=6;goto B6b0973;
case 0x6b0975:c.instructions+=5;goto B6b0975;
case 0x6b0977:c.instructions+=4;goto B6b0977;
case 0x6b0979:c.instructions+=3;goto B6b0979;
case 0x6b097f:c.instructions+=2;goto B6b097f;
case 0x6b0981:c.instructions+=1;goto B6b0981;
case 0x6b0986:goto L6b0986;
case 0x6b0989:c.instructions+=11;goto B6b0989;
case 0x6b098b:c.instructions+=10;goto B6b098b;
case 0x6b098e:c.instructions+=9;goto B6b098e;
case 0x6b0990:c.instructions+=8;goto B6b0990;
case 0x6b0993:c.instructions+=7;goto B6b0993;
case 0x6b0996:c.instructions+=6;goto B6b0996;
case 0x6b0999:c.instructions+=5;goto B6b0999;
case 0x6b09a0:c.instructions+=4;goto B6b09a0;
case 0x6b09a6:c.instructions+=3;goto B6b09a6;
case 0x6b09ac:c.instructions+=2;goto B6b09ac;
case 0x6b09b1:c.instructions+=1;goto B6b09b1;
case 0x6b09b7:goto L6b09b7;
case 0x6b09bd:c.instructions+=2;goto B6b09bd;
case 0x6b09c0:c.instructions+=1;goto B6b09c0;
case 0x6b09c6:goto L6b09c6;
case 0x6b09c9:c.instructions+=4;goto B6b09c9;
case 0x6b09ce:c.instructions+=3;goto B6b09ce;
case 0x6b09d3:c.instructions+=2;goto B6b09d3;
case 0x6b09dd:c.instructions+=1;goto B6b09dd;
case 0x6b09df:goto L6b09df;
case 0x6b09e1:c.instructions+=1;goto B6b09e1;
case 0x6b09e6:goto L6b09e6;
case 0x6b09e8:c.instructions+=1;goto B6b09e8;
case 0x6b09ea:goto L6b09ea;
case 0x6b09ec:c.instructions+=1;goto B6b09ec;
case 0x6b09f1:goto L6b09f1;
case 0x6b09f3:c.instructions+=1;goto B6b09f3;
case 0x6b09f5:goto L6b09f5;
case 0x6b09f7:goto L6b09f7;
case 0x6b09f9:c.instructions+=1;goto B6b09f9;
case 0x6b09ff:goto L6b09ff;
case 0x6b0a00:c.instructions+=2;goto B6b0a00;
case 0x6b0a02:c.instructions+=1;goto B6b0a02;
case 0x6b0a07:goto L6b0a07;
case 0x6b0a09:c.instructions+=2;goto B6b0a09;
case 0x6b0a0c:c.instructions+=1;goto B6b0a0c;
case 0x6b0a12:goto L6b0a12;
case 0x6b0a1c:c.instructions+=1;goto B6b0a1c;
case 0x6b0a1e:goto L6b0a1e;
case 0x6b0a1f:c.instructions+=2;goto B6b0a1f;
case 0x6b0a21:c.instructions+=1;goto B6b0a21;
case 0x6b0a26:goto L6b0a26;
case 0x6b0a28:c.instructions+=2;goto B6b0a28;
case 0x6b0a2b:c.instructions+=1;goto B6b0a2b;
case 0x6b0a2d:goto L6b0a2d;
case 0x6b0a33:c.instructions+=4;goto B6b0a33;
case 0x6b0a39:c.instructions+=3;goto B6b0a39;
case 0x6b0a3c:c.instructions+=2;goto B6b0a3c;
case 0x6b0a42:c.instructions+=1;goto B6b0a42;
case 0x6b0a45:goto L6b0a45;
case 0x6b0a48:c.instructions+=2;goto B6b0a48;
case 0x6b0a4b:c.instructions+=1;goto B6b0a4b;
case 0x6b0a51:goto L6b0a51;
case 0x6b0a54:c.instructions+=1;goto B6b0a54;
case 0x6b0a56:goto L6b0a56;
case 0x6b0a5c:c.instructions+=7;goto B6b0a5c;
case 0x6b0a61:c.instructions+=6;goto B6b0a61;
case 0x6b0a62:c.instructions+=5;goto B6b0a62;
case 0x6b0a67:c.instructions+=4;goto B6b0a67;
case 0x6b0a6c:c.instructions+=3;goto B6b0a6c;
case 0x6b0a6f:c.instructions+=2;goto B6b0a6f;
case 0x6b0a70:c.instructions+=1;goto B6b0a70;
case 0x6b0a75:goto L6b0a75;
case 0x6b0a78:c.instructions+=2;goto B6b0a78;
case 0x6b0a7f:c.instructions+=1;goto B6b0a7f;
case 0x6b0a81:goto L6b0a81;
case 0x6b0a83:c.instructions+=1;goto B6b0a83;
case 0x6b0a85:goto L6b0a85;
case 0x6b0a87:c.instructions+=1;goto B6b0a87;
case 0x6b0a8c:goto L6b0a8c;
case 0x6b0a8e:goto L6b0a8e;
case 0x6b0a95:c.instructions+=1;goto B6b0a95;
case 0x6b0a97:goto L6b0a97;
case 0x6b0a9d:c.instructions+=3;goto B6b0a9d;
case 0x6b0aa0:c.instructions+=2;goto B6b0aa0;
case 0x6b0aa3:c.instructions+=1;goto B6b0aa3;
case 0x6b0aa4:goto L6b0aa4;
case 0x6b0aa6:c.instructions+=1;goto B6b0aa6;
case 0x6b0aa8:goto L6b0aa8;
case 0x6b0aac:goto L6b0aac;
case 0x6b0aaf:c.instructions+=5;goto B6b0aaf;
case 0x6b0ab0:c.instructions+=4;goto B6b0ab0;
case 0x6b0ab1:c.instructions+=3;goto B6b0ab1;
case 0x6b0ab2:c.instructions+=2;goto B6b0ab2;
case 0x6b0ab3:c.instructions+=1;goto B6b0ab3;
case 0x6b0ab4:goto L6b0ab4;
case 0x6b0ab6:c.instructions+=15;goto B6b0ab6;
case 0x6b0ab7:c.instructions+=14;goto B6b0ab7;
case 0x6b0ab9:c.instructions+=13;goto B6b0ab9;
case 0x6b0abf:c.instructions+=12;goto B6b0abf;
case 0x6b0ac0:c.instructions+=11;goto B6b0ac0;
case 0x6b0ac2:c.instructions+=10;goto B6b0ac2;
case 0x6b0ac3:c.instructions+=9;goto B6b0ac3;
case 0x6b0ac9:c.instructions+=8;goto B6b0ac9;
case 0x6b0acb:c.instructions+=7;goto B6b0acb;
case 0x6b0acc:c.instructions+=6;goto B6b0acc;
case 0x6b0ace:c.instructions+=5;goto B6b0ace;
case 0x6b0ad4:c.instructions+=4;goto B6b0ad4;
case 0x6b0ad6:c.instructions+=3;goto B6b0ad6;
case 0x6b0ad9:c.instructions+=2;goto B6b0ad9;
case 0x6b0adc:c.instructions+=1;goto B6b0adc;
case 0x6b0ae2:goto L6b0ae2;
case 0x6b0ae4:c.instructions+=1;goto B6b0ae4;
case 0x6b0aea:goto L6b0aea;
case 0x6b0aed:c.instructions+=7;goto B6b0aed;
case 0x6b0aef:c.instructions+=6;goto B6b0aef;
case 0x6b0af1:c.instructions+=5;goto B6b0af1;
case 0x6b0af5:c.instructions+=4;goto B6b0af5;
case 0x6b0afb:c.instructions+=3;goto B6b0afb;
case 0x6b0b01:c.instructions+=2;goto B6b0b01;
case 0x6b0b04:c.instructions+=1;goto B6b0b04;
case 0x6b0b0a:goto L6b0b0a;
case 0x6b0b0d:c.instructions+=1;goto B6b0b0d;
case 0x6b0b13:goto L6b0b13;
case 0x6b0b19:c.instructions+=6;goto B6b0b19;
case 0x6b0b1d:c.instructions+=5;goto B6b0b1d;
case 0x6b0b1f:c.instructions+=4;goto B6b0b1f;
case 0x6b0b24:c.instructions+=3;goto B6b0b24;
case 0x6b0b25:c.instructions+=2;goto B6b0b25;
case 0x6b0b2a:c.instructions+=1;goto B6b0b2a;
case 0x6b0b2c:goto L6b0b2c;
case 0x6b0b2d:c.instructions+=2;goto B6b0b2d;
case 0x6b0b2f:c.instructions+=1;goto B6b0b2f;
case 0x6b0b34:goto L6b0b34;
case 0x6b0b36:c.instructions+=1;goto B6b0b36;
case 0x6b0b38:goto L6b0b38;
case 0x6b0b3b:c.instructions+=2;goto B6b0b3b;
case 0x6b0b3d:c.instructions+=1;goto B6b0b3d;
case 0x6b0b3f:goto L6b0b3f;
case 0x6b0b42:c.instructions+=1;goto B6b0b42;
case 0x6b0b45:goto L6b0b45;
case 0x6b0b47:c.instructions+=3;goto B6b0b47;
case 0x6b0b4a:c.instructions+=2;goto B6b0b4a;
case 0x6b0b4e:c.instructions+=1;goto B6b0b4e;
case 0x6b0b50:goto L6b0b50;
case 0x6b0b53:c.instructions+=1;goto B6b0b53;
case 0x6b0b56:goto L6b0b56;
case 0x6b0b59:c.instructions+=2;goto B6b0b59;
case 0x6b0b5a:c.instructions+=1;goto B6b0b5a;
case 0x6b0b5c:goto L6b0b5c;
case 0x6b0b60:c.instructions+=2;goto B6b0b60;
case 0x6b0b64:c.instructions+=1;goto B6b0b64;
case 0x6b0b6a:goto L6b0b6a;
case 0x6b0b6e:c.instructions+=2;goto B6b0b6e;
case 0x6b0b74:c.instructions+=1;goto B6b0b74;
case 0x6b0b77:goto L6b0b77;
case 0x6b0b7a:c.instructions+=14;goto B6b0b7a;
case 0x6b0b7d:c.instructions+=13;goto B6b0b7d;
case 0x6b0b7e:c.instructions+=12;goto B6b0b7e;
case 0x6b0b82:c.instructions+=11;goto B6b0b82;
case 0x6b0b83:c.instructions+=10;goto B6b0b83;
case 0x6b0b84:c.instructions+=9;goto B6b0b84;
case 0x6b0b85:c.instructions+=8;goto B6b0b85;
case 0x6b0b88:c.instructions+=7;goto B6b0b88;
case 0x6b0b8c:c.instructions+=6;goto B6b0b8c;
case 0x6b0b8f:c.instructions+=5;goto B6b0b8f;
case 0x6b0b90:c.instructions+=4;goto B6b0b90;
case 0x6b0b91:c.instructions+=3;goto B6b0b91;
case 0x6b0b92:c.instructions+=2;goto B6b0b92;
case 0x6b0b93:c.instructions+=1;goto B6b0b93;
case 0x6b0b95:goto L6b0b95;
case 0x6b0b98:c.instructions+=4;goto B6b0b98;
case 0x6b0b9e:c.instructions+=3;goto B6b0b9e;
case 0x6b0ba1:c.instructions+=2;goto B6b0ba1;
case 0x6b0ba4:c.instructions+=1;goto B6b0ba4;
case 0x6b0ba7:goto L6b0ba7;
case 0x6b0baa:c.instructions+=12;goto B6b0baa;
case 0x6b0bad:c.instructions+=11;goto B6b0bad;
case 0x6b0bb0:c.instructions+=10;goto B6b0bb0;
case 0x6b0bb3:c.instructions+=9;goto B6b0bb3;
case 0x6b0bb6:c.instructions+=8;goto B6b0bb6;
case 0x6b0bb9:c.instructions+=7;goto B6b0bb9;
case 0x6b0bbc:c.instructions+=6;goto B6b0bbc;
case 0x6b0bbf:c.instructions+=5;goto B6b0bbf;
case 0x6b0bc2:c.instructions+=4;goto B6b0bc2;
case 0x6b0bc6:c.instructions+=3;goto B6b0bc6;
case 0x6b0bc9:c.instructions+=2;goto B6b0bc9;
case 0x6b0bcc:c.instructions+=1;goto B6b0bcc;
case 0x6b0bce:goto L6b0bce;
case 0x6b0bd1:c.instructions+=3;goto B6b0bd1;
case 0x6b0bd4:c.instructions+=2;goto B6b0bd4;
case 0x6b0bdb:c.instructions+=1;goto B6b0bdb;
case 0x6b0bdd:goto L6b0bdd;
case 0x6b0be0:c.instructions+=3;goto B6b0be0;
case 0x6b0be3:c.instructions+=2;goto B6b0be3;
case 0x6b0be6:c.instructions+=1;goto B6b0be6;
case 0x6b0bed:goto L6b0bed;
case 0x6b0bf2:c.instructions+=5;goto B6b0bf2;
case 0x6b0bf5:c.instructions+=4;goto B6b0bf5;
case 0x6b0bf8:c.instructions+=3;goto B6b0bf8;
case 0x6b0bfc:c.instructions+=2;goto B6b0bfc;
case 0x6b0bff:c.instructions+=1;goto B6b0bff;
case 0x6b0c01:goto L6b0c01;
case 0x6b0c04:goto L6b0c04;
case 0x6b0c06:c.instructions+=4;goto B6b0c06;
case 0x6b0c09:c.instructions+=3;goto B6b0c09;
case 0x6b0c0a:c.instructions+=2;goto B6b0c0a;
case 0x6b0c0d:c.instructions+=1;goto B6b0c0d;
case 0x6b0c12:goto L6b0c12;
case 0x6b0c14:c.instructions+=1;goto B6b0c14;
case 0x6b0c16:goto L6b0c16;
case 0x6b0c1d:goto L6b0c1d;
case 0x6b0c20:c.instructions+=7;goto B6b0c20;
case 0x6b0c23:c.instructions+=6;goto B6b0c23;
case 0x6b0c27:c.instructions+=5;goto B6b0c27;
case 0x6b0c2a:c.instructions+=4;goto B6b0c2a;
case 0x6b0c2d:c.instructions+=3;goto B6b0c2d;
case 0x6b0c30:c.instructions+=2;goto B6b0c30;
case 0x6b0c33:c.instructions+=1;goto B6b0c33;
case 0x6b0c39:goto L6b0c39;
case 0x6b0c3b:c.instructions+=2;goto B6b0c3b;
case 0x6b0c3e:c.instructions+=1;goto B6b0c3e;
case 0x6b0c44:goto L6b0c44;
case 0x6b0c48:c.instructions+=3;goto B6b0c48;
case 0x6b0c4b:c.instructions+=2;goto B6b0c4b;
case 0x6b0c4e:c.instructions+=1;goto B6b0c4e;
case 0x6b0c54:goto L6b0c54;
case 0x6b0c5b:goto L6b0c5b;
case 0x6b0c5d:c.instructions+=2;goto B6b0c5d;
case 0x6b0c60:c.instructions+=1;goto B6b0c60;
case 0x6b0c66:goto L6b0c66;
case 0x6b0c68:c.instructions+=16;goto B6b0c68;
case 0x6b0c6b:c.instructions+=15;goto B6b0c6b;
case 0x6b0c6c:c.instructions+=14;goto B6b0c6c;
case 0x6b0c6d:c.instructions+=13;goto B6b0c6d;
case 0x6b0c6e:c.instructions+=12;goto B6b0c6e;
case 0x6b0c6f:c.instructions+=11;goto B6b0c6f;
case 0x6b0c72:c.instructions+=10;goto B6b0c72;
case 0x6b0c75:c.instructions+=9;goto B6b0c75;
case 0x6b0c76:c.instructions+=8;goto B6b0c76;
case 0x6b0c77:c.instructions+=7;goto B6b0c77;
case 0x6b0c78:c.instructions+=6;goto B6b0c78;
case 0x6b0c79:c.instructions+=5;goto B6b0c79;
case 0x6b0c7e:c.instructions+=4;goto B6b0c7e;
case 0x6b0c81:c.instructions+=3;goto B6b0c81;
case 0x6b0c85:c.instructions+=2;goto B6b0c85;
case 0x6b0c88:c.instructions+=1;goto B6b0c88;
case 0x6b0c8a:goto L6b0c8a;
case 0x6b0c8d:c.instructions+=2;goto B6b0c8d;
case 0x6b0c93:c.instructions+=1;goto B6b0c93;
case 0x6b0c96:goto L6b0c96;
case 0x6b0c98:c.instructions+=4;goto B6b0c98;
case 0x6b0c9b:c.instructions+=3;goto B6b0c9b;
case 0x6b0c9c:c.instructions+=2;goto B6b0c9c;
case 0x6b0c9d:c.instructions+=1;goto B6b0c9d;
case 0x6b0ca2:goto L6b0ca2;
case 0x6b0ca4:c.instructions+=1;goto B6b0ca4;
case 0x6b0ca6:goto L6b0ca6;
case 0x6b0ca8:c.instructions+=4;goto B6b0ca8;
case 0x6b0cab:c.instructions+=3;goto B6b0cab;
case 0x6b0cac:c.instructions+=2;goto B6b0cac;
case 0x6b0cad:c.instructions+=1;goto B6b0cad;
case 0x6b0cb2:goto L6b0cb2;
case 0x6b0cb4:c.instructions+=1;goto B6b0cb4;
case 0x6b0cb6:goto L6b0cb6;
case 0x6b0cbd:goto L6b0cbd;
case 0x6b0cc0:c.instructions+=2;goto B6b0cc0;
case 0x6b0cc3:c.instructions+=1;goto B6b0cc3;
case 0x6b0cc5:goto L6b0cc5;
case 0x6b0cc9:c.instructions+=1;goto B6b0cc9;
case 0x6b0ccb:goto L6b0ccb;
case 0x6b0cce:c.instructions+=1;goto B6b0cce;
case 0x6b0cd0:goto L6b0cd0;
case 0x6b0cd7:goto L6b0cd7;
case 0x6b0cdb:c.instructions+=1;goto B6b0cdb;
case 0x6b0ce1:goto L6b0ce1;
case 0x6b0ce2:c.instructions+=2;goto B6b0ce2;
case 0x6b0ce5:c.instructions+=1;goto B6b0ce5;
case 0x6b0ceb:goto L6b0ceb;
case 0x6b0ced:goto L6b0ced;
case 0x6b0cf4:c.instructions+=1;goto B6b0cf4;
case 0x6b0cf7:goto L6b0cf7;
case 0x6b0cfb:c.instructions+=1;goto B6b0cfb;
case 0x6b0d01:goto L6b0d01;
case 0x6b0d03:c.instructions+=1;goto B6b0d03;
case 0x6b0d06:goto L6b0d06;
case 0x6b0d09:c.instructions+=3;goto B6b0d09;
case 0x6b0d0b:c.instructions+=2;goto B6b0d0b;
case 0x6b0d0d:c.instructions+=1;goto B6b0d0d;
case 0x6b0d13:goto L6b0d13;
case 0x6b0d15:c.instructions+=20;goto B6b0d15;
case 0x6b0d18:c.instructions+=19;goto B6b0d18;
case 0x6b0d19:c.instructions+=18;goto B6b0d19;
case 0x6b0d1a:c.instructions+=17;goto B6b0d1a;
case 0x6b0d1b:c.instructions+=16;goto B6b0d1b;
case 0x6b0d1c:c.instructions+=15;goto B6b0d1c;
case 0x6b0d1f:c.instructions+=14;goto B6b0d1f;
case 0x6b0d22:c.instructions+=13;goto B6b0d22;
case 0x6b0d23:c.instructions+=12;goto B6b0d23;
case 0x6b0d24:c.instructions+=11;goto B6b0d24;
case 0x6b0d25:c.instructions+=10;goto B6b0d25;
case 0x6b0d26:c.instructions+=9;goto B6b0d26;
case 0x6b0d29:c.instructions+=8;goto B6b0d29;
case 0x6b0d2d:c.instructions+=7;goto B6b0d2d;
case 0x6b0d31:c.instructions+=6;goto B6b0d31;
case 0x6b0d34:c.instructions+=5;goto B6b0d34;
case 0x6b0d38:c.instructions+=4;goto B6b0d38;
case 0x6b0d3c:c.instructions+=3;goto B6b0d3c;
case 0x6b0d3f:c.instructions+=2;goto B6b0d3f;
case 0x6b0d42:c.instructions+=1;goto B6b0d42;
case 0x6b0d44:goto L6b0d44;
case 0x6b0d47:c.instructions+=2;goto B6b0d47;
case 0x6b0d4d:c.instructions+=1;goto B6b0d4d;
case 0x6b0d50:goto L6b0d50;
case 0x6b0d52:c.instructions+=4;goto B6b0d52;
case 0x6b0d55:c.instructions+=3;goto B6b0d55;
case 0x6b0d56:c.instructions+=2;goto B6b0d56;
case 0x6b0d57:c.instructions+=1;goto B6b0d57;
case 0x6b0d5c:goto L6b0d5c;
case 0x6b0d5e:c.instructions+=5;goto B6b0d5e;
case 0x6b0d60:c.instructions+=4;goto B6b0d60;
case 0x6b0d63:c.instructions+=3;goto B6b0d63;
case 0x6b0d64:c.instructions+=2;goto B6b0d64;
case 0x6b0d65:c.instructions+=1;goto B6b0d65;
case 0x6b0d6a:goto L6b0d6a;
case 0x6b0d6c:c.instructions+=1;goto B6b0d6c;
case 0x6b0d6e:goto L6b0d6e;
case 0x6b0d75:c.instructions+=1;goto B6b0d75;
case 0x6b0d77:goto L6b0d77;
case 0x6b0d79:c.instructions+=5;goto B6b0d79;
case 0x6b0d7c:c.instructions+=4;goto B6b0d7c;
case 0x6b0d7f:c.instructions+=3;goto B6b0d7f;
case 0x6b0d80:c.instructions+=2;goto B6b0d80;
case 0x6b0d82:c.instructions+=1;goto B6b0d82;
case 0x6b0d87:goto L6b0d87;
case 0x6b0d89:c.instructions+=1;goto B6b0d89;
case 0x6b0d8f:goto L6b0d8f;
case 0x6b0d91:c.instructions+=5;goto B6b0d91;
case 0x6b0d94:c.instructions+=4;goto B6b0d94;
case 0x6b0d97:c.instructions+=3;goto B6b0d97;
case 0x6b0d98:c.instructions+=2;goto B6b0d98;
case 0x6b0d9a:c.instructions+=1;goto B6b0d9a;
case 0x6b0d9f:goto L6b0d9f;
case 0x6b0da4:goto L6b0da4;
case 0x6b0da6:c.instructions+=1;goto B6b0da6;
case 0x6b0da8:goto L6b0da8;
case 0x6b0daf:goto L6b0daf;
case 0x6b0db2:c.instructions+=2;goto B6b0db2;
case 0x6b0db5:c.instructions+=1;goto B6b0db5;
case 0x6b0db7:goto L6b0db7;
case 0x6b0db9:c.instructions+=2;goto B6b0db9;
case 0x6b0dbc:c.instructions+=1;goto B6b0dbc;
case 0x6b0dbe:goto L6b0dbe;
case 0x6b0dc5:goto L6b0dc5;
case 0x6b0dc8:c.instructions+=1;goto B6b0dc8;
case 0x6b0dca:goto L6b0dca;
case 0x6b0dcd:c.instructions+=1;goto B6b0dcd;
case 0x6b0dcf:goto L6b0dcf;
case 0x6b0dd3:c.instructions+=1;goto B6b0dd3;
case 0x6b0dd5:goto L6b0dd5;
case 0x6b0dd9:c.instructions+=1;goto B6b0dd9;
case 0x6b0ddb:goto L6b0ddb;
case 0x6b0dde:c.instructions+=22;goto B6b0dde;
case 0x6b0de1:c.instructions+=21;goto B6b0de1;
case 0x6b0de2:c.instructions+=20;goto B6b0de2;
case 0x6b0de3:c.instructions+=19;goto B6b0de3;
case 0x6b0de4:c.instructions+=18;goto B6b0de4;
case 0x6b0de5:c.instructions+=17;goto B6b0de5;
case 0x6b0de8:c.instructions+=16;goto B6b0de8;
case 0x6b0deb:c.instructions+=15;goto B6b0deb;
case 0x6b0dec:c.instructions+=14;goto B6b0dec;
case 0x6b0ded:c.instructions+=13;goto B6b0ded;
case 0x6b0dee:c.instructions+=12;goto B6b0dee;
case 0x6b0def:c.instructions+=11;goto B6b0def;
case 0x6b0df2:c.instructions+=10;goto B6b0df2;
case 0x6b0df5:c.instructions+=9;goto B6b0df5;
case 0x6b0df6:c.instructions+=8;goto B6b0df6;
case 0x6b0df7:c.instructions+=7;goto B6b0df7;
case 0x6b0df8:c.instructions+=6;goto B6b0df8;
case 0x6b0df9:c.instructions+=5;goto B6b0df9;
case 0x6b0dfc:c.instructions+=4;goto B6b0dfc;
case 0x6b0e01:c.instructions+=3;goto B6b0e01;
case 0x6b0e04:c.instructions+=2;goto B6b0e04;
case 0x6b0e09:c.instructions+=1;goto B6b0e09;
case 0x6b0e10:goto L6b0e10;
case 0x6b0e13:c.instructions+=4;goto B6b0e13;
case 0x6b0e14:c.instructions+=3;goto B6b0e14;
case 0x6b0e17:c.instructions+=2;goto B6b0e17;
case 0x6b0e1a:c.instructions+=1;goto B6b0e1a;
case 0x6b0e20:goto L6b0e20;
case 0x6b0e22:goto L6b0e22;
case 0x6b0e29:goto L6b0e29;
case 0x6b0e2c:c.instructions+=2;goto B6b0e2c;
case 0x6b0e30:c.instructions+=1;goto B6b0e30;
case 0x6b0e36:goto L6b0e36;
case 0x6b0e3a:c.instructions+=1;goto B6b0e3a;
case 0x6b0e3c:goto L6b0e3c;
case 0x6b0e3e:c.instructions+=5;goto B6b0e3e;
case 0x6b0e41:c.instructions+=4;goto B6b0e41;
case 0x6b0e44:c.instructions+=3;goto B6b0e44;
case 0x6b0e45:c.instructions+=2;goto B6b0e45;
case 0x6b0e47:c.instructions+=1;goto B6b0e47;
case 0x6b0e4c:goto L6b0e4c;
case 0x6b0e4e:c.instructions+=1;goto B6b0e4e;
case 0x6b0e54:goto L6b0e54;
case 0x6b0e56:c.instructions+=1;goto B6b0e56;
case 0x6b0e5b:goto L6b0e5b;
case 0x6b0e5f:c.instructions+=1;goto B6b0e5f;
case 0x6b0e65:goto L6b0e65;
case 0x6b0e67:c.instructions+=6;goto B6b0e67;
case 0x6b0e6a:c.instructions+=5;goto B6b0e6a;
case 0x6b0e6d:c.instructions+=4;goto B6b0e6d;
case 0x6b0e6e:c.instructions+=3;goto B6b0e6e;
case 0x6b0e70:c.instructions+=2;goto B6b0e70;
case 0x6b0e77:c.instructions+=1;goto B6b0e77;
case 0x6b0e7c:goto L6b0e7c;
case 0x6b0e7e:c.instructions+=1;goto B6b0e7e;
case 0x6b0e84:goto L6b0e84;
case 0x6b0e86:c.instructions+=5;goto B6b0e86;
case 0x6b0e89:c.instructions+=4;goto B6b0e89;
case 0x6b0e8c:c.instructions+=3;goto B6b0e8c;
case 0x6b0e8d:c.instructions+=2;goto B6b0e8d;
case 0x6b0e8f:c.instructions+=1;goto B6b0e8f;
case 0x6b0e94:goto L6b0e94;
case 0x6b0e96:c.instructions+=1;goto B6b0e96;
case 0x6b0e9c:goto L6b0e9c;
case 0x6b0e9e:c.instructions+=2;goto B6b0e9e;
case 0x6b0ea1:c.instructions+=1;goto B6b0ea1;
case 0x6b0ea6:goto L6b0ea6;
case 0x6b0eaa:c.instructions+=1;goto B6b0eaa;
case 0x6b0eb0:goto L6b0eb0;
case 0x6b0eb4:c.instructions+=1;goto B6b0eb4;
case 0x6b0eb6:goto L6b0eb6;
case 0x6b0ebe:c.instructions+=1;goto B6b0ebe;
case 0x6b0ec0:goto L6b0ec0;
case 0x6b0ec3:goto L6b0ec3;
case 0x6b0ec4:c.instructions+=2;goto B6b0ec4;
case 0x6b0ec7:c.instructions+=1;goto B6b0ec7;
case 0x6b0ec9:goto L6b0ec9;
case 0x6b0ecd:goto L6b0ecd;
case 0x6b0ed1:c.instructions+=1;goto B6b0ed1;
case 0x6b0ed7:goto L6b0ed7;
case 0x6b0ed9:c.instructions+=1;goto B6b0ed9;
case 0x6b0edb:goto L6b0edb;
case 0x6b0ede:c.instructions+=1;goto B6b0ede;
case 0x6b0ee4:goto L6b0ee4;
case 0x6b0ee7:c.instructions+=1;goto B6b0ee7;
case 0x6b0eed:goto L6b0eed;
case 0x6b0ef0:c.instructions+=2;goto B6b0ef0;
case 0x6b0ef2:c.instructions+=1;goto B6b0ef2;
case 0x6b0ef8:goto L6b0ef8;
case 0x6b0efb:c.instructions+=1;goto B6b0efb;
case 0x6b0f01:goto L6b0f01;
case 0x6b0f04:c.instructions+=23;goto B6b0f04;
case 0x6b0f07:c.instructions+=22;goto B6b0f07;
case 0x6b0f08:c.instructions+=21;goto B6b0f08;
case 0x6b0f09:c.instructions+=20;goto B6b0f09;
case 0x6b0f0a:c.instructions+=19;goto B6b0f0a;
case 0x6b0f0b:c.instructions+=18;goto B6b0f0b;
case 0x6b0f0d:c.instructions+=17;goto B6b0f0d;
case 0x6b0f10:c.instructions+=16;goto B6b0f10;
case 0x6b0f11:c.instructions+=15;goto B6b0f11;
case 0x6b0f12:c.instructions+=14;goto B6b0f12;
case 0x6b0f13:c.instructions+=13;goto B6b0f13;
case 0x6b0f14:c.instructions+=12;goto B6b0f14;
case 0x6b0f17:c.instructions+=11;goto B6b0f17;
case 0x6b0f1a:c.instructions+=10;goto B6b0f1a;
case 0x6b0f1d:c.instructions+=9;goto B6b0f1d;
case 0x6b0f20:c.instructions+=8;goto B6b0f20;
case 0x6b0f23:c.instructions+=7;goto B6b0f23;
case 0x6b0f28:c.instructions+=6;goto B6b0f28;
case 0x6b0f2d:c.instructions+=5;goto B6b0f2d;
case 0x6b0f32:c.instructions+=4;goto B6b0f32;
case 0x6b0f34:c.instructions+=3;goto B6b0f34;
case 0x6b0f37:c.instructions+=2;goto B6b0f37;
case 0x6b0f3a:c.instructions+=1;goto B6b0f3a;
case 0x6b0f3c:goto L6b0f3c;
case 0x6b0f42:c.instructions+=1;goto B6b0f42;
case 0x6b0f45:goto L6b0f45;
case 0x6b0f48:c.instructions+=1;goto B6b0f48;
case 0x6b0f4a:goto L6b0f4a;
case 0x6b0f4c:c.instructions+=4;goto B6b0f4c;
case 0x6b0f4f:c.instructions+=3;goto B6b0f4f;
case 0x6b0f50:c.instructions+=2;goto B6b0f50;
case 0x6b0f53:c.instructions+=1;goto B6b0f53;
case 0x6b0f58:goto L6b0f58;
case 0x6b0f5a:c.instructions+=1;goto B6b0f5a;
case 0x6b0f5c:goto L6b0f5c;
case 0x6b0f63:goto L6b0f63;
case 0x6b0f67:c.instructions+=4;goto B6b0f67;
case 0x6b0f68:c.instructions+=3;goto B6b0f68;
case 0x6b0f6a:c.instructions+=2;goto B6b0f6a;
case 0x6b0f6d:c.instructions+=1;goto B6b0f6d;
case 0x6b0f6f:goto L6b0f6f;
case 0x6b0f72:c.instructions+=1;goto B6b0f72;
case 0x6b0f74:goto L6b0f74;
case 0x6b0f77:c.instructions+=1;goto B6b0f77;
case 0x6b0f79:goto L6b0f79;
case 0x6b0f7c:c.instructions+=1;goto B6b0f7c;
case 0x6b0f7e:goto L6b0f7e;
case 0x6b0f81:c.instructions+=1;goto B6b0f81;
case 0x6b0f83:goto L6b0f83;
case 0x6b0f86:c.instructions+=1;goto B6b0f86;
case 0x6b0f88:goto L6b0f88;
case 0x6b0f8f:goto L6b0f8f;
case 0x6b0f92:c.instructions+=1;goto B6b0f92;
case 0x6b0f94:goto L6b0f94;
case 0x6b0f9b:goto L6b0f9b;
case 0x6b0f9c:c.instructions+=2;goto B6b0f9c;
case 0x6b0f9f:c.instructions+=1;goto B6b0f9f;
case 0x6b0fa5:goto L6b0fa5;
case 0x6b0fa8:c.instructions+=2;goto B6b0fa8;
case 0x6b0fac:c.instructions+=1;goto B6b0fac;
case 0x6b0fb2:goto L6b0fb2;
case 0x6b0fb6:c.instructions+=1;goto B6b0fb6;
case 0x6b0fb8:goto L6b0fb8;
case 0x6b0fba:c.instructions+=5;goto B6b0fba;
case 0x6b0fbd:c.instructions+=4;goto B6b0fbd;
case 0x6b0fc0:c.instructions+=3;goto B6b0fc0;
case 0x6b0fc1:c.instructions+=2;goto B6b0fc1;
case 0x6b0fc3:c.instructions+=1;goto B6b0fc3;
case 0x6b0fc8:goto L6b0fc8;
case 0x6b0fca:c.instructions+=1;goto B6b0fca;
case 0x6b0fd0:goto L6b0fd0;
case 0x6b0fd2:goto L6b0fd2;
case 0x6b0fd5:goto L6b0fd5;
case 0x6b0fd8:c.instructions+=3;goto B6b0fd8;
case 0x6b0fda:c.instructions+=2;goto B6b0fda;
case 0x6b0fdb:c.instructions+=1;goto B6b0fdb;
case 0x6b0fe0:goto L6b0fe0;
case 0x6b0fe2:c.instructions+=1;goto B6b0fe2;
case 0x6b0fe8:goto L6b0fe8;
case 0x6b0fec:c.instructions+=1;goto B6b0fec;
case 0x6b0fee:goto L6b0fee;
case 0x6b0ff0:c.instructions+=2;goto B6b0ff0;
case 0x6b0ff3:c.instructions+=1;goto B6b0ff3;
case 0x6b0ff5:goto L6b0ff5;
case 0x6b0ff8:c.instructions+=3;goto B6b0ff8;
case 0x6b0ffb:c.instructions+=2;goto B6b0ffb;
case 0x6b0ffe:c.instructions+=1;goto B6b0ffe;
default:missing_instruction(c.pc);}
B6b0001:L6b0001:{c.instructions+=2;NFSU2_TR(0x6b0001);
w4(R+24,u32(0x8007000eull));
}
B6b0006:{NFSU2_TR(0x6b0006);
TAIL_STATIC(0x6afff1u,6af);
}
B6b0008:L6b0008:{c.instructions+=4;NFSU2_TR(0x6b0008);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b000a:{NFSU2_TR(0x6b000a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b000d:{NFSU2_TR(0x6b000d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0010:{NFSU2_TR(0x6b0010);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b008d;}}
}
B6b0012:L6b0012:{c.instructions+=5;NFSU2_TR(0x6b0012);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0015:{NFSU2_TR(0x6b0015);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b0018:{NFSU2_TR(0x6b0018);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b001a:{NFSU2_TR(0x6b001a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b001d:{NFSU2_TR(0x6b001d);
if(r1(R+518)){{goto L6b0081;}}
}
B6b001f:L6b001f:{c.instructions+=4;NFSU2_TR(0x6b001f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0022:{NFSU2_TR(0x6b0022);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b0024:{NFSU2_TR(0x6b0024);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0027:{NFSU2_TR(0x6b0027);
if(r1(R+518)){{goto L6b0081;}}
}
B6b0029:L6b0029:{c.instructions+=7;NFSU2_TR(0x6b0029);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b002c:{NFSU2_TR(0x6b002c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b002e:{NFSU2_TR(0x6b002e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b0031:{NFSU2_TR(0x6b0031);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b0034:{NFSU2_TR(0x6b0034);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b0037:{NFSU2_TR(0x6b0037);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b003d:{NFSU2_TR(0x6b003d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b0081;}}
}
B6b003f:L6b003f:{c.instructions+=3;NFSU2_TR(0x6b003f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0043:{NFSU2_TR(0x6b0043);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b0045:{NFSU2_TR(0x6b0045);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b0081;}}
}
B6b0047:L6b0047:{c.instructions+=1;NFSU2_TR(0x6b0047);
{goto L6b004c;}
}
B6b0049:L6b0049:{c.instructions+=1;NFSU2_TR(0x6b0049);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b004c:L6b004c:{c.instructions+=2;NFSU2_TR(0x6b004c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b004e:{NFSU2_TR(0x6b004e);
{goto L6b0053;}
}
B6b0050:L6b0050:{c.instructions+=1;NFSU2_TR(0x6b0050);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0053:L6b0053:{c.instructions+=7;NFSU2_TR(0x6b0053);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b0056:{NFSU2_TR(0x6b0056);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0059:{NFSU2_TR(0x6b0059);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6b005c:{NFSU2_TR(0x6b005c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b005f:{NFSU2_TR(0x6b005f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6b0061:{NFSU2_TR(0x6b0061);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+12))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6b0064:{NFSU2_TR(0x6b0064);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b006e;}}
}
B6b0066:L6b0066:{c.instructions+=3;NFSU2_TR(0x6b0066);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b0069:{NFSU2_TR(0x6b0069);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b006c:{NFSU2_TR(0x6b006c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b006e:L6b006e:{c.instructions+=3;NFSU2_TR(0x6b006e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6b0071:{NFSU2_TR(0x6b0071);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6b0074:{NFSU2_TR(0x6b0074);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0050u);}goto L6b0050;}}
}
B6b0076:L6b0076:{c.instructions+=4;NFSU2_TR(0x6b0076);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0079:{NFSU2_TR(0x6b0079);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b007c:{NFSU2_TR(0x6b007c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b007f:{NFSU2_TR(0x6b007f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0049u);}goto L6b0049;}}
}
B6b0081:L6b0081:{c.instructions+=5;NFSU2_TR(0x6b0081);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0084:{NFSU2_TR(0x6b0084);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b0085:{NFSU2_TR(0x6b0085);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b0088:{NFSU2_TR(0x6b0088);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b008b:{NFSU2_TR(0x6b008b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0012u);}goto L6b0012;}}
}
B6b008d:L6b008d:{c.instructions+=6;NFSU2_TR(0x6b008d);
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
B6b008f:{NFSU2_TR(0x6b008f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b0090:{NFSU2_TR(0x6b0090);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b0091:{NFSU2_TR(0x6b0091);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b0092:{NFSU2_TR(0x6b0092);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b0093:{NFSU2_TR(0x6b0093);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b0094:L6b0094:{c.instructions+=10;NFSU2_TR(0x6b0094);
__builtin_memmove((R+28),(R+28),4);
}
B6b0096:{NFSU2_TR(0x6b0096);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0097:{NFSU2_TR(0x6b0097);
__builtin_memmove((R+20),(R+16),4);
}
B6b0099:{NFSU2_TR(0x6b0099);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b009a:{NFSU2_TR(0x6b009a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b009e:{NFSU2_TR(0x6b009e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b00a2:{NFSU2_TR(0x6b00a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b00a3:{NFSU2_TR(0x6b00a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b00a4:{NFSU2_TR(0x6b00a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b00a5:{NFSU2_TR(0x6b00a5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b00e1;}}
}
B6b00a7:L6b00a7:{c.instructions+=3;NFSU2_TR(0x6b00a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b00aa:{NFSU2_TR(0x6b00aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B6b00ad:{NFSU2_TR(0x6b00ad);
w4(R+4,u32(0x80b5e8ull));
}
B6b00b2:L6b00b2:{c.instructions+=5;NFSU2_TR(0x6b00b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b00b5:{NFSU2_TR(0x6b00b5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b00b7:{NFSU2_TR(0x6b00b7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b00b9:{NFSU2_TR(0x6b00b9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b00ba:{NFSU2_TR(0x6b00ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6b00bb:L6b00bb:{c.instructions+=3;NFSU2_TR(0x6b00bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6b00be:{NFSU2_TR(0x6b00be);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+12))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b00c0:{NFSU2_TR(0x6b00c0);
if(r1(R+518)){{goto L6b00c9;}}
}
B6b00c2:L6b00c2:{c.instructions+=2;NFSU2_TR(0x6b00c2);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b00c5:{NFSU2_TR(0x6b00c5);
if(r1(R+518)){{goto L6b00c9;}}
}
B6b00c7:L6b00c7:{c.instructions+=1;NFSU2_TR(0x6b00c7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b00c9:L6b00c9:{c.instructions+=4;NFSU2_TR(0x6b00c9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6b00cc:{NFSU2_TR(0x6b00cc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b00cf:{NFSU2_TR(0x6b00cf);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6b00d0:{NFSU2_TR(0x6b00d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b00bbu);}goto L6b00bb;}}
}
B6b00d2:L6b00d2:{c.instructions+=2;NFSU2_TR(0x6b00d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b00d4:{NFSU2_TR(0x6b00d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b00ea;}}
}
B6b00d6:L6b00d6:{c.instructions+=4;NFSU2_TR(0x6b00d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b00d9:{NFSU2_TR(0x6b00d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b00dc:{NFSU2_TR(0x6b00dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b00df:{NFSU2_TR(0x6b00df);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b00b2u);}goto L6b00b2;}}
}
B6b00e1:L6b00e1:{c.instructions+=1;NFSU2_TR(0x6b00e1);
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
B6b00e3:L6b00e3:{c.instructions+=5;NFSU2_TR(0x6b00e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b00e4:{NFSU2_TR(0x6b00e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b00e5:{NFSU2_TR(0x6b00e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b00e6:{NFSU2_TR(0x6b00e6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b00e7:{NFSU2_TR(0x6b00e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b00ea:L6b00ea:{c.instructions+=3;NFSU2_TR(0x6b00ea);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b00ec:{NFSU2_TR(0x6b00ec);
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
B6b00ed:{NFSU2_TR(0x6b00ed);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b00e3u);}goto L6b00e3;}
}
B6b00ef:L6b00ef:{c.instructions+=21;NFSU2_TR(0x6b00ef);
__builtin_memmove((R+28),(R+28),4);
}
B6b00f1:{NFSU2_TR(0x6b00f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b00f2:{NFSU2_TR(0x6b00f2);
__builtin_memmove((R+20),(R+16),4);
}
B6b00f4:{NFSU2_TR(0x6b00f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6b00f7:{NFSU2_TR(0x6b00f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b00fb:{NFSU2_TR(0x6b00fb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b00fc:{NFSU2_TR(0x6b00fc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b00fe:{NFSU2_TR(0x6b00fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b00ff:{NFSU2_TR(0x6b00ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0100:{NFSU2_TR(0x6b0100);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b0103:{NFSU2_TR(0x6b0103);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0104:{NFSU2_TR(0x6b0104);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0105:{NFSU2_TR(0x6b0105);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0106:{NFSU2_TR(0x6b0106);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0107:{NFSU2_TR(0x6b0107);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b010a:{NFSU2_TR(0x6b010a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b010d:{NFSU2_TR(0x6b010d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b010f:{NFSU2_TR(0x6b010f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b0111:{NFSU2_TR(0x6b0111);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b0112:{NFSU2_TR(0x6b0112);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b0114:{NFSU2_TR(0x6b0114);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b0135;}}
}
B6b0116:L6b0116:{c.instructions+=2;NFSU2_TR(0x6b0116);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b0119:{NFSU2_TR(0x6b0119);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b011c:L6b011c:{c.instructions+=5;NFSU2_TR(0x6b011c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b011e:{NFSU2_TR(0x6b011e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b0121:{NFSU2_TR(0x6b0121);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0124:{NFSU2_TR(0x6b0124);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b0127:{NFSU2_TR(0x6b0127);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6b0146;}}
}
B6b0129:L6b0129:{c.instructions+=5;NFSU2_TR(0x6b0129);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b012a:{NFSU2_TR(0x6b012a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b012d:{NFSU2_TR(0x6b012d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B6b012f:{NFSU2_TR(0x6b012f);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b0133:{NFSU2_TR(0x6b0133);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b011cu);}goto L6b011c;}}
}
B6b0135:L6b0135:{c.instructions+=3;NFSU2_TR(0x6b0135);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b0137:{NFSU2_TR(0x6b0137);
__builtin_memmove((R+8),(R+12),4);
}
B6b0139:{NFSU2_TR(0x6b0139);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b013b:L6b013b:{c.instructions+=2;NFSU2_TR(0x6b013b);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6b0140:{NFSU2_TR(0x6b0140);
if(r1(R+518)){{goto L6b014a;}}
}
B6b0142:L6b0142:{c.instructions+=2;NFSU2_TR(0x6b0142);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b0144:{NFSU2_TR(0x6b0144);
{goto L6b014c;}
}
B6b0146:L6b0146:{c.instructions+=2;NFSU2_TR(0x6b0146);
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
B6b0148:{NFSU2_TR(0x6b0148);
{goto L6b0160;}
}
B6b014a:L6b014a:{c.instructions+=1;NFSU2_TR(0x6b014a);
__builtin_memmove((R+4),(R+12),4);
}
B6b014c:L6b014c:{c.instructions+=3;NFSU2_TR(0x6b014c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b014d:{NFSU2_TR(0x6b014d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B6b0150:{NFSU2_TR(0x6b0150);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b013bu);}goto L6b013b;}}
}
B6b0152:L6b0152:{c.instructions+=2;NFSU2_TR(0x6b0152);
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
B6b0154:{NFSU2_TR(0x6b0154);
if(r1(R+518)){{goto L6b015d;}}
}
B6b0156:L6b0156:{c.instructions+=2;NFSU2_TR(0x6b0156);
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
B6b0158:{NFSU2_TR(0x6b0158);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b015d;}}
}
B6b015a:L6b015a:{c.instructions+=1;NFSU2_TR(0x6b015a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b015d:L6b015d:{c.instructions+=1;NFSU2_TR(0x6b015d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0160:L6b0160:{c.instructions+=5;NFSU2_TR(0x6b0160);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b0161:{NFSU2_TR(0x6b0161);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b0162:{NFSU2_TR(0x6b0162);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b0163:{NFSU2_TR(0x6b0163);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b0164:{NFSU2_TR(0x6b0164);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b0167:L6b0167:{c.instructions+=15;NFSU2_TR(0x6b0167);
__builtin_memmove((R+28),(R+28),4);
}
B6b0169:{NFSU2_TR(0x6b0169);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b016a:{NFSU2_TR(0x6b016a);
__builtin_memmove((R+20),(R+16),4);
}
B6b016c:{NFSU2_TR(0x6b016c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xe8ull))));
}
B6b0172:{NFSU2_TR(0x6b0172);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0176:{NFSU2_TR(0x6b0176);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b017a:{NFSU2_TR(0x6b017a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b017b:{NFSU2_TR(0x6b017b);
__builtin_memmove((R+12),(R+4),4);
}
B6b017d:{NFSU2_TR(0x6b017d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0183:{NFSU2_TR(0x6b0183);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0186:{NFSU2_TR(0x6b0186);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0187:{NFSU2_TR(0x6b0187);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0188:{NFSU2_TR(0x6b0188);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b018b:{NFSU2_TR(0x6b018b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6b018d:{NFSU2_TR(0x6b018d);
{goto L6b0507;}
}
B6b0192:L6b0192:{c.instructions+=5;NFSU2_TR(0x6b0192);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0198:{NFSU2_TR(0x6b0198);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b019b:{NFSU2_TR(0x6b019b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b019d:{NFSU2_TR(0x6b019d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b01a0:{NFSU2_TR(0x6b01a0);
if(r1(R+518)){{goto L6b0500;}}
}
B6b01a6:L6b01a6:{c.instructions+=3;NFSU2_TR(0x6b01a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b01a8:{NFSU2_TR(0x6b01a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b01aa:{NFSU2_TR(0x6b01aa);
if(r1(R+518)){{goto L6b0500;}}
}
B6b01b0:L6b01b0:{c.instructions+=9;NFSU2_TR(0x6b01b0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6b01b5:{NFSU2_TR(0x6b01b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b01b8:{NFSU2_TR(0x6b01b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b01bb:{NFSU2_TR(0x6b01bb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b01bd:{NFSU2_TR(0x6b01bd);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b01bd);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b01bd);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B6b01c0:{NFSU2_TR(0x6b01c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b01c4:{NFSU2_TR(0x6b01c4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b01c6:{NFSU2_TR(0x6b01c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b01c9:{NFSU2_TR(0x6b01c9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b049c;}}
}
B6b01cf:L6b01cf:{c.instructions+=3;NFSU2_TR(0x6b01cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b01d3:{NFSU2_TR(0x6b01d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b01d9:{NFSU2_TR(0x6b01d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b01dc:L6b01dc:{c.instructions+=17;NFSU2_TR(0x6b01dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b01df:{NFSU2_TR(0x6b01df);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6b01e2:{NFSU2_TR(0x6b01e2);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b01e3:{NFSU2_TR(0x6b01e3);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b01e4:{NFSU2_TR(0x6b01e4);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b01e5:{NFSU2_TR(0x6b01e5);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b01e6:{NFSU2_TR(0x6b01e6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6b01e9:{NFSU2_TR(0x6b01e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b01ef:{NFSU2_TR(0x6b01ef);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b01f0:{NFSU2_TR(0x6b01f0);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b01f1:{NFSU2_TR(0x6b01f1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b01f3:{NFSU2_TR(0x6b01f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b01f6:{NFSU2_TR(0x6b01f6);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b01f7:{NFSU2_TR(0x6b01f7);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b01f8:{NFSU2_TR(0x6b01f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b01fb:{NFSU2_TR(0x6b01fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b01fe:{NFSU2_TR(0x6b01fe);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b02d7;}}
}
B6b0204:L6b0204:{c.instructions+=5;NFSU2_TR(0x6b0204);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b0206:{NFSU2_TR(0x6b0206);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6b020b:{NFSU2_TR(0x6b020b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b020e:{NFSU2_TR(0x6b020e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0211:{NFSU2_TR(0x6b0211);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6b0214:L6b0214:{c.instructions+=6;NFSU2_TR(0x6b0214);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b021b:{NFSU2_TR(0x6b021b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b021d:{NFSU2_TR(0x6b021d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0220:{NFSU2_TR(0x6b0220);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b0223:{NFSU2_TR(0x6b0223);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0226:{NFSU2_TR(0x6b0226);
if(r1(R+518)){{goto L6b023c;}}
}
B6b0228:L6b0228:{c.instructions+=3;NFSU2_TR(0x6b0228);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b022b:{NFSU2_TR(0x6b022b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b022e:{NFSU2_TR(0x6b022e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b023c;}}
}
B6b0230:L6b0230:{c.instructions+=4;NFSU2_TR(0x6b0230);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b0233:{NFSU2_TR(0x6b0233);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b0236:{NFSU2_TR(0x6b0236);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b0239:{NFSU2_TR(0x6b0239);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b023c:L6b023c:{c.instructions+=8;NFSU2_TR(0x6b023c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b023f:{NFSU2_TR(0x6b023f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b0242:{NFSU2_TR(0x6b0242);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0245:{NFSU2_TR(0x6b0245);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b0248:{NFSU2_TR(0x6b0248);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6b024c:{NFSU2_TR(0x6b024c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b024f:{NFSU2_TR(0x6b024f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6b0252:{NFSU2_TR(0x6b0252);
if(r1(R+518)){{goto L6b025d;}}
}
B6b0254:L6b0254:{c.instructions+=2;NFSU2_TR(0x6b0254);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff68ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b025b:{NFSU2_TR(0x6b025b);
{goto L6b026a;}
}
B6b025d:L6b025d:{c.instructions+=3;NFSU2_TR(0x6b025d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b0260:{NFSU2_TR(0x6b0260);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b0263:{NFSU2_TR(0x6b0263);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff68ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b026a:L6b026a:{c.instructions+=2;NFSU2_TR(0x6b026a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b026d:{NFSU2_TR(0x6b026d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b0276;}}
}
B6b026f:L6b026f:{c.instructions+=1;NFSU2_TR(0x6b026f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0276:L6b0276:{c.instructions+=7;NFSU2_TR(0x6b0276);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff18ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6b027e:{NFSU2_TR(0x6b027e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b0281:{NFSU2_TR(0x6b0281);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b0282:{NFSU2_TR(0x6b0282);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b0285:{NFSU2_TR(0x6b0285);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6b0288:{NFSU2_TR(0x6b0288);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b028b:{NFSU2_TR(0x6b028b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0214u);}goto L6b0214;}}
}
B6b028d:L6b028d:{c.instructions+=2;NFSU2_TR(0x6b028d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0291:{NFSU2_TR(0x6b0291);
if(r1(R+518)){{goto L6b02d7;}}
}
B6b0293:L6b0293:{c.instructions+=4;NFSU2_TR(0x6b0293);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b0295:{NFSU2_TR(0x6b0295);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b0296:{NFSU2_TR(0x6b0296);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0299:{NFSU2_TR(0x6b0299);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b02d7;}}
}
B6b029b:L6b029b:{c.instructions+=2;NFSU2_TR(0x6b029b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b02a2:{NFSU2_TR(0x6b02a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b02a9;}}
}
B6b02a4:L6b02a4:{c.instructions+=2;NFSU2_TR(0x6b02a4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b02a7:{NFSU2_TR(0x6b02a7);
if(r1(R+518)){{goto L6b02d7;}}
}
B6b02a9:L6b02a9:{c.instructions+=2;NFSU2_TR(0x6b02a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b02ac:{NFSU2_TR(0x6b02ac);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b02ae:L6b02ae:{c.instructions+=3;NFSU2_TR(0x6b02ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b02b0:{NFSU2_TR(0x6b02b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80b628ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b02b6:{NFSU2_TR(0x6b02b6);
if(r1(R+518)){{goto L6b02c4;}}
}
B6b02b8:L6b02b8:{c.instructions+=2;NFSU2_TR(0x6b02b8);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff18ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6b02c0:{NFSU2_TR(0x6b02c0);
if(r1(R+518)){{goto L6b02c4;}}
}
B6b02c2:L6b02c2:{c.instructions+=1;NFSU2_TR(0x6b02c2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b02c4:L6b02c4:{c.instructions+=4;NFSU2_TR(0x6b02c4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b02c7:{NFSU2_TR(0x6b02c7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6b02ca:{NFSU2_TR(0x6b02ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6b02cd:{NFSU2_TR(0x6b02cd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b02aeu);}goto L6b02ae;}}
}
B6b02cf:L6b02cf:{c.instructions+=2;NFSU2_TR(0x6b02cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b02d1:{NFSU2_TR(0x6b02d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b0480;}}
}
B6b02d7:L6b02d7:{c.instructions+=5;NFSU2_TR(0x6b02d7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b02d9:{NFSU2_TR(0x6b02d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b02df:{NFSU2_TR(0x6b02df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b02e0:{NFSU2_TR(0x6b02e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b02e3:{NFSU2_TR(0x6b02e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b02e8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0094u);}goto L6b0094;}
}
B6b02e8:L6b02e8:{c.instructions+=2;NFSU2_TR(0x6b02e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b02ea:{NFSU2_TR(0x6b02ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b0480;}}
}
B6b02f0:L6b02f0:{c.instructions+=1;NFSU2_TR(0x6b02f0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b02f2:L6b02f2:{c.instructions+=9;NFSU2_TR(0x6b02f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b02f3:{NFSU2_TR(0x6b02f3);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6b02f5:{NFSU2_TR(0x6b02f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b02f6:{NFSU2_TR(0x6b02f6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b02f9:{NFSU2_TR(0x6b02f9);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b02fb:{NFSU2_TR(0x6b02fb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b02fd:{NFSU2_TR(0x6b02fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b0303:{NFSU2_TR(0x6b0303);
__builtin_memmove((R+4),(R+12),4);
}
B6b0305:{NFSU2_TR(0x6b0305);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b030aull));
TAIL_STATIC(0x699c39u,699);
}
B6b030a:L6b030a:{c.instructions+=3;NFSU2_TR(0x6b030a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b030d:{NFSU2_TR(0x6b030d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b0311:{NFSU2_TR(0x6b0311);
if(r1(R+518)){{goto L6b0535;}}
}
B6b0317:L6b0317:{c.instructions+=3;NFSU2_TR(0x6b0317);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b0318:{NFSU2_TR(0x6b0318);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
}
B6b031b:{NFSU2_TR(0x6b031b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b02f2u);}goto L6b02f2;}}
}
B6b031d:L6b031d:{c.instructions+=2;NFSU2_TR(0x6b031d);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b031f:{NFSU2_TR(0x6b031f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0324ull));
TAIL_STATIC(0x699317u,699);
}
B6b0324:L6b0324:{c.instructions+=3;NFSU2_TR(0x6b0324);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b0326:{NFSU2_TR(0x6b0326);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b0328:{NFSU2_TR(0x6b0328);
if(r1(R+518)){{goto L6b0336;}}
}
B6b032a:L6b032a:{c.instructions+=2;NFSU2_TR(0x6b032a);
__builtin_memmove((R+4),(R+0),4);
}
B6b032c:{NFSU2_TR(0x6b032c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0331ull));
TAIL_STATIC(0x698e7du,698);
}
B6b0331:L6b0331:{c.instructions+=2;NFSU2_TR(0x6b0331);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0334:{NFSU2_TR(0x6b0334);
{goto L6b0339;}
}
B6b0336:L6b0336:{c.instructions+=1;NFSU2_TR(0x6b0336);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0339:L6b0339:{c.instructions+=2;NFSU2_TR(0x6b0339);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b033c:{NFSU2_TR(0x6b033c);
if(r1(R+518)){{goto L6b0535;}}
}
B6b0342:L6b0342:{c.instructions+=6;NFSU2_TR(0x6b0342);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0345:{NFSU2_TR(0x6b0345);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0346:{NFSU2_TR(0x6b0346);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0348:{NFSU2_TR(0x6b0348);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b034a:{NFSU2_TR(0x6b034a);
u8 U[4];
w4(U+0,u32(0x50000003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b034f:{NFSU2_TR(0x6b034f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0354ull));
TAIL_STATIC(0x699362u,699);
}
B6b0354:L6b0354:{c.instructions+=3;NFSU2_TR(0x6b0354);
__builtin_memmove((R+28),(R+0),4);
}
B6b0356:{NFSU2_TR(0x6b0356);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6b0358:{NFSU2_TR(0x6b0358);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b0512;}}
}
B6b035e:L6b035e:{c.instructions+=3;NFSU2_TR(0x6b035e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0361:{NFSU2_TR(0x6b0361);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0362:{NFSU2_TR(0x6b0362);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0367ull));
TAIL_STATIC(0x698eb3u,698);
}
B6b0367:L6b0367:{c.instructions+=3;NFSU2_TR(0x6b0367);
__builtin_memmove((R+28),(R+0),4);
}
B6b0369:{NFSU2_TR(0x6b0369);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6b036b:{NFSU2_TR(0x6b036b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b0512;}}
}
B6b0371:L6b0371:{c.instructions+=10;NFSU2_TR(0x6b0371);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0374:{NFSU2_TR(0x6b0374);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0377:{NFSU2_TR(0x6b0377);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b037a:{NFSU2_TR(0x6b037a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b037d:{NFSU2_TR(0x6b037d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b0380:{NFSU2_TR(0x6b0380);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0383:{NFSU2_TR(0x6b0383);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0386:{NFSU2_TR(0x6b0386);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b0388:{NFSU2_TR(0x6b0388);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b038b:{NFSU2_TR(0x6b038b);
{goto L6b0390;}
}
B6b038d:L6b038d:{c.instructions+=1;NFSU2_TR(0x6b038d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0390:L6b0390:{c.instructions+=2;NFSU2_TR(0x6b0390);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0393:{NFSU2_TR(0x6b0393);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b039d;}}
}
B6b0395:L6b0395:{c.instructions+=2;NFSU2_TR(0x6b0395);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x444ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b039b:{NFSU2_TR(0x6b039b);
{goto L6b03a3;}
}
B6b039d:L6b039d:{c.instructions+=1;NFSU2_TR(0x6b039d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x440ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b03a3:L6b03a3:{c.instructions+=10;NFSU2_TR(0x6b03a3);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6b03a6:{NFSU2_TR(0x6b03a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b03a7:{NFSU2_TR(0x6b03a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b03a8:{NFSU2_TR(0x6b03a8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b03ab:{NFSU2_TR(0x6b03ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b03ac:{NFSU2_TR(0x6b03ac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b03ae:{NFSU2_TR(0x6b03ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b03b1:{NFSU2_TR(0x6b03b1);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b03b5:{NFSU2_TR(0x6b03b5);
__builtin_memmove((R+4),(R+12),4);
}
B6b03b7:{NFSU2_TR(0x6b03b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b03bcull));
TAIL_STATIC(0x699c39u,699);
}
B6b03bc:L6b03bc:{c.instructions+=4;NFSU2_TR(0x6b03bc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b03bf:{NFSU2_TR(0x6b03bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b03c2:{NFSU2_TR(0x6b03c2);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b03c6:{NFSU2_TR(0x6b03c6);
if(r1(R+518)){{goto L6b0535;}}
}
B6b03cc:L6b03cc:{c.instructions+=6;NFSU2_TR(0x6b03cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b03cf:{NFSU2_TR(0x6b03cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b03d2:{NFSU2_TR(0x6b03d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b03d3:{NFSU2_TR(0x6b03d3);
__builtin_memmove((R+4),(R+0),4);
}
B6b03d5:{NFSU2_TR(0x6b03d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b03d8:{NFSU2_TR(0x6b03d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b03ddull));
TAIL_STATIC(0x699765u,699);
}
B6b03dd:L6b03dd:{c.instructions+=8;NFSU2_TR(0x6b03dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b03e0:{NFSU2_TR(0x6b03e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b03e3:{NFSU2_TR(0x6b03e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b03e6:{NFSU2_TR(0x6b03e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b03e9:{NFSU2_TR(0x6b03e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b03ec:{NFSU2_TR(0x6b03ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b03ef:{NFSU2_TR(0x6b03ef);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b03f2:{NFSU2_TR(0x6b03f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b03fc;}}
}
B6b03f4:L6b03f4:{c.instructions+=3;NFSU2_TR(0x6b03f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b03f7:{NFSU2_TR(0x6b03f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b03fa:{NFSU2_TR(0x6b03fa);
{goto L6b0402;}
}
B6b03fc:L6b03fc:{c.instructions+=2;NFSU2_TR(0x6b03fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b03ff:{NFSU2_TR(0x6b03ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0402:L6b0402:{c.instructions+=3;NFSU2_TR(0x6b0402);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0405:{NFSU2_TR(0x6b0405);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3ull))));
}
B6b0409:{NFSU2_TR(0x6b0409);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b038du);}goto L6b038d;}}
}
B6b040b:L6b040b:{c.instructions+=18;NFSU2_TR(0x6b040b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b040e:{NFSU2_TR(0x6b040e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b0411:{NFSU2_TR(0x6b0411);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0414:{NFSU2_TR(0x6b0414);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b0417:{NFSU2_TR(0x6b0417);
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
B6b0418:{NFSU2_TR(0x6b0418);
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
B6b0419:{NFSU2_TR(0x6b0419);
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
B6b041a:{NFSU2_TR(0x6b041a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b041d:{NFSU2_TR(0x6b041d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B6b0420:{NFSU2_TR(0x6b0420);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b0422:{NFSU2_TR(0x6b0422);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b0425:{NFSU2_TR(0x6b0425);
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
B6b0426:{NFSU2_TR(0x6b0426);
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
B6b0427:{NFSU2_TR(0x6b0427);
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
B6b0428:{NFSU2_TR(0x6b0428);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b042b:{NFSU2_TR(0x6b042b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b042e:{NFSU2_TR(0x6b042e);
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
B6b042f:{NFSU2_TR(0x6b042f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b0446;}}
}
B6b0431:L6b0431:{c.instructions+=1;NFSU2_TR(0x6b0431);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0434:L6b0434:{c.instructions+=7;NFSU2_TR(0x6b0434);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b0437:{NFSU2_TR(0x6b0437);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b043a:{NFSU2_TR(0x6b043a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b043d:{NFSU2_TR(0x6b043d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b0440:{NFSU2_TR(0x6b0440);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b0443:{NFSU2_TR(0x6b0443);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6b0444:{NFSU2_TR(0x6b0444);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0434u);}goto L6b0434;}}
}
B6b0446:L6b0446:{c.instructions+=3;NFSU2_TR(0x6b0446);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b044c:{NFSU2_TR(0x6b044c);
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
}
B6b0451:{NFSU2_TR(0x6b0451);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b0535;}}
}
B6b0457:L6b0457:{c.instructions+=7;NFSU2_TR(0x6b0457);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b045a:{NFSU2_TR(0x6b045a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b0460:{NFSU2_TR(0x6b0460);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b0463:{NFSU2_TR(0x6b0463);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0469:{NFSU2_TR(0x6b0469);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b046a:{NFSU2_TR(0x6b046a);
__builtin_memmove((R+4),(R+12),4);
}
B6b046c:{NFSU2_TR(0x6b046c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0471ull));
TAIL_STATIC(0x699b26u,699);
}
B6b0471:L6b0471:{c.instructions+=2;NFSU2_TR(0x6b0471);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6b0473:{NFSU2_TR(0x6b0473);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b0535;}}
}
B6b0479:L6b0479:{c.instructions+=2;NFSU2_TR(0x6b0479);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b047d:{NFSU2_TR(0x6b047d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b0480:L6b0480:{c.instructions+=8;NFSU2_TR(0x6b0480);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0483:{NFSU2_TR(0x6b0483);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0486:{NFSU2_TR(0x6b0486);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b048a:{NFSU2_TR(0x6b048a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b048d:{NFSU2_TR(0x6b048d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0490:{NFSU2_TR(0x6b0490);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0493:{NFSU2_TR(0x6b0493);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b0496:{NFSU2_TR(0x6b0496);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b01dcu);}goto L6b01dc;}}
}
B6b049c:L6b049c:{c.instructions+=2;NFSU2_TR(0x6b049c);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b049e:{NFSU2_TR(0x6b049e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b04a3ull));
TAIL_STATIC(0x699317u,699);
}
B6b04a3:L6b04a3:{c.instructions+=2;NFSU2_TR(0x6b04a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b04a5:{NFSU2_TR(0x6b04a5);
if(r1(R+518)){{goto L6b04b3;}}
}
B6b04a7:L6b04a7:{c.instructions+=2;NFSU2_TR(0x6b04a7);
__builtin_memmove((R+4),(R+0),4);
}
B6b04a9:{NFSU2_TR(0x6b04a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b04aeull));
TAIL_STATIC(0x698e7du,698);
}
B6b04ae:L6b04ae:{c.instructions+=2;NFSU2_TR(0x6b04ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b04b1:{NFSU2_TR(0x6b04b1);
{goto L6b04b7;}
}
B6b04b3:L6b04b3:{c.instructions+=1;NFSU2_TR(0x6b04b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b04b7:L6b04b7:{c.instructions+=2;NFSU2_TR(0x6b04b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b04bb:{NFSU2_TR(0x6b04bb);
if(r1(R+518)){{goto L6b0535;}}
}
B6b04bd:L6b04bd:{c.instructions+=3;NFSU2_TR(0x6b04bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b04c0:{NFSU2_TR(0x6b04c0);
__builtin_memmove((R+4),(R+12),4);
}
B6b04c2:{NFSU2_TR(0x6b04c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b04c7ull));
TAIL_STATIC(0x699b26u,699);
}
B6b04c7:L6b04c7:{c.instructions+=2;NFSU2_TR(0x6b04c7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6b04c9:{NFSU2_TR(0x6b04c9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b0535;}}
}
B6b04cb:L6b04cb:{c.instructions+=3;NFSU2_TR(0x6b04cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b04ce:{NFSU2_TR(0x6b04ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b04cf:{NFSU2_TR(0x6b04cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b04d4ull));
TAIL_STATIC(0x6995c1u,699);
}
B6b04d4:L6b04d4:{c.instructions+=3;NFSU2_TR(0x6b04d4);
__builtin_memmove((R+28),(R+0),4);
}
B6b04d6:{NFSU2_TR(0x6b04d6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6b04d8:{NFSU2_TR(0x6b04d8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b0520;}}
}
B6b04da:L6b04da:{c.instructions+=3;NFSU2_TR(0x6b04da);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b04e0:{NFSU2_TR(0x6b04e0);
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
}
B6b04e5:{NFSU2_TR(0x6b04e5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b0535;}}
}
B6b04e7:L6b04e7:{c.instructions+=6;NFSU2_TR(0x6b04e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b04ed:{NFSU2_TR(0x6b04ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b04f0:{NFSU2_TR(0x6b04f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b04f4:{NFSU2_TR(0x6b04f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b04f7:{NFSU2_TR(0x6b04f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b04fd:{NFSU2_TR(0x6b04fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B6b0500:L6b0500:{c.instructions+=3;NFSU2_TR(0x6b0500);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0503:{NFSU2_TR(0x6b0503);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b0504:{NFSU2_TR(0x6b0504);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b0507:L6b0507:{c.instructions+=2;NFSU2_TR(0x6b0507);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b050a:{NFSU2_TR(0x6b050a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0192u);}goto L6b0192;}}
}
B6b0510:L6b0510:{c.instructions+=1;NFSU2_TR(0x6b0510);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b0512:L6b0512:{c.instructions+=3;NFSU2_TR(0x6b0512);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0515:{NFSU2_TR(0x6b0515);
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
B6b0517:{NFSU2_TR(0x6b0517);
if(r1(R+518)){{goto L6b0520;}}
}
B6b0519:L6b0519:{c.instructions+=2;NFSU2_TR(0x6b0519);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b051b:{NFSU2_TR(0x6b051b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0520ull));
TAIL_STATIC(0x6739efu,673);
}
B6b0520:L6b0520:{c.instructions+=3;NFSU2_TR(0x6b0520);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0523:{NFSU2_TR(0x6b0523);
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
B6b0525:{NFSU2_TR(0x6b0525);
if(r1(R+518)){{goto L6b052e;}}
}
B6b0527:L6b0527:{c.instructions+=2;NFSU2_TR(0x6b0527);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0529:{NFSU2_TR(0x6b0529);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b052eull));
TAIL_STATIC(0x6739efu,673);
}
B6b052e:L6b052e:{c.instructions+=6;NFSU2_TR(0x6b052e);
__builtin_memmove((R+0),(R+28),4);
}
B6b0530:{NFSU2_TR(0x6b0530);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b0531:{NFSU2_TR(0x6b0531);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b0532:{NFSU2_TR(0x6b0532);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b0533:{NFSU2_TR(0x6b0533);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b0534:{NFSU2_TR(0x6b0534);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b0535:L6b0535:{c.instructions+=2;NFSU2_TR(0x6b0535);
w4(R+28,u32(0x8007000eull));
}
B6b053a:{NFSU2_TR(0x6b053a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0512u);}goto L6b0512;}
}
B6b053c:L6b053c:{c.instructions+=11;NFSU2_TR(0x6b053c);
__builtin_memmove((R+28),(R+28),4);
}
B6b053e:{NFSU2_TR(0x6b053e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b053f:{NFSU2_TR(0x6b053f);
__builtin_memmove((R+20),(R+16),4);
}
B6b0541:{NFSU2_TR(0x6b0541);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B6b0544:{NFSU2_TR(0x6b0544);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0548:{NFSU2_TR(0x6b0548);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0549:{NFSU2_TR(0x6b0549);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b054a:{NFSU2_TR(0x6b054a);
__builtin_memmove((R+24),(R+4),4);
}
B6b054c:{NFSU2_TR(0x6b054c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0550:{NFSU2_TR(0x6b0550);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0551:{NFSU2_TR(0x6b0551);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b0578;}}
}
B6b0553:L6b0553:{c.instructions+=3;NFSU2_TR(0x6b0553);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b0559:{NFSU2_TR(0x6b0559);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b055c:{NFSU2_TR(0x6b055c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b055f:L6b055f:{c.instructions+=3;NFSU2_TR(0x6b055f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b0561:{NFSU2_TR(0x6b0561);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0564:{NFSU2_TR(0x6b0564);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b0572;}}
}
B6b0566:L6b0566:{c.instructions+=3;NFSU2_TR(0x6b0566);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0569:{NFSU2_TR(0x6b0569);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b056c:{NFSU2_TR(0x6b056c);
if(r1(R+512)){{goto L6b0572;}}
}
B6b056e:L6b056e:{c.instructions+=2;NFSU2_TR(0x6b056e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b056f:{NFSU2_TR(0x6b056f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0572:L6b0572:{c.instructions+=3;NFSU2_TR(0x6b0572);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6b0575:{NFSU2_TR(0x6b0575);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6b0576:{NFSU2_TR(0x6b0576);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b055fu);}goto L6b055f;}}
}
B6b0578:L6b0578:{c.instructions+=6;NFSU2_TR(0x6b0578);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b057e:{NFSU2_TR(0x6b057e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0581:{NFSU2_TR(0x6b0581);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6b0583:{NFSU2_TR(0x6b0583);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0586:{NFSU2_TR(0x6b0586);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0589:{NFSU2_TR(0x6b0589);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b0a51;}}
}
B6b058f:L6b058f:{c.instructions+=5;NFSU2_TR(0x6b058f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0595:{NFSU2_TR(0x6b0595);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b0598:{NFSU2_TR(0x6b0598);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6b059b:{NFSU2_TR(0x6b059b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b059d:{NFSU2_TR(0x6b059d);
if(r1(R+518)){{goto L6b0a45;}}
}
B6b05a3:L6b05a3:{c.instructions+=3;NFSU2_TR(0x6b05a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b05a5:{NFSU2_TR(0x6b05a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b05a7:{NFSU2_TR(0x6b05a7);
if(r1(R+518)){{goto L6b0a45;}}
}
B6b05ad:L6b05ad:{c.instructions+=6;NFSU2_TR(0x6b05ad);
__builtin_memmove((R+28),(R+0),4);
}
B6b05af:{NFSU2_TR(0x6b05af);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B6b05b5:{NFSU2_TR(0x6b05b5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6b05ba:{NFSU2_TR(0x6b05ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b05bf:{NFSU2_TR(0x6b05bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b05c2:{NFSU2_TR(0x6b05c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b072b;}}
}
B6b05c8:L6b05c8:{c.instructions+=9;NFSU2_TR(0x6b05c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b05cb:{NFSU2_TR(0x6b05cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b05ce:{NFSU2_TR(0x6b05ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b05d0:{NFSU2_TR(0x6b05d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b05d3:{NFSU2_TR(0x6b05d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b05d6:{NFSU2_TR(0x6b05d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b05d9:{NFSU2_TR(0x6b05d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b05dc:{NFSU2_TR(0x6b05dc);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6b05e0:{NFSU2_TR(0x6b05e0);
if(r1(R+518)){{goto L6b0728;}}
}
B6b05e6:L6b05e6:{c.instructions+=7;NFSU2_TR(0x6b05e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b05e9:{NFSU2_TR(0x6b05e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b05ec:{NFSU2_TR(0x6b05ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b05ef:{NFSU2_TR(0x6b05ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b05f2:{NFSU2_TR(0x6b05f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b05f5:{NFSU2_TR(0x6b05f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6b05f9:{NFSU2_TR(0x6b05f9);
if(r1(R+518)){{goto L6b0728;}}
}
B6b05ff:L6b05ff:{c.instructions+=7;NFSU2_TR(0x6b05ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b0602:{NFSU2_TR(0x6b0602);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b0605:{NFSU2_TR(0x6b0605);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b0608:{NFSU2_TR(0x6b0608);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b060b:{NFSU2_TR(0x6b060b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b060e:{NFSU2_TR(0x6b060e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6b0612:{NFSU2_TR(0x6b0612);
if(r1(R+518)){{goto L6b072b;}}
}
B6b0618:L6b0618:{c.instructions+=2;NFSU2_TR(0x6b0618);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b061a:{NFSU2_TR(0x6b061a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b061full));
TAIL_STATIC(0x699317u,699);
}
B6b061f:L6b061f:{c.instructions+=2;NFSU2_TR(0x6b061f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b0621:{NFSU2_TR(0x6b0621);
if(r1(R+518)){{goto L6b062f;}}
}
B6b0623:L6b0623:{c.instructions+=2;NFSU2_TR(0x6b0623);
__builtin_memmove((R+4),(R+0),4);
}
B6b0625:{NFSU2_TR(0x6b0625);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b062aull));
TAIL_STATIC(0x698e7du,698);
}
B6b062a:L6b062a:{c.instructions+=2;NFSU2_TR(0x6b062a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b062d:{NFSU2_TR(0x6b062d);
{goto L6b0633;}
}
B6b062f:L6b062f:{c.instructions+=1;NFSU2_TR(0x6b062f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0633:L6b0633:{c.instructions+=3;NFSU2_TR(0x6b0633);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0636:{NFSU2_TR(0x6b0636);
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
B6b0638:{NFSU2_TR(0x6b0638);
if(r1(R+518)){{goto L6b0a8e;}}
}
B6b063e:L6b063e:{c.instructions+=8;NFSU2_TR(0x6b063e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0640:{NFSU2_TR(0x6b0640);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0641:{NFSU2_TR(0x6b0641);
__builtin_memmove((R+0),(R+28),4);
}
B6b0643:{NFSU2_TR(0x6b0643);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6b0648:{NFSU2_TR(0x6b0648);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0649:{NFSU2_TR(0x6b0649);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6b064e:{NFSU2_TR(0x6b064e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b064f:{NFSU2_TR(0x6b064f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0654ull));
TAIL_STATIC(0x699362u,699);
}
B6b0654:L6b0654:{c.instructions+=3;NFSU2_TR(0x6b0654);
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
B6b0656:{NFSU2_TR(0x6b0656);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0659:{NFSU2_TR(0x6b0659);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b0aac;}}
}
B6b065f:L6b065f:{c.instructions+=3;NFSU2_TR(0x6b065f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0662:{NFSU2_TR(0x6b0662);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0663:{NFSU2_TR(0x6b0663);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0668ull));
TAIL_STATIC(0x698eb3u,698);
}
B6b0668:L6b0668:{c.instructions+=3;NFSU2_TR(0x6b0668);
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
B6b066a:{NFSU2_TR(0x6b066a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b066d:{NFSU2_TR(0x6b066d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b0aac;}}
}
B6b0673:L6b0673:{c.instructions+=3;NFSU2_TR(0x6b0673);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0677:{NFSU2_TR(0x6b0677);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b0679:{NFSU2_TR(0x6b0679);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b06e6;}}
}
B6b067b:L6b067b:{c.instructions+=20;NFSU2_TR(0x6b067b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b067e:{NFSU2_TR(0x6b067e);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6b0680:{NFSU2_TR(0x6b0680);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0683:{NFSU2_TR(0x6b0683);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0686:{NFSU2_TR(0x6b0686);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b0689:{NFSU2_TR(0x6b0689);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b068c:{NFSU2_TR(0x6b068c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6b068f:{NFSU2_TR(0x6b068f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b0692:{NFSU2_TR(0x6b0692);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b0695:{NFSU2_TR(0x6b0695);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0698:{NFSU2_TR(0x6b0698);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b069b:{NFSU2_TR(0x6b069b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b069c:{NFSU2_TR(0x6b069c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b069d:{NFSU2_TR(0x6b069d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b06a0:{NFSU2_TR(0x6b06a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b06a3:{NFSU2_TR(0x6b06a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b06a6:{NFSU2_TR(0x6b06a6);
__builtin_memmove((R+4),(R+24),4);
}
B6b06a8:{NFSU2_TR(0x6b06a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b06ab:{NFSU2_TR(0x6b06ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b06b1:{NFSU2_TR(0x6b06b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b06b6ull));
TAIL_STATIC(0x699c39u,699);
}
B6b06b6:L6b06b6:{c.instructions+=10;NFSU2_TR(0x6b06b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b06b9:{NFSU2_TR(0x6b06b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b06bc:{NFSU2_TR(0x6b06bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b06bf:{NFSU2_TR(0x6b06bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b06c2:{NFSU2_TR(0x6b06c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b06c5:{NFSU2_TR(0x6b06c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b06c8:{NFSU2_TR(0x6b06c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b06cb:{NFSU2_TR(0x6b06cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b06ce:{NFSU2_TR(0x6b06ce);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+18),u32(0xffffffffull)));
w4(U+22,u32(u32(r4(U+18))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6b06d2:{NFSU2_TR(0x6b06d2);
if(r1(R+518)){{goto L6b0a8e;}}
}
B6b06d8:L6b06d8:{c.instructions+=4;NFSU2_TR(0x6b06d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b06db:{NFSU2_TR(0x6b06db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b06de:{NFSU2_TR(0x6b06de);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b06e1:{NFSU2_TR(0x6b06e1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b067bu);}goto L6b067b;}}
}
B6b06e3:L6b06e3:{c.instructions+=1;NFSU2_TR(0x6b06e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b06e6:L6b06e6:{c.instructions+=3;NFSU2_TR(0x6b06e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b06e9:{NFSU2_TR(0x6b06e9);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x200ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6b06f3:{NFSU2_TR(0x6b06f3);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b0a8e;}}
}
B6b06f9:L6b06f9:{c.instructions+=3;NFSU2_TR(0x6b06f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b06fc:{NFSU2_TR(0x6b06fc);
__builtin_memmove((R+4),(R+24),4);
}
B6b06fe:{NFSU2_TR(0x6b06fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0703ull));
TAIL_STATIC(0x699b26u,699);
}
B6b0703:L6b0703:{c.instructions+=3;NFSU2_TR(0x6b0703);
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
B6b0705:{NFSU2_TR(0x6b0705);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0708:{NFSU2_TR(0x6b0708);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b0aac;}}
}
B6b070e:L6b070e:{c.instructions+=6;NFSU2_TR(0x6b070e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0714:{NFSU2_TR(0x6b0714);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b071a:{NFSU2_TR(0x6b071a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b071d:{NFSU2_TR(0x6b071d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b0720:{NFSU2_TR(0x6b0720);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0726:{NFSU2_TR(0x6b0726);
{goto L6b072b;}
}
B6b0728:L6b0728:{c.instructions+=1;NFSU2_TR(0x6b0728);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b072b:L6b072b:{c.instructions+=4;NFSU2_TR(0x6b072b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b072d:{NFSU2_TR(0x6b072d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6b0732:{NFSU2_TR(0x6b0732);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b0737:{NFSU2_TR(0x6b0737);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b09df;}}
}
B6b073d:L6b073d:{c.instructions+=4;NFSU2_TR(0x6b073d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0743:{NFSU2_TR(0x6b0743);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6b0748:{NFSU2_TR(0x6b0748);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b074d:{NFSU2_TR(0x6b074d);
if(r1(R+518)){{goto L6b09df;}}
}
B6b0753:L6b0753:{c.instructions+=4;NFSU2_TR(0x6b0753);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b0755:{NFSU2_TR(0x6b0755);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b0756:{NFSU2_TR(0x6b0756);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b0758:{NFSU2_TR(0x6b0758);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b0772;}}
}
B6b075a:L6b075a:{c.instructions+=3;NFSU2_TR(0x6b075a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b075d:{NFSU2_TR(0x6b075d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b075f:{NFSU2_TR(0x6b075f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b0762:L6b0762:{c.instructions+=2;NFSU2_TR(0x6b0762);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+4))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b0764:{NFSU2_TR(0x6b0764);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b0a56;}}
}
B6b076a:L6b076a:{c.instructions+=4;NFSU2_TR(0x6b076a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b076b:{NFSU2_TR(0x6b076b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b076e:{NFSU2_TR(0x6b076e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6b0770:{NFSU2_TR(0x6b0770);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0762u);}goto L6b0762;}}
}
B6b0772:L6b0772:{c.instructions+=2;NFSU2_TR(0x6b0772);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0774:{NFSU2_TR(0x6b0774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0779ull));
TAIL_STATIC(0x699317u,699);
}
B6b0779:L6b0779:{c.instructions+=2;NFSU2_TR(0x6b0779);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b077b:{NFSU2_TR(0x6b077b);
if(r1(R+518)){{goto L6b0788;}}
}
B6b077d:L6b077d:{c.instructions+=2;NFSU2_TR(0x6b077d);
__builtin_memmove((R+4),(R+0),4);
}
B6b077f:{NFSU2_TR(0x6b077f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0784ull));
TAIL_STATIC(0x698e7du,698);
}
B6b0784:L6b0784:{c.instructions+=2;NFSU2_TR(0x6b0784);
__builtin_memmove((R+28),(R+0),4);
}
B6b0786:{NFSU2_TR(0x6b0786);
{goto L6b078a;}
}
B6b0788:L6b0788:{c.instructions+=1;NFSU2_TR(0x6b0788);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b078a:L6b078a:{c.instructions+=2;NFSU2_TR(0x6b078a);
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
B6b078c:{NFSU2_TR(0x6b078c);
if(r1(R+518)){{goto L6b0a8e;}}
}
B6b0792:L6b0792:{c.instructions+=3;NFSU2_TR(0x6b0792);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0793:{NFSU2_TR(0x6b0793);
__builtin_memmove((R+4),(R+24),4);
}
B6b0795:{NFSU2_TR(0x6b0795);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b079aull));
TAIL_STATIC(0x699b26u,699);
}
B6b079a:L6b079a:{c.instructions+=4;NFSU2_TR(0x6b079a);
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
B6b079c:{NFSU2_TR(0x6b079c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b079f:{NFSU2_TR(0x6b079f);
__builtin_memmove((R+4),(R+28),4);
}
B6b07a1:{NFSU2_TR(0x6b07a1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b0a85;}}
}
B6b07a7:L6b07a7:{c.instructions+=5;NFSU2_TR(0x6b07a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b07a9:{NFSU2_TR(0x6b07a9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b07ab:{NFSU2_TR(0x6b07ab);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b07ad:{NFSU2_TR(0x6b07ad);
u8 U[4];
w4(U+0,u32(0x70300001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b07b2:{NFSU2_TR(0x6b07b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b07b7ull));
TAIL_STATIC(0x699362u,699);
}
B6b07b7:L6b07b7:{c.instructions+=3;NFSU2_TR(0x6b07b7);
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
B6b07b9:{NFSU2_TR(0x6b07b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b07bc:{NFSU2_TR(0x6b07bc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b0aac;}}
}
B6b07c2:L6b07c2:{c.instructions+=3;NFSU2_TR(0x6b07c2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b07c3:{NFSU2_TR(0x6b07c3);
__builtin_memmove((R+4),(R+28),4);
}
B6b07c5:{NFSU2_TR(0x6b07c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b07caull));
TAIL_STATIC(0x698eb3u,698);
}
B6b07ca:L6b07ca:{c.instructions+=3;NFSU2_TR(0x6b07ca);
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
B6b07cc:{NFSU2_TR(0x6b07cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b07cf:{NFSU2_TR(0x6b07cf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b0aac;}}
}
B6b07d5:L6b07d5:{c.instructions+=13;NFSU2_TR(0x6b07d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b07d8:{NFSU2_TR(0x6b07d8);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6b07de:{NFSU2_TR(0x6b07de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b07e1:{NFSU2_TR(0x6b07e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b07e3:{NFSU2_TR(0x6b07e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b07e4:{NFSU2_TR(0x6b07e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b07e5:{NFSU2_TR(0x6b07e5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b07e8:{NFSU2_TR(0x6b07e8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b07ea:{NFSU2_TR(0x6b07ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6b07ec:{NFSU2_TR(0x6b07ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b07ee:{NFSU2_TR(0x6b07ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b07f1:{NFSU2_TR(0x6b07f1);
__builtin_memmove((R+4),(R+24),4);
}
B6b07f3:{NFSU2_TR(0x6b07f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b07f8ull));
TAIL_STATIC(0x699c39u,699);
}
B6b07f8:L6b07f8:{c.instructions+=11;NFSU2_TR(0x6b07f8);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6b07fe:{NFSU2_TR(0x6b07fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0801:{NFSU2_TR(0x6b0801);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0802:{NFSU2_TR(0x6b0802);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0803:{NFSU2_TR(0x6b0803);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b0806:{NFSU2_TR(0x6b0806);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0808:{NFSU2_TR(0x6b0808);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b080b:{NFSU2_TR(0x6b080b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b080d:{NFSU2_TR(0x6b080d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b0810:{NFSU2_TR(0x6b0810);
__builtin_memmove((R+4),(R+24),4);
}
B6b0812:{NFSU2_TR(0x6b0812);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0817ull));
TAIL_STATIC(0x699c39u,699);
}
B6b0817:L6b0817:{c.instructions+=5;NFSU2_TR(0x6b0817);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b081a:{NFSU2_TR(0x6b081a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b081d:{NFSU2_TR(0x6b081d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0820:{NFSU2_TR(0x6b0820);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B6b0824:{NFSU2_TR(0x6b0824);
if(r1(R+518)){{goto L6b0a8e;}}
}
B6b082a:L6b082a:{c.instructions+=2;NFSU2_TR(0x6b082a);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
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
B6b082e:{NFSU2_TR(0x6b082e);
if(r1(R+518)){{goto L6b0a8e;}}
}
B6b0834:L6b0834:{c.instructions+=9;NFSU2_TR(0x6b0834);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0835:{NFSU2_TR(0x6b0835);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6b0837:{NFSU2_TR(0x6b0837);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0838:{NFSU2_TR(0x6b0838);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b083b:{NFSU2_TR(0x6b083b);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b083d:{NFSU2_TR(0x6b083d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b0840:{NFSU2_TR(0x6b0840);
__builtin_memmove((R+4),(R+24),4);
}
B6b0842:{NFSU2_TR(0x6b0842);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b0848:{NFSU2_TR(0x6b0848);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b084dull));
TAIL_STATIC(0x699c39u,699);
}
B6b084d:L6b084d:{c.instructions+=5;NFSU2_TR(0x6b084d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0850:{NFSU2_TR(0x6b0850);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6b0852:{NFSU2_TR(0x6b0852);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0855:{NFSU2_TR(0x6b0855);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0xffffffffull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6b0858:{NFSU2_TR(0x6b0858);
if(r1(R+518)){{goto L6b0a8e;}}
}
B6b085e:L6b085e:{c.instructions+=5;NFSU2_TR(0x6b085e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0861:{NFSU2_TR(0x6b0861);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b0863:{NFSU2_TR(0x6b0863);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b0865:{NFSU2_TR(0x6b0865);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0868:{NFSU2_TR(0x6b0868);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b08b7;}}
}
B6b086a:L6b086a:{c.instructions+=5;NFSU2_TR(0x6b086a);
__builtin_memmove((R+8),(R+4),4);
}
B6b086c:{NFSU2_TR(0x6b086c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6b086f:{NFSU2_TR(0x6b086f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6b0872:{NFSU2_TR(0x6b0872);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0875:{NFSU2_TR(0x6b0875);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0878:L6b0878:{c.instructions+=23;NFSU2_TR(0x6b0878);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b087b:{NFSU2_TR(0x6b087b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b087d:{NFSU2_TR(0x6b087d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b0880:{NFSU2_TR(0x6b0880);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b0883:{NFSU2_TR(0x6b0883);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0886:{NFSU2_TR(0x6b0886);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0889:{NFSU2_TR(0x6b0889);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b088d:{NFSU2_TR(0x6b088d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6b088f:{NFSU2_TR(0x6b088f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b0891:{NFSU2_TR(0x6b0891);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0894:{NFSU2_TR(0x6b0894);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b0897:{NFSU2_TR(0x6b0897);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b089a:{NFSU2_TR(0x6b089a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6b089c:{NFSU2_TR(0x6b089c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b089f:{NFSU2_TR(0x6b089f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b08a2:{NFSU2_TR(0x6b08a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b08a5:{NFSU2_TR(0x6b08a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b08a8:{NFSU2_TR(0x6b08a8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b08a9:{NFSU2_TR(0x6b08a9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6b08ac:{NFSU2_TR(0x6b08ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b08af:{NFSU2_TR(0x6b08af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b08b2:{NFSU2_TR(0x6b08b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b08b5:{NFSU2_TR(0x6b08b5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0878u);}goto L6b0878;}}
}
B6b08b7:L6b08b7:{c.instructions+=4;NFSU2_TR(0x6b08b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b08bd:{NFSU2_TR(0x6b08bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b08c0:{NFSU2_TR(0x6b08c0);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x200ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6b08c5:{NFSU2_TR(0x6b08c5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b0a8e;}}
}
B6b08cb:L6b08cb:{c.instructions+=8;NFSU2_TR(0x6b08cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b08d1:{NFSU2_TR(0x6b08d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b08d4:{NFSU2_TR(0x6b08d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b08d6:{NFSU2_TR(0x6b08d6);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6b08dc:{NFSU2_TR(0x6b08dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b08de:{NFSU2_TR(0x6b08de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b08df:{NFSU2_TR(0x6b08df);
__builtin_memmove((R+4),(R+24),4);
}
B6b08e1:{NFSU2_TR(0x6b08e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b08e4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b08e4:L6b08e4:{c.instructions+=2;NFSU2_TR(0x6b08e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b08e6:{NFSU2_TR(0x6b08e6);
if(r1(R+518)){{goto L6b09c6;}}
}
B6b08ec:L6b08ec:{c.instructions+=2;NFSU2_TR(0x6b08ec);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b08ee:{NFSU2_TR(0x6b08ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b08f3ull));
TAIL_STATIC(0x699317u,699);
}
B6b08f3:L6b08f3:{c.instructions+=2;NFSU2_TR(0x6b08f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b08f5:{NFSU2_TR(0x6b08f5);
if(r1(R+518)){{goto L6b0903;}}
}
B6b08f7:L6b08f7:{c.instructions+=2;NFSU2_TR(0x6b08f7);
__builtin_memmove((R+4),(R+0),4);
}
B6b08f9:{NFSU2_TR(0x6b08f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b08feull));
TAIL_STATIC(0x698e7du,698);
}
B6b08fe:L6b08fe:{c.instructions+=2;NFSU2_TR(0x6b08fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0901:{NFSU2_TR(0x6b0901);
{goto L6b0907;}
}
B6b0903:L6b0903:{c.instructions+=1;NFSU2_TR(0x6b0903);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0907:L6b0907:{c.instructions+=3;NFSU2_TR(0x6b0907);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b090a:{NFSU2_TR(0x6b090a);
__builtin_memmove((R+4),(R+24),4);
}
B6b090c:{NFSU2_TR(0x6b090c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0911ull));
TAIL_STATIC(0x699b26u,699);
}
B6b0911:L6b0911:{c.instructions+=4;NFSU2_TR(0x6b0911);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6b0913:{NFSU2_TR(0x6b0913);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0916:{NFSU2_TR(0x6b0916);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0919:{NFSU2_TR(0x6b0919);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b0a81;}}
}
B6b091f:L6b091f:{c.instructions+=2;NFSU2_TR(0x6b091f);
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
B6b0921:{NFSU2_TR(0x6b0921);
if(r1(R+518)){{goto L6b0a8e;}}
}
B6b0927:L6b0927:{c.instructions+=5;NFSU2_TR(0x6b0927);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0929:{NFSU2_TR(0x6b0929);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b092b:{NFSU2_TR(0x6b092b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b092d:{NFSU2_TR(0x6b092d);
u8 U[4];
w4(U+0,u32(0x20400001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0932:{NFSU2_TR(0x6b0932);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0937ull));
TAIL_STATIC(0x699362u,699);
}
B6b0937:L6b0937:{c.instructions+=3;NFSU2_TR(0x6b0937);
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
B6b0939:{NFSU2_TR(0x6b0939);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b093c:{NFSU2_TR(0x6b093c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b0aac;}}
}
B6b0942:L6b0942:{c.instructions+=3;NFSU2_TR(0x6b0942);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0945:{NFSU2_TR(0x6b0945);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0946:{NFSU2_TR(0x6b0946);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b094bull));
TAIL_STATIC(0x698eb3u,698);
}
B6b094b:L6b094b:{c.instructions+=3;NFSU2_TR(0x6b094b);
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
B6b094d:{NFSU2_TR(0x6b094d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0950:{NFSU2_TR(0x6b0950);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b0aac;}}
}
B6b0956:L6b0956:{c.instructions+=18;NFSU2_TR(0x6b0956);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0959:{NFSU2_TR(0x6b0959);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6b095b:{NFSU2_TR(0x6b095b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b095d:{NFSU2_TR(0x6b095d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0960:{NFSU2_TR(0x6b0960);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b0963:{NFSU2_TR(0x6b0963);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6b0965:{NFSU2_TR(0x6b0965);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0968:{NFSU2_TR(0x6b0968);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b096b:{NFSU2_TR(0x6b096b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b096e:{NFSU2_TR(0x6b096e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b096f:{NFSU2_TR(0x6b096f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0970:{NFSU2_TR(0x6b0970);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b0973:{NFSU2_TR(0x6b0973);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0975:{NFSU2_TR(0x6b0975);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b0977:{NFSU2_TR(0x6b0977);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0979:{NFSU2_TR(0x6b0979);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b097f:{NFSU2_TR(0x6b097f);
__builtin_memmove((R+4),(R+24),4);
}
B6b0981:{NFSU2_TR(0x6b0981);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0986ull));
TAIL_STATIC(0x699c39u,699);
}
B6b0986:L6b0986:{c.instructions+=12;NFSU2_TR(0x6b0986);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0989:{NFSU2_TR(0x6b0989);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6b098b:{NFSU2_TR(0x6b098b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b098e:{NFSU2_TR(0x6b098e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b0990:{NFSU2_TR(0x6b0990);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0993:{NFSU2_TR(0x6b0993);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b0996:{NFSU2_TR(0x6b0996);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0999:{NFSU2_TR(0x6b0999);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b09a0:{NFSU2_TR(0x6b09a0);
u8 U[4];
w4(U+0,u32(0x20500001ull));
s4(u32(r4(R+28)),r4(U+0));
}
B6b09a6:{NFSU2_TR(0x6b09a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b09ac:{NFSU2_TR(0x6b09ac);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x200ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6b09b1:{NFSU2_TR(0x6b09b1);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b0a8e;}}
}
B6b09b7:L6b09b7:{c.instructions+=3;NFSU2_TR(0x6b09b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b09bd:{NFSU2_TR(0x6b09bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b09c0:{NFSU2_TR(0x6b09c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b09c6:L6b09c6:{c.instructions+=5;NFSU2_TR(0x6b09c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b09c9:{NFSU2_TR(0x6b09c9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6b09ce:{NFSU2_TR(0x6b09ce);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x70f00000ull))));
}
B6b09d3:{NFSU2_TR(0x6b09d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b09dd:{NFSU2_TR(0x6b09dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6b09df:L6b09df:{c.instructions+=2;NFSU2_TR(0x6b09df);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b09e1:{NFSU2_TR(0x6b09e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b09e6ull));
TAIL_STATIC(0x699317u,699);
}
B6b09e6:L6b09e6:{c.instructions+=2;NFSU2_TR(0x6b09e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b09e8:{NFSU2_TR(0x6b09e8);
if(r1(R+518)){{goto L6b09f5;}}
}
B6b09ea:L6b09ea:{c.instructions+=2;NFSU2_TR(0x6b09ea);
__builtin_memmove((R+4),(R+0),4);
}
B6b09ec:{NFSU2_TR(0x6b09ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b09f1ull));
TAIL_STATIC(0x698e7du,698);
}
B6b09f1:L6b09f1:{c.instructions+=2;NFSU2_TR(0x6b09f1);
__builtin_memmove((R+28),(R+0),4);
}
B6b09f3:{NFSU2_TR(0x6b09f3);
{goto L6b09f7;}
}
B6b09f5:L6b09f5:{c.instructions+=1;NFSU2_TR(0x6b09f5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b09f7:L6b09f7:{c.instructions+=2;NFSU2_TR(0x6b09f7);
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
B6b09f9:{NFSU2_TR(0x6b09f9);
if(r1(R+518)){{goto L6b0a8e;}}
}
B6b09ff:L6b09ff:{c.instructions+=3;NFSU2_TR(0x6b09ff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0a00:{NFSU2_TR(0x6b0a00);
__builtin_memmove((R+4),(R+28),4);
}
B6b0a02:{NFSU2_TR(0x6b0a02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0a07ull));
TAIL_STATIC(0x6995c1u,699);
}
B6b0a07:L6b0a07:{c.instructions+=3;NFSU2_TR(0x6b0a07);
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
B6b0a09:{NFSU2_TR(0x6b0a09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0a0c:{NFSU2_TR(0x6b0a0c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b0aac;}}
}
B6b0a12:L6b0a12:{c.instructions+=2;NFSU2_TR(0x6b0a12);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x200ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6b0a1c:{NFSU2_TR(0x6b0a1c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b0a8e;}}
}
B6b0a1e:L6b0a1e:{c.instructions+=3;NFSU2_TR(0x6b0a1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0a1f:{NFSU2_TR(0x6b0a1f);
__builtin_memmove((R+4),(R+24),4);
}
B6b0a21:{NFSU2_TR(0x6b0a21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0a26ull));
TAIL_STATIC(0x699b26u,699);
}
B6b0a26:L6b0a26:{c.instructions+=3;NFSU2_TR(0x6b0a26);
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
B6b0a28:{NFSU2_TR(0x6b0a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0a2b:{NFSU2_TR(0x6b0a2b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b0aac;}}
}
B6b0a2d:L6b0a2d:{c.instructions+=5;NFSU2_TR(0x6b0a2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0a33:{NFSU2_TR(0x6b0a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0a39:{NFSU2_TR(0x6b0a39);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b0a3c:{NFSU2_TR(0x6b0a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0a42:{NFSU2_TR(0x6b0a42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0a45:L6b0a45:{c.instructions+=3;NFSU2_TR(0x6b0a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0a48:{NFSU2_TR(0x6b0a48);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B6b0a4b:{NFSU2_TR(0x6b0a4b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b058fu);}goto L6b058f;}}
}
B6b0a51:L6b0a51:{c.instructions+=2;NFSU2_TR(0x6b0a51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0a54:{NFSU2_TR(0x6b0a54);
{goto L6b0aa4;}
}
B6b0a56:L6b0a56:{c.instructions+=8;NFSU2_TR(0x6b0a56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0a5c:{NFSU2_TR(0x6b0a5c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6b0a61:{NFSU2_TR(0x6b0a61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0a62:{NFSU2_TR(0x6b0a62);
u8 U[4];
w4(U+0,u32(0x7bc15cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0a67:{NFSU2_TR(0x6b0a67);
u8 U[4];
w4(U+0,u32(0x11caull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0a6c:{NFSU2_TR(0x6b0a6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b0a6f:{NFSU2_TR(0x6b0a6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0a70:{NFSU2_TR(0x6b0a70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0a75ull));
TAIL_STATIC(0x69e936u,69e);
}
B6b0a75:L6b0a75:{c.instructions+=3;NFSU2_TR(0x6b0a75);
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
B6b0a78:{NFSU2_TR(0x6b0a78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0a7f:{NFSU2_TR(0x6b0a7f);
{goto L6b0aac;}
}
B6b0a81:L6b0a81:{c.instructions+=2;NFSU2_TR(0x6b0a81);
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
B6b0a83:{NFSU2_TR(0x6b0a83);
if(r1(R+518)){{goto L6b0aac;}}
}
B6b0a85:L6b0a85:{c.instructions+=2;NFSU2_TR(0x6b0a85);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0a87:{NFSU2_TR(0x6b0a87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0a8cull));
TAIL_STATIC(0x6739efu,673);
}
B6b0a8c:L6b0a8c:{c.instructions+=1;NFSU2_TR(0x6b0a8c);
{goto L6b0aac;}
}
B6b0a8e:L6b0a8e:{c.instructions+=2;NFSU2_TR(0x6b0a8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0a95:{NFSU2_TR(0x6b0a95);
{goto L6b0aac;}
}
B6b0a97:L6b0a97:{c.instructions+=4;NFSU2_TR(0x6b0a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b0a9d:{NFSU2_TR(0x6b0a9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b0aa0:{NFSU2_TR(0x6b0aa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+8)),r4(U+0));
}
B6b0aa3:{NFSU2_TR(0x6b0aa3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b0aa4:L6b0aa4:{c.instructions+=2;NFSU2_TR(0x6b0aa4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6b0aa6:{NFSU2_TR(0x6b0aa6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0a97u);}goto L6b0a97;}}
}
B6b0aa8:L6b0aa8:{c.instructions+=1;NFSU2_TR(0x6b0aa8);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6b0aac:L6b0aac:{c.instructions+=6;NFSU2_TR(0x6b0aac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0aaf:{NFSU2_TR(0x6b0aaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b0ab0:{NFSU2_TR(0x6b0ab0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b0ab1:{NFSU2_TR(0x6b0ab1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b0ab2:{NFSU2_TR(0x6b0ab2);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b0ab3:{NFSU2_TR(0x6b0ab3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b0ab4:L6b0ab4:{c.instructions+=16;NFSU2_TR(0x6b0ab4);
__builtin_memmove((R+28),(R+28),4);
}
B6b0ab6:{NFSU2_TR(0x6b0ab6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0ab7:{NFSU2_TR(0x6b0ab7);
__builtin_memmove((R+20),(R+16),4);
}
B6b0ab9:{NFSU2_TR(0x6b0ab9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa8ull))));
}
B6b0abf:{NFSU2_TR(0x6b0abf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0ac0:{NFSU2_TR(0x6b0ac0);
__builtin_memmove((R+12),(R+4),4);
}
B6b0ac2:{NFSU2_TR(0x6b0ac2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0ac3:{NFSU2_TR(0x6b0ac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b0ac9:{NFSU2_TR(0x6b0ac9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b0acb:{NFSU2_TR(0x6b0acb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0acc:{NFSU2_TR(0x6b0acc);
__builtin_memmove((R+28),(R+4),4);
}
B6b0ace:{NFSU2_TR(0x6b0ace);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B6b0ad4:{NFSU2_TR(0x6b0ad4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b0ad6:{NFSU2_TR(0x6b0ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0ad9:{NFSU2_TR(0x6b0ad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0adc:{NFSU2_TR(0x6b0adc);
if(r1(R+518)){TAIL_STATIC(0x6b1068u,6b1);}
}
B6b0ae2:L6b0ae2:{c.instructions+=2;NFSU2_TR(0x6b0ae2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b0ae4:{NFSU2_TR(0x6b0ae4);
if(r1(R+518)){TAIL_STATIC(0x6b1068u,6b1);}
}
B6b0aea:L6b0aea:{c.instructions+=8;NFSU2_TR(0x6b0aea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0aed:{NFSU2_TR(0x6b0aed);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b0aef:{NFSU2_TR(0x6b0aef);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b0aef);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b0aef);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6b0af1:{NFSU2_TR(0x6b0af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0af5:{NFSU2_TR(0x6b0af5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6b0afb:{NFSU2_TR(0x6b0afb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b0b01:{NFSU2_TR(0x6b0b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0b04:{NFSU2_TR(0x6b0b04);
if(r1(R+518)){TAIL_STATIC(0x6b1053u,6b1);}
}
B6b0b0a:L6b0b0a:{c.instructions+=2;NFSU2_TR(0x6b0b0a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0b0d:{NFSU2_TR(0x6b0b0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6b1053u,6b1);}
}
B6b0b13:L6b0b13:{c.instructions+=7;NFSU2_TR(0x6b0b13);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0b19:{NFSU2_TR(0x6b0b19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0b1d:{NFSU2_TR(0x6b0b1d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b0b1f:{NFSU2_TR(0x6b0b1f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6b0b24:{NFSU2_TR(0x6b0b24);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b0b25:{NFSU2_TR(0x6b0b25);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b0b2a:{NFSU2_TR(0x6b0b2a);
if(r1(R+518)){{goto L6b0b5c;}}
}
B6b0b2c:L6b0b2c:{c.instructions+=3;NFSU2_TR(0x6b0b2c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0b2d:{NFSU2_TR(0x6b0b2d);
__builtin_memmove((R+4),(R+12),4);
}
B6b0b2f:{NFSU2_TR(0x6b0b2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0b34ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b00efu);}goto L6b00ef;}
}
B6b0b34:L6b0b34:{c.instructions+=2;NFSU2_TR(0x6b0b34);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b0b36:{NFSU2_TR(0x6b0b36);
if(r1(R+518)){{goto L6b0b5c;}}
}
B6b0b38:L6b0b38:{c.instructions+=3;NFSU2_TR(0x6b0b38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0b3b:{NFSU2_TR(0x6b0b3b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b0b3d:{NFSU2_TR(0x6b0b3d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b0b5c;}}
}
B6b0b3f:L6b0b3f:{c.instructions+=2;NFSU2_TR(0x6b0b3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0b42:{NFSU2_TR(0x6b0b42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b0b45:L6b0b45:{c.instructions+=4;NFSU2_TR(0x6b0b45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b0b47:{NFSU2_TR(0x6b0b47);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b0b4a:{NFSU2_TR(0x6b0b4a);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0b4e:{NFSU2_TR(0x6b0b4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b0b56;}}
}
B6b0b50:L6b0b50:{c.instructions+=2;NFSU2_TR(0x6b0b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0b53:{NFSU2_TR(0x6b0b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0b56:L6b0b56:{c.instructions+=3;NFSU2_TR(0x6b0b56);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6b0b59:{NFSU2_TR(0x6b0b59);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6b0b5a:{NFSU2_TR(0x6b0b5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0b45u);}goto L6b0b45;}}
}
B6b0b5c:L6b0b5c:{c.instructions+=3;NFSU2_TR(0x6b0b5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0b60:{NFSU2_TR(0x6b0b60);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0b64:{NFSU2_TR(0x6b0b64);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b0c39;}}
}
B6b0b6a:L6b0b6a:{c.instructions+=3;NFSU2_TR(0x6b0b6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0b6e:{NFSU2_TR(0x6b0b6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b0b74:{NFSU2_TR(0x6b0b74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0b77:L6b0b77:{c.instructions+=15;NFSU2_TR(0x6b0b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b0b7a:{NFSU2_TR(0x6b0b7a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6b0b7d:{NFSU2_TR(0x6b0b7d);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0b7e:{NFSU2_TR(0x6b0b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0b82:{NFSU2_TR(0x6b0b82);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0b83:{NFSU2_TR(0x6b0b83);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0b84:{NFSU2_TR(0x6b0b84);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0b85:{NFSU2_TR(0x6b0b85);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6b0b88:{NFSU2_TR(0x6b0b88);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0b8c:{NFSU2_TR(0x6b0b8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b0b8f:{NFSU2_TR(0x6b0b8f);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0b90:{NFSU2_TR(0x6b0b90);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0b91:{NFSU2_TR(0x6b0b91);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0b92:{NFSU2_TR(0x6b0b92);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0b93:{NFSU2_TR(0x6b0b93);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b0c04;}}
}
B6b0b95:L6b0b95:{c.instructions+=5;NFSU2_TR(0x6b0b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0b98:{NFSU2_TR(0x6b0b98);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0b9e:{NFSU2_TR(0x6b0b9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b0ba1:{NFSU2_TR(0x6b0ba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b0ba4:{NFSU2_TR(0x6b0ba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0ba7:L6b0ba7:{c.instructions+=13;NFSU2_TR(0x6b0ba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b0baa:{NFSU2_TR(0x6b0baa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0bad:{NFSU2_TR(0x6b0bad);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b0bb0:{NFSU2_TR(0x6b0bb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b0bb3:{NFSU2_TR(0x6b0bb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b0bb6:{NFSU2_TR(0x6b0bb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0bb9:{NFSU2_TR(0x6b0bb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b0bbc:{NFSU2_TR(0x6b0bbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b0bbf:{NFSU2_TR(0x6b0bbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6b0bc2:{NFSU2_TR(0x6b0bc2);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6b0bc6:{NFSU2_TR(0x6b0bc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b0bc9:{NFSU2_TR(0x6b0bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0bcc:{NFSU2_TR(0x6b0bcc);
if(r1(R+518)){{goto L6b0bdd;}}
}
B6b0bce:L6b0bce:{c.instructions+=4;NFSU2_TR(0x6b0bce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b0bd1:{NFSU2_TR(0x6b0bd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6b0bd4:{NFSU2_TR(0x6b0bd4);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff58ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b0bdb:{NFSU2_TR(0x6b0bdb);
{goto L6b0bed;}
}
B6b0bdd:L6b0bdd:{c.instructions+=4;NFSU2_TR(0x6b0bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b0be0:{NFSU2_TR(0x6b0be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b0be3:{NFSU2_TR(0x6b0be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6b0be6:{NFSU2_TR(0x6b0be6);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff58ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b0bed:L6b0bed:{c.instructions+=6;NFSU2_TR(0x6b0bed);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff88ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6b0bf2:{NFSU2_TR(0x6b0bf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0bf5:{NFSU2_TR(0x6b0bf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0bf8:{NFSU2_TR(0x6b0bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0bfc:{NFSU2_TR(0x6b0bfc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b0bff:{NFSU2_TR(0x6b0bff);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0ba7u);}goto L6b0ba7;}}
}
B6b0c01:L6b0c01:{c.instructions+=1;NFSU2_TR(0x6b0c01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b0c04:L6b0c04:{c.instructions+=5;NFSU2_TR(0x6b0c04);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0c06:{NFSU2_TR(0x6b0c06);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b0c09:{NFSU2_TR(0x6b0c09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0c0a:{NFSU2_TR(0x6b0c0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b0c0d:{NFSU2_TR(0x6b0c0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0c12ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0094u);}goto L6b0094;}
}
B6b0c12:L6b0c12:{c.instructions+=2;NFSU2_TR(0x6b0c12);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b0c14:{NFSU2_TR(0x6b0c14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b0c1d;}}
}
B6b0c16:L6b0c16:{c.instructions+=1;NFSU2_TR(0x6b0c16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0c1d:L6b0c1d:{c.instructions+=8;NFSU2_TR(0x6b0c1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0c20:{NFSU2_TR(0x6b0c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0c23:{NFSU2_TR(0x6b0c23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0c27:{NFSU2_TR(0x6b0c27);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b0c2a:{NFSU2_TR(0x6b0c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0c2d:{NFSU2_TR(0x6b0c2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0c30:{NFSU2_TR(0x6b0c30);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b0c33:{NFSU2_TR(0x6b0c33);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0b77u);}goto L6b0b77;}}
}
B6b0c39:L6b0c39:{c.instructions+=3;NFSU2_TR(0x6b0c39);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b0c3b:{NFSU2_TR(0x6b0c3b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0c3e:{NFSU2_TR(0x6b0c3e);
if(r1(R+518)){TAIL_STATIC(0x6b1036u,6b1);}
}
B6b0c44:L6b0c44:{c.instructions+=4;NFSU2_TR(0x6b0c44);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0c48:{NFSU2_TR(0x6b0c48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0c4b:{NFSU2_TR(0x6b0c4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0c4e:{NFSU2_TR(0x6b0c4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b0ea6;}}
}
B6b0c54:L6b0c54:{c.instructions+=1;NFSU2_TR(0x6b0c54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0c5b:L6b0c5b:{c.instructions+=3;NFSU2_TR(0x6b0c5b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b0c5d:{NFSU2_TR(0x6b0c5d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0c60:{NFSU2_TR(0x6b0c60);
if(r1(R+518)){{goto L6b0ced;}}
}
B6b0c66:L6b0c66:{c.instructions+=17;NFSU2_TR(0x6b0c66);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b0c68:{NFSU2_TR(0x6b0c68);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b0c6b:{NFSU2_TR(0x6b0c6b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0c6c:{NFSU2_TR(0x6b0c6c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0c6d:{NFSU2_TR(0x6b0c6d);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0c6e:{NFSU2_TR(0x6b0c6e);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0c6f:{NFSU2_TR(0x6b0c6f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6b0c72:{NFSU2_TR(0x6b0c72);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b0c75:{NFSU2_TR(0x6b0c75);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0c76:{NFSU2_TR(0x6b0c76);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0c77:{NFSU2_TR(0x6b0c77);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0c78:{NFSU2_TR(0x6b0c78);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0c79:{NFSU2_TR(0x6b0c79);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff88ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))|u32(u32(0xffffffffull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6b0c7e:{NFSU2_TR(0x6b0c7e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0c81:{NFSU2_TR(0x6b0c81);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b0c85:{NFSU2_TR(0x6b0c85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0c88:{NFSU2_TR(0x6b0c88);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b0cc5;}}
}
B6b0c8a:L6b0c8a:{c.instructions+=3;NFSU2_TR(0x6b0c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0c8d:{NFSU2_TR(0x6b0c8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b0c93:{NFSU2_TR(0x6b0c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0c96:L6b0c96:{c.instructions+=5;NFSU2_TR(0x6b0c96);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0c98:{NFSU2_TR(0x6b0c98);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b0c9b:{NFSU2_TR(0x6b0c9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0c9c:{NFSU2_TR(0x6b0c9c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0c9d:{NFSU2_TR(0x6b0c9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0ca2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0094u);}goto L6b0094;}
}
B6b0ca2:L6b0ca2:{c.instructions+=2;NFSU2_TR(0x6b0ca2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b0ca4:{NFSU2_TR(0x6b0ca4);
if(r1(R+518)){{goto L6b0cb6;}}
}
B6b0ca6:L6b0ca6:{c.instructions+=5;NFSU2_TR(0x6b0ca6);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0ca8:{NFSU2_TR(0x6b0ca8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b0cab:{NFSU2_TR(0x6b0cab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0cac:{NFSU2_TR(0x6b0cac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0cad:{NFSU2_TR(0x6b0cad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0cb2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0094u);}goto L6b0094;}
}
B6b0cb2:L6b0cb2:{c.instructions+=2;NFSU2_TR(0x6b0cb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b0cb4:{NFSU2_TR(0x6b0cb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b0cbd;}}
}
B6b0cb6:L6b0cb6:{c.instructions+=1;NFSU2_TR(0x6b0cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0cbd:L6b0cbd:{c.instructions+=3;NFSU2_TR(0x6b0cbd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6b0cc0:{NFSU2_TR(0x6b0cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b0cc3:{NFSU2_TR(0x6b0cc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0c96u);}goto L6b0c96;}}
}
B6b0cc5:L6b0cc5:{c.instructions+=2;NFSU2_TR(0x6b0cc5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0cc9:{NFSU2_TR(0x6b0cc9);
if(r1(R+518)){{goto L6b0cd7;}}
}
B6b0ccb:L6b0ccb:{c.instructions+=2;NFSU2_TR(0x6b0ccb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b0cce:{NFSU2_TR(0x6b0cce);
if(r1(R+518)){{goto L6b0cd7;}}
}
B6b0cd0:L6b0cd0:{c.instructions+=1;NFSU2_TR(0x6b0cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0cd7:L6b0cd7:{c.instructions+=2;NFSU2_TR(0x6b0cd7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0cdb:{NFSU2_TR(0x6b0cdb);
if(r1(R+518)){{goto L6b0d77;}}
}
B6b0ce1:L6b0ce1:{c.instructions+=3;NFSU2_TR(0x6b0ce1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b0ce2:{NFSU2_TR(0x6b0ce2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6b0ce5:{NFSU2_TR(0x6b0ce5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0c5bu);}goto L6b0c5b;}}
}
B6b0ceb:L6b0ceb:{c.instructions+=1;NFSU2_TR(0x6b0ceb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b0ced:L6b0ced:{c.instructions+=2;NFSU2_TR(0x6b0ced);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0cf4:{NFSU2_TR(0x6b0cf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0cf7:L6b0cf7:{c.instructions+=2;NFSU2_TR(0x6b0cf7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0cfb:{NFSU2_TR(0x6b0cfb);
if(r1(R+518)){{goto L6b0e36;}}
}
B6b0d01:L6b0d01:{c.instructions+=2;NFSU2_TR(0x6b0d01);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b0d03:{NFSU2_TR(0x6b0d03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0d06:L6b0d06:{c.instructions+=4;NFSU2_TR(0x6b0d06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b0d09:{NFSU2_TR(0x6b0d09);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b0d0b:{NFSU2_TR(0x6b0d0b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b0d0d:{NFSU2_TR(0x6b0d0d);
if(r1(R+518)){{goto L6b0e10;}}
}
B6b0d13:L6b0d13:{c.instructions+=21;NFSU2_TR(0x6b0d13);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b0d15:{NFSU2_TR(0x6b0d15);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b0d18:{NFSU2_TR(0x6b0d18);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0d19:{NFSU2_TR(0x6b0d19);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0d1a:{NFSU2_TR(0x6b0d1a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0d1b:{NFSU2_TR(0x6b0d1b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0d1c:{NFSU2_TR(0x6b0d1c);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6b0d1f:{NFSU2_TR(0x6b0d1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b0d22:{NFSU2_TR(0x6b0d22);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0d23:{NFSU2_TR(0x6b0d23);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0d24:{NFSU2_TR(0x6b0d24);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0d25:{NFSU2_TR(0x6b0d25);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0d26:{NFSU2_TR(0x6b0d26);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b0d29:{NFSU2_TR(0x6b0d29);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))|u32(u32(0xffffffffull))));
s4(u32(r4(U+4)),r4(U+8));
}
B6b0d2d:{NFSU2_TR(0x6b0d2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))|u32(u32(0xffffffffull))));
s4(u32(r4(U+4)),r4(U+8));
}
B6b0d31:{NFSU2_TR(0x6b0d31);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0d34:{NFSU2_TR(0x6b0d34);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b0d38:{NFSU2_TR(0x6b0d38);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b0d3c:{NFSU2_TR(0x6b0d3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0d3f:{NFSU2_TR(0x6b0d3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0d42:{NFSU2_TR(0x6b0d42);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b0db7;}}
}
B6b0d44:L6b0d44:{c.instructions+=3;NFSU2_TR(0x6b0d44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0d47:{NFSU2_TR(0x6b0d47);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b0d4d:{NFSU2_TR(0x6b0d4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0d50:L6b0d50:{c.instructions+=5;NFSU2_TR(0x6b0d50);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0d52:{NFSU2_TR(0x6b0d52);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b0d55:{NFSU2_TR(0x6b0d55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0d56:{NFSU2_TR(0x6b0d56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0d57:{NFSU2_TR(0x6b0d57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0d5cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0094u);}goto L6b0094;}
}
B6b0d5c:L6b0d5c:{c.instructions+=6;NFSU2_TR(0x6b0d5c);
__builtin_memmove((R+28),(R+0),4);
}
B6b0d5e:{NFSU2_TR(0x6b0d5e);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0d60:{NFSU2_TR(0x6b0d60);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b0d63:{NFSU2_TR(0x6b0d63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0d64:{NFSU2_TR(0x6b0d64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0d65:{NFSU2_TR(0x6b0d65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0d6aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0094u);}goto L6b0094;}
}
B6b0d6a:L6b0d6a:{c.instructions+=2;NFSU2_TR(0x6b0d6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b0d6c:{NFSU2_TR(0x6b0d6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b0da4;}}
}
B6b0d6e:L6b0d6e:{c.instructions+=2;NFSU2_TR(0x6b0d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0d75:{NFSU2_TR(0x6b0d75);
{goto L6b0da8;}
}
B6b0d77:L6b0d77:{c.instructions+=6;NFSU2_TR(0x6b0d77);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0d79:{NFSU2_TR(0x6b0d79);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b0d7c:{NFSU2_TR(0x6b0d7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b0d7f:{NFSU2_TR(0x6b0d7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0d80:{NFSU2_TR(0x6b0d80);
__builtin_memmove((R+4),(R+12),4);
}
B6b0d82:{NFSU2_TR(0x6b0d82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0d87ull));
TAIL_STATIC(0x6cbc7au,6cb);
}
B6b0d87:L6b0d87:{c.instructions+=2;NFSU2_TR(0x6b0d87);
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
B6b0d89:{NFSU2_TR(0x6b0d89);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6b106au,6b1);}
}
B6b0d8f:L6b0d8f:{c.instructions+=6;NFSU2_TR(0x6b0d8f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0d91:{NFSU2_TR(0x6b0d91);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b0d94:{NFSU2_TR(0x6b0d94);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b0d97:{NFSU2_TR(0x6b0d97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0d98:{NFSU2_TR(0x6b0d98);
__builtin_memmove((R+4),(R+12),4);
}
B6b0d9a:{NFSU2_TR(0x6b0d9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0d9full));
TAIL_STATIC(0x6cbc7au,6cb);
}
B6b0d9f:L6b0d9f:{c.instructions+=1;NFSU2_TR(0x6b0d9f);
TAIL_STATIC(0x6b1043u,6b1);
}
B6b0da4:L6b0da4:{c.instructions+=2;NFSU2_TR(0x6b0da4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b0da6:{NFSU2_TR(0x6b0da6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b0daf;}}
}
B6b0da8:L6b0da8:{c.instructions+=1;NFSU2_TR(0x6b0da8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0daf:L6b0daf:{c.instructions+=3;NFSU2_TR(0x6b0daf);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6b0db2:{NFSU2_TR(0x6b0db2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b0db5:{NFSU2_TR(0x6b0db5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0d50u);}goto L6b0d50;}}
}
B6b0db7:L6b0db7:{c.instructions+=3;NFSU2_TR(0x6b0db7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b0db9:{NFSU2_TR(0x6b0db9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0dbc:{NFSU2_TR(0x6b0dbc);
if(r1(R+518)){{goto L6b0dc5;}}
}
B6b0dbe:L6b0dbe:{c.instructions+=1;NFSU2_TR(0x6b0dbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0dc5:L6b0dc5:{c.instructions+=2;NFSU2_TR(0x6b0dc5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0dc8:{NFSU2_TR(0x6b0dc8);
if(r1(R+518)){{goto L6b0e22;}}
}
B6b0dca:L6b0dca:{c.instructions+=2;NFSU2_TR(0x6b0dca);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0dcd:{NFSU2_TR(0x6b0dcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b0e10;}}
}
B6b0dcf:L6b0dcf:{c.instructions+=2;NFSU2_TR(0x6b0dcf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0dd3:{NFSU2_TR(0x6b0dd3);
if(r1(R+518)){{goto L6b0ddb;}}
}
B6b0dd5:L6b0dd5:{c.instructions+=2;NFSU2_TR(0x6b0dd5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0dd9:{NFSU2_TR(0x6b0dd9);
if(r1(R+518)){{goto L6b0e10;}}
}
B6b0ddb:L6b0ddb:{c.instructions+=23;NFSU2_TR(0x6b0ddb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b0dde:{NFSU2_TR(0x6b0dde);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b0de1:{NFSU2_TR(0x6b0de1);
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
B6b0de2:{NFSU2_TR(0x6b0de2);
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
B6b0de3:{NFSU2_TR(0x6b0de3);
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
B6b0de4:{NFSU2_TR(0x6b0de4);
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
B6b0de5:{NFSU2_TR(0x6b0de5);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6b0de8:{NFSU2_TR(0x6b0de8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b0deb:{NFSU2_TR(0x6b0deb);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0dec:{NFSU2_TR(0x6b0dec);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0ded:{NFSU2_TR(0x6b0ded);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0dee:{NFSU2_TR(0x6b0dee);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0def:{NFSU2_TR(0x6b0def);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6b0df2:{NFSU2_TR(0x6b0df2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b0df5:{NFSU2_TR(0x6b0df5);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0df6:{NFSU2_TR(0x6b0df6);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0df7:{NFSU2_TR(0x6b0df7);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0df8:{NFSU2_TR(0x6b0df8);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0df9:{NFSU2_TR(0x6b0df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0dfc:{NFSU2_TR(0x6b0dfc);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6b0e01:{NFSU2_TR(0x6b0e01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b0e04:{NFSU2_TR(0x6b0e04);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6b0e09:{NFSU2_TR(0x6b0e09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0e10:L6b0e10:{c.instructions+=5;NFSU2_TR(0x6b0e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0e13:{NFSU2_TR(0x6b0e13);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b0e14:{NFSU2_TR(0x6b0e14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6b0e17:{NFSU2_TR(0x6b0e17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0e1a:{NFSU2_TR(0x6b0e1a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0d06u);}goto L6b0d06;}}
}
B6b0e20:L6b0e20:{c.instructions+=1;NFSU2_TR(0x6b0e20);
{goto L6b0e29;}
}
B6b0e22:L6b0e22:{c.instructions+=1;NFSU2_TR(0x6b0e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0e29:L6b0e29:{c.instructions+=3;NFSU2_TR(0x6b0e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0e2c:{NFSU2_TR(0x6b0e2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B6b0e30:{NFSU2_TR(0x6b0e30);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0cf7u);}goto L6b0cf7;}}
}
B6b0e36:L6b0e36:{c.instructions+=2;NFSU2_TR(0x6b0e36);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0e3a:{NFSU2_TR(0x6b0e3a);
if(r1(R+518)){{goto L6b0e5b;}}
}
B6b0e3c:L6b0e3c:{c.instructions+=6;NFSU2_TR(0x6b0e3c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0e3e:{NFSU2_TR(0x6b0e3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b0e41:{NFSU2_TR(0x6b0e41);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b0e44:{NFSU2_TR(0x6b0e44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0e45:{NFSU2_TR(0x6b0e45);
__builtin_memmove((R+4),(R+12),4);
}
B6b0e47:{NFSU2_TR(0x6b0e47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0e4cull));
TAIL_STATIC(0x6cbc7au,6cb);
}
B6b0e4c:L6b0e4c:{c.instructions+=2;NFSU2_TR(0x6b0e4c);
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
B6b0e4e:{NFSU2_TR(0x6b0e4e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6b106au,6b1);}
}
B6b0e54:L6b0e54:{c.instructions+=2;NFSU2_TR(0x6b0e54);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0e56:{NFSU2_TR(0x6b0e56);
{goto L6b0fd2;}
}
B6b0e5b:L6b0e5b:{c.instructions+=2;NFSU2_TR(0x6b0e5b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0e5f:{NFSU2_TR(0x6b0e5f);
if(r1(R+518)){{goto L6b0fee;}}
}
B6b0e65:L6b0e65:{c.instructions+=7;NFSU2_TR(0x6b0e65);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0e67:{NFSU2_TR(0x6b0e67);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b0e6a:{NFSU2_TR(0x6b0e6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b0e6d:{NFSU2_TR(0x6b0e6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0e6e:{NFSU2_TR(0x6b0e6e);
__builtin_memmove((R+4),(R+12),4);
}
B6b0e70:{NFSU2_TR(0x6b0e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0e77:{NFSU2_TR(0x6b0e77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0e7cull));
TAIL_STATIC(0x6cbc7au,6cb);
}
B6b0e7c:L6b0e7c:{c.instructions+=2;NFSU2_TR(0x6b0e7c);
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
B6b0e7e:{NFSU2_TR(0x6b0e7e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6b106au,6b1);}
}
B6b0e84:L6b0e84:{c.instructions+=6;NFSU2_TR(0x6b0e84);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0e86:{NFSU2_TR(0x6b0e86);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b0e89:{NFSU2_TR(0x6b0e89);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b0e8c:{NFSU2_TR(0x6b0e8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0e8d:{NFSU2_TR(0x6b0e8d);
__builtin_memmove((R+4),(R+12),4);
}
B6b0e8f:{NFSU2_TR(0x6b0e8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0e94ull));
TAIL_STATIC(0x6cbc7au,6cb);
}
B6b0e94:L6b0e94:{c.instructions+=2;NFSU2_TR(0x6b0e94);
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
B6b0e96:{NFSU2_TR(0x6b0e96);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6b106au,6b1);}
}
B6b0e9c:L6b0e9c:{c.instructions+=3;NFSU2_TR(0x6b0e9c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0e9e:{NFSU2_TR(0x6b0e9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b0ea1:{NFSU2_TR(0x6b0ea1);
{goto L6b0fd5;}
}
B6b0ea6:L6b0ea6:{c.instructions+=2;NFSU2_TR(0x6b0ea6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0eaa:{NFSU2_TR(0x6b0eaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b0fee;}}
}
B6b0eb0:L6b0eb0:{c.instructions+=2;NFSU2_TR(0x6b0eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0eb4:{NFSU2_TR(0x6b0eb4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b0eb6:L6b0eb6:{c.instructions+=2;NFSU2_TR(0x6b0eb6);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff58ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6b0ebe:{NFSU2_TR(0x6b0ebe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b0ec3;}}
}
B6b0ec0:L6b0ec0:{c.instructions+=1;NFSU2_TR(0x6b0ec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0ec3:L6b0ec3:{c.instructions+=3;NFSU2_TR(0x6b0ec3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b0ec4:{NFSU2_TR(0x6b0ec4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6b0ec7:{NFSU2_TR(0x6b0ec7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0eb6u);}goto L6b0eb6;}}
}
B6b0ec9:L6b0ec9:{c.instructions+=1;NFSU2_TR(0x6b0ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0ecd:L6b0ecd:{c.instructions+=2;NFSU2_TR(0x6b0ecd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0ed1:{NFSU2_TR(0x6b0ed1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b0fb8;}}
}
B6b0ed7:L6b0ed7:{c.instructions+=2;NFSU2_TR(0x6b0ed7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b0ed9:{NFSU2_TR(0x6b0ed9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b0edb:L6b0edb:{c.instructions+=2;NFSU2_TR(0x6b0edb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0ede:{NFSU2_TR(0x6b0ede);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b0fa5;}}
}
B6b0ee4:L6b0ee4:{c.instructions+=2;NFSU2_TR(0x6b0ee4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0ee7:{NFSU2_TR(0x6b0ee7);
if(r1(R+518)){{goto L6b0f9b;}}
}
B6b0eed:L6b0eed:{c.instructions+=3;NFSU2_TR(0x6b0eed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b0ef0:{NFSU2_TR(0x6b0ef0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b0ef2:{NFSU2_TR(0x6b0ef2);
if(r1(R+518)){{goto L6b0f9b;}}
}
B6b0ef8:L6b0ef8:{c.instructions+=2;NFSU2_TR(0x6b0ef8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0efb:{NFSU2_TR(0x6b0efb);
if(r1(R+518)){{goto L6b0f9b;}}
}
B6b0f01:L6b0f01:{c.instructions+=24;NFSU2_TR(0x6b0f01);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6b0f04:{NFSU2_TR(0x6b0f04);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b0f07:{NFSU2_TR(0x6b0f07);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0f08:{NFSU2_TR(0x6b0f08);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0f09:{NFSU2_TR(0x6b0f09);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0f0a:{NFSU2_TR(0x6b0f0a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0f0b:{NFSU2_TR(0x6b0f0b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b0f0d:{NFSU2_TR(0x6b0f0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b0f10:{NFSU2_TR(0x6b0f10);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0f11:{NFSU2_TR(0x6b0f11);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0f12:{NFSU2_TR(0x6b0f12);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0f13:{NFSU2_TR(0x6b0f13);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b0f14:{NFSU2_TR(0x6b0f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b0f17:{NFSU2_TR(0x6b0f17);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6b0f1a:{NFSU2_TR(0x6b0f1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b0f1d:{NFSU2_TR(0x6b0f1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b0f20:{NFSU2_TR(0x6b0f20);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b0f23:{NFSU2_TR(0x6b0f23);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))|u32(u32(0xffffffffull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6b0f28:{NFSU2_TR(0x6b0f28);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))|u32(u32(0xffffffffull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6b0f2d:{NFSU2_TR(0x6b0f2d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))|u32(u32(0xffffffffull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6b0f32:{NFSU2_TR(0x6b0f32);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b0f34:{NFSU2_TR(0x6b0f34);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0f37:{NFSU2_TR(0x6b0f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0f3a:{NFSU2_TR(0x6b0f3a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b0f6f;}}
}
B6b0f3c:L6b0f3c:{c.instructions+=2;NFSU2_TR(0x6b0f3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b0f42:{NFSU2_TR(0x6b0f42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b0f45:L6b0f45:{c.instructions+=2;NFSU2_TR(0x6b0f45);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0f48:{NFSU2_TR(0x6b0f48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b0f6f;}}
}
B6b0f4a:L6b0f4a:{c.instructions+=5;NFSU2_TR(0x6b0f4a);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0f4c:{NFSU2_TR(0x6b0f4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b0f4f:{NFSU2_TR(0x6b0f4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0f50:{NFSU2_TR(0x6b0f50);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b0f53:{NFSU2_TR(0x6b0f53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0f58ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0094u);}goto L6b0094;}
}
B6b0f58:L6b0f58:{c.instructions+=2;NFSU2_TR(0x6b0f58);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b0f5a:{NFSU2_TR(0x6b0f5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b0f63;}}
}
B6b0f5c:L6b0f5c:{c.instructions+=1;NFSU2_TR(0x6b0f5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0f63:L6b0f63:{c.instructions+=5;NFSU2_TR(0x6b0f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0f67:{NFSU2_TR(0x6b0f67);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b0f68:{NFSU2_TR(0x6b0f68);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b0f6a:{NFSU2_TR(0x6b0f6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6b0f6d:{NFSU2_TR(0x6b0f6d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0f45u);}goto L6b0f45;}}
}
B6b0f6f:L6b0f6f:{c.instructions+=2;NFSU2_TR(0x6b0f6f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0f72:{NFSU2_TR(0x6b0f72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b0f8f;}}
}
B6b0f74:L6b0f74:{c.instructions+=2;NFSU2_TR(0x6b0f74);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0f77:{NFSU2_TR(0x6b0f77);
if(r1(R+518)){{goto L6b0f83;}}
}
B6b0f79:L6b0f79:{c.instructions+=2;NFSU2_TR(0x6b0f79);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0f7c:{NFSU2_TR(0x6b0f7c);
if(r1(R+518)){{goto L6b0f83;}}
}
B6b0f7e:L6b0f7e:{c.instructions+=2;NFSU2_TR(0x6b0f7e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0f81:{NFSU2_TR(0x6b0f81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b0f8f;}}
}
B6b0f83:L6b0f83:{c.instructions+=2;NFSU2_TR(0x6b0f83);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0f86:{NFSU2_TR(0x6b0f86);
if(r1(R+518)){{goto L6b0f8f;}}
}
B6b0f88:L6b0f88:{c.instructions+=1;NFSU2_TR(0x6b0f88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0f8f:L6b0f8f:{c.instructions+=2;NFSU2_TR(0x6b0f8f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0f92:{NFSU2_TR(0x6b0f92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b0f9b;}}
}
B6b0f94:L6b0f94:{c.instructions+=1;NFSU2_TR(0x6b0f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0f9b:L6b0f9b:{c.instructions+=3;NFSU2_TR(0x6b0f9b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b0f9c:{NFSU2_TR(0x6b0f9c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6b0f9f:{NFSU2_TR(0x6b0f9f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0edbu);}goto L6b0edb;}}
}
B6b0fa5:L6b0fa5:{c.instructions+=3;NFSU2_TR(0x6b0fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b0fa8:{NFSU2_TR(0x6b0fa8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B6b0fac:{NFSU2_TR(0x6b0fac);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b0ecdu);}goto L6b0ecd;}}
}
B6b0fb2:L6b0fb2:{c.instructions+=2;NFSU2_TR(0x6b0fb2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0fb6:{NFSU2_TR(0x6b0fb6);
if(r1(R+518)){{goto L6b0fee;}}
}
B6b0fb8:L6b0fb8:{c.instructions+=6;NFSU2_TR(0x6b0fb8);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0fba:{NFSU2_TR(0x6b0fba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b0fbd:{NFSU2_TR(0x6b0fbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b0fc0:{NFSU2_TR(0x6b0fc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0fc1:{NFSU2_TR(0x6b0fc1);
__builtin_memmove((R+4),(R+12),4);
}
B6b0fc3:{NFSU2_TR(0x6b0fc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0fc8ull));
TAIL_STATIC(0x6cbc7au,6cb);
}
B6b0fc8:L6b0fc8:{c.instructions+=2;NFSU2_TR(0x6b0fc8);
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
B6b0fca:{NFSU2_TR(0x6b0fca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6b106au,6b1);}
}
B6b0fd0:L6b0fd0:{c.instructions+=1;NFSU2_TR(0x6b0fd0);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0fd2:L6b0fd2:{c.instructions+=1;NFSU2_TR(0x6b0fd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b0fd5:L6b0fd5:{c.instructions+=4;NFSU2_TR(0x6b0fd5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b0fd8:{NFSU2_TR(0x6b0fd8);
__builtin_memmove((R+4),(R+12),4);
}
B6b0fda:{NFSU2_TR(0x6b0fda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b0fdb:{NFSU2_TR(0x6b0fdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b0fe0ull));
TAIL_STATIC(0x6cbc7au,6cb);
}
B6b0fe0:L6b0fe0:{c.instructions+=2;NFSU2_TR(0x6b0fe0);
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
B6b0fe2:{NFSU2_TR(0x6b0fe2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6b106au,6b1);}
}
B6b0fe8:L6b0fe8:{c.instructions+=2;NFSU2_TR(0x6b0fe8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0fec:{NFSU2_TR(0x6b0fec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6b1047u,6b1);}
}
B6b0fee:L6b0fee:{c.instructions+=3;NFSU2_TR(0x6b0fee);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b0ff0:{NFSU2_TR(0x6b0ff0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b0ff3:{NFSU2_TR(0x6b0ff3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6b1047u,6b1);}
}
B6b0ff5:L6b0ff5:{c.instructions+=4;NFSU2_TR(0x6b0ff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b0ff8:{NFSU2_TR(0x6b0ff8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b0ffb:{NFSU2_TR(0x6b0ffb);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6b0ffe:{NFSU2_TR(0x6b0ffe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
TAIL_STATIC(0x6b1001u,6b1);
}
XIT:NFSU2_TR_EXIT(0x6b0,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
