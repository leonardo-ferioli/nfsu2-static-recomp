#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6fc(u8* __restrict R,Cpu& c);
u32 body_6fd(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6fb,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6fb,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6fb(u8* __restrict R,Cpu& c);
u32 page_6fb(Cpu& c){return body_6fb(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6fb(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6fb001:goto L6fb001;
case 0x6fb002:c.instructions+=1;goto B6fb002;
case 0x6fb003:goto L6fb003;
case 0x6fb004:c.instructions+=4;goto B6fb004;
case 0x6fb006:c.instructions+=3;goto B6fb006;
case 0x6fb009:c.instructions+=2;goto B6fb009;
case 0x6fb00c:c.instructions+=1;goto B6fb00c;
case 0x6fb00e:goto L6fb00e;
case 0x6fb00f:c.instructions+=1;goto B6fb00f;
case 0x6fb011:goto L6fb011;
case 0x6fb012:c.instructions+=1;goto B6fb012;
case 0x6fb014:goto L6fb014;
case 0x6fb015:c.instructions+=1;goto B6fb015;
case 0x6fb017:goto L6fb017;
case 0x6fb019:c.instructions+=2;goto B6fb019;
case 0x6fb01a:c.instructions+=1;goto B6fb01a;
case 0x6fb01b:goto L6fb01b;
case 0x6fb01e:c.instructions+=4;goto B6fb01e;
case 0x6fb021:c.instructions+=3;goto B6fb021;
case 0x6fb024:c.instructions+=2;goto B6fb024;
case 0x6fb025:c.instructions+=1;goto B6fb025;
case 0x6fb026:goto L6fb026;
case 0x6fb029:c.instructions+=5;goto B6fb029;
case 0x6fb02d:c.instructions+=4;goto B6fb02d;
case 0x6fb031:c.instructions+=3;goto B6fb031;
case 0x6fb035:c.instructions+=2;goto B6fb035;
case 0x6fb036:c.instructions+=1;goto B6fb036;
case 0x6fb037:goto L6fb037;
case 0x6fb03a:c.instructions+=3;goto B6fb03a;
case 0x6fb03e:c.instructions+=2;goto B6fb03e;
case 0x6fb03f:c.instructions+=1;goto B6fb03f;
case 0x6fb040:goto L6fb040;
case 0x6fb043:c.instructions+=3;goto B6fb043;
case 0x6fb047:c.instructions+=2;goto B6fb047;
case 0x6fb048:c.instructions+=1;goto B6fb048;
case 0x6fb049:goto L6fb049;
case 0x6fb04a:c.instructions+=3;goto B6fb04a;
case 0x6fb04c:c.instructions+=2;goto B6fb04c;
case 0x6fb050:c.instructions+=1;goto B6fb050;
case 0x6fb052:goto L6fb052;
case 0x6fb056:c.instructions+=2;goto B6fb056;
case 0x6fb059:c.instructions+=1;goto B6fb059;
case 0x6fb05d:goto L6fb05d;
case 0x6fb05e:c.instructions+=1;goto B6fb05e;
case 0x6fb05f:goto L6fb05f;
case 0x6fb060:c.instructions+=8;goto B6fb060;
case 0x6fb062:c.instructions+=7;goto B6fb062;
case 0x6fb065:c.instructions+=6;goto B6fb065;
case 0x6fb068:c.instructions+=5;goto B6fb068;
case 0x6fb06b:c.instructions+=4;goto B6fb06b;
case 0x6fb06e:c.instructions+=3;goto B6fb06e;
case 0x6fb070:c.instructions+=2;goto B6fb070;
case 0x6fb071:c.instructions+=1;goto B6fb071;
case 0x6fb072:goto L6fb072;
case 0x6fb073:c.instructions+=10;goto B6fb073;
case 0x6fb075:c.instructions+=9;goto B6fb075;
case 0x6fb078:c.instructions+=8;goto B6fb078;
case 0x6fb07d:c.instructions+=7;goto B6fb07d;
case 0x6fb07f:c.instructions+=6;goto B6fb07f;
case 0x6fb080:c.instructions+=5;goto B6fb080;
case 0x6fb083:c.instructions+=4;goto B6fb083;
case 0x6fb084:c.instructions+=3;goto B6fb084;
case 0x6fb087:c.instructions+=2;goto B6fb087;
case 0x6fb088:c.instructions+=1;goto B6fb088;
case 0x6fb08d:goto L6fb08d;
case 0x6fb090:c.instructions+=2;goto B6fb090;
case 0x6fb092:c.instructions+=1;goto B6fb092;
case 0x6fb094:goto L6fb094;
case 0x6fb098:c.instructions+=2;goto B6fb098;
case 0x6fb099:c.instructions+=1;goto B6fb099;
case 0x6fb09a:goto L6fb09a;
case 0x6fb09d:c.instructions+=2;goto B6fb09d;
case 0x6fb09e:c.instructions+=1;goto B6fb09e;
case 0x6fb09f:goto L6fb09f;
case 0x6fb0a0:c.instructions+=6;goto B6fb0a0;
case 0x6fb0a2:c.instructions+=5;goto B6fb0a2;
case 0x6fb0a3:c.instructions+=4;goto B6fb0a3;
case 0x6fb0a6:c.instructions+=3;goto B6fb0a6;
case 0x6fb0a8:c.instructions+=2;goto B6fb0a8;
case 0x6fb0a9:c.instructions+=1;goto B6fb0a9;
case 0x6fb0ae:goto L6fb0ae;
case 0x6fb0b0:c.instructions+=3;goto B6fb0b0;
case 0x6fb0b1:c.instructions+=2;goto B6fb0b1;
case 0x6fb0b2:c.instructions+=1;goto B6fb0b2;
case 0x6fb0b4:goto L6fb0b4;
case 0x6fb0b7:c.instructions+=3;goto B6fb0b7;
case 0x6fb0ba:c.instructions+=2;goto B6fb0ba;
case 0x6fb0bc:c.instructions+=1;goto B6fb0bc;
case 0x6fb0c1:goto L6fb0c1;
case 0x6fb0c2:c.instructions+=1;goto B6fb0c2;
case 0x6fb0c4:goto L6fb0c4;
case 0x6fb0c7:goto L6fb0c7;
case 0x6fb0cb:c.instructions+=5;goto B6fb0cb;
case 0x6fb0cf:c.instructions+=4;goto B6fb0cf;
case 0x6fb0d1:c.instructions+=3;goto B6fb0d1;
case 0x6fb0d3:c.instructions+=2;goto B6fb0d3;
case 0x6fb0d4:c.instructions+=1;goto B6fb0d4;
case 0x6fb0d6:goto L6fb0d6;
case 0x6fb0d9:c.instructions+=1;goto B6fb0d9;
case 0x6fb0db:goto L6fb0db;
case 0x6fb0df:c.instructions+=3;goto B6fb0df;
case 0x6fb0e1:c.instructions+=2;goto B6fb0e1;
case 0x6fb0e2:c.instructions+=1;goto B6fb0e2;
case 0x6fb0e3:goto L6fb0e3;
case 0x6fb0e5:c.instructions+=2;goto B6fb0e5;
case 0x6fb0e6:c.instructions+=1;goto B6fb0e6;
case 0x6fb0e7:goto L6fb0e7;
case 0x6fb0e8:c.instructions+=6;goto B6fb0e8;
case 0x6fb0ea:c.instructions+=5;goto B6fb0ea;
case 0x6fb0eb:c.instructions+=4;goto B6fb0eb;
case 0x6fb0ee:c.instructions+=3;goto B6fb0ee;
case 0x6fb0f0:c.instructions+=2;goto B6fb0f0;
case 0x6fb0f1:c.instructions+=1;goto B6fb0f1;
case 0x6fb0f6:goto L6fb0f6;
case 0x6fb0f8:c.instructions+=3;goto B6fb0f8;
case 0x6fb0f9:c.instructions+=2;goto B6fb0f9;
case 0x6fb0fa:c.instructions+=1;goto B6fb0fa;
case 0x6fb0fc:goto L6fb0fc;
case 0x6fb0ff:c.instructions+=3;goto B6fb0ff;
case 0x6fb102:c.instructions+=2;goto B6fb102;
case 0x6fb104:c.instructions+=1;goto B6fb104;
case 0x6fb109:goto L6fb109;
case 0x6fb10a:c.instructions+=1;goto B6fb10a;
case 0x6fb10c:goto L6fb10c;
case 0x6fb10f:goto L6fb10f;
case 0x6fb113:c.instructions+=5;goto B6fb113;
case 0x6fb117:c.instructions+=4;goto B6fb117;
case 0x6fb119:c.instructions+=3;goto B6fb119;
case 0x6fb11b:c.instructions+=2;goto B6fb11b;
case 0x6fb11c:c.instructions+=1;goto B6fb11c;
case 0x6fb11e:goto L6fb11e;
case 0x6fb121:c.instructions+=1;goto B6fb121;
case 0x6fb123:goto L6fb123;
case 0x6fb127:c.instructions+=3;goto B6fb127;
case 0x6fb129:c.instructions+=2;goto B6fb129;
case 0x6fb12a:c.instructions+=1;goto B6fb12a;
case 0x6fb12b:goto L6fb12b;
case 0x6fb12d:c.instructions+=2;goto B6fb12d;
case 0x6fb12e:c.instructions+=1;goto B6fb12e;
case 0x6fb12f:goto L6fb12f;
case 0x6fb130:c.instructions+=4;goto B6fb130;
case 0x6fb132:c.instructions+=3;goto B6fb132;
case 0x6fb135:c.instructions+=2;goto B6fb135;
case 0x6fb136:c.instructions+=1;goto B6fb136;
case 0x6fb137:goto L6fb137;
case 0x6fb138:c.instructions+=5;goto B6fb138;
case 0x6fb13a:c.instructions+=4;goto B6fb13a;
case 0x6fb13b:c.instructions+=3;goto B6fb13b;
case 0x6fb13e:c.instructions+=2;goto B6fb13e;
case 0x6fb141:c.instructions+=1;goto B6fb141;
case 0x6fb143:goto L6fb143;
case 0x6fb145:c.instructions+=1;goto B6fb145;
case 0x6fb147:goto L6fb147;
case 0x6fb14a:c.instructions+=18;goto B6fb14a;
case 0x6fb14d:c.instructions+=17;goto B6fb14d;
case 0x6fb150:c.instructions+=16;goto B6fb150;
case 0x6fb151:c.instructions+=15;goto B6fb151;
case 0x6fb154:c.instructions+=14;goto B6fb154;
case 0x6fb157:c.instructions+=13;goto B6fb157;
case 0x6fb159:c.instructions+=12;goto B6fb159;
case 0x6fb15b:c.instructions+=11;goto B6fb15b;
case 0x6fb15c:c.instructions+=10;goto B6fb15c;
case 0x6fb15e:c.instructions+=9;goto B6fb15e;
case 0x6fb161:c.instructions+=8;goto B6fb161;
case 0x6fb163:c.instructions+=7;goto B6fb163;
case 0x6fb164:c.instructions+=6;goto B6fb164;
case 0x6fb167:c.instructions+=5;goto B6fb167;
case 0x6fb169:c.instructions+=4;goto B6fb169;
case 0x6fb16a:c.instructions+=3;goto B6fb16a;
case 0x6fb16c:c.instructions+=2;goto B6fb16c;
case 0x6fb16e:c.instructions+=1;goto B6fb16e;
case 0x6fb170:goto L6fb170;
case 0x6fb171:goto L6fb171;
case 0x6fb174:c.instructions+=8;goto B6fb174;
case 0x6fb176:c.instructions+=7;goto B6fb176;
case 0x6fb179:c.instructions+=6;goto B6fb179;
case 0x6fb17c:c.instructions+=5;goto B6fb17c;
case 0x6fb17e:c.instructions+=4;goto B6fb17e;
case 0x6fb185:c.instructions+=3;goto B6fb185;
case 0x6fb186:c.instructions+=2;goto B6fb186;
case 0x6fb187:c.instructions+=1;goto B6fb187;
case 0x6fb189:goto L6fb189;
case 0x6fb18a:goto L6fb18a;
case 0x6fb18c:goto L6fb18c;
case 0x6fb18d:c.instructions+=2;goto B6fb18d;
case 0x6fb18e:c.instructions+=1;goto B6fb18e;
case 0x6fb18f:goto L6fb18f;
case 0x6fb190:c.instructions+=8;goto B6fb190;
case 0x6fb191:c.instructions+=7;goto B6fb191;
case 0x6fb195:c.instructions+=6;goto B6fb195;
case 0x6fb199:c.instructions+=5;goto B6fb199;
case 0x6fb19e:c.instructions+=4;goto B6fb19e;
case 0x6fb1a0:c.instructions+=3;goto B6fb1a0;
case 0x6fb1a2:c.instructions+=2;goto B6fb1a2;
case 0x6fb1a3:c.instructions+=1;goto B6fb1a3;
case 0x6fb1a5:goto L6fb1a5;
case 0x6fb1af:goto L6fb1af;
case 0x6fb1b1:c.instructions+=7;goto B6fb1b1;
case 0x6fb1b3:c.instructions+=6;goto B6fb1b3;
case 0x6fb1b5:c.instructions+=5;goto B6fb1b5;
case 0x6fb1b6:c.instructions+=4;goto B6fb1b6;
case 0x6fb1b9:c.instructions+=3;goto B6fb1b9;
case 0x6fb1ba:c.instructions+=2;goto B6fb1ba;
case 0x6fb1c1:c.instructions+=1;goto B6fb1c1;
case 0x6fb1c3:goto L6fb1c3;
case 0x6fb1c5:c.instructions+=3;goto B6fb1c5;
case 0x6fb1c6:c.instructions+=2;goto B6fb1c6;
case 0x6fb1c7:c.instructions+=1;goto B6fb1c7;
case 0x6fb1c8:goto L6fb1c8;
case 0x6fb1c9:c.instructions+=3;goto B6fb1c9;
case 0x6fb1cb:c.instructions+=2;goto B6fb1cb;
case 0x6fb1cf:c.instructions+=1;goto B6fb1cf;
case 0x6fb1d1:goto L6fb1d1;
case 0x6fb1db:c.instructions+=3;goto B6fb1db;
case 0x6fb1e5:c.instructions+=2;goto B6fb1e5;
case 0x6fb1e6:c.instructions+=1;goto B6fb1e6;
case 0x6fb1e7:goto L6fb1e7;
case 0x6fb1eb:c.instructions+=1;goto B6fb1eb;
case 0x6fb1ed:goto L6fb1ed;
case 0x6fb1f7:c.instructions+=3;goto B6fb1f7;
case 0x6fb201:c.instructions+=2;goto B6fb201;
case 0x6fb202:c.instructions+=1;goto B6fb202;
case 0x6fb203:goto L6fb203;
case 0x6fb207:c.instructions+=1;goto B6fb207;
case 0x6fb209:goto L6fb209;
case 0x6fb213:c.instructions+=3;goto B6fb213;
case 0x6fb21d:c.instructions+=2;goto B6fb21d;
case 0x6fb21e:c.instructions+=1;goto B6fb21e;
case 0x6fb21f:goto L6fb21f;
case 0x6fb229:c.instructions+=3;goto B6fb229;
case 0x6fb233:c.instructions+=2;goto B6fb233;
case 0x6fb234:c.instructions+=1;goto B6fb234;
case 0x6fb235:goto L6fb235;
case 0x6fb239:c.instructions+=5;goto B6fb239;
case 0x6fb23d:c.instructions+=4;goto B6fb23d;
case 0x6fb241:c.instructions+=3;goto B6fb241;
case 0x6fb242:c.instructions+=2;goto B6fb242;
case 0x6fb247:c.instructions+=1;goto B6fb247;
case 0x6fb24d:goto L6fb24d;
case 0x6fb250:c.instructions+=1;goto B6fb250;
case 0x6fb252:goto L6fb252;
case 0x6fb256:goto L6fb256;
case 0x6fb258:c.instructions+=19;goto B6fb258;
case 0x6fb25a:c.instructions+=18;goto B6fb25a;
case 0x6fb25d:c.instructions+=17;goto B6fb25d;
case 0x6fb260:c.instructions+=16;goto B6fb260;
case 0x6fb263:c.instructions+=15;goto B6fb263;
case 0x6fb266:c.instructions+=14;goto B6fb266;
case 0x6fb269:c.instructions+=13;goto B6fb269;
case 0x6fb26c:c.instructions+=12;goto B6fb26c;
case 0x6fb26f:c.instructions+=11;goto B6fb26f;
case 0x6fb272:c.instructions+=10;goto B6fb272;
case 0x6fb275:c.instructions+=9;goto B6fb275;
case 0x6fb278:c.instructions+=8;goto B6fb278;
case 0x6fb27b:c.instructions+=7;goto B6fb27b;
case 0x6fb27e:c.instructions+=6;goto B6fb27e;
case 0x6fb281:c.instructions+=5;goto B6fb281;
case 0x6fb284:c.instructions+=4;goto B6fb284;
case 0x6fb287:c.instructions+=3;goto B6fb287;
case 0x6fb28a:c.instructions+=2;goto B6fb28a;
case 0x6fb28d:c.instructions+=1;goto B6fb28d;
case 0x6fb28f:goto L6fb28f;
case 0x6fb292:c.instructions+=1;goto B6fb292;
case 0x6fb294:goto L6fb294;
case 0x6fb296:c.instructions+=7;goto B6fb296;
case 0x6fb298:c.instructions+=6;goto B6fb298;
case 0x6fb29b:c.instructions+=5;goto B6fb29b;
case 0x6fb29e:c.instructions+=4;goto B6fb29e;
case 0x6fb2a1:c.instructions+=3;goto B6fb2a1;
case 0x6fb2a4:c.instructions+=2;goto B6fb2a4;
case 0x6fb2a7:c.instructions+=1;goto B6fb2a7;
case 0x6fb2a9:goto L6fb2a9;
case 0x6fb2ac:c.instructions+=1;goto B6fb2ac;
case 0x6fb2ae:goto L6fb2ae;
case 0x6fb2af:c.instructions+=1;goto B6fb2af;
case 0x6fb2b0:goto L6fb2b0;
case 0x6fb2b3:c.instructions+=1;goto B6fb2b3;
case 0x6fb2b5:goto L6fb2b5;
case 0x6fb2b7:c.instructions+=4;goto B6fb2b7;
case 0x6fb2ba:c.instructions+=3;goto B6fb2ba;
case 0x6fb2bc:c.instructions+=2;goto B6fb2bc;
case 0x6fb2bf:c.instructions+=1;goto B6fb2bf;
case 0x6fb2c2:goto L6fb2c2;
case 0x6fb2c5:c.instructions+=1;goto B6fb2c5;
case 0x6fb2c7:goto L6fb2c7;
case 0x6fb2ca:c.instructions+=4;goto B6fb2ca;
case 0x6fb2cd:c.instructions+=3;goto B6fb2cd;
case 0x6fb2d0:c.instructions+=2;goto B6fb2d0;
case 0x6fb2d3:c.instructions+=1;goto B6fb2d3;
case 0x6fb2d6:goto L6fb2d6;
case 0x6fb2d9:c.instructions+=1;goto B6fb2d9;
case 0x6fb2db:goto L6fb2db;
case 0x6fb2dd:c.instructions+=4;goto B6fb2dd;
case 0x6fb2de:c.instructions+=3;goto B6fb2de;
case 0x6fb2e0:c.instructions+=2;goto B6fb2e0;
case 0x6fb2e1:c.instructions+=1;goto B6fb2e1;
case 0x6fb2e2:goto L6fb2e2;
case 0x6fb2e3:c.instructions+=1;goto B6fb2e3;
case 0x6fb2e4:goto L6fb2e4;
case 0x6fb2e9:c.instructions+=1;goto B6fb2e9;
case 0x6fb2eb:goto L6fb2eb;
case 0x6fb2ee:c.instructions+=1;goto B6fb2ee;
case 0x6fb2f0:goto L6fb2f0;
case 0x6fb2f2:c.instructions+=4;goto B6fb2f2;
case 0x6fb2f3:c.instructions+=3;goto B6fb2f3;
case 0x6fb2f5:c.instructions+=2;goto B6fb2f5;
case 0x6fb2f6:c.instructions+=1;goto B6fb2f6;
case 0x6fb2f7:goto L6fb2f7;
case 0x6fb2fc:c.instructions+=1;goto B6fb2fc;
case 0x6fb2fe:goto L6fb2fe;
case 0x6fb301:c.instructions+=1;goto B6fb301;
case 0x6fb303:goto L6fb303;
case 0x6fb306:c.instructions+=4;goto B6fb306;
case 0x6fb309:c.instructions+=3;goto B6fb309;
case 0x6fb30c:c.instructions+=2;goto B6fb30c;
case 0x6fb30f:c.instructions+=1;goto B6fb30f;
case 0x6fb312:goto L6fb312;
case 0x6fb317:c.instructions+=1;goto B6fb317;
case 0x6fb319:goto L6fb319;
case 0x6fb31c:c.instructions+=1;goto B6fb31c;
case 0x6fb31e:goto L6fb31e;
case 0x6fb320:c.instructions+=4;goto B6fb320;
case 0x6fb323:c.instructions+=3;goto B6fb323;
case 0x6fb325:c.instructions+=2;goto B6fb325;
case 0x6fb328:c.instructions+=1;goto B6fb328;
case 0x6fb32b:goto L6fb32b;
case 0x6fb330:goto L6fb330;
case 0x6fb334:c.instructions+=4;goto B6fb334;
case 0x6fb338:c.instructions+=3;goto B6fb338;
case 0x6fb33c:c.instructions+=2;goto B6fb33c;
case 0x6fb341:c.instructions+=1;goto B6fb341;
case 0x6fb343:goto L6fb343;
case 0x6fb346:c.instructions+=1;goto B6fb346;
case 0x6fb348:goto L6fb348;
case 0x6fb350:goto L6fb350;
case 0x6fb353:c.instructions+=10;goto B6fb353;
case 0x6fb355:c.instructions+=9;goto B6fb355;
case 0x6fb358:c.instructions+=8;goto B6fb358;
case 0x6fb35b:c.instructions+=7;goto B6fb35b;
case 0x6fb35e:c.instructions+=6;goto B6fb35e;
case 0x6fb361:c.instructions+=5;goto B6fb361;
case 0x6fb364:c.instructions+=4;goto B6fb364;
case 0x6fb367:c.instructions+=3;goto B6fb367;
case 0x6fb36a:c.instructions+=2;goto B6fb36a;
case 0x6fb36d:c.instructions+=1;goto B6fb36d;
case 0x6fb36f:goto L6fb36f;
case 0x6fb372:c.instructions+=1;goto B6fb372;
case 0x6fb374:goto L6fb374;
case 0x6fb376:c.instructions+=4;goto B6fb376;
case 0x6fb379:c.instructions+=3;goto B6fb379;
case 0x6fb37c:c.instructions+=2;goto B6fb37c;
case 0x6fb37f:c.instructions+=1;goto B6fb37f;
case 0x6fb381:goto L6fb381;
case 0x6fb384:c.instructions+=1;goto B6fb384;
case 0x6fb386:goto L6fb386;
case 0x6fb387:goto L6fb387;
case 0x6fb38a:c.instructions+=1;goto B6fb38a;
case 0x6fb38c:goto L6fb38c;
case 0x6fb38e:c.instructions+=2;goto B6fb38e;
case 0x6fb391:c.instructions+=1;goto B6fb391;
case 0x6fb394:goto L6fb394;
case 0x6fb397:c.instructions+=1;goto B6fb397;
case 0x6fb399:goto L6fb399;
case 0x6fb39c:c.instructions+=2;goto B6fb39c;
case 0x6fb39f:c.instructions+=1;goto B6fb39f;
case 0x6fb3a2:goto L6fb3a2;
case 0x6fb3a5:c.instructions+=1;goto B6fb3a5;
case 0x6fb3a7:goto L6fb3a7;
case 0x6fb3a9:c.instructions+=2;goto B6fb3a9;
case 0x6fb3aa:c.instructions+=1;goto B6fb3aa;
case 0x6fb3ab:goto L6fb3ab;
case 0x6fb3ac:goto L6fb3ac;
case 0x6fb3b1:c.instructions+=1;goto B6fb3b1;
case 0x6fb3b3:goto L6fb3b3;
case 0x6fb3b6:c.instructions+=1;goto B6fb3b6;
case 0x6fb3b8:goto L6fb3b8;
case 0x6fb3ba:c.instructions+=2;goto B6fb3ba;
case 0x6fb3bb:c.instructions+=1;goto B6fb3bb;
case 0x6fb3bc:goto L6fb3bc;
case 0x6fb3c1:c.instructions+=1;goto B6fb3c1;
case 0x6fb3c3:goto L6fb3c3;
case 0x6fb3c6:c.instructions+=1;goto B6fb3c6;
case 0x6fb3c8:goto L6fb3c8;
case 0x6fb3cb:c.instructions+=2;goto B6fb3cb;
case 0x6fb3ce:c.instructions+=1;goto B6fb3ce;
case 0x6fb3d1:goto L6fb3d1;
case 0x6fb3d6:c.instructions+=1;goto B6fb3d6;
case 0x6fb3d8:goto L6fb3d8;
case 0x6fb3db:c.instructions+=1;goto B6fb3db;
case 0x6fb3dd:goto L6fb3dd;
case 0x6fb3df:c.instructions+=2;goto B6fb3df;
case 0x6fb3e2:c.instructions+=1;goto B6fb3e2;
case 0x6fb3e5:goto L6fb3e5;
case 0x6fb3ea:goto L6fb3ea;
case 0x6fb3ee:c.instructions+=5;goto B6fb3ee;
case 0x6fb3f2:c.instructions+=4;goto B6fb3f2;
case 0x6fb3f6:c.instructions+=3;goto B6fb3f6;
case 0x6fb3f7:c.instructions+=2;goto B6fb3f7;
case 0x6fb3fc:c.instructions+=1;goto B6fb3fc;
case 0x6fb402:goto L6fb402;
case 0x6fb405:c.instructions+=1;goto B6fb405;
case 0x6fb407:goto L6fb407;
case 0x6fb40a:goto L6fb40a;
case 0x6fb40d:c.instructions+=11;goto B6fb40d;
case 0x6fb411:c.instructions+=10;goto B6fb411;
case 0x6fb415:c.instructions+=9;goto B6fb415;
case 0x6fb419:c.instructions+=8;goto B6fb419;
case 0x6fb41c:c.instructions+=7;goto B6fb41c;
case 0x6fb420:c.instructions+=6;goto B6fb420;
case 0x6fb424:c.instructions+=5;goto B6fb424;
case 0x6fb428:c.instructions+=4;goto B6fb428;
case 0x6fb42b:c.instructions+=3;goto B6fb42b;
case 0x6fb42e:c.instructions+=2;goto B6fb42e;
case 0x6fb431:c.instructions+=1;goto B6fb431;
case 0x6fb433:goto L6fb433;
case 0x6fb436:c.instructions+=1;goto B6fb436;
case 0x6fb438:goto L6fb438;
case 0x6fb43b:c.instructions+=5;goto B6fb43b;
case 0x6fb43e:c.instructions+=4;goto B6fb43e;
case 0x6fb441:c.instructions+=3;goto B6fb441;
case 0x6fb444:c.instructions+=2;goto B6fb444;
case 0x6fb447:c.instructions+=1;goto B6fb447;
case 0x6fb449:goto L6fb449;
case 0x6fb44c:c.instructions+=1;goto B6fb44c;
case 0x6fb44e:goto L6fb44e;
case 0x6fb44f:c.instructions+=2;goto B6fb44f;
case 0x6fb451:c.instructions+=1;goto B6fb451;
case 0x6fb452:goto L6fb452;
case 0x6fb455:c.instructions+=1;goto B6fb455;
case 0x6fb457:goto L6fb457;
case 0x6fb459:c.instructions+=4;goto B6fb459;
case 0x6fb45c:c.instructions+=3;goto B6fb45c;
case 0x6fb45e:c.instructions+=2;goto B6fb45e;
case 0x6fb461:c.instructions+=1;goto B6fb461;
case 0x6fb464:goto L6fb464;
case 0x6fb467:c.instructions+=1;goto B6fb467;
case 0x6fb469:goto L6fb469;
case 0x6fb46c:c.instructions+=4;goto B6fb46c;
case 0x6fb46f:c.instructions+=3;goto B6fb46f;
case 0x6fb472:c.instructions+=2;goto B6fb472;
case 0x6fb475:c.instructions+=1;goto B6fb475;
case 0x6fb478:goto L6fb478;
case 0x6fb47b:c.instructions+=1;goto B6fb47b;
case 0x6fb47d:goto L6fb47d;
case 0x6fb47f:c.instructions+=4;goto B6fb47f;
case 0x6fb480:c.instructions+=3;goto B6fb480;
case 0x6fb482:c.instructions+=2;goto B6fb482;
case 0x6fb483:c.instructions+=1;goto B6fb483;
case 0x6fb484:goto L6fb484;
case 0x6fb485:c.instructions+=2;goto B6fb485;
case 0x6fb487:c.instructions+=1;goto B6fb487;
case 0x6fb488:goto L6fb488;
case 0x6fb48d:c.instructions+=1;goto B6fb48d;
case 0x6fb48f:goto L6fb48f;
case 0x6fb492:c.instructions+=1;goto B6fb492;
case 0x6fb494:goto L6fb494;
case 0x6fb496:c.instructions+=4;goto B6fb496;
case 0x6fb497:c.instructions+=3;goto B6fb497;
case 0x6fb499:c.instructions+=2;goto B6fb499;
case 0x6fb49a:c.instructions+=1;goto B6fb49a;
case 0x6fb49b:goto L6fb49b;
case 0x6fb4a0:c.instructions+=1;goto B6fb4a0;
case 0x6fb4a2:goto L6fb4a2;
case 0x6fb4a5:c.instructions+=1;goto B6fb4a5;
case 0x6fb4a7:goto L6fb4a7;
case 0x6fb4aa:c.instructions+=4;goto B6fb4aa;
case 0x6fb4ad:c.instructions+=3;goto B6fb4ad;
case 0x6fb4b0:c.instructions+=2;goto B6fb4b0;
case 0x6fb4b3:c.instructions+=1;goto B6fb4b3;
case 0x6fb4b6:goto L6fb4b6;
case 0x6fb4bb:c.instructions+=1;goto B6fb4bb;
case 0x6fb4bd:goto L6fb4bd;
case 0x6fb4c0:c.instructions+=1;goto B6fb4c0;
case 0x6fb4c2:goto L6fb4c2;
case 0x6fb4c4:c.instructions+=4;goto B6fb4c4;
case 0x6fb4c7:c.instructions+=3;goto B6fb4c7;
case 0x6fb4c9:c.instructions+=2;goto B6fb4c9;
case 0x6fb4cc:c.instructions+=1;goto B6fb4cc;
case 0x6fb4cf:goto L6fb4cf;
case 0x6fb4d4:goto L6fb4d4;
case 0x6fb4d8:c.instructions+=4;goto B6fb4d8;
case 0x6fb4dc:c.instructions+=3;goto B6fb4dc;
case 0x6fb4e0:c.instructions+=2;goto B6fb4e0;
case 0x6fb4e5:c.instructions+=1;goto B6fb4e5;
case 0x6fb4e7:goto L6fb4e7;
case 0x6fb4ea:c.instructions+=3;goto B6fb4ea;
case 0x6fb4ed:c.instructions+=2;goto B6fb4ed;
case 0x6fb4f0:c.instructions+=1;goto B6fb4f0;
case 0x6fb4f2:goto L6fb4f2;
case 0x6fb4f4:goto L6fb4f4;
case 0x6fb4f7:c.instructions+=6;goto B6fb4f7;
case 0x6fb4fa:c.instructions+=5;goto B6fb4fa;
case 0x6fb4fe:c.instructions+=4;goto B6fb4fe;
case 0x6fb502:c.instructions+=3;goto B6fb502;
case 0x6fb506:c.instructions+=2;goto B6fb506;
case 0x6fb509:c.instructions+=1;goto B6fb509;
case 0x6fb50b:goto L6fb50b;
case 0x6fb50e:c.instructions+=1;goto B6fb50e;
case 0x6fb510:goto L6fb510;
case 0x6fb513:c.instructions+=3;goto B6fb513;
case 0x6fb516:c.instructions+=2;goto B6fb516;
case 0x6fb519:c.instructions+=1;goto B6fb519;
case 0x6fb51b:goto L6fb51b;
case 0x6fb51e:c.instructions+=1;goto B6fb51e;
case 0x6fb520:goto L6fb520;
case 0x6fb522:c.instructions+=1;goto B6fb522;
case 0x6fb523:goto L6fb523;
case 0x6fb526:c.instructions+=1;goto B6fb526;
case 0x6fb528:goto L6fb528;
case 0x6fb52a:c.instructions+=2;goto B6fb52a;
case 0x6fb52d:c.instructions+=1;goto B6fb52d;
case 0x6fb530:goto L6fb530;
case 0x6fb533:c.instructions+=1;goto B6fb533;
case 0x6fb535:goto L6fb535;
case 0x6fb538:c.instructions+=2;goto B6fb538;
case 0x6fb53b:c.instructions+=1;goto B6fb53b;
case 0x6fb53e:goto L6fb53e;
case 0x6fb541:c.instructions+=1;goto B6fb541;
case 0x6fb543:goto L6fb543;
case 0x6fb545:c.instructions+=2;goto B6fb545;
case 0x6fb546:c.instructions+=1;goto B6fb546;
case 0x6fb547:goto L6fb547;
case 0x6fb549:c.instructions+=1;goto B6fb549;
case 0x6fb54a:goto L6fb54a;
case 0x6fb54f:c.instructions+=1;goto B6fb54f;
case 0x6fb551:goto L6fb551;
case 0x6fb554:c.instructions+=1;goto B6fb554;
case 0x6fb556:goto L6fb556;
case 0x6fb558:c.instructions+=2;goto B6fb558;
case 0x6fb559:c.instructions+=1;goto B6fb559;
case 0x6fb55a:goto L6fb55a;
case 0x6fb55f:c.instructions+=1;goto B6fb55f;
case 0x6fb561:goto L6fb561;
case 0x6fb564:c.instructions+=1;goto B6fb564;
case 0x6fb566:goto L6fb566;
case 0x6fb569:c.instructions+=2;goto B6fb569;
case 0x6fb56c:c.instructions+=1;goto B6fb56c;
case 0x6fb56f:goto L6fb56f;
case 0x6fb574:c.instructions+=1;goto B6fb574;
case 0x6fb576:goto L6fb576;
case 0x6fb579:c.instructions+=1;goto B6fb579;
case 0x6fb57b:goto L6fb57b;
case 0x6fb57d:c.instructions+=2;goto B6fb57d;
case 0x6fb580:c.instructions+=1;goto B6fb580;
case 0x6fb583:goto L6fb583;
case 0x6fb588:goto L6fb588;
case 0x6fb58c:c.instructions+=5;goto B6fb58c;
case 0x6fb590:c.instructions+=4;goto B6fb590;
case 0x6fb594:c.instructions+=3;goto B6fb594;
case 0x6fb595:c.instructions+=2;goto B6fb595;
case 0x6fb59a:c.instructions+=1;goto B6fb59a;
case 0x6fb5a0:goto L6fb5a0;
case 0x6fb5a6:c.instructions+=1;goto B6fb5a6;
case 0x6fb5a8:goto L6fb5a8;
case 0x6fb5ba:goto L6fb5ba;
case 0x6fb5bd:c.instructions+=35;goto B6fb5bd;
case 0x6fb5c1:c.instructions+=34;goto B6fb5c1;
case 0x6fb5c5:c.instructions+=33;goto B6fb5c5;
case 0x6fb5c9:c.instructions+=32;goto B6fb5c9;
case 0x6fb5cd:c.instructions+=31;goto B6fb5cd;
case 0x6fb5d1:c.instructions+=30;goto B6fb5d1;
case 0x6fb5d5:c.instructions+=29;goto B6fb5d5;
case 0x6fb5d8:c.instructions+=28;goto B6fb5d8;
case 0x6fb5dc:c.instructions+=27;goto B6fb5dc;
case 0x6fb5e0:c.instructions+=26;goto B6fb5e0;
case 0x6fb5e4:c.instructions+=25;goto B6fb5e4;
case 0x6fb5e8:c.instructions+=24;goto B6fb5e8;
case 0x6fb5ec:c.instructions+=23;goto B6fb5ec;
case 0x6fb5f0:c.instructions+=22;goto B6fb5f0;
case 0x6fb5f4:c.instructions+=21;goto B6fb5f4;
case 0x6fb5f8:c.instructions+=20;goto B6fb5f8;
case 0x6fb5fc:c.instructions+=19;goto B6fb5fc;
case 0x6fb600:c.instructions+=18;goto B6fb600;
case 0x6fb604:c.instructions+=17;goto B6fb604;
case 0x6fb608:c.instructions+=16;goto B6fb608;
case 0x6fb60c:c.instructions+=15;goto B6fb60c;
case 0x6fb610:c.instructions+=14;goto B6fb610;
case 0x6fb614:c.instructions+=13;goto B6fb614;
case 0x6fb618:c.instructions+=12;goto B6fb618;
case 0x6fb61c:c.instructions+=11;goto B6fb61c;
case 0x6fb620:c.instructions+=10;goto B6fb620;
case 0x6fb624:c.instructions+=9;goto B6fb624;
case 0x6fb628:c.instructions+=8;goto B6fb628;
case 0x6fb62c:c.instructions+=7;goto B6fb62c;
case 0x6fb630:c.instructions+=6;goto B6fb630;
case 0x6fb634:c.instructions+=5;goto B6fb634;
case 0x6fb638:c.instructions+=4;goto B6fb638;
case 0x6fb63e:c.instructions+=3;goto B6fb63e;
case 0x6fb643:c.instructions+=2;goto B6fb643;
case 0x6fb649:c.instructions+=1;goto B6fb649;
case 0x6fb64f:goto L6fb64f;
case 0x6fb652:c.instructions+=1;goto B6fb652;
case 0x6fb654:goto L6fb654;
case 0x6fb657:c.instructions+=11;goto B6fb657;
case 0x6fb65b:c.instructions+=10;goto B6fb65b;
case 0x6fb65f:c.instructions+=9;goto B6fb65f;
case 0x6fb663:c.instructions+=8;goto B6fb663;
case 0x6fb666:c.instructions+=7;goto B6fb666;
case 0x6fb66a:c.instructions+=6;goto B6fb66a;
case 0x6fb66e:c.instructions+=5;goto B6fb66e;
case 0x6fb672:c.instructions+=4;goto B6fb672;
case 0x6fb675:c.instructions+=3;goto B6fb675;
case 0x6fb678:c.instructions+=2;goto B6fb678;
case 0x6fb67b:c.instructions+=1;goto B6fb67b;
case 0x6fb67d:goto L6fb67d;
case 0x6fb680:c.instructions+=1;goto B6fb680;
case 0x6fb682:goto L6fb682;
case 0x6fb685:c.instructions+=5;goto B6fb685;
case 0x6fb688:c.instructions+=4;goto B6fb688;
case 0x6fb68b:c.instructions+=3;goto B6fb68b;
case 0x6fb68e:c.instructions+=2;goto B6fb68e;
case 0x6fb691:c.instructions+=1;goto B6fb691;
case 0x6fb693:goto L6fb693;
case 0x6fb696:c.instructions+=1;goto B6fb696;
case 0x6fb698:goto L6fb698;
case 0x6fb699:c.instructions+=2;goto B6fb699;
case 0x6fb69b:c.instructions+=1;goto B6fb69b;
case 0x6fb69c:goto L6fb69c;
case 0x6fb69f:c.instructions+=1;goto B6fb69f;
case 0x6fb6a1:goto L6fb6a1;
case 0x6fb6a3:c.instructions+=4;goto B6fb6a3;
case 0x6fb6a6:c.instructions+=3;goto B6fb6a6;
case 0x6fb6a8:c.instructions+=2;goto B6fb6a8;
case 0x6fb6ab:c.instructions+=1;goto B6fb6ab;
case 0x6fb6ae:goto L6fb6ae;
case 0x6fb6b1:c.instructions+=1;goto B6fb6b1;
case 0x6fb6b3:goto L6fb6b3;
case 0x6fb6b6:c.instructions+=4;goto B6fb6b6;
case 0x6fb6b9:c.instructions+=3;goto B6fb6b9;
case 0x6fb6bc:c.instructions+=2;goto B6fb6bc;
case 0x6fb6bf:c.instructions+=1;goto B6fb6bf;
case 0x6fb6c2:goto L6fb6c2;
case 0x6fb6c5:c.instructions+=1;goto B6fb6c5;
case 0x6fb6c7:goto L6fb6c7;
case 0x6fb6c9:c.instructions+=4;goto B6fb6c9;
case 0x6fb6ca:c.instructions+=3;goto B6fb6ca;
case 0x6fb6cc:c.instructions+=2;goto B6fb6cc;
case 0x6fb6cd:c.instructions+=1;goto B6fb6cd;
case 0x6fb6ce:goto L6fb6ce;
case 0x6fb6cf:c.instructions+=2;goto B6fb6cf;
case 0x6fb6d1:c.instructions+=1;goto B6fb6d1;
case 0x6fb6d2:goto L6fb6d2;
case 0x6fb6d7:c.instructions+=1;goto B6fb6d7;
case 0x6fb6d9:goto L6fb6d9;
case 0x6fb6dc:c.instructions+=1;goto B6fb6dc;
case 0x6fb6de:goto L6fb6de;
case 0x6fb6e0:c.instructions+=4;goto B6fb6e0;
case 0x6fb6e1:c.instructions+=3;goto B6fb6e1;
case 0x6fb6e3:c.instructions+=2;goto B6fb6e3;
case 0x6fb6e4:c.instructions+=1;goto B6fb6e4;
case 0x6fb6e5:goto L6fb6e5;
case 0x6fb6ea:c.instructions+=1;goto B6fb6ea;
case 0x6fb6ec:goto L6fb6ec;
case 0x6fb6ef:c.instructions+=1;goto B6fb6ef;
case 0x6fb6f1:goto L6fb6f1;
case 0x6fb6f4:c.instructions+=4;goto B6fb6f4;
case 0x6fb6f7:c.instructions+=3;goto B6fb6f7;
case 0x6fb6fa:c.instructions+=2;goto B6fb6fa;
case 0x6fb6fd:c.instructions+=1;goto B6fb6fd;
case 0x6fb700:goto L6fb700;
case 0x6fb705:c.instructions+=1;goto B6fb705;
case 0x6fb707:goto L6fb707;
case 0x6fb70a:c.instructions+=1;goto B6fb70a;
case 0x6fb70c:goto L6fb70c;
case 0x6fb70e:c.instructions+=4;goto B6fb70e;
case 0x6fb711:c.instructions+=3;goto B6fb711;
case 0x6fb713:c.instructions+=2;goto B6fb713;
case 0x6fb716:c.instructions+=1;goto B6fb716;
case 0x6fb719:goto L6fb719;
case 0x6fb71e:goto L6fb71e;
case 0x6fb722:c.instructions+=4;goto B6fb722;
case 0x6fb726:c.instructions+=3;goto B6fb726;
case 0x6fb72a:c.instructions+=2;goto B6fb72a;
case 0x6fb72f:c.instructions+=1;goto B6fb72f;
case 0x6fb731:goto L6fb731;
case 0x6fb734:c.instructions+=3;goto B6fb734;
case 0x6fb737:c.instructions+=2;goto B6fb737;
case 0x6fb73a:c.instructions+=1;goto B6fb73a;
case 0x6fb73c:goto L6fb73c;
case 0x6fb73e:goto L6fb73e;
case 0x6fb741:c.instructions+=6;goto B6fb741;
case 0x6fb744:c.instructions+=5;goto B6fb744;
case 0x6fb748:c.instructions+=4;goto B6fb748;
case 0x6fb74c:c.instructions+=3;goto B6fb74c;
case 0x6fb750:c.instructions+=2;goto B6fb750;
case 0x6fb753:c.instructions+=1;goto B6fb753;
case 0x6fb755:goto L6fb755;
case 0x6fb758:c.instructions+=1;goto B6fb758;
case 0x6fb75a:goto L6fb75a;
case 0x6fb75d:c.instructions+=3;goto B6fb75d;
case 0x6fb760:c.instructions+=2;goto B6fb760;
case 0x6fb763:c.instructions+=1;goto B6fb763;
case 0x6fb765:goto L6fb765;
case 0x6fb768:c.instructions+=1;goto B6fb768;
case 0x6fb76a:goto L6fb76a;
case 0x6fb76c:c.instructions+=1;goto B6fb76c;
case 0x6fb76d:goto L6fb76d;
case 0x6fb770:c.instructions+=1;goto B6fb770;
case 0x6fb772:goto L6fb772;
case 0x6fb774:c.instructions+=2;goto B6fb774;
case 0x6fb777:c.instructions+=1;goto B6fb777;
case 0x6fb77a:goto L6fb77a;
case 0x6fb77d:c.instructions+=1;goto B6fb77d;
case 0x6fb77f:goto L6fb77f;
case 0x6fb782:c.instructions+=2;goto B6fb782;
case 0x6fb785:c.instructions+=1;goto B6fb785;
case 0x6fb788:goto L6fb788;
case 0x6fb78b:c.instructions+=1;goto B6fb78b;
case 0x6fb78d:goto L6fb78d;
case 0x6fb78f:c.instructions+=2;goto B6fb78f;
case 0x6fb790:c.instructions+=1;goto B6fb790;
case 0x6fb791:goto L6fb791;
case 0x6fb793:c.instructions+=1;goto B6fb793;
case 0x6fb794:goto L6fb794;
case 0x6fb799:c.instructions+=1;goto B6fb799;
case 0x6fb79b:goto L6fb79b;
case 0x6fb79e:c.instructions+=1;goto B6fb79e;
case 0x6fb7a0:goto L6fb7a0;
case 0x6fb7a2:c.instructions+=2;goto B6fb7a2;
case 0x6fb7a3:c.instructions+=1;goto B6fb7a3;
case 0x6fb7a4:goto L6fb7a4;
case 0x6fb7a9:c.instructions+=1;goto B6fb7a9;
case 0x6fb7ab:goto L6fb7ab;
case 0x6fb7ae:c.instructions+=1;goto B6fb7ae;
case 0x6fb7b0:goto L6fb7b0;
case 0x6fb7b3:c.instructions+=2;goto B6fb7b3;
case 0x6fb7b6:c.instructions+=1;goto B6fb7b6;
case 0x6fb7b9:goto L6fb7b9;
case 0x6fb7be:c.instructions+=1;goto B6fb7be;
case 0x6fb7c0:goto L6fb7c0;
case 0x6fb7c3:c.instructions+=1;goto B6fb7c3;
case 0x6fb7c5:goto L6fb7c5;
case 0x6fb7c7:c.instructions+=2;goto B6fb7c7;
case 0x6fb7ca:c.instructions+=1;goto B6fb7ca;
case 0x6fb7cd:goto L6fb7cd;
case 0x6fb7d2:goto L6fb7d2;
case 0x6fb7d6:c.instructions+=5;goto B6fb7d6;
case 0x6fb7da:c.instructions+=4;goto B6fb7da;
case 0x6fb7de:c.instructions+=3;goto B6fb7de;
case 0x6fb7df:c.instructions+=2;goto B6fb7df;
case 0x6fb7e4:c.instructions+=1;goto B6fb7e4;
case 0x6fb7e6:goto L6fb7e6;
case 0x6fb7e9:c.instructions+=1;goto B6fb7e9;
case 0x6fb7eb:goto L6fb7eb;
case 0x6fb7f2:goto L6fb7f2;
case 0x6fb7f5:c.instructions+=7;goto B6fb7f5;
case 0x6fb7f9:c.instructions+=6;goto B6fb7f9;
case 0x6fb7fc:c.instructions+=5;goto B6fb7fc;
case 0x6fb800:c.instructions+=4;goto B6fb800;
case 0x6fb803:c.instructions+=3;goto B6fb803;
case 0x6fb806:c.instructions+=2;goto B6fb806;
case 0x6fb809:c.instructions+=1;goto B6fb809;
case 0x6fb80b:goto L6fb80b;
case 0x6fb80e:c.instructions+=1;goto B6fb80e;
case 0x6fb810:goto L6fb810;
case 0x6fb813:c.instructions+=5;goto B6fb813;
case 0x6fb816:c.instructions+=4;goto B6fb816;
case 0x6fb819:c.instructions+=3;goto B6fb819;
case 0x6fb81c:c.instructions+=2;goto B6fb81c;
case 0x6fb81f:c.instructions+=1;goto B6fb81f;
case 0x6fb821:goto L6fb821;
case 0x6fb824:c.instructions+=1;goto B6fb824;
case 0x6fb826:goto L6fb826;
case 0x6fb827:c.instructions+=1;goto B6fb827;
case 0x6fb828:goto L6fb828;
case 0x6fb82b:c.instructions+=1;goto B6fb82b;
case 0x6fb82d:goto L6fb82d;
case 0x6fb82f:c.instructions+=4;goto B6fb82f;
case 0x6fb832:c.instructions+=3;goto B6fb832;
case 0x6fb834:c.instructions+=2;goto B6fb834;
case 0x6fb837:c.instructions+=1;goto B6fb837;
case 0x6fb83a:goto L6fb83a;
case 0x6fb83d:c.instructions+=1;goto B6fb83d;
case 0x6fb83f:goto L6fb83f;
case 0x6fb842:c.instructions+=4;goto B6fb842;
case 0x6fb845:c.instructions+=3;goto B6fb845;
case 0x6fb848:c.instructions+=2;goto B6fb848;
case 0x6fb84b:c.instructions+=1;goto B6fb84b;
case 0x6fb84e:goto L6fb84e;
case 0x6fb851:c.instructions+=1;goto B6fb851;
case 0x6fb853:goto L6fb853;
case 0x6fb855:c.instructions+=4;goto B6fb855;
case 0x6fb856:c.instructions+=3;goto B6fb856;
case 0x6fb858:c.instructions+=2;goto B6fb858;
case 0x6fb859:c.instructions+=1;goto B6fb859;
case 0x6fb85a:goto L6fb85a;
case 0x6fb85b:c.instructions+=1;goto B6fb85b;
case 0x6fb85c:goto L6fb85c;
case 0x6fb861:c.instructions+=1;goto B6fb861;
case 0x6fb863:goto L6fb863;
case 0x6fb866:c.instructions+=1;goto B6fb866;
case 0x6fb868:goto L6fb868;
case 0x6fb86a:c.instructions+=4;goto B6fb86a;
case 0x6fb86b:c.instructions+=3;goto B6fb86b;
case 0x6fb86d:c.instructions+=2;goto B6fb86d;
case 0x6fb86e:c.instructions+=1;goto B6fb86e;
case 0x6fb86f:goto L6fb86f;
case 0x6fb874:c.instructions+=1;goto B6fb874;
case 0x6fb876:goto L6fb876;
case 0x6fb879:c.instructions+=1;goto B6fb879;
case 0x6fb87b:goto L6fb87b;
case 0x6fb87e:c.instructions+=4;goto B6fb87e;
case 0x6fb881:c.instructions+=3;goto B6fb881;
case 0x6fb884:c.instructions+=2;goto B6fb884;
case 0x6fb887:c.instructions+=1;goto B6fb887;
case 0x6fb88a:goto L6fb88a;
case 0x6fb88f:c.instructions+=1;goto B6fb88f;
case 0x6fb891:goto L6fb891;
case 0x6fb894:c.instructions+=1;goto B6fb894;
case 0x6fb896:goto L6fb896;
case 0x6fb898:c.instructions+=4;goto B6fb898;
case 0x6fb89b:c.instructions+=3;goto B6fb89b;
case 0x6fb89d:c.instructions+=2;goto B6fb89d;
case 0x6fb8a0:c.instructions+=1;goto B6fb8a0;
case 0x6fb8a3:goto L6fb8a3;
case 0x6fb8a8:c.instructions+=1;goto B6fb8a8;
case 0x6fb8aa:goto L6fb8aa;
case 0x6fb8ad:c.instructions+=1;goto B6fb8ad;
case 0x6fb8af:goto L6fb8af;
case 0x6fb8b2:c.instructions+=4;goto B6fb8b2;
case 0x6fb8b5:c.instructions+=3;goto B6fb8b5;
case 0x6fb8b8:c.instructions+=2;goto B6fb8b8;
case 0x6fb8bb:c.instructions+=1;goto B6fb8bb;
case 0x6fb8be:goto L6fb8be;
case 0x6fb8c3:c.instructions+=1;goto B6fb8c3;
case 0x6fb8c5:goto L6fb8c5;
case 0x6fb8c8:c.instructions+=1;goto B6fb8c8;
case 0x6fb8ca:goto L6fb8ca;
case 0x6fb8cd:c.instructions+=4;goto B6fb8cd;
case 0x6fb8d0:c.instructions+=3;goto B6fb8d0;
case 0x6fb8d3:c.instructions+=2;goto B6fb8d3;
case 0x6fb8d6:c.instructions+=1;goto B6fb8d6;
case 0x6fb8d9:goto L6fb8d9;
case 0x6fb8de:goto L6fb8de;
case 0x6fb8e2:c.instructions+=6;goto B6fb8e2;
case 0x6fb8e6:c.instructions+=5;goto B6fb8e6;
case 0x6fb8ea:c.instructions+=4;goto B6fb8ea;
case 0x6fb8f0:c.instructions+=3;goto B6fb8f0;
case 0x6fb8f4:c.instructions+=2;goto B6fb8f4;
case 0x6fb8f9:c.instructions+=1;goto B6fb8f9;
case 0x6fb8fb:goto L6fb8fb;
case 0x6fb8fe:c.instructions+=1;goto B6fb8fe;
case 0x6fb900:goto L6fb900;
case 0x6fb90e:goto L6fb90e;
case 0x6fb911:c.instructions+=4;goto B6fb911;
case 0x6fb915:c.instructions+=3;goto B6fb915;
case 0x6fb918:c.instructions+=2;goto B6fb918;
case 0x6fb91b:c.instructions+=1;goto B6fb91b;
case 0x6fb91d:goto L6fb91d;
case 0x6fb920:c.instructions+=1;goto B6fb920;
case 0x6fb922:goto L6fb922;
case 0x6fb925:c.instructions+=3;goto B6fb925;
case 0x6fb928:c.instructions+=2;goto B6fb928;
case 0x6fb92b:c.instructions+=1;goto B6fb92b;
case 0x6fb92d:goto L6fb92d;
case 0x6fb930:c.instructions+=1;goto B6fb930;
case 0x6fb932:goto L6fb932;
case 0x6fb933:goto L6fb933;
case 0x6fb936:c.instructions+=1;goto B6fb936;
case 0x6fb938:goto L6fb938;
case 0x6fb93a:c.instructions+=2;goto B6fb93a;
case 0x6fb93d:c.instructions+=1;goto B6fb93d;
case 0x6fb940:goto L6fb940;
case 0x6fb943:c.instructions+=1;goto B6fb943;
case 0x6fb945:goto L6fb945;
case 0x6fb948:c.instructions+=2;goto B6fb948;
case 0x6fb94b:c.instructions+=1;goto B6fb94b;
case 0x6fb94e:goto L6fb94e;
case 0x6fb951:c.instructions+=1;goto B6fb951;
case 0x6fb953:goto L6fb953;
case 0x6fb955:c.instructions+=2;goto B6fb955;
case 0x6fb956:c.instructions+=1;goto B6fb956;
case 0x6fb957:goto L6fb957;
case 0x6fb958:goto L6fb958;
case 0x6fb95d:c.instructions+=1;goto B6fb95d;
case 0x6fb95f:goto L6fb95f;
case 0x6fb962:c.instructions+=1;goto B6fb962;
case 0x6fb964:goto L6fb964;
case 0x6fb966:c.instructions+=2;goto B6fb966;
case 0x6fb967:c.instructions+=1;goto B6fb967;
case 0x6fb968:goto L6fb968;
case 0x6fb96d:c.instructions+=1;goto B6fb96d;
case 0x6fb96f:goto L6fb96f;
case 0x6fb972:c.instructions+=1;goto B6fb972;
case 0x6fb974:goto L6fb974;
case 0x6fb977:c.instructions+=2;goto B6fb977;
case 0x6fb97a:c.instructions+=1;goto B6fb97a;
case 0x6fb97d:goto L6fb97d;
case 0x6fb982:c.instructions+=1;goto B6fb982;
case 0x6fb984:goto L6fb984;
case 0x6fb987:c.instructions+=1;goto B6fb987;
case 0x6fb989:goto L6fb989;
case 0x6fb98b:c.instructions+=2;goto B6fb98b;
case 0x6fb98e:c.instructions+=1;goto B6fb98e;
case 0x6fb991:goto L6fb991;
case 0x6fb996:c.instructions+=1;goto B6fb996;
case 0x6fb998:goto L6fb998;
case 0x6fb99b:c.instructions+=1;goto B6fb99b;
case 0x6fb99d:goto L6fb99d;
case 0x6fb9a0:c.instructions+=2;goto B6fb9a0;
case 0x6fb9a3:c.instructions+=1;goto B6fb9a3;
case 0x6fb9a6:goto L6fb9a6;
case 0x6fb9ab:c.instructions+=1;goto B6fb9ab;
case 0x6fb9ad:goto L6fb9ad;
case 0x6fb9b0:c.instructions+=1;goto B6fb9b0;
case 0x6fb9b2:goto L6fb9b2;
case 0x6fb9b5:c.instructions+=2;goto B6fb9b5;
case 0x6fb9b8:c.instructions+=1;goto B6fb9b8;
case 0x6fb9bb:goto L6fb9bb;
case 0x6fb9cb:goto L6fb9cb;
case 0x6fb9cd:c.instructions+=1;goto B6fb9cd;
case 0x6fb9cf:goto L6fb9cf;
case 0x6fb9d4:goto L6fb9d4;
case 0x6fb9d6:c.instructions+=3;goto B6fb9d6;
case 0x6fb9d9:c.instructions+=2;goto B6fb9d9;
case 0x6fb9de:c.instructions+=1;goto B6fb9de;
case 0x6fb9e0:goto L6fb9e0;
case 0x6fb9e1:goto L6fb9e1;
case 0x6fb9e4:c.instructions+=1;goto B6fb9e4;
case 0x6fb9e6:goto L6fb9e6;
case 0x6fb9eb:goto L6fb9eb;
case 0x6fb9ef:c.instructions+=1;goto B6fb9ef;
case 0x6fb9f1:goto L6fb9f1;
case 0x6fb9f3:goto L6fb9f3;
case 0x6fb9f6:c.instructions+=2;goto B6fb9f6;
case 0x6fb9fb:c.instructions+=1;goto B6fb9fb;
case 0x6fb9fd:goto L6fb9fd;
case 0x6fb9fe:goto L6fb9fe;
case 0x6fba05:c.instructions+=1;goto B6fba05;
case 0x6fba06:goto L6fba06;
case 0x6fba08:c.instructions+=2;goto B6fba08;
case 0x6fba0a:c.instructions+=1;goto B6fba0a;
case 0x6fba0c:goto L6fba0c;
case 0x6fba0d:c.instructions+=5;goto B6fba0d;
case 0x6fba0e:c.instructions+=4;goto B6fba0e;
case 0x6fba10:c.instructions+=3;goto B6fba10;
case 0x6fba12:c.instructions+=2;goto B6fba12;
case 0x6fba14:c.instructions+=1;goto B6fba14;
case 0x6fba15:goto L6fba15;
case 0x6fba18:c.instructions+=2;goto B6fba18;
case 0x6fba1a:c.instructions+=1;goto B6fba1a;
case 0x6fba1c:goto L6fba1c;
case 0x6fba1e:c.instructions+=2;goto B6fba1e;
case 0x6fba21:c.instructions+=1;goto B6fba21;
case 0x6fba23:goto L6fba23;
case 0x6fba26:c.instructions+=1;goto B6fba26;
case 0x6fba28:goto L6fba28;
case 0x6fba2b:c.instructions+=2;goto B6fba2b;
case 0x6fba2e:c.instructions+=1;goto B6fba2e;
case 0x6fba30:goto L6fba30;
case 0x6fba33:goto L6fba33;
case 0x6fba36:c.instructions+=1;goto B6fba36;
case 0x6fba38:goto L6fba38;
case 0x6fba3b:c.instructions+=1;goto B6fba3b;
case 0x6fba3d:goto L6fba3d;
case 0x6fba40:c.instructions+=2;goto B6fba40;
case 0x6fba43:c.instructions+=1;goto B6fba43;
case 0x6fba45:goto L6fba45;
case 0x6fba48:goto L6fba48;
case 0x6fba4a:c.instructions+=1;goto B6fba4a;
case 0x6fba4c:goto L6fba4c;
case 0x6fba4d:c.instructions+=3;goto B6fba4d;
case 0x6fba4e:c.instructions+=2;goto B6fba4e;
case 0x6fba51:c.instructions+=1;goto B6fba51;
case 0x6fba53:goto L6fba53;
case 0x6fba54:c.instructions+=2;goto B6fba54;
case 0x6fba55:c.instructions+=1;goto B6fba55;
case 0x6fba56:goto L6fba56;
case 0x6fba57:goto L6fba57;
case 0x6fba58:c.instructions+=5;goto B6fba58;
case 0x6fba5a:c.instructions+=4;goto B6fba5a;
case 0x6fba5c:c.instructions+=3;goto B6fba5c;
case 0x6fba5d:c.instructions+=2;goto B6fba5d;
case 0x6fba60:c.instructions+=1;goto B6fba60;
case 0x6fba61:goto L6fba61;
case 0x6fba63:c.instructions+=3;goto B6fba63;
case 0x6fba64:c.instructions+=2;goto B6fba64;
case 0x6fba66:c.instructions+=1;goto B6fba66;
case 0x6fba68:goto L6fba68;
case 0x6fba6a:c.instructions+=5;goto B6fba6a;
case 0x6fba6c:c.instructions+=4;goto B6fba6c;
case 0x6fba6f:c.instructions+=3;goto B6fba6f;
case 0x6fba70:c.instructions+=2;goto B6fba70;
case 0x6fba72:c.instructions+=1;goto B6fba72;
case 0x6fba74:goto L6fba74;
case 0x6fba76:c.instructions+=1;goto B6fba76;
case 0x6fba79:goto L6fba79;
case 0x6fba7b:c.instructions+=3;goto B6fba7b;
case 0x6fba7c:c.instructions+=2;goto B6fba7c;
case 0x6fba7e:c.instructions+=1;goto B6fba7e;
case 0x6fba80:goto L6fba80;
case 0x6fba82:goto L6fba82;
case 0x6fba84:c.instructions+=3;goto B6fba84;
case 0x6fba87:c.instructions+=2;goto B6fba87;
case 0x6fba89:c.instructions+=1;goto B6fba89;
case 0x6fba8b:goto L6fba8b;
case 0x6fba8d:c.instructions+=2;goto B6fba8d;
case 0x6fba8f:c.instructions+=1;goto B6fba8f;
case 0x6fba91:goto L6fba91;
case 0x6fba93:c.instructions+=1;goto B6fba93;
case 0x6fba95:goto L6fba95;
case 0x6fba98:c.instructions+=2;goto B6fba98;
case 0x6fba9b:c.instructions+=1;goto B6fba9b;
case 0x6fba9d:goto L6fba9d;
case 0x6fbaa0:goto L6fbaa0;
case 0x6fbaa3:c.instructions+=3;goto B6fbaa3;
case 0x6fbaa4:c.instructions+=2;goto B6fbaa4;
case 0x6fbaa5:c.instructions+=1;goto B6fbaa5;
case 0x6fbaa7:goto L6fbaa7;
case 0x6fbaa8:c.instructions+=4;goto B6fbaa8;
case 0x6fbaac:c.instructions+=3;goto B6fbaac;
case 0x6fbaad:c.instructions+=2;goto B6fbaad;
case 0x6fbaae:c.instructions+=1;goto B6fbaae;
case 0x6fbaaf:goto L6fbaaf;
case 0x6fbab0:c.instructions+=9;goto B6fbab0;
case 0x6fbab2:c.instructions+=8;goto B6fbab2;
case 0x6fbab3:c.instructions+=7;goto B6fbab3;
case 0x6fbab7:c.instructions+=6;goto B6fbab7;
case 0x6fbab8:c.instructions+=5;goto B6fbab8;
case 0x6fbab9:c.instructions+=4;goto B6fbab9;
case 0x6fbaba:c.instructions+=3;goto B6fbaba;
case 0x6fbabc:c.instructions+=2;goto B6fbabc;
case 0x6fbabe:c.instructions+=1;goto B6fbabe;
case 0x6fbac0:goto L6fbac0;
case 0x6fbac6:c.instructions+=2;goto B6fbac6;
case 0x6fbac8:c.instructions+=1;goto B6fbac8;
case 0x6fbaca:goto L6fbaca;
case 0x6fbacd:c.instructions+=1;goto B6fbacd;
case 0x6fbad2:goto L6fbad2;
case 0x6fbad4:c.instructions+=1;goto B6fbad4;
case 0x6fbad6:goto L6fbad6;
case 0x6fbad9:c.instructions+=1;goto B6fbad9;
case 0x6fbadb:goto L6fbadb;
case 0x6fbade:c.instructions+=3;goto B6fbade;
case 0x6fbadf:c.instructions+=2;goto B6fbadf;
case 0x6fbae2:c.instructions+=1;goto B6fbae2;
case 0x6fbae4:goto L6fbae4;
case 0x6fbae7:c.instructions+=5;goto B6fbae7;
case 0x6fbae8:c.instructions+=4;goto B6fbae8;
case 0x6fbae9:c.instructions+=3;goto B6fbae9;
case 0x6fbaea:c.instructions+=2;goto B6fbaea;
case 0x6fbaeb:c.instructions+=1;goto B6fbaeb;
case 0x6fbaec:goto L6fbaec;
case 0x6fbaed:c.instructions+=7;goto B6fbaed;
case 0x6fbaef:c.instructions+=6;goto B6fbaef;
case 0x6fbaf0:c.instructions+=5;goto B6fbaf0;
case 0x6fbaf1:c.instructions+=4;goto B6fbaf1;
case 0x6fbaf2:c.instructions+=3;goto B6fbaf2;
case 0x6fbaf5:c.instructions+=2;goto B6fbaf5;
case 0x6fbaf7:c.instructions+=1;goto B6fbaf7;
case 0x6fbaf9:goto L6fbaf9;
case 0x6fbb00:c.instructions+=2;goto B6fbb00;
case 0x6fbb02:c.instructions+=1;goto B6fbb02;
case 0x6fbb04:goto L6fbb04;
case 0x6fbb07:c.instructions+=1;goto B6fbb07;
case 0x6fbb0c:goto L6fbb0c;
case 0x6fbb0e:c.instructions+=1;goto B6fbb0e;
case 0x6fbb10:goto L6fbb10;
case 0x6fbb12:c.instructions+=1;goto B6fbb12;
case 0x6fbb14:goto L6fbb14;
case 0x6fbb15:c.instructions+=2;goto B6fbb15;
case 0x6fbb18:c.instructions+=1;goto B6fbb18;
case 0x6fbb1a:goto L6fbb1a;
case 0x6fbb1b:c.instructions+=5;goto B6fbb1b;
case 0x6fbb1c:c.instructions+=4;goto B6fbb1c;
case 0x6fbb1e:c.instructions+=3;goto B6fbb1e;
case 0x6fbb1f:c.instructions+=2;goto B6fbb1f;
case 0x6fbb20:c.instructions+=1;goto B6fbb20;
case 0x6fbb21:goto L6fbb21;
case 0x6fbb22:c.instructions+=11;goto B6fbb22;
case 0x6fbb24:c.instructions+=10;goto B6fbb24;
case 0x6fbb2a:c.instructions+=9;goto B6fbb2a;
case 0x6fbb2b:c.instructions+=8;goto B6fbb2b;
case 0x6fbb2c:c.instructions+=7;goto B6fbb2c;
case 0x6fbb31:c.instructions+=6;goto B6fbb31;
case 0x6fbb34:c.instructions+=5;goto B6fbb34;
case 0x6fbb36:c.instructions+=4;goto B6fbb36;
case 0x6fbb37:c.instructions+=3;goto B6fbb37;
case 0x6fbb3c:c.instructions+=2;goto B6fbb3c;
case 0x6fbb42:c.instructions+=1;goto B6fbb42;
case 0x6fbb47:goto L6fbb47;
case 0x6fbb4a:c.instructions+=4;goto B6fbb4a;
case 0x6fbb4b:c.instructions+=3;goto B6fbb4b;
case 0x6fbb4d:c.instructions+=2;goto B6fbb4d;
case 0x6fbb4e:c.instructions+=1;goto B6fbb4e;
case 0x6fbb53:goto L6fbb53;
case 0x6fbb56:c.instructions+=3;goto B6fbb56;
case 0x6fbb57:c.instructions+=2;goto B6fbb57;
case 0x6fbb58:c.instructions+=1;goto B6fbb58;
case 0x6fbb5a:goto L6fbb5a;
case 0x6fbb5d:c.instructions+=1;goto B6fbb5d;
case 0x6fbb5f:goto L6fbb5f;
case 0x6fbb60:c.instructions+=2;goto B6fbb60;
case 0x6fbb61:c.instructions+=1;goto B6fbb61;
case 0x6fbb66:goto L6fbb66;
case 0x6fbb68:c.instructions+=2;goto B6fbb68;
case 0x6fbb69:c.instructions+=1;goto B6fbb69;
case 0x6fbb6b:goto L6fbb6b;
case 0x6fbb6e:c.instructions+=2;goto B6fbb6e;
case 0x6fbb76:c.instructions+=1;goto B6fbb76;
case 0x6fbb78:goto L6fbb78;
case 0x6fbb79:c.instructions+=1;goto B6fbb79;
case 0x6fbb7e:goto L6fbb7e;
case 0x6fbb80:c.instructions+=2;goto B6fbb80;
case 0x6fbb81:c.instructions+=1;goto B6fbb81;
case 0x6fbb83:goto L6fbb83;
case 0x6fbb86:c.instructions+=1;goto B6fbb86;
case 0x6fbb8e:goto L6fbb8e;
case 0x6fbb91:c.instructions+=3;goto B6fbb91;
case 0x6fbb92:c.instructions+=2;goto B6fbb92;
case 0x6fbb94:c.instructions+=1;goto B6fbb94;
case 0x6fbb99:goto L6fbb99;
case 0x6fbb9a:c.instructions+=1;goto B6fbb9a;
case 0x6fbb9b:goto L6fbb9b;
case 0x6fbb9d:c.instructions+=1;goto B6fbb9d;
case 0x6fbb9f:goto L6fbb9f;
case 0x6fbba0:c.instructions+=1;goto B6fbba0;
case 0x6fbba1:goto L6fbba1;
case 0x6fbba2:c.instructions+=7;goto B6fbba2;
case 0x6fbba4:c.instructions+=6;goto B6fbba4;
case 0x6fbbaa:c.instructions+=5;goto B6fbbaa;
case 0x6fbbab:c.instructions+=4;goto B6fbbab;
case 0x6fbbb0:c.instructions+=3;goto B6fbbb0;
case 0x6fbbb6:c.instructions+=2;goto B6fbbb6;
case 0x6fbbbd:c.instructions+=1;goto B6fbbbd;
case 0x6fbbc2:goto L6fbbc2;
case 0x6fbbc5:c.instructions+=4;goto B6fbbc5;
case 0x6fbbc6:c.instructions+=3;goto B6fbbc6;
case 0x6fbbc8:c.instructions+=2;goto B6fbbc8;
case 0x6fbbc9:c.instructions+=1;goto B6fbbc9;
case 0x6fbbce:goto L6fbbce;
case 0x6fbbd1:c.instructions+=2;goto B6fbbd1;
case 0x6fbbd2:c.instructions+=1;goto B6fbbd2;
case 0x6fbbd4:goto L6fbbd4;
case 0x6fbbd6:c.instructions+=2;goto B6fbbd6;
case 0x6fbbd9:c.instructions+=1;goto B6fbbd9;
case 0x6fbbdb:goto L6fbbdb;
case 0x6fbbde:c.instructions+=1;goto B6fbbde;
case 0x6fbbe0:goto L6fbbe0;
case 0x6fbbe1:c.instructions+=1;goto B6fbbe1;
case 0x6fbbe6:goto L6fbbe6;
case 0x6fbbe8:c.instructions+=2;goto B6fbbe8;
case 0x6fbbe9:c.instructions+=1;goto B6fbbe9;
case 0x6fbbeb:goto L6fbbeb;
case 0x6fbbed:c.instructions+=1;goto B6fbbed;
case 0x6fbbef:goto L6fbbef;
case 0x6fbbf0:c.instructions+=2;goto B6fbbf0;
case 0x6fbbf1:c.instructions+=1;goto B6fbbf1;
case 0x6fbbf6:goto L6fbbf6;
case 0x6fbbf8:c.instructions+=2;goto B6fbbf8;
case 0x6fbbf9:c.instructions+=1;goto B6fbbf9;
case 0x6fbbfb:goto L6fbbfb;
case 0x6fbbfd:goto L6fbbfd;
case 0x6fbc02:goto L6fbc02;
case 0x6fbc05:c.instructions+=3;goto B6fbc05;
case 0x6fbc06:c.instructions+=2;goto B6fbc06;
case 0x6fbc08:c.instructions+=1;goto B6fbc08;
case 0x6fbc0d:goto L6fbc0d;
case 0x6fbc0e:c.instructions+=1;goto B6fbc0e;
case 0x6fbc0f:goto L6fbc0f;
case 0x6fbc11:c.instructions+=1;goto B6fbc11;
case 0x6fbc13:goto L6fbc13;
case 0x6fbc14:c.instructions+=1;goto B6fbc14;
case 0x6fbc1d:goto L6fbc1d;
case 0x6fbc1e:c.instructions+=6;goto B6fbc1e;
case 0x6fbc20:c.instructions+=5;goto B6fbc20;
case 0x6fbc26:c.instructions+=4;goto B6fbc26;
case 0x6fbc27:c.instructions+=3;goto B6fbc27;
case 0x6fbc2a:c.instructions+=2;goto B6fbc2a;
case 0x6fbc32:c.instructions+=1;goto B6fbc32;
case 0x6fbc34:goto L6fbc34;
case 0x6fbc35:c.instructions+=6;goto B6fbc35;
case 0x6fbc38:c.instructions+=5;goto B6fbc38;
case 0x6fbc3e:c.instructions+=4;goto B6fbc3e;
case 0x6fbc41:c.instructions+=3;goto B6fbc41;
case 0x6fbc46:c.instructions+=2;goto B6fbc46;
case 0x6fbc47:c.instructions+=1;goto B6fbc47;
case 0x6fbc4c:goto L6fbc4c;
case 0x6fbc4f:c.instructions+=1;goto B6fbc4f;
case 0x6fbc54:goto L6fbc54;
case 0x6fbc58:c.instructions+=1;goto B6fbc58;
case 0x6fbc5a:goto L6fbc5a;
case 0x6fbc5c:c.instructions+=2;goto B6fbc5c;
case 0x6fbc5e:c.instructions+=1;goto B6fbc5e;
case 0x6fbc60:goto L6fbc60;
case 0x6fbc66:c.instructions+=3;goto B6fbc66;
case 0x6fbc67:c.instructions+=2;goto B6fbc67;
case 0x6fbc68:c.instructions+=1;goto B6fbc68;
case 0x6fbc6a:goto L6fbc6a;
case 0x6fbc6b:c.instructions+=1;goto B6fbc6b;
case 0x6fbc6c:goto L6fbc6c;
case 0x6fbc6f:c.instructions+=2;goto B6fbc6f;
case 0x6fbc75:c.instructions+=1;goto B6fbc75;
case 0x6fbc77:goto L6fbc77;
case 0x6fbc78:goto L6fbc78;
case 0x6fbc79:c.instructions+=2;goto B6fbc79;
case 0x6fbc7a:c.instructions+=1;goto B6fbc7a;
case 0x6fbc7b:goto L6fbc7b;
case 0x6fbc7c:c.instructions+=3;goto B6fbc7c;
case 0x6fbc7e:c.instructions+=2;goto B6fbc7e;
case 0x6fbc83:c.instructions+=1;goto B6fbc83;
case 0x6fbc88:goto L6fbc88;
case 0x6fbc89:c.instructions+=5;goto B6fbc89;
case 0x6fbc8a:c.instructions+=4;goto B6fbc8a;
case 0x6fbc8d:c.instructions+=3;goto B6fbc8d;
case 0x6fbc8f:c.instructions+=2;goto B6fbc8f;
case 0x6fbc96:c.instructions+=1;goto B6fbc96;
case 0x6fbc98:goto L6fbc98;
case 0x6fbc99:c.instructions+=6;goto B6fbc99;
case 0x6fbc9c:c.instructions+=5;goto B6fbc9c;
case 0x6fbca2:c.instructions+=4;goto B6fbca2;
case 0x6fbca5:c.instructions+=3;goto B6fbca5;
case 0x6fbcaa:c.instructions+=2;goto B6fbcaa;
case 0x6fbcab:c.instructions+=1;goto B6fbcab;
case 0x6fbcb0:goto L6fbcb0;
case 0x6fbcb3:c.instructions+=3;goto B6fbcb3;
case 0x6fbcb5:c.instructions+=2;goto B6fbcb5;
case 0x6fbcbc:c.instructions+=1;goto B6fbcbc;
case 0x6fbcbe:goto L6fbcbe;
case 0x6fbcc4:c.instructions+=1;goto B6fbcc4;
case 0x6fbcc6:goto L6fbcc6;
case 0x6fbcc8:c.instructions+=7;goto B6fbcc8;
case 0x6fbccf:c.instructions+=6;goto B6fbccf;
case 0x6fbcd0:c.instructions+=5;goto B6fbcd0;
case 0x6fbcd1:c.instructions+=4;goto B6fbcd1;
case 0x6fbcd2:c.instructions+=3;goto B6fbcd2;
case 0x6fbcd5:c.instructions+=2;goto B6fbcd5;
case 0x6fbcd7:c.instructions+=1;goto B6fbcd7;
case 0x6fbcd9:goto L6fbcd9;
case 0x6fbce0:c.instructions+=1;goto B6fbce0;
case 0x6fbce5:goto L6fbce5;
case 0x6fbce8:c.instructions+=1;goto B6fbce8;
case 0x6fbcea:goto L6fbcea;
case 0x6fbcec:c.instructions+=2;goto B6fbcec;
case 0x6fbcee:c.instructions+=1;goto B6fbcee;
case 0x6fbcf0:goto L6fbcf0;
case 0x6fbcf6:c.instructions+=3;goto B6fbcf6;
case 0x6fbcf7:c.instructions+=2;goto B6fbcf7;
case 0x6fbcf8:c.instructions+=1;goto B6fbcf8;
case 0x6fbcfa:goto L6fbcfa;
case 0x6fbcfb:c.instructions+=1;goto B6fbcfb;
case 0x6fbcfc:goto L6fbcfc;
case 0x6fbcff:c.instructions+=2;goto B6fbcff;
case 0x6fbd05:c.instructions+=1;goto B6fbd05;
case 0x6fbd07:goto L6fbd07;
case 0x6fbd08:goto L6fbd08;
case 0x6fbd09:c.instructions+=3;goto B6fbd09;
case 0x6fbd0a:c.instructions+=2;goto B6fbd0a;
case 0x6fbd0b:c.instructions+=1;goto B6fbd0b;
case 0x6fbd0c:goto L6fbd0c;
case 0x6fbd0d:c.instructions+=6;goto B6fbd0d;
case 0x6fbd0f:c.instructions+=5;goto B6fbd0f;
case 0x6fbd12:c.instructions+=4;goto B6fbd12;
case 0x6fbd15:c.instructions+=3;goto B6fbd15;
case 0x6fbd18:c.instructions+=2;goto B6fbd18;
case 0x6fbd1f:c.instructions+=1;goto B6fbd1f;
case 0x6fbd21:goto L6fbd21;
case 0x6fbd24:c.instructions+=3;goto B6fbd24;
case 0x6fbd29:c.instructions+=2;goto B6fbd29;
case 0x6fbd2f:c.instructions+=1;goto B6fbd2f;
case 0x6fbd34:goto L6fbd34;
case 0x6fbd36:c.instructions+=2;goto B6fbd36;
case 0x6fbd37:c.instructions+=1;goto B6fbd37;
case 0x6fbd39:goto L6fbd39;
case 0x6fbd3b:c.instructions+=2;goto B6fbd3b;
case 0x6fbd3c:c.instructions+=1;goto B6fbd3c;
case 0x6fbd41:goto L6fbd41;
case 0x6fbd42:c.instructions+=1;goto B6fbd42;
case 0x6fbd43:goto L6fbd43;
case 0x6fbd44:c.instructions+=6;goto B6fbd44;
case 0x6fbd46:c.instructions+=5;goto B6fbd46;
case 0x6fbd49:c.instructions+=4;goto B6fbd49;
case 0x6fbd4c:c.instructions+=3;goto B6fbd4c;
case 0x6fbd53:c.instructions+=2;goto B6fbd53;
case 0x6fbd54:c.instructions+=1;goto B6fbd54;
case 0x6fbd55:goto L6fbd55;
case 0x6fbd56:c.instructions+=10;goto B6fbd56;
case 0x6fbd58:c.instructions+=9;goto B6fbd58;
case 0x6fbd5b:c.instructions+=8;goto B6fbd5b;
case 0x6fbd5e:c.instructions+=7;goto B6fbd5e;
case 0x6fbd61:c.instructions+=6;goto B6fbd61;
case 0x6fbd64:c.instructions+=5;goto B6fbd64;
case 0x6fbd6a:c.instructions+=4;goto B6fbd6a;
case 0x6fbd6d:c.instructions+=3;goto B6fbd6d;
case 0x6fbd72:c.instructions+=2;goto B6fbd72;
case 0x6fbd78:c.instructions+=1;goto B6fbd78;
case 0x6fbd7d:goto L6fbd7d;
case 0x6fbd7f:c.instructions+=2;goto B6fbd7f;
case 0x6fbd80:c.instructions+=1;goto B6fbd80;
case 0x6fbd82:goto L6fbd82;
case 0x6fbd84:c.instructions+=2;goto B6fbd84;
case 0x6fbd85:c.instructions+=1;goto B6fbd85;
case 0x6fbd8a:goto L6fbd8a;
case 0x6fbd8b:c.instructions+=1;goto B6fbd8b;
case 0x6fbd8c:goto L6fbd8c;
case 0x6fbd8d:c.instructions+=6;goto B6fbd8d;
case 0x6fbd8f:c.instructions+=5;goto B6fbd8f;
case 0x6fbd92:c.instructions+=4;goto B6fbd92;
case 0x6fbd95:c.instructions+=3;goto B6fbd95;
case 0x6fbd9c:c.instructions+=2;goto B6fbd9c;
case 0x6fbd9d:c.instructions+=1;goto B6fbd9d;
case 0x6fbd9e:goto L6fbd9e;
case 0x6fbd9f:c.instructions+=4;goto B6fbd9f;
case 0x6fbda1:c.instructions+=3;goto B6fbda1;
case 0x6fbda4:c.instructions+=2;goto B6fbda4;
case 0x6fbda7:c.instructions+=1;goto B6fbda7;
case 0x6fbdac:goto L6fbdac;
case 0x6fbdb1:c.instructions+=1;goto B6fbdb1;
case 0x6fbdb6:goto L6fbdb6;
case 0x6fbdb8:c.instructions+=2;goto B6fbdb8;
case 0x6fbdb9:c.instructions+=1;goto B6fbdb9;
case 0x6fbdbb:goto L6fbdbb;
case 0x6fbdbd:c.instructions+=2;goto B6fbdbd;
case 0x6fbdbe:c.instructions+=1;goto B6fbdbe;
case 0x6fbdc3:goto L6fbdc3;
case 0x6fbdc4:c.instructions+=1;goto B6fbdc4;
case 0x6fbdc5:goto L6fbdc5;
case 0x6fbdc6:c.instructions+=5;goto B6fbdc6;
case 0x6fbdc8:c.instructions+=4;goto B6fbdc8;
case 0x6fbdcb:c.instructions+=3;goto B6fbdcb;
case 0x6fbdd2:c.instructions+=2;goto B6fbdd2;
case 0x6fbdd3:c.instructions+=1;goto B6fbdd3;
case 0x6fbdd4:goto L6fbdd4;
case 0x6fbdd5:c.instructions+=6;goto B6fbdd5;
case 0x6fbdd7:c.instructions+=5;goto B6fbdd7;
case 0x6fbdda:c.instructions+=4;goto B6fbdda;
case 0x6fbddd:c.instructions+=3;goto B6fbddd;
case 0x6fbde2:c.instructions+=2;goto B6fbde2;
case 0x6fbde9:c.instructions+=1;goto B6fbde9;
case 0x6fbdee:goto L6fbdee;
case 0x6fbdf0:c.instructions+=2;goto B6fbdf0;
case 0x6fbdf1:c.instructions+=1;goto B6fbdf1;
case 0x6fbdf3:goto L6fbdf3;
case 0x6fbdf5:c.instructions+=2;goto B6fbdf5;
case 0x6fbdf6:c.instructions+=1;goto B6fbdf6;
case 0x6fbdfb:goto L6fbdfb;
case 0x6fbdfc:c.instructions+=1;goto B6fbdfc;
case 0x6fbdfd:goto L6fbdfd;
case 0x6fbdfe:c.instructions+=5;goto B6fbdfe;
case 0x6fbe00:c.instructions+=4;goto B6fbe00;
case 0x6fbe03:c.instructions+=3;goto B6fbe03;
case 0x6fbe0a:c.instructions+=2;goto B6fbe0a;
case 0x6fbe0b:c.instructions+=1;goto B6fbe0b;
case 0x6fbe0c:goto L6fbe0c;
case 0x6fbe0d:c.instructions+=6;goto B6fbe0d;
case 0x6fbe0f:c.instructions+=5;goto B6fbe0f;
case 0x6fbe12:c.instructions+=4;goto B6fbe12;
case 0x6fbe15:c.instructions+=3;goto B6fbe15;
case 0x6fbe1c:c.instructions+=2;goto B6fbe1c;
case 0x6fbe1e:c.instructions+=1;goto B6fbe1e;
case 0x6fbe20:goto L6fbe20;
case 0x6fbe23:c.instructions+=2;goto B6fbe23;
case 0x6fbe26:c.instructions+=1;goto B6fbe26;
case 0x6fbe28:goto L6fbe28;
case 0x6fbe29:c.instructions+=1;goto B6fbe29;
case 0x6fbe2a:goto L6fbe2a;
case 0x6fbe2b:c.instructions+=1;goto B6fbe2b;
case 0x6fbe2c:goto L6fbe2c;
case 0x6fbe2d:c.instructions+=3;goto B6fbe2d;
case 0x6fbe2f:c.instructions+=2;goto B6fbe2f;
case 0x6fbe35:c.instructions+=1;goto B6fbe35;
case 0x6fbe37:goto L6fbe37;
case 0x6fbe3e:c.instructions+=1;goto B6fbe3e;
case 0x6fbe43:goto L6fbe43;
case 0x6fbe45:c.instructions+=3;goto B6fbe45;
case 0x6fbe48:c.instructions+=2;goto B6fbe48;
case 0x6fbe4d:c.instructions+=1;goto B6fbe4d;
case 0x6fbe4f:goto L6fbe4f;
case 0x6fbe54:goto L6fbe54;
case 0x6fbe56:c.instructions+=3;goto B6fbe56;
case 0x6fbe59:c.instructions+=2;goto B6fbe59;
case 0x6fbe5e:c.instructions+=1;goto B6fbe5e;
case 0x6fbe60:goto L6fbe60;
case 0x6fbe65:goto L6fbe65;
case 0x6fbe68:c.instructions+=4;goto B6fbe68;
case 0x6fbe6a:c.instructions+=3;goto B6fbe6a;
case 0x6fbe6d:c.instructions+=2;goto B6fbe6d;
case 0x6fbe72:c.instructions+=1;goto B6fbe72;
case 0x6fbe74:goto L6fbe74;
case 0x6fbe79:goto L6fbe79;
case 0x6fbe7c:c.instructions+=4;goto B6fbe7c;
case 0x6fbe7e:c.instructions+=3;goto B6fbe7e;
case 0x6fbe81:c.instructions+=2;goto B6fbe81;
case 0x6fbe86:c.instructions+=1;goto B6fbe86;
case 0x6fbe88:goto L6fbe88;
case 0x6fbe8a:c.instructions+=2;goto B6fbe8a;
case 0x6fbe8c:c.instructions+=1;goto B6fbe8c;
case 0x6fbe91:goto L6fbe91;
case 0x6fbe93:c.instructions+=2;goto B6fbe93;
case 0x6fbe94:c.instructions+=1;goto B6fbe94;
case 0x6fbe99:goto L6fbe99;
case 0x6fbe9c:goto L6fbe9c;
case 0x6fbe9d:c.instructions+=1;goto B6fbe9d;
case 0x6fbe9e:goto L6fbe9e;
case 0x6fbe9f:c.instructions+=4;goto B6fbe9f;
case 0x6fbea1:c.instructions+=3;goto B6fbea1;
case 0x6fbea4:c.instructions+=2;goto B6fbea4;
case 0x6fbea9:c.instructions+=1;goto B6fbea9;
case 0x6fbeae:goto L6fbeae;
case 0x6fbeaf:c.instructions+=3;goto B6fbeaf;
case 0x6fbeb0:c.instructions+=2;goto B6fbeb0;
case 0x6fbeb1:c.instructions+=1;goto B6fbeb1;
case 0x6fbeb2:goto L6fbeb2;
case 0x6fbeb3:c.instructions+=3;goto B6fbeb3;
case 0x6fbeb5:c.instructions+=2;goto B6fbeb5;
case 0x6fbeb8:c.instructions+=1;goto B6fbeb8;
case 0x6fbebe:goto L6fbebe;
case 0x6fbebf:c.instructions+=1;goto B6fbebf;
case 0x6fbec0:goto L6fbec0;
case 0x6fbec1:c.instructions+=8;goto B6fbec1;
case 0x6fbec3:c.instructions+=7;goto B6fbec3;
case 0x6fbec5:c.instructions+=6;goto B6fbec5;
case 0x6fbec6:c.instructions+=5;goto B6fbec6;
case 0x6fbec7:c.instructions+=4;goto B6fbec7;
case 0x6fbec8:c.instructions+=3;goto B6fbec8;
case 0x6fbecb:c.instructions+=2;goto B6fbecb;
case 0x6fbecc:c.instructions+=1;goto B6fbecc;
case 0x6fbed1:goto L6fbed1;
case 0x6fbed4:c.instructions+=2;goto B6fbed4;
case 0x6fbed5:c.instructions+=1;goto B6fbed5;
case 0x6fbed6:goto L6fbed6;
case 0x6fbed7:c.instructions+=5;goto B6fbed7;
case 0x6fbed9:c.instructions+=4;goto B6fbed9;
case 0x6fbeda:c.instructions+=3;goto B6fbeda;
case 0x6fbedf:c.instructions+=2;goto B6fbedf;
case 0x6fbee1:c.instructions+=1;goto B6fbee1;
case 0x6fbee6:goto L6fbee6;
case 0x6fbee8:c.instructions+=2;goto B6fbee8;
case 0x6fbee9:c.instructions+=1;goto B6fbee9;
case 0x6fbeeb:goto L6fbeeb;
case 0x6fbeee:c.instructions+=4;goto B6fbeee;
case 0x6fbef0:c.instructions+=3;goto B6fbef0;
case 0x6fbef3:c.instructions+=2;goto B6fbef3;
case 0x6fbef6:c.instructions+=1;goto B6fbef6;
case 0x6fbefb:goto L6fbefb;
case 0x6fbefd:goto L6fbefd;
case 0x6fbeff:goto L6fbeff;
case 0x6fbf01:c.instructions+=4;goto B6fbf01;
case 0x6fbf03:c.instructions+=3;goto B6fbf03;
case 0x6fbf04:c.instructions+=2;goto B6fbf04;
case 0x6fbf05:c.instructions+=1;goto B6fbf05;
case 0x6fbf08:goto L6fbf08;
case 0x6fbf09:c.instructions+=4;goto B6fbf09;
case 0x6fbf0b:c.instructions+=3;goto B6fbf0b;
case 0x6fbf0d:c.instructions+=2;goto B6fbf0d;
case 0x6fbf0e:c.instructions+=1;goto B6fbf0e;
case 0x6fbf13:goto L6fbf13;
case 0x6fbf14:c.instructions+=4;goto B6fbf14;
case 0x6fbf16:c.instructions+=3;goto B6fbf16;
case 0x6fbf18:c.instructions+=2;goto B6fbf18;
case 0x6fbf19:c.instructions+=1;goto B6fbf19;
case 0x6fbf1e:goto L6fbf1e;
case 0x6fbf1f:c.instructions+=4;goto B6fbf1f;
case 0x6fbf21:c.instructions+=3;goto B6fbf21;
case 0x6fbf24:c.instructions+=2;goto B6fbf24;
case 0x6fbf26:c.instructions+=1;goto B6fbf26;
case 0x6fbf28:goto L6fbf28;
case 0x6fbf2b:c.instructions+=1;goto B6fbf2b;
case 0x6fbf2d:goto L6fbf2d;
case 0x6fbf2f:c.instructions+=7;goto B6fbf2f;
case 0x6fbf30:c.instructions+=6;goto B6fbf30;
case 0x6fbf33:c.instructions+=5;goto B6fbf33;
case 0x6fbf36:c.instructions+=4;goto B6fbf36;
case 0x6fbf39:c.instructions+=3;goto B6fbf39;
case 0x6fbf3c:c.instructions+=2;goto B6fbf3c;
case 0x6fbf3f:c.instructions+=1;goto B6fbf3f;
case 0x6fbf44:goto L6fbf44;
case 0x6fbf46:goto L6fbf46;
case 0x6fbf49:c.instructions+=6;goto B6fbf49;
case 0x6fbf4b:c.instructions+=5;goto B6fbf4b;
case 0x6fbf4e:c.instructions+=4;goto B6fbf4e;
case 0x6fbf51:c.instructions+=3;goto B6fbf51;
case 0x6fbf54:c.instructions+=2;goto B6fbf54;
case 0x6fbf57:c.instructions+=1;goto B6fbf57;
case 0x6fbf5c:goto L6fbf5c;
case 0x6fbf5d:c.instructions+=1;goto B6fbf5d;
case 0x6fbf60:goto L6fbf60;
case 0x6fbf61:c.instructions+=4;goto B6fbf61;
case 0x6fbf63:c.instructions+=3;goto B6fbf63;
case 0x6fbf65:c.instructions+=2;goto B6fbf65;
case 0x6fbf66:c.instructions+=1;goto B6fbf66;
case 0x6fbf6b:goto L6fbf6b;
case 0x6fbf6c:c.instructions+=4;goto B6fbf6c;
case 0x6fbf6e:c.instructions+=3;goto B6fbf6e;
case 0x6fbf70:c.instructions+=2;goto B6fbf70;
case 0x6fbf71:c.instructions+=1;goto B6fbf71;
case 0x6fbf76:goto L6fbf76;
case 0x6fbf77:c.instructions+=4;goto B6fbf77;
case 0x6fbf79:c.instructions+=3;goto B6fbf79;
case 0x6fbf7c:c.instructions+=2;goto B6fbf7c;
case 0x6fbf7e:c.instructions+=1;goto B6fbf7e;
case 0x6fbf80:goto L6fbf80;
case 0x6fbf83:c.instructions+=1;goto B6fbf83;
case 0x6fbf85:goto L6fbf85;
case 0x6fbf87:c.instructions+=3;goto B6fbf87;
case 0x6fbf88:c.instructions+=2;goto B6fbf88;
case 0x6fbf8b:c.instructions+=1;goto B6fbf8b;
case 0x6fbf90:goto L6fbf90;
case 0x6fbf92:goto L6fbf92;
case 0x6fbf95:c.instructions+=2;goto B6fbf95;
case 0x6fbf97:c.instructions+=1;goto B6fbf97;
case 0x6fbf9c:goto L6fbf9c;
case 0x6fbf9d:c.instructions+=1;goto B6fbf9d;
case 0x6fbfa0:goto L6fbfa0;
case 0x6fbfa1:c.instructions+=4;goto B6fbfa1;
case 0x6fbfa3:c.instructions+=3;goto B6fbfa3;
case 0x6fbfa5:c.instructions+=2;goto B6fbfa5;
case 0x6fbfa6:c.instructions+=1;goto B6fbfa6;
case 0x6fbfab:goto L6fbfab;
case 0x6fbfac:c.instructions+=4;goto B6fbfac;
case 0x6fbfae:c.instructions+=3;goto B6fbfae;
case 0x6fbfb0:c.instructions+=2;goto B6fbfb0;
case 0x6fbfb1:c.instructions+=1;goto B6fbfb1;
case 0x6fbfb6:goto L6fbfb6;
case 0x6fbfb7:c.instructions+=4;goto B6fbfb7;
case 0x6fbfb9:c.instructions+=3;goto B6fbfb9;
case 0x6fbfbb:c.instructions+=2;goto B6fbfbb;
case 0x6fbfbc:c.instructions+=1;goto B6fbfbc;
case 0x6fbfc1:goto L6fbfc1;
case 0x6fbfc2:c.instructions+=4;goto B6fbfc2;
case 0x6fbfc4:c.instructions+=3;goto B6fbfc4;
case 0x6fbfc6:c.instructions+=2;goto B6fbfc6;
case 0x6fbfc7:c.instructions+=1;goto B6fbfc7;
case 0x6fbfcc:goto L6fbfcc;
case 0x6fbfcd:c.instructions+=4;goto B6fbfcd;
case 0x6fbfcf:c.instructions+=3;goto B6fbfcf;
case 0x6fbfd1:c.instructions+=2;goto B6fbfd1;
case 0x6fbfd2:c.instructions+=1;goto B6fbfd2;
case 0x6fbfe6:goto L6fbfe6;
case 0x6fbfe7:c.instructions+=4;goto B6fbfe7;
case 0x6fbfe9:c.instructions+=3;goto B6fbfe9;
case 0x6fbfeb:c.instructions+=2;goto B6fbfeb;
case 0x6fbfec:c.instructions+=1;goto B6fbfec;
case 0x6fbff1:goto L6fbff1;
case 0x6fbff2:c.instructions+=4;goto B6fbff2;
case 0x6fbff4:c.instructions+=3;goto B6fbff4;
case 0x6fbff6:c.instructions+=2;goto B6fbff6;
case 0x6fbff7:c.instructions+=1;goto B6fbff7;
case 0x6fbffc:goto L6fbffc;
case 0x6fbffd:c.instructions+=2;goto B6fbffd;
case 0x6fbfff:c.instructions+=1;goto B6fbfff;
default:missing_instruction(c.pc);}
B6fb001:L6fb001:{c.instructions+=2;NFSU2_TR(0x6fb001);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fb002:{NFSU2_TR(0x6fb002);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb003:L6fb003:{c.instructions+=5;NFSU2_TR(0x6fb003);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb004:{NFSU2_TR(0x6fb004);
__builtin_memmove((R+20),(R+16),4);
}
B6fb006:{NFSU2_TR(0x6fb006);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fb009:{NFSU2_TR(0x6fb009);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x0ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb00c:{NFSU2_TR(0x6fb00c);
if(r1(R+518)){{goto L6fb040;}}
}
B6fb00e:L6fb00e:{c.instructions+=2;NFSU2_TR(0x6fb00e);
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
B6fb00f:{NFSU2_TR(0x6fb00f);
if(r1(R+518)){{goto L6fb037;}}
}
B6fb011:L6fb011:{c.instructions+=2;NFSU2_TR(0x6fb011);
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
B6fb012:{NFSU2_TR(0x6fb012);
if(r1(R+518)){{goto L6fb026;}}
}
B6fb014:L6fb014:{c.instructions+=2;NFSU2_TR(0x6fb014);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6fb015:{NFSU2_TR(0x6fb015);
if(r1(R+518)){{goto L6fb01b;}}
}
B6fb017:L6fb017:{c.instructions+=3;NFSU2_TR(0x6fb017);
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
B6fb019:{NFSU2_TR(0x6fb019);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fb01a:{NFSU2_TR(0x6fb01a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb01b:L6fb01b:{c.instructions+=5;NFSU2_TR(0x6fb01b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fb01e:{NFSU2_TR(0x6fb01e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fb021:{NFSU2_TR(0x6fb021);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb024:{NFSU2_TR(0x6fb024);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fb025:{NFSU2_TR(0x6fb025);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb026:L6fb026:{c.instructions+=6;NFSU2_TR(0x6fb026);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fb029:{NFSU2_TR(0x6fb029);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6fb02d:{NFSU2_TR(0x6fb02d);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6fb031:{NFSU2_TR(0x6fb031);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6fb035:{NFSU2_TR(0x6fb035);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fb036:{NFSU2_TR(0x6fb036);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb037:L6fb037:{c.instructions+=4;NFSU2_TR(0x6fb037);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fb03a:{NFSU2_TR(0x6fb03a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6fb03e:{NFSU2_TR(0x6fb03e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fb03f:{NFSU2_TR(0x6fb03f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb040:L6fb040:{c.instructions+=4;NFSU2_TR(0x6fb040);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fb043:{NFSU2_TR(0x6fb043);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6fb047:{NFSU2_TR(0x6fb047);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fb048:{NFSU2_TR(0x6fb048);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb049:L6fb049:{c.instructions+=4;NFSU2_TR(0x6fb049);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb04a:{NFSU2_TR(0x6fb04a);
__builtin_memmove((R+20),(R+16),4);
}
B6fb04c:{NFSU2_TR(0x6fb04c);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B6fb050:{NFSU2_TR(0x6fb050);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fb05d;}}
}
B6fb052:L6fb052:{c.instructions+=3;NFSU2_TR(0x6fb052);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6fb056:{NFSU2_TR(0x6fb056);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fb059:{NFSU2_TR(0x6fb059);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6fb05d:L6fb05d:{c.instructions+=2;NFSU2_TR(0x6fb05d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fb05e:{NFSU2_TR(0x6fb05e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb05f:L6fb05f:{c.instructions+=9;NFSU2_TR(0x6fb05f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb060:{NFSU2_TR(0x6fb060);
__builtin_memmove((R+20),(R+16),4);
}
B6fb062:{NFSU2_TR(0x6fb062);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fb065:{NFSU2_TR(0x6fb065);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fb068:{NFSU2_TR(0x6fb068);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(r2(U+0)));
}
B6fb06b:{NFSU2_TR(0x6fb06b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+4,u32(r2(U+0)));
}
B6fb06e:{NFSU2_TR(0x6fb06e);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb070:{NFSU2_TR(0x6fb070);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fb071:{NFSU2_TR(0x6fb071);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb072:L6fb072:{c.instructions+=11;NFSU2_TR(0x6fb072);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb073:{NFSU2_TR(0x6fb073);
__builtin_memmove((R+20),(R+16),4);
}
B6fb075:{NFSU2_TR(0x6fb075);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fb078:{NFSU2_TR(0x6fb078);
u8 U[4];
w4(U+0,u32(0x6fb05full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb07d:{NFSU2_TR(0x6fb07d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb07f:{NFSU2_TR(0x6fb07f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb080:{NFSU2_TR(0x6fb080);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6fb083:{NFSU2_TR(0x6fb083);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb084:{NFSU2_TR(0x6fb084);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fb087:{NFSU2_TR(0x6fb087);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb088:{NFSU2_TR(0x6fb088);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fb08dull));
TAIL_STATIC(0x75f7b8u,75f);
}
B6fb08d:L6fb08d:{c.instructions+=3;NFSU2_TR(0x6fb08d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6fb090:{NFSU2_TR(0x6fb090);
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
B6fb092:{NFSU2_TR(0x6fb092);
if(r1(R+518)){{goto L6fb09a;}}
}
B6fb094:L6fb094:{c.instructions+=3;NFSU2_TR(0x6fb094);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6fb098:{NFSU2_TR(0x6fb098);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fb099:{NFSU2_TR(0x6fb099);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb09a:L6fb09a:{c.instructions+=3;NFSU2_TR(0x6fb09a);
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
B6fb09d:{NFSU2_TR(0x6fb09d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fb09e:{NFSU2_TR(0x6fb09e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb09f:L6fb09f:{c.instructions+=7;NFSU2_TR(0x6fb09f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb0a0:{NFSU2_TR(0x6fb0a0);
__builtin_memmove((R+20),(R+16),4);
}
B6fb0a2:{NFSU2_TR(0x6fb0a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb0a3:{NFSU2_TR(0x6fb0a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fb0a6:{NFSU2_TR(0x6fb0a6);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb0a8:{NFSU2_TR(0x6fb0a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb0a9:{NFSU2_TR(0x6fb0a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fb0aeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb003u);}goto L6fb003;}
}
B6fb0ae:L6fb0ae:{c.instructions+=4;NFSU2_TR(0x6fb0ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb0b0:{NFSU2_TR(0x6fb0b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fb0b1:{NFSU2_TR(0x6fb0b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fb0b2:{NFSU2_TR(0x6fb0b2);
if(r1(R+518)){{goto L6fb0c4;}}
}
B6fb0b4:L6fb0b4:{c.instructions+=4;NFSU2_TR(0x6fb0b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fb0b7:{NFSU2_TR(0x6fb0b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fb0ba:{NFSU2_TR(0x6fb0ba);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B6fb0bc:{NFSU2_TR(0x6fb0bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fb0c1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb072u);}goto L6fb072;}
}
B6fb0c1:L6fb0c1:{c.instructions+=2;NFSU2_TR(0x6fb0c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fb0c2:{NFSU2_TR(0x6fb0c2);
{goto L6fb0c7;}
}
B6fb0c4:L6fb0c4:{c.instructions+=1;NFSU2_TR(0x6fb0c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fb0c7:L6fb0c7:{c.instructions+=6;NFSU2_TR(0x6fb0c7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6fb0cb:{NFSU2_TR(0x6fb0cb);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6fb0cf:{NFSU2_TR(0x6fb0cf);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6fb0d1:{NFSU2_TR(0x6fb0d1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6fb0d3:{NFSU2_TR(0x6fb0d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fb0d4:{NFSU2_TR(0x6fb0d4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb0e3;}}
}
B6fb0d6:L6fb0d6:{c.instructions+=2;NFSU2_TR(0x6fb0d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6fb0d9:{NFSU2_TR(0x6fb0d9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6fb0e3;}}
}
B6fb0db:L6fb0db:{c.instructions+=4;NFSU2_TR(0x6fb0db);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6fb0df:{NFSU2_TR(0x6fb0df);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb0e1:{NFSU2_TR(0x6fb0e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fb0e2:{NFSU2_TR(0x6fb0e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb0e3:L6fb0e3:{c.instructions+=3;NFSU2_TR(0x6fb0e3);
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
B6fb0e5:{NFSU2_TR(0x6fb0e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fb0e6:{NFSU2_TR(0x6fb0e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb0e7:L6fb0e7:{c.instructions+=7;NFSU2_TR(0x6fb0e7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb0e8:{NFSU2_TR(0x6fb0e8);
__builtin_memmove((R+20),(R+16),4);
}
B6fb0ea:{NFSU2_TR(0x6fb0ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb0eb:{NFSU2_TR(0x6fb0eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fb0ee:{NFSU2_TR(0x6fb0ee);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb0f0:{NFSU2_TR(0x6fb0f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb0f1:{NFSU2_TR(0x6fb0f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fb0f6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb003u);}goto L6fb003;}
}
B6fb0f6:L6fb0f6:{c.instructions+=4;NFSU2_TR(0x6fb0f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb0f8:{NFSU2_TR(0x6fb0f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fb0f9:{NFSU2_TR(0x6fb0f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fb0fa:{NFSU2_TR(0x6fb0fa);
if(r1(R+518)){{goto L6fb10c;}}
}
B6fb0fc:L6fb0fc:{c.instructions+=4;NFSU2_TR(0x6fb0fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fb0ff:{NFSU2_TR(0x6fb0ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fb102:{NFSU2_TR(0x6fb102);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B6fb104:{NFSU2_TR(0x6fb104);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fb109ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb072u);}goto L6fb072;}
}
B6fb109:L6fb109:{c.instructions+=2;NFSU2_TR(0x6fb109);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fb10a:{NFSU2_TR(0x6fb10a);
{goto L6fb10f;}
}
B6fb10c:L6fb10c:{c.instructions+=1;NFSU2_TR(0x6fb10c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fb10f:L6fb10f:{c.instructions+=6;NFSU2_TR(0x6fb10f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6fb113:{NFSU2_TR(0x6fb113);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6fb117:{NFSU2_TR(0x6fb117);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6fb119:{NFSU2_TR(0x6fb119);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6fb11b:{NFSU2_TR(0x6fb11b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fb11c:{NFSU2_TR(0x6fb11c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb12b;}}
}
B6fb11e:L6fb11e:{c.instructions+=2;NFSU2_TR(0x6fb11e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6fb121:{NFSU2_TR(0x6fb121);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6fb12b;}}
}
B6fb123:L6fb123:{c.instructions+=4;NFSU2_TR(0x6fb123);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6fb127:{NFSU2_TR(0x6fb127);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb129:{NFSU2_TR(0x6fb129);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fb12a:{NFSU2_TR(0x6fb12a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb12b:L6fb12b:{c.instructions+=3;NFSU2_TR(0x6fb12b);
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
B6fb12d:{NFSU2_TR(0x6fb12d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fb12e:{NFSU2_TR(0x6fb12e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb12f:L6fb12f:{c.instructions+=5;NFSU2_TR(0x6fb12f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb130:{NFSU2_TR(0x6fb130);
__builtin_memmove((R+20),(R+16),4);
}
B6fb132:{NFSU2_TR(0x6fb132);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fb135:{NFSU2_TR(0x6fb135);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fb136:{NFSU2_TR(0x6fb136);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb137:L6fb137:{c.instructions+=6;NFSU2_TR(0x6fb137);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb138:{NFSU2_TR(0x6fb138);
__builtin_memmove((R+20),(R+16),4);
}
B6fb13a:{NFSU2_TR(0x6fb13a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb13b:{NFSU2_TR(0x6fb13b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fb13e:{NFSU2_TR(0x6fb13e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb141:{NFSU2_TR(0x6fb141);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6fb147;}}
}
B6fb143:L6fb143:{c.instructions+=2;NFSU2_TR(0x6fb143);
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
B6fb145:{NFSU2_TR(0x6fb145);
{goto L6fb18c;}
}
B6fb147:L6fb147:{c.instructions+=19;NFSU2_TR(0x6fb147);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fb14a:{NFSU2_TR(0x6fb14a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+0,u32(r1(U+0)));
}
B6fb14d:{NFSU2_TR(0x6fb14d);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6fb150:{NFSU2_TR(0x6fb150);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fb151:{NFSU2_TR(0x6fb151);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+8,u32(r1(U+0)));
}
B6fb154:{NFSU2_TR(0x6fb154);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6fb157:{NFSU2_TR(0x6fb157);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B6fb159:{NFSU2_TR(0x6fb159);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6fb15b:{NFSU2_TR(0x6fb15b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fb15c:{NFSU2_TR(0x6fb15c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+9),(U+0),1);
}
B6fb15e:{NFSU2_TR(0x6fb15e);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x4ull))));
}
B6fb161:{NFSU2_TR(0x6fb161);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B6fb163:{NFSU2_TR(0x6fb163);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fb164:{NFSU2_TR(0x6fb164);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+8,u32(r1(U+0)));
}
B6fb167:{NFSU2_TR(0x6fb167);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B6fb169:{NFSU2_TR(0x6fb169);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fb16a:{NFSU2_TR(0x6fb16a);
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
B6fb16c:{NFSU2_TR(0x6fb16c);
w4(R+0,u32(~u32(r4(R+0))));
}
B6fb16e:{NFSU2_TR(0x6fb16e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6fb18a;}}
}
B6fb170:L6fb170:{c.instructions+=1;NFSU2_TR(0x6fb170);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb171:L6fb171:{c.instructions+=9;NFSU2_TR(0x6fb171);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+28,u32(r1(U+0)));
}
B6fb174:{NFSU2_TR(0x6fb174);
__builtin_memmove((R+8),(R+0),4);
}
B6fb176:{NFSU2_TR(0x6fb176);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6fb179:{NFSU2_TR(0x6fb179);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B6fb17c:{NFSU2_TR(0x6fb17c);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B6fb17e:{NFSU2_TR(0x6fb17e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x813b70ull))+u32(r4(U+0))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+8))));
}
B6fb185:{NFSU2_TR(0x6fb185);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fb186:{NFSU2_TR(0x6fb186);
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
B6fb187:{NFSU2_TR(0x6fb187);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb171u);}goto L6fb171;}}
}
B6fb189:L6fb189:{c.instructions+=1;NFSU2_TR(0x6fb189);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fb18a:L6fb18a:{c.instructions+=1;NFSU2_TR(0x6fb18a);
w4(R+0,u32(~u32(r4(R+0))));
}
B6fb18c:L6fb18c:{c.instructions+=3;NFSU2_TR(0x6fb18c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fb18d:{NFSU2_TR(0x6fb18d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fb18e:{NFSU2_TR(0x6fb18e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb18f:L6fb18f:{c.instructions+=9;NFSU2_TR(0x6fb18f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb190:{NFSU2_TR(0x6fb190);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb191:{NFSU2_TR(0x6fb191);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6fb195:{NFSU2_TR(0x6fb195);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fb199:{NFSU2_TR(0x6fb199);
u8 U[6];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6fb19e:{NFSU2_TR(0x6fb19e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6fb1a0:{NFSU2_TR(0x6fb1a0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6fb1a2:{NFSU2_TR(0x6fb1a2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb1a3:{NFSU2_TR(0x6fb1a3);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6fb1af;}}
}
B6fb1a5:L6fb1a5:{c.instructions+=1;NFSU2_TR(0x6fb1a5);
{goto L6fb1c3;}
}
B6fb1af:L6fb1af:{c.instructions+=8;NFSU2_TR(0x6fb1af);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+24))));
}
B6fb1b1:{NFSU2_TR(0x6fb1b1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6fb1b3:{NFSU2_TR(0x6fb1b3);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+0))));
}
B6fb1b5:{NFSU2_TR(0x6fb1b5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6fb1b6:{NFSU2_TR(0x6fb1b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6fb1b9:{NFSU2_TR(0x6fb1b9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb1ba:{NFSU2_TR(0x6fb1ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x813f70ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6fb1c1:{NFSU2_TR(0x6fb1c1);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb1afu);}goto L6fb1af;}}
}
B6fb1c3:L6fb1c3:{c.instructions+=4;NFSU2_TR(0x6fb1c3);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb1c5:{NFSU2_TR(0x6fb1c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fb1c6:{NFSU2_TR(0x6fb1c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fb1c7:{NFSU2_TR(0x6fb1c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb1c8:L6fb1c8:{c.instructions+=4;NFSU2_TR(0x6fb1c8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb1c9:{NFSU2_TR(0x6fb1c9);
__builtin_memmove((R+20),(R+16),4);
}
B6fb1cb:{NFSU2_TR(0x6fb1cb);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
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
B6fb1cf:{NFSU2_TR(0x6fb1cf);
if(r1(R+518)){{goto L6fb1e7;}}
}
B6fb1d1:L6fb1d1:{c.instructions+=4;NFSU2_TR(0x6fb1d1);
s4(0x814370,u32(0x6fb8deull));
}
B6fb1db:{NFSU2_TR(0x6fb1db);
s4(0x814374,u32(0x6fb7d2ull));
}
B6fb1e5:{NFSU2_TR(0x6fb1e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fb1e6:{NFSU2_TR(0x6fb1e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb1e7:L6fb1e7:{c.instructions+=2;NFSU2_TR(0x6fb1e7);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6fb1eb:{NFSU2_TR(0x6fb1eb);
if(r1(R+518)){{goto L6fb203;}}
}
B6fb1ed:L6fb1ed:{c.instructions+=4;NFSU2_TR(0x6fb1ed);
s4(0x814370,u32(0x6fb71eull));
}
B6fb1f7:{NFSU2_TR(0x6fb1f7);
s4(0x814374,u32(0x6fb588ull));
}
B6fb201:{NFSU2_TR(0x6fb201);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fb202:{NFSU2_TR(0x6fb202);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb203:L6fb203:{c.instructions+=2;NFSU2_TR(0x6fb203);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6fb207:{NFSU2_TR(0x6fb207);
if(r1(R+518)){{goto L6fb21f;}}
}
B6fb209:L6fb209:{c.instructions+=4;NFSU2_TR(0x6fb209);
s4(0x814370,u32(0x6fb4d4ull));
}
B6fb213:{NFSU2_TR(0x6fb213);
s4(0x814374,u32(0x6fb3eaull));
}
B6fb21d:{NFSU2_TR(0x6fb21d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fb21e:{NFSU2_TR(0x6fb21e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb21f:L6fb21f:{c.instructions+=4;NFSU2_TR(0x6fb21f);
s4(0x814370,u32(0x6fb330ull));
}
B6fb229:{NFSU2_TR(0x6fb229);
s4(0x814374,u32(0x6fb235ull));
}
B6fb233:{NFSU2_TR(0x6fb233);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fb234:{NFSU2_TR(0x6fb234);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb235:L6fb235:{c.instructions+=6;NFSU2_TR(0x6fb235);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fb239:{NFSU2_TR(0x6fb239);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6fb23d:{NFSU2_TR(0x6fb23d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fb241:{NFSU2_TR(0x6fb241);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb242:{NFSU2_TR(0x6fb242);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb247:{NFSU2_TR(0x6fb247);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fb2e4;}}
}
B6fb24d:L6fb24d:{c.instructions+=2;NFSU2_TR(0x6fb24d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb250:{NFSU2_TR(0x6fb250);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6fb256;}}
}
B6fb252:L6fb252:{c.instructions+=1;NFSU2_TR(0x6fb252);
{goto L6fb28f;}
}
B6fb256:L6fb256:{c.instructions+=20;NFSU2_TR(0x6fb256);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6fb258:{NFSU2_TR(0x6fb258);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fb25a:{NFSU2_TR(0x6fb25a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6fb25d:{NFSU2_TR(0x6fb25d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fb260:{NFSU2_TR(0x6fb260);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6fb263:{NFSU2_TR(0x6fb263);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fb266:{NFSU2_TR(0x6fb266);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6fb269:{NFSU2_TR(0x6fb269);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fb26c:{NFSU2_TR(0x6fb26c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6fb26f:{NFSU2_TR(0x6fb26f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fb272:{NFSU2_TR(0x6fb272);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6fb275:{NFSU2_TR(0x6fb275);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fb278:{NFSU2_TR(0x6fb278);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6fb27b:{NFSU2_TR(0x6fb27b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fb27e:{NFSU2_TR(0x6fb27e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6fb281:{NFSU2_TR(0x6fb281);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fb284:{NFSU2_TR(0x6fb284);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B6fb287:{NFSU2_TR(0x6fb287);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B6fb28a:{NFSU2_TR(0x6fb28a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb28d:{NFSU2_TR(0x6fb28d);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb256u);}goto L6fb256;}}
}
B6fb28f:L6fb28f:{c.instructions+=2;NFSU2_TR(0x6fb28f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb292:{NFSU2_TR(0x6fb292);
if(r1(R+519)){{goto L6fb2a9;}}
}
B6fb294:L6fb294:{c.instructions+=8;NFSU2_TR(0x6fb294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6fb296:{NFSU2_TR(0x6fb296);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fb298:{NFSU2_TR(0x6fb298);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6fb29b:{NFSU2_TR(0x6fb29b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fb29e:{NFSU2_TR(0x6fb29e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B6fb2a1:{NFSU2_TR(0x6fb2a1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6fb2a4:{NFSU2_TR(0x6fb2a4);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb2a7:{NFSU2_TR(0x6fb2a7);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb294u);}goto L6fb294;}}
}
B6fb2a9:L6fb2a9:{c.instructions+=2;NFSU2_TR(0x6fb2a9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x8ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb2ac:{NFSU2_TR(0x6fb2ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fb2b0;}}
}
B6fb2ae:L6fb2ae:{c.instructions+=2;NFSU2_TR(0x6fb2ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fb2af:{NFSU2_TR(0x6fb2af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb2b0:L6fb2b0:{c.instructions+=2;NFSU2_TR(0x6fb2b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6fb2b3:{NFSU2_TR(0x6fb2b3);
if(r1(R+512)){{goto L6fb2c2;}}
}
B6fb2b5:L6fb2b5:{c.instructions+=5;NFSU2_TR(0x6fb2b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6fb2b7:{NFSU2_TR(0x6fb2b7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6fb2ba:{NFSU2_TR(0x6fb2ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fb2bc:{NFSU2_TR(0x6fb2bc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6fb2bf:{NFSU2_TR(0x6fb2bf);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B6fb2c2:L6fb2c2:{c.instructions+=2;NFSU2_TR(0x6fb2c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B6fb2c5:{NFSU2_TR(0x6fb2c5);
if(r1(R+512)){{goto L6fb2d6;}}
}
B6fb2c7:L6fb2c7:{c.instructions+=5;NFSU2_TR(0x6fb2c7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+12),(U+0),2);
}
B6fb2ca:{NFSU2_TR(0x6fb2ca);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6fb2cd:{NFSU2_TR(0x6fb2cd);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+0)),r2(U+0));
}
B6fb2d0:{NFSU2_TR(0x6fb2d0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6fb2d3:{NFSU2_TR(0x6fb2d3);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B6fb2d6:L6fb2d6:{c.instructions+=2;NFSU2_TR(0x6fb2d6);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb2d9:{NFSU2_TR(0x6fb2d9);
if(r1(R+512)){{goto L6fb2e2;}}
}
B6fb2db:L6fb2db:{c.instructions+=5;NFSU2_TR(0x6fb2db);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6fb2dd:{NFSU2_TR(0x6fb2dd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6fb2de:{NFSU2_TR(0x6fb2de);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B6fb2e0:{NFSU2_TR(0x6fb2e0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fb2e1:{NFSU2_TR(0x6fb2e1);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb2e2:L6fb2e2:{c.instructions+=2;NFSU2_TR(0x6fb2e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fb2e3:{NFSU2_TR(0x6fb2e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb2e4:L6fb2e4:{c.instructions+=2;NFSU2_TR(0x6fb2e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb2e9:{NFSU2_TR(0x6fb2e9);
if(r1(R+518)){{goto L6fb2f7;}}
}
B6fb2eb:L6fb2eb:{c.instructions+=2;NFSU2_TR(0x6fb2eb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb2ee:{NFSU2_TR(0x6fb2ee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb2f7;}}
}
B6fb2f0:L6fb2f0:{c.instructions+=5;NFSU2_TR(0x6fb2f0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6fb2f2:{NFSU2_TR(0x6fb2f2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6fb2f3:{NFSU2_TR(0x6fb2f3);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B6fb2f5:{NFSU2_TR(0x6fb2f5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fb2f6:{NFSU2_TR(0x6fb2f6);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6fb2f7:L6fb2f7:{c.instructions+=2;NFSU2_TR(0x6fb2f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb2fc:{NFSU2_TR(0x6fb2fc);
if(r1(R+518)){{goto L6fb312;}}
}
B6fb2fe:L6fb2fe:{c.instructions+=2;NFSU2_TR(0x6fb2fe);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb301:{NFSU2_TR(0x6fb301);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb312;}}
}
B6fb303:L6fb303:{c.instructions+=5;NFSU2_TR(0x6fb303);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+12),(U+0),2);
}
B6fb306:{NFSU2_TR(0x6fb306);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6fb309:{NFSU2_TR(0x6fb309);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+0)),r2(U+0));
}
B6fb30c:{NFSU2_TR(0x6fb30c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6fb30f:{NFSU2_TR(0x6fb30f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B6fb312:L6fb312:{c.instructions+=2;NFSU2_TR(0x6fb312);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb317:{NFSU2_TR(0x6fb317);
if(r1(R+518)){{goto L6fb32b;}}
}
B6fb319:L6fb319:{c.instructions+=2;NFSU2_TR(0x6fb319);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb31c:{NFSU2_TR(0x6fb31c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb32b;}}
}
B6fb31e:L6fb31e:{c.instructions+=5;NFSU2_TR(0x6fb31e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6fb320:{NFSU2_TR(0x6fb320);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6fb323:{NFSU2_TR(0x6fb323);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fb325:{NFSU2_TR(0x6fb325);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6fb328:{NFSU2_TR(0x6fb328);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B6fb32b:L6fb32b:{c.instructions+=1;NFSU2_TR(0x6fb32b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb24du);}goto L6fb24d;}
}
B6fb330:L6fb330:{c.instructions+=5;NFSU2_TR(0x6fb330);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fb334:{NFSU2_TR(0x6fb334);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6fb338:{NFSU2_TR(0x6fb338);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fb33c:{NFSU2_TR(0x6fb33c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb341:{NFSU2_TR(0x6fb341);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fb3ac;}}
}
B6fb343:L6fb343:{c.instructions+=2;NFSU2_TR(0x6fb343);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb346:{NFSU2_TR(0x6fb346);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6fb350;}}
}
B6fb348:L6fb348:{c.instructions+=1;NFSU2_TR(0x6fb348);
{goto L6fb36f;}
}
B6fb350:L6fb350:{c.instructions+=11;NFSU2_TR(0x6fb350);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb353:{NFSU2_TR(0x6fb353);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fb355:{NFSU2_TR(0x6fb355);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fb358:{NFSU2_TR(0x6fb358);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fb35b:{NFSU2_TR(0x6fb35b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fb35e:{NFSU2_TR(0x6fb35e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fb361:{NFSU2_TR(0x6fb361);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fb364:{NFSU2_TR(0x6fb364);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fb367:{NFSU2_TR(0x6fb367);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fb36a:{NFSU2_TR(0x6fb36a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fb36d:{NFSU2_TR(0x6fb36d);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb350u);}goto L6fb350;}}
}
B6fb36f:L6fb36f:{c.instructions+=2;NFSU2_TR(0x6fb36f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb372:{NFSU2_TR(0x6fb372);
if(r1(R+519)){{goto L6fb381;}}
}
B6fb374:L6fb374:{c.instructions+=5;NFSU2_TR(0x6fb374);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fb376:{NFSU2_TR(0x6fb376);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fb379:{NFSU2_TR(0x6fb379);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6fb37c:{NFSU2_TR(0x6fb37c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb37f:{NFSU2_TR(0x6fb37f);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb374u);}goto L6fb374;}}
}
B6fb381:L6fb381:{c.instructions+=2;NFSU2_TR(0x6fb381);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x8ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb384:{NFSU2_TR(0x6fb384);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fb387;}}
}
B6fb386:L6fb386:{c.instructions+=1;NFSU2_TR(0x6fb386);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb387:L6fb387:{c.instructions+=2;NFSU2_TR(0x6fb387);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6fb38a:{NFSU2_TR(0x6fb38a);
if(r1(R+512)){{goto L6fb394;}}
}
B6fb38c:L6fb38c:{c.instructions+=3;NFSU2_TR(0x6fb38c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fb38e:{NFSU2_TR(0x6fb38e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6fb391:{NFSU2_TR(0x6fb391);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B6fb394:L6fb394:{c.instructions+=2;NFSU2_TR(0x6fb394);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B6fb397:{NFSU2_TR(0x6fb397);
if(r1(R+512)){{goto L6fb3a2;}}
}
B6fb399:L6fb399:{c.instructions+=3;NFSU2_TR(0x6fb399);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+0)),r2(U+0));
}
B6fb39c:{NFSU2_TR(0x6fb39c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6fb39f:{NFSU2_TR(0x6fb39f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B6fb3a2:L6fb3a2:{c.instructions+=2;NFSU2_TR(0x6fb3a2);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb3a5:{NFSU2_TR(0x6fb3a5);
if(r1(R+512)){{goto L6fb3ab;}}
}
B6fb3a7:L6fb3a7:{c.instructions+=3;NFSU2_TR(0x6fb3a7);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B6fb3a9:{NFSU2_TR(0x6fb3a9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fb3aa:{NFSU2_TR(0x6fb3aa);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb3ab:L6fb3ab:{c.instructions+=1;NFSU2_TR(0x6fb3ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb3ac:L6fb3ac:{c.instructions+=2;NFSU2_TR(0x6fb3ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb3b1:{NFSU2_TR(0x6fb3b1);
if(r1(R+518)){{goto L6fb3bc;}}
}
B6fb3b3:L6fb3b3:{c.instructions+=2;NFSU2_TR(0x6fb3b3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb3b6:{NFSU2_TR(0x6fb3b6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb3bc;}}
}
B6fb3b8:L6fb3b8:{c.instructions+=3;NFSU2_TR(0x6fb3b8);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B6fb3ba:{NFSU2_TR(0x6fb3ba);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fb3bb:{NFSU2_TR(0x6fb3bb);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6fb3bc:L6fb3bc:{c.instructions+=2;NFSU2_TR(0x6fb3bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb3c1:{NFSU2_TR(0x6fb3c1);
if(r1(R+518)){{goto L6fb3d1;}}
}
B6fb3c3:L6fb3c3:{c.instructions+=2;NFSU2_TR(0x6fb3c3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb3c6:{NFSU2_TR(0x6fb3c6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb3d1;}}
}
B6fb3c8:L6fb3c8:{c.instructions+=3;NFSU2_TR(0x6fb3c8);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+0)),r2(U+0));
}
B6fb3cb:{NFSU2_TR(0x6fb3cb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6fb3ce:{NFSU2_TR(0x6fb3ce);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B6fb3d1:L6fb3d1:{c.instructions+=2;NFSU2_TR(0x6fb3d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb3d6:{NFSU2_TR(0x6fb3d6);
if(r1(R+518)){{goto L6fb3e5;}}
}
B6fb3d8:L6fb3d8:{c.instructions+=2;NFSU2_TR(0x6fb3d8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb3db:{NFSU2_TR(0x6fb3db);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb3e5;}}
}
B6fb3dd:L6fb3dd:{c.instructions+=3;NFSU2_TR(0x6fb3dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fb3df:{NFSU2_TR(0x6fb3df);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6fb3e2:{NFSU2_TR(0x6fb3e2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B6fb3e5:L6fb3e5:{c.instructions+=1;NFSU2_TR(0x6fb3e5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb343u);}goto L6fb343;}
}
B6fb3ea:L6fb3ea:{c.instructions+=6;NFSU2_TR(0x6fb3ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fb3ee:{NFSU2_TR(0x6fb3ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6fb3f2:{NFSU2_TR(0x6fb3f2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fb3f6:{NFSU2_TR(0x6fb3f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb3f7:{NFSU2_TR(0x6fb3f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb3fc:{NFSU2_TR(0x6fb3fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fb488;}}
}
B6fb402:L6fb402:{c.instructions+=2;NFSU2_TR(0x6fb402);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb405:{NFSU2_TR(0x6fb405);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6fb40a;}}
}
B6fb407:L6fb407:{c.instructions+=1;NFSU2_TR(0x6fb407);
{goto L6fb433;}
}
B6fb40a:L6fb40a:{c.instructions+=12;NFSU2_TR(0x6fb40a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6fb40d:{NFSU2_TR(0x6fb40d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6fb411:{NFSU2_TR(0x6fb411);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B6fb415:{NFSU2_TR(0x6fb415);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6fb419:{NFSU2_TR(0x6fb419);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6fb41c:{NFSU2_TR(0x6fb41c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb420:{NFSU2_TR(0x6fb420);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb424:{NFSU2_TR(0x6fb424);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb428:{NFSU2_TR(0x6fb428);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B6fb42b:{NFSU2_TR(0x6fb42b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B6fb42e:{NFSU2_TR(0x6fb42e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb431:{NFSU2_TR(0x6fb431);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb40au);}goto L6fb40a;}}
}
B6fb433:L6fb433:{c.instructions+=2;NFSU2_TR(0x6fb433);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb436:{NFSU2_TR(0x6fb436);
if(r1(R+519)){{goto L6fb449;}}
}
B6fb438:L6fb438:{c.instructions+=6;NFSU2_TR(0x6fb438);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6fb43b:{NFSU2_TR(0x6fb43b);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6fb43e:{NFSU2_TR(0x6fb43e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B6fb441:{NFSU2_TR(0x6fb441);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6fb444:{NFSU2_TR(0x6fb444);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb447:{NFSU2_TR(0x6fb447);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb438u);}goto L6fb438;}}
}
B6fb449:L6fb449:{c.instructions+=2;NFSU2_TR(0x6fb449);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x8ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb44c:{NFSU2_TR(0x6fb44c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fb452;}}
}
B6fb44e:L6fb44e:{c.instructions+=3;NFSU2_TR(0x6fb44e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fb44f:{NFSU2_TR(0x6fb44f);
w2(R+4260,u16(0xffffull));
}
B6fb451:{NFSU2_TR(0x6fb451);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb452:L6fb452:{c.instructions+=2;NFSU2_TR(0x6fb452);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6fb455:{NFSU2_TR(0x6fb455);
if(r1(R+512)){{goto L6fb464;}}
}
B6fb457:L6fb457:{c.instructions+=5;NFSU2_TR(0x6fb457);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6fb459:{NFSU2_TR(0x6fb459);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6fb45c:{NFSU2_TR(0x6fb45c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fb45e:{NFSU2_TR(0x6fb45e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6fb461:{NFSU2_TR(0x6fb461);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B6fb464:L6fb464:{c.instructions+=2;NFSU2_TR(0x6fb464);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B6fb467:{NFSU2_TR(0x6fb467);
if(r1(R+512)){{goto L6fb478;}}
}
B6fb469:L6fb469:{c.instructions+=5;NFSU2_TR(0x6fb469);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+12),(U+0),2);
}
B6fb46c:{NFSU2_TR(0x6fb46c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6fb46f:{NFSU2_TR(0x6fb46f);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+0)),r2(U+0));
}
B6fb472:{NFSU2_TR(0x6fb472);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6fb475:{NFSU2_TR(0x6fb475);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B6fb478:L6fb478:{c.instructions+=2;NFSU2_TR(0x6fb478);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb47b:{NFSU2_TR(0x6fb47b);
if(r1(R+512)){{goto L6fb484;}}
}
B6fb47d:L6fb47d:{c.instructions+=5;NFSU2_TR(0x6fb47d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6fb47f:{NFSU2_TR(0x6fb47f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6fb480:{NFSU2_TR(0x6fb480);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B6fb482:{NFSU2_TR(0x6fb482);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fb483:{NFSU2_TR(0x6fb483);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb484:L6fb484:{c.instructions+=3;NFSU2_TR(0x6fb484);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fb485:{NFSU2_TR(0x6fb485);
w2(R+4260,u16(0xffffull));
}
B6fb487:{NFSU2_TR(0x6fb487);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb488:L6fb488:{c.instructions+=2;NFSU2_TR(0x6fb488);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb48d:{NFSU2_TR(0x6fb48d);
if(r1(R+518)){{goto L6fb49b;}}
}
B6fb48f:L6fb48f:{c.instructions+=2;NFSU2_TR(0x6fb48f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb492:{NFSU2_TR(0x6fb492);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb49b;}}
}
B6fb494:L6fb494:{c.instructions+=5;NFSU2_TR(0x6fb494);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6fb496:{NFSU2_TR(0x6fb496);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6fb497:{NFSU2_TR(0x6fb497);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B6fb499:{NFSU2_TR(0x6fb499);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fb49a:{NFSU2_TR(0x6fb49a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6fb49b:L6fb49b:{c.instructions+=2;NFSU2_TR(0x6fb49b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb4a0:{NFSU2_TR(0x6fb4a0);
if(r1(R+518)){{goto L6fb4b6;}}
}
B6fb4a2:L6fb4a2:{c.instructions+=2;NFSU2_TR(0x6fb4a2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb4a5:{NFSU2_TR(0x6fb4a5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb4b6;}}
}
B6fb4a7:L6fb4a7:{c.instructions+=5;NFSU2_TR(0x6fb4a7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+12),(U+0),2);
}
B6fb4aa:{NFSU2_TR(0x6fb4aa);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6fb4ad:{NFSU2_TR(0x6fb4ad);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+0)),r2(U+0));
}
B6fb4b0:{NFSU2_TR(0x6fb4b0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6fb4b3:{NFSU2_TR(0x6fb4b3);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B6fb4b6:L6fb4b6:{c.instructions+=2;NFSU2_TR(0x6fb4b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb4bb:{NFSU2_TR(0x6fb4bb);
if(r1(R+518)){{goto L6fb4cf;}}
}
B6fb4bd:L6fb4bd:{c.instructions+=2;NFSU2_TR(0x6fb4bd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb4c0:{NFSU2_TR(0x6fb4c0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb4cf;}}
}
B6fb4c2:L6fb4c2:{c.instructions+=5;NFSU2_TR(0x6fb4c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6fb4c4:{NFSU2_TR(0x6fb4c4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6fb4c7:{NFSU2_TR(0x6fb4c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fb4c9:{NFSU2_TR(0x6fb4c9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6fb4cc:{NFSU2_TR(0x6fb4cc);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B6fb4cf:L6fb4cf:{c.instructions+=1;NFSU2_TR(0x6fb4cf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb402u);}goto L6fb402;}
}
B6fb4d4:L6fb4d4:{c.instructions+=5;NFSU2_TR(0x6fb4d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fb4d8:{NFSU2_TR(0x6fb4d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6fb4dc:{NFSU2_TR(0x6fb4dc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fb4e0:{NFSU2_TR(0x6fb4e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb4e5:{NFSU2_TR(0x6fb4e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fb54a;}}
}
B6fb4e7:L6fb4e7:{c.instructions+=4;NFSU2_TR(0x6fb4e7);
w8(R+4352,u64(r4(R+8)));
}
B6fb4ea:{NFSU2_TR(0x6fb4ea);
__builtin_memmove((R+4356),(R+4352),4);
}
B6fb4ed:{NFSU2_TR(0x6fb4ed);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb4f0:{NFSU2_TR(0x6fb4f0);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6fb4f4;}}
}
B6fb4f2:L6fb4f2:{c.instructions+=1;NFSU2_TR(0x6fb4f2);
{goto L6fb50b;}
}
B6fb4f4:L6fb4f4:{c.instructions+=7;NFSU2_TR(0x6fb4f4);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb4f7:{NFSU2_TR(0x6fb4f7);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6fb4fa:{NFSU2_TR(0x6fb4fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb4fe:{NFSU2_TR(0x6fb4fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb502:{NFSU2_TR(0x6fb502);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb506:{NFSU2_TR(0x6fb506);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fb509:{NFSU2_TR(0x6fb509);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb4f4u);}goto L6fb4f4;}}
}
B6fb50b:L6fb50b:{c.instructions+=2;NFSU2_TR(0x6fb50b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb50e:{NFSU2_TR(0x6fb50e);
if(r1(R+519)){{goto L6fb51b;}}
}
B6fb510:L6fb510:{c.instructions+=4;NFSU2_TR(0x6fb510);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6fb513:{NFSU2_TR(0x6fb513);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6fb516:{NFSU2_TR(0x6fb516);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb519:{NFSU2_TR(0x6fb519);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb510u);}goto L6fb510;}}
}
B6fb51b:L6fb51b:{c.instructions+=2;NFSU2_TR(0x6fb51b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x8ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb51e:{NFSU2_TR(0x6fb51e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fb523;}}
}
B6fb520:L6fb520:{c.instructions+=2;NFSU2_TR(0x6fb520);
w2(R+4260,u16(0xffffull));
}
B6fb522:{NFSU2_TR(0x6fb522);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb523:L6fb523:{c.instructions+=2;NFSU2_TR(0x6fb523);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6fb526:{NFSU2_TR(0x6fb526);
if(r1(R+512)){{goto L6fb530;}}
}
B6fb528:L6fb528:{c.instructions+=3;NFSU2_TR(0x6fb528);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fb52a:{NFSU2_TR(0x6fb52a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6fb52d:{NFSU2_TR(0x6fb52d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B6fb530:L6fb530:{c.instructions+=2;NFSU2_TR(0x6fb530);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B6fb533:{NFSU2_TR(0x6fb533);
if(r1(R+512)){{goto L6fb53e;}}
}
B6fb535:L6fb535:{c.instructions+=3;NFSU2_TR(0x6fb535);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+0)),r2(U+0));
}
B6fb538:{NFSU2_TR(0x6fb538);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6fb53b:{NFSU2_TR(0x6fb53b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B6fb53e:L6fb53e:{c.instructions+=2;NFSU2_TR(0x6fb53e);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb541:{NFSU2_TR(0x6fb541);
if(r1(R+512)){{goto L6fb547;}}
}
B6fb543:L6fb543:{c.instructions+=3;NFSU2_TR(0x6fb543);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B6fb545:{NFSU2_TR(0x6fb545);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fb546:{NFSU2_TR(0x6fb546);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb547:L6fb547:{c.instructions+=2;NFSU2_TR(0x6fb547);
w2(R+4260,u16(0xffffull));
}
B6fb549:{NFSU2_TR(0x6fb549);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb54a:L6fb54a:{c.instructions+=2;NFSU2_TR(0x6fb54a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb54f:{NFSU2_TR(0x6fb54f);
if(r1(R+518)){{goto L6fb55a;}}
}
B6fb551:L6fb551:{c.instructions+=2;NFSU2_TR(0x6fb551);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb554:{NFSU2_TR(0x6fb554);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb55a;}}
}
B6fb556:L6fb556:{c.instructions+=3;NFSU2_TR(0x6fb556);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B6fb558:{NFSU2_TR(0x6fb558);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fb559:{NFSU2_TR(0x6fb559);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6fb55a:L6fb55a:{c.instructions+=2;NFSU2_TR(0x6fb55a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb55f:{NFSU2_TR(0x6fb55f);
if(r1(R+518)){{goto L6fb56f;}}
}
B6fb561:L6fb561:{c.instructions+=2;NFSU2_TR(0x6fb561);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb564:{NFSU2_TR(0x6fb564);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb56f;}}
}
B6fb566:L6fb566:{c.instructions+=3;NFSU2_TR(0x6fb566);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+0)),r2(U+0));
}
B6fb569:{NFSU2_TR(0x6fb569);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6fb56c:{NFSU2_TR(0x6fb56c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B6fb56f:L6fb56f:{c.instructions+=2;NFSU2_TR(0x6fb56f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb574:{NFSU2_TR(0x6fb574);
if(r1(R+518)){{goto L6fb583;}}
}
B6fb576:L6fb576:{c.instructions+=2;NFSU2_TR(0x6fb576);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb579:{NFSU2_TR(0x6fb579);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb583;}}
}
B6fb57b:L6fb57b:{c.instructions+=3;NFSU2_TR(0x6fb57b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fb57d:{NFSU2_TR(0x6fb57d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6fb580:{NFSU2_TR(0x6fb580);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B6fb583:L6fb583:{c.instructions+=1;NFSU2_TR(0x6fb583);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb4e7u);}goto L6fb4e7;}
}
B6fb588:L6fb588:{c.instructions+=6;NFSU2_TR(0x6fb588);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fb58c:{NFSU2_TR(0x6fb58c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6fb590:{NFSU2_TR(0x6fb590);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fb594:{NFSU2_TR(0x6fb594);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb595:{NFSU2_TR(0x6fb595);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb59a:{NFSU2_TR(0x6fb59a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fb6d2;}}
}
B6fb5a0:L6fb5a0:{c.instructions+=2;NFSU2_TR(0x6fb5a0);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb5a6:{NFSU2_TR(0x6fb5a6);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6fb5ba;}}
}
B6fb5a8:L6fb5a8:{c.instructions+=1;NFSU2_TR(0x6fb5a8);
{goto L6fb64f;}
}
B6fb5ba:L6fb5ba:{c.instructions+=36;NFSU2_TR(0x6fb5ba);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6fb5bd:{NFSU2_TR(0x6fb5bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6fb5c1:{NFSU2_TR(0x6fb5c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6fb5c5:{NFSU2_TR(0x6fb5c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6fb5c9:{NFSU2_TR(0x6fb5c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6fb5cd:{NFSU2_TR(0x6fb5cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B6fb5d1:{NFSU2_TR(0x6fb5d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6fb5d5:{NFSU2_TR(0x6fb5d5);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6fb5d8:{NFSU2_TR(0x6fb5d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb5dc:{NFSU2_TR(0x6fb5dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb5e0:{NFSU2_TR(0x6fb5e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb5e4:{NFSU2_TR(0x6fb5e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6fb5e8:{NFSU2_TR(0x6fb5e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B6fb5ec:{NFSU2_TR(0x6fb5ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6fb5f0:{NFSU2_TR(0x6fb5f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb5f4:{NFSU2_TR(0x6fb5f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb5f8:{NFSU2_TR(0x6fb5f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb5fc:{NFSU2_TR(0x6fb5fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb600:{NFSU2_TR(0x6fb600);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6fb604:{NFSU2_TR(0x6fb604);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B6fb608:{NFSU2_TR(0x6fb608);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6fb60c:{NFSU2_TR(0x6fb60c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb610:{NFSU2_TR(0x6fb610);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb614:{NFSU2_TR(0x6fb614);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb618:{NFSU2_TR(0x6fb618);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb61c:{NFSU2_TR(0x6fb61c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6fb620:{NFSU2_TR(0x6fb620);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B6fb624:{NFSU2_TR(0x6fb624);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6fb628:{NFSU2_TR(0x6fb628);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb62c:{NFSU2_TR(0x6fb62c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb630:{NFSU2_TR(0x6fb630);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb634:{NFSU2_TR(0x6fb634);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb638:{NFSU2_TR(0x6fb638);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x80ull))));
}
B6fb63e:{NFSU2_TR(0x6fb63e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
}
B6fb643:{NFSU2_TR(0x6fb643);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb649:{NFSU2_TR(0x6fb649);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb5bau);}goto L6fb5ba;}}
}
B6fb64f:L6fb64f:{c.instructions+=2;NFSU2_TR(0x6fb64f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb652:{NFSU2_TR(0x6fb652);
if(r1(R+519)){{goto L6fb67d;}}
}
B6fb654:L6fb654:{c.instructions+=12;NFSU2_TR(0x6fb654);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6fb657:{NFSU2_TR(0x6fb657);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6fb65b:{NFSU2_TR(0x6fb65b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B6fb65f:{NFSU2_TR(0x6fb65f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6fb663:{NFSU2_TR(0x6fb663);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6fb666:{NFSU2_TR(0x6fb666);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb66a:{NFSU2_TR(0x6fb66a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb66e:{NFSU2_TR(0x6fb66e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb672:{NFSU2_TR(0x6fb672);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B6fb675:{NFSU2_TR(0x6fb675);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B6fb678:{NFSU2_TR(0x6fb678);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb67b:{NFSU2_TR(0x6fb67b);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb654u);}goto L6fb654;}}
}
B6fb67d:L6fb67d:{c.instructions+=2;NFSU2_TR(0x6fb67d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb680:{NFSU2_TR(0x6fb680);
if(r1(R+519)){{goto L6fb693;}}
}
B6fb682:L6fb682:{c.instructions+=6;NFSU2_TR(0x6fb682);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6fb685:{NFSU2_TR(0x6fb685);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6fb688:{NFSU2_TR(0x6fb688);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B6fb68b:{NFSU2_TR(0x6fb68b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6fb68e:{NFSU2_TR(0x6fb68e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb691:{NFSU2_TR(0x6fb691);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb682u);}goto L6fb682;}}
}
B6fb693:L6fb693:{c.instructions+=2;NFSU2_TR(0x6fb693);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x8ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb696:{NFSU2_TR(0x6fb696);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fb69c;}}
}
B6fb698:L6fb698:{c.instructions+=3;NFSU2_TR(0x6fb698);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fb699:{NFSU2_TR(0x6fb699);
w2(R+4260,u16(0xffffull));
}
B6fb69b:{NFSU2_TR(0x6fb69b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb69c:L6fb69c:{c.instructions+=2;NFSU2_TR(0x6fb69c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6fb69f:{NFSU2_TR(0x6fb69f);
if(r1(R+512)){{goto L6fb6ae;}}
}
B6fb6a1:L6fb6a1:{c.instructions+=5;NFSU2_TR(0x6fb6a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6fb6a3:{NFSU2_TR(0x6fb6a3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6fb6a6:{NFSU2_TR(0x6fb6a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fb6a8:{NFSU2_TR(0x6fb6a8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6fb6ab:{NFSU2_TR(0x6fb6ab);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B6fb6ae:L6fb6ae:{c.instructions+=2;NFSU2_TR(0x6fb6ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B6fb6b1:{NFSU2_TR(0x6fb6b1);
if(r1(R+512)){{goto L6fb6c2;}}
}
B6fb6b3:L6fb6b3:{c.instructions+=5;NFSU2_TR(0x6fb6b3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+12),(U+0),2);
}
B6fb6b6:{NFSU2_TR(0x6fb6b6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6fb6b9:{NFSU2_TR(0x6fb6b9);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+0)),r2(U+0));
}
B6fb6bc:{NFSU2_TR(0x6fb6bc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6fb6bf:{NFSU2_TR(0x6fb6bf);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B6fb6c2:L6fb6c2:{c.instructions+=2;NFSU2_TR(0x6fb6c2);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb6c5:{NFSU2_TR(0x6fb6c5);
if(r1(R+512)){{goto L6fb6ce;}}
}
B6fb6c7:L6fb6c7:{c.instructions+=5;NFSU2_TR(0x6fb6c7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6fb6c9:{NFSU2_TR(0x6fb6c9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6fb6ca:{NFSU2_TR(0x6fb6ca);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B6fb6cc:{NFSU2_TR(0x6fb6cc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fb6cd:{NFSU2_TR(0x6fb6cd);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb6ce:L6fb6ce:{c.instructions+=3;NFSU2_TR(0x6fb6ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fb6cf:{NFSU2_TR(0x6fb6cf);
w2(R+4260,u16(0xffffull));
}
B6fb6d1:{NFSU2_TR(0x6fb6d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb6d2:L6fb6d2:{c.instructions+=2;NFSU2_TR(0x6fb6d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb6d7:{NFSU2_TR(0x6fb6d7);
if(r1(R+518)){{goto L6fb6e5;}}
}
B6fb6d9:L6fb6d9:{c.instructions+=2;NFSU2_TR(0x6fb6d9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb6dc:{NFSU2_TR(0x6fb6dc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb6e5;}}
}
B6fb6de:L6fb6de:{c.instructions+=5;NFSU2_TR(0x6fb6de);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6fb6e0:{NFSU2_TR(0x6fb6e0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6fb6e1:{NFSU2_TR(0x6fb6e1);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B6fb6e3:{NFSU2_TR(0x6fb6e3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fb6e4:{NFSU2_TR(0x6fb6e4);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6fb6e5:L6fb6e5:{c.instructions+=2;NFSU2_TR(0x6fb6e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb6ea:{NFSU2_TR(0x6fb6ea);
if(r1(R+518)){{goto L6fb700;}}
}
B6fb6ec:L6fb6ec:{c.instructions+=2;NFSU2_TR(0x6fb6ec);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb6ef:{NFSU2_TR(0x6fb6ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb700;}}
}
B6fb6f1:L6fb6f1:{c.instructions+=5;NFSU2_TR(0x6fb6f1);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+12),(U+0),2);
}
B6fb6f4:{NFSU2_TR(0x6fb6f4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6fb6f7:{NFSU2_TR(0x6fb6f7);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+0)),r2(U+0));
}
B6fb6fa:{NFSU2_TR(0x6fb6fa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6fb6fd:{NFSU2_TR(0x6fb6fd);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B6fb700:L6fb700:{c.instructions+=2;NFSU2_TR(0x6fb700);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb705:{NFSU2_TR(0x6fb705);
if(r1(R+518)){{goto L6fb719;}}
}
B6fb707:L6fb707:{c.instructions+=2;NFSU2_TR(0x6fb707);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb70a:{NFSU2_TR(0x6fb70a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb719;}}
}
B6fb70c:L6fb70c:{c.instructions+=5;NFSU2_TR(0x6fb70c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6fb70e:{NFSU2_TR(0x6fb70e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6fb711:{NFSU2_TR(0x6fb711);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fb713:{NFSU2_TR(0x6fb713);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6fb716:{NFSU2_TR(0x6fb716);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B6fb719:L6fb719:{c.instructions+=1;NFSU2_TR(0x6fb719);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb5a0u);}goto L6fb5a0;}
}
B6fb71e:L6fb71e:{c.instructions+=5;NFSU2_TR(0x6fb71e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fb722:{NFSU2_TR(0x6fb722);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6fb726:{NFSU2_TR(0x6fb726);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fb72a:{NFSU2_TR(0x6fb72a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb72f:{NFSU2_TR(0x6fb72f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fb794;}}
}
B6fb731:L6fb731:{c.instructions+=4;NFSU2_TR(0x6fb731);
w8(R+4352,u64(r4(R+8)));
}
B6fb734:{NFSU2_TR(0x6fb734);
__builtin_memmove((R+4356),(R+4352),4);
}
B6fb737:{NFSU2_TR(0x6fb737);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb73a:{NFSU2_TR(0x6fb73a);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6fb73e;}}
}
B6fb73c:L6fb73c:{c.instructions+=1;NFSU2_TR(0x6fb73c);
{goto L6fb755;}
}
B6fb73e:L6fb73e:{c.instructions+=7;NFSU2_TR(0x6fb73e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb741:{NFSU2_TR(0x6fb741);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6fb744:{NFSU2_TR(0x6fb744);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb748:{NFSU2_TR(0x6fb748);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb74c:{NFSU2_TR(0x6fb74c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6fb750:{NFSU2_TR(0x6fb750);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fb753:{NFSU2_TR(0x6fb753);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb73eu);}goto L6fb73e;}}
}
B6fb755:L6fb755:{c.instructions+=2;NFSU2_TR(0x6fb755);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb758:{NFSU2_TR(0x6fb758);
if(r1(R+519)){{goto L6fb765;}}
}
B6fb75a:L6fb75a:{c.instructions+=4;NFSU2_TR(0x6fb75a);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6fb75d:{NFSU2_TR(0x6fb75d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6fb760:{NFSU2_TR(0x6fb760);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb763:{NFSU2_TR(0x6fb763);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb75au);}goto L6fb75a;}}
}
B6fb765:L6fb765:{c.instructions+=2;NFSU2_TR(0x6fb765);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x8ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb768:{NFSU2_TR(0x6fb768);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fb76d;}}
}
B6fb76a:L6fb76a:{c.instructions+=2;NFSU2_TR(0x6fb76a);
w2(R+4260,u16(0xffffull));
}
B6fb76c:{NFSU2_TR(0x6fb76c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb76d:L6fb76d:{c.instructions+=2;NFSU2_TR(0x6fb76d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6fb770:{NFSU2_TR(0x6fb770);
if(r1(R+512)){{goto L6fb77a;}}
}
B6fb772:L6fb772:{c.instructions+=3;NFSU2_TR(0x6fb772);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fb774:{NFSU2_TR(0x6fb774);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6fb777:{NFSU2_TR(0x6fb777);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B6fb77a:L6fb77a:{c.instructions+=2;NFSU2_TR(0x6fb77a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B6fb77d:{NFSU2_TR(0x6fb77d);
if(r1(R+512)){{goto L6fb788;}}
}
B6fb77f:L6fb77f:{c.instructions+=3;NFSU2_TR(0x6fb77f);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+0)),r2(U+0));
}
B6fb782:{NFSU2_TR(0x6fb782);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6fb785:{NFSU2_TR(0x6fb785);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B6fb788:L6fb788:{c.instructions+=2;NFSU2_TR(0x6fb788);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb78b:{NFSU2_TR(0x6fb78b);
if(r1(R+512)){{goto L6fb791;}}
}
B6fb78d:L6fb78d:{c.instructions+=3;NFSU2_TR(0x6fb78d);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B6fb78f:{NFSU2_TR(0x6fb78f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fb790:{NFSU2_TR(0x6fb790);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb791:L6fb791:{c.instructions+=2;NFSU2_TR(0x6fb791);
w2(R+4260,u16(0xffffull));
}
B6fb793:{NFSU2_TR(0x6fb793);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb794:L6fb794:{c.instructions+=2;NFSU2_TR(0x6fb794);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb799:{NFSU2_TR(0x6fb799);
if(r1(R+518)){{goto L6fb7a4;}}
}
B6fb79b:L6fb79b:{c.instructions+=2;NFSU2_TR(0x6fb79b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb79e:{NFSU2_TR(0x6fb79e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb7a4;}}
}
B6fb7a0:L6fb7a0:{c.instructions+=3;NFSU2_TR(0x6fb7a0);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B6fb7a2:{NFSU2_TR(0x6fb7a2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fb7a3:{NFSU2_TR(0x6fb7a3);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6fb7a4:L6fb7a4:{c.instructions+=2;NFSU2_TR(0x6fb7a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb7a9:{NFSU2_TR(0x6fb7a9);
if(r1(R+518)){{goto L6fb7b9;}}
}
B6fb7ab:L6fb7ab:{c.instructions+=2;NFSU2_TR(0x6fb7ab);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb7ae:{NFSU2_TR(0x6fb7ae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb7b9;}}
}
B6fb7b0:L6fb7b0:{c.instructions+=3;NFSU2_TR(0x6fb7b0);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+0)),r2(U+0));
}
B6fb7b3:{NFSU2_TR(0x6fb7b3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6fb7b6:{NFSU2_TR(0x6fb7b6);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B6fb7b9:L6fb7b9:{c.instructions+=2;NFSU2_TR(0x6fb7b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb7be:{NFSU2_TR(0x6fb7be);
if(r1(R+518)){{goto L6fb7cd;}}
}
B6fb7c0:L6fb7c0:{c.instructions+=2;NFSU2_TR(0x6fb7c0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb7c3:{NFSU2_TR(0x6fb7c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb7cd;}}
}
B6fb7c5:L6fb7c5:{c.instructions+=3;NFSU2_TR(0x6fb7c5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fb7c7:{NFSU2_TR(0x6fb7c7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6fb7ca:{NFSU2_TR(0x6fb7ca);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B6fb7cd:L6fb7cd:{c.instructions+=1;NFSU2_TR(0x6fb7cd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb731u);}goto L6fb731;}
}
B6fb7d2:L6fb7d2:{c.instructions+=6;NFSU2_TR(0x6fb7d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fb7d6:{NFSU2_TR(0x6fb7d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6fb7da:{NFSU2_TR(0x6fb7da);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fb7de:{NFSU2_TR(0x6fb7de);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fb7df:{NFSU2_TR(0x6fb7df);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb7e4:{NFSU2_TR(0x6fb7e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fb85c;}}
}
B6fb7e6:L6fb7e6:{c.instructions+=2;NFSU2_TR(0x6fb7e6);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb7e9:{NFSU2_TR(0x6fb7e9);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6fb7f2;}}
}
B6fb7eb:L6fb7eb:{c.instructions+=1;NFSU2_TR(0x6fb7eb);
{goto L6fb80b;}
}
B6fb7f2:L6fb7f2:{c.instructions+=8;NFSU2_TR(0x6fb7f2);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+8))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4608),(U+16),4);
__builtin_memmove((R+4612),(U+20),4);
__builtin_memmove((R+4616),(U+24),4);
__builtin_memmove((R+4620),(U+28),4);
}
B6fb7f5:{NFSU2_TR(0x6fb7f5);
u8 U[36];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4672),(U+20),4);
__builtin_memmove((R+4676),(U+24),4);
__builtin_memmove((R+4680),(U+28),4);
__builtin_memmove((R+4684),(U+32),4);
}
B6fb7f9:{NFSU2_TR(0x6fb7f9);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+0))),(U+0),16);
}
B6fb7fc:{NFSU2_TR(0x6fb7fc);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B6fb800:{NFSU2_TR(0x6fb800);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B6fb803:{NFSU2_TR(0x6fb803);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B6fb806:{NFSU2_TR(0x6fb806);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb809:{NFSU2_TR(0x6fb809);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb7f2u);}goto L6fb7f2;}}
}
B6fb80b:L6fb80b:{c.instructions+=2;NFSU2_TR(0x6fb80b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb80e:{NFSU2_TR(0x6fb80e);
if(r1(R+519)){{goto L6fb821;}}
}
B6fb810:L6fb810:{c.instructions+=6;NFSU2_TR(0x6fb810);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4608),(U+0),8);
}
B6fb813:{NFSU2_TR(0x6fb813);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6fb816:{NFSU2_TR(0x6fb816);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B6fb819:{NFSU2_TR(0x6fb819);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6fb81c:{NFSU2_TR(0x6fb81c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb81f:{NFSU2_TR(0x6fb81f);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb810u);}goto L6fb810;}}
}
B6fb821:L6fb821:{c.instructions+=2;NFSU2_TR(0x6fb821);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x8ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb824:{NFSU2_TR(0x6fb824);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fb828;}}
}
B6fb826:L6fb826:{c.instructions+=2;NFSU2_TR(0x6fb826);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fb827:{NFSU2_TR(0x6fb827);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb828:L6fb828:{c.instructions+=2;NFSU2_TR(0x6fb828);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6fb82b:{NFSU2_TR(0x6fb82b);
if(r1(R+512)){{goto L6fb83a;}}
}
B6fb82d:L6fb82d:{c.instructions+=5;NFSU2_TR(0x6fb82d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6fb82f:{NFSU2_TR(0x6fb82f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6fb832:{NFSU2_TR(0x6fb832);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fb834:{NFSU2_TR(0x6fb834);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6fb837:{NFSU2_TR(0x6fb837);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B6fb83a:L6fb83a:{c.instructions+=2;NFSU2_TR(0x6fb83a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B6fb83d:{NFSU2_TR(0x6fb83d);
if(r1(R+512)){{goto L6fb84e;}}
}
B6fb83f:L6fb83f:{c.instructions+=5;NFSU2_TR(0x6fb83f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+12),(U+0),2);
}
B6fb842:{NFSU2_TR(0x6fb842);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6fb845:{NFSU2_TR(0x6fb845);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+0)),r2(U+0));
}
B6fb848:{NFSU2_TR(0x6fb848);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6fb84b:{NFSU2_TR(0x6fb84b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B6fb84e:L6fb84e:{c.instructions+=2;NFSU2_TR(0x6fb84e);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb851:{NFSU2_TR(0x6fb851);
if(r1(R+512)){{goto L6fb85a;}}
}
B6fb853:L6fb853:{c.instructions+=5;NFSU2_TR(0x6fb853);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6fb855:{NFSU2_TR(0x6fb855);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6fb856:{NFSU2_TR(0x6fb856);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B6fb858:{NFSU2_TR(0x6fb858);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fb859:{NFSU2_TR(0x6fb859);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb85a:L6fb85a:{c.instructions+=2;NFSU2_TR(0x6fb85a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fb85b:{NFSU2_TR(0x6fb85b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb85c:L6fb85c:{c.instructions+=2;NFSU2_TR(0x6fb85c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb861:{NFSU2_TR(0x6fb861);
if(r1(R+518)){{goto L6fb86f;}}
}
B6fb863:L6fb863:{c.instructions+=2;NFSU2_TR(0x6fb863);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb866:{NFSU2_TR(0x6fb866);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb86f;}}
}
B6fb868:L6fb868:{c.instructions+=5;NFSU2_TR(0x6fb868);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6fb86a:{NFSU2_TR(0x6fb86a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6fb86b:{NFSU2_TR(0x6fb86b);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B6fb86d:{NFSU2_TR(0x6fb86d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fb86e:{NFSU2_TR(0x6fb86e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6fb86f:L6fb86f:{c.instructions+=2;NFSU2_TR(0x6fb86f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb874:{NFSU2_TR(0x6fb874);
if(r1(R+518)){{goto L6fb88a;}}
}
B6fb876:L6fb876:{c.instructions+=2;NFSU2_TR(0x6fb876);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb879:{NFSU2_TR(0x6fb879);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb88a;}}
}
B6fb87b:L6fb87b:{c.instructions+=5;NFSU2_TR(0x6fb87b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+12),(U+0),2);
}
B6fb87e:{NFSU2_TR(0x6fb87e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6fb881:{NFSU2_TR(0x6fb881);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+0)),r2(U+0));
}
B6fb884:{NFSU2_TR(0x6fb884);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6fb887:{NFSU2_TR(0x6fb887);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B6fb88a:L6fb88a:{c.instructions+=2;NFSU2_TR(0x6fb88a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb88f:{NFSU2_TR(0x6fb88f);
if(r1(R+518)){{goto L6fb8a3;}}
}
B6fb891:L6fb891:{c.instructions+=2;NFSU2_TR(0x6fb891);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb894:{NFSU2_TR(0x6fb894);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb8a3;}}
}
B6fb896:L6fb896:{c.instructions+=5;NFSU2_TR(0x6fb896);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6fb898:{NFSU2_TR(0x6fb898);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6fb89b:{NFSU2_TR(0x6fb89b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fb89d:{NFSU2_TR(0x6fb89d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6fb8a0:{NFSU2_TR(0x6fb8a0);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B6fb8a3:L6fb8a3:{c.instructions+=2;NFSU2_TR(0x6fb8a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x8ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb8a8:{NFSU2_TR(0x6fb8a8);
if(r1(R+518)){{goto L6fb8be;}}
}
B6fb8aa:L6fb8aa:{c.instructions+=2;NFSU2_TR(0x6fb8aa);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb8ad:{NFSU2_TR(0x6fb8ad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb8be;}}
}
B6fb8af:L6fb8af:{c.instructions+=5;NFSU2_TR(0x6fb8af);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4608),(U+0),8);
}
B6fb8b2:{NFSU2_TR(0x6fb8b2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B6fb8b5:{NFSU2_TR(0x6fb8b5);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6fb8b8:{NFSU2_TR(0x6fb8b8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6fb8bb:{NFSU2_TR(0x6fb8bb);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8ull))));
}
B6fb8be:L6fb8be:{c.instructions+=2;NFSU2_TR(0x6fb8be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x10ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb8c3:{NFSU2_TR(0x6fb8c3);
if(r1(R+518)){{goto L6fb8d9;}}
}
B6fb8c5:L6fb8c5:{c.instructions+=2;NFSU2_TR(0x6fb8c5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb8c8:{NFSU2_TR(0x6fb8c8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb8d9;}}
}
B6fb8ca:L6fb8ca:{c.instructions+=5;NFSU2_TR(0x6fb8ca);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+8))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4608),(U+16),4);
__builtin_memmove((R+4612),(U+20),4);
__builtin_memmove((R+4616),(U+24),4);
__builtin_memmove((R+4620),(U+28),4);
}
B6fb8cd:{NFSU2_TR(0x6fb8cd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B6fb8d0:{NFSU2_TR(0x6fb8d0);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+0))),(U+0),16);
}
B6fb8d3:{NFSU2_TR(0x6fb8d3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6fb8d6:{NFSU2_TR(0x6fb8d6);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x10ull))));
}
B6fb8d9:L6fb8d9:{c.instructions+=1;NFSU2_TR(0x6fb8d9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb7e6u);}goto L6fb7e6;}
}
B6fb8de:L6fb8de:{c.instructions+=7;NFSU2_TR(0x6fb8de);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fb8e2:{NFSU2_TR(0x6fb8e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6fb8e6:{NFSU2_TR(0x6fb8e6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fb8ea:{NFSU2_TR(0x6fb8ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B6fb8f0:{NFSU2_TR(0x6fb8f0);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6fb8f4:{NFSU2_TR(0x6fb8f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb8f9:{NFSU2_TR(0x6fb8f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fb958;}}
}
B6fb8fb:L6fb8fb:{c.instructions+=2;NFSU2_TR(0x6fb8fb);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb8fe:{NFSU2_TR(0x6fb8fe);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6fb90e;}}
}
B6fb900:L6fb900:{c.instructions+=1;NFSU2_TR(0x6fb900);
{goto L6fb91d;}
}
B6fb90e:L6fb90e:{c.instructions+=5;NFSU2_TR(0x6fb90e);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+0))),(U+0),16);
}
B6fb911:{NFSU2_TR(0x6fb911);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B6fb915:{NFSU2_TR(0x6fb915);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B6fb918:{NFSU2_TR(0x6fb918);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb91b:{NFSU2_TR(0x6fb91b);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb90eu);}goto L6fb90e;}}
}
B6fb91d:L6fb91d:{c.instructions+=2;NFSU2_TR(0x6fb91d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb920:{NFSU2_TR(0x6fb920);
if(r1(R+519)){{goto L6fb92d;}}
}
B6fb922:L6fb922:{c.instructions+=4;NFSU2_TR(0x6fb922);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6fb925:{NFSU2_TR(0x6fb925);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6fb928:{NFSU2_TR(0x6fb928);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B6fb92b:{NFSU2_TR(0x6fb92b);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb922u);}goto L6fb922;}}
}
B6fb92d:L6fb92d:{c.instructions+=2;NFSU2_TR(0x6fb92d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x8ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb930:{NFSU2_TR(0x6fb930);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fb933;}}
}
B6fb932:L6fb932:{c.instructions+=1;NFSU2_TR(0x6fb932);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb933:L6fb933:{c.instructions+=2;NFSU2_TR(0x6fb933);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6fb936:{NFSU2_TR(0x6fb936);
if(r1(R+512)){{goto L6fb940;}}
}
B6fb938:L6fb938:{c.instructions+=3;NFSU2_TR(0x6fb938);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fb93a:{NFSU2_TR(0x6fb93a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6fb93d:{NFSU2_TR(0x6fb93d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B6fb940:L6fb940:{c.instructions+=2;NFSU2_TR(0x6fb940);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B6fb943:{NFSU2_TR(0x6fb943);
if(r1(R+512)){{goto L6fb94e;}}
}
B6fb945:L6fb945:{c.instructions+=3;NFSU2_TR(0x6fb945);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+0)),r2(U+0));
}
B6fb948:{NFSU2_TR(0x6fb948);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6fb94b:{NFSU2_TR(0x6fb94b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B6fb94e:L6fb94e:{c.instructions+=2;NFSU2_TR(0x6fb94e);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb951:{NFSU2_TR(0x6fb951);
if(r1(R+512)){{goto L6fb957;}}
}
B6fb953:L6fb953:{c.instructions+=3;NFSU2_TR(0x6fb953);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B6fb955:{NFSU2_TR(0x6fb955);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fb956:{NFSU2_TR(0x6fb956);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb957:L6fb957:{c.instructions+=1;NFSU2_TR(0x6fb957);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb958:L6fb958:{c.instructions+=2;NFSU2_TR(0x6fb958);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb95d:{NFSU2_TR(0x6fb95d);
if(r1(R+518)){{goto L6fb968;}}
}
B6fb95f:L6fb95f:{c.instructions+=2;NFSU2_TR(0x6fb95f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb962:{NFSU2_TR(0x6fb962);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb968;}}
}
B6fb964:L6fb964:{c.instructions+=3;NFSU2_TR(0x6fb964);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B6fb966:{NFSU2_TR(0x6fb966);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fb967:{NFSU2_TR(0x6fb967);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6fb968:L6fb968:{c.instructions+=2;NFSU2_TR(0x6fb968);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb96d:{NFSU2_TR(0x6fb96d);
if(r1(R+518)){{goto L6fb97d;}}
}
B6fb96f:L6fb96f:{c.instructions+=2;NFSU2_TR(0x6fb96f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb972:{NFSU2_TR(0x6fb972);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb97d;}}
}
B6fb974:L6fb974:{c.instructions+=3;NFSU2_TR(0x6fb974);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+0)),r2(U+0));
}
B6fb977:{NFSU2_TR(0x6fb977);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6fb97a:{NFSU2_TR(0x6fb97a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B6fb97d:L6fb97d:{c.instructions+=2;NFSU2_TR(0x6fb97d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb982:{NFSU2_TR(0x6fb982);
if(r1(R+518)){{goto L6fb991;}}
}
B6fb984:L6fb984:{c.instructions+=2;NFSU2_TR(0x6fb984);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb987:{NFSU2_TR(0x6fb987);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb991;}}
}
B6fb989:L6fb989:{c.instructions+=3;NFSU2_TR(0x6fb989);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fb98b:{NFSU2_TR(0x6fb98b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6fb98e:{NFSU2_TR(0x6fb98e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B6fb991:L6fb991:{c.instructions+=2;NFSU2_TR(0x6fb991);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x8ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb996:{NFSU2_TR(0x6fb996);
if(r1(R+518)){{goto L6fb9a6;}}
}
B6fb998:L6fb998:{c.instructions+=2;NFSU2_TR(0x6fb998);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb99b:{NFSU2_TR(0x6fb99b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb9a6;}}
}
B6fb99d:L6fb99d:{c.instructions+=3;NFSU2_TR(0x6fb99d);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6fb9a0:{NFSU2_TR(0x6fb9a0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6fb9a3:{NFSU2_TR(0x6fb9a3);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8ull))));
}
B6fb9a6:L6fb9a6:{c.instructions+=2;NFSU2_TR(0x6fb9a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x10ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb9ab:{NFSU2_TR(0x6fb9ab);
if(r1(R+518)){{goto L6fb9bb;}}
}
B6fb9ad:L6fb9ad:{c.instructions+=2;NFSU2_TR(0x6fb9ad);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fb9b0:{NFSU2_TR(0x6fb9b0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fb9bb;}}
}
B6fb9b2:L6fb9b2:{c.instructions+=3;NFSU2_TR(0x6fb9b2);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+0))),(U+0),16);
}
B6fb9b5:{NFSU2_TR(0x6fb9b5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6fb9b8:{NFSU2_TR(0x6fb9b8);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x10ull))));
}
B6fb9bb:L6fb9bb:{c.instructions+=1;NFSU2_TR(0x6fb9bb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb8fbu);}goto L6fb8fb;}
}
B6fb9cb:L6fb9cb:{c.instructions+=2;NFSU2_TR(0x6fb9cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fb9cd:{NFSU2_TR(0x6fb9cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fb9e1;}}
}
B6fb9cf:L6fb9cf:{c.instructions+=1;NFSU2_TR(0x6fb9cf);
w4(R+0,u32(0x81437cull));
}
B6fb9d4:L6fb9d4:{c.instructions+=4;NFSU2_TR(0x6fb9d4);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B6fb9d6:{NFSU2_TR(0x6fb9d6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6fb9d9:{NFSU2_TR(0x6fb9d9);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x81457cull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x81457cull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x81457cull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb9de:{NFSU2_TR(0x6fb9de);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb9d4u);}goto L6fb9d4;}}
}
B6fb9e0:L6fb9e0:{c.instructions+=1;NFSU2_TR(0x6fb9e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb9e1:L6fb9e1:{c.instructions+=2;NFSU2_TR(0x6fb9e1);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb9e4:{NFSU2_TR(0x6fb9e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fb9fe;}}
}
B6fb9e6:L6fb9e6:{c.instructions+=1;NFSU2_TR(0x6fb9e6);
w4(R+0,u32(0x81437cull));
}
B6fb9eb:L6fb9eb:{c.instructions+=2;NFSU2_TR(0x6fb9eb);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6fb9ef:{NFSU2_TR(0x6fb9ef);
if(r1(R+518)){{goto L6fb9f3;}}
}
B6fb9f1:L6fb9f1:{c.instructions+=1;NFSU2_TR(0x6fb9f1);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B6fb9f3:L6fb9f3:{c.instructions+=3;NFSU2_TR(0x6fb9f3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6fb9f6:{NFSU2_TR(0x6fb9f6);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x81457cull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x81457cull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x81457cull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fb9fb:{NFSU2_TR(0x6fb9fb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb9ebu);}goto L6fb9eb;}}
}
B6fb9fd:L6fb9fd:{c.instructions+=1;NFSU2_TR(0x6fb9fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fb9fe:L6fb9fe:{c.instructions+=2;NFSU2_TR(0x6fb9fe);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x81437cull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6fba05:{NFSU2_TR(0x6fba05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fba06:L6fba06:{c.instructions+=3;NFSU2_TR(0x6fba06);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fba08:{NFSU2_TR(0x6fba08);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(r1(R+0))));
w1(R+523,sborrow<u8>(r1(U+4),r1(R+0)));
w1(U+5,u8(u32(r1(U+4))-u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6fba0a:{NFSU2_TR(0x6fba0a);
if(r1(R+518)){{goto L6fba56;}}
}
B6fba0c:L6fba0c:{c.instructions+=6;NFSU2_TR(0x6fba0c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fba0d:{NFSU2_TR(0x6fba0d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fba0e:{NFSU2_TR(0x6fba0e);
__builtin_memmove((R+28),(R+8),4);
}
B6fba10:{NFSU2_TR(0x6fba10);
__builtin_memmove((R+24),(R+4),4);
}
B6fba12:{NFSU2_TR(0x6fba12);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B6fba14:{NFSU2_TR(0x6fba14);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fba15:L6fba15:{c.instructions+=3;NFSU2_TR(0x6fba15);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+12),(U+8),1);
}
B6fba18:{NFSU2_TR(0x6fba18);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6fba1a:{NFSU2_TR(0x6fba1a);
if(r1(R+518)){{goto L6fba53;}}
}
B6fba1c:L6fba1c:{c.instructions+=3;NFSU2_TR(0x6fba1c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6fba1e:{NFSU2_TR(0x6fba1e);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x41ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B6fba21:{NFSU2_TR(0x6fba21);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fba30;}}
}
B6fba23:L6fba23:{c.instructions+=2;NFSU2_TR(0x6fba23);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x5aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fba26:{NFSU2_TR(0x6fba26);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6fba30;}}
}
B6fba28:L6fba28:{c.instructions+=3;NFSU2_TR(0x6fba28);
w4(R+8,u32(s32(s8(r1(R+4)))));
}
B6fba2b:{NFSU2_TR(0x6fba2b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B6fba2e:{NFSU2_TR(0x6fba2e);
{goto L6fba33;}
}
B6fba30:L6fba30:{c.instructions+=1;NFSU2_TR(0x6fba30);
w4(R+8,u32(s32(s8(r1(R+4)))));
}
B6fba33:L6fba33:{c.instructions+=2;NFSU2_TR(0x6fba33);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x41ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B6fba36:{NFSU2_TR(0x6fba36);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fba45;}}
}
B6fba38:L6fba38:{c.instructions+=2;NFSU2_TR(0x6fba38);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x5aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fba3b:{NFSU2_TR(0x6fba3b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6fba45;}}
}
B6fba3d:L6fba3d:{c.instructions+=3;NFSU2_TR(0x6fba3d);
w4(R+4,u32(s32(s8(r1(R+12)))));
}
B6fba40:{NFSU2_TR(0x6fba40);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B6fba43:{NFSU2_TR(0x6fba43);
{goto L6fba48;}
}
B6fba45:L6fba45:{c.instructions+=1;NFSU2_TR(0x6fba45);
w4(R+4,u32(s32(s8(r1(R+12)))));
}
B6fba48:L6fba48:{c.instructions+=2;NFSU2_TR(0x6fba48);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B6fba4a:{NFSU2_TR(0x6fba4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fba53;}}
}
B6fba4c:L6fba4c:{c.instructions+=4;NFSU2_TR(0x6fba4c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fba4d:{NFSU2_TR(0x6fba4d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6fba4e:{NFSU2_TR(0x6fba4e);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6fba51:{NFSU2_TR(0x6fba51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fba15u);}goto L6fba15;}}
}
B6fba53:L6fba53:{c.instructions+=3;NFSU2_TR(0x6fba53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fba54:{NFSU2_TR(0x6fba54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fba55:{NFSU2_TR(0x6fba55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fba56:L6fba56:{c.instructions+=1;NFSU2_TR(0x6fba56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fba57:L6fba57:{c.instructions+=6;NFSU2_TR(0x6fba57);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fba58:{NFSU2_TR(0x6fba58);
__builtin_memmove((R+20),(R+16),4);
}
B6fba5a:{NFSU2_TR(0x6fba5a);
__builtin_memmove((R+0),(R+8),4);
}
B6fba5c:{NFSU2_TR(0x6fba5c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fba5d:{NFSU2_TR(0x6fba5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fba60:{NFSU2_TR(0x6fba60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fba61:L6fba61:{c.instructions+=4;NFSU2_TR(0x6fba61);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6fba63:{NFSU2_TR(0x6fba63);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fba64:{NFSU2_TR(0x6fba64);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fba66:{NFSU2_TR(0x6fba66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fba61u);}goto L6fba61;}}
}
B6fba68:L6fba68:{c.instructions+=6;NFSU2_TR(0x6fba68);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6fba6a:{NFSU2_TR(0x6fba6a);
__builtin_memmove((R+4),(R+0),4);
}
B6fba6c:{NFSU2_TR(0x6fba6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fba6f:{NFSU2_TR(0x6fba6f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6fba70:{NFSU2_TR(0x6fba70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6fba72:{NFSU2_TR(0x6fba72);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6fba82;}}
}
B6fba74:L6fba74:{c.instructions+=2;NFSU2_TR(0x6fba74);
__builtin_memmove((R+0),(R+8),4);
}
B6fba76:{NFSU2_TR(0x6fba76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fba79:L6fba79:{c.instructions+=4;NFSU2_TR(0x6fba79);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6fba7b:{NFSU2_TR(0x6fba7b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fba7c:{NFSU2_TR(0x6fba7c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fba7e:{NFSU2_TR(0x6fba7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fba79u);}goto L6fba79;}}
}
B6fba80:L6fba80:{c.instructions+=1;NFSU2_TR(0x6fba80);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6fba82:L6fba82:{c.instructions+=4;NFSU2_TR(0x6fba82);
__builtin_memmove((R+24),(R+28),4);
}
B6fba84:{NFSU2_TR(0x6fba84);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fba87:{NFSU2_TR(0x6fba87);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B6fba89:{NFSU2_TR(0x6fba89);
__builtin_memmove((R+12),(R+4),4);
}
B6fba8b:L6fba8b:{c.instructions+=3;NFSU2_TR(0x6fba8b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6fba8d:{NFSU2_TR(0x6fba8d);
u8 U[1];
w1(R+512,u8((r1(R+0))<(u8(0x41ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x41ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6fba8f:{NFSU2_TR(0x6fba8f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fba9d;}}
}
B6fba91:L6fba91:{c.instructions+=2;NFSU2_TR(0x6fba91);
u8 U[1];
w1(R+512,u8((r1(R+0))<(u8(0x5aull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x5aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fba93:{NFSU2_TR(0x6fba93);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6fba9d;}}
}
B6fba95:L6fba95:{c.instructions+=3;NFSU2_TR(0x6fba95);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B6fba98:{NFSU2_TR(0x6fba98);
w1(R+512,carry<u32>(r4(R+0),u32(0x20ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B6fba9b:{NFSU2_TR(0x6fba9b);
{goto L6fbaa0;}
}
B6fba9d:L6fba9d:{c.instructions+=1;NFSU2_TR(0x6fba9d);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B6fbaa0:L6fbaa0:{c.instructions+=4;NFSU2_TR(0x6fbaa0);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6fbaa3:{NFSU2_TR(0x6fbaa3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6fbaa4:{NFSU2_TR(0x6fbaa4);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fbaa5:{NFSU2_TR(0x6fbaa5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fba8bu);}goto L6fba8b;}}
}
B6fbaa7:L6fbaa7:{c.instructions+=5;NFSU2_TR(0x6fbaa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fbaa8:{NFSU2_TR(0x6fbaa8);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B6fbaac:{NFSU2_TR(0x6fbaac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fbaad:{NFSU2_TR(0x6fbaad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbaae:{NFSU2_TR(0x6fbaae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fbaaf:L6fbaaf:{c.instructions+=10;NFSU2_TR(0x6fbaaf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbab0:{NFSU2_TR(0x6fbab0);
__builtin_memmove((R+20),(R+16),4);
}
B6fbab2:{NFSU2_TR(0x6fbab2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbab3:{NFSU2_TR(0x6fbab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fbab7:{NFSU2_TR(0x6fbab7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbab8:{NFSU2_TR(0x6fbab8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbab9:{NFSU2_TR(0x6fbab9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbaba:{NFSU2_TR(0x6fbaba);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6fbabc:{NFSU2_TR(0x6fbabc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6fbabe:{NFSU2_TR(0x6fbabe);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6fbac0:L6fbac0:{c.instructions+=3;NFSU2_TR(0x6fbac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x814578ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fbac6:{NFSU2_TR(0x6fbac6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fbac8:{NFSU2_TR(0x6fbac8);
if(r1(R+518)){{goto L6fbadb;}}
}
B6fbaca:L6fbaca:{c.instructions+=2;NFSU2_TR(0x6fbaca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6fbacd:{NFSU2_TR(0x6fbacd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbad2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fba06u);}goto L6fba06;}
}
B6fbad2:L6fbad2:{c.instructions+=2;NFSU2_TR(0x6fbad2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fbad4:{NFSU2_TR(0x6fbad4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6fbadb;}}
}
B6fbad6:L6fbad6:{c.instructions+=2;NFSU2_TR(0x6fbad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fbad9:{NFSU2_TR(0x6fbad9);
__builtin_memmove((R+28),(R+0),4);
}
B6fbadb:L6fbadb:{c.instructions+=4;NFSU2_TR(0x6fbadb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B6fbade:{NFSU2_TR(0x6fbade);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6fbadf:{NFSU2_TR(0x6fbadf);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x60ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x60ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fbae2:{NFSU2_TR(0x6fbae2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fbac0u);}goto L6fbac0;}}
}
B6fbae4:L6fbae4:{c.instructions+=6;NFSU2_TR(0x6fbae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fbae7:{NFSU2_TR(0x6fbae7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fbae8:{NFSU2_TR(0x6fbae8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fbae9:{NFSU2_TR(0x6fbae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fbaea:{NFSU2_TR(0x6fbaea);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fbaeb:{NFSU2_TR(0x6fbaeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fbaec:L6fbaec:{c.instructions+=8;NFSU2_TR(0x6fbaec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbaed:{NFSU2_TR(0x6fbaed);
__builtin_memmove((R+20),(R+16),4);
}
B6fbaef:{NFSU2_TR(0x6fbaef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbaf0:{NFSU2_TR(0x6fbaf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbaf1:{NFSU2_TR(0x6fbaf1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbaf2:{NFSU2_TR(0x6fbaf2);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B6fbaf5:{NFSU2_TR(0x6fbaf5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6fbaf7:{NFSU2_TR(0x6fbaf7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6fbaf9:L6fbaf9:{c.instructions+=3;NFSU2_TR(0x6fbaf9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x814378ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6fbb00:{NFSU2_TR(0x6fbb00);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fbb02:{NFSU2_TR(0x6fbb02);
if(r1(R+518)){{goto L6fbb14;}}
}
B6fbb04:L6fbb04:{c.instructions+=2;NFSU2_TR(0x6fbb04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6fbb07:{NFSU2_TR(0x6fbb07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbb0cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fba06u);}goto L6fba06;}
}
B6fbb0c:L6fbb0c:{c.instructions+=2;NFSU2_TR(0x6fbb0c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fbb0e:{NFSU2_TR(0x6fbb0e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6fbb14;}}
}
B6fbb10:L6fbb10:{c.instructions+=2;NFSU2_TR(0x6fbb10);
__builtin_memmove((R+12),(R+24),4);
}
B6fbb12:{NFSU2_TR(0x6fbb12);
__builtin_memmove((R+28),(R+0),4);
}
B6fbb14:L6fbb14:{c.instructions+=3;NFSU2_TR(0x6fbb14);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6fbb15:{NFSU2_TR(0x6fbb15);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fbb18:{NFSU2_TR(0x6fbb18);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fbaf9u);}goto L6fbaf9;}}
}
B6fbb1a:L6fbb1a:{c.instructions+=6;NFSU2_TR(0x6fbb1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fbb1b:{NFSU2_TR(0x6fbb1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fbb1c:{NFSU2_TR(0x6fbb1c);
__builtin_memmove((R+0),(R+12),4);
}
B6fbb1e:{NFSU2_TR(0x6fbb1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fbb1f:{NFSU2_TR(0x6fbb1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbb20:{NFSU2_TR(0x6fbb20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fbb21:L6fbb21:{c.instructions+=12;NFSU2_TR(0x6fbb21);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbb22:{NFSU2_TR(0x6fbb22);
__builtin_memmove((R+20),(R+16),4);
}
B6fbb24:{NFSU2_TR(0x6fbb24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B6fbb2a:{NFSU2_TR(0x6fbb2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbb2b:{NFSU2_TR(0x6fbb2b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbb2c:{NFSU2_TR(0x6fbb2c);
w4(R+24,u32(0x7c3294ull));
}
B6fbb31:{NFSU2_TR(0x6fbb31);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fbb34:{NFSU2_TR(0x6fbb34);
u8 U[36];
__builtin_memmove((U+18),(R+28),4);
w4(U+22,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+26,u32(r1(R+522)));
w4(U+30,u32(u32(u32(0x4ull))*u32(r4(U+26))));
w4(R+28,u32(u32(r4(U+22))-u32(r4(U+30))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),2);
__builtin_memmove((U+34),(U+16),2);
s2(u32(r4(U+18)),r2(U+34));
}
B6fbb36:{NFSU2_TR(0x6fbb36);
u8 U[34];
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
}
B6fbb37:{NFSU2_TR(0x6fbb37);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbb3c:{NFSU2_TR(0x6fbb3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fbb42:{NFSU2_TR(0x6fbb42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbb47ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fba57u);}goto L6fba57;}
}
B6fbb47:L6fbb47:{c.instructions+=5;NFSU2_TR(0x6fbb47);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fbb4a:{NFSU2_TR(0x6fbb4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbb4b:{NFSU2_TR(0x6fbb4b);
__builtin_memmove((R+0),(R+28),4);
}
B6fbb4d:{NFSU2_TR(0x6fbb4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbb4e:{NFSU2_TR(0x6fbb4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbb53ull));
TAIL_STATIC(0x75f844u,75f);
}
B6fbb53:L6fbb53:{c.instructions+=4;NFSU2_TR(0x6fbb53);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fbb56:{NFSU2_TR(0x6fbb56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fbb57:{NFSU2_TR(0x6fbb57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fbb58:{NFSU2_TR(0x6fbb58);
{goto L6fbb9b;}
}
B6fbb5a:L6fbb5a:{c.instructions+=2;NFSU2_TR(0x6fbb5a);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x2dull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6fbb5d:{NFSU2_TR(0x6fbb5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fbb78;}}
}
B6fbb5f:L6fbb5f:{c.instructions+=3;NFSU2_TR(0x6fbb5f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fbb60:{NFSU2_TR(0x6fbb60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbb61:{NFSU2_TR(0x6fbb61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbb66ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fbaafu);}goto L6fbaaf;}
}
B6fbb66:L6fbb66:{c.instructions+=3;NFSU2_TR(0x6fbb66);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6fbb68:{NFSU2_TR(0x6fbb68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fbb69:{NFSU2_TR(0x6fbb69);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fbb8e;}}
}
B6fbb6b:L6fbb6b:{c.instructions+=3;NFSU2_TR(0x6fbb6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6fbb6e:{NFSU2_TR(0x6fbb6e);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x814580ull))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B6fbb76:{NFSU2_TR(0x6fbb76);
{goto L6fbb8e;}
}
B6fbb78:L6fbb78:{c.instructions+=2;NFSU2_TR(0x6fbb78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbb79:{NFSU2_TR(0x6fbb79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbb7eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fbaafu);}goto L6fbaaf;}
}
B6fbb7e:L6fbb7e:{c.instructions+=3;NFSU2_TR(0x6fbb7e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6fbb80:{NFSU2_TR(0x6fbb80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fbb81:{NFSU2_TR(0x6fbb81);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fbb8e;}}
}
B6fbb83:L6fbb83:{c.instructions+=2;NFSU2_TR(0x6fbb83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6fbb86:{NFSU2_TR(0x6fbb86);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x814580ull))+u32(r4(U+0))));
w1(U+8,u8(0x1ull));
s1(u32(r4(U+4)),r1(U+8));
}
B6fbb8e:L6fbb8e:{c.instructions+=4;NFSU2_TR(0x6fbb8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fbb91:{NFSU2_TR(0x6fbb91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbb92:{NFSU2_TR(0x6fbb92);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbb94:{NFSU2_TR(0x6fbb94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbb99ull));
TAIL_STATIC(0x75f844u,75f);
}
B6fbb99:L6fbb99:{c.instructions+=2;NFSU2_TR(0x6fbb99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fbb9a:{NFSU2_TR(0x6fbb9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fbb9b:L6fbb9b:{c.instructions+=2;NFSU2_TR(0x6fbb9b);
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
B6fbb9d:{NFSU2_TR(0x6fbb9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fbb5au);}goto L6fbb5a;}}
}
B6fbb9f:L6fbb9f:{c.instructions+=2;NFSU2_TR(0x6fbb9f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fbba0:{NFSU2_TR(0x6fbba0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fbba1:L6fbba1:{c.instructions+=8;NFSU2_TR(0x6fbba1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbba2:{NFSU2_TR(0x6fbba2);
__builtin_memmove((R+20),(R+16),4);
}
B6fbba4:{NFSU2_TR(0x6fbba4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B6fbbaa:{NFSU2_TR(0x6fbbaa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbbab:{NFSU2_TR(0x6fbbab);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbbb0:{NFSU2_TR(0x6fbbb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fbbb6:{NFSU2_TR(0x6fbbb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x3b2c20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fbbbd:{NFSU2_TR(0x6fbbbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbbc2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fba57u);}goto L6fba57;}
}
B6fbbc2:L6fbbc2:{c.instructions+=5;NFSU2_TR(0x6fbbc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fbbc5:{NFSU2_TR(0x6fbbc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbbc6:{NFSU2_TR(0x6fbbc6);
__builtin_memmove((R+0),(R+28),4);
}
B6fbbc8:{NFSU2_TR(0x6fbbc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbbc9:{NFSU2_TR(0x6fbbc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbbceull));
TAIL_STATIC(0x75f844u,75f);
}
B6fbbce:L6fbbce:{c.instructions+=3;NFSU2_TR(0x6fbbce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fbbd1:{NFSU2_TR(0x6fbbd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fbbd2:{NFSU2_TR(0x6fbbd2);
{goto L6fbc0f;}
}
B6fbbd4:L6fbbd4:{c.instructions+=3;NFSU2_TR(0x6fbbd4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6fbbd6:{NFSU2_TR(0x6fbbd6);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2dull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fbbd9:{NFSU2_TR(0x6fbbd9);
if(r1(R+518)){{goto L6fbbef;}}
}
B6fbbdb:L6fbbdb:{c.instructions+=2;NFSU2_TR(0x6fbbdb);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x21ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fbbde:{NFSU2_TR(0x6fbbde);
if(r1(R+518)){{goto L6fbbef;}}
}
B6fbbe0:L6fbbe0:{c.instructions+=2;NFSU2_TR(0x6fbbe0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbbe1:{NFSU2_TR(0x6fbbe1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbbe6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fbaecu);}goto L6fbaec;}
}
B6fbbe6:L6fbbe6:{c.instructions+=3;NFSU2_TR(0x6fbbe6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6fbbe8:{NFSU2_TR(0x6fbbe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fbbe9:{NFSU2_TR(0x6fbbe9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fbc02;}}
}
B6fbbeb:L6fbbeb:{c.instructions+=2;NFSU2_TR(0x6fbbeb);
w1(R+4,u8(0x1ull));
}
B6fbbed:{NFSU2_TR(0x6fbbed);
{goto L6fbbfd;}
}
B6fbbef:L6fbbef:{c.instructions+=3;NFSU2_TR(0x6fbbef);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fbbf0:{NFSU2_TR(0x6fbbf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbbf1:{NFSU2_TR(0x6fbbf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbbf6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fbaecu);}goto L6fbaec;}
}
B6fbbf6:L6fbbf6:{c.instructions+=3;NFSU2_TR(0x6fbbf6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6fbbf8:{NFSU2_TR(0x6fbbf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fbbf9:{NFSU2_TR(0x6fbbf9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fbc02;}}
}
B6fbbfb:L6fbbfb:{c.instructions+=1;NFSU2_TR(0x6fbbfb);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B6fbbfd:L6fbbfd:{c.instructions+=1;NFSU2_TR(0x6fbbfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbc02ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb9cbu);}goto L6fb9cb;}
}
B6fbc02:L6fbc02:{c.instructions+=4;NFSU2_TR(0x6fbc02);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fbc05:{NFSU2_TR(0x6fbc05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbc06:{NFSU2_TR(0x6fbc06);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbc08:{NFSU2_TR(0x6fbc08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbc0dull));
TAIL_STATIC(0x75f844u,75f);
}
B6fbc0d:L6fbc0d:{c.instructions+=2;NFSU2_TR(0x6fbc0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fbc0e:{NFSU2_TR(0x6fbc0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fbc0f:L6fbc0f:{c.instructions+=2;NFSU2_TR(0x6fbc0f);
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
B6fbc11:{NFSU2_TR(0x6fbc11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fbbd4u);}goto L6fbbd4;}}
}
B6fbc13:L6fbc13:{c.instructions+=2;NFSU2_TR(0x6fbc13);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fbc14:{NFSU2_TR(0x6fbc14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fbc1d:L6fbc1d:{c.instructions+=7;NFSU2_TR(0x6fbc1d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbc1e:{NFSU2_TR(0x6fbc1e);
__builtin_memmove((R+20),(R+16),4);
}
B6fbc20:{NFSU2_TR(0x6fbc20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x800ull))));
}
B6fbc26:{NFSU2_TR(0x6fbc26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbc27:{NFSU2_TR(0x6fbc27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6fbc2a:{NFSU2_TR(0x6fbc2a);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x81437cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+12),(U+8),1);
w1(R+512,u8((r1(U+12))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+12),u8(0x0ull)));
w1(U+13,u8(u32(r1(U+12))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+13))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+13))==(u8(0x0ull))));
w1(U+9,u8(u32(r1(U+13))&u32(u8(0xffull))));
w1(U+10,u8(__builtin_popcountll(u64(r1(U+9)))));
w1(U+11,u8(u32(r1(U+10))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+11))==(u8(0x0ull))));
}
B6fbc32:{NFSU2_TR(0x6fbc32);
if(r1(R+518)){{goto L6fbc78;}}
}
B6fbc34:L6fbc34:{c.instructions+=7;NFSU2_TR(0x6fbc34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbc35:{NFSU2_TR(0x6fbc35);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbc38:{NFSU2_TR(0x6fbc38);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff800ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fbc3e:{NFSU2_TR(0x6fbc3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbc41:{NFSU2_TR(0x6fbc41);
u8 U[4];
w4(U+0,u32(0x800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbc46:{NFSU2_TR(0x6fbc46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbc47:{NFSU2_TR(0x6fbc47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbc4cull));
TAIL_STATIC(0x75e02bu,75e);
}
B6fbc4c:L6fbc4c:{c.instructions+=2;NFSU2_TR(0x6fbc4c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6fbc4f:{NFSU2_TR(0x6fbc4f);
w4(R+24,u32(0x81457cull));
}
B6fbc54:L6fbc54:{c.instructions+=2;NFSU2_TR(0x6fbc54);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6fbc58:{NFSU2_TR(0x6fbc58);
if(r1(R+518)){{goto L6fbc6c;}}
}
B6fbc5a:L6fbc5a:{c.instructions+=3;NFSU2_TR(0x6fbc5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fbc5c:{NFSU2_TR(0x6fbc5c);
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
B6fbc5e:{NFSU2_TR(0x6fbc5e);
if(r1(R+518)){{goto L6fbc6c;}}
}
B6fbc60:L6fbc60:{c.instructions+=4;NFSU2_TR(0x6fbc60);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff800ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fbc66:{NFSU2_TR(0x6fbc66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbc67:{NFSU2_TR(0x6fbc67);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbc68:{NFSU2_TR(0x6fbc68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbc6aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fbc6a:L6fbc6a:{c.instructions+=2;NFSU2_TR(0x6fbc6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fbc6b:{NFSU2_TR(0x6fbc6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fbc6c:L6fbc6c:{c.instructions+=3;NFSU2_TR(0x6fbc6c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B6fbc6f:{NFSU2_TR(0x6fbc6f);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x8145dcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8145dcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8145dcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fbc75:{NFSU2_TR(0x6fbc75);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fbc54u);}goto L6fbc54;}}
}
B6fbc77:L6fbc77:{c.instructions+=1;NFSU2_TR(0x6fbc77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fbc78:L6fbc78:{c.instructions+=3;NFSU2_TR(0x6fbc78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fbc79:{NFSU2_TR(0x6fbc79);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fbc7a:{NFSU2_TR(0x6fbc7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fbc7b:L6fbc7b:{c.instructions+=4;NFSU2_TR(0x6fbc7b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbc7c:{NFSU2_TR(0x6fbc7c);
__builtin_memmove((R+20),(R+16),4);
}
B6fbc7e:{NFSU2_TR(0x6fbc7e);
w4(R+0,u32(0x1800ull));
}
B6fbc83:{NFSU2_TR(0x6fbc83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbc88ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B6fbc88:L6fbc88:{c.instructions+=6;NFSU2_TR(0x6fbc88);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbc89:{NFSU2_TR(0x6fbc89);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbc8a:{NFSU2_TR(0x6fbc8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6fbc8d:{NFSU2_TR(0x6fbc8d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6fbc8f:{NFSU2_TR(0x6fbc8f);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x81437cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+12),(U+8),1);
w1(R+512,u8((r1(U+12))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+12),r1(R+12)));
w1(U+13,u8(u32(r1(U+12))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+13))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+13))==(u8(0x0ull))));
w1(U+9,u8(u32(r1(U+13))&u32(u8(0xffull))));
w1(U+10,u8(__builtin_popcountll(u64(r1(U+9)))));
w1(U+11,u8(u32(r1(U+10))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+11))==(u8(0x0ull))));
}
B6fbc96:{NFSU2_TR(0x6fbc96);
if(r1(R+518)){{goto L6fbd08;}}
}
B6fbc98:L6fbc98:{c.instructions+=7;NFSU2_TR(0x6fbc98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbc99:{NFSU2_TR(0x6fbc99);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbc9c:{NFSU2_TR(0x6fbc9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffe800ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fbca2:{NFSU2_TR(0x6fbca2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbca5:{NFSU2_TR(0x6fbca5);
u8 U[4];
w4(U+0,u32(0x800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbcaa:{NFSU2_TR(0x6fbcaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbcab:{NFSU2_TR(0x6fbcab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbcb0ull));
TAIL_STATIC(0x75f8ffu,75f);
}
B6fbcb0:L6fbcb0:{c.instructions+=4;NFSU2_TR(0x6fbcb0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6fbcb3:{NFSU2_TR(0x6fbcb3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6fbcb5:{NFSU2_TR(0x6fbcb5);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffe800ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6fbcbc:{NFSU2_TR(0x6fbcbc);
if(r1(R+518)){{goto L6fbcd9;}}
}
B6fbcbe:L6fbcbe:{c.instructions+=2;NFSU2_TR(0x6fbcbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffe800ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fbcc4:{NFSU2_TR(0x6fbcc4);
__builtin_memmove((R+0),(R+24),4);
}
B6fbcc6:L6fbcc6:{c.instructions+=8;NFSU2_TR(0x6fbcc6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6fbcc8:{NFSU2_TR(0x6fbcc8);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffff800ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B6fbccf:{NFSU2_TR(0x6fbccf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fbcd0:{NFSU2_TR(0x6fbcd0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fbcd1:{NFSU2_TR(0x6fbcd1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fbcd2:{NFSU2_TR(0x6fbcd2);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+12))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B6fbcd5:{NFSU2_TR(0x6fbcd5);
__builtin_memmove((R+24),(R+0),4);
}
B6fbcd7:{NFSU2_TR(0x6fbcd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fbcc6u);}goto L6fbcc6;}}
}
B6fbcd9:L6fbcd9:{c.instructions+=2;NFSU2_TR(0x6fbcd9);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffff800ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B6fbce0:{NFSU2_TR(0x6fbce0);
w4(R+24,u32(0x81457cull));
}
B6fbce5:L6fbce5:{c.instructions+=2;NFSU2_TR(0x6fbce5);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6fbce8:{NFSU2_TR(0x6fbce8);
if(r1(R+518)){{goto L6fbcfc;}}
}
B6fbcea:L6fbcea:{c.instructions+=3;NFSU2_TR(0x6fbcea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fbcec:{NFSU2_TR(0x6fbcec);
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
B6fbcee:{NFSU2_TR(0x6fbcee);
if(r1(R+518)){{goto L6fbcfc;}}
}
B6fbcf0:L6fbcf0:{c.instructions+=4;NFSU2_TR(0x6fbcf0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff800ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fbcf6:{NFSU2_TR(0x6fbcf6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbcf7:{NFSU2_TR(0x6fbcf7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbcf8:{NFSU2_TR(0x6fbcf8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbcfaull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fbcfa:L6fbcfa:{c.instructions+=2;NFSU2_TR(0x6fbcfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fbcfb:{NFSU2_TR(0x6fbcfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fbcfc:L6fbcfc:{c.instructions+=3;NFSU2_TR(0x6fbcfc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B6fbcff:{NFSU2_TR(0x6fbcff);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x8145dcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8145dcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8145dcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fbd05:{NFSU2_TR(0x6fbd05);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fbce5u);}goto L6fbce5;}}
}
B6fbd07:L6fbd07:{c.instructions+=1;NFSU2_TR(0x6fbd07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fbd08:L6fbd08:{c.instructions+=4;NFSU2_TR(0x6fbd08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fbd09:{NFSU2_TR(0x6fbd09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fbd0a:{NFSU2_TR(0x6fbd0a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fbd0b:{NFSU2_TR(0x6fbd0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fbd0c:L6fbd0c:{c.instructions+=7;NFSU2_TR(0x6fbd0c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbd0d:{NFSU2_TR(0x6fbd0d);
__builtin_memmove((R+20),(R+16),4);
}
B6fbd0f:{NFSU2_TR(0x6fbd0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fbd12:{NFSU2_TR(0x6fbd12);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6fbd15:{NFSU2_TR(0x6fbd15);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6fbd18:{NFSU2_TR(0x6fbd18);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x81457cull))));
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
B6fbd1f:{NFSU2_TR(0x6fbd1f);
if(r1(R+518)){{goto L6fbd41;}}
}
B6fbd21:L6fbd21:{c.instructions+=4;NFSU2_TR(0x6fbd21);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6fbd24:{NFSU2_TR(0x6fbd24);
u8 U[4];
w4(U+0,u32(0x7c3298ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbd29:{NFSU2_TR(0x6fbd29);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x814580ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6fbd2f:{NFSU2_TR(0x6fbd2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbd34ull));
TAIL_STATIC(0x75f9efu,75f);
}
B6fbd34:L6fbd34:{c.instructions+=3;NFSU2_TR(0x6fbd34);
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
B6fbd36:{NFSU2_TR(0x6fbd36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fbd37:{NFSU2_TR(0x6fbd37);
if(r1(R+518)){{goto L6fbd41;}}
}
B6fbd39:L6fbd39:{c.instructions+=3;NFSU2_TR(0x6fbd39);
__builtin_memmove((R+8),(R+0),4);
}
B6fbd3b:{NFSU2_TR(0x6fbd3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbd3c:{NFSU2_TR(0x6fbd3c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fbb21u);}goto L6fbb21;}
}
B6fbd41:L6fbd41:{c.instructions+=2;NFSU2_TR(0x6fbd41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbd42:{NFSU2_TR(0x6fbd42);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fbd43:L6fbd43:{c.instructions+=7;NFSU2_TR(0x6fbd43);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbd44:{NFSU2_TR(0x6fbd44);
__builtin_memmove((R+20),(R+16),4);
}
B6fbd46:{NFSU2_TR(0x6fbd46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fbd49:{NFSU2_TR(0x6fbd49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6fbd4c:{NFSU2_TR(0x6fbd4c);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x814580ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B6fbd53:{NFSU2_TR(0x6fbd53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbd54:{NFSU2_TR(0x6fbd54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fbd55:L6fbd55:{c.instructions+=11;NFSU2_TR(0x6fbd55);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbd56:{NFSU2_TR(0x6fbd56);
__builtin_memmove((R+20),(R+16),4);
}
B6fbd58:{NFSU2_TR(0x6fbd58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fbd5b:{NFSU2_TR(0x6fbd5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fbd5e:{NFSU2_TR(0x6fbd5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6fbd61:{NFSU2_TR(0x6fbd61);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6fbd64:{NFSU2_TR(0x6fbd64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x814578ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fbd6a:{NFSU2_TR(0x6fbd6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fbd6d:{NFSU2_TR(0x6fbd6d);
u8 U[4];
w4(U+0,u32(0x7c3298ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbd72:{NFSU2_TR(0x6fbd72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x81457cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fbd78:{NFSU2_TR(0x6fbd78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbd7dull));
TAIL_STATIC(0x75f9efu,75f);
}
B6fbd7d:L6fbd7d:{c.instructions+=3;NFSU2_TR(0x6fbd7d);
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
B6fbd7f:{NFSU2_TR(0x6fbd7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fbd80:{NFSU2_TR(0x6fbd80);
if(r1(R+518)){{goto L6fbd8a;}}
}
B6fbd82:L6fbd82:{c.instructions+=3;NFSU2_TR(0x6fbd82);
__builtin_memmove((R+8),(R+0),4);
}
B6fbd84:{NFSU2_TR(0x6fbd84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbd85:{NFSU2_TR(0x6fbd85);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fbb21u);}goto L6fbb21;}
}
B6fbd8a:L6fbd8a:{c.instructions+=2;NFSU2_TR(0x6fbd8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbd8b:{NFSU2_TR(0x6fbd8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fbd8c:L6fbd8c:{c.instructions+=7;NFSU2_TR(0x6fbd8c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbd8d:{NFSU2_TR(0x6fbd8d);
__builtin_memmove((R+20),(R+16),4);
}
B6fbd8f:{NFSU2_TR(0x6fbd8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fbd92:{NFSU2_TR(0x6fbd92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6fbd95:{NFSU2_TR(0x6fbd95);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x814578ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6fbd9c:{NFSU2_TR(0x6fbd9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbd9d:{NFSU2_TR(0x6fbd9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fbd9e:L6fbd9e:{c.instructions+=5;NFSU2_TR(0x6fbd9e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbd9f:{NFSU2_TR(0x6fbd9f);
__builtin_memmove((R+20),(R+16),4);
}
B6fbda1:{NFSU2_TR(0x6fbda1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6fbda4:{NFSU2_TR(0x6fbda4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fbda7:{NFSU2_TR(0x6fbda7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbdacull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fb9cbu);}goto L6fb9cb;}
}
B6fbdac:L6fbdac:{c.instructions+=2;NFSU2_TR(0x6fbdac);
u8 U[4];
w4(U+0,u32(0x7c32a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbdb1:{NFSU2_TR(0x6fbdb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbdb6ull));
TAIL_STATIC(0x75f9efu,75f);
}
B6fbdb6:L6fbdb6:{c.instructions+=3;NFSU2_TR(0x6fbdb6);
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
B6fbdb8:{NFSU2_TR(0x6fbdb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fbdb9:{NFSU2_TR(0x6fbdb9);
if(r1(R+518)){{goto L6fbdc3;}}
}
B6fbdbb:L6fbdbb:{c.instructions+=3;NFSU2_TR(0x6fbdbb);
__builtin_memmove((R+8),(R+0),4);
}
B6fbdbd:{NFSU2_TR(0x6fbdbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbdbe:{NFSU2_TR(0x6fbdbe);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fbba1u);}goto L6fbba1;}
}
B6fbdc3:L6fbdc3:{c.instructions+=2;NFSU2_TR(0x6fbdc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbdc4:{NFSU2_TR(0x6fbdc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fbdc5:L6fbdc5:{c.instructions+=6;NFSU2_TR(0x6fbdc5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbdc6:{NFSU2_TR(0x6fbdc6);
__builtin_memmove((R+20),(R+16),4);
}
B6fbdc8:{NFSU2_TR(0x6fbdc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fbdcb:{NFSU2_TR(0x6fbdcb);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x81437cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B6fbdd2:{NFSU2_TR(0x6fbdd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbdd3:{NFSU2_TR(0x6fbdd3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fbdd4:L6fbdd4:{c.instructions+=7;NFSU2_TR(0x6fbdd4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbdd5:{NFSU2_TR(0x6fbdd5);
__builtin_memmove((R+20),(R+16),4);
}
B6fbdd7:{NFSU2_TR(0x6fbdd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fbdda:{NFSU2_TR(0x6fbdda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fbddd:{NFSU2_TR(0x6fbddd);
u8 U[4];
w4(U+0,u32(0x7c32a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbde2:{NFSU2_TR(0x6fbde2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x814378ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6fbde9:{NFSU2_TR(0x6fbde9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbdeeull));
TAIL_STATIC(0x75f9efu,75f);
}
B6fbdee:L6fbdee:{c.instructions+=3;NFSU2_TR(0x6fbdee);
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
B6fbdf0:{NFSU2_TR(0x6fbdf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fbdf1:{NFSU2_TR(0x6fbdf1);
if(r1(R+518)){{goto L6fbdfb;}}
}
B6fbdf3:L6fbdf3:{c.instructions+=3;NFSU2_TR(0x6fbdf3);
__builtin_memmove((R+8),(R+0),4);
}
B6fbdf5:{NFSU2_TR(0x6fbdf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbdf6:{NFSU2_TR(0x6fbdf6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fbba1u);}goto L6fbba1;}
}
B6fbdfb:L6fbdfb:{c.instructions+=2;NFSU2_TR(0x6fbdfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbdfc:{NFSU2_TR(0x6fbdfc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fbdfd:L6fbdfd:{c.instructions+=6;NFSU2_TR(0x6fbdfd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbdfe:{NFSU2_TR(0x6fbdfe);
__builtin_memmove((R+20),(R+16),4);
}
B6fbe00:{NFSU2_TR(0x6fbe00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fbe03:{NFSU2_TR(0x6fbe03);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x814378ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6fbe0a:{NFSU2_TR(0x6fbe0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbe0b:{NFSU2_TR(0x6fbe0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fbe0c:L6fbe0c:{c.instructions+=7;NFSU2_TR(0x6fbe0c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbe0d:{NFSU2_TR(0x6fbe0d);
__builtin_memmove((R+20),(R+16),4);
}
B6fbe0f:{NFSU2_TR(0x6fbe0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fbe12:{NFSU2_TR(0x6fbe12);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6fbe15:{NFSU2_TR(0x6fbe15);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x81457cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6fbe1c:{NFSU2_TR(0x6fbe1c);
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
B6fbe1e:{NFSU2_TR(0x6fbe1e);
if(r1(R+518)){{goto L6fbe2a;}}
}
B6fbe20:L6fbe20:{c.instructions+=3;NFSU2_TR(0x6fbe20);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbe23:{NFSU2_TR(0x6fbe23);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbe26:{NFSU2_TR(0x6fbe26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbe28ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fbe28:L6fbe28:{c.instructions+=2;NFSU2_TR(0x6fbe28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fbe29:{NFSU2_TR(0x6fbe29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fbe2a:L6fbe2a:{c.instructions+=2;NFSU2_TR(0x6fbe2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbe2b:{NFSU2_TR(0x6fbe2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fbe2c:L6fbe2c:{c.instructions+=4;NFSU2_TR(0x6fbe2c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbe2d:{NFSU2_TR(0x6fbe2d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6fbe2f:{NFSU2_TR(0x6fbe2f);
u8 U[5];
__builtin_memmove((U+3),gp(0x8ad918),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6fbe35:{NFSU2_TR(0x6fbe35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fbe9c;}}
}
B6fbe37:L6fbe37:{c.instructions+=2;NFSU2_TR(0x6fbe37);
s1(0x8ad918,u8(0x1ull));
}
B6fbe3e:{NFSU2_TR(0x6fbe3e);
w4(R+0,u32(0x814580ull));
}
B6fbe43:L6fbe43:{c.instructions+=4;NFSU2_TR(0x6fbe43);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B6fbe45:{NFSU2_TR(0x6fbe45);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6fbe48:{NFSU2_TR(0x6fbe48);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8145e0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8145e0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6fbe4d:{NFSU2_TR(0x6fbe4d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fbe43u);}goto L6fbe43;}}
}
B6fbe4f:L6fbe4f:{c.instructions+=1;NFSU2_TR(0x6fbe4f);
w4(R+0,u32(0x81437cull));
}
B6fbe54:L6fbe54:{c.instructions+=4;NFSU2_TR(0x6fbe54);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B6fbe56:{NFSU2_TR(0x6fbe56);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6fbe59:{NFSU2_TR(0x6fbe59);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x81457cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x81457cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6fbe5e:{NFSU2_TR(0x6fbe5e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fbe54u);}goto L6fbe54;}}
}
B6fbe60:L6fbe60:{c.instructions+=1;NFSU2_TR(0x6fbe60);
w4(R+0,u32(0x8145c4ull));
}
B6fbe65:L6fbe65:{c.instructions+=5;NFSU2_TR(0x6fbe65);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fbe68:{NFSU2_TR(0x6fbe68);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fbe6a:{NFSU2_TR(0x6fbe6a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6fbe6d:{NFSU2_TR(0x6fbe6d);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8145dcull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8145dcull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6fbe72:{NFSU2_TR(0x6fbe72);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fbe65u);}goto L6fbe65;}}
}
B6fbe74:L6fbe74:{c.instructions+=1;NFSU2_TR(0x6fbe74);
w4(R+0,u32(0x81447dull));
}
B6fbe79:L6fbe79:{c.instructions+=5;NFSU2_TR(0x6fbe79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffbull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fbe7c:{NFSU2_TR(0x6fbe7c);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B6fbe7e:{NFSU2_TR(0x6fbe7e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6fbe81:{NFSU2_TR(0x6fbe81);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x81457dull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x81457dull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6fbe86:{NFSU2_TR(0x6fbe86);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fbe79u);}goto L6fbe79;}}
}
B6fbe88:L6fbe88:{c.instructions+=3;NFSU2_TR(0x6fbe88);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbe8a:{NFSU2_TR(0x6fbe8a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbe8c:{NFSU2_TR(0x6fbe8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbe91ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fbd9eu);}goto L6fbd9e;}
}
B6fbe91:L6fbe91:{c.instructions+=3;NFSU2_TR(0x6fbe91);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbe93:{NFSU2_TR(0x6fbe93);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbe94:{NFSU2_TR(0x6fbe94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbe99ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fbd0cu);}goto L6fbd0c;}
}
B6fbe99:L6fbe99:{c.instructions+=1;NFSU2_TR(0x6fbe99);
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
B6fbe9c:L6fbe9c:{c.instructions+=2;NFSU2_TR(0x6fbe9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fbe9d:{NFSU2_TR(0x6fbe9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fbe9e:L6fbe9e:{c.instructions+=5;NFSU2_TR(0x6fbe9e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbe9f:{NFSU2_TR(0x6fbe9f);
__builtin_memmove((R+20),(R+16),4);
}
B6fbea1:{NFSU2_TR(0x6fbea1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbea4:{NFSU2_TR(0x6fbea4);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbea9:{NFSU2_TR(0x6fbea9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbeaeull));
TAIL_STATIC(0x75f3c7u,75f);
}
B6fbeae:L6fbeae:{c.instructions+=4;NFSU2_TR(0x6fbeae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fbeaf:{NFSU2_TR(0x6fbeaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fbeb0:{NFSU2_TR(0x6fbeb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbeb1:{NFSU2_TR(0x6fbeb1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fbeb2:L6fbeb2:{c.instructions+=4;NFSU2_TR(0x6fbeb2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbeb3:{NFSU2_TR(0x6fbeb3);
__builtin_memmove((R+20),(R+16),4);
}
B6fbeb5:{NFSU2_TR(0x6fbeb5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbeb8:{NFSU2_TR(0x6fbeb8);
u8 U[4];
__builtin_memmove((U+0),gp(0x78316c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbebeull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fbebe:L6fbebe:{c.instructions+=2;NFSU2_TR(0x6fbebe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbebf:{NFSU2_TR(0x6fbebf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fbec0:L6fbec0:{c.instructions+=9;NFSU2_TR(0x6fbec0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbec1:{NFSU2_TR(0x6fbec1);
__builtin_memmove((R+20),(R+16),4);
}
B6fbec3:{NFSU2_TR(0x6fbec3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fbec5:{NFSU2_TR(0x6fbec5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbec6:{NFSU2_TR(0x6fbec6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbec7:{NFSU2_TR(0x6fbec7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbec8:{NFSU2_TR(0x6fbec8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbecb:{NFSU2_TR(0x6fbecb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbecc:{NFSU2_TR(0x6fbecc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbed1ull));
TAIL_STATIC(0x6fc19cu,6fc);
}
B6fbed1:L6fbed1:{c.instructions+=3;NFSU2_TR(0x6fbed1);
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
B6fbed4:{NFSU2_TR(0x6fbed4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbed5:{NFSU2_TR(0x6fbed5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fbed6:L6fbed6:{c.instructions+=6;NFSU2_TR(0x6fbed6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbed7:{NFSU2_TR(0x6fbed7);
__builtin_memmove((R+20),(R+16),4);
}
B6fbed9:{NFSU2_TR(0x6fbed9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbeda:{NFSU2_TR(0x6fbeda);
u8 U[4];
w4(U+0,u32(0x2ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbedf:{NFSU2_TR(0x6fbedf);
__builtin_memmove((R+24),(R+4),4);
}
B6fbee1:{NFSU2_TR(0x6fbee1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbee6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fbec0u);}goto L6fbec0;}
}
B6fbee6:L6fbee6:{c.instructions+=3;NFSU2_TR(0x6fbee6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fbee8:{NFSU2_TR(0x6fbee8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fbee9:{NFSU2_TR(0x6fbee9);
if(r1(R+518)){{goto L6fbefd;}}
}
B6fbeeb:L6fbeeb:{c.instructions+=5;NFSU2_TR(0x6fbeeb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbeee:{NFSU2_TR(0x6fbeee);
__builtin_memmove((R+4),(R+0),4);
}
B6fbef0:{NFSU2_TR(0x6fbef0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbef3:{NFSU2_TR(0x6fbef3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbef6:{NFSU2_TR(0x6fbef6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbefbull));
TAIL_STATIC(0x6fcd38u,6fc);
}
B6fbefb:L6fbefb:{c.instructions+=1;NFSU2_TR(0x6fbefb);
{goto L6fbeff;}
}
B6fbefd:L6fbefd:{c.instructions+=1;NFSU2_TR(0x6fbefd);
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
B6fbeff:L6fbeff:{c.instructions+=5;NFSU2_TR(0x6fbeff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6fbf01:{NFSU2_TR(0x6fbf01);
__builtin_memmove((R+0),(R+24),4);
}
B6fbf03:{NFSU2_TR(0x6fbf03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fbf04:{NFSU2_TR(0x6fbf04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbf05:{NFSU2_TR(0x6fbf05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fbf08:L6fbf08:{c.instructions+=5;NFSU2_TR(0x6fbf08);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbf09:{NFSU2_TR(0x6fbf09);
__builtin_memmove((R+20),(R+16),4);
}
B6fbf0b:{NFSU2_TR(0x6fbf0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fbf0d:{NFSU2_TR(0x6fbf0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbf0e:{NFSU2_TR(0x6fbf0e);
TAIL_STATIC(0x6fc4d1u,6fc);
}
B6fbf13:L6fbf13:{c.instructions+=5;NFSU2_TR(0x6fbf13);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbf14:{NFSU2_TR(0x6fbf14);
__builtin_memmove((R+20),(R+16),4);
}
B6fbf16:{NFSU2_TR(0x6fbf16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fbf18:{NFSU2_TR(0x6fbf18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbf19:{NFSU2_TR(0x6fbf19);
TAIL_STATIC(0x6fce82u,6fc);
}
B6fbf1e:L6fbf1e:{c.instructions+=5;NFSU2_TR(0x6fbf1e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbf1f:{NFSU2_TR(0x6fbf1f);
__builtin_memmove((R+20),(R+16),4);
}
B6fbf21:{NFSU2_TR(0x6fbf21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fbf24:{NFSU2_TR(0x6fbf24);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fbf26:{NFSU2_TR(0x6fbf26);
if(r1(R+518)){{goto L6fbf46;}}
}
B6fbf28:L6fbf28:{c.instructions+=2;NFSU2_TR(0x6fbf28);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6fbf2b:{NFSU2_TR(0x6fbf2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fbf46;}}
}
B6fbf2d:L6fbf2d:{c.instructions+=8;NFSU2_TR(0x6fbf2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fbf2f:{NFSU2_TR(0x6fbf2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbf30:{NFSU2_TR(0x6fbf30);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbf33:{NFSU2_TR(0x6fbf33);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbf36:{NFSU2_TR(0x6fbf36);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbf39:{NFSU2_TR(0x6fbf39);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbf3c:{NFSU2_TR(0x6fbf3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbf3f:{NFSU2_TR(0x6fbf3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbf44ull));
TAIL_STATIC(0x6fc5f0u,6fc);
}
B6fbf44:L6fbf44:{c.instructions+=1;NFSU2_TR(0x6fbf44);
{goto L6fbf5c;}
}
B6fbf46:L6fbf46:{c.instructions+=7;NFSU2_TR(0x6fbf46);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbf49:{NFSU2_TR(0x6fbf49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fbf4b:{NFSU2_TR(0x6fbf4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbf4e:{NFSU2_TR(0x6fbf4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbf51:{NFSU2_TR(0x6fbf51);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbf54:{NFSU2_TR(0x6fbf54);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbf57:{NFSU2_TR(0x6fbf57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbf5cull));
TAIL_STATIC(0x6fc532u,6fc);
}
B6fbf5c:L6fbf5c:{c.instructions+=2;NFSU2_TR(0x6fbf5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbf5d:{NFSU2_TR(0x6fbf5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fbf60:L6fbf60:{c.instructions+=5;NFSU2_TR(0x6fbf60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbf61:{NFSU2_TR(0x6fbf61);
__builtin_memmove((R+20),(R+16),4);
}
B6fbf63:{NFSU2_TR(0x6fbf63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fbf65:{NFSU2_TR(0x6fbf65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbf66:{NFSU2_TR(0x6fbf66);
TAIL_STATIC(0x6fc6d1u,6fc);
}
B6fbf6b:L6fbf6b:{c.instructions+=5;NFSU2_TR(0x6fbf6b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbf6c:{NFSU2_TR(0x6fbf6c);
__builtin_memmove((R+20),(R+16),4);
}
B6fbf6e:{NFSU2_TR(0x6fbf6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fbf70:{NFSU2_TR(0x6fbf70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbf71:{NFSU2_TR(0x6fbf71);
TAIL_STATIC(0x6fc73au,6fc);
}
B6fbf76:L6fbf76:{c.instructions+=5;NFSU2_TR(0x6fbf76);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbf77:{NFSU2_TR(0x6fbf77);
__builtin_memmove((R+20),(R+16),4);
}
B6fbf79:{NFSU2_TR(0x6fbf79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fbf7c:{NFSU2_TR(0x6fbf7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fbf7e:{NFSU2_TR(0x6fbf7e);
if(r1(R+518)){{goto L6fbf92;}}
}
B6fbf80:L6fbf80:{c.instructions+=2;NFSU2_TR(0x6fbf80);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6fbf83:{NFSU2_TR(0x6fbf83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fbf92;}}
}
B6fbf85:L6fbf85:{c.instructions+=4;NFSU2_TR(0x6fbf85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fbf87:{NFSU2_TR(0x6fbf87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbf88:{NFSU2_TR(0x6fbf88);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbf8b:{NFSU2_TR(0x6fbf8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbf90ull));
TAIL_STATIC(0x6fc83bu,6fc);
}
B6fbf90:L6fbf90:{c.instructions+=1;NFSU2_TR(0x6fbf90);
{goto L6fbf9c;}
}
B6fbf92:L6fbf92:{c.instructions+=3;NFSU2_TR(0x6fbf92);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fbf95:{NFSU2_TR(0x6fbf95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fbf97:{NFSU2_TR(0x6fbf97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fbf9cull));
TAIL_STATIC(0x6fc7b7u,6fc);
}
B6fbf9c:L6fbf9c:{c.instructions+=2;NFSU2_TR(0x6fbf9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbf9d:{NFSU2_TR(0x6fbf9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fbfa0:L6fbfa0:{c.instructions+=5;NFSU2_TR(0x6fbfa0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbfa1:{NFSU2_TR(0x6fbfa1);
__builtin_memmove((R+20),(R+16),4);
}
B6fbfa3:{NFSU2_TR(0x6fbfa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fbfa5:{NFSU2_TR(0x6fbfa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbfa6:{NFSU2_TR(0x6fbfa6);
TAIL_STATIC(0x6fdb58u,6fd);
}
B6fbfab:L6fbfab:{c.instructions+=5;NFSU2_TR(0x6fbfab);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbfac:{NFSU2_TR(0x6fbfac);
__builtin_memmove((R+20),(R+16),4);
}
B6fbfae:{NFSU2_TR(0x6fbfae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fbfb0:{NFSU2_TR(0x6fbfb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbfb1:{NFSU2_TR(0x6fbfb1);
TAIL_STATIC(0x6fc8f4u,6fc);
}
B6fbfb6:L6fbfb6:{c.instructions+=5;NFSU2_TR(0x6fbfb6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbfb7:{NFSU2_TR(0x6fbfb7);
__builtin_memmove((R+20),(R+16),4);
}
B6fbfb9:{NFSU2_TR(0x6fbfb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fbfbb:{NFSU2_TR(0x6fbfbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbfbc:{NFSU2_TR(0x6fbfbc);
TAIL_STATIC(0x6fcd33u,6fc);
}
B6fbfc1:L6fbfc1:{c.instructions+=5;NFSU2_TR(0x6fbfc1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbfc2:{NFSU2_TR(0x6fbfc2);
__builtin_memmove((R+20),(R+16),4);
}
B6fbfc4:{NFSU2_TR(0x6fbfc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fbfc6:{NFSU2_TR(0x6fbfc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbfc7:{NFSU2_TR(0x6fbfc7);
TAIL_STATIC(0x6fc8feu,6fc);
}
B6fbfcc:L6fbfcc:{c.instructions+=5;NFSU2_TR(0x6fbfcc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbfcd:{NFSU2_TR(0x6fbfcd);
__builtin_memmove((R+20),(R+16),4);
}
B6fbfcf:{NFSU2_TR(0x6fbfcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fbfd1:{NFSU2_TR(0x6fbfd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbfd2:{NFSU2_TR(0x6fbfd2);
TAIL_STATIC(0x6fdc24u,6fd);
}
B6fbfe6:L6fbfe6:{c.instructions+=5;NFSU2_TR(0x6fbfe6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbfe7:{NFSU2_TR(0x6fbfe7);
__builtin_memmove((R+20),(R+16),4);
}
B6fbfe9:{NFSU2_TR(0x6fbfe9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fbfeb:{NFSU2_TR(0x6fbfeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbfec:{NFSU2_TR(0x6fbfec);
TAIL_STATIC(0x6fc939u,6fc);
}
B6fbff1:L6fbff1:{c.instructions+=5;NFSU2_TR(0x6fbff1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbff2:{NFSU2_TR(0x6fbff2);
__builtin_memmove((R+20),(R+16),4);
}
B6fbff4:{NFSU2_TR(0x6fbff4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fbff6:{NFSU2_TR(0x6fbff6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fbff7:{NFSU2_TR(0x6fbff7);
TAIL_STATIC(0x6fdb8du,6fd);
}
B6fbffc:L6fbffc:{c.instructions+=3;NFSU2_TR(0x6fbffc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fbffd:{NFSU2_TR(0x6fbffd);
__builtin_memmove((R+20),(R+16),4);
}
B6fbfff:{NFSU2_TR(0x6fbfff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
TAIL_STATIC(0x6fc001u,6fc);
}
XIT:NFSU2_TR_EXIT(0x6fb,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
