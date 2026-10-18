#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_433(u8* __restrict R,Cpu& c);
u32 body_436(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_574(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_593(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_5d7(u8* __restrict R,Cpu& c);
u32 body_5db(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_5de(u8* __restrict R,Cpu& c);
u32 body_5df(u8* __restrict R,Cpu& c);
u32 body_5e1(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5e0,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5e0,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 page_5e0(Cpu& c){return body_5e0(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5e0(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5e0003:goto L5e0003;
case 0x5e0006:c.instructions+=6;goto B5e0006;
case 0x5e000a:c.instructions+=5;goto B5e000a;
case 0x5e000e:c.instructions+=4;goto B5e000e;
case 0x5e000f:c.instructions+=3;goto B5e000f;
case 0x5e0011:c.instructions+=2;goto B5e0011;
case 0x5e0015:c.instructions+=1;goto B5e0015;
case 0x5e001b:goto L5e001b;
case 0x5e0020:c.instructions+=2;goto B5e0020;
case 0x5e0028:c.instructions+=1;goto B5e0028;
case 0x5e002e:goto L5e002e;
case 0x5e0031:goto L5e0031;
case 0x5e0034:c.instructions+=3;goto B5e0034;
case 0x5e0036:c.instructions+=2;goto B5e0036;
case 0x5e0038:c.instructions+=1;goto B5e0038;
case 0x5e003a:goto L5e003a;
case 0x5e0040:goto L5e0040;
case 0x5e0045:c.instructions+=1;goto B5e0045;
case 0x5e0047:goto L5e0047;
case 0x5e0048:c.instructions+=2;goto B5e0048;
case 0x5e004a:c.instructions+=1;goto B5e004a;
case 0x5e004c:goto L5e004c;
case 0x5e0050:c.instructions+=1;goto B5e0050;
case 0x5e0052:goto L5e0052;
case 0x5e0057:c.instructions+=1;goto B5e0057;
case 0x5e0058:goto L5e0058;
case 0x5e005a:c.instructions+=6;goto B5e005a;
case 0x5e005b:c.instructions+=5;goto B5e005b;
case 0x5e0060:c.instructions+=4;goto B5e0060;
case 0x5e0062:c.instructions+=3;goto B5e0062;
case 0x5e0064:c.instructions+=2;goto B5e0064;
case 0x5e0066:c.instructions+=1;goto B5e0066;
case 0x5e0068:goto L5e0068;
case 0x5e006a:c.instructions+=1;goto B5e006a;
case 0x5e006c:goto L5e006c;
case 0x5e006f:c.instructions+=1;goto B5e006f;
case 0x5e0071:goto L5e0071;
case 0x5e0076:c.instructions+=2;goto B5e0076;
case 0x5e0078:c.instructions+=1;goto B5e0078;
case 0x5e007a:goto L5e007a;
case 0x5e007c:c.instructions+=3;goto B5e007c;
case 0x5e007e:c.instructions+=2;goto B5e007e;
case 0x5e0080:c.instructions+=1;goto B5e0080;
case 0x5e0082:goto L5e0082;
case 0x5e0087:c.instructions+=1;goto B5e0087;
case 0x5e0089:goto L5e0089;
case 0x5e008a:c.instructions+=2;goto B5e008a;
case 0x5e008c:c.instructions+=1;goto B5e008c;
case 0x5e008e:goto L5e008e;
case 0x5e0092:c.instructions+=1;goto B5e0092;
case 0x5e0094:goto L5e0094;
case 0x5e0099:c.instructions+=1;goto B5e0099;
case 0x5e009a:goto L5e009a;
case 0x5e009e:c.instructions+=7;goto B5e009e;
case 0x5e00a2:c.instructions+=6;goto B5e00a2;
case 0x5e00a6:c.instructions+=5;goto B5e00a6;
case 0x5e00a7:c.instructions+=4;goto B5e00a7;
case 0x5e00aa:c.instructions+=3;goto B5e00aa;
case 0x5e00ac:c.instructions+=2;goto B5e00ac;
case 0x5e00b0:c.instructions+=1;goto B5e00b0;
case 0x5e00b6:goto L5e00b6;
case 0x5e00b7:c.instructions+=6;goto B5e00b7;
case 0x5e00b8:c.instructions+=5;goto B5e00b8;
case 0x5e00b9:c.instructions+=4;goto B5e00b9;
case 0x5e00bb:c.instructions+=3;goto B5e00bb;
case 0x5e00bc:c.instructions+=2;goto B5e00bc;
case 0x5e00bf:c.instructions+=1;goto B5e00bf;
case 0x5e00c9:goto L5e00c9;
case 0x5e00ca:c.instructions+=17;goto B5e00ca;
case 0x5e00cb:c.instructions+=16;goto B5e00cb;
case 0x5e00cc:c.instructions+=15;goto B5e00cc;
case 0x5e00cd:c.instructions+=14;goto B5e00cd;
case 0x5e00ce:c.instructions+=13;goto B5e00ce;
case 0x5e00cf:c.instructions+=12;goto B5e00cf;
case 0x5e00d0:c.instructions+=11;goto B5e00d0;
case 0x5e00d1:c.instructions+=10;goto B5e00d1;
case 0x5e00d2:c.instructions+=9;goto B5e00d2;
case 0x5e00d3:c.instructions+=8;goto B5e00d3;
case 0x5e00d7:c.instructions+=7;goto B5e00d7;
case 0x5e00da:c.instructions+=6;goto B5e00da;
case 0x5e00db:c.instructions+=5;goto B5e00db;
case 0x5e00dd:c.instructions+=4;goto B5e00dd;
case 0x5e00df:c.instructions+=3;goto B5e00df;
case 0x5e00e0:c.instructions+=2;goto B5e00e0;
case 0x5e00e4:c.instructions+=1;goto B5e00e4;
case 0x5e00e6:goto L5e00e6;
case 0x5e00e9:c.instructions+=7;goto B5e00e9;
case 0x5e00eb:c.instructions+=6;goto B5e00eb;
case 0x5e00ec:c.instructions+=5;goto B5e00ec;
case 0x5e00ef:c.instructions+=4;goto B5e00ef;
case 0x5e00f0:c.instructions+=3;goto B5e00f0;
case 0x5e00f3:c.instructions+=2;goto B5e00f3;
case 0x5e00f4:c.instructions+=1;goto B5e00f4;
case 0x5e00f9:goto L5e00f9;
case 0x5e00fc:c.instructions+=2;goto B5e00fc;
case 0x5e00fe:c.instructions+=1;goto B5e00fe;
case 0x5e0100:goto L5e0100;
case 0x5e0104:c.instructions+=5;goto B5e0104;
case 0x5e0105:c.instructions+=4;goto B5e0105;
case 0x5e0108:c.instructions+=3;goto B5e0108;
case 0x5e0109:c.instructions+=2;goto B5e0109;
case 0x5e010b:c.instructions+=1;goto B5e010b;
case 0x5e0110:goto L5e0110;
case 0x5e0113:c.instructions+=2;goto B5e0113;
case 0x5e0115:c.instructions+=1;goto B5e0115;
case 0x5e0117:goto L5e0117;
case 0x5e0119:c.instructions+=2;goto B5e0119;
case 0x5e011b:c.instructions+=1;goto B5e011b;
case 0x5e011d:goto L5e011d;
case 0x5e0121:goto L5e0121;
case 0x5e0125:c.instructions+=3;goto B5e0125;
case 0x5e0126:c.instructions+=2;goto B5e0126;
case 0x5e0127:c.instructions+=1;goto B5e0127;
case 0x5e012c:goto L5e012c;
case 0x5e0130:c.instructions+=5;goto B5e0130;
case 0x5e0136:c.instructions+=4;goto B5e0136;
case 0x5e0138:c.instructions+=3;goto B5e0138;
case 0x5e013a:c.instructions+=2;goto B5e013a;
case 0x5e013d:c.instructions+=1;goto B5e013d;
case 0x5e013f:goto L5e013f;
case 0x5e0141:c.instructions+=2;goto B5e0141;
case 0x5e0143:c.instructions+=1;goto B5e0143;
case 0x5e0145:goto L5e0145;
case 0x5e0149:c.instructions+=1;goto B5e0149;
case 0x5e0150:goto L5e0150;
case 0x5e0154:c.instructions+=1;goto B5e0154;
case 0x5e0156:goto L5e0156;
case 0x5e0158:c.instructions+=2;goto B5e0158;
case 0x5e015a:c.instructions+=1;goto B5e015a;
case 0x5e015c:goto L5e015c;
case 0x5e015e:goto L5e015e;
case 0x5e015f:c.instructions+=5;goto B5e015f;
case 0x5e0160:c.instructions+=4;goto B5e0160;
case 0x5e0161:c.instructions+=3;goto B5e0161;
case 0x5e0162:c.instructions+=2;goto B5e0162;
case 0x5e0163:c.instructions+=1;goto B5e0163;
case 0x5e0166:goto L5e0166;
case 0x5e0168:c.instructions+=15;goto B5e0168;
case 0x5e016b:c.instructions+=14;goto B5e016b;
case 0x5e016d:c.instructions+=13;goto B5e016d;
case 0x5e0170:c.instructions+=12;goto B5e0170;
case 0x5e0172:c.instructions+=11;goto B5e0172;
case 0x5e0174:c.instructions+=10;goto B5e0174;
case 0x5e0177:c.instructions+=9;goto B5e0177;
case 0x5e0178:c.instructions+=8;goto B5e0178;
case 0x5e017a:c.instructions+=7;goto B5e017a;
case 0x5e017d:c.instructions+=6;goto B5e017d;
case 0x5e017f:c.instructions+=5;goto B5e017f;
case 0x5e0180:c.instructions+=4;goto B5e0180;
case 0x5e0181:c.instructions+=3;goto B5e0181;
case 0x5e0182:c.instructions+=2;goto B5e0182;
case 0x5e0183:c.instructions+=1;goto B5e0183;
case 0x5e0190:goto L5e0190;
case 0x5e0194:c.instructions+=2;goto B5e0194;
case 0x5e019a:c.instructions+=1;goto B5e019a;
case 0x5e019c:goto L5e019c;
case 0x5e019e:c.instructions+=1;goto B5e019e;
case 0x5e019f:goto L5e019f;
case 0x5e01a2:c.instructions+=3;goto B5e01a2;
case 0x5e01a5:c.instructions+=2;goto B5e01a5;
case 0x5e01a9:c.instructions+=1;goto B5e01a9;
case 0x5e01ab:goto L5e01ab;
case 0x5e01ae:c.instructions+=3;goto B5e01ae;
case 0x5e01b1:c.instructions+=2;goto B5e01b1;
case 0x5e01b3:c.instructions+=1;goto B5e01b3;
case 0x5e01b5:goto L5e01b5;
case 0x5e01b6:c.instructions+=3;goto B5e01b6;
case 0x5e01b7:c.instructions+=2;goto B5e01b7;
case 0x5e01b9:c.instructions+=1;goto B5e01b9;
case 0x5e01c0:goto L5e01c0;
case 0x5e01c3:c.instructions+=2;goto B5e01c3;
case 0x5e01c5:c.instructions+=1;goto B5e01c5;
case 0x5e01c7:goto L5e01c7;
case 0x5e01ca:c.instructions+=4;goto B5e01ca;
case 0x5e01d0:c.instructions+=3;goto B5e01d0;
case 0x5e01d2:c.instructions+=2;goto B5e01d2;
case 0x5e01d5:c.instructions+=1;goto B5e01d5;
case 0x5e01d7:goto L5e01d7;
case 0x5e01de:c.instructions+=2;goto B5e01de;
case 0x5e01e3:c.instructions+=1;goto B5e01e3;
case 0x5e01e5:goto L5e01e5;
case 0x5e01e7:goto L5e01e7;
case 0x5e01ea:c.instructions+=1;goto B5e01ea;
case 0x5e01ec:goto L5e01ec;
case 0x5e01f3:c.instructions+=6;goto B5e01f3;
case 0x5e01fa:c.instructions+=5;goto B5e01fa;
case 0x5e01fc:c.instructions+=4;goto B5e01fc;
case 0x5e01ff:c.instructions+=3;goto B5e01ff;
case 0x5e0201:c.instructions+=2;goto B5e0201;
case 0x5e0204:c.instructions+=1;goto B5e0204;
case 0x5e020b:goto L5e020b;
case 0x5e020e:c.instructions+=2;goto B5e020e;
case 0x5e020f:c.instructions+=1;goto B5e020f;
case 0x5e0211:goto L5e0211;
case 0x5e0212:c.instructions+=1;goto B5e0212;
case 0x5e0213:goto L5e0213;
case 0x5e0218:c.instructions+=1;goto B5e0218;
case 0x5e0220:goto L5e0220;
case 0x5e0224:c.instructions+=2;goto B5e0224;
case 0x5e022a:c.instructions+=1;goto B5e022a;
case 0x5e022c:goto L5e022c;
case 0x5e022e:c.instructions+=1;goto B5e022e;
case 0x5e022f:goto L5e022f;
case 0x5e0232:c.instructions+=3;goto B5e0232;
case 0x5e0235:c.instructions+=2;goto B5e0235;
case 0x5e0239:c.instructions+=1;goto B5e0239;
case 0x5e023b:goto L5e023b;
case 0x5e023e:c.instructions+=3;goto B5e023e;
case 0x5e0241:c.instructions+=2;goto B5e0241;
case 0x5e0243:c.instructions+=1;goto B5e0243;
case 0x5e0245:goto L5e0245;
case 0x5e0246:c.instructions+=1;goto B5e0246;
case 0x5e0248:goto L5e0248;
case 0x5e024a:c.instructions+=6;goto B5e024a;
case 0x5e024d:c.instructions+=5;goto B5e024d;
case 0x5e0250:c.instructions+=4;goto B5e0250;
case 0x5e0251:c.instructions+=3;goto B5e0251;
case 0x5e0253:c.instructions+=2;goto B5e0253;
case 0x5e0256:c.instructions+=1;goto B5e0256;
case 0x5e0258:goto L5e0258;
case 0x5e0259:goto L5e0259;
case 0x5e025e:c.instructions+=1;goto B5e025e;
case 0x5e0260:goto L5e0260;
case 0x5e0261:c.instructions+=10;goto B5e0261;
case 0x5e0262:c.instructions+=9;goto B5e0262;
case 0x5e0263:c.instructions+=8;goto B5e0263;
case 0x5e0265:c.instructions+=7;goto B5e0265;
case 0x5e0267:c.instructions+=6;goto B5e0267;
case 0x5e026d:c.instructions+=5;goto B5e026d;
case 0x5e0273:c.instructions+=4;goto B5e0273;
case 0x5e0276:c.instructions+=3;goto B5e0276;
case 0x5e0279:c.instructions+=2;goto B5e0279;
case 0x5e027e:c.instructions+=1;goto B5e027e;
case 0x5e0280:goto L5e0280;
case 0x5e0282:c.instructions+=12;goto B5e0282;
case 0x5e0285:c.instructions+=11;goto B5e0285;
case 0x5e0287:c.instructions+=10;goto B5e0287;
case 0x5e028a:c.instructions+=9;goto B5e028a;
case 0x5e028d:c.instructions+=8;goto B5e028d;
case 0x5e0290:c.instructions+=7;goto B5e0290;
case 0x5e0293:c.instructions+=6;goto B5e0293;
case 0x5e0295:c.instructions+=5;goto B5e0295;
case 0x5e0298:c.instructions+=4;goto B5e0298;
case 0x5e029b:c.instructions+=3;goto B5e029b;
case 0x5e029e:c.instructions+=2;goto B5e029e;
case 0x5e029f:c.instructions+=1;goto B5e029f;
case 0x5e02a1:goto L5e02a1;
case 0x5e02a6:goto L5e02a6;
case 0x5e02a8:c.instructions+=4;goto B5e02a8;
case 0x5e02a9:c.instructions+=3;goto B5e02a9;
case 0x5e02aa:c.instructions+=2;goto B5e02aa;
case 0x5e02ab:c.instructions+=1;goto B5e02ab;
case 0x5e02b0:goto L5e02b0;
case 0x5e02b1:c.instructions+=5;goto B5e02b1;
case 0x5e02b2:c.instructions+=4;goto B5e02b2;
case 0x5e02b3:c.instructions+=3;goto B5e02b3;
case 0x5e02b7:c.instructions+=2;goto B5e02b7;
case 0x5e02b9:c.instructions+=1;goto B5e02b9;
case 0x5e02bf:goto L5e02bf;
case 0x5e02c3:c.instructions+=2;goto B5e02c3;
case 0x5e02c5:c.instructions+=1;goto B5e02c5;
case 0x5e02cb:goto L5e02cb;
case 0x5e02d1:c.instructions+=2;goto B5e02d1;
case 0x5e02d6:c.instructions+=1;goto B5e02d6;
case 0x5e02db:goto L5e02db;
case 0x5e02dd:c.instructions+=1;goto B5e02dd;
case 0x5e02df:goto L5e02df;
case 0x5e02e0:goto L5e02e0;
case 0x5e02e3:c.instructions+=1;goto B5e02e3;
case 0x5e02e5:goto L5e02e5;
case 0x5e02e7:c.instructions+=2;goto B5e02e7;
case 0x5e02e9:c.instructions+=1;goto B5e02e9;
case 0x5e02eb:goto L5e02eb;
case 0x5e02f0:c.instructions+=2;goto B5e02f0;
case 0x5e02f1:c.instructions+=1;goto B5e02f1;
case 0x5e02f6:goto L5e02f6;
case 0x5e02f9:c.instructions+=2;goto B5e02f9;
case 0x5e02fb:c.instructions+=1;goto B5e02fb;
case 0x5e02fd:goto L5e02fd;
case 0x5e0300:c.instructions+=13;goto B5e0300;
case 0x5e0303:c.instructions+=12;goto B5e0303;
case 0x5e030a:c.instructions+=11;goto B5e030a;
case 0x5e0310:c.instructions+=10;goto B5e0310;
case 0x5e0312:c.instructions+=9;goto B5e0312;
case 0x5e0317:c.instructions+=8;goto B5e0317;
case 0x5e031a:c.instructions+=7;goto B5e031a;
case 0x5e0320:c.instructions+=6;goto B5e0320;
case 0x5e0325:c.instructions+=5;goto B5e0325;
case 0x5e032b:c.instructions+=4;goto B5e032b;
case 0x5e032c:c.instructions+=3;goto B5e032c;
case 0x5e032e:c.instructions+=2;goto B5e032e;
case 0x5e0333:c.instructions+=1;goto B5e0333;
case 0x5e0335:goto L5e0335;
case 0x5e033a:goto L5e033a;
case 0x5e033b:c.instructions+=4;goto B5e033b;
case 0x5e033c:c.instructions+=3;goto B5e033c;
case 0x5e0341:c.instructions+=2;goto B5e0341;
case 0x5e0342:c.instructions+=1;goto B5e0342;
case 0x5e0343:goto L5e0343;
case 0x5e0346:c.instructions+=7;goto B5e0346;
case 0x5e0347:c.instructions+=6;goto B5e0347;
case 0x5e0348:c.instructions+=5;goto B5e0348;
case 0x5e034b:c.instructions+=4;goto B5e034b;
case 0x5e034c:c.instructions+=3;goto B5e034c;
case 0x5e0351:c.instructions+=2;goto B5e0351;
case 0x5e0352:c.instructions+=1;goto B5e0352;
case 0x5e0353:goto L5e0353;
case 0x5e0354:c.instructions+=4;goto B5e0354;
case 0x5e0355:c.instructions+=3;goto B5e0355;
case 0x5e0357:c.instructions+=2;goto B5e0357;
case 0x5e0358:c.instructions+=1;goto B5e0358;
case 0x5e0360:goto L5e0360;
case 0x5e0365:c.instructions+=2;goto B5e0365;
case 0x5e0366:c.instructions+=1;goto B5e0366;
case 0x5e036b:goto L5e036b;
case 0x5e036d:c.instructions+=4;goto B5e036d;
case 0x5e0370:c.instructions+=3;goto B5e0370;
case 0x5e0372:c.instructions+=2;goto B5e0372;
case 0x5e0374:c.instructions+=1;goto B5e0374;
case 0x5e0376:goto L5e0376;
case 0x5e0377:c.instructions+=2;goto B5e0377;
case 0x5e037c:c.instructions+=1;goto B5e037c;
case 0x5e037e:goto L5e037e;
case 0x5e0380:goto L5e0380;
case 0x5e0384:c.instructions+=11;goto B5e0384;
case 0x5e0387:c.instructions+=10;goto B5e0387;
case 0x5e038a:c.instructions+=9;goto B5e038a;
case 0x5e0390:c.instructions+=8;goto B5e0390;
case 0x5e0393:c.instructions+=7;goto B5e0393;
case 0x5e0395:c.instructions+=6;goto B5e0395;
case 0x5e0398:c.instructions+=5;goto B5e0398;
case 0x5e039b:c.instructions+=4;goto B5e039b;
case 0x5e039d:c.instructions+=3;goto B5e039d;
case 0x5e03a3:c.instructions+=2;goto B5e03a3;
case 0x5e03a5:c.instructions+=1;goto B5e03a5;
case 0x5e03a6:goto L5e03a6;
case 0x5e03b0:goto L5e03b0;
case 0x5e03b3:c.instructions+=16;goto B5e03b3;
case 0x5e03b7:c.instructions+=15;goto B5e03b7;
case 0x5e03b9:c.instructions+=14;goto B5e03b9;
case 0x5e03bc:c.instructions+=13;goto B5e03bc;
case 0x5e03bf:c.instructions+=12;goto B5e03bf;
case 0x5e03c0:c.instructions+=11;goto B5e03c0;
case 0x5e03c4:c.instructions+=10;goto B5e03c4;
case 0x5e03c8:c.instructions+=9;goto B5e03c8;
case 0x5e03c9:c.instructions+=8;goto B5e03c9;
case 0x5e03cd:c.instructions+=7;goto B5e03cd;
case 0x5e03d4:c.instructions+=6;goto B5e03d4;
case 0x5e03d6:c.instructions+=5;goto B5e03d6;
case 0x5e03d7:c.instructions+=4;goto B5e03d7;
case 0x5e03d8:c.instructions+=3;goto B5e03d8;
case 0x5e03dd:c.instructions+=2;goto B5e03dd;
case 0x5e03e1:c.instructions+=1;goto B5e03e1;
case 0x5e03e7:goto L5e03e7;
case 0x5e03ea:c.instructions+=2;goto B5e03ea;
case 0x5e03ec:c.instructions+=1;goto B5e03ec;
case 0x5e03f2:goto L5e03f2;
case 0x5e03f6:c.instructions+=7;goto B5e03f6;
case 0x5e03fa:c.instructions+=6;goto B5e03fa;
case 0x5e03fd:c.instructions+=5;goto B5e03fd;
case 0x5e03fe:c.instructions+=4;goto B5e03fe;
case 0x5e0402:c.instructions+=3;goto B5e0402;
case 0x5e0403:c.instructions+=2;goto B5e0403;
case 0x5e0404:c.instructions+=1;goto B5e0404;
case 0x5e0409:goto L5e0409;
case 0x5e040b:c.instructions+=1;goto B5e040b;
case 0x5e0411:goto L5e0411;
case 0x5e0415:c.instructions+=6;goto B5e0415;
case 0x5e0418:c.instructions+=5;goto B5e0418;
case 0x5e041a:c.instructions+=4;goto B5e041a;
case 0x5e041c:c.instructions+=3;goto B5e041c;
case 0x5e041e:c.instructions+=2;goto B5e041e;
case 0x5e0422:c.instructions+=1;goto B5e0422;
case 0x5e0428:goto L5e0428;
case 0x5e042b:c.instructions+=2;goto B5e042b;
case 0x5e042f:c.instructions+=1;goto B5e042f;
case 0x5e0430:goto L5e0430;
case 0x5e0436:c.instructions+=1;goto B5e0436;
case 0x5e0438:goto L5e0438;
case 0x5e043b:c.instructions+=31;goto B5e043b;
case 0x5e043f:c.instructions+=30;goto B5e043f;
case 0x5e0442:c.instructions+=29;goto B5e0442;
case 0x5e0444:c.instructions+=28;goto B5e0444;
case 0x5e0447:c.instructions+=27;goto B5e0447;
case 0x5e044b:c.instructions+=26;goto B5e044b;
case 0x5e044d:c.instructions+=25;goto B5e044d;
case 0x5e0450:c.instructions+=24;goto B5e0450;
case 0x5e0454:c.instructions+=23;goto B5e0454;
case 0x5e0456:c.instructions+=22;goto B5e0456;
case 0x5e0459:c.instructions+=21;goto B5e0459;
case 0x5e045d:c.instructions+=20;goto B5e045d;
case 0x5e045f:c.instructions+=19;goto B5e045f;
case 0x5e0462:c.instructions+=18;goto B5e0462;
case 0x5e0464:c.instructions+=17;goto B5e0464;
case 0x5e0466:c.instructions+=16;goto B5e0466;
case 0x5e0468:c.instructions+=15;goto B5e0468;
case 0x5e046a:c.instructions+=14;goto B5e046a;
case 0x5e046c:c.instructions+=13;goto B5e046c;
case 0x5e046e:c.instructions+=12;goto B5e046e;
case 0x5e0470:c.instructions+=11;goto B5e0470;
case 0x5e0472:c.instructions+=10;goto B5e0472;
case 0x5e0474:c.instructions+=9;goto B5e0474;
case 0x5e0476:c.instructions+=8;goto B5e0476;
case 0x5e0478:c.instructions+=7;goto B5e0478;
case 0x5e047a:c.instructions+=6;goto B5e047a;
case 0x5e047c:c.instructions+=5;goto B5e047c;
case 0x5e047e:c.instructions+=4;goto B5e047e;
case 0x5e0480:c.instructions+=3;goto B5e0480;
case 0x5e0483:c.instructions+=2;goto B5e0483;
case 0x5e0485:c.instructions+=1;goto B5e0485;
case 0x5e0487:goto L5e0487;
case 0x5e048a:c.instructions+=2;goto B5e048a;
case 0x5e048b:c.instructions+=1;goto B5e048b;
case 0x5e0490:goto L5e0490;
case 0x5e0493:c.instructions+=3;goto B5e0493;
case 0x5e0496:c.instructions+=2;goto B5e0496;
case 0x5e0498:c.instructions+=1;goto B5e0498;
case 0x5e049b:goto L5e049b;
case 0x5e049f:c.instructions+=5;goto B5e049f;
case 0x5e04a0:c.instructions+=4;goto B5e04a0;
case 0x5e04a3:c.instructions+=3;goto B5e04a3;
case 0x5e04a5:c.instructions+=2;goto B5e04a5;
case 0x5e04a9:c.instructions+=1;goto B5e04a9;
case 0x5e04ab:goto L5e04ab;
case 0x5e04b1:c.instructions+=1;goto B5e04b1;
case 0x5e04b3:goto L5e04b3;
case 0x5e04b4:c.instructions+=6;goto B5e04b4;
case 0x5e04b5:c.instructions+=5;goto B5e04b5;
case 0x5e04b6:c.instructions+=4;goto B5e04b6;
case 0x5e04b8:c.instructions+=3;goto B5e04b8;
case 0x5e04b9:c.instructions+=2;goto B5e04b9;
case 0x5e04bc:c.instructions+=1;goto B5e04bc;
case 0x5e04bd:goto L5e04bd;
case 0x5e04be:c.instructions+=7;goto B5e04be;
case 0x5e04bf:c.instructions+=6;goto B5e04bf;
case 0x5e04c0:c.instructions+=5;goto B5e04c0;
case 0x5e04c6:c.instructions+=4;goto B5e04c6;
case 0x5e04cb:c.instructions+=3;goto B5e04cb;
case 0x5e04cc:c.instructions+=2;goto B5e04cc;
case 0x5e04cf:c.instructions+=1;goto B5e04cf;
case 0x5e04d0:goto L5e04d0;
case 0x5e04d6:c.instructions+=2;goto B5e04d6;
case 0x5e04d8:c.instructions+=1;goto B5e04d8;
case 0x5e04da:goto L5e04da;
case 0x5e04db:c.instructions+=2;goto B5e04db;
case 0x5e04dd:c.instructions+=1;goto B5e04dd;
case 0x5e04e2:goto L5e04e2;
case 0x5e04e3:c.instructions+=1;goto B5e04e3;
case 0x5e04e8:goto L5e04e8;
case 0x5e04eb:c.instructions+=2;goto B5e04eb;
case 0x5e04f5:c.instructions+=1;goto B5e04f5;
case 0x5e04f6:goto L5e04f6;
case 0x5e0500:goto L5e0500;
case 0x5e0505:c.instructions+=2;goto B5e0505;
case 0x5e050a:c.instructions+=1;goto B5e050a;
case 0x5e050c:goto L5e050c;
case 0x5e050d:c.instructions+=1;goto B5e050d;
case 0x5e0510:goto L5e0510;
case 0x5e0512:c.instructions+=6;goto B5e0512;
case 0x5e0514:c.instructions+=5;goto B5e0514;
case 0x5e0517:c.instructions+=4;goto B5e0517;
case 0x5e0519:c.instructions+=3;goto B5e0519;
case 0x5e051c:c.instructions+=2;goto B5e051c;
case 0x5e051e:c.instructions+=1;goto B5e051e;
case 0x5e0523:goto L5e0523;
case 0x5e0528:c.instructions+=3;goto B5e0528;
case 0x5e0529:c.instructions+=2;goto B5e0529;
case 0x5e052a:c.instructions+=1;goto B5e052a;
case 0x5e052f:goto L5e052f;
case 0x5e0534:c.instructions+=3;goto B5e0534;
case 0x5e0537:c.instructions+=2;goto B5e0537;
case 0x5e053c:c.instructions+=1;goto B5e053c;
case 0x5e053e:goto L5e053e;
case 0x5e053f:goto L5e053f;
case 0x5e0544:c.instructions+=2;goto B5e0544;
case 0x5e0546:c.instructions+=1;goto B5e0546;
case 0x5e0548:goto L5e0548;
case 0x5e0549:c.instructions+=1;goto B5e0549;
case 0x5e054e:goto L5e054e;
case 0x5e0551:c.instructions+=1;goto B5e0551;
case 0x5e055b:goto L5e055b;
case 0x5e0560:goto L5e0560;
case 0x5e0562:c.instructions+=4;goto B5e0562;
case 0x5e0565:c.instructions+=3;goto B5e0565;
case 0x5e0567:c.instructions+=2;goto B5e0567;
case 0x5e056a:c.instructions+=1;goto B5e056a;
case 0x5e0570:goto L5e0570;
case 0x5e0573:c.instructions+=1;goto B5e0573;
case 0x5e0580:goto L5e0580;
case 0x5e0585:c.instructions+=2;goto B5e0585;
case 0x5e058a:c.instructions+=1;goto B5e058a;
case 0x5e058c:goto L5e058c;
case 0x5e058d:c.instructions+=1;goto B5e058d;
case 0x5e0590:goto L5e0590;
case 0x5e0592:c.instructions+=6;goto B5e0592;
case 0x5e0594:c.instructions+=5;goto B5e0594;
case 0x5e0597:c.instructions+=4;goto B5e0597;
case 0x5e0599:c.instructions+=3;goto B5e0599;
case 0x5e059c:c.instructions+=2;goto B5e059c;
case 0x5e059e:c.instructions+=1;goto B5e059e;
case 0x5e05a3:goto L5e05a3;
case 0x5e05a8:c.instructions+=3;goto B5e05a8;
case 0x5e05a9:c.instructions+=2;goto B5e05a9;
case 0x5e05aa:c.instructions+=1;goto B5e05aa;
case 0x5e05af:goto L5e05af;
case 0x5e05b4:c.instructions+=3;goto B5e05b4;
case 0x5e05b7:c.instructions+=2;goto B5e05b7;
case 0x5e05bc:c.instructions+=1;goto B5e05bc;
case 0x5e05be:goto L5e05be;
case 0x5e05bf:goto L5e05bf;
case 0x5e05c0:goto L5e05c0;
case 0x5e05c5:c.instructions+=2;goto B5e05c5;
case 0x5e05ca:c.instructions+=1;goto B5e05ca;
case 0x5e05cc:goto L5e05cc;
case 0x5e05d0:goto L5e05d0;
case 0x5e05d2:c.instructions+=8;goto B5e05d2;
case 0x5e05d4:c.instructions+=7;goto B5e05d4;
case 0x5e05d7:c.instructions+=6;goto B5e05d7;
case 0x5e05d9:c.instructions+=5;goto B5e05d9;
case 0x5e05dc:c.instructions+=4;goto B5e05dc;
case 0x5e05e1:c.instructions+=3;goto B5e05e1;
case 0x5e05e2:c.instructions+=2;goto B5e05e2;
case 0x5e05e3:c.instructions+=1;goto B5e05e3;
case 0x5e05e8:goto L5e05e8;
case 0x5e05ed:c.instructions+=3;goto B5e05ed;
case 0x5e05f0:c.instructions+=2;goto B5e05f0;
case 0x5e05f5:c.instructions+=1;goto B5e05f5;
case 0x5e05f7:goto L5e05f7;
case 0x5e05fc:c.instructions+=2;goto B5e05fc;
case 0x5e05fe:c.instructions+=1;goto B5e05fe;
case 0x5e0600:goto L5e0600;
case 0x5e0601:c.instructions+=1;goto B5e0601;
case 0x5e0606:goto L5e0606;
case 0x5e0609:c.instructions+=1;goto B5e0609;
case 0x5e0613:goto L5e0613;
case 0x5e0620:goto L5e0620;
case 0x5e0622:c.instructions+=17;goto B5e0622;
case 0x5e0627:c.instructions+=16;goto B5e0627;
case 0x5e062d:c.instructions+=15;goto B5e062d;
case 0x5e062e:c.instructions+=14;goto B5e062e;
case 0x5e0635:c.instructions+=13;goto B5e0635;
case 0x5e0636:c.instructions+=12;goto B5e0636;
case 0x5e0637:c.instructions+=11;goto B5e0637;
case 0x5e0638:c.instructions+=10;goto B5e0638;
case 0x5e0639:c.instructions+=9;goto B5e0639;
case 0x5e063a:c.instructions+=8;goto B5e063a;
case 0x5e063f:c.instructions+=7;goto B5e063f;
case 0x5e0644:c.instructions+=6;goto B5e0644;
case 0x5e0649:c.instructions+=5;goto B5e0649;
case 0x5e064b:c.instructions+=4;goto B5e064b;
case 0x5e064d:c.instructions+=3;goto B5e064d;
case 0x5e064e:c.instructions+=2;goto B5e064e;
case 0x5e0652:c.instructions+=1;goto B5e0652;
case 0x5e0657:goto L5e0657;
case 0x5e0659:c.instructions+=2;goto B5e0659;
case 0x5e065d:c.instructions+=1;goto B5e065d;
case 0x5e0662:goto L5e0662;
case 0x5e0664:goto L5e0664;
case 0x5e0667:c.instructions+=1;goto B5e0667;
case 0x5e0669:goto L5e0669;
case 0x5e0670:goto L5e0670;
case 0x5e0673:c.instructions+=1;goto B5e0673;
case 0x5e0675:goto L5e0675;
case 0x5e0678:c.instructions+=1;goto B5e0678;
case 0x5e067a:goto L5e067a;
case 0x5e067d:c.instructions+=1;goto B5e067d;
case 0x5e067f:goto L5e067f;
case 0x5e0682:c.instructions+=1;goto B5e0682;
case 0x5e0684:goto L5e0684;
case 0x5e068a:c.instructions+=1;goto B5e068a;
case 0x5e068c:goto L5e068c;
case 0x5e0692:c.instructions+=1;goto B5e0692;
case 0x5e0694:goto L5e0694;
case 0x5e0697:goto L5e0697;
case 0x5e0699:c.instructions+=1;goto B5e0699;
case 0x5e069b:goto L5e069b;
case 0x5e069e:c.instructions+=1;goto B5e069e;
case 0x5e06a0:goto L5e06a0;
case 0x5e06a1:c.instructions+=1;goto B5e06a1;
case 0x5e06a6:goto L5e06a6;
case 0x5e06a7:c.instructions+=6;goto B5e06a7;
case 0x5e06a9:c.instructions+=5;goto B5e06a9;
case 0x5e06ac:c.instructions+=4;goto B5e06ac;
case 0x5e06ae:c.instructions+=3;goto B5e06ae;
case 0x5e06b2:c.instructions+=2;goto B5e06b2;
case 0x5e06b3:c.instructions+=1;goto B5e06b3;
case 0x5e06b8:goto L5e06b8;
case 0x5e06bb:goto L5e06bb;
case 0x5e06bc:c.instructions+=2;goto B5e06bc;
case 0x5e06bf:c.instructions+=1;goto B5e06bf;
case 0x5e06c1:goto L5e06c1;
case 0x5e06c7:c.instructions+=3;goto B5e06c7;
case 0x5e06c8:c.instructions+=2;goto B5e06c8;
case 0x5e06ce:c.instructions+=1;goto B5e06ce;
case 0x5e06d0:goto L5e06d0;
case 0x5e06d4:c.instructions+=8;goto B5e06d4;
case 0x5e06d5:c.instructions+=7;goto B5e06d5;
case 0x5e06d6:c.instructions+=6;goto B5e06d6;
case 0x5e06d8:c.instructions+=5;goto B5e06d8;
case 0x5e06d9:c.instructions+=4;goto B5e06d9;
case 0x5e06da:c.instructions+=3;goto B5e06da;
case 0x5e06e1:c.instructions+=2;goto B5e06e1;
case 0x5e06e4:c.instructions+=1;goto B5e06e4;
case 0x5e0710:goto L5e0710;
case 0x5e0712:c.instructions+=14;goto B5e0712;
case 0x5e0717:c.instructions+=13;goto B5e0717;
case 0x5e071d:c.instructions+=12;goto B5e071d;
case 0x5e071e:c.instructions+=11;goto B5e071e;
case 0x5e0725:c.instructions+=10;goto B5e0725;
case 0x5e0726:c.instructions+=9;goto B5e0726;
case 0x5e0727:c.instructions+=8;goto B5e0727;
case 0x5e0728:c.instructions+=7;goto B5e0728;
case 0x5e0729:c.instructions+=6;goto B5e0729;
case 0x5e072a:c.instructions+=5;goto B5e072a;
case 0x5e072e:c.instructions+=4;goto B5e072e;
case 0x5e0736:c.instructions+=3;goto B5e0736;
case 0x5e0738:c.instructions+=2;goto B5e0738;
case 0x5e073d:c.instructions+=1;goto B5e073d;
case 0x5e0740:goto L5e0740;
case 0x5e0742:c.instructions+=1;goto B5e0742;
case 0x5e0747:goto L5e0747;
case 0x5e0748:c.instructions+=1;goto B5e0748;
case 0x5e074d:goto L5e074d;
case 0x5e0750:c.instructions+=3;goto B5e0750;
case 0x5e0756:c.instructions+=2;goto B5e0756;
case 0x5e0757:c.instructions+=1;goto B5e0757;
case 0x5e0759:goto L5e0759;
case 0x5e075c:c.instructions+=2;goto B5e075c;
case 0x5e075d:c.instructions+=1;goto B5e075d;
case 0x5e075f:goto L5e075f;
case 0x5e0763:c.instructions+=6;goto B5e0763;
case 0x5e0768:c.instructions+=5;goto B5e0768;
case 0x5e076d:c.instructions+=4;goto B5e076d;
case 0x5e076f:c.instructions+=3;goto B5e076f;
case 0x5e0770:c.instructions+=2;goto B5e0770;
case 0x5e0778:c.instructions+=1;goto B5e0778;
case 0x5e077d:goto L5e077d;
case 0x5e0781:c.instructions+=7;goto B5e0781;
case 0x5e0782:c.instructions+=6;goto B5e0782;
case 0x5e0783:c.instructions+=5;goto B5e0783;
case 0x5e0784:c.instructions+=4;goto B5e0784;
case 0x5e0785:c.instructions+=3;goto B5e0785;
case 0x5e078c:c.instructions+=2;goto B5e078c;
case 0x5e078f:c.instructions+=1;goto B5e078f;
case 0x5e0790:goto L5e0790;
case 0x5e0792:c.instructions+=8;goto B5e0792;
case 0x5e0797:c.instructions+=7;goto B5e0797;
case 0x5e079d:c.instructions+=6;goto B5e079d;
case 0x5e079e:c.instructions+=5;goto B5e079e;
case 0x5e07a5:c.instructions+=4;goto B5e07a5;
case 0x5e07a6:c.instructions+=3;goto B5e07a6;
case 0x5e07ab:c.instructions+=2;goto B5e07ab;
case 0x5e07ad:c.instructions+=1;goto B5e07ad;
case 0x5e07af:goto L5e07af;
case 0x5e07b4:c.instructions+=1;goto B5e07b4;
case 0x5e07b9:goto L5e07b9;
case 0x5e07bc:c.instructions+=4;goto B5e07bc;
case 0x5e07c0:c.instructions+=3;goto B5e07c0;
case 0x5e07c2:c.instructions+=2;goto B5e07c2;
case 0x5e07ca:c.instructions+=1;goto B5e07ca;
case 0x5e07cc:goto L5e07cc;
case 0x5e07ce:c.instructions+=1;goto B5e07ce;
case 0x5e07d3:goto L5e07d3;
case 0x5e07d8:c.instructions+=4;goto B5e07d8;
case 0x5e07dc:c.instructions+=3;goto B5e07dc;
case 0x5e07e3:c.instructions+=2;goto B5e07e3;
case 0x5e07e6:c.instructions+=1;goto B5e07e6;
case 0x5e07e7:goto L5e07e7;
case 0x5e07e9:c.instructions+=1;goto B5e07e9;
case 0x5e07ee:goto L5e07ee;
case 0x5e07f2:c.instructions+=3;goto B5e07f2;
case 0x5e07f9:c.instructions+=2;goto B5e07f9;
case 0x5e07fc:c.instructions+=1;goto B5e07fc;
case 0x5e0800:goto L5e0800;
case 0x5e0801:c.instructions+=4;goto B5e0801;
case 0x5e0803:c.instructions+=3;goto B5e0803;
case 0x5e0805:c.instructions+=2;goto B5e0805;
case 0x5e0807:c.instructions+=1;goto B5e0807;
case 0x5e0809:goto L5e0809;
case 0x5e0810:goto L5e0810;
case 0x5e0812:c.instructions+=4;goto B5e0812;
case 0x5e0815:c.instructions+=3;goto B5e0815;
case 0x5e0817:c.instructions+=2;goto B5e0817;
case 0x5e081a:c.instructions+=1;goto B5e081a;
case 0x5e081f:goto L5e081f;
case 0x5e0820:c.instructions+=1;goto B5e0820;
case 0x5e0825:goto L5e0825;
case 0x5e0827:c.instructions+=3;goto B5e0827;
case 0x5e082a:c.instructions+=2;goto B5e082a;
case 0x5e082c:c.instructions+=1;goto B5e082c;
case 0x5e082e:goto L5e082e;
case 0x5e082f:c.instructions+=1;goto B5e082f;
case 0x5e0830:goto L5e0830;
case 0x5e0831:c.instructions+=4;goto B5e0831;
case 0x5e0833:c.instructions+=3;goto B5e0833;
case 0x5e0835:c.instructions+=2;goto B5e0835;
case 0x5e0837:c.instructions+=1;goto B5e0837;
case 0x5e0839:goto L5e0839;
case 0x5e0840:goto L5e0840;
case 0x5e0842:c.instructions+=7;goto B5e0842;
case 0x5e0845:c.instructions+=6;goto B5e0845;
case 0x5e0847:c.instructions+=5;goto B5e0847;
case 0x5e0848:c.instructions+=4;goto B5e0848;
case 0x5e084b:c.instructions+=3;goto B5e084b;
case 0x5e0850:c.instructions+=2;goto B5e0850;
case 0x5e0851:c.instructions+=1;goto B5e0851;
case 0x5e0856:goto L5e0856;
case 0x5e0858:c.instructions+=3;goto B5e0858;
case 0x5e085b:c.instructions+=2;goto B5e085b;
case 0x5e085d:c.instructions+=1;goto B5e085d;
case 0x5e085f:goto L5e085f;
case 0x5e0860:c.instructions+=1;goto B5e0860;
case 0x5e0870:goto L5e0870;
case 0x5e0871:c.instructions+=4;goto B5e0871;
case 0x5e0873:c.instructions+=3;goto B5e0873;
case 0x5e0875:c.instructions+=2;goto B5e0875;
case 0x5e0877:c.instructions+=1;goto B5e0877;
case 0x5e0879:goto L5e0879;
case 0x5e0880:goto L5e0880;
case 0x5e0882:c.instructions+=7;goto B5e0882;
case 0x5e0885:c.instructions+=6;goto B5e0885;
case 0x5e0887:c.instructions+=5;goto B5e0887;
case 0x5e0888:c.instructions+=4;goto B5e0888;
case 0x5e088b:c.instructions+=3;goto B5e088b;
case 0x5e0890:c.instructions+=2;goto B5e0890;
case 0x5e0891:c.instructions+=1;goto B5e0891;
case 0x5e0896:goto L5e0896;
case 0x5e0898:c.instructions+=3;goto B5e0898;
case 0x5e089b:c.instructions+=2;goto B5e089b;
case 0x5e089d:c.instructions+=1;goto B5e089d;
case 0x5e089f:goto L5e089f;
case 0x5e08a0:c.instructions+=1;goto B5e08a0;
case 0x5e08b0:goto L5e08b0;
case 0x5e08b2:c.instructions+=12;goto B5e08b2;
case 0x5e08b7:c.instructions+=11;goto B5e08b7;
case 0x5e08bd:c.instructions+=10;goto B5e08bd;
case 0x5e08be:c.instructions+=9;goto B5e08be;
case 0x5e08c5:c.instructions+=8;goto B5e08c5;
case 0x5e08c6:c.instructions+=7;goto B5e08c6;
case 0x5e08c7:c.instructions+=6;goto B5e08c7;
case 0x5e08c9:c.instructions+=5;goto B5e08c9;
case 0x5e08cc:c.instructions+=4;goto B5e08cc;
case 0x5e08cd:c.instructions+=3;goto B5e08cd;
case 0x5e08cf:c.instructions+=2;goto B5e08cf;
case 0x5e08d4:c.instructions+=1;goto B5e08d4;
case 0x5e08d6:goto L5e08d6;
case 0x5e08d8:goto L5e08d8;
case 0x5e08de:c.instructions+=9;goto B5e08de;
case 0x5e08e4:c.instructions+=8;goto B5e08e4;
case 0x5e08eb:c.instructions+=7;goto B5e08eb;
case 0x5e08f2:c.instructions+=6;goto B5e08f2;
case 0x5e08f6:c.instructions+=5;goto B5e08f6;
case 0x5e08f8:c.instructions+=4;goto B5e08f8;
case 0x5e08fb:c.instructions+=3;goto B5e08fb;
case 0x5e08fd:c.instructions+=2;goto B5e08fd;
case 0x5e0905:c.instructions+=1;goto B5e0905;
case 0x5e090a:goto L5e090a;
case 0x5e090e:c.instructions+=6;goto B5e090e;
case 0x5e090f:c.instructions+=5;goto B5e090f;
case 0x5e0911:c.instructions+=4;goto B5e0911;
case 0x5e0912:c.instructions+=3;goto B5e0912;
case 0x5e0919:c.instructions+=2;goto B5e0919;
case 0x5e091c:c.instructions+=1;goto B5e091c;
case 0x5e0920:goto L5e0920;
case 0x5e0923:c.instructions+=2;goto B5e0923;
case 0x5e0925:c.instructions+=1;goto B5e0925;
case 0x5e0927:goto L5e0927;
case 0x5e0929:c.instructions+=2;goto B5e0929;
case 0x5e092b:c.instructions+=1;goto B5e092b;
case 0x5e092d:goto L5e092d;
case 0x5e0930:c.instructions+=2;goto B5e0930;
case 0x5e0932:c.instructions+=1;goto B5e0932;
case 0x5e0934:goto L5e0934;
case 0x5e093a:c.instructions+=1;goto B5e093a;
case 0x5e0941:goto L5e0941;
case 0x5e0944:c.instructions+=6;goto B5e0944;
case 0x5e0946:c.instructions+=5;goto B5e0946;
case 0x5e0949:c.instructions+=4;goto B5e0949;
case 0x5e094b:c.instructions+=3;goto B5e094b;
case 0x5e094c:c.instructions+=2;goto B5e094c;
case 0x5e094f:c.instructions+=1;goto B5e094f;
case 0x5e0954:goto L5e0954;
case 0x5e0955:c.instructions+=1;goto B5e0955;
case 0x5e0960:goto L5e0960;
case 0x5e0961:c.instructions+=3;goto B5e0961;
case 0x5e0966:c.instructions+=2;goto B5e0966;
case 0x5e0968:c.instructions+=1;goto B5e0968;
case 0x5e096a:goto L5e096a;
case 0x5e096b:c.instructions+=1;goto B5e096b;
case 0x5e0970:goto L5e0970;
case 0x5e0973:c.instructions+=1;goto B5e0973;
case 0x5e097d:goto L5e097d;
case 0x5e097e:c.instructions+=5;goto B5e097e;
case 0x5e0984:c.instructions+=4;goto B5e0984;
case 0x5e0985:c.instructions+=3;goto B5e0985;
case 0x5e0987:c.instructions+=2;goto B5e0987;
case 0x5e098c:c.instructions+=1;goto B5e098c;
case 0x5e0991:goto L5e0991;
case 0x5e0993:goto L5e0993;
case 0x5e0998:c.instructions+=1;goto B5e0998;
case 0x5e099d:goto L5e099d;
case 0x5e099f:c.instructions+=2;goto B5e099f;
case 0x5e09a3:c.instructions+=1;goto B5e09a3;
case 0x5e09a5:goto L5e09a5;
case 0x5e09a6:goto L5e09a6;
case 0x5e09a8:c.instructions+=6;goto B5e09a8;
case 0x5e09ab:c.instructions+=5;goto B5e09ab;
case 0x5e09ae:c.instructions+=4;goto B5e09ae;
case 0x5e09b0:c.instructions+=3;goto B5e09b0;
case 0x5e09b1:c.instructions+=2;goto B5e09b1;
case 0x5e09b4:c.instructions+=1;goto B5e09b4;
case 0x5e09b9:goto L5e09b9;
case 0x5e09bc:c.instructions+=3;goto B5e09bc;
case 0x5e09bd:c.instructions+=2;goto B5e09bd;
case 0x5e09c2:c.instructions+=1;goto B5e09c2;
case 0x5e09c7:goto L5e09c7;
case 0x5e09c9:c.instructions+=1;goto B5e09c9;
case 0x5e09cb:goto L5e09cb;
case 0x5e09cd:c.instructions+=1;goto B5e09cd;
case 0x5e09d2:goto L5e09d2;
case 0x5e09d3:c.instructions+=1;goto B5e09d3;
case 0x5e09d8:goto L5e09d8;
case 0x5e09db:goto L5e09db;
case 0x5e09df:c.instructions+=2;goto B5e09df;
case 0x5e09e1:c.instructions+=1;goto B5e09e1;
case 0x5e09e3:goto L5e09e3;
case 0x5e09e4:goto L5e09e4;
case 0x5e09e9:c.instructions+=1;goto B5e09e9;
case 0x5e09ee:goto L5e09ee;
case 0x5e09f1:c.instructions+=4;goto B5e09f1;
case 0x5e09f2:c.instructions+=3;goto B5e09f2;
case 0x5e09f3:c.instructions+=2;goto B5e09f3;
case 0x5e09f4:c.instructions+=1;goto B5e09f4;
case 0x5e0a00:goto L5e0a00;
case 0x5e0a01:c.instructions+=4;goto B5e0a01;
case 0x5e0a02:c.instructions+=3;goto B5e0a02;
case 0x5e0a08:c.instructions+=2;goto B5e0a08;
case 0x5e0a0d:c.instructions+=1;goto B5e0a0d;
case 0x5e0a12:goto L5e0a12;
case 0x5e0a14:c.instructions+=2;goto B5e0a14;
case 0x5e0a18:c.instructions+=1;goto B5e0a18;
case 0x5e0a1a:goto L5e0a1a;
case 0x5e0a1b:c.instructions+=2;goto B5e0a1b;
case 0x5e0a1c:c.instructions+=1;goto B5e0a1c;
case 0x5e0a20:goto L5e0a20;
case 0x5e0a23:c.instructions+=3;goto B5e0a23;
case 0x5e0a27:c.instructions+=2;goto B5e0a27;
case 0x5e0a29:c.instructions+=1;goto B5e0a29;
case 0x5e0a2b:goto L5e0a2b;
case 0x5e0a2e:c.instructions+=4;goto B5e0a2e;
case 0x5e0a30:c.instructions+=3;goto B5e0a30;
case 0x5e0a31:c.instructions+=2;goto B5e0a31;
case 0x5e0a34:c.instructions+=1;goto B5e0a34;
case 0x5e0a39:goto L5e0a39;
case 0x5e0a3c:c.instructions+=3;goto B5e0a3c;
case 0x5e0a3d:c.instructions+=2;goto B5e0a3d;
case 0x5e0a42:c.instructions+=1;goto B5e0a42;
case 0x5e0a47:goto L5e0a47;
case 0x5e0a49:c.instructions+=1;goto B5e0a49;
case 0x5e0a4e:goto L5e0a4e;
case 0x5e0a4f:c.instructions+=1;goto B5e0a4f;
case 0x5e0a54:goto L5e0a54;
case 0x5e0a58:c.instructions+=1;goto B5e0a58;
case 0x5e0a5b:goto L5e0a5b;
case 0x5e0a5d:c.instructions+=2;goto B5e0a5d;
case 0x5e0a5f:c.instructions+=1;goto B5e0a5f;
case 0x5e0a61:goto L5e0a61;
case 0x5e0a62:c.instructions+=1;goto B5e0a62;
case 0x5e0a63:goto L5e0a63;
case 0x5e0a64:c.instructions+=2;goto B5e0a64;
case 0x5e0a65:c.instructions+=1;goto B5e0a65;
case 0x5e0a70:goto L5e0a70;
case 0x5e0a71:c.instructions+=16;goto B5e0a71;
case 0x5e0a73:c.instructions+=15;goto B5e0a73;
case 0x5e0a76:c.instructions+=14;goto B5e0a76;
case 0x5e0a78:c.instructions+=13;goto B5e0a78;
case 0x5e0a7d:c.instructions+=12;goto B5e0a7d;
case 0x5e0a83:c.instructions+=11;goto B5e0a83;
case 0x5e0a84:c.instructions+=10;goto B5e0a84;
case 0x5e0a8b:c.instructions+=9;goto B5e0a8b;
case 0x5e0a8e:c.instructions+=8;goto B5e0a8e;
case 0x5e0a8f:c.instructions+=7;goto B5e0a8f;
case 0x5e0a90:c.instructions+=6;goto B5e0a90;
case 0x5e0a94:c.instructions+=5;goto B5e0a94;
case 0x5e0a97:c.instructions+=4;goto B5e0a97;
case 0x5e0a9a:c.instructions+=3;goto B5e0a9a;
case 0x5e0a9c:c.instructions+=2;goto B5e0a9c;
case 0x5e0aa4:c.instructions+=1;goto B5e0aa4;
case 0x5e0aa6:goto L5e0aa6;
case 0x5e0aa8:c.instructions+=8;goto B5e0aa8;
case 0x5e0aab:c.instructions+=7;goto B5e0aab;
case 0x5e0aad:c.instructions+=6;goto B5e0aad;
case 0x5e0ab0:c.instructions+=5;goto B5e0ab0;
case 0x5e0ab2:c.instructions+=4;goto B5e0ab2;
case 0x5e0ab5:c.instructions+=3;goto B5e0ab5;
case 0x5e0ab8:c.instructions+=2;goto B5e0ab8;
case 0x5e0aba:c.instructions+=1;goto B5e0aba;
case 0x5e0abc:goto L5e0abc;
case 0x5e0abe:c.instructions+=2;goto B5e0abe;
case 0x5e0ac0:c.instructions+=1;goto B5e0ac0;
case 0x5e0ac2:goto L5e0ac2;
case 0x5e0ac5:c.instructions+=2;goto B5e0ac5;
case 0x5e0ac7:c.instructions+=1;goto B5e0ac7;
case 0x5e0ac9:goto L5e0ac9;
case 0x5e0acf:c.instructions+=1;goto B5e0acf;
case 0x5e0ad6:goto L5e0ad6;
case 0x5e0ad9:c.instructions+=6;goto B5e0ad9;
case 0x5e0adb:c.instructions+=5;goto B5e0adb;
case 0x5e0ade:c.instructions+=4;goto B5e0ade;
case 0x5e0ae0:c.instructions+=3;goto B5e0ae0;
case 0x5e0ae1:c.instructions+=2;goto B5e0ae1;
case 0x5e0ae4:c.instructions+=1;goto B5e0ae4;
case 0x5e0ae9:goto L5e0ae9;
case 0x5e0aee:c.instructions+=3;goto B5e0aee;
case 0x5e0aef:c.instructions+=2;goto B5e0aef;
case 0x5e0af0:c.instructions+=1;goto B5e0af0;
case 0x5e0af5:goto L5e0af5;
case 0x5e0af7:c.instructions+=3;goto B5e0af7;
case 0x5e0afa:c.instructions+=2;goto B5e0afa;
case 0x5e0afc:c.instructions+=1;goto B5e0afc;
case 0x5e0afe:goto L5e0afe;
case 0x5e0b00:c.instructions+=3;goto B5e0b00;
case 0x5e0b02:c.instructions+=2;goto B5e0b02;
case 0x5e0b0a:c.instructions+=1;goto B5e0b0a;
case 0x5e0b0c:goto L5e0b0c;
case 0x5e0b10:goto L5e0b10;
case 0x5e0b12:c.instructions+=5;goto B5e0b12;
case 0x5e0b15:c.instructions+=4;goto B5e0b15;
case 0x5e0b17:c.instructions+=3;goto B5e0b17;
case 0x5e0b18:c.instructions+=2;goto B5e0b18;
case 0x5e0b1b:c.instructions+=1;goto B5e0b1b;
case 0x5e0b20:goto L5e0b20;
case 0x5e0b22:c.instructions+=3;goto B5e0b22;
case 0x5e0b25:c.instructions+=2;goto B5e0b25;
case 0x5e0b27:c.instructions+=1;goto B5e0b27;
case 0x5e0b29:goto L5e0b29;
case 0x5e0b2d:c.instructions+=6;goto B5e0b2d;
case 0x5e0b2e:c.instructions+=5;goto B5e0b2e;
case 0x5e0b35:c.instructions+=4;goto B5e0b35;
case 0x5e0b36:c.instructions+=3;goto B5e0b36;
case 0x5e0b38:c.instructions+=2;goto B5e0b38;
case 0x5e0b39:c.instructions+=1;goto B5e0b39;
case 0x5e0b40:goto L5e0b40;
case 0x5e0b41:c.instructions+=28;goto B5e0b41;
case 0x5e0b43:c.instructions+=27;goto B5e0b43;
case 0x5e0b4a:c.instructions+=26;goto B5e0b4a;
case 0x5e0b4b:c.instructions+=25;goto B5e0b4b;
case 0x5e0b4d:c.instructions+=24;goto B5e0b4d;
case 0x5e0b50:c.instructions+=23;goto B5e0b50;
case 0x5e0b53:c.instructions+=22;goto B5e0b53;
case 0x5e0b56:c.instructions+=21;goto B5e0b56;
case 0x5e0b59:c.instructions+=20;goto B5e0b59;
case 0x5e0b5e:c.instructions+=19;goto B5e0b5e;
case 0x5e0b60:c.instructions+=18;goto B5e0b60;
case 0x5e0b66:c.instructions+=17;goto B5e0b66;
case 0x5e0b69:c.instructions+=16;goto B5e0b69;
case 0x5e0b6c:c.instructions+=15;goto B5e0b6c;
case 0x5e0b6d:c.instructions+=14;goto B5e0b6d;
case 0x5e0b70:c.instructions+=13;goto B5e0b70;
case 0x5e0b71:c.instructions+=12;goto B5e0b71;
case 0x5e0b77:c.instructions+=11;goto B5e0b77;
case 0x5e0b7d:c.instructions+=10;goto B5e0b7d;
case 0x5e0b83:c.instructions+=9;goto B5e0b83;
case 0x5e0b89:c.instructions+=8;goto B5e0b89;
case 0x5e0b8f:c.instructions+=7;goto B5e0b8f;
case 0x5e0b95:c.instructions+=6;goto B5e0b95;
case 0x5e0b9b:c.instructions+=5;goto B5e0b9b;
case 0x5e0ba1:c.instructions+=4;goto B5e0ba1;
case 0x5e0ba7:c.instructions+=3;goto B5e0ba7;
case 0x5e0bad:c.instructions+=2;goto B5e0bad;
case 0x5e0bb3:c.instructions+=1;goto B5e0bb3;
case 0x5e0bb8:goto L5e0bb8;
case 0x5e0bbb:c.instructions+=2;goto B5e0bbb;
case 0x5e0bbd:c.instructions+=1;goto B5e0bbd;
case 0x5e0bc2:goto L5e0bc2;
case 0x5e0bc5:c.instructions+=4;goto B5e0bc5;
case 0x5e0bc6:c.instructions+=3;goto B5e0bc6;
case 0x5e0bc9:c.instructions+=2;goto B5e0bc9;
case 0x5e0bca:c.instructions+=1;goto B5e0bca;
case 0x5e0bcf:goto L5e0bcf;
case 0x5e0bd2:c.instructions+=8;goto B5e0bd2;
case 0x5e0bd5:c.instructions+=7;goto B5e0bd5;
case 0x5e0bd8:c.instructions+=6;goto B5e0bd8;
case 0x5e0bdb:c.instructions+=5;goto B5e0bdb;
case 0x5e0bdc:c.instructions+=4;goto B5e0bdc;
case 0x5e0be3:c.instructions+=3;goto B5e0be3;
case 0x5e0be5:c.instructions+=2;goto B5e0be5;
case 0x5e0be6:c.instructions+=1;goto B5e0be6;
case 0x5e0bf0:goto L5e0bf0;
case 0x5e0bf1:c.instructions+=6;goto B5e0bf1;
case 0x5e0bf3:c.instructions+=5;goto B5e0bf3;
case 0x5e0bf6:c.instructions+=4;goto B5e0bf6;
case 0x5e0bf7:c.instructions+=3;goto B5e0bf7;
case 0x5e0bfa:c.instructions+=2;goto B5e0bfa;
case 0x5e0bfb:c.instructions+=1;goto B5e0bfb;
case 0x5e0c00:goto L5e0c00;
case 0x5e0c03:c.instructions+=2;goto B5e0c03;
case 0x5e0c05:c.instructions+=1;goto B5e0c05;
case 0x5e0c0a:goto L5e0c0a;
case 0x5e0c0d:c.instructions+=4;goto B5e0c0d;
case 0x5e0c0e:c.instructions+=3;goto B5e0c0e;
case 0x5e0c11:c.instructions+=2;goto B5e0c11;
case 0x5e0c12:c.instructions+=1;goto B5e0c12;
case 0x5e0c17:goto L5e0c17;
case 0x5e0c19:c.instructions+=11;goto B5e0c19;
case 0x5e0c1c:c.instructions+=10;goto B5e0c1c;
case 0x5e0c1f:c.instructions+=9;goto B5e0c1f;
case 0x5e0c22:c.instructions+=8;goto B5e0c22;
case 0x5e0c29:c.instructions+=7;goto B5e0c29;
case 0x5e0c2b:c.instructions+=6;goto B5e0c2b;
case 0x5e0c2e:c.instructions+=5;goto B5e0c2e;
case 0x5e0c30:c.instructions+=4;goto B5e0c30;
case 0x5e0c33:c.instructions+=3;goto B5e0c33;
case 0x5e0c36:c.instructions+=2;goto B5e0c36;
case 0x5e0c37:c.instructions+=1;goto B5e0c37;
case 0x5e0c40:goto L5e0c40;
case 0x5e0c41:c.instructions+=7;goto B5e0c41;
case 0x5e0c42:c.instructions+=6;goto B5e0c42;
case 0x5e0c44:c.instructions+=5;goto B5e0c44;
case 0x5e0c47:c.instructions+=4;goto B5e0c47;
case 0x5e0c4a:c.instructions+=3;goto B5e0c4a;
case 0x5e0c4c:c.instructions+=2;goto B5e0c4c;
case 0x5e0c4d:c.instructions+=1;goto B5e0c4d;
case 0x5e0c4f:goto L5e0c4f;
case 0x5e0c50:goto L5e0c50;
case 0x5e0c52:c.instructions+=1;goto B5e0c52;
case 0x5e0c57:goto L5e0c57;
case 0x5e0c59:c.instructions+=1;goto B5e0c59;
case 0x5e0c5b:goto L5e0c5b;
case 0x5e0c5e:c.instructions+=3;goto B5e0c5e;
case 0x5e0c61:c.instructions+=2;goto B5e0c61;
case 0x5e0c63:c.instructions+=1;goto B5e0c63;
case 0x5e0c65:goto L5e0c65;
case 0x5e0c68:c.instructions+=2;goto B5e0c68;
case 0x5e0c6a:c.instructions+=1;goto B5e0c6a;
case 0x5e0c6c:goto L5e0c6c;
case 0x5e0c6d:c.instructions+=1;goto B5e0c6d;
case 0x5e0c72:goto L5e0c72;
case 0x5e0c75:goto L5e0c75;
case 0x5e0c77:c.instructions+=2;goto B5e0c77;
case 0x5e0c79:c.instructions+=1;goto B5e0c79;
case 0x5e0c7b:goto L5e0c7b;
case 0x5e0c80:c.instructions+=2;goto B5e0c80;
case 0x5e0c82:c.instructions+=1;goto B5e0c82;
case 0x5e0c87:goto L5e0c87;
case 0x5e0c88:c.instructions+=3;goto B5e0c88;
case 0x5e0c89:c.instructions+=2;goto B5e0c89;
case 0x5e0c8a:c.instructions+=1;goto B5e0c8a;
case 0x5e0c90:goto L5e0c90;
case 0x5e0c96:c.instructions+=11;goto B5e0c96;
case 0x5e0c98:c.instructions+=10;goto B5e0c98;
case 0x5e0c9d:c.instructions+=9;goto B5e0c9d;
case 0x5e0c9e:c.instructions+=8;goto B5e0c9e;
case 0x5e0ca5:c.instructions+=7;goto B5e0ca5;
case 0x5e0ca6:c.instructions+=6;goto B5e0ca6;
case 0x5e0ca7:c.instructions+=5;goto B5e0ca7;
case 0x5e0cab:c.instructions+=4;goto B5e0cab;
case 0x5e0caf:c.instructions+=3;goto B5e0caf;
case 0x5e0cb1:c.instructions+=2;goto B5e0cb1;
case 0x5e0cb3:c.instructions+=1;goto B5e0cb3;
case 0x5e0cb5:goto L5e0cb5;
case 0x5e0cba:c.instructions+=2;goto B5e0cba;
case 0x5e0cbf:c.instructions+=1;goto B5e0cbf;
case 0x5e0cc1:goto L5e0cc1;
case 0x5e0cc3:c.instructions+=2;goto B5e0cc3;
case 0x5e0cc8:c.instructions+=1;goto B5e0cc8;
case 0x5e0ccd:goto L5e0ccd;
case 0x5e0cd2:goto L5e0cd2;
case 0x5e0cd4:c.instructions+=8;goto B5e0cd4;
case 0x5e0cd6:c.instructions+=7;goto B5e0cd6;
case 0x5e0cd9:c.instructions+=6;goto B5e0cd9;
case 0x5e0cdb:c.instructions+=5;goto B5e0cdb;
case 0x5e0cde:c.instructions+=4;goto B5e0cde;
case 0x5e0ce2:c.instructions+=3;goto B5e0ce2;
case 0x5e0ce3:c.instructions+=2;goto B5e0ce3;
case 0x5e0ceb:c.instructions+=1;goto B5e0ceb;
case 0x5e0cf0:goto L5e0cf0;
case 0x5e0cf3:c.instructions+=6;goto B5e0cf3;
case 0x5e0cf6:c.instructions+=5;goto B5e0cf6;
case 0x5e0cf8:c.instructions+=4;goto B5e0cf8;
case 0x5e0cfb:c.instructions+=3;goto B5e0cfb;
case 0x5e0cfe:c.instructions+=2;goto B5e0cfe;
case 0x5e0d00:c.instructions+=1;goto B5e0d00;
case 0x5e0d02:goto L5e0d02;
case 0x5e0d08:c.instructions+=2;goto B5e0d08;
case 0x5e0d0b:c.instructions+=1;goto B5e0d0b;
case 0x5e0d0d:goto L5e0d0d;
case 0x5e0d10:c.instructions+=6;goto B5e0d10;
case 0x5e0d14:c.instructions+=5;goto B5e0d14;
case 0x5e0d15:c.instructions+=4;goto B5e0d15;
case 0x5e0d1c:c.instructions+=3;goto B5e0d1c;
case 0x5e0d1d:c.instructions+=2;goto B5e0d1d;
case 0x5e0d20:c.instructions+=1;goto B5e0d20;
case 0x5e0d30:goto L5e0d30;
case 0x5e0d35:c.instructions+=5;goto B5e0d35;
case 0x5e0d3b:c.instructions+=4;goto B5e0d3b;
case 0x5e0d3d:c.instructions+=3;goto B5e0d3d;
case 0x5e0d3e:c.instructions+=2;goto B5e0d3e;
case 0x5e0d40:c.instructions+=1;goto B5e0d40;
case 0x5e0d42:goto L5e0d42;
case 0x5e0d45:c.instructions+=2;goto B5e0d45;
case 0x5e0d47:c.instructions+=1;goto B5e0d47;
case 0x5e0d49:goto L5e0d49;
case 0x5e0d4b:c.instructions+=3;goto B5e0d4b;
case 0x5e0d4c:c.instructions+=2;goto B5e0d4c;
case 0x5e0d52:c.instructions+=1;goto B5e0d52;
case 0x5e0d55:goto L5e0d55;
case 0x5e0d56:c.instructions+=7;goto B5e0d56;
case 0x5e0d5d:c.instructions+=6;goto B5e0d5d;
case 0x5e0d5f:c.instructions+=5;goto B5e0d5f;
case 0x5e0d60:c.instructions+=4;goto B5e0d60;
case 0x5e0d63:c.instructions+=3;goto B5e0d63;
case 0x5e0d64:c.instructions+=2;goto B5e0d64;
case 0x5e0d6a:c.instructions+=1;goto B5e0d6a;
case 0x5e0d6f:goto L5e0d6f;
case 0x5e0d76:c.instructions+=5;goto B5e0d76;
case 0x5e0d78:c.instructions+=4;goto B5e0d78;
case 0x5e0d7c:c.instructions+=3;goto B5e0d7c;
case 0x5e0d7f:c.instructions+=2;goto B5e0d7f;
case 0x5e0d85:c.instructions+=1;goto B5e0d85;
case 0x5e0d8a:goto L5e0d8a;
case 0x5e0d8d:c.instructions+=4;goto B5e0d8d;
case 0x5e0d90:c.instructions+=3;goto B5e0d90;
case 0x5e0d94:c.instructions+=2;goto B5e0d94;
case 0x5e0d9a:c.instructions+=1;goto B5e0d9a;
case 0x5e0d9f:goto L5e0d9f;
case 0x5e0da2:c.instructions+=17;goto B5e0da2;
case 0x5e0da5:c.instructions+=16;goto B5e0da5;
case 0x5e0da8:c.instructions+=15;goto B5e0da8;
case 0x5e0daa:c.instructions+=14;goto B5e0daa;
case 0x5e0dac:c.instructions+=13;goto B5e0dac;
case 0x5e0dae:c.instructions+=12;goto B5e0dae;
case 0x5e0db2:c.instructions+=11;goto B5e0db2;
case 0x5e0db6:c.instructions+=10;goto B5e0db6;
case 0x5e0dba:c.instructions+=9;goto B5e0dba;
case 0x5e0dbc:c.instructions+=8;goto B5e0dbc;
case 0x5e0dc0:c.instructions+=7;goto B5e0dc0;
case 0x5e0dc3:c.instructions+=6;goto B5e0dc3;
case 0x5e0dc9:c.instructions+=5;goto B5e0dc9;
case 0x5e0dcd:c.instructions+=4;goto B5e0dcd;
case 0x5e0dd1:c.instructions+=3;goto B5e0dd1;
case 0x5e0dd5:c.instructions+=2;goto B5e0dd5;
case 0x5e0dd9:c.instructions+=1;goto B5e0dd9;
case 0x5e0dde:goto L5e0dde;
case 0x5e0de0:c.instructions+=2;goto B5e0de0;
case 0x5e0de4:c.instructions+=1;goto B5e0de4;
case 0x5e0dea:goto L5e0dea;
case 0x5e0df0:c.instructions+=4;goto B5e0df0;
case 0x5e0df4:c.instructions+=3;goto B5e0df4;
case 0x5e0df8:c.instructions+=2;goto B5e0df8;
case 0x5e0dfc:c.instructions+=1;goto B5e0dfc;
case 0x5e0e02:goto L5e0e02;
case 0x5e0e06:c.instructions+=13;goto B5e0e06;
case 0x5e0e0c:c.instructions+=12;goto B5e0e0c;
case 0x5e0e10:c.instructions+=11;goto B5e0e10;
case 0x5e0e14:c.instructions+=10;goto B5e0e14;
case 0x5e0e1a:c.instructions+=9;goto B5e0e1a;
case 0x5e0e1d:c.instructions+=8;goto B5e0e1d;
case 0x5e0e1f:c.instructions+=7;goto B5e0e1f;
case 0x5e0e22:c.instructions+=6;goto B5e0e22;
case 0x5e0e26:c.instructions+=5;goto B5e0e26;
case 0x5e0e28:c.instructions+=4;goto B5e0e28;
case 0x5e0e2a:c.instructions+=3;goto B5e0e2a;
case 0x5e0e30:c.instructions+=2;goto B5e0e30;
case 0x5e0e36:c.instructions+=1;goto B5e0e36;
case 0x5e0e3b:goto L5e0e3b;
case 0x5e0e3d:c.instructions+=8;goto B5e0e3d;
case 0x5e0e42:c.instructions+=7;goto B5e0e42;
case 0x5e0e44:c.instructions+=6;goto B5e0e44;
case 0x5e0e46:c.instructions+=5;goto B5e0e46;
case 0x5e0e4b:c.instructions+=4;goto B5e0e4b;
case 0x5e0e4d:c.instructions+=3;goto B5e0e4d;
case 0x5e0e53:c.instructions+=2;goto B5e0e53;
case 0x5e0e54:c.instructions+=1;goto B5e0e54;
case 0x5e0e59:goto L5e0e59;
case 0x5e0e5b:c.instructions+=12;goto B5e0e5b;
case 0x5e0e5e:c.instructions+=11;goto B5e0e5e;
case 0x5e0e60:c.instructions+=10;goto B5e0e60;
case 0x5e0e63:c.instructions+=9;goto B5e0e63;
case 0x5e0e65:c.instructions+=8;goto B5e0e65;
case 0x5e0e68:c.instructions+=7;goto B5e0e68;
case 0x5e0e6e:c.instructions+=6;goto B5e0e6e;
case 0x5e0e74:c.instructions+=5;goto B5e0e74;
case 0x5e0e75:c.instructions+=4;goto B5e0e75;
case 0x5e0e77:c.instructions+=3;goto B5e0e77;
case 0x5e0e79:c.instructions+=2;goto B5e0e79;
case 0x5e0e7c:c.instructions+=1;goto B5e0e7c;
case 0x5e0e81:goto L5e0e81;
case 0x5e0e84:c.instructions+=8;goto B5e0e84;
case 0x5e0e88:c.instructions+=7;goto B5e0e88;
case 0x5e0e8d:c.instructions+=6;goto B5e0e8d;
case 0x5e0e8f:c.instructions+=5;goto B5e0e8f;
case 0x5e0e94:c.instructions+=4;goto B5e0e94;
case 0x5e0e96:c.instructions+=3;goto B5e0e96;
case 0x5e0e9c:c.instructions+=2;goto B5e0e9c;
case 0x5e0e9d:c.instructions+=1;goto B5e0e9d;
case 0x5e0ea2:goto L5e0ea2;
case 0x5e0ea4:c.instructions+=10;goto B5e0ea4;
case 0x5e0ea6:c.instructions+=9;goto B5e0ea6;
case 0x5e0ea9:c.instructions+=8;goto B5e0ea9;
case 0x5e0eb1:c.instructions+=7;goto B5e0eb1;
case 0x5e0eb2:c.instructions+=6;goto B5e0eb2;
case 0x5e0eb4:c.instructions+=5;goto B5e0eb4;
case 0x5e0eb6:c.instructions+=4;goto B5e0eb6;
case 0x5e0eb9:c.instructions+=3;goto B5e0eb9;
case 0x5e0ebb:c.instructions+=2;goto B5e0ebb;
case 0x5e0ebd:c.instructions+=1;goto B5e0ebd;
case 0x5e0ebf:goto L5e0ebf;
case 0x5e0ec3:goto L5e0ec3;
case 0x5e0ec5:c.instructions+=1;goto B5e0ec5;
case 0x5e0ec7:goto L5e0ec7;
case 0x5e0ecb:c.instructions+=4;goto B5e0ecb;
case 0x5e0ecd:c.instructions+=3;goto B5e0ecd;
case 0x5e0ed0:c.instructions+=2;goto B5e0ed0;
case 0x5e0ed2:c.instructions+=1;goto B5e0ed2;
case 0x5e0ed6:goto L5e0ed6;
case 0x5e0ed8:c.instructions+=1;goto B5e0ed8;
case 0x5e0eda:goto L5e0eda;
case 0x5e0ede:c.instructions+=4;goto B5e0ede;
case 0x5e0ee0:c.instructions+=3;goto B5e0ee0;
case 0x5e0ee3:c.instructions+=2;goto B5e0ee3;
case 0x5e0ee5:c.instructions+=1;goto B5e0ee5;
case 0x5e0ee9:goto L5e0ee9;
case 0x5e0eeb:c.instructions+=1;goto B5e0eeb;
case 0x5e0eed:goto L5e0eed;
case 0x5e0ef1:c.instructions+=3;goto B5e0ef1;
case 0x5e0ef4:c.instructions+=2;goto B5e0ef4;
case 0x5e0ef6:c.instructions+=1;goto B5e0ef6;
case 0x5e0efa:goto L5e0efa;
case 0x5e0efe:c.instructions+=9;goto B5e0efe;
case 0x5e0f02:c.instructions+=8;goto B5e0f02;
case 0x5e0f04:c.instructions+=7;goto B5e0f04;
case 0x5e0f06:c.instructions+=6;goto B5e0f06;
case 0x5e0f09:c.instructions+=5;goto B5e0f09;
case 0x5e0f0c:c.instructions+=4;goto B5e0f0c;
case 0x5e0f0d:c.instructions+=3;goto B5e0f0d;
case 0x5e0f0f:c.instructions+=2;goto B5e0f0f;
case 0x5e0f11:c.instructions+=1;goto B5e0f11;
case 0x5e0f13:goto L5e0f13;
case 0x5e0f15:goto L5e0f15;
case 0x5e0f19:c.instructions+=9;goto B5e0f19;
case 0x5e0f1d:c.instructions+=8;goto B5e0f1d;
case 0x5e0f1f:c.instructions+=7;goto B5e0f1f;
case 0x5e0f20:c.instructions+=6;goto B5e0f20;
case 0x5e0f22:c.instructions+=5;goto B5e0f22;
case 0x5e0f25:c.instructions+=4;goto B5e0f25;
case 0x5e0f26:c.instructions+=3;goto B5e0f26;
case 0x5e0f28:c.instructions+=2;goto B5e0f28;
case 0x5e0f2a:c.instructions+=1;goto B5e0f2a;
case 0x5e0f2c:goto L5e0f2c;
case 0x5e0f2e:goto L5e0f2e;
case 0x5e0f31:c.instructions+=9;goto B5e0f31;
case 0x5e0f33:c.instructions+=8;goto B5e0f33;
case 0x5e0f36:c.instructions+=7;goto B5e0f36;
case 0x5e0f3b:c.instructions+=6;goto B5e0f3b;
case 0x5e0f3e:c.instructions+=5;goto B5e0f3e;
case 0x5e0f41:c.instructions+=4;goto B5e0f41;
case 0x5e0f43:c.instructions+=3;goto B5e0f43;
case 0x5e0f45:c.instructions+=2;goto B5e0f45;
case 0x5e0f47:c.instructions+=1;goto B5e0f47;
case 0x5e0f4d:goto L5e0f4d;
case 0x5e0f50:c.instructions+=6;goto B5e0f50;
case 0x5e0f53:c.instructions+=5;goto B5e0f53;
case 0x5e0f58:c.instructions+=4;goto B5e0f58;
case 0x5e0f5b:c.instructions+=3;goto B5e0f5b;
case 0x5e0f5f:c.instructions+=2;goto B5e0f5f;
case 0x5e0f61:c.instructions+=1;goto B5e0f61;
case 0x5e0f67:goto L5e0f67;
case 0x5e0f6a:c.instructions+=6;goto B5e0f6a;
case 0x5e0f6d:c.instructions+=5;goto B5e0f6d;
case 0x5e0f70:c.instructions+=4;goto B5e0f70;
case 0x5e0f74:c.instructions+=3;goto B5e0f74;
case 0x5e0f76:c.instructions+=2;goto B5e0f76;
case 0x5e0f79:c.instructions+=1;goto B5e0f79;
case 0x5e0f7f:goto L5e0f7f;
case 0x5e0f83:c.instructions+=11;goto B5e0f83;
case 0x5e0f85:c.instructions+=10;goto B5e0f85;
case 0x5e0f88:c.instructions+=9;goto B5e0f88;
case 0x5e0f8d:c.instructions+=8;goto B5e0f8d;
case 0x5e0f90:c.instructions+=7;goto B5e0f90;
case 0x5e0f94:c.instructions+=6;goto B5e0f94;
case 0x5e0f98:c.instructions+=5;goto B5e0f98;
case 0x5e0f9e:c.instructions+=4;goto B5e0f9e;
case 0x5e0fa2:c.instructions+=3;goto B5e0fa2;
case 0x5e0fa4:c.instructions+=2;goto B5e0fa4;
case 0x5e0fa7:c.instructions+=1;goto B5e0fa7;
case 0x5e0fad:goto L5e0fad;
case 0x5e0faf:c.instructions+=11;goto B5e0faf;
case 0x5e0fb2:c.instructions+=10;goto B5e0fb2;
case 0x5e0fb5:c.instructions+=9;goto B5e0fb5;
case 0x5e0fba:c.instructions+=8;goto B5e0fba;
case 0x5e0fbd:c.instructions+=7;goto B5e0fbd;
case 0x5e0fc1:c.instructions+=6;goto B5e0fc1;
case 0x5e0fc5:c.instructions+=5;goto B5e0fc5;
case 0x5e0fcb:c.instructions+=4;goto B5e0fcb;
case 0x5e0fcf:c.instructions+=3;goto B5e0fcf;
case 0x5e0fd1:c.instructions+=2;goto B5e0fd1;
case 0x5e0fd4:c.instructions+=1;goto B5e0fd4;
case 0x5e0fda:goto L5e0fda;
case 0x5e0fdc:c.instructions+=10;goto B5e0fdc;
case 0x5e0fdf:c.instructions+=9;goto B5e0fdf;
case 0x5e0fe2:c.instructions+=8;goto B5e0fe2;
case 0x5e0fe7:c.instructions+=7;goto B5e0fe7;
case 0x5e0fea:c.instructions+=6;goto B5e0fea;
case 0x5e0fee:c.instructions+=5;goto B5e0fee;
case 0x5e0ff2:c.instructions+=4;goto B5e0ff2;
case 0x5e0ff8:c.instructions+=3;goto B5e0ff8;
case 0x5e0ffc:c.instructions+=2;goto B5e0ffc;
case 0x5e0ffe:c.instructions+=1;goto B5e0ffe;
default:missing_instruction(c.pc);}
B5e0003:L5e0003:{c.instructions+=7;NFSU2_TR(0x5e0003);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B5e0006:{NFSU2_TR(0x5e0006);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e000a:{NFSU2_TR(0x5e000a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5e000e:{NFSU2_TR(0x5e000e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e000f:{NFSU2_TR(0x5e000f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e0011:{NFSU2_TR(0x5e0011);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0015:{NFSU2_TR(0x5e0015);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5dff90u,5df);}
}
B5e001b:L5e001b:{c.instructions+=3;NFSU2_TR(0x5e001b);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),u16(0x0ull)));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5e0020:{NFSU2_TR(0x5e0020);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e0028:{NFSU2_TR(0x5e0028);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e00b6;}}
}
B5e002e:L5e002e:{c.instructions+=1;NFSU2_TR(0x5e002e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e0031:L5e0031:{c.instructions+=4;NFSU2_TR(0x5e0031);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B5e0034:{NFSU2_TR(0x5e0034);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e0036:{NFSU2_TR(0x5e0036);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e0038:{NFSU2_TR(0x5e0038);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e004c;}}
}
B5e003a:L5e003a:{c.instructions+=1;NFSU2_TR(0x5e003a);
__builtin_memmove((R+12),(R+12),4);
}
B5e0040:L5e0040:{c.instructions+=2;NFSU2_TR(0x5e0040);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+4))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B5e0045:{NFSU2_TR(0x5e0045);
if(r1(R+518)){{goto L5e0058;}}
}
B5e0047:L5e0047:{c.instructions+=3;NFSU2_TR(0x5e0047);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e0048:{NFSU2_TR(0x5e0048);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e004a:{NFSU2_TR(0x5e004a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0040u);}goto L5e0040;}}
}
B5e004c:L5e004c:{c.instructions+=2;NFSU2_TR(0x5e004c);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5e0050:{NFSU2_TR(0x5e0050);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e0058;}}
}
B5e0052:L5e0052:{c.instructions+=2;NFSU2_TR(0x5e0052);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e0057:{NFSU2_TR(0x5e0057);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e0058:L5e0058:{c.instructions+=7;NFSU2_TR(0x5e0058);
__builtin_memmove((R+0),(R+4),4);
}
B5e005a:{NFSU2_TR(0x5e005a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5e005b:{NFSU2_TR(0x5e005b);
w4(R+28,u32(0x64ull));
}
B5e0060:{NFSU2_TR(0x5e0060);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e0060);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e0060);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5e0062:{NFSU2_TR(0x5e0062);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x40ull))));
}
B5e0064:{NFSU2_TR(0x5e0064);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x41ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5e0066:{NFSU2_TR(0x5e0066);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e009a;}}
}
B5e0068:L5e0068:{c.instructions+=2;NFSU2_TR(0x5e0068);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x54ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x54ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e006a:{NFSU2_TR(0x5e006a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5e009a;}}
}
B5e006c:L5e006c:{c.instructions+=2;NFSU2_TR(0x5e006c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e006f:{NFSU2_TR(0x5e006f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e009a;}}
}
B5e0071:L5e0071:{c.instructions+=3;NFSU2_TR(0x5e0071);
__builtin_memmove((R+0),gp(0x800dfc),4);
}
B5e0076:{NFSU2_TR(0x5e0076);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e0078:{NFSU2_TR(0x5e0078);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e009a;}}
}
B5e007a:L5e007a:{c.instructions+=4;NFSU2_TR(0x5e007a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5e007c:{NFSU2_TR(0x5e007c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e007e:{NFSU2_TR(0x5e007e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e0080:{NFSU2_TR(0x5e0080);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e008e;}}
}
B5e0082:L5e0082:{c.instructions+=2;NFSU2_TR(0x5e0082);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+4))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B5e0087:{NFSU2_TR(0x5e0087);
if(r1(R+518)){{goto L5e009a;}}
}
B5e0089:L5e0089:{c.instructions+=3;NFSU2_TR(0x5e0089);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e008a:{NFSU2_TR(0x5e008a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e008c:{NFSU2_TR(0x5e008c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0082u);}goto L5e0082;}}
}
B5e008e:L5e008e:{c.instructions+=2;NFSU2_TR(0x5e008e);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5e0092:{NFSU2_TR(0x5e0092);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e009a;}}
}
B5e0094:L5e0094:{c.instructions+=2;NFSU2_TR(0x5e0094);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e0099:{NFSU2_TR(0x5e0099);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e009a:L5e009a:{c.instructions+=8;NFSU2_TR(0x5e009a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e009e:{NFSU2_TR(0x5e009e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e00a2:{NFSU2_TR(0x5e00a2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5e00a6:{NFSU2_TR(0x5e00a6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e00a7:{NFSU2_TR(0x5e00a7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2ull))));
}
B5e00aa:{NFSU2_TR(0x5e00aa);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e00ac:{NFSU2_TR(0x5e00ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e00b0:{NFSU2_TR(0x5e00b0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0031u);}goto L5e0031;}}
}
B5e00b6:L5e00b6:{c.instructions+=7;NFSU2_TR(0x5e00b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e00b7:{NFSU2_TR(0x5e00b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e00b8:{NFSU2_TR(0x5e00b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e00b9:{NFSU2_TR(0x5e00b9);
__builtin_memmove((R+0),(R+24),4);
}
B5e00bb:{NFSU2_TR(0x5e00bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e00bc:{NFSU2_TR(0x5e00bc);
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
B5e00bf:{NFSU2_TR(0x5e00bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e00c9:L5e00c9:{c.instructions+=18;NFSU2_TR(0x5e00c9);
}
B5e00ca:{NFSU2_TR(0x5e00ca);
}
B5e00cb:{NFSU2_TR(0x5e00cb);
}
B5e00cc:{NFSU2_TR(0x5e00cc);
}
B5e00cd:{NFSU2_TR(0x5e00cd);
}
B5e00ce:{NFSU2_TR(0x5e00ce);
}
B5e00cf:{NFSU2_TR(0x5e00cf);
}
B5e00d0:{NFSU2_TR(0x5e00d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e00d1:{NFSU2_TR(0x5e00d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e00d2:{NFSU2_TR(0x5e00d2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e00d3:{NFSU2_TR(0x5e00d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e00d7:{NFSU2_TR(0x5e00d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e00da:{NFSU2_TR(0x5e00da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e00db:{NFSU2_TR(0x5e00db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5e00dd:{NFSU2_TR(0x5e00dd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e00df:{NFSU2_TR(0x5e00df);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e00e0:{NFSU2_TR(0x5e00e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e00e4:{NFSU2_TR(0x5e00e4);
if(r1(R+518)){{goto L5e0121;}}
}
B5e00e6:L5e00e6:{c.instructions+=8;NFSU2_TR(0x5e00e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e00e9:{NFSU2_TR(0x5e00e9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e00eb:{NFSU2_TR(0x5e00eb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e00ec:{NFSU2_TR(0x5e00ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e00ef:{NFSU2_TR(0x5e00ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e00f0:{NFSU2_TR(0x5e00f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e00f3:{NFSU2_TR(0x5e00f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e00f4:{NFSU2_TR(0x5e00f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e00f9ull));
TAIL_STATIC(0x43d410u,43d);
}
B5e00f9:L5e00f9:{c.instructions+=3;NFSU2_TR(0x5e00f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5e00fc:{NFSU2_TR(0x5e00fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e00fe:{NFSU2_TR(0x5e00fe);
if(r1(R+518)){{goto L5e0117;}}
}
B5e0100:L5e0100:{c.instructions+=6;NFSU2_TR(0x5e0100);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5e0104:{NFSU2_TR(0x5e0104);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0105:{NFSU2_TR(0x5e0105);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x24ull))));
}
B5e0108:{NFSU2_TR(0x5e0108);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0109:{NFSU2_TR(0x5e0109);
__builtin_memmove((R+0),(R+20),4);
}
B5e010b:{NFSU2_TR(0x5e010b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0110ull));
TAIL_STATIC(0x5d6dd0u,5d6);
}
B5e0110:L5e0110:{c.instructions+=3;NFSU2_TR(0x5e0110);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e0113:{NFSU2_TR(0x5e0113);
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
B5e0115:{NFSU2_TR(0x5e0115);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e0166;}}
}
B5e0117:L5e0117:{c.instructions+=3;NFSU2_TR(0x5e0117);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5e0119:{NFSU2_TR(0x5e0119);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e011b:{NFSU2_TR(0x5e011b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e00e6u);}goto L5e00e6;}}
}
B5e011d:L5e011d:{c.instructions+=1;NFSU2_TR(0x5e011d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e0121:L5e0121:{c.instructions+=4;NFSU2_TR(0x5e0121);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e0125:{NFSU2_TR(0x5e0125);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0126:{NFSU2_TR(0x5e0126);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0127:{NFSU2_TR(0x5e0127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e012cull));
TAIL_STATIC(0x5db770u,5db);
}
B5e012c:L5e012c:{c.instructions+=6;NFSU2_TR(0x5e012c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e0130:{NFSU2_TR(0x5e0130);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e0136:{NFSU2_TR(0x5e0136);
__builtin_memmove((R+4),(R+0),4);
}
B5e0138:{NFSU2_TR(0x5e0138);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e013a:{NFSU2_TR(0x5e013a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e013d:{NFSU2_TR(0x5e013d);
if(r1(R+514)){{goto L5e015c;}}
}
B5e013f:L5e013f:{c.instructions+=3;NFSU2_TR(0x5e013f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e0141:{NFSU2_TR(0x5e0141);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e0143:{NFSU2_TR(0x5e0143);
if(r1(R+518)){{goto L5e015c;}}
}
B5e0145:L5e0145:{c.instructions+=2;NFSU2_TR(0x5e0145);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5e0149:{NFSU2_TR(0x5e0149);
__builtin_memmove((R+16),(R+16),4);
}
B5e0150:L5e0150:{c.instructions+=2;NFSU2_TR(0x5e0150);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(r2(R+4))));
w1(R+523,sborrow<u16>(r2(U+10),r2(R+4)));
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+4))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5e0154:{NFSU2_TR(0x5e0154);
if(r1(R+518)){{goto L5e015e;}}
}
B5e0156:L5e0156:{c.instructions+=3;NFSU2_TR(0x5e0156);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e0158:{NFSU2_TR(0x5e0158);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e015a:{NFSU2_TR(0x5e015a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0150u);}goto L5e0150;}}
}
B5e015c:L5e015c:{c.instructions+=1;NFSU2_TR(0x5e015c);
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
B5e015e:L5e015e:{c.instructions+=6;NFSU2_TR(0x5e015e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e015f:{NFSU2_TR(0x5e015f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e0160:{NFSU2_TR(0x5e0160);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e0161:{NFSU2_TR(0x5e0161);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e0162:{NFSU2_TR(0x5e0162);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e0163:{NFSU2_TR(0x5e0163);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0166:L5e0166:{c.instructions+=16;NFSU2_TR(0x5e0166);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e0168:{NFSU2_TR(0x5e0168);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e016b:{NFSU2_TR(0x5e016b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e016d:{NFSU2_TR(0x5e016d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0170:{NFSU2_TR(0x5e0170);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e0172:{NFSU2_TR(0x5e0172);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5e0174:{NFSU2_TR(0x5e0174);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0177:{NFSU2_TR(0x5e0177);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e0178:{NFSU2_TR(0x5e0178);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5e017a:{NFSU2_TR(0x5e017a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e017d:{NFSU2_TR(0x5e017d);
__builtin_memmove((R+0),(R+24),4);
}
B5e017f:{NFSU2_TR(0x5e017f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e0180:{NFSU2_TR(0x5e0180);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e0181:{NFSU2_TR(0x5e0181);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e0182:{NFSU2_TR(0x5e0182);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e0183:{NFSU2_TR(0x5e0183);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0190:L5e0190:{c.instructions+=3;NFSU2_TR(0x5e0190);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0194:{NFSU2_TR(0x5e0194);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x34250ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5e019a:{NFSU2_TR(0x5e019a);
if(r1(R+518)){{goto L5e019f;}}
}
B5e019c:L5e019c:{c.instructions+=2;NFSU2_TR(0x5e019c);
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
B5e019e:{NFSU2_TR(0x5e019e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e019f:L5e019f:{c.instructions+=4;NFSU2_TR(0x5e019f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
}
B5e01a2:{NFSU2_TR(0x5e01a2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B5e01a5:{NFSU2_TR(0x5e01a5);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5e01a9:{NFSU2_TR(0x5e01a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e0213;}}
}
B5e01ab:L5e01ab:{c.instructions+=4;NFSU2_TR(0x5e01ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e01ae:{NFSU2_TR(0x5e01ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e01b1:{NFSU2_TR(0x5e01b1);
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
B5e01b3:{NFSU2_TR(0x5e01b3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e0213;}}
}
B5e01b5:L5e01b5:{c.instructions+=4;NFSU2_TR(0x5e01b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e01b6:{NFSU2_TR(0x5e01b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e01b7:{NFSU2_TR(0x5e01b7);
__builtin_memmove((R+28),(R+0),4);
}
B5e01b9:{NFSU2_TR(0x5e01b9);
__builtin_memmove((R+16),(R+16),4);
}
B5e01c0:L5e01c0:{c.instructions+=3;NFSU2_TR(0x5e01c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e01c3:{NFSU2_TR(0x5e01c3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e01c5:{NFSU2_TR(0x5e01c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e01e5;}}
}
B5e01c7:L5e01c7:{c.instructions+=5;NFSU2_TR(0x5e01c7);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e01ca:{NFSU2_TR(0x5e01ca);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e01d0:{NFSU2_TR(0x5e01d0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e01d2:{NFSU2_TR(0x5e01d2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e01d5:{NFSU2_TR(0x5e01d5);
if(r1(R+514)){{goto L5e01ec;}}
}
B5e01d7:L5e01d7:{c.instructions+=3;NFSU2_TR(0x5e01d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e01de:{NFSU2_TR(0x5e01de);
w4(R+8,u32(0x5ull));
}
B5e01e3:{NFSU2_TR(0x5e01e3);
{goto L5e01ec;}
}
B5e01e5:L5e01e5:{c.instructions+=1;NFSU2_TR(0x5e01e5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e020b;}}
}
B5e01e7:L5e01e7:{c.instructions+=2;NFSU2_TR(0x5e01e7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e01ea:{NFSU2_TR(0x5e01ea);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e020b;}}
}
B5e01ec:L5e01ec:{c.instructions+=7;NFSU2_TR(0x5e01ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x88f1ccull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B5e01f3:{NFSU2_TR(0x5e01f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x88f1c8ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5e01fa:{NFSU2_TR(0x5e01fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5e01fc:{NFSU2_TR(0x5e01fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e01ff:{NFSU2_TR(0x5e01ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e0201:{NFSU2_TR(0x5e0201);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0204:{NFSU2_TR(0x5e0204);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883e04ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))+u32(u32(0x1ull))));
s4(u32(r4(U+4)),r4(U+8));
}
B5e020b:L5e020b:{c.instructions+=3;NFSU2_TR(0x5e020b);
w1(R+512,carry<u32>(r4(R+4),u32(0x64ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x64ull))));
}
B5e020e:{NFSU2_TR(0x5e020e);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e020f:{NFSU2_TR(0x5e020f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e01c0u);}goto L5e01c0;}}
}
B5e0211:L5e0211:{c.instructions+=2;NFSU2_TR(0x5e0211);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e0212:{NFSU2_TR(0x5e0212);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e0213:L5e0213:{c.instructions+=2;NFSU2_TR(0x5e0213);
w4(R+0,u32(0x1ull));
}
B5e0218:{NFSU2_TR(0x5e0218);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0220:L5e0220:{c.instructions+=3;NFSU2_TR(0x5e0220);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0224:{NFSU2_TR(0x5e0224);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x34250ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5e022a:{NFSU2_TR(0x5e022a);
if(r1(R+518)){{goto L5e022f;}}
}
B5e022c:L5e022c:{c.instructions+=2;NFSU2_TR(0x5e022c);
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
B5e022e:{NFSU2_TR(0x5e022e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e022f:L5e022f:{c.instructions+=4;NFSU2_TR(0x5e022f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e0232:{NFSU2_TR(0x5e0232);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff0ull))));
}
B5e0235:{NFSU2_TR(0x5e0235);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5e0239:{NFSU2_TR(0x5e0239);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e0259;}}
}
B5e023b:L5e023b:{c.instructions+=4;NFSU2_TR(0x5e023b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e023e:{NFSU2_TR(0x5e023e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e0241:{NFSU2_TR(0x5e0241);
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
B5e0243:{NFSU2_TR(0x5e0243);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e0259;}}
}
B5e0245:L5e0245:{c.instructions+=2;NFSU2_TR(0x5e0245);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0246:{NFSU2_TR(0x5e0246);
__builtin_memmove((R+24),(R+4),4);
}
B5e0248:L5e0248:{c.instructions+=7;NFSU2_TR(0x5e0248);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e024a:{NFSU2_TR(0x5e024a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e024d:{NFSU2_TR(0x5e024d);
w1(R+512,carry<u32>(r4(R+0),u32(0x64ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
}
B5e0250:{NFSU2_TR(0x5e0250);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e0251:{NFSU2_TR(0x5e0251);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e0253:{NFSU2_TR(0x5e0253);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0256:{NFSU2_TR(0x5e0256);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0248u);}goto L5e0248;}}
}
B5e0258:L5e0258:{c.instructions+=1;NFSU2_TR(0x5e0258);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e0259:L5e0259:{c.instructions+=2;NFSU2_TR(0x5e0259);
w4(R+0,u32(0x1ull));
}
B5e025e:{NFSU2_TR(0x5e025e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0260:L5e0260:{c.instructions+=11;NFSU2_TR(0x5e0260);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0261:{NFSU2_TR(0x5e0261);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0262:{NFSU2_TR(0x5e0262);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0263:{NFSU2_TR(0x5e0263);
__builtin_memmove((R+28),(R+4),4);
}
B5e0265:{NFSU2_TR(0x5e0265);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e0267:{NFSU2_TR(0x5e0267);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3acull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e026d:{NFSU2_TR(0x5e026d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x388ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e0273:{NFSU2_TR(0x5e0273);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e0276:{NFSU2_TR(0x5e0276);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e0279:{NFSU2_TR(0x5e0279);
w4(R+12,u32(0x9ull));
}
B5e027e:{NFSU2_TR(0x5e027e);
__builtin_memmove((R+28),(R+28),4);
}
B5e0280:L5e0280:{c.instructions+=13;NFSU2_TR(0x5e0280);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5e0282:{NFSU2_TR(0x5e0282);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0285:{NFSU2_TR(0x5e0285);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e0287:{NFSU2_TR(0x5e0287);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e028a:{NFSU2_TR(0x5e028a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e028d:{NFSU2_TR(0x5e028d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0290:{NFSU2_TR(0x5e0290);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0293:{NFSU2_TR(0x5e0293);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e0295:{NFSU2_TR(0x5e0295);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5e0298:{NFSU2_TR(0x5e0298);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B5e029b:{NFSU2_TR(0x5e029b);
w1(R+512,carry<u32>(r4(R+0),u32(0x58ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
}
B5e029e:{NFSU2_TR(0x5e029e);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e029f:{NFSU2_TR(0x5e029f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0280u);}goto L5e0280;}}
}
B5e02a1:L5e02a1:{c.instructions+=1;NFSU2_TR(0x5e02a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e02a6ull));
TAIL_STATIC(0x5dbdd0u,5db);
}
B5e02a6:L5e02a6:{c.instructions+=5;NFSU2_TR(0x5e02a6);
__builtin_memmove((R+0),(R+28),4);
}
B5e02a8:{NFSU2_TR(0x5e02a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e02a9:{NFSU2_TR(0x5e02a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e02aa:{NFSU2_TR(0x5e02aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e02ab:{NFSU2_TR(0x5e02ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e02b0:L5e02b0:{c.instructions+=6;NFSU2_TR(0x5e02b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e02b1:{NFSU2_TR(0x5e02b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e02b2:{NFSU2_TR(0x5e02b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e02b3:{NFSU2_TR(0x5e02b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e02b7:{NFSU2_TR(0x5e02b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e02b9:{NFSU2_TR(0x5e02b9);
if(r1(R+518)){{goto L5e0353;}}
}
B5e02bf:L5e02bf:{c.instructions+=3;NFSU2_TR(0x5e02bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e02c3:{NFSU2_TR(0x5e02c3);
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
B5e02c5:{NFSU2_TR(0x5e02c5);
if(r1(R+518)){{goto L5e0353;}}
}
B5e02cb:L5e02cb:{c.instructions+=3;NFSU2_TR(0x5e02cb);
__builtin_memmove((R+24),gp(0x88e9c4),4);
}
B5e02d1:{NFSU2_TR(0x5e02d1);
w4(R+4,u32(0x88e9c4ull));
}
B5e02d6:{NFSU2_TR(0x5e02d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e02dbull));
TAIL_STATIC(0x502fd0u,502);
}
B5e02db:L5e02db:{c.instructions+=2;NFSU2_TR(0x5e02db);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e02dd:{NFSU2_TR(0x5e02dd);
if(r1(R+518)){{goto L5e02eb;}}
}
B5e02df:L5e02df:{c.instructions+=1;NFSU2_TR(0x5e02df);
}
B5e02e0:L5e02e0:{c.instructions+=2;NFSU2_TR(0x5e02e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e02e3:{NFSU2_TR(0x5e02e3);
if(r1(R+518)){{goto L5e0343;}}
}
B5e02e5:L5e02e5:{c.instructions+=3;NFSU2_TR(0x5e02e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5e02e7:{NFSU2_TR(0x5e02e7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e02e9:{NFSU2_TR(0x5e02e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e02e0u);}goto L5e02e0;}}
}
B5e02eb:L5e02eb:{c.instructions+=3;NFSU2_TR(0x5e02eb);
__builtin_memmove((R+0),gp(0x883e3c),4);
}
B5e02f0:{NFSU2_TR(0x5e02f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e02f1:{NFSU2_TR(0x5e02f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e02f6ull));
TAIL_STATIC(0x440e50u,440);
}
B5e02f6:L5e02f6:{c.instructions+=3;NFSU2_TR(0x5e02f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e02f9:{NFSU2_TR(0x5e02f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e02fb:{NFSU2_TR(0x5e02fb);
if(r1(R+518)){{goto L5e0353;}}
}
B5e02fd:L5e02fd:{c.instructions+=14;NFSU2_TR(0x5e02fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0300:{NFSU2_TR(0x5e0300);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0303:{NFSU2_TR(0x5e0303);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e030a:{NFSU2_TR(0x5e030a);
__builtin_memmove((R+4),gp(0x88e9c8),4);
}
B5e0310:{NFSU2_TR(0x5e0310);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e0312:{NFSU2_TR(0x5e0312);
__builtin_memmove(gp(0x88e9c8),(R+0),4);
}
B5e0317:{NFSU2_TR(0x5e0317);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e031a:{NFSU2_TR(0x5e031a);
u8 U[4];
w4(U+0,u32(0x88e9c4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5e0320:{NFSU2_TR(0x5e0320);
__builtin_memmove((R+0),gp(0x876dcc),4);
}
B5e0325:{NFSU2_TR(0x5e0325);
__builtin_memmove((R+4),gp(0x876dd8),4);
}
B5e032b:{NFSU2_TR(0x5e032b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e032c:{NFSU2_TR(0x5e032c);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5e032e:{NFSU2_TR(0x5e032e);
__builtin_memmove(gp(0x876dcc),(R+0),4);
}
B5e0333:{NFSU2_TR(0x5e0333);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e033a;}}
}
B5e0335:L5e0335:{c.instructions+=1;NFSU2_TR(0x5e0335);
__builtin_memmove(gp(0x876dd8),(R+0),4);
}
B5e033a:L5e033a:{c.instructions+=5;NFSU2_TR(0x5e033a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e033b:{NFSU2_TR(0x5e033b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e033c:{NFSU2_TR(0x5e033c);
w4(R+0,u32(0x1ull));
}
B5e0341:{NFSU2_TR(0x5e0341);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e0342:{NFSU2_TR(0x5e0342);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0343:L5e0343:{c.instructions+=8;NFSU2_TR(0x5e0343);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0346:{NFSU2_TR(0x5e0346);
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
B5e0347:{NFSU2_TR(0x5e0347);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e0348:{NFSU2_TR(0x5e0348);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e034b:{NFSU2_TR(0x5e034b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e034c:{NFSU2_TR(0x5e034c);
w4(R+0,u32(0x1ull));
}
B5e0351:{NFSU2_TR(0x5e0351);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e0352:{NFSU2_TR(0x5e0352);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0353:L5e0353:{c.instructions+=5;NFSU2_TR(0x5e0353);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e0354:{NFSU2_TR(0x5e0354);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e0355:{NFSU2_TR(0x5e0355);
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
B5e0357:{NFSU2_TR(0x5e0357);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e0358:{NFSU2_TR(0x5e0358);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0360:L5e0360:{c.instructions+=3;NFSU2_TR(0x5e0360);
__builtin_memmove((R+0),gp(0x883e38),4);
}
B5e0365:{NFSU2_TR(0x5e0365);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0366:{NFSU2_TR(0x5e0366);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e036bull));
TAIL_STATIC(0x440e50u,440);
}
B5e036b:L5e036b:{c.instructions+=5;NFSU2_TR(0x5e036b);
__builtin_memmove((R+8),(R+0),4);
}
B5e036d:{NFSU2_TR(0x5e036d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e0370:{NFSU2_TR(0x5e0370);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e0372:{NFSU2_TR(0x5e0372);
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
B5e0374:{NFSU2_TR(0x5e0374);
if(r1(R+518)){{goto L5e03a6;}}
}
B5e0376:L5e0376:{c.instructions+=3;NFSU2_TR(0x5e0376);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0377:{NFSU2_TR(0x5e0377);
w4(R+4,u32(0x9ull));
}
B5e037c:{NFSU2_TR(0x5e037c);
__builtin_memmove((R+28),(R+8),4);
}
B5e037e:L5e037e:{c.instructions+=1;NFSU2_TR(0x5e037e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5e0380;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e037eu);}goto L5e037e;}
}
B5e0380:L5e0380:{c.instructions+=12;NFSU2_TR(0x5e0380);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e0384:{NFSU2_TR(0x5e0384);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0387:{NFSU2_TR(0x5e0387);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e038a:{NFSU2_TR(0x5e038a);
__builtin_memmove((R+4),gp(0x800ecc),4);
}
B5e0390:{NFSU2_TR(0x5e0390);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0393:{NFSU2_TR(0x5e0393);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e0395:{NFSU2_TR(0x5e0395);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0398:{NFSU2_TR(0x5e0398);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e039b:{NFSU2_TR(0x5e039b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e039d:{NFSU2_TR(0x5e039d);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x876dc8),u32(0x1ull)));
s4(0x876dc8,u32(u32(m4(0x876dc8))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x876dc8))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x876dc8))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x876dc8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e03a3:{NFSU2_TR(0x5e03a3);
__builtin_memmove((R+0),(R+8),4);
}
B5e03a5:{NFSU2_TR(0x5e03a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e03a6:L5e03a6:{c.instructions+=1;NFSU2_TR(0x5e03a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e03b0:L5e03b0:{c.instructions+=17;NFSU2_TR(0x5e03b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5e03b3:{NFSU2_TR(0x5e03b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e03b7:{NFSU2_TR(0x5e03b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e03b9:{NFSU2_TR(0x5e03b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e03bc:{NFSU2_TR(0x5e03bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e03bf:{NFSU2_TR(0x5e03bf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e03c0:{NFSU2_TR(0x5e03c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e03c4:{NFSU2_TR(0x5e03c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e03c8:{NFSU2_TR(0x5e03c8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e03c9:{NFSU2_TR(0x5e03c9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e03cd:{NFSU2_TR(0x5e03cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ec0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5e03d4:{NFSU2_TR(0x5e03d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e03d6:{NFSU2_TR(0x5e03d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e03d7:{NFSU2_TR(0x5e03d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e03d8:{NFSU2_TR(0x5e03d8);
w4(R+12,u32(0x883cd0ull));
}
B5e03dd:{NFSU2_TR(0x5e03dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e03e1:{NFSU2_TR(0x5e03e1);
if(r1(R+518)){{goto L5e04b3;}}
}
B5e03e7:L5e03e7:{c.instructions+=3;NFSU2_TR(0x5e03e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e03ea:{NFSU2_TR(0x5e03ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e03ec:{NFSU2_TR(0x5e03ec);
if(r1(R+518)){{goto L5e04b3;}}
}
B5e03f2:L5e03f2:{c.instructions+=8;NFSU2_TR(0x5e03f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e03f6:{NFSU2_TR(0x5e03f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e03fa:{NFSU2_TR(0x5e03fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e03fd:{NFSU2_TR(0x5e03fd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e03fe:{NFSU2_TR(0x5e03fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e0402:{NFSU2_TR(0x5e0402);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0403:{NFSU2_TR(0x5e0403);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0404:{NFSU2_TR(0x5e0404);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0409ull));
TAIL_STATIC(0x5747e0u,574);
}
B5e0409:L5e0409:{c.instructions+=2;NFSU2_TR(0x5e0409);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e040b:{NFSU2_TR(0x5e040b);
if(r1(R+518)){{goto L5e04b3;}}
}
B5e0411:L5e0411:{c.instructions+=7;NFSU2_TR(0x5e0411);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B5e0415:{NFSU2_TR(0x5e0415);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e0418:{NFSU2_TR(0x5e0418);
w4(R+28,u32(0-u32(r4(R+28))));
}
B5e041a:{NFSU2_TR(0x5e041a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5e041c:{NFSU2_TR(0x5e041c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e041e:{NFSU2_TR(0x5e041e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0422:{NFSU2_TR(0x5e0422);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e04b3;}}
}
B5e0428:L5e0428:{c.instructions+=3;NFSU2_TR(0x5e0428);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B5e042b:{NFSU2_TR(0x5e042b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e042f:{NFSU2_TR(0x5e042f);
}
B5e0430:L5e0430:{c.instructions+=2;NFSU2_TR(0x5e0430);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x883d70ull))));
}
B5e0436:{NFSU2_TR(0x5e0436);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5e04ab;}}
}
B5e0438:L5e0438:{c.instructions+=32;NFSU2_TR(0x5e0438);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+24,u32(s32(s16(r2(U+0)))));
}
B5e043b:{NFSU2_TR(0x5e043b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e043f:{NFSU2_TR(0x5e043f);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5e0442:{NFSU2_TR(0x5e0442);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B5e0444:{NFSU2_TR(0x5e0444);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e0447:{NFSU2_TR(0x5e0447);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5e044b:{NFSU2_TR(0x5e044b);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5e044d:{NFSU2_TR(0x5e044d);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e0450:{NFSU2_TR(0x5e0450);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5e0454:{NFSU2_TR(0x5e0454);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5e0456:{NFSU2_TR(0x5e0456);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e0459:{NFSU2_TR(0x5e0459);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5e045d:{NFSU2_TR(0x5e045d);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5e045f:{NFSU2_TR(0x5e045f);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e0462:{NFSU2_TR(0x5e0462);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5e0464:{NFSU2_TR(0x5e0464);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5e0466:{NFSU2_TR(0x5e0466);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5e0468:{NFSU2_TR(0x5e0468);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5e046a:{NFSU2_TR(0x5e046a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e046c:{NFSU2_TR(0x5e046c);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B5e046e:{NFSU2_TR(0x5e046e);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B5e0470:{NFSU2_TR(0x5e0470);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e0472:{NFSU2_TR(0x5e0472);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5e0474:{NFSU2_TR(0x5e0474);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5e0476:{NFSU2_TR(0x5e0476);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5e0478:{NFSU2_TR(0x5e0478);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e047a:{NFSU2_TR(0x5e047a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e047c:{NFSU2_TR(0x5e047c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e047e:{NFSU2_TR(0x5e047e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e0480:{NFSU2_TR(0x5e0480);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e0483:{NFSU2_TR(0x5e0483);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e0485:{NFSU2_TR(0x5e0485);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e049b;}}
}
B5e0487:L5e0487:{c.instructions+=3;NFSU2_TR(0x5e0487);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e048a:{NFSU2_TR(0x5e048a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e048b:{NFSU2_TR(0x5e048b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0490ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0360u);}goto L5e0360;}
}
B5e0490:L5e0490:{c.instructions+=4;NFSU2_TR(0x5e0490);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0493:{NFSU2_TR(0x5e0493);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e0496:{NFSU2_TR(0x5e0496);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5e0498:{NFSU2_TR(0x5e0498);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5e049b:L5e049b:{c.instructions+=6;NFSU2_TR(0x5e049b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e049f:{NFSU2_TR(0x5e049f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5e04a0:{NFSU2_TR(0x5e04a0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B5e04a3:{NFSU2_TR(0x5e04a3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e04a5:{NFSU2_TR(0x5e04a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e04a9:{NFSU2_TR(0x5e04a9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0430u);}goto L5e0430;}}
}
B5e04ab:L5e04ab:{c.instructions+=2;NFSU2_TR(0x5e04ab);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x883cd0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e04b1:{NFSU2_TR(0x5e04b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e04bd;}}
}
B5e04b3:L5e04b3:{c.instructions+=7;NFSU2_TR(0x5e04b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e04b4:{NFSU2_TR(0x5e04b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e04b5:{NFSU2_TR(0x5e04b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e04b6:{NFSU2_TR(0x5e04b6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e04b8:{NFSU2_TR(0x5e04b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e04b9:{NFSU2_TR(0x5e04b9);
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
B5e04bc:{NFSU2_TR(0x5e04bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e04bd:L5e04bd:{c.instructions+=8;NFSU2_TR(0x5e04bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e04be:{NFSU2_TR(0x5e04be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e04bf:{NFSU2_TR(0x5e04bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e04c0:{NFSU2_TR(0x5e04c0);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+12)),r4(U+0));
}
B5e04c6:{NFSU2_TR(0x5e04c6);
w4(R+0,u32(0x883cd0ull));
}
B5e04cb:{NFSU2_TR(0x5e04cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e04cc:{NFSU2_TR(0x5e04cc);
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
B5e04cf:{NFSU2_TR(0x5e04cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e04d0:L5e04d0:{c.instructions+=3;NFSU2_TR(0x5e04d0);
__builtin_memmove((R+4),gp(0x883e48),4);
}
B5e04d6:{NFSU2_TR(0x5e04d6);
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
B5e04d8:{NFSU2_TR(0x5e04d8);
if(r1(R+518)){{goto L5e04f6;}}
}
B5e04da:L5e04da:{c.instructions+=3;NFSU2_TR(0x5e04da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e04db:{NFSU2_TR(0x5e04db);
__builtin_memmove((R+24),(R+4),4);
}
B5e04dd:{NFSU2_TR(0x5e04dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e04e2ull));
TAIL_STATIC(0x5dc0e0u,5dc);
}
B5e04e2:L5e04e2:{c.instructions+=2;NFSU2_TR(0x5e04e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e04e3:{NFSU2_TR(0x5e04e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e04e8ull));
TAIL_STATIC(0x575630u,575);
}
B5e04e8:L5e04e8:{c.instructions+=3;NFSU2_TR(0x5e04e8);
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
B5e04eb:{NFSU2_TR(0x5e04eb);
s4(0x883e48,u32(0x0ull));
}
B5e04f5:{NFSU2_TR(0x5e04f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e04f6:L5e04f6:{c.instructions+=1;NFSU2_TR(0x5e04f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0500:L5e0500:{c.instructions+=3;NFSU2_TR(0x5e0500);
__builtin_memmove((R+0),gp(0x88e9fc),4);
}
B5e0505:{NFSU2_TR(0x5e0505);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x88e9fcull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e050a:{NFSU2_TR(0x5e050a);
if(r1(R+518)){{goto L5e053f;}}
}
B5e050c:L5e050c:{c.instructions+=2;NFSU2_TR(0x5e050c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e050d:{NFSU2_TR(0x5e050d);
__builtin_memmove((R+4),(R+4),4);
}
B5e0510:L5e0510:{c.instructions+=7;NFSU2_TR(0x5e0510);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e0512:{NFSU2_TR(0x5e0512);
__builtin_memmove((R+24),(R+0),4);
}
B5e0514:{NFSU2_TR(0x5e0514);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0517:{NFSU2_TR(0x5e0517);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e0519:{NFSU2_TR(0x5e0519);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e051c:{NFSU2_TR(0x5e051c);
__builtin_memmove((R+4),(R+24),4);
}
B5e051e:{NFSU2_TR(0x5e051e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0523ull));
TAIL_STATIC(0x5dc160u,5dc);
}
B5e0523:L5e0523:{c.instructions+=4;NFSU2_TR(0x5e0523);
__builtin_memmove((R+0),gp(0x883e4c),4);
}
B5e0528:{NFSU2_TR(0x5e0528);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0529:{NFSU2_TR(0x5e0529);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e052a:{NFSU2_TR(0x5e052a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e052full));
TAIL_STATIC(0x43f920u,43f);
}
B5e052f:L5e052f:{c.instructions+=4;NFSU2_TR(0x5e052f);
__builtin_memmove((R+0),gp(0x88e9fc),4);
}
B5e0534:{NFSU2_TR(0x5e0534);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e0537:{NFSU2_TR(0x5e0537);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x88e9fcull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e053c:{NFSU2_TR(0x5e053c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0510u);}goto L5e0510;}}
}
B5e053e:L5e053e:{c.instructions+=1;NFSU2_TR(0x5e053e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e053f:L5e053f:{c.instructions+=3;NFSU2_TR(0x5e053f);
__builtin_memmove((R+0),gp(0x883e4c),4);
}
B5e0544:{NFSU2_TR(0x5e0544);
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
B5e0546:{NFSU2_TR(0x5e0546);
if(r1(R+518)){{goto L5e055b;}}
}
B5e0548:L5e0548:{c.instructions+=2;NFSU2_TR(0x5e0548);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0549:{NFSU2_TR(0x5e0549);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e054eull));
TAIL_STATIC(0x440e40u,440);
}
B5e054e:L5e054e:{c.instructions+=2;NFSU2_TR(0x5e054e);
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
B5e0551:{NFSU2_TR(0x5e0551);
s4(0x883e4c,u32(0x0ull));
}
B5e055b:L5e055b:{c.instructions+=1;NFSU2_TR(0x5e055b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0560:L5e0560:{c.instructions+=5;NFSU2_TR(0x5e0560);
__builtin_memmove((R+0),(R+4),4);
}
B5e0562:{NFSU2_TR(0x5e0562);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e0565:{NFSU2_TR(0x5e0565);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e0567:{NFSU2_TR(0x5e0567);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e056a:{NFSU2_TR(0x5e056a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0570:L5e0570:{c.instructions+=2;NFSU2_TR(0x5e0570);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B5e0573:{NFSU2_TR(0x5e0573);
TAIL_STATIC(0x4367c0u,436);
}
B5e0580:L5e0580:{c.instructions+=3;NFSU2_TR(0x5e0580);
__builtin_memmove((R+0),gp(0x88ea84),4);
}
B5e0585:{NFSU2_TR(0x5e0585);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x88ea84ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x88ea84ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x88ea84ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e058a:{NFSU2_TR(0x5e058a);
if(r1(R+518)){{goto L5e05bf;}}
}
B5e058c:L5e058c:{c.instructions+=2;NFSU2_TR(0x5e058c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e058d:{NFSU2_TR(0x5e058d);
__builtin_memmove((R+4),(R+4),4);
}
B5e0590:L5e0590:{c.instructions+=7;NFSU2_TR(0x5e0590);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e0592:{NFSU2_TR(0x5e0592);
__builtin_memmove((R+24),(R+0),4);
}
B5e0594:{NFSU2_TR(0x5e0594);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0597:{NFSU2_TR(0x5e0597);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e0599:{NFSU2_TR(0x5e0599);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e059c:{NFSU2_TR(0x5e059c);
__builtin_memmove((R+4),(R+24),4);
}
B5e059e:{NFSU2_TR(0x5e059e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e05a3ull));
TAIL_STATIC(0x5dc170u,5dc);
}
B5e05a3:L5e05a3:{c.instructions+=4;NFSU2_TR(0x5e05a3);
__builtin_memmove((R+0),gp(0x883e58),4);
}
B5e05a8:{NFSU2_TR(0x5e05a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e05a9:{NFSU2_TR(0x5e05a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e05aa:{NFSU2_TR(0x5e05aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e05afull));
TAIL_STATIC(0x43f920u,43f);
}
B5e05af:L5e05af:{c.instructions+=4;NFSU2_TR(0x5e05af);
__builtin_memmove((R+0),gp(0x88ea84),4);
}
B5e05b4:{NFSU2_TR(0x5e05b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e05b7:{NFSU2_TR(0x5e05b7);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x88ea84ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x88ea84ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x88ea84ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e05bc:{NFSU2_TR(0x5e05bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0590u);}goto L5e0590;}}
}
B5e05be:L5e05be:{c.instructions+=1;NFSU2_TR(0x5e05be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e05bf:L5e05bf:{c.instructions+=1;NFSU2_TR(0x5e05bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e05c0:L5e05c0:{c.instructions+=3;NFSU2_TR(0x5e05c0);
__builtin_memmove((R+0),gp(0x88eadc),4);
}
B5e05c5:{NFSU2_TR(0x5e05c5);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x88eadcull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x88eadcull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e05ca:{NFSU2_TR(0x5e05ca);
if(r1(R+518)){{goto L5e05f7;}}
}
B5e05cc:L5e05cc:{c.instructions+=1;NFSU2_TR(0x5e05cc);
__builtin_memmove((R+16),(R+16),4);
}
B5e05d0:L5e05d0:{c.instructions+=9;NFSU2_TR(0x5e05d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e05d2:{NFSU2_TR(0x5e05d2);
__builtin_memmove((R+8),(R+0),4);
}
B5e05d4:{NFSU2_TR(0x5e05d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e05d7:{NFSU2_TR(0x5e05d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e05d9:{NFSU2_TR(0x5e05d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e05dc:{NFSU2_TR(0x5e05dc);
__builtin_memmove((R+0),gp(0x883e5c),4);
}
B5e05e1:{NFSU2_TR(0x5e05e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e05e2:{NFSU2_TR(0x5e05e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e05e3:{NFSU2_TR(0x5e05e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e05e8ull));
TAIL_STATIC(0x43f920u,43f);
}
B5e05e8:L5e05e8:{c.instructions+=4;NFSU2_TR(0x5e05e8);
__builtin_memmove((R+0),gp(0x88eadc),4);
}
B5e05ed:{NFSU2_TR(0x5e05ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e05f0:{NFSU2_TR(0x5e05f0);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x88eadcull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x88eadcull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e05f5:{NFSU2_TR(0x5e05f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e05d0u);}goto L5e05d0;}}
}
B5e05f7:L5e05f7:{c.instructions+=3;NFSU2_TR(0x5e05f7);
__builtin_memmove((R+0),gp(0x883e5c),4);
}
B5e05fc:{NFSU2_TR(0x5e05fc);
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
B5e05fe:{NFSU2_TR(0x5e05fe);
if(r1(R+518)){{goto L5e0613;}}
}
B5e0600:L5e0600:{c.instructions+=2;NFSU2_TR(0x5e0600);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0601:{NFSU2_TR(0x5e0601);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0606ull));
TAIL_STATIC(0x440e40u,440);
}
B5e0606:L5e0606:{c.instructions+=2;NFSU2_TR(0x5e0606);
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
B5e0609:{NFSU2_TR(0x5e0609);
s4(0x883e5c,u32(0x0ull));
}
B5e0613:L5e0613:{c.instructions+=1;NFSU2_TR(0x5e0613);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0620:L5e0620:{c.instructions+=18;NFSU2_TR(0x5e0620);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0622:{NFSU2_TR(0x5e0622);
u8 U[4];
w4(U+0,u32(0x7793f6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0627:{NFSU2_TR(0x5e0627);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e062d:{NFSU2_TR(0x5e062d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e062e:{NFSU2_TR(0x5e062e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0635:{NFSU2_TR(0x5e0635);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0636:{NFSU2_TR(0x5e0636);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0637:{NFSU2_TR(0x5e0637);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0638:{NFSU2_TR(0x5e0638);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0639:{NFSU2_TR(0x5e0639);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e063a:{NFSU2_TR(0x5e063a);
u8 U[4];
w4(U+0,u32(0x4367c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e063f:{NFSU2_TR(0x5e063f);
u8 U[4];
w4(U+0,u32(0x598750ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0644:{NFSU2_TR(0x5e0644);
u8 U[4];
w4(U+0,u32(0xcbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0649:{NFSU2_TR(0x5e0649);
__builtin_memmove((R+20),(R+4),4);
}
B5e064b:{NFSU2_TR(0x5e064b);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e064d:{NFSU2_TR(0x5e064d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e064e:{NFSU2_TR(0x5e064e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0652:{NFSU2_TR(0x5e0652);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0657ull));
TAIL_STATIC(0x75c461u,75c);
}
B5e0657:L5e0657:{c.instructions+=3;NFSU2_TR(0x5e0657);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5e0659:{NFSU2_TR(0x5e0659);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e065d:{NFSU2_TR(0x5e065d);
w4(R+24,u32(0x800ee0ull));
}
B5e0662:L5e0662:{c.instructions+=1;NFSU2_TR(0x5e0662);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e0664:L5e0664:{c.instructions+=2;NFSU2_TR(0x5e0664);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5e0667:{NFSU2_TR(0x5e0667);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5e06bb;}}
}
B5e0669:L5e0669:{c.instructions+=1;NFSU2_TR(0x5e0669);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5e06e8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5e0670:L5e0670:{c.instructions+=2;NFSU2_TR(0x5e0670);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0673:{NFSU2_TR(0x5e0673);
{goto L5e0697;}
}
B5e0675:L5e0675:{c.instructions+=2;NFSU2_TR(0x5e0675);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0678:{NFSU2_TR(0x5e0678);
{goto L5e0697;}
}
B5e067a:L5e067a:{c.instructions+=2;NFSU2_TR(0x5e067a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e067d:{NFSU2_TR(0x5e067d);
{goto L5e0697;}
}
B5e067f:L5e067f:{c.instructions+=2;NFSU2_TR(0x5e067f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0682:{NFSU2_TR(0x5e0682);
{goto L5e0697;}
}
B5e0684:L5e0684:{c.instructions+=2;NFSU2_TR(0x5e0684);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e068a:{NFSU2_TR(0x5e068a);
{goto L5e0697;}
}
B5e068c:L5e068c:{c.instructions+=2;NFSU2_TR(0x5e068c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0692:{NFSU2_TR(0x5e0692);
{goto L5e0697;}
}
B5e0694:L5e0694:{c.instructions+=1;NFSU2_TR(0x5e0694);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0697:L5e0697:{c.instructions+=2;NFSU2_TR(0x5e0697);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e0699:{NFSU2_TR(0x5e0699);
if(r1(R+518)){{goto L5e06bb;}}
}
B5e069b:L5e069b:{c.instructions+=2;NFSU2_TR(0x5e069b);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5e069e:{NFSU2_TR(0x5e069e);
if(r1(R+518)){{goto L5e06bb;}}
}
B5e06a0:L5e06a0:{c.instructions+=2;NFSU2_TR(0x5e06a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e06a1:{NFSU2_TR(0x5e06a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e06a6ull));
TAIL_STATIC(0x43db50u,43d);
}
B5e06a6:L5e06a6:{c.instructions+=7;NFSU2_TR(0x5e06a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e06a7:{NFSU2_TR(0x5e06a7);
__builtin_memmove((R+0),(R+28),4);
}
B5e06a9:{NFSU2_TR(0x5e06a9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1dull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5e06ac:{NFSU2_TR(0x5e06ac);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B5e06ae:{NFSU2_TR(0x5e06ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5e06b2:{NFSU2_TR(0x5e06b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e06b3:{NFSU2_TR(0x5e06b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e06b8ull));
TAIL_STATIC(0x48b8b0u,48b);
}
B5e06b8:L5e06b8:{c.instructions+=1;NFSU2_TR(0x5e06b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5e06bb:L5e06bb:{c.instructions+=3;NFSU2_TR(0x5e06bb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e06bc:{NFSU2_TR(0x5e06bc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e06bf:{NFSU2_TR(0x5e06bf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0664u);}goto L5e0664;}}
}
B5e06c1:L5e06c1:{c.instructions+=4;NFSU2_TR(0x5e06c1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x98ull))));
}
B5e06c7:{NFSU2_TR(0x5e06c7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5e06c8:{NFSU2_TR(0x5e06c8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x802018ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x802018ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e06ce:{NFSU2_TR(0x5e06ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0662u);}goto L5e0662;}}
}
B5e06d0:L5e06d0:{c.instructions+=9;NFSU2_TR(0x5e06d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e06d4:{NFSU2_TR(0x5e06d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e06d5:{NFSU2_TR(0x5e06d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e06d6:{NFSU2_TR(0x5e06d6);
__builtin_memmove((R+0),(R+20),4);
}
B5e06d8:{NFSU2_TR(0x5e06d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e06d9:{NFSU2_TR(0x5e06d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e06da:{NFSU2_TR(0x5e06da);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e06e1:{NFSU2_TR(0x5e06e1);
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
B5e06e4:{NFSU2_TR(0x5e06e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0710:L5e0710:{c.instructions+=15;NFSU2_TR(0x5e0710);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0712:{NFSU2_TR(0x5e0712);
u8 U[4];
w4(U+0,u32(0x7793f6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0717:{NFSU2_TR(0x5e0717);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e071d:{NFSU2_TR(0x5e071d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e071e:{NFSU2_TR(0x5e071e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0725:{NFSU2_TR(0x5e0725);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0726:{NFSU2_TR(0x5e0726);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0727:{NFSU2_TR(0x5e0727);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0728:{NFSU2_TR(0x5e0728);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0729:{NFSU2_TR(0x5e0729);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e072a:{NFSU2_TR(0x5e072a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e072e:{NFSU2_TR(0x5e072e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e0736:{NFSU2_TR(0x5e0736);
__builtin_memmove((R+12),(R+4),4);
}
B5e0738:{NFSU2_TR(0x5e0738);
w4(R+20,u32(0x1dull));
}
B5e073d:{NFSU2_TR(0x5e073d);
__builtin_memmove((R+4),(R+4),4);
}
B5e0740:L5e0740:{c.instructions+=2;NFSU2_TR(0x5e0740);
__builtin_memmove((R+24),(R+12),4);
}
B5e0742:{NFSU2_TR(0x5e0742);
w4(R+28,u32(0x7ull));
}
B5e0747:L5e0747:{c.instructions+=2;NFSU2_TR(0x5e0747);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0748:{NFSU2_TR(0x5e0748);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e074dull));
TAIL_STATIC(0x494610u,494);
}
B5e074d:L5e074d:{c.instructions+=4;NFSU2_TR(0x5e074d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e0750:{NFSU2_TR(0x5e0750);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
}
B5e0756:{NFSU2_TR(0x5e0756);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5e0757:{NFSU2_TR(0x5e0757);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0747u);}goto L5e0747;}}
}
B5e0759:L5e0759:{c.instructions+=3;NFSU2_TR(0x5e0759);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B5e075c:{NFSU2_TR(0x5e075c);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B5e075d:{NFSU2_TR(0x5e075d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0740u);}goto L5e0740;}}
}
B5e075f:L5e075f:{c.instructions+=7;NFSU2_TR(0x5e075f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0763:{NFSU2_TR(0x5e0763);
u8 U[4];
w4(U+0,u32(0x4367c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0768:{NFSU2_TR(0x5e0768);
u8 U[4];
w4(U+0,u32(0xcbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e076d:{NFSU2_TR(0x5e076d);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e076f:{NFSU2_TR(0x5e076f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0770:{NFSU2_TR(0x5e0770);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e0778:{NFSU2_TR(0x5e0778);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e077dull));
TAIL_STATIC(0x75c401u,75c);
}
B5e077d:L5e077d:{c.instructions+=8;NFSU2_TR(0x5e077d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e0781:{NFSU2_TR(0x5e0781);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e0782:{NFSU2_TR(0x5e0782);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e0783:{NFSU2_TR(0x5e0783);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e0784:{NFSU2_TR(0x5e0784);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e0785:{NFSU2_TR(0x5e0785);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e078c:{NFSU2_TR(0x5e078c);
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
B5e078f:{NFSU2_TR(0x5e078f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0790:L5e0790:{c.instructions+=9;NFSU2_TR(0x5e0790);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0792:{NFSU2_TR(0x5e0792);
u8 U[4];
w4(U+0,u32(0x779414ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0797:{NFSU2_TR(0x5e0797);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e079d:{NFSU2_TR(0x5e079d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e079e:{NFSU2_TR(0x5e079e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e07a5:{NFSU2_TR(0x5e07a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e07a6:{NFSU2_TR(0x5e07a6);
__builtin_memmove((R+0),gp(0x883e68),4);
}
B5e07ab:{NFSU2_TR(0x5e07ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e07ad:{NFSU2_TR(0x5e07ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e07ee;}}
}
B5e07af:L5e07af:{c.instructions+=2;NFSU2_TR(0x5e07af);
u8 U[4];
w4(U+0,u32(0x658ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e07b4:{NFSU2_TR(0x5e07b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e07b9ull));
TAIL_STATIC(0x575620u,575);
}
B5e07b9:L5e07b9:{c.instructions+=5;NFSU2_TR(0x5e07b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e07bc:{NFSU2_TR(0x5e07bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5e07c0:{NFSU2_TR(0x5e07c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e07c2:{NFSU2_TR(0x5e07c2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e07ca:{NFSU2_TR(0x5e07ca);
if(r1(R+518)){{goto L5e07e7;}}
}
B5e07cc:L5e07cc:{c.instructions+=2;NFSU2_TR(0x5e07cc);
__builtin_memmove((R+4),(R+0),4);
}
B5e07ce:{NFSU2_TR(0x5e07ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e07d3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0620u);}goto L5e0620;}
}
B5e07d3:L5e07d3:{c.instructions+=5;NFSU2_TR(0x5e07d3);
__builtin_memmove(gp(0x883e68),(R+0),4);
}
B5e07d8:{NFSU2_TR(0x5e07d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e07dc:{NFSU2_TR(0x5e07dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e07e3:{NFSU2_TR(0x5e07e3);
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
B5e07e6:{NFSU2_TR(0x5e07e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e07e7:L5e07e7:{c.instructions+=2;NFSU2_TR(0x5e07e7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e07e9:{NFSU2_TR(0x5e07e9);
__builtin_memmove(gp(0x883e68),(R+0),4);
}
B5e07ee:L5e07ee:{c.instructions+=4;NFSU2_TR(0x5e07ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e07f2:{NFSU2_TR(0x5e07f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e07f9:{NFSU2_TR(0x5e07f9);
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
B5e07fc:{NFSU2_TR(0x5e07fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0800:L5e0800:{c.instructions+=5;NFSU2_TR(0x5e0800);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0801:{NFSU2_TR(0x5e0801);
__builtin_memmove((R+24),(R+4),4);
}
B5e0803:{NFSU2_TR(0x5e0803);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e0805:{NFSU2_TR(0x5e0805);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5e0807:{NFSU2_TR(0x5e0807);
if(r1(R+518)){{goto L5e082e;}}
}
B5e0809:L5e0809:{c.instructions+=1;NFSU2_TR(0x5e0809);
__builtin_memmove((R+16),(R+16),4);
}
B5e0810:L5e0810:{c.instructions+=5;NFSU2_TR(0x5e0810);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e0812:{NFSU2_TR(0x5e0812);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e0815:{NFSU2_TR(0x5e0815);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e0817:{NFSU2_TR(0x5e0817);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e081a:{NFSU2_TR(0x5e081a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e081full));
TAIL_STATIC(0x4022c0u,402);
}
B5e081f:L5e081f:{c.instructions+=2;NFSU2_TR(0x5e081f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0820:{NFSU2_TR(0x5e0820);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0825ull));
TAIL_STATIC(0x575630u,575);
}
B5e0825:L5e0825:{c.instructions+=4;NFSU2_TR(0x5e0825);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e0827:{NFSU2_TR(0x5e0827);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e082a:{NFSU2_TR(0x5e082a);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5e082c:{NFSU2_TR(0x5e082c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0810u);}goto L5e0810;}}
}
B5e082e:L5e082e:{c.instructions+=2;NFSU2_TR(0x5e082e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e082f:{NFSU2_TR(0x5e082f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0830:L5e0830:{c.instructions+=5;NFSU2_TR(0x5e0830);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0831:{NFSU2_TR(0x5e0831);
__builtin_memmove((R+24),(R+4),4);
}
B5e0833:{NFSU2_TR(0x5e0833);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e0835:{NFSU2_TR(0x5e0835);
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
B5e0837:{NFSU2_TR(0x5e0837);
if(r1(R+518)){{goto L5e085f;}}
}
B5e0839:L5e0839:{c.instructions+=1;NFSU2_TR(0x5e0839);
__builtin_memmove((R+16),(R+16),4);
}
B5e0840:L5e0840:{c.instructions+=8;NFSU2_TR(0x5e0840);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e0842:{NFSU2_TR(0x5e0842);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e0845:{NFSU2_TR(0x5e0845);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e0847:{NFSU2_TR(0x5e0847);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0848:{NFSU2_TR(0x5e0848);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e084b:{NFSU2_TR(0x5e084b);
__builtin_memmove((R+0),gp(0x883e3c),4);
}
B5e0850:{NFSU2_TR(0x5e0850);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0851:{NFSU2_TR(0x5e0851);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0856ull));
TAIL_STATIC(0x43f920u,43f);
}
B5e0856:L5e0856:{c.instructions+=4;NFSU2_TR(0x5e0856);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e0858:{NFSU2_TR(0x5e0858);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e085b:{NFSU2_TR(0x5e085b);
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
B5e085d:{NFSU2_TR(0x5e085d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0840u);}goto L5e0840;}}
}
B5e085f:L5e085f:{c.instructions+=2;NFSU2_TR(0x5e085f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e0860:{NFSU2_TR(0x5e0860);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0870:L5e0870:{c.instructions+=5;NFSU2_TR(0x5e0870);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0871:{NFSU2_TR(0x5e0871);
__builtin_memmove((R+24),(R+4),4);
}
B5e0873:{NFSU2_TR(0x5e0873);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e0875:{NFSU2_TR(0x5e0875);
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
B5e0877:{NFSU2_TR(0x5e0877);
if(r1(R+518)){{goto L5e089f;}}
}
B5e0879:L5e0879:{c.instructions+=1;NFSU2_TR(0x5e0879);
__builtin_memmove((R+16),(R+16),4);
}
B5e0880:L5e0880:{c.instructions+=8;NFSU2_TR(0x5e0880);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e0882:{NFSU2_TR(0x5e0882);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e0885:{NFSU2_TR(0x5e0885);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e0887:{NFSU2_TR(0x5e0887);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0888:{NFSU2_TR(0x5e0888);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e088b:{NFSU2_TR(0x5e088b);
__builtin_memmove((R+0),gp(0x883e38),4);
}
B5e0890:{NFSU2_TR(0x5e0890);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0891:{NFSU2_TR(0x5e0891);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0896ull));
TAIL_STATIC(0x43f920u,43f);
}
B5e0896:L5e0896:{c.instructions+=4;NFSU2_TR(0x5e0896);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e0898:{NFSU2_TR(0x5e0898);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e089b:{NFSU2_TR(0x5e089b);
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
B5e089d:{NFSU2_TR(0x5e089d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0880u);}goto L5e0880;}}
}
B5e089f:L5e089f:{c.instructions+=2;NFSU2_TR(0x5e089f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e08a0:{NFSU2_TR(0x5e08a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e08b0:L5e08b0:{c.instructions+=13;NFSU2_TR(0x5e08b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e08b2:{NFSU2_TR(0x5e08b2);
u8 U[4];
w4(U+0,u32(0x77942eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e08b7:{NFSU2_TR(0x5e08b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e08bd:{NFSU2_TR(0x5e08bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e08be:{NFSU2_TR(0x5e08be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e08c5:{NFSU2_TR(0x5e08c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e08c6:{NFSU2_TR(0x5e08c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e08c7:{NFSU2_TR(0x5e08c7);
__builtin_memmove((R+24),(R+4),4);
}
B5e08c9:{NFSU2_TR(0x5e08c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e08cc:{NFSU2_TR(0x5e08cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e08cd:{NFSU2_TR(0x5e08cd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e08cf:{NFSU2_TR(0x5e08cf);
w4(R+4,u32(0x107ull));
}
B5e08d4:{NFSU2_TR(0x5e08d4);
__builtin_memmove((R+28),(R+8),4);
}
B5e08d6:L5e08d6:{c.instructions+=1;NFSU2_TR(0x5e08d6);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5e08d8;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e08d6u);}goto L5e08d6;}
}
B5e08d8:L5e08d8:{c.instructions+=10;NFSU2_TR(0x5e08d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4a0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e08de:{NFSU2_TR(0x5e08de);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
s4(u32(r4(R+8)),r4(U+0));
}
B5e08e4:{NFSU2_TR(0x5e08e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e08eb:{NFSU2_TR(0x5e08eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
w4(U+4,u32(0x43000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e08f2:{NFSU2_TR(0x5e08f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e08f6:{NFSU2_TR(0x5e08f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e08f8:{NFSU2_TR(0x5e08f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e08fb:{NFSU2_TR(0x5e08fb);
__builtin_memmove((R+4),(R+24),4);
}
B5e08fd:{NFSU2_TR(0x5e08fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e0905:{NFSU2_TR(0x5e0905);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e090aull));
TAIL_STATIC(0x5dec40u,5de);
}
B5e090a:L5e090a:{c.instructions+=7;NFSU2_TR(0x5e090a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e090e:{NFSU2_TR(0x5e090e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e090f:{NFSU2_TR(0x5e090f);
__builtin_memmove((R+0),(R+24),4);
}
B5e0911:{NFSU2_TR(0x5e0911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e0912:{NFSU2_TR(0x5e0912);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0919:{NFSU2_TR(0x5e0919);
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
B5e091c:{NFSU2_TR(0x5e091c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0920:L5e0920:{c.instructions+=3;NFSU2_TR(0x5e0920);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0923:{NFSU2_TR(0x5e0923);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e0925:{NFSU2_TR(0x5e0925);
if(r1(R+518)){{goto L5e0941;}}
}
B5e0927:L5e0927:{c.instructions+=3;NFSU2_TR(0x5e0927);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e0929:{NFSU2_TR(0x5e0929);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e092b:{NFSU2_TR(0x5e092b);
if(r1(R+518)){{goto L5e0941;}}
}
B5e092d:L5e092d:{c.instructions+=3;NFSU2_TR(0x5e092d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e0930:{NFSU2_TR(0x5e0930);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e0932:{NFSU2_TR(0x5e0932);
if(r1(R+518)){{goto L5e0941;}}
}
B5e0934:L5e0934:{c.instructions+=2;NFSU2_TR(0x5e0934);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B5e093a:{NFSU2_TR(0x5e093a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e0941:L5e0941:{c.instructions+=7;NFSU2_TR(0x5e0941);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0944:{NFSU2_TR(0x5e0944);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e0946:{NFSU2_TR(0x5e0946);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e0949:{NFSU2_TR(0x5e0949);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e094b:{NFSU2_TR(0x5e094b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e094c:{NFSU2_TR(0x5e094c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e094f:{NFSU2_TR(0x5e094f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0954ull));
TAIL_STATIC(0x440ef0u,440);
}
B5e0954:L5e0954:{c.instructions+=2;NFSU2_TR(0x5e0954);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e0955:{NFSU2_TR(0x5e0955);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0960:L5e0960:{c.instructions+=4;NFSU2_TR(0x5e0960);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0961:{NFSU2_TR(0x5e0961);
__builtin_memmove((R+0),gp(0x883d74),4);
}
B5e0966:{NFSU2_TR(0x5e0966);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e0968:{NFSU2_TR(0x5e0968);
if(r1(R+518)){{goto L5e097d;}}
}
B5e096a:L5e096a:{c.instructions+=2;NFSU2_TR(0x5e096a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e096b:{NFSU2_TR(0x5e096b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0970ull));
TAIL_STATIC(0x440e40u,440);
}
B5e0970:L5e0970:{c.instructions+=2;NFSU2_TR(0x5e0970);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e0973:{NFSU2_TR(0x5e0973);
s4(0x883d74,u32(0x0ull));
}
B5e097d:L5e097d:{c.instructions+=6;NFSU2_TR(0x5e097d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e097e:{NFSU2_TR(0x5e097e);
__builtin_memmove((R+24),gp(0x88ff98),4);
}
B5e0984:{NFSU2_TR(0x5e0984);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0985:{NFSU2_TR(0x5e0985);
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
B5e0987:{NFSU2_TR(0x5e0987);
w4(R+4,u32(0x1dull));
}
B5e098c:{NFSU2_TR(0x5e098c);
w4(R+28,u32(0x876c80ull));
}
B5e0991:L5e0991:{c.instructions+=1;NFSU2_TR(0x5e0991);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5e0993;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0991u);}goto L5e0991;}
}
B5e0993:L5e0993:{c.instructions+=2;NFSU2_TR(0x5e0993);
w4(R+4,u32(0x88ff98ull));
}
B5e0998:{NFSU2_TR(0x5e0998);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e099dull));
TAIL_STATIC(0x502fd0u,502);
}
B5e099d:L5e099d:{c.instructions+=3;NFSU2_TR(0x5e099d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e099f:{NFSU2_TR(0x5e099f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e09a3:{NFSU2_TR(0x5e09a3);
if(r1(R+518)){{goto L5e09e4;}}
}
B5e09a5:L5e09a5:{c.instructions+=1;NFSU2_TR(0x5e09a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e09a6:L5e09a6:{c.instructions+=7;NFSU2_TR(0x5e09a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5e09a8:{NFSU2_TR(0x5e09a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e09ab:{NFSU2_TR(0x5e09ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e09ae:{NFSU2_TR(0x5e09ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e09b0:{NFSU2_TR(0x5e09b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e09b1:{NFSU2_TR(0x5e09b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e09b4:{NFSU2_TR(0x5e09b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e09b9ull));
TAIL_STATIC(0x440ef0u,440);
}
B5e09b9:L5e09b9:{c.instructions+=4;NFSU2_TR(0x5e09b9);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e09bc:{NFSU2_TR(0x5e09bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e09bd:{NFSU2_TR(0x5e09bd);
w4(R+4,u32(0x8357e0ull));
}
B5e09c2:{NFSU2_TR(0x5e09c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e09c7ull));
TAIL_STATIC(0x48bd70u,48b);
}
B5e09c7:L5e09c7:{c.instructions+=2;NFSU2_TR(0x5e09c7);
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
B5e09c9:{NFSU2_TR(0x5e09c9);
if(r1(R+518)){{goto L5e09db;}}
}
B5e09cb:L5e09cb:{c.instructions+=2;NFSU2_TR(0x5e09cb);
__builtin_memmove((R+4),(R+12),4);
}
B5e09cd:{NFSU2_TR(0x5e09cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e09d2ull));
TAIL_STATIC(0x433070u,433);
}
B5e09d2:L5e09d2:{c.instructions+=2;NFSU2_TR(0x5e09d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e09d3:{NFSU2_TR(0x5e09d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e09d8ull));
TAIL_STATIC(0x575630u,575);
}
B5e09d8:L5e09d8:{c.instructions+=1;NFSU2_TR(0x5e09d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e09db:L5e09db:{c.instructions+=3;NFSU2_TR(0x5e09db);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e09df:{NFSU2_TR(0x5e09df);
__builtin_memmove((R+24),(R+28),4);
}
B5e09e1:{NFSU2_TR(0x5e09e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e09a6u);}goto L5e09a6;}}
}
B5e09e3:L5e09e3:{c.instructions+=1;NFSU2_TR(0x5e09e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e09e4:L5e09e4:{c.instructions+=2;NFSU2_TR(0x5e09e4);
u8 U[4];
w4(U+0,u32(0x88ea68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e09e9:{NFSU2_TR(0x5e09e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e09eeull));
TAIL_STATIC(0x494610u,494);
}
B5e09ee:L5e09ee:{c.instructions+=5;NFSU2_TR(0x5e09ee);
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
B5e09f1:{NFSU2_TR(0x5e09f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e09f2:{NFSU2_TR(0x5e09f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e09f3:{NFSU2_TR(0x5e09f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e09f4:{NFSU2_TR(0x5e09f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0a00:L5e0a00:{c.instructions+=5;NFSU2_TR(0x5e0a00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0a01:{NFSU2_TR(0x5e0a01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0a02:{NFSU2_TR(0x5e0a02);
__builtin_memmove((R+28),gp(0x88ff98),4);
}
B5e0a08:{NFSU2_TR(0x5e0a08);
w4(R+4,u32(0x88ff98ull));
}
B5e0a0d:{NFSU2_TR(0x5e0a0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0a12ull));
TAIL_STATIC(0x502fd0u,502);
}
B5e0a12:L5e0a12:{c.instructions+=3;NFSU2_TR(0x5e0a12);
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
B5e0a14:{NFSU2_TR(0x5e0a14);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0a18:{NFSU2_TR(0x5e0a18);
if(r1(R+518)){{goto L5e0a63;}}
}
B5e0a1a:L5e0a1a:{c.instructions+=3;NFSU2_TR(0x5e0a1a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0a1b:{NFSU2_TR(0x5e0a1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0a1c:{NFSU2_TR(0x5e0a1c);
__builtin_memmove((R+16),(R+16),4);
}
B5e0a20:L5e0a20:{c.instructions+=4;NFSU2_TR(0x5e0a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e0a23:{NFSU2_TR(0x5e0a23);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e0a27:{NFSU2_TR(0x5e0a27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5e0a29:{NFSU2_TR(0x5e0a29);
if(r1(R+518)){{goto L5e0a5b;}}
}
B5e0a2b:L5e0a2b:{c.instructions+=5;NFSU2_TR(0x5e0a2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0a2e:{NFSU2_TR(0x5e0a2e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e0a30:{NFSU2_TR(0x5e0a30);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0a31:{NFSU2_TR(0x5e0a31);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0a34:{NFSU2_TR(0x5e0a34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0a39ull));
TAIL_STATIC(0x440ef0u,440);
}
B5e0a39:L5e0a39:{c.instructions+=4;NFSU2_TR(0x5e0a39);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e0a3c:{NFSU2_TR(0x5e0a3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0a3d:{NFSU2_TR(0x5e0a3d);
w4(R+4,u32(0x8357e0ull));
}
B5e0a42:{NFSU2_TR(0x5e0a42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0a47ull));
TAIL_STATIC(0x48bd70u,48b);
}
B5e0a47:L5e0a47:{c.instructions+=2;NFSU2_TR(0x5e0a47);
__builtin_memmove((R+4),(R+24),4);
}
B5e0a49:{NFSU2_TR(0x5e0a49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0a4eull));
TAIL_STATIC(0x433070u,433);
}
B5e0a4e:L5e0a4e:{c.instructions+=2;NFSU2_TR(0x5e0a4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0a4f:{NFSU2_TR(0x5e0a4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0a54ull));
TAIL_STATIC(0x575630u,575);
}
B5e0a54:L5e0a54:{c.instructions+=2;NFSU2_TR(0x5e0a54);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0a58:{NFSU2_TR(0x5e0a58);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e0a5b:L5e0a5b:{c.instructions+=3;NFSU2_TR(0x5e0a5b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e0a5d:{NFSU2_TR(0x5e0a5d);
__builtin_memmove((R+28),(R+12),4);
}
B5e0a5f:{NFSU2_TR(0x5e0a5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0a20u);}goto L5e0a20;}}
}
B5e0a61:L5e0a61:{c.instructions+=2;NFSU2_TR(0x5e0a61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e0a62:{NFSU2_TR(0x5e0a62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e0a63:L5e0a63:{c.instructions+=3;NFSU2_TR(0x5e0a63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e0a64:{NFSU2_TR(0x5e0a64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e0a65:{NFSU2_TR(0x5e0a65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0a70:L5e0a70:{c.instructions+=17;NFSU2_TR(0x5e0a70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0a71:{NFSU2_TR(0x5e0a71);
__builtin_memmove((R+20),(R+16),4);
}
B5e0a73:{NFSU2_TR(0x5e0a73);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5e0a76:{NFSU2_TR(0x5e0a76);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0a78:{NFSU2_TR(0x5e0a78);
u8 U[4];
w4(U+0,u32(0x77944bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0a7d:{NFSU2_TR(0x5e0a7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0a83:{NFSU2_TR(0x5e0a83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0a84:{NFSU2_TR(0x5e0a84);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0a8b:{NFSU2_TR(0x5e0a8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5e0a8e:{NFSU2_TR(0x5e0a8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0a8f:{NFSU2_TR(0x5e0a8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0a90:{NFSU2_TR(0x5e0a90);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0a94:{NFSU2_TR(0x5e0a94);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0a97:{NFSU2_TR(0x5e0a97);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e0a9a:{NFSU2_TR(0x5e0a9a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e0a9c:{NFSU2_TR(0x5e0a9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e0aa4:{NFSU2_TR(0x5e0aa4);
if(r1(R+518)){{goto L5e0afe;}}
}
B5e0aa6:L5e0aa6:{c.instructions+=9;NFSU2_TR(0x5e0aa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e0aa8:{NFSU2_TR(0x5e0aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e0aab:{NFSU2_TR(0x5e0aab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e0aad:{NFSU2_TR(0x5e0aad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e0ab0:{NFSU2_TR(0x5e0ab0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e0ab2:{NFSU2_TR(0x5e0ab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0ab5:{NFSU2_TR(0x5e0ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0ab8:{NFSU2_TR(0x5e0ab8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e0aba:{NFSU2_TR(0x5e0aba);
if(r1(R+518)){{goto L5e0ad6;}}
}
B5e0abc:L5e0abc:{c.instructions+=3;NFSU2_TR(0x5e0abc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e0abe:{NFSU2_TR(0x5e0abe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e0ac0:{NFSU2_TR(0x5e0ac0);
if(r1(R+518)){{goto L5e0ad6;}}
}
B5e0ac2:L5e0ac2:{c.instructions+=3;NFSU2_TR(0x5e0ac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e0ac5:{NFSU2_TR(0x5e0ac5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e0ac7:{NFSU2_TR(0x5e0ac7);
if(r1(R+518)){{goto L5e0ad6;}}
}
B5e0ac9:L5e0ac9:{c.instructions+=2;NFSU2_TR(0x5e0ac9);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5e0acf:{NFSU2_TR(0x5e0acf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e0ad6:L5e0ad6:{c.instructions+=7;NFSU2_TR(0x5e0ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0ad9:{NFSU2_TR(0x5e0ad9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e0adb:{NFSU2_TR(0x5e0adb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e0ade:{NFSU2_TR(0x5e0ade);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e0ae0:{NFSU2_TR(0x5e0ae0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0ae1:{NFSU2_TR(0x5e0ae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0ae4:{NFSU2_TR(0x5e0ae4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0ae9ull));
TAIL_STATIC(0x440ef0u,440);
}
B5e0ae9:L5e0ae9:{c.instructions+=4;NFSU2_TR(0x5e0ae9);
__builtin_memmove((R+0),gp(0x883d74),4);
}
B5e0aee:{NFSU2_TR(0x5e0aee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0aef:{NFSU2_TR(0x5e0aef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0af0:{NFSU2_TR(0x5e0af0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0af5ull));
TAIL_STATIC(0x43f920u,43f);
}
B5e0af5:L5e0af5:{c.instructions+=4;NFSU2_TR(0x5e0af5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e0af7:{NFSU2_TR(0x5e0af7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5e0afa:{NFSU2_TR(0x5e0afa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e0afc:{NFSU2_TR(0x5e0afc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0aa6u);}goto L5e0aa6;}}
}
B5e0afe:L5e0afe:{c.instructions+=4;NFSU2_TR(0x5e0afe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e0b00:{NFSU2_TR(0x5e0b00);
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
B5e0b02:{NFSU2_TR(0x5e0b02);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e0b0a:{NFSU2_TR(0x5e0b0a);
if(r1(R+518)){{goto L5e0b29;}}
}
B5e0b0c:L5e0b0c:{c.instructions+=1;NFSU2_TR(0x5e0b0c);
__builtin_memmove((R+16),(R+16),4);
}
B5e0b10:L5e0b10:{c.instructions+=6;NFSU2_TR(0x5e0b10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e0b12:{NFSU2_TR(0x5e0b12);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e0b15:{NFSU2_TR(0x5e0b15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e0b17:{NFSU2_TR(0x5e0b17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0b18:{NFSU2_TR(0x5e0b18);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0b1b:{NFSU2_TR(0x5e0b1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0b20ull));
TAIL_STATIC(0x440ef0u,440);
}
B5e0b20:L5e0b20:{c.instructions+=4;NFSU2_TR(0x5e0b20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e0b22:{NFSU2_TR(0x5e0b22);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e0b25:{NFSU2_TR(0x5e0b25);
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
B5e0b27:{NFSU2_TR(0x5e0b27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0b10u);}goto L5e0b10;}}
}
B5e0b29:L5e0b29:{c.instructions+=7;NFSU2_TR(0x5e0b29);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e0b2d:{NFSU2_TR(0x5e0b2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e0b2e:{NFSU2_TR(0x5e0b2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0b35:{NFSU2_TR(0x5e0b35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e0b36:{NFSU2_TR(0x5e0b36);
__builtin_memmove((R+16),(R+20),4);
}
B5e0b38:{NFSU2_TR(0x5e0b38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e0b39:{NFSU2_TR(0x5e0b39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0b40:L5e0b40:{c.instructions+=29;NFSU2_TR(0x5e0b40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0b41:{NFSU2_TR(0x5e0b41);
__builtin_memmove((R+24),(R+4),4);
}
B5e0b43:{NFSU2_TR(0x5e0b43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0xc479c000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e0b4a:{NFSU2_TR(0x5e0b4a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0b4b:{NFSU2_TR(0x5e0b4b);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e0b4d:{NFSU2_TR(0x5e0b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0b50:{NFSU2_TR(0x5e0b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0b53:{NFSU2_TR(0x5e0b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0b56:{NFSU2_TR(0x5e0b56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0b59:{NFSU2_TR(0x5e0b59);
__builtin_memmove((R+0),gp(0x88f74c),4);
}
B5e0b5e:{NFSU2_TR(0x5e0b5e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e0b60:{NFSU2_TR(0x5e0b60);
__builtin_memmove(gp(0x88f74c),(R+24),4);
}
B5e0b66:{NFSU2_TR(0x5e0b66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0b69:{NFSU2_TR(0x5e0b69);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e0b6c:{NFSU2_TR(0x5e0b6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0b6d:{NFSU2_TR(0x5e0b6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e0b70:{NFSU2_TR(0x5e0b70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0b71:{NFSU2_TR(0x5e0b71);
u8 U[4];
w4(U+0,u32(0x88f748ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5e0b77:{NFSU2_TR(0x5e0b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0b7d:{NFSU2_TR(0x5e0b7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0b83:{NFSU2_TR(0x5e0b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0b89:{NFSU2_TR(0x5e0b89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0b8f:{NFSU2_TR(0x5e0b8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x304ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0b95:{NFSU2_TR(0x5e0b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2bcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0b9b:{NFSU2_TR(0x5e0b9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0ba1:{NFSU2_TR(0x5e0ba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0ba7:{NFSU2_TR(0x5e0ba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0bad:{NFSU2_TR(0x5e0bad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x310ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0bb3:{NFSU2_TR(0x5e0bb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0bb8ull));
TAIL_STATIC(0x43d220u,43d);
}
B5e0bb8:L5e0bb8:{c.instructions+=3;NFSU2_TR(0x5e0bb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e0bbb:{NFSU2_TR(0x5e0bbb);
__builtin_memmove((R+4),(R+24),4);
}
B5e0bbd:{NFSU2_TR(0x5e0bbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0bc2ull));
TAIL_STATIC(0x5dc9c0u,5dc);
}
B5e0bc2:L5e0bc2:{c.instructions+=5;NFSU2_TR(0x5e0bc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e0bc5:{NFSU2_TR(0x5e0bc5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0bc6:{NFSU2_TR(0x5e0bc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e0bc9:{NFSU2_TR(0x5e0bc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0bca:{NFSU2_TR(0x5e0bca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0bcfull));
TAIL_STATIC(0x43d220u,43d);
}
B5e0bcf:L5e0bcf:{c.instructions+=9;NFSU2_TR(0x5e0bcf);
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
B5e0bd2:{NFSU2_TR(0x5e0bd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0bd5:{NFSU2_TR(0x5e0bd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0bd8:{NFSU2_TR(0x5e0bd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0bdb:{NFSU2_TR(0x5e0bdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e0bdc:{NFSU2_TR(0x5e0bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0xc479c000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e0be3:{NFSU2_TR(0x5e0be3);
__builtin_memmove((R+0),(R+24),4);
}
B5e0be5:{NFSU2_TR(0x5e0be5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e0be6:{NFSU2_TR(0x5e0be6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0bf0:L5e0bf0:{c.instructions+=7;NFSU2_TR(0x5e0bf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0bf1:{NFSU2_TR(0x5e0bf1);
__builtin_memmove((R+24),(R+4),4);
}
B5e0bf3:{NFSU2_TR(0x5e0bf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e0bf6:{NFSU2_TR(0x5e0bf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0bf7:{NFSU2_TR(0x5e0bf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e0bfa:{NFSU2_TR(0x5e0bfa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0bfb:{NFSU2_TR(0x5e0bfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0c00ull));
TAIL_STATIC(0x43d220u,43d);
}
B5e0c00:L5e0c00:{c.instructions+=3;NFSU2_TR(0x5e0c00);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e0c03:{NFSU2_TR(0x5e0c03);
__builtin_memmove((R+4),(R+24),4);
}
B5e0c05:{NFSU2_TR(0x5e0c05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0c0aull));
TAIL_STATIC(0x5dc9c0u,5dc);
}
B5e0c0a:L5e0c0a:{c.instructions+=5;NFSU2_TR(0x5e0c0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e0c0d:{NFSU2_TR(0x5e0c0d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0c0e:{NFSU2_TR(0x5e0c0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e0c11:{NFSU2_TR(0x5e0c11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0c12:{NFSU2_TR(0x5e0c12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0c17ull));
TAIL_STATIC(0x43d220u,43d);
}
B5e0c17:L5e0c17:{c.instructions+=12;NFSU2_TR(0x5e0c17);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e0c19:{NFSU2_TR(0x5e0c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0c1c:{NFSU2_TR(0x5e0c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0c1f:{NFSU2_TR(0x5e0c1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0c22:{NFSU2_TR(0x5e0c22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0xc479c000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e0c29:{NFSU2_TR(0x5e0c29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e0c2b:{NFSU2_TR(0x5e0c2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e0c2e:{NFSU2_TR(0x5e0c2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5e0c30:{NFSU2_TR(0x5e0c30);
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
B5e0c33:{NFSU2_TR(0x5e0c33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0c36:{NFSU2_TR(0x5e0c36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e0c37:{NFSU2_TR(0x5e0c37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0c40:L5e0c40:{c.instructions+=8;NFSU2_TR(0x5e0c40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0c41:{NFSU2_TR(0x5e0c41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0c42:{NFSU2_TR(0x5e0c42);
__builtin_memmove((R+12),(R+4),4);
}
B5e0c44:{NFSU2_TR(0x5e0c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0c47:{NFSU2_TR(0x5e0c47);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e0c4a:{NFSU2_TR(0x5e0c4a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e0c4c:{NFSU2_TR(0x5e0c4c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0c4d:{NFSU2_TR(0x5e0c4d);
if(r1(R+518)){{goto L5e0c5b;}}
}
B5e0c4f:L5e0c4f:{c.instructions+=1;NFSU2_TR(0x5e0c4f);
}
B5e0c50:L5e0c50:{c.instructions+=2;NFSU2_TR(0x5e0c50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e0c52:{NFSU2_TR(0x5e0c52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0c57ull));
TAIL_STATIC(0x5dc9c0u,5dc);
}
B5e0c57:L5e0c57:{c.instructions+=2;NFSU2_TR(0x5e0c57);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5e0c59:{NFSU2_TR(0x5e0c59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0c50u);}goto L5e0c50;}}
}
B5e0c5b:L5e0c5b:{c.instructions+=4;NFSU2_TR(0x5e0c5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e0c5e:{NFSU2_TR(0x5e0c5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e0c61:{NFSU2_TR(0x5e0c61);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e0c63:{NFSU2_TR(0x5e0c63);
if(r1(R+518)){{goto L5e0c7b;}}
}
B5e0c65:L5e0c65:{c.instructions+=3;NFSU2_TR(0x5e0c65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0c68:{NFSU2_TR(0x5e0c68);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e0c6a:{NFSU2_TR(0x5e0c6a);
if(r1(R+518)){{goto L5e0c75;}}
}
B5e0c6c:L5e0c6c:{c.instructions+=2;NFSU2_TR(0x5e0c6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0c6d:{NFSU2_TR(0x5e0c6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0c72ull));
TAIL_STATIC(0x593da0u,593);
}
B5e0c72:L5e0c72:{c.instructions+=1;NFSU2_TR(0x5e0c72);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e0c75:L5e0c75:{c.instructions+=3;NFSU2_TR(0x5e0c75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5e0c77:{NFSU2_TR(0x5e0c77);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e0c79:{NFSU2_TR(0x5e0c79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e0c65u);}goto L5e0c65;}}
}
B5e0c7b:L5e0c7b:{c.instructions+=3;NFSU2_TR(0x5e0c7b);
u8 U[4];
w4(U+0,u32(0x7fffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0c80:{NFSU2_TR(0x5e0c80);
__builtin_memmove((R+4),(R+12),4);
}
B5e0c82:{NFSU2_TR(0x5e0c82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0c87ull));
TAIL_STATIC(0x5dca70u,5dc);
}
B5e0c87:L5e0c87:{c.instructions+=4;NFSU2_TR(0x5e0c87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e0c88:{NFSU2_TR(0x5e0c88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e0c89:{NFSU2_TR(0x5e0c89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e0c8a:{NFSU2_TR(0x5e0c8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0c90:L5e0c90:{c.instructions+=12;NFSU2_TR(0x5e0c90);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0c96:{NFSU2_TR(0x5e0c96);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0c98:{NFSU2_TR(0x5e0c98);
u8 U[4];
w4(U+0,u32(0x77946bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0c9d:{NFSU2_TR(0x5e0c9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0c9e:{NFSU2_TR(0x5e0c9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0ca5:{NFSU2_TR(0x5e0ca5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0ca6:{NFSU2_TR(0x5e0ca6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0ca7:{NFSU2_TR(0x5e0ca7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e0cab:{NFSU2_TR(0x5e0cab);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e0caf:{NFSU2_TR(0x5e0caf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e0cb1:{NFSU2_TR(0x5e0cb1);
__builtin_memmove((R+24),(R+4),4);
}
B5e0cb3:{NFSU2_TR(0x5e0cb3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e0d02;}}
}
B5e0cb5:L5e0cb5:{c.instructions+=3;NFSU2_TR(0x5e0cb5);
__builtin_memmove((R+0),gp(0x88ea8c),4);
}
B5e0cba:{NFSU2_TR(0x5e0cba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x88ea8cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e0cbf:{NFSU2_TR(0x5e0cbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e0cd2;}}
}
B5e0cc1:L5e0cc1:{c.instructions+=3;NFSU2_TR(0x5e0cc1);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0cc3:{NFSU2_TR(0x5e0cc3);
w4(R+4,u32(0x88f768ull));
}
B5e0cc8:{NFSU2_TR(0x5e0cc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0ccdull));
TAIL_STATIC(0x5dcad0u,5dc);
}
B5e0ccd:L5e0ccd:{c.instructions+=1;NFSU2_TR(0x5e0ccd);
__builtin_memmove((R+0),gp(0x88ea8c),4);
}
B5e0cd2:L5e0cd2:{c.instructions+=9;NFSU2_TR(0x5e0cd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5e0cd4:{NFSU2_TR(0x5e0cd4);
__builtin_memmove((R+4),(R+0),4);
}
B5e0cd6:{NFSU2_TR(0x5e0cd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0cd9:{NFSU2_TR(0x5e0cd9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e0cdb:{NFSU2_TR(0x5e0cdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0cde:{NFSU2_TR(0x5e0cde);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0ce2:{NFSU2_TR(0x5e0ce2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0ce3:{NFSU2_TR(0x5e0ce3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e0ceb:{NFSU2_TR(0x5e0ceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0cf0ull));
TAIL_STATIC(0x5d7f10u,5d7);
}
B5e0cf0:L5e0cf0:{c.instructions+=7;NFSU2_TR(0x5e0cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e0cf3:{NFSU2_TR(0x5e0cf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e0cf6:{NFSU2_TR(0x5e0cf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e0cf8:{NFSU2_TR(0x5e0cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0cfb:{NFSU2_TR(0x5e0cfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0cfe:{NFSU2_TR(0x5e0cfe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e0d00:{NFSU2_TR(0x5e0d00);
{goto L5e0d0d;}
}
B5e0d02:L5e0d02:{c.instructions+=3;NFSU2_TR(0x5e0d02);
__builtin_memmove((R+4),gp(0x883d90),4);
}
B5e0d08:{NFSU2_TR(0x5e0d08);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5e0d0b:{NFSU2_TR(0x5e0d0b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5e0d0d:L5e0d0d:{c.instructions+=7;NFSU2_TR(0x5e0d0d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B5e0d10:{NFSU2_TR(0x5e0d10);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e0d14:{NFSU2_TR(0x5e0d14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e0d15:{NFSU2_TR(0x5e0d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0d1c:{NFSU2_TR(0x5e0d1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e0d1d:{NFSU2_TR(0x5e0d1d);
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
B5e0d20:{NFSU2_TR(0x5e0d20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0d30:L5e0d30:{c.instructions+=6;NFSU2_TR(0x5e0d30);
__builtin_memmove((R+0),gp(0x883d90),4);
}
B5e0d35:{NFSU2_TR(0x5e0d35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2c0ull))));
}
B5e0d3b:{NFSU2_TR(0x5e0d3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e0d3d:{NFSU2_TR(0x5e0d3d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0d3e:{NFSU2_TR(0x5e0d3e);
__builtin_memmove((R+20),(R+4),4);
}
B5e0d40:{NFSU2_TR(0x5e0d40);
if(r1(R+518)){{goto L5e0d49;}}
}
B5e0d42:L5e0d42:{c.instructions+=3;NFSU2_TR(0x5e0d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0d45:{NFSU2_TR(0x5e0d45);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e0d47:{NFSU2_TR(0x5e0d47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e0d55;}}
}
B5e0d49:L5e0d49:{c.instructions+=4;NFSU2_TR(0x5e0d49);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e0d4b:{NFSU2_TR(0x5e0d4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e0d4c:{NFSU2_TR(0x5e0d4c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2c0ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2c0ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2c0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e0d52:{NFSU2_TR(0x5e0d52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e0d55:L5e0d55:{c.instructions+=8;NFSU2_TR(0x5e0d55);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0d56:{NFSU2_TR(0x5e0d56);
u8 U[8];
w4(U+0,u32(u32(u32(0x2d0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e0d5d:{NFSU2_TR(0x5e0d5d);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e0d5f:{NFSU2_TR(0x5e0d5f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0d60:{NFSU2_TR(0x5e0d60);
{u32 ea_=u32(r4(R+20)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e0d63:{NFSU2_TR(0x5e0d63);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e0d64:{NFSU2_TR(0x5e0d64);
{u32 ea_=u32(u32(8016256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e0d6a:{NFSU2_TR(0x5e0d6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0d6full));
TAIL_STATIC(0x75bed4u,75b);
}
B5e0d6f:L5e0d6f:{c.instructions+=6;NFSU2_TR(0x5e0d6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2dcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e0d76:{NFSU2_TR(0x5e0d76);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e0d78:{NFSU2_TR(0x5e0d78);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0d7c:{NFSU2_TR(0x5e0d7c);
{u32 ea_=u32(r4(R+20)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e0d7f:{NFSU2_TR(0x5e0d7f);
{u32 ea_=u32(u32(8016256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e0d85:{NFSU2_TR(0x5e0d85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0d8aull));
TAIL_STATIC(0x75bed4u,75b);
}
B5e0d8a:L5e0d8a:{c.instructions+=5;NFSU2_TR(0x5e0d8a);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e0d8d:{NFSU2_TR(0x5e0d8d);
{u32 ea_=u32(r4(R+20)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e0d90:{NFSU2_TR(0x5e0d90);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0d94:{NFSU2_TR(0x5e0d94);
{u32 ea_=u32(u32(8016256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e0d9a:{NFSU2_TR(0x5e0d9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0d9full));
TAIL_STATIC(0x75bed4u,75b);
}
B5e0d9f:L5e0d9f:{c.instructions+=18;NFSU2_TR(0x5e0d9f);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e0da2:{NFSU2_TR(0x5e0da2);
{u32 ea_=u32(r4(R+20)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e0da5:{NFSU2_TR(0x5e0da5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e0da8:{NFSU2_TR(0x5e0da8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5e0daa:{NFSU2_TR(0x5e0daa);
__builtin_memmove((R+24),(R+0),4);
}
B5e0dac:{NFSU2_TR(0x5e0dac);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e0dae:{NFSU2_TR(0x5e0dae);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0db2:{NFSU2_TR(0x5e0db2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0db6:{NFSU2_TR(0x5e0db6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0dba:{NFSU2_TR(0x5e0dba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e0dbc:{NFSU2_TR(0x5e0dbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0dc0:{NFSU2_TR(0x5e0dc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0dc3:{NFSU2_TR(0x5e0dc3);
{u32 ea_=u32(u32(8016256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e0dc9:{NFSU2_TR(0x5e0dc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0dcd:{NFSU2_TR(0x5e0dcd);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0dd1:{NFSU2_TR(0x5e0dd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0dd5:{NFSU2_TR(0x5e0dd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0dd9:{NFSU2_TR(0x5e0dd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0ddeull));
TAIL_STATIC(0x75bed4u,75b);
}
B5e0dde:L5e0dde:{c.instructions+=3;NFSU2_TR(0x5e0dde);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e0de0:{NFSU2_TR(0x5e0de0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0de4:{NFSU2_TR(0x5e0de4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x5e10b1u,5e1);}
}
B5e0dea:L5e0dea:{c.instructions+=5;NFSU2_TR(0x5e0dea);
__builtin_memmove((R+12),(R+12),4);
}
B5e0df0:{NFSU2_TR(0x5e0df0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e0df4:{NFSU2_TR(0x5e0df4);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e0df8:{NFSU2_TR(0x5e0df8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0dfc:{NFSU2_TR(0x5e0dfc);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x5e10a4u,5e1);}
}
B5e0e02:L5e0e02:{c.instructions+=14;NFSU2_TR(0x5e0e02);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e0e06:{NFSU2_TR(0x5e0e06);
{u32 ea_=u32(u32(7894452u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e0e0c:{NFSU2_TR(0x5e0e0c);
__builtin_memmove((R+16),(R+16),4);
}
B5e0e10:{NFSU2_TR(0x5e0e10);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e0e14:{NFSU2_TR(0x5e0e14);
{u32 ea_=u32(u32(7894452u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e0e1a:{NFSU2_TR(0x5e0e1a);
{u32 ea_=u32(r4(R+20)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e0e1d:{NFSU2_TR(0x5e0e1d);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5e0e1f:{NFSU2_TR(0x5e0e1f);
{u32 ea_=u32(r4(R+20)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e0e22:{NFSU2_TR(0x5e0e22);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e0e26:{NFSU2_TR(0x5e0e26);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e0e28:{NFSU2_TR(0x5e0e28);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e0e2a:{NFSU2_TR(0x5e0e2a);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e0e30:{NFSU2_TR(0x5e0e30);
{u32 ea_=u32(u32(8016592u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e0e36:{NFSU2_TR(0x5e0e36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0e3bull));
TAIL_STATIC(0x75bed4u,75b);
}
B5e0e3b:L5e0e3b:{c.instructions+=9;NFSU2_TR(0x5e0e3b);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e0e3d:{NFSU2_TR(0x5e0e3d);
w4(R+4,u32(0x1ull));
}
B5e0e42:{NFSU2_TR(0x5e0e42);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5e0e44:{NFSU2_TR(0x5e0e44);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5e0e46:{NFSU2_TR(0x5e0e46);
w4(R+24,u32(0x1ull));
}
B5e0e4b:{NFSU2_TR(0x5e0e4b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B5e0e4d:{NFSU2_TR(0x5e0e4d);
{u32 ea_=u32(u32(7897444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e0e53:{NFSU2_TR(0x5e0e53);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B5e0e54:{NFSU2_TR(0x5e0e54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0e59ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5e0e59:L5e0e59:{c.instructions+=13;NFSU2_TR(0x5e0e59);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e0e5b:{NFSU2_TR(0x5e0e5b);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e0e5e:{NFSU2_TR(0x5e0e5e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e0e60:{NFSU2_TR(0x5e0e60);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e0e63:{NFSU2_TR(0x5e0e63);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e0e65:{NFSU2_TR(0x5e0e65);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B5e0e68:{NFSU2_TR(0x5e0e68);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e0e6e:{NFSU2_TR(0x5e0e6e);
{u32 ea_=u32(u32(8016592u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e0e74:{NFSU2_TR(0x5e0e74);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5e0e75:{NFSU2_TR(0x5e0e75);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B5e0e77:{NFSU2_TR(0x5e0e77);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B5e0e79:{NFSU2_TR(0x5e0e79);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfull))));
}
B5e0e7c:{NFSU2_TR(0x5e0e7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0e81ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5e0e81:L5e0e81:{c.instructions+=9;NFSU2_TR(0x5e0e81);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e0e84:{NFSU2_TR(0x5e0e84);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e0e88:{NFSU2_TR(0x5e0e88);
w4(R+4,u32(0x1ull));
}
B5e0e8d:{NFSU2_TR(0x5e0e8d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5e0e8f:{NFSU2_TR(0x5e0e8f);
w4(R+28,u32(0x1ull));
}
B5e0e94:{NFSU2_TR(0x5e0e94);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B5e0e96:{NFSU2_TR(0x5e0e96);
{u32 ea_=u32(u32(7897444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e0e9c:{NFSU2_TR(0x5e0e9c);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B5e0e9d:{NFSU2_TR(0x5e0e9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e0ea2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5e0ea2:L5e0ea2:{c.instructions+=11;NFSU2_TR(0x5e0ea2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e0ea4:{NFSU2_TR(0x5e0ea4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e0ea6:{NFSU2_TR(0x5e0ea6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B5e0ea9:{NFSU2_TR(0x5e0ea9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e0eb1:{NFSU2_TR(0x5e0eb1);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5e0eb2:{NFSU2_TR(0x5e0eb2);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B5e0eb4:{NFSU2_TR(0x5e0eb4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B5e0eb6:{NFSU2_TR(0x5e0eb6);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfull))));
}
B5e0eb9:{NFSU2_TR(0x5e0eb9);
__builtin_memmove((R+0),(R+28),4);
}
B5e0ebb:{NFSU2_TR(0x5e0ebb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e0ebd:{NFSU2_TR(0x5e0ebd);
if(r1(R+518)){{goto L5e0ec3;}}
}
B5e0ebf:L5e0ebf:{c.instructions+=1;NFSU2_TR(0x5e0ebf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0ec3:L5e0ec3:{c.instructions+=2;NFSU2_TR(0x5e0ec3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e0ec5:{NFSU2_TR(0x5e0ec5);
if(r1(R+518)){{goto L5e0ed6;}}
}
B5e0ec7:L5e0ec7:{c.instructions+=5;NFSU2_TR(0x5e0ec7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e0ecb:{NFSU2_TR(0x5e0ecb);
__builtin_memmove((R+4),(R+24),4);
}
B5e0ecd:{NFSU2_TR(0x5e0ecd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5e0ed0:{NFSU2_TR(0x5e0ed0);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B5e0ed2:{NFSU2_TR(0x5e0ed2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0ed6:L5e0ed6:{c.instructions+=2;NFSU2_TR(0x5e0ed6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e0ed8:{NFSU2_TR(0x5e0ed8);
if(r1(R+518)){{goto L5e0ee9;}}
}
B5e0eda:L5e0eda:{c.instructions+=5;NFSU2_TR(0x5e0eda);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e0ede:{NFSU2_TR(0x5e0ede);
__builtin_memmove((R+8),(R+24),4);
}
B5e0ee0:{NFSU2_TR(0x5e0ee0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5e0ee3:{NFSU2_TR(0x5e0ee3);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B5e0ee5:{NFSU2_TR(0x5e0ee5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0ee9:L5e0ee9:{c.instructions+=2;NFSU2_TR(0x5e0ee9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e0eeb:{NFSU2_TR(0x5e0eeb);
if(r1(R+518)){{goto L5e0efa;}}
}
B5e0eed:L5e0eed:{c.instructions+=4;NFSU2_TR(0x5e0eed);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e0ef1:{NFSU2_TR(0x5e0ef1);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5e0ef4:{NFSU2_TR(0x5e0ef4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+24))));
}
B5e0ef6:{NFSU2_TR(0x5e0ef6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0efa:L5e0efa:{c.instructions+=10;NFSU2_TR(0x5e0efa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e0efe:{NFSU2_TR(0x5e0efe);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e0f02:{NFSU2_TR(0x5e0f02);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e0f04:{NFSU2_TR(0x5e0f04);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e0f06:{NFSU2_TR(0x5e0f06);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B5e0f09:{NFSU2_TR(0x5e0f09);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e0f0c:{NFSU2_TR(0x5e0f0c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5e0f0d:{NFSU2_TR(0x5e0f0d);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B5e0f0f:{NFSU2_TR(0x5e0f0f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e0f11:{NFSU2_TR(0x5e0f11);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e0f15;}}
}
B5e0f13:L5e0f13:{c.instructions+=1;NFSU2_TR(0x5e0f13);
__builtin_memmove((R+4),(R+24),4);
}
B5e0f15:L5e0f15:{c.instructions+=10;NFSU2_TR(0x5e0f15);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5e0f19:{NFSU2_TR(0x5e0f19);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e0f1d:{NFSU2_TR(0x5e0f1d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5e0f1f:{NFSU2_TR(0x5e0f1f);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B5e0f20:{NFSU2_TR(0x5e0f20);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e0f22:{NFSU2_TR(0x5e0f22);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B5e0f25:{NFSU2_TR(0x5e0f25);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5e0f26:{NFSU2_TR(0x5e0f26);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+28))));
}
B5e0f28:{NFSU2_TR(0x5e0f28);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e0f2a:{NFSU2_TR(0x5e0f2a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e0f2e;}}
}
B5e0f2c:L5e0f2c:{c.instructions+=1;NFSU2_TR(0x5e0f2c);
__builtin_memmove((R+24),(R+8),4);
}
B5e0f2e:L5e0f2e:{c.instructions+=10;NFSU2_TR(0x5e0f2e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5e0f31:{NFSU2_TR(0x5e0f31);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5e0f33:{NFSU2_TR(0x5e0f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e0f36:{NFSU2_TR(0x5e0f36);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+28,u32(r2(U+12)));
}
B5e0f3b:{NFSU2_TR(0x5e0f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5e0f3e:{NFSU2_TR(0x5e0f3e);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B5e0f41:{NFSU2_TR(0x5e0f41);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B5e0f43:{NFSU2_TR(0x5e0f43);
__builtin_memmove((R+24),(R+4),4);
}
B5e0f45:{NFSU2_TR(0x5e0f45);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e0f47:{NFSU2_TR(0x5e0f47);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5e107eu,5e1);}
}
B5e0f4d:L5e0f4d:{c.instructions+=7;NFSU2_TR(0x5e0f4d);
__builtin_memmove((R+4),(R+4),4);
}
B5e0f50:{NFSU2_TR(0x5e0f50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e0f53:{NFSU2_TR(0x5e0f53);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(r2(U+12)));
}
B5e0f58:{NFSU2_TR(0x5e0f58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5e0f5b:{NFSU2_TR(0x5e0f5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e0f5f:{NFSU2_TR(0x5e0f5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e0f61:{NFSU2_TR(0x5e0f61);
if(r1(R+518)){TAIL_STATIC(0x5e1075u,5e1);}
}
B5e0f67:L5e0f67:{c.instructions+=7;NFSU2_TR(0x5e0f67);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B5e0f6a:{NFSU2_TR(0x5e0f6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e0f6d:{NFSU2_TR(0x5e0f6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5e0f70:{NFSU2_TR(0x5e0f70);
u8 U[13];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B5e0f74:{NFSU2_TR(0x5e0f74);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5e0f76:{NFSU2_TR(0x5e0f76);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e0f79:{NFSU2_TR(0x5e0f79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5e106eu,5e1);}
}
B5e0f7f:L5e0f7f:{c.instructions+=12;NFSU2_TR(0x5e0f7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B5e0f83:{NFSU2_TR(0x5e0f83);
__builtin_memmove((R+0),(R+8),4);
}
B5e0f85:{NFSU2_TR(0x5e0f85);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B5e0f88:{NFSU2_TR(0x5e0f88);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(s32(s16(r2(U+12)))));
}
B5e0f8d:{NFSU2_TR(0x5e0f8d);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5e0f90:{NFSU2_TR(0x5e0f90);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0f94:{NFSU2_TR(0x5e0f94);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e0f98:{NFSU2_TR(0x5e0f98);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e0f9e:{NFSU2_TR(0x5e0f9e);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e0fa2:{NFSU2_TR(0x5e0fa2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e0fa4:{NFSU2_TR(0x5e0fa4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e0fa7:{NFSU2_TR(0x5e0fa7);
if(r1(R+514)){TAIL_STATIC(0x5e106eu,5e1);}
}
B5e0fad:L5e0fad:{c.instructions+=12;NFSU2_TR(0x5e0fad);
__builtin_memmove((R+0),(R+8),4);
}
B5e0faf:{NFSU2_TR(0x5e0faf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e0fb2:{NFSU2_TR(0x5e0fb2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B5e0fb5:{NFSU2_TR(0x5e0fb5);
u8 U[14];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(s32(s16(r2(U+12)))));
}
B5e0fba:{NFSU2_TR(0x5e0fba);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5e0fbd:{NFSU2_TR(0x5e0fbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0fc1:{NFSU2_TR(0x5e0fc1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e0fc5:{NFSU2_TR(0x5e0fc5);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e0fcb:{NFSU2_TR(0x5e0fcb);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e0fcf:{NFSU2_TR(0x5e0fcf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e0fd1:{NFSU2_TR(0x5e0fd1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e0fd4:{NFSU2_TR(0x5e0fd4);
if(r1(R+514)){TAIL_STATIC(0x5e106eu,5e1);}
}
B5e0fda:L5e0fda:{c.instructions+=11;NFSU2_TR(0x5e0fda);
__builtin_memmove((R+0),(R+8),4);
}
B5e0fdc:{NFSU2_TR(0x5e0fdc);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e0fdf:{NFSU2_TR(0x5e0fdf);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B5e0fe2:{NFSU2_TR(0x5e0fe2);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(s32(s16(r2(U+12)))));
}
B5e0fe7:{NFSU2_TR(0x5e0fe7);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5e0fea:{NFSU2_TR(0x5e0fea);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e0fee:{NFSU2_TR(0x5e0fee);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e0ff2:{NFSU2_TR(0x5e0ff2);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e0ff8:{NFSU2_TR(0x5e0ff8);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e0ffc:{NFSU2_TR(0x5e0ffc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e0ffe:{NFSU2_TR(0x5e0ffe);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
TAIL_STATIC(0x5e1001u,5e1);
}
XIT:NFSU2_TR_EXIT(0x5e0,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
