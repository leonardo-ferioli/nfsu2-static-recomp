#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_515(u8* __restrict R,Cpu& c);
u32 body_56c(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58c(u8* __restrict R,Cpu& c);
u32 body_58e(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f8(u8* __restrict R,Cpu& c);
u32 body_5f9(u8* __restrict R,Cpu& c);
u32 body_5fc(u8* __restrict R,Cpu& c);
u32 body_5fd(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5fe,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5fe,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 page_5fe(Cpu& c){return body_5fe(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5fe(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5fe000:goto L5fe000;
case 0x5fe002:goto L5fe002;
case 0x5fe008:c.instructions+=2;goto B5fe008;
case 0x5fe00d:c.instructions+=1;goto B5fe00d;
case 0x5fe00f:goto L5fe00f;
case 0x5fe011:goto L5fe011;
case 0x5fe017:c.instructions+=1;goto B5fe017;
case 0x5fe019:goto L5fe019;
case 0x5fe01e:c.instructions+=13;goto B5fe01e;
case 0x5fe021:c.instructions+=12;goto B5fe021;
case 0x5fe023:c.instructions+=11;goto B5fe023;
case 0x5fe029:c.instructions+=10;goto B5fe029;
case 0x5fe02c:c.instructions+=9;goto B5fe02c;
case 0x5fe031:c.instructions+=8;goto B5fe031;
case 0x5fe034:c.instructions+=7;goto B5fe034;
case 0x5fe03a:c.instructions+=6;goto B5fe03a;
case 0x5fe03b:c.instructions+=5;goto B5fe03b;
case 0x5fe03d:c.instructions+=4;goto B5fe03d;
case 0x5fe03e:c.instructions+=3;goto B5fe03e;
case 0x5fe041:c.instructions+=2;goto B5fe041;
case 0x5fe042:c.instructions+=1;goto B5fe042;
case 0x5fe045:goto L5fe045;
case 0x5fe049:c.instructions+=3;goto B5fe049;
case 0x5fe04b:c.instructions+=2;goto B5fe04b;
case 0x5fe04e:c.instructions+=1;goto B5fe04e;
case 0x5fe050:goto L5fe050;
case 0x5fe052:c.instructions+=12;goto B5fe052;
case 0x5fe054:c.instructions+=11;goto B5fe054;
case 0x5fe057:c.instructions+=10;goto B5fe057;
case 0x5fe05a:c.instructions+=9;goto B5fe05a;
case 0x5fe05d:c.instructions+=8;goto B5fe05d;
case 0x5fe060:c.instructions+=7;goto B5fe060;
case 0x5fe063:c.instructions+=6;goto B5fe063;
case 0x5fe064:c.instructions+=5;goto B5fe064;
case 0x5fe067:c.instructions+=4;goto B5fe067;
case 0x5fe069:c.instructions+=3;goto B5fe069;
case 0x5fe06a:c.instructions+=2;goto B5fe06a;
case 0x5fe06b:c.instructions+=1;goto B5fe06b;
case 0x5fe06e:goto L5fe06e;
case 0x5fe070:c.instructions+=9;goto B5fe070;
case 0x5fe072:c.instructions+=8;goto B5fe072;
case 0x5fe075:c.instructions+=7;goto B5fe075;
case 0x5fe076:c.instructions+=6;goto B5fe076;
case 0x5fe078:c.instructions+=5;goto B5fe078;
case 0x5fe07b:c.instructions+=4;goto B5fe07b;
case 0x5fe07c:c.instructions+=3;goto B5fe07c;
case 0x5fe07f:c.instructions+=2;goto B5fe07f;
case 0x5fe080:c.instructions+=1;goto B5fe080;
case 0x5fe090:goto L5fe090;
case 0x5fe091:c.instructions+=6;goto B5fe091;
case 0x5fe093:c.instructions+=5;goto B5fe093;
case 0x5fe096:c.instructions+=4;goto B5fe096;
case 0x5fe097:c.instructions+=3;goto B5fe097;
case 0x5fe09b:c.instructions+=2;goto B5fe09b;
case 0x5fe09d:c.instructions+=1;goto B5fe09d;
case 0x5fe09f:goto L5fe09f;
case 0x5fe0a5:c.instructions+=2;goto B5fe0a5;
case 0x5fe0a7:c.instructions+=1;goto B5fe0a7;
case 0x5fe0a9:goto L5fe0a9;
case 0x5fe0af:c.instructions+=2;goto B5fe0af;
case 0x5fe0b1:c.instructions+=1;goto B5fe0b1;
case 0x5fe0b3:goto L5fe0b3;
case 0x5fe0b9:c.instructions+=2;goto B5fe0b9;
case 0x5fe0bb:c.instructions+=1;goto B5fe0bb;
case 0x5fe0bd:goto L5fe0bd;
case 0x5fe0c3:c.instructions+=2;goto B5fe0c3;
case 0x5fe0c5:c.instructions+=1;goto B5fe0c5;
case 0x5fe0c7:goto L5fe0c7;
case 0x5fe0cd:c.instructions+=2;goto B5fe0cd;
case 0x5fe0cf:c.instructions+=1;goto B5fe0cf;
case 0x5fe0d1:goto L5fe0d1;
case 0x5fe0d3:c.instructions+=4;goto B5fe0d3;
case 0x5fe0d5:c.instructions+=3;goto B5fe0d5;
case 0x5fe0d6:c.instructions+=2;goto B5fe0d6;
case 0x5fe0d8:c.instructions+=1;goto B5fe0d8;
case 0x5fe0dd:goto L5fe0dd;
case 0x5fe0e3:c.instructions+=1;goto B5fe0e3;
case 0x5fe0e8:goto L5fe0e8;
case 0x5fe0eb:goto L5fe0eb;
case 0x5fe0ec:c.instructions+=2;goto B5fe0ec;
case 0x5fe0ed:c.instructions+=1;goto B5fe0ed;
case 0x5fe0f0:goto L5fe0f0;
case 0x5fe0f5:c.instructions+=4;goto B5fe0f5;
case 0x5fe0f6:c.instructions+=3;goto B5fe0f6;
case 0x5fe0f8:c.instructions+=2;goto B5fe0f8;
case 0x5fe0fa:c.instructions+=1;goto B5fe0fa;
case 0x5fe0fc:goto L5fe0fc;
case 0x5fe101:c.instructions+=2;goto B5fe101;
case 0x5fe103:c.instructions+=1;goto B5fe103;
case 0x5fe105:goto L5fe105;
case 0x5fe109:c.instructions+=3;goto B5fe109;
case 0x5fe10a:c.instructions+=2;goto B5fe10a;
case 0x5fe10c:c.instructions+=1;goto B5fe10c;
case 0x5fe111:goto L5fe111;
case 0x5fe113:c.instructions+=1;goto B5fe113;
case 0x5fe115:goto L5fe115;
case 0x5fe118:c.instructions+=2;goto B5fe118;
case 0x5fe119:c.instructions+=1;goto B5fe119;
case 0x5fe11a:goto L5fe11a;
case 0x5fe11c:c.instructions+=2;goto B5fe11c;
case 0x5fe11d:c.instructions+=1;goto B5fe11d;
case 0x5fe120:goto L5fe120;
case 0x5fe125:c.instructions+=6;goto B5fe125;
case 0x5fe126:c.instructions+=5;goto B5fe126;
case 0x5fe127:c.instructions+=4;goto B5fe127;
case 0x5fe129:c.instructions+=3;goto B5fe129;
case 0x5fe12b:c.instructions+=2;goto B5fe12b;
case 0x5fe12d:c.instructions+=1;goto B5fe12d;
case 0x5fe12f:goto L5fe12f;
case 0x5fe135:c.instructions+=2;goto B5fe135;
case 0x5fe137:c.instructions+=1;goto B5fe137;
case 0x5fe139:goto L5fe139;
case 0x5fe13d:c.instructions+=2;goto B5fe13d;
case 0x5fe13e:c.instructions+=1;goto B5fe13e;
case 0x5fe143:goto L5fe143;
case 0x5fe145:c.instructions+=1;goto B5fe145;
case 0x5fe147:goto L5fe147;
case 0x5fe14a:goto L5fe14a;
case 0x5fe14c:c.instructions+=3;goto B5fe14c;
case 0x5fe14d:c.instructions+=2;goto B5fe14d;
case 0x5fe150:c.instructions+=1;goto B5fe150;
case 0x5fe155:goto L5fe155;
case 0x5fe156:c.instructions+=2;goto B5fe156;
case 0x5fe157:c.instructions+=1;goto B5fe157;
case 0x5fe160:goto L5fe160;
case 0x5fe163:c.instructions+=6;goto B5fe163;
case 0x5fe164:c.instructions+=5;goto B5fe164;
case 0x5fe165:c.instructions+=4;goto B5fe165;
case 0x5fe16b:c.instructions+=3;goto B5fe16b;
case 0x5fe16d:c.instructions+=2;goto B5fe16d;
case 0x5fe16f:c.instructions+=1;goto B5fe16f;
case 0x5fe171:goto L5fe171;
case 0x5fe172:c.instructions+=4;goto B5fe172;
case 0x5fe174:c.instructions+=3;goto B5fe174;
case 0x5fe175:c.instructions+=2;goto B5fe175;
case 0x5fe178:c.instructions+=1;goto B5fe178;
case 0x5fe179:goto L5fe179;
case 0x5fe17b:c.instructions+=2;goto B5fe17b;
case 0x5fe183:c.instructions+=1;goto B5fe183;
case 0x5fe188:goto L5fe188;
case 0x5fe18a:c.instructions+=1;goto B5fe18a;
case 0x5fe18c:goto L5fe18c;
case 0x5fe192:c.instructions+=3;goto B5fe192;
case 0x5fe194:c.instructions+=2;goto B5fe194;
case 0x5fe196:c.instructions+=1;goto B5fe196;
case 0x5fe198:goto L5fe198;
case 0x5fe19c:c.instructions+=2;goto B5fe19c;
case 0x5fe19d:c.instructions+=1;goto B5fe19d;
case 0x5fe1a2:goto L5fe1a2;
case 0x5fe1a4:c.instructions+=1;goto B5fe1a4;
case 0x5fe1a6:goto L5fe1a6;
case 0x5fe1a9:goto L5fe1a9;
case 0x5fe1af:c.instructions+=1;goto B5fe1af;
case 0x5fe1b1:goto L5fe1b1;
case 0x5fe1b7:c.instructions+=3;goto B5fe1b7;
case 0x5fe1ba:c.instructions+=2;goto B5fe1ba;
case 0x5fe1be:c.instructions+=1;goto B5fe1be;
case 0x5fe1c2:goto L5fe1c2;
case 0x5fe1c8:c.instructions+=5;goto B5fe1c8;
case 0x5fe1cd:c.instructions+=4;goto B5fe1cd;
case 0x5fe1d3:c.instructions+=3;goto B5fe1d3;
case 0x5fe1d9:c.instructions+=2;goto B5fe1d9;
case 0x5fe1dd:c.instructions+=1;goto B5fe1dd;
case 0x5fe1e1:goto L5fe1e1;
case 0x5fe1e3:c.instructions+=4;goto B5fe1e3;
case 0x5fe1e9:c.instructions+=3;goto B5fe1e9;
case 0x5fe1eb:c.instructions+=2;goto B5fe1eb;
case 0x5fe1ee:c.instructions+=1;goto B5fe1ee;
case 0x5fe1f0:goto L5fe1f0;
case 0x5fe1f4:c.instructions+=4;goto B5fe1f4;
case 0x5fe1fa:c.instructions+=3;goto B5fe1fa;
case 0x5fe1fc:c.instructions+=2;goto B5fe1fc;
case 0x5fe1ff:c.instructions+=1;goto B5fe1ff;
case 0x5fe201:goto L5fe201;
case 0x5fe204:c.instructions+=7;goto B5fe204;
case 0x5fe208:c.instructions+=6;goto B5fe208;
case 0x5fe20c:c.instructions+=5;goto B5fe20c;
case 0x5fe210:c.instructions+=4;goto B5fe210;
case 0x5fe212:c.instructions+=3;goto B5fe212;
case 0x5fe218:c.instructions+=2;goto B5fe218;
case 0x5fe21a:c.instructions+=1;goto B5fe21a;
case 0x5fe21c:goto L5fe21c;
case 0x5fe220:c.instructions+=1;goto B5fe220;
case 0x5fe222:goto L5fe222;
case 0x5fe225:c.instructions+=3;goto B5fe225;
case 0x5fe228:c.instructions+=2;goto B5fe228;
case 0x5fe22e:c.instructions+=1;goto B5fe22e;
case 0x5fe230:goto L5fe230;
case 0x5fe236:c.instructions+=4;goto B5fe236;
case 0x5fe23a:c.instructions+=3;goto B5fe23a;
case 0x5fe23c:c.instructions+=2;goto B5fe23c;
case 0x5fe23f:c.instructions+=1;goto B5fe23f;
case 0x5fe241:goto L5fe241;
case 0x5fe242:c.instructions+=5;goto B5fe242;
case 0x5fe244:c.instructions+=4;goto B5fe244;
case 0x5fe24a:c.instructions+=3;goto B5fe24a;
case 0x5fe24b:c.instructions+=2;goto B5fe24b;
case 0x5fe24e:c.instructions+=1;goto B5fe24e;
case 0x5fe253:goto L5fe253;
case 0x5fe257:c.instructions+=2;goto B5fe257;
case 0x5fe25d:c.instructions+=1;goto B5fe25d;
case 0x5fe261:goto L5fe261;
case 0x5fe267:c.instructions+=4;goto B5fe267;
case 0x5fe26b:c.instructions+=3;goto B5fe26b;
case 0x5fe26d:c.instructions+=2;goto B5fe26d;
case 0x5fe270:c.instructions+=1;goto B5fe270;
case 0x5fe272:goto L5fe272;
case 0x5fe274:c.instructions+=1;goto B5fe274;
case 0x5fe27a:goto L5fe27a;
case 0x5fe27b:c.instructions+=3;goto B5fe27b;
case 0x5fe27c:c.instructions+=2;goto B5fe27c;
case 0x5fe27f:c.instructions+=1;goto B5fe27f;
case 0x5fe290:goto L5fe290;
case 0x5fe295:goto L5fe295;
case 0x5fe29b:c.instructions+=6;goto B5fe29b;
case 0x5fe29e:c.instructions+=5;goto B5fe29e;
case 0x5fe2a0:c.instructions+=4;goto B5fe2a0;
case 0x5fe2a2:c.instructions+=3;goto B5fe2a2;
case 0x5fe2a5:c.instructions+=2;goto B5fe2a5;
case 0x5fe2a7:c.instructions+=1;goto B5fe2a7;
case 0x5fe2b0:goto L5fe2b0;
case 0x5fe2b1:c.instructions+=2;goto B5fe2b1;
case 0x5fe2b3:c.instructions+=1;goto B5fe2b3;
case 0x5fe2b8:goto L5fe2b8;
case 0x5fe2ba:c.instructions+=1;goto B5fe2ba;
case 0x5fe2bc:goto L5fe2bc;
case 0x5fe2c1:goto L5fe2c1;
case 0x5fe2c5:c.instructions+=3;goto B5fe2c5;
case 0x5fe2c8:c.instructions+=2;goto B5fe2c8;
case 0x5fe2ca:c.instructions+=1;goto B5fe2ca;
case 0x5fe2cc:goto L5fe2cc;
case 0x5fe2cf:c.instructions+=1;goto B5fe2cf;
case 0x5fe2d1:goto L5fe2d1;
case 0x5fe2d7:goto L5fe2d7;
case 0x5fe2da:c.instructions+=2;goto B5fe2da;
case 0x5fe2dc:c.instructions+=1;goto B5fe2dc;
case 0x5fe2de:goto L5fe2de;
case 0x5fe2e1:c.instructions+=1;goto B5fe2e1;
case 0x5fe2e3:goto L5fe2e3;
case 0x5fe2e9:goto L5fe2e9;
case 0x5fe2ec:c.instructions+=2;goto B5fe2ec;
case 0x5fe2ee:c.instructions+=1;goto B5fe2ee;
case 0x5fe2f0:goto L5fe2f0;
case 0x5fe2f3:c.instructions+=1;goto B5fe2f3;
case 0x5fe2f5:goto L5fe2f5;
case 0x5fe2fb:goto L5fe2fb;
case 0x5fe2fe:c.instructions+=2;goto B5fe2fe;
case 0x5fe300:c.instructions+=1;goto B5fe300;
case 0x5fe302:goto L5fe302;
case 0x5fe305:c.instructions+=1;goto B5fe305;
case 0x5fe307:goto L5fe307;
case 0x5fe30d:goto L5fe30d;
case 0x5fe310:c.instructions+=2;goto B5fe310;
case 0x5fe312:c.instructions+=1;goto B5fe312;
case 0x5fe314:goto L5fe314;
case 0x5fe317:c.instructions+=1;goto B5fe317;
case 0x5fe319:goto L5fe319;
case 0x5fe31f:goto L5fe31f;
case 0x5fe322:c.instructions+=2;goto B5fe322;
case 0x5fe324:c.instructions+=1;goto B5fe324;
case 0x5fe326:goto L5fe326;
case 0x5fe329:c.instructions+=1;goto B5fe329;
case 0x5fe32b:goto L5fe32b;
case 0x5fe331:goto L5fe331;
case 0x5fe333:c.instructions+=2;goto B5fe333;
case 0x5fe336:c.instructions+=1;goto B5fe336;
case 0x5fe338:goto L5fe338;
case 0x5fe33e:c.instructions+=2;goto B5fe33e;
case 0x5fe340:c.instructions+=1;goto B5fe340;
case 0x5fe342:goto L5fe342;
case 0x5fe346:c.instructions+=2;goto B5fe346;
case 0x5fe348:c.instructions+=1;goto B5fe348;
case 0x5fe34a:goto L5fe34a;
case 0x5fe34c:c.instructions+=2;goto B5fe34c;
case 0x5fe352:c.instructions+=1;goto B5fe352;
case 0x5fe357:goto L5fe357;
case 0x5fe358:c.instructions+=1;goto B5fe358;
case 0x5fe35b:goto L5fe35b;
case 0x5fe35d:c.instructions+=1;goto B5fe35d;
case 0x5fe35f:goto L5fe35f;
case 0x5fe365:goto L5fe365;
case 0x5fe367:c.instructions+=1;goto B5fe367;
case 0x5fe36c:goto L5fe36c;
case 0x5fe36d:c.instructions+=1;goto B5fe36d;
case 0x5fe370:goto L5fe370;
case 0x5fe375:goto L5fe375;
case 0x5fe377:c.instructions+=3;goto B5fe377;
case 0x5fe379:c.instructions+=2;goto B5fe379;
case 0x5fe37a:c.instructions+=1;goto B5fe37a;
case 0x5fe380:goto L5fe380;
case 0x5fe381:c.instructions+=10;goto B5fe381;
case 0x5fe382:c.instructions+=9;goto B5fe382;
case 0x5fe383:c.instructions+=8;goto B5fe383;
case 0x5fe384:c.instructions+=7;goto B5fe384;
case 0x5fe385:c.instructions+=6;goto B5fe385;
case 0x5fe387:c.instructions+=5;goto B5fe387;
case 0x5fe391:c.instructions+=4;goto B5fe391;
case 0x5fe394:c.instructions+=3;goto B5fe394;
case 0x5fe399:c.instructions+=2;goto B5fe399;
case 0x5fe39b:c.instructions+=1;goto B5fe39b;
case 0x5fe3a0:goto L5fe3a0;
case 0x5fe3a2:c.instructions+=2;goto B5fe3a2;
case 0x5fe3a4:c.instructions+=1;goto B5fe3a4;
case 0x5fe3a6:goto L5fe3a6;
case 0x5fe3a9:c.instructions+=1;goto B5fe3a9;
case 0x5fe3ab:goto L5fe3ab;
case 0x5fe3ae:c.instructions+=1;goto B5fe3ae;
case 0x5fe3b0:goto L5fe3b0;
case 0x5fe3b4:c.instructions+=3;goto B5fe3b4;
case 0x5fe3b5:c.instructions+=2;goto B5fe3b5;
case 0x5fe3ba:c.instructions+=1;goto B5fe3ba;
case 0x5fe3bf:goto L5fe3bf;
case 0x5fe3c1:c.instructions+=2;goto B5fe3c1;
case 0x5fe3c3:c.instructions+=1;goto B5fe3c3;
case 0x5fe3c5:goto L5fe3c5;
case 0x5fe3c6:c.instructions+=1;goto B5fe3c6;
case 0x5fe3cb:goto L5fe3cb;
case 0x5fe3ce:goto L5fe3ce;
case 0x5fe3d0:c.instructions+=2;goto B5fe3d0;
case 0x5fe3d3:c.instructions+=1;goto B5fe3d3;
case 0x5fe3d5:goto L5fe3d5;
case 0x5fe3d6:c.instructions+=2;goto B5fe3d6;
case 0x5fe3d9:c.instructions+=1;goto B5fe3d9;
case 0x5fe3de:goto L5fe3de;
case 0x5fe3e1:c.instructions+=2;goto B5fe3e1;
case 0x5fe3e2:c.instructions+=1;goto B5fe3e2;
case 0x5fe3e4:goto L5fe3e4;
case 0x5fe3eb:c.instructions+=1;goto B5fe3eb;
case 0x5fe3ed:goto L5fe3ed;
case 0x5fe3f3:c.instructions+=1;goto B5fe3f3;
case 0x5fe3f8:goto L5fe3f8;
case 0x5fe3fb:c.instructions+=4;goto B5fe3fb;
case 0x5fe3fd:c.instructions+=3;goto B5fe3fd;
case 0x5fe400:c.instructions+=2;goto B5fe400;
case 0x5fe401:c.instructions+=1;goto B5fe401;
case 0x5fe403:goto L5fe403;
case 0x5fe409:c.instructions+=5;goto B5fe409;
case 0x5fe40f:c.instructions+=4;goto B5fe40f;
case 0x5fe415:c.instructions+=3;goto B5fe415;
case 0x5fe41b:c.instructions+=2;goto B5fe41b;
case 0x5fe41f:c.instructions+=1;goto B5fe41f;
case 0x5fe421:goto L5fe421;
case 0x5fe425:c.instructions+=3;goto B5fe425;
case 0x5fe426:c.instructions+=2;goto B5fe426;
case 0x5fe42b:c.instructions+=1;goto B5fe42b;
case 0x5fe430:goto L5fe430;
case 0x5fe431:c.instructions+=1;goto B5fe431;
case 0x5fe436:goto L5fe436;
case 0x5fe439:c.instructions+=3;goto B5fe439;
case 0x5fe43b:c.instructions+=2;goto B5fe43b;
case 0x5fe440:c.instructions+=1;goto B5fe440;
case 0x5fe442:goto L5fe442;
case 0x5fe443:c.instructions+=2;goto B5fe443;
case 0x5fe446:c.instructions+=1;goto B5fe446;
case 0x5fe448:goto L5fe448;
case 0x5fe449:c.instructions+=5;goto B5fe449;
case 0x5fe44a:c.instructions+=4;goto B5fe44a;
case 0x5fe44b:c.instructions+=3;goto B5fe44b;
case 0x5fe44c:c.instructions+=2;goto B5fe44c;
case 0x5fe44d:c.instructions+=1;goto B5fe44d;
case 0x5fe450:goto L5fe450;
case 0x5fe451:c.instructions+=3;goto B5fe451;
case 0x5fe452:c.instructions+=2;goto B5fe452;
case 0x5fe454:c.instructions+=1;goto B5fe454;
case 0x5fe457:goto L5fe457;
case 0x5fe459:c.instructions+=2;goto B5fe459;
case 0x5fe45b:c.instructions+=1;goto B5fe45b;
case 0x5fe45d:goto L5fe45d;
case 0x5fe460:c.instructions+=2;goto B5fe460;
case 0x5fe462:c.instructions+=1;goto B5fe462;
case 0x5fe464:goto L5fe464;
case 0x5fe465:c.instructions+=3;goto B5fe465;
case 0x5fe468:c.instructions+=2;goto B5fe468;
case 0x5fe46b:c.instructions+=1;goto B5fe46b;
case 0x5fe46d:goto L5fe46d;
case 0x5fe46f:goto L5fe46f;
case 0x5fe472:c.instructions+=3;goto B5fe472;
case 0x5fe473:c.instructions+=2;goto B5fe473;
case 0x5fe474:c.instructions+=1;goto B5fe474;
case 0x5fe476:goto L5fe476;
case 0x5fe47c:goto L5fe47c;
case 0x5fe481:c.instructions+=2;goto B5fe481;
case 0x5fe486:c.instructions+=1;goto B5fe486;
case 0x5fe488:goto L5fe488;
case 0x5fe48b:c.instructions+=1;goto B5fe48b;
case 0x5fe48d:goto L5fe48d;
case 0x5fe494:c.instructions+=1;goto B5fe494;
case 0x5fe496:goto L5fe496;
case 0x5fe49b:goto L5fe49b;
case 0x5fe49d:c.instructions+=1;goto B5fe49d;
case 0x5fe49f:goto L5fe49f;
case 0x5fe4a6:c.instructions+=3;goto B5fe4a6;
case 0x5fe4ab:c.instructions+=2;goto B5fe4ab;
case 0x5fe4b0:c.instructions+=1;goto B5fe4b0;
case 0x5fe4b6:goto L5fe4b6;
case 0x5fe4b7:goto L5fe4b7;
case 0x5fe4bb:c.instructions+=1;goto B5fe4bb;
case 0x5fe4c0:goto L5fe4c0;
case 0x5fe4c3:c.instructions+=1;goto B5fe4c3;
case 0x5fe4c5:goto L5fe4c5;
case 0x5fe4ca:goto L5fe4ca;
case 0x5fe4cc:c.instructions+=1;goto B5fe4cc;
case 0x5fe4ce:goto L5fe4ce;
case 0x5fe4d1:c.instructions+=2;goto B5fe4d1;
case 0x5fe4d3:c.instructions+=1;goto B5fe4d3;
case 0x5fe4d5:goto L5fe4d5;
case 0x5fe4d7:c.instructions+=2;goto B5fe4d7;
case 0x5fe4da:c.instructions+=1;goto B5fe4da;
case 0x5fe4dc:goto L5fe4dc;
case 0x5fe4df:c.instructions+=1;goto B5fe4df;
case 0x5fe4e1:goto L5fe4e1;
case 0x5fe4e3:c.instructions+=1;goto B5fe4e3;
case 0x5fe4e5:goto L5fe4e5;
case 0x5fe4e8:c.instructions+=1;goto B5fe4e8;
case 0x5fe4ea:goto L5fe4ea;
case 0x5fe4f1:goto L5fe4f1;
case 0x5fe4f7:c.instructions+=1;goto B5fe4f7;
case 0x5fe500:goto L5fe500;
case 0x5fe505:c.instructions+=2;goto B5fe505;
case 0x5fe507:c.instructions+=1;goto B5fe507;
case 0x5fe509:goto L5fe509;
case 0x5fe50e:c.instructions+=2;goto B5fe50e;
case 0x5fe510:c.instructions+=1;goto B5fe510;
case 0x5fe512:goto L5fe512;
case 0x5fe517:goto L5fe517;
case 0x5fe519:c.instructions+=1;goto B5fe519;
case 0x5fe51b:goto L5fe51b;
case 0x5fe522:c.instructions+=1;goto B5fe522;
case 0x5fe524:goto L5fe524;
case 0x5fe529:c.instructions+=1;goto B5fe529;
case 0x5fe52a:goto L5fe52a;
case 0x5fe52c:c.instructions+=1;goto B5fe52c;
case 0x5fe530:goto L5fe530;
case 0x5fe535:c.instructions+=2;goto B5fe535;
case 0x5fe537:c.instructions+=1;goto B5fe537;
case 0x5fe539:goto L5fe539;
case 0x5fe53e:goto L5fe53e;
case 0x5fe540:c.instructions+=1;goto B5fe540;
case 0x5fe542:goto L5fe542;
case 0x5fe545:c.instructions+=3;goto B5fe545;
case 0x5fe547:c.instructions+=2;goto B5fe547;
case 0x5fe54a:c.instructions+=1;goto B5fe54a;
case 0x5fe54c:goto L5fe54c;
case 0x5fe54f:c.instructions+=1;goto B5fe54f;
case 0x5fe551:goto L5fe551;
case 0x5fe553:c.instructions+=1;goto B5fe553;
case 0x5fe555:goto L5fe555;
case 0x5fe558:c.instructions+=1;goto B5fe558;
case 0x5fe55a:goto L5fe55a;
case 0x5fe561:goto L5fe561;
case 0x5fe567:c.instructions+=1;goto B5fe567;
case 0x5fe570:goto L5fe570;
case 0x5fe571:c.instructions+=7;goto B5fe571;
case 0x5fe572:c.instructions+=6;goto B5fe572;
case 0x5fe576:c.instructions+=5;goto B5fe576;
case 0x5fe577:c.instructions+=4;goto B5fe577;
case 0x5fe579:c.instructions+=3;goto B5fe579;
case 0x5fe57a:c.instructions+=2;goto B5fe57a;
case 0x5fe57f:c.instructions+=1;goto B5fe57f;
case 0x5fe584:goto L5fe584;
case 0x5fe586:c.instructions+=2;goto B5fe586;
case 0x5fe588:c.instructions+=1;goto B5fe588;
case 0x5fe58a:goto L5fe58a;
case 0x5fe58e:c.instructions+=6;goto B5fe58e;
case 0x5fe58f:c.instructions+=5;goto B5fe58f;
case 0x5fe593:c.instructions+=4;goto B5fe593;
case 0x5fe595:c.instructions+=3;goto B5fe595;
case 0x5fe596:c.instructions+=2;goto B5fe596;
case 0x5fe598:c.instructions+=1;goto B5fe598;
case 0x5fe59d:goto L5fe59d;
case 0x5fe5a1:c.instructions+=4;goto B5fe5a1;
case 0x5fe5a3:c.instructions+=3;goto B5fe5a3;
case 0x5fe5a4:c.instructions+=2;goto B5fe5a4;
case 0x5fe5a6:c.instructions+=1;goto B5fe5a6;
case 0x5fe5ab:goto L5fe5ab;
case 0x5fe5ad:c.instructions+=5;goto B5fe5ad;
case 0x5fe5ae:c.instructions+=4;goto B5fe5ae;
case 0x5fe5b1:c.instructions+=3;goto B5fe5b1;
case 0x5fe5b2:c.instructions+=2;goto B5fe5b2;
case 0x5fe5b4:c.instructions+=1;goto B5fe5b4;
case 0x5fe5b9:goto L5fe5b9;
case 0x5fe5bd:c.instructions+=2;goto B5fe5bd;
case 0x5fe5bf:c.instructions+=1;goto B5fe5bf;
case 0x5fe5c1:goto L5fe5c1;
case 0x5fe5c4:c.instructions+=3;goto B5fe5c4;
case 0x5fe5c5:c.instructions+=2;goto B5fe5c5;
case 0x5fe5c7:c.instructions+=1;goto B5fe5c7;
case 0x5fe5cc:goto L5fe5cc;
case 0x5fe5cd:goto L5fe5cd;
case 0x5fe5ce:c.instructions+=3;goto B5fe5ce;
case 0x5fe5cf:c.instructions+=2;goto B5fe5cf;
case 0x5fe5d0:c.instructions+=1;goto B5fe5d0;
case 0x5fe5e0:goto L5fe5e0;
case 0x5fe5e1:c.instructions+=3;goto B5fe5e1;
case 0x5fe5e2:c.instructions+=2;goto B5fe5e2;
case 0x5fe5e4:c.instructions+=1;goto B5fe5e4;
case 0x5fe5e9:goto L5fe5e9;
case 0x5fe5ed:c.instructions+=3;goto B5fe5ed;
case 0x5fe5f1:c.instructions+=2;goto B5fe5f1;
case 0x5fe5f3:c.instructions+=1;goto B5fe5f3;
case 0x5fe5f5:goto L5fe5f5;
case 0x5fe5f7:c.instructions+=2;goto B5fe5f7;
case 0x5fe5fc:c.instructions+=1;goto B5fe5fc;
case 0x5fe601:goto L5fe601;
case 0x5fe604:c.instructions+=2;goto B5fe604;
case 0x5fe606:c.instructions+=1;goto B5fe606;
case 0x5fe608:goto L5fe608;
case 0x5fe60c:c.instructions+=6;goto B5fe60c;
case 0x5fe610:c.instructions+=5;goto B5fe610;
case 0x5fe611:c.instructions+=4;goto B5fe611;
case 0x5fe612:c.instructions+=3;goto B5fe612;
case 0x5fe613:c.instructions+=2;goto B5fe613;
case 0x5fe615:c.instructions+=1;goto B5fe615;
case 0x5fe61a:goto L5fe61a;
case 0x5fe61c:goto L5fe61c;
case 0x5fe61e:goto L5fe61e;
case 0x5fe622:c.instructions+=2;goto B5fe622;
case 0x5fe625:c.instructions+=1;goto B5fe625;
case 0x5fe627:goto L5fe627;
case 0x5fe62d:goto L5fe62d;
case 0x5fe630:c.instructions+=5;goto B5fe630;
case 0x5fe632:c.instructions+=4;goto B5fe632;
case 0x5fe633:c.instructions+=3;goto B5fe633;
case 0x5fe636:c.instructions+=2;goto B5fe636;
case 0x5fe637:c.instructions+=1;goto B5fe637;
case 0x5fe63a:goto L5fe63a;
case 0x5fe63d:c.instructions+=2;goto B5fe63d;
case 0x5fe63f:c.instructions+=1;goto B5fe63f;
case 0x5fe641:goto L5fe641;
case 0x5fe645:c.instructions+=9;goto B5fe645;
case 0x5fe647:c.instructions+=8;goto B5fe647;
case 0x5fe64a:c.instructions+=7;goto B5fe64a;
case 0x5fe64c:c.instructions+=6;goto B5fe64c;
case 0x5fe64f:c.instructions+=5;goto B5fe64f;
case 0x5fe652:c.instructions+=4;goto B5fe652;
case 0x5fe655:c.instructions+=3;goto B5fe655;
case 0x5fe658:c.instructions+=2;goto B5fe658;
case 0x5fe65b:c.instructions+=1;goto B5fe65b;
case 0x5fe65e:goto L5fe65e;
case 0x5fe65f:c.instructions+=2;goto B5fe65f;
case 0x5fe660:c.instructions+=1;goto B5fe660;
case 0x5fe670:goto L5fe670;
case 0x5fe675:c.instructions+=3;goto B5fe675;
case 0x5fe678:c.instructions+=2;goto B5fe678;
case 0x5fe67b:c.instructions+=1;goto B5fe67b;
case 0x5fe681:goto L5fe681;
case 0x5fe684:c.instructions+=3;goto B5fe684;
case 0x5fe686:c.instructions+=2;goto B5fe686;
case 0x5fe68e:c.instructions+=1;goto B5fe68e;
case 0x5fe690:goto L5fe690;
case 0x5fe694:c.instructions+=1;goto B5fe694;
case 0x5fe69c:goto L5fe69c;
case 0x5fe69f:c.instructions+=3;goto B5fe69f;
case 0x5fe6a1:c.instructions+=2;goto B5fe6a1;
case 0x5fe6a5:c.instructions+=1;goto B5fe6a5;
case 0x5fe6a7:goto L5fe6a7;
case 0x5fe6ab:c.instructions+=2;goto B5fe6ab;
case 0x5fe6ac:c.instructions+=1;goto B5fe6ac;
case 0x5fe6b0:goto L5fe6b0;
case 0x5fe6b3:c.instructions+=2;goto B5fe6b3;
case 0x5fe6b5:c.instructions+=1;goto B5fe6b5;
case 0x5fe6b7:goto L5fe6b7;
case 0x5fe6bb:c.instructions+=2;goto B5fe6bb;
case 0x5fe6bc:c.instructions+=1;goto B5fe6bc;
case 0x5fe6c0:goto L5fe6c0;
case 0x5fe6c3:c.instructions+=2;goto B5fe6c3;
case 0x5fe6c5:c.instructions+=1;goto B5fe6c5;
case 0x5fe6c7:goto L5fe6c7;
case 0x5fe6cb:c.instructions+=2;goto B5fe6cb;
case 0x5fe6cc:c.instructions+=1;goto B5fe6cc;
case 0x5fe6d0:goto L5fe6d0;
case 0x5fe6d3:c.instructions+=2;goto B5fe6d3;
case 0x5fe6d5:c.instructions+=1;goto B5fe6d5;
case 0x5fe6d7:goto L5fe6d7;
case 0x5fe6db:c.instructions+=2;goto B5fe6db;
case 0x5fe6dc:c.instructions+=1;goto B5fe6dc;
case 0x5fe6e0:goto L5fe6e0;
case 0x5fe6e3:c.instructions+=2;goto B5fe6e3;
case 0x5fe6e5:c.instructions+=1;goto B5fe6e5;
case 0x5fe6e7:goto L5fe6e7;
case 0x5fe6eb:c.instructions+=2;goto B5fe6eb;
case 0x5fe6ec:c.instructions+=1;goto B5fe6ec;
case 0x5fe6f0:goto L5fe6f0;
case 0x5fe6f1:c.instructions+=6;goto B5fe6f1;
case 0x5fe6f2:c.instructions+=5;goto B5fe6f2;
case 0x5fe6f3:c.instructions+=4;goto B5fe6f3;
case 0x5fe6f4:c.instructions+=3;goto B5fe6f4;
case 0x5fe6f8:c.instructions+=2;goto B5fe6f8;
case 0x5fe6f9:c.instructions+=1;goto B5fe6f9;
case 0x5fe700:goto L5fe700;
case 0x5fe704:c.instructions+=5;goto B5fe704;
case 0x5fe706:c.instructions+=4;goto B5fe706;
case 0x5fe708:c.instructions+=3;goto B5fe708;
case 0x5fe70d:c.instructions+=2;goto B5fe70d;
case 0x5fe711:c.instructions+=1;goto B5fe711;
case 0x5fe717:goto L5fe717;
case 0x5fe720:goto L5fe720;
case 0x5fe724:c.instructions+=10;goto B5fe724;
case 0x5fe728:c.instructions+=9;goto B5fe728;
case 0x5fe72b:c.instructions+=8;goto B5fe72b;
case 0x5fe72d:c.instructions+=7;goto B5fe72d;
case 0x5fe72f:c.instructions+=6;goto B5fe72f;
case 0x5fe732:c.instructions+=5;goto B5fe732;
case 0x5fe735:c.instructions+=4;goto B5fe735;
case 0x5fe739:c.instructions+=3;goto B5fe739;
case 0x5fe73d:c.instructions+=2;goto B5fe73d;
case 0x5fe741:c.instructions+=1;goto B5fe741;
case 0x5fe743:goto L5fe743;
case 0x5fe748:c.instructions+=1;goto B5fe748;
case 0x5fe74a:goto L5fe74a;
case 0x5fe74d:c.instructions+=1;goto B5fe74d;
case 0x5fe74f:goto L5fe74f;
case 0x5fe754:goto L5fe754;
case 0x5fe758:goto L5fe758;
case 0x5fe75c:c.instructions+=3;goto B5fe75c;
case 0x5fe75f:c.instructions+=2;goto B5fe75f;
case 0x5fe762:c.instructions+=1;goto B5fe762;
case 0x5fe764:goto L5fe764;
case 0x5fe769:c.instructions+=1;goto B5fe769;
case 0x5fe76b:goto L5fe76b;
case 0x5fe76e:c.instructions+=1;goto B5fe76e;
case 0x5fe770:goto L5fe770;
case 0x5fe775:goto L5fe775;
case 0x5fe779:goto L5fe779;
case 0x5fe77b:c.instructions+=1;goto B5fe77b;
case 0x5fe781:goto L5fe781;
case 0x5fe786:c.instructions+=2;goto B5fe786;
case 0x5fe788:c.instructions+=1;goto B5fe788;
case 0x5fe78a:goto L5fe78a;
case 0x5fe78f:c.instructions+=2;goto B5fe78f;
case 0x5fe791:c.instructions+=1;goto B5fe791;
case 0x5fe793:goto L5fe793;
case 0x5fe798:c.instructions+=8;goto B5fe798;
case 0x5fe79f:c.instructions+=7;goto B5fe79f;
case 0x5fe7a3:c.instructions+=6;goto B5fe7a3;
case 0x5fe7a6:c.instructions+=5;goto B5fe7a6;
case 0x5fe7a8:c.instructions+=4;goto B5fe7a8;
case 0x5fe7aa:c.instructions+=3;goto B5fe7aa;
case 0x5fe7ac:c.instructions+=2;goto B5fe7ac;
case 0x5fe7af:c.instructions+=1;goto B5fe7af;
case 0x5fe7b1:goto L5fe7b1;
case 0x5fe7b3:c.instructions+=3;goto B5fe7b3;
case 0x5fe7b5:c.instructions+=2;goto B5fe7b5;
case 0x5fe7b7:c.instructions+=1;goto B5fe7b7;
case 0x5fe7b9:goto L5fe7b9;
case 0x5fe7bb:c.instructions+=1;goto B5fe7bb;
case 0x5fe7bd:goto L5fe7bd;
case 0x5fe7c0:c.instructions+=3;goto B5fe7c0;
case 0x5fe7c3:c.instructions+=2;goto B5fe7c3;
case 0x5fe7c5:c.instructions+=1;goto B5fe7c5;
case 0x5fe7c7:goto L5fe7c7;
case 0x5fe7c9:c.instructions+=4;goto B5fe7c9;
case 0x5fe7cb:c.instructions+=3;goto B5fe7cb;
case 0x5fe7ce:c.instructions+=2;goto B5fe7ce;
case 0x5fe7d1:c.instructions+=1;goto B5fe7d1;
case 0x5fe7d3:goto L5fe7d3;
case 0x5fe7d7:c.instructions+=6;goto B5fe7d7;
case 0x5fe7db:c.instructions+=5;goto B5fe7db;
case 0x5fe7dc:c.instructions+=4;goto B5fe7dc;
case 0x5fe7de:c.instructions+=3;goto B5fe7de;
case 0x5fe7e2:c.instructions+=2;goto B5fe7e2;
case 0x5fe7e6:c.instructions+=1;goto B5fe7e6;
case 0x5fe7e8:goto L5fe7e8;
case 0x5fe7ee:c.instructions+=4;goto B5fe7ee;
case 0x5fe7f4:c.instructions+=3;goto B5fe7f4;
case 0x5fe7f6:c.instructions+=2;goto B5fe7f6;
case 0x5fe7f9:c.instructions+=1;goto B5fe7f9;
case 0x5fe7fb:goto L5fe7fb;
case 0x5fe801:c.instructions+=1;goto B5fe801;
case 0x5fe807:goto L5fe807;
case 0x5fe809:c.instructions+=2;goto B5fe809;
case 0x5fe80c:c.instructions+=1;goto B5fe80c;
case 0x5fe80e:goto L5fe80e;
case 0x5fe813:c.instructions+=1;goto B5fe813;
case 0x5fe815:goto L5fe815;
case 0x5fe817:c.instructions+=1;goto B5fe817;
case 0x5fe819:goto L5fe819;
case 0x5fe81b:c.instructions+=1;goto B5fe81b;
case 0x5fe81d:goto L5fe81d;
case 0x5fe821:c.instructions+=1;goto B5fe821;
case 0x5fe823:goto L5fe823;
case 0x5fe825:goto L5fe825;
case 0x5fe829:c.instructions+=2;goto B5fe829;
case 0x5fe82d:c.instructions+=1;goto B5fe82d;
case 0x5fe832:goto L5fe832;
case 0x5fe836:c.instructions+=4;goto B5fe836;
case 0x5fe837:c.instructions+=3;goto B5fe837;
case 0x5fe839:c.instructions+=2;goto B5fe839;
case 0x5fe83d:c.instructions+=1;goto B5fe83d;
case 0x5fe843:goto L5fe843;
case 0x5fe847:c.instructions+=2;goto B5fe847;
case 0x5fe849:c.instructions+=1;goto B5fe849;
case 0x5fe84f:goto L5fe84f;
case 0x5fe853:c.instructions+=3;goto B5fe853;
case 0x5fe855:c.instructions+=2;goto B5fe855;
case 0x5fe857:c.instructions+=1;goto B5fe857;
case 0x5fe859:goto L5fe859;
case 0x5fe860:goto L5fe860;
case 0x5fe864:c.instructions+=6;goto B5fe864;
case 0x5fe867:c.instructions+=5;goto B5fe867;
case 0x5fe86a:c.instructions+=4;goto B5fe86a;
case 0x5fe86f:c.instructions+=3;goto B5fe86f;
case 0x5fe871:c.instructions+=2;goto B5fe871;
case 0x5fe879:c.instructions+=1;goto B5fe879;
case 0x5fe87b:goto L5fe87b;
case 0x5fe881:c.instructions+=2;goto B5fe881;
case 0x5fe883:c.instructions+=1;goto B5fe883;
case 0x5fe885:goto L5fe885;
case 0x5fe887:c.instructions+=1;goto B5fe887;
case 0x5fe88c:goto L5fe88c;
case 0x5fe88e:c.instructions+=1;goto B5fe88e;
case 0x5fe890:goto L5fe890;
case 0x5fe895:goto L5fe895;
case 0x5fe899:c.instructions+=1;goto B5fe899;
case 0x5fe89b:goto L5fe89b;
case 0x5fe89d:c.instructions+=2;goto B5fe89d;
case 0x5fe89f:c.instructions+=1;goto B5fe89f;
case 0x5fe8a1:goto L5fe8a1;
case 0x5fe8a3:goto L5fe8a3;
case 0x5fe8a5:c.instructions+=1;goto B5fe8a5;
case 0x5fe8a7:goto L5fe8a7;
case 0x5fe8aa:c.instructions+=1;goto B5fe8aa;
case 0x5fe8ae:goto L5fe8ae;
case 0x5fe8b2:c.instructions+=6;goto B5fe8b2;
case 0x5fe8b6:c.instructions+=5;goto B5fe8b6;
case 0x5fe8b8:c.instructions+=4;goto B5fe8b8;
case 0x5fe8bb:c.instructions+=3;goto B5fe8bb;
case 0x5fe8bd:c.instructions+=2;goto B5fe8bd;
case 0x5fe8bf:c.instructions+=1;goto B5fe8bf;
case 0x5fe8c1:goto L5fe8c1;
case 0x5fe8c2:c.instructions+=3;goto B5fe8c2;
case 0x5fe8c3:c.instructions+=2;goto B5fe8c3;
case 0x5fe8c4:c.instructions+=1;goto B5fe8c4;
case 0x5fe8c5:goto L5fe8c5;
case 0x5fe8c8:c.instructions+=1;goto B5fe8c8;
case 0x5fe8d0:goto L5fe8d0;
case 0x5fe8d6:c.instructions+=10;goto B5fe8d6;
case 0x5fe8db:c.instructions+=9;goto B5fe8db;
case 0x5fe8dc:c.instructions+=8;goto B5fe8dc;
case 0x5fe8dd:c.instructions+=7;goto B5fe8dd;
case 0x5fe8de:c.instructions+=6;goto B5fe8de;
case 0x5fe8df:c.instructions+=5;goto B5fe8df;
case 0x5fe8e1:c.instructions+=4;goto B5fe8e1;
case 0x5fe8e4:c.instructions+=3;goto B5fe8e4;
case 0x5fe8e6:c.instructions+=2;goto B5fe8e6;
case 0x5fe8ea:c.instructions+=1;goto B5fe8ea;
case 0x5fe8ec:goto L5fe8ec;
case 0x5fe8ee:c.instructions+=1;goto B5fe8ee;
case 0x5fe8f0:goto L5fe8f0;
case 0x5fe8f3:c.instructions+=1;goto B5fe8f3;
case 0x5fe8f5:goto L5fe8f5;
case 0x5fe8f7:c.instructions+=1;goto B5fe8f7;
case 0x5fe8f9:goto L5fe8f9;
case 0x5fe8fc:c.instructions+=1;goto B5fe8fc;
case 0x5fe8fe:goto L5fe8fe;
case 0x5fe900:c.instructions+=1;goto B5fe900;
case 0x5fe902:goto L5fe902;
case 0x5fe905:c.instructions+=1;goto B5fe905;
case 0x5fe907:goto L5fe907;
case 0x5fe909:c.instructions+=1;goto B5fe909;
case 0x5fe90b:goto L5fe90b;
case 0x5fe90e:c.instructions+=1;goto B5fe90e;
case 0x5fe910:goto L5fe910;
case 0x5fe912:c.instructions+=1;goto B5fe912;
case 0x5fe914:goto L5fe914;
case 0x5fe917:c.instructions+=1;goto B5fe917;
case 0x5fe919:goto L5fe919;
case 0x5fe91c:c.instructions+=1;goto B5fe91c;
case 0x5fe91e:goto L5fe91e;
case 0x5fe921:c.instructions+=1;goto B5fe921;
case 0x5fe923:goto L5fe923;
case 0x5fe925:c.instructions+=1;goto B5fe925;
case 0x5fe927:goto L5fe927;
case 0x5fe929:goto L5fe929;
case 0x5fe92d:c.instructions+=1;goto B5fe92d;
case 0x5fe932:goto L5fe932;
case 0x5fe934:c.instructions+=3;goto B5fe934;
case 0x5fe936:c.instructions+=2;goto B5fe936;
case 0x5fe93a:c.instructions+=1;goto B5fe93a;
case 0x5fe93f:goto L5fe93f;
case 0x5fe942:c.instructions+=4;goto B5fe942;
case 0x5fe945:c.instructions+=3;goto B5fe945;
case 0x5fe947:c.instructions+=2;goto B5fe947;
case 0x5fe949:c.instructions+=1;goto B5fe949;
case 0x5fe94b:goto L5fe94b;
case 0x5fe950:goto L5fe950;
case 0x5fe953:c.instructions+=2;goto B5fe953;
case 0x5fe955:c.instructions+=1;goto B5fe955;
case 0x5fe957:goto L5fe957;
case 0x5fe958:goto L5fe958;
case 0x5fe95b:c.instructions+=2;goto B5fe95b;
case 0x5fe95d:c.instructions+=1;goto B5fe95d;
case 0x5fe95f:goto L5fe95f;
case 0x5fe960:goto L5fe960;
case 0x5fe963:c.instructions+=2;goto B5fe963;
case 0x5fe965:c.instructions+=1;goto B5fe965;
case 0x5fe967:goto L5fe967;
case 0x5fe968:goto L5fe968;
case 0x5fe96b:c.instructions+=2;goto B5fe96b;
case 0x5fe96d:c.instructions+=1;goto B5fe96d;
case 0x5fe96f:goto L5fe96f;
case 0x5fe970:goto L5fe970;
case 0x5fe973:c.instructions+=2;goto B5fe973;
case 0x5fe975:c.instructions+=1;goto B5fe975;
case 0x5fe977:goto L5fe977;
case 0x5fe978:goto L5fe978;
case 0x5fe97b:c.instructions+=4;goto B5fe97b;
case 0x5fe97d:c.instructions+=3;goto B5fe97d;
case 0x5fe97e:c.instructions+=2;goto B5fe97e;
case 0x5fe982:c.instructions+=1;goto B5fe982;
case 0x5fe987:goto L5fe987;
case 0x5fe98a:c.instructions+=4;goto B5fe98a;
case 0x5fe98c:c.instructions+=3;goto B5fe98c;
case 0x5fe98d:c.instructions+=2;goto B5fe98d;
case 0x5fe991:c.instructions+=1;goto B5fe991;
case 0x5fe996:goto L5fe996;
case 0x5fe999:c.instructions+=5;goto B5fe999;
case 0x5fe99d:c.instructions+=4;goto B5fe99d;
case 0x5fe99f:c.instructions+=3;goto B5fe99f;
case 0x5fe9a0:c.instructions+=2;goto B5fe9a0;
case 0x5fe9a4:c.instructions+=1;goto B5fe9a4;
case 0x5fe9a9:goto L5fe9a9;
case 0x5fe9b0:c.instructions+=4;goto B5fe9b0;
case 0x5fe9b2:c.instructions+=3;goto B5fe9b2;
case 0x5fe9b3:c.instructions+=2;goto B5fe9b3;
case 0x5fe9b7:c.instructions+=1;goto B5fe9b7;
case 0x5fe9bc:goto L5fe9bc;
case 0x5fe9c3:c.instructions+=4;goto B5fe9c3;
case 0x5fe9c5:c.instructions+=3;goto B5fe9c5;
case 0x5fe9c6:c.instructions+=2;goto B5fe9c6;
case 0x5fe9ca:c.instructions+=1;goto B5fe9ca;
case 0x5fe9cf:goto L5fe9cf;
case 0x5fe9d6:c.instructions+=4;goto B5fe9d6;
case 0x5fe9d8:c.instructions+=3;goto B5fe9d8;
case 0x5fe9d9:c.instructions+=2;goto B5fe9d9;
case 0x5fe9dd:c.instructions+=1;goto B5fe9dd;
case 0x5fe9e2:goto L5fe9e2;
case 0x5fe9e6:c.instructions+=2;goto B5fe9e6;
case 0x5fe9ee:c.instructions+=1;goto B5fe9ee;
case 0x5fe9f0:goto L5fe9f0;
case 0x5fe9f4:c.instructions+=3;goto B5fe9f4;
case 0x5fe9f6:c.instructions+=2;goto B5fe9f6;
case 0x5fe9f8:c.instructions+=1;goto B5fe9f8;
case 0x5fe9fe:goto L5fe9fe;
case 0x5fea05:c.instructions+=1;goto B5fea05;
case 0x5fea0a:goto L5fea0a;
case 0x5fea0e:c.instructions+=3;goto B5fea0e;
case 0x5fea11:c.instructions+=2;goto B5fea11;
case 0x5fea14:c.instructions+=1;goto B5fea14;
case 0x5fea1a:goto L5fea1a;
case 0x5fea1f:c.instructions+=2;goto B5fea1f;
case 0x5fea21:c.instructions+=1;goto B5fea21;
case 0x5fea27:goto L5fea27;
case 0x5fea2d:c.instructions+=2;goto B5fea2d;
case 0x5fea2f:c.instructions+=1;goto B5fea2f;
case 0x5fea35:goto L5fea35;
case 0x5fea37:c.instructions+=1;goto B5fea37;
case 0x5fea3c:goto L5fea3c;
case 0x5fea3e:c.instructions+=1;goto B5fea3e;
case 0x5fea40:goto L5fea40;
case 0x5fea45:goto L5fea45;
case 0x5fea49:c.instructions+=1;goto B5fea49;
case 0x5fea4b:goto L5fea4b;
case 0x5fea4d:c.instructions+=2;goto B5fea4d;
case 0x5fea4f:c.instructions+=1;goto B5fea4f;
case 0x5fea51:goto L5fea51;
case 0x5fea53:goto L5fea53;
case 0x5fea55:c.instructions+=1;goto B5fea55;
case 0x5fea57:goto L5fea57;
case 0x5fea5a:c.instructions+=2;goto B5fea5a;
case 0x5fea5c:c.instructions+=1;goto B5fea5c;
case 0x5fea5e:goto L5fea5e;
case 0x5fea60:c.instructions+=3;goto B5fea60;
case 0x5fea61:c.instructions+=2;goto B5fea61;
case 0x5fea68:c.instructions+=1;goto B5fea68;
case 0x5fea6d:goto L5fea6d;
case 0x5fea6f:c.instructions+=9;goto B5fea6f;
case 0x5fea75:c.instructions+=8;goto B5fea75;
case 0x5fea7c:c.instructions+=7;goto B5fea7c;
case 0x5fea83:c.instructions+=6;goto B5fea83;
case 0x5fea8a:c.instructions+=5;goto B5fea8a;
case 0x5fea90:c.instructions+=4;goto B5fea90;
case 0x5fea97:c.instructions+=3;goto B5fea97;
case 0x5fea9c:c.instructions+=2;goto B5fea9c;
case 0x5fea9e:c.instructions+=1;goto B5fea9e;
case 0x5feaa0:goto L5feaa0;
case 0x5feaa6:goto L5feaa6;
case 0x5feaa8:c.instructions+=5;goto B5feaa8;
case 0x5feaaf:c.instructions+=4;goto B5feaaf;
case 0x5feab0:c.instructions+=3;goto B5feab0;
case 0x5feab3:c.instructions+=2;goto B5feab3;
case 0x5feab5:c.instructions+=1;goto B5feab5;
case 0x5feab7:goto L5feab7;
case 0x5feabe:goto L5feabe;
case 0x5feac2:c.instructions+=4;goto B5feac2;
case 0x5feac4:c.instructions+=3;goto B5feac4;
case 0x5feac5:c.instructions+=2;goto B5feac5;
case 0x5feac9:c.instructions+=1;goto B5feac9;
case 0x5feace:goto L5feace;
case 0x5fead1:c.instructions+=4;goto B5fead1;
case 0x5fead3:c.instructions+=3;goto B5fead3;
case 0x5fead4:c.instructions+=2;goto B5fead4;
case 0x5fead8:c.instructions+=1;goto B5fead8;
case 0x5feadd:goto L5feadd;
case 0x5feae1:c.instructions+=4;goto B5feae1;
case 0x5feae3:c.instructions+=3;goto B5feae3;
case 0x5feae4:c.instructions+=2;goto B5feae4;
case 0x5feae8:c.instructions+=1;goto B5feae8;
case 0x5feaed:goto L5feaed;
case 0x5feaf3:c.instructions+=3;goto B5feaf3;
case 0x5feaf5:c.instructions+=2;goto B5feaf5;
case 0x5feaf7:c.instructions+=1;goto B5feaf7;
case 0x5feaf9:goto L5feaf9;
case 0x5feaff:c.instructions+=2;goto B5feaff;
case 0x5feb02:c.instructions+=1;goto B5feb02;
case 0x5feb05:goto L5feb05;
case 0x5feb07:c.instructions+=1;goto B5feb07;
case 0x5feb09:goto L5feb09;
case 0x5feb0a:c.instructions+=3;goto B5feb0a;
case 0x5feb10:c.instructions+=2;goto B5feb10;
case 0x5feb12:c.instructions+=1;goto B5feb12;
case 0x5feb14:goto L5feb14;
case 0x5feb16:goto L5feb16;
case 0x5feb1a:c.instructions+=4;goto B5feb1a;
case 0x5feb1c:c.instructions+=3;goto B5feb1c;
case 0x5feb1d:c.instructions+=2;goto B5feb1d;
case 0x5feb21:c.instructions+=1;goto B5feb21;
case 0x5feb26:goto L5feb26;
case 0x5feb2c:c.instructions+=3;goto B5feb2c;
case 0x5feb2d:c.instructions+=2;goto B5feb2d;
case 0x5feb31:c.instructions+=1;goto B5feb31;
case 0x5feb36:goto L5feb36;
case 0x5feb39:c.instructions+=5;goto B5feb39;
case 0x5feb3a:c.instructions+=4;goto B5feb3a;
case 0x5feb3e:c.instructions+=3;goto B5feb3e;
case 0x5feb44:c.instructions+=2;goto B5feb44;
case 0x5feb47:c.instructions+=1;goto B5feb47;
case 0x5feb4c:goto L5feb4c;
case 0x5feb52:c.instructions+=2;goto B5feb52;
case 0x5feb54:c.instructions+=1;goto B5feb54;
case 0x5feb56:goto L5feb56;
case 0x5feb59:c.instructions+=4;goto B5feb59;
case 0x5feb5a:c.instructions+=3;goto B5feb5a;
case 0x5feb60:c.instructions+=2;goto B5feb60;
case 0x5feb63:c.instructions+=1;goto B5feb63;
case 0x5feb65:goto L5feb65;
case 0x5feb6b:c.instructions+=2;goto B5feb6b;
case 0x5feb6d:c.instructions+=1;goto B5feb6d;
case 0x5feb6f:goto L5feb6f;
case 0x5feb71:goto L5feb71;
case 0x5feb75:c.instructions+=1;goto B5feb75;
case 0x5feb7a:goto L5feb7a;
case 0x5feb80:c.instructions+=4;goto B5feb80;
case 0x5feb81:c.instructions+=3;goto B5feb81;
case 0x5feb84:c.instructions+=2;goto B5feb84;
case 0x5feb88:c.instructions+=1;goto B5feb88;
case 0x5feb8d:goto L5feb8d;
case 0x5feb93:c.instructions+=4;goto B5feb93;
case 0x5feb94:c.instructions+=3;goto B5feb94;
case 0x5feb97:c.instructions+=2;goto B5feb97;
case 0x5feb9b:c.instructions+=1;goto B5feb9b;
case 0x5feba0:goto L5feba0;
case 0x5feba6:c.instructions+=5;goto B5feba6;
case 0x5feba7:c.instructions+=4;goto B5feba7;
case 0x5febab:c.instructions+=3;goto B5febab;
case 0x5febb1:c.instructions+=2;goto B5febb1;
case 0x5febb4:c.instructions+=1;goto B5febb4;
case 0x5febb9:goto L5febb9;
case 0x5febbf:c.instructions+=5;goto B5febbf;
case 0x5febc0:c.instructions+=4;goto B5febc0;
case 0x5febc4:c.instructions+=3;goto B5febc4;
case 0x5febca:c.instructions+=2;goto B5febca;
case 0x5febcd:c.instructions+=1;goto B5febcd;
case 0x5febd2:goto L5febd2;
case 0x5febd8:c.instructions+=4;goto B5febd8;
case 0x5febd9:c.instructions+=3;goto B5febd9;
case 0x5febdc:c.instructions+=2;goto B5febdc;
case 0x5febe0:c.instructions+=1;goto B5febe0;
case 0x5febe5:goto L5febe5;
case 0x5febeb:c.instructions+=3;goto B5febeb;
case 0x5febec:c.instructions+=2;goto B5febec;
case 0x5febf0:c.instructions+=1;goto B5febf0;
case 0x5febf5:goto L5febf5;
case 0x5febfa:c.instructions+=3;goto B5febfa;
case 0x5febfc:c.instructions+=2;goto B5febfc;
case 0x5febfe:c.instructions+=1;goto B5febfe;
case 0x5fec00:goto L5fec00;
case 0x5fec06:c.instructions+=2;goto B5fec06;
case 0x5fec08:c.instructions+=1;goto B5fec08;
case 0x5fec0a:goto L5fec0a;
case 0x5fec0c:c.instructions+=1;goto B5fec0c;
case 0x5fec11:goto L5fec11;
case 0x5fec13:c.instructions+=1;goto B5fec13;
case 0x5fec15:goto L5fec15;
case 0x5fec1a:c.instructions+=1;goto B5fec1a;
case 0x5fec20:goto L5fec20;
case 0x5fec24:c.instructions+=1;goto B5fec24;
case 0x5fec26:goto L5fec26;
case 0x5fec28:c.instructions+=2;goto B5fec28;
case 0x5fec2a:c.instructions+=1;goto B5fec2a;
case 0x5fec2c:goto L5fec2c;
case 0x5fec2e:goto L5fec2e;
case 0x5fec30:c.instructions+=1;goto B5fec30;
case 0x5fec32:goto L5fec32;
case 0x5fec35:goto L5fec35;
case 0x5fec3b:c.instructions+=2;goto B5fec3b;
case 0x5fec3d:c.instructions+=1;goto B5fec3d;
case 0x5fec3f:goto L5fec3f;
case 0x5fec45:c.instructions+=2;goto B5fec45;
case 0x5fec47:c.instructions+=1;goto B5fec47;
case 0x5fec49:goto L5fec49;
case 0x5fec4c:c.instructions+=3;goto B5fec4c;
case 0x5fec4d:c.instructions+=2;goto B5fec4d;
case 0x5fec50:c.instructions+=1;goto B5fec50;
case 0x5fec52:goto L5fec52;
case 0x5fec54:goto L5fec54;
case 0x5fec58:c.instructions+=1;goto B5fec58;
case 0x5fec5d:goto L5fec5d;
case 0x5fec63:c.instructions+=5;goto B5fec63;
case 0x5fec6a:c.instructions+=4;goto B5fec6a;
case 0x5fec6c:c.instructions+=3;goto B5fec6c;
case 0x5fec6d:c.instructions+=2;goto B5fec6d;
case 0x5fec71:c.instructions+=1;goto B5fec71;
case 0x5fec76:goto L5fec76;
case 0x5fec78:c.instructions+=2;goto B5fec78;
case 0x5fec7a:c.instructions+=1;goto B5fec7a;
case 0x5fec7c:goto L5fec7c;
case 0x5fec7e:c.instructions+=2;goto B5fec7e;
case 0x5fec80:c.instructions+=1;goto B5fec80;
case 0x5fec82:goto L5fec82;
case 0x5fec85:c.instructions+=1;goto B5fec85;
case 0x5fec8a:goto L5fec8a;
case 0x5fec8b:c.instructions+=1;goto B5fec8b;
case 0x5fec8d:goto L5fec8d;
case 0x5fec8f:goto L5fec8f;
case 0x5fec93:c.instructions+=1;goto B5fec93;
case 0x5fec98:goto L5fec98;
case 0x5fec9b:c.instructions+=2;goto B5fec9b;
case 0x5fec9e:c.instructions+=1;goto B5fec9e;
case 0x5feca0:goto L5feca0;
case 0x5feca1:c.instructions+=1;goto B5feca1;
case 0x5feca3:goto L5feca3;
case 0x5feca4:c.instructions+=1;goto B5feca4;
case 0x5feca6:goto L5feca6;
case 0x5feca8:c.instructions+=1;goto B5feca8;
case 0x5fecaa:goto L5fecaa;
case 0x5fecac:c.instructions+=1;goto B5fecac;
case 0x5fecae:goto L5fecae;
case 0x5fecb0:c.instructions+=1;goto B5fecb0;
case 0x5fecb2:goto L5fecb2;
case 0x5fecb4:goto L5fecb4;
case 0x5fecb7:c.instructions+=4;goto B5fecb7;
case 0x5fecb9:c.instructions+=3;goto B5fecb9;
case 0x5fecba:c.instructions+=2;goto B5fecba;
case 0x5fecbe:c.instructions+=1;goto B5fecbe;
case 0x5fecc3:goto L5fecc3;
case 0x5fecc5:c.instructions+=2;goto B5fecc5;
case 0x5fecca:c.instructions+=1;goto B5fecca;
case 0x5fecd0:goto L5fecd0;
case 0x5fecd5:c.instructions+=1;goto B5fecd5;
case 0x5fecd7:goto L5fecd7;
case 0x5fecda:c.instructions+=3;goto B5fecda;
case 0x5fecdf:c.instructions+=2;goto B5fecdf;
case 0x5fece1:c.instructions+=1;goto B5fece1;
case 0x5fece3:goto L5fece3;
case 0x5fece7:c.instructions+=1;goto B5fece7;
case 0x5fece9:goto L5fece9;
case 0x5fecec:c.instructions+=3;goto B5fecec;
case 0x5fecf1:c.instructions+=2;goto B5fecf1;
case 0x5fecf3:c.instructions+=1;goto B5fecf3;
case 0x5fecf5:goto L5fecf5;
case 0x5fecfa:c.instructions+=1;goto B5fecfa;
case 0x5fecfc:goto L5fecfc;
case 0x5fed01:c.instructions+=3;goto B5fed01;
case 0x5fed03:c.instructions+=2;goto B5fed03;
case 0x5fed05:c.instructions+=1;goto B5fed05;
case 0x5fed07:goto L5fed07;
case 0x5fed0c:c.instructions+=1;goto B5fed0c;
case 0x5fed0e:goto L5fed0e;
case 0x5fed11:c.instructions+=3;goto B5fed11;
case 0x5fed16:c.instructions+=2;goto B5fed16;
case 0x5fed18:c.instructions+=1;goto B5fed18;
case 0x5fed1a:goto L5fed1a;
case 0x5fed1f:c.instructions+=1;goto B5fed1f;
case 0x5fed21:goto L5fed21;
case 0x5fed24:c.instructions+=3;goto B5fed24;
case 0x5fed29:c.instructions+=2;goto B5fed29;
case 0x5fed2b:c.instructions+=1;goto B5fed2b;
case 0x5fed2d:goto L5fed2d;
case 0x5fed32:c.instructions+=1;goto B5fed32;
case 0x5fed34:goto L5fed34;
case 0x5fed37:c.instructions+=3;goto B5fed37;
case 0x5fed3c:c.instructions+=2;goto B5fed3c;
case 0x5fed3e:c.instructions+=1;goto B5fed3e;
case 0x5fed40:goto L5fed40;
case 0x5fed45:c.instructions+=1;goto B5fed45;
case 0x5fed47:goto L5fed47;
case 0x5fed4a:c.instructions+=3;goto B5fed4a;
case 0x5fed4f:c.instructions+=2;goto B5fed4f;
case 0x5fed51:c.instructions+=1;goto B5fed51;
case 0x5fed53:goto L5fed53;
case 0x5fed58:c.instructions+=1;goto B5fed58;
case 0x5fed5a:goto L5fed5a;
case 0x5fed5d:c.instructions+=3;goto B5fed5d;
case 0x5fed62:c.instructions+=2;goto B5fed62;
case 0x5fed64:c.instructions+=1;goto B5fed64;
case 0x5fed66:goto L5fed66;
case 0x5fed69:c.instructions+=4;goto B5fed69;
case 0x5fed6c:c.instructions+=3;goto B5fed6c;
case 0x5fed6f:c.instructions+=2;goto B5fed6f;
case 0x5fed72:c.instructions+=1;goto B5fed72;
case 0x5fed78:goto L5fed78;
case 0x5fed7b:c.instructions+=4;goto B5fed7b;
case 0x5fed7d:c.instructions+=3;goto B5fed7d;
case 0x5fed7e:c.instructions+=2;goto B5fed7e;
case 0x5fed82:c.instructions+=1;goto B5fed82;
case 0x5fed87:goto L5fed87;
case 0x5fed8d:c.instructions+=1;goto B5fed8d;
case 0x5fed92:goto L5fed92;
case 0x5fed95:c.instructions+=2;goto B5fed95;
case 0x5fed98:c.instructions+=1;goto B5fed98;
case 0x5fed9a:goto L5fed9a;
case 0x5fed9d:c.instructions+=4;goto B5fed9d;
case 0x5fed9f:c.instructions+=3;goto B5fed9f;
case 0x5feda0:c.instructions+=2;goto B5feda0;
case 0x5feda4:c.instructions+=1;goto B5feda4;
case 0x5feda9:goto L5feda9;
case 0x5fedac:c.instructions+=2;goto B5fedac;
case 0x5fedad:c.instructions+=1;goto B5fedad;
case 0x5fedaf:goto L5fedaf;
case 0x5fedb3:c.instructions+=6;goto B5fedb3;
case 0x5fedb7:c.instructions+=5;goto B5fedb7;
case 0x5fedba:c.instructions+=4;goto B5fedba;
case 0x5fedbb:c.instructions+=3;goto B5fedbb;
case 0x5fedbf:c.instructions+=2;goto B5fedbf;
case 0x5fedc3:c.instructions+=1;goto B5fedc3;
case 0x5fedc9:goto L5fedc9;
case 0x5fedd0:c.instructions+=3;goto B5fedd0;
case 0x5fedd6:c.instructions+=2;goto B5fedd6;
case 0x5fedda:c.instructions+=1;goto B5fedda;
case 0x5feddf:goto L5feddf;
case 0x5fede3:c.instructions+=9;goto B5fede3;
case 0x5fede7:c.instructions+=8;goto B5fede7;
case 0x5fede8:c.instructions+=7;goto B5fede8;
case 0x5fede9:c.instructions+=6;goto B5fede9;
case 0x5fedea:c.instructions+=5;goto B5fedea;
case 0x5fedee:c.instructions+=4;goto B5fedee;
case 0x5fedef:c.instructions+=3;goto B5fedef;
case 0x5fedf1:c.instructions+=2;goto B5fedf1;
case 0x5fedf4:c.instructions+=1;goto B5fedf4;
case 0x5fedf6:goto L5fedf6;
case 0x5fedfc:goto L5fedfc;
case 0x5fee01:c.instructions+=2;goto B5fee01;
case 0x5fee03:c.instructions+=1;goto B5fee03;
case 0x5fee05:goto L5fee05;
case 0x5fee07:c.instructions+=4;goto B5fee07;
case 0x5fee0e:c.instructions+=3;goto B5fee0e;
case 0x5fee13:c.instructions+=2;goto B5fee13;
case 0x5fee14:c.instructions+=1;goto B5fee14;
case 0x5fee19:goto L5fee19;
case 0x5fee1a:c.instructions+=3;goto B5fee1a;
case 0x5fee1e:c.instructions+=2;goto B5fee1e;
case 0x5fee1f:c.instructions+=1;goto B5fee1f;
case 0x5fee24:goto L5fee24;
case 0x5fee2b:c.instructions+=3;goto B5fee2b;
case 0x5fee2e:c.instructions+=2;goto B5fee2e;
case 0x5fee2f:c.instructions+=1;goto B5fee2f;
case 0x5fee34:goto L5fee34;
case 0x5fee36:c.instructions+=1;goto B5fee36;
case 0x5fee3b:goto L5fee3b;
case 0x5fee41:c.instructions+=1;goto B5fee41;
case 0x5fee42:goto L5fee42;
case 0x5fee44:c.instructions+=2;goto B5fee44;
case 0x5fee4a:c.instructions+=1;goto B5fee4a;
case 0x5fee50:goto L5fee50;
case 0x5fee56:c.instructions+=10;goto B5fee56;
case 0x5fee57:c.instructions+=9;goto B5fee57;
case 0x5fee58:c.instructions+=8;goto B5fee58;
case 0x5fee5f:c.instructions+=7;goto B5fee5f;
case 0x5fee60:c.instructions+=6;goto B5fee60;
case 0x5fee62:c.instructions+=5;goto B5fee62;
case 0x5fee63:c.instructions+=4;goto B5fee63;
case 0x5fee66:c.instructions+=3;goto B5fee66;
case 0x5fee68:c.instructions+=2;goto B5fee68;
case 0x5fee6a:c.instructions+=1;goto B5fee6a;
case 0x5fee6f:goto L5fee6f;
case 0x5fee71:c.instructions+=2;goto B5fee71;
case 0x5fee75:c.instructions+=1;goto B5fee75;
case 0x5fee7b:goto L5fee7b;
case 0x5fee80:goto L5fee80;
case 0x5fee84:c.instructions+=1;goto B5fee84;
case 0x5fee86:goto L5fee86;
case 0x5fee88:goto L5fee88;
case 0x5fee8a:c.instructions+=2;goto B5fee8a;
case 0x5fee8c:c.instructions+=1;goto B5fee8c;
case 0x5fee8e:goto L5fee8e;
case 0x5fee90:c.instructions+=1;goto B5fee90;
case 0x5fee96:goto L5fee96;
case 0x5fee9d:c.instructions+=1;goto B5fee9d;
case 0x5feea2:goto L5feea2;
case 0x5feea5:c.instructions+=2;goto B5feea5;
case 0x5feea6:c.instructions+=1;goto B5feea6;
case 0x5feeab:goto L5feeab;
case 0x5feeaf:c.instructions+=1;goto B5feeaf;
case 0x5feeb4:goto L5feeb4;
case 0x5feeb7:c.instructions+=5;goto B5feeb7;
case 0x5feebb:c.instructions+=4;goto B5feebb;
case 0x5feebd:c.instructions+=3;goto B5feebd;
case 0x5feebe:c.instructions+=2;goto B5feebe;
case 0x5feec2:c.instructions+=1;goto B5feec2;
case 0x5feec7:goto L5feec7;
case 0x5feeca:c.instructions+=7;goto B5feeca;
case 0x5feed0:c.instructions+=6;goto B5feed0;
case 0x5feed3:c.instructions+=5;goto B5feed3;
case 0x5feed9:c.instructions+=4;goto B5feed9;
case 0x5feedb:c.instructions+=3;goto B5feedb;
case 0x5feedc:c.instructions+=2;goto B5feedc;
case 0x5feee0:c.instructions+=1;goto B5feee0;
case 0x5feee5:goto L5feee5;
case 0x5feee8:c.instructions+=5;goto B5feee8;
case 0x5feeeb:c.instructions+=4;goto B5feeeb;
case 0x5feeed:c.instructions+=3;goto B5feeed;
case 0x5feeee:c.instructions+=2;goto B5feeee;
case 0x5feef2:c.instructions+=1;goto B5feef2;
case 0x5feef7:goto L5feef7;
case 0x5feefa:c.instructions+=4;goto B5feefa;
case 0x5feefc:c.instructions+=3;goto B5feefc;
case 0x5feefd:c.instructions+=2;goto B5feefd;
case 0x5fef01:c.instructions+=1;goto B5fef01;
case 0x5fef06:goto L5fef06;
case 0x5fef09:c.instructions+=3;goto B5fef09;
case 0x5fef0d:c.instructions+=2;goto B5fef0d;
case 0x5fef0f:c.instructions+=1;goto B5fef0f;
case 0x5fef15:goto L5fef15;
case 0x5fef19:c.instructions+=1;goto B5fef19;
case 0x5fef1f:goto L5fef1f;
case 0x5fef22:c.instructions+=3;goto B5fef22;
case 0x5fef25:c.instructions+=2;goto B5fef25;
case 0x5fef29:c.instructions+=1;goto B5fef29;
case 0x5fef2e:goto L5fef2e;
case 0x5fef31:c.instructions+=11;goto B5fef31;
case 0x5fef35:c.instructions+=10;goto B5fef35;
case 0x5fef38:c.instructions+=9;goto B5fef38;
case 0x5fef3c:c.instructions+=8;goto B5fef3c;
case 0x5fef40:c.instructions+=7;goto B5fef40;
case 0x5fef42:c.instructions+=6;goto B5fef42;
case 0x5fef46:c.instructions+=5;goto B5fef46;
case 0x5fef47:c.instructions+=4;goto B5fef47;
case 0x5fef4d:c.instructions+=3;goto B5fef4d;
case 0x5fef51:c.instructions+=2;goto B5fef51;
case 0x5fef55:c.instructions+=1;goto B5fef55;
case 0x5fef5a:goto L5fef5a;
case 0x5fef5e:c.instructions+=1;goto B5fef5e;
case 0x5fef63:goto L5fef63;
case 0x5fef65:c.instructions+=1;goto B5fef65;
case 0x5fef67:goto L5fef67;
case 0x5fef6c:c.instructions+=2;goto B5fef6c;
case 0x5fef6e:c.instructions+=1;goto B5fef6e;
case 0x5fef70:goto L5fef70;
case 0x5fef75:c.instructions+=2;goto B5fef75;
case 0x5fef77:c.instructions+=1;goto B5fef77;
case 0x5fef79:goto L5fef79;
case 0x5fef7b:c.instructions+=1;goto B5fef7b;
case 0x5fef7d:goto L5fef7d;
case 0x5fef82:goto L5fef82;
case 0x5fef85:c.instructions+=7;goto B5fef85;
case 0x5fef87:c.instructions+=6;goto B5fef87;
case 0x5fef89:c.instructions+=5;goto B5fef89;
case 0x5fef8e:c.instructions+=4;goto B5fef8e;
case 0x5fef91:c.instructions+=3;goto B5fef91;
case 0x5fef93:c.instructions+=2;goto B5fef93;
case 0x5fef97:c.instructions+=1;goto B5fef97;
case 0x5fef99:goto L5fef99;
case 0x5fef9e:c.instructions+=2;goto B5fef9e;
case 0x5fefa0:c.instructions+=1;goto B5fefa0;
case 0x5fefa2:goto L5fefa2;
case 0x5fefa7:c.instructions+=2;goto B5fefa7;
case 0x5fefa9:c.instructions+=1;goto B5fefa9;
case 0x5fefab:goto L5fefab;
case 0x5fefad:c.instructions+=3;goto B5fefad;
case 0x5fefb5:c.instructions+=2;goto B5fefb5;
case 0x5fefb9:c.instructions+=1;goto B5fefb9;
case 0x5fefbb:goto L5fefbb;
case 0x5fefbc:c.instructions+=1;goto B5fefbc;
case 0x5fefc4:goto L5fefc4;
case 0x5fefc6:c.instructions+=2;goto B5fefc6;
case 0x5fefc8:c.instructions+=1;goto B5fefc8;
case 0x5fefce:goto L5fefce;
case 0x5fefd3:goto L5fefd3;
case 0x5fefd5:c.instructions+=1;goto B5fefd5;
case 0x5fefd7:goto L5fefd7;
case 0x5fefdb:c.instructions+=2;goto B5fefdb;
case 0x5fefdc:c.instructions+=1;goto B5fefdc;
case 0x5fefe1:goto L5fefe1;
case 0x5fefe4:goto L5fefe4;
case 0x5fefe5:c.instructions+=5;goto B5fefe5;
case 0x5fefe6:c.instructions+=4;goto B5fefe6;
case 0x5fefe7:c.instructions+=3;goto B5fefe7;
case 0x5fefe8:c.instructions+=2;goto B5fefe8;
case 0x5fefee:c.instructions+=1;goto B5fefee;
default:missing_instruction(c.pc);}
B5fe000:L5fe000:{c.instructions+=1;NFSU2_TR(0x5fe000);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5fe002;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fe000u);}goto L5fe000;}
}
B5fe002:L5fe002:{c.instructions+=3;NFSU2_TR(0x5fe002);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x27cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe008:{NFSU2_TR(0x5fe008);
w4(R+4,u32(0x89ull));
}
B5fe00d:{NFSU2_TR(0x5fe00d);
__builtin_memmove((R+28),(R+12),4);
}
B5fe00f:L5fe00f:{c.instructions+=1;NFSU2_TR(0x5fe00f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5fe011;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fe00fu);}goto L5fe00f;}
}
B5fe011:L5fe011:{c.instructions+=2;NFSU2_TR(0x5fe011);
u8 U[14];
__builtin_memmove((U+6),gp(0x864fac),4);
w1(R+512,u8((r4(U+6))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+8)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fe017:{NFSU2_TR(0x5fe017);
if(r1(R+518)){{goto L5fe045;}}
}
B5fe019:L5fe019:{c.instructions+=14;NFSU2_TR(0x5fe019);
__builtin_memmove((R+0),gp(0x79bf58),4);
}
B5fe01e:{NFSU2_TR(0x5fe01e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5fe021:{NFSU2_TR(0x5fe021);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5fe023:{NFSU2_TR(0x5fe023);
__builtin_memmove((R+4),gp(0x79bf5c),4);
}
B5fe029:{NFSU2_TR(0x5fe029);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe02c:{NFSU2_TR(0x5fe02c);
__builtin_memmove((R+0),gp(0x79bf60),4);
}
B5fe031:{NFSU2_TR(0x5fe031);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe034:{NFSU2_TR(0x5fe034);
__builtin_memmove((R+4),gp(0x79bf64),4);
}
B5fe03a:{NFSU2_TR(0x5fe03a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fe03b:{NFSU2_TR(0x5fe03b);
__builtin_memmove((R+0),(R+24),4);
}
B5fe03d:{NFSU2_TR(0x5fe03d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fe03e:{NFSU2_TR(0x5fe03e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe041:{NFSU2_TR(0x5fe041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fe042:{NFSU2_TR(0x5fe042);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fe045:L5fe045:{c.instructions+=4;NFSU2_TR(0x5fe045);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe049:{NFSU2_TR(0x5fe049);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5fe04b:{NFSU2_TR(0x5fe04b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5fe04e:{NFSU2_TR(0x5fe04e);
if(r1(R+518)){{goto L5fe06e;}}
}
B5fe050:L5fe050:{c.instructions+=13;NFSU2_TR(0x5fe050);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5fe052:{NFSU2_TR(0x5fe052);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5fe054:{NFSU2_TR(0x5fe054);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fe057:{NFSU2_TR(0x5fe057);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe05a:{NFSU2_TR(0x5fe05a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fe05d:{NFSU2_TR(0x5fe05d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe060:{NFSU2_TR(0x5fe060);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe063:{NFSU2_TR(0x5fe063);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fe064:{NFSU2_TR(0x5fe064);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe067:{NFSU2_TR(0x5fe067);
__builtin_memmove((R+0),(R+24),4);
}
B5fe069:{NFSU2_TR(0x5fe069);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fe06a:{NFSU2_TR(0x5fe06a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fe06b:{NFSU2_TR(0x5fe06b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fe06e:L5fe06e:{c.instructions+=10;NFSU2_TR(0x5fe06e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fe070:{NFSU2_TR(0x5fe070);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5fe072:{NFSU2_TR(0x5fe072);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe075:{NFSU2_TR(0x5fe075);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fe076:{NFSU2_TR(0x5fe076);
__builtin_memmove((R+0),(R+24),4);
}
B5fe078:{NFSU2_TR(0x5fe078);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe07b:{NFSU2_TR(0x5fe07b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fe07c:{NFSU2_TR(0x5fe07c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe07f:{NFSU2_TR(0x5fe07f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fe080:{NFSU2_TR(0x5fe080);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fe090:L5fe090:{c.instructions+=7;NFSU2_TR(0x5fe090);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe091:{NFSU2_TR(0x5fe091);
__builtin_memmove((R+24),(R+4),4);
}
B5fe093:{NFSU2_TR(0x5fe093);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe096:{NFSU2_TR(0x5fe096);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe097:{NFSU2_TR(0x5fe097);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5fe09b:{NFSU2_TR(0x5fe09b);
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
B5fe09d:{NFSU2_TR(0x5fe09d);
if(r1(R+518)){{goto L5fe0eb;}}
}
B5fe09f:L5fe09f:{c.instructions+=3;NFSU2_TR(0x5fe09f);
__builtin_memmove((R+4),gp(0x89e7e3),1);
}
B5fe0a5:{NFSU2_TR(0x5fe0a5);
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
B5fe0a7:{NFSU2_TR(0x5fe0a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe0e8;}}
}
B5fe0a9:L5fe0a9:{c.instructions+=3;NFSU2_TR(0x5fe0a9);
__builtin_memmove((R+4),gp(0x89010c),4);
}
B5fe0af:{NFSU2_TR(0x5fe0af);
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
B5fe0b1:{NFSU2_TR(0x5fe0b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe0e8;}}
}
B5fe0b3:L5fe0b3:{c.instructions+=3;NFSU2_TR(0x5fe0b3);
__builtin_memmove((R+4),gp(0x89e7d9),1);
}
B5fe0b9:{NFSU2_TR(0x5fe0b9);
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
B5fe0bb:{NFSU2_TR(0x5fe0bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe0e8;}}
}
B5fe0bd:L5fe0bd:{c.instructions+=3;NFSU2_TR(0x5fe0bd);
__builtin_memmove((R+4),gp(0x890104),4);
}
B5fe0c3:{NFSU2_TR(0x5fe0c3);
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
B5fe0c5:{NFSU2_TR(0x5fe0c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe0e8;}}
}
B5fe0c7:L5fe0c7:{c.instructions+=3;NFSU2_TR(0x5fe0c7);
__builtin_memmove((R+4),gp(0x89e7e7),1);
}
B5fe0cd:{NFSU2_TR(0x5fe0cd);
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
B5fe0cf:{NFSU2_TR(0x5fe0cf);
if(r1(R+518)){{goto L5fe0e8;}}
}
B5fe0d1:L5fe0d1:{c.instructions+=5;NFSU2_TR(0x5fe0d1);
__builtin_memmove((R+4),(R+28),4);
}
B5fe0d3:{NFSU2_TR(0x5fe0d3);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5fe0d5:{NFSU2_TR(0x5fe0d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe0d6:{NFSU2_TR(0x5fe0d6);
__builtin_memmove((R+4),(R+24),4);
}
B5fe0d8:{NFSU2_TR(0x5fe0d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe0ddull));
TAIL_STATIC(0x5f8fe0u,5f8);
}
B5fe0dd:L5fe0dd:{c.instructions+=2;NFSU2_TR(0x5fe0dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fe0e3:{NFSU2_TR(0x5fe0e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe0e8ull));
TAIL_STATIC(0x5ef870u,5ef);
}
B5fe0e8:L5fe0e8:{c.instructions+=1;NFSU2_TR(0x5fe0e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe0eb:L5fe0eb:{c.instructions+=3;NFSU2_TR(0x5fe0eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fe0ec:{NFSU2_TR(0x5fe0ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fe0ed:{NFSU2_TR(0x5fe0ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fe0f0:L5fe0f0:{c.instructions+=5;NFSU2_TR(0x5fe0f0);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5fe0f5:{NFSU2_TR(0x5fe0f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe0f6:{NFSU2_TR(0x5fe0f6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5fe0f8:{NFSU2_TR(0x5fe0f8);
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
B5fe0fa:{NFSU2_TR(0x5fe0fa);
if(r1(R+518)){{goto L5fe11a;}}
}
B5fe0fc:L5fe0fc:{c.instructions+=3;NFSU2_TR(0x5fe0fc);
__builtin_memmove((R+0),gp(0x890080),4);
}
B5fe101:{NFSU2_TR(0x5fe101);
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
B5fe103:{NFSU2_TR(0x5fe103);
if(r1(R+518)){{goto L5fe11a;}}
}
B5fe105:L5fe105:{c.instructions+=4;NFSU2_TR(0x5fe105);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5fe109:{NFSU2_TR(0x5fe109);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe10a:{NFSU2_TR(0x5fe10a);
__builtin_memmove((R+4),(R+0),4);
}
B5fe10c:{NFSU2_TR(0x5fe10c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe111ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B5fe111:L5fe111:{c.instructions+=2;NFSU2_TR(0x5fe111);
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
B5fe113:{NFSU2_TR(0x5fe113);
if(r1(R+518)){{goto L5fe11a;}}
}
B5fe115:L5fe115:{c.instructions+=3;NFSU2_TR(0x5fe115);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe118:{NFSU2_TR(0x5fe118);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fe119:{NFSU2_TR(0x5fe119);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fe11a:L5fe11a:{c.instructions+=3;NFSU2_TR(0x5fe11a);
__builtin_memmove((R+0),(R+24),4);
}
B5fe11c:{NFSU2_TR(0x5fe11c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fe11d:{NFSU2_TR(0x5fe11d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fe120:L5fe120:{c.instructions+=7;NFSU2_TR(0x5fe120);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5fe125:{NFSU2_TR(0x5fe125);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe126:{NFSU2_TR(0x5fe126);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe127:{NFSU2_TR(0x5fe127);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5fe129:{NFSU2_TR(0x5fe129);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe12b:{NFSU2_TR(0x5fe12b);
__builtin_memmove((R+24),(R+4),4);
}
B5fe12d:{NFSU2_TR(0x5fe12d);
if(r1(R+518)){{goto L5fe14a;}}
}
B5fe12f:L5fe12f:{c.instructions+=3;NFSU2_TR(0x5fe12f);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5fe135:{NFSU2_TR(0x5fe135);
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
B5fe137:{NFSU2_TR(0x5fe137);
if(r1(R+518)){{goto L5fe14a;}}
}
B5fe139:L5fe139:{c.instructions+=3;NFSU2_TR(0x5fe139);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5fe13d:{NFSU2_TR(0x5fe13d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe13e:{NFSU2_TR(0x5fe13e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe143ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B5fe143:L5fe143:{c.instructions+=2;NFSU2_TR(0x5fe143);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe145:{NFSU2_TR(0x5fe145);
if(r1(R+518)){{goto L5fe14a;}}
}
B5fe147:L5fe147:{c.instructions+=1;NFSU2_TR(0x5fe147);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5fe14a:L5fe14a:{c.instructions+=4;NFSU2_TR(0x5fe14a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe14c:{NFSU2_TR(0x5fe14c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe14d:{NFSU2_TR(0x5fe14d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fe150:{NFSU2_TR(0x5fe150);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe155ull));
TAIL_STATIC(0x515db0u,515);
}
B5fe155:L5fe155:{c.instructions+=3;NFSU2_TR(0x5fe155);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fe156:{NFSU2_TR(0x5fe156);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fe157:{NFSU2_TR(0x5fe157);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fe160:L5fe160:{c.instructions+=7;NFSU2_TR(0x5fe160);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5fe163:{NFSU2_TR(0x5fe163);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe164:{NFSU2_TR(0x5fe164);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe165:{NFSU2_TR(0x5fe165);
__builtin_memmove((R+28),gp(0x890118),4);
}
B5fe16b:{NFSU2_TR(0x5fe16b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe16d:{NFSU2_TR(0x5fe16d);
__builtin_memmove((R+24),(R+4),4);
}
B5fe16f:{NFSU2_TR(0x5fe16f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe179;}}
}
B5fe171:L5fe171:{c.instructions+=5;NFSU2_TR(0x5fe171);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fe172:{NFSU2_TR(0x5fe172);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5fe174:{NFSU2_TR(0x5fe174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fe175:{NFSU2_TR(0x5fe175);
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
B5fe178:{NFSU2_TR(0x5fe178);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fe179:L5fe179:{c.instructions+=3;NFSU2_TR(0x5fe179);
__builtin_memmove((R+4),(R+28),4);
}
B5fe17b:{NFSU2_TR(0x5fe17b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fe183:{NFSU2_TR(0x5fe183);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe188ull));
TAIL_STATIC(0x5f85b0u,5f8);
}
B5fe188:L5fe188:{c.instructions+=2;NFSU2_TR(0x5fe188);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe18a:{NFSU2_TR(0x5fe18a);
if(r1(R+518)){{goto L5fe1b1;}}
}
B5fe18c:L5fe18c:{c.instructions+=4;NFSU2_TR(0x5fe18c);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5fe192:{NFSU2_TR(0x5fe192);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5fe194:{NFSU2_TR(0x5fe194);
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
B5fe196:{NFSU2_TR(0x5fe196);
if(r1(R+518)){{goto L5fe1a9;}}
}
B5fe198:L5fe198:{c.instructions+=3;NFSU2_TR(0x5fe198);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5fe19c:{NFSU2_TR(0x5fe19c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe19d:{NFSU2_TR(0x5fe19d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe1a2ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B5fe1a2:L5fe1a2:{c.instructions+=2;NFSU2_TR(0x5fe1a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe1a4:{NFSU2_TR(0x5fe1a4);
if(r1(R+518)){{goto L5fe1a9;}}
}
B5fe1a6:L5fe1a6:{c.instructions+=1;NFSU2_TR(0x5fe1a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5fe1a9:L5fe1a9:{c.instructions+=2;NFSU2_TR(0x5fe1a9);
{u32 ea_=u32(r4(R+28)+u32(408u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fe1af:{NFSU2_TR(0x5fe1af);
{goto L5fe1c2;}
}
B5fe1b1:L5fe1b1:{c.instructions+=4;NFSU2_TR(0x5fe1b1);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B5fe1b7:{NFSU2_TR(0x5fe1b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B5fe1ba:{NFSU2_TR(0x5fe1ba);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe1be:{NFSU2_TR(0x5fe1be);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fe1c2:L5fe1c2:{c.instructions+=6;NFSU2_TR(0x5fe1c2);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fe1c8:{NFSU2_TR(0x5fe1c8);
w4(R+4,u32(0x802288ull));
}
B5fe1cd:{NFSU2_TR(0x5fe1cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5fe1d3:{NFSU2_TR(0x5fe1d3);
{u32 ea_=u32(u32(7894460u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fe1d9:{NFSU2_TR(0x5fe1d9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fe1dd:{NFSU2_TR(0x5fe1dd);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fe1e1:L5fe1e1:{c.instructions+=5;NFSU2_TR(0x5fe1e1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fe1e3:{NFSU2_TR(0x5fe1e3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fe1e9:{NFSU2_TR(0x5fe1e9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fe1eb:{NFSU2_TR(0x5fe1eb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fe1ee:{NFSU2_TR(0x5fe1ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe21c;}}
}
B5fe1f0:L5fe1f0:{c.instructions+=5;NFSU2_TR(0x5fe1f0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fe1f4:{NFSU2_TR(0x5fe1f4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fe1fa:{NFSU2_TR(0x5fe1fa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fe1fc:{NFSU2_TR(0x5fe1fc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fe1ff:{NFSU2_TR(0x5fe1ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe222;}}
}
B5fe201:L5fe201:{c.instructions+=8;NFSU2_TR(0x5fe201);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+0,u32(r2(U+0)));
}
B5fe204:{NFSU2_TR(0x5fe204);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe208:{NFSU2_TR(0x5fe208);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fe20c:{NFSU2_TR(0x5fe20c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5fe210:{NFSU2_TR(0x5fe210);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5fe212:{NFSU2_TR(0x5fe212);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fe218:{NFSU2_TR(0x5fe218);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5fe21a:{NFSU2_TR(0x5fe21a);
{goto L5fe222;}
}
B5fe21c:L5fe21c:{c.instructions+=2;NFSU2_TR(0x5fe21c);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((U+2),(U+0),2);
w1(R+512,u8((r2(U+2))<(u16(0x0ull))));
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B5fe220:{NFSU2_TR(0x5fe220);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5fe253;}}
}
B5fe222:L5fe222:{c.instructions+=4;NFSU2_TR(0x5fe222);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5fe225:{NFSU2_TR(0x5fe225);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B5fe228:{NFSU2_TR(0x5fe228);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8022c8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8022c8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5fe22e:{NFSU2_TR(0x5fe22e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fe1e1u);}goto L5fe1e1;}}
}
B5fe230:L5fe230:{c.instructions+=5;NFSU2_TR(0x5fe230);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5fe236:{NFSU2_TR(0x5fe236);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5fe23a:{NFSU2_TR(0x5fe23a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fe23c:{NFSU2_TR(0x5fe23c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fe23f:{NFSU2_TR(0x5fe23f);
if(r1(R+518)){{goto L5fe261;}}
}
B5fe241:L5fe241:{c.instructions+=6;NFSU2_TR(0x5fe241);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fe242:{NFSU2_TR(0x5fe242);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fe244:{NFSU2_TR(0x5fe244);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fe24a:{NFSU2_TR(0x5fe24a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fe24b:{NFSU2_TR(0x5fe24b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5fe24e:{NFSU2_TR(0x5fe24e);
TAIL_STATIC(0x75bed4u,75b);
}
B5fe253:L5fe253:{c.instructions+=3;NFSU2_TR(0x5fe253);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fe257:{NFSU2_TR(0x5fe257);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fe25d:{NFSU2_TR(0x5fe25d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5fe261:L5fe261:{c.instructions+=5;NFSU2_TR(0x5fe261);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fe267:{NFSU2_TR(0x5fe267);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fe26b:{NFSU2_TR(0x5fe26b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fe26d:{NFSU2_TR(0x5fe26d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fe270:{NFSU2_TR(0x5fe270);
if(r1(R+514)){{goto L5fe27a;}}
}
B5fe272:L5fe272:{c.instructions+=2;NFSU2_TR(0x5fe272);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fe274:{NFSU2_TR(0x5fe274);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fe27a:L5fe27a:{c.instructions+=4;NFSU2_TR(0x5fe27a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fe27b:{NFSU2_TR(0x5fe27b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fe27c:{NFSU2_TR(0x5fe27c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5fe27f:{NFSU2_TR(0x5fe27f);
TAIL_STATIC(0x75bed4u,75b);
}
B5fe290:L5fe290:{c.instructions+=1;NFSU2_TR(0x5fe290);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe295ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fe160u);}goto L5fe160;}
}
B5fe295:L5fe295:{c.instructions+=7;NFSU2_TR(0x5fe295);
__builtin_memmove((R+8),gp(0x802280),4);
}
B5fe29b:{NFSU2_TR(0x5fe29b);
w4(R+0,u32(r1(R+0)));
}
B5fe29e:{NFSU2_TR(0x5fe29e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5fe2a0:{NFSU2_TR(0x5fe2a0);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5fe2a2:{NFSU2_TR(0x5fe2a2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B5fe2a5:{NFSU2_TR(0x5fe2a5);
__builtin_memmove((R+0),(R+4),1);
}
B5fe2a7:{NFSU2_TR(0x5fe2a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fe2b0:L5fe2b0:{c.instructions+=3;NFSU2_TR(0x5fe2b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe2b1:{NFSU2_TR(0x5fe2b1);
__builtin_memmove((R+24),(R+4),4);
}
B5fe2b3:{NFSU2_TR(0x5fe2b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe2b8ull));
TAIL_STATIC(0x5838a0u,583);
}
B5fe2b8:L5fe2b8:{c.instructions+=2;NFSU2_TR(0x5fe2b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fe2ba:{NFSU2_TR(0x5fe2ba);
if(r1(R+518)){{goto L5fe2c1;}}
}
B5fe2bc:L5fe2bc:{c.instructions+=1;NFSU2_TR(0x5fe2bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe2c1ull));
TAIL_STATIC(0x58eb70u,58e);
}
B5fe2c1:L5fe2c1:{c.instructions+=4;NFSU2_TR(0x5fe2c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fe2c5:{NFSU2_TR(0x5fe2c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe2c8:{NFSU2_TR(0x5fe2c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe2ca:{NFSU2_TR(0x5fe2ca);
if(r1(R+518)){{goto L5fe2d7;}}
}
B5fe2cc:L5fe2cc:{c.instructions+=2;NFSU2_TR(0x5fe2cc);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5fe2cf:{NFSU2_TR(0x5fe2cf);
if(r1(R+518)){{goto L5fe2d7;}}
}
B5fe2d1:L5fe2d1:{c.instructions+=1;NFSU2_TR(0x5fe2d1);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5fe2d7:L5fe2d7:{c.instructions+=3;NFSU2_TR(0x5fe2d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe2da:{NFSU2_TR(0x5fe2da);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe2dc:{NFSU2_TR(0x5fe2dc);
if(r1(R+518)){{goto L5fe2e9;}}
}
B5fe2de:L5fe2de:{c.instructions+=2;NFSU2_TR(0x5fe2de);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5fe2e1:{NFSU2_TR(0x5fe2e1);
if(r1(R+518)){{goto L5fe2e9;}}
}
B5fe2e3:L5fe2e3:{c.instructions+=1;NFSU2_TR(0x5fe2e3);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5fe2e9:L5fe2e9:{c.instructions+=3;NFSU2_TR(0x5fe2e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe2ec:{NFSU2_TR(0x5fe2ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe2ee:{NFSU2_TR(0x5fe2ee);
if(r1(R+518)){{goto L5fe2fb;}}
}
B5fe2f0:L5fe2f0:{c.instructions+=2;NFSU2_TR(0x5fe2f0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5fe2f3:{NFSU2_TR(0x5fe2f3);
if(r1(R+518)){{goto L5fe2fb;}}
}
B5fe2f5:L5fe2f5:{c.instructions+=1;NFSU2_TR(0x5fe2f5);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5fe2fb:L5fe2fb:{c.instructions+=3;NFSU2_TR(0x5fe2fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe2fe:{NFSU2_TR(0x5fe2fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe300:{NFSU2_TR(0x5fe300);
if(r1(R+518)){{goto L5fe30d;}}
}
B5fe302:L5fe302:{c.instructions+=2;NFSU2_TR(0x5fe302);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5fe305:{NFSU2_TR(0x5fe305);
if(r1(R+518)){{goto L5fe30d;}}
}
B5fe307:L5fe307:{c.instructions+=1;NFSU2_TR(0x5fe307);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5fe30d:L5fe30d:{c.instructions+=3;NFSU2_TR(0x5fe30d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe310:{NFSU2_TR(0x5fe310);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe312:{NFSU2_TR(0x5fe312);
if(r1(R+518)){{goto L5fe31f;}}
}
B5fe314:L5fe314:{c.instructions+=2;NFSU2_TR(0x5fe314);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5fe317:{NFSU2_TR(0x5fe317);
if(r1(R+518)){{goto L5fe31f;}}
}
B5fe319:L5fe319:{c.instructions+=1;NFSU2_TR(0x5fe319);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5fe31f:L5fe31f:{c.instructions+=3;NFSU2_TR(0x5fe31f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe322:{NFSU2_TR(0x5fe322);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe324:{NFSU2_TR(0x5fe324);
if(r1(R+518)){{goto L5fe331;}}
}
B5fe326:L5fe326:{c.instructions+=2;NFSU2_TR(0x5fe326);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5fe329:{NFSU2_TR(0x5fe329);
if(r1(R+518)){{goto L5fe331;}}
}
B5fe32b:L5fe32b:{c.instructions+=1;NFSU2_TR(0x5fe32b);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5fe331:L5fe331:{c.instructions+=3;NFSU2_TR(0x5fe331);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fe333:{NFSU2_TR(0x5fe333);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fe336:{NFSU2_TR(0x5fe336);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe35b;}}
}
B5fe338:L5fe338:{c.instructions+=3;NFSU2_TR(0x5fe338);
__builtin_memmove((R+4),gp(0x7fbe08),4);
}
B5fe33e:{NFSU2_TR(0x5fe33e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe340:{NFSU2_TR(0x5fe340);
if(r1(R+518)){{goto L5fe35b;}}
}
B5fe342:L5fe342:{c.instructions+=3;NFSU2_TR(0x5fe342);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5fe346:{NFSU2_TR(0x5fe346);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fe348:{NFSU2_TR(0x5fe348);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe35b;}}
}
B5fe34a:L5fe34a:{c.instructions+=3;NFSU2_TR(0x5fe34a);
__builtin_memmove((R+4),(R+24),4);
}
B5fe34c:{NFSU2_TR(0x5fe34c);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5fe352:{NFSU2_TR(0x5fe352);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe357ull));
TAIL_STATIC(0x5f9720u,5f9);
}
B5fe357:L5fe357:{c.instructions+=2;NFSU2_TR(0x5fe357);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fe358:{NFSU2_TR(0x5fe358);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fe35b:L5fe35b:{c.instructions+=2;NFSU2_TR(0x5fe35b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe35d:{NFSU2_TR(0x5fe35d);
if(r1(R+518)){{goto L5fe365;}}
}
B5fe35f:L5fe35f:{c.instructions+=1;NFSU2_TR(0x5fe35f);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5fe365:L5fe365:{c.instructions+=2;NFSU2_TR(0x5fe365);
__builtin_memmove((R+4),(R+24),4);
}
B5fe367:{NFSU2_TR(0x5fe367);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe36cull));
TAIL_STATIC(0x5f9720u,5f9);
}
B5fe36c:L5fe36c:{c.instructions+=2;NFSU2_TR(0x5fe36c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fe36d:{NFSU2_TR(0x5fe36d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fe370:L5fe370:{c.instructions+=1;NFSU2_TR(0x5fe370);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe375ull));
TAIL_STATIC(0x5f9790u,5f9);
}
B5fe375:L5fe375:{c.instructions+=4;NFSU2_TR(0x5fe375);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B5fe377:{NFSU2_TR(0x5fe377);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5fe379:{NFSU2_TR(0x5fe379);
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
B5fe37a:{NFSU2_TR(0x5fe37a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fe380:L5fe380:{c.instructions+=11;NFSU2_TR(0x5fe380);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe381:{NFSU2_TR(0x5fe381);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe382:{NFSU2_TR(0x5fe382);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe383:{NFSU2_TR(0x5fe383);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe384:{NFSU2_TR(0x5fe384);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe385:{NFSU2_TR(0x5fe385);
__builtin_memmove((R+28),(R+4),4);
}
B5fe387:{NFSU2_TR(0x5fe387);
s4(0x89e7b0,u32(0x1ull));
}
B5fe391:{NFSU2_TR(0x5fe391);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fe394:{NFSU2_TR(0x5fe394);
w4(R+20,u32(0x6ull));
}
B5fe399:{NFSU2_TR(0x5fe399);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5fe39b:{NFSU2_TR(0x5fe39b);
{goto L5fe3a0;}
}
B5fe3a0:L5fe3a0:{c.instructions+=3;NFSU2_TR(0x5fe3a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5fe3a2:{NFSU2_TR(0x5fe3a2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fe3a4:{NFSU2_TR(0x5fe3a4);
if(r1(R+518)){{goto L5fe3de;}}
}
B5fe3a6:L5fe3a6:{c.instructions+=2;NFSU2_TR(0x5fe3a6);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fe3a9:{NFSU2_TR(0x5fe3a9);
if(r1(R+518)){{goto L5fe3de;}}
}
B5fe3ab:L5fe3ab:{c.instructions+=2;NFSU2_TR(0x5fe3ab);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5fe3ae:{NFSU2_TR(0x5fe3ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe3d5;}}
}
B5fe3b0:L5fe3b0:{c.instructions+=4;NFSU2_TR(0x5fe3b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5fe3b4:{NFSU2_TR(0x5fe3b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe3b5:{NFSU2_TR(0x5fe3b5);
w4(R+4,u32(0x89e7a0ull));
}
B5fe3ba:{NFSU2_TR(0x5fe3ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe3bfull));
TAIL_STATIC(0x5fc210u,5fc);
}
B5fe3bf:L5fe3bf:{c.instructions+=3;NFSU2_TR(0x5fe3bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fe3c1:{NFSU2_TR(0x5fe3c1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fe3c3:{NFSU2_TR(0x5fe3c3);
if(r1(R+518)){{goto L5fe3ce;}}
}
B5fe3c5:L5fe3c5:{c.instructions+=2;NFSU2_TR(0x5fe3c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe3c6:{NFSU2_TR(0x5fe3c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe3cbull));
TAIL_STATIC(0x440540u,440);
}
B5fe3cb:L5fe3cb:{c.instructions+=1;NFSU2_TR(0x5fe3cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5fe3ce:L5fe3ce:{c.instructions+=3;NFSU2_TR(0x5fe3ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5fe3d0:{NFSU2_TR(0x5fe3d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))-u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B5fe3d3:{NFSU2_TR(0x5fe3d3);
{goto L5fe3de;}
}
B5fe3d5:L5fe3d5:{c.instructions+=3;NFSU2_TR(0x5fe3d5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe3d6:{NFSU2_TR(0x5fe3d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fe3d9:{NFSU2_TR(0x5fe3d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe3deull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fe090u);}goto L5fe090;}
}
B5fe3de:L5fe3de:{c.instructions+=3;NFSU2_TR(0x5fe3de);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5fe3e1:{NFSU2_TR(0x5fe3e1);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B5fe3e2:{NFSU2_TR(0x5fe3e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fe3a0u);}goto L5fe3a0;}}
}
B5fe3e4:L5fe3e4:{c.instructions+=2;NFSU2_TR(0x5fe3e4);
u8 U[14];
__builtin_memmove((U+6),gp(0x850088),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fe3eb:{NFSU2_TR(0x5fe3eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe448;}}
}
B5fe3ed:L5fe3ed:{c.instructions+=2;NFSU2_TR(0x5fe3ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fe3f3:{NFSU2_TR(0x5fe3f3);
w4(R+4,u32(0x6ull));
}
B5fe3f8:L5fe3f8:{c.instructions+=5;NFSU2_TR(0x5fe3f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe3fb:{NFSU2_TR(0x5fe3fb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5fe3fd:{NFSU2_TR(0x5fe3fd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5fe400:{NFSU2_TR(0x5fe400);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5fe401:{NFSU2_TR(0x5fe401);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fe3f8u);}goto L5fe3f8;}}
}
B5fe403:L5fe403:{c.instructions+=6;NFSU2_TR(0x5fe403);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fe409:{NFSU2_TR(0x5fe409);
w4(R+4,u32(u32(r4(R+4))^u32(u32(0x1fe6d397ull))));
}
B5fe40f:{NFSU2_TR(0x5fe40f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe415:{NFSU2_TR(0x5fe415);
__builtin_memmove((R+28),gp(0x89e7a0),4);
}
B5fe41b:{NFSU2_TR(0x5fe41b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe41f:{NFSU2_TR(0x5fe41f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5fe421:L5fe421:{c.instructions+=4;NFSU2_TR(0x5fe421);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fe425:{NFSU2_TR(0x5fe425);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe426:{NFSU2_TR(0x5fe426);
u8 U[4];
w4(U+0,u32(0x7fffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe42b:{NFSU2_TR(0x5fe42b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe430ull));
TAIL_STATIC(0x43c140u,43c);
}
B5fe430:L5fe430:{c.instructions+=2;NFSU2_TR(0x5fe430);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe431:{NFSU2_TR(0x5fe431);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe436ull));
TAIL_STATIC(0x4fef50u,4fe);
}
B5fe436:L5fe436:{c.instructions+=4;NFSU2_TR(0x5fe436);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5fe439:{NFSU2_TR(0x5fe439);
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
B5fe43b:{NFSU2_TR(0x5fe43b);
__builtin_memmove(gp(0x89e7a0),(R+0),4);
}
B5fe440:{NFSU2_TR(0x5fe440);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe448;}}
}
B5fe442:L5fe442:{c.instructions+=3;NFSU2_TR(0x5fe442);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5fe443:{NFSU2_TR(0x5fe443);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fe446:{NFSU2_TR(0x5fe446);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fe421u);}goto L5fe421;}}
}
B5fe448:L5fe448:{c.instructions+=6;NFSU2_TR(0x5fe448);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fe449:{NFSU2_TR(0x5fe449);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fe44a:{NFSU2_TR(0x5fe44a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fe44b:{NFSU2_TR(0x5fe44b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fe44c:{NFSU2_TR(0x5fe44c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fe44d:{NFSU2_TR(0x5fe44d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fe450:L5fe450:{c.instructions+=4;NFSU2_TR(0x5fe450);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe451:{NFSU2_TR(0x5fe451);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe452:{NFSU2_TR(0x5fe452);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fe454:{NFSU2_TR(0x5fe454);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fe457:L5fe457:{c.instructions+=3;NFSU2_TR(0x5fe457);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5fe459:{NFSU2_TR(0x5fe459);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe45b:{NFSU2_TR(0x5fe45b);
if(r1(R+518)){{goto L5fe464;}}
}
B5fe45d:L5fe45d:{c.instructions+=3;NFSU2_TR(0x5fe45d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5fe460:{NFSU2_TR(0x5fe460);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fe462:{NFSU2_TR(0x5fe462);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe4b7;}}
}
B5fe464:L5fe464:{c.instructions+=4;NFSU2_TR(0x5fe464);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5fe465:{NFSU2_TR(0x5fe465);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5fe468:{NFSU2_TR(0x5fe468);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5fe46b:{NFSU2_TR(0x5fe46b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fe457u);}goto L5fe457;}}
}
B5fe46d:L5fe46d:{c.instructions+=1;NFSU2_TR(0x5fe46d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fe46f:L5fe46f:{c.instructions+=4;NFSU2_TR(0x5fe46f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5fe472:{NFSU2_TR(0x5fe472);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fe473:{NFSU2_TR(0x5fe473);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fe474:{NFSU2_TR(0x5fe474);
if(r1(R+518)){{goto L5fe47c;}}
}
B5fe476:L5fe476:{c.instructions+=1;NFSU2_TR(0x5fe476);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5fe47c:L5fe47c:{c.instructions+=3;NFSU2_TR(0x5fe47c);
__builtin_memmove((R+0),gp(0x850078),4);
}
B5fe481:{NFSU2_TR(0x5fe481);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe486:{NFSU2_TR(0x5fe486);
if(r1(R+518)){{goto L5fe48d;}}
}
B5fe488:L5fe488:{c.instructions+=2;NFSU2_TR(0x5fe488);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fe48b:{NFSU2_TR(0x5fe48b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe496;}}
}
B5fe48d:L5fe48d:{c.instructions+=2;NFSU2_TR(0x5fe48d);
u8 U[14];
__builtin_memmove((U+6),gp(0x850088),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fe494:{NFSU2_TR(0x5fe494);
if(r1(R+518)){{goto L5fe4b6;}}
}
B5fe496:L5fe496:{c.instructions+=1;NFSU2_TR(0x5fe496);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe49bull));
TAIL_STATIC(0x5f9790u,5f9);
}
B5fe49b:L5fe49b:{c.instructions+=2;NFSU2_TR(0x5fe49b);
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
B5fe49d:{NFSU2_TR(0x5fe49d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5fe4b6;}}
}
B5fe49f:L5fe49f:{c.instructions+=4;NFSU2_TR(0x5fe49f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fe4a6:{NFSU2_TR(0x5fe4a6);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B5fe4ab:{NFSU2_TR(0x5fe4ab);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xea60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xea60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xea60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fe4b0:{NFSU2_TR(0x5fe4b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe4b6:L5fe4b6:{c.instructions+=1;NFSU2_TR(0x5fe4b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fe4b7:L5fe4b7:{c.instructions+=2;NFSU2_TR(0x5fe4b7);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5fe4bb:{NFSU2_TR(0x5fe4bb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fe46fu);}goto L5fe46f;}
}
B5fe4c0:L5fe4c0:{c.instructions+=2;NFSU2_TR(0x5fe4c0);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x3ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5fe4c3:{NFSU2_TR(0x5fe4c3);
if(r1(R+518)){{goto L5fe4f1;}}
}
B5fe4c5:L5fe4c5:{c.instructions+=1;NFSU2_TR(0x5fe4c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe4caull));
TAIL_STATIC(0x5f9790u,5f9);
}
B5fe4ca:L5fe4ca:{c.instructions+=2;NFSU2_TR(0x5fe4ca);
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
B5fe4cc:{NFSU2_TR(0x5fe4cc);
if(r1(R+518)){{goto L5fe4ea;}}
}
B5fe4ce:L5fe4ce:{c.instructions+=3;NFSU2_TR(0x5fe4ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe4d1:{NFSU2_TR(0x5fe4d1);
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
B5fe4d3:{NFSU2_TR(0x5fe4d3);
if(r1(R+518)){{goto L5fe4ea;}}
}
B5fe4d5:L5fe4d5:{c.instructions+=3;NFSU2_TR(0x5fe4d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fe4d7:{NFSU2_TR(0x5fe4d7);
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
B5fe4da:{NFSU2_TR(0x5fe4da);
if(r1(R+518)){{goto L5fe4ea;}}
}
B5fe4dc:L5fe4dc:{c.instructions+=2;NFSU2_TR(0x5fe4dc);
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
B5fe4df:{NFSU2_TR(0x5fe4df);
if(r1(R+518)){{goto L5fe4ea;}}
}
B5fe4e1:L5fe4e1:{c.instructions+=2;NFSU2_TR(0x5fe4e1);
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
B5fe4e3:{NFSU2_TR(0x5fe4e3);
if(r1(R+518)){{goto L5fe4ea;}}
}
B5fe4e5:L5fe4e5:{c.instructions+=2;NFSU2_TR(0x5fe4e5);
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
B5fe4e8:{NFSU2_TR(0x5fe4e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe4f1;}}
}
B5fe4ea:L5fe4ea:{c.instructions+=1;NFSU2_TR(0x5fe4ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11aull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fe4f1:L5fe4f1:{c.instructions+=2;NFSU2_TR(0x5fe4f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fe4f7:{NFSU2_TR(0x5fe4f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fe500:L5fe500:{c.instructions+=3;NFSU2_TR(0x5fe500);
__builtin_memmove((R+0),gp(0x86676c),4);
}
B5fe505:{NFSU2_TR(0x5fe505);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe507:{NFSU2_TR(0x5fe507);
if(r1(R+518)){{goto L5fe52a;}}
}
B5fe509:L5fe509:{c.instructions+=3;NFSU2_TR(0x5fe509);
__builtin_memmove((R+0),gp(0x850098),1);
}
B5fe50e:{NFSU2_TR(0x5fe50e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fe510:{NFSU2_TR(0x5fe510);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe52a;}}
}
B5fe512:L5fe512:{c.instructions+=1;NFSU2_TR(0x5fe512);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe517ull));
TAIL_STATIC(0x5f9790u,5f9);
}
B5fe517:L5fe517:{c.instructions+=2;NFSU2_TR(0x5fe517);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe519:{NFSU2_TR(0x5fe519);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5fe52a;}}
}
B5fe51b:L5fe51b:{c.instructions+=2;NFSU2_TR(0x5fe51b);
u8 U[14];
__builtin_memmove((U+6),gp(0x850088),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fe522:{NFSU2_TR(0x5fe522);
if(r1(R+518)){{goto L5fe52a;}}
}
B5fe524:L5fe524:{c.instructions+=2;NFSU2_TR(0x5fe524);
w4(R+0,u32(0x1ull));
}
B5fe529:{NFSU2_TR(0x5fe529);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fe52a:L5fe52a:{c.instructions+=2;NFSU2_TR(0x5fe52a);
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
B5fe52c:{NFSU2_TR(0x5fe52c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fe530:L5fe530:{c.instructions+=3;NFSU2_TR(0x5fe530);
__builtin_memmove((R+0),gp(0x86676c),4);
}
B5fe535:{NFSU2_TR(0x5fe535);
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
B5fe537:{NFSU2_TR(0x5fe537);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe55a;}}
}
B5fe539:L5fe539:{c.instructions+=1;NFSU2_TR(0x5fe539);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe53eull));
TAIL_STATIC(0x5f9790u,5f9);
}
B5fe53e:L5fe53e:{c.instructions+=2;NFSU2_TR(0x5fe53e);
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
B5fe540:{NFSU2_TR(0x5fe540);
if(r1(R+518)){{goto L5fe55a;}}
}
B5fe542:L5fe542:{c.instructions+=4;NFSU2_TR(0x5fe542);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe545:{NFSU2_TR(0x5fe545);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fe547:{NFSU2_TR(0x5fe547);
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
B5fe54a:{NFSU2_TR(0x5fe54a);
if(r1(R+518)){{goto L5fe55a;}}
}
B5fe54c:L5fe54c:{c.instructions+=2;NFSU2_TR(0x5fe54c);
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
B5fe54f:{NFSU2_TR(0x5fe54f);
if(r1(R+518)){{goto L5fe55a;}}
}
B5fe551:L5fe551:{c.instructions+=2;NFSU2_TR(0x5fe551);
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
B5fe553:{NFSU2_TR(0x5fe553);
if(r1(R+518)){{goto L5fe55a;}}
}
B5fe555:L5fe555:{c.instructions+=2;NFSU2_TR(0x5fe555);
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
B5fe558:{NFSU2_TR(0x5fe558);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe561;}}
}
B5fe55a:L5fe55a:{c.instructions+=1;NFSU2_TR(0x5fe55a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11bull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fe561:L5fe561:{c.instructions+=2;NFSU2_TR(0x5fe561);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fe567:{NFSU2_TR(0x5fe567);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fe570:L5fe570:{c.instructions+=8;NFSU2_TR(0x5fe570);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe571:{NFSU2_TR(0x5fe571);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe572:{NFSU2_TR(0x5fe572);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5fe576:{NFSU2_TR(0x5fe576);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe577:{NFSU2_TR(0x5fe577);
__builtin_memmove((R+12),(R+4),4);
}
B5fe579:{NFSU2_TR(0x5fe579);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe57a:{NFSU2_TR(0x5fe57a);
w4(R+4,u32(0x89e7a0ull));
}
B5fe57f:{NFSU2_TR(0x5fe57f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe584ull));
TAIL_STATIC(0x5ed920u,5ed);
}
B5fe584:L5fe584:{c.instructions+=3;NFSU2_TR(0x5fe584);
__builtin_memmove((R+24),(R+0),4);
}
B5fe586:{NFSU2_TR(0x5fe586);
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
B5fe588:{NFSU2_TR(0x5fe588);
if(r1(R+518)){{goto L5fe5cd;}}
}
B5fe58a:L5fe58a:{c.instructions+=7;NFSU2_TR(0x5fe58a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5fe58e:{NFSU2_TR(0x5fe58e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe58f:{NFSU2_TR(0x5fe58f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5fe593:{NFSU2_TR(0x5fe593);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe595:{NFSU2_TR(0x5fe595);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe596:{NFSU2_TR(0x5fe596);
__builtin_memmove((R+4),(R+28),4);
}
B5fe598:{NFSU2_TR(0x5fe598);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe59dull));
TAIL_STATIC(0x581d00u,581);
}
B5fe59d:L5fe59d:{c.instructions+=5;NFSU2_TR(0x5fe59d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5fe5a1:{NFSU2_TR(0x5fe5a1);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe5a3:{NFSU2_TR(0x5fe5a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe5a4:{NFSU2_TR(0x5fe5a4);
__builtin_memmove((R+4),(R+28),4);
}
B5fe5a6:{NFSU2_TR(0x5fe5a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe5abull));
TAIL_STATIC(0x581d00u,581);
}
B5fe5ab:L5fe5ab:{c.instructions+=6;NFSU2_TR(0x5fe5ab);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe5ad:{NFSU2_TR(0x5fe5ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe5ae:{NFSU2_TR(0x5fe5ae);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5fe5b1:{NFSU2_TR(0x5fe5b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe5b2:{NFSU2_TR(0x5fe5b2);
__builtin_memmove((R+4),(R+12),4);
}
B5fe5b4:{NFSU2_TR(0x5fe5b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe5b9ull));
TAIL_STATIC(0x5f0320u,5f0);
}
B5fe5b9:L5fe5b9:{c.instructions+=3;NFSU2_TR(0x5fe5b9);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B5fe5bd:{NFSU2_TR(0x5fe5bd);
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
B5fe5bf:{NFSU2_TR(0x5fe5bf);
if(r1(R+518)){{goto L5fe5cc;}}
}
B5fe5c1:L5fe5c1:{c.instructions+=4;NFSU2_TR(0x5fe5c1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x12ull))));
}
B5fe5c4:{NFSU2_TR(0x5fe5c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe5c5:{NFSU2_TR(0x5fe5c5);
__builtin_memmove((R+4),(R+28),4);
}
B5fe5c7:{NFSU2_TR(0x5fe5c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe5ccull));
TAIL_STATIC(0x584080u,584);
}
B5fe5cc:L5fe5cc:{c.instructions+=1;NFSU2_TR(0x5fe5cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fe5cd:L5fe5cd:{c.instructions+=4;NFSU2_TR(0x5fe5cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fe5ce:{NFSU2_TR(0x5fe5ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fe5cf:{NFSU2_TR(0x5fe5cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fe5d0:{NFSU2_TR(0x5fe5d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fe5e0:L5fe5e0:{c.instructions+=4;NFSU2_TR(0x5fe5e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe5e1:{NFSU2_TR(0x5fe5e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe5e2:{NFSU2_TR(0x5fe5e2);
__builtin_memmove((R+24),(R+4),4);
}
B5fe5e4:{NFSU2_TR(0x5fe5e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe5e9ull));
TAIL_STATIC(0x5f9720u,5f9);
}
B5fe5e9:L5fe5e9:{c.instructions+=4;NFSU2_TR(0x5fe5e9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5fe5ed:{NFSU2_TR(0x5fe5ed);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5fe5f1:{NFSU2_TR(0x5fe5f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe5f3:{NFSU2_TR(0x5fe5f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe63a;}}
}
B5fe5f5:L5fe5f5:{c.instructions+=3;NFSU2_TR(0x5fe5f5);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe5f7:{NFSU2_TR(0x5fe5f7);
u8 U[4];
w4(U+0,u32(0x288ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe5fc:{NFSU2_TR(0x5fe5fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe601ull));
TAIL_STATIC(0x440820u,440);
}
B5fe601:L5fe601:{c.instructions+=3;NFSU2_TR(0x5fe601);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5fe604:{NFSU2_TR(0x5fe604);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe606:{NFSU2_TR(0x5fe606);
if(r1(R+518)){{goto L5fe61c;}}
}
B5fe608:L5fe608:{c.instructions+=7;NFSU2_TR(0x5fe608);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fe60c:{NFSU2_TR(0x5fe60c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fe610:{NFSU2_TR(0x5fe610);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe611:{NFSU2_TR(0x5fe611);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe612:{NFSU2_TR(0x5fe612);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe613:{NFSU2_TR(0x5fe613);
__builtin_memmove((R+4),(R+0),4);
}
B5fe615:{NFSU2_TR(0x5fe615);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe61aull));
TAIL_STATIC(0x5fdf80u,5fd);
}
B5fe61a:L5fe61a:{c.instructions+=1;NFSU2_TR(0x5fe61a);
{goto L5fe61e;}
}
B5fe61c:L5fe61c:{c.instructions+=1;NFSU2_TR(0x5fe61c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fe61e:L5fe61e:{c.instructions+=3;NFSU2_TR(0x5fe61e);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5fe622:{NFSU2_TR(0x5fe622);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5fe625:{NFSU2_TR(0x5fe625);
if(r1(R+518)){{goto L5fe62d;}}
}
B5fe627:L5fe627:{c.instructions+=1;NFSU2_TR(0x5fe627);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5fe62d:L5fe62d:{c.instructions+=6;NFSU2_TR(0x5fe62d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fe630:{NFSU2_TR(0x5fe630);
u8 U[3];
w1(R+523,scarry<u8>(r1(R+0),u8(0x1ull)));
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fe632:{NFSU2_TR(0x5fe632);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fe633:{NFSU2_TR(0x5fe633);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fe636:{NFSU2_TR(0x5fe636);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fe637:{NFSU2_TR(0x5fe637);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fe63a:L5fe63a:{c.instructions+=3;NFSU2_TR(0x5fe63a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5fe63d:{NFSU2_TR(0x5fe63d);
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
B5fe63f:{NFSU2_TR(0x5fe63f);
if(r1(R+518)){{goto L5fe65e;}}
}
B5fe641:L5fe641:{c.instructions+=10;NFSU2_TR(0x5fe641);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fe645:{NFSU2_TR(0x5fe645);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5fe647:{NFSU2_TR(0x5fe647);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x12ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x12ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fe64a:{NFSU2_TR(0x5fe64a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5fe64c:{NFSU2_TR(0x5fe64c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fe64f:{NFSU2_TR(0x5fe64f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe652:{NFSU2_TR(0x5fe652);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fe655:{NFSU2_TR(0x5fe655);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe658:{NFSU2_TR(0x5fe658);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fe65b:{NFSU2_TR(0x5fe65b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe65e:L5fe65e:{c.instructions+=3;NFSU2_TR(0x5fe65e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fe65f:{NFSU2_TR(0x5fe65f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fe660:{NFSU2_TR(0x5fe660);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fe670:L5fe670:{c.instructions+=4;NFSU2_TR(0x5fe670);
__builtin_memmove((R+0),gp(0x850088),4);
}
B5fe675:{NFSU2_TR(0x5fe675);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B5fe678:{NFSU2_TR(0x5fe678);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fe67b:{NFSU2_TR(0x5fe67b);
if(r1(R+518)){{goto L5fe8c5;}}
}
B5fe681:L5fe681:{c.instructions+=4;NFSU2_TR(0x5fe681);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe684:{NFSU2_TR(0x5fe684);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe686:{NFSU2_TR(0x5fe686);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fe68e:{NFSU2_TR(0x5fe68e);
if(r1(R+518)){{goto L5fe69c;}}
}
B5fe690:L5fe690:{c.instructions+=2;NFSU2_TR(0x5fe690);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe694:{NFSU2_TR(0x5fe694);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fe69c:L5fe69c:{c.instructions+=4;NFSU2_TR(0x5fe69c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe69f:{NFSU2_TR(0x5fe69f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe6a1:{NFSU2_TR(0x5fe6a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fe6a5:{NFSU2_TR(0x5fe6a5);
if(r1(R+518)){{goto L5fe6b0;}}
}
B5fe6a7:L5fe6a7:{c.instructions+=3;NFSU2_TR(0x5fe6a7);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5fe6ab:{NFSU2_TR(0x5fe6ab);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5fe6ac:{NFSU2_TR(0x5fe6ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe6b0:L5fe6b0:{c.instructions+=3;NFSU2_TR(0x5fe6b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe6b3:{NFSU2_TR(0x5fe6b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe6b5:{NFSU2_TR(0x5fe6b5);
if(r1(R+518)){{goto L5fe6c0;}}
}
B5fe6b7:L5fe6b7:{c.instructions+=3;NFSU2_TR(0x5fe6b7);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5fe6bb:{NFSU2_TR(0x5fe6bb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5fe6bc:{NFSU2_TR(0x5fe6bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe6c0:L5fe6c0:{c.instructions+=3;NFSU2_TR(0x5fe6c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe6c3:{NFSU2_TR(0x5fe6c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe6c5:{NFSU2_TR(0x5fe6c5);
if(r1(R+518)){{goto L5fe6d0;}}
}
B5fe6c7:L5fe6c7:{c.instructions+=3;NFSU2_TR(0x5fe6c7);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5fe6cb:{NFSU2_TR(0x5fe6cb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5fe6cc:{NFSU2_TR(0x5fe6cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe6d0:L5fe6d0:{c.instructions+=3;NFSU2_TR(0x5fe6d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe6d3:{NFSU2_TR(0x5fe6d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe6d5:{NFSU2_TR(0x5fe6d5);
if(r1(R+518)){{goto L5fe6e0;}}
}
B5fe6d7:L5fe6d7:{c.instructions+=3;NFSU2_TR(0x5fe6d7);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5fe6db:{NFSU2_TR(0x5fe6db);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5fe6dc:{NFSU2_TR(0x5fe6dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe6e0:L5fe6e0:{c.instructions+=3;NFSU2_TR(0x5fe6e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fe6e3:{NFSU2_TR(0x5fe6e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe6e5:{NFSU2_TR(0x5fe6e5);
if(r1(R+518)){{goto L5fe6f0;}}
}
B5fe6e7:L5fe6e7:{c.instructions+=3;NFSU2_TR(0x5fe6e7);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5fe6eb:{NFSU2_TR(0x5fe6eb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5fe6ec:{NFSU2_TR(0x5fe6ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe6f0:L5fe6f0:{c.instructions+=7;NFSU2_TR(0x5fe6f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe6f1:{NFSU2_TR(0x5fe6f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe6f2:{NFSU2_TR(0x5fe6f2);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5fe6f3:{NFSU2_TR(0x5fe6f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe6f4:{NFSU2_TR(0x5fe6f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe6f8:{NFSU2_TR(0x5fe6f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe6f9:{NFSU2_TR(0x5fe6f9);
__builtin_memmove((R+16),(R+16),4);
}
B5fe700:L5fe700:{c.instructions+=6;NFSU2_TR(0x5fe700);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe704:{NFSU2_TR(0x5fe704);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5fe706:{NFSU2_TR(0x5fe706);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe708:{NFSU2_TR(0x5fe708);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fe70d:{NFSU2_TR(0x5fe70d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe711:{NFSU2_TR(0x5fe711);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5fe84f;}}
}
B5fe717:L5fe717:{c.instructions+=1;NFSU2_TR(0x5fe717);
{goto L5fe720;}
}
B5fe720:L5fe720:{c.instructions+=11;NFSU2_TR(0x5fe720);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5fe724:{NFSU2_TR(0x5fe724);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B5fe728:{NFSU2_TR(0x5fe728);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe72b:{NFSU2_TR(0x5fe72b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5fe72d:{NFSU2_TR(0x5fe72d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5fe72f:{NFSU2_TR(0x5fe72f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fe732:{NFSU2_TR(0x5fe732);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5fe735:{NFSU2_TR(0x5fe735);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe739:{NFSU2_TR(0x5fe739);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe73d:{NFSU2_TR(0x5fe73d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe741:{NFSU2_TR(0x5fe741);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe74a;}}
}
B5fe743:L5fe743:{c.instructions+=2;NFSU2_TR(0x5fe743);
w4(R+28,u32(0x2ull));
}
B5fe748:{NFSU2_TR(0x5fe748);
{goto L5fe754;}
}
B5fe74a:L5fe74a:{c.instructions+=2;NFSU2_TR(0x5fe74a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fe74d:{NFSU2_TR(0x5fe74d);
if(r1(R+518)){{goto L5fe758;}}
}
B5fe74f:L5fe74f:{c.instructions+=1;NFSU2_TR(0x5fe74f);
w4(R+28,u32(0x1ull));
}
B5fe754:L5fe754:{c.instructions+=1;NFSU2_TR(0x5fe754);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe758:L5fe758:{c.instructions+=4;NFSU2_TR(0x5fe758);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe75c:{NFSU2_TR(0x5fe75c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe75f:{NFSU2_TR(0x5fe75f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fe762:{NFSU2_TR(0x5fe762);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe76b;}}
}
B5fe764:L5fe764:{c.instructions+=2;NFSU2_TR(0x5fe764);
w4(R+20,u32(0x2ull));
}
B5fe769:{NFSU2_TR(0x5fe769);
{goto L5fe775;}
}
B5fe76b:L5fe76b:{c.instructions+=2;NFSU2_TR(0x5fe76b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fe76e:{NFSU2_TR(0x5fe76e);
if(r1(R+518)){{goto L5fe779;}}
}
B5fe770:L5fe770:{c.instructions+=1;NFSU2_TR(0x5fe770);
w4(R+20,u32(0x1ull));
}
B5fe775:L5fe775:{c.instructions+=1;NFSU2_TR(0x5fe775);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe779:L5fe779:{c.instructions+=2;NFSU2_TR(0x5fe779);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fe77b:{NFSU2_TR(0x5fe77b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe823;}}
}
B5fe781:L5fe781:{c.instructions+=3;NFSU2_TR(0x5fe781);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B5fe786:{NFSU2_TR(0x5fe786);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fe788:{NFSU2_TR(0x5fe788);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe793;}}
}
B5fe78a:L5fe78a:{c.instructions+=3;NFSU2_TR(0x5fe78a);
__builtin_memmove((R+0),gp(0x890104),4);
}
B5fe78f:{NFSU2_TR(0x5fe78f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe791:{NFSU2_TR(0x5fe791);
if(r1(R+518)){{goto L5fe7b9;}}
}
B5fe793:L5fe793:{c.instructions+=9;NFSU2_TR(0x5fe793);
__builtin_memmove((R+0),gp(0x89e7bc),4);
}
B5fe798:{NFSU2_TR(0x5fe798);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x198ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5fe79f:{NFSU2_TR(0x5fe79f);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fe7a3:{NFSU2_TR(0x5fe7a3);
{u32 ea_=u32(r4(R+8)+r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fe7a6:{NFSU2_TR(0x5fe7a6);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5fe7a8:{NFSU2_TR(0x5fe7a8);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5fe7aa:{NFSU2_TR(0x5fe7aa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fe7ac:{NFSU2_TR(0x5fe7ac);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fe7af:{NFSU2_TR(0x5fe7af);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5fe819;}}
}
B5fe7b1:L5fe7b1:{c.instructions+=4;NFSU2_TR(0x5fe7b1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5fe7b3:{NFSU2_TR(0x5fe7b3);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5fe7b5:{NFSU2_TR(0x5fe7b5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fe7b7:{NFSU2_TR(0x5fe7b7);
{goto L5fe807;}
}
B5fe7b9:L5fe7b9:{c.instructions+=2;NFSU2_TR(0x5fe7b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe7bb:{NFSU2_TR(0x5fe7bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe7e8;}}
}
B5fe7bd:L5fe7bd:{c.instructions+=4;NFSU2_TR(0x5fe7bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fe7c0:{NFSU2_TR(0x5fe7c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5fe7c3:{NFSU2_TR(0x5fe7c3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fe7c5:{NFSU2_TR(0x5fe7c5);
if(r1(R+518)){{goto L5fe81d;}}
}
B5fe7c7:L5fe7c7:{c.instructions+=5;NFSU2_TR(0x5fe7c7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fe7c9:{NFSU2_TR(0x5fe7c9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5fe7cb:{NFSU2_TR(0x5fe7cb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+0),(U+0),1);
}
B5fe7ce:{NFSU2_TR(0x5fe7ce);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fe7d1:{NFSU2_TR(0x5fe7d1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5fe81d;}}
}
B5fe7d3:L5fe7d3:{c.instructions+=7;NFSU2_TR(0x5fe7d3);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5fe7d7:{NFSU2_TR(0x5fe7d7);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5fe7db:{NFSU2_TR(0x5fe7db);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5fe7dc:{NFSU2_TR(0x5fe7dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5fe7de:{NFSU2_TR(0x5fe7de);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5fe7e2:{NFSU2_TR(0x5fe7e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5fe7e6:{NFSU2_TR(0x5fe7e6);
{goto L5fe81d;}
}
B5fe7e8:L5fe7e8:{c.instructions+=5;NFSU2_TR(0x5fe7e8);
{u32 ea_=u32(r4(R+4)+u32(236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fe7ee:{NFSU2_TR(0x5fe7ee);
{u32 ea_=u32(r4(R+8)+u32(200u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fe7f4:{NFSU2_TR(0x5fe7f4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fe7f6:{NFSU2_TR(0x5fe7f6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fe7f9:{NFSU2_TR(0x5fe7f9);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5fe81d;}}
}
B5fe7fb:L5fe7fb:{c.instructions+=2;NFSU2_TR(0x5fe7fb);
{u32 ea_=u32(r4(R+4)+u32(236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fe801:{NFSU2_TR(0x5fe801);
{u32 ea_=u32(r4(R+8)+u32(200u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fe807:L5fe807:{c.instructions+=3;NFSU2_TR(0x5fe807);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fe809:{NFSU2_TR(0x5fe809);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fe80c:{NFSU2_TR(0x5fe80c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe815;}}
}
B5fe80e:L5fe80e:{c.instructions+=2;NFSU2_TR(0x5fe80e);
w4(R+0,u32(0x1ull));
}
B5fe813:{NFSU2_TR(0x5fe813);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fe7d3u);}goto L5fe7d3;}
}
B5fe815:L5fe815:{c.instructions+=2;NFSU2_TR(0x5fe815);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fe817:{NFSU2_TR(0x5fe817);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fe7d3u);}goto L5fe7d3;}
}
B5fe819:L5fe819:{c.instructions+=2;NFSU2_TR(0x5fe819);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fe81b:{NFSU2_TR(0x5fe81b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fe81d:L5fe81d:{c.instructions+=2;NFSU2_TR(0x5fe81d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5fe821:{NFSU2_TR(0x5fe821);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fe823:L5fe823:{c.instructions+=1;NFSU2_TR(0x5fe823);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5fe832;}}
}
B5fe825:L5fe825:{c.instructions+=3;NFSU2_TR(0x5fe825);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5fe829:{NFSU2_TR(0x5fe829);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5fe82d:{NFSU2_TR(0x5fe82d);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fe832:L5fe832:{c.instructions+=5;NFSU2_TR(0x5fe832);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe836:{NFSU2_TR(0x5fe836);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5fe837:{NFSU2_TR(0x5fe837);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5fe839:{NFSU2_TR(0x5fe839);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe83d:{NFSU2_TR(0x5fe83d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fe720u);}goto L5fe720;}}
}
B5fe843:L5fe843:{c.instructions+=3;NFSU2_TR(0x5fe843);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fe847:{NFSU2_TR(0x5fe847);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fe849:{NFSU2_TR(0x5fe849);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fe700u);}goto L5fe700;}}
}
B5fe84f:L5fe84f:{c.instructions+=4;NFSU2_TR(0x5fe84f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe853:{NFSU2_TR(0x5fe853);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5fe855:{NFSU2_TR(0x5fe855);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe857:{NFSU2_TR(0x5fe857);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5fe8c1;}}
}
B5fe859:L5fe859:{c.instructions+=1;NFSU2_TR(0x5fe859);
__builtin_memmove((R+16),(R+16),4);
}
B5fe860:L5fe860:{c.instructions+=7;NFSU2_TR(0x5fe860);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B5fe864:{NFSU2_TR(0x5fe864);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fe867:{NFSU2_TR(0x5fe867);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe86a:{NFSU2_TR(0x5fe86a);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5fe86f:{NFSU2_TR(0x5fe86f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe871:{NFSU2_TR(0x5fe871);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fe879:{NFSU2_TR(0x5fe879);
if(r1(R+518)){{goto L5fe8ae;}}
}
B5fe87b:L5fe87b:{c.instructions+=3;NFSU2_TR(0x5fe87b);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5fe881:{NFSU2_TR(0x5fe881);
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
B5fe883:{NFSU2_TR(0x5fe883);
if(r1(R+518)){{goto L5fe8ae;}}
}
B5fe885:L5fe885:{c.instructions+=2;NFSU2_TR(0x5fe885);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5fe887:{NFSU2_TR(0x5fe887);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe88cull));
TAIL_STATIC(0x502fd0u,502);
}
B5fe88c:L5fe88c:{c.instructions+=2;NFSU2_TR(0x5fe88c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fe88e:{NFSU2_TR(0x5fe88e);
if(r1(R+518)){{goto L5fe8ae;}}
}
B5fe890:L5fe890:{c.instructions+=1;NFSU2_TR(0x5fe890);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+4,u16(s16(s8(r1(U+4)))));
}
B5fe895:L5fe895:{c.instructions+=2;NFSU2_TR(0x5fe895);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5fe899:{NFSU2_TR(0x5fe899);
if(r1(R+518)){{goto L5fe8a3;}}
}
B5fe89b:L5fe89b:{c.instructions+=3;NFSU2_TR(0x5fe89b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5fe89d:{NFSU2_TR(0x5fe89d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fe89f:{NFSU2_TR(0x5fe89f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fe895u);}goto L5fe895;}}
}
B5fe8a1:L5fe8a1:{c.instructions+=1;NFSU2_TR(0x5fe8a1);
{goto L5fe8ae;}
}
B5fe8a3:L5fe8a3:{c.instructions+=2;NFSU2_TR(0x5fe8a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe8a5:{NFSU2_TR(0x5fe8a5);
if(r1(R+518)){{goto L5fe8ae;}}
}
B5fe8a7:L5fe8a7:{c.instructions+=2;NFSU2_TR(0x5fe8a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fe8aa:{NFSU2_TR(0x5fe8aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe8ae:L5fe8ae:{c.instructions+=7;NFSU2_TR(0x5fe8ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fe8b2:{NFSU2_TR(0x5fe8b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fe8b6:{NFSU2_TR(0x5fe8b6);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B5fe8b8:{NFSU2_TR(0x5fe8b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fe8bb:{NFSU2_TR(0x5fe8bb);
__builtin_memmove((R+12),(R+20),4);
}
B5fe8bd:{NFSU2_TR(0x5fe8bd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5fe8bf:{NFSU2_TR(0x5fe8bf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fe860u);}goto L5fe860;}}
}
B5fe8c1:L5fe8c1:{c.instructions+=4;NFSU2_TR(0x5fe8c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fe8c2:{NFSU2_TR(0x5fe8c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fe8c3:{NFSU2_TR(0x5fe8c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fe8c4:{NFSU2_TR(0x5fe8c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fe8c5:L5fe8c5:{c.instructions+=2;NFSU2_TR(0x5fe8c5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fe8c8:{NFSU2_TR(0x5fe8c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fe8d0:L5fe8d0:{c.instructions+=11;NFSU2_TR(0x5fe8d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x818ull))));
}
B5fe8d6:{NFSU2_TR(0x5fe8d6);
__builtin_memmove((R+0),gp(0x850088),4);
}
B5fe8db:{NFSU2_TR(0x5fe8db);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe8dc:{NFSU2_TR(0x5fe8dc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe8dd:{NFSU2_TR(0x5fe8dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe8de:{NFSU2_TR(0x5fe8de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe8df:{NFSU2_TR(0x5fe8df);
__builtin_memmove((R+28),(R+4),4);
}
B5fe8e1:{NFSU2_TR(0x5fe8e1);
w1(R+12,u8(u32(r1(R+12))|u32(u8(0xffull))));
}
B5fe8e4:{NFSU2_TR(0x5fe8e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe8e6:{NFSU2_TR(0x5fe8e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe8ea:{NFSU2_TR(0x5fe8ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe8f0;}}
}
B5fe8ec:L5fe8ec:{c.instructions+=2;NFSU2_TR(0x5fe8ec);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5fe8ee:{NFSU2_TR(0x5fe8ee);
{goto L5fe929;}
}
B5fe8f0:L5fe8f0:{c.instructions+=2;NFSU2_TR(0x5fe8f0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fe8f3:{NFSU2_TR(0x5fe8f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe8f9;}}
}
B5fe8f5:L5fe8f5:{c.instructions+=2;NFSU2_TR(0x5fe8f5);
w1(R+12,u8(0x6ull));
}
B5fe8f7:{NFSU2_TR(0x5fe8f7);
{goto L5fe929;}
}
B5fe8f9:L5fe8f9:{c.instructions+=2;NFSU2_TR(0x5fe8f9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fe8fc:{NFSU2_TR(0x5fe8fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe902;}}
}
B5fe8fe:L5fe8fe:{c.instructions+=2;NFSU2_TR(0x5fe8fe);
__builtin_memmove((R+12),(R+0),1);
}
B5fe900:{NFSU2_TR(0x5fe900);
{goto L5fe929;}
}
B5fe902:L5fe902:{c.instructions+=2;NFSU2_TR(0x5fe902);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fe905:{NFSU2_TR(0x5fe905);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe90b;}}
}
B5fe907:L5fe907:{c.instructions+=2;NFSU2_TR(0x5fe907);
__builtin_memmove((R+12),(R+0),1);
}
B5fe909:{NFSU2_TR(0x5fe909);
{goto L5fe929;}
}
B5fe90b:L5fe90b:{c.instructions+=2;NFSU2_TR(0x5fe90b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fe90e:{NFSU2_TR(0x5fe90e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe914;}}
}
B5fe910:L5fe910:{c.instructions+=2;NFSU2_TR(0x5fe910);
__builtin_memmove((R+12),(R+0),1);
}
B5fe912:{NFSU2_TR(0x5fe912);
{goto L5fe929;}
}
B5fe914:L5fe914:{c.instructions+=2;NFSU2_TR(0x5fe914);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fe917:{NFSU2_TR(0x5fe917);
if(r1(R+518)){{goto L5fe927;}}
}
B5fe919:L5fe919:{c.instructions+=2;NFSU2_TR(0x5fe919);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fe91c:{NFSU2_TR(0x5fe91c);
if(r1(R+518)){{goto L5fe927;}}
}
B5fe91e:L5fe91e:{c.instructions+=2;NFSU2_TR(0x5fe91e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fe921:{NFSU2_TR(0x5fe921);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fe929;}}
}
B5fe923:L5fe923:{c.instructions+=2;NFSU2_TR(0x5fe923);
w1(R+12,u8(0x5ull));
}
B5fe925:{NFSU2_TR(0x5fe925);
{goto L5fe929;}
}
B5fe927:L5fe927:{c.instructions+=1;NFSU2_TR(0x5fe927);
w1(R+12,u8(0x4ull));
}
B5fe929:L5fe929:{c.instructions+=2;NFSU2_TR(0x5fe929);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fe92d:{NFSU2_TR(0x5fe92d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe932ull));
TAIL_STATIC(0x583fc0u,583);
}
B5fe932:L5fe932:{c.instructions+=4;NFSU2_TR(0x5fe932);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe934:{NFSU2_TR(0x5fe934);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe936:{NFSU2_TR(0x5fe936);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fe93a:{NFSU2_TR(0x5fe93a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe93full));
TAIL_STATIC(0x581d00u,581);
}
B5fe93f:L5fe93f:{c.instructions+=5;NFSU2_TR(0x5fe93f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fe942:{NFSU2_TR(0x5fe942);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fe945:{NFSU2_TR(0x5fe945);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fe947:{NFSU2_TR(0x5fe947);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe949:{NFSU2_TR(0x5fe949);
if(r1(R+518)){{goto L5fe950;}}
}
B5fe94b:L5fe94b:{c.instructions+=1;NFSU2_TR(0x5fe94b);
w4(R+0,u32(0x1ull));
}
B5fe950:L5fe950:{c.instructions+=3;NFSU2_TR(0x5fe950);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fe953:{NFSU2_TR(0x5fe953);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe955:{NFSU2_TR(0x5fe955);
if(r1(R+518)){{goto L5fe958;}}
}
B5fe957:L5fe957:{c.instructions+=1;NFSU2_TR(0x5fe957);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5fe958:L5fe958:{c.instructions+=3;NFSU2_TR(0x5fe958);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fe95b:{NFSU2_TR(0x5fe95b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe95d:{NFSU2_TR(0x5fe95d);
if(r1(R+518)){{goto L5fe960;}}
}
B5fe95f:L5fe95f:{c.instructions+=1;NFSU2_TR(0x5fe95f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5fe960:L5fe960:{c.instructions+=3;NFSU2_TR(0x5fe960);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fe963:{NFSU2_TR(0x5fe963);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe965:{NFSU2_TR(0x5fe965);
if(r1(R+518)){{goto L5fe968;}}
}
B5fe967:L5fe967:{c.instructions+=1;NFSU2_TR(0x5fe967);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5fe968:L5fe968:{c.instructions+=3;NFSU2_TR(0x5fe968);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fe96b:{NFSU2_TR(0x5fe96b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe96d:{NFSU2_TR(0x5fe96d);
if(r1(R+518)){{goto L5fe970;}}
}
B5fe96f:L5fe96f:{c.instructions+=1;NFSU2_TR(0x5fe96f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5fe970:L5fe970:{c.instructions+=3;NFSU2_TR(0x5fe970);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fe973:{NFSU2_TR(0x5fe973);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe975:{NFSU2_TR(0x5fe975);
if(r1(R+518)){{goto L5fe978;}}
}
B5fe977:L5fe977:{c.instructions+=1;NFSU2_TR(0x5fe977);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5fe978:L5fe978:{c.instructions+=5;NFSU2_TR(0x5fe978);
w4(R+0,u32(r1(R+0)));
}
B5fe97b:{NFSU2_TR(0x5fe97b);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe97d:{NFSU2_TR(0x5fe97d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe97e:{NFSU2_TR(0x5fe97e);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fe982:{NFSU2_TR(0x5fe982);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe987ull));
TAIL_STATIC(0x581d00u,581);
}
B5fe987:L5fe987:{c.instructions+=5;NFSU2_TR(0x5fe987);
w4(R+4,u32(r1(R+12)));
}
B5fe98a:{NFSU2_TR(0x5fe98a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe98c:{NFSU2_TR(0x5fe98c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe98d:{NFSU2_TR(0x5fe98d);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fe991:{NFSU2_TR(0x5fe991);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe996ull));
TAIL_STATIC(0x581d00u,581);
}
B5fe996:L5fe996:{c.instructions+=6;NFSU2_TR(0x5fe996);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fe999:{NFSU2_TR(0x5fe999);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5fe99d:{NFSU2_TR(0x5fe99d);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe99f:{NFSU2_TR(0x5fe99f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe9a0:{NFSU2_TR(0x5fe9a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fe9a4:{NFSU2_TR(0x5fe9a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe9a9ull));
TAIL_STATIC(0x581d00u,581);
}
B5fe9a9:L5fe9a9:{c.instructions+=5;NFSU2_TR(0x5fe9a9);
w4(R+4,u32(s32(s16(m2(0x89e7a0)))));
}
B5fe9b0:{NFSU2_TR(0x5fe9b0);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe9b2:{NFSU2_TR(0x5fe9b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe9b3:{NFSU2_TR(0x5fe9b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fe9b7:{NFSU2_TR(0x5fe9b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe9bcull));
TAIL_STATIC(0x581d00u,581);
}
B5fe9bc:L5fe9bc:{c.instructions+=5;NFSU2_TR(0x5fe9bc);
w4(R+8,u32(m1(0x89e7a4)));
}
B5fe9c3:{NFSU2_TR(0x5fe9c3);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe9c5:{NFSU2_TR(0x5fe9c5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe9c6:{NFSU2_TR(0x5fe9c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fe9ca:{NFSU2_TR(0x5fe9ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe9cfull));
TAIL_STATIC(0x581d00u,581);
}
B5fe9cf:L5fe9cf:{c.instructions+=5;NFSU2_TR(0x5fe9cf);
w4(R+0,u32(m1(0x89e7bc)));
}
B5fe9d6:{NFSU2_TR(0x5fe9d6);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe9d8:{NFSU2_TR(0x5fe9d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fe9d9:{NFSU2_TR(0x5fe9d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fe9dd:{NFSU2_TR(0x5fe9dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fe9e2ull));
TAIL_STATIC(0x581d00u,581);
}
B5fe9e2:L5fe9e2:{c.instructions+=3;NFSU2_TR(0x5fe9e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fe9e6:{NFSU2_TR(0x5fe9e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fe9ee:{NFSU2_TR(0x5fe9ee);
__builtin_memmove((R+28),(R+28),4);
}
B5fe9f0:L5fe9f0:{c.instructions+=4;NFSU2_TR(0x5fe9f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fe9f4:{NFSU2_TR(0x5fe9f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5fe9f6:{NFSU2_TR(0x5fe9f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fe9f8:{NFSU2_TR(0x5fe9f8);
if(r1(R+518)){{goto L5fedaf;}}
}
B5fe9fe:L5fe9fe:{c.instructions+=2;NFSU2_TR(0x5fe9fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x428ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fea05:{NFSU2_TR(0x5fea05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fea0aull));
TAIL_STATIC(0x4fe1c0u,4fe);
}
B5fea0a:L5fea0a:{c.instructions+=4;NFSU2_TR(0x5fea0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fea0e:{NFSU2_TR(0x5fea0e);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fea11:{NFSU2_TR(0x5fea11);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fea14:{NFSU2_TR(0x5fea14);
if(r1(R+518)){{goto L5feabe;}}
}
B5fea1a:L5fea1a:{c.instructions+=3;NFSU2_TR(0x5fea1a);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5fea1f:{NFSU2_TR(0x5fea1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fea21:{NFSU2_TR(0x5fea21);
if(r1(R+518)){{goto L5feabe;}}
}
B5fea27:L5fea27:{c.instructions+=3;NFSU2_TR(0x5fea27);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5fea2d:{NFSU2_TR(0x5fea2d);
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
B5fea2f:{NFSU2_TR(0x5fea2f);
if(r1(R+518)){{goto L5feabe;}}
}
B5fea35:L5fea35:{c.instructions+=2;NFSU2_TR(0x5fea35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5fea37:{NFSU2_TR(0x5fea37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fea3cull));
TAIL_STATIC(0x502fd0u,502);
}
B5fea3c:L5fea3c:{c.instructions+=2;NFSU2_TR(0x5fea3c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fea3e:{NFSU2_TR(0x5fea3e);
if(r1(R+518)){{goto L5feabe;}}
}
B5fea40:L5fea40:{c.instructions+=1;NFSU2_TR(0x5fea40);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+4,u16(s16(s8(r1(U+4)))));
}
B5fea45:L5fea45:{c.instructions+=2;NFSU2_TR(0x5fea45);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5fea49:{NFSU2_TR(0x5fea49);
if(r1(R+518)){{goto L5fea53;}}
}
B5fea4b:L5fea4b:{c.instructions+=3;NFSU2_TR(0x5fea4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5fea4d:{NFSU2_TR(0x5fea4d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fea4f:{NFSU2_TR(0x5fea4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fea45u);}goto L5fea45;}}
}
B5fea51:L5fea51:{c.instructions+=1;NFSU2_TR(0x5fea51);
{goto L5feabe;}
}
B5fea53:L5fea53:{c.instructions+=2;NFSU2_TR(0x5fea53);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fea55:{NFSU2_TR(0x5fea55);
if(r1(R+518)){{goto L5feabe;}}
}
B5fea57:L5fea57:{c.instructions+=3;NFSU2_TR(0x5fea57);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5fea5a:{NFSU2_TR(0x5fea5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fea5c:{NFSU2_TR(0x5fea5c);
if(r1(R+518)){{goto L5feabe;}}
}
B5fea5e:L5fea5e:{c.instructions+=4;NFSU2_TR(0x5fea5e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fea60:{NFSU2_TR(0x5fea60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fea61:{NFSU2_TR(0x5fea61);
u8 U[4];
w4(U+0,u32(u32(u32(0x430ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fea68:{NFSU2_TR(0x5fea68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fea6dull));
TAIL_STATIC(0x515db0u,515);
}
B5fea6d:L5fea6d:{c.instructions+=10;NFSU2_TR(0x5fea6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fea6f:{NFSU2_TR(0x5fea6f);
__builtin_memmove((R+4),gp(0x89e7bc),4);
}
B5fea75:{NFSU2_TR(0x5fea75);
u8 U[8];
w4(U+0,u32(u32(u32(0x428ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fea7c:{NFSU2_TR(0x5fea7c);
u8 U[16];
w4(U+0,u32(u32(u32(0x198ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5fea83:{NFSU2_TR(0x5fea83);
u8 U[16];
w4(U+0,u32(u32(u32(0x5c0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5fea8a:{NFSU2_TR(0x5fea8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fea90:{NFSU2_TR(0x5fea90);
u8 U[8];
w4(U+0,u32(u32(u32(0x568ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fea97:{NFSU2_TR(0x5fea97);
w4(R+0,u32(0x1ull));
}
B5fea9c:{NFSU2_TR(0x5fea9c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5fea9e:{NFSU2_TR(0x5fea9e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5feab7;}}
}
B5feaa0:L5feaa0:{c.instructions+=1;NFSU2_TR(0x5feaa0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5feaa6:L5feaa6:{c.instructions+=6;NFSU2_TR(0x5feaa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5feaa8:{NFSU2_TR(0x5feaa8);
u8 U[16];
w4(U+0,u32(u32(u32(0x56cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5feaaf:{NFSU2_TR(0x5feaaf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5feab0:{NFSU2_TR(0x5feab0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5feab3:{NFSU2_TR(0x5feab3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5feab5:{NFSU2_TR(0x5feab5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5feaa6u);}goto L5feaa6;}}
}
B5feab7:L5feab7:{c.instructions+=1;NFSU2_TR(0x5feab7);
u8 U[4];
w4(U+0,u32(u32(u32(0x428ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5feabe:L5feabe:{c.instructions+=5;NFSU2_TR(0x5feabe);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5feac2:{NFSU2_TR(0x5feac2);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5feac4:{NFSU2_TR(0x5feac4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5feac5:{NFSU2_TR(0x5feac5);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5feac9:{NFSU2_TR(0x5feac9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5feaceull));
TAIL_STATIC(0x581d00u,581);
}
B5feace:L5feace:{c.instructions+=5;NFSU2_TR(0x5feace);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+8,u32(r1(U+0)));
}
B5fead1:{NFSU2_TR(0x5fead1);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fead3:{NFSU2_TR(0x5fead3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fead4:{NFSU2_TR(0x5fead4);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fead8:{NFSU2_TR(0x5fead8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5feaddull));
TAIL_STATIC(0x581d00u,581);
}
B5feadd:L5feadd:{c.instructions+=5;NFSU2_TR(0x5feadd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5feae1:{NFSU2_TR(0x5feae1);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5feae3:{NFSU2_TR(0x5feae3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5feae4:{NFSU2_TR(0x5feae4);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5feae8:{NFSU2_TR(0x5feae8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5feaedull));
TAIL_STATIC(0x581d00u,581);
}
B5feaed:L5feaed:{c.instructions+=4;NFSU2_TR(0x5feaed);
__builtin_memmove((R+28),gp(0x89e814),4);
}
B5feaf3:{NFSU2_TR(0x5feaf3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5feaf5:{NFSU2_TR(0x5feaf5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5feaf7:{NFSU2_TR(0x5feaf7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5feb14;}}
}
B5feaf9:L5feaf9:{c.instructions+=3;NFSU2_TR(0x5feaf9);
__builtin_memmove((R+12),gp(0x89e810),4);
}
B5feaff:{NFSU2_TR(0x5feaff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5feb02:{NFSU2_TR(0x5feb02);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5feb05:L5feb05:{c.instructions+=2;NFSU2_TR(0x5feb05);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5feb07:{NFSU2_TR(0x5feb07);
if(r1(R+518)){{goto L5feb65;}}
}
B5feb09:L5feb09:{c.instructions+=4;NFSU2_TR(0x5feb09);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5feb0a:{NFSU2_TR(0x5feb0a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x940ull))));
}
B5feb10:{NFSU2_TR(0x5feb10);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5feb12:{NFSU2_TR(0x5feb12);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5feb05u);}goto L5feb05;}}
}
B5feb14:L5feb14:{c.instructions+=1;NFSU2_TR(0x5feb14);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5feb16:L5feb16:{c.instructions+=5;NFSU2_TR(0x5feb16);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5feb1a:{NFSU2_TR(0x5feb1a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5feb1c:{NFSU2_TR(0x5feb1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5feb1d:{NFSU2_TR(0x5feb1d);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5feb21:{NFSU2_TR(0x5feb21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5feb26ull));
TAIL_STATIC(0x581d00u,581);
}
B5feb26:L5feb26:{c.instructions+=4;NFSU2_TR(0x5feb26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5feb2c:{NFSU2_TR(0x5feb2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5feb2d:{NFSU2_TR(0x5feb2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5feb31:{NFSU2_TR(0x5feb31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5feb36ull));
TAIL_STATIC(0x584130u,584);
}
B5feb36:L5feb36:{c.instructions+=6;NFSU2_TR(0x5feb36);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5feb39:{NFSU2_TR(0x5feb39);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5feb3a:{NFSU2_TR(0x5feb3a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5feb3e:{NFSU2_TR(0x5feb3e);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5feb44:{NFSU2_TR(0x5feb44);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5feb47:{NFSU2_TR(0x5feb47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5feb4cull));
TAIL_STATIC(0x584130u,584);
}
B5feb4c:L5feb4c:{c.instructions+=3;NFSU2_TR(0x5feb4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5feb52:{NFSU2_TR(0x5feb52);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5feb54:{NFSU2_TR(0x5feb54);
if(r1(R+518)){{goto L5feb6f;}}
}
B5feb56:L5feb56:{c.instructions+=5;NFSU2_TR(0x5feb56);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5feb59:{NFSU2_TR(0x5feb59);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5feb5a:{NFSU2_TR(0x5feb5a);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5feb60:{NFSU2_TR(0x5feb60);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5feb63:{NFSU2_TR(0x5feb63);
{goto L5feb71;}
}
B5feb65:L5feb65:{c.instructions+=3;NFSU2_TR(0x5feb65);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x940ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5feb6b:{NFSU2_TR(0x5feb6b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B5feb6d:{NFSU2_TR(0x5feb6d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5feb16u);}goto L5feb16;}
}
B5feb6f:L5feb6f:{c.instructions+=1;NFSU2_TR(0x5feb6f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5feb71:L5feb71:{c.instructions+=2;NFSU2_TR(0x5feb71);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5feb75:{NFSU2_TR(0x5feb75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5feb7aull));
TAIL_STATIC(0x584130u,584);
}
B5feb7a:L5feb7a:{c.instructions+=5;NFSU2_TR(0x5feb7a);
{u32 ea_=u32(r4(R+24)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5feb80:{NFSU2_TR(0x5feb80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5feb81:{NFSU2_TR(0x5feb81);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5feb84:{NFSU2_TR(0x5feb84);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5feb88:{NFSU2_TR(0x5feb88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5feb8dull));
TAIL_STATIC(0x584130u,584);
}
B5feb8d:L5feb8d:{c.instructions+=5;NFSU2_TR(0x5feb8d);
{u32 ea_=u32(r4(R+24)+u32(268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5feb93:{NFSU2_TR(0x5feb93);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5feb94:{NFSU2_TR(0x5feb94);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5feb97:{NFSU2_TR(0x5feb97);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5feb9b:{NFSU2_TR(0x5feb9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5feba0ull));
TAIL_STATIC(0x584130u,584);
}
B5feba0:L5feba0:{c.instructions+=6;NFSU2_TR(0x5feba0);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5feba6:{NFSU2_TR(0x5feba6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5feba7:{NFSU2_TR(0x5feba7);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5febab:{NFSU2_TR(0x5febab);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5febb1:{NFSU2_TR(0x5febb1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5febb4:{NFSU2_TR(0x5febb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5febb9ull));
TAIL_STATIC(0x584130u,584);
}
B5febb9:L5febb9:{c.instructions+=6;NFSU2_TR(0x5febb9);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5febbf:{NFSU2_TR(0x5febbf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5febc0:{NFSU2_TR(0x5febc0);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5febc4:{NFSU2_TR(0x5febc4);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5febca:{NFSU2_TR(0x5febca);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5febcd:{NFSU2_TR(0x5febcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5febd2ull));
TAIL_STATIC(0x584130u,584);
}
B5febd2:L5febd2:{c.instructions+=5;NFSU2_TR(0x5febd2);
{u32 ea_=u32(r4(R+24)+u32(284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5febd8:{NFSU2_TR(0x5febd8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5febd9:{NFSU2_TR(0x5febd9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5febdc:{NFSU2_TR(0x5febdc);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5febe0:{NFSU2_TR(0x5febe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5febe5ull));
TAIL_STATIC(0x584130u,584);
}
B5febe5:L5febe5:{c.instructions+=4;NFSU2_TR(0x5febe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5febeb:{NFSU2_TR(0x5febeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5febec:{NFSU2_TR(0x5febec);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5febf0:{NFSU2_TR(0x5febf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5febf5ull));
TAIL_STATIC(0x584130u,584);
}
B5febf5:L5febf5:{c.instructions+=4;NFSU2_TR(0x5febf5);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5febfa:{NFSU2_TR(0x5febfa);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5febfc:{NFSU2_TR(0x5febfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5febfe:{NFSU2_TR(0x5febfe);
if(r1(R+518)){{goto L5fec35;}}
}
B5fec00:L5fec00:{c.instructions+=3;NFSU2_TR(0x5fec00);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5fec06:{NFSU2_TR(0x5fec06);
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
B5fec08:{NFSU2_TR(0x5fec08);
if(r1(R+518)){{goto L5fec35;}}
}
B5fec0a:L5fec0a:{c.instructions+=2;NFSU2_TR(0x5fec0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5fec0c:{NFSU2_TR(0x5fec0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fec11ull));
TAIL_STATIC(0x502fd0u,502);
}
B5fec11:L5fec11:{c.instructions+=2;NFSU2_TR(0x5fec11);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fec13:{NFSU2_TR(0x5fec13);
if(r1(R+518)){{goto L5fec35;}}
}
B5fec15:L5fec15:{c.instructions+=2;NFSU2_TR(0x5fec15);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+4,u16(s16(s8(r1(U+4)))));
}
B5fec1a:{NFSU2_TR(0x5fec1a);
__builtin_memmove((R+12),(R+12),4);
}
B5fec20:L5fec20:{c.instructions+=2;NFSU2_TR(0x5fec20);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5fec24:{NFSU2_TR(0x5fec24);
if(r1(R+518)){{goto L5fec2e;}}
}
B5fec26:L5fec26:{c.instructions+=3;NFSU2_TR(0x5fec26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5fec28:{NFSU2_TR(0x5fec28);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fec2a:{NFSU2_TR(0x5fec2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fec20u);}goto L5fec20;}}
}
B5fec2c:L5fec2c:{c.instructions+=1;NFSU2_TR(0x5fec2c);
{goto L5fec35;}
}
B5fec2e:L5fec2e:{c.instructions+=2;NFSU2_TR(0x5fec2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fec30:{NFSU2_TR(0x5fec30);
if(r1(R+518)){{goto L5fec35;}}
}
B5fec32:L5fec32:{c.instructions+=1;NFSU2_TR(0x5fec32);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5fec35:L5fec35:{c.instructions+=3;NFSU2_TR(0x5fec35);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5fec3b:{NFSU2_TR(0x5fec3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fec3d:{NFSU2_TR(0x5fec3d);
if(r1(R+518)){{goto L5fec52;}}
}
B5fec3f:L5fec3f:{c.instructions+=3;NFSU2_TR(0x5fec3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fec45:{NFSU2_TR(0x5fec45);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fec47:{NFSU2_TR(0x5fec47);
if(r1(R+518)){{goto L5fec52;}}
}
B5fec49:L5fec49:{c.instructions+=4;NFSU2_TR(0x5fec49);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fec4c:{NFSU2_TR(0x5fec4c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fec4d:{NFSU2_TR(0x5fec4d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fec50:{NFSU2_TR(0x5fec50);
{goto L5fec54;}
}
B5fec52:L5fec52:{c.instructions+=1;NFSU2_TR(0x5fec52);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fec54:L5fec54:{c.instructions+=2;NFSU2_TR(0x5fec54);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fec58:{NFSU2_TR(0x5fec58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fec5dull));
TAIL_STATIC(0x584130u,584);
}
B5fec5d:L5fec5d:{c.instructions+=6;NFSU2_TR(0x5fec5d);
__builtin_memmove((R+4),gp(0x89e7bc),4);
}
B5fec63:{NFSU2_TR(0x5fec63);
u8 U[16];
w4(U+0,u32(u32(u32(0x198ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5fec6a:{NFSU2_TR(0x5fec6a);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fec6c:{NFSU2_TR(0x5fec6c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fec6d:{NFSU2_TR(0x5fec6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fec71:{NFSU2_TR(0x5fec71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fec76ull));
TAIL_STATIC(0x581d00u,581);
}
B5fec76:L5fec76:{c.instructions+=3;NFSU2_TR(0x5fec76);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fec78:{NFSU2_TR(0x5fec78);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fec7a:{NFSU2_TR(0x5fec7a);
if(r1(R+518)){{goto L5fec8d;}}
}
B5fec7c:L5fec7c:{c.instructions+=3;NFSU2_TR(0x5fec7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5fec7e:{NFSU2_TR(0x5fec7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fec80:{NFSU2_TR(0x5fec80);
if(r1(R+518)){{goto L5fec8d;}}
}
B5fec82:L5fec82:{c.instructions+=2;NFSU2_TR(0x5fec82);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fec85:{NFSU2_TR(0x5fec85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fec8aull));
TAIL_STATIC(0x75bed4u,75b);
}
B5fec8a:L5fec8a:{c.instructions+=2;NFSU2_TR(0x5fec8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fec8b:{NFSU2_TR(0x5fec8b);
{goto L5fec8f;}
}
B5fec8d:L5fec8d:{c.instructions+=1;NFSU2_TR(0x5fec8d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fec8f:L5fec8f:{c.instructions+=2;NFSU2_TR(0x5fec8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fec93:{NFSU2_TR(0x5fec93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fec98ull));
TAIL_STATIC(0x581d00u,581);
}
B5fec98:L5fec98:{c.instructions+=3;NFSU2_TR(0x5fec98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fec9b:{NFSU2_TR(0x5fec9b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5fec9e:{NFSU2_TR(0x5fec9e);
if(r1(R+518)){{goto L5fecb2;}}
}
B5feca0:L5feca0:{c.instructions+=2;NFSU2_TR(0x5feca0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5feca1:{NFSU2_TR(0x5feca1);
if(r1(R+518)){{goto L5fecae;}}
}
B5feca3:L5feca3:{c.instructions+=2;NFSU2_TR(0x5feca3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5feca4:{NFSU2_TR(0x5feca4);
if(r1(R+518)){{goto L5fecaa;}}
}
B5feca6:L5feca6:{c.instructions+=2;NFSU2_TR(0x5feca6);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5feca8:{NFSU2_TR(0x5feca8);
{goto L5fecb4;}
}
B5fecaa:L5fecaa:{c.instructions+=2;NFSU2_TR(0x5fecaa);
w1(R+0,u8(0x2ull));
}
B5fecac:{NFSU2_TR(0x5fecac);
{goto L5fecb4;}
}
B5fecae:L5fecae:{c.instructions+=2;NFSU2_TR(0x5fecae);
w1(R+0,u8(0x3ull));
}
B5fecb0:{NFSU2_TR(0x5fecb0);
{goto L5fecb4;}
}
B5fecb2:L5fecb2:{c.instructions+=1;NFSU2_TR(0x5fecb2);
w1(R+0,u8(0x1ull));
}
B5fecb4:L5fecb4:{c.instructions+=5;NFSU2_TR(0x5fecb4);
w4(R+0,u32(r1(R+0)));
}
B5fecb7:{NFSU2_TR(0x5fecb7);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fecb9:{NFSU2_TR(0x5fecb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fecba:{NFSU2_TR(0x5fecba);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fecbe:{NFSU2_TR(0x5fecbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fecc3ull));
TAIL_STATIC(0x581d00u,581);
}
B5fecc3:L5fecc3:{c.instructions+=3;NFSU2_TR(0x5fecc3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5fecc5:{NFSU2_TR(0x5fecc5);
w4(R+0,u32(0x2ull));
}
B5fecca:{NFSU2_TR(0x5fecca);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24eull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fecd0:L5fecd0:{c.instructions+=2;NFSU2_TR(0x5fecd0);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5fecd5:{NFSU2_TR(0x5fecd5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5fece3;}}
}
B5fecd7:L5fecd7:{c.instructions+=4;NFSU2_TR(0x5fecd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fecda:{NFSU2_TR(0x5fecda);
w4(R+28,u32(0x1ull));
}
B5fecdf:{NFSU2_TR(0x5fecdf);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B5fece1:{NFSU2_TR(0x5fece1);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B5fece3:L5fece3:{c.instructions+=2;NFSU2_TR(0x5fece3);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((U+2),(U+0),2);
w1(R+512,u8((r2(U+2))<(u16(0x0ull))));
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B5fece7:{NFSU2_TR(0x5fece7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5fecf5;}}
}
B5fece9:L5fece9:{c.instructions+=4;NFSU2_TR(0x5fece9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fecec:{NFSU2_TR(0x5fecec);
w4(R+28,u32(0x1ull));
}
B5fecf1:{NFSU2_TR(0x5fecf1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B5fecf3:{NFSU2_TR(0x5fecf3);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B5fecf5:L5fecf5:{c.instructions+=2;NFSU2_TR(0x5fecf5);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5fecfa:{NFSU2_TR(0x5fecfa);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5fed07;}}
}
B5fecfc:L5fecfc:{c.instructions+=4;NFSU2_TR(0x5fecfc);
w4(R+28,u32(0x1ull));
}
B5fed01:{NFSU2_TR(0x5fed01);
__builtin_memmove((R+4),(R+0),4);
}
B5fed03:{NFSU2_TR(0x5fed03);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B5fed05:{NFSU2_TR(0x5fed05);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B5fed07:L5fed07:{c.instructions+=2;NFSU2_TR(0x5fed07);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5fed0c:{NFSU2_TR(0x5fed0c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5fed1a;}}
}
B5fed0e:L5fed0e:{c.instructions+=4;NFSU2_TR(0x5fed0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fed11:{NFSU2_TR(0x5fed11);
w4(R+28,u32(0x1ull));
}
B5fed16:{NFSU2_TR(0x5fed16);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B5fed18:{NFSU2_TR(0x5fed18);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B5fed1a:L5fed1a:{c.instructions+=2;NFSU2_TR(0x5fed1a);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5fed1f:{NFSU2_TR(0x5fed1f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5fed2d;}}
}
B5fed21:L5fed21:{c.instructions+=4;NFSU2_TR(0x5fed21);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fed24:{NFSU2_TR(0x5fed24);
w4(R+28,u32(0x1ull));
}
B5fed29:{NFSU2_TR(0x5fed29);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B5fed2b:{NFSU2_TR(0x5fed2b);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B5fed2d:L5fed2d:{c.instructions+=2;NFSU2_TR(0x5fed2d);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5fed32:{NFSU2_TR(0x5fed32);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5fed40;}}
}
B5fed34:L5fed34:{c.instructions+=4;NFSU2_TR(0x5fed34);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fed37:{NFSU2_TR(0x5fed37);
w4(R+28,u32(0x1ull));
}
B5fed3c:{NFSU2_TR(0x5fed3c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B5fed3e:{NFSU2_TR(0x5fed3e);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B5fed40:L5fed40:{c.instructions+=2;NFSU2_TR(0x5fed40);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5fed45:{NFSU2_TR(0x5fed45);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5fed53;}}
}
B5fed47:L5fed47:{c.instructions+=4;NFSU2_TR(0x5fed47);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fed4a:{NFSU2_TR(0x5fed4a);
w4(R+28,u32(0x1ull));
}
B5fed4f:{NFSU2_TR(0x5fed4f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B5fed51:{NFSU2_TR(0x5fed51);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B5fed53:L5fed53:{c.instructions+=2;NFSU2_TR(0x5fed53);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5fed58:{NFSU2_TR(0x5fed58);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5fed66;}}
}
B5fed5a:L5fed5a:{c.instructions+=4;NFSU2_TR(0x5fed5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fed5d:{NFSU2_TR(0x5fed5d);
w4(R+28,u32(0x1ull));
}
B5fed62:{NFSU2_TR(0x5fed62);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B5fed64:{NFSU2_TR(0x5fed64);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B5fed66:L5fed66:{c.instructions+=5;NFSU2_TR(0x5fed66);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5fed69:{NFSU2_TR(0x5fed69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fed6c:{NFSU2_TR(0x5fed6c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5fed6f:{NFSU2_TR(0x5fed6f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5fed72:{NFSU2_TR(0x5fed72);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fecd0u);}goto L5fecd0;}}
}
B5fed78:L5fed78:{c.instructions+=5;NFSU2_TR(0x5fed78);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B5fed7b:{NFSU2_TR(0x5fed7b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fed7d:{NFSU2_TR(0x5fed7d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fed7e:{NFSU2_TR(0x5fed7e);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fed82:{NFSU2_TR(0x5fed82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fed87ull));
TAIL_STATIC(0x581d00u,581);
}
B5fed87:L5fed87:{c.instructions+=2;NFSU2_TR(0x5fed87);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24cull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fed8d:{NFSU2_TR(0x5fed8d);
w4(R+28,u32(0x10ull));
}
B5fed92:L5fed92:{c.instructions+=3;NFSU2_TR(0x5fed92);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+0),(U+0),2);
}
B5fed95:{NFSU2_TR(0x5fed95);
u8 U[2];
w1(R+512,u8(0x0ull));
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B5fed98:{NFSU2_TR(0x5fed98);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5feda9;}}
}
B5fed9a:L5fed9a:{c.instructions+=5;NFSU2_TR(0x5fed9a);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B5fed9d:{NFSU2_TR(0x5fed9d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fed9f:{NFSU2_TR(0x5fed9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5feda0:{NFSU2_TR(0x5feda0);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5feda4:{NFSU2_TR(0x5feda4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5feda9ull));
TAIL_STATIC(0x581d00u,581);
}
B5feda9:L5feda9:{c.instructions+=3;NFSU2_TR(0x5feda9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B5fedac:{NFSU2_TR(0x5fedac);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5fedad:{NFSU2_TR(0x5fedad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fed92u);}goto L5fed92;}}
}
B5fedaf:L5fedaf:{c.instructions+=7;NFSU2_TR(0x5fedaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fedb3:{NFSU2_TR(0x5fedb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fedb7:{NFSU2_TR(0x5fedb7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5fedba:{NFSU2_TR(0x5fedba);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5fedbb:{NFSU2_TR(0x5fedbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fedbf:{NFSU2_TR(0x5fedbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fedc3:{NFSU2_TR(0x5fedc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fe9f0u);}goto L5fe9f0;}}
}
B5fedc9:L5fedc9:{c.instructions+=4;NFSU2_TR(0x5fedc9);
{u32 ea_=u32(r4(R+16)+u32(1052u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fedd0:{NFSU2_TR(0x5fedd0);
{u32 ea_=u32(u32(7999060u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B5fedd6:{NFSU2_TR(0x5fedd6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5fedda:{NFSU2_TR(0x5fedda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5feddfull));
TAIL_STATIC(0x75bed4u,75b);
}
B5feddf:L5feddf:{c.instructions+=10;NFSU2_TR(0x5feddf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fede3:{NFSU2_TR(0x5fede3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fede7:{NFSU2_TR(0x5fede7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fede8:{NFSU2_TR(0x5fede8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fede9:{NFSU2_TR(0x5fede9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fedea:{NFSU2_TR(0x5fedea);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5fedee:{NFSU2_TR(0x5fedee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fedef:{NFSU2_TR(0x5fedef);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fedf1:{NFSU2_TR(0x5fedf1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fedf4:{NFSU2_TR(0x5fedf4);
if(r1(R+514)){{goto L5fedfc;}}
}
B5fedf6:L5fedf6:{c.instructions+=1;NFSU2_TR(0x5fedf6);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5fedfc:L5fedfc:{c.instructions+=3;NFSU2_TR(0x5fedfc);
__builtin_memmove((R+0),gp(0x7fbe08),4);
}
B5fee01:{NFSU2_TR(0x5fee01);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fee03:{NFSU2_TR(0x5fee03);
if(r1(R+518)){{goto L5fee42;}}
}
B5fee05:L5fee05:{c.instructions+=5;NFSU2_TR(0x5fee05);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fee07:{NFSU2_TR(0x5fee07);
u8 U[4];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fee0e:{NFSU2_TR(0x5fee0e);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fee13:{NFSU2_TR(0x5fee13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fee14:{NFSU2_TR(0x5fee14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fee19ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5fee19:L5fee19:{c.instructions+=4;NFSU2_TR(0x5fee19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fee1a:{NFSU2_TR(0x5fee1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fee1e:{NFSU2_TR(0x5fee1e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fee1f:{NFSU2_TR(0x5fee1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fee24ull));
TAIL_STATIC(0x576130u,576);
}
B5fee24:L5fee24:{c.instructions+=4;NFSU2_TR(0x5fee24);
u8 U[4];
w4(U+0,u32(u32(u32(0x42cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5fee2b:{NFSU2_TR(0x5fee2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5fee2e:{NFSU2_TR(0x5fee2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fee2f:{NFSU2_TR(0x5fee2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fee34ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B5fee34:L5fee34:{c.instructions+=2;NFSU2_TR(0x5fee34);
__builtin_memmove((R+4),(R+0),4);
}
B5fee36:{NFSU2_TR(0x5fee36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fee3bull));
TAIL_STATIC(0x582310u,582);
}
B5fee3b:L5fee3b:{c.instructions+=2;NFSU2_TR(0x5fee3b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x818ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x818ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x818ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fee41:{NFSU2_TR(0x5fee41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fee42:L5fee42:{c.instructions+=3;NFSU2_TR(0x5fee42);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fee44:{NFSU2_TR(0x5fee44);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x818ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x818ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x818ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fee4a:{NFSU2_TR(0x5fee4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fee50:L5fee50:{c.instructions+=11;NFSU2_TR(0x5fee50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x41cull))));
}
B5fee56:{NFSU2_TR(0x5fee56);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fee57:{NFSU2_TR(0x5fee57);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fee58:{NFSU2_TR(0x5fee58);
u8 U[8];
w4(U+0,u32(u32(u32(0x428ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5fee5f:{NFSU2_TR(0x5fee5f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fee60:{NFSU2_TR(0x5fee60);
__builtin_memmove((R+24),(R+4),4);
}
B5fee62:{NFSU2_TR(0x5fee62);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fee63:{NFSU2_TR(0x5fee63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5fee66:{NFSU2_TR(0x5fee66);
__builtin_memmove((R+4),(R+20),4);
}
B5fee68:{NFSU2_TR(0x5fee68);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fee6a:{NFSU2_TR(0x5fee6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fee6full));
TAIL_STATIC(0x502fd0u,502);
}
B5fee6f:L5fee6f:{c.instructions+=3;NFSU2_TR(0x5fee6f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fee71:{NFSU2_TR(0x5fee71);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fee75:{NFSU2_TR(0x5fee75);
if(r1(R+518)){{goto L5fefe4;}}
}
B5fee7b:L5fee7b:{c.instructions+=1;NFSU2_TR(0x5fee7b);
{goto L5fee80;}
}
B5fee80:L5fee80:{c.instructions+=2;NFSU2_TR(0x5fee80);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fee84:{NFSU2_TR(0x5fee84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fee88;}}
}
B5fee86:L5fee86:{c.instructions+=1;NFSU2_TR(0x5fee86);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B5fee88:L5fee88:{c.instructions+=3;NFSU2_TR(0x5fee88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5fee8a:{NFSU2_TR(0x5fee8a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fee8c:{NFSU2_TR(0x5fee8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fee80u);}goto L5fee80;}}
}
B5fee8e:L5fee8e:{c.instructions+=2;NFSU2_TR(0x5fee8e);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fee90:{NFSU2_TR(0x5fee90);
if(r1(R+518)){{goto L5fefe4;}}
}
B5fee96:L5fee96:{c.instructions+=2;NFSU2_TR(0x5fee96);
{u32 ea_=u32(r4(R+16)+u32(1076u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fee9d:{NFSU2_TR(0x5fee9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5feea2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5feea2:L5feea2:{c.instructions+=3;NFSU2_TR(0x5feea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5feea5:{NFSU2_TR(0x5feea5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5feea6:{NFSU2_TR(0x5feea6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5feeabull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fe090u);}goto L5fe090;}
}
B5feeab:L5feeab:{c.instructions+=2;NFSU2_TR(0x5feeab);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5feeaf:{NFSU2_TR(0x5feeaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5feeb4ull));
TAIL_STATIC(0x583fc0u,583);
}
B5feeb4:L5feeb4:{c.instructions+=6;NFSU2_TR(0x5feeb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5feeb7:{NFSU2_TR(0x5feeb7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5feebb:{NFSU2_TR(0x5feebb);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5feebd:{NFSU2_TR(0x5feebd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5feebe:{NFSU2_TR(0x5feebe);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5feec2:{NFSU2_TR(0x5feec2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5feec7ull));
TAIL_STATIC(0x581d00u,581);
}
B5feec7:L5feec7:{c.instructions+=8;NFSU2_TR(0x5feec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5feeca:{NFSU2_TR(0x5feeca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5feed0:{NFSU2_TR(0x5feed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5feed3:{NFSU2_TR(0x5feed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5feed9:{NFSU2_TR(0x5feed9);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5feedb:{NFSU2_TR(0x5feedb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5feedc:{NFSU2_TR(0x5feedc);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5feee0:{NFSU2_TR(0x5feee0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5feee5ull));
TAIL_STATIC(0x581d00u,581);
}
B5feee5:L5feee5:{c.instructions+=6;NFSU2_TR(0x5feee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5feee8:{NFSU2_TR(0x5feee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5feeeb:{NFSU2_TR(0x5feeeb);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5feeed:{NFSU2_TR(0x5feeed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5feeee:{NFSU2_TR(0x5feeee);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5feef2:{NFSU2_TR(0x5feef2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5feef7ull));
TAIL_STATIC(0x581d00u,581);
}
B5feef7:L5feef7:{c.instructions+=5;NFSU2_TR(0x5feef7);
w4(R+0,u32(r1(R+12)));
}
B5feefa:{NFSU2_TR(0x5feefa);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5feefc:{NFSU2_TR(0x5feefc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5feefd:{NFSU2_TR(0x5feefd);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fef01:{NFSU2_TR(0x5fef01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fef06ull));
TAIL_STATIC(0x581d00u,581);
}
B5fef06:L5fef06:{c.instructions+=4;NFSU2_TR(0x5fef06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5fef09:{NFSU2_TR(0x5fef09);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5fef0d:{NFSU2_TR(0x5fef0d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fef0f:{NFSU2_TR(0x5fef0f);
if(r1(R+518)){{goto L5fefce;}}
}
B5fef15:L5fef15:{c.instructions+=2;NFSU2_TR(0x5fef15);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fef19:{NFSU2_TR(0x5fef19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fefc4;}}
}
B5fef1f:L5fef1f:{c.instructions+=4;NFSU2_TR(0x5fef1f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5fef22:{NFSU2_TR(0x5fef22);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fef25:{NFSU2_TR(0x5fef25);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fef29:{NFSU2_TR(0x5fef29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fef2eull));
TAIL_STATIC(0x75bed4u,75b);
}
B5fef2e:L5fef2e:{c.instructions+=12;NFSU2_TR(0x5fef2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fef31:{NFSU2_TR(0x5fef31);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fef35:{NFSU2_TR(0x5fef35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B5fef38:{NFSU2_TR(0x5fef38);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fef3c:{NFSU2_TR(0x5fef3c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fef40:{NFSU2_TR(0x5fef40);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fef42:{NFSU2_TR(0x5fef42);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5fef46:{NFSU2_TR(0x5fef46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fef47:{NFSU2_TR(0x5fef47);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fef4d:{NFSU2_TR(0x5fef4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fef51:{NFSU2_TR(0x5fef51);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fef55:{NFSU2_TR(0x5fef55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fef5aull));
TAIL_STATIC(0x583fe0u,583);
}
B5fef5a:L5fef5a:{c.instructions+=2;NFSU2_TR(0x5fef5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fef5e:{NFSU2_TR(0x5fef5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fef63ull));
TAIL_STATIC(0x56c600u,56c);
}
B5fef63:L5fef63:{c.instructions+=2;NFSU2_TR(0x5fef63);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fef65:{NFSU2_TR(0x5fef65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fefc4;}}
}
B5fef67:L5fef67:{c.instructions+=3;NFSU2_TR(0x5fef67);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B5fef6c:{NFSU2_TR(0x5fef6c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fef6e:{NFSU2_TR(0x5fef6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fef7d;}}
}
B5fef70:L5fef70:{c.instructions+=3;NFSU2_TR(0x5fef70);
__builtin_memmove((R+0),gp(0x890104),4);
}
B5fef75:{NFSU2_TR(0x5fef75);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fef77:{NFSU2_TR(0x5fef77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fef7d;}}
}
B5fef79:L5fef79:{c.instructions+=2;NFSU2_TR(0x5fef79);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fef7b:{NFSU2_TR(0x5fef7b);
{goto L5fef82;}
}
B5fef7d:L5fef7d:{c.instructions+=1;NFSU2_TR(0x5fef7d);
w4(R+0,u32(0x1ull));
}
B5fef82:L5fef82:{c.instructions+=8;NFSU2_TR(0x5fef82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fef85:{NFSU2_TR(0x5fef85);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5fef87:{NFSU2_TR(0x5fef87);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fef89:{NFSU2_TR(0x5fef89);
__builtin_memmove((R+0),gp(0x850098),1);
}
B5fef8e:{NFSU2_TR(0x5fef8e);
__builtin_memmove((R+4),(R+518),1);
}
B5fef91:{NFSU2_TR(0x5fef91);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fef93:{NFSU2_TR(0x5fef93);
u8 U[12];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5fef97:{NFSU2_TR(0x5fef97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fefa2;}}
}
B5fef99:L5fef99:{c.instructions+=3;NFSU2_TR(0x5fef99);
__builtin_memmove((R+0),gp(0x864fac),4);
}
B5fef9e:{NFSU2_TR(0x5fef9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fefa0:{NFSU2_TR(0x5fefa0);
if(r1(R+518)){{goto L5fefc4;}}
}
B5fefa2:L5fefa2:{c.instructions+=3;NFSU2_TR(0x5fefa2);
__builtin_memmove((R+0),gp(0x89d061),1);
}
B5fefa7:{NFSU2_TR(0x5fefa7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fefa9:{NFSU2_TR(0x5fefa9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fefc4;}}
}
B5fefab:L5fefab:{c.instructions+=4;NFSU2_TR(0x5fefab);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fefad:{NFSU2_TR(0x5fefad);
u8 U[14];
w4(U+0,u32(u32(u32(0x24cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+0),(U+12),2);
}
B5fefb5:{NFSU2_TR(0x5fefb5);
w1(R+512,u8((r2(R+0))<(u16(0xfe01ull))));
}
B5fefb9:{NFSU2_TR(0x5fefb9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5fefc4;}}
}
B5fefbb:L5fefbb:{c.instructions+=2;NFSU2_TR(0x5fefbb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5fefbc:{NFSU2_TR(0x5fefbc);
u8 U[14];
w4(U+0,u32(u32(u32(0x24cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B5fefc4:L5fefc4:{c.instructions+=3;NFSU2_TR(0x5fefc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5fefc6:{NFSU2_TR(0x5fefc6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fefc8:{NFSU2_TR(0x5fefc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fef15u);}goto L5fef15;}}
}
B5fefce:L5fefce:{c.instructions+=1;NFSU2_TR(0x5fefce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fefd3ull));
TAIL_STATIC(0x5838a0u,583);
}
B5fefd3:L5fefd3:{c.instructions+=2;NFSU2_TR(0x5fefd3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fefd5:{NFSU2_TR(0x5fefd5);
if(r1(R+518)){{goto L5fefe4;}}
}
B5fefd7:L5fefd7:{c.instructions+=3;NFSU2_TR(0x5fefd7);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fefdb:{NFSU2_TR(0x5fefdb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fefdc:{NFSU2_TR(0x5fefdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fefe1ull));
TAIL_STATIC(0x58c2d0u,58c);
}
B5fefe1:L5fefe1:{c.instructions+=1;NFSU2_TR(0x5fefe1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5fefe4:L5fefe4:{c.instructions+=6;NFSU2_TR(0x5fefe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fefe5:{NFSU2_TR(0x5fefe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fefe6:{NFSU2_TR(0x5fefe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fefe7:{NFSU2_TR(0x5fefe7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fefe8:{NFSU2_TR(0x5fefe8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x41cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x41cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x41cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fefee:{NFSU2_TR(0x5fefee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x5fe,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
