#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5b8(u8* __restrict R,Cpu& c);
u32 body_5bf(u8* __restrict R,Cpu& c);
u32 body_5ca(u8* __restrict R,Cpu& c);
u32 body_5ce(u8* __restrict R,Cpu& c);
u32 body_5cf(u8* __restrict R,Cpu& c);
u32 body_5d1(u8* __restrict R,Cpu& c);
u32 body_6d7(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_76e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5d0,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5d0,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5d0(u8* __restrict R,Cpu& c);
u32 page_5d0(Cpu& c){return body_5d0(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5d0(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5d0002:goto L5d0002;
case 0x5d0007:c.instructions+=3;goto B5d0007;
case 0x5d0009:c.instructions+=2;goto B5d0009;
case 0x5d000b:c.instructions+=1;goto B5d000b;
case 0x5d000d:goto L5d000d;
case 0x5d000e:c.instructions+=3;goto B5d000e;
case 0x5d000f:c.instructions+=2;goto B5d000f;
case 0x5d0014:c.instructions+=1;goto B5d0014;
case 0x5d0016:goto L5d0016;
case 0x5d0018:c.instructions+=2;goto B5d0018;
case 0x5d001a:c.instructions+=1;goto B5d001a;
case 0x5d001c:goto L5d001c;
case 0x5d001f:c.instructions+=4;goto B5d001f;
case 0x5d0020:c.instructions+=3;goto B5d0020;
case 0x5d0021:c.instructions+=2;goto B5d0021;
case 0x5d0023:c.instructions+=1;goto B5d0023;
case 0x5d0025:goto L5d0025;
case 0x5d0028:c.instructions+=3;goto B5d0028;
case 0x5d0029:c.instructions+=2;goto B5d0029;
case 0x5d002a:c.instructions+=1;goto B5d002a;
case 0x5d002c:goto L5d002c;
case 0x5d002e:c.instructions+=1;goto B5d002e;
case 0x5d0033:goto L5d0033;
case 0x5d0036:c.instructions+=5;goto B5d0036;
case 0x5d0038:c.instructions+=4;goto B5d0038;
case 0x5d003b:c.instructions+=3;goto B5d003b;
case 0x5d003d:c.instructions+=2;goto B5d003d;
case 0x5d003f:c.instructions+=1;goto B5d003f;
case 0x5d0041:goto L5d0041;
case 0x5d0042:c.instructions+=1;goto B5d0042;
case 0x5d0043:goto L5d0043;
case 0x5d0045:c.instructions+=2;goto B5d0045;
case 0x5d0047:c.instructions+=1;goto B5d0047;
case 0x5d004c:goto L5d004c;
case 0x5d004e:c.instructions+=2;goto B5d004e;
case 0x5d0050:c.instructions+=1;goto B5d0050;
case 0x5d0055:goto L5d0055;
case 0x5d0057:c.instructions+=2;goto B5d0057;
case 0x5d0059:c.instructions+=1;goto B5d0059;
case 0x5d005e:goto L5d005e;
case 0x5d0060:c.instructions+=2;goto B5d0060;
case 0x5d0062:c.instructions+=1;goto B5d0062;
case 0x5d0067:goto L5d0067;
case 0x5d0068:c.instructions+=1;goto B5d0068;
case 0x5d0070:goto L5d0070;
case 0x5d0071:c.instructions+=7;goto B5d0071;
case 0x5d0073:c.instructions+=6;goto B5d0073;
case 0x5d0078:c.instructions+=5;goto B5d0078;
case 0x5d007d:c.instructions+=4;goto B5d007d;
case 0x5d0082:c.instructions+=3;goto B5d0082;
case 0x5d0084:c.instructions+=2;goto B5d0084;
case 0x5d0086:c.instructions+=1;goto B5d0086;
case 0x5d008c:goto L5d008c;
case 0x5d008d:c.instructions+=1;goto B5d008d;
case 0x5d0092:goto L5d0092;
case 0x5d0094:c.instructions+=1;goto B5d0094;
case 0x5d0096:goto L5d0096;
case 0x5d009b:c.instructions+=1;goto B5d009b;
case 0x5d00a0:goto L5d00a0;
case 0x5d00a3:goto L5d00a3;
case 0x5d00a8:c.instructions+=7;goto B5d00a8;
case 0x5d00aa:c.instructions+=6;goto B5d00aa;
case 0x5d00ac:c.instructions+=5;goto B5d00ac;
case 0x5d00ad:c.instructions+=4;goto B5d00ad;
case 0x5d00b2:c.instructions+=3;goto B5d00b2;
case 0x5d00b4:c.instructions+=2;goto B5d00b4;
case 0x5d00b5:c.instructions+=1;goto B5d00b5;
case 0x5d00b8:goto L5d00b8;
case 0x5d00ba:c.instructions+=2;goto B5d00ba;
case 0x5d00bb:c.instructions+=1;goto B5d00bb;
case 0x5d00bd:goto L5d00bd;
case 0x5d00c2:c.instructions+=1;goto B5d00c2;
case 0x5d00c7:goto L5d00c7;
case 0x5d00c8:goto L5d00c8;
case 0x5d00d0:goto L5d00d0;
case 0x5d00d1:c.instructions+=9;goto B5d00d1;
case 0x5d00d2:c.instructions+=8;goto B5d00d2;
case 0x5d00d3:c.instructions+=7;goto B5d00d3;
case 0x5d00d7:c.instructions+=6;goto B5d00d7;
case 0x5d00da:c.instructions+=5;goto B5d00da;
case 0x5d00db:c.instructions+=4;goto B5d00db;
case 0x5d00df:c.instructions+=3;goto B5d00df;
case 0x5d00e1:c.instructions+=2;goto B5d00e1;
case 0x5d00e3:c.instructions+=1;goto B5d00e3;
case 0x5d00e5:goto L5d00e5;
case 0x5d00ea:goto L5d00ea;
case 0x5d00ed:c.instructions+=4;goto B5d00ed;
case 0x5d00f1:c.instructions+=3;goto B5d00f1;
case 0x5d00f3:c.instructions+=2;goto B5d00f3;
case 0x5d00f5:c.instructions+=1;goto B5d00f5;
case 0x5d00f7:goto L5d00f7;
case 0x5d00f9:goto L5d00f9;
case 0x5d00fb:c.instructions+=2;goto B5d00fb;
case 0x5d00fd:c.instructions+=1;goto B5d00fd;
case 0x5d00ff:goto L5d00ff;
case 0x5d0101:c.instructions+=3;goto B5d0101;
case 0x5d0103:c.instructions+=2;goto B5d0103;
case 0x5d0104:c.instructions+=1;goto B5d0104;
case 0x5d0109:goto L5d0109;
case 0x5d010a:c.instructions+=3;goto B5d010a;
case 0x5d010c:c.instructions+=2;goto B5d010c;
case 0x5d010e:c.instructions+=1;goto B5d010e;
case 0x5d0113:goto L5d0113;
case 0x5d0114:c.instructions+=5;goto B5d0114;
case 0x5d0115:c.instructions+=4;goto B5d0115;
case 0x5d0116:c.instructions+=3;goto B5d0116;
case 0x5d0118:c.instructions+=2;goto B5d0118;
case 0x5d0119:c.instructions+=1;goto B5d0119;
case 0x5d011c:goto L5d011c;
case 0x5d011e:c.instructions+=2;goto B5d011e;
case 0x5d011f:c.instructions+=1;goto B5d011f;
case 0x5d0124:goto L5d0124;
case 0x5d0126:c.instructions+=1;goto B5d0126;
case 0x5d0128:goto L5d0128;
case 0x5d012b:c.instructions+=3;goto B5d012b;
case 0x5d0130:c.instructions+=2;goto B5d0130;
case 0x5d0132:c.instructions+=1;goto B5d0132;
case 0x5d0134:goto L5d0134;
case 0x5d0137:c.instructions+=1;goto B5d0137;
case 0x5d0139:goto L5d0139;
case 0x5d013c:goto L5d013c;
case 0x5d013f:c.instructions+=2;goto B5d013f;
case 0x5d0142:c.instructions+=1;goto B5d0142;
case 0x5d0144:goto L5d0144;
case 0x5d0146:c.instructions+=1;goto B5d0146;
case 0x5d0148:goto L5d0148;
case 0x5d014a:goto L5d014a;
case 0x5d014c:c.instructions+=4;goto B5d014c;
case 0x5d014e:c.instructions+=3;goto B5d014e;
case 0x5d0150:c.instructions+=2;goto B5d0150;
case 0x5d0152:c.instructions+=1;goto B5d0152;
case 0x5d0155:goto L5d0155;
case 0x5d0157:goto L5d0157;
case 0x5d0159:c.instructions+=1;goto B5d0159;
case 0x5d015c:goto L5d015c;
case 0x5d015e:goto L5d015e;
case 0x5d0162:c.instructions+=2;goto B5d0162;
case 0x5d0165:c.instructions+=1;goto B5d0165;
case 0x5d0167:goto L5d0167;
case 0x5d0169:goto L5d0169;
case 0x5d016d:goto L5d016d;
case 0x5d016e:c.instructions+=5;goto B5d016e;
case 0x5d016f:c.instructions+=4;goto B5d016f;
case 0x5d0170:c.instructions+=3;goto B5d0170;
case 0x5d0172:c.instructions+=2;goto B5d0172;
case 0x5d0173:c.instructions+=1;goto B5d0173;
case 0x5d0180:goto L5d0180;
case 0x5d0181:c.instructions+=7;goto B5d0181;
case 0x5d0183:c.instructions+=6;goto B5d0183;
case 0x5d0186:c.instructions+=5;goto B5d0186;
case 0x5d0189:c.instructions+=4;goto B5d0189;
case 0x5d018a:c.instructions+=3;goto B5d018a;
case 0x5d018b:c.instructions+=2;goto B5d018b;
case 0x5d018e:c.instructions+=1;goto B5d018e;
case 0x5d0190:goto L5d0190;
case 0x5d0193:c.instructions+=1;goto B5d0193;
case 0x5d0195:goto L5d0195;
case 0x5d0197:goto L5d0197;
case 0x5d019b:c.instructions+=2;goto B5d019b;
case 0x5d019d:c.instructions+=1;goto B5d019d;
case 0x5d019f:goto L5d019f;
case 0x5d01a2:c.instructions+=1;goto B5d01a2;
case 0x5d01a4:goto L5d01a4;
case 0x5d01a7:c.instructions+=1;goto B5d01a7;
case 0x5d01a9:goto L5d01a9;
case 0x5d01ab:goto L5d01ab;
case 0x5d01ae:c.instructions+=3;goto B5d01ae;
case 0x5d01b0:c.instructions+=2;goto B5d01b0;
case 0x5d01b2:c.instructions+=1;goto B5d01b2;
case 0x5d01b4:goto L5d01b4;
case 0x5d01b7:c.instructions+=1;goto B5d01b7;
case 0x5d01b9:goto L5d01b9;
case 0x5d01bc:goto L5d01bc;
case 0x5d01c0:c.instructions+=6;goto B5d01c0;
case 0x5d01c1:c.instructions+=5;goto B5d01c1;
case 0x5d01c3:c.instructions+=4;goto B5d01c3;
case 0x5d01c4:c.instructions+=3;goto B5d01c4;
case 0x5d01c5:c.instructions+=2;goto B5d01c5;
case 0x5d01c7:c.instructions+=1;goto B5d01c7;
case 0x5d01cc:goto L5d01cc;
case 0x5d01cd:c.instructions+=3;goto B5d01cd;
case 0x5d01ce:c.instructions+=2;goto B5d01ce;
case 0x5d01cf:c.instructions+=1;goto B5d01cf;
case 0x5d01d2:goto L5d01d2;
case 0x5d01d6:c.instructions+=4;goto B5d01d6;
case 0x5d01d8:c.instructions+=3;goto B5d01d8;
case 0x5d01d9:c.instructions+=2;goto B5d01d9;
case 0x5d01db:c.instructions+=1;goto B5d01db;
case 0x5d01e0:goto L5d01e0;
case 0x5d01e2:c.instructions+=1;goto B5d01e2;
case 0x5d01e4:goto L5d01e4;
case 0x5d01e8:c.instructions+=2;goto B5d01e8;
case 0x5d01e9:c.instructions+=1;goto B5d01e9;
case 0x5d01eb:goto L5d01eb;
case 0x5d01ee:c.instructions+=1;goto B5d01ee;
case 0x5d01f0:goto L5d01f0;
case 0x5d01f2:goto L5d01f2;
case 0x5d01f6:c.instructions+=2;goto B5d01f6;
case 0x5d01f8:c.instructions+=1;goto B5d01f8;
case 0x5d01fb:goto L5d01fb;
case 0x5d01fd:goto L5d01fd;
case 0x5d01ff:c.instructions+=1;goto B5d01ff;
case 0x5d0202:goto L5d0202;
case 0x5d0204:goto L5d0204;
case 0x5d0208:c.instructions+=4;goto B5d0208;
case 0x5d020a:c.instructions+=3;goto B5d020a;
case 0x5d020d:c.instructions+=2;goto B5d020d;
case 0x5d020e:c.instructions+=1;goto B5d020e;
case 0x5d0210:goto L5d0210;
case 0x5d0213:goto L5d0213;
case 0x5d0217:goto L5d0217;
case 0x5d0218:c.instructions+=4;goto B5d0218;
case 0x5d0219:c.instructions+=3;goto B5d0219;
case 0x5d021b:c.instructions+=2;goto B5d021b;
case 0x5d021c:c.instructions+=1;goto B5d021c;
case 0x5d0220:goto L5d0220;
case 0x5d0221:c.instructions+=4;goto B5d0221;
case 0x5d0223:c.instructions+=3;goto B5d0223;
case 0x5d0226:c.instructions+=2;goto B5d0226;
case 0x5d0228:c.instructions+=1;goto B5d0228;
case 0x5d022a:goto L5d022a;
case 0x5d022b:c.instructions+=1;goto B5d022b;
case 0x5d0230:goto L5d0230;
case 0x5d0233:goto L5d0233;
case 0x5d023a:c.instructions+=4;goto B5d023a;
case 0x5d0241:c.instructions+=3;goto B5d0241;
case 0x5d0248:c.instructions+=2;goto B5d0248;
case 0x5d0249:c.instructions+=1;goto B5d0249;
case 0x5d0250:goto L5d0250;
case 0x5d0251:c.instructions+=24;goto B5d0251;
case 0x5d0253:c.instructions+=23;goto B5d0253;
case 0x5d0255:c.instructions+=22;goto B5d0255;
case 0x5d025a:c.instructions+=21;goto B5d025a;
case 0x5d0260:c.instructions+=20;goto B5d0260;
case 0x5d0261:c.instructions+=19;goto B5d0261;
case 0x5d0268:c.instructions+=18;goto B5d0268;
case 0x5d026b:c.instructions+=17;goto B5d026b;
case 0x5d026e:c.instructions+=16;goto B5d026e;
case 0x5d026f:c.instructions+=15;goto B5d026f;
case 0x5d0272:c.instructions+=14;goto B5d0272;
case 0x5d0273:c.instructions+=13;goto B5d0273;
case 0x5d0274:c.instructions+=12;goto B5d0274;
case 0x5d0277:c.instructions+=11;goto B5d0277;
case 0x5d0279:c.instructions+=10;goto B5d0279;
case 0x5d027c:c.instructions+=9;goto B5d027c;
case 0x5d027f:c.instructions+=8;goto B5d027f;
case 0x5d0280:c.instructions+=7;goto B5d0280;
case 0x5d0281:c.instructions+=6;goto B5d0281;
case 0x5d0282:c.instructions+=5;goto B5d0282;
case 0x5d0283:c.instructions+=4;goto B5d0283;
case 0x5d0284:c.instructions+=3;goto B5d0284;
case 0x5d0287:c.instructions+=2;goto B5d0287;
case 0x5d028e:c.instructions+=1;goto B5d028e;
case 0x5d0293:goto L5d0293;
case 0x5d0296:c.instructions+=10;goto B5d0296;
case 0x5d0299:c.instructions+=9;goto B5d0299;
case 0x5d029c:c.instructions+=8;goto B5d029c;
case 0x5d029d:c.instructions+=7;goto B5d029d;
case 0x5d02a0:c.instructions+=6;goto B5d02a0;
case 0x5d02a1:c.instructions+=5;goto B5d02a1;
case 0x5d02a8:c.instructions+=4;goto B5d02a8;
case 0x5d02a9:c.instructions+=3;goto B5d02a9;
case 0x5d02ab:c.instructions+=2;goto B5d02ab;
case 0x5d02ac:c.instructions+=1;goto B5d02ac;
case 0x5d02af:goto L5d02af;
case 0x5d02b2:c.instructions+=1;goto B5d02b2;
case 0x5d02b7:goto L5d02b7;
case 0x5d02b9:c.instructions+=2;goto B5d02b9;
case 0x5d02bb:c.instructions+=1;goto B5d02bb;
case 0x5d02c0:goto L5d02c0;
case 0x5d02d0:goto L5d02d0;
case 0x5d02d4:c.instructions+=6;goto B5d02d4;
case 0x5d02d5:c.instructions+=5;goto B5d02d5;
case 0x5d02d6:c.instructions+=4;goto B5d02d6;
case 0x5d02d7:c.instructions+=3;goto B5d02d7;
case 0x5d02db:c.instructions+=2;goto B5d02db;
case 0x5d02dd:c.instructions+=1;goto B5d02dd;
case 0x5d02df:goto L5d02df;
case 0x5d02e2:c.instructions+=3;goto B5d02e2;
case 0x5d02e4:c.instructions+=2;goto B5d02e4;
case 0x5d02e6:c.instructions+=1;goto B5d02e6;
case 0x5d02e8:goto L5d02e8;
case 0x5d02ea:c.instructions+=5;goto B5d02ea;
case 0x5d02ec:c.instructions+=4;goto B5d02ec;
case 0x5d02ef:c.instructions+=3;goto B5d02ef;
case 0x5d02f2:c.instructions+=2;goto B5d02f2;
case 0x5d02f4:c.instructions+=1;goto B5d02f4;
case 0x5d02f6:goto L5d02f6;
case 0x5d02f9:goto L5d02f9;
case 0x5d02fd:c.instructions+=5;goto B5d02fd;
case 0x5d02ff:c.instructions+=4;goto B5d02ff;
case 0x5d0300:c.instructions+=3;goto B5d0300;
case 0x5d0301:c.instructions+=2;goto B5d0301;
case 0x5d0302:c.instructions+=1;goto B5d0302;
case 0x5d0310:goto L5d0310;
case 0x5d0311:c.instructions+=5;goto B5d0311;
case 0x5d0313:c.instructions+=4;goto B5d0313;
case 0x5d0314:c.instructions+=3;goto B5d0314;
case 0x5d031a:c.instructions+=2;goto B5d031a;
case 0x5d031c:c.instructions+=1;goto B5d031c;
case 0x5d0321:goto L5d0321;
case 0x5d0323:c.instructions+=1;goto B5d0323;
case 0x5d0328:goto L5d0328;
case 0x5d032e:c.instructions+=1;goto B5d032e;
case 0x5d0333:goto L5d0333;
case 0x5d0339:c.instructions+=1;goto B5d0339;
case 0x5d033e:goto L5d033e;
case 0x5d0344:c.instructions+=1;goto B5d0344;
case 0x5d0349:goto L5d0349;
case 0x5d034f:c.instructions+=1;goto B5d034f;
case 0x5d0354:goto L5d0354;
case 0x5d035a:c.instructions+=1;goto B5d035a;
case 0x5d035f:goto L5d035f;
case 0x5d0361:c.instructions+=1;goto B5d0361;
case 0x5d0366:goto L5d0366;
case 0x5d0368:c.instructions+=1;goto B5d0368;
case 0x5d036d:goto L5d036d;
case 0x5d036e:c.instructions+=3;goto B5d036e;
case 0x5d0370:c.instructions+=2;goto B5d0370;
case 0x5d0371:c.instructions+=1;goto B5d0371;
case 0x5d0380:goto L5d0380;
case 0x5d0382:c.instructions+=21;goto B5d0382;
case 0x5d0387:c.instructions+=20;goto B5d0387;
case 0x5d038d:c.instructions+=19;goto B5d038d;
case 0x5d038e:c.instructions+=18;goto B5d038e;
case 0x5d0395:c.instructions+=17;goto B5d0395;
case 0x5d0396:c.instructions+=16;goto B5d0396;
case 0x5d039b:c.instructions+=15;goto B5d039b;
case 0x5d039c:c.instructions+=14;goto B5d039c;
case 0x5d039d:c.instructions+=13;goto B5d039d;
case 0x5d039e:c.instructions+=12;goto B5d039e;
case 0x5d039f:c.instructions+=11;goto B5d039f;
case 0x5d03a1:c.instructions+=10;goto B5d03a1;
case 0x5d03a3:c.instructions+=9;goto B5d03a3;
case 0x5d03a5:c.instructions+=8;goto B5d03a5;
case 0x5d03a7:c.instructions+=7;goto B5d03a7;
case 0x5d03a9:c.instructions+=6;goto B5d03a9;
case 0x5d03ab:c.instructions+=5;goto B5d03ab;
case 0x5d03b1:c.instructions+=4;goto B5d03b1;
case 0x5d03b7:c.instructions+=3;goto B5d03b7;
case 0x5d03bd:c.instructions+=2;goto B5d03bd;
case 0x5d03c3:c.instructions+=1;goto B5d03c3;
case 0x5d03c5:goto L5d03c5;
case 0x5d03ca:c.instructions+=1;goto B5d03ca;
case 0x5d03d0:goto L5d03d0;
case 0x5d03d3:c.instructions+=4;goto B5d03d3;
case 0x5d03d6:c.instructions+=3;goto B5d03d6;
case 0x5d03d7:c.instructions+=2;goto B5d03d7;
case 0x5d03d9:c.instructions+=1;goto B5d03d9;
case 0x5d03db:goto L5d03db;
case 0x5d03e1:goto L5d03e1;
case 0x5d03e7:c.instructions+=1;goto B5d03e7;
case 0x5d03e9:goto L5d03e9;
case 0x5d03ee:c.instructions+=1;goto B5d03ee;
case 0x5d03f0:goto L5d03f0;
case 0x5d03f3:c.instructions+=4;goto B5d03f3;
case 0x5d03f6:c.instructions+=3;goto B5d03f6;
case 0x5d03f7:c.instructions+=2;goto B5d03f7;
case 0x5d03f9:c.instructions+=1;goto B5d03f9;
case 0x5d03fb:goto L5d03fb;
case 0x5d0401:goto L5d0401;
case 0x5d0407:c.instructions+=1;goto B5d0407;
case 0x5d0409:goto L5d0409;
case 0x5d040e:c.instructions+=1;goto B5d040e;
case 0x5d0410:goto L5d0410;
case 0x5d0413:c.instructions+=4;goto B5d0413;
case 0x5d0416:c.instructions+=3;goto B5d0416;
case 0x5d0417:c.instructions+=2;goto B5d0417;
case 0x5d0419:c.instructions+=1;goto B5d0419;
case 0x5d041b:goto L5d041b;
case 0x5d0421:goto L5d0421;
case 0x5d0427:c.instructions+=1;goto B5d0427;
case 0x5d0429:goto L5d0429;
case 0x5d042e:c.instructions+=1;goto B5d042e;
case 0x5d0430:goto L5d0430;
case 0x5d0433:c.instructions+=4;goto B5d0433;
case 0x5d0436:c.instructions+=3;goto B5d0436;
case 0x5d0437:c.instructions+=2;goto B5d0437;
case 0x5d0439:c.instructions+=1;goto B5d0439;
case 0x5d043b:goto L5d043b;
case 0x5d0441:goto L5d0441;
case 0x5d0444:c.instructions+=3;goto B5d0444;
case 0x5d0447:c.instructions+=2;goto B5d0447;
case 0x5d0448:c.instructions+=1;goto B5d0448;
case 0x5d044d:goto L5d044d;
case 0x5d0452:c.instructions+=5;goto B5d0452;
case 0x5d0457:c.instructions+=4;goto B5d0457;
case 0x5d045a:c.instructions+=3;goto B5d045a;
case 0x5d045d:c.instructions+=2;goto B5d045d;
case 0x5d045e:c.instructions+=1;goto B5d045e;
case 0x5d0463:goto L5d0463;
case 0x5d0468:c.instructions+=5;goto B5d0468;
case 0x5d046d:c.instructions+=4;goto B5d046d;
case 0x5d0470:c.instructions+=3;goto B5d0470;
case 0x5d0473:c.instructions+=2;goto B5d0473;
case 0x5d0474:c.instructions+=1;goto B5d0474;
case 0x5d0479:goto L5d0479;
case 0x5d047e:c.instructions+=5;goto B5d047e;
case 0x5d0483:c.instructions+=4;goto B5d0483;
case 0x5d0486:c.instructions+=3;goto B5d0486;
case 0x5d0489:c.instructions+=2;goto B5d0489;
case 0x5d048a:c.instructions+=1;goto B5d048a;
case 0x5d048f:goto L5d048f;
case 0x5d0494:c.instructions+=6;goto B5d0494;
case 0x5d0499:c.instructions+=5;goto B5d0499;
case 0x5d049c:c.instructions+=4;goto B5d049c;
case 0x5d04a1:c.instructions+=3;goto B5d04a1;
case 0x5d04a3:c.instructions+=2;goto B5d04a3;
case 0x5d04a4:c.instructions+=1;goto B5d04a4;
case 0x5d04a7:goto L5d04a7;
case 0x5d04ac:goto L5d04ac;
case 0x5d04b1:c.instructions+=8;goto B5d04b1;
case 0x5d04b3:c.instructions+=7;goto B5d04b3;
case 0x5d04b4:c.instructions+=6;goto B5d04b4;
case 0x5d04b9:c.instructions+=5;goto B5d04b9;
case 0x5d04be:c.instructions+=4;goto B5d04be;
case 0x5d04c3:c.instructions+=3;goto B5d04c3;
case 0x5d04c4:c.instructions+=2;goto B5d04c4;
case 0x5d04c5:c.instructions+=1;goto B5d04c5;
case 0x5d04c8:goto L5d04c8;
case 0x5d04cd:c.instructions+=1;goto B5d04cd;
case 0x5d04d2:goto L5d04d2;
case 0x5d04d5:c.instructions+=4;goto B5d04d5;
case 0x5d04d9:c.instructions+=3;goto B5d04d9;
case 0x5d04db:c.instructions+=2;goto B5d04db;
case 0x5d04df:c.instructions+=1;goto B5d04df;
case 0x5d04e1:goto L5d04e1;
case 0x5d04e7:c.instructions+=3;goto B5d04e7;
case 0x5d04e8:c.instructions+=2;goto B5d04e8;
case 0x5d04ea:c.instructions+=1;goto B5d04ea;
case 0x5d04ef:goto L5d04ef;
case 0x5d04f1:goto L5d04f1;
case 0x5d04f3:goto L5d04f3;
case 0x5d04f6:c.instructions+=28;goto B5d04f6;
case 0x5d04f7:c.instructions+=27;goto B5d04f7;
case 0x5d04f8:c.instructions+=26;goto B5d04f8;
case 0x5d04fd:c.instructions+=25;goto B5d04fd;
case 0x5d04ff:c.instructions+=24;goto B5d04ff;
case 0x5d0505:c.instructions+=23;goto B5d0505;
case 0x5d050b:c.instructions+=22;goto B5d050b;
case 0x5d0511:c.instructions+=21;goto B5d0511;
case 0x5d0517:c.instructions+=20;goto B5d0517;
case 0x5d051d:c.instructions+=19;goto B5d051d;
case 0x5d0523:c.instructions+=18;goto B5d0523;
case 0x5d0527:c.instructions+=17;goto B5d0527;
case 0x5d0528:c.instructions+=16;goto B5d0528;
case 0x5d052e:c.instructions+=15;goto B5d052e;
case 0x5d0534:c.instructions+=14;goto B5d0534;
case 0x5d053a:c.instructions+=13;goto B5d053a;
case 0x5d0540:c.instructions+=12;goto B5d0540;
case 0x5d0546:c.instructions+=11;goto B5d0546;
case 0x5d054c:c.instructions+=10;goto B5d054c;
case 0x5d0551:c.instructions+=9;goto B5d0551;
case 0x5d0556:c.instructions+=8;goto B5d0556;
case 0x5d055b:c.instructions+=7;goto B5d055b;
case 0x5d0560:c.instructions+=6;goto B5d0560;
case 0x5d0565:c.instructions+=5;goto B5d0565;
case 0x5d056a:c.instructions+=4;goto B5d056a;
case 0x5d056b:c.instructions+=3;goto B5d056b;
case 0x5d0572:c.instructions+=2;goto B5d0572;
case 0x5d0575:c.instructions+=1;goto B5d0575;
case 0x5d0580:goto L5d0580;
case 0x5d0582:c.instructions+=9;goto B5d0582;
case 0x5d0587:c.instructions+=8;goto B5d0587;
case 0x5d058d:c.instructions+=7;goto B5d058d;
case 0x5d058e:c.instructions+=6;goto B5d058e;
case 0x5d0595:c.instructions+=5;goto B5d0595;
case 0x5d0596:c.instructions+=4;goto B5d0596;
case 0x5d0597:c.instructions+=3;goto B5d0597;
case 0x5d0599:c.instructions+=2;goto B5d0599;
case 0x5d059d:c.instructions+=1;goto B5d059d;
case 0x5d05a2:goto L5d05a2;
case 0x5d05a4:c.instructions+=11;goto B5d05a4;
case 0x5d05a7:c.instructions+=10;goto B5d05a7;
case 0x5d05ad:c.instructions+=9;goto B5d05ad;
case 0x5d05af:c.instructions+=8;goto B5d05af;
case 0x5d05b2:c.instructions+=7;goto B5d05b2;
case 0x5d05b9:c.instructions+=6;goto B5d05b9;
case 0x5d05ba:c.instructions+=5;goto B5d05ba;
case 0x5d05be:c.instructions+=4;goto B5d05be;
case 0x5d05c1:c.instructions+=3;goto B5d05c1;
case 0x5d05c5:c.instructions+=2;goto B5d05c5;
case 0x5d05c6:c.instructions+=1;goto B5d05c6;
case 0x5d05cb:goto L5d05cb;
case 0x5d05cf:c.instructions+=5;goto B5d05cf;
case 0x5d05d1:c.instructions+=4;goto B5d05d1;
case 0x5d05d2:c.instructions+=3;goto B5d05d2;
case 0x5d05d9:c.instructions+=2;goto B5d05d9;
case 0x5d05dc:c.instructions+=1;goto B5d05dc;
case 0x5d05e0:goto L5d05e0;
case 0x5d05e1:c.instructions+=4;goto B5d05e1;
case 0x5d05e3:c.instructions+=3;goto B5d05e3;
case 0x5d05e9:c.instructions+=2;goto B5d05e9;
case 0x5d05ed:c.instructions+=1;goto B5d05ed;
case 0x5d05ef:goto L5d05ef;
case 0x5d05f2:c.instructions+=2;goto B5d05f2;
case 0x5d05f3:c.instructions+=1;goto B5d05f3;
case 0x5d05f8:goto L5d05f8;
case 0x5d05fb:goto L5d05fb;
case 0x5d05fd:c.instructions+=6;goto B5d05fd;
case 0x5d0604:c.instructions+=5;goto B5d0604;
case 0x5d0607:c.instructions+=4;goto B5d0607;
case 0x5d060a:c.instructions+=3;goto B5d060a;
case 0x5d060c:c.instructions+=2;goto B5d060c;
case 0x5d060d:c.instructions+=1;goto B5d060d;
case 0x5d0620:goto L5d0620;
case 0x5d0624:c.instructions+=9;goto B5d0624;
case 0x5d0625:c.instructions+=8;goto B5d0625;
case 0x5d0627:c.instructions+=7;goto B5d0627;
case 0x5d0629:c.instructions+=6;goto B5d0629;
case 0x5d062a:c.instructions+=5;goto B5d062a;
case 0x5d0631:c.instructions+=4;goto B5d0631;
case 0x5d0638:c.instructions+=3;goto B5d0638;
case 0x5d063c:c.instructions+=2;goto B5d063c;
case 0x5d063f:c.instructions+=1;goto B5d063f;
case 0x5d0640:goto L5d0640;
case 0x5d0642:c.instructions+=3;goto B5d0642;
case 0x5d0643:c.instructions+=2;goto B5d0643;
case 0x5d0645:c.instructions+=1;goto B5d0645;
case 0x5d0647:goto L5d0647;
case 0x5d0649:c.instructions+=4;goto B5d0649;
case 0x5d064a:c.instructions+=3;goto B5d064a;
case 0x5d064b:c.instructions+=2;goto B5d064b;
case 0x5d064d:c.instructions+=1;goto B5d064d;
case 0x5d0652:goto L5d0652;
case 0x5d0653:c.instructions+=3;goto B5d0653;
case 0x5d0655:c.instructions+=2;goto B5d0655;
case 0x5d0656:c.instructions+=1;goto B5d0656;
case 0x5d0660:goto L5d0660;
case 0x5d0661:c.instructions+=7;goto B5d0661;
case 0x5d0662:c.instructions+=6;goto B5d0662;
case 0x5d0664:c.instructions+=5;goto B5d0664;
case 0x5d0667:c.instructions+=4;goto B5d0667;
case 0x5d0668:c.instructions+=3;goto B5d0668;
case 0x5d066a:c.instructions+=2;goto B5d066a;
case 0x5d066c:c.instructions+=1;goto B5d066c;
case 0x5d066e:goto L5d066e;
case 0x5d066f:c.instructions+=1;goto B5d066f;
case 0x5d0674:goto L5d0674;
case 0x5d0677:goto L5d0677;
case 0x5d067a:c.instructions+=6;goto B5d067a;
case 0x5d067d:c.instructions+=5;goto B5d067d;
case 0x5d0680:c.instructions+=4;goto B5d0680;
case 0x5d0683:c.instructions+=3;goto B5d0683;
case 0x5d0686:c.instructions+=2;goto B5d0686;
case 0x5d0688:c.instructions+=1;goto B5d0688;
case 0x5d068a:goto L5d068a;
case 0x5d068c:c.instructions+=1;goto B5d068c;
case 0x5d068e:goto L5d068e;
case 0x5d0690:goto L5d0690;
case 0x5d0691:c.instructions+=5;goto B5d0691;
case 0x5d0692:c.instructions+=4;goto B5d0692;
case 0x5d0696:c.instructions+=3;goto B5d0696;
case 0x5d0697:c.instructions+=2;goto B5d0697;
case 0x5d0699:c.instructions+=1;goto B5d0699;
case 0x5d069e:goto L5d069e;
case 0x5d06a1:c.instructions+=2;goto B5d06a1;
case 0x5d06a2:c.instructions+=1;goto B5d06a2;
case 0x5d06a7:goto L5d06a7;
case 0x5d06aa:c.instructions+=6;goto B5d06aa;
case 0x5d06ad:c.instructions+=5;goto B5d06ad;
case 0x5d06b0:c.instructions+=4;goto B5d06b0;
case 0x5d06b1:c.instructions+=3;goto B5d06b1;
case 0x5d06b2:c.instructions+=2;goto B5d06b2;
case 0x5d06b3:c.instructions+=1;goto B5d06b3;
case 0x5d06c0:goto L5d06c0;
case 0x5d06c6:c.instructions+=13;goto B5d06c6;
case 0x5d06ca:c.instructions+=12;goto B5d06ca;
case 0x5d06cc:c.instructions+=11;goto B5d06cc;
case 0x5d06d1:c.instructions+=10;goto B5d06d1;
case 0x5d06d2:c.instructions+=9;goto B5d06d2;
case 0x5d06d9:c.instructions+=8;goto B5d06d9;
case 0x5d06dc:c.instructions+=7;goto B5d06dc;
case 0x5d06df:c.instructions+=6;goto B5d06df;
case 0x5d06e0:c.instructions+=5;goto B5d06e0;
case 0x5d06e5:c.instructions+=4;goto B5d06e5;
case 0x5d06e7:c.instructions+=3;goto B5d06e7;
case 0x5d06e9:c.instructions+=2;goto B5d06e9;
case 0x5d06ea:c.instructions+=1;goto B5d06ea;
case 0x5d06ec:goto L5d06ec;
case 0x5d06f1:c.instructions+=5;goto B5d06f1;
case 0x5d06f9:c.instructions+=4;goto B5d06f9;
case 0x5d0701:c.instructions+=3;goto B5d0701;
case 0x5d0706:c.instructions+=2;goto B5d0706;
case 0x5d0709:c.instructions+=1;goto B5d0709;
case 0x5d0710:goto L5d0710;
case 0x5d0712:c.instructions+=3;goto B5d0712;
case 0x5d0713:c.instructions+=2;goto B5d0713;
case 0x5d0715:c.instructions+=1;goto B5d0715;
case 0x5d0717:goto L5d0717;
case 0x5d0719:c.instructions+=4;goto B5d0719;
case 0x5d071a:c.instructions+=3;goto B5d071a;
case 0x5d071f:c.instructions+=2;goto B5d071f;
case 0x5d0723:c.instructions+=1;goto B5d0723;
case 0x5d0728:goto L5d0728;
case 0x5d072c:c.instructions+=4;goto B5d072c;
case 0x5d072d:c.instructions+=3;goto B5d072d;
case 0x5d0731:c.instructions+=2;goto B5d0731;
case 0x5d0739:c.instructions+=1;goto B5d0739;
case 0x5d073e:goto L5d073e;
case 0x5d0743:c.instructions+=4;goto B5d0743;
case 0x5d0747:c.instructions+=3;goto B5d0747;
case 0x5d0748:c.instructions+=2;goto B5d0748;
case 0x5d0750:c.instructions+=1;goto B5d0750;
case 0x5d0755:goto L5d0755;
case 0x5d0757:c.instructions+=5;goto B5d0757;
case 0x5d075a:c.instructions+=4;goto B5d075a;
case 0x5d075e:c.instructions+=3;goto B5d075e;
case 0x5d0765:c.instructions+=2;goto B5d0765;
case 0x5d0768:c.instructions+=1;goto B5d0768;
case 0x5d0770:goto L5d0770;
case 0x5d0772:c.instructions+=12;goto B5d0772;
case 0x5d0777:c.instructions+=11;goto B5d0777;
case 0x5d077d:c.instructions+=10;goto B5d077d;
case 0x5d077e:c.instructions+=9;goto B5d077e;
case 0x5d0785:c.instructions+=8;goto B5d0785;
case 0x5d0786:c.instructions+=7;goto B5d0786;
case 0x5d0787:c.instructions+=6;goto B5d0787;
case 0x5d0788:c.instructions+=5;goto B5d0788;
case 0x5d078c:c.instructions+=4;goto B5d078c;
case 0x5d078e:c.instructions+=3;goto B5d078e;
case 0x5d078f:c.instructions+=2;goto B5d078f;
case 0x5d0793:c.instructions+=1;goto B5d0793;
case 0x5d0798:goto L5d0798;
case 0x5d079a:c.instructions+=11;goto B5d079a;
case 0x5d079c:c.instructions+=10;goto B5d079c;
case 0x5d079f:c.instructions+=9;goto B5d079f;
case 0x5d07a5:c.instructions+=8;goto B5d07a5;
case 0x5d07a6:c.instructions+=7;goto B5d07a6;
case 0x5d07a9:c.instructions+=6;goto B5d07a9;
case 0x5d07b0:c.instructions+=5;goto B5d07b0;
case 0x5d07b3:c.instructions+=4;goto B5d07b3;
case 0x5d07b4:c.instructions+=3;goto B5d07b4;
case 0x5d07b8:c.instructions+=2;goto B5d07b8;
case 0x5d07bb:c.instructions+=1;goto B5d07bb;
case 0x5d07c0:goto L5d07c0;
case 0x5d07c4:c.instructions+=6;goto B5d07c4;
case 0x5d07c5:c.instructions+=5;goto B5d07c5;
case 0x5d07c7:c.instructions+=4;goto B5d07c7;
case 0x5d07c8:c.instructions+=3;goto B5d07c8;
case 0x5d07cf:c.instructions+=2;goto B5d07cf;
case 0x5d07d2:c.instructions+=1;goto B5d07d2;
case 0x5d07e0:goto L5d07e0;
case 0x5d07e2:c.instructions+=10;goto B5d07e2;
case 0x5d07e7:c.instructions+=9;goto B5d07e7;
case 0x5d07ed:c.instructions+=8;goto B5d07ed;
case 0x5d07ee:c.instructions+=7;goto B5d07ee;
case 0x5d07f5:c.instructions+=6;goto B5d07f5;
case 0x5d07f8:c.instructions+=5;goto B5d07f8;
case 0x5d07fd:c.instructions+=4;goto B5d07fd;
case 0x5d0805:c.instructions+=3;goto B5d0805;
case 0x5d080d:c.instructions+=2;goto B5d080d;
case 0x5d0812:c.instructions+=1;goto B5d0812;
case 0x5d0815:goto L5d0815;
case 0x5d0817:c.instructions+=3;goto B5d0817;
case 0x5d0818:c.instructions+=2;goto B5d0818;
case 0x5d081a:c.instructions+=1;goto B5d081a;
case 0x5d081c:goto L5d081c;
case 0x5d081e:c.instructions+=4;goto B5d081e;
case 0x5d081f:c.instructions+=3;goto B5d081f;
case 0x5d0824:c.instructions+=2;goto B5d0824;
case 0x5d0828:c.instructions+=1;goto B5d0828;
case 0x5d082d:goto L5d082d;
case 0x5d0831:c.instructions+=4;goto B5d0831;
case 0x5d0832:c.instructions+=3;goto B5d0832;
case 0x5d0836:c.instructions+=2;goto B5d0836;
case 0x5d083e:c.instructions+=1;goto B5d083e;
case 0x5d0843:goto L5d0843;
case 0x5d0848:c.instructions+=4;goto B5d0848;
case 0x5d084c:c.instructions+=3;goto B5d084c;
case 0x5d084d:c.instructions+=2;goto B5d084d;
case 0x5d0855:c.instructions+=1;goto B5d0855;
case 0x5d085a:goto L5d085a;
case 0x5d0860:goto L5d0860;
case 0x5d0864:c.instructions+=4;goto B5d0864;
case 0x5d0865:c.instructions+=3;goto B5d0865;
case 0x5d0866:c.instructions+=2;goto B5d0866;
case 0x5d0868:c.instructions+=1;goto B5d0868;
case 0x5d086d:goto L5d086d;
case 0x5d0873:c.instructions+=3;goto B5d0873;
case 0x5d0875:c.instructions+=2;goto B5d0875;
case 0x5d0876:c.instructions+=1;goto B5d0876;
case 0x5d0880:goto L5d0880;
case 0x5d0886:c.instructions+=1;goto B5d0886;
case 0x5d0890:goto L5d0890;
case 0x5d0891:c.instructions+=18;goto B5d0891;
case 0x5d0893:c.instructions+=17;goto B5d0893;
case 0x5d0895:c.instructions+=16;goto B5d0895;
case 0x5d089a:c.instructions+=15;goto B5d089a;
case 0x5d08a0:c.instructions+=14;goto B5d08a0;
case 0x5d08a1:c.instructions+=13;goto B5d08a1;
case 0x5d08a8:c.instructions+=12;goto B5d08a8;
case 0x5d08ab:c.instructions+=11;goto B5d08ab;
case 0x5d08ae:c.instructions+=10;goto B5d08ae;
case 0x5d08af:c.instructions+=9;goto B5d08af;
case 0x5d08b0:c.instructions+=8;goto B5d08b0;
case 0x5d08b2:c.instructions+=7;goto B5d08b2;
case 0x5d08b4:c.instructions+=6;goto B5d08b4;
case 0x5d08b5:c.instructions+=5;goto B5d08b5;
case 0x5d08b8:c.instructions+=4;goto B5d08b8;
case 0x5d08ba:c.instructions+=3;goto B5d08ba;
case 0x5d08bd:c.instructions+=2;goto B5d08bd;
case 0x5d08c0:c.instructions+=1;goto B5d08c0;
case 0x5d08c2:goto L5d08c2;
case 0x5d08c4:c.instructions+=1;goto B5d08c4;
case 0x5d08c6:goto L5d08c6;
case 0x5d08c9:c.instructions+=2;goto B5d08c9;
case 0x5d08cb:c.instructions+=1;goto B5d08cb;
case 0x5d08ce:goto L5d08ce;
case 0x5d08d1:c.instructions+=2;goto B5d08d1;
case 0x5d08d3:c.instructions+=1;goto B5d08d3;
case 0x5d08d9:goto L5d08d9;
case 0x5d08db:c.instructions+=1;goto B5d08db;
case 0x5d08dd:goto L5d08dd;
case 0x5d08df:c.instructions+=1;goto B5d08df;
case 0x5d08e1:goto L5d08e1;
case 0x5d08e4:c.instructions+=2;goto B5d08e4;
case 0x5d08e6:c.instructions+=1;goto B5d08e6;
case 0x5d08e9:goto L5d08e9;
case 0x5d08ee:c.instructions+=3;goto B5d08ee;
case 0x5d08f0:c.instructions+=2;goto B5d08f0;
case 0x5d08f2:c.instructions+=1;goto B5d08f2;
case 0x5d08f4:goto L5d08f4;
case 0x5d08f6:c.instructions+=1;goto B5d08f6;
case 0x5d08fb:goto L5d08fb;
case 0x5d08fe:c.instructions+=7;goto B5d08fe;
case 0x5d0905:c.instructions+=6;goto B5d0905;
case 0x5d0906:c.instructions+=5;goto B5d0906;
case 0x5d0907:c.instructions+=4;goto B5d0907;
case 0x5d0908:c.instructions+=3;goto B5d0908;
case 0x5d090a:c.instructions+=2;goto B5d090a;
case 0x5d090b:c.instructions+=1;goto B5d090b;
case 0x5d090e:goto L5d090e;
case 0x5d0910:c.instructions+=1;goto B5d0910;
case 0x5d0912:goto L5d0912;
case 0x5d0914:c.instructions+=1;goto B5d0914;
case 0x5d0916:goto L5d0916;
case 0x5d0919:c.instructions+=2;goto B5d0919;
case 0x5d091b:c.instructions+=1;goto B5d091b;
case 0x5d091e:goto L5d091e;
case 0x5d0920:c.instructions+=2;goto B5d0920;
case 0x5d0922:c.instructions+=1;goto B5d0922;
case 0x5d0928:goto L5d0928;
case 0x5d092a:c.instructions+=5;goto B5d092a;
case 0x5d092c:c.instructions+=4;goto B5d092c;
case 0x5d0931:c.instructions+=3;goto B5d0931;
case 0x5d0933:c.instructions+=2;goto B5d0933;
case 0x5d0935:c.instructions+=1;goto B5d0935;
case 0x5d0937:goto L5d0937;
case 0x5d0939:c.instructions+=1;goto B5d0939;
case 0x5d093b:goto L5d093b;
case 0x5d093d:goto L5d093d;
case 0x5d093f:c.instructions+=1;goto B5d093f;
case 0x5d0941:goto L5d0941;
case 0x5d0943:c.instructions+=1;goto B5d0943;
case 0x5d0945:goto L5d0945;
case 0x5d0948:c.instructions+=2;goto B5d0948;
case 0x5d094a:c.instructions+=1;goto B5d094a;
case 0x5d094d:goto L5d094d;
case 0x5d094f:c.instructions+=2;goto B5d094f;
case 0x5d0951:c.instructions+=1;goto B5d0951;
case 0x5d0953:goto L5d0953;
case 0x5d0955:c.instructions+=1;goto B5d0955;
case 0x5d0957:goto L5d0957;
case 0x5d0959:c.instructions+=1;goto B5d0959;
case 0x5d095b:goto L5d095b;
case 0x5d095e:c.instructions+=2;goto B5d095e;
case 0x5d0960:c.instructions+=1;goto B5d0960;
case 0x5d0963:goto L5d0963;
case 0x5d0965:goto L5d0965;
case 0x5d0968:c.instructions+=3;goto B5d0968;
case 0x5d0969:c.instructions+=2;goto B5d0969;
case 0x5d096c:c.instructions+=1;goto B5d096c;
case 0x5d0971:goto L5d0971;
case 0x5d0974:c.instructions+=16;goto B5d0974;
case 0x5d0977:c.instructions+=15;goto B5d0977;
case 0x5d0978:c.instructions+=14;goto B5d0978;
case 0x5d097b:c.instructions+=13;goto B5d097b;
case 0x5d097d:c.instructions+=12;goto B5d097d;
case 0x5d0980:c.instructions+=11;goto B5d0980;
case 0x5d0981:c.instructions+=10;goto B5d0981;
case 0x5d0982:c.instructions+=9;goto B5d0982;
case 0x5d0983:c.instructions+=8;goto B5d0983;
case 0x5d0985:c.instructions+=7;goto B5d0985;
case 0x5d0987:c.instructions+=6;goto B5d0987;
case 0x5d0988:c.instructions+=5;goto B5d0988;
case 0x5d098a:c.instructions+=4;goto B5d098a;
case 0x5d098d:c.instructions+=3;goto B5d098d;
case 0x5d0994:c.instructions+=2;goto B5d0994;
case 0x5d0996:c.instructions+=1;goto B5d0996;
case 0x5d099b:goto L5d099b;
case 0x5d099e:c.instructions+=10;goto B5d099e;
case 0x5d09a1:c.instructions+=9;goto B5d09a1;
case 0x5d09a3:c.instructions+=8;goto B5d09a3;
case 0x5d09a6:c.instructions+=7;goto B5d09a6;
case 0x5d09a7:c.instructions+=6;goto B5d09a7;
case 0x5d09a8:c.instructions+=5;goto B5d09a8;
case 0x5d09ab:c.instructions+=4;goto B5d09ab;
case 0x5d09ac:c.instructions+=3;goto B5d09ac;
case 0x5d09ad:c.instructions+=2;goto B5d09ad;
case 0x5d09ae:c.instructions+=1;goto B5d09ae;
case 0x5d09b3:goto L5d09b3;
case 0x5d09b6:c.instructions+=15;goto B5d09b6;
case 0x5d09b9:c.instructions+=14;goto B5d09b9;
case 0x5d09bc:c.instructions+=13;goto B5d09bc;
case 0x5d09bf:c.instructions+=12;goto B5d09bf;
case 0x5d09c0:c.instructions+=11;goto B5d09c0;
case 0x5d09c3:c.instructions+=10;goto B5d09c3;
case 0x5d09c4:c.instructions+=9;goto B5d09c4;
case 0x5d09c5:c.instructions+=8;goto B5d09c5;
case 0x5d09c6:c.instructions+=7;goto B5d09c6;
case 0x5d09c8:c.instructions+=6;goto B5d09c8;
case 0x5d09ca:c.instructions+=5;goto B5d09ca;
case 0x5d09cb:c.instructions+=4;goto B5d09cb;
case 0x5d09ce:c.instructions+=3;goto B5d09ce;
case 0x5d09d0:c.instructions+=2;goto B5d09d0;
case 0x5d09d2:c.instructions+=1;goto B5d09d2;
case 0x5d09d7:goto L5d09d7;
case 0x5d09da:c.instructions+=3;goto B5d09da;
case 0x5d09dd:c.instructions+=2;goto B5d09dd;
case 0x5d09df:c.instructions+=1;goto B5d09df;
case 0x5d09e1:goto L5d09e1;
case 0x5d09e3:c.instructions+=1;goto B5d09e3;
case 0x5d09e5:goto L5d09e5;
case 0x5d09e8:c.instructions+=2;goto B5d09e8;
case 0x5d09ea:c.instructions+=1;goto B5d09ea;
case 0x5d09ed:goto L5d09ed;
case 0x5d09f0:c.instructions+=3;goto B5d09f0;
case 0x5d09f2:c.instructions+=2;goto B5d09f2;
case 0x5d09f4:c.instructions+=1;goto B5d09f4;
case 0x5d09f6:goto L5d09f6;
case 0x5d09f7:c.instructions+=1;goto B5d09f7;
case 0x5d09fc:goto L5d09fc;
case 0x5d09ff:goto L5d09ff;
case 0x5d0a02:c.instructions+=13;goto B5d0a02;
case 0x5d0a04:c.instructions+=12;goto B5d0a04;
case 0x5d0a07:c.instructions+=11;goto B5d0a07;
case 0x5d0a0a:c.instructions+=10;goto B5d0a0a;
case 0x5d0a0d:c.instructions+=9;goto B5d0a0d;
case 0x5d0a10:c.instructions+=8;goto B5d0a10;
case 0x5d0a13:c.instructions+=7;goto B5d0a13;
case 0x5d0a1a:c.instructions+=6;goto B5d0a1a;
case 0x5d0a1b:c.instructions+=5;goto B5d0a1b;
case 0x5d0a1c:c.instructions+=4;goto B5d0a1c;
case 0x5d0a1d:c.instructions+=3;goto B5d0a1d;
case 0x5d0a1f:c.instructions+=2;goto B5d0a1f;
case 0x5d0a20:c.instructions+=1;goto B5d0a20;
case 0x5d0a23:goto L5d0a23;
case 0x5d0a26:c.instructions+=2;goto B5d0a26;
case 0x5d0a27:c.instructions+=1;goto B5d0a27;
case 0x5d0a2c:goto L5d0a2c;
case 0x5d0a2f:c.instructions+=3;goto B5d0a2f;
case 0x5d0a31:c.instructions+=2;goto B5d0a31;
case 0x5d0a33:c.instructions+=1;goto B5d0a33;
case 0x5d0a38:goto L5d0a38;
case 0x5d0a3b:c.instructions+=6;goto B5d0a3b;
case 0x5d0a3e:c.instructions+=5;goto B5d0a3e;
case 0x5d0a40:c.instructions+=4;goto B5d0a40;
case 0x5d0a42:c.instructions+=3;goto B5d0a42;
case 0x5d0a45:c.instructions+=2;goto B5d0a45;
case 0x5d0a47:c.instructions+=1;goto B5d0a47;
case 0x5d0a49:goto L5d0a49;
case 0x5d0a50:c.instructions+=13;goto B5d0a50;
case 0x5d0a53:c.instructions+=12;goto B5d0a53;
case 0x5d0a55:c.instructions+=11;goto B5d0a55;
case 0x5d0a56:c.instructions+=10;goto B5d0a56;
case 0x5d0a57:c.instructions+=9;goto B5d0a57;
case 0x5d0a59:c.instructions+=8;goto B5d0a59;
case 0x5d0a5c:c.instructions+=7;goto B5d0a5c;
case 0x5d0a5d:c.instructions+=6;goto B5d0a5d;
case 0x5d0a5f:c.instructions+=5;goto B5d0a5f;
case 0x5d0a61:c.instructions+=4;goto B5d0a61;
case 0x5d0a63:c.instructions+=3;goto B5d0a63;
case 0x5d0a66:c.instructions+=2;goto B5d0a66;
case 0x5d0a68:c.instructions+=1;goto B5d0a68;
case 0x5d0a6d:goto L5d0a6d;
case 0x5d0a70:c.instructions+=12;goto B5d0a70;
case 0x5d0a73:c.instructions+=11;goto B5d0a73;
case 0x5d0a76:c.instructions+=10;goto B5d0a76;
case 0x5d0a77:c.instructions+=9;goto B5d0a77;
case 0x5d0a79:c.instructions+=8;goto B5d0a79;
case 0x5d0a7b:c.instructions+=7;goto B5d0a7b;
case 0x5d0a7e:c.instructions+=6;goto B5d0a7e;
case 0x5d0a80:c.instructions+=5;goto B5d0a80;
case 0x5d0a81:c.instructions+=4;goto B5d0a81;
case 0x5d0a82:c.instructions+=3;goto B5d0a82;
case 0x5d0a84:c.instructions+=2;goto B5d0a84;
case 0x5d0a8b:c.instructions+=1;goto B5d0a8b;
case 0x5d0a90:goto L5d0a90;
case 0x5d0a93:c.instructions+=11;goto B5d0a93;
case 0x5d0a96:c.instructions+=10;goto B5d0a96;
case 0x5d0a98:c.instructions+=9;goto B5d0a98;
case 0x5d0a9b:c.instructions+=8;goto B5d0a9b;
case 0x5d0a9e:c.instructions+=7;goto B5d0a9e;
case 0x5d0a9f:c.instructions+=6;goto B5d0a9f;
case 0x5d0aa1:c.instructions+=5;goto B5d0aa1;
case 0x5d0aa2:c.instructions+=4;goto B5d0aa2;
case 0x5d0aa4:c.instructions+=3;goto B5d0aa4;
case 0x5d0aa6:c.instructions+=2;goto B5d0aa6;
case 0x5d0aa8:c.instructions+=1;goto B5d0aa8;
case 0x5d0aaa:goto L5d0aaa;
case 0x5d0aab:c.instructions+=15;goto B5d0aab;
case 0x5d0aac:c.instructions+=14;goto B5d0aac;
case 0x5d0aae:c.instructions+=13;goto B5d0aae;
case 0x5d0ab0:c.instructions+=12;goto B5d0ab0;
case 0x5d0ab3:c.instructions+=11;goto B5d0ab3;
case 0x5d0ab4:c.instructions+=10;goto B5d0ab4;
case 0x5d0ab7:c.instructions+=9;goto B5d0ab7;
case 0x5d0ab9:c.instructions+=8;goto B5d0ab9;
case 0x5d0abb:c.instructions+=7;goto B5d0abb;
case 0x5d0abd:c.instructions+=6;goto B5d0abd;
case 0x5d0abf:c.instructions+=5;goto B5d0abf;
case 0x5d0ac2:c.instructions+=4;goto B5d0ac2;
case 0x5d0ac4:c.instructions+=3;goto B5d0ac4;
case 0x5d0ac7:c.instructions+=2;goto B5d0ac7;
case 0x5d0aca:c.instructions+=1;goto B5d0aca;
case 0x5d0acf:goto L5d0acf;
case 0x5d0ad0:c.instructions+=16;goto B5d0ad0;
case 0x5d0ad3:c.instructions+=15;goto B5d0ad3;
case 0x5d0ad5:c.instructions+=14;goto B5d0ad5;
case 0x5d0ad8:c.instructions+=13;goto B5d0ad8;
case 0x5d0ad9:c.instructions+=12;goto B5d0ad9;
case 0x5d0adc:c.instructions+=11;goto B5d0adc;
case 0x5d0ade:c.instructions+=10;goto B5d0ade;
case 0x5d0ae0:c.instructions+=9;goto B5d0ae0;
case 0x5d0ae3:c.instructions+=8;goto B5d0ae3;
case 0x5d0ae4:c.instructions+=7;goto B5d0ae4;
case 0x5d0ae6:c.instructions+=6;goto B5d0ae6;
case 0x5d0ae8:c.instructions+=5;goto B5d0ae8;
case 0x5d0aeb:c.instructions+=4;goto B5d0aeb;
case 0x5d0aee:c.instructions+=3;goto B5d0aee;
case 0x5d0aef:c.instructions+=2;goto B5d0aef;
case 0x5d0af1:c.instructions+=1;goto B5d0af1;
case 0x5d0af6:goto L5d0af6;
case 0x5d0af9:c.instructions+=7;goto B5d0af9;
case 0x5d0afc:c.instructions+=6;goto B5d0afc;
case 0x5d0afd:c.instructions+=5;goto B5d0afd;
case 0x5d0afe:c.instructions+=4;goto B5d0afe;
case 0x5d0b01:c.instructions+=3;goto B5d0b01;
case 0x5d0b03:c.instructions+=2;goto B5d0b03;
case 0x5d0b05:c.instructions+=1;goto B5d0b05;
case 0x5d0b07:goto L5d0b07;
case 0x5d0b0a:c.instructions+=5;goto B5d0b0a;
case 0x5d0b0b:c.instructions+=4;goto B5d0b0b;
case 0x5d0b0d:c.instructions+=3;goto B5d0b0d;
case 0x5d0b0f:c.instructions+=2;goto B5d0b0f;
case 0x5d0b12:c.instructions+=1;goto B5d0b12;
case 0x5d0b17:goto L5d0b17;
case 0x5d0b1a:goto L5d0b1a;
case 0x5d0b1d:c.instructions+=7;goto B5d0b1d;
case 0x5d0b1e:c.instructions+=6;goto B5d0b1e;
case 0x5d0b1f:c.instructions+=5;goto B5d0b1f;
case 0x5d0b26:c.instructions+=4;goto B5d0b26;
case 0x5d0b27:c.instructions+=3;goto B5d0b27;
case 0x5d0b29:c.instructions+=2;goto B5d0b29;
case 0x5d0b2a:c.instructions+=1;goto B5d0b2a;
case 0x5d0b30:goto L5d0b30;
case 0x5d0b31:c.instructions+=4;goto B5d0b31;
case 0x5d0b34:c.instructions+=3;goto B5d0b34;
case 0x5d0b36:c.instructions+=2;goto B5d0b36;
case 0x5d0b37:c.instructions+=1;goto B5d0b37;
case 0x5d0b39:goto L5d0b39;
case 0x5d0b3b:c.instructions+=1;goto B5d0b3b;
case 0x5d0b3d:goto L5d0b3d;
case 0x5d0b40:c.instructions+=2;goto B5d0b40;
case 0x5d0b42:c.instructions+=1;goto B5d0b42;
case 0x5d0b45:goto L5d0b45;
case 0x5d0b49:c.instructions+=2;goto B5d0b49;
case 0x5d0b4b:c.instructions+=1;goto B5d0b4b;
case 0x5d0b4d:goto L5d0b4d;
case 0x5d0b4f:c.instructions+=1;goto B5d0b4f;
case 0x5d0b51:goto L5d0b51;
case 0x5d0b53:c.instructions+=1;goto B5d0b53;
case 0x5d0b55:goto L5d0b55;
case 0x5d0b58:c.instructions+=2;goto B5d0b58;
case 0x5d0b5a:c.instructions+=1;goto B5d0b5a;
case 0x5d0b5d:goto L5d0b5d;
case 0x5d0b5f:c.instructions+=8;goto B5d0b5f;
case 0x5d0b63:c.instructions+=7;goto B5d0b63;
case 0x5d0b64:c.instructions+=6;goto B5d0b64;
case 0x5d0b65:c.instructions+=5;goto B5d0b65;
case 0x5d0b68:c.instructions+=4;goto B5d0b68;
case 0x5d0b69:c.instructions+=3;goto B5d0b69;
case 0x5d0b6b:c.instructions+=2;goto B5d0b6b;
case 0x5d0b6d:c.instructions+=1;goto B5d0b6d;
case 0x5d0b72:goto L5d0b72;
case 0x5d0b73:c.instructions+=2;goto B5d0b73;
case 0x5d0b74:c.instructions+=1;goto B5d0b74;
case 0x5d0b77:goto L5d0b77;
case 0x5d0b79:c.instructions+=1;goto B5d0b79;
case 0x5d0b7b:goto L5d0b7b;
case 0x5d0b7e:c.instructions+=5;goto B5d0b7e;
case 0x5d0b80:c.instructions+=4;goto B5d0b80;
case 0x5d0b82:c.instructions+=3;goto B5d0b82;
case 0x5d0b85:c.instructions+=2;goto B5d0b85;
case 0x5d0b87:c.instructions+=1;goto B5d0b87;
case 0x5d0b89:goto L5d0b89;
case 0x5d0b8a:c.instructions+=10;goto B5d0b8a;
case 0x5d0b8c:c.instructions+=9;goto B5d0b8c;
case 0x5d0b8e:c.instructions+=8;goto B5d0b8e;
case 0x5d0b91:c.instructions+=7;goto B5d0b91;
case 0x5d0b92:c.instructions+=6;goto B5d0b92;
case 0x5d0b95:c.instructions+=5;goto B5d0b95;
case 0x5d0b97:c.instructions+=4;goto B5d0b97;
case 0x5d0b9b:c.instructions+=3;goto B5d0b9b;
case 0x5d0b9c:c.instructions+=2;goto B5d0b9c;
case 0x5d0b9e:c.instructions+=1;goto B5d0b9e;
case 0x5d0ba3:goto L5d0ba3;
case 0x5d0ba4:c.instructions+=2;goto B5d0ba4;
case 0x5d0ba5:c.instructions+=1;goto B5d0ba5;
case 0x5d0bb0:goto L5d0bb0;
case 0x5d0bb2:c.instructions+=15;goto B5d0bb2;
case 0x5d0bb7:c.instructions+=14;goto B5d0bb7;
case 0x5d0bbd:c.instructions+=13;goto B5d0bbd;
case 0x5d0bbe:c.instructions+=12;goto B5d0bbe;
case 0x5d0bc5:c.instructions+=11;goto B5d0bc5;
case 0x5d0bc6:c.instructions+=10;goto B5d0bc6;
case 0x5d0bca:c.instructions+=9;goto B5d0bca;
case 0x5d0bcb:c.instructions+=8;goto B5d0bcb;
case 0x5d0bcd:c.instructions+=7;goto B5d0bcd;
case 0x5d0bcf:c.instructions+=6;goto B5d0bcf;
case 0x5d0bd0:c.instructions+=5;goto B5d0bd0;
case 0x5d0bd2:c.instructions+=4;goto B5d0bd2;
case 0x5d0bd5:c.instructions+=3;goto B5d0bd5;
case 0x5d0bd7:c.instructions+=2;goto B5d0bd7;
case 0x5d0bdb:c.instructions+=1;goto B5d0bdb;
case 0x5d0be0:goto L5d0be0;
case 0x5d0be3:c.instructions+=11;goto B5d0be3;
case 0x5d0be5:c.instructions+=10;goto B5d0be5;
case 0x5d0be8:c.instructions+=9;goto B5d0be8;
case 0x5d0beb:c.instructions+=8;goto B5d0beb;
case 0x5d0bee:c.instructions+=7;goto B5d0bee;
case 0x5d0bf0:c.instructions+=6;goto B5d0bf0;
case 0x5d0bf4:c.instructions+=5;goto B5d0bf4;
case 0x5d0bf8:c.instructions+=4;goto B5d0bf8;
case 0x5d0bfb:c.instructions+=3;goto B5d0bfb;
case 0x5d0bfe:c.instructions+=2;goto B5d0bfe;
case 0x5d0c01:c.instructions+=1;goto B5d0c01;
case 0x5d0c06:goto L5d0c06;
case 0x5d0c09:c.instructions+=9;goto B5d0c09;
case 0x5d0c0c:c.instructions+=8;goto B5d0c0c;
case 0x5d0c0f:c.instructions+=7;goto B5d0c0f;
case 0x5d0c12:c.instructions+=6;goto B5d0c12;
case 0x5d0c15:c.instructions+=5;goto B5d0c15;
case 0x5d0c19:c.instructions+=4;goto B5d0c19;
case 0x5d0c1a:c.instructions+=3;goto B5d0c1a;
case 0x5d0c1c:c.instructions+=2;goto B5d0c1c;
case 0x5d0c1e:c.instructions+=1;goto B5d0c1e;
case 0x5d0c23:goto L5d0c23;
case 0x5d0c27:c.instructions+=9;goto B5d0c27;
case 0x5d0c2c:c.instructions+=8;goto B5d0c2c;
case 0x5d0c2f:c.instructions+=7;goto B5d0c2f;
case 0x5d0c32:c.instructions+=6;goto B5d0c32;
case 0x5d0c33:c.instructions+=5;goto B5d0c33;
case 0x5d0c35:c.instructions+=4;goto B5d0c35;
case 0x5d0c36:c.instructions+=3;goto B5d0c36;
case 0x5d0c3d:c.instructions+=2;goto B5d0c3d;
case 0x5d0c40:c.instructions+=1;goto B5d0c40;
case 0x5d0c50:goto L5d0c50;
case 0x5d0c54:c.instructions+=8;goto B5d0c54;
case 0x5d0c56:c.instructions+=7;goto B5d0c56;
case 0x5d0c57:c.instructions+=6;goto B5d0c57;
case 0x5d0c5a:c.instructions+=5;goto B5d0c5a;
case 0x5d0c5e:c.instructions+=4;goto B5d0c5e;
case 0x5d0c61:c.instructions+=3;goto B5d0c61;
case 0x5d0c63:c.instructions+=2;goto B5d0c63;
case 0x5d0c64:c.instructions+=1;goto B5d0c64;
case 0x5d0c66:goto L5d0c66;
case 0x5d0c68:c.instructions+=2;goto B5d0c68;
case 0x5d0c6a:c.instructions+=1;goto B5d0c6a;
case 0x5d0c6c:goto L5d0c6c;
case 0x5d0c70:goto L5d0c70;
case 0x5d0c72:c.instructions+=5;goto B5d0c72;
case 0x5d0c74:c.instructions+=4;goto B5d0c74;
case 0x5d0c77:c.instructions+=3;goto B5d0c77;
case 0x5d0c7a:c.instructions+=2;goto B5d0c7a;
case 0x5d0c7c:c.instructions+=1;goto B5d0c7c;
case 0x5d0c7e:goto L5d0c7e;
case 0x5d0c81:goto L5d0c81;
case 0x5d0c84:c.instructions+=8;goto B5d0c84;
case 0x5d0c88:c.instructions+=7;goto B5d0c88;
case 0x5d0c89:c.instructions+=6;goto B5d0c89;
case 0x5d0c8d:c.instructions+=5;goto B5d0c8d;
case 0x5d0c8e:c.instructions+=4;goto B5d0c8e;
case 0x5d0c8f:c.instructions+=3;goto B5d0c8f;
case 0x5d0c91:c.instructions+=2;goto B5d0c91;
case 0x5d0c93:c.instructions+=1;goto B5d0c93;
case 0x5d0c98:goto L5d0c98;
case 0x5d0c99:c.instructions+=2;goto B5d0c99;
case 0x5d0c9a:c.instructions+=1;goto B5d0c9a;
case 0x5d0ca0:goto L5d0ca0;
case 0x5d0ca1:c.instructions+=6;goto B5d0ca1;
case 0x5d0ca3:c.instructions+=5;goto B5d0ca3;
case 0x5d0ca4:c.instructions+=4;goto B5d0ca4;
case 0x5d0ca7:c.instructions+=3;goto B5d0ca7;
case 0x5d0ca9:c.instructions+=2;goto B5d0ca9;
case 0x5d0caf:c.instructions+=1;goto B5d0caf;
case 0x5d0cb1:goto L5d0cb1;
case 0x5d0cb3:c.instructions+=1;goto B5d0cb3;
case 0x5d0cb8:goto L5d0cb8;
case 0x5d0cb9:c.instructions+=1;goto B5d0cb9;
case 0x5d0cbe:goto L5d0cbe;
case 0x5d0cc1:goto L5d0cc1;
case 0x5d0cc4:c.instructions+=2;goto B5d0cc4;
case 0x5d0cc6:c.instructions+=1;goto B5d0cc6;
case 0x5d0cc8:goto L5d0cc8;
case 0x5d0cca:c.instructions+=2;goto B5d0cca;
case 0x5d0ccb:c.instructions+=1;goto B5d0ccb;
case 0x5d0cce:goto L5d0cce;
case 0x5d0cd5:goto L5d0cd5;
case 0x5d0cda:c.instructions+=1;goto B5d0cda;
case 0x5d0cdc:goto L5d0cdc;
case 0x5d0cdd:c.instructions+=1;goto B5d0cdd;
case 0x5d0ce2:goto L5d0ce2;
case 0x5d0ce5:goto L5d0ce5;
case 0x5d0ce6:c.instructions+=3;goto B5d0ce6;
case 0x5d0ce8:c.instructions+=2;goto B5d0ce8;
case 0x5d0ce9:c.instructions+=1;goto B5d0ce9;
case 0x5d0cf0:goto L5d0cf0;
case 0x5d0cf3:c.instructions+=10;goto B5d0cf3;
case 0x5d0cf4:c.instructions+=9;goto B5d0cf4;
case 0x5d0cf5:c.instructions+=8;goto B5d0cf5;
case 0x5d0cf6:c.instructions+=7;goto B5d0cf6;
case 0x5d0cf8:c.instructions+=6;goto B5d0cf8;
case 0x5d0cfb:c.instructions+=5;goto B5d0cfb;
case 0x5d0cfc:c.instructions+=4;goto B5d0cfc;
case 0x5d0cff:c.instructions+=3;goto B5d0cff;
case 0x5d0d02:c.instructions+=2;goto B5d0d02;
case 0x5d0d04:c.instructions+=1;goto B5d0d04;
case 0x5d0d0a:goto L5d0d0a;
case 0x5d0d0d:c.instructions+=3;goto B5d0d0d;
case 0x5d0d0f:c.instructions+=2;goto B5d0d0f;
case 0x5d0d12:c.instructions+=1;goto B5d0d12;
case 0x5d0d14:goto L5d0d14;
case 0x5d0d16:c.instructions+=1;goto B5d0d16;
case 0x5d0d18:goto L5d0d18;
case 0x5d0d1b:c.instructions+=2;goto B5d0d1b;
case 0x5d0d1d:c.instructions+=1;goto B5d0d1d;
case 0x5d0d20:goto L5d0d20;
case 0x5d0d21:c.instructions+=2;goto B5d0d21;
case 0x5d0d23:c.instructions+=1;goto B5d0d23;
case 0x5d0d25:goto L5d0d25;
case 0x5d0d28:c.instructions+=2;goto B5d0d28;
case 0x5d0d2a:c.instructions+=1;goto B5d0d2a;
case 0x5d0d2c:goto L5d0d2c;
case 0x5d0d2e:c.instructions+=1;goto B5d0d2e;
case 0x5d0d30:goto L5d0d30;
case 0x5d0d33:c.instructions+=2;goto B5d0d33;
case 0x5d0d35:c.instructions+=1;goto B5d0d35;
case 0x5d0d38:goto L5d0d38;
case 0x5d0d3b:c.instructions+=6;goto B5d0d3b;
case 0x5d0d3f:c.instructions+=5;goto B5d0d3f;
case 0x5d0d42:c.instructions+=4;goto B5d0d42;
case 0x5d0d43:c.instructions+=3;goto B5d0d43;
case 0x5d0d46:c.instructions+=2;goto B5d0d46;
case 0x5d0d47:c.instructions+=1;goto B5d0d47;
case 0x5d0d4c:goto L5d0d4c;
case 0x5d0d4e:goto L5d0d4e;
case 0x5d0d51:c.instructions+=2;goto B5d0d51;
case 0x5d0d53:c.instructions+=1;goto B5d0d53;
case 0x5d0d55:goto L5d0d55;
case 0x5d0d59:c.instructions+=1;goto B5d0d59;
case 0x5d0d5c:goto L5d0d5c;
case 0x5d0d5f:c.instructions+=10;goto B5d0d5f;
case 0x5d0d62:c.instructions+=9;goto B5d0d62;
case 0x5d0d65:c.instructions+=8;goto B5d0d65;
case 0x5d0d67:c.instructions+=7;goto B5d0d67;
case 0x5d0d69:c.instructions+=6;goto B5d0d69;
case 0x5d0d6a:c.instructions+=5;goto B5d0d6a;
case 0x5d0d6d:c.instructions+=4;goto B5d0d6d;
case 0x5d0d70:c.instructions+=3;goto B5d0d70;
case 0x5d0d73:c.instructions+=2;goto B5d0d73;
case 0x5d0d77:c.instructions+=1;goto B5d0d77;
case 0x5d0d7d:goto L5d0d7d;
case 0x5d0d80:goto L5d0d80;
case 0x5d0d83:c.instructions+=3;goto B5d0d83;
case 0x5d0d86:c.instructions+=2;goto B5d0d86;
case 0x5d0d88:c.instructions+=1;goto B5d0d88;
case 0x5d0d8a:goto L5d0d8a;
case 0x5d0d8c:c.instructions+=1;goto B5d0d8c;
case 0x5d0d91:goto L5d0d91;
case 0x5d0d94:c.instructions+=2;goto B5d0d94;
case 0x5d0d96:c.instructions+=1;goto B5d0d96;
case 0x5d0d98:goto L5d0d98;
case 0x5d0da0:goto L5d0da0;
case 0x5d0da3:c.instructions+=4;goto B5d0da3;
case 0x5d0da6:c.instructions+=3;goto B5d0da6;
case 0x5d0da9:c.instructions+=2;goto B5d0da9;
case 0x5d0dac:c.instructions+=1;goto B5d0dac;
case 0x5d0dae:goto L5d0dae;
case 0x5d0daf:c.instructions+=3;goto B5d0daf;
case 0x5d0db1:c.instructions+=2;goto B5d0db1;
case 0x5d0db3:c.instructions+=1;goto B5d0db3;
case 0x5d0db5:goto L5d0db5;
case 0x5d0db7:c.instructions+=3;goto B5d0db7;
case 0x5d0dba:c.instructions+=2;goto B5d0dba;
case 0x5d0dbe:c.instructions+=1;goto B5d0dbe;
case 0x5d0dc4:goto L5d0dc4;
case 0x5d0dc7:c.instructions+=3;goto B5d0dc7;
case 0x5d0dca:c.instructions+=2;goto B5d0dca;
case 0x5d0dcc:c.instructions+=1;goto B5d0dcc;
case 0x5d0dce:goto L5d0dce;
case 0x5d0dd0:goto L5d0dd0;
case 0x5d0dd2:c.instructions+=6;goto B5d0dd2;
case 0x5d0dd5:c.instructions+=5;goto B5d0dd5;
case 0x5d0dd8:c.instructions+=4;goto B5d0dd8;
case 0x5d0dda:c.instructions+=3;goto B5d0dda;
case 0x5d0ddd:c.instructions+=2;goto B5d0ddd;
case 0x5d0ddf:c.instructions+=1;goto B5d0ddf;
case 0x5d0de1:goto L5d0de1;
case 0x5d0de4:c.instructions+=4;goto B5d0de4;
case 0x5d0de8:c.instructions+=3;goto B5d0de8;
case 0x5d0de9:c.instructions+=2;goto B5d0de9;
case 0x5d0deb:c.instructions+=1;goto B5d0deb;
case 0x5d0ded:goto L5d0ded;
case 0x5d0df0:c.instructions+=4;goto B5d0df0;
case 0x5d0df2:c.instructions+=3;goto B5d0df2;
case 0x5d0df5:c.instructions+=2;goto B5d0df5;
case 0x5d0df8:c.instructions+=1;goto B5d0df8;
case 0x5d0dfa:goto L5d0dfa;
case 0x5d0dfc:c.instructions+=1;goto B5d0dfc;
case 0x5d0dfe:goto L5d0dfe;
case 0x5d0e00:c.instructions+=2;goto B5d0e00;
case 0x5d0e02:c.instructions+=1;goto B5d0e02;
case 0x5d0e04:goto L5d0e04;
case 0x5d0e06:c.instructions+=1;goto B5d0e06;
case 0x5d0e08:goto L5d0e08;
case 0x5d0e0a:c.instructions+=1;goto B5d0e0a;
case 0x5d0e0f:goto L5d0e0f;
case 0x5d0e12:c.instructions+=3;goto B5d0e12;
case 0x5d0e16:c.instructions+=2;goto B5d0e16;
case 0x5d0e17:c.instructions+=1;goto B5d0e17;
case 0x5d0e1a:goto L5d0e1a;
case 0x5d0e1d:c.instructions+=11;goto B5d0e1d;
case 0x5d0e1f:c.instructions+=10;goto B5d0e1f;
case 0x5d0e22:c.instructions+=9;goto B5d0e22;
case 0x5d0e24:c.instructions+=8;goto B5d0e24;
case 0x5d0e27:c.instructions+=7;goto B5d0e27;
case 0x5d0e29:c.instructions+=6;goto B5d0e29;
case 0x5d0e2c:c.instructions+=5;goto B5d0e2c;
case 0x5d0e2f:c.instructions+=4;goto B5d0e2f;
case 0x5d0e32:c.instructions+=3;goto B5d0e32;
case 0x5d0e35:c.instructions+=2;goto B5d0e35;
case 0x5d0e38:c.instructions+=1;goto B5d0e38;
case 0x5d0e3b:goto L5d0e3b;
case 0x5d0e3e:c.instructions+=4;goto B5d0e3e;
case 0x5d0e41:c.instructions+=3;goto B5d0e41;
case 0x5d0e44:c.instructions+=2;goto B5d0e44;
case 0x5d0e48:c.instructions+=1;goto B5d0e48;
case 0x5d0e4c:goto L5d0e4c;
case 0x5d0e4f:c.instructions+=2;goto B5d0e4f;
case 0x5d0e53:c.instructions+=1;goto B5d0e53;
case 0x5d0e59:goto L5d0e59;
case 0x5d0e5c:goto L5d0e5c;
case 0x5d0e60:c.instructions+=7;goto B5d0e60;
case 0x5d0e63:c.instructions+=6;goto B5d0e63;
case 0x5d0e66:c.instructions+=5;goto B5d0e66;
case 0x5d0e69:c.instructions+=4;goto B5d0e69;
case 0x5d0e6b:c.instructions+=3;goto B5d0e6b;
case 0x5d0e6d:c.instructions+=2;goto B5d0e6d;
case 0x5d0e6f:c.instructions+=1;goto B5d0e6f;
case 0x5d0e71:goto L5d0e71;
case 0x5d0e73:c.instructions+=3;goto B5d0e73;
case 0x5d0e76:c.instructions+=2;goto B5d0e76;
case 0x5d0e78:c.instructions+=1;goto B5d0e78;
case 0x5d0e7a:goto L5d0e7a;
case 0x5d0e7d:c.instructions+=6;goto B5d0e7d;
case 0x5d0e84:c.instructions+=5;goto B5d0e84;
case 0x5d0e88:c.instructions+=4;goto B5d0e88;
case 0x5d0e8c:c.instructions+=3;goto B5d0e8c;
case 0x5d0e8f:c.instructions+=2;goto B5d0e8f;
case 0x5d0e91:c.instructions+=1;goto B5d0e91;
case 0x5d0e93:goto L5d0e93;
case 0x5d0e96:c.instructions+=2;goto B5d0e96;
case 0x5d0e99:c.instructions+=1;goto B5d0e99;
case 0x5d0e9b:goto L5d0e9b;
case 0x5d0e9e:c.instructions+=2;goto B5d0e9e;
case 0x5d0ea1:c.instructions+=1;goto B5d0ea1;
case 0x5d0ea3:goto L5d0ea3;
case 0x5d0ea6:c.instructions+=5;goto B5d0ea6;
case 0x5d0ea7:c.instructions+=4;goto B5d0ea7;
case 0x5d0ea8:c.instructions+=3;goto B5d0ea8;
case 0x5d0eab:c.instructions+=2;goto B5d0eab;
case 0x5d0eac:c.instructions+=1;goto B5d0eac;
case 0x5d0eb1:goto L5d0eb1;
case 0x5d0eb3:c.instructions+=3;goto B5d0eb3;
case 0x5d0eb6:c.instructions+=2;goto B5d0eb6;
case 0x5d0eb8:c.instructions+=1;goto B5d0eb8;
case 0x5d0ebd:goto L5d0ebd;
case 0x5d0ec0:c.instructions+=6;goto B5d0ec0;
case 0x5d0ec3:c.instructions+=5;goto B5d0ec3;
case 0x5d0ec5:c.instructions+=4;goto B5d0ec5;
case 0x5d0ec8:c.instructions+=3;goto B5d0ec8;
case 0x5d0ecb:c.instructions+=2;goto B5d0ecb;
case 0x5d0ece:c.instructions+=1;goto B5d0ece;
case 0x5d0ed0:goto L5d0ed0;
case 0x5d0ed3:c.instructions+=4;goto B5d0ed3;
case 0x5d0ed6:c.instructions+=3;goto B5d0ed6;
case 0x5d0eda:c.instructions+=2;goto B5d0eda;
case 0x5d0edc:c.instructions+=1;goto B5d0edc;
case 0x5d0ede:goto L5d0ede;
case 0x5d0ee1:c.instructions+=5;goto B5d0ee1;
case 0x5d0ee2:c.instructions+=4;goto B5d0ee2;
case 0x5d0ee9:c.instructions+=3;goto B5d0ee9;
case 0x5d0eed:c.instructions+=2;goto B5d0eed;
case 0x5d0ef0:c.instructions+=1;goto B5d0ef0;
case 0x5d0ef2:goto L5d0ef2;
case 0x5d0ef6:c.instructions+=8;goto B5d0ef6;
case 0x5d0ef7:c.instructions+=7;goto B5d0ef7;
case 0x5d0ef8:c.instructions+=6;goto B5d0ef8;
case 0x5d0ef9:c.instructions+=5;goto B5d0ef9;
case 0x5d0efb:c.instructions+=4;goto B5d0efb;
case 0x5d0eff:c.instructions+=3;goto B5d0eff;
case 0x5d0f00:c.instructions+=2;goto B5d0f00;
case 0x5d0f03:c.instructions+=1;goto B5d0f03;
case 0x5d0f06:goto L5d0f06;
case 0x5d0f08:goto L5d0f08;
case 0x5d0f0a:c.instructions+=1;goto B5d0f0a;
case 0x5d0f0c:goto L5d0f0c;
case 0x5d0f10:c.instructions+=8;goto B5d0f10;
case 0x5d0f12:c.instructions+=7;goto B5d0f12;
case 0x5d0f13:c.instructions+=6;goto B5d0f13;
case 0x5d0f14:c.instructions+=5;goto B5d0f14;
case 0x5d0f15:c.instructions+=4;goto B5d0f15;
case 0x5d0f19:c.instructions+=3;goto B5d0f19;
case 0x5d0f1a:c.instructions+=2;goto B5d0f1a;
case 0x5d0f1d:c.instructions+=1;goto B5d0f1d;
case 0x5d0f20:goto L5d0f20;
case 0x5d0f21:c.instructions+=6;goto B5d0f21;
case 0x5d0f22:c.instructions+=5;goto B5d0f22;
case 0x5d0f24:c.instructions+=4;goto B5d0f24;
case 0x5d0f2a:c.instructions+=3;goto B5d0f2a;
case 0x5d0f2c:c.instructions+=2;goto B5d0f2c;
case 0x5d0f32:c.instructions+=1;goto B5d0f32;
case 0x5d0f34:goto L5d0f34;
case 0x5d0f36:c.instructions+=1;goto B5d0f36;
case 0x5d0f38:goto L5d0f38;
case 0x5d0f3a:goto L5d0f3a;
case 0x5d0f3b:c.instructions+=4;goto B5d0f3b;
case 0x5d0f3c:c.instructions+=3;goto B5d0f3c;
case 0x5d0f40:c.instructions+=2;goto B5d0f40;
case 0x5d0f41:c.instructions+=1;goto B5d0f41;
case 0x5d0f46:goto L5d0f46;
case 0x5d0f4c:c.instructions+=6;goto B5d0f4c;
case 0x5d0f50:c.instructions+=5;goto B5d0f50;
case 0x5d0f51:c.instructions+=4;goto B5d0f51;
case 0x5d0f55:c.instructions+=3;goto B5d0f55;
case 0x5d0f57:c.instructions+=2;goto B5d0f57;
case 0x5d0f5d:c.instructions+=1;goto B5d0f5d;
case 0x5d0f62:goto L5d0f62;
case 0x5d0f67:c.instructions+=5;goto B5d0f67;
case 0x5d0f6d:c.instructions+=4;goto B5d0f6d;
case 0x5d0f73:c.instructions+=3;goto B5d0f73;
case 0x5d0f74:c.instructions+=2;goto B5d0f74;
case 0x5d0f75:c.instructions+=1;goto B5d0f75;
case 0x5d0f80:goto L5d0f80;
case 0x5d0f82:c.instructions+=14;goto B5d0f82;
case 0x5d0f87:c.instructions+=13;goto B5d0f87;
case 0x5d0f8d:c.instructions+=12;goto B5d0f8d;
case 0x5d0f8e:c.instructions+=11;goto B5d0f8e;
case 0x5d0f95:c.instructions+=10;goto B5d0f95;
case 0x5d0f98:c.instructions+=9;goto B5d0f98;
case 0x5d0f99:c.instructions+=8;goto B5d0f99;
case 0x5d0f9a:c.instructions+=7;goto B5d0f9a;
case 0x5d0f9c:c.instructions+=6;goto B5d0f9c;
case 0x5d0f9d:c.instructions+=5;goto B5d0f9d;
case 0x5d0f9f:c.instructions+=4;goto B5d0f9f;
case 0x5d0fa4:c.instructions+=3;goto B5d0fa4;
case 0x5d0faa:c.instructions+=2;goto B5d0faa;
case 0x5d0fad:c.instructions+=1;goto B5d0fad;
case 0x5d0fb2:goto L5d0fb2;
case 0x5d0fb4:c.instructions+=5;goto B5d0fb4;
case 0x5d0fb7:c.instructions+=4;goto B5d0fb7;
case 0x5d0fbb:c.instructions+=3;goto B5d0fbb;
case 0x5d0fbd:c.instructions+=2;goto B5d0fbd;
case 0x5d0fc1:c.instructions+=1;goto B5d0fc1;
case 0x5d0fc3:goto L5d0fc3;
case 0x5d0fc7:c.instructions+=5;goto B5d0fc7;
case 0x5d0fc8:c.instructions+=4;goto B5d0fc8;
case 0x5d0fcc:c.instructions+=3;goto B5d0fcc;
case 0x5d0fd2:c.instructions+=2;goto B5d0fd2;
case 0x5d0fd3:c.instructions+=1;goto B5d0fd3;
case 0x5d0fd8:goto L5d0fd8;
case 0x5d0fda:c.instructions+=1;goto B5d0fda;
case 0x5d0fdc:goto L5d0fdc;
case 0x5d0fde:goto L5d0fde;
case 0x5d0fe3:c.instructions+=4;goto B5d0fe3;
case 0x5d0fe4:c.instructions+=3;goto B5d0fe4;
case 0x5d0fec:c.instructions+=2;goto B5d0fec;
case 0x5d0fef:c.instructions+=1;goto B5d0fef;
case 0x5d0ff4:goto L5d0ff4;
case 0x5d0ff9:c.instructions+=1;goto B5d0ff9;
case 0x5d0ffe:goto L5d0ffe;
default:missing_instruction(c.pc);}
B5d0002:L5d0002:{c.instructions+=4;NFSU2_TR(0x5d0002);
__builtin_memmove((R+0),gp(0x7fcac0),4);
}
B5d0007:{NFSU2_TR(0x5d0007);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d0009:{NFSU2_TR(0x5d0009);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d000b:{NFSU2_TR(0x5d000b);
if(r1(R+518)){{goto L5d0043;}}
}
B5d000d:L5d000d:{c.instructions+=4;NFSU2_TR(0x5d000d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d000e:{NFSU2_TR(0x5d000e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d000f:{NFSU2_TR(0x5d000f);
w4(R+28,u32(0x7fcac0ull));
}
B5d0014:{NFSU2_TR(0x5d0014);
__builtin_memmove((R+24),(R+28),4);
}
B5d0016:L5d0016:{c.instructions+=3;NFSU2_TR(0x5d0016);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d0018:{NFSU2_TR(0x5d0018);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d001a:{NFSU2_TR(0x5d001a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d0025;}}
}
B5d001c:L5d001c:{c.instructions+=5;NFSU2_TR(0x5d001c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d001f:{NFSU2_TR(0x5d001f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0020:{NFSU2_TR(0x5d0020);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0021:{NFSU2_TR(0x5d0021);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0023:{NFSU2_TR(0x5d0023);
{goto L5d002c;}
}
B5d0025:L5d0025:{c.instructions+=4;NFSU2_TR(0x5d0025);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0028:{NFSU2_TR(0x5d0028);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0029:{NFSU2_TR(0x5d0029);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d002a:{NFSU2_TR(0x5d002a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d002c:L5d002c:{c.instructions+=2;NFSU2_TR(0x5d002c);
__builtin_memmove((R+4),(R+12),4);
}
B5d002e:{NFSU2_TR(0x5d002e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0033ull));
TAIL_STATIC(0x5b8010u,5b8);
}
B5d0033:L5d0033:{c.instructions+=6;NFSU2_TR(0x5d0033);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0036:{NFSU2_TR(0x5d0036);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d0038:{NFSU2_TR(0x5d0038);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x28ull))));
}
B5d003b:{NFSU2_TR(0x5d003b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d003d:{NFSU2_TR(0x5d003d);
__builtin_memmove((R+28),(R+24),4);
}
B5d003f:{NFSU2_TR(0x5d003f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0016u);}goto L5d0016;}}
}
B5d0041:L5d0041:{c.instructions+=2;NFSU2_TR(0x5d0041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d0042:{NFSU2_TR(0x5d0042);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d0043:L5d0043:{c.instructions+=3;NFSU2_TR(0x5d0043);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0045:{NFSU2_TR(0x5d0045);
__builtin_memmove((R+4),(R+12),4);
}
B5d0047:{NFSU2_TR(0x5d0047);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d004cull));
TAIL_STATIC(0x5cf320u,5cf);
}
B5d004c:L5d004c:{c.instructions+=3;NFSU2_TR(0x5d004c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d004e:{NFSU2_TR(0x5d004e);
__builtin_memmove((R+4),(R+12),4);
}
B5d0050:{NFSU2_TR(0x5d0050);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0055ull));
TAIL_STATIC(0x5cf320u,5cf);
}
B5d0055:L5d0055:{c.instructions+=3;NFSU2_TR(0x5d0055);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0057:{NFSU2_TR(0x5d0057);
__builtin_memmove((R+4),(R+12),4);
}
B5d0059:{NFSU2_TR(0x5d0059);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d005eull));
TAIL_STATIC(0x5cf320u,5cf);
}
B5d005e:L5d005e:{c.instructions+=3;NFSU2_TR(0x5d005e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0060:{NFSU2_TR(0x5d0060);
__builtin_memmove((R+4),(R+12),4);
}
B5d0062:{NFSU2_TR(0x5d0062);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0067ull));
TAIL_STATIC(0x5cf320u,5cf);
}
B5d0067:L5d0067:{c.instructions+=2;NFSU2_TR(0x5d0067);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d0068:{NFSU2_TR(0x5d0068);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d0070:L5d0070:{c.instructions+=8;NFSU2_TR(0x5d0070);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0071:{NFSU2_TR(0x5d0071);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0073:{NFSU2_TR(0x5d0073);
u8 U[4];
w4(U+0,u32(0x8709ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0078:{NFSU2_TR(0x5d0078);
u8 U[4];
w4(U+0,u32(0x7bfda0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d007d:{NFSU2_TR(0x5d007d);
u8 U[4];
w4(U+0,u32(0x800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0082:{NFSU2_TR(0x5d0082);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0084:{NFSU2_TR(0x5d0084);
__builtin_memmove((R+24),(R+4),4);
}
B5d0086:{NFSU2_TR(0x5d0086);
u8 U[4];
__builtin_memmove((U+0),gp(0x783138),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d008cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5d008c:L5d008c:{c.instructions+=2;NFSU2_TR(0x5d008c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d008d:{NFSU2_TR(0x5d008d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0092ull));
TAIL_STATIC(0x6d7100u,6d7);
}
B5d0092:L5d0092:{c.instructions+=2;NFSU2_TR(0x5d0092);
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
B5d0094:{NFSU2_TR(0x5d0094);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d00a3;}}
}
B5d0096:L5d0096:{c.instructions+=2;NFSU2_TR(0x5d0096);
u8 U[4];
w4(U+0,u32(0x7a3c70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d009b:{NFSU2_TR(0x5d009b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d00a0ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5d00a0:L5d00a0:{c.instructions+=1;NFSU2_TR(0x5d00a0);
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
B5d00a3:L5d00a3:{c.instructions+=8;NFSU2_TR(0x5d00a3);
__builtin_memmove((R+0),gp(0x8709ec),4);
}
B5d00a8:{NFSU2_TR(0x5d00a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d00aa:{NFSU2_TR(0x5d00aa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d00ac:{NFSU2_TR(0x5d00ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d00ad:{NFSU2_TR(0x5d00ad);
u8 U[4];
w4(U+0,u32(0x5cef00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d00b2:{NFSU2_TR(0x5d00b2);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d00b4:{NFSU2_TR(0x5d00b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d00b5:{NFSU2_TR(0x5d00b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d00b8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d00b8:L5d00b8:{c.instructions+=3;NFSU2_TR(0x5d00b8);
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
B5d00ba:{NFSU2_TR(0x5d00ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d00bb:{NFSU2_TR(0x5d00bb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d00c8;}}
}
B5d00bd:L5d00bd:{c.instructions+=2;NFSU2_TR(0x5d00bd);
u8 U[4];
w4(U+0,u32(0x7a4164ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d00c2:{NFSU2_TR(0x5d00c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d00c7ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5d00c7:L5d00c7:{c.instructions+=1;NFSU2_TR(0x5d00c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d00c8:L5d00c8:{c.instructions+=1;NFSU2_TR(0x5d00c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d00d0:L5d00d0:{c.instructions+=10;NFSU2_TR(0x5d00d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d00d1:{NFSU2_TR(0x5d00d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d00d2:{NFSU2_TR(0x5d00d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d00d3:{NFSU2_TR(0x5d00d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d00d7:{NFSU2_TR(0x5d00d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d00da:{NFSU2_TR(0x5d00da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d00db:{NFSU2_TR(0x5d00db);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d00df:{NFSU2_TR(0x5d00df);
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
B5d00e1:{NFSU2_TR(0x5d00e1);
__builtin_memmove((R+12),(R+4),4);
}
B5d00e3:{NFSU2_TR(0x5d00e3);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d00ea;}}
}
B5d00e5:L5d00e5:{c.instructions+=1;NFSU2_TR(0x5d00e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d00eaull));
TAIL_STATIC(0x76e957u,76e);
}
B5d00ea:L5d00ea:{c.instructions+=5;NFSU2_TR(0x5d00ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5d00ed:{NFSU2_TR(0x5d00ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d00f1:{NFSU2_TR(0x5d00f1);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+28))));
}
B5d00f3:{NFSU2_TR(0x5d00f3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5d00f5:{NFSU2_TR(0x5d00f5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d00f9;}}
}
B5d00f7:L5d00f7:{c.instructions+=1;NFSU2_TR(0x5d00f7);
__builtin_memmove((R+20),(R+0),4);
}
B5d00f9:L5d00f9:{c.instructions+=3;NFSU2_TR(0x5d00f9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d00fb:{NFSU2_TR(0x5d00fb);
__builtin_memmove((R+4),(R+12),4);
}
B5d00fd:{NFSU2_TR(0x5d00fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d011c;}}
}
B5d00ff:L5d00ff:{c.instructions+=4;NFSU2_TR(0x5d00ff);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0101:{NFSU2_TR(0x5d0101);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+28))));
}
B5d0103:{NFSU2_TR(0x5d0103);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0104:{NFSU2_TR(0x5d0104);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0109ull));
TAIL_STATIC(0x5cfb00u,5cf);
}
B5d0109:L5d0109:{c.instructions+=4;NFSU2_TR(0x5d0109);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d010a:{NFSU2_TR(0x5d010a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d010c:{NFSU2_TR(0x5d010c);
__builtin_memmove((R+4),(R+12),4);
}
B5d010e:{NFSU2_TR(0x5d010e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0113ull));
TAIL_STATIC(0x5cfb00u,5cf);
}
B5d0113:L5d0113:{c.instructions+=6;NFSU2_TR(0x5d0113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d0114:{NFSU2_TR(0x5d0114);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d0115:{NFSU2_TR(0x5d0115);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d0116:{NFSU2_TR(0x5d0116);
__builtin_memmove((R+0),(R+12),4);
}
B5d0118:{NFSU2_TR(0x5d0118);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d0119:{NFSU2_TR(0x5d0119);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d011c:L5d011c:{c.instructions+=3;NFSU2_TR(0x5d011c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d011e:{NFSU2_TR(0x5d011e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d011f:{NFSU2_TR(0x5d011f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0124ull));
TAIL_STATIC(0x5cf070u,5cf);
}
B5d0124:L5d0124:{c.instructions+=2;NFSU2_TR(0x5d0124);
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
B5d0126:{NFSU2_TR(0x5d0126);
if(r1(R+518)){{goto L5d016d;}}
}
B5d0128:L5d0128:{c.instructions+=4;NFSU2_TR(0x5d0128);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d012b:{NFSU2_TR(0x5d012b);
w4(R+0,u32(0x10ull));
}
B5d0130:{NFSU2_TR(0x5d0130);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B5d0132:{NFSU2_TR(0x5d0132);
if(r1(R+512)){{goto L5d0139;}}
}
B5d0134:L5d0134:{c.instructions+=2;NFSU2_TR(0x5d0134);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d0137:{NFSU2_TR(0x5d0137);
{goto L5d013c;}
}
B5d0139:L5d0139:{c.instructions+=1;NFSU2_TR(0x5d0139);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5d013c:L5d013c:{c.instructions+=3;NFSU2_TR(0x5d013c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B5d013f:{NFSU2_TR(0x5d013f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d0142:{NFSU2_TR(0x5d0142);
if(r1(R+512)){{goto L5d0148;}}
}
B5d0144:L5d0144:{c.instructions+=2;NFSU2_TR(0x5d0144);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d0146:{NFSU2_TR(0x5d0146);
{goto L5d014a;}
}
B5d0148:L5d0148:{c.instructions+=1;NFSU2_TR(0x5d0148);
__builtin_memmove((R+8),(R+0),4);
}
B5d014a:L5d014a:{c.instructions+=5;NFSU2_TR(0x5d014a);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B5d014c:{NFSU2_TR(0x5d014c);
__builtin_memmove((R+4),(R+20),4);
}
B5d014e:{NFSU2_TR(0x5d014e);
__builtin_memmove((R+28),(R+8),4);
}
B5d0150:{NFSU2_TR(0x5d0150);
__builtin_memmove((R+8),(R+4),4);
}
B5d0152:{NFSU2_TR(0x5d0152);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5d0155:L5d0155:{c.instructions+=1;NFSU2_TR(0x5d0155);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5d0157;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0155u);}goto L5d0155;}
}
B5d0157:L5d0157:{c.instructions+=2;NFSU2_TR(0x5d0157);
__builtin_memmove((R+4),(R+8),4);
}
B5d0159:{NFSU2_TR(0x5d0159);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B5d015c:L5d015c:{c.instructions+=1;NFSU2_TR(0x5d015c);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5d015e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d015cu);}goto L5d015c;}
}
B5d015e:L5d015e:{c.instructions+=3;NFSU2_TR(0x5d015e);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x10ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5d0162:{NFSU2_TR(0x5d0162);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0165:{NFSU2_TR(0x5d0165);
if(r1(R+512)){{goto L5d0169;}}
}
B5d0167:L5d0167:{c.instructions+=1;NFSU2_TR(0x5d0167);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d0169:L5d0169:{c.instructions+=1;NFSU2_TR(0x5d0169);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B5d016d:L5d016d:{c.instructions+=6;NFSU2_TR(0x5d016d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d016e:{NFSU2_TR(0x5d016e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d016f:{NFSU2_TR(0x5d016f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d0170:{NFSU2_TR(0x5d0170);
__builtin_memmove((R+0),(R+12),4);
}
B5d0172:{NFSU2_TR(0x5d0172);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d0173:{NFSU2_TR(0x5d0173);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d0180:L5d0180:{c.instructions+=8;NFSU2_TR(0x5d0180);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0181:{NFSU2_TR(0x5d0181);
__builtin_memmove((R+12),(R+4),4);
}
B5d0183:{NFSU2_TR(0x5d0183);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0186:{NFSU2_TR(0x5d0186);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B5d0189:{NFSU2_TR(0x5d0189);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d018a:{NFSU2_TR(0x5d018a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d018b:{NFSU2_TR(0x5d018b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d018e:{NFSU2_TR(0x5d018e);
if(r1(R+512)){{goto L5d0195;}}
}
B5d0190:L5d0190:{c.instructions+=2;NFSU2_TR(0x5d0190);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d0193:{NFSU2_TR(0x5d0193);
{goto L5d0197;}
}
B5d0195:L5d0195:{c.instructions+=1;NFSU2_TR(0x5d0195);
__builtin_memmove((R+0),(R+20),4);
}
B5d0197:L5d0197:{c.instructions+=3;NFSU2_TR(0x5d0197);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d019b:{NFSU2_TR(0x5d019b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d019d:{NFSU2_TR(0x5d019d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5d01d2;}}
}
B5d019f:L5d019f:{c.instructions+=2;NFSU2_TR(0x5d019f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B5d01a2:{NFSU2_TR(0x5d01a2);
if(r1(R+512)){{goto L5d01a9;}}
}
B5d01a4:L5d01a4:{c.instructions+=2;NFSU2_TR(0x5d01a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d01a7:{NFSU2_TR(0x5d01a7);
{goto L5d01ab;}
}
B5d01a9:L5d01a9:{c.instructions+=1;NFSU2_TR(0x5d01a9);
__builtin_memmove((R+0),(R+20),4);
}
B5d01ab:L5d01ab:{c.instructions+=4;NFSU2_TR(0x5d01ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d01ae:{NFSU2_TR(0x5d01ae);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5d01b0:{NFSU2_TR(0x5d01b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B5d01b2:{NFSU2_TR(0x5d01b2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d01d2;}}
}
B5d01b4:L5d01b4:{c.instructions+=2;NFSU2_TR(0x5d01b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B5d01b7:{NFSU2_TR(0x5d01b7);
if(r1(R+512)){{goto L5d01bc;}}
}
B5d01b9:L5d01b9:{c.instructions+=1;NFSU2_TR(0x5d01b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5d01bc:L5d01bc:{c.instructions+=7;NFSU2_TR(0x5d01bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d01c0:{NFSU2_TR(0x5d01c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d01c1:{NFSU2_TR(0x5d01c1);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+20))));
}
B5d01c3:{NFSU2_TR(0x5d01c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d01c4:{NFSU2_TR(0x5d01c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d01c5:{NFSU2_TR(0x5d01c5);
__builtin_memmove((R+4),(R+12),4);
}
B5d01c7:{NFSU2_TR(0x5d01c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d01ccull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d00d0u);}goto L5d00d0;}
}
B5d01cc:L5d01cc:{c.instructions+=4;NFSU2_TR(0x5d01cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d01cd:{NFSU2_TR(0x5d01cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d01ce:{NFSU2_TR(0x5d01ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d01cf:{NFSU2_TR(0x5d01cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d01d2:L5d01d2:{c.instructions+=5;NFSU2_TR(0x5d01d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d01d6:{NFSU2_TR(0x5d01d6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d01d8:{NFSU2_TR(0x5d01d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d01d9:{NFSU2_TR(0x5d01d9);
__builtin_memmove((R+4),(R+12),4);
}
B5d01db:{NFSU2_TR(0x5d01db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d01e0ull));
TAIL_STATIC(0x5cf070u,5cf);
}
B5d01e0:L5d01e0:{c.instructions+=2;NFSU2_TR(0x5d01e0);
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
B5d01e2:{NFSU2_TR(0x5d01e2);
if(r1(R+518)){{goto L5d0217;}}
}
B5d01e4:L5d01e4:{c.instructions+=3;NFSU2_TR(0x5d01e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x10ull))));
}
B5d01e8:{NFSU2_TR(0x5d01e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d01e9:{NFSU2_TR(0x5d01e9);
if(r1(R+512)){{goto L5d01f0;}}
}
B5d01eb:L5d01eb:{c.instructions+=2;NFSU2_TR(0x5d01eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5d01ee:{NFSU2_TR(0x5d01ee);
{goto L5d01f2;}
}
B5d01f0:L5d01f0:{c.instructions+=1;NFSU2_TR(0x5d01f0);
__builtin_memmove((R+28),(R+20),4);
}
B5d01f2:L5d01f2:{c.instructions+=3;NFSU2_TR(0x5d01f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d01f6:{NFSU2_TR(0x5d01f6);
__builtin_memmove((R+8),(R+4),4);
}
B5d01f8:{NFSU2_TR(0x5d01f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5d01fb:L5d01fb:{c.instructions+=1;NFSU2_TR(0x5d01fb);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5d01fd;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d01fbu);}goto L5d01fb;}
}
B5d01fd:L5d01fd:{c.instructions+=2;NFSU2_TR(0x5d01fd);
__builtin_memmove((R+4),(R+8),4);
}
B5d01ff:{NFSU2_TR(0x5d01ff);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B5d0202:L5d0202:{c.instructions+=1;NFSU2_TR(0x5d0202);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5d0204;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0202u);}goto L5d0202;}
}
B5d0204:L5d0204:{c.instructions+=5;NFSU2_TR(0x5d0204);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x10ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5d0208:{NFSU2_TR(0x5d0208);
__builtin_memmove((R+0),(R+8),4);
}
B5d020a:{NFSU2_TR(0x5d020a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d020d:{NFSU2_TR(0x5d020d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d020e:{NFSU2_TR(0x5d020e);
if(r1(R+512)){{goto L5d0213;}}
}
B5d0210:L5d0210:{c.instructions+=1;NFSU2_TR(0x5d0210);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5d0213:L5d0213:{c.instructions+=1;NFSU2_TR(0x5d0213);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B5d0217:L5d0217:{c.instructions+=5;NFSU2_TR(0x5d0217);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d0218:{NFSU2_TR(0x5d0218);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d0219:{NFSU2_TR(0x5d0219);
__builtin_memmove((R+0),(R+12),4);
}
B5d021b:{NFSU2_TR(0x5d021b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d021c:{NFSU2_TR(0x5d021c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d0220:L5d0220:{c.instructions+=5;NFSU2_TR(0x5d0220);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0221:{NFSU2_TR(0x5d0221);
__builtin_memmove((R+24),(R+4),4);
}
B5d0223:{NFSU2_TR(0x5d0223);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0226:{NFSU2_TR(0x5d0226);
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
B5d0228:{NFSU2_TR(0x5d0228);
if(r1(R+518)){{goto L5d0233;}}
}
B5d022a:L5d022a:{c.instructions+=2;NFSU2_TR(0x5d022a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d022b:{NFSU2_TR(0x5d022b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0230ull));
TAIL_STATIC(0x575630u,575);
}
B5d0230:L5d0230:{c.instructions+=1;NFSU2_TR(0x5d0230);
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
B5d0233:L5d0233:{c.instructions+=5;NFSU2_TR(0x5d0233);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d023a:{NFSU2_TR(0x5d023a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d0241:{NFSU2_TR(0x5d0241);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d0248:{NFSU2_TR(0x5d0248);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d0249:{NFSU2_TR(0x5d0249);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d0250:L5d0250:{c.instructions+=25;NFSU2_TR(0x5d0250);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0251:{NFSU2_TR(0x5d0251);
__builtin_memmove((R+20),(R+16),4);
}
B5d0253:{NFSU2_TR(0x5d0253);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0255:{NFSU2_TR(0x5d0255);
u8 U[4];
w4(U+0,u32(0x779200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d025a:{NFSU2_TR(0x5d025a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0260:{NFSU2_TR(0x5d0260);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0261:{NFSU2_TR(0x5d0261);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0268:{NFSU2_TR(0x5d0268);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5d026b:{NFSU2_TR(0x5d026b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d026e:{NFSU2_TR(0x5d026e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d026f:{NFSU2_TR(0x5d026f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d0272:{NFSU2_TR(0x5d0272);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0273:{NFSU2_TR(0x5d0273);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0274:{NFSU2_TR(0x5d0274);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0277:{NFSU2_TR(0x5d0277);
__builtin_memmove((R+24),(R+4),4);
}
B5d0279:{NFSU2_TR(0x5d0279);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d027c:{NFSU2_TR(0x5d027c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d027f:{NFSU2_TR(0x5d027f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0280:{NFSU2_TR(0x5d0280);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0281:{NFSU2_TR(0x5d0281);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0282:{NFSU2_TR(0x5d0282);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0283:{NFSU2_TR(0x5d0283);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0284:{NFSU2_TR(0x5d0284);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0287:{NFSU2_TR(0x5d0287);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d028e:{NFSU2_TR(0x5d028e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0293ull));
TAIL_STATIC(0x5ce0f0u,5ce);
}
B5d0293:L5d0293:{c.instructions+=11;NFSU2_TR(0x5d0293);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0296:{NFSU2_TR(0x5d0296);
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
B5d0299:{NFSU2_TR(0x5d0299);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5d029c:{NFSU2_TR(0x5d029c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d029d:{NFSU2_TR(0x5d029d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d02a0:{NFSU2_TR(0x5d02a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d02a1:{NFSU2_TR(0x5d02a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d02a8:{NFSU2_TR(0x5d02a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d02a9:{NFSU2_TR(0x5d02a9);
__builtin_memmove((R+16),(R+20),4);
}
B5d02ab:{NFSU2_TR(0x5d02ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d02ac:{NFSU2_TR(0x5d02ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d02af:L5d02af:{c.instructions+=2;NFSU2_TR(0x5d02af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d02b2:{NFSU2_TR(0x5d02b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d02b7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0220u);}goto L5d0220;}
}
B5d02b7:L5d02b7:{c.instructions+=3;NFSU2_TR(0x5d02b7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d02b9:{NFSU2_TR(0x5d02b9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d02bb:{NFSU2_TR(0x5d02bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d02c0ull));
TAIL_STATIC(0x75d8ffu,75d);
}
B5d02c0:L5d02c0:{c.instructions+=1;NFSU2_TR(0x5d02c0);
u8 U[4];
{SPILL();c.pc=0x5d02c0u;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B5d02d0:L5d02d0:{c.instructions+=7;NFSU2_TR(0x5d02d0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d02d4:{NFSU2_TR(0x5d02d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d02d5:{NFSU2_TR(0x5d02d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d02d6:{NFSU2_TR(0x5d02d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d02d7:{NFSU2_TR(0x5d02d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d02db:{NFSU2_TR(0x5d02db);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d02dd:{NFSU2_TR(0x5d02dd);
if(r1(R+518)){{goto L5d02f9;}}
}
B5d02df:L5d02df:{c.instructions+=4;NFSU2_TR(0x5d02df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d02e2:{NFSU2_TR(0x5d02e2);
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
B5d02e4:{NFSU2_TR(0x5d02e4);
__builtin_memmove((R+8),(R+28),4);
}
B5d02e6:{NFSU2_TR(0x5d02e6);
if(r1(R+518)){{goto L5d02f6;}}
}
B5d02e8:L5d02e8:{c.instructions+=6;NFSU2_TR(0x5d02e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5d02ea:{NFSU2_TR(0x5d02ea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5d02ec:{NFSU2_TR(0x5d02ec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5d02ef:{NFSU2_TR(0x5d02ef);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5d02f2:{NFSU2_TR(0x5d02f2);
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
B5d02f4:{NFSU2_TR(0x5d02f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d02e8u);}goto L5d02e8;}}
}
B5d02f6:L5d02f6:{c.instructions+=1;NFSU2_TR(0x5d02f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d02f9:L5d02f9:{c.instructions+=6;NFSU2_TR(0x5d02f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d02fd:{NFSU2_TR(0x5d02fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d02ff:{NFSU2_TR(0x5d02ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d0300:{NFSU2_TR(0x5d0300);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d0301:{NFSU2_TR(0x5d0301);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d0302:{NFSU2_TR(0x5d0302);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d0310:L5d0310:{c.instructions+=6;NFSU2_TR(0x5d0310);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0311:{NFSU2_TR(0x5d0311);
__builtin_memmove((R+24),(R+4),4);
}
B5d0313:{NFSU2_TR(0x5d0313);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0314:{NFSU2_TR(0x5d0314);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2224ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d031a:{NFSU2_TR(0x5d031a);
__builtin_memmove((R+4),(R+28),4);
}
B5d031c:{NFSU2_TR(0x5d031c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0321ull));
TAIL_STATIC(0x5bfac0u,5bf);
}
B5d0321:L5d0321:{c.instructions+=2;NFSU2_TR(0x5d0321);
__builtin_memmove((R+4),(R+28),4);
}
B5d0323:{NFSU2_TR(0x5d0323);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0328ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0070u);}goto L5d0070;}
}
B5d0328:L5d0328:{c.instructions+=2;NFSU2_TR(0x5d0328);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2448ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d032e:{NFSU2_TR(0x5d032e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0333ull));
TAIL_STATIC(0x5ca4b0u,5ca);
}
B5d0333:L5d0333:{c.instructions+=2;NFSU2_TR(0x5d0333);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2498ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d0339:{NFSU2_TR(0x5d0339);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d033eull));
TAIL_STATIC(0x5ca4b0u,5ca);
}
B5d033e:L5d033e:{c.instructions+=2;NFSU2_TR(0x5d033e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24e8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d0344:{NFSU2_TR(0x5d0344);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0349ull));
TAIL_STATIC(0x5ca4b0u,5ca);
}
B5d0349:L5d0349:{c.instructions+=2;NFSU2_TR(0x5d0349);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2538ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d034f:{NFSU2_TR(0x5d034f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0354ull));
TAIL_STATIC(0x5ca4b0u,5ca);
}
B5d0354:L5d0354:{c.instructions+=2;NFSU2_TR(0x5d0354);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2588ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d035a:{NFSU2_TR(0x5d035a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d035full));
TAIL_STATIC(0x5ca4b0u,5ca);
}
B5d035f:L5d035f:{c.instructions+=2;NFSU2_TR(0x5d035f);
__builtin_memmove((R+4),(R+24),4);
}
B5d0361:{NFSU2_TR(0x5d0361);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0366ull));
TAIL_STATIC(0x5bfc40u,5bf);
}
B5d0366:L5d0366:{c.instructions+=2;NFSU2_TR(0x5d0366);
__builtin_memmove((R+4),(R+24),4);
}
B5d0368:{NFSU2_TR(0x5d0368);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d036dull));
TAIL_STATIC(0x5bfd20u,5bf);
}
B5d036d:L5d036d:{c.instructions+=4;NFSU2_TR(0x5d036d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d036e:{NFSU2_TR(0x5d036e);
__builtin_memmove((R+0),(R+24),4);
}
B5d0370:{NFSU2_TR(0x5d0370);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d0371:{NFSU2_TR(0x5d0371);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d0380:L5d0380:{c.instructions+=22;NFSU2_TR(0x5d0380);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0382:{NFSU2_TR(0x5d0382);
u8 U[4];
w4(U+0,u32(0x77921bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0387:{NFSU2_TR(0x5d0387);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d038d:{NFSU2_TR(0x5d038d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d038e:{NFSU2_TR(0x5d038e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0395:{NFSU2_TR(0x5d0395);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0396:{NFSU2_TR(0x5d0396);
__builtin_memmove((R+0),gp(0x7fcac0),4);
}
B5d039b:{NFSU2_TR(0x5d039b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d039c:{NFSU2_TR(0x5d039c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d039d:{NFSU2_TR(0x5d039d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d039e:{NFSU2_TR(0x5d039e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d039f:{NFSU2_TR(0x5d039f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5d03a1:{NFSU2_TR(0x5d03a1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d03a3:{NFSU2_TR(0x5d03a3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d03a5:{NFSU2_TR(0x5d03a5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5d03a7:{NFSU2_TR(0x5d03a7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5d03a9:{NFSU2_TR(0x5d03a9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d03ab:{NFSU2_TR(0x5d03ab);
__builtin_memmove(gp(0x87076c),(R+4),4);
}
B5d03b1:{NFSU2_TR(0x5d03b1);
__builtin_memmove(gp(0x870770),(R+8),4);
}
B5d03b7:{NFSU2_TR(0x5d03b7);
__builtin_memmove(gp(0x870774),(R+24),4);
}
B5d03bd:{NFSU2_TR(0x5d03bd);
__builtin_memmove(gp(0x870778),(R+28),4);
}
B5d03c3:{NFSU2_TR(0x5d03c3);
if(r1(R+518)){{goto L5d03e1;}}
}
B5d03c5:L5d03c5:{c.instructions+=2;NFSU2_TR(0x5d03c5);
w4(R+0,u32(0x7fcac0ull));
}
B5d03ca:{NFSU2_TR(0x5d03ca);
__builtin_memmove((R+12),(R+12),4);
}
B5d03d0:L5d03d0:{c.instructions+=5;NFSU2_TR(0x5d03d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5d03d3:{NFSU2_TR(0x5d03d3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B5d03d6:{NFSU2_TR(0x5d03d6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5d03d7:{NFSU2_TR(0x5d03d7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d03d9:{NFSU2_TR(0x5d03d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d03d0u);}goto L5d03d0;}}
}
B5d03db:L5d03db:{c.instructions+=1;NFSU2_TR(0x5d03db);
__builtin_memmove(gp(0x87076c),(R+4),4);
}
B5d03e1:L5d03e1:{c.instructions+=2;NFSU2_TR(0x5d03e1);
u8 U[8];
__builtin_memmove((U+0),gp(0x7fd330),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d03e7:{NFSU2_TR(0x5d03e7);
if(r1(R+518)){{goto L5d0401;}}
}
B5d03e9:L5d03e9:{c.instructions+=2;NFSU2_TR(0x5d03e9);
w4(R+0,u32(0x7fd330ull));
}
B5d03ee:{NFSU2_TR(0x5d03ee);
__builtin_memmove((R+28),(R+28),4);
}
B5d03f0:L5d03f0:{c.instructions+=5;NFSU2_TR(0x5d03f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5d03f3:{NFSU2_TR(0x5d03f3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B5d03f6:{NFSU2_TR(0x5d03f6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5d03f7:{NFSU2_TR(0x5d03f7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d03f9:{NFSU2_TR(0x5d03f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d03f0u);}goto L5d03f0;}}
}
B5d03fb:L5d03fb:{c.instructions+=1;NFSU2_TR(0x5d03fb);
__builtin_memmove(gp(0x870770),(R+8),4);
}
B5d0401:L5d0401:{c.instructions+=2;NFSU2_TR(0x5d0401);
u8 U[8];
__builtin_memmove((U+0),gp(0x7fd650),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d0407:{NFSU2_TR(0x5d0407);
if(r1(R+518)){{goto L5d0421;}}
}
B5d0409:L5d0409:{c.instructions+=2;NFSU2_TR(0x5d0409);
w4(R+0,u32(0x7fd650ull));
}
B5d040e:{NFSU2_TR(0x5d040e);
__builtin_memmove((R+28),(R+28),4);
}
B5d0410:L5d0410:{c.instructions+=5;NFSU2_TR(0x5d0410);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d0413:{NFSU2_TR(0x5d0413);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B5d0416:{NFSU2_TR(0x5d0416);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5d0417:{NFSU2_TR(0x5d0417);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d0419:{NFSU2_TR(0x5d0419);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0410u);}goto L5d0410;}}
}
B5d041b:L5d041b:{c.instructions+=1;NFSU2_TR(0x5d041b);
__builtin_memmove(gp(0x870774),(R+24),4);
}
B5d0421:L5d0421:{c.instructions+=2;NFSU2_TR(0x5d0421);
u8 U[8];
__builtin_memmove((U+0),gp(0x7fd7e0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d0427:{NFSU2_TR(0x5d0427);
if(r1(R+518)){{goto L5d0441;}}
}
B5d0429:L5d0429:{c.instructions+=2;NFSU2_TR(0x5d0429);
w4(R+0,u32(0x7fd7e0ull));
}
B5d042e:{NFSU2_TR(0x5d042e);
__builtin_memmove((R+28),(R+28),4);
}
B5d0430:L5d0430:{c.instructions+=5;NFSU2_TR(0x5d0430);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d0433:{NFSU2_TR(0x5d0433);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B5d0436:{NFSU2_TR(0x5d0436);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5d0437:{NFSU2_TR(0x5d0437);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d0439:{NFSU2_TR(0x5d0439);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0430u);}goto L5d0430;}}
}
B5d043b:L5d043b:{c.instructions+=1;NFSU2_TR(0x5d043b);
__builtin_memmove(gp(0x870778),(R+28),4);
}
B5d0441:L5d0441:{c.instructions+=4;NFSU2_TR(0x5d0441);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d0444:{NFSU2_TR(0x5d0444);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d0447:{NFSU2_TR(0x5d0447);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0448:{NFSU2_TR(0x5d0448);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d044dull));
TAIL_STATIC(0x575620u,575);
}
B5d044d:L5d044d:{c.instructions+=6;NFSU2_TR(0x5d044d);
__builtin_memmove(gp(0x86e89c),(R+0),4);
}
B5d0452:{NFSU2_TR(0x5d0452);
__builtin_memmove((R+0),gp(0x870770),4);
}
B5d0457:{NFSU2_TR(0x5d0457);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5d045a:{NFSU2_TR(0x5d045a);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5d045d:{NFSU2_TR(0x5d045d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d045e:{NFSU2_TR(0x5d045e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0463ull));
TAIL_STATIC(0x575620u,575);
}
B5d0463:L5d0463:{c.instructions+=6;NFSU2_TR(0x5d0463);
__builtin_memmove(gp(0x86e8a4),(R+0),4);
}
B5d0468:{NFSU2_TR(0x5d0468);
__builtin_memmove((R+0),gp(0x870774),4);
}
B5d046d:{NFSU2_TR(0x5d046d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5d0470:{NFSU2_TR(0x5d0470);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d0473:{NFSU2_TR(0x5d0473);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0474:{NFSU2_TR(0x5d0474);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0479ull));
TAIL_STATIC(0x575620u,575);
}
B5d0479:L5d0479:{c.instructions+=6;NFSU2_TR(0x5d0479);
__builtin_memmove(gp(0x86e8a8),(R+0),4);
}
B5d047e:{NFSU2_TR(0x5d047e);
__builtin_memmove((R+0),gp(0x870778),4);
}
B5d0483:{NFSU2_TR(0x5d0483);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d0486:{NFSU2_TR(0x5d0486);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d0489:{NFSU2_TR(0x5d0489);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d048a:{NFSU2_TR(0x5d048a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d048full));
TAIL_STATIC(0x575620u,575);
}
B5d048f:L5d048f:{c.instructions+=7;NFSU2_TR(0x5d048f);
__builtin_memmove(gp(0x86e8a0),(R+0),4);
}
B5d0494:{NFSU2_TR(0x5d0494);
__builtin_memmove((R+0),gp(0x870758),4);
}
B5d0499:{NFSU2_TR(0x5d0499);
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
B5d049c:{NFSU2_TR(0x5d049c);
__builtin_memmove(gp(0x870780),(R+0),4);
}
B5d04a1:{NFSU2_TR(0x5d04a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d04a3:{NFSU2_TR(0x5d04a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d04a4:{NFSU2_TR(0x5d04a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d04a7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d04a7:L5d04a7:{c.instructions+=1;NFSU2_TR(0x5d04a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d04acull));
TAIL_STATIC(0x5b8760u,5b8);
}
B5d04ac:L5d04ac:{c.instructions+=9;NFSU2_TR(0x5d04ac);
__builtin_memmove((R+0),gp(0x870780),4);
}
B5d04b1:{NFSU2_TR(0x5d04b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d04b3:{NFSU2_TR(0x5d04b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d04b4:{NFSU2_TR(0x5d04b4);
u8 U[4];
w4(U+0,u32(0x86fa00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d04b9:{NFSU2_TR(0x5d04b9);
u8 U[4];
w4(U+0,u32(0x5ca660ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d04be:{NFSU2_TR(0x5d04be);
u8 U[4];
w4(U+0,u32(0x86fa00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d04c3:{NFSU2_TR(0x5d04c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d04c4:{NFSU2_TR(0x5d04c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d04c5:{NFSU2_TR(0x5d04c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d04c8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d04c8:L5d04c8:{c.instructions+=2;NFSU2_TR(0x5d04c8);
u8 U[4];
w4(U+0,u32(0x2c18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d04cd:{NFSU2_TR(0x5d04cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d04d2ull));
TAIL_STATIC(0x575620u,575);
}
B5d04d2:L5d04d2:{c.instructions+=5;NFSU2_TR(0x5d04d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d04d5:{NFSU2_TR(0x5d04d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d04d9:{NFSU2_TR(0x5d04d9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d04db:{NFSU2_TR(0x5d04db);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d04df:{NFSU2_TR(0x5d04df);
if(r1(R+518)){{goto L5d04f1;}}
}
B5d04e1:L5d04e1:{c.instructions+=4;NFSU2_TR(0x5d04e1);
__builtin_memmove((R+4),gp(0x870990),4);
}
B5d04e7:{NFSU2_TR(0x5d04e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d04e8:{NFSU2_TR(0x5d04e8);
__builtin_memmove((R+4),(R+0),4);
}
B5d04ea:{NFSU2_TR(0x5d04ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d04efull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0310u);}goto L5d0310;}
}
B5d04ef:L5d04ef:{c.instructions+=1;NFSU2_TR(0x5d04ef);
{goto L5d04f3;}
}
B5d04f1:L5d04f1:{c.instructions+=1;NFSU2_TR(0x5d04f1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d04f3:L5d04f3:{c.instructions+=29;NFSU2_TR(0x5d04f3);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B5d04f6:{NFSU2_TR(0x5d04f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d04f7:{NFSU2_TR(0x5d04f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d04f8:{NFSU2_TR(0x5d04f8);
__builtin_memmove(gp(0x870760),(R+0),4);
}
B5d04fd:{NFSU2_TR(0x5d04fd);
w1(R+0,u8(0x80ull));
}
B5d04ff:{NFSU2_TR(0x5d04ff);
__builtin_memmove(gp(0x86eac8),(R+4),4);
}
B5d0505:{NFSU2_TR(0x5d0505);
__builtin_memmove(gp(0x86eacc),(R+4),4);
}
B5d050b:{NFSU2_TR(0x5d050b);
__builtin_memmove(gp(0x86eaf0),(R+4),4);
}
B5d0511:{NFSU2_TR(0x5d0511);
__builtin_memmove(gp(0x86eaf4),(R+4),4);
}
B5d0517:{NFSU2_TR(0x5d0517);
__builtin_memmove(gp(0x86b7e0),(R+4),4);
}
B5d051d:{NFSU2_TR(0x5d051d);
__builtin_memmove(gp(0x86b7e4),(R+4),4);
}
B5d0523:{NFSU2_TR(0x5d0523);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0527:{NFSU2_TR(0x5d0527);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d0528:{NFSU2_TR(0x5d0528);
__builtin_memmove(gp(0x86ead1),(R+12),1);
}
B5d052e:{NFSU2_TR(0x5d052e);
__builtin_memmove(gp(0x86ead0),(R+12),1);
}
B5d0534:{NFSU2_TR(0x5d0534);
__builtin_memmove(gp(0x86eaf9),(R+12),1);
}
B5d053a:{NFSU2_TR(0x5d053a);
__builtin_memmove(gp(0x86eaf8),(R+12),1);
}
B5d0540:{NFSU2_TR(0x5d0540);
__builtin_memmove(gp(0x86b7e9),(R+12),1);
}
B5d0546:{NFSU2_TR(0x5d0546);
__builtin_memmove(gp(0x86b7e8),(R+12),1);
}
B5d054c:{NFSU2_TR(0x5d054c);
__builtin_memmove(gp(0x86ead3),(R+0),1);
}
B5d0551:{NFSU2_TR(0x5d0551);
__builtin_memmove(gp(0x86ead2),(R+0),1);
}
B5d0556:{NFSU2_TR(0x5d0556);
__builtin_memmove(gp(0x86eafb),(R+0),1);
}
B5d055b:{NFSU2_TR(0x5d055b);
__builtin_memmove(gp(0x86eafa),(R+0),1);
}
B5d0560:{NFSU2_TR(0x5d0560);
__builtin_memmove(gp(0x86b7eb),(R+0),1);
}
B5d0565:{NFSU2_TR(0x5d0565);
__builtin_memmove(gp(0x86b7ea),(R+0),1);
}
B5d056a:{NFSU2_TR(0x5d056a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d056b:{NFSU2_TR(0x5d056b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0572:{NFSU2_TR(0x5d0572);
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
B5d0575:{NFSU2_TR(0x5d0575);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d0580:L5d0580:{c.instructions+=10;NFSU2_TR(0x5d0580);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0582:{NFSU2_TR(0x5d0582);
u8 U[4];
w4(U+0,u32(0x779238ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0587:{NFSU2_TR(0x5d0587);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d058d:{NFSU2_TR(0x5d058d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d058e:{NFSU2_TR(0x5d058e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0595:{NFSU2_TR(0x5d0595);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0596:{NFSU2_TR(0x5d0596);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0597:{NFSU2_TR(0x5d0597);
__builtin_memmove((R+24),(R+4),4);
}
B5d0599:{NFSU2_TR(0x5d0599);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d059d:{NFSU2_TR(0x5d059d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d05a2ull));
TAIL_STATIC(0x75d939u,75d);
}
B5d05a2:L5d05a2:{c.instructions+=12;NFSU2_TR(0x5d05a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d05a4:{NFSU2_TR(0x5d05a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d05a7:{NFSU2_TR(0x5d05a7);
u8 U[4];
w4(U+0,u32(0x7d9918ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5d05ad:{NFSU2_TR(0x5d05ad);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d05af:{NFSU2_TR(0x5d05af);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d05b2:{NFSU2_TR(0x5d05b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d05b9:{NFSU2_TR(0x5d05b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d05ba:{NFSU2_TR(0x5d05ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d05be:{NFSU2_TR(0x5d05be);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d05c1:{NFSU2_TR(0x5d05c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d05c5:{NFSU2_TR(0x5d05c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d05c6:{NFSU2_TR(0x5d05c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d05cbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d00d0u);}goto L5d00d0;}
}
B5d05cb:L5d05cb:{c.instructions+=6;NFSU2_TR(0x5d05cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d05cf:{NFSU2_TR(0x5d05cf);
__builtin_memmove((R+0),(R+24),4);
}
B5d05d1:{NFSU2_TR(0x5d05d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d05d2:{NFSU2_TR(0x5d05d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d05d9:{NFSU2_TR(0x5d05d9);
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
B5d05dc:{NFSU2_TR(0x5d05dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d05e0:L5d05e0:{c.instructions+=5;NFSU2_TR(0x5d05e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d05e1:{NFSU2_TR(0x5d05e1);
__builtin_memmove((R+24),(R+4),4);
}
B5d05e3:{NFSU2_TR(0x5d05e3);
u8 U[4];
w4(U+0,u32(0x7d9918ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5d05e9:{NFSU2_TR(0x5d05e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x10ull))));
}
B5d05ed:{NFSU2_TR(0x5d05ed);
if(r1(R+512)){{goto L5d05fb;}}
}
B5d05ef:L5d05ef:{c.instructions+=3;NFSU2_TR(0x5d05ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d05f2:{NFSU2_TR(0x5d05f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d05f3:{NFSU2_TR(0x5d05f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d05f8ull));
TAIL_STATIC(0x575630u,575);
}
B5d05f8:L5d05f8:{c.instructions+=1;NFSU2_TR(0x5d05f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d05fb:L5d05fb:{c.instructions+=7;NFSU2_TR(0x5d05fb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d05fd:{NFSU2_TR(0x5d05fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d0604:{NFSU2_TR(0x5d0604);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0607:{NFSU2_TR(0x5d0607);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d060a:{NFSU2_TR(0x5d060a);
__builtin_memmove((R+4),(R+24),4);
}
B5d060c:{NFSU2_TR(0x5d060c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d060d:{NFSU2_TR(0x5d060d);
TAIL_STATIC(0x75d994u,75d);
}
B5d0620:L5d0620:{c.instructions+=10;NFSU2_TR(0x5d0620);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d0624:{NFSU2_TR(0x5d0624);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0625:{NFSU2_TR(0x5d0625);
__builtin_memmove((R+24),(R+4),4);
}
B5d0627:{NFSU2_TR(0x5d0627);
__builtin_memmove((R+0),(R+8),4);
}
B5d0629:{NFSU2_TR(0x5d0629);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d062a:{NFSU2_TR(0x5d062a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d0631:{NFSU2_TR(0x5d0631);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d0638:{NFSU2_TR(0x5d0638);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5d063c:{NFSU2_TR(0x5d063c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d063f:{NFSU2_TR(0x5d063f);
}
B5d0640:L5d0640:{c.instructions+=4;NFSU2_TR(0x5d0640);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5d0642:{NFSU2_TR(0x5d0642);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d0643:{NFSU2_TR(0x5d0643);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d0645:{NFSU2_TR(0x5d0645);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0640u);}goto L5d0640;}}
}
B5d0647:L5d0647:{c.instructions+=5;NFSU2_TR(0x5d0647);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B5d0649:{NFSU2_TR(0x5d0649);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d064a:{NFSU2_TR(0x5d064a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d064b:{NFSU2_TR(0x5d064b);
__builtin_memmove((R+4),(R+24),4);
}
B5d064d:{NFSU2_TR(0x5d064d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0652ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0180u);}goto L5d0180;}
}
B5d0652:L5d0652:{c.instructions+=4;NFSU2_TR(0x5d0652);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d0653:{NFSU2_TR(0x5d0653);
__builtin_memmove((R+0),(R+24),4);
}
B5d0655:{NFSU2_TR(0x5d0655);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d0656:{NFSU2_TR(0x5d0656);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d0660:L5d0660:{c.instructions+=8;NFSU2_TR(0x5d0660);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0661:{NFSU2_TR(0x5d0661);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0662:{NFSU2_TR(0x5d0662);
__builtin_memmove((R+24),(R+4),4);
}
B5d0664:{NFSU2_TR(0x5d0664);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0667:{NFSU2_TR(0x5d0667);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0668:{NFSU2_TR(0x5d0668);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5d066a:{NFSU2_TR(0x5d066a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d066c:{NFSU2_TR(0x5d066c);
if(r1(R+518)){{goto L5d0677;}}
}
B5d066e:L5d066e:{c.instructions+=2;NFSU2_TR(0x5d066e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d066f:{NFSU2_TR(0x5d066f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0674ull));
TAIL_STATIC(0x575630u,575);
}
B5d0674:L5d0674:{c.instructions+=1;NFSU2_TR(0x5d0674);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d0677:L5d0677:{c.instructions+=7;NFSU2_TR(0x5d0677);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d067a:{NFSU2_TR(0x5d067a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d067d:{NFSU2_TR(0x5d067d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0680:{NFSU2_TR(0x5d0680);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0683:{NFSU2_TR(0x5d0683);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5d0686:{NFSU2_TR(0x5d0686);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d0688:{NFSU2_TR(0x5d0688);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d068e;}}
}
B5d068a:L5d068a:{c.instructions+=2;NFSU2_TR(0x5d068a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d068c:{NFSU2_TR(0x5d068c);
{goto L5d0690;}
}
B5d068e:L5d068e:{c.instructions+=1;NFSU2_TR(0x5d068e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d0690:L5d0690:{c.instructions+=6;NFSU2_TR(0x5d0690);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0691:{NFSU2_TR(0x5d0691);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0692:{NFSU2_TR(0x5d0692);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d0696:{NFSU2_TR(0x5d0696);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0697:{NFSU2_TR(0x5d0697);
__builtin_memmove((R+4),(R+24),4);
}
B5d0699:{NFSU2_TR(0x5d0699);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d069eull));
TAIL_STATIC(0x5cf140u,5cf);
}
B5d069e:L5d069e:{c.instructions+=3;NFSU2_TR(0x5d069e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d06a1:{NFSU2_TR(0x5d06a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d06a2:{NFSU2_TR(0x5d06a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d06a7ull));
TAIL_STATIC(0x575630u,575);
}
B5d06a7:L5d06a7:{c.instructions+=7;NFSU2_TR(0x5d06a7);
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
B5d06aa:{NFSU2_TR(0x5d06aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d06ad:{NFSU2_TR(0x5d06ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d06b0:{NFSU2_TR(0x5d06b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d06b1:{NFSU2_TR(0x5d06b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d06b2:{NFSU2_TR(0x5d06b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d06b3:{NFSU2_TR(0x5d06b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d06c0:L5d06c0:{c.instructions+=14;NFSU2_TR(0x5d06c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d06c6:{NFSU2_TR(0x5d06c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d06ca:{NFSU2_TR(0x5d06ca);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d06cc:{NFSU2_TR(0x5d06cc);
u8 U[4];
w4(U+0,u32(0x779258ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d06d1:{NFSU2_TR(0x5d06d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d06d2:{NFSU2_TR(0x5d06d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d06d9:{NFSU2_TR(0x5d06d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d06dc:{NFSU2_TR(0x5d06dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B5d06df:{NFSU2_TR(0x5d06df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d06e0:{NFSU2_TR(0x5d06e0);
w4(R+24,u32(0x1fffffffull));
}
B5d06e5:{NFSU2_TR(0x5d06e5);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B5d06e7:{NFSU2_TR(0x5d06e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B5d06e9:{NFSU2_TR(0x5d06e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d06ea:{NFSU2_TR(0x5d06ea);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d0755;}}
}
B5d06ec:L5d06ec:{c.instructions+=6;NFSU2_TR(0x5d06ec);
w4(R+0,u32(0x7a4188ull));
}
B5d06f1:{NFSU2_TR(0x5d06f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d06f9:{NFSU2_TR(0x5d06f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d0701:{NFSU2_TR(0x5d0701);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5d0706:{NFSU2_TR(0x5d0706);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d0709:{NFSU2_TR(0x5d0709);
__builtin_memmove((R+16),(R+16),4);
}
B5d0710:L5d0710:{c.instructions+=4;NFSU2_TR(0x5d0710);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5d0712:{NFSU2_TR(0x5d0712);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d0713:{NFSU2_TR(0x5d0713);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d0715:{NFSU2_TR(0x5d0715);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0710u);}goto L5d0710;}}
}
B5d0717:L5d0717:{c.instructions+=5;NFSU2_TR(0x5d0717);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5d0719:{NFSU2_TR(0x5d0719);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d071a:{NFSU2_TR(0x5d071a);
u8 U[4];
w4(U+0,u32(0x7a4188ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d071f:{NFSU2_TR(0x5d071f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d0723:{NFSU2_TR(0x5d0723);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0728ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0180u);}goto L5d0180;}
}
B5d0728:L5d0728:{c.instructions+=5;NFSU2_TR(0x5d0728);
__builtin_memmove((R+0),(R+16),4);
}
B5d072c:{NFSU2_TR(0x5d072c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d072d:{NFSU2_TR(0x5d072d);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d0731:{NFSU2_TR(0x5d0731);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d0739:{NFSU2_TR(0x5d0739);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d073eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0580u);}goto L5d0580;}
}
B5d073e:L5d073e:{c.instructions+=5;NFSU2_TR(0x5d073e);
u8 U[4];
w4(U+0,u32(0x7e4950ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0743:{NFSU2_TR(0x5d0743);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d0747:{NFSU2_TR(0x5d0747);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0748:{NFSU2_TR(0x5d0748);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x7d9924ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d0750:{NFSU2_TR(0x5d0750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0755ull));
TAIL_STATIC(0x75d8ffu,75d);
}
B5d0755:L5d0755:{c.instructions+=6;NFSU2_TR(0x5d0755);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5d0757:{NFSU2_TR(0x5d0757);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d075a:{NFSU2_TR(0x5d075a);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d075e:{NFSU2_TR(0x5d075e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0765:{NFSU2_TR(0x5d0765);
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
B5d0768:{NFSU2_TR(0x5d0768);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d0770:L5d0770:{c.instructions+=13;NFSU2_TR(0x5d0770);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0772:{NFSU2_TR(0x5d0772);
u8 U[4];
w4(U+0,u32(0x779238ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0777:{NFSU2_TR(0x5d0777);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d077d:{NFSU2_TR(0x5d077d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d077e:{NFSU2_TR(0x5d077e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0785:{NFSU2_TR(0x5d0785);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0786:{NFSU2_TR(0x5d0786);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0787:{NFSU2_TR(0x5d0787);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0788:{NFSU2_TR(0x5d0788);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d078c:{NFSU2_TR(0x5d078c);
__builtin_memmove((R+24),(R+4),4);
}
B5d078e:{NFSU2_TR(0x5d078e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d078f:{NFSU2_TR(0x5d078f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0793:{NFSU2_TR(0x5d0793);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0798ull));
TAIL_STATIC(0x75d94au,75d);
}
B5d0798:L5d0798:{c.instructions+=12;NFSU2_TR(0x5d0798);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d079a:{NFSU2_TR(0x5d079a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d079c:{NFSU2_TR(0x5d079c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d079f:{NFSU2_TR(0x5d079f);
u8 U[4];
w4(U+0,u32(0x7d9918ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5d07a5:{NFSU2_TR(0x5d07a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d07a6:{NFSU2_TR(0x5d07a6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B5d07a9:{NFSU2_TR(0x5d07a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d07b0:{NFSU2_TR(0x5d07b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d07b3:{NFSU2_TR(0x5d07b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d07b4:{NFSU2_TR(0x5d07b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d07b8:{NFSU2_TR(0x5d07b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d07bb:{NFSU2_TR(0x5d07bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d07c0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d00d0u);}goto L5d00d0;}
}
B5d07c0:L5d07c0:{c.instructions+=7;NFSU2_TR(0x5d07c0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d07c4:{NFSU2_TR(0x5d07c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d07c5:{NFSU2_TR(0x5d07c5);
__builtin_memmove((R+0),(R+24),4);
}
B5d07c7:{NFSU2_TR(0x5d07c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d07c8:{NFSU2_TR(0x5d07c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d07cf:{NFSU2_TR(0x5d07cf);
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
B5d07d2:{NFSU2_TR(0x5d07d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d07e0:L5d07e0:{c.instructions+=11;NFSU2_TR(0x5d07e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d07e2:{NFSU2_TR(0x5d07e2);
u8 U[4];
w4(U+0,u32(0x779258ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d07e7:{NFSU2_TR(0x5d07e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d07ed:{NFSU2_TR(0x5d07ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d07ee:{NFSU2_TR(0x5d07ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d07f5:{NFSU2_TR(0x5d07f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B5d07f8:{NFSU2_TR(0x5d07f8);
w4(R+0,u32(0x7a419cull));
}
B5d07fd:{NFSU2_TR(0x5d07fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d0805:{NFSU2_TR(0x5d0805);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d080d:{NFSU2_TR(0x5d080d);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5d0812:{NFSU2_TR(0x5d0812);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d0815:L5d0815:{c.instructions+=4;NFSU2_TR(0x5d0815);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5d0817:{NFSU2_TR(0x5d0817);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d0818:{NFSU2_TR(0x5d0818);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d081a:{NFSU2_TR(0x5d081a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0815u);}goto L5d0815;}}
}
B5d081c:L5d081c:{c.instructions+=5;NFSU2_TR(0x5d081c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5d081e:{NFSU2_TR(0x5d081e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d081f:{NFSU2_TR(0x5d081f);
u8 U[4];
w4(U+0,u32(0x7a419cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0824:{NFSU2_TR(0x5d0824);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d0828:{NFSU2_TR(0x5d0828);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d082dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0180u);}goto L5d0180;}
}
B5d082d:L5d082d:{c.instructions+=5;NFSU2_TR(0x5d082d);
__builtin_memmove((R+0),(R+16),4);
}
B5d0831:{NFSU2_TR(0x5d0831);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0832:{NFSU2_TR(0x5d0832);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d0836:{NFSU2_TR(0x5d0836);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d083e:{NFSU2_TR(0x5d083e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0843ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0580u);}goto L5d0580;}
}
B5d0843:L5d0843:{c.instructions+=5;NFSU2_TR(0x5d0843);
u8 U[4];
w4(U+0,u32(0x7e4950ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0848:{NFSU2_TR(0x5d0848);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d084c:{NFSU2_TR(0x5d084c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d084d:{NFSU2_TR(0x5d084d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x7d9924ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d0855:{NFSU2_TR(0x5d0855);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d085aull));
TAIL_STATIC(0x75d8ffu,75d);
}
B5d085a:L5d085a:{c.instructions+=1;NFSU2_TR(0x5d085a);
u8 U[4];
{SPILL();c.pc=0x5d085au;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B5d0860:L5d0860:{c.instructions+=5;NFSU2_TR(0x5d0860);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0864:{NFSU2_TR(0x5d0864);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0865:{NFSU2_TR(0x5d0865);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0866:{NFSU2_TR(0x5d0866);
__builtin_memmove((R+24),(R+4),4);
}
B5d0868:{NFSU2_TR(0x5d0868);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d086dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0770u);}goto L5d0770;}
}
B5d086d:L5d086d:{c.instructions+=4;NFSU2_TR(0x5d086d);
u8 U[4];
w4(U+0,u32(0x7d9924ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5d0873:{NFSU2_TR(0x5d0873);
__builtin_memmove((R+0),(R+24),4);
}
B5d0875:{NFSU2_TR(0x5d0875);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d0876:{NFSU2_TR(0x5d0876);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d0880:L5d0880:{c.instructions+=2;NFSU2_TR(0x5d0880);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x960ull))));
}
B5d0886:{NFSU2_TR(0x5d0886);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0660u);}goto L5d0660;}
}
B5d0890:L5d0890:{c.instructions+=19;NFSU2_TR(0x5d0890);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0891:{NFSU2_TR(0x5d0891);
__builtin_memmove((R+20),(R+16),4);
}
B5d0893:{NFSU2_TR(0x5d0893);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0895:{NFSU2_TR(0x5d0895);
u8 U[4];
w4(U+0,u32(0x779270ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d089a:{NFSU2_TR(0x5d089a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d08a0:{NFSU2_TR(0x5d08a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d08a1:{NFSU2_TR(0x5d08a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d08a8:{NFSU2_TR(0x5d08a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5d08ab:{NFSU2_TR(0x5d08ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d08ae:{NFSU2_TR(0x5d08ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d08af:{NFSU2_TR(0x5d08af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d08b0:{NFSU2_TR(0x5d08b0);
__builtin_memmove((R+24),(R+4),4);
}
B5d08b2:{NFSU2_TR(0x5d08b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d08b4:{NFSU2_TR(0x5d08b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d08b5:{NFSU2_TR(0x5d08b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d08b8:{NFSU2_TR(0x5d08b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d08ba:{NFSU2_TR(0x5d08ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d08bd:{NFSU2_TR(0x5d08bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d08c0:{NFSU2_TR(0x5d08c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d08c6;}}
}
B5d08c2:L5d08c2:{c.instructions+=2;NFSU2_TR(0x5d08c2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d08c4:{NFSU2_TR(0x5d08c4);
{goto L5d08ce;}
}
B5d08c6:L5d08c6:{c.instructions+=3;NFSU2_TR(0x5d08c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d08c9:{NFSU2_TR(0x5d08c9);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B5d08cb:{NFSU2_TR(0x5d08cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5d08ce:L5d08ce:{c.instructions+=3;NFSU2_TR(0x5d08ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d08d1:{NFSU2_TR(0x5d08d1);
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
B5d08d3:{NFSU2_TR(0x5d08d3);
if(r1(R+518)){{goto L5d0b1a;}}
}
B5d08d9:L5d08d9:{c.instructions+=2;NFSU2_TR(0x5d08d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d08db:{NFSU2_TR(0x5d08db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d08e1;}}
}
B5d08dd:L5d08dd:{c.instructions+=2;NFSU2_TR(0x5d08dd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d08df:{NFSU2_TR(0x5d08df);
{goto L5d08e9;}
}
B5d08e1:L5d08e1:{c.instructions+=3;NFSU2_TR(0x5d08e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d08e4:{NFSU2_TR(0x5d08e4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B5d08e6:{NFSU2_TR(0x5d08e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B5d08e9:L5d08e9:{c.instructions+=4;NFSU2_TR(0x5d08e9);
w4(R+12,u32(0x3fffffffull));
}
B5d08ee:{NFSU2_TR(0x5d08ee);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B5d08f0:{NFSU2_TR(0x5d08f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B5d08f2:{NFSU2_TR(0x5d08f2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d090e;}}
}
B5d08f4:L5d08f4:{c.instructions+=2;NFSU2_TR(0x5d08f4);
__builtin_memmove((R+4),(R+24),4);
}
B5d08f6:{NFSU2_TR(0x5d08f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d08fbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d07e0u);}goto L5d07e0;}
}
B5d08fb:L5d08fb:{c.instructions+=8;NFSU2_TR(0x5d08fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d08fe:{NFSU2_TR(0x5d08fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0905:{NFSU2_TR(0x5d0905);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d0906:{NFSU2_TR(0x5d0906);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d0907:{NFSU2_TR(0x5d0907);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d0908:{NFSU2_TR(0x5d0908);
__builtin_memmove((R+16),(R+20),4);
}
B5d090a:{NFSU2_TR(0x5d090a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d090b:{NFSU2_TR(0x5d090b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d090e:L5d090e:{c.instructions+=2;NFSU2_TR(0x5d090e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d0910:{NFSU2_TR(0x5d0910);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d0916;}}
}
B5d0912:L5d0912:{c.instructions+=2;NFSU2_TR(0x5d0912);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d0914:{NFSU2_TR(0x5d0914);
{goto L5d091e;}
}
B5d0916:L5d0916:{c.instructions+=3;NFSU2_TR(0x5d0916);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0919:{NFSU2_TR(0x5d0919);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B5d091b:{NFSU2_TR(0x5d091b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B5d091e:L5d091e:{c.instructions+=3;NFSU2_TR(0x5d091e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5d0920:{NFSU2_TR(0x5d0920);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5d0922:{NFSU2_TR(0x5d0922);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d0a38;}}
}
B5d0928:L5d0928:{c.instructions+=6;NFSU2_TR(0x5d0928);
__builtin_memmove((R+4),(R+0),4);
}
B5d092a:{NFSU2_TR(0x5d092a);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B5d092c:{NFSU2_TR(0x5d092c);
w4(R+12,u32(0x3fffffffull));
}
B5d0931:{NFSU2_TR(0x5d0931);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B5d0933:{NFSU2_TR(0x5d0933);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B5d0935:{NFSU2_TR(0x5d0935);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d093b;}}
}
B5d0937:L5d0937:{c.instructions+=2;NFSU2_TR(0x5d0937);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d0939:{NFSU2_TR(0x5d0939);
{goto L5d093d;}
}
B5d093b:L5d093b:{c.instructions+=1;NFSU2_TR(0x5d093b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5d093d:L5d093d:{c.instructions+=2;NFSU2_TR(0x5d093d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d093f:{NFSU2_TR(0x5d093f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d0945;}}
}
B5d0941:L5d0941:{c.instructions+=2;NFSU2_TR(0x5d0941);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d0943:{NFSU2_TR(0x5d0943);
{goto L5d094d;}
}
B5d0945:L5d0945:{c.instructions+=3;NFSU2_TR(0x5d0945);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0948:{NFSU2_TR(0x5d0948);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B5d094a:{NFSU2_TR(0x5d094a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B5d094d:L5d094d:{c.instructions+=3;NFSU2_TR(0x5d094d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5d094f:{NFSU2_TR(0x5d094f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5d0951:{NFSU2_TR(0x5d0951);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d0965;}}
}
B5d0953:L5d0953:{c.instructions+=2;NFSU2_TR(0x5d0953);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d0955:{NFSU2_TR(0x5d0955);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d095b;}}
}
B5d0957:L5d0957:{c.instructions+=2;NFSU2_TR(0x5d0957);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d0959:{NFSU2_TR(0x5d0959);
{goto L5d0963;}
}
B5d095b:L5d095b:{c.instructions+=3;NFSU2_TR(0x5d095b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d095e:{NFSU2_TR(0x5d095e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B5d0960:{NFSU2_TR(0x5d0960);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5d0963:L5d0963:{c.instructions+=1;NFSU2_TR(0x5d0963);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5d0965:L5d0965:{c.instructions+=4;NFSU2_TR(0x5d0965);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d0968:{NFSU2_TR(0x5d0968);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0969:{NFSU2_TR(0x5d0969);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d096c:{NFSU2_TR(0x5d096c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0971ull));
TAIL_STATIC(0x575620u,575);
}
B5d0971:L5d0971:{c.instructions+=17;NFSU2_TR(0x5d0971);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d0974:{NFSU2_TR(0x5d0974);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d0977:{NFSU2_TR(0x5d0977);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0978:{NFSU2_TR(0x5d0978);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d097b:{NFSU2_TR(0x5d097b);
__builtin_memmove((R+12),(R+0),4);
}
B5d097d:{NFSU2_TR(0x5d097d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0980:{NFSU2_TR(0x5d0980);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0981:{NFSU2_TR(0x5d0981);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0982:{NFSU2_TR(0x5d0982);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0983:{NFSU2_TR(0x5d0983);
__builtin_memmove((R+4),(R+16),4);
}
B5d0985:{NFSU2_TR(0x5d0985);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5d0987:{NFSU2_TR(0x5d0987);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0988:{NFSU2_TR(0x5d0988);
__builtin_memmove((R+4),(R+16),4);
}
B5d098a:{NFSU2_TR(0x5d098a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d098d:{NFSU2_TR(0x5d098d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d0994:{NFSU2_TR(0x5d0994);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5d0996:{NFSU2_TR(0x5d0996);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d099bull));
TAIL_STATIC(0x5ca630u,5ca);
}
B5d099b:L5d099b:{c.instructions+=11;NFSU2_TR(0x5d099b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d099e:{NFSU2_TR(0x5d099e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5d09a1:{NFSU2_TR(0x5d09a1);
__builtin_memmove((R+28),(R+0),4);
}
B5d09a3:{NFSU2_TR(0x5d09a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d09a6:{NFSU2_TR(0x5d09a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d09a7:{NFSU2_TR(0x5d09a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d09a8:{NFSU2_TR(0x5d09a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d09ab:{NFSU2_TR(0x5d09ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d09ac:{NFSU2_TR(0x5d09ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d09ad:{NFSU2_TR(0x5d09ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d09ae:{NFSU2_TR(0x5d09ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d09b3ull));
TAIL_STATIC(0x5ce0f0u,5ce);
}
B5d09b3:L5d09b3:{c.instructions+=16;NFSU2_TR(0x5d09b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d09b6:{NFSU2_TR(0x5d09b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d09b9:{NFSU2_TR(0x5d09b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d09bc:{NFSU2_TR(0x5d09bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5d09bf:{NFSU2_TR(0x5d09bf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d09c0:{NFSU2_TR(0x5d09c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d09c3:{NFSU2_TR(0x5d09c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d09c4:{NFSU2_TR(0x5d09c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d09c5:{NFSU2_TR(0x5d09c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d09c6:{NFSU2_TR(0x5d09c6);
__builtin_memmove((R+0),(R+16),4);
}
B5d09c8:{NFSU2_TR(0x5d09c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d09ca:{NFSU2_TR(0x5d09ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d09cb:{NFSU2_TR(0x5d09cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d09ce:{NFSU2_TR(0x5d09ce);
__builtin_memmove((R+0),(R+16),4);
}
B5d09d0:{NFSU2_TR(0x5d09d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d09d2:{NFSU2_TR(0x5d09d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d09d7ull));
TAIL_STATIC(0x5ca630u,5ca);
}
B5d09d7:L5d09d7:{c.instructions+=4;NFSU2_TR(0x5d09d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d09da:{NFSU2_TR(0x5d09da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5d09dd:{NFSU2_TR(0x5d09dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d09df:{NFSU2_TR(0x5d09df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d09e5;}}
}
B5d09e1:L5d09e1:{c.instructions+=2;NFSU2_TR(0x5d09e1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d09e3:{NFSU2_TR(0x5d09e3);
{goto L5d09ed;}
}
B5d09e5:L5d09e5:{c.instructions+=3;NFSU2_TR(0x5d09e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d09e8:{NFSU2_TR(0x5d09e8);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B5d09ea:{NFSU2_TR(0x5d09ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5d09ed:L5d09ed:{c.instructions+=4;NFSU2_TR(0x5d09ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d09f0:{NFSU2_TR(0x5d09f0);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B5d09f2:{NFSU2_TR(0x5d09f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d09f4:{NFSU2_TR(0x5d09f4);
if(r1(R+518)){{goto L5d09ff;}}
}
B5d09f6:L5d09f6:{c.instructions+=2;NFSU2_TR(0x5d09f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d09f7:{NFSU2_TR(0x5d09f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d09fcull));
TAIL_STATIC(0x575630u,575);
}
B5d09fc:L5d09fc:{c.instructions+=1;NFSU2_TR(0x5d09fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d09ff:L5d09ff:{c.instructions+=14;NFSU2_TR(0x5d09ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d0a02:{NFSU2_TR(0x5d0a02);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+12)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d0a04:{NFSU2_TR(0x5d0a04);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d0a07:{NFSU2_TR(0x5d0a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0a0a:{NFSU2_TR(0x5d0a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0a0d:{NFSU2_TR(0x5d0a0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0a10:{NFSU2_TR(0x5d0a10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0a13:{NFSU2_TR(0x5d0a13);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0a1a:{NFSU2_TR(0x5d0a1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d0a1b:{NFSU2_TR(0x5d0a1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d0a1c:{NFSU2_TR(0x5d0a1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d0a1d:{NFSU2_TR(0x5d0a1d);
__builtin_memmove((R+16),(R+20),4);
}
B5d0a1f:{NFSU2_TR(0x5d0a1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d0a20:{NFSU2_TR(0x5d0a20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d0a23:L5d0a23:{c.instructions+=3;NFSU2_TR(0x5d0a23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0a26:{NFSU2_TR(0x5d0a26);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0a27:{NFSU2_TR(0x5d0a27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0a2cull));
TAIL_STATIC(0x575630u,575);
}
B5d0a2c:L5d0a2c:{c.instructions+=4;NFSU2_TR(0x5d0a2c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d0a2f:{NFSU2_TR(0x5d0a2f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0a31:{NFSU2_TR(0x5d0a31);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0a33:{NFSU2_TR(0x5d0a33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0a38ull));
TAIL_STATIC(0x75d8ffu,75d);
}
B5d0a38:L5d0a38:{c.instructions+=7;NFSU2_TR(0x5d0a38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d0a3b:{NFSU2_TR(0x5d0a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d0a3e:{NFSU2_TR(0x5d0a3e);
__builtin_memmove((R+0),(R+12),4);
}
B5d0a40:{NFSU2_TR(0x5d0a40);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B5d0a42:{NFSU2_TR(0x5d0a42);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5d0a45:{NFSU2_TR(0x5d0a45);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5d0a47:{NFSU2_TR(0x5d0a47);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d0aaa;}}
}
B5d0a49:L5d0a49:{c.instructions+=14;NFSU2_TR(0x5d0a49);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d0a50:{NFSU2_TR(0x5d0a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0a53:{NFSU2_TR(0x5d0a53);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B5d0a55:{NFSU2_TR(0x5d0a55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0a56:{NFSU2_TR(0x5d0a56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0a57:{NFSU2_TR(0x5d0a57);
__builtin_memmove((R+0),(R+16),4);
}
B5d0a59:{NFSU2_TR(0x5d0a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0a5c:{NFSU2_TR(0x5d0a5c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0a5d:{NFSU2_TR(0x5d0a5d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d0a5f:{NFSU2_TR(0x5d0a5f);
__builtin_memmove((R+0),(R+16),4);
}
B5d0a61:{NFSU2_TR(0x5d0a61);
__builtin_memmove((R+4),(R+24),4);
}
B5d0a63:{NFSU2_TR(0x5d0a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0a66:{NFSU2_TR(0x5d0a66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d0a68:{NFSU2_TR(0x5d0a68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0a6dull));
TAIL_STATIC(0x5cf190u,5cf);
}
B5d0a6d:L5d0a6d:{c.instructions+=13;NFSU2_TR(0x5d0a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0a70:{NFSU2_TR(0x5d0a70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0a73:{NFSU2_TR(0x5d0a73);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d0a76:{NFSU2_TR(0x5d0a76);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0a77:{NFSU2_TR(0x5d0a77);
__builtin_memmove((R+8),(R+4),4);
}
B5d0a79:{NFSU2_TR(0x5d0a79);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B5d0a7b:{NFSU2_TR(0x5d0a7b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5d0a7e:{NFSU2_TR(0x5d0a7e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5d0a80:{NFSU2_TR(0x5d0a80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0a81:{NFSU2_TR(0x5d0a81);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0a82:{NFSU2_TR(0x5d0a82);
__builtin_memmove((R+4),(R+24),4);
}
B5d0a84:{NFSU2_TR(0x5d0a84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d0a8b:{NFSU2_TR(0x5d0a8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0a90ull));
TAIL_STATIC(0x5cfbc0u,5cf);
}
B5d0a90:L5d0a90:{c.instructions+=12;NFSU2_TR(0x5d0a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d0a93:{NFSU2_TR(0x5d0a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0a96:{NFSU2_TR(0x5d0a96);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B5d0a98:{NFSU2_TR(0x5d0a98);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d0a9b:{NFSU2_TR(0x5d0a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0a9e:{NFSU2_TR(0x5d0a9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0a9f:{NFSU2_TR(0x5d0a9f);
__builtin_memmove((R+24),(R+12),4);
}
B5d0aa1:{NFSU2_TR(0x5d0aa1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0aa2:{NFSU2_TR(0x5d0aa2);
__builtin_memmove((R+0),(R+16),4);
}
B5d0aa4:{NFSU2_TR(0x5d0aa4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B5d0aa6:{NFSU2_TR(0x5d0aa6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d0aa8:{NFSU2_TR(0x5d0aa8);
{goto L5d0b07;}
}
B5d0aaa:L5d0aaa:{c.instructions+=16;NFSU2_TR(0x5d0aaa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0aab:{NFSU2_TR(0x5d0aab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0aac:{NFSU2_TR(0x5d0aac);
__builtin_memmove((R+0),(R+16),4);
}
B5d0aae:{NFSU2_TR(0x5d0aae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d0ab0:{NFSU2_TR(0x5d0ab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0ab3:{NFSU2_TR(0x5d0ab3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0ab4:{NFSU2_TR(0x5d0ab4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d0ab7:{NFSU2_TR(0x5d0ab7);
__builtin_memmove((R+4),(R+16),4);
}
B5d0ab9:{NFSU2_TR(0x5d0ab9);
__builtin_memmove((R+0),(R+12),4);
}
B5d0abb:{NFSU2_TR(0x5d0abb);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5d0abd:{NFSU2_TR(0x5d0abd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5d0abf:{NFSU2_TR(0x5d0abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0ac2:{NFSU2_TR(0x5d0ac2);
__builtin_memmove((R+4),(R+24),4);
}
B5d0ac4:{NFSU2_TR(0x5d0ac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0ac7:{NFSU2_TR(0x5d0ac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0aca:{NFSU2_TR(0x5d0aca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0acfull));
TAIL_STATIC(0x5cf190u,5cf);
}
B5d0acf:L5d0acf:{c.instructions+=17;NFSU2_TR(0x5d0acf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0ad0:{NFSU2_TR(0x5d0ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0ad3:{NFSU2_TR(0x5d0ad3);
__builtin_memmove((R+0),(R+16),4);
}
B5d0ad5:{NFSU2_TR(0x5d0ad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0ad8:{NFSU2_TR(0x5d0ad8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0ad9:{NFSU2_TR(0x5d0ad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0adc:{NFSU2_TR(0x5d0adc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d0ade:{NFSU2_TR(0x5d0ade);
__builtin_memmove((R+0),(R+16),4);
}
B5d0ae0:{NFSU2_TR(0x5d0ae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0ae3:{NFSU2_TR(0x5d0ae3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0ae4:{NFSU2_TR(0x5d0ae4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d0ae6:{NFSU2_TR(0x5d0ae6);
__builtin_memmove((R+0),(R+16),4);
}
B5d0ae8:{NFSU2_TR(0x5d0ae8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d0aeb:{NFSU2_TR(0x5d0aeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0aee:{NFSU2_TR(0x5d0aee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0aef:{NFSU2_TR(0x5d0aef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d0af1:{NFSU2_TR(0x5d0af1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0af6ull));
TAIL_STATIC(0x5ce0c0u,5ce);
}
B5d0af6:L5d0af6:{c.instructions+=8;NFSU2_TR(0x5d0af6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5d0af9:{NFSU2_TR(0x5d0af9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d0afc:{NFSU2_TR(0x5d0afc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0afd:{NFSU2_TR(0x5d0afd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0afe:{NFSU2_TR(0x5d0afe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0b01:{NFSU2_TR(0x5d0b01);
__builtin_memmove((R+0),(R+16),4);
}
B5d0b03:{NFSU2_TR(0x5d0b03);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B5d0b05:{NFSU2_TR(0x5d0b05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d0b07:L5d0b07:{c.instructions+=6;NFSU2_TR(0x5d0b07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0b0a:{NFSU2_TR(0x5d0b0a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0b0b:{NFSU2_TR(0x5d0b0b);
__builtin_memmove((R+0),(R+16),4);
}
B5d0b0d:{NFSU2_TR(0x5d0b0d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d0b0f:{NFSU2_TR(0x5d0b0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0b12:{NFSU2_TR(0x5d0b12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0b17ull));
TAIL_STATIC(0x5ca610u,5ca);
}
B5d0b17:L5d0b17:{c.instructions+=1;NFSU2_TR(0x5d0b17);
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
B5d0b1a:L5d0b1a:{c.instructions+=8;NFSU2_TR(0x5d0b1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0b1d:{NFSU2_TR(0x5d0b1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d0b1e:{NFSU2_TR(0x5d0b1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d0b1f:{NFSU2_TR(0x5d0b1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0b26:{NFSU2_TR(0x5d0b26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d0b27:{NFSU2_TR(0x5d0b27);
__builtin_memmove((R+16),(R+20),4);
}
B5d0b29:{NFSU2_TR(0x5d0b29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d0b2a:{NFSU2_TR(0x5d0b2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d0b30:L5d0b30:{c.instructions+=5;NFSU2_TR(0x5d0b30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0b31:{NFSU2_TR(0x5d0b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d0b34:{NFSU2_TR(0x5d0b34);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d0b36:{NFSU2_TR(0x5d0b36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0b37:{NFSU2_TR(0x5d0b37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d0b3d;}}
}
B5d0b39:L5d0b39:{c.instructions+=2;NFSU2_TR(0x5d0b39);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d0b3b:{NFSU2_TR(0x5d0b3b);
{goto L5d0b45;}
}
B5d0b3d:L5d0b3d:{c.instructions+=3;NFSU2_TR(0x5d0b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0b40:{NFSU2_TR(0x5d0b40);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B5d0b42:{NFSU2_TR(0x5d0b42);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5d0b45:L5d0b45:{c.instructions+=3;NFSU2_TR(0x5d0b45);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d0b49:{NFSU2_TR(0x5d0b49);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5d0b4b:{NFSU2_TR(0x5d0b4b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d0b77;}}
}
B5d0b4d:L5d0b4d:{c.instructions+=2;NFSU2_TR(0x5d0b4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d0b4f:{NFSU2_TR(0x5d0b4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d0b55;}}
}
B5d0b51:L5d0b51:{c.instructions+=2;NFSU2_TR(0x5d0b51);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d0b53:{NFSU2_TR(0x5d0b53);
{goto L5d0b5d;}
}
B5d0b55:L5d0b55:{c.instructions+=3;NFSU2_TR(0x5d0b55);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0b58:{NFSU2_TR(0x5d0b58);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B5d0b5a:{NFSU2_TR(0x5d0b5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5d0b5d:L5d0b5d:{c.instructions+=9;NFSU2_TR(0x5d0b5d);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B5d0b5f:{NFSU2_TR(0x5d0b5f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5d0b63:{NFSU2_TR(0x5d0b63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0b64:{NFSU2_TR(0x5d0b64);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0b65:{NFSU2_TR(0x5d0b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d0b68:{NFSU2_TR(0x5d0b68);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0b69:{NFSU2_TR(0x5d0b69);
__builtin_memmove((R+0),(R+16),4);
}
B5d0b6b:{NFSU2_TR(0x5d0b6b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d0b6d:{NFSU2_TR(0x5d0b6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0b72ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0890u);}goto L5d0890;}
}
B5d0b72:L5d0b72:{c.instructions+=3;NFSU2_TR(0x5d0b72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d0b73:{NFSU2_TR(0x5d0b73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d0b74:{NFSU2_TR(0x5d0b74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d0b77:L5d0b77:{c.instructions+=2;NFSU2_TR(0x5d0b77);
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
B5d0b79:{NFSU2_TR(0x5d0b79);
if(r1(R+518)){{goto L5d0ba3;}}
}
B5d0b7b:L5d0b7b:{c.instructions+=6;NFSU2_TR(0x5d0b7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d0b7e:{NFSU2_TR(0x5d0b7e);
__builtin_memmove((R+0),(R+28),4);
}
B5d0b80:{NFSU2_TR(0x5d0b80);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B5d0b82:{NFSU2_TR(0x5d0b82);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5d0b85:{NFSU2_TR(0x5d0b85);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d0b87:{NFSU2_TR(0x5d0b87);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d0ba3;}}
}
B5d0b89:L5d0b89:{c.instructions+=11;NFSU2_TR(0x5d0b89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0b8a:{NFSU2_TR(0x5d0b8a);
__builtin_memmove((R+0),(R+16),4);
}
B5d0b8c:{NFSU2_TR(0x5d0b8c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d0b8e:{NFSU2_TR(0x5d0b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0b91:{NFSU2_TR(0x5d0b91);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0b92:{NFSU2_TR(0x5d0b92);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d0b95:{NFSU2_TR(0x5d0b95);
__builtin_memmove((R+24),(R+16),4);
}
B5d0b97:{NFSU2_TR(0x5d0b97);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d0b9b:{NFSU2_TR(0x5d0b9b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0b9c:{NFSU2_TR(0x5d0b9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5d0b9e:{NFSU2_TR(0x5d0b9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0ba3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d02d0u);}goto L5d02d0;}
}
B5d0ba3:L5d0ba3:{c.instructions+=3;NFSU2_TR(0x5d0ba3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d0ba4:{NFSU2_TR(0x5d0ba4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d0ba5:{NFSU2_TR(0x5d0ba5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d0bb0:L5d0bb0:{c.instructions+=16;NFSU2_TR(0x5d0bb0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0bb2:{NFSU2_TR(0x5d0bb2);
u8 U[4];
w4(U+0,u32(0x77928bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0bb7:{NFSU2_TR(0x5d0bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0bbd:{NFSU2_TR(0x5d0bbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0bbe:{NFSU2_TR(0x5d0bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0bc5:{NFSU2_TR(0x5d0bc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0bc6:{NFSU2_TR(0x5d0bc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0bca:{NFSU2_TR(0x5d0bca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0bcb:{NFSU2_TR(0x5d0bcb);
__builtin_memmove((R+24),(R+4),4);
}
B5d0bcd:{NFSU2_TR(0x5d0bcd);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5d0bcf:{NFSU2_TR(0x5d0bcf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0bd0:{NFSU2_TR(0x5d0bd0);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B5d0bd2:{NFSU2_TR(0x5d0bd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d0bd5:{NFSU2_TR(0x5d0bd5);
__builtin_memmove((R+4),(R+28),4);
}
B5d0bd7:{NFSU2_TR(0x5d0bd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0bdb:{NFSU2_TR(0x5d0bdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0be0ull));
TAIL_STATIC(0x5ce070u,5ce);
}
B5d0be0:L5d0be0:{c.instructions+=12;NFSU2_TR(0x5d0be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0be3:{NFSU2_TR(0x5d0be3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d0be5:{NFSU2_TR(0x5d0be5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0be8:{NFSU2_TR(0x5d0be8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d0beb:{NFSU2_TR(0x5d0beb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d0bee:{NFSU2_TR(0x5d0bee);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0bf0:{NFSU2_TR(0x5d0bf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0bf4:{NFSU2_TR(0x5d0bf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0bf8:{NFSU2_TR(0x5d0bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0bfb:{NFSU2_TR(0x5d0bfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0bfe:{NFSU2_TR(0x5d0bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0c01:{NFSU2_TR(0x5d0c01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0c06ull));
TAIL_STATIC(0x575620u,575);
}
B5d0c06:L5d0c06:{c.instructions+=10;NFSU2_TR(0x5d0c06);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0c09:{NFSU2_TR(0x5d0c09);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0c0c:{NFSU2_TR(0x5d0c0c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B5d0c0f:{NFSU2_TR(0x5d0c0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d0c12:{NFSU2_TR(0x5d0c12);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0c15:{NFSU2_TR(0x5d0c15);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d0c19:{NFSU2_TR(0x5d0c19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0c1a:{NFSU2_TR(0x5d0c1a);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0c1c:{NFSU2_TR(0x5d0c1c);
__builtin_memmove((R+4),(R+28),4);
}
B5d0c1e:{NFSU2_TR(0x5d0c1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0c23ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0250u);}goto L5d0250;}
}
B5d0c23:L5d0c23:{c.instructions+=10;NFSU2_TR(0x5d0c23);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0c27:{NFSU2_TR(0x5d0c27);
w4(R+0,u32(0x1ull));
}
B5d0c2c:{NFSU2_TR(0x5d0c2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0c2f:{NFSU2_TR(0x5d0c2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0c32:{NFSU2_TR(0x5d0c32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d0c33:{NFSU2_TR(0x5d0c33);
__builtin_memmove((R+0),(R+24),4);
}
B5d0c35:{NFSU2_TR(0x5d0c35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d0c36:{NFSU2_TR(0x5d0c36);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0c3d:{NFSU2_TR(0x5d0c3d);
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
B5d0c40:{NFSU2_TR(0x5d0c40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d0c50:L5d0c50:{c.instructions+=9;NFSU2_TR(0x5d0c50);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0c54:{NFSU2_TR(0x5d0c54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d0c56:{NFSU2_TR(0x5d0c56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0c57:{NFSU2_TR(0x5d0c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d0c5a:{NFSU2_TR(0x5d0c5a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0c5e:{NFSU2_TR(0x5d0c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d0c61:{NFSU2_TR(0x5d0c61);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d0c63:{NFSU2_TR(0x5d0c63);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0c64:{NFSU2_TR(0x5d0c64);
if(r1(R+518)){{goto L5d0c81;}}
}
B5d0c66:L5d0c66:{c.instructions+=3;NFSU2_TR(0x5d0c66);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d0c68:{NFSU2_TR(0x5d0c68);
__builtin_memmove((R+0),(R+8),4);
}
B5d0c6a:{NFSU2_TR(0x5d0c6a);
if(r1(R+518)){{goto L5d0c7e;}}
}
B5d0c6c:L5d0c6c:{c.instructions+=1;NFSU2_TR(0x5d0c6c);
__builtin_memmove((R+16),(R+16),4);
}
B5d0c70:L5d0c70:{c.instructions+=6;NFSU2_TR(0x5d0c70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5d0c72:{NFSU2_TR(0x5d0c72);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5d0c74:{NFSU2_TR(0x5d0c74);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5d0c77:{NFSU2_TR(0x5d0c77);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5d0c7a:{NFSU2_TR(0x5d0c7a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d0c7c:{NFSU2_TR(0x5d0c7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0c70u);}goto L5d0c70;}}
}
B5d0c7e:L5d0c7e:{c.instructions+=1;NFSU2_TR(0x5d0c7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0c81:L5d0c81:{c.instructions+=9;NFSU2_TR(0x5d0c81);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0c84:{NFSU2_TR(0x5d0c84);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d0c88:{NFSU2_TR(0x5d0c88);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0c89:{NFSU2_TR(0x5d0c89);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d0c8d:{NFSU2_TR(0x5d0c8d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0c8e:{NFSU2_TR(0x5d0c8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0c8f:{NFSU2_TR(0x5d0c8f);
__builtin_memmove((R+8),(R+16),4);
}
B5d0c91:{NFSU2_TR(0x5d0c91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5d0c93:{NFSU2_TR(0x5d0c93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0c98ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0890u);}goto L5d0890;}
}
B5d0c98:L5d0c98:{c.instructions+=3;NFSU2_TR(0x5d0c98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d0c99:{NFSU2_TR(0x5d0c99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d0c9a:{NFSU2_TR(0x5d0c9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d0ca0:L5d0ca0:{c.instructions+=7;NFSU2_TR(0x5d0ca0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0ca1:{NFSU2_TR(0x5d0ca1);
__builtin_memmove((R+24),(R+4),4);
}
B5d0ca3:{NFSU2_TR(0x5d0ca3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0ca4:{NFSU2_TR(0x5d0ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d0ca7:{NFSU2_TR(0x5d0ca7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d0ca9:{NFSU2_TR(0x5d0ca9);
u8 U[4];
w4(U+0,u32(0x7a41b0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5d0caf:{NFSU2_TR(0x5d0caf);
if(r1(R+518)){{goto L5d0cc1;}}
}
B5d0cb1:L5d0cb1:{c.instructions+=2;NFSU2_TR(0x5d0cb1);
__builtin_memmove((R+4),(R+28),4);
}
B5d0cb3:{NFSU2_TR(0x5d0cb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0cb8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0880u);}goto L5d0880;}
}
B5d0cb8:L5d0cb8:{c.instructions+=2;NFSU2_TR(0x5d0cb8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0cb9:{NFSU2_TR(0x5d0cb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0cbeull));
TAIL_STATIC(0x575630u,575);
}
B5d0cbe:L5d0cbe:{c.instructions+=1;NFSU2_TR(0x5d0cbe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d0cc1:L5d0cc1:{c.instructions+=3;NFSU2_TR(0x5d0cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0cc4:{NFSU2_TR(0x5d0cc4);
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
B5d0cc6:{NFSU2_TR(0x5d0cc6);
if(r1(R+518)){{goto L5d0cd5;}}
}
B5d0cc8:L5d0cc8:{c.instructions+=3;NFSU2_TR(0x5d0cc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d0cca:{NFSU2_TR(0x5d0cca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0ccb:{NFSU2_TR(0x5d0ccb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0cceull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d0cce:L5d0cce:{c.instructions+=1;NFSU2_TR(0x5d0cce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d0cd5:L5d0cd5:{c.instructions+=2;NFSU2_TR(0x5d0cd5);
u8 U[9];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
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
B5d0cda:{NFSU2_TR(0x5d0cda);
if(r1(R+518)){{goto L5d0ce5;}}
}
B5d0cdc:L5d0cdc:{c.instructions+=2;NFSU2_TR(0x5d0cdc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0cdd:{NFSU2_TR(0x5d0cdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0ce2ull));
TAIL_STATIC(0x575630u,575);
}
B5d0ce2:L5d0ce2:{c.instructions+=1;NFSU2_TR(0x5d0ce2);
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
B5d0ce5:L5d0ce5:{c.instructions+=4;NFSU2_TR(0x5d0ce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d0ce6:{NFSU2_TR(0x5d0ce6);
__builtin_memmove((R+0),(R+24),4);
}
B5d0ce8:{NFSU2_TR(0x5d0ce8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d0ce9:{NFSU2_TR(0x5d0ce9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d0cf0:L5d0cf0:{c.instructions+=11;NFSU2_TR(0x5d0cf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5d0cf3:{NFSU2_TR(0x5d0cf3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0cf4:{NFSU2_TR(0x5d0cf4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0cf5:{NFSU2_TR(0x5d0cf5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0cf6:{NFSU2_TR(0x5d0cf6);
__builtin_memmove((R+24),(R+4),4);
}
B5d0cf8:{NFSU2_TR(0x5d0cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0cfb:{NFSU2_TR(0x5d0cfb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0cfc:{NFSU2_TR(0x5d0cfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d0cff:{NFSU2_TR(0x5d0cff);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5d0d02:{NFSU2_TR(0x5d0d02);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d0d04:{NFSU2_TR(0x5d0d04);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5d0e5c;}}
}
B5d0d0a:L5d0d0a:{c.instructions+=4;NFSU2_TR(0x5d0d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d0d0d:{NFSU2_TR(0x5d0d0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d0d0f:{NFSU2_TR(0x5d0d0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d0d12:{NFSU2_TR(0x5d0d12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d0d18;}}
}
B5d0d14:L5d0d14:{c.instructions+=2;NFSU2_TR(0x5d0d14);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d0d16:{NFSU2_TR(0x5d0d16);
{goto L5d0d20;}
}
B5d0d18:L5d0d18:{c.instructions+=3;NFSU2_TR(0x5d0d18);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0d1b:{NFSU2_TR(0x5d0d1b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5d0d1d:{NFSU2_TR(0x5d0d1d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5d0d20:L5d0d20:{c.instructions+=3;NFSU2_TR(0x5d0d20);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5d0d21:{NFSU2_TR(0x5d0d21);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d0d23:{NFSU2_TR(0x5d0d23);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5d0d4e;}}
}
B5d0d25:L5d0d25:{c.instructions+=3;NFSU2_TR(0x5d0d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d0d28:{NFSU2_TR(0x5d0d28);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d0d2a:{NFSU2_TR(0x5d0d2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d0d30;}}
}
B5d0d2c:L5d0d2c:{c.instructions+=2;NFSU2_TR(0x5d0d2c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d0d2e:{NFSU2_TR(0x5d0d2e);
{goto L5d0d38;}
}
B5d0d30:L5d0d30:{c.instructions+=3;NFSU2_TR(0x5d0d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0d33:{NFSU2_TR(0x5d0d33);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5d0d35:{NFSU2_TR(0x5d0d35);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5d0d38:L5d0d38:{c.instructions+=7;NFSU2_TR(0x5d0d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d0d3b:{NFSU2_TR(0x5d0d3b);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffdull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5d0d3f:{NFSU2_TR(0x5d0d3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0d42:{NFSU2_TR(0x5d0d42);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0d43:{NFSU2_TR(0x5d0d43);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B5d0d46:{NFSU2_TR(0x5d0d46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0d47:{NFSU2_TR(0x5d0d47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0d4cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0b30u);}goto L5d0b30;}
}
B5d0d4c:L5d0d4c:{c.instructions+=1;NFSU2_TR(0x5d0d4c);
{goto L5d0d5c;}
}
B5d0d4e:L5d0d4e:{c.instructions+=3;NFSU2_TR(0x5d0d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0d51:{NFSU2_TR(0x5d0d51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5d0d53:{NFSU2_TR(0x5d0d53);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d0d5c;}}
}
B5d0d55:L5d0d55:{c.instructions+=2;NFSU2_TR(0x5d0d55);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5d0d59:{NFSU2_TR(0x5d0d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0d5c:L5d0d5c:{c.instructions+=11;NFSU2_TR(0x5d0d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0d5f:{NFSU2_TR(0x5d0d5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d0d62:{NFSU2_TR(0x5d0d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0d65:{NFSU2_TR(0x5d0d65);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B5d0d67:{NFSU2_TR(0x5d0d67);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B5d0d69:{NFSU2_TR(0x5d0d69);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5d0d6a:{NFSU2_TR(0x5d0d6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B5d0d6d:{NFSU2_TR(0x5d0d6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d0d70:{NFSU2_TR(0x5d0d70);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d0d73:{NFSU2_TR(0x5d0d73);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0d77:{NFSU2_TR(0x5d0d77);
if(r1(R+518)){{goto L5d0e59;}}
}
B5d0d7d:L5d0d7d:{c.instructions+=1;NFSU2_TR(0x5d0d7d);
__builtin_memmove((R+4),(R+4),4);
}
B5d0d80:L5d0d80:{c.instructions+=4;NFSU2_TR(0x5d0d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0d83:{NFSU2_TR(0x5d0d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B5d0d86:{NFSU2_TR(0x5d0d86);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d0d88:{NFSU2_TR(0x5d0d88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d0d91;}}
}
B5d0d8a:L5d0d8a:{c.instructions+=2;NFSU2_TR(0x5d0d8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5d0d8c:{NFSU2_TR(0x5d0d8c);
{goto L5d0e4c;}
}
B5d0d91:L5d0d91:{c.instructions+=3;NFSU2_TR(0x5d0d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0d94:{NFSU2_TR(0x5d0d94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B5d0d96:{NFSU2_TR(0x5d0d96);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d0db5;}}
}
B5d0d98:L5d0d98:{c.instructions+=1;NFSU2_TR(0x5d0d98);
{goto L5d0da0;}
}
B5d0da0:L5d0da0:{c.instructions+=5;NFSU2_TR(0x5d0da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0da3:{NFSU2_TR(0x5d0da3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B5d0da6:{NFSU2_TR(0x5d0da6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d0da9:{NFSU2_TR(0x5d0da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5d0dac:{NFSU2_TR(0x5d0dac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d0db5;}}
}
B5d0dae:L5d0dae:{c.instructions+=4;NFSU2_TR(0x5d0dae);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5d0daf:{NFSU2_TR(0x5d0daf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B5d0db1:{NFSU2_TR(0x5d0db1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5d0db3:{NFSU2_TR(0x5d0db3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0da0u);}goto L5d0da0;}}
}
B5d0db5:L5d0db5:{c.instructions+=4;NFSU2_TR(0x5d0db5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d0db7:{NFSU2_TR(0x5d0db7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d0dba:{NFSU2_TR(0x5d0dba);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0dbe:{NFSU2_TR(0x5d0dbe);
if(r1(R+518)){{goto L5d0e59;}}
}
B5d0dc4:L5d0dc4:{c.instructions+=4;NFSU2_TR(0x5d0dc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0dc7:{NFSU2_TR(0x5d0dc7);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+28))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B5d0dca:{NFSU2_TR(0x5d0dca);
__builtin_memmove((R+0),(R+8),4);
}
B5d0dcc:{NFSU2_TR(0x5d0dcc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d0ded;}}
}
B5d0dce:L5d0dce:{c.instructions+=1;NFSU2_TR(0x5d0dce);
__builtin_memmove((R+28),(R+28),4);
}
B5d0dd0:L5d0dd0:{c.instructions+=7;NFSU2_TR(0x5d0dd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d0dd2:{NFSU2_TR(0x5d0dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0dd5:{NFSU2_TR(0x5d0dd5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B5d0dd8:{NFSU2_TR(0x5d0dd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5d0dda:{NFSU2_TR(0x5d0dda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5d0ddd:{NFSU2_TR(0x5d0ddd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5d0ddf:{NFSU2_TR(0x5d0ddf);
if(r1(R+518)){{goto L5d0ded;}}
}
B5d0de1:L5d0de1:{c.instructions+=5;NFSU2_TR(0x5d0de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0de4:{NFSU2_TR(0x5d0de4);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B5d0de8:{NFSU2_TR(0x5d0de8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5d0de9:{NFSU2_TR(0x5d0de9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d0deb:{NFSU2_TR(0x5d0deb);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0dd0u);}goto L5d0dd0;}}
}
B5d0ded:L5d0ded:{c.instructions+=5;NFSU2_TR(0x5d0ded);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0df0:{NFSU2_TR(0x5d0df0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d0df2:{NFSU2_TR(0x5d0df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d0df5:{NFSU2_TR(0x5d0df5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d0df8:{NFSU2_TR(0x5d0df8);
if(r1(R+518)){{goto L5d0e3b;}}
}
B5d0dfa:L5d0dfa:{c.instructions+=2;NFSU2_TR(0x5d0dfa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d0dfc:{NFSU2_TR(0x5d0dfc);
if(r1(R+518)){{goto L5d0e3b;}}
}
B5d0dfe:L5d0dfe:{c.instructions+=3;NFSU2_TR(0x5d0dfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5d0e00:{NFSU2_TR(0x5d0e00);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d0e02:{NFSU2_TR(0x5d0e02);
if(r1(R+518)){{goto L5d0e3b;}}
}
B5d0e04:L5d0e04:{c.instructions+=2;NFSU2_TR(0x5d0e04);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d0e06:{NFSU2_TR(0x5d0e06);
if(r1(R+518)){{goto L5d0e1a;}}
}
B5d0e08:L5d0e08:{c.instructions+=2;NFSU2_TR(0x5d0e08);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0e0a:{NFSU2_TR(0x5d0e0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0e0full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d06c0u);}goto L5d06c0;}
}
B5d0e0f:L5d0e0f:{c.instructions+=4;NFSU2_TR(0x5d0e0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0e12:{NFSU2_TR(0x5d0e12);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d0e16:{NFSU2_TR(0x5d0e16);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5d0e17:{NFSU2_TR(0x5d0e17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0e1a:L5d0e1a:{c.instructions+=12;NFSU2_TR(0x5d0e1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0e1d:{NFSU2_TR(0x5d0e1d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d0e1f:{NFSU2_TR(0x5d0e1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0e22:{NFSU2_TR(0x5d0e22);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5d0e24:{NFSU2_TR(0x5d0e24);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0e27:{NFSU2_TR(0x5d0e27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d0e29:{NFSU2_TR(0x5d0e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0e2c:{NFSU2_TR(0x5d0e2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0e2f:{NFSU2_TR(0x5d0e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0e32:{NFSU2_TR(0x5d0e32);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0e35:{NFSU2_TR(0x5d0e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0e38:{NFSU2_TR(0x5d0e38);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0e3b:L5d0e3b:{c.instructions+=5;NFSU2_TR(0x5d0e3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0e3e:{NFSU2_TR(0x5d0e3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0e41:{NFSU2_TR(0x5d0e41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d0e44:{NFSU2_TR(0x5d0e44);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d0e48:{NFSU2_TR(0x5d0e48);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5d0e4c:L5d0e4c:{c.instructions+=3;NFSU2_TR(0x5d0e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0e4f:{NFSU2_TR(0x5d0e4f);
u8 U[24];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+28))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B5d0e53:{NFSU2_TR(0x5d0e53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0d80u);}goto L5d0d80;}}
}
B5d0e59:L5d0e59:{c.instructions+=1;NFSU2_TR(0x5d0e59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d0e5c:L5d0e5c:{c.instructions+=8;NFSU2_TR(0x5d0e5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5d0e60:{NFSU2_TR(0x5d0e60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d0e63:{NFSU2_TR(0x5d0e63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0e66:{NFSU2_TR(0x5d0e66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d0e69:{NFSU2_TR(0x5d0e69);
__builtin_memmove((R+0),(R+8),4);
}
B5d0e6b:{NFSU2_TR(0x5d0e6b);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B5d0e6d:{NFSU2_TR(0x5d0e6d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d0e6f:{NFSU2_TR(0x5d0e6f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5d0e7a;}}
}
B5d0e71:L5d0e71:{c.instructions+=4;NFSU2_TR(0x5d0e71);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B5d0e73:{NFSU2_TR(0x5d0e73);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B5d0e76:{NFSU2_TR(0x5d0e76);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B5d0e78:{NFSU2_TR(0x5d0e78);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B5d0e7a:L5d0e7a:{c.instructions+=7;NFSU2_TR(0x5d0e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0e7d:{NFSU2_TR(0x5d0e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B5d0e84:{NFSU2_TR(0x5d0e84);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B5d0e88:{NFSU2_TR(0x5d0e88);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0e8c:{NFSU2_TR(0x5d0e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d0e8f:{NFSU2_TR(0x5d0e8f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5d0e91:{NFSU2_TR(0x5d0e91);
if(r1(R+518)){{goto L5d0ea3;}}
}
B5d0e93:L5d0e93:{c.instructions+=3;NFSU2_TR(0x5d0e93);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d0e96:{NFSU2_TR(0x5d0e96);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d0e99:{NFSU2_TR(0x5d0e99);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5d0f06;}}
}
B5d0e9b:L5d0e9b:{c.instructions+=3;NFSU2_TR(0x5d0e9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0e9e:{NFSU2_TR(0x5d0e9e);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+28))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B5d0ea1:{NFSU2_TR(0x5d0ea1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0e93u);}goto L5d0e93;}}
}
B5d0ea3:L5d0ea3:{c.instructions+=6;NFSU2_TR(0x5d0ea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d0ea6:{NFSU2_TR(0x5d0ea6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0ea7:{NFSU2_TR(0x5d0ea7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0ea8:{NFSU2_TR(0x5d0ea8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d0eab:{NFSU2_TR(0x5d0eab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0eac:{NFSU2_TR(0x5d0eac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0eb1ull));
TAIL_STATIC(0x5ce090u,5ce);
}
B5d0eb1:L5d0eb1:{c.instructions+=4;NFSU2_TR(0x5d0eb1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0eb3:{NFSU2_TR(0x5d0eb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d0eb6:{NFSU2_TR(0x5d0eb6);
__builtin_memmove((R+20),(R+0),4);
}
B5d0eb8:{NFSU2_TR(0x5d0eb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0ebdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d06c0u);}goto L5d06c0;}
}
B5d0ebd:L5d0ebd:{c.instructions+=7;NFSU2_TR(0x5d0ebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0ec0:{NFSU2_TR(0x5d0ec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0ec3:{NFSU2_TR(0x5d0ec3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d0ec5:{NFSU2_TR(0x5d0ec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d0ec8:{NFSU2_TR(0x5d0ec8);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+28))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B5d0ecb:{NFSU2_TR(0x5d0ecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0ece:{NFSU2_TR(0x5d0ece);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d0ef2;}}
}
B5d0ed0:L5d0ed0:{c.instructions+=5;NFSU2_TR(0x5d0ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0ed3:{NFSU2_TR(0x5d0ed3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5d0ed6:{NFSU2_TR(0x5d0ed6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0eda:{NFSU2_TR(0x5d0eda);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d0edc:{NFSU2_TR(0x5d0edc);
if(r1(R+518)){{goto L5d0ef2;}}
}
B5d0ede:L5d0ede:{c.instructions+=6;NFSU2_TR(0x5d0ede);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d0ee1:{NFSU2_TR(0x5d0ee1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5d0ee2:{NFSU2_TR(0x5d0ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B5d0ee9:{NFSU2_TR(0x5d0ee9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0eed:{NFSU2_TR(0x5d0eed);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+28))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B5d0ef0:{NFSU2_TR(0x5d0ef0);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0ed0u);}goto L5d0ed0;}}
}
B5d0ef2:L5d0ef2:{c.instructions+=9;NFSU2_TR(0x5d0ef2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0ef6:{NFSU2_TR(0x5d0ef6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d0ef7:{NFSU2_TR(0x5d0ef7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d0ef8:{NFSU2_TR(0x5d0ef8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d0ef9:{NFSU2_TR(0x5d0ef9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d0efb:{NFSU2_TR(0x5d0efb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5d0eff:{NFSU2_TR(0x5d0eff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d0f00:{NFSU2_TR(0x5d0f00);
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
B5d0f03:{NFSU2_TR(0x5d0f03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d0f06:L5d0f06:{c.instructions+=1;NFSU2_TR(0x5d0f06);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d0f0c;}}
}
B5d0f08:L5d0f08:{c.instructions+=2;NFSU2_TR(0x5d0f08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5d0f0a:{NFSU2_TR(0x5d0f0a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0ea3u);}goto L5d0ea3;}
}
B5d0f0c:L5d0f0c:{c.instructions+=9;NFSU2_TR(0x5d0f0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0f10:{NFSU2_TR(0x5d0f10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d0f12:{NFSU2_TR(0x5d0f12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d0f13:{NFSU2_TR(0x5d0f13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d0f14:{NFSU2_TR(0x5d0f14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d0f15:{NFSU2_TR(0x5d0f15);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5d0f19:{NFSU2_TR(0x5d0f19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d0f1a:{NFSU2_TR(0x5d0f1a);
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
B5d0f1d:{NFSU2_TR(0x5d0f1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d0f20:L5d0f20:{c.instructions+=7;NFSU2_TR(0x5d0f20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0f21:{NFSU2_TR(0x5d0f21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0f22:{NFSU2_TR(0x5d0f22);
__builtin_memmove((R+24),(R+4),4);
}
B5d0f24:{NFSU2_TR(0x5d0f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x968ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0f2a:{NFSU2_TR(0x5d0f2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d0f2c:{NFSU2_TR(0x5d0f2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x964ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d0f32:{NFSU2_TR(0x5d0f32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d0f38;}}
}
B5d0f34:L5d0f34:{c.instructions+=2;NFSU2_TR(0x5d0f34);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d0f36:{NFSU2_TR(0x5d0f36);
{goto L5d0f3a;}
}
B5d0f38:L5d0f38:{c.instructions+=1;NFSU2_TR(0x5d0f38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d0f3a:L5d0f3a:{c.instructions+=5;NFSU2_TR(0x5d0f3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0f3b:{NFSU2_TR(0x5d0f3b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0f3c:{NFSU2_TR(0x5d0f3c);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d0f40:{NFSU2_TR(0x5d0f40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0f41:{NFSU2_TR(0x5d0f41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0f46ull));
TAIL_STATIC(0x5cf140u,5cf);
}
B5d0f46:L5d0f46:{c.instructions+=7;NFSU2_TR(0x5d0f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x968ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d0f4c:{NFSU2_TR(0x5d0f4c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d0f50:{NFSU2_TR(0x5d0f50);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0f51:{NFSU2_TR(0x5d0f51);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0f55:{NFSU2_TR(0x5d0f55);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0f57:{NFSU2_TR(0x5d0f57);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x970ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d0f5d:{NFSU2_TR(0x5d0f5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0f62ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0c50u);}goto L5d0c50;}
}
B5d0f62:L5d0f62:{c.instructions+=6;NFSU2_TR(0x5d0f62);
w4(R+0,u32(0x1ull));
}
B5d0f67:{NFSU2_TR(0x5d0f67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x980ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0f6d:{NFSU2_TR(0x5d0f6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x984ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0f73:{NFSU2_TR(0x5d0f73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d0f74:{NFSU2_TR(0x5d0f74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d0f75:{NFSU2_TR(0x5d0f75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d0f80:L5d0f80:{c.instructions+=15;NFSU2_TR(0x5d0f80);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0f82:{NFSU2_TR(0x5d0f82);
u8 U[4];
w4(U+0,u32(0x77921bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0f87:{NFSU2_TR(0x5d0f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d0f8d:{NFSU2_TR(0x5d0f8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0f8e:{NFSU2_TR(0x5d0f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0f95:{NFSU2_TR(0x5d0f95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5d0f98:{NFSU2_TR(0x5d0f98);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0f99:{NFSU2_TR(0x5d0f99);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0f9a:{NFSU2_TR(0x5d0f9a);
__builtin_memmove((R+24),(R+4),4);
}
B5d0f9c:{NFSU2_TR(0x5d0f9c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0f9d:{NFSU2_TR(0x5d0f9d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5d0f9f:{NFSU2_TR(0x5d0f9f);
u8 U[4];
w4(U+0,u32(0x988ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0fa4:{NFSU2_TR(0x5d0fa4);
u8 U[4];
w4(U+0,u32(0x7a41b0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5d0faa:{NFSU2_TR(0x5d0faa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d0fad:{NFSU2_TR(0x5d0fad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0fb2ull));
TAIL_STATIC(0x575620u,575);
}
B5d0fb2:L5d0fb2:{c.instructions+=6;NFSU2_TR(0x5d0fb2);
__builtin_memmove((R+28),(R+0),4);
}
B5d0fb4:{NFSU2_TR(0x5d0fb4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d0fb7:{NFSU2_TR(0x5d0fb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0fbb:{NFSU2_TR(0x5d0fbb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d0fbd:{NFSU2_TR(0x5d0fbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0fc1:{NFSU2_TR(0x5d0fc1);
if(r1(R+518)){{goto L5d0fdc;}}
}
B5d0fc3:L5d0fc3:{c.instructions+=6;NFSU2_TR(0x5d0fc3);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d0fc7:{NFSU2_TR(0x5d0fc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0fc8:{NFSU2_TR(0x5d0fc8);
u8 U[4];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d0fcc:{NFSU2_TR(0x5d0fcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x960ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d0fd2:{NFSU2_TR(0x5d0fd2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0fd3:{NFSU2_TR(0x5d0fd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0fd8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d0bb0u);}goto L5d0bb0;}
}
B5d0fd8:L5d0fd8:{c.instructions+=2;NFSU2_TR(0x5d0fd8);
__builtin_memmove((R+0),(R+28),4);
}
B5d0fda:{NFSU2_TR(0x5d0fda);
{goto L5d0fde;}
}
B5d0fdc:L5d0fdc:{c.instructions+=1;NFSU2_TR(0x5d0fdc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d0fde:L5d0fde:{c.instructions+=5;NFSU2_TR(0x5d0fde);
u8 U[4];
w4(U+0,u32(0x7a4534ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0fe3:{NFSU2_TR(0x5d0fe3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0fe4:{NFSU2_TR(0x5d0fe4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d0fec:{NFSU2_TR(0x5d0fec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d0fef:{NFSU2_TR(0x5d0fef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0ff4ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d0ff4:L5d0ff4:{c.instructions+=2;NFSU2_TR(0x5d0ff4);
u8 U[4];
w4(U+0,u32(0x7a4534ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d0ff9:{NFSU2_TR(0x5d0ff9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0ffeull));
TAIL_STATIC(0x43db50u,43d);
}
B5d0ffe:L5d0ffe:{c.instructions+=1;NFSU2_TR(0x5d0ffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x5d1001u,5d1);
}
XIT:NFSU2_TR_EXIT(0x5d0,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
