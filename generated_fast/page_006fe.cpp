#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_465(u8* __restrict R,Cpu& c);
u32 body_477(u8* __restrict R,Cpu& c);
u32 body_483(u8* __restrict R,Cpu& c);
u32 body_64b(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_6f8(u8* __restrict R,Cpu& c);
u32 body_6fb(u8* __restrict R,Cpu& c);
u32 body_6fc(u8* __restrict R,Cpu& c);
u32 body_6fd(u8* __restrict R,Cpu& c);
u32 body_6ff(u8* __restrict R,Cpu& c);
u32 body_700(u8* __restrict R,Cpu& c);
u32 body_701(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_722(u8* __restrict R,Cpu& c);
u32 body_723(u8* __restrict R,Cpu& c);
u32 body_724(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_770(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6fe,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6fe,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6fe(u8* __restrict R,Cpu& c);
u32 page_6fe(Cpu& c){return body_6fe(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6fe(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6fe001:goto L6fe001;
case 0x6fe002:goto L6fe002;
case 0x6fe003:c.instructions+=3;goto B6fe003;
case 0x6fe005:c.instructions+=2;goto B6fe005;
case 0x6fe007:c.instructions+=1;goto B6fe007;
case 0x6fe00a:goto L6fe00a;
case 0x6fe00d:c.instructions+=1;goto B6fe00d;
case 0x6fe00f:goto L6fe00f;
case 0x6fe015:c.instructions+=1;goto B6fe015;
case 0x6fe017:goto L6fe017;
case 0x6fe01e:goto L6fe01e;
case 0x6fe020:c.instructions+=3;goto B6fe020;
case 0x6fe022:c.instructions+=2;goto B6fe022;
case 0x6fe024:c.instructions+=1;goto B6fe024;
case 0x6fe027:goto L6fe027;
case 0x6fe02a:c.instructions+=2;goto B6fe02a;
case 0x6fe02b:c.instructions+=1;goto B6fe02b;
case 0x6fe02c:goto L6fe02c;
case 0x6fe02d:c.instructions+=19;goto B6fe02d;
case 0x6fe02f:c.instructions+=18;goto B6fe02f;
case 0x6fe030:c.instructions+=17;goto B6fe030;
case 0x6fe031:c.instructions+=16;goto B6fe031;
case 0x6fe034:c.instructions+=15;goto B6fe034;
case 0x6fe036:c.instructions+=14;goto B6fe036;
case 0x6fe037:c.instructions+=13;goto B6fe037;
case 0x6fe03d:c.instructions+=12;goto B6fe03d;
case 0x6fe040:c.instructions+=11;goto B6fe040;
case 0x6fe042:c.instructions+=10;goto B6fe042;
case 0x6fe043:c.instructions+=9;goto B6fe043;
case 0x6fe044:c.instructions+=8;goto B6fe044;
case 0x6fe045:c.instructions+=7;goto B6fe045;
case 0x6fe046:c.instructions+=6;goto B6fe046;
case 0x6fe048:c.instructions+=5;goto B6fe048;
case 0x6fe04c:c.instructions+=4;goto B6fe04c;
case 0x6fe053:c.instructions+=3;goto B6fe053;
case 0x6fe055:c.instructions+=2;goto B6fe055;
case 0x6fe057:c.instructions+=1;goto B6fe057;
case 0x6fe05a:goto L6fe05a;
case 0x6fe05d:c.instructions+=2;goto B6fe05d;
case 0x6fe05f:c.instructions+=1;goto B6fe05f;
case 0x6fe062:goto L6fe062;
case 0x6fe065:c.instructions+=2;goto B6fe065;
case 0x6fe067:c.instructions+=1;goto B6fe067;
case 0x6fe06a:goto L6fe06a;
case 0x6fe06d:c.instructions+=1;goto B6fe06d;
case 0x6fe072:goto L6fe072;
case 0x6fe073:c.instructions+=3;goto B6fe073;
case 0x6fe076:c.instructions+=2;goto B6fe076;
case 0x6fe078:c.instructions+=1;goto B6fe078;
case 0x6fe07a:goto L6fe07a;
case 0x6fe07b:c.instructions+=6;goto B6fe07b;
case 0x6fe07e:c.instructions+=5;goto B6fe07e;
case 0x6fe07f:c.instructions+=4;goto B6fe07f;
case 0x6fe081:c.instructions+=3;goto B6fe081;
case 0x6fe082:c.instructions+=2;goto B6fe082;
case 0x6fe083:c.instructions+=1;goto B6fe083;
case 0x6fe086:goto L6fe086;
case 0x6fe087:c.instructions+=4;goto B6fe087;
case 0x6fe089:c.instructions+=3;goto B6fe089;
case 0x6fe08a:c.instructions+=2;goto B6fe08a;
case 0x6fe08c:c.instructions+=1;goto B6fe08c;
case 0x6fe091:goto L6fe091;
case 0x6fe095:c.instructions+=1;goto B6fe095;
case 0x6fe097:goto L6fe097;
case 0x6fe099:c.instructions+=2;goto B6fe099;
case 0x6fe09a:c.instructions+=1;goto B6fe09a;
case 0x6fe09f:goto L6fe09f;
case 0x6fe0a0:c.instructions+=1;goto B6fe0a0;
case 0x6fe0a1:goto L6fe0a1;
case 0x6fe0a3:c.instructions+=3;goto B6fe0a3;
case 0x6fe0a4:c.instructions+=2;goto B6fe0a4;
case 0x6fe0a5:c.instructions+=1;goto B6fe0a5;
case 0x6fe0a8:goto L6fe0a8;
case 0x6fe0a9:c.instructions+=5;goto B6fe0a9;
case 0x6fe0ab:c.instructions+=4;goto B6fe0ab;
case 0x6fe0ac:c.instructions+=3;goto B6fe0ac;
case 0x6fe0af:c.instructions+=2;goto B6fe0af;
case 0x6fe0b0:c.instructions+=1;goto B6fe0b0;
case 0x6fe0b3:goto L6fe0b3;
case 0x6fe0b6:c.instructions+=2;goto B6fe0b6;
case 0x6fe0b9:c.instructions+=1;goto B6fe0b9;
case 0x6fe0bb:goto L6fe0bb;
case 0x6fe0bf:c.instructions+=1;goto B6fe0bf;
case 0x6fe0c1:goto L6fe0c1;
case 0x6fe0c5:c.instructions+=1;goto B6fe0c5;
case 0x6fe0c7:goto L6fe0c7;
case 0x6fe0cc:c.instructions+=1;goto B6fe0cc;
case 0x6fe0ce:goto L6fe0ce;
case 0x6fe0d0:c.instructions+=3;goto B6fe0d0;
case 0x6fe0d2:c.instructions+=2;goto B6fe0d2;
case 0x6fe0d3:c.instructions+=1;goto B6fe0d3;
case 0x6fe0d5:goto L6fe0d5;
case 0x6fe0d8:c.instructions+=4;goto B6fe0d8;
case 0x6fe0d9:c.instructions+=3;goto B6fe0d9;
case 0x6fe0de:c.instructions+=2;goto B6fe0de;
case 0x6fe0df:c.instructions+=1;goto B6fe0df;
case 0x6fe0e4:goto L6fe0e4;
case 0x6fe0e7:c.instructions+=1;goto B6fe0e7;
case 0x6fe0ea:goto L6fe0ea;
case 0x6fe0eb:c.instructions+=2;goto B6fe0eb;
case 0x6fe0ec:c.instructions+=1;goto B6fe0ec;
case 0x6fe0ee:goto L6fe0ee;
case 0x6fe0f1:c.instructions+=4;goto B6fe0f1;
case 0x6fe0f2:c.instructions+=3;goto B6fe0f2;
case 0x6fe0f3:c.instructions+=2;goto B6fe0f3;
case 0x6fe0f4:c.instructions+=1;goto B6fe0f4;
case 0x6fe0f5:goto L6fe0f5;
case 0x6fe0f6:c.instructions+=6;goto B6fe0f6;
case 0x6fe0f8:c.instructions+=5;goto B6fe0f8;
case 0x6fe0fb:c.instructions+=4;goto B6fe0fb;
case 0x6fe0fc:c.instructions+=3;goto B6fe0fc;
case 0x6fe0ff:c.instructions+=2;goto B6fe0ff;
case 0x6fe102:c.instructions+=1;goto B6fe102;
case 0x6fe104:goto L6fe104;
case 0x6fe105:c.instructions+=4;goto B6fe105;
case 0x6fe106:c.instructions+=3;goto B6fe106;
case 0x6fe108:c.instructions+=2;goto B6fe108;
case 0x6fe109:c.instructions+=1;goto B6fe109;
case 0x6fe10b:goto L6fe10b;
case 0x6fe10d:c.instructions+=2;goto B6fe10d;
case 0x6fe110:c.instructions+=1;goto B6fe110;
case 0x6fe112:goto L6fe112;
case 0x6fe116:c.instructions+=1;goto B6fe116;
case 0x6fe118:goto L6fe118;
case 0x6fe11b:goto L6fe11b;
case 0x6fe11d:c.instructions+=2;goto B6fe11d;
case 0x6fe11f:c.instructions+=1;goto B6fe11f;
case 0x6fe121:goto L6fe121;
case 0x6fe123:c.instructions+=1;goto B6fe123;
case 0x6fe125:goto L6fe125;
case 0x6fe127:c.instructions+=1;goto B6fe127;
case 0x6fe129:goto L6fe129;
case 0x6fe12c:c.instructions+=2;goto B6fe12c;
case 0x6fe12f:c.instructions+=1;goto B6fe12f;
case 0x6fe131:goto L6fe131;
case 0x6fe133:c.instructions+=1;goto B6fe133;
case 0x6fe135:goto L6fe135;
case 0x6fe137:c.instructions+=1;goto B6fe137;
case 0x6fe139:goto L6fe139;
case 0x6fe13c:c.instructions+=1;goto B6fe13c;
case 0x6fe13f:goto L6fe13f;
case 0x6fe142:c.instructions+=5;goto B6fe142;
case 0x6fe144:c.instructions+=4;goto B6fe144;
case 0x6fe145:c.instructions+=3;goto B6fe145;
case 0x6fe148:c.instructions+=2;goto B6fe148;
case 0x6fe14b:c.instructions+=1;goto B6fe14b;
case 0x6fe14d:goto L6fe14d;
case 0x6fe150:c.instructions+=5;goto B6fe150;
case 0x6fe151:c.instructions+=4;goto B6fe151;
case 0x6fe152:c.instructions+=3;goto B6fe152;
case 0x6fe155:c.instructions+=2;goto B6fe155;
case 0x6fe158:c.instructions+=1;goto B6fe158;
case 0x6fe15a:goto L6fe15a;
case 0x6fe15e:c.instructions+=5;goto B6fe15e;
case 0x6fe161:c.instructions+=4;goto B6fe161;
case 0x6fe162:c.instructions+=3;goto B6fe162;
case 0x6fe163:c.instructions+=2;goto B6fe163;
case 0x6fe164:c.instructions+=1;goto B6fe164;
case 0x6fe165:goto L6fe165;
case 0x6fe168:c.instructions+=1;goto B6fe168;
case 0x6fe16a:goto L6fe16a;
case 0x6fe16b:c.instructions+=1;goto B6fe16b;
case 0x6fe16c:goto L6fe16c;
case 0x6fe170:c.instructions+=3;goto B6fe170;
case 0x6fe171:c.instructions+=2;goto B6fe171;
case 0x6fe172:c.instructions+=1;goto B6fe172;
case 0x6fe173:goto L6fe173;
case 0x6fe174:c.instructions+=5;goto B6fe174;
case 0x6fe176:c.instructions+=4;goto B6fe176;
case 0x6fe177:c.instructions+=3;goto B6fe177;
case 0x6fe17a:c.instructions+=2;goto B6fe17a;
case 0x6fe17d:c.instructions+=1;goto B6fe17d;
case 0x6fe17f:goto L6fe17f;
case 0x6fe181:c.instructions+=1;goto B6fe181;
case 0x6fe183:goto L6fe183;
case 0x6fe186:c.instructions+=18;goto B6fe186;
case 0x6fe189:c.instructions+=17;goto B6fe189;
case 0x6fe18c:c.instructions+=16;goto B6fe18c;
case 0x6fe18d:c.instructions+=15;goto B6fe18d;
case 0x6fe190:c.instructions+=14;goto B6fe190;
case 0x6fe193:c.instructions+=13;goto B6fe193;
case 0x6fe195:c.instructions+=12;goto B6fe195;
case 0x6fe197:c.instructions+=11;goto B6fe197;
case 0x6fe198:c.instructions+=10;goto B6fe198;
case 0x6fe19a:c.instructions+=9;goto B6fe19a;
case 0x6fe19d:c.instructions+=8;goto B6fe19d;
case 0x6fe19f:c.instructions+=7;goto B6fe19f;
case 0x6fe1a0:c.instructions+=6;goto B6fe1a0;
case 0x6fe1a3:c.instructions+=5;goto B6fe1a3;
case 0x6fe1a5:c.instructions+=4;goto B6fe1a5;
case 0x6fe1a6:c.instructions+=3;goto B6fe1a6;
case 0x6fe1a8:c.instructions+=2;goto B6fe1a8;
case 0x6fe1aa:c.instructions+=1;goto B6fe1aa;
case 0x6fe1ac:goto L6fe1ac;
case 0x6fe1ad:goto L6fe1ad;
case 0x6fe1b0:c.instructions+=8;goto B6fe1b0;
case 0x6fe1b2:c.instructions+=7;goto B6fe1b2;
case 0x6fe1b5:c.instructions+=6;goto B6fe1b5;
case 0x6fe1b8:c.instructions+=5;goto B6fe1b8;
case 0x6fe1ba:c.instructions+=4;goto B6fe1ba;
case 0x6fe1c1:c.instructions+=3;goto B6fe1c1;
case 0x6fe1c2:c.instructions+=2;goto B6fe1c2;
case 0x6fe1c3:c.instructions+=1;goto B6fe1c3;
case 0x6fe1c5:goto L6fe1c5;
case 0x6fe1c6:goto L6fe1c6;
case 0x6fe1c8:goto L6fe1c8;
case 0x6fe1c9:c.instructions+=2;goto B6fe1c9;
case 0x6fe1ca:c.instructions+=1;goto B6fe1ca;
case 0x6fe1cb:goto L6fe1cb;
case 0x6fe1cc:c.instructions+=6;goto B6fe1cc;
case 0x6fe1ce:c.instructions+=5;goto B6fe1ce;
case 0x6fe1cf:c.instructions+=4;goto B6fe1cf;
case 0x6fe1d0:c.instructions+=3;goto B6fe1d0;
case 0x6fe1d2:c.instructions+=2;goto B6fe1d2;
case 0x6fe1d4:c.instructions+=1;goto B6fe1d4;
case 0x6fe1d6:goto L6fe1d6;
case 0x6fe1d9:c.instructions+=3;goto B6fe1d9;
case 0x6fe1da:c.instructions+=2;goto B6fe1da;
case 0x6fe1dd:c.instructions+=1;goto B6fe1dd;
case 0x6fe1e2:goto L6fe1e2;
case 0x6fe1e4:c.instructions+=3;goto B6fe1e4;
case 0x6fe1e5:c.instructions+=2;goto B6fe1e5;
case 0x6fe1e6:c.instructions+=1;goto B6fe1e6;
case 0x6fe1e8:goto L6fe1e8;
case 0x6fe1ea:goto L6fe1ea;
case 0x6fe1eb:goto L6fe1eb;
case 0x6fe1ed:c.instructions+=2;goto B6fe1ed;
case 0x6fe1ef:c.instructions+=1;goto B6fe1ef;
case 0x6fe1f1:goto L6fe1f1;
case 0x6fe1f3:c.instructions+=4;goto B6fe1f3;
case 0x6fe1f4:c.instructions+=3;goto B6fe1f4;
case 0x6fe1f5:c.instructions+=2;goto B6fe1f5;
case 0x6fe1f6:c.instructions+=1;goto B6fe1f6;
case 0x6fe1f7:goto L6fe1f7;
case 0x6fe1f8:c.instructions+=8;goto B6fe1f8;
case 0x6fe1fa:c.instructions+=7;goto B6fe1fa;
case 0x6fe1fb:c.instructions+=6;goto B6fe1fb;
case 0x6fe1fc:c.instructions+=5;goto B6fe1fc;
case 0x6fe1fd:c.instructions+=4;goto B6fe1fd;
case 0x6fe200:c.instructions+=3;goto B6fe200;
case 0x6fe201:c.instructions+=2;goto B6fe201;
case 0x6fe206:c.instructions+=1;goto B6fe206;
case 0x6fe20b:goto L6fe20b;
case 0x6fe20d:c.instructions+=4;goto B6fe20d;
case 0x6fe20f:c.instructions+=3;goto B6fe20f;
case 0x6fe211:c.instructions+=2;goto B6fe211;
case 0x6fe212:c.instructions+=1;goto B6fe212;
case 0x6fe218:goto L6fe218;
case 0x6fe21a:c.instructions+=2;goto B6fe21a;
case 0x6fe21c:c.instructions+=1;goto B6fe21c;
case 0x6fe21e:goto L6fe21e;
case 0x6fe21f:c.instructions+=3;goto B6fe21f;
case 0x6fe222:c.instructions+=2;goto B6fe222;
case 0x6fe224:c.instructions+=1;goto B6fe224;
case 0x6fe229:goto L6fe229;
case 0x6fe22b:c.instructions+=3;goto B6fe22b;
case 0x6fe22c:c.instructions+=2;goto B6fe22c;
case 0x6fe22d:c.instructions+=1;goto B6fe22d;
case 0x6fe22f:goto L6fe22f;
case 0x6fe232:c.instructions+=3;goto B6fe232;
case 0x6fe233:c.instructions+=2;goto B6fe233;
case 0x6fe236:c.instructions+=1;goto B6fe236;
case 0x6fe23b:goto L6fe23b;
case 0x6fe23d:c.instructions+=3;goto B6fe23d;
case 0x6fe23e:c.instructions+=2;goto B6fe23e;
case 0x6fe23f:c.instructions+=1;goto B6fe23f;
case 0x6fe241:goto L6fe241;
case 0x6fe243:c.instructions+=2;goto B6fe243;
case 0x6fe244:c.instructions+=1;goto B6fe244;
case 0x6fe246:goto L6fe246;
case 0x6fe248:goto L6fe248;
case 0x6fe24b:c.instructions+=1;goto B6fe24b;
case 0x6fe250:goto L6fe250;
case 0x6fe252:c.instructions+=1;goto B6fe252;
case 0x6fe254:goto L6fe254;
case 0x6fe255:c.instructions+=3;goto B6fe255;
case 0x6fe258:c.instructions+=2;goto B6fe258;
case 0x6fe25a:c.instructions+=1;goto B6fe25a;
case 0x6fe25f:goto L6fe25f;
case 0x6fe261:c.instructions+=3;goto B6fe261;
case 0x6fe262:c.instructions+=2;goto B6fe262;
case 0x6fe263:c.instructions+=1;goto B6fe263;
case 0x6fe265:goto L6fe265;
case 0x6fe268:c.instructions+=3;goto B6fe268;
case 0x6fe269:c.instructions+=2;goto B6fe269;
case 0x6fe26c:c.instructions+=1;goto B6fe26c;
case 0x6fe271:goto L6fe271;
case 0x6fe273:c.instructions+=3;goto B6fe273;
case 0x6fe274:c.instructions+=2;goto B6fe274;
case 0x6fe275:c.instructions+=1;goto B6fe275;
case 0x6fe277:goto L6fe277;
case 0x6fe279:c.instructions+=1;goto B6fe279;
case 0x6fe27a:goto L6fe27a;
case 0x6fe27d:c.instructions+=1;goto B6fe27d;
case 0x6fe282:goto L6fe282;
case 0x6fe284:c.instructions+=1;goto B6fe284;
case 0x6fe286:goto L6fe286;
case 0x6fe288:c.instructions+=1;goto B6fe288;
case 0x6fe28a:goto L6fe28a;
case 0x6fe28c:c.instructions+=1;goto B6fe28c;
case 0x6fe28e:goto L6fe28e;
case 0x6fe291:c.instructions+=4;goto B6fe291;
case 0x6fe292:c.instructions+=3;goto B6fe292;
case 0x6fe295:c.instructions+=2;goto B6fe295;
case 0x6fe297:c.instructions+=1;goto B6fe297;
case 0x6fe29c:goto L6fe29c;
case 0x6fe29d:c.instructions+=3;goto B6fe29d;
case 0x6fe2a0:c.instructions+=2;goto B6fe2a0;
case 0x6fe2a2:c.instructions+=1;goto B6fe2a2;
case 0x6fe2a7:goto L6fe2a7;
case 0x6fe2aa:c.instructions+=4;goto B6fe2aa;
case 0x6fe2ac:c.instructions+=3;goto B6fe2ac;
case 0x6fe2af:c.instructions+=2;goto B6fe2af;
case 0x6fe2b1:c.instructions+=1;goto B6fe2b1;
case 0x6fe2b3:goto L6fe2b3;
case 0x6fe2b4:c.instructions+=3;goto B6fe2b4;
case 0x6fe2b7:c.instructions+=2;goto B6fe2b7;
case 0x6fe2b9:c.instructions+=1;goto B6fe2b9;
case 0x6fe2be:goto L6fe2be;
case 0x6fe2c0:c.instructions+=3;goto B6fe2c0;
case 0x6fe2c1:c.instructions+=2;goto B6fe2c1;
case 0x6fe2c2:c.instructions+=1;goto B6fe2c2;
case 0x6fe2c4:goto L6fe2c4;
case 0x6fe2c7:c.instructions+=3;goto B6fe2c7;
case 0x6fe2c8:c.instructions+=2;goto B6fe2c8;
case 0x6fe2cb:c.instructions+=1;goto B6fe2cb;
case 0x6fe2d0:goto L6fe2d0;
case 0x6fe2d2:c.instructions+=3;goto B6fe2d2;
case 0x6fe2d3:c.instructions+=2;goto B6fe2d3;
case 0x6fe2d4:c.instructions+=1;goto B6fe2d4;
case 0x6fe2d6:goto L6fe2d6;
case 0x6fe2d8:c.instructions+=1;goto B6fe2d8;
case 0x6fe2d9:goto L6fe2d9;
case 0x6fe2dc:c.instructions+=1;goto B6fe2dc;
case 0x6fe2de:goto L6fe2de;
case 0x6fe2e1:goto L6fe2e1;
case 0x6fe2e3:c.instructions+=2;goto B6fe2e3;
case 0x6fe2e5:c.instructions+=1;goto B6fe2e5;
case 0x6fe2e7:goto L6fe2e7;
case 0x6fe2e9:c.instructions+=1;goto B6fe2e9;
case 0x6fe2eb:goto L6fe2eb;
case 0x6fe2ec:c.instructions+=2;goto B6fe2ec;
case 0x6fe2ee:c.instructions+=1;goto B6fe2ee;
case 0x6fe2f0:goto L6fe2f0;
case 0x6fe2f2:c.instructions+=1;goto B6fe2f2;
case 0x6fe2f4:goto L6fe2f4;
case 0x6fe2f7:c.instructions+=3;goto B6fe2f7;
case 0x6fe2f8:c.instructions+=2;goto B6fe2f8;
case 0x6fe2f9:c.instructions+=1;goto B6fe2f9;
case 0x6fe2fe:goto L6fe2fe;
case 0x6fe2ff:c.instructions+=1;goto B6fe2ff;
case 0x6fe301:goto L6fe301;
case 0x6fe303:goto L6fe303;
case 0x6fe305:goto L6fe305;
case 0x6fe306:c.instructions+=4;goto B6fe306;
case 0x6fe307:c.instructions+=3;goto B6fe307;
case 0x6fe308:c.instructions+=2;goto B6fe308;
case 0x6fe309:c.instructions+=1;goto B6fe309;
case 0x6fe30a:goto L6fe30a;
case 0x6fe30c:c.instructions+=1;goto B6fe30c;
case 0x6fe30e:goto L6fe30e;
case 0x6fe311:c.instructions+=2;goto B6fe311;
case 0x6fe312:c.instructions+=1;goto B6fe312;
case 0x6fe317:goto L6fe317;
case 0x6fe319:c.instructions+=3;goto B6fe319;
case 0x6fe31c:c.instructions+=2;goto B6fe31c;
case 0x6fe31d:c.instructions+=1;goto B6fe31d;
case 0x6fe322:goto L6fe322;
case 0x6fe324:c.instructions+=3;goto B6fe324;
case 0x6fe325:c.instructions+=2;goto B6fe325;
case 0x6fe326:c.instructions+=1;goto B6fe326;
case 0x6fe328:goto L6fe328;
case 0x6fe32a:c.instructions+=2;goto B6fe32a;
case 0x6fe32c:c.instructions+=1;goto B6fe32c;
case 0x6fe32e:goto L6fe32e;
case 0x6fe32f:goto L6fe32f;
case 0x6fe330:c.instructions+=1;goto B6fe330;
case 0x6fe332:goto L6fe332;
case 0x6fe333:goto L6fe333;
case 0x6fe334:c.instructions+=2;goto B6fe334;
case 0x6fe335:c.instructions+=1;goto B6fe335;
case 0x6fe33a:goto L6fe33a;
case 0x6fe33c:c.instructions+=3;goto B6fe33c;
case 0x6fe33d:c.instructions+=2;goto B6fe33d;
case 0x6fe33e:c.instructions+=1;goto B6fe33e;
case 0x6fe340:goto L6fe340;
case 0x6fe342:c.instructions+=3;goto B6fe342;
case 0x6fe343:c.instructions+=2;goto B6fe343;
case 0x6fe345:c.instructions+=1;goto B6fe345;
case 0x6fe347:goto L6fe347;
case 0x6fe349:goto L6fe349;
case 0x6fe34a:c.instructions+=3;goto B6fe34a;
case 0x6fe34b:c.instructions+=2;goto B6fe34b;
case 0x6fe34c:c.instructions+=1;goto B6fe34c;
case 0x6fe351:goto L6fe351;
case 0x6fe353:c.instructions+=5;goto B6fe353;
case 0x6fe354:c.instructions+=4;goto B6fe354;
case 0x6fe356:c.instructions+=3;goto B6fe356;
case 0x6fe357:c.instructions+=2;goto B6fe357;
case 0x6fe358:c.instructions+=1;goto B6fe358;
case 0x6fe35a:goto L6fe35a;
case 0x6fe35c:c.instructions+=2;goto B6fe35c;
case 0x6fe35d:c.instructions+=1;goto B6fe35d;
case 0x6fe35f:goto L6fe35f;
case 0x6fe365:c.instructions+=2;goto B6fe365;
case 0x6fe36c:c.instructions+=1;goto B6fe36c;
case 0x6fe371:goto L6fe371;
case 0x6fe372:c.instructions+=9;goto B6fe372;
case 0x6fe374:c.instructions+=8;goto B6fe374;
case 0x6fe375:c.instructions+=7;goto B6fe375;
case 0x6fe376:c.instructions+=6;goto B6fe376;
case 0x6fe379:c.instructions+=5;goto B6fe379;
case 0x6fe37c:c.instructions+=4;goto B6fe37c;
case 0x6fe37e:c.instructions+=3;goto B6fe37e;
case 0x6fe37f:c.instructions+=2;goto B6fe37f;
case 0x6fe380:c.instructions+=1;goto B6fe380;
case 0x6fe383:goto L6fe383;
case 0x6fe385:c.instructions+=6;goto B6fe385;
case 0x6fe386:c.instructions+=5;goto B6fe386;
case 0x6fe388:c.instructions+=4;goto B6fe388;
case 0x6fe38d:c.instructions+=3;goto B6fe38d;
case 0x6fe38e:c.instructions+=2;goto B6fe38e;
case 0x6fe390:c.instructions+=1;goto B6fe390;
case 0x6fe392:goto L6fe392;
case 0x6fe394:goto L6fe394;
case 0x6fe399:goto L6fe399;
case 0x6fe39b:c.instructions+=2;goto B6fe39b;
case 0x6fe39c:c.instructions+=1;goto B6fe39c;
case 0x6fe3a1:goto L6fe3a1;
case 0x6fe3a3:c.instructions+=2;goto B6fe3a3;
case 0x6fe3a6:c.instructions+=1;goto B6fe3a6;
case 0x6fe3a8:goto L6fe3a8;
case 0x6fe3ab:goto L6fe3ab;
case 0x6fe3ae:c.instructions+=3;goto B6fe3ae;
case 0x6fe3b0:c.instructions+=2;goto B6fe3b0;
case 0x6fe3b3:c.instructions+=1;goto B6fe3b3;
case 0x6fe3b6:goto L6fe3b6;
case 0x6fe3b7:c.instructions+=5;goto B6fe3b7;
case 0x6fe3b8:c.instructions+=4;goto B6fe3b8;
case 0x6fe3ba:c.instructions+=3;goto B6fe3ba;
case 0x6fe3bb:c.instructions+=2;goto B6fe3bb;
case 0x6fe3bc:c.instructions+=1;goto B6fe3bc;
case 0x6fe3bf:goto L6fe3bf;
case 0x6fe3c0:goto L6fe3c0;
case 0x6fe3c1:c.instructions+=5;goto B6fe3c1;
case 0x6fe3c3:c.instructions+=4;goto B6fe3c3;
case 0x6fe3c4:c.instructions+=3;goto B6fe3c4;
case 0x6fe3c7:c.instructions+=2;goto B6fe3c7;
case 0x6fe3c9:c.instructions+=1;goto B6fe3c9;
case 0x6fe3ce:goto L6fe3ce;
case 0x6fe3d1:c.instructions+=2;goto B6fe3d1;
case 0x6fe3d7:c.instructions+=1;goto B6fe3d7;
case 0x6fe3dc:goto L6fe3dc;
case 0x6fe3de:c.instructions+=3;goto B6fe3de;
case 0x6fe3df:c.instructions+=2;goto B6fe3df;
case 0x6fe3e0:c.instructions+=1;goto B6fe3e0;
case 0x6fe3e3:goto L6fe3e3;
case 0x6fe3e4:c.instructions+=5;goto B6fe3e4;
case 0x6fe3e6:c.instructions+=4;goto B6fe3e6;
case 0x6fe3e7:c.instructions+=3;goto B6fe3e7;
case 0x6fe3ea:c.instructions+=2;goto B6fe3ea;
case 0x6fe3ec:c.instructions+=1;goto B6fe3ec;
case 0x6fe3f1:goto L6fe3f1;
case 0x6fe3f2:c.instructions+=3;goto B6fe3f2;
case 0x6fe3f8:c.instructions+=2;goto B6fe3f8;
case 0x6fe3fa:c.instructions+=1;goto B6fe3fa;
case 0x6fe3fc:goto L6fe3fc;
case 0x6fe401:c.instructions+=1;goto B6fe401;
case 0x6fe406:goto L6fe406;
case 0x6fe408:c.instructions+=2;goto B6fe408;
case 0x6fe409:c.instructions+=1;goto B6fe409;
case 0x6fe40b:goto L6fe40b;
case 0x6fe40c:c.instructions+=2;goto B6fe40c;
case 0x6fe40e:c.instructions+=1;goto B6fe40e;
case 0x6fe413:goto L6fe413;
case 0x6fe418:c.instructions+=1;goto B6fe418;
case 0x6fe41a:goto L6fe41a;
case 0x6fe421:c.instructions+=1;goto B6fe421;
case 0x6fe423:goto L6fe423;
case 0x6fe425:c.instructions+=1;goto B6fe425;
case 0x6fe427:goto L6fe427;
case 0x6fe42c:c.instructions+=3;goto B6fe42c;
case 0x6fe42d:c.instructions+=2;goto B6fe42d;
case 0x6fe42e:c.instructions+=1;goto B6fe42e;
case 0x6fe42f:goto L6fe42f;
case 0x6fe432:goto L6fe432;
case 0x6fe435:goto L6fe435;
case 0x6fe438:goto L6fe438;
case 0x6fe439:c.instructions+=7;goto B6fe439;
case 0x6fe43a:c.instructions+=6;goto B6fe43a;
case 0x6fe43c:c.instructions+=5;goto B6fe43c;
case 0x6fe43f:c.instructions+=4;goto B6fe43f;
case 0x6fe441:c.instructions+=3;goto B6fe441;
case 0x6fe443:c.instructions+=2;goto B6fe443;
case 0x6fe444:c.instructions+=1;goto B6fe444;
case 0x6fe446:goto L6fe446;
case 0x6fe448:goto L6fe448;
case 0x6fe44a:c.instructions+=7;goto B6fe44a;
case 0x6fe44d:c.instructions+=6;goto B6fe44d;
case 0x6fe44f:c.instructions+=5;goto B6fe44f;
case 0x6fe451:c.instructions+=4;goto B6fe451;
case 0x6fe452:c.instructions+=3;goto B6fe452;
case 0x6fe454:c.instructions+=2;goto B6fe454;
case 0x6fe455:c.instructions+=1;goto B6fe455;
case 0x6fe458:goto L6fe458;
case 0x6fe45b:goto L6fe45b;
case 0x6fe45e:goto L6fe45e;
case 0x6fe460:c.instructions+=1;goto B6fe460;
case 0x6fe461:goto L6fe461;
case 0x6fe462:c.instructions+=4;goto B6fe462;
case 0x6fe464:c.instructions+=3;goto B6fe464;
case 0x6fe465:c.instructions+=2;goto B6fe465;
case 0x6fe467:c.instructions+=1;goto B6fe467;
case 0x6fe46c:goto L6fe46c;
case 0x6fe470:c.instructions+=1;goto B6fe470;
case 0x6fe472:goto L6fe472;
case 0x6fe477:c.instructions+=2;goto B6fe477;
case 0x6fe478:c.instructions+=1;goto B6fe478;
case 0x6fe47d:goto L6fe47d;
case 0x6fe47e:c.instructions+=1;goto B6fe47e;
case 0x6fe47f:goto L6fe47f;
case 0x6fe481:c.instructions+=3;goto B6fe481;
case 0x6fe482:c.instructions+=2;goto B6fe482;
case 0x6fe483:c.instructions+=1;goto B6fe483;
case 0x6fe486:goto L6fe486;
case 0x6fe487:c.instructions+=4;goto B6fe487;
case 0x6fe489:c.instructions+=3;goto B6fe489;
case 0x6fe48c:c.instructions+=2;goto B6fe48c;
case 0x6fe48f:c.instructions+=1;goto B6fe48f;
case 0x6fe491:goto L6fe491;
case 0x6fe494:c.instructions+=3;goto B6fe494;
case 0x6fe497:c.instructions+=2;goto B6fe497;
case 0x6fe498:c.instructions+=1;goto B6fe498;
case 0x6fe499:goto L6fe499;
case 0x6fe49c:c.instructions+=1;goto B6fe49c;
case 0x6fe49e:goto L6fe49e;
case 0x6fe4a1:c.instructions+=6;goto B6fe4a1;
case 0x6fe4a3:c.instructions+=5;goto B6fe4a3;
case 0x6fe4a5:c.instructions+=4;goto B6fe4a5;
case 0x6fe4a8:c.instructions+=3;goto B6fe4a8;
case 0x6fe4aa:c.instructions+=2;goto B6fe4aa;
case 0x6fe4ab:c.instructions+=1;goto B6fe4ab;
case 0x6fe4ac:goto L6fe4ac;
case 0x6fe4af:c.instructions+=1;goto B6fe4af;
case 0x6fe4b1:goto L6fe4b1;
case 0x6fe4b4:c.instructions+=5;goto B6fe4b4;
case 0x6fe4b6:c.instructions+=4;goto B6fe4b6;
case 0x6fe4b8:c.instructions+=3;goto B6fe4b8;
case 0x6fe4bb:c.instructions+=2;goto B6fe4bb;
case 0x6fe4bf:c.instructions+=1;goto B6fe4bf;
case 0x6fe4c1:goto L6fe4c1;
case 0x6fe4c4:c.instructions+=1;goto B6fe4c4;
case 0x6fe4c6:goto L6fe4c6;
case 0x6fe4c9:c.instructions+=7;goto B6fe4c9;
case 0x6fe4cd:c.instructions+=6;goto B6fe4cd;
case 0x6fe4cf:c.instructions+=5;goto B6fe4cf;
case 0x6fe4d1:c.instructions+=4;goto B6fe4d1;
case 0x6fe4d4:c.instructions+=3;goto B6fe4d4;
case 0x6fe4d8:c.instructions+=2;goto B6fe4d8;
case 0x6fe4db:c.instructions+=1;goto B6fe4db;
case 0x6fe4dd:goto L6fe4dd;
case 0x6fe4e0:c.instructions+=3;goto B6fe4e0;
case 0x6fe4e2:c.instructions+=2;goto B6fe4e2;
case 0x6fe4e3:c.instructions+=1;goto B6fe4e3;
case 0x6fe4e4:goto L6fe4e4;
case 0x6fe4e6:c.instructions+=2;goto B6fe4e6;
case 0x6fe4e7:c.instructions+=1;goto B6fe4e7;
case 0x6fe4e8:goto L6fe4e8;
case 0x6fe4e9:c.instructions+=6;goto B6fe4e9;
case 0x6fe4eb:c.instructions+=5;goto B6fe4eb;
case 0x6fe4ee:c.instructions+=4;goto B6fe4ee;
case 0x6fe4f1:c.instructions+=3;goto B6fe4f1;
case 0x6fe4f2:c.instructions+=2;goto B6fe4f2;
case 0x6fe4f9:c.instructions+=1;goto B6fe4f9;
case 0x6fe4fe:goto L6fe4fe;
case 0x6fe4ff:c.instructions+=5;goto B6fe4ff;
case 0x6fe502:c.instructions+=4;goto B6fe502;
case 0x6fe504:c.instructions+=3;goto B6fe504;
case 0x6fe506:c.instructions+=2;goto B6fe506;
case 0x6fe509:c.instructions+=1;goto B6fe509;
case 0x6fe50c:goto L6fe50c;
case 0x6fe50d:c.instructions+=1;goto B6fe50d;
case 0x6fe50e:goto L6fe50e;
case 0x6fe50f:c.instructions+=6;goto B6fe50f;
case 0x6fe511:c.instructions+=5;goto B6fe511;
case 0x6fe512:c.instructions+=4;goto B6fe512;
case 0x6fe513:c.instructions+=3;goto B6fe513;
case 0x6fe514:c.instructions+=2;goto B6fe514;
case 0x6fe516:c.instructions+=1;goto B6fe516;
case 0x6fe51b:goto L6fe51b;
case 0x6fe51d:c.instructions+=1;goto B6fe51d;
case 0x6fe51f:goto L6fe51f;
case 0x6fe521:c.instructions+=2;goto B6fe521;
case 0x6fe522:c.instructions+=1;goto B6fe522;
case 0x6fe524:goto L6fe524;
case 0x6fe527:goto L6fe527;
case 0x6fe52c:c.instructions+=4;goto B6fe52c;
case 0x6fe52e:c.instructions+=3;goto B6fe52e;
case 0x6fe52f:c.instructions+=2;goto B6fe52f;
case 0x6fe530:c.instructions+=1;goto B6fe530;
case 0x6fe535:goto L6fe535;
case 0x6fe538:c.instructions+=20;goto B6fe538;
case 0x6fe53b:c.instructions+=19;goto B6fe53b;
case 0x6fe53e:c.instructions+=18;goto B6fe53e;
case 0x6fe541:c.instructions+=17;goto B6fe541;
case 0x6fe544:c.instructions+=16;goto B6fe544;
case 0x6fe547:c.instructions+=15;goto B6fe547;
case 0x6fe54a:c.instructions+=14;goto B6fe54a;
case 0x6fe54d:c.instructions+=13;goto B6fe54d;
case 0x6fe550:c.instructions+=12;goto B6fe550;
case 0x6fe553:c.instructions+=11;goto B6fe553;
case 0x6fe556:c.instructions+=10;goto B6fe556;
case 0x6fe559:c.instructions+=9;goto B6fe559;
case 0x6fe55c:c.instructions+=8;goto B6fe55c;
case 0x6fe55f:c.instructions+=7;goto B6fe55f;
case 0x6fe561:c.instructions+=6;goto B6fe561;
case 0x6fe564:c.instructions+=5;goto B6fe564;
case 0x6fe567:c.instructions+=4;goto B6fe567;
case 0x6fe56a:c.instructions+=3;goto B6fe56a;
case 0x6fe570:c.instructions+=2;goto B6fe570;
case 0x6fe576:c.instructions+=1;goto B6fe576;
case 0x6fe578:goto L6fe578;
case 0x6fe57e:c.instructions+=1;goto B6fe57e;
case 0x6fe580:goto L6fe580;
case 0x6fe585:goto L6fe585;
case 0x6fe58a:goto L6fe58a;
case 0x6fe58c:c.instructions+=1;goto B6fe58c;
case 0x6fe592:goto L6fe592;
case 0x6fe596:c.instructions+=6;goto B6fe596;
case 0x6fe59c:c.instructions+=5;goto B6fe59c;
case 0x6fe59d:c.instructions+=4;goto B6fe59d;
case 0x6fe59e:c.instructions+=3;goto B6fe59e;
case 0x6fe5a1:c.instructions+=2;goto B6fe5a1;
case 0x6fe5a6:c.instructions+=1;goto B6fe5a6;
case 0x6fe5ac:goto L6fe5ac;
case 0x6fe5af:c.instructions+=6;goto B6fe5af;
case 0x6fe5b5:c.instructions+=5;goto B6fe5b5;
case 0x6fe5b6:c.instructions+=4;goto B6fe5b6;
case 0x6fe5b7:c.instructions+=3;goto B6fe5b7;
case 0x6fe5ba:c.instructions+=2;goto B6fe5ba;
case 0x6fe5bf:c.instructions+=1;goto B6fe5bf;
case 0x6fe5c5:goto L6fe5c5;
case 0x6fe5c8:c.instructions+=8;goto B6fe5c8;
case 0x6fe5cb:c.instructions+=7;goto B6fe5cb;
case 0x6fe5ce:c.instructions+=6;goto B6fe5ce;
case 0x6fe5d0:c.instructions+=5;goto B6fe5d0;
case 0x6fe5d2:c.instructions+=4;goto B6fe5d2;
case 0x6fe5d3:c.instructions+=3;goto B6fe5d3;
case 0x6fe5d4:c.instructions+=2;goto B6fe5d4;
case 0x6fe5d5:c.instructions+=1;goto B6fe5d5;
case 0x6fe5da:goto L6fe5da;
case 0x6fe5dd:c.instructions+=6;goto B6fe5dd;
case 0x6fe5e0:c.instructions+=5;goto B6fe5e0;
case 0x6fe5e3:c.instructions+=4;goto B6fe5e3;
case 0x6fe5e5:c.instructions+=3;goto B6fe5e5;
case 0x6fe5e6:c.instructions+=2;goto B6fe5e6;
case 0x6fe5e7:c.instructions+=1;goto B6fe5e7;
case 0x6fe5ec:goto L6fe5ec;
case 0x6fe5ef:c.instructions+=6;goto B6fe5ef;
case 0x6fe5f1:c.instructions+=5;goto B6fe5f1;
case 0x6fe5f6:c.instructions+=4;goto B6fe5f6;
case 0x6fe5f7:c.instructions+=3;goto B6fe5f7;
case 0x6fe5f8:c.instructions+=2;goto B6fe5f8;
case 0x6fe5fb:c.instructions+=1;goto B6fe5fb;
case 0x6fe600:goto L6fe600;
case 0x6fe602:c.instructions+=3;goto B6fe602;
case 0x6fe603:c.instructions+=2;goto B6fe603;
case 0x6fe606:c.instructions+=1;goto B6fe606;
case 0x6fe60b:goto L6fe60b;
case 0x6fe60d:c.instructions+=7;goto B6fe60d;
case 0x6fe60e:c.instructions+=6;goto B6fe60e;
case 0x6fe60f:c.instructions+=5;goto B6fe60f;
case 0x6fe611:c.instructions+=4;goto B6fe611;
case 0x6fe616:c.instructions+=3;goto B6fe616;
case 0x6fe617:c.instructions+=2;goto B6fe617;
case 0x6fe61a:c.instructions+=1;goto B6fe61a;
case 0x6fe61f:goto L6fe61f;
case 0x6fe621:c.instructions+=5;goto B6fe621;
case 0x6fe622:c.instructions+=4;goto B6fe622;
case 0x6fe623:c.instructions+=3;goto B6fe623;
case 0x6fe625:c.instructions+=2;goto B6fe625;
case 0x6fe628:c.instructions+=1;goto B6fe628;
case 0x6fe62d:goto L6fe62d;
case 0x6fe630:c.instructions+=2;goto B6fe630;
case 0x6fe633:c.instructions+=1;goto B6fe633;
case 0x6fe635:goto L6fe635;
case 0x6fe636:c.instructions+=1;goto B6fe636;
case 0x6fe638:goto L6fe638;
case 0x6fe63a:goto L6fe63a;
case 0x6fe63f:c.instructions+=4;goto B6fe63f;
case 0x6fe644:c.instructions+=3;goto B6fe644;
case 0x6fe645:c.instructions+=2;goto B6fe645;
case 0x6fe648:c.instructions+=1;goto B6fe648;
case 0x6fe64d:goto L6fe64d;
case 0x6fe650:c.instructions+=6;goto B6fe650;
case 0x6fe652:c.instructions+=5;goto B6fe652;
case 0x6fe653:c.instructions+=4;goto B6fe653;
case 0x6fe654:c.instructions+=3;goto B6fe654;
case 0x6fe656:c.instructions+=2;goto B6fe656;
case 0x6fe659:c.instructions+=1;goto B6fe659;
case 0x6fe65e:goto L6fe65e;
case 0x6fe661:c.instructions+=3;goto B6fe661;
case 0x6fe664:c.instructions+=2;goto B6fe664;
case 0x6fe666:c.instructions+=1;goto B6fe666;
case 0x6fe668:goto L6fe668;
case 0x6fe66e:c.instructions+=2;goto B6fe66e;
case 0x6fe671:c.instructions+=1;goto B6fe671;
case 0x6fe676:goto L6fe676;
case 0x6fe679:c.instructions+=3;goto B6fe679;
case 0x6fe67f:c.instructions+=2;goto B6fe67f;
case 0x6fe682:c.instructions+=1;goto B6fe682;
case 0x6fe687:goto L6fe687;
case 0x6fe68a:c.instructions+=1;goto B6fe68a;
case 0x6fe68f:goto L6fe68f;
case 0x6fe691:c.instructions+=2;goto B6fe691;
case 0x6fe692:c.instructions+=1;goto B6fe692;
case 0x6fe694:goto L6fe694;
case 0x6fe697:c.instructions+=3;goto B6fe697;
case 0x6fe69a:c.instructions+=2;goto B6fe69a;
case 0x6fe69d:c.instructions+=1;goto B6fe69d;
case 0x6fe6a2:goto L6fe6a2;
case 0x6fe6a3:c.instructions+=5;goto B6fe6a3;
case 0x6fe6a6:c.instructions+=4;goto B6fe6a6;
case 0x6fe6a9:c.instructions+=3;goto B6fe6a9;
case 0x6fe6ac:c.instructions+=2;goto B6fe6ac;
case 0x6fe6af:c.instructions+=1;goto B6fe6af;
case 0x6fe6b4:goto L6fe6b4;
case 0x6fe6b7:c.instructions+=2;goto B6fe6b7;
case 0x6fe6ba:c.instructions+=1;goto B6fe6ba;
case 0x6fe6bf:goto L6fe6bf;
case 0x6fe6c2:c.instructions+=3;goto B6fe6c2;
case 0x6fe6c5:c.instructions+=2;goto B6fe6c5;
case 0x6fe6c8:c.instructions+=1;goto B6fe6c8;
case 0x6fe6cd:goto L6fe6cd;
case 0x6fe6ce:c.instructions+=5;goto B6fe6ce;
case 0x6fe6d1:c.instructions+=4;goto B6fe6d1;
case 0x6fe6d4:c.instructions+=3;goto B6fe6d4;
case 0x6fe6d7:c.instructions+=2;goto B6fe6d7;
case 0x6fe6da:c.instructions+=1;goto B6fe6da;
case 0x6fe6df:goto L6fe6df;
case 0x6fe6e2:c.instructions+=2;goto B6fe6e2;
case 0x6fe6e5:c.instructions+=1;goto B6fe6e5;
case 0x6fe6ea:goto L6fe6ea;
case 0x6fe6ed:c.instructions+=6;goto B6fe6ed;
case 0x6fe6f3:c.instructions+=5;goto B6fe6f3;
case 0x6fe6f4:c.instructions+=4;goto B6fe6f4;
case 0x6fe6f5:c.instructions+=3;goto B6fe6f5;
case 0x6fe6f8:c.instructions+=2;goto B6fe6f8;
case 0x6fe6fd:c.instructions+=1;goto B6fe6fd;
case 0x6fe703:goto L6fe703;
case 0x6fe706:c.instructions+=7;goto B6fe706;
case 0x6fe709:c.instructions+=6;goto B6fe709;
case 0x6fe70a:c.instructions+=5;goto B6fe70a;
case 0x6fe70c:c.instructions+=4;goto B6fe70c;
case 0x6fe70e:c.instructions+=3;goto B6fe70e;
case 0x6fe710:c.instructions+=2;goto B6fe710;
case 0x6fe713:c.instructions+=1;goto B6fe713;
case 0x6fe718:goto L6fe718;
case 0x6fe71a:c.instructions+=3;goto B6fe71a;
case 0x6fe71b:c.instructions+=2;goto B6fe71b;
case 0x6fe71e:c.instructions+=1;goto B6fe71e;
case 0x6fe723:goto L6fe723;
case 0x6fe725:c.instructions+=5;goto B6fe725;
case 0x6fe72a:c.instructions+=4;goto B6fe72a;
case 0x6fe72b:c.instructions+=3;goto B6fe72b;
case 0x6fe72c:c.instructions+=2;goto B6fe72c;
case 0x6fe72f:c.instructions+=1;goto B6fe72f;
case 0x6fe734:goto L6fe734;
case 0x6fe736:c.instructions+=3;goto B6fe736;
case 0x6fe737:c.instructions+=2;goto B6fe737;
case 0x6fe73a:c.instructions+=1;goto B6fe73a;
case 0x6fe73f:goto L6fe73f;
case 0x6fe742:c.instructions+=6;goto B6fe742;
case 0x6fe744:c.instructions+=5;goto B6fe744;
case 0x6fe746:c.instructions+=4;goto B6fe746;
case 0x6fe74b:c.instructions+=3;goto B6fe74b;
case 0x6fe74d:c.instructions+=2;goto B6fe74d;
case 0x6fe750:c.instructions+=1;goto B6fe750;
case 0x6fe755:goto L6fe755;
case 0x6fe757:c.instructions+=5;goto B6fe757;
case 0x6fe758:c.instructions+=4;goto B6fe758;
case 0x6fe759:c.instructions+=3;goto B6fe759;
case 0x6fe75b:c.instructions+=2;goto B6fe75b;
case 0x6fe75e:c.instructions+=1;goto B6fe75e;
case 0x6fe763:goto L6fe763;
case 0x6fe766:c.instructions+=2;goto B6fe766;
case 0x6fe769:c.instructions+=1;goto B6fe769;
case 0x6fe76b:goto L6fe76b;
case 0x6fe76d:c.instructions+=1;goto B6fe76d;
case 0x6fe76f:goto L6fe76f;
case 0x6fe771:goto L6fe771;
case 0x6fe776:c.instructions+=4;goto B6fe776;
case 0x6fe77b:c.instructions+=3;goto B6fe77b;
case 0x6fe77d:c.instructions+=2;goto B6fe77d;
case 0x6fe780:c.instructions+=1;goto B6fe780;
case 0x6fe785:goto L6fe785;
case 0x6fe788:c.instructions+=3;goto B6fe788;
case 0x6fe78b:c.instructions+=2;goto B6fe78b;
case 0x6fe78e:c.instructions+=1;goto B6fe78e;
case 0x6fe790:goto L6fe790;
case 0x6fe796:c.instructions+=2;goto B6fe796;
case 0x6fe799:c.instructions+=1;goto B6fe799;
case 0x6fe79e:goto L6fe79e;
case 0x6fe79f:c.instructions+=3;goto B6fe79f;
case 0x6fe7a0:c.instructions+=2;goto B6fe7a0;
case 0x6fe7a3:c.instructions+=1;goto B6fe7a3;
case 0x6fe7a5:goto L6fe7a5;
case 0x6fe7a7:c.instructions+=2;goto B6fe7a7;
case 0x6fe7a8:c.instructions+=1;goto B6fe7a8;
case 0x6fe7aa:goto L6fe7aa;
case 0x6fe7ad:c.instructions+=3;goto B6fe7ad;
case 0x6fe7b0:c.instructions+=2;goto B6fe7b0;
case 0x6fe7b3:c.instructions+=1;goto B6fe7b3;
case 0x6fe7b8:goto L6fe7b8;
case 0x6fe7ba:goto L6fe7ba;
case 0x6fe7bd:c.instructions+=3;goto B6fe7bd;
case 0x6fe7c0:c.instructions+=2;goto B6fe7c0;
case 0x6fe7c3:c.instructions+=1;goto B6fe7c3;
case 0x6fe7c8:goto L6fe7c8;
case 0x6fe7cb:goto L6fe7cb;
case 0x6fe7ce:goto L6fe7ce;
case 0x6fe7cf:c.instructions+=4;goto B6fe7cf;
case 0x6fe7d0:c.instructions+=3;goto B6fe7d0;
case 0x6fe7d1:c.instructions+=2;goto B6fe7d1;
case 0x6fe7d2:c.instructions+=1;goto B6fe7d2;
case 0x6fe7d5:goto L6fe7d5;
case 0x6fe7d6:c.instructions+=5;goto B6fe7d6;
case 0x6fe7d8:c.instructions+=4;goto B6fe7d8;
case 0x6fe7db:c.instructions+=3;goto B6fe7db;
case 0x6fe7de:c.instructions+=2;goto B6fe7de;
case 0x6fe7df:c.instructions+=1;goto B6fe7df;
case 0x6fe7e2:goto L6fe7e2;
case 0x6fe7e3:c.instructions+=7;goto B6fe7e3;
case 0x6fe7e5:c.instructions+=6;goto B6fe7e5;
case 0x6fe7e8:c.instructions+=5;goto B6fe7e8;
case 0x6fe7eb:c.instructions+=4;goto B6fe7eb;
case 0x6fe7ec:c.instructions+=3;goto B6fe7ec;
case 0x6fe7ee:c.instructions+=2;goto B6fe7ee;
case 0x6fe7f1:c.instructions+=1;goto B6fe7f1;
case 0x6fe7f6:goto L6fe7f6;
case 0x6fe7f9:c.instructions+=2;goto B6fe7f9;
case 0x6fe7fa:c.instructions+=1;goto B6fe7fa;
case 0x6fe7ff:goto L6fe7ff;
case 0x6fe802:c.instructions+=2;goto B6fe802;
case 0x6fe805:c.instructions+=1;goto B6fe805;
case 0x6fe80a:goto L6fe80a;
case 0x6fe80d:c.instructions+=4;goto B6fe80d;
case 0x6fe810:c.instructions+=3;goto B6fe810;
case 0x6fe811:c.instructions+=2;goto B6fe811;
case 0x6fe812:c.instructions+=1;goto B6fe812;
case 0x6fe83e:goto L6fe83e;
case 0x6fe840:c.instructions+=2;goto B6fe840;
case 0x6fe842:c.instructions+=1;goto B6fe842;
case 0x6fe844:goto L6fe844;
case 0x6fe849:goto L6fe849;
case 0x6fe84b:c.instructions+=1;goto B6fe84b;
case 0x6fe84c:goto L6fe84c;
case 0x6fe84d:c.instructions+=8;goto B6fe84d;
case 0x6fe84f:c.instructions+=7;goto B6fe84f;
case 0x6fe850:c.instructions+=6;goto B6fe850;
case 0x6fe851:c.instructions+=5;goto B6fe851;
case 0x6fe854:c.instructions+=4;goto B6fe854;
case 0x6fe859:c.instructions+=3;goto B6fe859;
case 0x6fe85b:c.instructions+=2;goto B6fe85b;
case 0x6fe85d:c.instructions+=1;goto B6fe85d;
case 0x6fe85f:goto L6fe85f;
case 0x6fe861:goto L6fe861;
case 0x6fe863:c.instructions+=2;goto B6fe863;
case 0x6fe865:c.instructions+=1;goto B6fe865;
case 0x6fe867:goto L6fe867;
case 0x6fe868:c.instructions+=1;goto B6fe868;
case 0x6fe86d:goto L6fe86d;
case 0x6fe870:c.instructions+=2;goto B6fe870;
case 0x6fe871:c.instructions+=1;goto B6fe871;
case 0x6fe876:goto L6fe876;
case 0x6fe877:c.instructions+=4;goto B6fe877;
case 0x6fe879:c.instructions+=3;goto B6fe879;
case 0x6fe87a:c.instructions+=2;goto B6fe87a;
case 0x6fe87b:c.instructions+=1;goto B6fe87b;
case 0x6fe891:goto L6fe891;
case 0x6fe892:c.instructions+=4;goto B6fe892;
case 0x6fe894:c.instructions+=3;goto B6fe894;
case 0x6fe896:c.instructions+=2;goto B6fe896;
case 0x6fe898:c.instructions+=1;goto B6fe898;
case 0x6fe89a:goto L6fe89a;
case 0x6fe89c:c.instructions+=2;goto B6fe89c;
case 0x6fe89d:c.instructions+=1;goto B6fe89d;
case 0x6fe8a0:goto L6fe8a0;
case 0x6fe8a1:c.instructions+=1;goto B6fe8a1;
case 0x6fe8a6:goto L6fe8a6;
case 0x6fe8a7:c.instructions+=12;goto B6fe8a7;
case 0x6fe8a9:c.instructions+=11;goto B6fe8a9;
case 0x6fe8aa:c.instructions+=10;goto B6fe8aa;
case 0x6fe8ab:c.instructions+=9;goto B6fe8ab;
case 0x6fe8af:c.instructions+=8;goto B6fe8af;
case 0x6fe8b0:c.instructions+=7;goto B6fe8b0;
case 0x6fe8b3:c.instructions+=6;goto B6fe8b3;
case 0x6fe8b4:c.instructions+=5;goto B6fe8b4;
case 0x6fe8b6:c.instructions+=4;goto B6fe8b6;
case 0x6fe8b9:c.instructions+=3;goto B6fe8b9;
case 0x6fe8bc:c.instructions+=2;goto B6fe8bc;
case 0x6fe8bd:c.instructions+=1;goto B6fe8bd;
case 0x6fe8c0:goto L6fe8c0;
case 0x6fe8c3:c.instructions+=1;goto B6fe8c3;
case 0x6fe8c8:goto L6fe8c8;
case 0x6fe8c9:c.instructions+=2;goto B6fe8c9;
case 0x6fe8cb:c.instructions+=1;goto B6fe8cb;
case 0x6fe8d0:goto L6fe8d0;
case 0x6fe8d2:c.instructions+=1;goto B6fe8d2;
case 0x6fe8d4:goto L6fe8d4;
case 0x6fe8d6:c.instructions+=2;goto B6fe8d6;
case 0x6fe8d7:c.instructions+=1;goto B6fe8d7;
case 0x6fe8dc:goto L6fe8dc;
case 0x6fe8dd:c.instructions+=2;goto B6fe8dd;
case 0x6fe8e0:c.instructions+=1;goto B6fe8e0;
case 0x6fe8e5:goto L6fe8e5;
case 0x6fe8e8:c.instructions+=2;goto B6fe8e8;
case 0x6fe8ea:c.instructions+=1;goto B6fe8ea;
case 0x6fe8ec:goto L6fe8ec;
case 0x6fe8f3:goto L6fe8f3;
case 0x6fe8f6:c.instructions+=1;goto B6fe8f6;
case 0x6fe8fb:goto L6fe8fb;
case 0x6fe8fd:c.instructions+=2;goto B6fe8fd;
case 0x6fe8fe:c.instructions+=1;goto B6fe8fe;
case 0x6fe900:goto L6fe900;
case 0x6fe907:goto L6fe907;
case 0x6fe90a:c.instructions+=1;goto B6fe90a;
case 0x6fe90f:goto L6fe90f;
case 0x6fe911:c.instructions+=2;goto B6fe911;
case 0x6fe912:c.instructions+=1;goto B6fe912;
case 0x6fe914:goto L6fe914;
case 0x6fe916:c.instructions+=3;goto B6fe916;
case 0x6fe917:c.instructions+=2;goto B6fe917;
case 0x6fe91a:c.instructions+=1;goto B6fe91a;
case 0x6fe91c:goto L6fe91c;
case 0x6fe91f:goto L6fe91f;
case 0x6fe921:c.instructions+=1;goto B6fe921;
case 0x6fe923:goto L6fe923;
case 0x6fe924:c.instructions+=2;goto B6fe924;
case 0x6fe927:c.instructions+=1;goto B6fe927;
case 0x6fe92c:goto L6fe92c;
case 0x6fe92d:c.instructions+=1;goto B6fe92d;
case 0x6fe92e:goto L6fe92e;
case 0x6fe931:c.instructions+=1;goto B6fe931;
case 0x6fe936:goto L6fe936;
case 0x6fe938:c.instructions+=2;goto B6fe938;
case 0x6fe939:c.instructions+=1;goto B6fe939;
case 0x6fe93b:goto L6fe93b;
case 0x6fe93c:c.instructions+=4;goto B6fe93c;
case 0x6fe93d:c.instructions+=3;goto B6fe93d;
case 0x6fe93e:c.instructions+=2;goto B6fe93e;
case 0x6fe93f:c.instructions+=1;goto B6fe93f;
case 0x6fe942:goto L6fe942;
case 0x6fe948:c.instructions+=3;goto B6fe948;
case 0x6fe94a:c.instructions+=2;goto B6fe94a;
case 0x6fe94d:c.instructions+=1;goto B6fe94d;
case 0x6fe94f:goto L6fe94f;
case 0x6fe952:goto L6fe952;
case 0x6fe954:c.instructions+=7;goto B6fe954;
case 0x6fe957:c.instructions+=6;goto B6fe957;
case 0x6fe95a:c.instructions+=5;goto B6fe95a;
case 0x6fe95d:c.instructions+=4;goto B6fe95d;
case 0x6fe960:c.instructions+=3;goto B6fe960;
case 0x6fe962:c.instructions+=2;goto B6fe962;
case 0x6fe964:c.instructions+=1;goto B6fe964;
case 0x6fe966:goto L6fe966;
case 0x6fe969:c.instructions+=1;goto B6fe969;
case 0x6fe96b:goto L6fe96b;
case 0x6fe96e:c.instructions+=1;goto B6fe96e;
case 0x6fe970:goto L6fe970;
case 0x6fe973:c.instructions+=2;goto B6fe973;
case 0x6fe976:c.instructions+=1;goto B6fe976;
case 0x6fe978:goto L6fe978;
case 0x6fe97b:goto L6fe97b;
case 0x6fe97e:c.instructions+=4;goto B6fe97e;
case 0x6fe981:c.instructions+=3;goto B6fe981;
case 0x6fe984:c.instructions+=2;goto B6fe984;
case 0x6fe988:c.instructions+=1;goto B6fe988;
case 0x6fe98a:goto L6fe98a;
case 0x6fe98d:c.instructions+=1;goto B6fe98d;
case 0x6fe98f:goto L6fe98f;
case 0x6fe994:goto L6fe994;
case 0x6fe996:goto L6fe996;
case 0x6fe999:c.instructions+=1;goto B6fe999;
case 0x6fe99b:goto L6fe99b;
case 0x6fe9a0:goto L6fe9a0;
case 0x6fe9a1:c.instructions+=3;goto B6fe9a1;
case 0x6fe9a2:c.instructions+=2;goto B6fe9a2;
case 0x6fe9a4:c.instructions+=1;goto B6fe9a4;
case 0x6fe9a9:goto L6fe9a9;
case 0x6fe9ac:c.instructions+=1;goto B6fe9ac;
case 0x6fe9ae:goto L6fe9ae;
case 0x6fe9b0:c.instructions+=1;goto B6fe9b0;
case 0x6fe9b5:goto L6fe9b5;
case 0x6fe9b6:goto L6fe9b6;
case 0x6fe9b7:c.instructions+=6;goto B6fe9b7;
case 0x6fe9b9:c.instructions+=5;goto B6fe9b9;
case 0x6fe9bc:c.instructions+=4;goto B6fe9bc;
case 0x6fe9bf:c.instructions+=3;goto B6fe9bf;
case 0x6fe9c2:c.instructions+=2;goto B6fe9c2;
case 0x6fe9c4:c.instructions+=1;goto B6fe9c4;
case 0x6fe9c9:goto L6fe9c9;
case 0x6fe9ca:c.instructions+=1;goto B6fe9ca;
case 0x6fe9cb:goto L6fe9cb;
case 0x6fe9cc:c.instructions+=5;goto B6fe9cc;
case 0x6fe9ce:c.instructions+=4;goto B6fe9ce;
case 0x6fe9d1:c.instructions+=3;goto B6fe9d1;
case 0x6fe9d3:c.instructions+=2;goto B6fe9d3;
case 0x6fe9d6:c.instructions+=1;goto B6fe9d6;
case 0x6fe9db:goto L6fe9db;
case 0x6fe9dc:c.instructions+=3;goto B6fe9dc;
case 0x6fe9dd:c.instructions+=2;goto B6fe9dd;
case 0x6fe9de:c.instructions+=1;goto B6fe9de;
case 0x6fe9e1:goto L6fe9e1;
case 0x6fe9e2:c.instructions+=5;goto B6fe9e2;
case 0x6fe9e4:c.instructions+=4;goto B6fe9e4;
case 0x6fe9e7:c.instructions+=3;goto B6fe9e7;
case 0x6fe9ea:c.instructions+=2;goto B6fe9ea;
case 0x6fe9ec:c.instructions+=1;goto B6fe9ec;
case 0x6fe9f1:goto L6fe9f1;
case 0x6fe9f2:c.instructions+=1;goto B6fe9f2;
case 0x6fe9f3:goto L6fe9f3;
case 0x6fe9f4:c.instructions+=12;goto B6fe9f4;
case 0x6fe9f6:c.instructions+=11;goto B6fe9f6;
case 0x6fe9f7:c.instructions+=10;goto B6fe9f7;
case 0x6fe9f8:c.instructions+=9;goto B6fe9f8;
case 0x6fe9fd:c.instructions+=8;goto B6fe9fd;
case 0x6fe9ff:c.instructions+=7;goto B6fe9ff;
case 0x6fea01:c.instructions+=6;goto B6fea01;
case 0x6fea03:c.instructions+=5;goto B6fea03;
case 0x6fea06:c.instructions+=4;goto B6fea06;
case 0x6fea08:c.instructions+=3;goto B6fea08;
case 0x6fea09:c.instructions+=2;goto B6fea09;
case 0x6fea0c:c.instructions+=1;goto B6fea0c;
case 0x6fea11:goto L6fea11;
case 0x6fea14:c.instructions+=11;goto B6fea14;
case 0x6fea16:c.instructions+=10;goto B6fea16;
case 0x6fea19:c.instructions+=9;goto B6fea19;
case 0x6fea1a:c.instructions+=8;goto B6fea1a;
case 0x6fea1b:c.instructions+=7;goto B6fea1b;
case 0x6fea1c:c.instructions+=6;goto B6fea1c;
case 0x6fea1d:c.instructions+=5;goto B6fea1d;
case 0x6fea1e:c.instructions+=4;goto B6fea1e;
case 0x6fea21:c.instructions+=3;goto B6fea21;
case 0x6fea22:c.instructions+=2;goto B6fea22;
case 0x6fea25:c.instructions+=1;goto B6fea25;
case 0x6fea2a:goto L6fea2a;
case 0x6fea2b:c.instructions+=4;goto B6fea2b;
case 0x6fea2d:c.instructions+=3;goto B6fea2d;
case 0x6fea2e:c.instructions+=2;goto B6fea2e;
case 0x6fea2f:c.instructions+=1;goto B6fea2f;
case 0x6fea32:goto L6fea32;
case 0x6fea33:c.instructions+=12;goto B6fea33;
case 0x6fea35:c.instructions+=11;goto B6fea35;
case 0x6fea36:c.instructions+=10;goto B6fea36;
case 0x6fea37:c.instructions+=9;goto B6fea37;
case 0x6fea3c:c.instructions+=8;goto B6fea3c;
case 0x6fea3e:c.instructions+=7;goto B6fea3e;
case 0x6fea40:c.instructions+=6;goto B6fea40;
case 0x6fea42:c.instructions+=5;goto B6fea42;
case 0x6fea45:c.instructions+=4;goto B6fea45;
case 0x6fea47:c.instructions+=3;goto B6fea47;
case 0x6fea48:c.instructions+=2;goto B6fea48;
case 0x6fea4b:c.instructions+=1;goto B6fea4b;
case 0x6fea50:goto L6fea50;
case 0x6fea53:c.instructions+=11;goto B6fea53;
case 0x6fea55:c.instructions+=10;goto B6fea55;
case 0x6fea58:c.instructions+=9;goto B6fea58;
case 0x6fea59:c.instructions+=8;goto B6fea59;
case 0x6fea5c:c.instructions+=7;goto B6fea5c;
case 0x6fea5d:c.instructions+=6;goto B6fea5d;
case 0x6fea60:c.instructions+=5;goto B6fea60;
case 0x6fea61:c.instructions+=4;goto B6fea61;
case 0x6fea64:c.instructions+=3;goto B6fea64;
case 0x6fea65:c.instructions+=2;goto B6fea65;
case 0x6fea68:c.instructions+=1;goto B6fea68;
case 0x6fea6d:goto L6fea6d;
case 0x6fea6e:c.instructions+=4;goto B6fea6e;
case 0x6fea70:c.instructions+=3;goto B6fea70;
case 0x6fea71:c.instructions+=2;goto B6fea71;
case 0x6fea72:c.instructions+=1;goto B6fea72;
case 0x6fea75:goto L6fea75;
case 0x6fea76:c.instructions+=10;goto B6fea76;
case 0x6fea78:c.instructions+=9;goto B6fea78;
case 0x6fea79:c.instructions+=8;goto B6fea79;
case 0x6fea7e:c.instructions+=7;goto B6fea7e;
case 0x6fea80:c.instructions+=6;goto B6fea80;
case 0x6fea84:c.instructions+=5;goto B6fea84;
case 0x6fea86:c.instructions+=4;goto B6fea86;
case 0x6fea88:c.instructions+=3;goto B6fea88;
case 0x6fea8b:c.instructions+=2;goto B6fea8b;
case 0x6fea8c:c.instructions+=1;goto B6fea8c;
case 0x6fea91:goto L6fea91;
case 0x6fea94:c.instructions+=11;goto B6fea94;
case 0x6fea96:c.instructions+=10;goto B6fea96;
case 0x6fea99:c.instructions+=9;goto B6fea99;
case 0x6fea9c:c.instructions+=8;goto B6fea9c;
case 0x6fea9f:c.instructions+=7;goto B6fea9f;
case 0x6feaa1:c.instructions+=6;goto B6feaa1;
case 0x6feaa4:c.instructions+=5;goto B6feaa4;
case 0x6feaa7:c.instructions+=4;goto B6feaa7;
case 0x6feaaa:c.instructions+=3;goto B6feaaa;
case 0x6feaac:c.instructions+=2;goto B6feaac;
case 0x6feaaf:c.instructions+=1;goto B6feaaf;
case 0x6feab4:goto L6feab4;
case 0x6feab6:c.instructions+=3;goto B6feab6;
case 0x6feab7:c.instructions+=2;goto B6feab7;
case 0x6feab8:c.instructions+=1;goto B6feab8;
case 0x6feabb:goto L6feabb;
case 0x6feabc:c.instructions+=10;goto B6feabc;
case 0x6feabe:c.instructions+=9;goto B6feabe;
case 0x6feabf:c.instructions+=8;goto B6feabf;
case 0x6feac4:c.instructions+=7;goto B6feac4;
case 0x6feac6:c.instructions+=6;goto B6feac6;
case 0x6feaca:c.instructions+=5;goto B6feaca;
case 0x6feacc:c.instructions+=4;goto B6feacc;
case 0x6feace:c.instructions+=3;goto B6feace;
case 0x6fead1:c.instructions+=2;goto B6fead1;
case 0x6fead2:c.instructions+=1;goto B6fead2;
case 0x6fead7:goto L6fead7;
case 0x6feada:c.instructions+=11;goto B6feada;
case 0x6feadc:c.instructions+=10;goto B6feadc;
case 0x6feadf:c.instructions+=9;goto B6feadf;
case 0x6feae1:c.instructions+=8;goto B6feae1;
case 0x6feae4:c.instructions+=7;goto B6feae4;
case 0x6feae7:c.instructions+=6;goto B6feae7;
case 0x6feaea:c.instructions+=5;goto B6feaea;
case 0x6feaec:c.instructions+=4;goto B6feaec;
case 0x6feaef:c.instructions+=3;goto B6feaef;
case 0x6feaf2:c.instructions+=2;goto B6feaf2;
case 0x6feaf5:c.instructions+=1;goto B6feaf5;
case 0x6feafa:goto L6feafa;
case 0x6feafc:c.instructions+=3;goto B6feafc;
case 0x6feafd:c.instructions+=2;goto B6feafd;
case 0x6feafe:c.instructions+=1;goto B6feafe;
case 0x6feb01:goto L6feb01;
case 0x6feb02:c.instructions+=10;goto B6feb02;
case 0x6feb04:c.instructions+=9;goto B6feb04;
case 0x6feb05:c.instructions+=8;goto B6feb05;
case 0x6feb0a:c.instructions+=7;goto B6feb0a;
case 0x6feb0c:c.instructions+=6;goto B6feb0c;
case 0x6feb10:c.instructions+=5;goto B6feb10;
case 0x6feb12:c.instructions+=4;goto B6feb12;
case 0x6feb14:c.instructions+=3;goto B6feb14;
case 0x6feb17:c.instructions+=2;goto B6feb17;
case 0x6feb18:c.instructions+=1;goto B6feb18;
case 0x6feb1d:goto L6feb1d;
case 0x6feb20:c.instructions+=11;goto B6feb20;
case 0x6feb22:c.instructions+=10;goto B6feb22;
case 0x6feb24:c.instructions+=9;goto B6feb24;
case 0x6feb26:c.instructions+=8;goto B6feb26;
case 0x6feb29:c.instructions+=7;goto B6feb29;
case 0x6feb2c:c.instructions+=6;goto B6feb2c;
case 0x6feb2f:c.instructions+=5;goto B6feb2f;
case 0x6feb31:c.instructions+=4;goto B6feb31;
case 0x6feb34:c.instructions+=3;goto B6feb34;
case 0x6feb37:c.instructions+=2;goto B6feb37;
case 0x6feb3a:c.instructions+=1;goto B6feb3a;
case 0x6feb3f:goto L6feb3f;
case 0x6feb41:c.instructions+=3;goto B6feb41;
case 0x6feb42:c.instructions+=2;goto B6feb42;
case 0x6feb43:c.instructions+=1;goto B6feb43;
case 0x6feb46:goto L6feb46;
case 0x6feb47:c.instructions+=6;goto B6feb47;
case 0x6feb48:c.instructions+=5;goto B6feb48;
case 0x6feb4a:c.instructions+=4;goto B6feb4a;
case 0x6feb4d:c.instructions+=3;goto B6feb4d;
case 0x6feb4f:c.instructions+=2;goto B6feb4f;
case 0x6feb51:c.instructions+=1;goto B6feb51;
case 0x6feb53:goto L6feb53;
case 0x6feb55:c.instructions+=2;goto B6feb55;
case 0x6feb57:c.instructions+=1;goto B6feb57;
case 0x6feb59:goto L6feb59;
case 0x6feb5c:goto L6feb5c;
case 0x6feb5e:c.instructions+=2;goto B6feb5e;
case 0x6feb60:c.instructions+=1;goto B6feb60;
case 0x6feb62:goto L6feb62;
case 0x6feb64:c.instructions+=1;goto B6feb64;
case 0x6feb69:goto L6feb69;
case 0x6feb6b:goto L6feb6b;
case 0x6feb6e:c.instructions+=2;goto B6feb6e;
case 0x6feb70:c.instructions+=1;goto B6feb70;
case 0x6feb72:goto L6feb72;
case 0x6feb73:c.instructions+=1;goto B6feb73;
case 0x6feb79:goto L6feb79;
case 0x6feb7a:c.instructions+=1;goto B6feb7a;
case 0x6feb7d:goto L6feb7d;
case 0x6feb80:c.instructions+=1;goto B6feb80;
case 0x6feb85:goto L6feb85;
case 0x6feb88:c.instructions+=3;goto B6feb88;
case 0x6feb89:c.instructions+=2;goto B6feb89;
case 0x6feb8c:c.instructions+=1;goto B6feb8c;
case 0x6feb8e:goto L6feb8e;
case 0x6feb91:c.instructions+=1;goto B6feb91;
case 0x6feb96:goto L6feb96;
case 0x6feb97:c.instructions+=1;goto B6feb97;
case 0x6feb9a:goto L6feb9a;
case 0x6feb9d:c.instructions+=2;goto B6feb9d;
case 0x6feb9f:c.instructions+=1;goto B6feb9f;
case 0x6feba1:goto L6feba1;
case 0x6feba2:c.instructions+=1;goto B6feba2;
case 0x6feba7:goto L6feba7;
case 0x6feba8:c.instructions+=1;goto B6feba8;
case 0x6febab:goto L6febab;
case 0x6febae:c.instructions+=2;goto B6febae;
case 0x6febb0:c.instructions+=1;goto B6febb0;
case 0x6febb2:goto L6febb2;
case 0x6febb3:c.instructions+=1;goto B6febb3;
case 0x6febb8:goto L6febb8;
case 0x6febb9:c.instructions+=1;goto B6febb9;
case 0x6febbc:goto L6febbc;
case 0x6febbf:c.instructions+=2;goto B6febbf;
case 0x6febc1:c.instructions+=1;goto B6febc1;
case 0x6febc3:goto L6febc3;
case 0x6febc4:c.instructions+=1;goto B6febc4;
case 0x6febca:goto L6febca;
case 0x6febcb:c.instructions+=1;goto B6febcb;
case 0x6febce:goto L6febce;
case 0x6febd1:c.instructions+=2;goto B6febd1;
case 0x6febd3:c.instructions+=1;goto B6febd3;
case 0x6febd5:goto L6febd5;
case 0x6febd6:c.instructions+=1;goto B6febd6;
case 0x6febdc:goto L6febdc;
case 0x6febdd:c.instructions+=1;goto B6febdd;
case 0x6febe0:goto L6febe0;
case 0x6febe5:c.instructions+=5;goto B6febe5;
case 0x6febe7:c.instructions+=4;goto B6febe7;
case 0x6febe9:c.instructions+=3;goto B6febe9;
case 0x6febec:c.instructions+=2;goto B6febec;
case 0x6febed:c.instructions+=1;goto B6febed;
case 0x6febf2:goto L6febf2;
case 0x6febf3:c.instructions+=2;goto B6febf3;
case 0x6febf4:c.instructions+=1;goto B6febf4;
case 0x6febf5:goto L6febf5;
case 0x6febf6:c.instructions+=11;goto B6febf6;
case 0x6febf8:c.instructions+=10;goto B6febf8;
case 0x6febfb:c.instructions+=9;goto B6febfb;
case 0x6febfc:c.instructions+=8;goto B6febfc;
case 0x6febfd:c.instructions+=7;goto B6febfd;
case 0x6febfe:c.instructions+=6;goto B6febfe;
case 0x6fec00:c.instructions+=5;goto B6fec00;
case 0x6fec05:c.instructions+=4;goto B6fec05;
case 0x6fec07:c.instructions+=3;goto B6fec07;
case 0x6fec08:c.instructions+=2;goto B6fec08;
case 0x6fec0b:c.instructions+=1;goto B6fec0b;
case 0x6fec10:goto L6fec10;
case 0x6fec12:c.instructions+=3;goto B6fec12;
case 0x6fec13:c.instructions+=2;goto B6fec13;
case 0x6fec16:c.instructions+=1;goto B6fec16;
case 0x6fec1b:goto L6fec1b;
case 0x6fec1e:c.instructions+=4;goto B6fec1e;
case 0x6fec20:c.instructions+=3;goto B6fec20;
case 0x6fec23:c.instructions+=2;goto B6fec23;
case 0x6fec25:c.instructions+=1;goto B6fec25;
case 0x6fec27:goto L6fec27;
case 0x6fec2a:c.instructions+=5;goto B6fec2a;
case 0x6fec2b:c.instructions+=4;goto B6fec2b;
case 0x6fec2e:c.instructions+=3;goto B6fec2e;
case 0x6fec2f:c.instructions+=2;goto B6fec2f;
case 0x6fec30:c.instructions+=1;goto B6fec30;
case 0x6fec35:goto L6fec35;
case 0x6fec36:c.instructions+=4;goto B6fec36;
case 0x6fec39:c.instructions+=3;goto B6fec39;
case 0x6fec3b:c.instructions+=2;goto B6fec3b;
case 0x6fec3e:c.instructions+=1;goto B6fec3e;
case 0x6fec43:goto L6fec43;
case 0x6fec46:c.instructions+=1;goto B6fec46;
case 0x6fec49:goto L6fec49;
case 0x6fec4c:c.instructions+=2;goto B6fec4c;
case 0x6fec4e:c.instructions+=1;goto B6fec4e;
case 0x6fec50:goto L6fec50;
case 0x6fec53:c.instructions+=5;goto B6fec53;
case 0x6fec54:c.instructions+=4;goto B6fec54;
case 0x6fec57:c.instructions+=3;goto B6fec57;
case 0x6fec58:c.instructions+=2;goto B6fec58;
case 0x6fec59:c.instructions+=1;goto B6fec59;
case 0x6fec5e:goto L6fec5e;
case 0x6fec5f:c.instructions+=4;goto B6fec5f;
case 0x6fec62:c.instructions+=3;goto B6fec62;
case 0x6fec64:c.instructions+=2;goto B6fec64;
case 0x6fec67:c.instructions+=1;goto B6fec67;
case 0x6fec6c:goto L6fec6c;
case 0x6fec6f:c.instructions+=1;goto B6fec6f;
case 0x6fec72:goto L6fec72;
case 0x6fec75:c.instructions+=1;goto B6fec75;
case 0x6fec77:goto L6fec77;
case 0x6fec7a:c.instructions+=1;goto B6fec7a;
case 0x6fec7d:goto L6fec7d;
case 0x6fec80:c.instructions+=1;goto B6fec80;
case 0x6fec82:goto L6fec82;
case 0x6fec84:c.instructions+=1;goto B6fec84;
case 0x6fec89:goto L6fec89;
case 0x6fec8b:c.instructions+=2;goto B6fec8b;
case 0x6fec8c:c.instructions+=1;goto B6fec8c;
case 0x6fec8e:goto L6fec8e;
case 0x6fec91:c.instructions+=3;goto B6fec91;
case 0x6fec93:c.instructions+=2;goto B6fec93;
case 0x6fec96:c.instructions+=1;goto B6fec96;
case 0x6fec9b:goto L6fec9b;
case 0x6fec9d:goto L6fec9d;
case 0x6fec9f:goto L6fec9f;
case 0x6feca1:c.instructions+=6;goto B6feca1;
case 0x6feca4:c.instructions+=5;goto B6feca4;
case 0x6feca6:c.instructions+=4;goto B6feca6;
case 0x6feca8:c.instructions+=3;goto B6feca8;
case 0x6fecab:c.instructions+=2;goto B6fecab;
case 0x6fecae:c.instructions+=1;goto B6fecae;
case 0x6fecb0:goto L6fecb0;
case 0x6fecb3:goto L6fecb3;
case 0x6fecb6:c.instructions+=2;goto B6fecb6;
case 0x6fecbc:c.instructions+=1;goto B6fecbc;
case 0x6fecbe:goto L6fecbe;
case 0x6fecc4:c.instructions+=1;goto B6fecc4;
case 0x6fecc6:goto L6fecc6;
case 0x6fecc9:c.instructions+=7;goto B6fecc9;
case 0x6feccc:c.instructions+=6;goto B6feccc;
case 0x6fecd1:c.instructions+=5;goto B6fecd1;
case 0x6fecd6:c.instructions+=4;goto B6fecd6;
case 0x6fecd7:c.instructions+=3;goto B6fecd7;
case 0x6fecda:c.instructions+=2;goto B6fecda;
case 0x6fecdc:c.instructions+=1;goto B6fecdc;
case 0x6fece1:goto L6fece1;
case 0x6fece3:c.instructions+=1;goto B6fece3;
case 0x6fece8:goto L6fece8;
case 0x6fecea:c.instructions+=2;goto B6fecea;
case 0x6feceb:c.instructions+=1;goto B6feceb;
case 0x6feced:goto L6feced;
case 0x6fecf0:c.instructions+=3;goto B6fecf0;
case 0x6fecf1:c.instructions+=2;goto B6fecf1;
case 0x6fecf3:c.instructions+=1;goto B6fecf3;
case 0x6fecf8:goto L6fecf8;
case 0x6fecfa:goto L6fecfa;
case 0x6fecfc:goto L6fecfc;
case 0x6fecff:goto L6fecff;
case 0x6fed02:c.instructions+=2;goto B6fed02;
case 0x6fed03:c.instructions+=1;goto B6fed03;
case 0x6fed08:goto L6fed08;
case 0x6fed0a:c.instructions+=2;goto B6fed0a;
case 0x6fed0d:c.instructions+=1;goto B6fed0d;
case 0x6fed12:goto L6fed12;
case 0x6fed14:c.instructions+=2;goto B6fed14;
case 0x6fed15:c.instructions+=1;goto B6fed15;
case 0x6fed17:goto L6fed17;
case 0x6fed19:c.instructions+=1;goto B6fed19;
case 0x6fed1e:goto L6fed1e;
case 0x6fed20:c.instructions+=1;goto B6fed20;
case 0x6fed22:goto L6fed22;
case 0x6fed24:goto L6fed24;
case 0x6fed26:c.instructions+=2;goto B6fed26;
case 0x6fed29:c.instructions+=1;goto B6fed29;
case 0x6fed2e:goto L6fed2e;
case 0x6fed31:c.instructions+=8;goto B6fed31;
case 0x6fed33:c.instructions+=7;goto B6fed33;
case 0x6fed35:c.instructions+=6;goto B6fed35;
case 0x6fed38:c.instructions+=5;goto B6fed38;
case 0x6fed3b:c.instructions+=4;goto B6fed3b;
case 0x6fed3e:c.instructions+=3;goto B6fed3e;
case 0x6fed41:c.instructions+=2;goto B6fed41;
case 0x6fed44:c.instructions+=1;goto B6fed44;
case 0x6fed46:goto L6fed46;
case 0x6fed4b:goto L6fed4b;
case 0x6fed50:c.instructions+=2;goto B6fed50;
case 0x6fed52:c.instructions+=1;goto B6fed52;
case 0x6fed57:goto L6fed57;
case 0x6fed5a:c.instructions+=5;goto B6fed5a;
case 0x6fed5b:c.instructions+=4;goto B6fed5b;
case 0x6fed5c:c.instructions+=3;goto B6fed5c;
case 0x6fed5d:c.instructions+=2;goto B6fed5d;
case 0x6fed5e:c.instructions+=1;goto B6fed5e;
case 0x6fed61:goto L6fed61;
case 0x6fed62:c.instructions+=9;goto B6fed62;
case 0x6fed64:c.instructions+=8;goto B6fed64;
case 0x6fed67:c.instructions+=7;goto B6fed67;
case 0x6fed68:c.instructions+=6;goto B6fed68;
case 0x6fed69:c.instructions+=5;goto B6fed69;
case 0x6fed6b:c.instructions+=4;goto B6fed6b;
case 0x6fed6c:c.instructions+=3;goto B6fed6c;
case 0x6fed6f:c.instructions+=2;goto B6fed6f;
case 0x6fed71:c.instructions+=1;goto B6fed71;
case 0x6fed76:goto L6fed76;
case 0x6fed79:c.instructions+=6;goto B6fed79;
case 0x6fed7b:c.instructions+=5;goto B6fed7b;
case 0x6fed7e:c.instructions+=4;goto B6fed7e;
case 0x6fed82:c.instructions+=3;goto B6fed82;
case 0x6fed85:c.instructions+=2;goto B6fed85;
case 0x6fed88:c.instructions+=1;goto B6fed88;
case 0x6fed8a:goto L6fed8a;
case 0x6fed8f:goto L6fed8f;
case 0x6fed92:c.instructions+=4;goto B6fed92;
case 0x6fed93:c.instructions+=3;goto B6fed93;
case 0x6fed95:c.instructions+=2;goto B6fed95;
case 0x6fed98:c.instructions+=1;goto B6fed98;
case 0x6fed9d:goto L6fed9d;
case 0x6feda0:c.instructions+=3;goto B6feda0;
case 0x6feda1:c.instructions+=2;goto B6feda1;
case 0x6feda4:c.instructions+=1;goto B6feda4;
case 0x6feda9:goto L6feda9;
case 0x6fedac:c.instructions+=1;goto B6fedac;
case 0x6fedb1:goto L6fedb1;
case 0x6fedb6:goto L6fedb6;
case 0x6fedb9:c.instructions+=3;goto B6fedb9;
case 0x6fedbb:c.instructions+=2;goto B6fedbb;
case 0x6fedbe:c.instructions+=1;goto B6fedbe;
case 0x6fedc0:goto L6fedc0;
case 0x6fedc3:c.instructions+=15;goto B6fedc3;
case 0x6fedc5:c.instructions+=14;goto B6fedc5;
case 0x6fedc6:c.instructions+=13;goto B6fedc6;
case 0x6fedc8:c.instructions+=12;goto B6fedc8;
case 0x6fedc9:c.instructions+=11;goto B6fedc9;
case 0x6fedcb:c.instructions+=10;goto B6fedcb;
case 0x6fedce:c.instructions+=9;goto B6fedce;
case 0x6fedd1:c.instructions+=8;goto B6fedd1;
case 0x6fedd3:c.instructions+=7;goto B6fedd3;
case 0x6fedd5:c.instructions+=6;goto B6fedd5;
case 0x6fedd8:c.instructions+=5;goto B6fedd8;
case 0x6fedda:c.instructions+=4;goto B6fedda;
case 0x6feddc:c.instructions+=3;goto B6feddc;
case 0x6fedde:c.instructions+=2;goto B6fedde;
case 0x6fede1:c.instructions+=1;goto B6fede1;
case 0x6fede3:goto L6fede3;
case 0x6fede5:goto L6fede5;
case 0x6fedeb:c.instructions+=1;goto B6fedeb;
case 0x6feded:goto L6feded;
case 0x6fedef:c.instructions+=7;goto B6fedef;
case 0x6fedf0:c.instructions+=6;goto B6fedf0;
case 0x6fedf1:c.instructions+=5;goto B6fedf1;
case 0x6fedf3:c.instructions+=4;goto B6fedf3;
case 0x6fedf6:c.instructions+=3;goto B6fedf6;
case 0x6fedfa:c.instructions+=2;goto B6fedfa;
case 0x6fedfd:c.instructions+=1;goto B6fedfd;
case 0x6fee00:goto L6fee00;
case 0x6fee01:c.instructions+=5;goto B6fee01;
case 0x6fee02:c.instructions+=4;goto B6fee02;
case 0x6fee04:c.instructions+=3;goto B6fee04;
case 0x6fee05:c.instructions+=2;goto B6fee05;
case 0x6fee06:c.instructions+=1;goto B6fee06;
case 0x6fee07:goto L6fee07;
case 0x6fee08:c.instructions+=6;goto B6fee08;
case 0x6fee0a:c.instructions+=5;goto B6fee0a;
case 0x6fee0b:c.instructions+=4;goto B6fee0b;
case 0x6fee0c:c.instructions+=3;goto B6fee0c;
case 0x6fee0d:c.instructions+=2;goto B6fee0d;
case 0x6fee0f:c.instructions+=1;goto B6fee0f;
case 0x6fee14:goto L6fee14;
case 0x6fee17:c.instructions+=2;goto B6fee17;
case 0x6fee19:c.instructions+=1;goto B6fee19;
case 0x6fee1e:goto L6fee1e;
case 0x6fee24:c.instructions+=6;goto B6fee24;
case 0x6fee27:c.instructions+=5;goto B6fee27;
case 0x6fee29:c.instructions+=4;goto B6fee29;
case 0x6fee2b:c.instructions+=3;goto B6fee2b;
case 0x6fee2e:c.instructions+=2;goto B6fee2e;
case 0x6fee31:c.instructions+=1;goto B6fee31;
case 0x6fee33:goto L6fee33;
case 0x6fee39:goto L6fee39;
case 0x6fee3c:c.instructions+=5;goto B6fee3c;
case 0x6fee3e:c.instructions+=4;goto B6fee3e;
case 0x6fee40:c.instructions+=3;goto B6fee40;
case 0x6fee43:c.instructions+=2;goto B6fee43;
case 0x6fee46:c.instructions+=1;goto B6fee46;
case 0x6fee48:goto L6fee48;
case 0x6fee4e:goto L6fee4e;
case 0x6fee50:c.instructions+=7;goto B6fee50;
case 0x6fee52:c.instructions+=6;goto B6fee52;
case 0x6fee53:c.instructions+=5;goto B6fee53;
case 0x6fee54:c.instructions+=4;goto B6fee54;
case 0x6fee56:c.instructions+=3;goto B6fee56;
case 0x6fee58:c.instructions+=2;goto B6fee58;
case 0x6fee5b:c.instructions+=1;goto B6fee5b;
case 0x6fee5d:goto L6fee5d;
case 0x6fee5f:c.instructions+=2;goto B6fee5f;
case 0x6fee60:c.instructions+=1;goto B6fee60;
case 0x6fee61:goto L6fee61;
case 0x6fee63:c.instructions+=2;goto B6fee63;
case 0x6fee64:c.instructions+=1;goto B6fee64;
case 0x6fee65:goto L6fee65;
case 0x6fee66:c.instructions+=4;goto B6fee66;
case 0x6fee68:c.instructions+=3;goto B6fee68;
case 0x6fee6c:c.instructions+=2;goto B6fee6c;
case 0x6fee70:c.instructions+=1;goto B6fee70;
case 0x6fee76:goto L6fee76;
case 0x6fee78:c.instructions+=4;goto B6fee78;
case 0x6fee7f:c.instructions+=3;goto B6fee7f;
case 0x6fee81:c.instructions+=2;goto B6fee81;
case 0x6fee82:c.instructions+=1;goto B6fee82;
case 0x6fee83:goto L6fee83;
case 0x6fee84:c.instructions+=3;goto B6fee84;
case 0x6fee85:c.instructions+=2;goto B6fee85;
case 0x6fee87:c.instructions+=1;goto B6fee87;
case 0x6fee8d:goto L6fee8d;
case 0x6fee90:c.instructions+=4;goto B6fee90;
case 0x6fee92:c.instructions+=3;goto B6fee92;
case 0x6fee94:c.instructions+=2;goto B6fee94;
case 0x6fee9a:c.instructions+=1;goto B6fee9a;
case 0x6fee9c:goto L6fee9c;
case 0x6fee9f:c.instructions+=2;goto B6fee9f;
case 0x6feea3:c.instructions+=1;goto B6feea3;
case 0x6feea5:goto L6feea5;
case 0x6feea7:c.instructions+=4;goto B6feea7;
case 0x6feeab:c.instructions+=3;goto B6feeab;
case 0x6feeae:c.instructions+=2;goto B6feeae;
case 0x6feeb1:c.instructions+=1;goto B6feeb1;
case 0x6feeb4:goto L6feeb4;
case 0x6feeb6:c.instructions+=3;goto B6feeb6;
case 0x6feeb7:c.instructions+=2;goto B6feeb7;
case 0x6feeb8:c.instructions+=1;goto B6feeb8;
case 0x6feeb9:goto L6feeb9;
case 0x6feeba:c.instructions+=4;goto B6feeba;
case 0x6feebc:c.instructions+=3;goto B6feebc;
case 0x6feebd:c.instructions+=2;goto B6feebd;
case 0x6feebf:c.instructions+=1;goto B6feebf;
case 0x6feec4:goto L6feec4;
case 0x6feec7:c.instructions+=4;goto B6feec7;
case 0x6feeca:c.instructions+=3;goto B6feeca;
case 0x6feecb:c.instructions+=2;goto B6feecb;
case 0x6feecc:c.instructions+=1;goto B6feecc;
case 0x6feecf:goto L6feecf;
case 0x6feed0:c.instructions+=4;goto B6feed0;
case 0x6feed2:c.instructions+=3;goto B6feed2;
case 0x6feed3:c.instructions+=2;goto B6feed3;
case 0x6feed5:c.instructions+=1;goto B6feed5;
case 0x6feeda:goto L6feeda;
case 0x6feede:c.instructions+=1;goto B6feede;
case 0x6feee0:goto L6feee0;
case 0x6feee1:c.instructions+=1;goto B6feee1;
case 0x6feee7:goto L6feee7;
case 0x6feee8:goto L6feee8;
case 0x6feeea:c.instructions+=3;goto B6feeea;
case 0x6feeeb:c.instructions+=2;goto B6feeeb;
case 0x6feeec:c.instructions+=1;goto B6feeec;
case 0x6feeef:goto L6feeef;
case 0x6feef0:c.instructions+=5;goto B6feef0;
case 0x6feef2:c.instructions+=4;goto B6feef2;
case 0x6feef5:c.instructions+=3;goto B6feef5;
case 0x6feef6:c.instructions+=2;goto B6feef6;
case 0x6feef8:c.instructions+=1;goto B6feef8;
case 0x6feefd:goto L6feefd;
case 0x6feeff:c.instructions+=1;goto B6feeff;
case 0x6fef01:goto L6fef01;
case 0x6fef06:goto L6fef06;
case 0x6fef08:goto L6fef08;
case 0x6fef0c:c.instructions+=6;goto B6fef0c;
case 0x6fef10:c.instructions+=5;goto B6fef10;
case 0x6fef14:c.instructions+=4;goto B6fef14;
case 0x6fef17:c.instructions+=3;goto B6fef17;
case 0x6fef18:c.instructions+=2;goto B6fef18;
case 0x6fef19:c.instructions+=1;goto B6fef19;
case 0x6fef1e:goto L6fef1e;
case 0x6fef20:c.instructions+=2;goto B6fef20;
case 0x6fef22:c.instructions+=1;goto B6fef22;
case 0x6fef27:goto L6fef27;
case 0x6fef2d:c.instructions+=6;goto B6fef2d;
case 0x6fef2f:c.instructions+=5;goto B6fef2f;
case 0x6fef31:c.instructions+=4;goto B6fef31;
case 0x6fef33:c.instructions+=3;goto B6fef33;
case 0x6fef34:c.instructions+=2;goto B6fef34;
case 0x6fef39:c.instructions+=1;goto B6fef39;
case 0x6fef3f:goto L6fef3f;
case 0x6fef40:c.instructions+=8;goto B6fef40;
case 0x6fef41:c.instructions+=7;goto B6fef41;
case 0x6fef43:c.instructions+=6;goto B6fef43;
case 0x6fef46:c.instructions+=5;goto B6fef46;
case 0x6fef48:c.instructions+=4;goto B6fef48;
case 0x6fef4b:c.instructions+=3;goto B6fef4b;
case 0x6fef4c:c.instructions+=2;goto B6fef4c;
case 0x6fef4f:c.instructions+=1;goto B6fef4f;
case 0x6fef54:goto L6fef54;
case 0x6fef57:c.instructions+=4;goto B6fef57;
case 0x6fef5a:c.instructions+=3;goto B6fef5a;
case 0x6fef5c:c.instructions+=2;goto B6fef5c;
case 0x6fef5d:c.instructions+=1;goto B6fef5d;
case 0x6fef62:goto L6fef62;
case 0x6fef64:c.instructions+=4;goto B6fef64;
case 0x6fef67:c.instructions+=3;goto B6fef67;
case 0x6fef69:c.instructions+=2;goto B6fef69;
case 0x6fef6c:c.instructions+=1;goto B6fef6c;
case 0x6fef6d:goto L6fef6d;
case 0x6fef6f:c.instructions+=3;goto B6fef6f;
case 0x6fef70:c.instructions+=2;goto B6fef70;
case 0x6fef71:c.instructions+=1;goto B6fef71;
case 0x6fef74:goto L6fef74;
case 0x6fef75:c.instructions+=3;goto B6fef75;
case 0x6fef77:c.instructions+=2;goto B6fef77;
case 0x6fef7b:c.instructions+=1;goto B6fef7b;
case 0x6fef7d:goto L6fef7d;
case 0x6fef80:c.instructions+=1;goto B6fef80;
case 0x6fef85:goto L6fef85;
case 0x6fef88:c.instructions+=1;goto B6fef88;
case 0x6fef8e:goto L6fef8e;
case 0x6fef92:c.instructions+=2;goto B6fef92;
case 0x6fef93:c.instructions+=1;goto B6fef93;
case 0x6fef94:goto L6fef94;
case 0x6fef95:c.instructions+=1;goto B6fef95;
case 0x6fef96:goto L6fef96;
case 0x6fef97:c.instructions+=5;goto B6fef97;
case 0x6fef99:c.instructions+=4;goto B6fef99;
case 0x6fef9a:c.instructions+=3;goto B6fef9a;
case 0x6fef9c:c.instructions+=2;goto B6fef9c;
case 0x6fefa0:c.instructions+=1;goto B6fefa0;
case 0x6fefa2:goto L6fefa2;
case 0x6fefa7:goto L6fefa7;
case 0x6fefaa:c.instructions+=2;goto B6fefaa;
case 0x6fefad:c.instructions+=1;goto B6fefad;
case 0x6fefb2:goto L6fefb2;
case 0x6fefb3:c.instructions+=3;goto B6fefb3;
case 0x6fefb4:c.instructions+=2;goto B6fefb4;
case 0x6fefb6:c.instructions+=1;goto B6fefb6;
case 0x6fefbb:goto L6fefbb;
case 0x6fefbd:c.instructions+=1;goto B6fefbd;
case 0x6fefbf:goto L6fefbf;
case 0x6fefc1:goto L6fefc1;
case 0x6fefc2:c.instructions+=2;goto B6fefc2;
case 0x6fefc3:c.instructions+=1;goto B6fefc3;
case 0x6fefc6:goto L6fefc6;
case 0x6fefc7:c.instructions+=3;goto B6fefc7;
case 0x6fefc9:c.instructions+=2;goto B6fefc9;
case 0x6fefcd:c.instructions+=1;goto B6fefcd;
case 0x6fefcf:goto L6fefcf;
case 0x6fefd4:goto L6fefd4;
case 0x6fefd6:c.instructions+=2;goto B6fefd6;
case 0x6fefd9:c.instructions+=1;goto B6fefd9;
case 0x6fefde:goto L6fefde;
case 0x6fefdf:c.instructions+=3;goto B6fefdf;
case 0x6fefe0:c.instructions+=2;goto B6fefe0;
case 0x6fefe2:c.instructions+=1;goto B6fefe2;
case 0x6fefe7:goto L6fefe7;
case 0x6fefe9:c.instructions+=2;goto B6fefe9;
case 0x6fefea:c.instructions+=1;goto B6fefea;
case 0x6fefeb:goto L6fefeb;
case 0x6fefed:c.instructions+=2;goto B6fefed;
case 0x6fefee:c.instructions+=1;goto B6fefee;
case 0x6fefef:goto L6fefef;
case 0x6feff0:c.instructions+=5;goto B6feff0;
case 0x6feff2:c.instructions+=4;goto B6feff2;
case 0x6feff3:c.instructions+=3;goto B6feff3;
case 0x6feff5:c.instructions+=2;goto B6feff5;
case 0x6feff9:c.instructions+=1;goto B6feff9;
case 0x6feffb:goto L6feffb;
default:missing_instruction(c.pc);}
B6fe001:L6fe001:{c.instructions+=1;NFSU2_TR(0x6fe001);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe002:L6fe002:{c.instructions+=4;NFSU2_TR(0x6fe002);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe003:{NFSU2_TR(0x6fe003);
__builtin_memmove((R+24),(R+4),4);
}
B6fe005:{NFSU2_TR(0x6fe005);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fe007:{NFSU2_TR(0x6fe007);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe00aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fe00a:L6fe00a:{c.instructions+=2;NFSU2_TR(0x6fe00a);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B6fe00d:{NFSU2_TR(0x6fe00d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe027;}}
}
B6fe00f:L6fe00f:{c.instructions+=2;NFSU2_TR(0x6fe00f);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b0258),4);
w1(R+512,u8((r4(R+24))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fe015:{NFSU2_TR(0x6fe015);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe01e;}}
}
B6fe017:L6fe017:{c.instructions+=1;NFSU2_TR(0x6fe017);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x8b0258,u32(u32(m4(0x8b0258))&u32(u32(0x0ull))));
w1(R+519,u8(s32(m4(0x8b0258))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8b0258))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8b0258))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fe01e:L6fe01e:{c.instructions+=4;NFSU2_TR(0x6fe01e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fe020:{NFSU2_TR(0x6fe020);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe022:{NFSU2_TR(0x6fe022);
__builtin_memmove((R+4),(R+24),4);
}
B6fe024:{NFSU2_TR(0x6fe024);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe027ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fe027:L6fe027:{c.instructions+=3;NFSU2_TR(0x6fe027);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fe02a:{NFSU2_TR(0x6fe02a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fe02b:{NFSU2_TR(0x6fe02b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe02c:L6fe02c:{c.instructions+=20;NFSU2_TR(0x6fe02c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe02d:{NFSU2_TR(0x6fe02d);
__builtin_memmove((R+20),(R+16),4);
}
B6fe02f:{NFSU2_TR(0x6fe02f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe030:{NFSU2_TR(0x6fe030);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe031:{NFSU2_TR(0x6fe031);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fe034:{NFSU2_TR(0x6fe034);
__builtin_memmove((R+12),(R+4),4);
}
B6fe036:{NFSU2_TR(0x6fe036);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe037:{NFSU2_TR(0x6fe037);
u8 U[4];
w4(U+0,u32(0x7c3368ull));
s4(u32(r4(R+12)),r4(U+0));
}
B6fe03d:{NFSU2_TR(0x6fe03d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fe040:{NFSU2_TR(0x6fe040);
__builtin_memmove((R+28),(R+0),4);
}
B6fe042:{NFSU2_TR(0x6fe042);
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
B6fe043:{NFSU2_TR(0x6fe043);
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
B6fe044:{NFSU2_TR(0x6fe044);
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
B6fe045:{NFSU2_TR(0x6fe045);
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
B6fe046:{NFSU2_TR(0x6fe046);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fe048:{NFSU2_TR(0x6fe048);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
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
B6fe04c:{NFSU2_TR(0x6fe04c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fe053:{NFSU2_TR(0x6fe053);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6fe055:{NFSU2_TR(0x6fe055);
__builtin_memmove((R+4),(R+0),4);
}
B6fe057:{NFSU2_TR(0x6fe057);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe05aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fe05a:L6fe05a:{c.instructions+=3;NFSU2_TR(0x6fe05a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fe05d:{NFSU2_TR(0x6fe05d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fe05f:{NFSU2_TR(0x6fe05f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe062ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fe062:L6fe062:{c.instructions+=3;NFSU2_TR(0x6fe062);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fe065:{NFSU2_TR(0x6fe065);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fe067:{NFSU2_TR(0x6fe067);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe06aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fe06a:L6fe06a:{c.instructions+=2;NFSU2_TR(0x6fe06a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe06d:{NFSU2_TR(0x6fe06d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe072ull));
TAIL_STATIC(0x6fdd55u,6fd);
}
B6fe072:L6fe072:{c.instructions+=4;NFSU2_TR(0x6fe072);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe073:{NFSU2_TR(0x6fe073);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fe076:{NFSU2_TR(0x6fe076);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fe078:{NFSU2_TR(0x6fe078);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe07aull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6fe07a:L6fe07a:{c.instructions+=7;NFSU2_TR(0x6fe07a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fe07b:{NFSU2_TR(0x6fe07b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe07e:{NFSU2_TR(0x6fe07e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fe07f:{NFSU2_TR(0x6fe07f);
__builtin_memmove((R+0),(R+12),4);
}
B6fe081:{NFSU2_TR(0x6fe081);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fe082:{NFSU2_TR(0x6fe082);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fe083:{NFSU2_TR(0x6fe083);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe086:L6fe086:{c.instructions+=5;NFSU2_TR(0x6fe086);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe087:{NFSU2_TR(0x6fe087);
__builtin_memmove((R+20),(R+16),4);
}
B6fe089:{NFSU2_TR(0x6fe089);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe08a:{NFSU2_TR(0x6fe08a);
__builtin_memmove((R+24),(R+4),4);
}
B6fe08c:{NFSU2_TR(0x6fe08c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe091ull));
TAIL_STATIC(0x6fdfcau,6fd);
}
B6fe091:L6fe091:{c.instructions+=2;NFSU2_TR(0x6fe091);
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
B6fe095:{NFSU2_TR(0x6fe095);
if(r1(R+518)){{goto L6fe0a1;}}
}
B6fe097:L6fe097:{c.instructions+=3;NFSU2_TR(0x6fe097);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe099:{NFSU2_TR(0x6fe099);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe09a:{NFSU2_TR(0x6fe09a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe09full));
TAIL_STATIC(0x6fc1eeu,6fc);
}
B6fe09f:L6fe09f:{c.instructions+=2;NFSU2_TR(0x6fe09f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe0a0:{NFSU2_TR(0x6fe0a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe0a1:L6fe0a1:{c.instructions+=4;NFSU2_TR(0x6fe0a1);
__builtin_memmove((R+0),(R+24),4);
}
B6fe0a3:{NFSU2_TR(0x6fe0a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fe0a4:{NFSU2_TR(0x6fe0a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fe0a5:{NFSU2_TR(0x6fe0a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe0a8:L6fe0a8:{c.instructions+=6;NFSU2_TR(0x6fe0a8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe0a9:{NFSU2_TR(0x6fe0a9);
__builtin_memmove((R+20),(R+16),4);
}
B6fe0ab:{NFSU2_TR(0x6fe0ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe0ac:{NFSU2_TR(0x6fe0ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fe0af:{NFSU2_TR(0x6fe0af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe0b0:{NFSU2_TR(0x6fe0b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6fe0b3:L6fe0b3:{c.instructions+=3;NFSU2_TR(0x6fe0b3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+0),(U+0),2);
}
B6fe0b6:{NFSU2_TR(0x6fe0b6);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6fe0b9:{NFSU2_TR(0x6fe0b9);
if(r1(R+518)){{goto L6fe0ee;}}
}
B6fe0bb:L6fe0bb:{c.instructions+=2;NFSU2_TR(0x6fe0bb);
w1(R+512,u8((r2(R+0))<(u16(0x100ull))));
}
B6fe0bf:{NFSU2_TR(0x6fe0bf);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6fe0d5;}}
}
B6fe0c1:L6fe0c1:{c.instructions+=2;NFSU2_TR(0x6fe0c1);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x5cull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6fe0c5:{NFSU2_TR(0x6fe0c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe0ce;}}
}
B6fe0c7:L6fe0c7:{c.instructions+=2;NFSU2_TR(0x6fe0c7);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x78ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6fe0cc:{NFSU2_TR(0x6fe0cc);
if(r1(R+518)){{goto L6fe0d5;}}
}
B6fe0ce:L6fe0ce:{c.instructions+=4;NFSU2_TR(0x6fe0ce);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6fe0d0:{NFSU2_TR(0x6fe0d0);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B6fe0d2:{NFSU2_TR(0x6fe0d2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6fe0d3:{NFSU2_TR(0x6fe0d3);
{goto L6fe0ea;}
}
B6fe0d5:L6fe0d5:{c.instructions+=5;NFSU2_TR(0x6fe0d5);
w4(R+0,u32(r2(R+0)));
}
B6fe0d8:{NFSU2_TR(0x6fe0d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe0d9:{NFSU2_TR(0x6fe0d9);
u8 U[4];
w4(U+0,u32(0x7c33d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe0de:{NFSU2_TR(0x6fe0de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe0df:{NFSU2_TR(0x6fe0df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe0e4ull));
TAIL_STATIC(0x75c784u,75c);
}
B6fe0e4:L6fe0e4:{c.instructions+=2;NFSU2_TR(0x6fe0e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fe0e7:{NFSU2_TR(0x6fe0e7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x6ull))));
}
B6fe0ea:L6fe0ea:{c.instructions+=3;NFSU2_TR(0x6fe0ea);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6fe0eb:{NFSU2_TR(0x6fe0eb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6fe0ec:{NFSU2_TR(0x6fe0ec);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe0b3u);}goto L6fe0b3;}
}
B6fe0ee:L6fe0ee:{c.instructions+=5;NFSU2_TR(0x6fe0ee);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+28)),r1(U+0));
}
B6fe0f1:{NFSU2_TR(0x6fe0f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fe0f2:{NFSU2_TR(0x6fe0f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fe0f3:{NFSU2_TR(0x6fe0f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fe0f4:{NFSU2_TR(0x6fe0f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe0f5:L6fe0f5:{c.instructions+=7;NFSU2_TR(0x6fe0f5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe0f6:{NFSU2_TR(0x6fe0f6);
__builtin_memmove((R+20),(R+16),4);
}
B6fe0f8:{NFSU2_TR(0x6fe0f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fe0fb:{NFSU2_TR(0x6fe0fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe0fc:{NFSU2_TR(0x6fe0fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fe0ff:{NFSU2_TR(0x6fe0ff);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6fe102:{NFSU2_TR(0x6fe102);
if(r1(R+518)){{goto L6fe16c;}}
}
B6fe104:L6fe104:{c.instructions+=5;NFSU2_TR(0x6fe104);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe105:{NFSU2_TR(0x6fe105);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe106:{NFSU2_TR(0x6fe106);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe108:{NFSU2_TR(0x6fe108);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fe109:{NFSU2_TR(0x6fe109);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B6fe10b:L6fe10b:{c.instructions+=3;NFSU2_TR(0x6fe10b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6fe10d:{NFSU2_TR(0x6fe10d);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x5cull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6fe110:{NFSU2_TR(0x6fe110);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe15a;}}
}
B6fe112:L6fe112:{c.instructions+=2;NFSU2_TR(0x6fe112);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x78ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6fe116:{NFSU2_TR(0x6fe116);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe15a;}}
}
B6fe118:L6fe118:{c.instructions+=1;NFSU2_TR(0x6fe118);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fe11b:L6fe11b:{c.instructions+=3;NFSU2_TR(0x6fe11b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6fe11d:{NFSU2_TR(0x6fe11d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fe11f:{NFSU2_TR(0x6fe11f);
if(r1(R+518)){{goto L6fe14d;}}
}
B6fe121:L6fe121:{c.instructions+=2;NFSU2_TR(0x6fe121);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6fe123:{NFSU2_TR(0x6fe123);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fe131;}}
}
B6fe125:L6fe125:{c.instructions+=2;NFSU2_TR(0x6fe125);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fe127:{NFSU2_TR(0x6fe127);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6fe131;}}
}
B6fe129:L6fe129:{c.instructions+=3;NFSU2_TR(0x6fe129);
w4(R+0,u32(r1(R+0)));
}
B6fe12c:{NFSU2_TR(0x6fe12c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x30ull))));
}
B6fe12f:{NFSU2_TR(0x6fe12f);
{goto L6fe13f;}
}
B6fe131:L6fe131:{c.instructions+=2;NFSU2_TR(0x6fe131);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6fe133:{NFSU2_TR(0x6fe133);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fe15a;}}
}
B6fe135:L6fe135:{c.instructions+=2;NFSU2_TR(0x6fe135);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x66ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x66ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fe137:{NFSU2_TR(0x6fe137);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6fe15a;}}
}
B6fe139:L6fe139:{c.instructions+=2;NFSU2_TR(0x6fe139);
w4(R+0,u32(r1(R+0)));
}
B6fe13c:{NFSU2_TR(0x6fe13c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x57ull))));
}
B6fe13f:L6fe13f:{c.instructions+=6;NFSU2_TR(0x6fe13f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6fe142:{NFSU2_TR(0x6fe142);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B6fe144:{NFSU2_TR(0x6fe144);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6fe145:{NFSU2_TR(0x6fe145);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6fe148:{NFSU2_TR(0x6fe148);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fe14b:{NFSU2_TR(0x6fe14b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe11bu);}goto L6fe11b;}}
}
B6fe14d:L6fe14d:{c.instructions+=6;NFSU2_TR(0x6fe14d);
u8 U[2];
__builtin_memmove((U+0),(R+28),2);
s2(u32(r4(R+4)),r2(U+0));
}
B6fe150:{NFSU2_TR(0x6fe150);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fe151:{NFSU2_TR(0x6fe151);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fe152:{NFSU2_TR(0x6fe152);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x6ull))));
}
B6fe155:{NFSU2_TR(0x6fe155);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x6ull))));
}
B6fe158:{NFSU2_TR(0x6fe158);
{goto L6fe165;}
}
B6fe15a:L6fe15a:{c.instructions+=6;NFSU2_TR(0x6fe15a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w2(R+0,u16(r1(U+0)));
}
B6fe15e:{NFSU2_TR(0x6fe15e);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+4)),r2(U+0));
}
B6fe161:{NFSU2_TR(0x6fe161);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fe162:{NFSU2_TR(0x6fe162);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fe163:{NFSU2_TR(0x6fe163);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6fe164:{NFSU2_TR(0x6fe164);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B6fe165:L6fe165:{c.instructions+=2;NFSU2_TR(0x6fe165);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6fe168:{NFSU2_TR(0x6fe168);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe10bu);}goto L6fe10b;}}
}
B6fe16a:L6fe16a:{c.instructions+=2;NFSU2_TR(0x6fe16a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fe16b:{NFSU2_TR(0x6fe16b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fe16c:L6fe16c:{c.instructions+=4;NFSU2_TR(0x6fe16c);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w2(U+0,u16(u32(r2(U+0))&u32(u16(0x0ull))));
s2(u32(r4(R+4)),r2(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w2(U+2,u16(u32(r2(U+0))&u32(u16(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r2(U+2)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fe170:{NFSU2_TR(0x6fe170);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fe171:{NFSU2_TR(0x6fe171);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fe172:{NFSU2_TR(0x6fe172);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe173:L6fe173:{c.instructions+=6;NFSU2_TR(0x6fe173);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe174:{NFSU2_TR(0x6fe174);
__builtin_memmove((R+20),(R+16),4);
}
B6fe176:{NFSU2_TR(0x6fe176);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe177:{NFSU2_TR(0x6fe177);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fe17a:{NFSU2_TR(0x6fe17a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fe17d:{NFSU2_TR(0x6fe17d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6fe183;}}
}
B6fe17f:L6fe17f:{c.instructions+=2;NFSU2_TR(0x6fe17f);
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
B6fe181:{NFSU2_TR(0x6fe181);
{goto L6fe1c8;}
}
B6fe183:L6fe183:{c.instructions+=19;NFSU2_TR(0x6fe183);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fe186:{NFSU2_TR(0x6fe186);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+0,u32(r1(U+0)));
}
B6fe189:{NFSU2_TR(0x6fe189);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6fe18c:{NFSU2_TR(0x6fe18c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fe18d:{NFSU2_TR(0x6fe18d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+8,u32(r1(U+0)));
}
B6fe190:{NFSU2_TR(0x6fe190);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6fe193:{NFSU2_TR(0x6fe193);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B6fe195:{NFSU2_TR(0x6fe195);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6fe197:{NFSU2_TR(0x6fe197);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fe198:{NFSU2_TR(0x6fe198);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+9),(U+0),1);
}
B6fe19a:{NFSU2_TR(0x6fe19a);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x4ull))));
}
B6fe19d:{NFSU2_TR(0x6fe19d);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B6fe19f:{NFSU2_TR(0x6fe19f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fe1a0:{NFSU2_TR(0x6fe1a0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+8,u32(r1(U+0)));
}
B6fe1a3:{NFSU2_TR(0x6fe1a3);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B6fe1a5:{NFSU2_TR(0x6fe1a5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fe1a6:{NFSU2_TR(0x6fe1a6);
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
B6fe1a8:{NFSU2_TR(0x6fe1a8);
w4(R+0,u32(~u32(r4(R+0))));
}
B6fe1aa:{NFSU2_TR(0x6fe1aa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6fe1c6;}}
}
B6fe1ac:L6fe1ac:{c.instructions+=1;NFSU2_TR(0x6fe1ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe1ad:L6fe1ad:{c.instructions+=9;NFSU2_TR(0x6fe1ad);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+28,u32(r1(U+0)));
}
B6fe1b0:{NFSU2_TR(0x6fe1b0);
__builtin_memmove((R+8),(R+0),4);
}
B6fe1b2:{NFSU2_TR(0x6fe1b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6fe1b5:{NFSU2_TR(0x6fe1b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B6fe1b8:{NFSU2_TR(0x6fe1b8);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B6fe1ba:{NFSU2_TR(0x6fe1ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8145e0ull))+u32(r4(U+0))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+8))));
}
B6fe1c1:{NFSU2_TR(0x6fe1c1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fe1c2:{NFSU2_TR(0x6fe1c2);
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
B6fe1c3:{NFSU2_TR(0x6fe1c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe1adu);}goto L6fe1ad;}}
}
B6fe1c5:L6fe1c5:{c.instructions+=1;NFSU2_TR(0x6fe1c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fe1c6:L6fe1c6:{c.instructions+=1;NFSU2_TR(0x6fe1c6);
w4(R+0,u32(~u32(r4(R+0))));
}
B6fe1c8:L6fe1c8:{c.instructions+=3;NFSU2_TR(0x6fe1c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fe1c9:{NFSU2_TR(0x6fe1c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fe1ca:{NFSU2_TR(0x6fe1ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe1cb:L6fe1cb:{c.instructions+=7;NFSU2_TR(0x6fe1cb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe1cc:{NFSU2_TR(0x6fe1cc);
__builtin_memmove((R+20),(R+16),4);
}
B6fe1ce:{NFSU2_TR(0x6fe1ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe1cf:{NFSU2_TR(0x6fe1cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe1d0:{NFSU2_TR(0x6fe1d0);
__builtin_memmove((R+24),(R+0),4);
}
B6fe1d2:{NFSU2_TR(0x6fe1d2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6fe1d4:{NFSU2_TR(0x6fe1d4);
{goto L6fe1eb;}
}
B6fe1d6:L6fe1d6:{c.instructions+=4;NFSU2_TR(0x6fe1d6);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B6fe1d9:{NFSU2_TR(0x6fe1d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe1da:{NFSU2_TR(0x6fe1da);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe1dd:{NFSU2_TR(0x6fe1dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe1e2ull));
TAIL_STATIC(0x75d660u,75d);
}
B6fe1e2:L6fe1e2:{c.instructions+=4;NFSU2_TR(0x6fe1e2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fe1e4:{NFSU2_TR(0x6fe1e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe1e5:{NFSU2_TR(0x6fe1e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe1e6:{NFSU2_TR(0x6fe1e6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6fe1ea;}}
}
B6fe1e8:L6fe1e8:{c.instructions+=1;NFSU2_TR(0x6fe1e8);
__builtin_memmove((R+28),(R+0),4);
}
B6fe1ea:L6fe1ea:{c.instructions+=1;NFSU2_TR(0x6fe1ea);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6fe1eb:L6fe1eb:{c.instructions+=3;NFSU2_TR(0x6fe1eb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6fe1ed:{NFSU2_TR(0x6fe1ed);
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
B6fe1ef:{NFSU2_TR(0x6fe1ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe1d6u);}goto L6fe1d6;}}
}
B6fe1f1:L6fe1f1:{c.instructions+=5;NFSU2_TR(0x6fe1f1);
__builtin_memmove((R+0),(R+28),4);
}
B6fe1f3:{NFSU2_TR(0x6fe1f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fe1f4:{NFSU2_TR(0x6fe1f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fe1f5:{NFSU2_TR(0x6fe1f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fe1f6:{NFSU2_TR(0x6fe1f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe1f7:L6fe1f7:{c.instructions+=9;NFSU2_TR(0x6fe1f7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe1f8:{NFSU2_TR(0x6fe1f8);
__builtin_memmove((R+20),(R+16),4);
}
B6fe1fa:{NFSU2_TR(0x6fe1fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe1fb:{NFSU2_TR(0x6fe1fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe1fc:{NFSU2_TR(0x6fe1fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe1fd:{NFSU2_TR(0x6fe1fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6fe200:{NFSU2_TR(0x6fe200);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe201:{NFSU2_TR(0x6fe201);
w4(R+0,u32(0x7c33e0ull));
}
B6fe206:{NFSU2_TR(0x6fe206);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe20bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe1cbu);}goto L6fe1cb;}
}
B6fe20b:L6fe20b:{c.instructions+=5;NFSU2_TR(0x6fe20b);
__builtin_memmove((R+24),(R+0),4);
}
B6fe20d:{NFSU2_TR(0x6fe20d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6fe20f:{NFSU2_TR(0x6fe20f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fe211:{NFSU2_TR(0x6fe211);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe212:{NFSU2_TR(0x6fe212);
if(r1(R+518)){{goto L6fe2de;}}
}
B6fe218:L6fe218:{c.instructions+=3;NFSU2_TR(0x6fe218);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6fe21a:{NFSU2_TR(0x6fe21a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x26ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fe21c:{NFSU2_TR(0x6fe21c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe250;}}
}
B6fe21e:L6fe21e:{c.instructions+=4;NFSU2_TR(0x6fe21e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe21f:{NFSU2_TR(0x6fe21f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe222:{NFSU2_TR(0x6fe222);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+24)),r1(U+0));
}
B6fe224:{NFSU2_TR(0x6fe224);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe229ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe1f7u);}goto L6fe1f7;}
}
B6fe229:L6fe229:{c.instructions+=4;NFSU2_TR(0x6fe229);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fe22b:{NFSU2_TR(0x6fe22b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe22c:{NFSU2_TR(0x6fe22c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe22d:{NFSU2_TR(0x6fe22d);
if(r1(R+518)){{goto L6fe246;}}
}
B6fe22f:L6fe22f:{c.instructions+=4;NFSU2_TR(0x6fe22f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fe232:{NFSU2_TR(0x6fe232);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe233:{NFSU2_TR(0x6fe233);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe236:{NFSU2_TR(0x6fe236);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe23bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe1f7u);}goto L6fe1f7;}
}
B6fe23b:L6fe23b:{c.instructions+=4;NFSU2_TR(0x6fe23b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fe23d:{NFSU2_TR(0x6fe23d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe23e:{NFSU2_TR(0x6fe23e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe23f:{NFSU2_TR(0x6fe23f);
if(r1(R+518)){{goto L6fe246;}}
}
B6fe241:L6fe241:{c.instructions+=3;NFSU2_TR(0x6fe241);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fe243:{NFSU2_TR(0x6fe243);
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
B6fe244:{NFSU2_TR(0x6fe244);
{goto L6fe248;}
}
B6fe246:L6fe246:{c.instructions+=1;NFSU2_TR(0x6fe246);
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
B6fe248:L6fe248:{c.instructions+=2;NFSU2_TR(0x6fe248);
u8 U[1];
w1(U+0,u8(0x26ull));
s1(u32(r4(R+24)),r1(U+0));
}
B6fe24b:{NFSU2_TR(0x6fe24b);
{goto L6fe305;}
}
B6fe250:L6fe250:{c.instructions+=2;NFSU2_TR(0x6fe250);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7cull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fe252:{NFSU2_TR(0x6fe252);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe282;}}
}
B6fe254:L6fe254:{c.instructions+=4;NFSU2_TR(0x6fe254);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe255:{NFSU2_TR(0x6fe255);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe258:{NFSU2_TR(0x6fe258);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+24)),r1(U+0));
}
B6fe25a:{NFSU2_TR(0x6fe25a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe25full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe1f7u);}goto L6fe1f7;}
}
B6fe25f:L6fe25f:{c.instructions+=4;NFSU2_TR(0x6fe25f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fe261:{NFSU2_TR(0x6fe261);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe262:{NFSU2_TR(0x6fe262);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe263:{NFSU2_TR(0x6fe263);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe277;}}
}
B6fe265:L6fe265:{c.instructions+=4;NFSU2_TR(0x6fe265);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fe268:{NFSU2_TR(0x6fe268);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe269:{NFSU2_TR(0x6fe269);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe26c:{NFSU2_TR(0x6fe26c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe271ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe1f7u);}goto L6fe1f7;}
}
B6fe271:L6fe271:{c.instructions+=4;NFSU2_TR(0x6fe271);
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
B6fe273:{NFSU2_TR(0x6fe273);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe274:{NFSU2_TR(0x6fe274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe275:{NFSU2_TR(0x6fe275);
if(r1(R+518)){{goto L6fe27a;}}
}
B6fe277:L6fe277:{c.instructions+=2;NFSU2_TR(0x6fe277);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fe279:{NFSU2_TR(0x6fe279);
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
B6fe27a:L6fe27a:{c.instructions+=2;NFSU2_TR(0x6fe27a);
u8 U[1];
w1(U+0,u8(0x7cull));
s1(u32(r4(R+24)),r1(U+0));
}
B6fe27d:{NFSU2_TR(0x6fe27d);
{goto L6fe305;}
}
B6fe282:L6fe282:{c.instructions+=2;NFSU2_TR(0x6fe282);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x21ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fe284:{NFSU2_TR(0x6fe284);
if(r1(R+518)){{goto L6fe2b3;}}
}
B6fe286:L6fe286:{c.instructions+=2;NFSU2_TR(0x6fe286);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7eull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fe288:{NFSU2_TR(0x6fe288);
if(r1(R+518)){{goto L6fe2b3;}}
}
B6fe28a:L6fe28a:{c.instructions+=2;NFSU2_TR(0x6fe28a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5eull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fe28c:{NFSU2_TR(0x6fe28c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe2de;}}
}
B6fe28e:L6fe28e:{c.instructions+=5;NFSU2_TR(0x6fe28e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fe291:{NFSU2_TR(0x6fe291);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe292:{NFSU2_TR(0x6fe292);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe295:{NFSU2_TR(0x6fe295);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+24)),r1(U+0));
}
B6fe297:{NFSU2_TR(0x6fe297);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe29cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe1f7u);}goto L6fe1f7;}
}
B6fe29c:L6fe29c:{c.instructions+=4;NFSU2_TR(0x6fe29c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe29d:{NFSU2_TR(0x6fe29d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe2a0:{NFSU2_TR(0x6fe2a0);
__builtin_memmove((R+12),(R+0),4);
}
B6fe2a2:{NFSU2_TR(0x6fe2a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe2a7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe1f7u);}goto L6fe1f7;}
}
B6fe2a7:L6fe2a7:{c.instructions+=5;NFSU2_TR(0x6fe2a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6fe2aa:{NFSU2_TR(0x6fe2aa);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fe2ac:{NFSU2_TR(0x6fe2ac);
u8 U[1];
w1(U+0,u8(0x5eull));
s1(u32(r4(R+24)),r1(U+0));
}
B6fe2af:{NFSU2_TR(0x6fe2af);
__builtin_memmove((R+0),(R+12),4);
}
B6fe2b1:{NFSU2_TR(0x6fe2b1);
{goto L6fe305;}
}
B6fe2b3:L6fe2b3:{c.instructions+=4;NFSU2_TR(0x6fe2b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe2b4:{NFSU2_TR(0x6fe2b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe2b7:{NFSU2_TR(0x6fe2b7);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+24)),r1(U+0));
}
B6fe2b9:{NFSU2_TR(0x6fe2b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe2beull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe1f7u);}goto L6fe1f7;}
}
B6fe2be:L6fe2be:{c.instructions+=4;NFSU2_TR(0x6fe2be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fe2c0:{NFSU2_TR(0x6fe2c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe2c1:{NFSU2_TR(0x6fe2c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe2c2:{NFSU2_TR(0x6fe2c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe2d6;}}
}
B6fe2c4:L6fe2c4:{c.instructions+=4;NFSU2_TR(0x6fe2c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fe2c7:{NFSU2_TR(0x6fe2c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe2c8:{NFSU2_TR(0x6fe2c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe2cb:{NFSU2_TR(0x6fe2cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe2d0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe1f7u);}goto L6fe1f7;}
}
B6fe2d0:L6fe2d0:{c.instructions+=4;NFSU2_TR(0x6fe2d0);
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
B6fe2d2:{NFSU2_TR(0x6fe2d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe2d3:{NFSU2_TR(0x6fe2d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe2d4:{NFSU2_TR(0x6fe2d4);
if(r1(R+518)){{goto L6fe2d9;}}
}
B6fe2d6:L6fe2d6:{c.instructions+=2;NFSU2_TR(0x6fe2d6);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fe2d8:{NFSU2_TR(0x6fe2d8);
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
B6fe2d9:L6fe2d9:{c.instructions+=2;NFSU2_TR(0x6fe2d9);
u8 U[1];
w1(U+0,u8(0x21ull));
s1(u32(r4(R+24)),r1(U+0));
}
B6fe2dc:{NFSU2_TR(0x6fe2dc);
{goto L6fe305;}
}
B6fe2de:L6fe2de:{c.instructions+=1;NFSU2_TR(0x6fe2de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fe2e1:L6fe2e1:{c.instructions+=3;NFSU2_TR(0x6fe2e1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6fe2e3:{NFSU2_TR(0x6fe2e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2aull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fe2e5:{NFSU2_TR(0x6fe2e5);
if(r1(R+518)){{goto L6fe332;}}
}
B6fe2e7:L6fe2e7:{c.instructions+=2;NFSU2_TR(0x6fe2e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3full))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fe2e9:{NFSU2_TR(0x6fe2e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe2f0;}}
}
B6fe2eb:L6fe2eb:{c.instructions+=3;NFSU2_TR(0x6fe2eb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6fe2ec:{NFSU2_TR(0x6fe2ec);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6fe2ee:{NFSU2_TR(0x6fe2ee);
{goto L6fe301;}
}
B6fe2f0:L6fe2f0:{c.instructions+=2;NFSU2_TR(0x6fe2f0);
u8 U[1];
w1(R+512,u8((r1(R+0))<(u8(0x23ull))));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x23ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fe2f2:{NFSU2_TR(0x6fe2f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe30a;}}
}
B6fe2f4:L6fe2f4:{c.instructions+=4;NFSU2_TR(0x6fe2f4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6fe2f7:{NFSU2_TR(0x6fe2f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe2f8:{NFSU2_TR(0x6fe2f8);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fe2f9:{NFSU2_TR(0x6fe2f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe2feull));
TAIL_STATIC(0x75df39u,75d);
}
B6fe2fe:L6fe2fe:{c.instructions+=2;NFSU2_TR(0x6fe2fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe2ff:{NFSU2_TR(0x6fe2ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fe301:L6fe301:{c.instructions+=1;NFSU2_TR(0x6fe301);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe32f;}}
}
B6fe303:L6fe303:{c.instructions+=1;NFSU2_TR(0x6fe303);
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
B6fe305:L6fe305:{c.instructions+=5;NFSU2_TR(0x6fe305);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fe306:{NFSU2_TR(0x6fe306);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fe307:{NFSU2_TR(0x6fe307);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fe308:{NFSU2_TR(0x6fe308);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fe309:{NFSU2_TR(0x6fe309);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe30a:L6fe30a:{c.instructions+=2;NFSU2_TR(0x6fe30a);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x7eull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7eull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x7eull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6fe30c:{NFSU2_TR(0x6fe30c);
if(r1(R+518)){{goto L6fe349;}}
}
B6fe30e:L6fe30e:{c.instructions+=3;NFSU2_TR(0x6fe30e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6fe311:{NFSU2_TR(0x6fe311);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe312:{NFSU2_TR(0x6fe312);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe317ull));
TAIL_STATIC(0x75ded8u,75d);
}
B6fe317:L6fe317:{c.instructions+=4;NFSU2_TR(0x6fe317);
__builtin_memmove((R+12),(R+0),4);
}
B6fe319:{NFSU2_TR(0x6fe319);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6fe31c:{NFSU2_TR(0x6fe31c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe31d:{NFSU2_TR(0x6fe31d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe322ull));
TAIL_STATIC(0x75ded8u,75d);
}
B6fe322:L6fe322:{c.instructions+=4;NFSU2_TR(0x6fe322);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fe324:{NFSU2_TR(0x6fe324);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe325:{NFSU2_TR(0x6fe325);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe326:{NFSU2_TR(0x6fe326);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe303u);}goto L6fe303;}}
}
B6fe328:L6fe328:{c.instructions+=3;NFSU2_TR(0x6fe328);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6fe32a:{NFSU2_TR(0x6fe32a);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6fe32c:{NFSU2_TR(0x6fe32c);
if(r1(R+518)){{goto L6fe35a;}}
}
B6fe32e:L6fe32e:{c.instructions+=1;NFSU2_TR(0x6fe32e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6fe32f:L6fe32f:{c.instructions+=2;NFSU2_TR(0x6fe32f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6fe330:{NFSU2_TR(0x6fe330);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe2e1u);}goto L6fe2e1;}
}
B6fe332:L6fe332:{c.instructions+=1;NFSU2_TR(0x6fe332);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6fe333:L6fe333:{c.instructions+=3;NFSU2_TR(0x6fe333);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe334:{NFSU2_TR(0x6fe334);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe335:{NFSU2_TR(0x6fe335);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe33aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe1f7u);}goto L6fe1f7;}
}
B6fe33a:L6fe33a:{c.instructions+=4;NFSU2_TR(0x6fe33a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fe33c:{NFSU2_TR(0x6fe33c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe33d:{NFSU2_TR(0x6fe33d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe33e:{NFSU2_TR(0x6fe33e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe35a;}}
}
B6fe340:L6fe340:{c.instructions+=4;NFSU2_TR(0x6fe340);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6fe342:{NFSU2_TR(0x6fe342);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6fe343:{NFSU2_TR(0x6fe343);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fe345:{NFSU2_TR(0x6fe345);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe333u);}goto L6fe333;}}
}
B6fe347:L6fe347:{c.instructions+=1;NFSU2_TR(0x6fe347);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe303u);}goto L6fe303;}
}
B6fe349:L6fe349:{c.instructions+=4;NFSU2_TR(0x6fe349);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6fe34a:{NFSU2_TR(0x6fe34a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe34b:{NFSU2_TR(0x6fe34b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe34c:{NFSU2_TR(0x6fe34c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe351ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe1f7u);}goto L6fe1f7;}
}
B6fe351:L6fe351:{c.instructions+=6;NFSU2_TR(0x6fe351);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6fe353:{NFSU2_TR(0x6fe353);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe354:{NFSU2_TR(0x6fe354);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6fe356:{NFSU2_TR(0x6fe356);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe357:{NFSU2_TR(0x6fe357);
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
B6fe358:{NFSU2_TR(0x6fe358);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe305u);}goto L6fe305;}
}
B6fe35a:L6fe35a:{c.instructions+=3;NFSU2_TR(0x6fe35a);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fe35c:{NFSU2_TR(0x6fe35c);
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
B6fe35d:{NFSU2_TR(0x6fe35d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe305u);}goto L6fe305;}
}
B6fe35f:L6fe35f:{c.instructions+=3;NFSU2_TR(0x6fe35f);
u8 U[4];
w4(U+0,u32(0x7c33e8ull));
s4(u32(r4(R+4)),r4(U+0));
}
B6fe365:{NFSU2_TR(0x6fe365);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
w4(U+4,u32(0x7c32e0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fe36c:{NFSU2_TR(0x6fe36c);
TAIL_STATIC(0x6fdfcau,6fd);
}
B6fe371:L6fe371:{c.instructions+=10;NFSU2_TR(0x6fe371);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe372:{NFSU2_TR(0x6fe372);
__builtin_memmove((R+20),(R+16),4);
}
B6fe374:{NFSU2_TR(0x6fe374);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe375:{NFSU2_TR(0x6fe375);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe376:{NFSU2_TR(0x6fe376);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe379:{NFSU2_TR(0x6fe379);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fe37c:{NFSU2_TR(0x6fe37c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fe37e:{NFSU2_TR(0x6fe37e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe37f:{NFSU2_TR(0x6fe37f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe380:{NFSU2_TR(0x6fe380);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe383ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fe383:L6fe383:{c.instructions+=7;NFSU2_TR(0x6fe383);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe385:{NFSU2_TR(0x6fe385);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe386:{NFSU2_TR(0x6fe386);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fe388:{NFSU2_TR(0x6fe388);
w4(R+12,u32(0x8b0260ull));
}
B6fe38d:{NFSU2_TR(0x6fe38d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe38e:{NFSU2_TR(0x6fe38e);
__builtin_memmove((R+28),(R+12),4);
}
B6fe390:{NFSU2_TR(0x6fe390);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe392:L6fe392:{c.instructions+=1;NFSU2_TR(0x6fe392);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fe394;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe392u);}goto L6fe392;}
}
B6fe394:L6fe394:{c.instructions+=1;NFSU2_TR(0x6fe394);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe399ull));
TAIL_STATIC(0x6fdd62u,6fd);
}
B6fe399:L6fe399:{c.instructions+=3;NFSU2_TR(0x6fe399);
__builtin_memmove((R+24),(R+0),4);
}
B6fe39b:{NFSU2_TR(0x6fe39b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe39c:{NFSU2_TR(0x6fe39c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe3a1ull));
TAIL_STATIC(0x6fdf41u,6fd);
}
B6fe3a1:L6fe3a1:{c.instructions+=3;NFSU2_TR(0x6fe3a1);
__builtin_memmove((R+4),(R+0),4);
}
B6fe3a3:{NFSU2_TR(0x6fe3a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fe3a6:{NFSU2_TR(0x6fe3a6);
__builtin_memmove((R+28),(R+12),4);
}
B6fe3a8:L6fe3a8:{c.instructions+=1;NFSU2_TR(0x6fe3a8);
u8 U[37];
w1(U+36,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+36)){{goto L6fe3ab;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe3a8u);}goto L6fe3a8;}
}
B6fe3ab:L6fe3ab:{c.instructions+=4;NFSU2_TR(0x6fe3ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fe3ae:{NFSU2_TR(0x6fe3ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fe3b0:{NFSU2_TR(0x6fe3b0);
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
B6fe3b3:{NFSU2_TR(0x6fe3b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe3b6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fe3b6:L6fe3b6:{c.instructions+=6;NFSU2_TR(0x6fe3b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fe3b7:{NFSU2_TR(0x6fe3b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fe3b8:{NFSU2_TR(0x6fe3b8);
__builtin_memmove((R+0),(R+12),4);
}
B6fe3ba:{NFSU2_TR(0x6fe3ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fe3bb:{NFSU2_TR(0x6fe3bb);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fe3bc:{NFSU2_TR(0x6fe3bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe3bf:L6fe3bf:{c.instructions+=1;NFSU2_TR(0x6fe3bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe3c0:L6fe3c0:{c.instructions+=6;NFSU2_TR(0x6fe3c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe3c1:{NFSU2_TR(0x6fe3c1);
__builtin_memmove((R+20),(R+16),4);
}
B6fe3c3:{NFSU2_TR(0x6fe3c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe3c4:{NFSU2_TR(0x6fe3c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe3c7:{NFSU2_TR(0x6fe3c7);
__builtin_memmove((R+24),(R+4),4);
}
B6fe3c9:{NFSU2_TR(0x6fe3c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe3ceull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe02cu);}goto L6fe02c;}
}
B6fe3ce:L6fe3ce:{c.instructions+=3;NFSU2_TR(0x6fe3ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe3d1:{NFSU2_TR(0x6fe3d1);
u8 U[4];
w4(U+0,u32(0x7c33e8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6fe3d7:{NFSU2_TR(0x6fe3d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe3dcull));
TAIL_STATIC(0x6fdb33u,6fd);
}
B6fe3dc:L6fe3dc:{c.instructions+=4;NFSU2_TR(0x6fe3dc);
__builtin_memmove((R+0),(R+24),4);
}
B6fe3de:{NFSU2_TR(0x6fe3de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fe3df:{NFSU2_TR(0x6fe3df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fe3e0:{NFSU2_TR(0x6fe3e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe3e3:L6fe3e3:{c.instructions+=6;NFSU2_TR(0x6fe3e3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe3e4:{NFSU2_TR(0x6fe3e4);
__builtin_memmove((R+20),(R+16),4);
}
B6fe3e6:{NFSU2_TR(0x6fe3e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe3e7:{NFSU2_TR(0x6fe3e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fe3ea:{NFSU2_TR(0x6fe3ea);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6fe3ec:{NFSU2_TR(0x6fe3ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe3f1ull));
TAIL_STATIC(0x6fc0ffu,6fc);
}
B6fe3f1:L6fe3f1:{c.instructions+=4;NFSU2_TR(0x6fe3f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe3f2:{NFSU2_TR(0x6fe3f2);
__builtin_memmove((R+4),gp(0x8b0258),4);
}
B6fe3f8:{NFSU2_TR(0x6fe3f8);
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
B6fe3fa:{NFSU2_TR(0x6fe3fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe423;}}
}
B6fe3fc:L6fe3fc:{c.instructions+=2;NFSU2_TR(0x6fe3fc);
u8 U[4];
w4(U+0,u32(0x84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe401:{NFSU2_TR(0x6fe401);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe406ull));
TAIL_STATIC(0x6fbec0u,6fb);
}
B6fe406:L6fe406:{c.instructions+=3;NFSU2_TR(0x6fe406);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fe408:{NFSU2_TR(0x6fe408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe409:{NFSU2_TR(0x6fe409);
if(r1(R+518)){{goto L6fe41a;}}
}
B6fe40b:L6fe40b:{c.instructions+=3;NFSU2_TR(0x6fe40b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe40c:{NFSU2_TR(0x6fe40c);
__builtin_memmove((R+4),(R+0),4);
}
B6fe40e:{NFSU2_TR(0x6fe40e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe413ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe3c0u);}goto L6fe3c0;}
}
B6fe413:L6fe413:{c.instructions+=2;NFSU2_TR(0x6fe413);
__builtin_memmove(gp(0x8b0258),(R+0),4);
}
B6fe418:{NFSU2_TR(0x6fe418);
{goto L6fe427;}
}
B6fe41a:L6fe41a:{c.instructions+=2;NFSU2_TR(0x6fe41a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x8b0258,u32(u32(m4(0x8b0258))&u32(u32(0x0ull))));
w1(R+519,u8(s32(m4(0x8b0258))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8b0258))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8b0258))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fe421:{NFSU2_TR(0x6fe421);
{goto L6fe427;}
}
B6fe423:L6fe423:{c.instructions+=2;NFSU2_TR(0x6fe423);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fe425:{NFSU2_TR(0x6fe425);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe427ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6fe427:L6fe427:{c.instructions+=4;NFSU2_TR(0x6fe427);
__builtin_memmove((R+0),gp(0x8b0258),4);
}
B6fe42c:{NFSU2_TR(0x6fe42c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fe42d:{NFSU2_TR(0x6fe42d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fe42e:{NFSU2_TR(0x6fe42e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe42f:L6fe42f:{c.instructions+=1;NFSU2_TR(0x6fe42f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe432:L6fe432:{c.instructions+=1;NFSU2_TR(0x6fe432);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe435:L6fe435:{c.instructions+=1;NFSU2_TR(0x6fe435);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe438:L6fe438:{c.instructions+=8;NFSU2_TR(0x6fe438);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe439:{NFSU2_TR(0x6fe439);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe43a:{NFSU2_TR(0x6fe43a);
__builtin_memmove((R+8),(R+4),4);
}
B6fe43c:{NFSU2_TR(0x6fe43c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fe43f:{NFSU2_TR(0x6fe43f);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe441:{NFSU2_TR(0x6fe441);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fe443:{NFSU2_TR(0x6fe443);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe444:{NFSU2_TR(0x6fe444);
__builtin_memmove((R+28),(R+24),4);
}
B6fe446:L6fe446:{c.instructions+=1;NFSU2_TR(0x6fe446);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fe448;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe446u);}goto L6fe446;}
}
B6fe448:L6fe448:{c.instructions+=8;NFSU2_TR(0x6fe448);
__builtin_memmove((R+0),(R+24),4);
}
B6fe44a:{NFSU2_TR(0x6fe44a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B6fe44d:{NFSU2_TR(0x6fe44d);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6fe44f:{NFSU2_TR(0x6fe44f);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6fe451:{NFSU2_TR(0x6fe451);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fe452:{NFSU2_TR(0x6fe452);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fe454:{NFSU2_TR(0x6fe454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fe455:{NFSU2_TR(0x6fe455);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe458:L6fe458:{c.instructions+=1;NFSU2_TR(0x6fe458);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe45b:L6fe45b:{c.instructions+=1;NFSU2_TR(0x6fe45b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe45e:L6fe45e:{c.instructions+=2;NFSU2_TR(0x6fe45e);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6fe460:{NFSU2_TR(0x6fe460);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe461:L6fe461:{c.instructions+=5;NFSU2_TR(0x6fe461);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe462:{NFSU2_TR(0x6fe462);
__builtin_memmove((R+20),(R+16),4);
}
B6fe464:{NFSU2_TR(0x6fe464);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe465:{NFSU2_TR(0x6fe465);
__builtin_memmove((R+24),(R+4),4);
}
B6fe467:{NFSU2_TR(0x6fe467);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe46cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe35fu);}goto L6fe35f;}
}
B6fe46c:L6fe46c:{c.instructions+=2;NFSU2_TR(0x6fe46c);
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
B6fe470:{NFSU2_TR(0x6fe470);
if(r1(R+518)){{goto L6fe47f;}}
}
B6fe472:L6fe472:{c.instructions+=3;NFSU2_TR(0x6fe472);
u8 U[4];
w4(U+0,u32(0x84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe477:{NFSU2_TR(0x6fe477);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe478:{NFSU2_TR(0x6fe478);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe47dull));
TAIL_STATIC(0x6fc1eeu,6fc);
}
B6fe47d:L6fe47d:{c.instructions+=2;NFSU2_TR(0x6fe47d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe47e:{NFSU2_TR(0x6fe47e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe47f:L6fe47f:{c.instructions+=4;NFSU2_TR(0x6fe47f);
__builtin_memmove((R+0),(R+24),4);
}
B6fe481:{NFSU2_TR(0x6fe481);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fe482:{NFSU2_TR(0x6fe482);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fe483:{NFSU2_TR(0x6fe483);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe486:L6fe486:{c.instructions+=5;NFSU2_TR(0x6fe486);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe487:{NFSU2_TR(0x6fe487);
__builtin_memmove((R+20),(R+16),4);
}
B6fe489:{NFSU2_TR(0x6fe489);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fe48c:{NFSU2_TR(0x6fe48c);
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
B6fe48f:{NFSU2_TR(0x6fe48f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe499;}}
}
B6fe491:L6fe491:{c.instructions+=4;NFSU2_TR(0x6fe491);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fe494:{NFSU2_TR(0x6fe494);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(r1(U+0)));
}
B6fe497:{NFSU2_TR(0x6fe497);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fe498:{NFSU2_TR(0x6fe498);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe499:L6fe499:{c.instructions+=2;NFSU2_TR(0x6fe499);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fe49c:{NFSU2_TR(0x6fe49c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe4ac;}}
}
B6fe49e:L6fe49e:{c.instructions+=7;NFSU2_TR(0x6fe49e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fe4a1:{NFSU2_TR(0x6fe4a1);
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
B6fe4a3:{NFSU2_TR(0x6fe4a3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+5),(U+0),1);
}
B6fe4a5:{NFSU2_TR(0x6fe4a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6fe4a8:{NFSU2_TR(0x6fe4a8);
__builtin_memmove((R+0),(R+4),4);
}
B6fe4aa:{NFSU2_TR(0x6fe4aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fe4ab:{NFSU2_TR(0x6fe4ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe4ac:L6fe4ac:{c.instructions+=2;NFSU2_TR(0x6fe4ac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fe4af:{NFSU2_TR(0x6fe4af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe4c1;}}
}
B6fe4b1:L6fe4b1:{c.instructions+=6;NFSU2_TR(0x6fe4b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fe4b4:{NFSU2_TR(0x6fe4b4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6fe4b6:{NFSU2_TR(0x6fe4b6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+5),(U+0),1);
}
B6fe4b8:{NFSU2_TR(0x6fe4b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6fe4bb:{NFSU2_TR(0x6fe4bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6fe4bf:{NFSU2_TR(0x6fe4bf);
{goto L6fe4dd;}
}
B6fe4c1:L6fe4c1:{c.instructions+=2;NFSU2_TR(0x6fe4c1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fe4c4:{NFSU2_TR(0x6fe4c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe4e4;}}
}
B6fe4c6:L6fe4c6:{c.instructions+=8;NFSU2_TR(0x6fe4c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fe4c9:{NFSU2_TR(0x6fe4c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6fe4cd:{NFSU2_TR(0x6fe4cd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6fe4cf:{NFSU2_TR(0x6fe4cf);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+5),(U+0),1);
}
B6fe4d1:{NFSU2_TR(0x6fe4d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6fe4d4:{NFSU2_TR(0x6fe4d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6fe4d8:{NFSU2_TR(0x6fe4d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6fe4db:{NFSU2_TR(0x6fe4db);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B6fe4dd:L6fe4dd:{c.instructions+=4;NFSU2_TR(0x6fe4dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6fe4e0:{NFSU2_TR(0x6fe4e0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fe4e2:{NFSU2_TR(0x6fe4e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fe4e3:{NFSU2_TR(0x6fe4e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe4e4:L6fe4e4:{c.instructions+=3;NFSU2_TR(0x6fe4e4);
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
B6fe4e6:{NFSU2_TR(0x6fe4e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fe4e7:{NFSU2_TR(0x6fe4e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe4e8:L6fe4e8:{c.instructions+=7;NFSU2_TR(0x6fe4e8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe4e9:{NFSU2_TR(0x6fe4e9);
__builtin_memmove((R+20),(R+16),4);
}
B6fe4eb:{NFSU2_TR(0x6fe4eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B6fe4ee:{NFSU2_TR(0x6fe4ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fe4f1:{NFSU2_TR(0x6fe4f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe4f2:{NFSU2_TR(0x6fe4f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
w4(U+4,u32(0x48ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fe4f9:{NFSU2_TR(0x6fe4f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe4feull));
TAIL_STATIC(0x6f86adu,6f8);
}
B6fe4fe:L6fe4fe:{c.instructions+=6;NFSU2_TR(0x6fe4fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe4ff:{NFSU2_TR(0x6fe4ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fe502:{NFSU2_TR(0x6fe502);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fe504:{NFSU2_TR(0x6fe504);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe506:{NFSU2_TR(0x6fe506);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe509:{NFSU2_TR(0x6fe509);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe50cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fe50c:L6fe50c:{c.instructions+=2;NFSU2_TR(0x6fe50c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fe50d:{NFSU2_TR(0x6fe50d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe50e:L6fe50e:{c.instructions+=7;NFSU2_TR(0x6fe50e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe50f:{NFSU2_TR(0x6fe50f);
__builtin_memmove((R+20),(R+16),4);
}
B6fe511:{NFSU2_TR(0x6fe511);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe512:{NFSU2_TR(0x6fe512);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe513:{NFSU2_TR(0x6fe513);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe514:{NFSU2_TR(0x6fe514);
__builtin_memmove((R+24),(R+4),4);
}
B6fe516:{NFSU2_TR(0x6fe516);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe51bull));
TAIL_STATIC(0x721912u,721);
}
B6fe51b:L6fe51b:{c.instructions+=2;NFSU2_TR(0x6fe51b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fe51d:{NFSU2_TR(0x6fe51d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe524;}}
}
B6fe51f:L6fe51f:{c.instructions+=3;NFSU2_TR(0x6fe51f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6fe521:{NFSU2_TR(0x6fe521);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6fe522:{NFSU2_TR(0x6fe522);
{goto L6fe527;}
}
B6fe524:L6fe524:{c.instructions+=1;NFSU2_TR(0x6fe524);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6fe527:L6fe527:{c.instructions+=5;NFSU2_TR(0x6fe527);
u8 U[4];
w4(U+0,u32(0x94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe52c:{NFSU2_TR(0x6fe52c);
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
B6fe52e:{NFSU2_TR(0x6fe52e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe52f:{NFSU2_TR(0x6fe52f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe530:{NFSU2_TR(0x6fe530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe535ull));
TAIL_STATIC(0x770fcbu,770);
}
B6fe535:L6fe535:{c.instructions+=21;NFSU2_TR(0x6fe535);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fe538:{NFSU2_TR(0x6fe538);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe53b:{NFSU2_TR(0x6fe53b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fe53e:{NFSU2_TR(0x6fe53e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe541:{NFSU2_TR(0x6fe541);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fe544:{NFSU2_TR(0x6fe544);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fe547:{NFSU2_TR(0x6fe547);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe54a:{NFSU2_TR(0x6fe54a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe54d:{NFSU2_TR(0x6fe54d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe550:{NFSU2_TR(0x6fe550);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe553:{NFSU2_TR(0x6fe553);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe556:{NFSU2_TR(0x6fe556);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe559:{NFSU2_TR(0x6fe559);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe55c:{NFSU2_TR(0x6fe55c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe55f:{NFSU2_TR(0x6fe55f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6fe561:{NFSU2_TR(0x6fe561);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe564:{NFSU2_TR(0x6fe564);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe567:{NFSU2_TR(0x6fe567);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe56a:{NFSU2_TR(0x6fe56a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe570:{NFSU2_TR(0x6fe570);
u8 U[14];
__builtin_memmove((U+6),gp(0x8161ec),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fe576:{NFSU2_TR(0x6fe576);
if(r1(R+518)){{goto L6fe580;}}
}
B6fe578:L6fe578:{c.instructions+=2;NFSU2_TR(0x6fe578);
u8 U[14];
__builtin_memmove((U+6),gp(0x8161f0),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fe57e:{NFSU2_TR(0x6fe57e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe58a;}}
}
B6fe580:L6fe580:{c.instructions+=1;NFSU2_TR(0x6fe580);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe585ull));
TAIL_STATIC(0x770fdbu,770);
}
B6fe585:L6fe585:{c.instructions+=1;NFSU2_TR(0x6fe585);
{goto L6fe7ce;}
}
B6fe58a:L6fe58a:{c.instructions+=2;NFSU2_TR(0x6fe58a);
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
B6fe58c:{NFSU2_TR(0x6fe58c);
if(r1(R+518)){{goto L6fe6ea;}}
}
B6fe592:L6fe592:{c.instructions+=7;NFSU2_TR(0x6fe592);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fe596:{NFSU2_TR(0x6fe596);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe59c:{NFSU2_TR(0x6fe59c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe59d:{NFSU2_TR(0x6fe59d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe59e:{NFSU2_TR(0x6fe59e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe5a1:{NFSU2_TR(0x6fe5a1);
u8 U[4];
w4(U+0,u32(0x7c3474ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe5a6:{NFSU2_TR(0x6fe5a6);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161ec),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe5acull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fe5ac:L6fe5ac:{c.instructions+=7;NFSU2_TR(0x6fe5ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe5af:{NFSU2_TR(0x6fe5af);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe5b5:{NFSU2_TR(0x6fe5b5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe5b6:{NFSU2_TR(0x6fe5b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe5b7:{NFSU2_TR(0x6fe5b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe5ba:{NFSU2_TR(0x6fe5ba);
u8 U[4];
w4(U+0,u32(0x7c345cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe5bf:{NFSU2_TR(0x6fe5bf);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161ec),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe5c5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fe5c5:L6fe5c5:{c.instructions+=9;NFSU2_TR(0x6fe5c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe5c8:{NFSU2_TR(0x6fe5c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe5cb:{NFSU2_TR(0x6fe5cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe5ce:{NFSU2_TR(0x6fe5ce);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe5d0:{NFSU2_TR(0x6fe5d0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe5d2:{NFSU2_TR(0x6fe5d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fe5d3:{NFSU2_TR(0x6fe5d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe5d4:{NFSU2_TR(0x6fe5d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe5d5:{NFSU2_TR(0x6fe5d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe5daull));
TAIL_STATIC(0x477500u,477);
}
B6fe5da:L6fe5da:{c.instructions+=7;NFSU2_TR(0x6fe5da);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe5dd:{NFSU2_TR(0x6fe5dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe5e0:{NFSU2_TR(0x6fe5e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe5e3:{NFSU2_TR(0x6fe5e3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe5e5:{NFSU2_TR(0x6fe5e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe5e6:{NFSU2_TR(0x6fe5e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe5e7:{NFSU2_TR(0x6fe5e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe5ecull));
TAIL_STATIC(0x477500u,477);
}
B6fe5ec:L6fe5ec:{c.instructions+=7;NFSU2_TR(0x6fe5ec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x50ull))));
}
B6fe5ef:{NFSU2_TR(0x6fe5ef);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe5f1:{NFSU2_TR(0x6fe5f1);
w4(R+28,u32(0x98ull));
}
B6fe5f6:{NFSU2_TR(0x6fe5f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe5f7:{NFSU2_TR(0x6fe5f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe5f8:{NFSU2_TR(0x6fe5f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe5fb:{NFSU2_TR(0x6fe5fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe600ull));
TAIL_STATIC(0x465400u,465);
}
B6fe600:L6fe600:{c.instructions+=4;NFSU2_TR(0x6fe600);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe602:{NFSU2_TR(0x6fe602);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe603:{NFSU2_TR(0x6fe603);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe606:{NFSU2_TR(0x6fe606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe60bull));
TAIL_STATIC(0x465400u,465);
}
B6fe60b:L6fe60b:{c.instructions+=8;NFSU2_TR(0x6fe60b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6fe60d:{NFSU2_TR(0x6fe60d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6fe60e:{NFSU2_TR(0x6fe60e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe60f:{NFSU2_TR(0x6fe60f);
u8 U[4];
w4(U+0,u32(0x4dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe611:{NFSU2_TR(0x6fe611);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe616:{NFSU2_TR(0x6fe616);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe617:{NFSU2_TR(0x6fe617);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe61a:{NFSU2_TR(0x6fe61a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe61full));
TAIL_STATIC(0x465390u,465);
}
B6fe61f:L6fe61f:{c.instructions+=6;NFSU2_TR(0x6fe61f);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe621:{NFSU2_TR(0x6fe621);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe622:{NFSU2_TR(0x6fe622);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe623:{NFSU2_TR(0x6fe623);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe625:{NFSU2_TR(0x6fe625);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe628:{NFSU2_TR(0x6fe628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe62dull));
TAIL_STATIC(0x465390u,465);
}
B6fe62d:L6fe62d:{c.instructions+=3;NFSU2_TR(0x6fe62d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B6fe630:{NFSU2_TR(0x6fe630);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fe633:{NFSU2_TR(0x6fe633);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe638;}}
}
B6fe635:L6fe635:{c.instructions+=2;NFSU2_TR(0x6fe635);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe636:{NFSU2_TR(0x6fe636);
{goto L6fe63a;}
}
B6fe638:L6fe638:{c.instructions+=1;NFSU2_TR(0x6fe638);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe63a:L6fe63a:{c.instructions+=5;NFSU2_TR(0x6fe63a);
u8 U[4];
w4(U+0,u32(0x4353ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe63f:{NFSU2_TR(0x6fe63f);
u8 U[4];
w4(U+0,u32(0xffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe644:{NFSU2_TR(0x6fe644);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe645:{NFSU2_TR(0x6fe645);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe648:{NFSU2_TR(0x6fe648);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe64dull));
TAIL_STATIC(0x465390u,465);
}
B6fe64d:L6fe64d:{c.instructions+=7;NFSU2_TR(0x6fe64d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6fe650:{NFSU2_TR(0x6fe650);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe652:{NFSU2_TR(0x6fe652);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe653:{NFSU2_TR(0x6fe653);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe654:{NFSU2_TR(0x6fe654);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe656:{NFSU2_TR(0x6fe656);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe659:{NFSU2_TR(0x6fe659);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe65eull));
TAIL_STATIC(0x465390u,465);
}
B6fe65e:L6fe65e:{c.instructions+=4;NFSU2_TR(0x6fe65e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fe661:{NFSU2_TR(0x6fe661);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6fe664:{NFSU2_TR(0x6fe664);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fe666:{NFSU2_TR(0x6fe666);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe68f;}}
}
B6fe668:L6fe668:{c.instructions+=3;NFSU2_TR(0x6fe668);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe66e:{NFSU2_TR(0x6fe66e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe671:{NFSU2_TR(0x6fe671);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe676ull));
TAIL_STATIC(0x6f8d1du,6f8);
}
B6fe676:L6fe676:{c.instructions+=4;NFSU2_TR(0x6fe676);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe679:{NFSU2_TR(0x6fe679);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe67f:{NFSU2_TR(0x6fe67f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe682:{NFSU2_TR(0x6fe682);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe687ull));
TAIL_STATIC(0x6f8d1du,6f8);
}
B6fe687:L6fe687:{c.instructions+=2;NFSU2_TR(0x6fe687);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe68a:{NFSU2_TR(0x6fe68a);
{goto L6fe7cb;}
}
B6fe68f:L6fe68f:{c.instructions+=3;NFSU2_TR(0x6fe68f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fe691:{NFSU2_TR(0x6fe691);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe692:{NFSU2_TR(0x6fe692);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe6bf;}}
}
B6fe694:L6fe694:{c.instructions+=4;NFSU2_TR(0x6fe694);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe697:{NFSU2_TR(0x6fe697);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe69a:{NFSU2_TR(0x6fe69a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe69d:{NFSU2_TR(0x6fe69d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe6a2ull));
TAIL_STATIC(0x4654a0u,465);
}
B6fe6a2:L6fe6a2:{c.instructions+=6;NFSU2_TR(0x6fe6a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe6a3:{NFSU2_TR(0x6fe6a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe6a6:{NFSU2_TR(0x6fe6a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe6a9:{NFSU2_TR(0x6fe6a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe6ac:{NFSU2_TR(0x6fe6ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe6af:{NFSU2_TR(0x6fe6af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe6b4ull));
TAIL_STATIC(0x4654a0u,465);
}
B6fe6b4:L6fe6b4:{c.instructions+=3;NFSU2_TR(0x6fe6b4);
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
B6fe6b7:{NFSU2_TR(0x6fe6b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe6ba:{NFSU2_TR(0x6fe6ba);
{goto L6fe7ce;}
}
B6fe6bf:L6fe6bf:{c.instructions+=4;NFSU2_TR(0x6fe6bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe6c2:{NFSU2_TR(0x6fe6c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe6c5:{NFSU2_TR(0x6fe6c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe6c8:{NFSU2_TR(0x6fe6c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe6cdull));
TAIL_STATIC(0x465550u,465);
}
B6fe6cd:L6fe6cd:{c.instructions+=6;NFSU2_TR(0x6fe6cd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe6ce:{NFSU2_TR(0x6fe6ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe6d1:{NFSU2_TR(0x6fe6d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe6d4:{NFSU2_TR(0x6fe6d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe6d7:{NFSU2_TR(0x6fe6d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe6da:{NFSU2_TR(0x6fe6da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe6dfull));
TAIL_STATIC(0x465550u,465);
}
B6fe6df:L6fe6df:{c.instructions+=3;NFSU2_TR(0x6fe6df);
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
B6fe6e2:{NFSU2_TR(0x6fe6e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe6e5:{NFSU2_TR(0x6fe6e5);
{goto L6fe7ce;}
}
B6fe6ea:L6fe6ea:{c.instructions+=7;NFSU2_TR(0x6fe6ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6fe6ed:{NFSU2_TR(0x6fe6ed);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe6f3:{NFSU2_TR(0x6fe6f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe6f4:{NFSU2_TR(0x6fe6f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe6f5:{NFSU2_TR(0x6fe6f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe6f8:{NFSU2_TR(0x6fe6f8);
u8 U[4];
w4(U+0,u32(0x7c3474ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe6fd:{NFSU2_TR(0x6fe6fd);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161ec),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe703ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fe703:L6fe703:{c.instructions+=8;NFSU2_TR(0x6fe703);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe706:{NFSU2_TR(0x6fe706);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe709:{NFSU2_TR(0x6fe709);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe70a:{NFSU2_TR(0x6fe70a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe70c:{NFSU2_TR(0x6fe70c);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe70e:{NFSU2_TR(0x6fe70e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe710:{NFSU2_TR(0x6fe710);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe713:{NFSU2_TR(0x6fe713);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe718ull));
TAIL_STATIC(0x477500u,477);
}
B6fe718:L6fe718:{c.instructions+=4;NFSU2_TR(0x6fe718);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe71a:{NFSU2_TR(0x6fe71a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe71b:{NFSU2_TR(0x6fe71b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe71e:{NFSU2_TR(0x6fe71e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe723ull));
TAIL_STATIC(0x465470u,465);
}
B6fe723:L6fe723:{c.instructions+=6;NFSU2_TR(0x6fe723);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe725:{NFSU2_TR(0x6fe725);
w4(R+28,u32(0x98ull));
}
B6fe72a:{NFSU2_TR(0x6fe72a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe72b:{NFSU2_TR(0x6fe72b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe72c:{NFSU2_TR(0x6fe72c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe72f:{NFSU2_TR(0x6fe72f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe734ull));
TAIL_STATIC(0x465400u,465);
}
B6fe734:L6fe734:{c.instructions+=4;NFSU2_TR(0x6fe734);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe736:{NFSU2_TR(0x6fe736);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe737:{NFSU2_TR(0x6fe737);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe73a:{NFSU2_TR(0x6fe73a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe73full));
TAIL_STATIC(0x465400u,465);
}
B6fe73f:L6fe73f:{c.instructions+=7;NFSU2_TR(0x6fe73f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B6fe742:{NFSU2_TR(0x6fe742);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe744:{NFSU2_TR(0x6fe744);
u8 U[4];
w4(U+0,u32(0x4dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe746:{NFSU2_TR(0x6fe746);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe74b:{NFSU2_TR(0x6fe74b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe74d:{NFSU2_TR(0x6fe74d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe750:{NFSU2_TR(0x6fe750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe755ull));
TAIL_STATIC(0x465390u,465);
}
B6fe755:L6fe755:{c.instructions+=6;NFSU2_TR(0x6fe755);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe757:{NFSU2_TR(0x6fe757);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe758:{NFSU2_TR(0x6fe758);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe759:{NFSU2_TR(0x6fe759);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe75b:{NFSU2_TR(0x6fe75b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe75e:{NFSU2_TR(0x6fe75e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe763ull));
TAIL_STATIC(0x465390u,465);
}
B6fe763:L6fe763:{c.instructions+=3;NFSU2_TR(0x6fe763);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B6fe766:{NFSU2_TR(0x6fe766);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fe769:{NFSU2_TR(0x6fe769);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe76f;}}
}
B6fe76b:L6fe76b:{c.instructions+=2;NFSU2_TR(0x6fe76b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe76d:{NFSU2_TR(0x6fe76d);
{goto L6fe771;}
}
B6fe76f:L6fe76f:{c.instructions+=1;NFSU2_TR(0x6fe76f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe771:L6fe771:{c.instructions+=5;NFSU2_TR(0x6fe771);
u8 U[4];
w4(U+0,u32(0x4353ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe776:{NFSU2_TR(0x6fe776);
u8 U[4];
w4(U+0,u32(0xffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe77b:{NFSU2_TR(0x6fe77b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe77d:{NFSU2_TR(0x6fe77d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe780:{NFSU2_TR(0x6fe780);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe785ull));
TAIL_STATIC(0x465390u,465);
}
B6fe785:L6fe785:{c.instructions+=4;NFSU2_TR(0x6fe785);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fe788:{NFSU2_TR(0x6fe788);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6fe78b:{NFSU2_TR(0x6fe78b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fe78e:{NFSU2_TR(0x6fe78e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe7a5;}}
}
B6fe790:L6fe790:{c.instructions+=3;NFSU2_TR(0x6fe790);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe796:{NFSU2_TR(0x6fe796);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe799:{NFSU2_TR(0x6fe799);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe79eull));
TAIL_STATIC(0x6f8d1du,6f8);
}
B6fe79e:L6fe79e:{c.instructions+=4;NFSU2_TR(0x6fe79e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe79f:{NFSU2_TR(0x6fe79f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe7a0:{NFSU2_TR(0x6fe7a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe7a3:{NFSU2_TR(0x6fe7a3);
{goto L6fe7ce;}
}
B6fe7a5:L6fe7a5:{c.instructions+=3;NFSU2_TR(0x6fe7a5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fe7a7:{NFSU2_TR(0x6fe7a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe7a8:{NFSU2_TR(0x6fe7a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe7ba;}}
}
B6fe7aa:L6fe7aa:{c.instructions+=4;NFSU2_TR(0x6fe7aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe7ad:{NFSU2_TR(0x6fe7ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe7b0:{NFSU2_TR(0x6fe7b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe7b3:{NFSU2_TR(0x6fe7b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe7b8ull));
TAIL_STATIC(0x4654a0u,465);
}
B6fe7b8:L6fe7b8:{c.instructions+=1;NFSU2_TR(0x6fe7b8);
{goto L6fe7c8;}
}
B6fe7ba:L6fe7ba:{c.instructions+=4;NFSU2_TR(0x6fe7ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe7bd:{NFSU2_TR(0x6fe7bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe7c0:{NFSU2_TR(0x6fe7c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe7c3:{NFSU2_TR(0x6fe7c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe7c8ull));
TAIL_STATIC(0x465550u,465);
}
B6fe7c8:L6fe7c8:{c.instructions+=1;NFSU2_TR(0x6fe7c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe7cb:L6fe7cb:{c.instructions+=1;NFSU2_TR(0x6fe7cb);
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
B6fe7ce:L6fe7ce:{c.instructions+=5;NFSU2_TR(0x6fe7ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fe7cf:{NFSU2_TR(0x6fe7cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fe7d0:{NFSU2_TR(0x6fe7d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fe7d1:{NFSU2_TR(0x6fe7d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fe7d2:{NFSU2_TR(0x6fe7d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe7d5:L6fe7d5:{c.instructions+=6;NFSU2_TR(0x6fe7d5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe7d6:{NFSU2_TR(0x6fe7d6);
__builtin_memmove((R+20),(R+16),4);
}
B6fe7d8:{NFSU2_TR(0x6fe7d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fe7db:{NFSU2_TR(0x6fe7db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe7de:{NFSU2_TR(0x6fe7de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fe7df:{NFSU2_TR(0x6fe7df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe7e2:L6fe7e2:{c.instructions+=8;NFSU2_TR(0x6fe7e2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe7e3:{NFSU2_TR(0x6fe7e3);
__builtin_memmove((R+20),(R+16),4);
}
B6fe7e5:{NFSU2_TR(0x6fe7e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fe7e8:{NFSU2_TR(0x6fe7e8);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6fe7eb:{NFSU2_TR(0x6fe7eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe7ec:{NFSU2_TR(0x6fe7ec);
__builtin_memmove((R+24),(R+4),4);
}
B6fe7ee:{NFSU2_TR(0x6fe7ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe7f1:{NFSU2_TR(0x6fe7f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe7f6ull));
TAIL_STATIC(0x75bed4u,75b);
}
B6fe7f6:L6fe7f6:{c.instructions+=3;NFSU2_TR(0x6fe7f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fe7f9:{NFSU2_TR(0x6fe7f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe7fa:{NFSU2_TR(0x6fe7fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe7ffull));
TAIL_STATIC(0x700655u,700);
}
B6fe7ff:L6fe7ff:{c.instructions+=3;NFSU2_TR(0x6fe7ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fe802:{NFSU2_TR(0x6fe802);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe805:{NFSU2_TR(0x6fe805);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe80aull));
TAIL_STATIC(0x70062fu,700);
}
B6fe80a:L6fe80a:{c.instructions+=5;NFSU2_TR(0x6fe80a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe80d:{NFSU2_TR(0x6fe80d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fe810:{NFSU2_TR(0x6fe810);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fe811:{NFSU2_TR(0x6fe811);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fe812:{NFSU2_TR(0x6fe812);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe83e:L6fe83e:{c.instructions+=3;NFSU2_TR(0x6fe83e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fe840:{NFSU2_TR(0x6fe840);
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
B6fe842:{NFSU2_TR(0x6fe842);
if(r1(R+518)){{goto L6fe849;}}
}
B6fe844:L6fe844:{c.instructions+=1;NFSU2_TR(0x6fe844);
TAIL_STATIC(0x6ff039u,6ff);
}
B6fe849:L6fe849:{c.instructions+=2;NFSU2_TR(0x6fe849);
w1(R+0,u8(0x1ull));
}
B6fe84b:{NFSU2_TR(0x6fe84b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe84c:L6fe84c:{c.instructions+=9;NFSU2_TR(0x6fe84c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe84d:{NFSU2_TR(0x6fe84d);
__builtin_memmove((R+20),(R+16),4);
}
B6fe84f:{NFSU2_TR(0x6fe84f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe850:{NFSU2_TR(0x6fe850);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe851:{NFSU2_TR(0x6fe851);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6fe854:{NFSU2_TR(0x6fe854);
w4(R+0,u32(0x4000ull));
}
B6fe859:{NFSU2_TR(0x6fe859);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fe85b:{NFSU2_TR(0x6fe85b);
__builtin_memmove((R+24),(R+4),4);
}
B6fe85d:{NFSU2_TR(0x6fe85d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6fe861;}}
}
B6fe85f:L6fe85f:{c.instructions+=1;NFSU2_TR(0x6fe85f);
__builtin_memmove((R+28),(R+0),4);
}
B6fe861:L6fe861:{c.instructions+=3;NFSU2_TR(0x6fe861);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fe863:{NFSU2_TR(0x6fe863);
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
B6fe865:{NFSU2_TR(0x6fe865);
if(r1(R+518)){{goto L6fe86d;}}
}
B6fe867:L6fe867:{c.instructions+=2;NFSU2_TR(0x6fe867);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe868:{NFSU2_TR(0x6fe868);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe86dull));
{goto L6fef96;}
}
B6fe86d:L6fe86d:{c.instructions+=3;NFSU2_TR(0x6fe86d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fe870:{NFSU2_TR(0x6fe870);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe871:{NFSU2_TR(0x6fe871);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe876ull));
{goto L6feeb9;}
}
B6fe876:L6fe876:{c.instructions+=5;NFSU2_TR(0x6fe876);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fe877:{NFSU2_TR(0x6fe877);
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
B6fe879:{NFSU2_TR(0x6fe879);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fe87a:{NFSU2_TR(0x6fe87a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fe87b:{NFSU2_TR(0x6fe87b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe891:L6fe891:{c.instructions+=5;NFSU2_TR(0x6fe891);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe892:{NFSU2_TR(0x6fe892);
__builtin_memmove((R+20),(R+16),4);
}
B6fe894:{NFSU2_TR(0x6fe894);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fe896:{NFSU2_TR(0x6fe896);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fe898:{NFSU2_TR(0x6fe898);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe8a0;}}
}
B6fe89a:L6fe89a:{c.instructions+=3;NFSU2_TR(0x6fe89a);
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
B6fe89c:{NFSU2_TR(0x6fe89c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fe89d:{NFSU2_TR(0x6fe89d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe8a0:L6fe8a0:{c.instructions+=2;NFSU2_TR(0x6fe8a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fe8a1:{NFSU2_TR(0x6fe8a1);
{goto L6fefef;}
}
B6fe8a6:L6fe8a6:{c.instructions+=13;NFSU2_TR(0x6fe8a6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe8a7:{NFSU2_TR(0x6fe8a7);
__builtin_memmove((R+20),(R+16),4);
}
B6fe8a9:{NFSU2_TR(0x6fe8a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe8aa:{NFSU2_TR(0x6fe8aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe8ab:{NFSU2_TR(0x6fe8ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fe8af:{NFSU2_TR(0x6fe8af);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe8b0:{NFSU2_TR(0x6fe8b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6fe8b3:{NFSU2_TR(0x6fe8b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe8b4:{NFSU2_TR(0x6fe8b4);
__builtin_memmove((R+24),(R+4),4);
}
B6fe8b6:{NFSU2_TR(0x6fe8b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fe8b9:{NFSU2_TR(0x6fe8b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B6fe8bc:{NFSU2_TR(0x6fe8bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe8bd:{NFSU2_TR(0x6fe8bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe8c0:L6fe8c0:{c.instructions+=2;NFSU2_TR(0x6fe8c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe8c3:{NFSU2_TR(0x6fe8c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe8c8ull));
TAIL_STATIC(0x465600u,465);
}
B6fe8c8:L6fe8c8:{c.instructions+=3;NFSU2_TR(0x6fe8c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe8c9:{NFSU2_TR(0x6fe8c9);
__builtin_memmove((R+28),(R+0),4);
}
B6fe8cb:{NFSU2_TR(0x6fe8cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe8d0ull));
TAIL_STATIC(0x6f56bdu,6f5);
}
B6fe8d0:L6fe8d0:{c.instructions+=2;NFSU2_TR(0x6fe8d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fe8d2:{NFSU2_TR(0x6fe8d2);
if(r1(R+518)){{goto L6fe92e;}}
}
B6fe8d4:L6fe8d4:{c.instructions+=3;NFSU2_TR(0x6fe8d4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe8d6:{NFSU2_TR(0x6fe8d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe8d7:{NFSU2_TR(0x6fe8d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe8dcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe486u);}goto L6fe486;}
}
B6fe8dc:L6fe8dc:{c.instructions+=3;NFSU2_TR(0x6fe8dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe8dd:{NFSU2_TR(0x6fe8dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe8e0:{NFSU2_TR(0x6fe8e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe8e5ull));
TAIL_STATIC(0x7013d1u,701);
}
B6fe8e5:L6fe8e5:{c.instructions+=3;NFSU2_TR(0x6fe8e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fe8e8:{NFSU2_TR(0x6fe8e8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fe8ea:{NFSU2_TR(0x6fe8ea);
if(r1(R+518)){{goto L6fe8f3;}}
}
B6fe8ec:L6fe8ec:{c.instructions+=1;NFSU2_TR(0x6fe8ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fe8f3:L6fe8f3:{c.instructions+=2;NFSU2_TR(0x6fe8f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe8f6:{NFSU2_TR(0x6fe8f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe8fbull));
TAIL_STATIC(0x7013b4u,701);
}
B6fe8fb:L6fe8fb:{c.instructions+=3;NFSU2_TR(0x6fe8fb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fe8fd:{NFSU2_TR(0x6fe8fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe8fe:{NFSU2_TR(0x6fe8fe);
if(r1(R+518)){{goto L6fe907;}}
}
B6fe900:L6fe900:{c.instructions+=1;NFSU2_TR(0x6fe900);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fe907:L6fe907:{c.instructions+=2;NFSU2_TR(0x6fe907);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe90a:{NFSU2_TR(0x6fe90a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe90full));
TAIL_STATIC(0x7013a5u,701);
}
B6fe90f:L6fe90f:{c.instructions+=3;NFSU2_TR(0x6fe90f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fe911:{NFSU2_TR(0x6fe911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe912:{NFSU2_TR(0x6fe912);
if(r1(R+518)){{goto L6fe91c;}}
}
B6fe914:L6fe914:{c.instructions+=4;NFSU2_TR(0x6fe914);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe916:{NFSU2_TR(0x6fe916);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe917:{NFSU2_TR(0x6fe917);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe91a:{NFSU2_TR(0x6fe91a);
{goto L6fe91f;}
}
B6fe91c:L6fe91c:{c.instructions+=1;NFSU2_TR(0x6fe91c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fe91f:L6fe91f:{c.instructions+=2;NFSU2_TR(0x6fe91f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fe921:{NFSU2_TR(0x6fe921);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe942;}}
}
B6fe923:L6fe923:{c.instructions+=3;NFSU2_TR(0x6fe923);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe924:{NFSU2_TR(0x6fe924);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe927:{NFSU2_TR(0x6fe927);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe92cull));
TAIL_STATIC(0x477760u,477);
}
B6fe92c:L6fe92c:{c.instructions+=2;NFSU2_TR(0x6fe92c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe92d:{NFSU2_TR(0x6fe92d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe92e:L6fe92e:{c.instructions+=2;NFSU2_TR(0x6fe92e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe931:{NFSU2_TR(0x6fe931);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe936ull));
TAIL_STATIC(0x4656f0u,465);
}
B6fe936:L6fe936:{c.instructions+=3;NFSU2_TR(0x6fe936);
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
B6fe938:{NFSU2_TR(0x6fe938);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe939:{NFSU2_TR(0x6fe939);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe8c0u);}goto L6fe8c0;}}
}
B6fe93b:L6fe93b:{c.instructions+=5;NFSU2_TR(0x6fe93b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fe93c:{NFSU2_TR(0x6fe93c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fe93d:{NFSU2_TR(0x6fe93d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fe93e:{NFSU2_TR(0x6fe93e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fe93f:{NFSU2_TR(0x6fe93f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe942:L6fe942:{c.instructions+=4;NFSU2_TR(0x6fe942);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fe948:{NFSU2_TR(0x6fe948);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6fe94a:{NFSU2_TR(0x6fe94a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x2ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B6fe94d:{NFSU2_TR(0x6fe94d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fe952;}}
}
B6fe94f:L6fe94f:{c.instructions+=1;NFSU2_TR(0x6fe94f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6fe952:L6fe952:{c.instructions+=8;NFSU2_TR(0x6fe952);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fe954:{NFSU2_TR(0x6fe954);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
}
B6fe957:{NFSU2_TR(0x6fe957);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fe95a:{NFSU2_TR(0x6fe95a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6fe95d:{NFSU2_TR(0x6fe95d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6fe960:{NFSU2_TR(0x6fe960);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6fe962:{NFSU2_TR(0x6fe962);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6fe964:{NFSU2_TR(0x6fe964);
if(r1(R+518)){{goto L6fe978;}}
}
B6fe966:L6fe966:{c.instructions+=2;NFSU2_TR(0x6fe966);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fe969:{NFSU2_TR(0x6fe969);
if(r1(R+518)){{goto L6fe978;}}
}
B6fe96b:L6fe96b:{c.instructions+=2;NFSU2_TR(0x6fe96b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fe96e:{NFSU2_TR(0x6fe96e);
if(r1(R+518)){{goto L6fe978;}}
}
B6fe970:L6fe970:{c.instructions+=3;NFSU2_TR(0x6fe970);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fe973:{NFSU2_TR(0x6fe973);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B6fe976:{NFSU2_TR(0x6fe976);
{goto L6fe97b;}
}
B6fe978:L6fe978:{c.instructions+=1;NFSU2_TR(0x6fe978);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fe97b:L6fe97b:{c.instructions+=5;NFSU2_TR(0x6fe97b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe97e:{NFSU2_TR(0x6fe97e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6fe981:{NFSU2_TR(0x6fe981);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fe984:{NFSU2_TR(0x6fe984);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
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
B6fe988:{NFSU2_TR(0x6fe988);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe93bu);}goto L6fe93b;}}
}
B6fe98a:L6fe98a:{c.instructions+=2;NFSU2_TR(0x6fe98a);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B6fe98d:{NFSU2_TR(0x6fe98d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fe996;}}
}
B6fe98f:L6fe98f:{c.instructions+=1;NFSU2_TR(0x6fe98f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe994ull));
TAIL_STATIC(0x70130fu,701);
}
B6fe994:L6fe994:{c.instructions+=1;NFSU2_TR(0x6fe994);
{goto L6fe9a0;}
}
B6fe996:L6fe996:{c.instructions+=2;NFSU2_TR(0x6fe996);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B6fe999:{NFSU2_TR(0x6fe999);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe93bu);}goto L6fe93b;}}
}
B6fe99b:L6fe99b:{c.instructions+=1;NFSU2_TR(0x6fe99b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe9a0ull));
TAIL_STATIC(0x700ae9u,700);
}
B6fe9a0:L6fe9a0:{c.instructions+=4;NFSU2_TR(0x6fe9a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe9a1:{NFSU2_TR(0x6fe9a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe9a2:{NFSU2_TR(0x6fe9a2);
__builtin_memmove((R+4),(R+28),4);
}
B6fe9a4:{NFSU2_TR(0x6fe9a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe9a9ull));
TAIL_STATIC(0x7005fbu,700);
}
B6fe9a9:L6fe9a9:{c.instructions+=2;NFSU2_TR(0x6fe9a9);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6fe9ac:{NFSU2_TR(0x6fe9ac);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe93bu);}goto L6fe93b;}}
}
B6fe9ae:L6fe9ae:{c.instructions+=2;NFSU2_TR(0x6fe9ae);
__builtin_memmove((R+4),(R+28),4);
}
B6fe9b0:{NFSU2_TR(0x6fe9b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe9b5ull));
TAIL_STATIC(0x700619u,700);
}
B6fe9b5:L6fe9b5:{c.instructions+=1;NFSU2_TR(0x6fe9b5);
u8 U[4];
{SPILL();c.pc=0x6fe9b5u;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B6fe9b6:L6fe9b6:{c.instructions+=7;NFSU2_TR(0x6fe9b6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe9b7:{NFSU2_TR(0x6fe9b7);
__builtin_memmove((R+20),(R+16),4);
}
B6fe9b9:{NFSU2_TR(0x6fe9b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe9bc:{NFSU2_TR(0x6fe9bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fe9bf:{NFSU2_TR(0x6fe9bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe9c2:{NFSU2_TR(0x6fe9c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fe9c4:{NFSU2_TR(0x6fe9c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe9c9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe8a6u);}goto L6fe8a6;}
}
B6fe9c9:L6fe9c9:{c.instructions+=2;NFSU2_TR(0x6fe9c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fe9ca:{NFSU2_TR(0x6fe9ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe9cb:L6fe9cb:{c.instructions+=6;NFSU2_TR(0x6fe9cb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe9cc:{NFSU2_TR(0x6fe9cc);
__builtin_memmove((R+20),(R+16),4);
}
B6fe9ce:{NFSU2_TR(0x6fe9ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fe9d1:{NFSU2_TR(0x6fe9d1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6fe9d3:{NFSU2_TR(0x6fe9d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe9d6:{NFSU2_TR(0x6fe9d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe9dbull));
TAIL_STATIC(0x477760u,477);
}
B6fe9db:L6fe9db:{c.instructions+=4;NFSU2_TR(0x6fe9db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe9dc:{NFSU2_TR(0x6fe9dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fe9dd:{NFSU2_TR(0x6fe9dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fe9de:{NFSU2_TR(0x6fe9de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe9e1:L6fe9e1:{c.instructions+=6;NFSU2_TR(0x6fe9e1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe9e2:{NFSU2_TR(0x6fe9e2);
__builtin_memmove((R+20),(R+16),4);
}
B6fe9e4:{NFSU2_TR(0x6fe9e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fe9e7:{NFSU2_TR(0x6fe9e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fe9ea:{NFSU2_TR(0x6fe9ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fe9ec:{NFSU2_TR(0x6fe9ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fe9f1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe9cbu);}goto L6fe9cb;}
}
B6fe9f1:L6fe9f1:{c.instructions+=2;NFSU2_TR(0x6fe9f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fe9f2:{NFSU2_TR(0x6fe9f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fe9f3:L6fe9f3:{c.instructions+=13;NFSU2_TR(0x6fe9f3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe9f4:{NFSU2_TR(0x6fe9f4);
__builtin_memmove((R+20),(R+16),4);
}
B6fe9f6:{NFSU2_TR(0x6fe9f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe9f7:{NFSU2_TR(0x6fe9f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe9f8:{NFSU2_TR(0x6fe9f8);
u8 U[4];
w4(U+0,u32(0x7006cfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fe9fd:{NFSU2_TR(0x6fe9fd);
__builtin_memmove((R+24),(R+4),4);
}
B6fe9ff:{NFSU2_TR(0x6fe9ff);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea01:{NFSU2_TR(0x6fea01);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea03:{NFSU2_TR(0x6fea03);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fea06:{NFSU2_TR(0x6fea06);
w1(R+512,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6fea08:{NFSU2_TR(0x6fea08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea09:{NFSU2_TR(0x6fea09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fea0c:{NFSU2_TR(0x6fea0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fea11ull));
TAIL_STATIC(0x401650u,401);
}
B6fea11:L6fea11:{c.instructions+=12;NFSU2_TR(0x6fea11);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fea14:{NFSU2_TR(0x6fea14);
__builtin_memmove((R+4),(R+24),4);
}
B6fea16:{NFSU2_TR(0x6fea16);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fea19:{NFSU2_TR(0x6fea19);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea1a:{NFSU2_TR(0x6fea1a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea1b:{NFSU2_TR(0x6fea1b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea1c:{NFSU2_TR(0x6fea1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea1d:{NFSU2_TR(0x6fea1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea1e:{NFSU2_TR(0x6fea1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fea21:{NFSU2_TR(0x6fea21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea22:{NFSU2_TR(0x6fea22);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fea25:{NFSU2_TR(0x6fea25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fea2aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe50eu);}goto L6fe50e;}
}
B6fea2a:L6fea2a:{c.instructions+=5;NFSU2_TR(0x6fea2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fea2b:{NFSU2_TR(0x6fea2b);
__builtin_memmove((R+0),(R+24),4);
}
B6fea2d:{NFSU2_TR(0x6fea2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fea2e:{NFSU2_TR(0x6fea2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fea2f:{NFSU2_TR(0x6fea2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fea32:L6fea32:{c.instructions+=13;NFSU2_TR(0x6fea32);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea33:{NFSU2_TR(0x6fea33);
__builtin_memmove((R+20),(R+16),4);
}
B6fea35:{NFSU2_TR(0x6fea35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea36:{NFSU2_TR(0x6fea36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea37:{NFSU2_TR(0x6fea37);
u8 U[4];
w4(U+0,u32(0x7006cfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea3c:{NFSU2_TR(0x6fea3c);
__builtin_memmove((R+24),(R+4),4);
}
B6fea3e:{NFSU2_TR(0x6fea3e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea40:{NFSU2_TR(0x6fea40);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea42:{NFSU2_TR(0x6fea42);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fea45:{NFSU2_TR(0x6fea45);
w1(R+512,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6fea47:{NFSU2_TR(0x6fea47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea48:{NFSU2_TR(0x6fea48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fea4b:{NFSU2_TR(0x6fea4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fea50ull));
TAIL_STATIC(0x401650u,401);
}
B6fea50:L6fea50:{c.instructions+=12;NFSU2_TR(0x6fea50);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fea53:{NFSU2_TR(0x6fea53);
__builtin_memmove((R+4),(R+24),4);
}
B6fea55:{NFSU2_TR(0x6fea55);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fea58:{NFSU2_TR(0x6fea58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea59:{NFSU2_TR(0x6fea59);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fea5c:{NFSU2_TR(0x6fea5c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea5d:{NFSU2_TR(0x6fea5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fea60:{NFSU2_TR(0x6fea60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea61:{NFSU2_TR(0x6fea61);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fea64:{NFSU2_TR(0x6fea64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea65:{NFSU2_TR(0x6fea65);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fea68:{NFSU2_TR(0x6fea68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fea6dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe50eu);}goto L6fe50e;}
}
B6fea6d:L6fea6d:{c.instructions+=5;NFSU2_TR(0x6fea6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fea6e:{NFSU2_TR(0x6fea6e);
__builtin_memmove((R+0),(R+24),4);
}
B6fea70:{NFSU2_TR(0x6fea70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fea71:{NFSU2_TR(0x6fea71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fea72:{NFSU2_TR(0x6fea72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fea75:L6fea75:{c.instructions+=11;NFSU2_TR(0x6fea75);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea76:{NFSU2_TR(0x6fea76);
__builtin_memmove((R+20),(R+16),4);
}
B6fea78:{NFSU2_TR(0x6fea78);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea79:{NFSU2_TR(0x6fea79);
u8 U[4];
w4(U+0,u32(0x7006cfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea7e:{NFSU2_TR(0x6fea7e);
__builtin_memmove((R+24),(R+4),4);
}
B6fea80:{NFSU2_TR(0x6fea80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fea84:{NFSU2_TR(0x6fea84);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea86:{NFSU2_TR(0x6fea86);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea88:{NFSU2_TR(0x6fea88);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fea8b:{NFSU2_TR(0x6fea8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fea8c:{NFSU2_TR(0x6fea8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fea91ull));
TAIL_STATIC(0x401650u,401);
}
B6fea91:L6fea91:{c.instructions+=12;NFSU2_TR(0x6fea91);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fea94:{NFSU2_TR(0x6fea94);
__builtin_memmove((R+4),(R+24),4);
}
B6fea96:{NFSU2_TR(0x6fea96);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fea99:{NFSU2_TR(0x6fea99);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fea9c:{NFSU2_TR(0x6fea9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fea9f:{NFSU2_TR(0x6fea9f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feaa1:{NFSU2_TR(0x6feaa1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6feaa4:{NFSU2_TR(0x6feaa4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6feaa7:{NFSU2_TR(0x6feaa7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6feaaa:{NFSU2_TR(0x6feaaa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feaac:{NFSU2_TR(0x6feaac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6feaaf:{NFSU2_TR(0x6feaaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6feab4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe50eu);}goto L6fe50e;}
}
B6feab4:L6feab4:{c.instructions+=4;NFSU2_TR(0x6feab4);
__builtin_memmove((R+0),(R+24),4);
}
B6feab6:{NFSU2_TR(0x6feab6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6feab7:{NFSU2_TR(0x6feab7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6feab8:{NFSU2_TR(0x6feab8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6feabb:L6feabb:{c.instructions+=11;NFSU2_TR(0x6feabb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feabc:{NFSU2_TR(0x6feabc);
__builtin_memmove((R+20),(R+16),4);
}
B6feabe:{NFSU2_TR(0x6feabe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feabf:{NFSU2_TR(0x6feabf);
u8 U[4];
w4(U+0,u32(0x7006cfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feac4:{NFSU2_TR(0x6feac4);
__builtin_memmove((R+24),(R+4),4);
}
B6feac6:{NFSU2_TR(0x6feac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6feaca:{NFSU2_TR(0x6feaca);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feacc:{NFSU2_TR(0x6feacc);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feace:{NFSU2_TR(0x6feace);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fead1:{NFSU2_TR(0x6fead1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fead2:{NFSU2_TR(0x6fead2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fead7ull));
TAIL_STATIC(0x401650u,401);
}
B6fead7:L6fead7:{c.instructions+=12;NFSU2_TR(0x6fead7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6feada:{NFSU2_TR(0x6feada);
__builtin_memmove((R+4),(R+24),4);
}
B6feadc:{NFSU2_TR(0x6feadc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6feadf:{NFSU2_TR(0x6feadf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feae1:{NFSU2_TR(0x6feae1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6feae4:{NFSU2_TR(0x6feae4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6feae7:{NFSU2_TR(0x6feae7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6feaea:{NFSU2_TR(0x6feaea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feaec:{NFSU2_TR(0x6feaec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6feaef:{NFSU2_TR(0x6feaef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6feaf2:{NFSU2_TR(0x6feaf2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6feaf5:{NFSU2_TR(0x6feaf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6feafaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe50eu);}goto L6fe50e;}
}
B6feafa:L6feafa:{c.instructions+=4;NFSU2_TR(0x6feafa);
__builtin_memmove((R+0),(R+24),4);
}
B6feafc:{NFSU2_TR(0x6feafc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6feafd:{NFSU2_TR(0x6feafd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6feafe:{NFSU2_TR(0x6feafe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6feb01:L6feb01:{c.instructions+=11;NFSU2_TR(0x6feb01);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feb02:{NFSU2_TR(0x6feb02);
__builtin_memmove((R+20),(R+16),4);
}
B6feb04:{NFSU2_TR(0x6feb04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feb05:{NFSU2_TR(0x6feb05);
u8 U[4];
w4(U+0,u32(0x7006cfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feb0a:{NFSU2_TR(0x6feb0a);
__builtin_memmove((R+24),(R+4),4);
}
B6feb0c:{NFSU2_TR(0x6feb0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6feb10:{NFSU2_TR(0x6feb10);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feb12:{NFSU2_TR(0x6feb12);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feb14:{NFSU2_TR(0x6feb14);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6feb17:{NFSU2_TR(0x6feb17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feb18:{NFSU2_TR(0x6feb18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6feb1dull));
TAIL_STATIC(0x401650u,401);
}
B6feb1d:L6feb1d:{c.instructions+=12;NFSU2_TR(0x6feb1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6feb20:{NFSU2_TR(0x6feb20);
__builtin_memmove((R+4),(R+24),4);
}
B6feb22:{NFSU2_TR(0x6feb22);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feb24:{NFSU2_TR(0x6feb24);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feb26:{NFSU2_TR(0x6feb26);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6feb29:{NFSU2_TR(0x6feb29);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6feb2c:{NFSU2_TR(0x6feb2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6feb2f:{NFSU2_TR(0x6feb2f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feb31:{NFSU2_TR(0x6feb31);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6feb34:{NFSU2_TR(0x6feb34);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6feb37:{NFSU2_TR(0x6feb37);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6feb3a:{NFSU2_TR(0x6feb3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6feb3full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe50eu);}goto L6fe50e;}
}
B6feb3f:L6feb3f:{c.instructions+=4;NFSU2_TR(0x6feb3f);
__builtin_memmove((R+0),(R+24),4);
}
B6feb41:{NFSU2_TR(0x6feb41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6feb42:{NFSU2_TR(0x6feb42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6feb43:{NFSU2_TR(0x6feb43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6feb46:L6feb46:{c.instructions+=7;NFSU2_TR(0x6feb46);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feb47:{NFSU2_TR(0x6feb47);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feb48:{NFSU2_TR(0x6feb48);
__builtin_memmove((R+24),(R+4),4);
}
B6feb4a:{NFSU2_TR(0x6feb4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6feb4d:{NFSU2_TR(0x6feb4d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6feb4f:{NFSU2_TR(0x6feb4f);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6feb51:{NFSU2_TR(0x6feb51);
if(r1(R+518)){{goto L6feb5c;}}
}
B6feb53:L6feb53:{c.instructions+=3;NFSU2_TR(0x6feb53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6feb55:{NFSU2_TR(0x6feb55);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feb57:{NFSU2_TR(0x6feb57);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6feb59ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6feb59:L6feb59:{c.instructions+=1;NFSU2_TR(0x6feb59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6feb5c:L6feb5c:{c.instructions+=3;NFSU2_TR(0x6feb5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6feb5e:{NFSU2_TR(0x6feb5e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6feb60:{NFSU2_TR(0x6feb60);
if(r1(R+518)){{goto L6feb6b;}}
}
B6feb62:L6feb62:{c.instructions+=2;NFSU2_TR(0x6feb62);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feb64:{NFSU2_TR(0x6feb64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6feb69ull));
{goto L6feecf;}
}
B6feb69:L6feb69:{c.instructions+=1;NFSU2_TR(0x6feb69);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6feb6b:L6feb6b:{c.instructions+=3;NFSU2_TR(0x6feb6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6feb6e:{NFSU2_TR(0x6feb6e);
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
B6feb70:{NFSU2_TR(0x6feb70);
if(r1(R+518)){{goto L6feb7d;}}
}
B6feb72:L6feb72:{c.instructions+=2;NFSU2_TR(0x6feb72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feb73:{NFSU2_TR(0x6feb73);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6feb79ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6feb79:L6feb79:{c.instructions+=2;NFSU2_TR(0x6feb79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6feb7a:{NFSU2_TR(0x6feb7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6feb7d:L6feb7d:{c.instructions+=2;NFSU2_TR(0x6feb7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6feb80:{NFSU2_TR(0x6feb80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6feb85ull));
TAIL_STATIC(0x483760u,483);
}
B6feb85:L6feb85:{c.instructions+=4;NFSU2_TR(0x6feb85);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6feb88:{NFSU2_TR(0x6feb88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6feb89:{NFSU2_TR(0x6feb89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6feb8c:{NFSU2_TR(0x6feb8c);
if(r1(R+518)){{goto L6feb9a;}}
}
B6feb8e:L6feb8e:{c.instructions+=2;NFSU2_TR(0x6feb8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6feb91:{NFSU2_TR(0x6feb91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6feb96ull));
TAIL_STATIC(0x483760u,483);
}
B6feb96:L6feb96:{c.instructions+=2;NFSU2_TR(0x6feb96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6feb97:{NFSU2_TR(0x6feb97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6feb9a:L6feb9a:{c.instructions+=3;NFSU2_TR(0x6feb9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6feb9d:{NFSU2_TR(0x6feb9d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6feb9f:{NFSU2_TR(0x6feb9f);
if(r1(R+518)){{goto L6febab;}}
}
B6feba1:L6feba1:{c.instructions+=2;NFSU2_TR(0x6feba1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feba2:{NFSU2_TR(0x6feba2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6feba7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe4e8u);}goto L6fe4e8;}
}
B6feba7:L6feba7:{c.instructions+=2;NFSU2_TR(0x6feba7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6feba8:{NFSU2_TR(0x6feba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6febab:L6febab:{c.instructions+=3;NFSU2_TR(0x6febab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6febae:{NFSU2_TR(0x6febae);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6febb0:{NFSU2_TR(0x6febb0);
if(r1(R+518)){{goto L6febbc;}}
}
B6febb2:L6febb2:{c.instructions+=2;NFSU2_TR(0x6febb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6febb3:{NFSU2_TR(0x6febb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6febb8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe4e8u);}goto L6fe4e8;}
}
B6febb8:L6febb8:{c.instructions+=2;NFSU2_TR(0x6febb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6febb9:{NFSU2_TR(0x6febb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6febbc:L6febbc:{c.instructions+=3;NFSU2_TR(0x6febbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6febbf:{NFSU2_TR(0x6febbf);
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
B6febc1:{NFSU2_TR(0x6febc1);
if(r1(R+518)){{goto L6febce;}}
}
B6febc3:L6febc3:{c.instructions+=2;NFSU2_TR(0x6febc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6febc4:{NFSU2_TR(0x6febc4);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6febcaull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6febca:L6febca:{c.instructions+=2;NFSU2_TR(0x6febca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6febcb:{NFSU2_TR(0x6febcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6febce:L6febce:{c.instructions+=3;NFSU2_TR(0x6febce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6febd1:{NFSU2_TR(0x6febd1);
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
B6febd3:{NFSU2_TR(0x6febd3);
if(r1(R+518)){{goto L6febe0;}}
}
B6febd5:L6febd5:{c.instructions+=2;NFSU2_TR(0x6febd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6febd6:{NFSU2_TR(0x6febd6);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6febdcull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6febdc:L6febdc:{c.instructions+=2;NFSU2_TR(0x6febdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6febdd:{NFSU2_TR(0x6febdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6febe0:L6febe0:{c.instructions+=6;NFSU2_TR(0x6febe0);
u8 U[4];
w4(U+0,u32(0x6996f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6febe5:{NFSU2_TR(0x6febe5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6febe7:{NFSU2_TR(0x6febe7);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6febe9:{NFSU2_TR(0x6febe9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x78ull))));
}
B6febec:{NFSU2_TR(0x6febec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6febed:{NFSU2_TR(0x6febed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6febf2ull));
TAIL_STATIC(0x64b5ffu,64b);
}
B6febf2:L6febf2:{c.instructions+=3;NFSU2_TR(0x6febf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6febf3:{NFSU2_TR(0x6febf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6febf4:{NFSU2_TR(0x6febf4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6febf5:L6febf5:{c.instructions+=12;NFSU2_TR(0x6febf5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6febf6:{NFSU2_TR(0x6febf6);
__builtin_memmove((R+20),(R+16),4);
}
B6febf8:{NFSU2_TR(0x6febf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6febfb:{NFSU2_TR(0x6febfb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6febfc:{NFSU2_TR(0x6febfc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6febfd:{NFSU2_TR(0x6febfd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6febfe:{NFSU2_TR(0x6febfe);
u8 U[4];
w4(U+0,u32(0x33ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fec00:{NFSU2_TR(0x6fec00);
w4(R+28,u32(0x97ull));
}
B6fec05:{NFSU2_TR(0x6fec05);
__builtin_memmove((R+24),(R+4),4);
}
B6fec07:{NFSU2_TR(0x6fec07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fec08:{NFSU2_TR(0x6fec08);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fec0b:{NFSU2_TR(0x6fec0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fec10ull));
TAIL_STATIC(0x465400u,465);
}
B6fec10:L6fec10:{c.instructions+=4;NFSU2_TR(0x6fec10);
u8 U[4];
w4(U+0,u32(0x33ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fec12:{NFSU2_TR(0x6fec12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fec13:{NFSU2_TR(0x6fec13);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fec16:{NFSU2_TR(0x6fec16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fec1bull));
TAIL_STATIC(0x465400u,465);
}
B6fec1b:L6fec1b:{c.instructions+=5;NFSU2_TR(0x6fec1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fec1e:{NFSU2_TR(0x6fec1e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6fec20:{NFSU2_TR(0x6fec20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6fec23:{NFSU2_TR(0x6fec23);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fec25:{NFSU2_TR(0x6fec25);
if(r1(R+518)){{goto L6fec49;}}
}
B6fec27:L6fec27:{c.instructions+=6;NFSU2_TR(0x6fec27);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fec2a:{NFSU2_TR(0x6fec2a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fec2b:{NFSU2_TR(0x6fec2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fec2e:{NFSU2_TR(0x6fec2e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fec2f:{NFSU2_TR(0x6fec2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fec30:{NFSU2_TR(0x6fec30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fec35ull));
TAIL_STATIC(0x6f8ef1u,6f8);
}
B6fec35:L6fec35:{c.instructions+=5;NFSU2_TR(0x6fec35);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fec36:{NFSU2_TR(0x6fec36);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fec39:{NFSU2_TR(0x6fec39);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6fec3b:{NFSU2_TR(0x6fec3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fec3e:{NFSU2_TR(0x6fec3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fec43ull));
TAIL_STATIC(0x465550u,465);
}
B6fec43:L6fec43:{c.instructions+=2;NFSU2_TR(0x6fec43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B6fec46:{NFSU2_TR(0x6fec46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fec49:L6fec49:{c.instructions+=3;NFSU2_TR(0x6fec49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fec4c:{NFSU2_TR(0x6fec4c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fec4e:{NFSU2_TR(0x6fec4e);
if(r1(R+518)){{goto L6fec72;}}
}
B6fec50:L6fec50:{c.instructions+=6;NFSU2_TR(0x6fec50);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fec53:{NFSU2_TR(0x6fec53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fec54:{NFSU2_TR(0x6fec54);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fec57:{NFSU2_TR(0x6fec57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fec58:{NFSU2_TR(0x6fec58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fec59:{NFSU2_TR(0x6fec59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fec5eull));
TAIL_STATIC(0x6f8ef1u,6f8);
}
B6fec5e:L6fec5e:{c.instructions+=5;NFSU2_TR(0x6fec5e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fec5f:{NFSU2_TR(0x6fec5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fec62:{NFSU2_TR(0x6fec62);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6fec64:{NFSU2_TR(0x6fec64);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fec67:{NFSU2_TR(0x6fec67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fec6cull));
TAIL_STATIC(0x465550u,465);
}
B6fec6c:L6fec6c:{c.instructions+=2;NFSU2_TR(0x6fec6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B6fec6f:{NFSU2_TR(0x6fec6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fec72:L6fec72:{c.instructions+=2;NFSU2_TR(0x6fec72);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6fec75:{NFSU2_TR(0x6fec75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fec7d;}}
}
B6fec77:L6fec77:{c.instructions+=2;NFSU2_TR(0x6fec77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fec7a:{NFSU2_TR(0x6fec7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fec7d:L6fec7d:{c.instructions+=2;NFSU2_TR(0x6fec7d);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
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
B6fec80:{NFSU2_TR(0x6fec80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fecb0;}}
}
B6fec82:L6fec82:{c.instructions+=2;NFSU2_TR(0x6fec82);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fec84:{NFSU2_TR(0x6fec84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fec89ull));
TAIL_STATIC(0x6ff085u,6ff);
}
B6fec89:L6fec89:{c.instructions+=3;NFSU2_TR(0x6fec89);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fec8b:{NFSU2_TR(0x6fec8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fec8c:{NFSU2_TR(0x6fec8c);
if(r1(R+518)){{goto L6fec9d;}}
}
B6fec8e:L6fec8e:{c.instructions+=4;NFSU2_TR(0x6fec8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fec91:{NFSU2_TR(0x6fec91);
__builtin_memmove((R+4),(R+0),4);
}
B6fec93:{NFSU2_TR(0x6fec93);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fec96:{NFSU2_TR(0x6fec96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fec9bull));
{goto L6feeef;}
}
B6fec9b:L6fec9b:{c.instructions+=1;NFSU2_TR(0x6fec9b);
{goto L6fec9f;}
}
B6fec9d:L6fec9d:{c.instructions+=1;NFSU2_TR(0x6fec9d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fec9f:L6fec9f:{c.instructions+=7;NFSU2_TR(0x6fec9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6feca1:{NFSU2_TR(0x6feca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6feca4:{NFSU2_TR(0x6feca4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6feca6:{NFSU2_TR(0x6feca6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6feca8:{NFSU2_TR(0x6feca8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B6fecab:{NFSU2_TR(0x6fecab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fecae:{NFSU2_TR(0x6fecae);
{goto L6fecb3;}
}
B6fecb0:L6fecb0:{c.instructions+=1;NFSU2_TR(0x6fecb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fecb3:L6fecb3:{c.instructions+=3;NFSU2_TR(0x6fecb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fecb6:{NFSU2_TR(0x6fecb6);
u8 U[8];
__builtin_memmove((U+0),gp(0x8161ec),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fecbc:{NFSU2_TR(0x6fecbc);
if(r1(R+518)){{goto L6fecff;}}
}
B6fecbe:L6fecbe:{c.instructions+=2;NFSU2_TR(0x6fecbe);
u8 U[14];
__builtin_memmove((U+6),gp(0x8161f0),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fecc4:{NFSU2_TR(0x6fecc4);
if(r1(R+518)){{goto L6fecff;}}
}
B6fecc6:L6fecc6:{c.instructions+=8;NFSU2_TR(0x6fecc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fecc9:{NFSU2_TR(0x6fecc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6feccc:{NFSU2_TR(0x6feccc);
u8 U[4];
w4(U+0,u32(0x6fe9e1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fecd1:{NFSU2_TR(0x6fecd1);
u8 U[4];
w4(U+0,u32(0x6fe9b6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fecd6:{NFSU2_TR(0x6fecd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fecd7:{NFSU2_TR(0x6fecd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fecda:{NFSU2_TR(0x6fecda);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fecdc:{NFSU2_TR(0x6fecdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fece1ull));
TAIL_STATIC(0x7006f0u,700);
}
B6fece1:L6fece1:{c.instructions+=2;NFSU2_TR(0x6fece1);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fece3:{NFSU2_TR(0x6fece3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fece8ull));
TAIL_STATIC(0x6ff085u,6ff);
}
B6fece8:L6fece8:{c.instructions+=3;NFSU2_TR(0x6fece8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fecea:{NFSU2_TR(0x6fecea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6feceb:{NFSU2_TR(0x6feceb);
if(r1(R+518)){{goto L6fecfa;}}
}
B6feced:L6feced:{c.instructions+=4;NFSU2_TR(0x6feced);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fecf0:{NFSU2_TR(0x6fecf0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fecf1:{NFSU2_TR(0x6fecf1);
__builtin_memmove((R+4),(R+0),4);
}
B6fecf3:{NFSU2_TR(0x6fecf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fecf8ull));
TAIL_STATIC(0x700710u,700);
}
B6fecf8:L6fecf8:{c.instructions+=1;NFSU2_TR(0x6fecf8);
{goto L6fecfc;}
}
B6fecfa:L6fecfa:{c.instructions+=1;NFSU2_TR(0x6fecfa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fecfc:L6fecfc:{c.instructions+=1;NFSU2_TR(0x6fecfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fecff:L6fecff:{c.instructions+=3;NFSU2_TR(0x6fecff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fed02:{NFSU2_TR(0x6fed02);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fed03:{NFSU2_TR(0x6fed03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fed08ull));
TAIL_STATIC(0x700655u,700);
}
B6fed08:L6fed08:{c.instructions+=3;NFSU2_TR(0x6fed08);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fed0a:{NFSU2_TR(0x6fed0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fed0d:{NFSU2_TR(0x6fed0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fed12ull));
TAIL_STATIC(0x6ff085u,6ff);
}
B6fed12:L6fed12:{c.instructions+=3;NFSU2_TR(0x6fed12);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fed14:{NFSU2_TR(0x6fed14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fed15:{NFSU2_TR(0x6fed15);
if(r1(R+518)){{goto L6fed22;}}
}
B6fed17:L6fed17:{c.instructions+=2;NFSU2_TR(0x6fed17);
__builtin_memmove((R+4),(R+0),4);
}
B6fed19:{NFSU2_TR(0x6fed19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fed1eull));
{goto L6fee65;}
}
B6fed1e:L6fed1e:{c.instructions+=2;NFSU2_TR(0x6fed1e);
__builtin_memmove((R+28),(R+0),4);
}
B6fed20:{NFSU2_TR(0x6fed20);
{goto L6fed24;}
}
B6fed22:L6fed22:{c.instructions+=1;NFSU2_TR(0x6fed22);
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
B6fed24:L6fed24:{c.instructions+=3;NFSU2_TR(0x6fed24);
__builtin_memmove((R+4),(R+28),4);
}
B6fed26:{NFSU2_TR(0x6fed26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fed29:{NFSU2_TR(0x6fed29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fed2eull));
{goto L6fee83;}
}
B6fed2e:L6fed2e:{c.instructions+=9;NFSU2_TR(0x6fed2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fed31:{NFSU2_TR(0x6fed31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fed33:{NFSU2_TR(0x6fed33);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fed35:{NFSU2_TR(0x6fed35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fed38:{NFSU2_TR(0x6fed38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fed3b:{NFSU2_TR(0x6fed3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fed3e:{NFSU2_TR(0x6fed3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fed41:{NFSU2_TR(0x6fed41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fed44:{NFSU2_TR(0x6fed44);
if(r1(R+518)){{goto L6fed4b;}}
}
B6fed46:L6fed46:{c.instructions+=1;NFSU2_TR(0x6fed46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fed4bull));
{goto L6fefc6;}
}
B6fed4b:L6fed4b:{c.instructions+=3;NFSU2_TR(0x6fed4b);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fed50:{NFSU2_TR(0x6fed50);
__builtin_memmove((R+4),(R+24),4);
}
B6fed52:{NFSU2_TR(0x6fed52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fed57ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fe84cu);}goto L6fe84c;}
}
B6fed57:L6fed57:{c.instructions+=6;NFSU2_TR(0x6fed57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fed5a:{NFSU2_TR(0x6fed5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fed5b:{NFSU2_TR(0x6fed5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fed5c:{NFSU2_TR(0x6fed5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fed5d:{NFSU2_TR(0x6fed5d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fed5e:{NFSU2_TR(0x6fed5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fed61:L6fed61:{c.instructions+=10;NFSU2_TR(0x6fed61);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fed62:{NFSU2_TR(0x6fed62);
__builtin_memmove((R+20),(R+16),4);
}
B6fed64:{NFSU2_TR(0x6fed64);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x24ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fed67:{NFSU2_TR(0x6fed67);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fed68:{NFSU2_TR(0x6fed68);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fed69:{NFSU2_TR(0x6fed69);
__builtin_memmove((R+24),(R+4),4);
}
B6fed6b:{NFSU2_TR(0x6fed6b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fed6c:{NFSU2_TR(0x6fed6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6fed6f:{NFSU2_TR(0x6fed6f);
__builtin_memmove((R+4),(R+28),4);
}
B6fed71:{NFSU2_TR(0x6fed71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fed76ull));
{goto L6fee83;}
}
B6fed76:L6fed76:{c.instructions+=7;NFSU2_TR(0x6fed76);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6fed79:{NFSU2_TR(0x6fed79);
__builtin_memmove((R+12),(R+28),4);
}
B6fed7b:{NFSU2_TR(0x6fed7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B6fed7e:{NFSU2_TR(0x6fed7e);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
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
B6fed82:{NFSU2_TR(0x6fed82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fed85:{NFSU2_TR(0x6fed85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fed88:{NFSU2_TR(0x6fed88);
if(r1(R+518)){{goto L6fee00;}}
}
B6fed8a:L6fed8a:{c.instructions+=1;NFSU2_TR(0x6fed8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fed8full));
TAIL_STATIC(0x721f99u,721);
}
B6fed8f:L6fed8f:{c.instructions+=5;NFSU2_TR(0x6fed8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fed92:{NFSU2_TR(0x6fed92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fed93:{NFSU2_TR(0x6fed93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fed95:{NFSU2_TR(0x6fed95);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fed98:{NFSU2_TR(0x6fed98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fed9dull));
TAIL_STATIC(0x722eceu,722);
}
B6fed9d:L6fed9d:{c.instructions+=4;NFSU2_TR(0x6fed9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6feda0:{NFSU2_TR(0x6feda0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feda1:{NFSU2_TR(0x6feda1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6feda4:{NFSU2_TR(0x6feda4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6feda9ull));
TAIL_STATIC(0x722db5u,722);
}
B6feda9:L6feda9:{c.instructions+=2;NFSU2_TR(0x6feda9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6fedac:{NFSU2_TR(0x6fedac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fedb1ull));
TAIL_STATIC(0x721fa7u,721);
}
B6fedb1:L6fedb1:{c.instructions+=1;NFSU2_TR(0x6fedb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fedb6ull));
TAIL_STATIC(0x724399u,724);
}
B6fedb6:L6fedb6:{c.instructions+=4;NFSU2_TR(0x6fedb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6fedb9:{NFSU2_TR(0x6fedb9);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B6fedbb:{NFSU2_TR(0x6fedbb);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6fedbe:{NFSU2_TR(0x6fedbe);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6fee00;}}
}
B6fedc0:L6fedc0:{c.instructions+=16;NFSU2_TR(0x6fedc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fedc3:{NFSU2_TR(0x6fedc3);
__builtin_memmove((R+0),(R+4),4);
}
B6fedc5:{NFSU2_TR(0x6fedc5);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6fedc6:{NFSU2_TR(0x6fedc6);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fedc8:{NFSU2_TR(0x6fedc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fedc9:{NFSU2_TR(0x6fedc9);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6fedc9);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6fedc9);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B6fedcb:{NFSU2_TR(0x6fedcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6fedce:{NFSU2_TR(0x6fedce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fedd1:{NFSU2_TR(0x6fedd1);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6fedd3:{NFSU2_TR(0x6fedd3);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B6fedd5:{NFSU2_TR(0x6fedd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6fedd8:{NFSU2_TR(0x6fedd8);
__builtin_memmove((R+4),(R+0),4);
}
B6fedda:{NFSU2_TR(0x6fedda);
w4(R+4,u32(0-u32(r4(R+4))));
}
B6feddc:{NFSU2_TR(0x6feddc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fedde:{NFSU2_TR(0x6fedde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fede1:{NFSU2_TR(0x6fede1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6fede5;}}
}
B6fede3:L6fede3:{c.instructions+=1;NFSU2_TR(0x6fede3);
__builtin_memmove((R+4),(R+0),4);
}
B6fede5:L6fede5:{c.instructions+=2;NFSU2_TR(0x6fede5);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x108ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x108ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x108ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fedeb:{NFSU2_TR(0x6fedeb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6fee00;}}
}
B6feded:L6feded:{c.instructions+=8;NFSU2_TR(0x6feded);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fedef:{NFSU2_TR(0x6fedef);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6fedf0:{NFSU2_TR(0x6fedf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fedf1:{NFSU2_TR(0x6fedf1);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6fedf1);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6fedf1);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B6fedf3:{NFSU2_TR(0x6fedf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6fedf6:{NFSU2_TR(0x6fedf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fedfa:{NFSU2_TR(0x6fedfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fedfd:{NFSU2_TR(0x6fedfd);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+12))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6fee00:L6fee00:{c.instructions+=6;NFSU2_TR(0x6fee00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fee01:{NFSU2_TR(0x6fee01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fee02:{NFSU2_TR(0x6fee02);
__builtin_memmove((R+0),(R+12),4);
}
B6fee04:{NFSU2_TR(0x6fee04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fee05:{NFSU2_TR(0x6fee05);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fee06:{NFSU2_TR(0x6fee06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fee07:L6fee07:{c.instructions+=7;NFSU2_TR(0x6fee07);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fee08:{NFSU2_TR(0x6fee08);
__builtin_memmove((R+20),(R+16),4);
}
B6fee0a:{NFSU2_TR(0x6fee0a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fee0b:{NFSU2_TR(0x6fee0b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fee0c:{NFSU2_TR(0x6fee0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fee0d:{NFSU2_TR(0x6fee0d);
__builtin_memmove((R+24),(R+4),4);
}
B6fee0f:{NFSU2_TR(0x6fee0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fee14ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fed61u);}goto L6fed61;}
}
B6fee14:L6fee14:{c.instructions+=3;NFSU2_TR(0x6fee14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fee17:{NFSU2_TR(0x6fee17);
__builtin_memmove((R+28),(R+0),4);
}
B6fee19:{NFSU2_TR(0x6fee19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fee1eull));
TAIL_STATIC(0x700640u,700);
}
B6fee1e:L6fee1e:{c.instructions+=7;NFSU2_TR(0x6fee1e);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6fee24:{NFSU2_TR(0x6fee24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fee27:{NFSU2_TR(0x6fee27);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6fee29:{NFSU2_TR(0x6fee29);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6fee2b:{NFSU2_TR(0x6fee2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fee2e:{NFSU2_TR(0x6fee2e);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6fee31:{NFSU2_TR(0x6fee31);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6fee39;}}
}
B6fee33:L6fee33:{c.instructions+=1;NFSU2_TR(0x6fee33);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6fee39:L6fee39:{c.instructions+=6;NFSU2_TR(0x6fee39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fee3c:{NFSU2_TR(0x6fee3c);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B6fee3e:{NFSU2_TR(0x6fee3e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6fee40:{NFSU2_TR(0x6fee40);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6fee43:{NFSU2_TR(0x6fee43);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6fee46:{NFSU2_TR(0x6fee46);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6fee4e;}}
}
B6fee48:L6fee48:{c.instructions+=1;NFSU2_TR(0x6fee48);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6fee4e:L6fee4e:{c.instructions+=8;NFSU2_TR(0x6fee4e);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6fee50:{NFSU2_TR(0x6fee50);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B6fee52:{NFSU2_TR(0x6fee52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fee53:{NFSU2_TR(0x6fee53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fee54:{NFSU2_TR(0x6fee54);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6fee56:{NFSU2_TR(0x6fee56);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6fee58:{NFSU2_TR(0x6fee58);
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
B6fee5b:{NFSU2_TR(0x6fee5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fee61;}}
}
B6fee5d:L6fee5d:{c.instructions+=3;NFSU2_TR(0x6fee5d);
w1(R+0,u8(0x1ull));
}
B6fee5f:{NFSU2_TR(0x6fee5f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fee60:{NFSU2_TR(0x6fee60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fee61:L6fee61:{c.instructions+=3;NFSU2_TR(0x6fee61);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6fee63:{NFSU2_TR(0x6fee63);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fee64:{NFSU2_TR(0x6fee64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fee65:L6fee65:{c.instructions+=5;NFSU2_TR(0x6fee65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fee66:{NFSU2_TR(0x6fee66);
__builtin_memmove((R+24),(R+4),4);
}
B6fee68:{NFSU2_TR(0x6fee68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fee6c:{NFSU2_TR(0x6fee6c);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
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
B6fee70:{NFSU2_TR(0x6fee70);
u8 U[4];
__builtin_memmove((U+0),gp(0x7833b8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fee76ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fee76:L6fee76:{c.instructions+=5;NFSU2_TR(0x6fee76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6fee78:{NFSU2_TR(0x6fee78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fee7f:{NFSU2_TR(0x6fee7f);
__builtin_memmove((R+0),(R+24),4);
}
B6fee81:{NFSU2_TR(0x6fee81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fee82:{NFSU2_TR(0x6fee82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fee83:L6fee83:{c.instructions+=4;NFSU2_TR(0x6fee83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fee84:{NFSU2_TR(0x6fee84);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fee85:{NFSU2_TR(0x6fee85);
__builtin_memmove((R+24),(R+4),4);
}
B6fee87:{NFSU2_TR(0x6fee87);
u8 U[4];
__builtin_memmove((U+0),gp(0x7833b8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fee8dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fee8d:L6fee8d:{c.instructions+=5;NFSU2_TR(0x6fee8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fee90:{NFSU2_TR(0x6fee90);
__builtin_memmove((R+28),(R+0),4);
}
B6fee92:{NFSU2_TR(0x6fee92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+0))));
}
B6fee94:{NFSU2_TR(0x6fee94);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fee9a:{NFSU2_TR(0x6fee9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6feea5;}}
}
B6fee9c:L6fee9c:{c.instructions+=3;NFSU2_TR(0x6fee9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fee9f:{NFSU2_TR(0x6fee9f);
u8 U[24];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),u32(0x0ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x0ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(U+4))+u32(u32(0x0ull))));
w1(U+16,carry<u32>(r4(U+12),r4(U+8)));
w1(R+512,u8((r1(R+512))||(r1(U+16))));
w1(U+17,scarry<u32>(r4(U+12),r4(U+8)));
w1(R+523,u8(((r1(R+523))!=0)!=((r1(U+17))!=0)));
w4(U+4,u32(u32(r4(U+12))+u32(r4(U+8))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+18,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+22,u8(__builtin_popcountll(u64(r4(U+18)))));
w1(U+23,u8(u32(r1(U+22))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+23))==(u8(0x0ull))));
}
B6feea3:{NFSU2_TR(0x6feea3);
{goto L6feeb4;}
}
B6feea5:L6feea5:{c.instructions+=5;NFSU2_TR(0x6feea5);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B6feea7:{NFSU2_TR(0x6feea7);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(U+4,shr<u32>(r4(R+0),u64(r4(U+0))));
w4(U+8,u32(u32(u32(0x20ull))-u32(r4(U+0))));
w4(U+12,shl<u32>(r4(R+8),u64(r4(U+8))));
w4(R+0,u32(u32(r4(U+4))|u32(r4(U+12))));
}
B6feeab:{NFSU2_TR(0x6feeab);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B6feeae:{NFSU2_TR(0x6feeae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6feeb1:{NFSU2_TR(0x6feeb1);
u8 U[24];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+8)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),r4(R+8)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(U+4))+u32(r4(R+8))));
w1(U+16,carry<u32>(r4(U+12),r4(U+8)));
w1(R+512,u8((r1(R+512))||(r1(U+16))));
w1(U+17,scarry<u32>(r4(U+12),r4(U+8)));
w1(R+523,u8(((r1(R+523))!=0)!=((r1(U+17))!=0)));
w4(U+4,u32(u32(r4(U+12))+u32(r4(U+8))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+18,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+22,u8(__builtin_popcountll(u64(r4(U+18)))));
w1(U+23,u8(u32(r1(U+22))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+23))==(u8(0x0ull))));
}
B6feeb4:L6feeb4:{c.instructions+=4;NFSU2_TR(0x6feeb4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6feeb6:{NFSU2_TR(0x6feeb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6feeb7:{NFSU2_TR(0x6feeb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6feeb8:{NFSU2_TR(0x6feeb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6feeb9:L6feeb9:{c.instructions+=5;NFSU2_TR(0x6feeb9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feeba:{NFSU2_TR(0x6feeba);
__builtin_memmove((R+20),(R+16),4);
}
B6feebc:{NFSU2_TR(0x6feebc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feebd:{NFSU2_TR(0x6feebd);
__builtin_memmove((R+24),(R+4),4);
}
B6feebf:{NFSU2_TR(0x6feebf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6feec4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fee83u);}goto L6fee83;}
}
B6feec4:L6feec4:{c.instructions+=5;NFSU2_TR(0x6feec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6feec7:{NFSU2_TR(0x6feec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6feeca:{NFSU2_TR(0x6feeca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6feecb:{NFSU2_TR(0x6feecb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6feecc:{NFSU2_TR(0x6feecc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6feecf:L6feecf:{c.instructions+=5;NFSU2_TR(0x6feecf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feed0:{NFSU2_TR(0x6feed0);
__builtin_memmove((R+20),(R+16),4);
}
B6feed2:{NFSU2_TR(0x6feed2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feed3:{NFSU2_TR(0x6feed3);
__builtin_memmove((R+24),(R+4),4);
}
B6feed5:{NFSU2_TR(0x6feed5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6feedaull));
{goto L6fef74;}
}
B6feeda:L6feeda:{c.instructions+=2;NFSU2_TR(0x6feeda);
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
B6feede:{NFSU2_TR(0x6feede);
if(r1(R+518)){{goto L6feee8;}}
}
B6feee0:L6feee0:{c.instructions+=2;NFSU2_TR(0x6feee0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feee1:{NFSU2_TR(0x6feee1);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6feee7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6feee7:L6feee7:{c.instructions+=1;NFSU2_TR(0x6feee7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6feee8:L6feee8:{c.instructions+=4;NFSU2_TR(0x6feee8);
__builtin_memmove((R+0),(R+24),4);
}
B6feeea:{NFSU2_TR(0x6feeea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6feeeb:{NFSU2_TR(0x6feeeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6feeec:{NFSU2_TR(0x6feeec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6feeef:L6feeef:{c.instructions+=6;NFSU2_TR(0x6feeef);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feef0:{NFSU2_TR(0x6feef0);
__builtin_memmove((R+20),(R+16),4);
}
B6feef2:{NFSU2_TR(0x6feef2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6feef5:{NFSU2_TR(0x6feef5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feef6:{NFSU2_TR(0x6feef6);
__builtin_memmove((R+24),(R+4),4);
}
B6feef8:{NFSU2_TR(0x6feef8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6feefdull));
TAIL_STATIC(0x721912u,721);
}
B6feefd:L6feefd:{c.instructions+=2;NFSU2_TR(0x6feefd);
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
B6feeff:{NFSU2_TR(0x6feeff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fef08;}}
}
B6fef01:L6fef01:{c.instructions+=1;NFSU2_TR(0x6fef01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fef06ull));
TAIL_STATIC(0x770fdbu,770);
}
B6fef06:L6fef06:{c.instructions+=1;NFSU2_TR(0x6fef06);
{goto L6fef6d;}
}
B6fef08:L6fef08:{c.instructions+=7;NFSU2_TR(0x6fef08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fef0c:{NFSU2_TR(0x6fef0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fef10:{NFSU2_TR(0x6fef10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fef14:{NFSU2_TR(0x6fef14);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fef17:{NFSU2_TR(0x6fef17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fef18:{NFSU2_TR(0x6fef18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fef19:{NFSU2_TR(0x6fef19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fef1eull));
TAIL_STATIC(0x721a6bu,721);
}
B6fef1e:L6fef1e:{c.instructions+=3;NFSU2_TR(0x6fef1e);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fef20:{NFSU2_TR(0x6fef20);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fef22:{NFSU2_TR(0x6fef22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fef27ull));
TAIL_STATIC(0x721d6au,721);
}
B6fef27:L6fef27:{c.instructions+=7;NFSU2_TR(0x6fef27);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fef2d:{NFSU2_TR(0x6fef2d);
__builtin_memmove((R+28),(R+0),4);
}
B6fef2f:{NFSU2_TR(0x6fef2f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fef31:{NFSU2_TR(0x6fef31);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fef33:{NFSU2_TR(0x6fef33);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fef34:{NFSU2_TR(0x6fef34);
u8 U[4];
w4(U+0,u32(0x7c348cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fef39:{NFSU2_TR(0x6fef39);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161ec),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fef3full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fef3f:L6fef3f:{c.instructions+=9;NFSU2_TR(0x6fef3f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fef40:{NFSU2_TR(0x6fef40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fef41:{NFSU2_TR(0x6fef41);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fef43:{NFSU2_TR(0x6fef43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fef46:{NFSU2_TR(0x6fef46);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fef48:{NFSU2_TR(0x6fef48);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fef4b:{NFSU2_TR(0x6fef4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fef4c:{NFSU2_TR(0x6fef4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fef4f:{NFSU2_TR(0x6fef4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fef54ull));
TAIL_STATIC(0x7243c3u,724);
}
B6fef54:L6fef54:{c.instructions+=5;NFSU2_TR(0x6fef54);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fef57:{NFSU2_TR(0x6fef57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fef5a:{NFSU2_TR(0x6fef5a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fef5c:{NFSU2_TR(0x6fef5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fef5d:{NFSU2_TR(0x6fef5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fef62ull));
TAIL_STATIC(0x7243aau,724);
}
B6fef62:L6fef62:{c.instructions+=5;NFSU2_TR(0x6fef62);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6fef64:{NFSU2_TR(0x6fef64);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fef67:{NFSU2_TR(0x6fef67);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6fef69:{NFSU2_TR(0x6fef69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fef6c:{NFSU2_TR(0x6fef6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fef6d:L6fef6d:{c.instructions+=4;NFSU2_TR(0x6fef6d);
__builtin_memmove((R+0),(R+24),4);
}
B6fef6f:{NFSU2_TR(0x6fef6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fef70:{NFSU2_TR(0x6fef70);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fef71:{NFSU2_TR(0x6fef71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fef74:L6fef74:{c.instructions+=4;NFSU2_TR(0x6fef74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fef75:{NFSU2_TR(0x6fef75);
__builtin_memmove((R+24),(R+4),4);
}
B6fef77:{NFSU2_TR(0x6fef77);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B6fef7b:{NFSU2_TR(0x6fef7b);
if(r1(R+518)){{goto L6fef94;}}
}
B6fef7d:L6fef7d:{c.instructions+=2;NFSU2_TR(0x6fef7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fef80:{NFSU2_TR(0x6fef80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fef85ull));
TAIL_STATIC(0x722ac0u,722);
}
B6fef85:L6fef85:{c.instructions+=2;NFSU2_TR(0x6fef85);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fef88:{NFSU2_TR(0x6fef88);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fef8eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fef8e:L6fef8e:{c.instructions+=3;NFSU2_TR(0x6fef8e);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B6fef92:{NFSU2_TR(0x6fef92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fef93:{NFSU2_TR(0x6fef93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fef94:L6fef94:{c.instructions+=2;NFSU2_TR(0x6fef94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fef95:{NFSU2_TR(0x6fef95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fef96:L6fef96:{c.instructions+=6;NFSU2_TR(0x6fef96);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fef97:{NFSU2_TR(0x6fef97);
__builtin_memmove((R+20),(R+16),4);
}
B6fef99:{NFSU2_TR(0x6fef99);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fef9a:{NFSU2_TR(0x6fef9a);
__builtin_memmove((R+24),(R+4),4);
}
B6fef9c:{NFSU2_TR(0x6fef9c);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
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
B6fefa0:{NFSU2_TR(0x6fefa0);
if(r1(R+518)){{goto L6fefbf;}}
}
B6fefa2:L6fefa2:{c.instructions+=1;NFSU2_TR(0x6fefa2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fefa7ull));
TAIL_STATIC(0x721f99u,721);
}
B6fefa7:L6fefa7:{c.instructions+=3;NFSU2_TR(0x6fefa7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fefaa:{NFSU2_TR(0x6fefaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fefad:{NFSU2_TR(0x6fefad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fefb2ull));
TAIL_STATIC(0x7230a7u,723);
}
B6fefb2:L6fefb2:{c.instructions+=4;NFSU2_TR(0x6fefb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fefb3:{NFSU2_TR(0x6fefb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fefb4:{NFSU2_TR(0x6fefb4);
__builtin_memmove((R+24),(R+0),4);
}
B6fefb6:{NFSU2_TR(0x6fefb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fefbbull));
TAIL_STATIC(0x721fa7u,721);
}
B6fefbb:L6fefbb:{c.instructions+=2;NFSU2_TR(0x6fefbb);
__builtin_memmove((R+0),(R+24),4);
}
B6fefbd:{NFSU2_TR(0x6fefbd);
{goto L6fefc1;}
}
B6fefbf:L6fefbf:{c.instructions+=1;NFSU2_TR(0x6fefbf);
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
B6fefc1:L6fefc1:{c.instructions+=3;NFSU2_TR(0x6fefc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fefc2:{NFSU2_TR(0x6fefc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fefc3:{NFSU2_TR(0x6fefc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fefc6:L6fefc6:{c.instructions+=4;NFSU2_TR(0x6fefc6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fefc7:{NFSU2_TR(0x6fefc7);
__builtin_memmove((R+24),(R+4),4);
}
B6fefc9:{NFSU2_TR(0x6fefc9);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
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
B6fefcd:{NFSU2_TR(0x6fefcd);
if(r1(R+518)){{goto L6fefeb;}}
}
B6fefcf:L6fefcf:{c.instructions+=1;NFSU2_TR(0x6fefcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fefd4ull));
TAIL_STATIC(0x721f99u,721);
}
B6fefd4:L6fefd4:{c.instructions+=3;NFSU2_TR(0x6fefd4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fefd6:{NFSU2_TR(0x6fefd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fefd9:{NFSU2_TR(0x6fefd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fefdeull));
TAIL_STATIC(0x722f98u,722);
}
B6fefde:L6fefde:{c.instructions+=4;NFSU2_TR(0x6fefde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fefdf:{NFSU2_TR(0x6fefdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fefe0:{NFSU2_TR(0x6fefe0);
__builtin_memmove((R+24),(R+0),4);
}
B6fefe2:{NFSU2_TR(0x6fefe2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fefe7ull));
TAIL_STATIC(0x721fa7u,721);
}
B6fefe7:L6fefe7:{c.instructions+=3;NFSU2_TR(0x6fefe7);
__builtin_memmove((R+0),(R+24),4);
}
B6fefe9:{NFSU2_TR(0x6fefe9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fefea:{NFSU2_TR(0x6fefea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fefeb:L6fefeb:{c.instructions+=3;NFSU2_TR(0x6fefeb);
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
B6fefed:{NFSU2_TR(0x6fefed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fefee:{NFSU2_TR(0x6fefee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fefef:L6fefef:{c.instructions+=6;NFSU2_TR(0x6fefef);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feff0:{NFSU2_TR(0x6feff0);
__builtin_memmove((R+20),(R+16),4);
}
B6feff2:{NFSU2_TR(0x6feff2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6feff3:{NFSU2_TR(0x6feff3);
__builtin_memmove((R+24),(R+4),4);
}
B6feff5:{NFSU2_TR(0x6feff5);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
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
B6feff9:{NFSU2_TR(0x6feff9);
if(r1(R+518)){TAIL_STATIC(0x6ff032u,6ff);}
}
B6feffb:L6feffb:{c.instructions+=1;NFSU2_TR(0x6feffb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff000ull));
TAIL_STATIC(0x721f99u,721);
}
XIT:NFSU2_TR_EXIT(0x6fe,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
